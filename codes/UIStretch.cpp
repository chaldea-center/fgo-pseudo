void UIStretch___ctor(UIStretch_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_c *v3; // x8

  this->fields.runOnlyOnce = 1;
  if ( !byte_4D2CAFB )
  {
    sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    byte_4D2CAFB = 1;
  }
  v3 = UnityEngine_Vector2_TypeInfo;
  this->fields.relativeSize = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  this->fields.initialSize = v3->static_fields->oneVector;
  if ( !byte_4D25DF9 )
  {
    sub_1C94098(&UnityEngine_Vector2_TypeInfo);
    v3 = UnityEngine_Vector2_TypeInfo;
    byte_4D25DF9 = 1;
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

  if ( (byte_4D31172 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C94098(&UICamera_OnScreenResize_TypeInfo);
    sub_1C94098(&UICamera_TypeInfo);
    sub_1C94098(&Method_UIStretch_ScreenSizeChanged__);
    byte_4D31172 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mAnim, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  *(_QWORD *)&this->fields.mRect.fields.m_XMin = 0;
  *(_QWORD *)&this->fields.mRect.fields.m_Width = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v11, v12, v13, v14, v15, v16);
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mWidget, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  this->fields.mSprite = (struct UISprite_o *)v24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mSprite, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v31;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mPanel, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v38 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v38->static_fields->onScreenResize;
  v40 = (UICamera_OnScreenResize_o *)sub_1C942E4(UICamera_OnScreenResize_TypeInfo);
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
    sub_1C9468C(v48);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = (struct UICamera_OnScreenResize_o *)v48;
    p_onScreenResize = (GrandQuestFolderBoardItem_o *)&static_fields->onScreenResize;
  }
  sub_1C9403C(p_onScreenResize, (int32_t)v48, v42, v43, v44, v45, v46, v47);
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

  if ( (byte_4D31173 & 1) == 0 )
  {
    sub_1C94098(&UICamera_OnScreenResize_TypeInfo);
    sub_1C94098(&UICamera_TypeInfo);
    sub_1C94098(&Method_UIStretch_ScreenSizeChanged__);
    byte_4D31173 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v3->static_fields->onScreenResize;
  v5 = (UICamera_OnScreenResize_o *)sub_1C942E4(UICamera_OnScreenResize_TypeInfo);
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
    sub_1C9468C(v13);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = (struct UICamera_OnScreenResize_o *)v13;
    p_onScreenResize = (GrandQuestFolderBoardItem_o *)&static_fields->onScreenResize;
  }
  sub_1C9403C(p_onScreenResize, (int32_t)v13, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4D31174 & 1) == 0 )
  {
    sub_1C94098(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C94098(&NGUITools_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D31174 = 1;
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
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields.container,
        (int32_t)gameObject,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      *p_widgetContainer = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.widgetContainer, 0, v15, v16, v17, v18, v19, v20);
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
      sub_1C9403C(
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
    sub_1C942F0(v7, v6);
  }
LABEL_18:
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v31 = NGUITools__FindInParents_object_(v30, (const MethodInfo_32274D4 *)Method_NGUITools_FindInParents_UIRoot___);
  this->fields.mRoot = (struct UIRoot_o *)v31;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.mRoot, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  UIStretch__Update(this, v38);
  this->fields.mStarted = 1;
}


// local variable allocation has failed, the output may be wrong!
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
  float mWidth; // s0 OVERLAPPED
  float mHeight; // s8
  float v36; // s1
  float v37; // s2
  int32_t style; // w8
  float y; // s1
  float x; // s0
  float v41; // s1
  UnityEngine_Object_o *mSprite; // x20
  struct UISprite_o *v43; // x8
  UnityEngine_Object_o *mAtlas; // x20
  float pixelSize; // s10
  struct UISprite_o *v46; // x8
  float v47; // s11
  UIWidget_o *v48; // x20
  float v49; // s12
  float v50; // s12
  double v51; // d9
  double v52; // d0
  double v53; // d0
  double v54; // d1
  UnityEngine_Object_o *v55; // x20
  UIWidget_o *v56; // x20
  float v57; // s10
  float v58; // s10
  double v59; // d9
  double v60; // d0
  double v61; // d0
  double v62; // d1
  UnityEngine_Object_o *mPanel; // x20
  int32_t v64; // w8
  int v65; // s0
  int v66; // s1
  float v67; // s2 OVERLAPPED
  int32_t v68; // w8
  double v69; // d1
  double v70; // d1
  float v71; // s3
  int32_t v72; // w1
  UIWidget_o *v73; // x20
  float v74; // s9
  System_Math_c *v75; // x0
  int32_t v76; // w1
  float v77; // s9
  double v78; // d8
  double v79; // d0
  double v80; // d0
  double v81; // d1
  double v82; // d1
  int32_t v83; // w1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Bounds_o iptr; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D31175 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D31175 = 1;
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
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
            (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    UIWidget__CalculateBounds_50118976(&iptr, (UIWidget_o *)Component_object, (UnityEngine_Transform_o *)transform, 0);
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
      NGUIMath__CalculateRelativeWidgetBounds_49915696(&iptr, (UnityEngine_Transform_o *)parent, v15, 0);
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
      *(UnityEngine_Vector3_o *)&mWidth = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      mHeight = v36;
      z = v37;
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
        v41 = this->fields.initialSize.fields.y;
        if ( (float)(x / v41) < (float)(m_Width / m_Height) )
          goto LABEL_77;
        goto LABEL_79;
      case 6:
        x = this->fields.initialSize.fields.x;
        v41 = this->fields.initialSize.fields.y;
        if ( (float)(x / v41) > (float)(m_Width / m_Height) )
        {
LABEL_77:
          mHeight = v41 * (float)(m_Width / x);
        }
        else
        {
LABEL_79:
          m_Width = x * (float)(m_Height / v41);
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
      v43 = this->fields.mSprite;
      if ( !v43 )
        goto LABEL_183;
      mAtlas = (UnityEngine_Object_o *)v43->fields.mAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (void *)UnityEngine_Object__op_Inequality(mAtlas, 0, 0);
      pixelSize = 1.0;
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v46 = this->fields.mSprite;
        if ( !v46 )
          goto LABEL_183;
        transform = v46->fields.mAtlas;
        if ( !transform )
          goto LABEL_183;
        pixelSize = UIAtlas__get_pixelSize((UIAtlas_o *)transform, 0);
      }
      v47 = this->fields.borderPadding.fields.y;
      if ( this->fields.style == 2 )
        goto LABEL_140;
      v48 = (UIWidget_o *)this->fields.mSprite;
      v49 = pixelSize * this->fields.borderPadding.fields.x;
      if ( !byte_4D266E8 )
      {
        sub_1C94098(&System_Math_TypeInfo);
        byte_4D266E8 = 1;
      }
      v50 = m_Width - v49;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v51 = v50;
      v52 = modf(v50, (double *)&iptr.fields.m_Center.fields.x);
      if ( v50 >= 0.0 )
      {
        if ( v52 != 0.5 )
        {
          v53 = floor(v51 + 0.5);
          goto LABEL_135;
        }
        v53 = *(double *)&iptr.fields.m_Center.fields.x;
        v54 = 1.0;
      }
      else
      {
        if ( v52 != -0.5 )
        {
          v53 = ceil(v51 + -0.5);
          goto LABEL_135;
        }
        v53 = *(double *)&iptr.fields.m_Center.fields.x;
        v54 = -1.0;
      }
      v69 = v53 + v54;
      if ( ((__int64)v53 & 1) != 0 )
        v53 = v69;
LABEL_135:
      if ( !v48 )
        goto LABEL_183;
      if ( v53 == INFINITY )
        v72 = 0x80000000;
      else
        v72 = (int)v53;
      UIWidget__set_width(v48, v72, 0);
      if ( this->fields.style != 1 )
      {
LABEL_140:
        v73 = (UIWidget_o *)this->fields.mSprite;
        if ( !byte_4D266E8 )
        {
          sub_1C94098(&System_Math_TypeInfo);
          byte_4D266E8 = 1;
        }
        v74 = mHeight - (float)(pixelSize * v47);
        v75 = System_Math_TypeInfo;
        goto LABEL_153;
      }
LABEL_170:
      if ( !byte_4D25F1E )
      {
        sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F1E = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      m_Width = static_fields->oneVector.fields.x;
      mHeight = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      goto LABEL_173;
    }
    v55 = (UnityEngine_Object_o *)this->fields.mWidget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v55, 0, 0) )
    {
      if ( this->fields.style == 2 )
        goto LABEL_150;
      v56 = this->fields.mWidget;
      v57 = this->fields.borderPadding.fields.x;
      if ( !byte_4D266E8 )
      {
        sub_1C94098(&System_Math_TypeInfo);
        byte_4D266E8 = 1;
      }
      v58 = m_Width - v57;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v59 = v58;
      v60 = modf(v58, (double *)&iptr.fields.m_Center.fields.x);
      if ( v58 >= 0.0 )
      {
        if ( v60 != 0.5 )
        {
          v61 = floor(v59 + 0.5);
          goto LABEL_145;
        }
        v61 = *(double *)&iptr.fields.m_Center.fields.x;
        v62 = 1.0;
      }
      else
      {
        if ( v60 != -0.5 )
        {
          v61 = ceil(v59 + -0.5);
          goto LABEL_145;
        }
        v61 = *(double *)&iptr.fields.m_Center.fields.x;
        v62 = -1.0;
      }
      v70 = v61 + v62;
      if ( ((__int64)v61 & 1) != 0 )
        v61 = v70;
LABEL_145:
      if ( !v56 )
        goto LABEL_183;
      if ( v61 == INFINITY )
        v76 = 0x80000000;
      else
        v76 = (int)v61;
      UIWidget__set_width(v56, v76, 0);
      if ( this->fields.style == 1 )
        goto LABEL_170;
LABEL_150:
      v73 = this->fields.mWidget;
      v77 = this->fields.borderPadding.fields.y;
      if ( !byte_4D266E8 )
      {
        sub_1C94098(&System_Math_TypeInfo);
        byte_4D266E8 = 1;
      }
      v75 = System_Math_TypeInfo;
      v74 = mHeight - v77;
LABEL_153:
      if ( !v75->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v75);
      v78 = v74;
      v79 = modf(v74, (double *)&iptr.fields.m_Center.fields.x);
      if ( v74 >= 0.0 )
      {
        if ( v79 == 0.5 )
        {
          v80 = *(double *)&iptr.fields.m_Center.fields.x;
          v81 = 1.0;
LABEL_160:
          v82 = v80 + v81;
          if ( ((__int64)v80 & 1) != 0 )
            v80 = v82;
          goto LABEL_165;
        }
        v80 = floor(v78 + 0.5);
      }
      else
      {
        if ( v79 == -0.5 )
        {
          v80 = *(double *)&iptr.fields.m_Center.fields.x;
          v81 = -1.0;
          goto LABEL_160;
        }
        v80 = ceil(v78 + -0.5);
      }
LABEL_165:
      if ( !v73 )
        goto LABEL_183;
      if ( v80 == INFINITY )
        v83 = 0x80000000;
      else
        v83 = (int)v80;
      UIWidget__set_height(v73, v83, 0);
      goto LABEL_170;
    }
    mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
    {
      v68 = this->fields.style;
      if ( v68 == 2 || (m_Width = m_Width - this->fields.borderPadding.fields.x, v68 != 1) )
        mHeight = mHeight - this->fields.borderPadding.fields.y;
LABEL_173:
      transform = this->fields.mTrans;
      if ( transform )
      {
        localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
        if ( (float)((float)((float)(localScale.fields.z - z) * (float)(localScale.fields.z - z))
                   + (float)((float)((float)(localScale.fields.x - m_Width) * (float)(localScale.fields.x - m_Width))
                           + (float)((float)(localScale.fields.y - mHeight) * (float)(localScale.fields.y - mHeight)))) < 1.0e-10 )
          goto LABEL_177;
        transform = this->fields.mTrans;
        if ( transform )
        {
          v87.fields.x = m_Width;
          v87.fields.y = mHeight;
          v87.fields.z = z;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v87, 0);
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
      sub_1C942F0(transform, v4);
    }
    transform = this->fields.mPanel;
    if ( !transform )
      goto LABEL_183;
    v64 = this->fields.style;
    if ( v64 == 2 )
    {
      v67 = *((float *)transform + 76);
    }
    else
    {
      v67 = m_Width - this->fields.borderPadding.fields.x;
      if ( v64 == 1 )
      {
        v71 = *((float *)transform + 77);
LABEL_132:
        v65 = *((_DWORD *)transform + 74);
        v66 = *((_DWORD *)transform + 75);
        UIPanel__set_baseClipRegion((UIPanel_o *)transform, *(UnityEngine_Vector4_o *)(&v67 - 2), 0);
        goto LABEL_170;
      }
    }
    v71 = mHeight - this->fields.borderPadding.fields.y;
    goto LABEL_132;
  }
}