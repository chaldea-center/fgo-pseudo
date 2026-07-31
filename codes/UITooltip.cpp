void UITooltip___ctor(UITooltip_o *this, const MethodInfo *method)
{
  int v3; // w9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  v3 = (unsigned __int8)byte_5931940;
  this->fields.appearSpeed = 10.0;
  this->fields.scalingTransitions = 1;
  if ( !v3 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.mSize.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.mSize.fields.z = z;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UITooltip__Awake(UITooltip_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593D008 & 1) == 0 )
  {
    sub_21FFC50(&UITooltip_TypeInfo);
    byte_593D008 = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)UITooltip_TypeInfo->static_fields,
    (int32_t)this,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UITooltip__Hide(const MethodInfo *method)
{
  __int64 v1; // x1
  UnityEngine_Object_o *mInstance; // x19
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct UITooltip_o *v10; // x0
  struct UITooltip_o *v11; // x8

  if ( (byte_593D00F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UITooltip_TypeInfo);
    byte_593D00F = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v10 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v10
      || (v10->fields.mHover = 0,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields.mHover, 0, v4, v5, v6, v7, v8, v9),
          (v11 = UITooltip_TypeInfo->static_fields->mInstance) == 0) )
    {
      sub_21FFECC(v10, v3);
    }
    v11->fields.mTarget = 0.0;
  }
}


void UITooltip__OnDestroy(UITooltip_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593D009 & 1) == 0 )
  {
    sub_21FFC50(&UITooltip_TypeInfo);
    byte_593D009 = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)UITooltip_TypeInfo->static_fields, 0, v2, v3, v4, v5, v6, v7);
}


void UITooltip__SetAlpha(UITooltip_o *this, float val, const MethodInfo *method)
{
  struct UIWidget_array *mWidgets; // x8
  il2cpp_array_size_t max_length; // x20
  UITooltip_o *v6; // x19
  __int64 v7; // x21
  struct UIWidget_array *v8; // x8
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  mWidgets = this->fields.mWidgets;
  if ( !mWidgets )
    goto LABEL_9;
  max_length = mWidgets->max_length;
  if ( (int)max_length >= 1 )
  {
    v6 = this;
    v7 = 0;
    while ( 1 )
    {
      v8 = v6->fields.mWidgets;
      if ( !v8 )
        break;
      if ( (unsigned int)v7 >= LODWORD(v8->max_length) )
        sub_21FFED4(this);
      this = (UITooltip_o *)v8->m_Items[v7];
      if ( !this )
        break;
      v9.fields.a = val;
      v9.fields.r = *((float *)&this[1].fields.m_CancellationTokenSource + 1);
      v9.fields.g = *(float *)&this[1].fields.uiCamera;
      v9.fields.b = *((float *)&this[1].fields.uiCamera + 1);
      UIWidget__set_color((UIWidget_o *)this, v9, 0);
      if ( (_DWORD)max_length == (_DWORD)++v7 )
        return;
    }
LABEL_9:
    sub_21FFECC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void UITooltip__SetText(UITooltip_o *this, System_String_o *tooltipText, const MethodInfo *method)
{
  UnityEngine_Object_o *text; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  MissionNaviTransitionBoardItem_o *p_mHover; // x19
  UICamera_c *v14; // x0
  struct UnityEngine_GameObject_o *hoveredObject; // x1
  __int64 v16; // x1
  UILabel_o *transform; // x0
  UnityEngine_Transform_o *v18; // x20
  float y; // s8
  float v20; // s9
  float v21; // s10
  UnityEngine_Vector2_o v22; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Object_c *v24; // x0
  UnityEngine_Object_o *background; // x20
  __int64 v26; // x1
  float32x2_t v27; // d0
  UIWidget_o *v28; // x20
  unsigned __int32 v29; // s1
  float32x2_t v30; // d1
  unsigned __int32 v31; // s3
  float32x2_t v32; // d2
  int v33; // w8
  float32x2_t v34; // d1
  unsigned __int64 v35; // d0
  double v36; // d8
  double v37; // d0
  double v38; // d0
  double v39; // d1
  double v40; // d1
  int32_t v41; // w1
  __int64 v42; // x1
  UIWidget_o *v43; // x20
  float v44; // s9
  double v45; // d8
  double v46; // d0
  double v47; // d0
  double v48; // d1
  double v49; // d1
  int32_t v50; // w1
  UnityEngine_Object_o *uiCamera; // x20
  bool v52; // w0
  float v53; // s8
  float width; // s0
  float v55; // s10
  float v56; // s0
  float v57; // s1
  float v58; // s0
  float height; // s0
  float v60; // s0
  float v61; // s1
  float v62; // s0
  float orthographicSize; // s0
  float v64; // s8
  float v65; // s8
  int32_t v66; // w0
  float v67; // s9
  float v68; // s8
  int32_t v69; // w0
  float v70; // s10
  int v71; // w20
  float v72; // s2
  float v73; // s1
  float v74; // s0 OVERLAPPED
  float z; // s2
  UnityEngine_Transform_o *mTrans; // x20
  float v77; // s10
  float v78; // s9
  float v79; // s8
  double v80; // d0
  double v81; // d0
  float v82; // s2
  float v83; // s9
  float v84; // s0
  float v85; // s0
  float v86; // s8
  float v87; // s1
  float v88; // s10
  double v89; // d0
  double v90; // d0
  float v91; // s2
  float v92; // s1 OVERLAPPED
  float v93; // s2
  float v94; // s0
  float x; // [xsp+0h] [xbp-60h]
  float v96; // [xsp+0h] [xbp-60h]
  double iptr; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593D00C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593D00C = 1;
  }
  text = (UnityEngine_Object_o *)this->fields.text;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tooltipText);
  if ( !UnityEngine_Object__op_Inequality(text, 0, 0) || System_String__IsNullOrEmpty(tooltipText, 0) )
  {
    this->fields.mHover = 0;
    p_mHover = (MissionNaviTransitionBoardItem_o *)&this->fields.mHover;
    sub_21FFBF4(p_mHover, 0, v6, v7, v8, v9, v10, v11);
    p_mHover->fields.selectNum = 0;
    return;
  }
  this->fields.mTarget = 1.0;
  v14 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v12);
    v14 = UICamera_TypeInfo;
  }
  hoveredObject = v14->static_fields->hoveredObject;
  this->fields.mHover = hoveredObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mHover,
    (int32_t)hoveredObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  transform = this->fields.text;
  if ( !transform )
    goto LABEL_107;
  UILabel__set_text(transform, tooltipText, 0);
  mousePosition = UnityEngine_Input__get_mousePosition(0);
  transform = this->fields.text;
  this->fields.mPos = mousePosition;
  if ( !transform )
    goto LABEL_107;
  transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  if ( !transform )
    goto LABEL_107;
  v18 = (UnityEngine_Transform_o *)transform;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  localScale = UnityEngine_Transform__get_localScale(v18, 0);
  transform = this->fields.text;
  if ( !transform )
    goto LABEL_107;
  v20 = localScale.fields.x;
  v21 = localScale.fields.y;
  printedSize = UILabel__get_printedSize(transform, 0);
  v24 = UnityEngine_Object_TypeInfo;
  this->fields.mSize.fields.z = 0.0;
  background = (UnityEngine_Object_o *)this->fields.background;
  *(UnityEngine_Vector2_o *)&this->fields.mSize.fields.x = printedSize;
  this->fields.mSize.fields.x = v20 * printedSize.fields.x;
  this->fields.mSize.fields.y = v21 * printedSize.fields.y;
  if ( !*(&v24->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v24, v22);
  if ( UnityEngine_Object__op_Inequality(background, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.background;
    if ( !transform )
      goto LABEL_107;
    v27.n64_u32[0] = ((__n128 (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._36_get_border.methodPtr)(
                       transform,
                       transform->klass->vtable._36_get_border.method).n128_u32[0];
    v28 = (UIWidget_o *)this->fields.background;
    v27.n64_u32[1] = v29;
    v30.n64_f32[0] = x;
    v32.n64_u32[1] = v31;
    v33 = (unsigned __int8)byte_593220B;
    v30.n64_f32[1] = -y;
    v34.n64_u64[0] = vsub_f32(v30, v27).n64_u64[0];
    v35 = vadd_f32(*(float32x2_t *)&this->fields.mSize.fields.x, vadd_f32(vadd_f32(v27, v32), vadd_f32(v34, v34))).n64_u64[0];
    v96 = *(float *)&v35;
    *(_QWORD *)&this->fields.mSize.fields.x = v35;
    if ( !v33 )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v26);
    v36 = v96;
    v37 = modf(v96, &iptr);
    if ( v96 >= 0.0 )
    {
      if ( v37 != 0.5 )
      {
        v38 = floor(v36 + 0.5);
        goto LABEL_32;
      }
      v39 = 1.0;
      v38 = iptr;
    }
    else
    {
      if ( v37 != -0.5 )
      {
        v38 = ceil(v36 + -0.5);
        goto LABEL_32;
      }
      v38 = iptr;
      v39 = -1.0;
    }
    v40 = v38 + v39;
    if ( ((__int64)v38 & 1) != 0 )
      v38 = v40;
LABEL_32:
    if ( !v28 )
      goto LABEL_107;
    if ( v38 == INFINITY )
      v41 = 0x80000000;
    else
      v41 = (int)v38;
    UIWidget__set_width(v28, v41, 0);
    v43 = (UIWidget_o *)this->fields.background;
    v44 = this->fields.mSize.fields.y;
    if ( !byte_593220B )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_593220B = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v42);
    v45 = v44;
    v46 = modf(v44, &iptr);
    if ( v44 >= 0.0 )
    {
      if ( v46 == 0.5 )
      {
        v48 = 1.0;
        v47 = iptr;
LABEL_45:
        v49 = v47 + v48;
        if ( ((__int64)v47 & 1) != 0 )
          v47 = v49;
        goto LABEL_50;
      }
      v47 = floor(v45 + 0.5);
    }
    else
    {
      if ( v46 == -0.5 )
      {
        v47 = iptr;
        v48 = -1.0;
        goto LABEL_45;
      }
      v47 = ceil(v45 + -0.5);
    }
LABEL_50:
    if ( !v43 )
      goto LABEL_107;
    if ( v47 == INFINITY )
      v50 = 0x80000000;
    else
      v50 = (int)v47;
    UIWidget__set_height(v43, v50, 0);
  }
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v52 = UnityEngine_Object__op_Inequality(uiCamera, 0, 0);
  v53 = this->fields.mPos.fields.x;
  if ( v52 )
  {
    width = (float)UnityEngine_Screen__get_width(0);
    v55 = this->fields.mPos.fields.y;
    v56 = v53 / width;
    if ( v56 <= 1.0 )
      v57 = v56;
    else
      v57 = 1.0;
    if ( v56 >= 0.0 )
      v58 = v57;
    else
      v58 = 0.0;
    this->fields.mPos.fields.x = v58;
    height = (float)UnityEngine_Screen__get_height(0);
    transform = (UILabel_o *)this->fields.uiCamera;
    v60 = v55 / height;
    if ( v60 <= 1.0 )
      v61 = v60;
    else
      v61 = 1.0;
    if ( v60 >= 0.0 )
      v62 = v61;
    else
      v62 = 0.0;
    this->fields.mPos.fields.y = v62;
    if ( !transform )
      goto LABEL_107;
    orthographicSize = UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)transform, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_107;
    v64 = orthographicSize;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_107;
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0);
    v65 = v64 / lossyScale.fields.y;
    v66 = UnityEngine_Screen__get_height(0);
    v67 = this->fields.mSize.fields.x;
    v68 = vcvts_n_f32_s32(v66, 1u) / v65;
    v69 = UnityEngine_Screen__get_width(0);
    v70 = this->fields.mSize.fields.y;
    v71 = v69;
    v72 = (float)UnityEngine_Screen__get_height(0);
    transform = (UILabel_o *)this->fields.uiCamera;
    v73 = (float)(v68 * v70) / v72;
    v74 = 1.0 - (float)((float)(v67 * v68) / (float)v71);
    if ( this->fields.mPos.fields.x < v74 )
      v74 = this->fields.mPos.fields.x;
    if ( this->fields.mPos.fields.y > v73 )
      v73 = this->fields.mPos.fields.y;
    this->fields.mPos.fields.x = v74;
    this->fields.mPos.fields.y = v73;
    if ( !transform )
      goto LABEL_107;
    z = this->fields.mPos.fields.z;
    mTrans = this->fields.mTrans;
    v102 = UnityEngine_Camera__ViewportToWorldPoint_82984916(
             (UnityEngine_Camera_o *)transform,
             *(UnityEngine_Vector3_o *)&v74,
             0);
    if ( !mTrans )
      goto LABEL_107;
    UnityEngine_Transform__set_position(mTrans, v102, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_107;
    v103 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    v77 = v103.fields.x;
    v78 = v103.fields.y;
    v79 = v103.fields.z;
    this->fields.mPos = v103;
    v80 = modf(v103.fields.x, &iptr);
    if ( v77 >= 0.0 )
    {
      if ( v80 != 0.5 )
      {
        v88 = floorf(v77 + 0.5);
        goto LABEL_95;
      }
      v81 = iptr;
      v82 = 1.0;
    }
    else
    {
      if ( v80 != -0.5 )
      {
        v88 = ceilf(v77 + -0.5);
        goto LABEL_95;
      }
      v81 = iptr;
      v82 = -1.0;
    }
    if ( ((__int64)v81 & 1) != 0 )
    {
      v87 = v81;
      v88 = v87 + v82;
    }
    else
    {
      v88 = v81;
    }
LABEL_95:
    this->fields.mPos.fields.x = v88;
    v89 = modf(v78, &iptr);
    if ( v78 >= 0.0 )
    {
      if ( v89 != 0.5 )
      {
        v92 = floorf(v78 + 0.5);
        goto LABEL_105;
      }
      v90 = iptr;
      v91 = 1.0;
    }
    else
    {
      if ( v89 != -0.5 )
      {
        v92 = ceilf(v78 + -0.5);
        goto LABEL_105;
      }
      v90 = iptr;
      v91 = -1.0;
    }
    v92 = v90;
    if ( ((__int64)v90 & 1) != 0 )
      v92 = v92 + v91;
LABEL_105:
    transform = (UILabel_o *)this->fields.mTrans;
    this->fields.mPos.fields.y = v92;
    if ( transform )
    {
      v93 = v79;
      v94 = v88;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v92 - 1),
        0);
      return;
    }
LABEL_107:
    sub_21FFECC(transform, v16);
  }
  v83 = this->fields.mSize.fields.x;
  if ( (float)(v53 + v83) > (float)UnityEngine_Screen__get_width(0) )
    this->fields.mPos.fields.x = (float)UnityEngine_Screen__get_width(0) - this->fields.mSize.fields.x;
  v84 = this->fields.mSize.fields.y;
  if ( (float)(this->fields.mPos.fields.y - v84) < 0.0 )
    this->fields.mPos.fields.y = v84;
  v85 = this->fields.mPos.fields.x - vcvts_n_f32_s32(UnityEngine_Screen__get_width(0), 1u);
  v86 = this->fields.mPos.fields.y;
  this->fields.mPos.fields.x = v85;
  this->fields.mPos.fields.y = v86 - vcvts_n_f32_s32(UnityEngine_Screen__get_height(0), 1u);
}


void UITooltip__Show(System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x20
  __int64 v4; // x1
  struct UITooltip_o *v5; // x0

  if ( (byte_593D00E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UITooltip_TypeInfo);
    byte_593D00E = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5 )
      sub_21FFECC(0, v4);
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

  if ( (byte_593D00D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UITooltip_TypeInfo);
    byte_593D00D = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5 )
      sub_21FFECC(0, v4);
    ((void (__fastcall *)(struct UITooltip_o *, System_String_o *, const MethodInfo *))v5->klass->vtable._7_SetText.methodPtr)(
      v5,
      text,
      v5->klass->vtable._7_SetText.method);
  }
}


void UITooltip__Start(UITooltip_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Object_array *ComponentsInChildren_object__58647176; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  UnityEngine_Transform_o *mTrans; // x0
  __int64 v19; // x1
  UnityEngine_Object_c *v20; // x0
  UnityEngine_Object_o *uiCamera; // x21
  __int64 v22; // x1
  int32_t layer; // w21
  struct UnityEngine_Camera_o *CameraForLayer; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593D00A & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    sub_21FFC50(&NGUITools_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593D00A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  ComponentsInChildren_object__58647176 = UnityEngine_Component__GetComponentsInChildren_object__58647176(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_37EE288 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
  this->fields.mWidgets = (struct UIWidget_array *)ComponentsInChildren_object__58647176;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mWidgets,
    (int32_t)ComponentsInChildren_object__58647176,
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
  v20 = UnityEngine_Object_TypeInfo;
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  this->fields.mPos = localPosition;
  if ( !*(&v20->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v20, v19);
  if ( UnityEngine_Object__op_Equality(uiCamera, 0, 0) )
  {
    mTrans = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( mTrans )
    {
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)mTrans, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v22);
      CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
      this->fields.uiCamera = CameraForLayer;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.uiCamera,
        (int32_t)CameraForLayer,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      goto LABEL_11;
    }
LABEL_12:
    sub_21FFECC(mTrans, v17);
  }
LABEL_11:
  ((void (__fastcall *)(UITooltip_o *, const MethodInfo *, double))this->klass->vtable._6_SetAlpha.methodPtr)(
    this,
    this->klass->vtable._6_SetAlpha.method,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void UITooltip__Update(UITooltip_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  UnityEngine_Object_o *mHover; // x21
  UnityEngine_Object_o *hoveredObject; // x22
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  float mTarget; // s8
  float mCurrent; // s9
  float v14; // s0
  float v15; // s1
  float v16; // s0
  float v17; // s1
  float v18; // s0
  __int64 v19; // x1
  float32x2_t v20; // d8
  float z; // s9
  UnityEngine_Transform_o *mTrans; // x0
  float v28; // s1
  float32x2_t v29; // d2
  float32x2_t v30; // d0
  float v31; // s8
  float32x2_t v32; // d4
  unsigned __int64 v33; // d0
  float v34; // s0
  float v35; // s3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s9
  float y; // s10
  float v39; // s11
  float32x2_t v40; // d2 OVERLAPPED
  float v41; // s1
  unsigned __int64 v42; // d0
  int v43; // s1
  float v44; // s2
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_593D00B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_593D00B = 1;
  }
  v3 = UICamera_TypeInfo;
  mHover = (UnityEngine_Object_o *)this->fields.mHover;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  hoveredObject = (UnityEngine_Object_o *)v3->static_fields->hoveredObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mHover, hoveredObject, 0) )
  {
    this->fields.mHover = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mHover, 0, v6, v7, v8, v9, v10, v11);
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
    v15 = 1.0;
    if ( v14 <= 1.0 )
      v15 = v14;
    if ( v14 >= 0.0 )
      v16 = v15;
    else
      v16 = 0.0;
    v17 = this->fields.mTarget;
    v18 = mCurrent + (float)((float)(mTarget - mCurrent) * v16);
    this->fields.mCurrent = v18;
    if ( vabds_f32(v18, v17) < 0.001 )
    {
      v18 = v17;
      this->fields.mCurrent = v17;
    }
    ((void (__fastcall *)(UITooltip_o *, const MethodInfo *, float))this->klass->vtable._6_SetAlpha.methodPtr)(
      this,
      this->klass->vtable._6_SetAlpha.method,
      v18 * v18);
    if ( this->fields.scalingTransitions )
    {
      v20.n64_u64[0] = *(unsigned __int64 *)&this->fields.mSize.fields.x;
      z = this->fields.mSize.fields.z;
      if ( !byte_5931945 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931945 = 1;
      }
      mTrans = this->fields.mTrans;
      if ( !mTrans )
        goto LABEL_29;
      __asm { FMOV            V0.2S, #0.25 }
      v28 = 1.0;
      v29.n64_u64[0] = *(unsigned __int64 *)&this->fields.mPos.fields.x;
      v30.n64_u64[0] = vmul_f32(v20, _D0).n64_u64[0];
      v31 = this->fields.mCurrent;
      v32.n64_u32[0] = vsub_f32(v29, v30).n64_u32[0];
      v33 = vadd_f32(v29, v30).n64_u64[0];
      if ( v31 <= 1.0 )
        v28 = this->fields.mCurrent;
      v32.n64_u32[1] = HIDWORD(v33);
      v34 = this->fields.mPos.fields.z;
      if ( v31 < 0.0 )
        v28 = 0.0;
      v35 = v34 - (float)(z * 0.25);
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->oneVector.fields.x;
      y = static_fields->oneVector.fields.y;
      v39 = static_fields->oneVector.fields.z;
      v40.n64_u64[0] = vmul_n_f32(vsub_f32(v29, v32), v28).n64_u64[0];
      v41 = v28 * (float)(v34 - v35);
      v42 = vadd_f32(v32, v40).n64_u64[0];
      v40.n64_f32[0] = v35 + v41;
      v43 = HIDWORD(v42);
      UnityEngine_Transform__set_localPosition(mTrans, *(UnityEngine_Vector3_o *)(&v40 - 1), 0);
      mTrans = this->fields.mTrans;
      if ( !mTrans )
LABEL_29:
        sub_21FFECC(mTrans, v19);
      v44 = (float)(v31 * -0.5) + 1.5;
      v45.fields.x = x * v44;
      v45.fields.y = y * v44;
      v45.fields.z = v39 * v44;
      UnityEngine_Transform__set_localScale(mTrans, v45, 0);
    }
  }
}


bool UITooltip__get_isVisible(const MethodInfo *method)
{
  __int64 v1; // x1
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v3; // x0
  __int64 v4; // x1
  struct UITooltip_o *v5; // x8

  if ( (byte_593D007 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UITooltip_TypeInfo);
    byte_593D007 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( !v3 )
    return 0;
  v5 = UITooltip_TypeInfo->static_fields->mInstance;
  if ( !v5 )
    sub_21FFECC(v3, v4);
  return v5->fields.mTarget == 1.0;
}