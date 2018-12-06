package com.example.moviead;

import android.content.Context;
import android.content.res.TypedArray;
import android.support.annotation.Nullable;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;

public class MovieListView extends LinearLayout {

    TextView textView1, textView2, textView3;
    ImageView imageView;

    public MovieListView(Context context) {
        super(context);
        initView();
    }

    public MovieListView(Context context, @Nullable AttributeSet attrs) {
        super(context, attrs);
        initView();
        getAttrs(attrs);
    }

    public MovieListView(Context context, @Nullable AttributeSet attrs, int defStyleAttr) {
        super(context, attrs, defStyleAttr);
        initView();
        getAttrs(attrs);
        getAttrs(attrs, defStyleAttr);
    }

    // 각 뷰 기본 화면
    private void initView() {
        String infService = Context.LAYOUT_INFLATER_SERVICE;
        LayoutInflater li = (LayoutInflater) getContext().getSystemService(infService);
        View v = li.inflate(R.layout.movie_list_view, this, false);
        addView(v);

        textView1 = (TextView)findViewById(R.id.textView);
        textView2 = (TextView)findViewById(R.id.textView2);
        textView3 = (TextView)findViewById(R.id.textView3);
        imageView = (ImageView)findViewById(R.id.imageView);
    }

    private void getAttrs(AttributeSet attrs) {
        TypedArray typedArray = getContext().obtainStyledAttributes(attrs, R.styleable.MovieListView);
        setTypeArray(typedArray);
    }

    private void getAttrs(AttributeSet attrs, int defStyle) {
        TypedArray typedArray = getContext().obtainStyledAttributes(attrs, R.styleable.MovieListView, defStyle, 0);
        setTypeArray(typedArray);
    }

    // 이미지, 제목, 기타 텍스트 등을 항목에 맞게 수정
    private void setTypeArray(TypedArray typedArray) {
        String imgUrl = typedArray.getString(R.styleable.MovieListView_img_url);

        new DownloadImageTask(imageView)
                .execute(imgUrl);

        String rank = typedArray.getString(R.styleable.MovieListView_rank);
        textView1.setText(rank);

        String title = typedArray.getString(R.styleable.MovieListView_movie_title);
        textView2.setText(title);

        String text = typedArray.getString(R.styleable.MovieListView_movie_text);
        textView3.setText(text);
        typedArray.recycle();
    }

    void setSymbol(int symbol_resID) {
        imageView.setImageResource(symbol_resID);
    }

    void setText(String text_string) {
        textView2.setText(text_string);
    }

}
