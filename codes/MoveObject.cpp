void MoveObject___ctor(MoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MoveObject__Awake(MoveObject_o *this, const MethodInfo *method)
{
  this->fields.mIsMoving = 0;
  this->fields.mIsSkip = 0;
}


UnityEngine_Vector3_o MoveObject__Now(MoveObject_o *this, const MethodInfo *method)
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


void MoveObject__Pause(MoveObject_o *this, const MethodInfo *method)
{
  if ( !this->fields.mIsPause )
  {
    this->fields.mIsPause = 1;
    this->fields.mPauseStartTime = UnityEngine_Time__get_time(0);
  }
}


void MoveObject__Play(
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
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Action_o *mProcessAct; // x0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.mFrom = from;
  this->fields.mTo.fields.x = to.fields.x;
  this->fields.mIsMoving = 1;
  this->fields.mTo.fields.y = to.fields.y;
  this->fields.mTo.fields.z = to.fields.z;
  if ( sec <= 0.0 )
    v14 = 0.0001;
  else
    v14 = sec;
  this->fields.mStartTime = UnityEngine_Time__get_time(0);
  this->fields.mTime = v14;
  this->fields.mEndAct = endAct;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mEndAct, (int32_t)endAct, v15, v16, v17, v18, v19, v20);
  v28 = Easing__Func(this->fields.mFrom, this->fields.mTo, 0.0001, this->fields.mEasingType, 0);
  this->fields.mProcessAct = procAct;
  this->fields.mNow = v28;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mProcessAct, (int32_t)procAct, v21, v22, v23, v24, v25, v26);
  this->fields.mEasingType = easingType;
  mProcessAct = this->fields.mProcessAct;
  this->fields.mDelay = delay;
  this->fields.mIsSkip = 0;
  ActionExtensions__Call(mProcessAct, 0);
}


void MoveObject__Resume(MoveObject_o *this, const MethodInfo *method)
{
  if ( this->fields.mIsPause )
  {
    this->fields.mIsPause = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0) - this->fields.mPauseStartTime);
  }
}


void MoveObject__SetPause(MoveObject_o *this, bool isPause, const MethodInfo *method)
{
  if ( isPause )
  {
    if ( !this->fields.mIsPause )
    {
      this->fields.mIsPause = 1;
      this->fields.mPauseStartTime = UnityEngine_Time__get_time(0);
    }
  }
  else if ( this->fields.mIsPause )
  {
    this->fields.mIsPause = 0;
    this->fields.mStartTime = this->fields.mStartTime
                            + (float)(UnityEngine_Time__get_time(0) - this->fields.mPauseStartTime);
  }
}


void MoveObject__Skip(MoveObject_o *this, const MethodInfo *method)
{
  this->fields.mIsSkip = 1;
}


void MoveObject__Stop(MoveObject_o *this, const MethodInfo *method)
{
  this->fields.mIsMoving = 0;
}


void MoveObject__Update(MoveObject_o *this, const MethodInfo *method)
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
          (float)(mStartTime + mDelay) <= UnityEngine_Time__get_time(0)) )
    {
      v5 = (float)(UnityEngine_Time__get_time(0) - (float)(this->fields.mStartTime + this->fields.mDelay))
         / this->fields.mTime;
      v6 = v5 < 0.0;
      v7 = fminf(v5, 1.0);
      if ( v6 )
        v7 = 0.0;
      if ( this->fields.mIsSkip )
        v8 = 1.0;
      else
        v8 = v7;
      v11 = Easing__Func(this->fields.mFrom, this->fields.mTo, v8, this->fields.mEasingType, 0);
      mProcessAct = this->fields.mProcessAct;
      this->fields.mNow = v11;
      if ( mProcessAct )
        ((void (__fastcall *)(intptr_t, intptr_t))mProcessAct->fields.invoke_impl)(
          mProcessAct->fields.method_code,
          mProcessAct->fields.method);
      if ( v8 >= 1.0 )
      {
        mEndAct = this->fields.mEndAct;
        this->fields.mIsMoving = 0;
        if ( mEndAct )
          ((void (__fastcall *)(intptr_t, intptr_t))mEndAct->fields.invoke_impl)(
            mEndAct->fields.method_code,
            mEndAct->fields.method);
      }
    }
  }
}


bool MoveObject__get_IsMoving(MoveObject_o *this, const MethodInfo *method)
{
  return this->fields.mIsMoving;
}