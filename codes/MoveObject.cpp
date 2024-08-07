void __fastcall MoveObject___ctor(MoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveObject__Awake(MoveObject_o *this, const MethodInfo *method)
{
  this->fields.mIsMoving = 0;
  this->fields.mIsSkip = 0;
}


UnityEngine_Vector3_o __fastcall MoveObject__Now(MoveObject_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.mNow.fields.x;
  y = this->fields.mNow.fields.y;
  z = this->fields.mNow.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


void __fastcall MoveObject__Pause(MoveObject_o *this, const MethodInfo *method)
{
  if ( !this->fields.mIsPause )
  {
    this->fields.mIsPause = 1;
    this->fields.mPauseStartTime = UnityEngine_Time__get_time(0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MoveObject__Play(
        MoveObject_o *this,
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        float sec,
        System_Action_o *procAct,
        System_Action_o *endAct,
        float delay,
        int32_t easingType,
        const MethodInfo *method)
{
  float v14; // s10
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  System_Action_o *mProcessAct; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.mFrom = from;
  this->fields.mTo.fields.x = to.fields.x;
  this->fields.mIsMoving = 1;
  this->fields.mTo.fields.y = to.fields.y;
  this->fields.mTo.fields.z = to.fields.z;
  if ( sec <= 0.0 )
    v14 = 0.0001;
  else
    v14 = sec;
  this->fields.mStartTime = UnityEngine_Time__get_time(0LL);
  this->fields.mTime = v14;
  this->fields.mEndAct = endAct;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mEndAct, (int32_t)endAct, v15, v16);
  v20 = Easing__Func(this->fields.mFrom, this->fields.mTo, 0.0001, this->fields.mEasingType, 0LL);
  this->fields.mProcessAct = procAct;
  this->fields.mNow = v20;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mProcessAct, (int32_t)procAct, v17, v18);
  this->fields.mEasingType = easingType;
  mProcessAct = this->fields.mProcessAct;
  this->fields.mDelay = delay;
  this->fields.mIsSkip = 0;
  ActionExtensions__Call(mProcessAct, 0LL);
}


void __fastcall MoveObject__Resume(MoveObject_o *this, const MethodInfo *method)
{
  if ( this->fields.mIsPause )
  {
    this->fields.mIsPause = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0LL) - this->fields.mPauseStartTime);
  }
}


void __fastcall MoveObject__SetPause(MoveObject_o *this, bool isPause, const MethodInfo *method)
{
  if ( isPause )
  {
    if ( !this->fields.mIsPause )
    {
      this->fields.mIsPause = 1;
      this->fields.mPauseStartTime = UnityEngine_Time__get_time(0LL);
    }
  }
  else if ( this->fields.mIsPause )
  {
    this->fields.mIsPause = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0LL) - this->fields.mPauseStartTime);
  }
}


void __fastcall MoveObject__Skip(MoveObject_o *this, const MethodInfo *method)
{
  this->fields.mIsSkip = 1;
}


void __fastcall MoveObject__Stop(MoveObject_o *this, const MethodInfo *method)
{
  this->fields.mIsMoving = 0;
}


void __fastcall MoveObject__Update(MoveObject_o *this, const MethodInfo *method)
{
  float mStartTime; // s8
  float mDelay; // s9
  float v5; // s0
  bool v6; // nf
  float v7; // s0
  float v8; // s8
  struct System_Action_o *mProcessAct; // x8
  struct System_Action_o *mEndAct; // x8
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.mIsMoving && !this->fields.mIsPause )
  {
    if ( this->fields.mIsSkip
      || (mStartTime = this->fields.mStartTime,
          mDelay = this->fields.mDelay,
          (float)(mStartTime + mDelay) <= UnityEngine_Time__get_time(0LL)) )
    {
      v5 = (float)(UnityEngine_Time__get_time(0LL) - (float)(this->fields.mStartTime + this->fields.mDelay))
         / this->fields.mTime;
      v6 = v5 < 0.0;
      v7 = fminf(v5, 1.0);
      if ( v6 )
        v7 = 0.0;
      if ( this->fields.mIsSkip )
        v8 = 1.0;
      else
        v8 = v7;
      v11 = Easing__Func(this->fields.mFrom, this->fields.mTo, v8, this->fields.mEasingType, 0LL);
      mProcessAct = this->fields.mProcessAct;
      this->fields.mNow = v11;
      if ( mProcessAct )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))mProcessAct->fields.m_target)(
          mProcessAct->fields.original_method_info,
          *(_QWORD *)&mProcessAct->fields.extra_arg);
      if ( v8 >= 1.0 )
      {
        mEndAct = this->fields.mEndAct;
        this->fields.mIsMoving = 0;
        if ( mEndAct )
          ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))mEndAct->fields.m_target)(
            mEndAct->fields.original_method_info,
            *(_QWORD *)&mEndAct->fields.extra_arg);
      }
    }
  }
}


bool __fastcall MoveObject__get_IsMoving(MoveObject_o *this, const MethodInfo *method)
{
  return this->fields.mIsMoving;
}