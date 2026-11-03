# Class Code Repository

Welcome to our shared class repository! This space is designed for everyone to store, organize, and track their code throughout the semester. Every student gets a dedicated personal folder named after their GitHub username.

---

## ⚠️ Golden Rules (Read Before Pushing!)

1. **Stay in your lane:** Only create, edit, or delete files inside your own `<your-github-username>/` folder. Never modify another classmate's directory or the root `README.md`.
2. **Always pull before you push:** Because everyone shares this repository, always run `git pull` before starting new work and right before pushing to avoid merge conflicts.
3. **Skip compiled binaries:** Do not upload compiled executables (`.exe`, `.out`, `.o`, `.class`). Only push your source code (`.c`, `.cpp`, `.py`, `.java`, etc.).

---

## Part 1: First-Time Setup

### Step 1: Accept the Repository Invitation
Before you can push code to this repository, you must accept the collaboration invite:
1. Check the email linked to your GitHub account, or go directly to `https://github.com/<OWNER_USERNAME>/<REPO_NAME>/invitations`.
2. Click **Accept invitation**.

### Step 2: Install Git on Your PC
* **Windows:**
  1. Download the official installer from [git-scm.com/downloads](https://git-scm.com/downloads).
  2. Run the installer and click **Next** through all prompts (default settings work best).
  3. Open **Git Bash** or **PowerShell** from your Start Menu.
* **Linux (Ubuntu / WSL):**
  ```bash
  sudo apt update && sudo apt install git -y
  ```
* **macOS:**
  ```bash
  xcode-select --install
  ```

Verify that Git is installed by running:
```bash
git --version
```

### Step 3: Configure Your Git Identity
Tell Git your name and email so your commits link to your GitHub profile (replace the quotes with your actual details):
```bash
git config --global user.name "Your Full Name"
git config --global user.email "your-github-email@example.com"
```

Verify your configuration saved properly:
```bash
git config --list
```

## Part 2: Cloning the Repo & Creating Your Folder

### Step 1: Clone the Repository
Open your terminal, navigate to the folder where you keep your coursework, and download the repository:
```bash
git clone <REPO_URL>
cd <REPO_NAME>
```

### Step 2: Create Your Personal User Folder
Create a folder named **exactly** after your GitHub username and move into it:
```bash
mkdir <your-github-username>
cd <your-github-username>
```

> **Important Note:** Git does not track completely empty folders! Your folder will only show up on GitHub after you create at least one file inside it and push it.

---

## Part 3: Daily Workflow (Creating & Publishing a File)

Follow these steps in order every time you write a new program or update an existing file:

### Step 1: Pull the Latest Class Updates
Always sync your local copy with GitHub first so you have the latest changes made by your classmates:
```bash
git pull origin main
```

### Step 2: Create or Edit Your File
Move into your personal folder and create your code file:
```bash
cd <your-github-username>
```
Create or edit your file using your preferred editor (e.g., `code hello.cpp` for VS Code, or `nano hello.cpp`), or create a quick starter file right from the terminal:
```bash
echo "// First program" > hello.cpp
```

### Step 3: Check File Status
See which files Git detects as new or modified (untracked/modified files appear in red):
```bash
git status
```

### Step 4: Stage Your File
Tell Git which files you want to include in your next commit snapshot:
* To stage a **specific file**:
  ```bash
  git add hello.cpp
  ```
* To stage **all new and modified files** inside your folder:
  ```bash
  git add .
  ```

*(Run `git status` again to verify your staged files appear in green).*

### Step 5: Commit Your Changes
Save a permanent snapshot of your staged files to your local Git history with a clear message:
```bash
git commit -m "Added hello.cpp in my personal folder"
```

### Step 6: Push Your Code to GitHub
Do one quick pull with `--rebase` in case a classmate pushed code while you were working, then upload your commit to GitHub:
```bash
git pull --rebase origin main
git push origin main
```

---

## 🛠️ Troubleshooting Common Issues

### 1. Error: `[rejected] main -> main (fetch first)` or `(non-fast-forward)`
* **Cause:** A classmate pushed their work to the repository after you last pulled.
* **Fix:** Grab their updates, stack your commit cleanly on top, and push again:
  ```bash
  git pull --rebase origin main
  git push origin main
  ```

### 2. Stuck inside a terminal text editor (Vim / Nano) during a pull
* **If using Nano** (shows `^G Get Help` at the bottom): Press `Ctrl + O`, hit `Enter` to save, then press `Ctrl + X` to exit.
* **If using Vim** (shows `~` lines on the left): Press `Esc`, type `:wq`, and press `Enter`.

### 3. Accidentally staged a compiled `.exe` or `.out` file
* **Fix:** Unstage the file before committing:
  ```bash
  git restore --staged <filename>
  ```

---

## 📋 Essential Git Commands Cheat Sheet

| Command | Action |
| :--- | :--- |
| `git clone <url>` | Downloads the repository from GitHub to your PC for the first time |
| `git status` | Lists all new, modified, or staged files in red/green |
| `git pull origin main` | Downloads and merges the latest class changes from GitHub |
| `git pull --rebase origin main` | Pulls latest class changes and stacks your local commits cleanly on top |
| `git add <file>` | Stages a specific file to prepare it for a commit |
| `git add .` | Stages all new and modified files in your current directory |
| `git restore --staged <file>` | Unstages a file if you ran `git add` by mistake |
| `git commit -m "message"` | Saves your staged changes locally with a descriptive message |
| `git push origin main` | Uploads your local committed changes to the GitHub repository |
| `git log --oneline` | Displays a clean, one-line history of recent commits |
