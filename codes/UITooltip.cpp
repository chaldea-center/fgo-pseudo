void UITooltip___ctor(UITooltip_o *this, const MethodInfo *method)
{
  int v3; // w9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  v3 = (unsigned __int8)byte_5969AE0;
  this->fields.appearSpeed = 10.0;
  this->fields.scalingTransitions = 1;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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

  if ( (byte_59752DF & 1) == 0 )
  {
    sub_2213A60(&UITooltip_TypeInfo);
    byte_59752DF = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = this;
  sub_2213A04(
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

  if ( (byte_59752E6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UITooltip_TypeInfo);
    byte_59752E6 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v10 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v10
      || (v10->fields.mHover = 0,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.mHover, 0, v4, v5, v6, v7, v8, v9),
          (v11 = UITooltip_TypeInfo->static_fields->mInstance) == 0) )
    {
      sub_2213CDC(v10, v3);
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

  if ( (byte_59752E0 & 1) == 0 )
  {
    sub_2213A60(&UITooltip_TypeInfo);
    byte_59752E0 = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)UITooltip_TypeInfo->static_fields, 0, v2, v3, v4, v5, v6, v7);
}


void UITooltip__SetAlpha(UITooltip_o *this, float val, const MethodInfo *method)
{
  struct UIWidget_array *mWidgets; // x8
  il2cpp_array_size_t max_length; // x20
  UITooltip_o *v6; // x19
  __int64 v7; // x21
  struct UIWidget_array *v8; // x8
  UnityEngine_Color_o v9; // 0:kr00_16.16

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
        sub_2213CE4(this);
      this = (UITooltip_o *)v8->m_Items[v7];
      if ( !this )
        break;
      v9.fields.r = *((float *)this + 37);
      *(_QWORD *)&v9.fields.g = *((_QWORD *)this + 19);
      v9.fields.a = val;
      UIWidget__set_color((UIWidget_o *)this, v9, 0);
      if ( (_DWORD)max_length == (_DWORD)++v7 )
        return;
    }
LABEL_9:
    sub_2213CDC(this, method);
  }
}


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
  UnityEngine_Vector2_o v19; // x1
  UnityEngine_Vector2_o printedSize; // kr68_8
  UnityEngine_Object_c *v21; // x0
  UnityEngine_Object_o *background; // x20
  __int64 v23; // x1
  float32x2_t v24; // d0
  UIWidget_o *v25; // x20
  unsigned __int32 v26; // s1
  float32x2_t v27; // d1
  unsigned __int32 v28; // s3
  float32x2_t v29; // d2
  int v30; // w8
  float32x2_t v31; // d1
  unsigned __int64 v32; // d0
  double v33; // d8
  double v34; // d0
  double v35; // d0
  double v36; // d1
  double v37; // d1
  int32_t v38; // w1
  __int64 v39; // x1
  UIWidget_o *v40; // x20
  float y; // s9
  double v42; // d8
  double v43; // d0
  double v44; // d0
  double v45; // d1
  double v46; // d1
  int32_t v47; // w1
  UnityEngine_Object_o *uiCamera; // x20
  bool v49; // w0
  float x; // s8
  float width; // s0
  float v52; // s10
  float v53; // s0
  float v54; // s1
  float v55; // s0
  float height; // s0
  float v57; // s0
  float v58; // s1
  float v59; // s0
  float orthographicSize; // s0
  float v61; // s8
  float v62; // s8
  int32_t v63; // w0
  float v64; // s9
  float v65; // s8
  int32_t v66; // w0
  float v67; // s10
  int v68; // w20
  float v69; // s2
  UnityEngine_Transform_o *mTrans; // x20
  double v72; // d0
  double v73; // d0
  float v74; // s2
  float v75; // s9
  float v76; // s0
  float v77; // s0
  float v78; // s8
  float v79; // s1
  float v80; // s10
  double v81; // d0
  double v82; // d0
  float v83; // s2
  unsigned __int64 localPosition; // kr20_8
  unsigned __int64 localScale; // kr60_8
  float v86; // [xsp+0h] [xbp-60h]
  double iptr; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector3_o mousePosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v89; // 0:kr54_12.12
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59752E3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59752E3 = 1;
  }
  text = (UnityEngine_Object_o *)this->fields.text;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, tooltipText);
  if ( !UnityEngine_Object__op_Inequality(text, 0, 0) || System_String__IsNullOrEmpty(tooltipText, 0) )
  {
    this->fields.mHover = 0;
    p_mHover = (MissionNaviTransitionBoardItem_o *)&this->fields.mHover;
    sub_2213A04(p_mHover, 0, v6, v7, v8, v9, v10, v11);
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
  sub_2213A04(
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
  localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  localScale = (unsigned __int64)UnityEngine_Transform__get_localScale(v18, 0);
  transform = this->fields.text;
  if ( !transform )
    goto LABEL_107;
  printedSize = UILabel__get_printedSize(transform, 0);
  v21 = UnityEngine_Object_TypeInfo;
  this->fields.mSize.fields.z = 0.0;
  background = (UnityEngine_Object_o *)this->fields.background;
  *(UnityEngine_Vector2_o *)&this->fields.mSize.fields.x = printedSize;
  this->fields.mSize.fields.x = *(float *)&localScale * printedSize.fields.x;
  this->fields.mSize.fields.y = *((float *)&localScale + 1) * printedSize.fields.y;
  if ( !*(&v21->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v21, v19);
  if ( UnityEngine_Object__op_Inequality(background, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.background;
    if ( !transform )
      goto LABEL_107;
    v24.n64_u32[0] = ((__n128 (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._36_get_border.methodPtr)(
                       transform,
                       transform->klass->vtable._36_get_border.method).n128_u32[0];
    v25 = (UIWidget_o *)this->fields.background;
    v24.n64_u32[1] = v26;
    v27.n64_u32[0] = localPosition;
    v29.n64_u32[1] = v28;
    v30 = (unsigned __int8)byte_596A30A;
    v27.n64_f32[1] = -*((float *)&localPosition + 1);
    v31.n64_u64[0] = vsub_f32(v27, v24).n64_u64[0];
    v32 = vadd_f32(*(float32x2_t *)&this->fields.mSize.fields.x, vadd_f32(vadd_f32(v24, v29), vadd_f32(v31, v31))).n64_u64[0];
    v86 = *(float *)&v32;
    *(_QWORD *)&this->fields.mSize.fields.x = v32;
    if ( !v30 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v23);
    v33 = v86;
    v34 = modf(v86, &iptr);
    if ( v86 >= 0.0 )
    {
      if ( v34 != 0.5 )
      {
        v35 = floor(v33 + 0.5);
        goto LABEL_32;
      }
      v36 = 1.0;
      v35 = iptr;
    }
    else
    {
      if ( v34 != -0.5 )
      {
        v35 = ceil(v33 + -0.5);
        goto LABEL_32;
      }
      v35 = iptr;
      v36 = -1.0;
    }
    v37 = v35 + v36;
    if ( ((__int64)v35 & 1) != 0 )
      v35 = v37;
LABEL_32:
    if ( !v25 )
      goto LABEL_107;
    if ( v35 == INFINITY )
      v38 = 0x80000000;
    else
      v38 = (int)v35;
    UIWidget__set_width(v25, v38, 0);
    v40 = (UIWidget_o *)this->fields.background;
    y = this->fields.mSize.fields.y;
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v39);
    v42 = y;
    v43 = modf(y, &iptr);
    if ( y >= 0.0 )
    {
      if ( v43 == 0.5 )
      {
        v45 = 1.0;
        v44 = iptr;
LABEL_45:
        v46 = v44 + v45;
        if ( ((__int64)v44 & 1) != 0 )
          v44 = v46;
        goto LABEL_50;
      }
      v44 = floor(v42 + 0.5);
    }
    else
    {
      if ( v43 == -0.5 )
      {
        v44 = iptr;
        v45 = -1.0;
        goto LABEL_45;
      }
      v44 = ceil(v42 + -0.5);
    }
LABEL_50:
    if ( !v40 )
      goto LABEL_107;
    if ( v44 == INFINITY )
      v47 = 0x80000000;
    else
      v47 = (int)v44;
    UIWidget__set_height(v40, v47, 0);
  }
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  v49 = UnityEngine_Object__op_Inequality(uiCamera, 0, 0);
  x = this->fields.mPos.fields.x;
  if ( v49 )
  {
    width = (float)UnityEngine_Screen__get_width(0);
    v52 = this->fields.mPos.fields.y;
    v53 = x / width;
    if ( v53 <= 1.0 )
      v54 = v53;
    else
      v54 = 1.0;
    if ( v53 >= 0.0 )
      v55 = v54;
    else
      v55 = 0.0;
    this->fields.mPos.fields.x = v55;
    height = (float)UnityEngine_Screen__get_height(0);
    transform = (UILabel_o *)this->fields.uiCamera;
    v57 = v52 / height;
    if ( v57 <= 1.0 )
      v58 = v57;
    else
      v58 = 1.0;
    if ( v57 >= 0.0 )
      v59 = v58;
    else
      v59 = 0.0;
    this->fields.mPos.fields.y = v59;
    if ( !transform )
      goto LABEL_107;
    orthographicSize = UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)transform, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_107;
    v61 = orthographicSize;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_107;
    v62 = v61
        / COERCE_FLOAT(LODWORD(UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0).fields.y));
    v63 = UnityEngine_Screen__get_height(0);
    v64 = this->fields.mSize.fields.x;
    v65 = vcvts_n_f32_s32(v63, 1u) / v62;
    v66 = UnityEngine_Screen__get_width(0);
    v67 = this->fields.mSize.fields.y;
    v68 = v66;
    v69 = (float)UnityEngine_Screen__get_height(0);
    transform = (UILabel_o *)this->fields.uiCamera;
    v90.fields.y = (float)(v65 * v67) / v69;
    v90.fields.x = 1.0 - (float)((float)(v64 * v65) / (float)v68);
    if ( this->fields.mPos.fields.x < v90.fields.x )
      v90.fields.x = this->fields.mPos.fields.x;
    if ( this->fields.mPos.fields.y > v90.fields.y )
      v90.fields.y = this->fields.mPos.fields.y;
    this->fields.mPos.fields.x = v90.fields.x;
    this->fields.mPos.fields.y = v90.fields.y;
    if ( !transform )
      goto LABEL_107;
    v90.fields.z = this->fields.mPos.fields.z;
    mTrans = this->fields.mTrans;
    v92 = UnityEngine_Camera__ViewportToWorldPoint_83198220((UnityEngine_Camera_o *)transform, v90, 0);
    if ( !mTrans )
      goto LABEL_107;
    UnityEngine_Transform__set_position(mTrans, v92, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_107;
    v89 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.mPos = v89;
    v72 = modf(v89.fields.x, &iptr);
    if ( v89.fields.x >= 0.0 )
    {
      if ( v72 != 0.5 )
      {
        v80 = floorf(v89.fields.x + 0.5);
        goto LABEL_95;
      }
      v73 = iptr;
      v74 = 1.0;
    }
    else
    {
      if ( v72 != -0.5 )
      {
        v80 = ceilf(v89.fields.x + -0.5);
        goto LABEL_95;
      }
      v73 = iptr;
      v74 = -1.0;
    }
    if ( ((__int64)v73 & 1) != 0 )
    {
      v79 = v73;
      v80 = v79 + v74;
    }
    else
    {
      v80 = v73;
    }
LABEL_95:
    this->fields.mPos.fields.x = v80;
    v81 = modf(v89.fields.y, &iptr);
    if ( v89.fields.y >= 0.0 )
    {
      if ( v81 != 0.5 )
      {
        v91.fields.y = floorf(v89.fields.y + 0.5);
        goto LABEL_105;
      }
      v82 = iptr;
      v83 = 1.0;
    }
    else
    {
      if ( v81 != -0.5 )
      {
        v91.fields.y = ceilf(v89.fields.y + -0.5);
        goto LABEL_105;
      }
      v82 = iptr;
      v83 = -1.0;
    }
    v91.fields.y = v82;
    if ( ((__int64)v82 & 1) != 0 )
      v91.fields.y = v91.fields.y + v83;
LABEL_105:
    transform = (UILabel_o *)this->fields.mTrans;
    this->fields.mPos.fields.y = v91.fields.y;
    if ( transform )
    {
      v91.fields.z = v89.fields.z;
      v91.fields.x = v80;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v91, 0);
      return;
    }
LABEL_107:
    sub_2213CDC(transform, v16);
  }
  v75 = this->fields.mSize.fields.x;
  if ( (float)(x + v75) > (float)UnityEngine_Screen__get_width(0) )
    this->fields.mPos.fields.x = (float)UnityEngine_Screen__get_width(0) - this->fields.mSize.fields.x;
  v76 = this->fields.mSize.fields.y;
  if ( (float)(this->fields.mPos.fields.y - v76) < 0.0 )
    this->fields.mPos.fields.y = v76;
  v77 = this->fields.mPos.fields.x - vcvts_n_f32_s32(UnityEngine_Screen__get_width(0), 1u);
  v78 = this->fields.mPos.fields.y;
  this->fields.mPos.fields.x = v77;
  this->fields.mPos.fields.y = v78 - vcvts_n_f32_s32(UnityEngine_Screen__get_height(0), 1u);
}


void UITooltip__Show(System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x20
  __int64 v4; // x1
  struct UITooltip_o *v5; // x0

  if ( (byte_59752E5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UITooltip_TypeInfo);
    byte_59752E5 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5 )
      sub_2213CDC(0, v4);
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

  if ( (byte_59752E4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UITooltip_TypeInfo);
    byte_59752E4 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5 )
      sub_2213CDC(0, v4);
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
  System_Object_array *ComponentsInChildren_object__58857296; // x0
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
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12

  if ( (byte_59752E1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752E1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  ComponentsInChildren_object__58857296 = UnityEngine_Component__GetComponentsInChildren_object__58857296(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_3821750 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
  this->fields.mWidgets = (struct UIWidget_array *)ComponentsInChildren_object__58857296;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mWidgets,
    (int32_t)ComponentsInChildren_object__58857296,
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
      sub_2213A04(
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
    sub_2213CDC(mTrans, v17);
  }
LABEL_11:
  ((void (__fastcall *)(UITooltip_o *, const MethodInfo *, double))this->klass->vtable._6_SetAlpha.methodPtr)(
    this,
    this->klass->vtable._6_SetAlpha.method,
    0.0);
}


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
  float v40; // s2
  UnityEngine_Vector3_o v41; // 0:kr00_12.12
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59752E2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_59752E2 = 1;
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
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mHover, 0, v6, v7, v8, v9, v10, v11);
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
      if ( !byte_5969AE5 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
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
      *(float32x2_t *)&v41.fields.x = vadd_f32(v32, vmul_n_f32(vsub_f32(v29, v32), v28));
      v41.fields.z = v35 + (float)(v28 * (float)(v34 - v35));
      UnityEngine_Transform__set_localPosition(mTrans, v41, 0);
      mTrans = this->fields.mTrans;
      if ( !mTrans )
LABEL_29:
        sub_2213CDC(mTrans, v19);
      v40 = (float)(v31 * -0.5) + 1.5;
      v42.fields.x = x * v40;
      v42.fields.y = y * v40;
      v42.fields.z = v39 * v40;
      UnityEngine_Transform__set_localScale(mTrans, v42, 0);
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

  if ( (byte_59752DE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UITooltip_TypeInfo);
    byte_59752DE = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  v3 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( !v3 )
    return 0;
  v5 = UITooltip_TypeInfo->static_fields->mInstance;
  if ( !v5 )
    sub_2213CDC(v3, v4);
  return v5->fields.mTarget == 1.0;
}