void UITooltip___ctor(UITooltip_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  this->fields.appearSpeed = 10.0;
  this->fields.scalingTransitions = 1;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
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
  const MethodInfo *v3; // x3

  if ( (byte_4C478AD & 1) == 0 )
  {
    sub_1C37058(&UITooltip_TypeInfo);
    byte_4C478AD = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = this;
  sub_1C36FFC((CGThumbnailListItem_o *)UITooltip_TypeInfo->static_fields, (int32_t)this, v2, v3);
}


void UITooltip__Hide(const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UITooltip_o *v4; // x0
  struct UITooltip_o *v5; // x8

  if ( (byte_4C478B4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UITooltip_TypeInfo);
    byte_4C478B4 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v4 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v4
      || (v4->fields.mHover = 0,
          sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.mHover, 0, v2, v3),
          (v5 = UITooltip_TypeInfo->static_fields->mInstance) == 0) )
    {
      sub_1C372B4(v4);
    }
    v5->fields.mTarget = 0.0;
  }
}


void UITooltip__OnDestroy(UITooltip_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C478AE & 1) == 0 )
  {
    sub_1C37058(&UITooltip_TypeInfo);
    byte_4C478AE = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)UITooltip_TypeInfo->static_fields, 0, v2, v3);
}


void UITooltip__SetAlpha(UITooltip_o *this, float val, const MethodInfo *method)
{
  struct UIWidget_array *mWidgets; // x8
  int max_length; // w20
  UITooltip_o *v5; // x19
  unsigned int v7; // w21
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
        sub_1C372BC(this);
      this = (UITooltip_o *)mWidgets->m_Items[v7];
      if ( !this )
        break;
      v8.fields.r = *((float *)&this[1].fields.m_CancellationTokenSource + 1);
      v8.fields.g = *(float *)&this[1].fields.uiCamera;
      v8.fields.b = *((float *)&this[1].fields.uiCamera + 1);
      v8.fields.a = val;
      UIWidget__set_color((UIWidget_o *)this, v8, 0);
      if ( max_length == ++v7 )
        return;
      mWidgets = v5->fields.mWidgets;
    }
    while ( mWidgets );
LABEL_8:
    sub_1C372B4(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void UITooltip__SetText(UITooltip_o *this, System_String_o *tooltipText, const MethodInfo *method)
{
  UnityEngine_Object_o *text; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  CGThumbnailListItem_o *p_mHover; // x19
  UICamera_c *v9; // x0
  struct UnityEngine_GameObject_o *hoveredObject; // x1
  UILabel_o *transform; // x0
  UnityEngine_Transform_o *v12; // x20
  float x; // s9
  float y; // s8
  float v15; // s10
  float v16; // s11
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Object_o *background; // x20
  float v19; // s0
  float v20; // s2
  float v21; // s1
  float v22; // s3
  float v23; // s9
  float v24; // s0
  UIWidget_o *v25; // x20
  double v26; // d8
  double v27; // d0
  double v28; // d0
  double v29; // d1
  double v30; // d1
  int32_t v31; // w1
  UIWidget_o *v32; // x20
  float v33; // s9
  double v34; // d8
  double v35; // d0
  double v36; // d0
  double v37; // d1
  double v38; // d1
  int32_t v39; // w1
  UnityEngine_Object_o *uiCamera; // x20
  bool v41; // w0
  float v42; // s8
  int32_t width; // w0
  float v44; // s10
  float v45; // s0
  float v46; // s1
  float v47; // s0
  float height; // s0
  float v49; // s0
  float v50; // s1
  float v51; // s0
  float orthographicSize; // s0
  float v53; // s8
  float v54; // s8
  int32_t v55; // w0
  float v56; // s9
  float v57; // s8
  int32_t v58; // w0
  float v59; // s10
  int v60; // w20
  float v61; // s2
  float v62; // s0 OVERLAPPED
  float v63; // s1
  float z; // s2
  UnityEngine_Transform_o *mTrans; // x20
  float v66; // s8
  double v67; // d0
  double v68; // d0
  float v69; // s1
  float v70; // s9
  float v71; // s0
  float v72; // s8
  int32_t v73; // w0
  float v74; // s10
  __int64 v75; // x8
  float v76; // s0
  float v77; // s1
  float v78; // s8
  double v79; // d0
  double v80; // d0
  float v81; // s1
  __int64 v82; // x8
  float v83; // s0
  float v84; // s1 OVERLAPPED
  float v85; // s2
  float v86; // s0
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C478B1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C478B1 = 1;
  }
  text = (UnityEngine_Object_o *)this->fields.text;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(text, 0, 0) || System_String__IsNullOrEmpty(tooltipText, 0) )
  {
    this->fields.mHover = 0;
    p_mHover = (CGThumbnailListItem_o *)&this->fields.mHover;
    sub_1C36FFC(p_mHover, 0, v6, v7);
    p_mHover->fields.selectNum = 0;
    return;
  }
  this->fields.mTarget = 1.0;
  v9 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  hoveredObject = v9->static_fields->hoveredObject;
  this->fields.mHover = hoveredObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mHover, (int32_t)hoveredObject, v6, v7);
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
  v12 = (UnityEngine_Transform_o *)transform;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  localScale = UnityEngine_Transform__get_localScale(v12, 0);
  transform = this->fields.text;
  if ( !transform )
    goto LABEL_101;
  v15 = localScale.fields.x;
  v16 = localScale.fields.y;
  printedSize = UILabel__get_printedSize(transform, 0);
  this->fields.mSize.fields.z = 0.0;
  this->fields.mSize.fields.x = v15 * printedSize.fields.x;
  this->fields.mSize.fields.y = v16 * printedSize.fields.y;
  background = (UnityEngine_Object_o *)this->fields.background;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(background, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.background;
    if ( !transform )
      goto LABEL_101;
    v19 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._36_get_border.methodPtr)(
            transform,
            transform->klass->vtable._36_get_border.method);
    v23 = this->fields.mSize.fields.x + (float)((float)(v19 + v20) + (float)((float)(x - v19) + (float)(x - v19)));
    v24 = this->fields.mSize.fields.y
        + (float)((float)(v21 + v22) + (float)((float)((float)-y - v21) + (float)((float)-y - v21)));
    this->fields.mSize.fields.x = v23;
    this->fields.mSize.fields.y = v24;
    v25 = (UIWidget_o *)this->fields.background;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v26 = v23;
    v27 = modf(v23, &iptr);
    if ( v23 >= 0.0 )
    {
      if ( v27 != 0.5 )
      {
        v28 = floor(v26 + 0.5);
        goto LABEL_32;
      }
      v28 = iptr;
      v29 = 1.0;
    }
    else
    {
      if ( v27 != -0.5 )
      {
        v28 = ceil(v26 + -0.5);
        goto LABEL_32;
      }
      v28 = iptr;
      v29 = -1.0;
    }
    v30 = v28 + v29;
    if ( ((__int64)v28 & 1) != 0 )
      v28 = v30;
LABEL_32:
    if ( !v25 )
      goto LABEL_101;
    if ( v28 == INFINITY )
      v31 = 0x80000000;
    else
      v31 = (int)v28;
    UIWidget__set_width(v25, v31, 0);
    v32 = (UIWidget_o *)this->fields.background;
    v33 = this->fields.mSize.fields.y;
    if ( !byte_4C3E100 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3E100 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v34 = v33;
    v35 = modf(v33, &iptr);
    if ( v33 >= 0.0 )
    {
      if ( v35 == 0.5 )
      {
        v36 = iptr;
        v37 = 1.0;
LABEL_45:
        v38 = v36 + v37;
        if ( ((__int64)v36 & 1) != 0 )
          v36 = v38;
        goto LABEL_50;
      }
      v36 = floor(v34 + 0.5);
    }
    else
    {
      if ( v35 == -0.5 )
      {
        v36 = iptr;
        v37 = -1.0;
        goto LABEL_45;
      }
      v36 = ceil(v34 + -0.5);
    }
LABEL_50:
    if ( !v32 )
      goto LABEL_101;
    if ( v36 == INFINITY )
      v39 = 0x80000000;
    else
      v39 = (int)v36;
    UIWidget__set_height(v32, v39, 0);
  }
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v41 = UnityEngine_Object__op_Inequality(uiCamera, 0, 0);
  v42 = this->fields.mPos.fields.x;
  if ( v41 )
  {
    width = UnityEngine_Screen__get_width(0);
    v44 = this->fields.mPos.fields.y;
    v45 = v42 / (float)width;
    v46 = fminf(v45, 1.0);
    if ( v45 < 0.0 )
      v47 = 0.0;
    else
      v47 = v46;
    this->fields.mPos.fields.x = v47;
    height = (float)UnityEngine_Screen__get_height(0);
    transform = (UILabel_o *)this->fields.uiCamera;
    v49 = v44 / height;
    v50 = fminf(v49, 1.0);
    if ( v49 < 0.0 )
      v51 = 0.0;
    else
      v51 = v50;
    this->fields.mPos.fields.y = v51;
    if ( !transform )
      goto LABEL_101;
    orthographicSize = UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)transform, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_101;
    v53 = orthographicSize;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_101;
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0);
    v54 = v53 / lossyScale.fields.y;
    v55 = UnityEngine_Screen__get_height(0);
    v56 = this->fields.mSize.fields.x;
    v57 = (float)((float)v55 * 0.5) / v54;
    v58 = UnityEngine_Screen__get_width(0);
    v59 = this->fields.mSize.fields.y;
    v60 = v58;
    v61 = (float)(v57 * v59) / (float)UnityEngine_Screen__get_height(0);
    v62 = 1.0 - (float)((float)(v56 * v57) / (float)v60);
    v63 = this->fields.mPos.fields.y;
    transform = (UILabel_o *)this->fields.uiCamera;
    if ( this->fields.mPos.fields.x < v62 )
      v62 = this->fields.mPos.fields.x;
    if ( v63 <= v61 )
      v63 = v61;
    this->fields.mPos.fields.x = v62;
    this->fields.mPos.fields.y = v63;
    if ( !transform )
      goto LABEL_101;
    z = this->fields.mPos.fields.z;
    mTrans = this->fields.mTrans;
    v92 = UnityEngine_Camera__ViewportToWorldPoint_71073036(
            (UnityEngine_Camera_o *)transform,
            *(UnityEngine_Vector3_o *)&v62,
            0);
    if ( !mTrans )
      goto LABEL_101;
    UnityEngine_Transform__set_position(mTrans, v92, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_101;
    v93 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    v66 = v93.fields.x;
    this->fields.mPos = v93;
    v67 = modf(v93.fields.x, &iptr);
    if ( v66 >= 0.0 )
    {
      if ( v67 != 0.5 )
      {
        v76 = floorf(v66 + 0.5);
        goto LABEL_89;
      }
      v68 = iptr;
      v69 = 1.0;
    }
    else
    {
      if ( v67 != -0.5 )
      {
        v76 = ceilf(v66 + -0.5);
        goto LABEL_89;
      }
      v68 = iptr;
      v69 = -1.0;
    }
    v75 = (__int64)v68;
    v76 = v68;
    v77 = v76 + v69;
    if ( (v75 & 1) != 0 )
      v76 = v77;
LABEL_89:
    v78 = this->fields.mPos.fields.y;
    this->fields.mPos.fields.x = v76;
    v79 = modf(v78, &iptr);
    if ( v78 >= 0.0 )
    {
      if ( v79 != 0.5 )
      {
        v84 = floorf(v78 + 0.5);
        goto LABEL_99;
      }
      v80 = iptr;
      v81 = 1.0;
    }
    else
    {
      if ( v79 != -0.5 )
      {
        v84 = ceilf(v78 + -0.5);
        goto LABEL_99;
      }
      v80 = iptr;
      v81 = -1.0;
    }
    v82 = (__int64)v80;
    v83 = v80;
    v84 = v83 + v81;
    if ( (v82 & 1) == 0 )
      v84 = v83;
LABEL_99:
    transform = (UILabel_o *)this->fields.mTrans;
    this->fields.mPos.fields.y = v84;
    if ( transform )
    {
      v85 = this->fields.mPos.fields.z;
      v86 = this->fields.mPos.fields.x;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v84 - 1),
        0);
      return;
    }
LABEL_101:
    sub_1C372B4(transform);
  }
  v70 = this->fields.mSize.fields.x;
  if ( (float)(v42 + v70) > (float)UnityEngine_Screen__get_width(0) )
    this->fields.mPos.fields.x = (float)UnityEngine_Screen__get_width(0) - this->fields.mSize.fields.x;
  v71 = this->fields.mSize.fields.y;
  if ( (float)(this->fields.mPos.fields.y - v71) < 0.0 )
    this->fields.mPos.fields.y = v71;
  v72 = this->fields.mPos.fields.x;
  v73 = UnityEngine_Screen__get_width(0);
  v74 = this->fields.mPos.fields.y;
  this->fields.mPos.fields.x = v72 - (float)((float)v73 * 0.5);
  this->fields.mPos.fields.y = v74 - (float)((float)UnityEngine_Screen__get_height(0) * 0.5);
}


void UITooltip__Show(System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x20
  struct UITooltip_o *v4; // x0

  if ( (byte_4C478B3 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UITooltip_TypeInfo);
    byte_4C478B3 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v4 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v4 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct UITooltip_o *, System_String_o *, const MethodInfo *))v4->klass->vtable._7_SetText.methodPtr)(
      v4,
      text,
      v4->klass->vtable._7_SetText.method);
  }
}


void UITooltip__ShowText(System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x20
  struct UITooltip_o *v4; // x0

  if ( (byte_4C478B2 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UITooltip_TypeInfo);
    byte_4C478B2 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v4 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v4 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct UITooltip_o *, System_String_o *, const MethodInfo *))v4->klass->vtable._7_SetText.methodPtr)(
      v4,
      text,
      v4->klass->vtable._7_SetText.method);
  }
}


void UITooltip__Start(UITooltip_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Object_array *ComponentsInChildren_object__51245264; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Transform_o *mTrans; // x0
  UnityEngine_Object_o *uiCamera; // x21
  int32_t layer; // w21
  struct UnityEngine_Camera_o *CameraForLayer; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C478AF & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C478AF = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
  ComponentsInChildren_object__51245264 = UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
  this->fields.mWidgets = (struct UIWidget_array *)ComponentsInChildren_object__51245264;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mWidgets, (int32_t)ComponentsInChildren_object__51245264, v7, v8);
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
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.uiCamera, (int32_t)CameraForLayer, v13, v14);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C372B4(mTrans);
  }
LABEL_11:
  ((void (__fastcall *)(UITooltip_o *, const MethodInfo *, float))this->klass->vtable._6_SetAlpha.methodPtr)(
    this,
    this->klass->vtable._6_SetAlpha.method,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void UITooltip__Update(UITooltip_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mHover; // x21
  UICamera_c *v4; // x0
  UnityEngine_Object_o *hoveredObject; // x22
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  float mTarget; // s9
  float mCurrent; // s8
  float v10; // s0
  float v11; // s2
  float v12; // s1
  float v13; // s0
  float v14; // s0
  float32x2_t v15; // d9
  float z; // s10
  float v17; // s8
  UnityEngine_Transform_o *mTrans; // x0
  float v19; // s0
  float32x2_t v20; // d3
  float32x2_t v26; // d2 OVERLAPPED
  float32x2_t v27; // d5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s10
  float x; // s11
  float v31; // s9
  unsigned __int64 v32; // d0
  int v33; // s1
  float v34; // s2
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C478B0 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UICamera_TypeInfo);
    byte_4C478B0 = 1;
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mHover, 0, v6, v7);
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
    v10 = RealTime__get_deltaTime(0) * this->fields.appearSpeed;
    v11 = fminf(v10, 1.0);
    v12 = this->fields.mTarget;
    if ( v10 < 0.0 )
      v13 = 0.0;
    else
      v13 = v11;
    v14 = mCurrent + (float)((float)(mTarget - mCurrent) * v13);
    this->fields.mCurrent = v14;
    if ( vabds_f32(v14, v12) < 0.001 )
    {
      v14 = v12;
      this->fields.mCurrent = v12;
    }
    ((void (__fastcall *)(UITooltip_o *, const MethodInfo *, float))this->klass->vtable._6_SetAlpha.methodPtr)(
      this,
      this->klass->vtable._6_SetAlpha.method,
      v14 * v14);
    if ( this->fields.scalingTransitions )
    {
      v15.n64_u64[0] = *(unsigned __int64 *)&this->fields.mSize.fields.x;
      z = this->fields.mSize.fields.z;
      if ( !byte_4C3C926 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      v17 = this->fields.mCurrent;
      mTrans = this->fields.mTrans;
      v19 = fminf(v17, 1.0);
      if ( v17 < 0.0 )
        v19 = 0.0;
      if ( !mTrans )
        goto LABEL_25;
      v20.n64_u64[0] = *(unsigned __int64 *)&this->fields.mPos.fields.x;
      __asm { FMOV            V2.2S, #0.25 }
      v26.n64_u64[0] = vmul_f32(v15, _D2).n64_u64[0];
      v27.n64_u32[0] = vsub_f32(v20, v26).n64_u32[0];
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v27.n64_u32[1] = vadd_f32(v20, v26).n64_u32[1];
      v26.n64_f32[0] = (float)(this->fields.mPos.fields.z - (float)(z * 0.25))
                     + (float)(v19
                             * (float)(this->fields.mPos.fields.z
                                     - (float)(this->fields.mPos.fields.z - (float)(z * 0.25))));
      x = static_fields->oneVector.fields.x;
      y = static_fields->oneVector.fields.y;
      v31 = static_fields->oneVector.fields.z;
      v32 = vadd_f32(v27, vmul_n_f32(vsub_f32(v20, v27), v19)).n64_u64[0];
      v33 = HIDWORD(v32);
      UnityEngine_Transform__set_localPosition(mTrans, *(UnityEngine_Vector3_o *)(&v26 - 1), 0);
      mTrans = this->fields.mTrans;
      if ( !mTrans )
LABEL_25:
        sub_1C372B4(mTrans);
      v34 = (float)(v17 * -0.5) + 1.5;
      v35.fields.x = x * v34;
      v35.fields.y = y * v34;
      v35.fields.z = v31 * v34;
      UnityEngine_Transform__set_localScale(mTrans, v35, 0);
    }
  }
}


bool UITooltip__get_isVisible(const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v2; // x0
  struct UITooltip_o *v3; // x8

  if ( (byte_4C478AC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UITooltip_TypeInfo);
    byte_4C478AC = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( !v2 )
    return 0;
  v3 = UITooltip_TypeInfo->static_fields->mInstance;
  if ( !v3 )
    sub_1C372B4(v2);
  return v3->fields.mTarget == 1.0;
}