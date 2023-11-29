void __fastcall MoveObject___ctor(MoveObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveObject__Awake(MoveObject_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.mFrom.fields.x) = 0;
  BYTE4(this[1].klass) = 0;
}


UnityEngine_Vector3_o __fastcall MoveObject__Now(MoveObject_o *this, const MethodInfo *method)
{
  float y; // s0
  float z; // s1
  float mStartTime; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = this->fields.mNow.fields.y;
  z = this->fields.mNow.fields.z;
  mStartTime = this->fields.mStartTime;
  result.fields.z = mStartTime;
  result.fields.y = z;
  result.fields.x = y;
  return result;
}


void __fastcall MoveObject__Pause(MoveObject_o *this, const MethodInfo *method)
{
  if ( !LOBYTE(this->fields.mEasingType) )
  {
    LOBYTE(this->fields.mEasingType) = 1;
    *(float *)&this->fields.mIsSkip = UnityEngine_Time__get_time(0LL);
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
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  *(UnityEngine_Vector3_o *)&this->fields.mFrom.fields.y = from;
  this->fields.mTo.fields.y = to.fields.x;
  LOBYTE(this->fields.mFrom.fields.x) = 1;
  this->fields.mTo.fields.z = to.fields.y;
  this->fields.mNow.fields.x = to.fields.z;
  if ( sec > 0.0 )
    v14 = sec;
  else
    v14 = 0.0001;
  this->fields.mTime = UnityEngine_Time__get_time(0LL);
  this->fields.mDelay = v14;
  *(_QWORD *)&this->fields.mIsPause = endAct;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mIsPause,
    (System_Int32_array **)endAct,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v27 = Easing__Func(
          *(UnityEngine_Vector3_o *)&this->fields.mFrom.fields.y,
          *(UnityEngine_Vector3_o *)&this->fields.mTo.fields.y,
          0.0001,
          (int32_t)this[1].klass,
          0LL);
  this->fields.mEndAct = procAct;
  *(UnityEngine_Vector3_o *)&this->fields.mNow.fields.y = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.mEndAct,
    (System_Int32_array **)procAct,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  LODWORD(this[1].klass) = easingType;
  *(float *)&this->fields.mProcessAct = delay;
  BYTE4(this[1].klass) = 0;
  ActionExtensions__Call(this->fields.mEndAct, 0LL);
}


void __fastcall MoveObject__Resume(MoveObject_o *this, const MethodInfo *method)
{
  if ( LOBYTE(this->fields.mEasingType) )
  {
    LOBYTE(this->fields.mEasingType) = 0;
    this->fields.mTime = this->fields.mTime + (float)(UnityEngine_Time__get_time(0LL) - *(float *)&this->fields.mIsSkip);
  }
}


void __fastcall MoveObject__SetPause(MoveObject_o *this, bool isPause, const MethodInfo *method)
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


void __fastcall MoveObject__Skip(MoveObject_o *this, const MethodInfo *method)
{
  BYTE4(this[1].klass) = 1;
}


void __fastcall MoveObject__Stop(MoveObject_o *this, const MethodInfo *method)
{
  LOBYTE(this->fields.mFrom.fields.x) = 0;
}


void __fastcall MoveObject__Update(MoveObject_o *this, const MethodInfo *method)
{
  float mTime; // s8
  float v4; // s9
  float time; // s0
  float v6; // s0
  float v7; // s8
  System_Action_o *mEndAct; // x0
  System_Action_o *v9; // x0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( LOBYTE(this->fields.mFrom.fields.x) )
  {
    if ( !LOBYTE(this->fields.mEasingType) )
    {
      if ( BYTE4(this[1].klass)
        || (mTime = this->fields.mTime,
            v4 = *(float *)&this->fields.mProcessAct,
            (float)(mTime + v4) <= UnityEngine_Time__get_time(0LL)) )
      {
        time = UnityEngine_Time__get_time(0LL);
        v6 = UnityEngine_Mathf__Clamp01(
               (float)(time - (float)(this->fields.mTime + *(float *)&this->fields.mProcessAct)) / this->fields.mDelay,
               0LL);
        if ( BYTE4(this[1].klass) )
          v7 = 1.0;
        else
          v7 = v6;
        v10 = Easing__Func(
                *(UnityEngine_Vector3_o *)&this->fields.mFrom.fields.y,
                *(UnityEngine_Vector3_o *)&this->fields.mTo.fields.y,
                v7,
                (int32_t)this[1].klass,
                0LL);
        mEndAct = this->fields.mEndAct;
        *(UnityEngine_Vector3_o *)&this->fields.mNow.fields.y = v10;
        if ( mEndAct )
          System_Action__Invoke(mEndAct, 0LL);
        if ( v7 >= 1.0 )
        {
          v9 = *(System_Action_o **)&this->fields.mIsPause;
          LOBYTE(this->fields.mFrom.fields.x) = 0;
          if ( v9 )
            System_Action__Invoke(v9, 0LL);
        }
      }
    }
  }
}


bool __fastcall MoveObject__get_IsMoving(MoveObject_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.mFrom.fields.x);
}