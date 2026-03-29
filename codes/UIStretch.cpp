void UIStretch___ctor(UIStretch_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_c *v3; // x8

  this->fields.runOnlyOnce = 1;
  if ( !byte_4D30C94 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D30C94 = 1;
  }
  v3 = UnityEngine_Vector2_TypeInfo;
  this->fields.relativeSize = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  this->fields.initialSize = v3->static_fields->oneVector;
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    v3 = UnityEngine_Vector2_TypeInfo;
    byte_4D2A019 = 1;
  }
  this->fields.borderPadding = v3->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIStretch__Awake(UIStretch_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  UICamera_c *v38; // x0
  System_Delegate_o *onScreenResize; // x20
  UICamera_OnScreenResize_o *v40; // x21
  System_Delegate_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Delegate_o *v48; // x8
  UICamera_OnScreenResize_c *v49; // x1
  struct UICamera_StaticFields *v50; // x0
  GrandQuestFolderBoardItem_o *p_onScreenResize; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_4D35394 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C93AD4(&UICamera_OnScreenResize_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    sub_1C93AD4(&Method_UIStretch_ScreenSizeChanged__);
    byte_4D35394 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mAnim, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  *(_QWORD *)&this->fields.mRect.fields.m_XMin = 0;
  *(_QWORD *)&this->fields.mRect.fields.m_Width = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v11, v12, v13, v14, v15, v16);
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mWidget, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  this->fields.mSprite = (struct UISprite_o *)v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v38 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v38->static_fields->onScreenResize;
  v40 = (UICamera_OnScreenResize_o *)sub_1C93D20(UICamera_OnScreenResize_TypeInfo);
  UICamera_OnScreenResize___ctor(v40, (Il2CppObject *)this, Method_UIStretch_ScreenSizeChanged__, 0);
  v41 = System_Delegate__Combine(onScreenResize, (System_Delegate_o *)v40, 0);
  v48 = v41;
  if ( !v41 )
    goto LABEL_9;
  v49 = UICamera_OnScreenResize_TypeInfo;
  if ( (UICamera_OnScreenResize_c *)v41->klass != UICamera_OnScreenResize_TypeInfo
    || (v50 = UICamera_TypeInfo->static_fields,
        v50->onScreenResize = (struct UICamera_OnScreenResize_o *)v48,
        p_onScreenResize = (GrandQuestFolderBoardItem_o *)&v50->onScreenResize,
        (UICamera_OnScreenResize_c *)v48->klass != v49) )
  {
    sub_1C940C8(v48);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = (struct UICamera_OnScreenResize_o *)v48;
    p_onScreenResize = (GrandQuestFolderBoardItem_o *)&static_fields->onScreenResize;
  }
  sub_1C93A78(p_onScreenResize, (int32_t)v48, v42, v43, v44, v45, v46, v47);
}


void UIStretch__OnDestroy(UIStretch_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  System_Delegate_o *onScreenResize; // x20
  UICamera_OnScreenResize_o *v5; // x21
  System_Delegate_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Delegate_o *v13; // x8
  UICamera_OnScreenResize_c *v14; // x1
  struct UICamera_StaticFields *v15; // x0
  GrandQuestFolderBoardItem_o *p_onScreenResize; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_4D35395 & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_OnScreenResize_TypeInfo);
    sub_1C93AD4(&UICamera_TypeInfo);
    sub_1C93AD4(&Method_UIStretch_ScreenSizeChanged__);
    byte_4D35395 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v3->static_fields->onScreenResize;
  v5 = (UICamera_OnScreenResize_o *)sub_1C93D20(UICamera_OnScreenResize_TypeInfo);
  UICamera_OnScreenResize___ctor(v5, (Il2CppObject *)this, Method_UIStretch_ScreenSizeChanged__, 0);
  v6 = System_Delegate__Remove(onScreenResize, (System_Delegate_o *)v5, 0);
  v13 = v6;
  if ( !v6 )
    goto LABEL_9;
  v14 = UICamera_OnScreenResize_TypeInfo;
  if ( (UICamera_OnScreenResize_c *)v6->klass != UICamera_OnScreenResize_TypeInfo
    || (v15 = UICamera_TypeInfo->static_fields,
        v15->onScreenResize = (struct UICamera_OnScreenResize_o *)v13,
        p_onScreenResize = (GrandQuestFolderBoardItem_o *)&v15->onScreenResize,
        (UICamera_OnScreenResize_c *)v13->klass != v14) )
  {
    sub_1C940C8(v13);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = (struct UICamera_OnScreenResize_o *)v13;
    p_onScreenResize = (GrandQuestFolderBoardItem_o *)&static_fields->onScreenResize;
  }
  sub_1C93A78(p_onScreenResize, (int32_t)v13, v7, v8, v9, v10, v11, v12);
}


void UIStretch__ScreenSizeChanged(UIStretch_o *this, const MethodInfo *method)
{
  if ( this->fields.mStarted && this->fields.runOnlyOnce )
    UIStretch__Update(this, method);
}


void UIStretch__Start(UIStretch_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *container; // x21
  struct UIWidget_o **p_widgetContainer; // x21
  UnityEngine_Object_o *widgetContainer; // x22
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *uiCamera; // x21
  int32_t layer; // w21
  struct UnityEngine_Camera_o *CameraForLayer; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_GameObject_o *v30; // x20
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  const MethodInfo *v38; // x1

  if ( (byte_4D35396 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35396 = 1;
  }
  container = (UnityEngine_Object_o *)this->fields.container;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(container, 0, 0) )
  {
    p_widgetContainer = &this->fields.widgetContainer;
    widgetContainer = (UnityEngine_Object_o *)this->fields.widgetContainer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(widgetContainer, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_widgetContainer;
      if ( !*p_widgetContainer )
        goto LABEL_21;
      gameObject = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.container = gameObject;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.container,
        (int32_t)gameObject,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      *p_widgetContainer = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.widgetContainer, 0, v15, v16, v17, v18, v19, v20);
    }
  }
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(uiCamera, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( v7 )
    {
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v7, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
      this->fields.uiCamera = CameraForLayer;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.uiCamera,
        (int32_t)CameraForLayer,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      goto LABEL_18;
    }
LABEL_21:
    sub_1C93D2C(v7, v6);
  }
LABEL_18:
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v31 = NGUITools__FindInParents_object_(v30, (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIRoot___);
  this->fields.mRoot = (struct UIRoot_o *)v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mRoot, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  UIStretch__Update(this, v38);
  this->fields.mStarted = 1;
}


void UIStretch__Update(UIStretch_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x20
  __int64 v4; // x1
  void *transform; // x0
  UnityEngine_Object_o *container; // x20
  bool v7; // w0
  Il2CppObject *Component_object; // x20
  UnityEngine_Object_o *v9; // x21
  Il2CppObject *v10; // x21
  unsigned __int64 v11; // d1
  UnityEngine_Object_o *v12; // x20
  UnityEngine_Object_o *parent; // x20
  char v14; // w21
  UnityEngine_Transform_o *v15; // x0
  UnityEngine_Object_o *uiCamera; // x20
  UnityEngine_Object_o *v17; // x20
  bool v18; // w0
  float pixelSizeAdjustment; // s0
  UnityEngine_Object_o *mRoot; // x20
  float v21; // s8
  int32_t activeHeight; // w20
  float v23; // s2
  float v24; // s0
  int32_t height; // w0
  float m_XMin; // s0
  float v27; // s2
  float m_Width; // s9
  float m_Height; // s11
  float v30; // s0
  UnityEngine_Object_o *mWidget; // x20
  struct UIWidget_o *v32; // x8
  float z; // s10
  float mWidth; // s0
  float mHeight; // s8
  int32_t style; // w8
  float y; // s1
  float x; // s0
  float v39; // s1
  UnityEngine_Object_o *mSprite; // x20
  struct UISprite_o *v41; // x8
  UnityEngine_Object_o *mAtlas; // x20
  float pixelSize; // s10
  struct UISprite_o *v44; // x8
  float v45; // s11
  UIWidget_o *v46; // x20
  float v47; // s12
  float v48; // s12
  double v49; // d9
  double v50; // d0
  double v51; // d0
  double v52; // d1
  UnityEngine_Object_o *v53; // x20
  UIWidget_o *v54; // x20
  float v55; // s10
  float v56; // s10
  double v57; // d9
  double v58; // d0
  double v59; // d0
  double v60; // d1
  UnityEngine_Object_o *mPanel; // x20
  int32_t v62; // w8
  int32_t v63; // w8
  double v64; // d1
  double v65; // d1
  int32_t v67; // w1
  UIWidget_o *v68; // x20
  float v69; // s9
  System_Math_c *v70; // x0
  int32_t v71; // w1
  float v72; // s9
  double v73; // d8
  double v74; // d0
  double v75; // d0
  double v76; // d1
  double v77; // d1
  int32_t v78; // w1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Bounds_o iptr; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o localScale; // 0:kr20_12.12
  UnityEngine_Vector3_o v82; // 0:kr34_12.12
  UnityEngine_Vector4_o finalClipRegion; // 0:kr00_16.16
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D35397 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D35397 = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    transform = this->fields.mAnim;
    if ( !transform )
      goto LABEL_183;
    if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)transform, 0) )
      return;
  }
  if ( !this->fields.style )
    return;
  container = (UnityEngine_Object_o *)this->fields.container;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(container, 0, 0);
  Component_object = 0;
  if ( !v7 )
  {
    transform = this->fields.container;
    if ( !transform )
      goto LABEL_183;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  v9 = (UnityEngine_Object_o *)this->fields.container;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
    goto LABEL_20;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_20:
    transform = this->fields.container;
    if ( !transform )
      goto LABEL_183;
    v10 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)transform,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_183;
    transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !Component_object )
      goto LABEL_183;
    UIWidget__CalculateBounds_50151560(&iptr, (UIWidget_o *)Component_object, (UnityEngine_Transform_o *)transform, 0);
LABEL_28:
    v11 = vadd_f32(*(float32x2_t *)&iptr.fields.m_Extents.fields.x, *(float32x2_t *)&iptr.fields.m_Extents.fields.x).n64_u64[0];
    *(float32x2_t *)&this->fields.mRect.fields.m_XMin = vsub_f32(
                                                          *(float32x2_t *)&iptr.fields.m_Center.fields.x,
                                                          *(float32x2_t *)&iptr.fields.m_Extents.fields.x);
    *(_QWORD *)&this->fields.mRect.fields.m_Width = v11;
LABEL_59:
    pixelSizeAdjustment = 1.0;
    goto LABEL_60;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_183;
    if ( HIDWORD(v10[18].klass) )
    {
      finalClipRegion = UIPanel__get_finalClipRegion((UIPanel_o *)v10, 0);
      this->fields.mRect.fields.m_Width = finalClipRegion.fields.z;
      this->fields.mRect.fields.m_Height = finalClipRegion.fields.w;
      this->fields.mRect.fields.m_XMin = finalClipRegion.fields.x - (float)(finalClipRegion.fields.z * 0.5);
      this->fields.mRect.fields.m_YMin = finalClipRegion.fields.y - (float)(finalClipRegion.fields.w * 0.5);
    }
    else
    {
      mRoot = (UnityEngine_Object_o *)this->fields.mRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = 0.5;
      if ( UnityEngine_Object__op_Inequality(mRoot, 0, 0) )
      {
        transform = this->fields.mRoot;
        if ( !transform )
          goto LABEL_183;
        activeHeight = UIRoot__get_activeHeight((UIRoot_o *)transform, 0);
        v21 = (float)((float)activeHeight / (float)UnityEngine_Screen__get_height(0)) * 0.5;
      }
      v23 = v21 * (float)-UnityEngine_Screen__get_width(0);
      v24 = (float)(this->fields.mRect.fields.m_Width + this->fields.mRect.fields.m_XMin) - v23;
      this->fields.mRect.fields.m_XMin = v23;
      this->fields.mRect.fields.m_Width = v24;
      height = UnityEngine_Screen__get_height(0);
      m_XMin = this->fields.mRect.fields.m_XMin;
      v27 = v21 * (float)-height;
      this->fields.mRect.fields.m_YMin = v27;
      this->fields.mRect.fields.m_Width = (float)-m_XMin - m_XMin;
      this->fields.mRect.fields.m_Height = (float)-v27 - v27;
    }
    goto LABEL_59;
  }
  v12 = (UnityEngine_Object_o *)this->fields.container;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_183;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (void *)UnityEngine_Object__op_Inequality(parent, 0, 0);
    if ( !this->fields.container )
      goto LABEL_183;
    v14 = (char)transform;
    v15 = UnityEngine_GameObject__get_transform(this->fields.container, 0);
    if ( (v14 & 1) != 0 )
      NGUIMath__CalculateRelativeWidgetBounds_49948180(&iptr, (UnityEngine_Transform_o *)parent, v15, 0);
    else
      NGUIMath__CalculateRelativeWidgetBounds(&iptr, v15, 0);
    goto LABEL_28;
  }
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiCamera, 0, 0) )
  {
    transform = this->fields.uiCamera;
    if ( !transform )
      goto LABEL_183;
    this->fields.mRect = UnityEngine_Camera__get_pixelRect((UnityEngine_Camera_o *)transform, 0);
    v17 = (UnityEngine_Object_o *)this->fields.mRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = UnityEngine_Object__op_Inequality(v17, 0, 0);
    pixelSizeAdjustment = 1.0;
    if ( v18 )
    {
      transform = this->fields.mRoot;
      if ( !transform )
        goto LABEL_183;
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment((UIRoot_o *)transform, 0);
    }
LABEL_60:
    m_Width = this->fields.mRect.fields.m_Width;
    m_Height = this->fields.mRect.fields.m_Height;
    if ( pixelSizeAdjustment != 1.0 && m_Height > 1.0 )
    {
      transform = this->fields.mRoot;
      if ( !transform )
        goto LABEL_183;
      v30 = (float)UIRoot__get_activeHeight((UIRoot_o *)transform, 0) / m_Height;
      m_Width = m_Width * v30;
      m_Height = m_Height * v30;
    }
    mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (void *)UnityEngine_Object__op_Inequality(mWidget, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      v32 = this->fields.mWidget;
      if ( !v32 )
        goto LABEL_183;
      z = 0.0;
      mWidth = (float)v32->fields.mWidth;
      mHeight = (float)v32->fields.mHeight;
    }
    else
    {
      transform = this->fields.mTrans;
      if ( !transform )
        goto LABEL_183;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      mWidth = localScale.fields.x;
      mHeight = localScale.fields.y;
      z = localScale.fields.z;
    }
    style = this->fields.style;
    switch ( style )
    {
      case 2:
        goto LABEL_74;
      case 4:
        y = this->fields.relativeSize.fields.y;
        m_Width = m_Height * this->fields.relativeSize.fields.x;
        goto LABEL_75;
      case 5:
        x = this->fields.initialSize.fields.x;
        v39 = this->fields.initialSize.fields.y;
        if ( (float)(x / v39) < (float)(m_Width / m_Height) )
          goto LABEL_77;
        goto LABEL_79;
      case 6:
        x = this->fields.initialSize.fields.x;
        v39 = this->fields.initialSize.fields.y;
        if ( (float)(x / v39) > (float)(m_Width / m_Height) )
        {
LABEL_77:
          mHeight = v39 * (float)(m_Width / x);
        }
        else
        {
LABEL_79:
          m_Width = x * (float)(m_Height / v39);
          mHeight = m_Height;
        }
        break;
      default:
        mWidth = m_Width * this->fields.relativeSize.fields.x;
        m_Width = mWidth;
        if ( style != 1 )
        {
LABEL_74:
          y = this->fields.relativeSize.fields.y;
          m_Width = mWidth;
LABEL_75:
          mHeight = m_Height * y;
        }
        break;
    }
    mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (void *)UnityEngine_Object__op_Inequality(mSprite, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      v41 = this->fields.mSprite;
      if ( !v41 )
        goto LABEL_183;
      mAtlas = (UnityEngine_Object_o *)v41->fields.mAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (void *)UnityEngine_Object__op_Inequality(mAtlas, 0, 0);
      pixelSize = 1.0;
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v44 = this->fields.mSprite;
        if ( !v44 )
          goto LABEL_183;
        transform = v44->fields.mAtlas;
        if ( !transform )
          goto LABEL_183;
        pixelSize = UIAtlas__get_pixelSize((UIAtlas_o *)transform, 0);
      }
      v45 = this->fields.borderPadding.fields.y;
      if ( this->fields.style == 2 )
        goto LABEL_140;
      v46 = (UIWidget_o *)this->fields.mSprite;
      v47 = pixelSize * this->fields.borderPadding.fields.x;
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
      }
      v48 = m_Width - v47;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v49 = v48;
      v50 = modf(v48, (double *)&iptr.fields.m_Center.fields.x);
      if ( v48 >= 0.0 )
      {
        if ( v50 != 0.5 )
        {
          v51 = floor(v49 + 0.5);
          goto LABEL_135;
        }
        v51 = *(double *)&iptr.fields.m_Center.fields.x;
        v52 = 1.0;
      }
      else
      {
        if ( v50 != -0.5 )
        {
          v51 = ceil(v49 + -0.5);
          goto LABEL_135;
        }
        v51 = *(double *)&iptr.fields.m_Center.fields.x;
        v52 = -1.0;
      }
      v64 = v51 + v52;
      if ( ((__int64)v51 & 1) != 0 )
        v51 = v64;
LABEL_135:
      if ( !v46 )
        goto LABEL_183;
      if ( v51 == INFINITY )
        v67 = 0x80000000;
      else
        v67 = (int)v51;
      UIWidget__set_width(v46, v67, 0);
      if ( this->fields.style != 1 )
      {
LABEL_140:
        v68 = (UIWidget_o *)this->fields.mSprite;
        if ( !byte_4D2A83C )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A83C = 1;
        }
        v69 = mHeight - (float)(pixelSize * v45);
        v70 = System_Math_TypeInfo;
        goto LABEL_153;
      }
LABEL_170:
      if ( !byte_4D2A13E )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      m_Width = static_fields->oneVector.fields.x;
      mHeight = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      goto LABEL_173;
    }
    v53 = (UnityEngine_Object_o *)this->fields.mWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v53, 0, 0) )
    {
      if ( this->fields.style == 2 )
        goto LABEL_150;
      v54 = this->fields.mWidget;
      v55 = this->fields.borderPadding.fields.x;
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
      }
      v56 = m_Width - v55;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v57 = v56;
      v58 = modf(v56, (double *)&iptr.fields.m_Center.fields.x);
      if ( v56 >= 0.0 )
      {
        if ( v58 != 0.5 )
        {
          v59 = floor(v57 + 0.5);
          goto LABEL_145;
        }
        v59 = *(double *)&iptr.fields.m_Center.fields.x;
        v60 = 1.0;
      }
      else
      {
        if ( v58 != -0.5 )
        {
          v59 = ceil(v57 + -0.5);
          goto LABEL_145;
        }
        v59 = *(double *)&iptr.fields.m_Center.fields.x;
        v60 = -1.0;
      }
      v65 = v59 + v60;
      if ( ((__int64)v59 & 1) != 0 )
        v59 = v65;
LABEL_145:
      if ( !v54 )
        goto LABEL_183;
      if ( v59 == INFINITY )
        v71 = 0x80000000;
      else
        v71 = (int)v59;
      UIWidget__set_width(v54, v71, 0);
      if ( this->fields.style == 1 )
        goto LABEL_170;
LABEL_150:
      v68 = this->fields.mWidget;
      v72 = this->fields.borderPadding.fields.y;
      if ( !byte_4D2A83C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A83C = 1;
      }
      v70 = System_Math_TypeInfo;
      v69 = mHeight - v72;
LABEL_153:
      if ( !v70->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v70);
      v73 = v69;
      v74 = modf(v69, (double *)&iptr.fields.m_Center.fields.x);
      if ( v69 >= 0.0 )
      {
        if ( v74 == 0.5 )
        {
          v75 = *(double *)&iptr.fields.m_Center.fields.x;
          v76 = 1.0;
LABEL_160:
          v77 = v75 + v76;
          if ( ((__int64)v75 & 1) != 0 )
            v75 = v77;
          goto LABEL_165;
        }
        v75 = floor(v73 + 0.5);
      }
      else
      {
        if ( v74 == -0.5 )
        {
          v75 = *(double *)&iptr.fields.m_Center.fields.x;
          v76 = -1.0;
          goto LABEL_160;
        }
        v75 = ceil(v73 + -0.5);
      }
LABEL_165:
      if ( !v68 )
        goto LABEL_183;
      if ( v75 == INFINITY )
        v78 = 0x80000000;
      else
        v78 = (int)v75;
      UIWidget__set_height(v68, v78, 0);
      goto LABEL_170;
    }
    mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
    {
      v63 = this->fields.style;
      if ( v63 == 2 || (m_Width = m_Width - this->fields.borderPadding.fields.x, v63 != 1) )
        mHeight = mHeight - this->fields.borderPadding.fields.y;
LABEL_173:
      transform = this->fields.mTrans;
      if ( transform )
      {
        v82 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
        if ( (float)((float)((float)(v82.fields.z - z) * (float)(v82.fields.z - z))
                   + (float)((float)((float)(v82.fields.x - m_Width) * (float)(v82.fields.x - m_Width))
                           + (float)((float)(v82.fields.y - mHeight) * (float)(v82.fields.y - mHeight)))) < 1.0e-10 )
          goto LABEL_177;
        transform = this->fields.mTrans;
        if ( transform )
        {
          v84.fields.x = m_Width;
          v84.fields.y = mHeight;
          v84.fields.z = z;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v84, 0);
LABEL_177:
          if ( this->fields.runOnlyOnce )
          {
            if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
            if ( UnityEngine_Application__get_isPlaying(0) )
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
          }
          return;
        }
      }
LABEL_183:
      sub_1C93D2C(transform, v4);
    }
    transform = this->fields.mPanel;
    if ( !transform )
      goto LABEL_183;
    v62 = this->fields.style;
    if ( v62 == 2 )
    {
      v85.fields.z = *((float *)transform + 76);
    }
    else
    {
      v85.fields.z = m_Width - this->fields.borderPadding.fields.x;
      if ( v62 == 1 )
      {
        v85.fields.w = *((float *)transform + 77);
LABEL_132:
        v85.fields.x = *((float *)transform + 74);
        v85.fields.y = *((float *)transform + 75);
        UIPanel__set_baseClipRegion((UIPanel_o *)transform, v85, 0);
        goto LABEL_170;
      }
    }
    v85.fields.w = mHeight - this->fields.borderPadding.fields.y;
    goto LABEL_132;
  }
}