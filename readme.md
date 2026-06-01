# Chocolatine 🥐

Chocolatine is a DevOps-focused project from Epitech dedicated to mastering **CI/CD (Continuous Integration / Continuous Deployment)** using **GitHub Actions**. The goal is to automate code validation, styling compliance, and repository management for every push and pull request.

---

## 🚀 Workflows & Features

The GitHub Actions workflow is triggered on every `push` and `pull_request` to ensure the following checks:

1. **Coding Style Check:** Automates the Epitech coding style linter to detect any formatting errors or bad practices.
2. **Compilation & Testing:** Runs your project's `Makefile` (tests, compilation) to verify that the code compiles perfectly and passes all unit tests.
3. **Repository Mirroring:** Automatically syncs and pushes the validated code to the Epitech delivery repository (`my3.epitech.eu`).

---

## ⚙️ Setup & Configuration

To make this workflow operational, you need to configure your GitHub repository **Secrets**.

### 1. Required Secrets
Go to your repository **Settings > Secrets and variables > Actions** and add the following:

| Variables | Description |
| :--- | :--- |
| `GIT_SSH_PRIVATE_KEY` | Your private SSH key. (Which must be stored in SECRET part) |
| `EXECUTABLES` | The list of your executables. (ex. my_top, mysh, ...) |
| `MIRROR_SSH_URL` | The SSH url of the remote repository |
