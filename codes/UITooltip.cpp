void UITooltip___ctor(UITooltip_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  this->fields.appearSpeed = 10.0;
  this->fields.scalingTransitions = 1;
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mSize.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.mSize.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UITooltip__Awake(UITooltip_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D353AE & 1) == 0 )
  {
    sub_1C93AD4(&UITooltip_TypeInfo);
    byte_4D353AE = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)UITooltip_TypeInfo->static_fields, (int32_t)this, v2, v3, v4, v5, v6, v7);
}


void UITooltip__Hide(const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x19
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct UITooltip_o *v9; // x0
  struct UITooltip_o *v10; // x8

  if ( (byte_4D353B5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UITooltip_TypeInfo);
    byte_4D353B5 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v9 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v9
      || (v9->fields.mHover = 0,
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9->fields.mHover, 0, v3, v4, v5, v6, v7, v8),
          (v10 = UITooltip_TypeInfo->static_fields->mInstance) == 0) )
    {
      sub_1C93D2C(v9, v2);
    }
    v10->fields.mTarget = 0.0;
  }
}


void UITooltip__OnDestroy(UITooltip_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D353AF & 1) == 0 )
  {
    sub_1C93AD4(&UITooltip_TypeInfo);
    byte_4D353AF = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)UITooltip_TypeInfo->static_fields, 0, v2, v3, v4, v5, v6, v7);
}


void UITooltip__SetAlpha(UITooltip_o *this, float val, const MethodInfo *method)
{
  struct UIWidget_array *mWidgets; // x8
  int max_length; // w20
  UITooltip_o *v5; // x19
  unsigned int v7; // w21
  UnityEngine_Color_o v8; // 0:kr00_16.16

  mWidgets = this->fields.mWidgets;
  if ( !mWidgets )
    goto LABEL_8;
  max_length = mWidgets->max_length;
  if ( max_length >= 1 )
  {
    v5 = this;
    v7 = 0;
    do
    {
      if ( v7 >= LODWORD(mWidgets->max_length) )
        sub_1C93D34(this);
      this = (UITooltip_o *)mWidgets->m_Items[v7];
      if ( !this )
        break;
      v8.fields.r = *((float *)this + 37);
      *(_QWORD *)&v8.fields.g = *((_QWORD *)this + 19);
      v8.fields.a = val;
      UIWidget__set_color((UIWidget_o *)this, v8, 0);
      if ( max_length == ++v7 )
        return;
      mWidgets = v5->fields.mWidgets;
    }
    while ( mWidgets );
LABEL_8:
    sub_1C93D2C(this, method);
  }
}


void UITooltip__SetText(UITooltip_o *this, System_String_o *tooltipText, const MethodInfo *method)
{
  UnityEngine_Object_o *text; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  GrandQuestFolderBoardItem_o *p_mHover; // x19
  UICamera_c *v13; // x0
  struct UnityEngine_GameObject_o *hoveredObject; // x1
  __int64 v15; // x1
  UILabel_o *transform; // x0
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Vector2_o printedSize; // kr68_8
  UnityEngine_Object_o *background; // x20
  float v20; // s0
  float v21; // s2
  float v22; // s1
  float v23; // s3
  float v24; // s9
  float v25; // s0
  UIWidget_o *v26; // x20
  double v27; // d8
  double v28; // d0
  double v29; // d0
  double v30; // d1
  double v31; // d1
  int32_t v32; // w1
  UIWidget_o *v33; // x20
  float y; // s9
  double v35; // d8
  double v36; // d0
  double v37; // d0
  double v38; // d1
  double v39; // d1
  int32_t v40; // w1
  UnityEngine_Object_o *uiCamera; // x20
  bool v42; // w0
  float x; // s8
  int32_t width; // w0
  float v45; // s10
  float v46; // s0
  float v47; // s1
  float v48; // s0
  float height; // s0
  float v50; // s0
  float v51; // s1
  float v52; // s0
  float orthographicSize; // s0
  float v54; // s8
  float v55; // s8
  int32_t v56; // w0
  float v57; // s9
  float v58; // s8
  int32_t v59; // w0
  float v60; // s10
  int v61; // w20
  float v62; // s2
  UnityEngine_Transform_o *mTrans; // x20
  double v65; // d0
  double v66; // d0
  float v67; // s1
  float v68; // s9
  float v69; // s0
  float v70; // s8
  int32_t v71; // w0
  float v72; // s10
  __int64 v73; // x8
  float v74; // s0
  float v75; // s1
  float v76; // s8
  double v77; // d0
  double v78; // d0
  float v79; // s1
  __int64 v80; // x8
  float v81; // s0
  unsigned __int64 localPosition; // kr20_8
  unsigned __int64 localScale; // kr60_8
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o mousePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v86; // 0:kr54_12.12
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D353B2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D353B2 = 1;
  }
  text = (UnityEngine_Object_o *)this->fields.text;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(text, 0, 0) || System_String__IsNullOrEmpty(tooltipText, 0) )
  {
    this->fields.mHover = 0;
    p_mHover = (GrandQuestFolderBoardItem_o *)&this->fields.mHover;
    sub_1C93A78(p_mHover, 0, v6, v7, v8, v9, v10, v11);
    p_mHover->fields.selectNum = 0;
    return;
  }
  this->fields.mTarget = 1.0;
  v13 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v13 = UICamera_TypeInfo;
  }
  hoveredObject = v13->static_fields->hoveredObject;
  this->fields.mHover = hoveredObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mHover, (int32_t)hoveredObject, v6, v7, v8, v9, v10, v11);
  transform = this->fields.text;
  if ( !transform )
    goto LABEL_101;
  UILabel__set_text(transform, tooltipText, 0);
  mousePosition = UnityEngine_Input__get_mousePosition(0);
  transform = this->fields.text;
  this->fields.mPos = mousePosition;
  if ( !transform )
    goto LABEL_101;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_101;
  v17 = (UnityEngine_Transform_o *)transform;
  localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  localScale = (unsigned __int64)UnityEngine_Transform__get_localScale(v17, 0);
  transform = this->fields.text;
  if ( !transform )
    goto LABEL_101;
  printedSize = UILabel__get_printedSize(transform, 0);
  this->fields.mSize.fields.z = 0.0;
  this->fields.mSize.fields.x = *(float *)&localScale * printedSize.fields.x;
  this->fields.mSize.fields.y = *((float *)&localScale + 1) * printedSize.fields.y;
  background = (UnityEngine_Object_o *)this->fields.background;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(background, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.background;
    if ( !transform )
      goto LABEL_101;
    v20 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._36_get_border.methodPtr)(
            transform,
            transform->klass->vtable._36_get_border.method);
    v24 = this->fields.mSize.fields.x
        + (float)((float)(v20 + v21)
                + (float)((float)(*(float *)&localPosition - v20) + (float)(*(float *)&localPosition - v20)));
    v25 = this->fields.mSize.fields.y
        + (float)((float)(v22 + v23)
                + (float)((float)((float)-*((float *)&localPosition + 1) - v22)
                        + (float)((float)-*((float *)&localPosition + 1) - v22)));
    this->fields.mSize.fields.x = v24;
    this->fields.mSize.fields.y = v25;
    v26 = (UIWidget_o *)this->fields.background;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v27 = v24;
    v28 = modf(v24, &iptr);
    if ( v24 >= 0.0 )
    {
      if ( v28 != 0.5 )
      {
        v29 = floor(v27 + 0.5);
        goto LABEL_32;
      }
      v29 = iptr;
      v30 = 1.0;
    }
    else
    {
      if ( v28 != -0.5 )
      {
        v29 = ceil(v27 + -0.5);
        goto LABEL_32;
      }
      v29 = iptr;
      v30 = -1.0;
    }
    v31 = v29 + v30;
    if ( ((__int64)v29 & 1) != 0 )
      v29 = v31;
LABEL_32:
    if ( !v26 )
      goto LABEL_101;
    if ( v29 == INFINITY )
      v32 = 0x80000000;
    else
      v32 = (int)v29;
    UIWidget__set_width(v26, v32, 0);
    v33 = (UIWidget_o *)this->fields.background;
    y = this->fields.mSize.fields.y;
    if ( !byte_4D2A83C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A83C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v35 = y;
    v36 = modf(y, &iptr);
    if ( y >= 0.0 )
    {
      if ( v36 == 0.5 )
      {
        v37 = iptr;
        v38 = 1.0;
LABEL_45:
        v39 = v37 + v38;
        if ( ((__int64)v37 & 1) != 0 )
          v37 = v39;
        goto LABEL_50;
      }
      v37 = floor(v35 + 0.5);
    }
    else
    {
      if ( v36 == -0.5 )
      {
        v37 = iptr;
        v38 = -1.0;
        goto LABEL_45;
      }
      v37 = ceil(v35 + -0.5);
    }
LABEL_50:
    if ( !v33 )
      goto LABEL_101;
    if ( v37 == INFINITY )
      v40 = 0x80000000;
    else
      v40 = (int)v37;
    UIWidget__set_height(v33, v40, 0);
  }
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v42 = UnityEngine_Object__op_Inequality(uiCamera, 0, 0);
  x = this->fields.mPos.fields.x;
  if ( v42 )
  {
    width = UnityEngine_Screen__get_width(0);
    v45 = this->fields.mPos.fields.y;
    v46 = x / (float)width;
    v47 = fminf(v46, 1.0);
    if ( v46 < 0.0 )
      v48 = 0.0;
    else
      v48 = v47;
    this->fields.mPos.fields.x = v48;
    height = (float)UnityEngine_Screen__get_height(0);
    transform = (UILabel_o *)this->fields.uiCamera;
    v50 = v45 / height;
    v51 = fminf(v50, 1.0);
    if ( v50 < 0.0 )
      v52 = 0.0;
    else
      v52 = v51;
    this->fields.mPos.fields.y = v52;
    if ( !transform )
      goto LABEL_101;
    orthographicSize = UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)transform, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_101;
    v54 = orthographicSize;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_101;
    v55 = v54
        / COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0).fields.y));
    v56 = UnityEngine_Screen__get_height(0);
    v57 = this->fields.mSize.fields.x;
    v58 = (float)((float)v56 * 0.5) / v55;
    v59 = UnityEngine_Screen__get_width(0);
    v60 = this->fields.mSize.fields.y;
    v61 = v59;
    v62 = (float)(v58 * v60) / (float)UnityEngine_Screen__get_height(0);
    v87.fields.x = 1.0 - (float)((float)(v57 * v58) / (float)v61);
    v87.fields.y = this->fields.mPos.fields.y;
    transform = (UILabel_o *)this->fields.uiCamera;
    if ( this->fields.mPos.fields.x < v87.fields.x )
      v87.fields.x = this->fields.mPos.fields.x;
    if ( v87.fields.y <= v62 )
      v87.fields.y = v62;
    this->fields.mPos.fields.x = v87.fields.x;
    this->fields.mPos.fields.y = v87.fields.y;
    if ( !transform )
      goto LABEL_101;
    v87.fields.z = this->fields.mPos.fields.z;
    mTrans = this->fields.mTrans;
    v89 = UnityEngine_Camera__ViewportToWorldPoint_71924496((UnityEngine_Camera_o *)transform, v87, 0);
    if ( !mTrans )
      goto LABEL_101;
    UnityEngine_Transform__set_position(mTrans, v89, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_101;
    v86 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.mPos = v86;
    v65 = modf(v86.fields.x, &iptr);
    if ( v86.fields.x >= 0.0 )
    {
      if ( v65 != 0.5 )
      {
        v74 = floorf(v86.fields.x + 0.5);
        goto LABEL_89;
      }
      v66 = iptr;
      v67 = 1.0;
    }
    else
    {
      if ( v65 != -0.5 )
      {
        v74 = ceilf(v86.fields.x + -0.5);
        goto LABEL_89;
      }
      v66 = iptr;
      v67 = -1.0;
    }
    v73 = (__int64)v66;
    v74 = v66;
    v75 = v74 + v67;
    if ( (v73 & 1) != 0 )
      v74 = v75;
LABEL_89:
    v76 = this->fields.mPos.fields.y;
    this->fields.mPos.fields.x = v74;
    v77 = modf(v76, &iptr);
    if ( v76 >= 0.0 )
    {
      if ( v77 != 0.5 )
      {
        v88.fields.y = floorf(v76 + 0.5);
        goto LABEL_99;
      }
      v78 = iptr;
      v79 = 1.0;
    }
    else
    {
      if ( v77 != -0.5 )
      {
        v88.fields.y = ceilf(v76 + -0.5);
        goto LABEL_99;
      }
      v78 = iptr;
      v79 = -1.0;
    }
    v80 = (__int64)v78;
    v81 = v78;
    v88.fields.y = v81 + v79;
    if ( (v80 & 1) == 0 )
      v88.fields.y = v81;
LABEL_99:
    transform = (UILabel_o *)this->fields.mTrans;
    this->fields.mPos.fields.y = v88.fields.y;
    if ( transform )
    {
      v88.fields.z = this->fields.mPos.fields.z;
      v88.fields.x = this->fields.mPos.fields.x;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v88, 0);
      return;
    }
LABEL_101:
    sub_1C93D2C(transform, v15);
  }
  v68 = this->fields.mSize.fields.x;
  if ( (float)(x + v68) > (float)UnityEngine_Screen__get_width(0) )
    this->fields.mPos.fields.x = (float)UnityEngine_Screen__get_width(0) - this->fields.mSize.fields.x;
  v69 = this->fields.mSize.fields.y;
  if ( (float)(this->fields.mPos.fields.y - v69) < 0.0 )
    this->fields.mPos.fields.y = v69;
  v70 = this->fields.mPos.fields.x;
  v71 = UnityEngine_Screen__get_width(0);
  v72 = this->fields.mPos.fields.y;
  this->fields.mPos.fields.x = v70 - (float)((float)v71 * 0.5);
  this->fields.mPos.fields.y = v72 - (float)((float)UnityEngine_Screen__get_height(0) * 0.5);
}


void UITooltip__Show(System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x20
  __int64 v4; // x1
  struct UITooltip_o *v5; // x0

  if ( (byte_4D353B4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UITooltip_TypeInfo);
    byte_4D353B4 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    ((void (__fastcall *)(struct UITooltip_o *, System_String_o *, const MethodInfo *))v5->klass->vtable._7_SetText.methodPtr)(
      v5,
      text,
      v5->klass->vtable._7_SetText.method);
  }
}


void UITooltip__ShowText(System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x20
  __int64 v4; // x1
  struct UITooltip_o *v5; // x0

  if ( (byte_4D353B3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UITooltip_TypeInfo);
    byte_4D353B3 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5 )
      sub_1C93D2C(0, v4);
    ((void (__fastcall *)(struct UITooltip_o *, System_String_o *, const MethodInfo *))v5->klass->vtable._7_SetText.methodPtr)(
      v5,
      text,
      v5->klass->vtable._7_SetText.method);
  }
}


void UITooltip__Start(UITooltip_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Object_array *ComponentsInChildren_object__52018868; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1
  UnityEngine_Transform_o *mTrans; // x0
  UnityEngine_Object_o *uiCamera; // x21
  int32_t layer; // w21
  struct UnityEngine_Camera_o *CameraForLayer; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12

  if ( (byte_4D353B0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D353B0 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  ComponentsInChildren_object__52018868 = UnityEngine_Component__GetComponentsInChildren_object__52018868(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_319BEB4 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
  this->fields.mWidgets = (struct UIWidget_array *)ComponentsInChildren_object__52018868;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mWidgets,
    (int32_t)ComponentsInChildren_object__52018868,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  mTrans = this->fields.mTrans;
  if ( !mTrans )
    goto LABEL_12;
  localPosition = UnityEngine_Transform__get_localPosition(mTrans, 0);
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  this->fields.mPos = localPosition;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(uiCamera, 0, 0) )
  {
    mTrans = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( mTrans )
    {
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)mTrans, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
      this->fields.uiCamera = CameraForLayer;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.uiCamera,
        (int32_t)CameraForLayer,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C93D2C(mTrans, v17);
  }
LABEL_11:
  ((void (__fastcall *)(UITooltip_o *, const MethodInfo *, float))this->klass->vtable._6_SetAlpha.methodPtr)(
    this,
    this->klass->vtable._6_SetAlpha.method,
    0.0);
}


void UITooltip__Update(UITooltip_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mHover; // x21
  UICamera_c *v4; // x0
  UnityEngine_Object_o *hoveredObject; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  float mTarget; // s9
  float mCurrent; // s8
  float v14; // s0
  float v15; // s2
  float v16; // s1
  float v17; // s0
  float v18; // s0
  __int64 v19; // x1
  float32x2_t v20; // d9
  float z; // s10
  float v22; // s8
  UnityEngine_Transform_o *mTrans; // x0
  float v24; // s0
  float32x2_t v25; // d3
  float32x2_t v31; // d2
  float32x2_t v32; // d5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s10
  float x; // s11
  float v36; // s9
  float v37; // s2
  UnityEngine_Vector3_o v38; // 0:kr00_12.12
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D353B1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D353B1 = 1;
  }
  mHover = (UnityEngine_Object_o *)this->fields.mHover;
  v4 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v4 = UICamera_TypeInfo;
  }
  hoveredObject = (UnityEngine_Object_o *)v4->static_fields->hoveredObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mHover, hoveredObject, 0) )
  {
    this->fields.mHover = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mHover, 0, v6, v7, v8, v9, v10, v11);
    mTarget = 0.0;
    this->fields.mTarget = 0.0;
  }
  else
  {
    mTarget = this->fields.mTarget;
  }
  mCurrent = this->fields.mCurrent;
  if ( mCurrent != mTarget )
  {
    v14 = RealTime__get_deltaTime(0) * this->fields.appearSpeed;
    v15 = fminf(v14, 1.0);
    v16 = this->fields.mTarget;
    if ( v14 < 0.0 )
      v17 = 0.0;
    else
      v17 = v15;
    v18 = mCurrent + (float)((float)(mTarget - mCurrent) * v17);
    this->fields.mCurrent = v18;
    if ( vabds_f32(v18, v16) < 0.001 )
    {
      v18 = v16;
      this->fields.mCurrent = v16;
    }
    ((void (__fastcall *)(UITooltip_o *, const MethodInfo *, float))this->klass->vtable._6_SetAlpha.methodPtr)(
      this,
      this->klass->vtable._6_SetAlpha.method,
      v18 * v18);
    if ( this->fields.scalingTransitions )
    {
      v20.n64_u64[0] = *(unsigned __int64 *)&this->fields.mSize.fields.x;
      z = this->fields.mSize.fields.z;
      if ( !byte_4D2A13E )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      v22 = this->fields.mCurrent;
      mTrans = this->fields.mTrans;
      v24 = fminf(v22, 1.0);
      if ( v22 < 0.0 )
        v24 = 0.0;
      if ( !mTrans )
        goto LABEL_25;
      v25.n64_u64[0] = *(unsigned __int64 *)&this->fields.mPos.fields.x;
      __asm { FMOV            V2.2S, #0.25 }
      v31.n64_u64[0] = vmul_f32(v20, _D2).n64_u64[0];
      v32.n64_u32[0] = vsub_f32(v25, v31).n64_u32[0];
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v32.n64_u32[1] = vadd_f32(v25, v31).n64_u32[1];
      v31.n64_f32[0] = (float)(this->fields.mPos.fields.z - (float)(z * 0.25))
                     + (float)(v24
                             * (float)(this->fields.mPos.fields.z
                                     - (float)(this->fields.mPos.fields.z - (float)(z * 0.25))));
      x = static_fields->oneVector.fields.x;
      y = static_fields->oneVector.fields.y;
      v36 = static_fields->oneVector.fields.z;
      *(float32x2_t *)&v38.fields.x = vadd_f32(v32, vmul_n_f32(vsub_f32(v25, v32), v24));
      LODWORD(v38.fields.z) = v31.n64_u32[0];
      UnityEngine_Transform__set_localPosition(mTrans, v38, 0);
      mTrans = this->fields.mTrans;
      if ( !mTrans )
LABEL_25:
        sub_1C93D2C(mTrans, v19);
      v37 = (float)(v22 * -0.5) + 1.5;
      v39.fields.x = x * v37;
      v39.fields.y = y * v37;
      v39.fields.z = v36 * v37;
      UnityEngine_Transform__set_localScale(mTrans, v39, 0);
    }
  }
}


bool UITooltip__get_isVisible(const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1
  struct UITooltip_o *v4; // x8

  if ( (byte_4D353AD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UITooltip_TypeInfo);
    byte_4D353AD = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( !v2 )
    return 0;
  v4 = UITooltip_TypeInfo->static_fields->mInstance;
  if ( !v4 )
    sub_1C93D2C(v2, v3);
  return v4->fields.mTarget == 1.0;
}