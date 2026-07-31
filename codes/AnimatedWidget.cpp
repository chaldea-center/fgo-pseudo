void AnimatedWidget___ctor(AnimatedWidget_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.2S, #1.0 }
  *(_QWORD *)&this->fields.width = _D0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AnimatedWidget__LateUpdate(AnimatedWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mWidget; // x20
  __int64 v4; // x1
  UIWidget_o *v5; // x20
  float width; // s9
  double v7; // d8
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  double v11; // d0
  double v12; // d0
  double v13; // d1
  double v14; // d1
  int32_t v15; // w1
  __int64 v16; // x1
  UIWidget_o *v17; // x20
  float height; // s9
  double v19; // d8
  const MethodInfo *v20; // x2
  double v21; // d0
  double v22; // d0
  double v23; // d1
  double v24; // d1
  int32_t v25; // w1
  double iptr; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_593CF06 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CF06 = 1;
  }
  mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mWidget, 0, 0) )
  {
    v5 = this->fields.mWidget;
    width = this->fields.width;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
    v7 = width;
    v11 = modf(width, &iptr);
    if ( width >= 0.0 )
    {
      if ( v11 != 0.5 )
      {
        v12 = floor(v7 + 0.5);
        goto LABEL_21;
      }
      v13 = 1.0;
      v12 = iptr;
    }
    else
    {
      if ( v11 != -0.5 )
      {
        v12 = ceil(v7 + -0.5);
        goto LABEL_21;
      }
      v12 = iptr;
      v13 = -1.0;
    }
    v14 = v12 + v13;
    if ( ((__int64)v12 & 1) != 0 )
      v12 = v14;
LABEL_21:
    if ( !v5 )
      goto LABEL_44;
    if ( v12 == INFINITY )
      v15 = 0x80000000;
    else
      v15 = (int)v12;
    UIWidget__set_width(v5, v15, v10);
    v17 = this->fields.mWidget;
    height = this->fields.height;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v16);
    v19 = height;
    v21 = modf(height, &iptr);
    if ( height >= 0.0 )
    {
      if ( v21 != 0.5 )
      {
        v22 = floor(v19 + 0.5);
        goto LABEL_39;
      }
      v23 = 1.0;
      v22 = iptr;
    }
    else
    {
      if ( v21 != -0.5 )
      {
        v22 = ceil(v19 + -0.5);
        goto LABEL_39;
      }
      v22 = iptr;
      v23 = -1.0;
    }
    v24 = v22 + v23;
    if ( ((__int64)v22 & 1) != 0 )
      v22 = v24;
LABEL_39:
    if ( v17 )
    {
      if ( v22 == INFINITY )
        v25 = 0x80000000;
      else
        v25 = (int)v22;
      UIWidget__set_height(v17, v25, v20);
      return;
    }
LABEL_44:
    sub_21FFECC(v8, v9);
  }
}


void AnimatedWidget__OnEnable(AnimatedWidget_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  if ( (byte_593CF05 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_593CF05 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mWidget,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  AnimatedWidget__LateUpdate(this, v10);
}