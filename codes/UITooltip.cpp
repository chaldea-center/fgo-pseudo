void UITooltip___ctor(UITooltip_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  this->fields.appearSpeed = 10.0;
  this->fields.scalingTransitions = 1;
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
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

  if ( (byte_4CCBDDA & 1) == 0 )
  {
    sub_1C713B0(&UITooltip_TypeInfo);
    byte_4CCBDDA = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)UITooltip_TypeInfo->static_fields, (int32_t)this, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4CCBDE1 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UITooltip_TypeInfo);
    byte_4CCBDE1 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v9 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v9
      || (v9->fields.mHover = 0,
          sub_1C71354((GrandQuestFolderBoardItem_o *)&v9->fields.mHover, 0, v3, v4, v5, v6, v7, v8),
          (v10 = UITooltip_TypeInfo->static_fields->mInstance) == 0) )
    {
      sub_1C71608(v9, v2);
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

  if ( (byte_4CCBDDB & 1) == 0 )
  {
    sub_1C713B0(&UITooltip_TypeInfo);
    byte_4CCBDDB = 1;
  }
  UITooltip_TypeInfo->static_fields->mInstance = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)UITooltip_TypeInfo->static_fields, 0, v2, v3, v4, v5, v6, v7);
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
        sub_1C71610(this);
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
    sub_1C71608(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  float x; // s9
  float y; // s8
  float v20; // s10
  float v21; // s11
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Object_o *background; // x20
  float v24; // s0
  float v25; // s2
  float v26; // s1
  float v27; // s3
  float v28; // s9
  float v29; // s0
  UIWidget_o *v30; // x20
  double v31; // d8
  double v32; // d0
  double v33; // d0
  double v34; // d1
  double v35; // d1
  int32_t v36; // w1
  UIWidget_o *v37; // x20
  float v38; // s9
  double v39; // d8
  double v40; // d0
  double v41; // d0
  double v42; // d1
  double v43; // d1
  int32_t v44; // w1
  UnityEngine_Object_o *uiCamera; // x20
  bool v46; // w0
  float v47; // s8
  int32_t width; // w0
  float v49; // s10
  float v50; // s0
  float v51; // s1
  float v52; // s0
  float height; // s0
  float v54; // s0
  float v55; // s1
  float v56; // s0
  float orthographicSize; // s0
  float v58; // s8
  float v59; // s8
  int32_t v60; // w0
  float v61; // s9
  float v62; // s8
  int32_t v63; // w0
  float v64; // s10
  int v65; // w20
  float v66; // s2
  float v67; // s0 OVERLAPPED
  float v68; // s1
  float z; // s2
  UnityEngine_Transform_o *mTrans; // x20
  float v71; // s8
  double v72; // d0
  double v73; // d0
  float v74; // s1
  float v75; // s9
  float v76; // s0
  float v77; // s8
  int32_t v78; // w0
  float v79; // s10
  __int64 v80; // x8
  float v81; // s0
  float v82; // s1
  float v83; // s8
  double v84; // d0
  double v85; // d0
  float v86; // s1
  __int64 v87; // x8
  float v88; // s0
  float v89; // s1 OVERLAPPED
  float v90; // s2
  float v91; // s0
  double iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o mousePosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBDDE & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBDDE = 1;
  }
  text = (UnityEngine_Object_o *)this->fields.text;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(text, 0, 0) || System_String__IsNullOrEmpty(tooltipText, 0) )
  {
    this->fields.mHover = 0;
    p_mHover = (GrandQuestFolderBoardItem_o *)&this->fields.mHover;
    sub_1C71354(p_mHover, 0, v6, v7, v8, v9, v10, v11);
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
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mHover, (int32_t)hoveredObject, v6, v7, v8, v9, v10, v11);
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
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  localScale = UnityEngine_Transform__get_localScale(v17, 0);
  transform = this->fields.text;
  if ( !transform )
    goto LABEL_101;
  v20 = localScale.fields.x;
  v21 = localScale.fields.y;
  printedSize = UILabel__get_printedSize(transform, 0);
  this->fields.mSize.fields.z = 0.0;
  this->fields.mSize.fields.x = v20 * printedSize.fields.x;
  this->fields.mSize.fields.y = v21 * printedSize.fields.y;
  background = (UnityEngine_Object_o *)this->fields.background;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(background, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.background;
    if ( !transform )
      goto LABEL_101;
    v24 = ((float (__fastcall *)(UILabel_o *, const MethodInfo *))transform->klass->vtable._36_get_border.methodPtr)(
            transform,
            transform->klass->vtable._36_get_border.method);
    v28 = this->fields.mSize.fields.x + (float)((float)(v24 + v25) + (float)((float)(x - v24) + (float)(x - v24)));
    v29 = this->fields.mSize.fields.y
        + (float)((float)(v26 + v27) + (float)((float)((float)-y - v26) + (float)((float)-y - v26)));
    this->fields.mSize.fields.x = v28;
    this->fields.mSize.fields.y = v29;
    v30 = (UIWidget_o *)this->fields.background;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v31 = v28;
    v32 = modf(v28, &iptr);
    if ( v28 >= 0.0 )
    {
      if ( v32 != 0.5 )
      {
        v33 = floor(v31 + 0.5);
        goto LABEL_32;
      }
      v33 = iptr;
      v34 = 1.0;
    }
    else
    {
      if ( v32 != -0.5 )
      {
        v33 = ceil(v31 + -0.5);
        goto LABEL_32;
      }
      v33 = iptr;
      v34 = -1.0;
    }
    v35 = v33 + v34;
    if ( ((__int64)v33 & 1) != 0 )
      v33 = v35;
LABEL_32:
    if ( !v30 )
      goto LABEL_101;
    if ( v33 == INFINITY )
      v36 = 0x80000000;
    else
      v36 = (int)v33;
    UIWidget__set_width(v30, v36, 0);
    v37 = (UIWidget_o *)this->fields.background;
    v38 = this->fields.mSize.fields.y;
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v39 = v38;
    v40 = modf(v38, &iptr);
    if ( v38 >= 0.0 )
    {
      if ( v40 == 0.5 )
      {
        v41 = iptr;
        v42 = 1.0;
LABEL_45:
        v43 = v41 + v42;
        if ( ((__int64)v41 & 1) != 0 )
          v41 = v43;
        goto LABEL_50;
      }
      v41 = floor(v39 + 0.5);
    }
    else
    {
      if ( v40 == -0.5 )
      {
        v41 = iptr;
        v42 = -1.0;
        goto LABEL_45;
      }
      v41 = ceil(v39 + -0.5);
    }
LABEL_50:
    if ( !v37 )
      goto LABEL_101;
    if ( v41 == INFINITY )
      v44 = 0x80000000;
    else
      v44 = (int)v41;
    UIWidget__set_height(v37, v44, 0);
  }
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v46 = UnityEngine_Object__op_Inequality(uiCamera, 0, 0);
  v47 = this->fields.mPos.fields.x;
  if ( v46 )
  {
    width = UnityEngine_Screen__get_width(0);
    v49 = this->fields.mPos.fields.y;
    v50 = v47 / (float)width;
    v51 = fminf(v50, 1.0);
    if ( v50 < 0.0 )
      v52 = 0.0;
    else
      v52 = v51;
    this->fields.mPos.fields.x = v52;
    height = (float)UnityEngine_Screen__get_height(0);
    transform = (UILabel_o *)this->fields.uiCamera;
    v54 = v49 / height;
    v55 = fminf(v54, 1.0);
    if ( v54 < 0.0 )
      v56 = 0.0;
    else
      v56 = v55;
    this->fields.mPos.fields.y = v56;
    if ( !transform )
      goto LABEL_101;
    orthographicSize = UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)transform, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_101;
    v58 = orthographicSize;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_101;
    lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)transform, 0);
    v59 = v58 / lossyScale.fields.y;
    v60 = UnityEngine_Screen__get_height(0);
    v61 = this->fields.mSize.fields.x;
    v62 = (float)((float)v60 * 0.5) / v59;
    v63 = UnityEngine_Screen__get_width(0);
    v64 = this->fields.mSize.fields.y;
    v65 = v63;
    v66 = (float)(v62 * v64) / (float)UnityEngine_Screen__get_height(0);
    v67 = 1.0 - (float)((float)(v61 * v62) / (float)v65);
    v68 = this->fields.mPos.fields.y;
    transform = (UILabel_o *)this->fields.uiCamera;
    if ( this->fields.mPos.fields.x < v67 )
      v67 = this->fields.mPos.fields.x;
    if ( v68 <= v66 )
      v68 = v66;
    this->fields.mPos.fields.x = v67;
    this->fields.mPos.fields.y = v68;
    if ( !transform )
      goto LABEL_101;
    z = this->fields.mPos.fields.z;
    mTrans = this->fields.mTrans;
    v97 = UnityEngine_Camera__ViewportToWorldPoint_71529196(
            (UnityEngine_Camera_o *)transform,
            *(UnityEngine_Vector3_o *)&v67,
            0);
    if ( !mTrans )
      goto LABEL_101;
    UnityEngine_Transform__set_position(mTrans, v97, 0);
    transform = (UILabel_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_101;
    v98 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    v71 = v98.fields.x;
    this->fields.mPos = v98;
    v72 = modf(v98.fields.x, &iptr);
    if ( v71 >= 0.0 )
    {
      if ( v72 != 0.5 )
      {
        v81 = floorf(v71 + 0.5);
        goto LABEL_89;
      }
      v73 = iptr;
      v74 = 1.0;
    }
    else
    {
      if ( v72 != -0.5 )
      {
        v81 = ceilf(v71 + -0.5);
        goto LABEL_89;
      }
      v73 = iptr;
      v74 = -1.0;
    }
    v80 = (__int64)v73;
    v81 = v73;
    v82 = v81 + v74;
    if ( (v80 & 1) != 0 )
      v81 = v82;
LABEL_89:
    v83 = this->fields.mPos.fields.y;
    this->fields.mPos.fields.x = v81;
    v84 = modf(v83, &iptr);
    if ( v83 >= 0.0 )
    {
      if ( v84 != 0.5 )
      {
        v89 = floorf(v83 + 0.5);
        goto LABEL_99;
      }
      v85 = iptr;
      v86 = 1.0;
    }
    else
    {
      if ( v84 != -0.5 )
      {
        v89 = ceilf(v83 + -0.5);
        goto LABEL_99;
      }
      v85 = iptr;
      v86 = -1.0;
    }
    v87 = (__int64)v85;
    v88 = v85;
    v89 = v88 + v86;
    if ( (v87 & 1) == 0 )
      v89 = v88;
LABEL_99:
    transform = (UILabel_o *)this->fields.mTrans;
    this->fields.mPos.fields.y = v89;
    if ( transform )
    {
      v90 = this->fields.mPos.fields.z;
      v91 = this->fields.mPos.fields.x;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)transform,
        *(UnityEngine_Vector3_o *)(&v89 - 1),
        0);
      return;
    }
LABEL_101:
    sub_1C71608(transform, v15);
  }
  v75 = this->fields.mSize.fields.x;
  if ( (float)(v47 + v75) > (float)UnityEngine_Screen__get_width(0) )
    this->fields.mPos.fields.x = (float)UnityEngine_Screen__get_width(0) - this->fields.mSize.fields.x;
  v76 = this->fields.mSize.fields.y;
  if ( (float)(this->fields.mPos.fields.y - v76) < 0.0 )
    this->fields.mPos.fields.y = v76;
  v77 = this->fields.mPos.fields.x;
  v78 = UnityEngine_Screen__get_width(0);
  v79 = this->fields.mPos.fields.y;
  this->fields.mPos.fields.x = v77 - (float)((float)v78 * 0.5);
  this->fields.mPos.fields.y = v79 - (float)((float)UnityEngine_Screen__get_height(0) * 0.5);
}


void UITooltip__Show(System_String_o *text, const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x20
  __int64 v4; // x1
  struct UITooltip_o *v5; // x0

  if ( (byte_4CCBDE0 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UITooltip_TypeInfo);
    byte_4CCBDE0 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5 )
      sub_1C71608(0, v4);
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

  if ( (byte_4CCBDDF & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UITooltip_TypeInfo);
    byte_4CCBDDF = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
  {
    v5 = UITooltip_TypeInfo->static_fields->mInstance;
    if ( !v5 )
      sub_1C71608(0, v4);
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
  System_Object_array *ComponentsInChildren_object__51651972; // x0
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
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBDDC & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBDDC = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  ComponentsInChildren_object__51651972 = UnityEngine_Component__GetComponentsInChildren_object__51651972(
                                            (UnityEngine_Component_o *)this,
                                            (const MethodInfo_3142584 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget___);
  this->fields.mWidgets = (struct UIWidget_array *)ComponentsInChildren_object__51651972;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.mWidgets,
    (int32_t)ComponentsInChildren_object__51651972,
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
      sub_1C71354(
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
    sub_1C71608(mTrans, v17);
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
  float32x2_t v31; // d2 OVERLAPPED
  float32x2_t v32; // d5
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s10
  float x; // s11
  float v36; // s9
  unsigned __int64 v37; // d0
  int v38; // s1
  float v39; // s2
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBDDD & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UICamera_TypeInfo);
    byte_4CCBDDD = 1;
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
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mHover, 0, v6, v7, v8, v9, v10, v11);
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
      if ( !byte_4CC0D0E )
      {
        sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
        byte_4CC0D0E = 1;
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
      v37 = vadd_f32(v32, vmul_n_f32(vsub_f32(v25, v32), v24)).n64_u64[0];
      v38 = HIDWORD(v37);
      UnityEngine_Transform__set_localPosition(mTrans, *(UnityEngine_Vector3_o *)(&v31 - 1), 0);
      mTrans = this->fields.mTrans;
      if ( !mTrans )
LABEL_25:
        sub_1C71608(mTrans, v19);
      v39 = (float)(v22 * -0.5) + 1.5;
      v40.fields.x = x * v39;
      v40.fields.y = y * v39;
      v40.fields.z = v36 * v39;
      UnityEngine_Transform__set_localScale(mTrans, v40, 0);
    }
  }
}


bool UITooltip__get_isVisible(const MethodInfo *method)
{
  UnityEngine_Object_o *mInstance; // x19
  _BOOL8 v2; // x0
  __int64 v3; // x1
  struct UITooltip_o *v4; // x8

  if ( (byte_4CCBDD9 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UITooltip_TypeInfo);
    byte_4CCBDD9 = 1;
  }
  mInstance = (UnityEngine_Object_o *)UITooltip_TypeInfo->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = UnityEngine_Object__op_Inequality(mInstance, 0, 0);
  if ( !v2 )
    return 0;
  v4 = UITooltip_TypeInfo->static_fields->mInstance;
  if ( !v4 )
    sub_1C71608(v2, v3);
  return v4->fields.mTarget == 1.0;
}