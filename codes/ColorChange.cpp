void __fastcall ColorChange___ctor(ColorChange_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ColorChange__Awake(ColorChange_o *this, const MethodInfo *method)
{
  this->fields.mIsChangeColor = 0;
  this->fields.mIsSkip = 0;
}


UnityEngine_Color_o __fastcall ColorChange__GetColor(ColorChange_o *this, const MethodInfo *method)
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


void __fastcall ColorChange__Pause(ColorChange_o *this, const MethodInfo *method)
{
  if ( !this->fields.mPause )
  {
    this->fields.mPause = 1;
    this->fields.mPauseStartTime = UnityEngine_Time__get_time(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall ColorChange__PingPong(
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
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  float v14; // [xsp+0h] [xbp+0h]
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = from.fields.r;
  g = from.fields.g;
  a = from.fields.a;
  b = from.fields.b;
  this->fields.mIsSkip = 0;
  if ( time < 0.5 )
  {
    v14 = time + time;
  }
  else
  {
    v14 = (float)(time + -0.5) + (float)(time + -0.5);
    from = to;
    to.fields.r = r;
    to.fields.g = g;
    to.fields.b = b;
    to.fields.a = a;
  }
  *(UnityEngine_Color_o *)&v10 = Easing__Func_46357892(from, to, v14, easingType, 0LL);
  result.fields.a = v13;
  result.fields.b = v12;
  result.fields.g = v11;
  result.fields.r = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ColorChange__Play(
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
  int32_t v23; // w2
  int32_t v24; // w3
  System_Action_o *klass; // x0

  v11 = this;
  this->fields.mFromColor = from;
  this->fields.mIsChangeColor = 1;
  this->fields.mToColor = to;
  a = from.fields.a;
  b = from.fields.b;
  g = from.fields.g;
  r = from.fields.r;
  this->fields.mStartTime = UnityEngine_Time__get_time(0LL);
  v11->fields.mTime = sec;
  v11->fields.mStyle = style;
  v11->fields.mCount = count;
  v11->fields.mNowCount = 0;
  v11->fields.mEndAct = endAct;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v11->fields.mEndAct, (int32_t)endAct, v21, v22);
  v11->fields.mProcessAct = procAct;
  v11 = (ColorChange_o *)((char *)v11 + 112);
  *(float *)&v11[-1].fields.mNowCount = r;
  v11[-1].fields.mDelay = g;
  *(&v11[-1].fields.mDelay + 1) = b;
  *(float *)&v11[-1].fields.mProcessAct = a;
  sub_1B68678((ServantStatusBattleListViewItem_o *)v11, (int32_t)procAct, v23, v24);
  klass = (System_Action_o *)v11->klass;
  LODWORD(v11->fields.m_CancellationTokenSource) = easingType;
  *(float *)&v11[-1].fields.mEasingType = delay;
  BYTE4(v11->fields.m_CancellationTokenSource) = 0;
  ActionExtensions__Call(klass, 0LL);
}


void __fastcall ColorChange__Resume(ColorChange_o *this, const MethodInfo *method)
{
  if ( this->fields.mPause )
  {
    this->fields.mPause = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0LL) - this->fields.mPauseStartTime);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ColorChange__SetColor(ColorChange_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  this->fields.mNowColor = color;
}


void __fastcall ColorChange__SetPause(ColorChange_o *this, bool isPause, const MethodInfo *method)
{
  if ( isPause )
  {
    if ( !this->fields.mPause )
    {
      this->fields.mPause = 1;
      this->fields.mPauseStartTime = UnityEngine_Time__get_time(0LL);
    }
  }
  else if ( this->fields.mPause )
  {
    this->fields.mPause = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0LL) - this->fields.mPauseStartTime);
  }
}


void __fastcall ColorChange__Skip(ColorChange_o *this, const MethodInfo *method)
{
  this->fields.mIsSkip = 1;
}


void __fastcall ColorChange__Stop(ColorChange_o *this, const MethodInfo *method)
{
  this->fields.mIsChangeColor = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ColorChange__Update(ColorChange_o *this, const MethodInfo *method)
{
  float mStartTime; // s8
  float mDelay; // s9
  const MethodInfo *v5; // x2
  float v6; // s6
  float v7; // s17
  float v8; // s7
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  int32_t mEasingType; // w1
  float time; // s8
  float v19; // s0
  float v20; // s1
  float v21; // s2
  float v22; // s3
  struct System_Action_o *mProcessAct; // x8
  int32_t mCount; // w8
  int32_t v25; // w9
  struct System_Action_o *mEndAct; // x8
  float v27; // s0
  int32_t mStyle; // w8
  struct UnityEngine_Color_o mFromColor; // q0

  if ( this->fields.mIsChangeColor && !this->fields.mPause )
  {
    if ( this->fields.mIsSkip
      || (mStartTime = this->fields.mStartTime,
          mDelay = this->fields.mDelay,
          (float)(mStartTime + mDelay) <= UnityEngine_Time__get_time(0LL)) )
    {
      v6 = (float)(UnityEngine_Time__get_time(0LL) - (float)(this->fields.mStartTime + this->fields.mDelay))
         / this->fields.mTime;
      v7 = 0.0;
      v8 = fminf(v6, 1.0);
      r = this->fields.mFromColor.fields.r;
      g = this->fields.mFromColor.fields.g;
      b = this->fields.mFromColor.fields.b;
      a = this->fields.mFromColor.fields.a;
      v13 = this->fields.mToColor.fields.r;
      v14 = this->fields.mToColor.fields.g;
      if ( v6 >= 0.0 )
        v7 = v8;
      v15 = this->fields.mToColor.fields.b;
      v16 = this->fields.mToColor.fields.a;
      mEasingType = this->fields.mEasingType;
      time = this->fields.mIsSkip ? 1.0 : v7;
      *(UnityEngine_Color_o *)&v19 = this->fields.mStyle == 1
                                   ? ColorChange__PingPong(
                                       this,
                                       *(UnityEngine_Color_o *)&r,
                                       *(UnityEngine_Color_o *)&v13,
                                       time,
                                       mEasingType,
                                       v5)
                                   : Easing__Func_46357892(
                                       *(UnityEngine_Color_o *)&r,
                                       *(UnityEngine_Color_o *)&v13,
                                       time,
                                       mEasingType,
                                       0LL);
      mProcessAct = this->fields.mProcessAct;
      this->fields.mNowColor.fields.r = v19;
      this->fields.mNowColor.fields.g = v20;
      this->fields.mNowColor.fields.b = v21;
      this->fields.mNowColor.fields.a = v22;
      if ( mProcessAct )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))mProcessAct->fields.m_target)(
          mProcessAct->fields.original_method_info,
          *(_QWORD *)&mProcessAct->fields.extra_arg);
      if ( time >= 1.0 )
      {
        mCount = this->fields.mCount;
        v25 = this->fields.mNowCount + 1;
        this->fields.mNowCount = v25;
        if ( mCount > v25 || !mCount )
        {
          v27 = UnityEngine_Time__get_time(0LL);
          mStyle = this->fields.mStyle;
          this->fields.mStartTime = v27;
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
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))mEndAct->fields.m_target)(
            mEndAct->fields.original_method_info,
            *(_QWORD *)&mEndAct->fields.extra_arg);
      }
    }
  }
}