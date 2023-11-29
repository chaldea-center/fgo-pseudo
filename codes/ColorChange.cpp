void __fastcall ColorChange___ctor(ColorChange_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ColorChange__Awake(ColorChange_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.mFromColor.fields.r) = 0;
  BYTE4(this[1].klass) = 0;
}


UnityEngine_Color_o __fastcall ColorChange__GetColor(ColorChange_o *this, const MethodInfo *method)
{
  float g; // s0
  float b; // s1
  float a; // s2
  float mStartTime; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  g = this->fields.mNowColor.fields.g;
  b = this->fields.mNowColor.fields.b;
  a = this->fields.mNowColor.fields.a;
  mStartTime = this->fields.mStartTime;
  result.fields.a = mStartTime;
  result.fields.b = a;
  result.fields.g = b;
  result.fields.r = g;
  return result;
}


void __fastcall ColorChange__Pause(ColorChange_o *this, const MethodInfo *method)
{
  if ( !LOBYTE(this->fields.mEasingType) )
  {
    LOBYTE(this->fields.mEasingType) = 1;
    *(float *)&this->fields.mIsSkip = UnityEngine_Time__get_time(0LL);
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
  float b; // s9
  float g; // s11
  float r; // s13
  float v10; // s10
  float v11; // s12
  float v12; // s14
  float v13; // s15
  float v14; // s7
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s3
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  float a; // [xsp+4Ch] [xbp-4h]
  float timea; // [xsp+60h] [xbp+10h]
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  BYTE4(this[1].klass) = 0;
  a = to.fields.a;
  b = to.fields.b;
  g = to.fields.g;
  r = to.fields.r;
  v10 = from.fields.a;
  v11 = from.fields.b;
  v12 = from.fields.g;
  v13 = from.fields.r;
  UnityEngine_Color__get_white(0LL);
  if ( time >= 0.5 )
  {
    v18 = a;
    timea = (float)(time + -0.5) + (float)(time + -0.5);
    v15 = r;
    v16 = g;
    v17 = b;
    v19 = v13;
    v20 = v12;
    v21 = v11;
    v14 = v10;
  }
  else
  {
    v14 = a;
    timea = time + time;
    v15 = v13;
    v16 = v12;
    v17 = v11;
    v18 = v10;
    v19 = r;
    v20 = g;
    v21 = b;
  }
  *(UnityEngine_Color_o *)&v22 = Easing__Func_33156124(
                                   *(UnityEngine_Color_o *)&v15,
                                   *(UnityEngine_Color_o *)&v19,
                                   timea,
                                   easingType,
                                   0LL);
  result.fields.a = v25;
  result.fields.b = v24;
  result.fields.g = v23;
  result.fields.r = v22;
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  v11 = this;
  *(UnityEngine_Color_o *)&this->fields.mFromColor.fields.g = from;
  LOBYTE(this->fields.mFromColor.fields.r) = 1;
  *(UnityEngine_Color_o *)&this->fields.mToColor.fields.g = to;
  a = from.fields.a;
  b = from.fields.b;
  g = from.fields.g;
  r = from.fields.r;
  this->fields.mTime = UnityEngine_Time__get_time(0LL);
  *(float *)&v11->fields.mStyle = sec;
  v11->fields.mCount = style;
  v11->fields.mNowCount = count;
  v11->fields.mDelay = 0.0;
  *(_QWORD *)&v11->fields.mPause = endAct;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v11->fields.mPause,
    (System_Int32_array **)endAct,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v11->fields.mEndAct = procAct;
  v11 = (ColorChange_o *)((char *)v11 + 104);
  *(float *)&v11[-1].fields.mCount = r;
  *(float *)&v11[-1].fields.mNowCount = g;
  v11[-1].fields.mDelay = b;
  *(float *)&v11[-1].fields.mProcessAct = a;
  sub_B16F98((BattleServantConfConponent_o *)v11, (System_Int32_array **)procAct, v27, v28, v29, v30, v31, v32);
  LODWORD(v11->fields.mFromColor.fields.r) = easingType;
  *(float *)&v11[-1].fields.mEasingType = delay;
  LOBYTE(v11->fields.mFromColor.fields.g) = 0;
  ActionExtensions__Call((System_Action_o *)v11->klass, 0LL);
}


void __fastcall ColorChange__Resume(ColorChange_o *this, const MethodInfo *method)
{
  if ( LOBYTE(this->fields.mEasingType) )
  {
    LOBYTE(this->fields.mEasingType) = 0;
    this->fields.mTime = this->fields.mTime + (float)(UnityEngine_Time__get_time(0LL) - *(float *)&this->fields.mIsSkip);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ColorChange__SetColor(ColorChange_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  *(UnityEngine_Color_o *)&this->fields.mNowColor.fields.g = color;
}


void __fastcall ColorChange__SetPause(ColorChange_o *this, bool isPause, const MethodInfo *method)
{
  if ( isPause )
  {
    if ( !LOBYTE(this->fields.mEasingType) )
    {
      LOBYTE(this->fields.mEasingType) = 1;
      *(float *)&this->fields.mIsSkip = UnityEngine_Time__get_time(0LL);
    }
  }
  else if ( LOBYTE(this->fields.mEasingType) )
  {
    LOBYTE(this->fields.mEasingType) = 0;
    this->fields.mTime = this->fields.mTime + (float)(UnityEngine_Time__get_time(0LL) - *(float *)&this->fields.mIsSkip);
  }
}


void __fastcall ColorChange__Skip(ColorChange_o *this, const MethodInfo *method)
{
  BYTE4(this[1].klass) = 1;
}


void __fastcall ColorChange__Stop(ColorChange_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.mFromColor.fields.r) = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ColorChange__Update(ColorChange_o *this, const MethodInfo *method)
{
  float mTime; // s8
  float v4; // s9
  float v5; // s0
  const MethodInfo *v6; // x2
  float v7; // s16
  float g; // s0
  float b; // s1
  float a; // s2
  float r; // s3
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  int32_t klass; // w1
  float time; // s9
  float v18; // s0
  float v19; // s1
  float v20; // s2
  float v21; // s3
  System_Action_o *mEndAct; // x0
  int32_t mNowCount; // w8
  float v24; // w9
  System_Action_o *v25; // x0
  float v26; // s0
  int32_t mCount; // w8
  __int128 v28; // q0

  if ( LOBYTE(this->fields.mFromColor.fields.r) )
  {
    if ( !LOBYTE(this->fields.mEasingType) )
    {
      if ( BYTE4(this[1].klass)
        || (mTime = this->fields.mTime,
            v4 = *(float *)&this->fields.mProcessAct,
            (float)(mTime + v4) <= UnityEngine_Time__get_time(0LL)) )
      {
        v5 = UnityEngine_Time__get_time(0LL);
        v7 = UnityEngine_Mathf__Clamp01(
               (float)(v5 - (float)(this->fields.mTime + *(float *)&this->fields.mProcessAct))
             / *(float *)&this->fields.mStyle,
               0LL);
        g = this->fields.mFromColor.fields.g;
        b = this->fields.mFromColor.fields.b;
        a = this->fields.mFromColor.fields.a;
        r = this->fields.mToColor.fields.r;
        v12 = this->fields.mToColor.fields.g;
        v13 = this->fields.mToColor.fields.b;
        v14 = this->fields.mToColor.fields.a;
        v15 = this->fields.mNowColor.fields.r;
        klass = (int32_t)this[1].klass;
        time = BYTE4(this[1].klass) ? 1.0 : v7;
        *(UnityEngine_Color_o *)&v18 = this->fields.mCount == 1
                                     ? ColorChange__PingPong(
                                         this,
                                         *(UnityEngine_Color_o *)&g,
                                         *(UnityEngine_Color_o *)&v12,
                                         time,
                                         klass,
                                         v6)
                                     : Easing__Func_33156124(
                                         *(UnityEngine_Color_o *)&g,
                                         *(UnityEngine_Color_o *)&v12,
                                         time,
                                         klass,
                                         0LL);
        mEndAct = this->fields.mEndAct;
        this->fields.mNowColor.fields.g = v18;
        this->fields.mNowColor.fields.b = v19;
        this->fields.mNowColor.fields.a = v20;
        this->fields.mStartTime = v21;
        if ( mEndAct )
          System_Action__Invoke(mEndAct, 0LL);
        if ( time >= 1.0 )
        {
          mNowCount = this->fields.mNowCount;
          LODWORD(v24) = LODWORD(this->fields.mDelay) + 1;
          this->fields.mDelay = v24;
          if ( mNowCount > SLODWORD(v24) || !mNowCount )
          {
            v26 = UnityEngine_Time__get_time(0LL);
            mCount = this->fields.mCount;
            this->fields.mTime = v26;
            if ( mCount == 1 )
            {
              v28 = *(_OWORD *)&this->fields.mFromColor.fields.g;
            }
            else
            {
              if ( mCount )
                return;
              v28 = *(_OWORD *)&this->fields.mToColor.fields.g;
            }
            *(_OWORD *)&this->fields.mNowColor.fields.g = v28;
            return;
          }
          v25 = *(System_Action_o **)&this->fields.mPause;
          LOBYTE(this->fields.mFromColor.fields.r) = 0;
          if ( v25 )
            System_Action__Invoke(v25, 0LL);
        }
      }
    }
  }
}