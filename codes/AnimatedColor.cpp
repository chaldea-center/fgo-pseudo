void AnimatedColor___ctor(AnimatedColor_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.color = _Q0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AnimatedColor__LateUpdate(AnimatedColor_o *this, const MethodInfo *method)
{
  if ( !this->fields.mWidget )
    sub_1C6BC60(this, method);
  UIWidget__set_color(this->fields.mWidget, this->fields.color, method);
}


void AnimatedColor__OnEnable(AnimatedColor_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4CBAB7C & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CBAB7C = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v4, v5);
  AnimatedColor__LateUpdate(this, v6);
}