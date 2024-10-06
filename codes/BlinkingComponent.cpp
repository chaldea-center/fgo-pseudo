void __fastcall BlinkingComponent___ctor(BlinkingComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlinkingComponent__Awake(BlinkingComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields.mOrgScl = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
}


void __fastcall BlinkingComponent__OnEnable(BlinkingComponent_o *this, const MethodInfo *method)
{
  this->fields.mOldTime = 0.0;
  this->fields.mIsPlay = 1;
  BlinkingComponent__PlayExec(this, method);
}


void __fastcall BlinkingComponent__Play(BlinkingComponent_o *this, const MethodInfo *method)
{
  this->fields.mOldTime = 0.0;
  this->fields.mIsPlay = 1;
  BlinkingComponent__PlayExec(this, method);
}


void __fastcall BlinkingComponent__PlayExec(BlinkingComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float realtimeSinceStartup; // s0
  _BOOL4 mIsDisp; // w8

  if ( this->fields.mIsPlay )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    if ( (float)(realtimeSinceStartup - this->fields.mOldTime) >= 0.75 )
    {
      mIsDisp = this->fields.mIsDisp;
      this->fields.mOldTime = realtimeSinceStartup;
      BlinkingComponent__SetDisp(this, !mIsDisp, v3);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlinkingComponent__SetDisp(BlinkingComponent_o *this, bool is_disp, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *p_mOrgScl; // x8
  float *p_y; // x9
  float *p_z; // x10
  float x; // s8
  float v8; // s9
  float v9; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  this->fields.mIsDisp = is_disp;
  if ( is_disp )
  {
    p_mOrgScl = (struct UnityEngine_Vector3_StaticFields *)&this->fields.mOrgScl;
    p_y = &this->fields.mOrgScl.fields.y;
    p_z = &this->fields.mOrgScl.fields.z;
  }
  else
  {
    if ( !byte_4A6A9C1 )
    {
      sub_1B90010(&UnityEngine_Vector3_TypeInfo, is_disp);
      byte_4A6A9C1 = 1;
    }
    p_mOrgScl = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &p_mOrgScl->zeroVector.fields.y;
    p_z = &p_mOrgScl->zeroVector.fields.z;
  }
  x = p_mOrgScl->zeroVector.fields.x;
  v8 = *p_y;
  v9 = *p_z;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v11.fields.x = x;
  v11.fields.y = v8;
  v11.fields.z = v9;
  GameObjectExtensions__SetLocalScale(gameObject, v11, 0LL);
}


void __fastcall BlinkingComponent__Stop(BlinkingComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.mIsPlay = 0;
  BlinkingComponent__SetDisp(this, 0, v2);
}


// attributes: thunk
void __fastcall BlinkingComponent__Update(BlinkingComponent_o *this, const MethodInfo *method)
{
  BlinkingComponent__PlayExec(this, method);
}