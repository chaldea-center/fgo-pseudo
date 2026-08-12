void EasingObject___ctor(EasingObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EasingObject__Awake(EasingObject_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.mIsSkip = 0;
}


float EasingObject__Now(EasingObject_o *this, const MethodInfo *method)
{
  return this->fields.mNow;
}


void EasingObject__Pause(EasingObject_o *this, const MethodInfo *method)
{
  if ( !this->fields._IsPause_k__BackingField )
  {
    this->fields._IsPause_k__BackingField = 1;
    this->fields.mPauseStartTime = UnityEngine_Time__get_time(0);
  }
}


void EasingObject__Play(
        EasingObject_o *this,
        float sec,
        System_Action_o *procAct,
        System_Action_o *endAct,
        float delay,
        int32_t easingType,
        const MethodInfo *method)
{
  EasingObject__Play_56121168(this, 0.0, 1.0, sec, procAct, endAct, delay, easingType, method);
}


void EasingObject__Play_56121168(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Action_o **p_mProcessAct; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Action_o *v29; // x8

  this->fields._IsMoving_k__BackingField = 1;
  if ( sec <= 0.0 )
    v15 = 0.0001;
  else
    v15 = sec;
  this->fields.mFrom = from;
  this->fields.mTo = to;
  this->fields.mStartTime = UnityEngine_Time__get_time(0);
  this->fields.mTime = v15;
  this->fields.mEndAct = endAct;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mEndAct, (int32_t)endAct, v16, v17, v18, v19, v20, v21);
  this->fields.mProcessAct = procAct;
  p_mProcessAct = &this->fields.mProcessAct;
  *((float *)p_mProcessAct - 6) = from;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mProcessAct, (int32_t)procAct, v23, v24, v25, v26, v27, v28);
  v29 = *p_mProcessAct;
  *((_DWORD *)p_mProcessAct + 4) = easingType;
  *((float *)p_mProcessAct - 3) = delay;
  *((_BYTE *)p_mProcessAct + 20) = 0;
  if ( v29 )
    ((void (__fastcall *)(intptr_t, intptr_t))v29->fields.invoke_impl)(v29->fields.method_code, v29->fields.method);
}


void EasingObject__Resume(EasingObject_o *this, const MethodInfo *method)
{
  if ( this->fields._IsPause_k__BackingField )
  {
    this->fields._IsPause_k__BackingField = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0) - this->fields.mPauseStartTime);
  }
}


void EasingObject__SetPause(EasingObject_o *this, bool isPause, const MethodInfo *method)
{
  if ( isPause )
  {
    if ( !this->fields._IsPause_k__BackingField )
    {
      this->fields._IsPause_k__BackingField = 1;
      this->fields.mPauseStartTime = UnityEngine_Time__get_time(0);
    }
  }
  else if ( this->fields._IsPause_k__BackingField )
  {
    this->fields._IsPause_k__BackingField = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0) - this->fields.mPauseStartTime);
  }
}


void EasingObject__Skip(EasingObject_o *this, const MethodInfo *method)
{
  this->fields.mIsSkip = 1;
}


void EasingObject__Stop(EasingObject_o *this, const MethodInfo *method)
{
  this->fields._IsMoving_k__BackingField = 0;
}


void EasingObject__Update(EasingObject_o *this, const MethodInfo *method)
{
  float mStartTime; // s8
  float mDelay; // s9
  const MethodInfo *v5; // x1
  float v6; // s0
  float v7; // s1
  float v8; // s0
  float v9; // s8
  float v10; // s0
  struct System_Action_o *mProcessAct; // x8
  struct System_Action_o *mEndAct; // x8

  if ( this->fields._IsMoving_k__BackingField && !this->fields._IsPause_k__BackingField )
  {
    if ( this->fields.mIsSkip
      || (mStartTime = this->fields.mStartTime,
          mDelay = this->fields.mDelay,
          (float)(mStartTime + mDelay) <= UnityEngine_Time__get_time(0)) )
    {
      v6 = (float)(UnityEngine_Time__get_time(0) - (float)(this->fields.mStartTime + this->fields.mDelay))
         / this->fields.mTime;
      if ( v6 <= 1.0 )
        v7 = v6;
      else
        v7 = 1.0;
      if ( v6 >= 0.0 )
        v8 = v7;
      else
        v8 = 0.0;
      if ( this->fields.mIsSkip )
        v9 = 1.0;
      else
        v9 = v8;
      v10 = Easing__Func_56120036(this->fields.mFrom, this->fields.mTo, v9, this->fields.mEasingType, v5);
      mProcessAct = this->fields.mProcessAct;
      this->fields.mNow = v10;
      if ( mProcessAct )
        ((void (__fastcall *)(intptr_t, intptr_t))mProcessAct->fields.invoke_impl)(
          mProcessAct->fields.method_code,
          mProcessAct->fields.method);
      if ( v9 >= 1.0 )
      {
        mEndAct = this->fields.mEndAct;
        this->fields._IsMoving_k__BackingField = 0;
        if ( mEndAct )
          ((void (__fastcall *)(intptr_t, intptr_t))mEndAct->fields.invoke_impl)(
            mEndAct->fields.method_code,
            mEndAct->fields.method);
      }
    }
  }
}


bool EasingObject__get_IsMoving(EasingObject_o *this, const MethodInfo *method)
{
  return this->fields._IsMoving_k__BackingField;
}


bool EasingObject__get_IsPause(EasingObject_o *this, const MethodInfo *method)
{
  return this->fields._IsPause_k__BackingField;
}


void EasingObject__set_IsMoving(EasingObject_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsMoving_k__BackingField = value;
}


void EasingObject__set_IsPause(EasingObject_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsPause_k__BackingField = value;
}