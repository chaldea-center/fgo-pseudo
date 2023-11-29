void __fastcall BlinkingComponent___ctor(BlinkingComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BlinkingComponent__Awake(BlinkingComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&this->fields.mOrgScl.fields.y = GameObjectExtensions__GetLocalScale(gameObject, 0LL);
}


void __fastcall BlinkingComponent__OnEnable(BlinkingComponent_o *this, const MethodInfo *method)
{
  this->fields.mOrgScl.fields.x = 0.0;
  LOBYTE(this[1].klass) = 1;
  BlinkingComponent__PlayExec(this, method);
}


void __fastcall BlinkingComponent__Play(BlinkingComponent_o *this, const MethodInfo *method)
{
  this->fields.mOrgScl.fields.x = 0.0;
  LOBYTE(this[1].klass) = 1;
  BlinkingComponent__PlayExec(this, method);
}


void __fastcall BlinkingComponent__PlayExec(BlinkingComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float realtimeSinceStartup; // s0
  int v5; // w8

  if ( LOBYTE(this[1].klass) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    if ( (float)(realtimeSinceStartup - this->fields.mOrgScl.fields.x) >= 0.75 )
    {
      v5 = BYTE1(this[1].klass);
      this->fields.mOrgScl.fields.x = realtimeSinceStartup;
      BlinkingComponent__SetDisp(this, v5 == 0, v3);
    }
  }
}


void __fastcall BlinkingComponent__SetDisp(BlinkingComponent_o *this, bool is_disp, const MethodInfo *method)
{
  float y; // s8
  float z; // s9
  float v6; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  BYTE1(this[1].klass) = is_disp;
  if ( is_disp )
  {
    y = this->fields.mOrgScl.fields.y;
    z = this->fields.mOrgScl.fields.z;
    v6 = *(float *)&this->fields.mIsPlay;
  }
  else
  {
    zero = UnityEngine_Vector3__get_zero(0LL);
    y = zero.fields.x;
    z = zero.fields.y;
    v6 = zero.fields.z;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v9.fields.x = y;
  v9.fields.y = z;
  v9.fields.z = v6;
  GameObjectExtensions__SetLocalScale(gameObject, v9, 0LL);
}


void __fastcall BlinkingComponent__Stop(BlinkingComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  LOBYTE(this[1].klass) = 0;
  BlinkingComponent__SetDisp(this, 0, v2);
}


// attributes: thunk
void __fastcall BlinkingComponent__Update(BlinkingComponent_o *this, const MethodInfo *method)
{
  BlinkingComponent__PlayExec(this, method);
}