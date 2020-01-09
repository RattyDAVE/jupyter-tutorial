# C++ Learning

This repository is for C++ learning and testing.

At the beginning of the learning curve, being able to test out snipppets of C++ code in Jupyter Notebook is oftentimes so much better than having to create an entire new project in Xcode or something without even knowing the basics. The learning experience is smoother if we can learn C++ the way we (*I*) learned Python. So here's how I got C++ in my Jupyter Notebook. (macOS High Sierra, Version 10.13.6)

- Install `xeus-cling`. Follow the instructions on [xeus-cling GitHub page](https://github.com/QuantStack/xeus-cling). The installation uses `conda`. Read the page for more details of `xeus-cling`.
- `source activate cling` in terminal for activation.
- Use `jupyter kernelspec list` to obtain a list of jupyter environments/kernels (make sure `xeus-cling` is successfully installed).
- *Use `jupyter kernelspec uninstall name_of_kernel` to uninstall the kernel(s) we don't want.
- `cd` back to your normal directory (in my case it would be `cd /Users/Edward/`). When did right, the prompt in terminal reads like this: `~ your_user_name$`, or, in my case, `~ Edward$`.
- Fire up Jupyter Notebook (`~ Edward$ jupyter notebook`).

Of course, this is not to say that we should, or even _could_ stay in Jupyter Notebook for the entirety of our learning curve. I just think that it would be better if beginners start out in Jupyter Notebook so that they're not immediately thrown into projects. My experience is that after some fimiliarization in the notebook, things are easier when I move on to Xcode.

Sidenotes:
- Don't open too many notebooks at once. Jupyter Notebook has a limit of simultaneously running notebooks.
- Jupyter Notebook doesn't do the best job in formatting your code. Text editors like Sublime Text or IDEs like Xcode do a much better job.
- Jupyter Notebook also isn't the best choice if the code contains things like taking user inputs. Better run that elsewhere. Like mentioned before, Jupyter Notebook is only good for initial explorations (for people coming from the Python/pandas/Jupyter land). Also, the code in the notebooks can be copied into scripts or projects.
- You [can't build/run a lonely `.cpp` file using Xcode](https://stackoverflow.com/questions/33523814/how-to-run-a-cpp-file-by-xcode-without-adding-it-to-a-project). Xcode only runs entire projects. To run a single script, use terminal to compile. Sample projects/scripts can be found in [this folder](https://github.com/Yuanqi-Hong/cpp/tree/master/Xcode_projects).
- Sometimes auto-completing with Tab causes the kernel to die.
