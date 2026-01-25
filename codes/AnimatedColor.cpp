void AnimatedColor___ctor(AnimatedColor_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.color = _Q0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AnimatedColor__LateUpdate(AnimatedColor_o *this, const MethodInfo *method)
{
  if ( !this->fields.mWidget )
    sub_1C7BD40(this, method);
  UIWidget__set_color(this->fields.mWidget, this->fields.color, method);
}


void AnimatedColor__OnEnable(AnimatedColor_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4CF2EB9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CF2EB9 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.mWidget, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  AnimatedColor__LateUpdate(this, v10);
}