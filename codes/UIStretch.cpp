void UIStretch___ctor(UIStretch_o *this, const MethodInfo *method)
{
  int v3; // w8
  int v4; // w10
  UnityEngine_Vector2_c *v5; // x8

  v3 = (unsigned __int8)byte_596F578;
  this->fields.runOnlyOnce = 1;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_596F578 = 1;
  }
  v4 = (unsigned __int8)byte_59699C0;
  v5 = UnityEngine_Vector2_TypeInfo;
  this->fields.relativeSize = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  this->fields.initialSize = v5->static_fields->oneVector;
  if ( !v4 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    v5 = UnityEngine_Vector2_TypeInfo;
    byte_59699C0 = 1;
  }
  this->fields.borderPadding = v5->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIStretch__Awake(UIStretch_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  UICamera_c *v39; // x0
  System_Delegate_o *onScreenResize; // x20
  UICamera_OnScreenResize_o *v41; // x21
  System_Delegate_o *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Delegate_o *v49; // x8
  UICamera_OnScreenResize_c *v50; // x1
  struct UICamera_StaticFields *v51; // x0
  MissionNaviTransitionBoardItem_o *p_onScreenResize; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_59752C5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&UICamera_OnScreenResize_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&Method_UIStretch_ScreenSizeChanged__);
    byte_59752C5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAnim,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  *(_QWORD *)&this->fields.mRect.fields.m_XMin = 0;
  *(_QWORD *)&this->fields.mRect.fields.m_Width = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mTrans,
    (int32_t)transform,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.mWidget = (struct UIWidget_o *)v17;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mWidget, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  this->fields.mSprite = (struct UISprite_o *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mSprite, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  this->fields.mPanel = (struct UIPanel_o *)v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mPanel, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v39 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v38);
    v39 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v39->static_fields->onScreenResize;
  v41 = (UICamera_OnScreenResize_o *)sub_2213CCC(UICamera_OnScreenResize_TypeInfo);
  UICamera_OnScreenResize___ctor(v41, (Il2CppObject *)this, Method_UIStretch_ScreenSizeChanged__, 0);
  v42 = System_Delegate__Combine(onScreenResize, (System_Delegate_o *)v41, 0);
  v49 = v42;
  if ( !v42 )
    goto LABEL_9;
  v50 = UICamera_OnScreenResize_TypeInfo;
  if ( (UICamera_OnScreenResize_c *)v42->klass != UICamera_OnScreenResize_TypeInfo
    || (v51 = UICamera_TypeInfo->static_fields,
        v51->onScreenResize = (struct UICamera_OnScreenResize_o *)v49,
        p_onScreenResize = (MissionNaviTransitionBoardItem_o *)&v51->onScreenResize,
        (UICamera_OnScreenResize_c *)v49->klass != v50) )
  {
    sub_221405C(v49, v50, v43);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = 0;
    p_onScreenResize = (MissionNaviTransitionBoardItem_o *)&static_fields->onScreenResize;
  }
  sub_2213A04(p_onScreenResize, (int32_t)v49, v43, v44, v45, v46, v47, v48);
}


void UIStretch__OnDestroy(UIStretch_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  System_Delegate_o *onScreenResize; // x20
  UICamera_OnScreenResize_o *v5; // x21
  System_Delegate_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Delegate_o *v13; // x8
  UICamera_OnScreenResize_c *v14; // x1
  struct UICamera_StaticFields *v15; // x0
  MissionNaviTransitionBoardItem_o *p_onScreenResize; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_59752C6 & 1) == 0 )
  {
    sub_2213A60(&UICamera_OnScreenResize_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&Method_UIStretch_ScreenSizeChanged__);
    byte_59752C6 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v3->static_fields->onScreenResize;
  v5 = (UICamera_OnScreenResize_o *)sub_2213CCC(UICamera_OnScreenResize_TypeInfo);
  UICamera_OnScreenResize___ctor(v5, (Il2CppObject *)this, Method_UIStretch_ScreenSizeChanged__, 0);
  v6 = System_Delegate__Remove(onScreenResize, (System_Delegate_o *)v5, 0);
  v13 = v6;
  if ( !v6 )
    goto LABEL_9;
  v14 = UICamera_OnScreenResize_TypeInfo;
  if ( (UICamera_OnScreenResize_c *)v6->klass != UICamera_OnScreenResize_TypeInfo
    || (v15 = UICamera_TypeInfo->static_fields,
        v15->onScreenResize = (struct UICamera_OnScreenResize_o *)v13,
        p_onScreenResize = (MissionNaviTransitionBoardItem_o *)&v15->onScreenResize,
        (UICamera_OnScreenResize_c *)v13->klass != v14) )
  {
    sub_221405C(v13, v14, v7);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = 0;
    p_onScreenResize = (MissionNaviTransitionBoardItem_o *)&static_fields->onScreenResize;
  }
  sub_2213A04(p_onScreenResize, (int32_t)v13, v7, v8, v9, v10, v11, v12);
}


void UIStretch__ScreenSizeChanged(UIStretch_o *this, const MethodInfo *method)
{
  if ( this->fields.mStarted && this->fields.runOnlyOnce )
    UIStretch__Update(this, method);
}


void UIStretch__Start(UIStretch_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *container; // x21
  __int64 v4; // x1
  struct UIWidget_o **p_widgetContainer; // x21
  UnityEngine_Object_o *widgetContainer; // x22
  UnityEngine_Component_o *v7; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
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
  __int64 v31; // x1
  UnityEngine_GameObject_o *v32; // x20
  Il2CppObject *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  const MethodInfo *v40; // x1

  if ( (byte_59752C7 & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIRoot___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752C7 = 1;
  }
  container = (UnityEngine_Object_o *)this->fields.container;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(container, 0, 0) )
  {
    p_widgetContainer = &this->fields.widgetContainer;
    widgetContainer = (UnityEngine_Object_o *)this->fields.widgetContainer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(widgetContainer, 0, 0) )
    {
      v7 = (UnityEngine_Component_o *)*p_widgetContainer;
      if ( !*p_widgetContainer )
        goto LABEL_21;
      gameObject = UnityEngine_Component__get_gameObject(v7, 0);
      this->fields.container = gameObject;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.container,
        (int32_t)gameObject,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      *p_widgetContainer = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.widgetContainer, 0, v15, v16, v17, v18, v19, v20);
    }
  }
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Equality(uiCamera, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( v7 )
    {
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v7, 0);
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
      goto LABEL_18;
    }
LABEL_21:
    sub_2213CDC(v7, v4);
  }
LABEL_18:
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v31);
  v33 = NGUITools__FindInParents_object_(v32, (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRoot___);
  this->fields.mRoot = (struct UIRoot_o *)v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mRoot, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  UIStretch__Update(this, v40);
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
  __int64 v11; // x1
  float32x4_t v12; // q2
  float32x4_t v13; // q3
  struct UnityEngine_Rect_o v14; // q0
  float32x4_t v15; // q1
  float z; // s9
  float w; // s11
  UnityEngine_Object_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Object_o *parent; // x20
  bool v22; // w8
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Object_o *uiCamera; // x20
  __int64 v25; // x1
  UnityEngine_Object_c *v26; // x0
  UnityEngine_Object_o *v27; // x20
  float pixelSizeAdjustment; // s0
  float v29; // s0
  UnityEngine_Object_o *mRoot; // x20
  float v31; // s8
  int32_t activeHeight; // w20
  float v33; // s0
  float v34; // s1
  float v35; // s3
  UnityEngine_Object_o *mWidget; // x20
  struct UIWidget_o *v37; // x8
  float v38; // s10
  float mWidth; // s0
  float mHeight; // s8
  int32_t style; // w8
  float y; // s1
  float x; // s0
  float v44; // s1
  UnityEngine_Object_o *mSprite; // x20
  struct UISprite_o *v46; // x8
  UnityEngine_Object_o *mAtlas; // x20
  float pixelSize; // s10
  struct UISprite_o *v49; // x8
  float v50; // s11
  UIWidget_o *v51; // x20
  float v52; // s12
  float v53; // s12
  double v54; // d9
  double v55; // d0
  double v56; // d0
  double v57; // d1
  UnityEngine_Object_o *v58; // x20
  UIWidget_o *v59; // x20
  float v60; // s10
  float v61; // s10
  double v62; // d9
  double v63; // d0
  double v64; // d0
  double v65; // d1
  UnityEngine_Object_o *mPanel; // x20
  int32_t v67; // w8
  int32_t v68; // w8
  double v69; // d1
  UnityEngine_Transform_o *v70; // x0
  float32x4_t v71; // q1
  float32x4_t v72; // q3
  double v73; // d1
  int32_t v75; // w1
  UIWidget_o *v76; // x20
  float v77; // s9
  System_Math_c *v78; // x0
  int32_t v79; // w1
  float v80; // s9
  double v81; // d8
  double v82; // d0
  double v83; // d0
  double v84; // d1
  double v85; // d1
  int32_t v86; // w1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Bounds_o v88; // [xsp+0h] [xbp-70h] BYREF
  UnityEngine_Vector3_o localScale; // 0:kr20_12.12
  UnityEngine_Vector3_o v90; // 0:kr34_12.12
  UnityEngine_Vector4_o finalClipRegion; // 0:kr00_16.16
  UnityEngine_Rect_o pixelRect; // 0:kr10_16.16
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59752C8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59752C8 = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    transform = this->fields.mAnim;
    if ( !transform )
      goto LABEL_189;
    if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)transform, 0) )
      return;
  }
  if ( !this->fields.style )
    return;
  container = (UnityEngine_Object_o *)this->fields.container;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v7 = UnityEngine_Object__op_Equality(container, 0, 0);
  Component_object = 0;
  if ( !v7 )
  {
    transform = this->fields.container;
    if ( !transform )
      goto LABEL_189;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  v9 = (UnityEngine_Object_o *)this->fields.container;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( !UnityEngine_Object__op_Equality(v9, 0, 0) )
    goto LABEL_20;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v10 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_20:
    transform = this->fields.container;
    if ( !transform )
      goto LABEL_189;
    v10 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)transform,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_189;
    transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !Component_object )
      goto LABEL_189;
    UIWidget__CalculateBounds_56491056(&v88, (UIWidget_o *)Component_object, (UnityEngine_Transform_o *)transform, 0);
    v12.n128_u64[0] = *(_QWORD *)&v88.fields.m_Extents.fields.x;
    v13.n128_u64[0] = *(_QWORD *)&v88.fields.m_Center.fields.x;
    v13.n128_u64[1] = *(_QWORD *)&v88.fields.m_Extents.fields.x;
    v12.n128_u64[1] = 0x4000000040000000LL;
    *(_QWORD *)&v14.fields.m_XMin = vsubq_f32(*(float32x4_t *)&v88.fields.m_Center.fields.x, v12).n128_u64[0];
    v15 = vmulq_f32(v13, v12);
    goto LABEL_28;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  transform = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !v10 )
      goto LABEL_189;
    if ( HIDWORD(v10[18].klass) )
    {
      finalClipRegion = UIPanel__get_finalClipRegion((UIPanel_o *)v10, 0);
      z = finalClipRegion.fields.z;
      w = finalClipRegion.fields.w;
      this->fields.mRect.fields.m_XMin = finalClipRegion.fields.x - (float)(finalClipRegion.fields.z * 0.5);
      this->fields.mRect.fields.m_YMin = finalClipRegion.fields.y - (float)(finalClipRegion.fields.w * 0.5);
    }
    else
    {
      mRoot = (UnityEngine_Object_o *)this->fields.mRoot;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      v31 = 0.5;
      if ( UnityEngine_Object__op_Inequality(mRoot, 0, 0) )
      {
        transform = this->fields.mRoot;
        if ( !transform )
          goto LABEL_189;
        activeHeight = UIRoot__get_activeHeight((UIRoot_o *)transform, 0);
        v31 = (float)((float)activeHeight / (float)UnityEngine_Screen__get_height(0)) * 0.5;
      }
      v33 = v31 * (float)-UnityEngine_Screen__get_width(0);
      v34 = (float)(this->fields.mRect.fields.m_Width + this->fields.mRect.fields.m_XMin) - v33;
      this->fields.mRect.fields.m_XMin = v33;
      this->fields.mRect.fields.m_Width = v34;
      v35 = v31 * (float)-UnityEngine_Screen__get_height(0);
      z = (float)-this->fields.mRect.fields.m_XMin - this->fields.mRect.fields.m_XMin;
      w = (float)-v35 - v35;
      this->fields.mRect.fields.m_YMin = v35;
    }
    this->fields.mRect.fields.m_Width = z;
    this->fields.mRect.fields.m_Height = w;
LABEL_63:
    mWidget = (UnityEngine_Object_o *)this->fields.mWidget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    transform = (void *)UnityEngine_Object__op_Inequality(mWidget, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      v37 = this->fields.mWidget;
      if ( !v37 )
        goto LABEL_189;
      v38 = 0.0;
      mWidth = (float)v37->fields.mWidth;
      mHeight = (float)v37->fields.mHeight;
    }
    else
    {
      transform = this->fields.mTrans;
      if ( !transform )
        goto LABEL_189;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
      mWidth = localScale.fields.x;
      mHeight = localScale.fields.y;
      v38 = localScale.fields.z;
    }
    style = this->fields.style;
    if ( style <= 4 )
    {
      if ( style == 2 )
      {
LABEL_79:
        y = this->fields.relativeSize.fields.y;
        z = mWidth;
        goto LABEL_80;
      }
      if ( style == 4 )
      {
        y = this->fields.relativeSize.fields.y;
        z = w * this->fields.relativeSize.fields.x;
LABEL_80:
        mHeight = w * y;
        goto LABEL_83;
      }
LABEL_78:
      mWidth = z * this->fields.relativeSize.fields.x;
      z = mWidth;
      if ( style == 1 )
        goto LABEL_83;
      goto LABEL_79;
    }
    if ( style == 5 )
    {
      x = this->fields.initialSize.fields.x;
      v44 = this->fields.initialSize.fields.y;
      if ( (float)(x / v44) < (float)(z / w) )
        goto LABEL_77;
    }
    else
    {
      if ( style != 6 )
        goto LABEL_78;
      x = this->fields.initialSize.fields.x;
      v44 = this->fields.initialSize.fields.y;
      if ( (float)(x / v44) > (float)(z / w) )
      {
LABEL_77:
        mHeight = v44 * (float)(z / x);
        goto LABEL_83;
      }
    }
    mHeight = w;
    z = x * (float)(w / v44);
LABEL_83:
    mSprite = (UnityEngine_Object_o *)this->fields.mSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    transform = (void *)UnityEngine_Object__op_Inequality(mSprite, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      v46 = this->fields.mSprite;
      if ( !v46 )
        goto LABEL_189;
      mAtlas = (UnityEngine_Object_o *)v46->fields.mAtlas;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      transform = (void *)UnityEngine_Object__op_Inequality(mAtlas, 0, 0);
      pixelSize = 1.0;
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        v49 = this->fields.mSprite;
        if ( !v49 )
          goto LABEL_189;
        transform = v49->fields.mAtlas;
        if ( !transform )
          goto LABEL_189;
        pixelSize = UIAtlas__get_pixelSize((UIAtlas_o *)transform, 0);
      }
      v50 = this->fields.borderPadding.fields.y;
      if ( this->fields.style == 2 )
        goto LABEL_145;
      v51 = (UIWidget_o *)this->fields.mSprite;
      v52 = pixelSize * this->fields.borderPadding.fields.x;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      v53 = z - v52;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
      v54 = v53;
      v55 = modf(v53, (double *)&v88.fields.m_Center.fields.x);
      if ( v53 >= 0.0 )
      {
        if ( v55 != 0.5 )
        {
          v56 = floor(v54 + 0.5);
          goto LABEL_140;
        }
        v57 = 1.0;
        v56 = *(double *)&v88.fields.m_Center.fields.x;
      }
      else
      {
        if ( v55 != -0.5 )
        {
          v56 = ceil(v54 + -0.5);
          goto LABEL_140;
        }
        v56 = *(double *)&v88.fields.m_Center.fields.x;
        v57 = -1.0;
      }
      v69 = v56 + v57;
      if ( ((__int64)v56 & 1) != 0 )
        v56 = v69;
LABEL_140:
      if ( !v51 )
        goto LABEL_189;
      if ( v56 == INFINITY )
        v75 = 0x80000000;
      else
        v75 = (int)v56;
      UIWidget__set_width(v51, v75, 0);
      if ( this->fields.style != 1 )
      {
LABEL_145:
        v76 = (UIWidget_o *)this->fields.mSprite;
        if ( !byte_596A30A )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_596A30A = 1;
        }
        v77 = mHeight - (float)(pixelSize * v50);
        v78 = System_Math_TypeInfo;
        goto LABEL_159;
      }
LABEL_176:
      if ( !byte_5969AE5 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      z = static_fields->oneVector.fields.x;
      mHeight = static_fields->oneVector.fields.y;
      v38 = static_fields->oneVector.fields.z;
      goto LABEL_179;
    }
    v58 = (UnityEngine_Object_o *)this->fields.mWidget;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(v58, 0, 0) )
    {
      if ( this->fields.style == 2 )
        goto LABEL_156;
      v59 = this->fields.mWidget;
      v60 = this->fields.borderPadding.fields.x;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      v61 = z - v60;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
      v62 = v61;
      v63 = modf(v61, (double *)&v88.fields.m_Center.fields.x);
      if ( v61 >= 0.0 )
      {
        if ( v63 != 0.5 )
        {
          v64 = floor(v62 + 0.5);
          goto LABEL_151;
        }
        v65 = 1.0;
        v64 = *(double *)&v88.fields.m_Center.fields.x;
      }
      else
      {
        if ( v63 != -0.5 )
        {
          v64 = ceil(v62 + -0.5);
          goto LABEL_151;
        }
        v64 = *(double *)&v88.fields.m_Center.fields.x;
        v65 = -1.0;
      }
      v73 = v64 + v65;
      if ( ((__int64)v64 & 1) != 0 )
        v64 = v73;
LABEL_151:
      if ( !v59 )
        goto LABEL_189;
      if ( v64 == INFINITY )
        v79 = 0x80000000;
      else
        v79 = (int)v64;
      UIWidget__set_width(v59, v79, 0);
      if ( this->fields.style == 1 )
        goto LABEL_176;
LABEL_156:
      v76 = this->fields.mWidget;
      v80 = this->fields.borderPadding.fields.y;
      if ( !byte_596A30A )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_596A30A = 1;
      }
      v78 = System_Math_TypeInfo;
      v77 = mHeight - v80;
LABEL_159:
      if ( !*(&v78->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v78, v4);
      v81 = v77;
      v82 = modf(v77, (double *)&v88.fields.m_Center.fields.x);
      if ( v77 >= 0.0 )
      {
        if ( v82 == 0.5 )
        {
          v84 = 1.0;
          v83 = *(double *)&v88.fields.m_Center.fields.x;
LABEL_166:
          v85 = v83 + v84;
          if ( ((__int64)v83 & 1) != 0 )
            v83 = v85;
          goto LABEL_171;
        }
        v83 = floor(v81 + 0.5);
      }
      else
      {
        if ( v82 == -0.5 )
        {
          v83 = *(double *)&v88.fields.m_Center.fields.x;
          v84 = -1.0;
          goto LABEL_166;
        }
        v83 = ceil(v81 + -0.5);
      }
LABEL_171:
      if ( !v76 )
        goto LABEL_189;
      if ( v83 == INFINITY )
        v86 = 0x80000000;
      else
        v86 = (int)v83;
      UIWidget__set_height(v76, v86, 0);
      goto LABEL_176;
    }
    mPanel = (UnityEngine_Object_o *)this->fields.mPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Inequality(mPanel, 0, 0) )
    {
      v68 = this->fields.style;
      if ( v68 == 2 || (z = z - this->fields.borderPadding.fields.x, v68 != 1) )
        mHeight = mHeight - this->fields.borderPadding.fields.y;
LABEL_179:
      transform = this->fields.mTrans;
      if ( transform )
      {
        v90 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
        if ( (float)((float)((float)(v90.fields.z - v38) * (float)(v90.fields.z - v38))
                   + (float)((float)((float)(v90.fields.x - z) * (float)(v90.fields.x - z))
                           + (float)((float)(v90.fields.y - mHeight) * (float)(v90.fields.y - mHeight)))) < 1.0e-10 )
          goto LABEL_183;
        transform = this->fields.mTrans;
        if ( transform )
        {
          v93.fields.x = z;
          v93.fields.y = mHeight;
          v93.fields.z = v38;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)transform, v93, 0);
LABEL_183:
          if ( this->fields.runOnlyOnce )
          {
            if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v4);
            if ( UnityEngine_Application__get_isPlaying(0) )
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
          }
          return;
        }
      }
LABEL_189:
      sub_2213CDC(transform, v4);
    }
    transform = this->fields.mPanel;
    if ( !transform )
      goto LABEL_189;
    v67 = this->fields.style;
    if ( v67 == 2 )
    {
      v94.fields.z = *((float *)transform + 76);
    }
    else
    {
      v94.fields.z = z - this->fields.borderPadding.fields.x;
      if ( v67 == 1 )
      {
        v94.fields.w = *((float *)transform + 77);
LABEL_137:
        v94.fields.x = *((float *)transform + 74);
        v94.fields.y = *((float *)transform + 75);
        UIPanel__set_baseClipRegion((UIPanel_o *)transform, v94, 0);
        goto LABEL_176;
      }
    }
    v94.fields.w = mHeight - this->fields.borderPadding.fields.y;
    goto LABEL_137;
  }
  v18 = (UnityEngine_Object_o *)this->fields.container;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !transform )
      goto LABEL_189;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    v22 = UnityEngine_Object__op_Inequality(parent, 0, 0);
    transform = this->fields.container;
    if ( v22 )
    {
      if ( !transform )
        goto LABEL_189;
      v23 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      NGUIMath__CalculateRelativeWidgetBounds_56289764(&v88, (UnityEngine_Transform_o *)parent, v23, 0);
    }
    else
    {
      if ( !transform )
        goto LABEL_189;
      v70 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      NGUIMath__CalculateRelativeWidgetBounds(&v88, v70, 0);
    }
    v71.n128_u64[0] = *(_QWORD *)&v88.fields.m_Extents.fields.x;
    v72.n128_u64[0] = *(_QWORD *)&v88.fields.m_Center.fields.x;
    v72.n128_u64[1] = *(_QWORD *)&v88.fields.m_Extents.fields.x;
    v71.n128_u64[1] = 0x4000000040000000LL;
    *(_QWORD *)&v14.fields.m_XMin = vsubq_f32(*(float32x4_t *)&v88.fields.m_Center.fields.x, v71).n128_u64[0];
    v15 = vmulq_f32(v72, v71);
LABEL_28:
    *(_QWORD *)&v14.fields.m_Width = v15.n128_u64[1];
    w = v15.n128_f32[3];
    z = v15.n128_f32[2];
    this->fields.mRect = v14;
    goto LABEL_63;
  }
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  if ( UnityEngine_Object__op_Inequality(uiCamera, 0, 0) )
  {
    transform = this->fields.uiCamera;
    if ( !transform )
      goto LABEL_189;
    pixelRect = UnityEngine_Camera__get_pixelRect((UnityEngine_Camera_o *)transform, 0);
    v26 = UnityEngine_Object_TypeInfo;
    this->fields.mRect.fields.m_XMin = pixelRect.fields.m_XMin;
    this->fields.mRect.fields.m_YMin = pixelRect.fields.m_YMin;
    v27 = (UnityEngine_Object_o *)this->fields.mRoot;
    this->fields.mRect.fields.m_Width = pixelRect.fields.m_Width;
    this->fields.mRect.fields.m_Height = pixelRect.fields.m_Height;
    if ( !*(&v26->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v26, v25);
    if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
    {
      transform = this->fields.mRoot;
      if ( !transform )
        goto LABEL_189;
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment((UIRoot_o *)transform, 0);
      z = this->fields.mRect.fields.m_Width;
      w = this->fields.mRect.fields.m_Height;
      if ( pixelSizeAdjustment != 1.0 && w > 1.0 )
      {
        transform = this->fields.mRoot;
        if ( !transform )
          goto LABEL_189;
        v29 = (float)UIRoot__get_activeHeight((UIRoot_o *)transform, 0) / w;
        z = z * v29;
        w = w * v29;
      }
    }
    else
    {
      z = this->fields.mRect.fields.m_Width;
      w = this->fields.mRect.fields.m_Height;
    }
    goto LABEL_63;
  }
}