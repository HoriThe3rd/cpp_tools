class progress_bar {
   public:
    progress_bar(const int width);
    void show(int percentage);
    void clear();

   private:
    int width;
    int position;
};