void __fastcall EasingObject___ctor(EasingObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EasingObject__Awake(EasingObject_o *this, const MethodInfo *method)
{
  *(_WORD *)&this->fields.mIsSkip = 0;
}


float __fastcall EasingObject__Now(EasingObject_o *this, const MethodInfo *method)
{
  return this->fields.mNow;
}


void __fastcall EasingObject__Pause(EasingObject_o *this, const MethodInfo *method)
{
  if ( !this->fields._IsPause_k__BackingField )
  {
    this->fields._IsPause_k__BackingField = 1;
    this->fields.mPauseStartTime = UnityEngine_Time__get_time(0LL);
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
  EasingObject__Play_47745152(this, 0.0, 1.0, sec, procAct, endAct, delay, easingType, method);
}


void __fastcall EasingObject__Play_47745152(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Action_o **p_mProcessAct; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Action_o *v29; // x8

  this->fields._IsMoving_k__BackingField = 1;
  this->fields.mFrom = from;
  this->fields.mTo = to;
  if ( sec <= 0.0 )
    v15 = 0.0001;
  else
    v15 = sec;
  this->fields.mStartTime = UnityEngine_Time__get_time(0LL);
  this->fields.mTime = v15;
  this->fields.mEndAct = endAct;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mEndAct, (int64_t)endAct, v16, v17, v18, v19, v20, v21);
  this->fields.mProcessAct = procAct;
  p_mProcessAct = &this->fields.mProcessAct;
  *((float *)p_mProcessAct - 6) = from;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_mProcessAct, (int64_t)procAct, v23, v24, v25, v26, v27, v28);
  v29 = *p_mProcessAct;
  *((_DWORD *)p_mProcessAct + 4) = easingType;
  *((float *)p_mProcessAct - 3) = delay;
  *((_BYTE *)p_mProcessAct + 20) = 0;
  if ( v29 )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v29->fields.m_target)(
      v29->fields.original_method_info,
      *(_QWORD *)&v29->fields.extra_arg);
}


void __fastcall EasingObject__Resume(EasingObject_o *this, const MethodInfo *method)
{
  if ( this->fields._IsPause_k__BackingField )
  {
    this->fields._IsPause_k__BackingField = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0LL) - this->fields.mPauseStartTime);
  }
}


void __fastcall EasingObject__SetPause(EasingObject_o *this, bool isPause, const MethodInfo *method)
{
  if ( isPause )
  {
    if ( !this->fields._IsPause_k__BackingField )
    {
      this->fields._IsPause_k__BackingField = 1;
      this->fields.mPauseStartTime = UnityEngine_Time__get_time(0LL);
    }
  }
  else if ( this->fields._IsPause_k__BackingField )
  {
    this->fields._IsPause_k__BackingField = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0LL) - this->fields.mPauseStartTime);
  }
}


void __fastcall EasingObject__Skip(EasingObject_o *this, const MethodInfo *method)
{
  this->fields.mIsSkip = 1;
}


void __fastcall EasingObject__Stop(EasingObject_o *this, const MethodInfo *method)
{
  this->fields._IsMoving_k__BackingField = 0;
}


void __fastcall EasingObject__Update(EasingObject_o *this, const MethodInfo *method)
{
  float mStartTime; // s8
  float mDelay; // s9
  const MethodInfo *v5; // x1
  float v6; // s3
  float v7; // s2
  bool v8; // nf
  float v9; // s3
  float v10; // s8
  float v11; // s0
  struct System_Action_o *mProcessAct; // x8
  struct System_Action_o *mEndAct; // x8

  if ( this->fields._IsMoving_k__BackingField && !this->fields._IsPause_k__BackingField )
  {
    if ( this->fields.mIsSkip
      || (mStartTime = this->fields.mStartTime,
          mDelay = this->fields.mDelay,
          (float)(mStartTime + mDelay) <= UnityEngine_Time__get_time(0LL)) )
    {
      v6 = (float)(UnityEngine_Time__get_time(0LL) - (float)(this->fields.mStartTime + this->fields.mDelay))
         / this->fields.mTime;
      v7 = 0.0;
      v8 = v6 < 0.0;
      v9 = fminf(v6, 1.0);
      if ( !v8 )
        v7 = v9;
      if ( this->fields.mIsSkip )
        v10 = 1.0;
      else
        v10 = v7;
      v11 = Easing__Func_47743976(this->fields.mFrom, this->fields.mTo, v10, this->fields.mEasingType, v5);
      mProcessAct = this->fields.mProcessAct;
      this->fields.mNow = v11;
      if ( mProcessAct )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))mProcessAct->fields.m_target)(
          mProcessAct->fields.original_method_info,
          *(_QWORD *)&mProcessAct->fields.extra_arg);
      if ( v10 >= 1.0 )
      {
        mEndAct = this->fields.mEndAct;
        this->fields._IsMoving_k__BackingField = 0;
        if ( mEndAct )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))mEndAct->fields.m_target)(
            mEndAct->fields.original_method_info,
            *(_QWORD *)&mEndAct->fields.extra_arg);
      }
    }
  }
}


bool __fastcall EasingObject__get_IsMoving(EasingObject_o *this, const MethodInfo *method)
{
  return this->fields._IsMoving_k__BackingField;
}


bool __fastcall EasingObject__get_IsPause(EasingObject_o *this, const MethodInfo *method)
{
  return this->fields._IsPause_k__BackingField;
}


void __fastcall EasingObject__set_IsMoving(EasingObject_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsMoving_k__BackingField = value;
}


void __fastcall EasingObject__set_IsPause(EasingObject_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsPause_k__BackingField = value;
}