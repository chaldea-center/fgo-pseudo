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
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.mNowColor.fields.r;
  g = this->fields.mNowColor.fields.g;
  b = this->fields.mNowColor.fields.b;
  a = this->fields.mNowColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
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
  float g; // s18
  float r; // s19
  float a; // s16
  float b; // s17
  float v10; // s20

  g = from.fields.g;
  r = from.fields.r;
  a = from.fields.a;
  this->fields.mIsSkip = 0;
  b = from.fields.b;
  if ( time >= 0.5 )
  {
    from = to;
    to.fields.b = b;
    to.fields.a = a;
    to.fields.g = g;
    v10 = (float)(time + -0.5) + (float)(time + -0.5);
    to.fields.r = r;
  }
  else
  {
    v10 = time + time;
  }
  return Easing__Func_55914440(from, to, v10, easingType, 0);
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Action_o *klass; // x0

  v11 = this;
  this->fields.mIsChangeColor = 1;
  this->fields.mFromColor = from;
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->fields.mEndAct, (int32_t)endAct, v21, v22, v23, v24, v25, v26);
  v11->fields.mProcessAct = procAct;
  v11 = (ColorChange_o *)((char *)v11 + 112);
  *(float *)&v11[-1].fields.mNowCount = r;
  v11[-1].fields.mDelay = g;
  *(&v11[-1].fields.mDelay + 1) = b;
  *(float *)&v11[-1].fields.mProcessAct = a;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v11, (int32_t)procAct, v27, v28, v29, v30, v31, v32);
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


// local variable allocation has failed, the output may be wrong!
void ColorChange__Update(ColorChange_o *this, const MethodInfo *method)
{
  float mStartTime; // s8
  float mDelay; // s9
  const MethodInfo *v5; // x2
  float v6; // s0
  int32_t mEasingType; // w1
  float r; // s4 OVERLAPPED
  float g; // s5
  float b; // s6
  float a; // s7
  float v12; // s0
  float v13; // s3
  float v14; // s0
  float v15; // s2 OVERLAPPED
  float v16; // s3
  float time; // s8
  float v18; // s0
  float v19; // s1
  struct System_Action_o *mProcessAct; // x8
  int32_t mCount; // w8
  int32_t v22; // w9
  struct System_Action_o *mEndAct; // x8
  float v24; // s0
  int32_t mStyle; // w8
  struct UnityEngine_Color_o mFromColor; // q0
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( this->fields.mIsChangeColor && !this->fields.mPause )
  {
    if ( this->fields.mIsSkip
      || (mStartTime = this->fields.mStartTime,
          mDelay = this->fields.mDelay,
          (float)(mStartTime + mDelay) <= UnityEngine_Time__get_time(0)) )
    {
      v6 = UnityEngine_Time__get_time(0);
      mEasingType = this->fields.mEasingType;
      r = this->fields.mToColor.fields.r;
      g = this->fields.mToColor.fields.g;
      b = this->fields.mToColor.fields.b;
      a = this->fields.mToColor.fields.a;
      v12 = (float)(v6 - (float)(this->fields.mStartTime + this->fields.mDelay)) / this->fields.mTime;
      v13 = v12 <= 1.0 ? v12 : 1.0;
      v14 = v12 >= 0.0 ? v13 : 0.0;
      v15 = this->fields.mFromColor.fields.b;
      v16 = this->fields.mFromColor.fields.a;
      time = this->fields.mIsSkip ? 1.0 : v14;
      v18 = this->fields.mFromColor.fields.r;
      v19 = this->fields.mFromColor.fields.g;
      v27 = this->fields.mStyle == 1
          ? ColorChange__PingPong(
              this,
              *(UnityEngine_Color_o *)(&v15 - 2),
              *(UnityEngine_Color_o *)&r,
              time,
              mEasingType,
              v5)
          : Easing__Func_55914440(*(UnityEngine_Color_o *)(&v15 - 2), *(UnityEngine_Color_o *)&r, time, mEasingType, 0);
      this->fields.mNowColor.fields.r = v27.fields.r;
      mProcessAct = this->fields.mProcessAct;
      this->fields.mNowColor.fields.g = v27.fields.g;
      this->fields.mNowColor.fields.b = v27.fields.b;
      this->fields.mNowColor.fields.a = v27.fields.a;
      if ( mProcessAct )
        ((void (__fastcall *)(intptr_t, intptr_t))mProcessAct->fields.invoke_impl)(
          mProcessAct->fields.method_code,
          mProcessAct->fields.method);
      if ( time >= 1.0 )
      {
        mCount = this->fields.mCount;
        v22 = this->fields.mNowCount + 1;
        this->fields.mNowCount = v22;
        if ( mCount > v22 || !mCount )
        {
          v24 = UnityEngine_Time__get_time(0);
          mStyle = this->fields.mStyle;
          this->fields.mStartTime = v24;
          if ( mStyle == 1 )
          {
            mFromColor = this->fields.mFromColor;
          }
          else
          {
            if ( mStyle )
              return;
            mFromColor = this->fields.mToColor;
          }
          this->fields.mNowColor = mFromColor;
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