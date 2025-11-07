<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sarvesh | Full Stack Developer</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
        }

        :root {
            --primary: #8a2be2;
            --secondary: #ff6b6b;
            --accent: #00ffff;
            --moonlight: #e6f7ff;
            --night: #0a0a2a;
            --dark: #050525;
            --text: #e6e6ff;
        }

        body {
            background: linear-gradient(135deg, var(--dark) 0%, var(--night) 50%, #1a1a4a 100%);
            color: var(--text);
            line-height: 1.6;
            overflow-x: hidden;
            position: relative;
            min-height: 100vh;
        }

        /* Moonlight Animated Background */
        .moonlight-background {
            position: fixed;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            z-index: -2;
            overflow: hidden;
        }

        .moon {
            position: absolute;
            top: 10%;
            right: 15%;
            width: 120px;
            height: 120px;
            background: radial-gradient(circle, var(--moonlight) 0%, rgba(230, 247, 255, 0.3) 70%);
            border-radius: 50%;
            box-shadow: 0 0 80px var(--moonlight), 0 0 120px rgba(230, 247, 255, 0.5);
            animation: moonGlow 4s ease-in-out infinite alternate;
        }

        @keyframes moonGlow {
            0% { opacity: 0.7; transform: scale(1); }
            100% { opacity: 1; transform: scale(1.05); }
        }

        .stars {
            position: absolute;
            width: 100%;
            height: 100%;
        }

        .star {
            position: absolute;
            background: white;
            border-radius: 50%;
            animation: twinkle 3s infinite;
        }

        @keyframes twinkle {
            0%, 100% { opacity: 0.3; transform: scale(1); }
            50% { opacity: 1; transform: scale(1.2); }
        }

        .floating-sakura {
            position: absolute;
            color: #ffb6c1;
            font-size: 24px;
            animation: float 15s linear infinite;
            opacity: 0.7;
        }

        @keyframes float {
            0% { transform: translateY(100vh) rotate(0deg); opacity: 0; }
            10% { opacity: 0.7; }
            90% { opacity: 0.7; }
            100% { transform: translateY(-100px) rotate(360deg); opacity: 0; }
        }

        .overlay {
            position: fixed;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            background: linear-gradient(135deg, rgba(5, 5, 37, 0.9) 0%, rgba(10, 10, 42, 0.85) 50%, rgba(26, 26, 74, 0.8) 100%);
            z-index: -1;
        }

        .container {
            max-width: 1200px;
            margin: 0 auto;
            padding: 0 20px;
            position: relative;
            z-index: 1;
        }

        /* Header Styles */
        header {
            padding: 60px 0 30px;
            text-align: center;
            position: relative;
            overflow: hidden;
            transition: transform 0.3s ease;
        }

        header:hover {
            transform: translateY(-5px);
        }

        .header-bg {
            position: absolute;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            background: radial-gradient(circle at center, rgba(138, 43, 226, 0.2) 0%, rgba(10, 10, 42, 0) 70%);
            z-index: -1;
            transition: all 0.5s ease;
        }

        header:hover .header-bg {
            background: radial-gradient(circle at center, rgba(138, 43, 226, 0.3) 0%, rgba(10, 10, 42, 0) 70%);
            transform: scale(1.05);
        }

        .profile-container {
            position: relative;
            display: inline-block;
            margin-bottom: 20px;
        }

        .profile-img {
            width: 180px;
            height: 180px;
            border-radius: 50%;
            border: 4px solid var(--primary);
            box-shadow: 0 0 30px var(--primary), 0 0 60px rgba(138, 43, 226, 0.3);
            overflow: hidden;
            position: relative;
            background: var(--dark);
            transition: all 0.5s cubic-bezier(0.175, 0.885, 0.32, 1.275);
            cursor: pointer;
        }

        .profile-img:hover {
            transform: scale(1.1) rotate(5deg);
            box-shadow: 0 0 50px var(--accent), 0 0 80px var(--primary);
            border-color: var(--accent);
        }

        .profile-img img {
            width: 100%;
            height: 100%;
            object-fit: cover;
            transition: transform 0.5s ease;
            filter: brightness(0.9) contrast(1.1);
        }

        .profile-img:hover img {
            transform: scale(1.2);
            filter: brightness(1) contrast(1.2);
        }

        .profile-img::after {
            content: '';
            position: absolute;
            top: -5px;
            left: -5px;
            right: -5px;
            bottom: -5px;
            border-radius: 50%;
            background: linear-gradient(45deg, var(--primary), var(--accent), var(--secondary));
            z-index: -1;
            animation: rotate 3s linear infinite;
            transition: all 0.5s ease;
        }

        .profile-img:hover::after {
            animation: rotate 1s linear infinite;
            filter: hue-rotate(90deg);
        }

        @keyframes rotate {
            0% { transform: rotate(0deg); }
            100% { transform: rotate(360deg); }
        }

        h1 {
            font-size: 3rem;
            margin-bottom: 10px;
            background: linear-gradient(to right, var(--primary), var(--accent), var(--moonlight));
            -webkit-background-clip: text;
            background-clip: text;
            color: transparent;
            text-shadow: 0 0 20px rgba(138, 43, 226, 0.5);
            transition: all 0.3s ease;
            position: relative;
        }

        h1::after {
            content: '⚔️';
            position: absolute;
            right: -40px;
            top: 50%;
            transform: translateY(-50%);
            font-size: 2rem;
            opacity: 0;
            transition: opacity 0.3s ease;
        }

        header:hover h1::after {
            opacity: 1;
        }

        header:hover h1 {
            text-shadow: 0 0 30px rgba(138, 43, 226, 0.7);
            letter-spacing: 1px;
        }

        h2 {
            font-size: 1.8rem;
            margin-bottom: 20px;
            color: var(--accent);
            transition: all 0.3s ease;
            text-shadow: 0 0 10px rgba(0, 255, 255, 0.3);
        }

        header:hover h2 {
            color: var(--moonlight);
            transform: translateY(-3px);
            text-shadow: 0 0 15px rgba(0, 255, 255, 0.5);
        }

        .typing-container {
            margin: 20px 0;
            min-height: 60px;
        }

        .typing-text {
            font-size: 1.5rem;
            font-weight: 300;
            display: inline-block;
            border-right: 3px solid var(--accent);
            padding-right: 5px;
            animation: blink 1s infinite;
            transition: all 0.3s ease;
            text-shadow: 0 0 5px rgba(0, 255, 255, 0.3);
        }

        header:hover .typing-text {
            color: var(--moonlight);
        }

        @keyframes blink {
            0%, 100% { border-color: var(--accent); }
            50% { border-color: transparent; }
        }

        /* Section Styles */
        section {
            padding: 50px 30px;
            border-bottom: 1px solid rgba(138, 43, 226, 0.3);
            background: rgba(5, 5, 37, 0.8);
            backdrop-filter: blur(15px);
            margin: 25px 0;
            border-radius: 20px;
            transition: all 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);
            position: relative;
            overflow: hidden;
            border: 1px solid rgba(138, 43, 226, 0.1);
        }

        section::before {
            content: '';
            position: absolute;
            top: 0;
            left: -100%;
            width: 100%;
            height: 100%;
            background: linear-gradient(90deg, transparent, rgba(138, 43, 226, 0.1), transparent);
            transition: left 0.7s ease;
        }

        section:hover {
            background: rgba(5, 5, 37, 0.95);
            box-shadow: 0 20px 50px rgba(0, 0, 0, 0.5),
                        inset 0 0 0 1px rgba(138, 43, 226, 0.2);
            transform: translateY(-12px) scale(1.02);
            border-color: var(--primary);
        }

        section:hover::before {
            left: 100%;
        }

        h3 {
            font-size: 2.2rem;
            margin-bottom: 35px;
            color: var(--secondary);
            text-align: center;
            position: relative;
            transition: all 0.3s ease;
            text-shadow: 0 0 10px rgba(255, 107, 107, 0.3);
        }

        section:hover h3 {
            transform: scale(1.08);
            color: var(--accent);
            text-shadow: 0 0 15px rgba(0, 255, 255, 0.5);
        }

        h3::after {
            content: '';
            position: absolute;
            bottom: -12px;
            left: 50%;
            transform: translateX(-50%);
            width: 120px;
            height: 4px;
            background: linear-gradient(to right, var(--primary), var(--accent));
            transition: all 0.3s ease;
            border-radius: 2px;
        }

        section:hover h3::after {
            width: 180px;
            background: linear-gradient(to right, var(--accent), var(--secondary));
            box-shadow: 0 0 10px rgba(0, 255, 255, 0.5);
        }

        .about-content {
            display: flex;
            flex-wrap: wrap;
            gap: 40px;
            align-items: center;
        }

        .about-text {
            flex: 1;
            min-width: 300px;
        }

        .about-text p {
            margin-bottom: 18px;
            font-size: 1.15rem;
            display: flex;
            align-items: center;
            transition: all 0.3s ease;
            padding: 12px 15px;
            border-radius: 10px;
            position: relative;
            overflow: hidden;
            background: rgba(138, 43, 226, 0.05);
        }

        .about-text p::before {
            content: '';
            position: absolute;
            top: 0;
            left: -100%;
            width: 100%;
            height: 100%;
            background: linear-gradient(90deg, transparent, rgba(138, 43, 226, 0.15), transparent);
            transition: left 0.5s ease;
        }

        .about-text p:hover {
            transform: translateX(12px);
            background: rgba(138, 43, 226, 0.1);
            box-shadow: 0 5px 15px rgba(0, 0, 0, 0.2);
        }

        .about-text p:hover::before {
            left: 100%;
        }

        .about-text p i {
            margin-right: 12px;
            color: var(--accent);
            width: 28px;
            transition: all 0.3s ease;
            font-size: 1.2rem;
        }

        .about-text p:hover i {
            transform: scale(1.4) rotate(15deg);
            color: var(--secondary);
            text-shadow: 0 0 10px rgba(255, 107, 107, 0.5);
        }

        .yorichi-container {
            flex: 1;
            min-width: 300px;
            text-align: center;
            position: relative;
            transition: all 0.5s ease;
        }

        .yorichi-container:hover {
            transform: scale(1.04);
        }

        .yorichi-img {
            max-width: 100%;
            border-radius: 15px;
            box-shadow: 0 15px 40px rgba(0, 0, 0, 0.6),
                        0 0 0 1px rgba(138, 43, 226, 0.3);
            transition: all 0.5s ease;
            border: 2px solid var(--primary);
            filter: brightness(0.9) contrast(1.1);
            position: relative;
        }

        .yorichi-container:hover .yorichi-img {
            transform: scale(1.06) perspective(1000px) rotateY(5deg);
            box-shadow: 0 25px 60px rgba(138, 43, 226, 0.4),
                        0 0 30px rgba(0, 255, 255, 0.3);
            border-color: var(--accent);
            filter: brightness(1.1) contrast(1.2);
        }

        .yorichi-container::before {
            content: '';
            position: absolute;
            top: -15px;
            left: -15px;
            right: -15px;
            bottom: -15px;
            background: linear-gradient(45deg, var(--primary), var(--accent), var(--secondary));
            border-radius: 20px;
            z-index: -1;
            opacity: 0.7;
            filter: blur(15px);
            transition: all 0.5s ease;
        }

        .yorichi-container:hover::before {
            opacity: 1;
            filter: blur(20px) hue-rotate(90deg);
            transform: scale(1.08);
        }

        .tech-icons {
            display: flex;
            flex-wrap: wrap;
            justify-content: center;
            gap: 25px;
            margin-top: 35px;
        }

        .tech-icon {
            width: 80px;
            height: 80px;
            display: flex;
            align-items: center;
            justify-content: center;
            background: rgba(255, 255, 255, 0.08);
            border-radius: 15px;
            font-size: 2.2rem;
            transition: all 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);
            position: relative;
            overflow: hidden;
            cursor: pointer;
            border: 1px solid rgba(138, 43, 226, 0.2);
        }

        .tech-icon::before {
            content: '';
            position: absolute;
            top: 0;
            left: -100%;
            width: 100%;
            height: 100%;
            background: linear-gradient(90deg, transparent, rgba(255, 255, 255, 0.2), transparent);
            transition: left 0.5s;
        }

        .tech-icon:hover {
            transform: translateY(-12px) scale(1.25);
            box-shadow: 0 20px 35px rgba(0, 0, 0, 0.4);
            background: rgba(138, 43, 226, 0.3);
            color: var(--accent);
            border-color: var(--primary);
        }

        .tech-icon:hover::before {
            left: 100%;
        }

        .tech-icon:nth-child(1):hover { background: rgba(227, 76, 38, 0.4); }
        .tech-icon:nth-child(2):hover { background: rgba(38, 77, 228, 0.4); }
        .tech-icon:nth-child(3):hover { background: rgba(247, 223, 30, 0.4); }
        .tech-icon:nth-child(4):hover { background: rgba(97, 218, 251, 0.4); }
        .tech-icon:nth-child(5):hover { background: rgba(131, 205, 41, 0.4); }
        .tech-icon:nth-child(6):hover { background: rgba(53, 114, 165, 0.4); }
        .tech-icon:nth-child(7):hover { background: rgba(36, 41, 46, 0.4); }
        .tech-icon:nth-child(8):hover { background: rgba(13, 183, 235, 0.4); }

        .projects-grid {
            display: grid;
            grid-template-columns: repeat(auto-fill, minmax(320px, 1fr));
            gap: 35px;
            margin-top: 35px;
        }

        .project-card {
            background: rgba(255, 255, 255, 0.08);
            border-radius: 15px;
            overflow: hidden;
            transition: all 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);
            border: 1px solid rgba(138, 43, 226, 0.3);
            position: relative;
            cursor: pointer;
            backdrop-filter: blur(10px);
        }

        .project-card::before {
            content: '';
            position: absolute;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            background: linear-gradient(135deg, rgba(138, 43, 226, 0.15) 0%, rgba(0, 255, 255, 0.15) 100%);
            opacity: 0;
            transition: opacity 0.3s ease;
        }

        .project-card:hover {
            transform: translateY(-18px) scale(1.04);
            box-shadow: 0 25px 50px rgba(0, 0, 0, 0.6),
                        0 0 0 1px var(--primary);
            border-color: var(--primary);
        }

        .project-card:hover::before {
            opacity: 1;
        }

        .project-header {
            padding: 25px;
            background: rgba(138, 43, 226, 0.15);
            border-bottom: 1px solid rgba(138, 43, 226, 0.3);
            transition: all 0.3s ease;
            position: relative;
        }

        .project-card:hover .project-header {
            background: rgba(138, 43, 226, 0.25);
        }

        .project-title {
            font-size: 1.4rem;
            margin-bottom: 8px;
            color: var(--accent);
            transition: all 0.3s ease;
            text-shadow: 0 0 5px rgba(0, 255, 255, 0.3);
        }

        .project-card:hover .project-title {
            color: var(--secondary);
            transform: translateX(8px);
            text-shadow: 0 0 10px rgba(255, 107, 107, 0.4);
        }

        .project-description {
            font-size: 0.95rem;
            color: rgba(230, 230, 255, 0.9);
            transition: all 0.3s ease;
            line-height: 1.5;
        }

        .project-card:hover .project-description {
            color: var(--text);
            transform: translateX(8px);
        }

        .project-tech {
            padding: 20px 25px;
            display: flex;
            flex-wrap: wrap;
            gap: 12px;
        }

        .tech-tag {
            background: rgba(138, 43, 226, 0.25);
            padding: 6px 14px;
            border-radius: 20px;
            font-size: 0.85rem;
            color: var(--accent);
            transition: all 0.3s ease;
            border: 1px solid rgba(138, 43, 226, 0.3);
            text-shadow: 0 0 5px rgba(0, 255, 255, 0.3);
        }

        .project-card:hover .tech-tag {
            background: rgba(138, 43, 226, 0.4);
            transform: translateY(-5px);
            box-shadow: 0 5px 15px rgba(0, 0, 0, 0.3);
            border-color: var(--accent);
        }

        .stats-container {
            display: flex;
            flex-wrap: wrap;
            gap: 25px;
            justify-content: center;
            margin-top: 35px;
        }

        .stat-card {
            background: rgba(255, 255, 255, 0.08);
            border-radius: 15px;
            padding: 25px;
            min-width: 260px;
            text-align: center;
            border: 1px solid rgba(138, 43, 226, 0.3);
            transition: all 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);
            position: relative;
            overflow: hidden;
            cursor: pointer;
            backdrop-filter: blur(10px);
        }

        .stat-card::before {
            content: '';
            position: absolute;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            background: linear-gradient(135deg, rgba(138, 43, 226, 0.15) 0%, rgba(255, 107, 107, 0.15) 100%);
            opacity: 0;
            transition: opacity 0.3s ease;
        }

        .stat-card:hover {
            transform: translateY(-12px) scale(1.06);
            box-shadow: 0 20px 40px rgba(0, 0, 0, 0.4),
                        0 0 0 1px var(--primary);
            border-color: var(--primary);
        }

        .stat-card:hover::before {
            opacity: 1;
        }

        .stat-value {
            font-size: 2.8rem;
            font-weight: bold;
            color: var(--secondary);
            margin: 15px 0;
            transition: all 0.3s ease;
            text-shadow: 0 0 10px rgba(255, 107, 107, 0.4);
        }

        .stat-card:hover .stat-value {
            color: var(--accent);
            transform: scale(1.25);
            text-shadow: 0 0 15px rgba(0, 255, 255, 0.5);
        }

        .social-links {
            display: flex;
            justify-content: center;
            gap: 25px;
            margin-top: 35px;
        }

        .social-link {
            display: inline-flex;
            align-items: center;
            justify-content: center;
            width: 60px;
            height: 60px;
            border-radius: 50%;
            background: rgba(138, 43, 226, 0.25);
            color: var(--text);
            font-size: 1.6rem;
            transition: all 0.4s cubic-bezier(0.175, 0.885, 0.32, 1.275);
            position: relative;
            overflow: hidden;
            border: 1px solid rgba(138, 43, 226, 0.3);
        }

        .social-link::before {
            content: '';
            position: absolute;
            top: 0;
            left: -100%;
            width: 100%;
            height: 100%;
            background: linear-gradient(90deg, transparent, rgba(255, 255, 255, 0.2), transparent);
            transition: left 0.5s;
        }

        .social-link:hover {
            background: var(--primary);
            transform: translateY(-12px) scale(1.25);
            box-shadow: 0 15px 30px rgba(138, 43, 226, 0.5),
                        0 0 20px rgba(0, 255, 255, 0.3);
            color: white;
            border-color: var(--accent);
        }

        .social-link:hover::before {
            left: 100%;
        }

        footer {
            padding: 50px 0;
            text-align: center;
            color: rgba(230, 230, 255, 0.8);
            background: rgba(5, 5, 37, 0.8);
            backdrop-filter: blur(15px);
            border-radius: 20px;
            margin-top: 30px;
            transition: all 0.3s ease;
            border: 1px solid rgba(138, 43, 226, 0.2);
        }

        footer:hover {
            background: rgba(5, 5, 37, 0.95);
            transform: translateY(-8px);
            box-shadow: 0 15px 40px rgba(0, 0, 0, 0.4);
            border-color: var(--primary);
        }

        .quote {
            font-style: italic;
            font-size: 1.3rem;
            margin-bottom: 25px;
            color: var(--accent);
            transition: all 0.3s ease;
            text-shadow: 0 0 10px rgba(0, 255, 255, 0.3);
        }

        footer:hover .quote {
            color: var(--secondary);
            transform: scale(1.08);
            text-shadow: 0 0 15px rgba(255, 107, 107, 0.4);
        }

        /* Responsive */
        @media (max-width: 768px) {
            h1 { font-size: 2.4rem; }
            h2 { font-size: 1.5rem; }
            .typing-text { font-size: 1.2rem; }
            .profile-img { width: 160px; height: 160px; }
            .moon { width: 80px; height: 80px; right: 10%; }
            section { padding: 40px 20px; }
        }

        @media (max-width: 480px) {
            h1 { font-size: 2rem; }
            h2 { font-size: 1.3rem; }
            .profile-img { width: 140px; height: 140px; }
            .tech-icon { width: 65px; height: 65px; font-size: 1.8rem; }
        }
    </style>
</head>
<body>
    <!-- Moonlight Animated Background -->
    <div class="moonlight-background">
        <div class="moon"></div>
        <div class="stars" id="stars"></div>
        <div class="sakura-container" id="sakura"></div>
    </div>
    <div class="overlay"></div>

    <div class="container">
        <header>
            <div class="header-bg"></div>
            <div class="profile-container">
                <div class="profile-img">
                    <img src="https://avatars.githubusercontent.com/u/12345678?v=4" alt="Sarvesh Profile">
                </div>
            </div>
            <h1>Hey, I'm Sarvesh! 👋</h1>
            <h2>✨ The Coolest Coder | 🚀 Full Stack Developer | 💡 Open Source Enthusiast</h2>
            <div class="typing-container">
                <div class="typing-text" id="typing-text"></div>
            </div>
        </header>

        <section id="about">
            <h3>🔥 About Me</h3>
            <div class="about-content">
                <div class="about-text">
                    <p><i class="fas fa-brain"></i> Obsessed with solving real-world problems with tech</p>
                    <p><i class="fas fa-palette"></i> UI wizard by day, API ninja by night</p>
                    <p><i class="fas fa-headphones"></i> Vibing to music while writing logic that <i>almost</i> never breaks</p>
                    <p><i class="fas fa-laptop-code"></i> Currently diving deep into React, Node.js, and AI tools</p>
                    <p><i class="fas fa-fire"></i> Demon Slayer fan and inspired by Yoriichi's dedication and skills</p>
                </div>
                <div class="yorichi-container">
                    <img src="https://i.pinimg.com/736x/3b/0b/3a/3b0b3a8b6e5e5e5e5e5e5e5e5e5e5e5e.jpg" alt="Yoriichi from Demon Slayer" class="yorichi-img">
                </div>
            </div>
        </section>

        <section id="tech">
            <h3>💻 Tech Stack</h3>
            <div class="tech-icons">
                <div class="tech-icon"><i class="fab fa-html5"></i></div>
                <div class="tech-icon"><i class="fab fa-css3-alt"></i></div>
                <div class="tech-icon"><i class="fab fa-js-square"></i></div>
                <div class="tech-icon"><i class="fab fa-react"></i></div>
                <div class="tech-icon"><i class="fab fa-node-js"></i></div>
                <div class="tech-icon"><i class="fab fa-python"></i></div>
                <div class="tech-icon"><i class="fab fa-github"></i></div>
                <div class="tech-icon"><i class="fab fa-docker"></i></div>
            </div>
        </section>

        <section id="projects">
            <h3>🧩 Featured Projects</h3>
            <div class="projects-grid">
                <div class="project-card">
                    <div class="project-header">
                        <div class="project-title">🚗 Driver Drowsiness Detection</div>
                        <div class="project-description">Real-time computer vision system to detect sleepy drivers using facial recognition</div>
                    </div>
                    <div class="project-tech">
                        <span class="tech-tag">Python</span>
                        <span class="tech-tag">OpenCV</span>
                        <span class="tech-tag">Dlib</span>
                        <span class="tech-tag">ML</span>
                    </div>
                </div>
                <div class="project-card">
                    <div class="project-header">
                        <div class="project-title">🅿️ Smart Parking System</div>
                        <div class="project-description">AI-powered system that detects empty parking slots using computer vision</div>
                    </div>
                    <div class="project-tech">
                        <span class="tech-tag">OpenCV</span>
                        <span class="tech-tag">YOLO</span>
                        <span class="tech-tag">Python</span>
                        <span class="tech-tag">Flask</span>
                    </div>
                </div>
                <div class="project-card">
                    <div class="project-header">
                        <div class="project-title">🩺 Telehealth Analyzer</div>
                        <div class="project-description">AI-enhanced virtual health consultation dashboard with predictive analytics</div>
                    </div>
                    <div class="project-tech">
                        <span class="tech-tag">Streamlit</span>
                        <span class="tech-tag">Pandas</span>
                        <span class="tech-tag">ML</span>
                        <span class="tech-tag">Plotly</span>
                    </div>
                </div>
            </div>
        </section>

        <section id="stats">
            <h3>📈 GitHub Stats</h3>
            <div class="stats-container">
                <div class="stat-card">
                    <div class="stat-label">Repositories</div>
                    <div class="stat-value">42</div>
                    <div class="stat-desc">Public & Private</div>
                </div>
                <div class="stat-card">
                    <div class="stat-label">Contributions</div>
                    <div class="stat-value">1.2k</div>
                    <div class="stat-desc">Last Year</div>
                </div>
                <div class="stat-card">
                    <div class="stat-label">Streak</div>
                    <div class="stat-value">156</div>
                    <div class="stat-desc">Days</div>
                </div>
            </div>
        </section>

        <section id="connect">
            <h3>📫 Connect with Me</h3>
            <div class="social-links">
                <a href="#" class="social-link"><i class="fab fa-linkedin-in"></i></a>
                <a href="#" class="social-link"><i class="fab fa-github"></i></a>
                <a href="#" class="social-link"><i class="fab fa-twitter"></i></a>
                <a href="#" class="social-link"><i class="fas fa-envelope"></i></a>
            </div>
        </section>

        <footer>
            <p class="quote">"Code like nobody's watching, deploy like everyone's waiting."</p>
            <p>Made with ❤️ and a lot of ☕ | Inspired by Yoriichi's Moonlight</p>
        </footer>
    </div>

    <script>
        // Create stars
        function createStars() {
            const starsContainer = document.getElementById('stars');
            for (let i = 0; i < 150; i++) {
                const star = document.createElement('div');
                star.className = 'star';
                star.style.left = `${Math.random() * 100}%`;
                star.style.top = `${Math.random() * 100}%`;
                star.style.width = `${Math.random() * 3 + 1}px`;
                star.style.height = star.style.width;
                star.style.animationDelay = `${Math.random() * 3}s`;
                starsContainer.appendChild(star);
            }
        }

        // Create sakura petals
        function createSakura() {
            const sakuraContainer = document.getElementById('sakura');
            const petals = ['❀', '✿', '🌸', '💮', '🏵️'];
            
            for (let i = 0; i < 25; i++) {
                const petal = document.createElement('div');
                petal.className = 'floating-sakura';
                petal.textContent = petals[Math.floor(Math.random() * petals.length)];
                petal.style.left = `${Math.random() * 100}%`;
                petal.style.animationDelay = `${Math.random() * 15}s`;
                petal.style.fontSize = `${Math.random() * 20 + 16}px`;
                sakuraContainer.appendChild(petal);
            }
        }

        // Typing effect
        const texts = [
            "Building cool stuff with code 🌙",
            "Lover of clean UI + chaotic logic ⚡",
            "Always learning something new 🔥",
            "Inspired by Yoriichi's dedication ⚔️"
        ];
        let textIndex = 0;
        let charIndex = 0;
        const typingText = document.getElementById('typing-text');
        
        function typeText() {
            if (charIndex < texts[textIndex].length) {
                typingText.textContent += texts[textIndex].charAt(charIndex);
                charIndex++;
                setTimeout(typeText, 100);
            } else {
                setTimeout(eraseText, 2500);
            }
        }
        
        function eraseText() {
            if (charIndex > 0) {
                typingText.textContent = texts[textIndex].substring(0, charIndex - 1);
                charIndex--;
                setTimeout(eraseText, 50);
            } else {
                textIndex = (textIndex + 1) % texts.length;
                setTimeout(typeText, 500);
            }
        }

        // Initialize
        document.addEventListener('DOMContentLoaded', function() {
            createStars();
            createSakura();
            setTimeout(typeText, 1000);
        });
    </script>
</body>
</html>
