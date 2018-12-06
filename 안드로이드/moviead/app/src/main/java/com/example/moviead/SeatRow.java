package com.example.moviead;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Color;
import android.graphics.drawable.ColorDrawable;
import android.support.annotation.Nullable;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;

public class SeatRow extends LinearLayout {

    LinearLayout linearLayout;
    TextView textView;
    Button btn[]= new Button[10];

    StringBuilder sb = new StringBuilder();

    public SeatRow(Context context) {
        super(context);
        initView();
    }

    public SeatRow(Context context, @Nullable AttributeSet attrs) {
        super(context, attrs);
        initView();
        getAttrs(attrs);
    }

    public SeatRow(Context context, @Nullable AttributeSet attrs, int defStyleAttr) {
        super(context, attrs, defStyleAttr);
        initView();
        getAttrs(attrs);
        getAttrs(attrs, defStyleAttr);
    }

    private void initView() {
        String infService = Context.LAYOUT_INFLATER_SERVICE;
        LayoutInflater li = (LayoutInflater) getContext().getSystemService(infService);
        View v = li.inflate(R.layout.seat_row, this, false);
        addView(v);

        sb.setLength(10);

        linearLayout = (LinearLayout)findViewById(R.id.linearLayout1);
        textView = (TextView)findViewById(R.id.textView);

        for (int i = 0 ; i < linearLayout.getChildCount()-1 ; i++) {
            final int index = i;
            btn[i] = (Button) linearLayout.getChildAt(i+1);
            btn[i].setOnClickListener(new OnClickListener() {
                @Override
                public void onClick(View view) {
                    ColorDrawable cd = (ColorDrawable)view.getBackground();
                    if(cd.getColor()== Color.BLUE) view.setBackgroundColor(getResources().getColor(R.color.colorLighGray));
                    else view.setBackgroundColor(Color.BLUE);
                }
            });
        }
    }

    private void getAttrs(AttributeSet attrs) {
        TypedArray typedArray = getContext().obtainStyledAttributes(attrs, R.styleable.SeatRow);
        setTypeArray(typedArray);
    }

    private void getAttrs(AttributeSet attrs, int defStyle) {
        TypedArray typedArray = getContext().obtainStyledAttributes(attrs, R.styleable.MovieListView, defStyle, 0);
        setTypeArray(typedArray);
    }

    private void setTypeArray(TypedArray typedArray) {
        String row = typedArray.getString(R.styleable.SeatRow_row);
        textView.setText(row);
        typedArray.recycle();
    }

}