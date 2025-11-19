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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  int32_t v14; // w1
  UIWidget_o *v15; // x20
  float height; // s9
  double v17; // d8
  const MethodInfo *v18; // x2
  double v19; // d0
  double v20; // d0
  double v21; // d1
  double v22; // d1
  int32_t v23; // w1
  double iptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4CBAB7E & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CBAB7E = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0, 0) )
  {
    v4 = this->fields.mWidget;
    width = this->fields.width;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v6 = width;
    v10 = modf(width, &iptr);
    if ( width >= 0.0 )
    {
      if ( v10 != 0.5 )
      {
        v11 = floor(v6 + 0.5);
        goto LABEL_21;
      }
      v11 = iptr;
      v12 = 1.0;
    }
    else
    {
      if ( v10 != -0.5 )
      {
        v11 = ceil(v6 + -0.5);
        goto LABEL_21;
      }
      v11 = iptr;
      v12 = -1.0;
    }
    v13 = v11 + v12;
    if ( ((__int64)v11 & 1) != 0 )
      v11 = v13;
LABEL_21:
    if ( !v4 )
      goto LABEL_44;
    if ( v11 == INFINITY )
      v14 = 0x80000000;
    else
      v14 = (int)v11;
    UIWidget__set_width(v4, v14, v9);
    v15 = this->fields.mWidget;
    height = this->fields.height;
    if ( !byte_4CB13C8 )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CB13C8 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = height;
    v19 = modf(height, &iptr);
    if ( height >= 0.0 )
    {
      if ( v19 != 0.5 )
      {
        v20 = floor(v17 + 0.5);
        goto LABEL_39;
      }
      v20 = iptr;
      v21 = 1.0;
    }
    else
    {
      if ( v19 != -0.5 )
      {
        v20 = ceil(v17 + -0.5);
        goto LABEL_39;
      }
      v20 = iptr;
      v21 = -1.0;
    }
    v22 = v20 + v21;
    if ( ((__int64)v20 & 1) != 0 )
      v20 = v22;
LABEL_39:
    if ( v15 )
    {
      if ( v20 == INFINITY )
        v23 = 0x80000000;
      else
        v23 = (int)v20;
      UIWidget__set_height(v15, v23, v18);
      return;
    }
LABEL_44:
    sub_1C6BC60(v7, v8);
  }
}


void AnimatedWidget__OnEnable(AnimatedWidget_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4CBAB7D & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_4CBAB7D = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mWidget, (int32_t)Component_object, v4, v5);
  AnimatedWidget__LateUpdate(this, v6);
}