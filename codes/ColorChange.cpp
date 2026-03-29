void ColorChange___ctor(ColorChange_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ColorChange__Awake(ColorChange_o *this, const MethodInfo *method)
{
  this->fields.mIsChangeColor = 0;
  this->fields.mIsSkip = 0;
}


UnityEngine_Color_o ColorChange__GetColor(ColorChange_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = this->fields.mNowColor.fields.r;
  result.fields.g = this->fields.mNowColor.fields.g;
  result.fields.b = this->fields.mNowColor.fields.b;
  result.fields.a = this->fields.mNowColor.fields.a;
  return result;
}


void ColorChange__Pause(ColorChange_o *this, const MethodInfo *method)
{
  if ( !this->fields.mPause )
  {
    this->fields.mPause = 1;
    this->fields.mPauseStartTime = UnityEngine_Time__get_time(0);
  }
}


UnityEngine_Color_o ColorChange__PingPong(
        ColorChange_o *this,
        UnityEngine_Color_o from,
        UnityEngine_Color_o to,
        float time,
        int32_t easingType,
        const MethodInfo *method)
{
  float r; // s19
  float g; // s18
  float a; // s16
  float b; // s17
  float v10; // [xsp+0h] [xbp+0h]

  r = from.fields.r;
  g = from.fields.g;
  a = from.fields.a;
  b = from.fields.b;
  this->fields.mIsSkip = 0;
  if ( time < 0.5 )
  {
    v10 = time + time;
  }
  else
  {
    v10 = (float)(time + -0.5) + (float)(time + -0.5);
    from = to;
    to.fields.r = r;
    to.fields.g = g;
    to.fields.b = b;
    to.fields.a = a;
  }
  return Easing__Func_49776096(from, to, v10, easingType, 0);
}


void ColorChange__Play(
        ColorChange_o *this,
        UnityEngine_Color_o from,
        UnityEngine_Color_o to,
        float sec,
        int32_t style,
        int32_t count,
        System_Action_o *procAct,
        System_Action_o *endAct,
        float delay,
        int32_t easingType,
        const MethodInfo *method)
{
  ColorChange_o *v11; // x24
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Action_o *klass; // x0

  v11 = this;
  this->fields.mFromColor = from;
  this->fields.mIsChangeColor = 1;
  this->fields.mToColor = to;
  a = from.fields.a;
  b = from.fields.b;
  g = from.fields.g;
  r = from.fields.r;
  this->fields.mStartTime = UnityEngine_Time__get_time(0);
  v11->fields.mTime = sec;
  v11->fields.mStyle = style;
  v11->fields.mCount = count;
  v11->fields.mNowCount = 0;
  v11->fields.mEndAct = endAct;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v11->fields.mEndAct, (int32_t)endAct, v21, v22, v23, v24, v25, v26);
  v11->fields.mProcessAct = procAct;
  v11 = (ColorChange_o *)((char *)v11 + 112);
  *(float *)&v11[-1].fields.mNowCount = r;
  v11[-1].fields.mDelay = g;
  *(&v11[-1].fields.mDelay + 1) = b;
  *(float *)&v11[-1].fields.mProcessAct = a;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v11, (int32_t)procAct, v27, v28, v29, v30, v31, v32);
  klass = (System_Action_o *)v11->klass;
  LODWORD(v11->fields.m_CancellationTokenSource) = easingType;
  *(float *)&v11[-1].fields.mEasingType = delay;
  BYTE4(v11->fields.m_CancellationTokenSource) = 0;
  ActionExtensions__Call(klass, 0);
}


void ColorChange__Resume(ColorChange_o *this, const MethodInfo *method)
{
  if ( this->fields.mPause )
  {
    this->fields.mPause = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0) - this->fields.mPauseStartTime);
  }
}


void ColorChange__SetColor(ColorChange_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  this->fields.mNowColor = color;
}


void ColorChange__SetPause(ColorChange_o *this, bool isPause, const MethodInfo *method)
{
  if ( isPause )
  {
    if ( !this->fields.mPause )
    {
      this->fields.mPause = 1;
      this->fields.mPauseStartTime = UnityEngine_Time__get_time(0);
    }
  }
  else if ( this->fields.mPause )
  {
    this->fields.mPause = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0) - this->fields.mPauseStartTime);
  }
}


void ColorChange__Skip(ColorChange_o *this, const MethodInfo *method)
{
  this->fields.mIsSkip = 1;
}


void ColorChange__Stop(ColorChange_o *this, const MethodInfo *method)
{
  this->fields.mIsChangeColor = 0;
}


void ColorChange__Update(ColorChange_o *this, const MethodInfo *method)
{
  float mStartTime; // s8
  float mDelay; // s9
  const MethodInfo *v5; // x2
  float v6; // s6
  float v7; // s17
  float v8; // s7
  int32_t mEasingType; // w1
  float time; // s8
  struct System_Action_o *mProcessAct; // x8
  int32_t mCount; // w8
  int32_t v19; // w9
  struct System_Action_o *mEndAct; // x8
  float v21; // s0
  int32_t mStyle; // w8
  struct UnityEngine_Color_o mToColor; // q0
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o v28; // 0:kr00_16.16
  UnityEngine_Color_o v29; // 0:kr10_16.16
  UnityEngine_Color_o mFromColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  if ( this->fields.mIsChangeColor && !this->fields.mPause )
  {
    if ( this->fields.mIsSkip
      || (mStartTime = this->fields.mStartTime,
          mDelay = this->fields.mDelay,
          (float)(mStartTime + mDelay) <= UnityEngine_Time__get_time(0)) )
    {
      v6 = (float)(UnityEngine_Time__get_time(0) - (float)(this->fields.mStartTime + this->fields.mDelay))
         / this->fields.mTime;
      v7 = 0.0;
      v8 = fminf(v6, 1.0);
      mFromColor = this->fields.mFromColor;
      v31.fields.r = this->fields.mToColor.fields.r;
      v31.fields.g = this->fields.mToColor.fields.g;
      if ( v6 >= 0.0 )
        v7 = v8;
      v31.fields.b = this->fields.mToColor.fields.b;
      v31.fields.a = this->fields.mToColor.fields.a;
      mEasingType = this->fields.mEasingType;
      time = this->fields.mIsSkip ? 1.0 : v7;
      if ( this->fields.mStyle == 1 )
      {
        v28 = ColorChange__PingPong(this, mFromColor, v31, time, mEasingType, v5);
        r = v28.fields.r;
        g = v28.fields.g;
        b = v28.fields.b;
        a = v28.fields.a;
      }
      else
      {
        v29 = Easing__Func_49776096(mFromColor, v31, time, mEasingType, 0);
        r = v29.fields.r;
        g = v29.fields.g;
        b = v29.fields.b;
        a = v29.fields.a;
      }
      mProcessAct = this->fields.mProcessAct;
      this->fields.mNowColor.fields.r = r;
      this->fields.mNowColor.fields.g = g;
      this->fields.mNowColor.fields.b = b;
      this->fields.mNowColor.fields.a = a;
      if ( mProcessAct )
        ((void (__fastcall *)(intptr_t, intptr_t))mProcessAct->fields.invoke_impl)(
          mProcessAct->fields.method_code,
          mProcessAct->fields.method);
      if ( time >= 1.0 )
      {
        mCount = this->fields.mCount;
        v19 = this->fields.mNowCount + 1;
        this->fields.mNowCount = v19;
        if ( mCount > v19 || !mCount )
        {
          v21 = UnityEngine_Time__get_time(0);
          mStyle = this->fields.mStyle;
          this->fields.mStartTime = v21;
          if ( mStyle == 1 )
          {
            mToColor = this->fields.mFromColor;
          }
          else
          {
            if ( mStyle )
              return;
            mToColor = this->fields.mToColor;
          }
          this->fields.mNowColor = mToColor;
          return;
        }
        mEndAct = this->fields.mEndAct;
        this->fields.mIsChangeColor = 0;
        if ( mEndAct )
          ((void (__fastcall *)(intptr_t, intptr_t))mEndAct->fields.invoke_impl)(
            mEndAct->fields.method_code,
            mEndAct->fields.method);
      }
    }
  }
}