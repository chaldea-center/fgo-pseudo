void AnimatedWidget___ctor(AnimatedWidget_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.width = _D0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AnimatedWidget__LateUpdate(AnimatedWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  UIWidget_o *v4; // x20
  float width; // s9
  double v6; // d8
  __int64 v7; // x0
  const MethodInfo *v8; // x2
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  int32_t v13; // w1
  UIWidget_o *v14; // x20
  float height; // s9
  double v16; // d8
  const MethodInfo *v17; // x2
  double v18; // d0
  double v19; // d0
  double v20; // d1
  double v21; // d1
  int32_t v22; // w1
  double iptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3C22F & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C22F = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0, 0) )
  {
    v4 = this->fields.mWidget;
    width = this->fields.width;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v6 = width;
    v9 = modf(width, &iptr);
    if ( width >= 0.0 )
    {
      if ( v9 != 0.5 )
      {
        v10 = floor(v6 + 0.5);
        goto LABEL_21;
      }
      v10 = iptr;
      v11 = 1.0;
    }
    else
    {
      if ( v9 != -0.5 )
      {
        v10 = ceil(v6 + -0.5);
        goto LABEL_21;
      }
      v10 = iptr;
      v11 = -1.0;
    }
    v12 = v10 + v11;
    if ( ((__int64)v10 & 1) != 0 )
      v10 = v12;
LABEL_21:
    if ( !v4 )
      goto LABEL_44;
    if ( v10 == INFINITY )
      v13 = 0x80000000;
    else
      v13 = (int)v10;
    UIWidget__set_width(v4, v13, v8);
    v14 = this->fields.mWidget;
    height = this->fields.height;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v16 = height;
    v18 = modf(height, &iptr);
    if ( height >= 0.0 )
    {
      if ( v18 != 0.5 )
      {
        v19 = floor(v16 + 0.5);
        goto LABEL_39;
      }
      v19 = iptr;
      v20 = 1.0;
    }
    else
    {
      if ( v18 != -0.5 )
      {
        v19 = ceil(v16 + -0.5);
        goto LABEL_39;
      }
      v19 = iptr;
      v20 = -1.0;
    }
    v21 = v19 + v20;
    if ( ((__int64)v19 & 1) != 0 )
      v19 = v21;
LABEL_39:
    if ( v14 )
    {
      if ( v19 == INFINITY )
        v22 = 0x80000000;
      else
        v22 = (int)v19;
      UIWidget__set_height(v14, v22, v17);
      return;
    }
LABEL_44:
    sub_1C32E7C(v7);
  }
}


void AnimatedWidget__OnEnable(AnimatedWidget_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C3C22E & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4C3C22E = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v4, v5);
  AnimatedWidget__LateUpdate(this, v6);
}