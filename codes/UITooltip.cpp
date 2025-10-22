void UITooltip___ctor(UITooltip_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  this->fields.appearSpeed = 10.0;
  this->fields.scalingTransitions = 1;
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
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

  if ( (byte_4C5B6A4 & 1) == 0 )
  {
    sub_1C3E564(&UITooltip_TypeInfo);
    byte_4C5B6A4 = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = this;
  sub_1C3E508((CGThumbnailListItem_o *)UITooltip_TypeInfo->static_fields, (int32_t)this, v2, v3);
}


void UITooltip__Hide(const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x19
  __int64 v2; // x1
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct UITooltip_o *v5; // x0
  struct UITooltip_o *v6; // x8

  if ( (byte_4C5B6AB & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UITooltip_TypeInfo);
    byte_4C5B6AB = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5
      || (v5->fields.mHover = 0,
          sub_1C3E508((CGThumbnailListItem_o *)&v5->fields.mHover, 0, v3, v4),
          (v6 = UITooltip_TypeInfo->static_fields->mInstance) == 0) )
    {
      sub_1C3E7C0(v5, v2);
    }
    v6->fields.mTarget = 0.0;
  }
}


void UITooltip__OnDestroy(UITooltip_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5B6A5 & 1) == 0 )
  {
    sub_1C3E564(&UITooltip_TypeInfo);
    byte_4C5B6A5 = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = 0;
  sub_1C3E508((CGThumbnailListItem_o *)UITooltip_TypeInfo->static_fields, 0, v2, v3);
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
        sub_1C3E7C8(this, method);
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
    sub_1C3E7C0(this, method);
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
  __int64 v11; // x1
  UILabel_o *transform; // x0
  UnityEngine_Transform_o *v13; // x20
  float x; // s9
  float y; // s8
  float v16; // s10
  float v17; // s11
  UnityEngine_Vector2_o printedSize; // kr00_8
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
  float v34; // s9
  double v35; // d8
  double v36; // d0
  double v37; // d0
  double v38; // d1
  double v39; // d1
  int32_t v40; // w1
  UnityEngine_Object_o *uiCamera; // x20
  bool v42; // w0
  float v43; // s8
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
  float v63; // s0 OVERLAPPED
  float v64; // s1
  float z; // s2
  UnityEngine_Transform_o *mTrans; // x20
  float v67; // s8
  double v68; // d0
  double v69; // d0
  float v70; // s1
  float v71; // s9
  float v72; // s0
  float v73; // s8
  int32_t v74; // w0
  float v75; // s10
  __int64 v76; // x8
  float v77; // s0
  float v78; // s1
  float v79; // s8
  double v80; // d0
  double v81; // d0
  float v82; // s1
  __int64 v83; // x8
  float v84; // s0
  float v85; // s1 OVERLAPPED
  float v86; // s2
  float v87; // s0
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B6A8 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B6A8 = 1;
  }
  text = (UnityEngine_Object_o *)this->fields.text;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(text, 0, 0) || System_String__IsNullOrEmpty(tooltipText, 0) )
  {
    this->fields.mHover = 0;
    p_mHover = (CGThumbnailListItem_o *)&this->fields.mHover;
    sub_1C3E508(p_mHover, 0, v6, v7);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mHover, (int32_t)hoveredObject, v6, v7);
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
  v13 = (UnityEngine_Transform_o *)transform;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  localScale = UnityEngine_Transform__get_localScale(v13, 0);
  transform = this->fields.text;
  if ( !transform )
    goto LABEL_101;
  v16 = localScale.fields.x;
  v17 = localScale.fields.y;
  printedSize = UILabel__get_printedSize(transform, 0);
  this->fields.mSize.fields.z = 0.0;
  this->fields.mSize.fields.x = v16 * printedSize.fields.x;
  this->fields.mSize.fields.y = v17 * printedSize.fields.y;
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
    v24 = this->fields.mSize.fields.x + (float)((float)(v20 + v21) + (float)((float)(x - v20) + (float)(x - v20)));
    v25 = this->fields.mSize.fields.y
        + (float)((float)(v22 + v23) + (float)((float)((float)-y - v22) + (float)((float)-y - v22)));
    this->fields.mSize.fields.x = v24;
    this->fields.mSize.fields.y = v25;
    v26 = (UIWidget_o *)this->fields.background;
    if ( !byte_4C51E80 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C51E80 = 1;
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
    v34 = this->fields.mSize.fields.y;
    if ( !byte_4C51E80 )
    {
      sub_1C3E564(&System_Math_TypeInfo);
      byte_4C51E80 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v35 = v34;
    v36 = modf(v34, &iptr);
    if ( v34 >= 0.0 )
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
  v43 = this->fields.mPos.fields.x;
  if ( v42 )
  {
    width = UnityEngine_Screen__get_width(0);
    v45 = this->fields.mPos.fields.y;
    v46 = v43 / (float)width;
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
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0);
    v55 = v54 / lossyScale.fields.y;
    v56 = UnityEngine_Screen__get_height(0);
    v57 = this->fields.mSize.fields.x;
    v58 = (float)((float)v56 * 0.5) / v55;
    v59 = UnityEngine_Screen__get_width(0);
    v60 = this->fields.mSize.fields.y;
    v61 = v59;
    v62 = (float)(v58 * v60) / (float)UnityEngine_Screen__get_height(0);
    v63 = 1.0 - (float)((float)(v57 * v58) / (float)v61);
    v64 = this->fields.mPos.fields.y;
    transform = (UILabel_o *)this->fields.uiCamera;
    if ( this->fields.mPos.fields.x < v63 )
      v63 = this->fields.mPos.fields.x;
    if ( v64 <= v62 )
      v64 = v62;
    this->fields.mPos.fields.x = v63;
    this->fields.mPos.fields.y = v64;
    if ( !transform )
      goto LABEL_101;
    z = this->fields.mPos.fields.z;
    mTrans = this->fields.mTrans;
    v93 = UnityEngine_Camera__ViewportToWorldPoint_71147848(
            (UnityEngine_Camera_o *)transform,
            *(UnityEngine_Vector3_o *)&v63,
            0);
    if ( !mTrans )
      goto LABEL_101;
    UnityEngine_Transform__set_position(mTrans, v93, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_101;
    v94 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    v67 = v94.fields.x;
    this->fields.mPos = v94;
    v68 = modf(v94.fields.x, &iptr);
    if ( v67 >= 0.0 )
    {
      if ( v68 != 0.5 )
      {
        v77 = floorf(v67 + 0.5);
        goto LABEL_89;
      }
      v69 = iptr;
      v70 = 1.0;
    }
    else
    {
      if ( v68 != -0.5 )
      {
        v77 = ceilf(v67 + -0.5);
        goto LABEL_89;
      }
      v69 = iptr;
      v70 = -1.0;
    }
    v76 = (__int64)v69;
    v77 = v69;
    v78 = v77 + v70;
    if ( (v76 & 1) != 0 )
      v77 = v78;
LABEL_89:
    v79 = this->fields.mPos.fields.y;
    this->fields.mPos.fields.x = v77;
    v80 = modf(v79, &iptr);
    if ( v79 >= 0.0 )
    {
      if ( v80 != 0.5 )
      {
        v85 = floorf(v79 + 0.5);
        goto LABEL_99;
      }
      v81 = iptr;
      v82 = 1.0;
    }
    else
    {
      if ( v80 != -0.5 )
      {
        v85 = ceilf(v79 + -0.5);
        goto LABEL_99;
      }
      v81 = iptr;
      v82 = -1.0;
    }
    v83 = (__int64)v81;
    v84 = v81;
    v85 = v84 + v82;
    if ( (v83 & 1) == 0 )
      v85 = v84;
LABEL_99:
    transform = (UILabel_o *)this->fields.mTrans;
    this->fields.mPos.fields.y = v85;
    if ( transform )
    {
      v86 = this->fields.mPos.fields.z;
      v87 = this->fields.mPos.fields.x;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v85 - 1),
        0);
      return;
    }
LABEL_101:
    sub_1C3E7C0(transform, v11);
  }
  v71 = this->fields.mSize.fields.x;
  if ( (float)(v43 + v71) > (float)UnityEngine_Screen__get_width(0) )
    this->fields.mPos.fields.x = (float)UnityEngine_Screen__get_width(0) - this->fields.mSize.fields.x;
  v72 = this->fields.mSize.fields.y;
  if ( (float)(this->fields.mPos.fields.y - v72) < 0.0 )
    this->fields.mPos.fields.y = v72;
  v73 = this->fields.mPos.fields.x;
  v74 = UnityEngine_Screen__get_width(0);
  v75 = this->fields.mPos.fields.y;
  this->fields.mPos.fields.x = v73 - (float)((float)v74 * 0.5);
  this->fields.mPos.fields.y = v75 - (float)((float)UnityEngine_Screen__get_height(0) * 0.5);
}


void UITooltip__Show(System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x20
  __int64 v4; // x1
  struct UITooltip_o *v5; // x0

  if ( (byte_4C5B6AA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UITooltip_TypeInfo);
    byte_4C5B6AA = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
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

  if ( (byte_4C5B6A9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UITooltip_TypeInfo);
    byte_4C5B6A9 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
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
  const MethodInfo *v5; // x3
  System_Object_array *ComponentsInChildren_object__51318504; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  UnityEngine_Transform_o *mTrans; // x0
  UnityEngine_Object_o *uiCamera; // x21
  int32_t layer; // w21
  struct UnityEngine_Camera_o *CameraForLayer; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B6A6 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B6A6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
  ComponentsInChildren_object__51318504 = UnityEngine_Component__GetComponentsInChildren_object__51318504(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_30F0EE8 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
  this->fields.mWidgets = (struct UIWidget_array *)ComponentsInChildren_object__51318504;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mWidgets, (int32_t)ComponentsInChildren_object__51318504, v7, v8);
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
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.uiCamera, (int32_t)CameraForLayer, v14, v15);
      goto LABEL_11;
    }
LABEL_12:
    sub_1C3E7C0(mTrans, v9);
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
  __int64 v15; // x1
  float32x2_t v16; // d9
  float z; // s10
  float v18; // s8
  UnityEngine_Transform_o *mTrans; // x0
  float v20; // s0
  float32x2_t v21; // d3
  float32x2_t v27; // d2 OVERLAPPED
  float32x2_t v28; // d5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s10
  float x; // s11
  float v32; // s9
  unsigned __int64 v33; // d0
  int v34; // s1
  float v35; // s2
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5B6A7 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B6A7 = 1;
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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mHover, 0, v6, v7);
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
      v16.n64_u64[0] = *(unsigned __int64 *)&this->fields.mSize.fields.x;
      z = this->fields.mSize.fields.z;
      if ( !byte_4C506A6 )
      {
        sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A6 = 1;
      }
      v18 = this->fields.mCurrent;
      mTrans = this->fields.mTrans;
      v20 = fminf(v18, 1.0);
      if ( v18 < 0.0 )
        v20 = 0.0;
      if ( !mTrans )
        goto LABEL_25;
      v21.n64_u64[0] = *(unsigned __int64 *)&this->fields.mPos.fields.x;
      __asm { FMOV            V2.2S, #0.25 }
      v27.n64_u64[0] = vmul_f32(v16, _D2).n64_u64[0];
      v28.n64_u32[0] = vsub_f32(v21, v27).n64_u32[0];
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v28.n64_u32[1] = vadd_f32(v21, v27).n64_u32[1];
      v27.n64_f32[0] = (float)(this->fields.mPos.fields.z - (float)(z * 0.25))
                     + (float)(v20
                             * (float)(this->fields.mPos.fields.z
                                     - (float)(this->fields.mPos.fields.z - (float)(z * 0.25))));
      x = static_fields->oneVector.fields.x;
      y = static_fields->oneVector.fields.y;
      v32 = static_fields->oneVector.fields.z;
      v33 = vadd_f32(v28, vmul_n_f32(vsub_f32(v21, v28), v20)).n64_u64[0];
      v34 = HIDWORD(v33);
      UnityEngine_Transform__set_localPosition(mTrans, *(UnityEngine_Vector3_o *)(&v27 - 1), 0);
      mTrans = this->fields.mTrans;
      if ( !mTrans )
LABEL_25:
        sub_1C3E7C0(mTrans, v15);
      v35 = (float)(v18 * -0.5) + 1.5;
      v36.fields.x = x * v35;
      v36.fields.y = y * v35;
      v36.fields.z = v32 * v35;
      UnityEngine_Transform__set_localScale(mTrans, v36, 0);
    }
  }
}


bool UITooltip__get_isVisible(const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1
  struct UITooltip_o *v4; // x8

  if ( (byte_4C5B6A3 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&UITooltip_TypeInfo);
    byte_4C5B6A3 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( !v2 )
    return 0;
  v4 = UITooltip_TypeInfo->static_fields->mInstance;
  if ( !v4 )
    sub_1C3E7C0(v2, v3);
  return v4->fields.mTarget == 1.0;
}