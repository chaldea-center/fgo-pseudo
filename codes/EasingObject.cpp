void __fastcall EasingObject___ctor(EasingObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EasingObject__Awake(EasingObject_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.mFrom) = 0;
  BYTE4(this[1].klass) = 0;
}


float __fastcall EasingObject__Now(EasingObject_o *this, const MethodInfo *method)
{
  return this->fields.mStartTime;
}


void __fastcall EasingObject__Pause(EasingObject_o *this, const MethodInfo *method)
{
  if ( !LOBYTE(this->fields.mEasingType) )
  {
    LOBYTE(this->fields.mEasingType) = 1;
    *(float *)&this->fields.mIsSkip = UnityEngine_Time__get_time(0LL);
  }
}


void __fastcall EasingObject__Play(
        EasingObject_o *this,
        float sec,
        System_Action_o *procAct,
        System_Action_o *endAct,
        float delay,
        int32_t easingType,
        const MethodInfo *method)
{
  EasingObject__Play_32669972(this, 0.0, 1.0, sec, procAct, endAct, delay, easingType, method);
}


void __fastcall EasingObject__Play_32669972(
        EasingObject_o *this,
        float from,
        float to,
        float sec,
        System_Action_o *procAct,
        System_Action_o *endAct,
        float delay,
        int32_t easingType,
        const MethodInfo *method)
{
  float v15; // s10
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Action_o **p_mEndAct; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  LOBYTE(this->fields.mFrom) = 1;
  this->fields.mTo = from;
  this->fields.mNow = to;
  if ( sec > 0.0 )
    v15 = sec;
  else
    v15 = 0.0001;
  this->fields.mTime = UnityEngine_Time__get_time(0LL);
  this->fields.mDelay = v15;
  *(_QWORD *)&this->fields.mIsPause = endAct;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.mIsPause,
    (System_Int32_array **)endAct,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.mEndAct = procAct;
  p_mEndAct = &this->fields.mEndAct;
  *((float *)p_mEndAct - 5) = from;
  sub_B0D840((BattleServantConfConponent_o *)p_mEndAct, (System_Int32_array **)procAct, v23, v24, v25, v26, v27, v28);
  *((_DWORD *)p_mEndAct + 6) = easingType;
  *((float *)p_mEndAct - 2) = delay;
  *((_BYTE *)p_mEndAct + 28) = 0;
  ActionExtensions__Call(*p_mEndAct, 0LL);
}


void __fastcall EasingObject__Resume(EasingObject_o *this, const MethodInfo *method)
{
  if ( LOBYTE(this->fields.mEasingType) )
  {
    LOBYTE(this->fields.mEasingType) = 0;
    this->fields.mTime = this->fields.mTime + (float)(UnityEngine_Time__get_time(0LL) - *(float *)&this->fields.mIsSkip);
  }
}


void __fastcall EasingObject__SetPause(EasingObject_o *this, bool isPause, const MethodInfo *method)
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


void __fastcall EasingObject__Skip(EasingObject_o *this, const MethodInfo *method)
{
  BYTE4(this[1].klass) = 1;
}


void __fastcall EasingObject__Stop(EasingObject_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.mFrom) = 0;
}


void __fastcall EasingObject__Update(EasingObject_o *this, const MethodInfo *method)
{
  float mTime; // s8
  float v4; // s9
  float time; // s0
  const MethodInfo *v6; // x1
  float v7; // s0
  float v8; // s8
  float v9; // s0
  System_Action_o *mEndAct; // x0
  System_Action_o *v11; // x0

  if ( LOBYTE(this->fields.mFrom) )
  {
    if ( !LOBYTE(this->fields.mEasingType) )
    {
      if ( BYTE4(this[1].klass)
        || (mTime = this->fields.mTime,
            v4 = *(float *)&this->fields.mProcessAct,
            (float)(mTime + v4) <= UnityEngine_Time__get_time(0LL)) )
      {
        time = UnityEngine_Time__get_time(0LL);
        v7 = UnityEngine_Mathf__Clamp01(
               (float)(time - (float)(this->fields.mTime + *(float *)&this->fields.mProcessAct)) / this->fields.mDelay,
               0LL);
        if ( BYTE4(this[1].klass) )
          v8 = 1.0;
        else
          v8 = v7;
        v9 = Easing__Func_32660412(this->fields.mTo, this->fields.mNow, v8, (int32_t)this[1].klass, v6);
        mEndAct = this->fields.mEndAct;
        this->fields.mStartTime = v9;
        if ( mEndAct )
          System_Action__Invoke(mEndAct, 0LL);
        if ( v8 >= 1.0 )
        {
          v11 = *(System_Action_o **)&this->fields.mIsPause;
          LOBYTE(this->fields.mFrom) = 0;
          if ( v11 )
            System_Action__Invoke(v11, 0LL);
        }
      }
    }
  }
}


bool __fastcall EasingObject__get_IsMoving(EasingObject_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.mFrom);
}


bool __fastcall EasingObject__get_IsPause(EasingObject_o *this, const MethodInfo *method)
{
  return this->fields.mEasingType;
}