# YouTube Video Downloader in C++

A simple C++ program** that allows you to download YouTube videos in the best available quality and automatically merge audio & video into an MP4 file. 
The downloaded videos are saved in the **Downloads folder** on macOS.

## Features
- Downloads YouTube videos in the highest quality.
- Automatically merges video and audio into a single MP4 file.
- Saves the final video in the `~/Downloads/` folder.
- Uses `yt-dlp` and `FFmpeg` for efficient downloading and merging.

---

##  Installation Guide (macOS)

### **Step 1: Install Homebrew (if not already installed)**
Homebrew is a package manager for macOS that helps install **yt-dlp** and **FFmpeg**.

Open **Terminal** on your Mac and run:

```sh
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

To verify the installation, run:
```sh
brew --version
```

### **Step 2: Install yt-dlp**
yt-dlp is a powerful command-line tool to download videos from YouTube and other sites.

Run:
```sh
brew install yt-dlp
```

Verify installation:
```sh
yt-dlp --version
```

### **Step 3: Install FFmpeg**
FFmpeg is required to merge video and audio properly.

Run:
```sh
brew install ffmpeg
```

Verify installation:
```sh
ffmpeg -version
```

### **Step 4: Run the C++ code**
When prompted, enter a valid YouTube video URL, for example:

Enter the YouTube video URL: https://www.youtube.com/watch?v=SomeVideoURL

The video will start downloading and automatically merge into an MP4 file saved in your Downloads folder.










