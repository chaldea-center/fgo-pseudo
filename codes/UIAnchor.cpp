void UIAnchor___ctor(UIAnchor_o *this, const MethodInfo *method)
{
  int v3; // w9
  UnityEngine_Vector2_c *v4; // x8

  v3 = (unsigned __int8)byte_59699C0;
  this->fields.side = 8;
  this->fields.runOnlyOnce = 1;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  v4 = UnityEngine_Vector2_TypeInfo;
  this->fields.relativeOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.pixelOffset = v4->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIAnchor__Awake(UIAnchor_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  UICamera_c *v18; // x0
  System_Delegate_o *onScreenResize; // x20
  UICamera_OnScreenResize_o *v20; // x21
  System_Delegate_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Delegate_o *v28; // x8
  UICamera_OnScreenResize_c *v29; // x1
  struct UICamera_StaticFields *v30; // x0
  MissionNaviTransitionBoardItem_o *p_onScreenResize; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_5975217 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_2213A60(&UICamera_OnScreenResize_TypeInfo);
    sub_2213A60(&Method_UIAnchor_ScreenSizeChanged__);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975217 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAnim,
    (int32_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v18 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v17);
    v18 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v18->static_fields->onScreenResize;
  v20 = (UICamera_OnScreenResize_o *)sub_2213CCC(UICamera_OnScreenResize_TypeInfo);
  UICamera_OnScreenResize___ctor(v20, (Il2CppObject *)this, Method_UIAnchor_ScreenSizeChanged__, 0);
  v21 = System_Delegate__Combine(onScreenResize, (System_Delegate_o *)v20, 0);
  v28 = v21;
  if ( !v21 )
    goto LABEL_9;
  v29 = UICamera_OnScreenResize_TypeInfo;
  if ( (UICamera_OnScreenResize_c *)v21->klass != UICamera_OnScreenResize_TypeInfo
    || (v30 = UICamera_TypeInfo->static_fields,
        v30->onScreenResize = (struct UICamera_OnScreenResize_o *)v28,
        p_onScreenResize = (MissionNaviTransitionBoardItem_o *)&v30->onScreenResize,
        (UICamera_OnScreenResize_c *)v28->klass != v29) )
  {
    sub_221405C(v28, v29, v22);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = 0;
    p_onScreenResize = (MissionNaviTransitionBoardItem_o *)&static_fields->onScreenResize;
  }
  sub_2213A04(p_onScreenResize, (int32_t)v28, v22, v23, v24, v25, v26, v27);
}


void UIAnchor__OnDestroy(UIAnchor_o *this, const MethodInfo *method)
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

  if ( (byte_5975218 & 1) == 0 )
  {
    sub_2213A60(&UICamera_OnScreenResize_TypeInfo);
    sub_2213A60(&Method_UIAnchor_ScreenSizeChanged__);
    sub_2213A60(&UICamera_TypeInfo);
    byte_5975218 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
    v3 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v3->static_fields->onScreenResize;
  v5 = (UICamera_OnScreenResize_o *)sub_2213CCC(UICamera_OnScreenResize_TypeInfo);
  UICamera_OnScreenResize___ctor(v5, (Il2CppObject *)this, Method_UIAnchor_ScreenSizeChanged__, 0);
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


void UIAnchor__ScreenSizeChanged(UIAnchor_o *this, const MethodInfo *method)
{
  if ( this->fields.mStarted && this->fields.runOnlyOnce )
    UIAnchor__Update(this, method);
}


void UIAnchor__Start(UIAnchor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *container; // x21
  __int64 v4; // x1
  struct UIWidget_o **p_widgetContainer; // x21
  UnityEngine_Object_o *widgetContainer; // x22
  __int64 v7; // x1
  UnityEngine_Component_o *v8; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  UnityEngine_Object_o *uiCamera; // x21
  const MethodInfo *v33; // x1
  __int64 v34; // x1
  int32_t layer; // w21
  struct UnityEngine_Camera_o *CameraForLayer; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_5975219 & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIRoot___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5975219 = 1;
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
      v8 = (UnityEngine_Component_o *)*p_widgetContainer;
      if ( !*p_widgetContainer )
        goto LABEL_21;
      gameObject = UnityEngine_Component__get_gameObject(v8, 0);
      this->fields.container = gameObject;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.container,
        (int32_t)gameObject,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      *p_widgetContainer = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.widgetContainer, 0, v16, v17, v18, v19, v20, v21);
    }
  }
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v22);
  v24 = NGUITools__FindInParents_object_(v23, (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIRoot___);
  this->fields.mRoot = (struct UIRoot_o *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mRoot, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( UnityEngine_Object__op_Equality(uiCamera, 0, 0) )
  {
    v8 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( v8 )
    {
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v8, 0);
      if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v34);
      CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
      this->fields.uiCamera = CameraForLayer;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.uiCamera,
        (int32_t)CameraForLayer,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
      goto LABEL_20;
    }
LABEL_21:
    sub_2213CDC(v8, v7);
  }
LABEL_20:
  UIAnchor__Update(this, v33);
  this->fields.mStarted = 1;
}


void UIAnchor__Update(UIAnchor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x20
  const MethodInfo *v4; // x1
  UnityEngine_Animation_o *transform; // x0
  UnityEngine_Object_o *container; // x20
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *v8; // x20
  Il2CppObject *v9; // x20
  int v10; // w8
  unsigned __int64 v11; // d0
  float m_YMin; // s1
  unsigned __int64 v13; // d2
  float w; // s3
  int32_t side; // w9
  float v16; // s5
  float v17; // s4
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  UnityEngine_Object_o *parent; // x21
  bool v21; // w8
  UnityEngine_Transform_o *v22; // x0
  UnityEngine_Object_o *v23; // x21
  float v24; // s8
  float v25; // s9
  double v26; // d0
  double v27; // d0
  float v28; // s2
  double v29; // d0
  double v30; // d0
  float v31; // s2
  float v32; // s1
  float x; // s8
  float v34; // s1
  UnityEngine_Object_o *mRoot; // x21
  float v36; // s8
  int32_t activeHeight; // w21
  float v38; // s0
  float v39; // s1
  int32_t height; // w0
  __int64 v41; // x1
  double v42; // d0
  double v43; // d0
  float v44; // s2
  float v45; // s1
  float y; // s9
  unsigned __int64 v47; // kr20_8
  UnityEngine_Object_o *v48; // x20
  __int64 v49; // x1
  UnityEngine_Object_o *v50; // x20
  UnityEngine_Transform_o *v51; // x0
  double v52; // d0
  double v53; // d0
  float v54; // s2
  float v55; // s1
  UnityEngine_Camera_o *uiCamera; // x20
  float v57; // s10
  float z; // s2
  UnityEngine_Bounds_o iptr; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v60; // 0:kr60_12.12
  UnityEngine_Vector3_o v61; // 0:kr74_12.12
  UnityEngine_Vector4_o finalClipRegion; // 0:kr00_16.16
  UnityEngine_Rect_o pixelRect; // 0:kr10_16.16
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_597521A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597521A = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    transform = this->fields.mAnim;
    if ( !transform )
      goto LABEL_156;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)transform, 0) )
    {
      transform = this->fields.mAnim;
      if ( !transform )
        goto LABEL_156;
      if ( UnityEngine_Animation__get_isPlaying(transform, 0) )
        return;
    }
  }
  container = (UnityEngine_Object_o *)this->fields.container;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  Component_object = 0;
  if ( !UnityEngine_Object__op_Equality(container, 0, 0) )
  {
    transform = (UnityEngine_Animation_o *)this->fields.container;
    if ( !transform )
      goto LABEL_156;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  v8 = (UnityEngine_Object_o *)this->fields.container;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
    goto LABEL_21;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  v9 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_21:
    transform = (UnityEngine_Animation_o *)this->fields.container;
    if ( !transform )
      goto LABEL_156;
    v9 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)transform,
           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    transform = (UnityEngine_Animation_o *)this->fields.container;
    if ( !transform )
      goto LABEL_156;
    transform = (UnityEngine_Animation_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)transform,
                                             0);
    if ( !transform )
      goto LABEL_156;
    transform = (UnityEngine_Animation_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !Component_object )
      goto LABEL_156;
    UIWidget__CalculateBounds_56491056(&iptr, (UIWidget_o *)Component_object, (UnityEngine_Transform_o *)transform, 0);
    v10 = 0;
    *(float *)&v11 = iptr.fields.m_Center.fields.x - iptr.fields.m_Extents.fields.x;
    m_YMin = iptr.fields.m_Center.fields.y - iptr.fields.m_Extents.fields.y;
    *(float *)&v13 = iptr.fields.m_Extents.fields.x + iptr.fields.m_Extents.fields.x;
    w = iptr.fields.m_Extents.fields.y + iptr.fields.m_Extents.fields.y;
    goto LABEL_36;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_156;
    if ( !HIDWORD(v9[18].klass) )
    {
      mRoot = (UnityEngine_Object_o *)this->fields.mRoot;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      v36 = 0.5;
      if ( UnityEngine_Object__op_Inequality(mRoot, 0, 0) )
      {
        transform = (UnityEngine_Animation_o *)this->fields.mRoot;
        if ( !transform )
          goto LABEL_156;
        activeHeight = UIRoot__get_activeHeight((UIRoot_o *)transform, v4);
        v36 = (float)((float)activeHeight / (float)UnityEngine_Screen__get_height(0)) * 0.5;
      }
      v38 = v36 * (float)-UnityEngine_Screen__get_width(0);
      v39 = (float)(this->fields.mRect.fields.m_Width + this->fields.mRect.fields.m_XMin) - v38;
      this->fields.mRect.fields.m_XMin = v38;
      this->fields.mRect.fields.m_Width = v39;
      height = UnityEngine_Screen__get_height(0);
      *(float *)&v11 = this->fields.mRect.fields.m_XMin;
      v10 = 0;
      m_YMin = v36 * (float)-height;
      *(float *)&v13 = (float)-*(float *)&v11 - *(float *)&v11;
      w = (float)-m_YMin - m_YMin;
      goto LABEL_37;
    }
    finalClipRegion = UIPanel__get_finalClipRegion((UIPanel_o *)v9, 0);
    *(float *)&v13 = finalClipRegion.fields.z;
    w = finalClipRegion.fields.w;
    v10 = 0;
    *(float *)&v11 = finalClipRegion.fields.x - (float)(finalClipRegion.fields.z * 0.5);
    m_YMin = finalClipRegion.fields.y - (float)(finalClipRegion.fields.w * 0.5);
LABEL_36:
    LODWORD(this->fields.mRect.fields.m_XMin) = v11;
LABEL_37:
    this->fields.mRect.fields.m_YMin = m_YMin;
    LODWORD(this->fields.mRect.fields.m_Width) = v13;
LABEL_38:
    this->fields.mRect.fields.m_Height = w;
    goto LABEL_39;
  }
  v18 = (UnityEngine_Object_o *)this->fields.container;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
  {
    transform = (UnityEngine_Animation_o *)this->fields.container;
    if ( !transform )
      goto LABEL_156;
    transform = (UnityEngine_Animation_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)transform,
                                             0);
    if ( !transform )
      goto LABEL_156;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    v21 = UnityEngine_Object__op_Inequality(parent, 0, 0);
    transform = (UnityEngine_Animation_o *)this->fields.container;
    if ( v21 )
    {
      if ( !transform )
        goto LABEL_156;
      v22 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      NGUIMath__CalculateRelativeWidgetBounds_56289764(&iptr, (UnityEngine_Transform_o *)parent, v22, 0);
    }
    else
    {
      if ( !transform )
        goto LABEL_156;
      v51 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      NGUIMath__CalculateRelativeWidgetBounds(&iptr, v51, 0);
    }
    v10 = 0;
    v11 = vsub_f32(*(float32x2_t *)&iptr.fields.m_Center.fields.x, *(float32x2_t *)&iptr.fields.m_Extents.fields.x).n64_u64[0];
    v13 = vadd_f32(*(float32x2_t *)&iptr.fields.m_Extents.fields.x, *(float32x2_t *)&iptr.fields.m_Extents.fields.x).n64_u64[0];
    m_YMin = *((float *)&v11 + 1);
    w = *((float *)&v13 + 1);
    *(_QWORD *)&this->fields.mRect.fields.m_XMin = v11;
    *(_QWORD *)&this->fields.mRect.fields.m_Width = v13;
LABEL_39:
    side = this->fields.side;
    v16 = (float)(*(float *)&v11 + (float)(*(float *)&v11 + *(float *)&v13)) * 0.5;
    v17 = (float)(m_YMin + (float)(m_YMin + w)) * 0.5;
    if ( side > 4 )
    {
      if ( side <= 6 )
      {
        if ( side != 5 )
          v17 = m_YMin;
        goto LABEL_59;
      }
      if ( side != 7 )
      {
        if ( side == 8 )
          goto LABEL_71;
        goto LABEL_62;
      }
      v17 = m_YMin;
    }
    else
    {
      if ( side <= 2 )
      {
        if ( side == 1 )
        {
LABEL_63:
          v16 = *(float *)&v11;
          goto LABEL_71;
        }
        if ( side == 2 )
        {
          v17 = m_YMin + w;
          goto LABEL_63;
        }
LABEL_62:
        v17 = m_YMin;
        goto LABEL_63;
      }
      if ( side != 3 )
      {
        v17 = m_YMin + w;
LABEL_59:
        v16 = *(float *)&v11 + *(float *)&v13;
        goto LABEL_71;
      }
      v17 = m_YMin + w;
    }
LABEL_71:
    v24 = v16
        + (float)(this->fields.pixelOffset.fields.x + (float)(*(float *)&v13 * this->fields.relativeOffset.fields.x));
    v25 = v17 + (float)(this->fields.pixelOffset.fields.y + (float)(w * this->fields.relativeOffset.fields.y));
    if ( v10 )
    {
      transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
      if ( !transform )
        goto LABEL_156;
      if ( !UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)transform, 0) )
        goto LABEL_142;
      v26 = modf(v24, (double *)&iptr.fields.m_Center.fields.x);
      if ( v24 >= 0.0 )
      {
        if ( v26 != 0.5 )
        {
          v24 = floorf(v24 + 0.5);
          goto LABEL_132;
        }
        v27 = *(double *)&iptr.fields.m_Center.fields.x;
        v28 = 1.0;
      }
      else
      {
        if ( v26 != -0.5 )
        {
          v24 = ceilf(v24 + -0.5);
          goto LABEL_132;
        }
        v27 = *(double *)&iptr.fields.m_Center.fields.x;
        v28 = -1.0;
      }
      if ( ((__int64)v27 & 1) != 0 )
      {
        v34 = v27;
        v24 = v34 + v28;
      }
      else
      {
        v24 = v27;
      }
LABEL_132:
      v52 = modf(v25, (double *)&iptr.fields.m_Center.fields.x);
      if ( v25 >= 0.0 )
      {
        if ( v52 == 0.5 )
        {
          v53 = *(double *)&iptr.fields.m_Center.fields.x;
          v54 = 1.0;
LABEL_137:
          if ( ((__int64)v53 & 1) != 0 )
          {
            v55 = v53;
            v25 = v55 + v54;
          }
          else
          {
            v25 = v53;
          }
          goto LABEL_142;
        }
        v25 = floorf(v25 + 0.5);
      }
      else
      {
        if ( v52 == -0.5 )
        {
          v53 = *(double *)&iptr.fields.m_Center.fields.x;
          v54 = -1.0;
          goto LABEL_137;
        }
        v25 = ceilf(v25 + -0.5);
      }
LABEL_142:
      transform = (UnityEngine_Animation_o *)this->fields.mTrans;
      if ( !transform )
        goto LABEL_156;
      uiCamera = this->fields.uiCamera;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      if ( !uiCamera )
        goto LABEL_156;
      v67.fields.z = UnityEngine_Camera__WorldToScreenPoint_83198204(uiCamera, position, 0).fields.z;
      transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
      if ( !transform )
        goto LABEL_156;
      v67.fields.x = v24;
      v67.fields.y = v25;
      v60 = UnityEngine_Camera__ScreenToWorldPoint_83198228((UnityEngine_Camera_o *)transform, v67, 0);
      z = v60.fields.z;
      x = v60.fields.x;
      y = v60.fields.y;
      goto LABEL_146;
    }
    v29 = modf(v24, (double *)&iptr.fields.m_Center.fields.x);
    if ( v24 >= 0.0 )
    {
      if ( v29 != 0.5 )
      {
        x = floorf(v24 + 0.5);
        goto LABEL_98;
      }
      v30 = *(double *)&iptr.fields.m_Center.fields.x;
      v31 = 1.0;
    }
    else
    {
      if ( v29 != -0.5 )
      {
        x = ceilf(v24 + -0.5);
        goto LABEL_98;
      }
      v30 = *(double *)&iptr.fields.m_Center.fields.x;
      v31 = -1.0;
    }
    if ( ((__int64)v30 & 1) != 0 )
    {
      v32 = v30;
      x = v32 + v31;
    }
    else
    {
      x = v30;
    }
LABEL_98:
    v42 = modf(v25, (double *)&iptr.fields.m_Center.fields.x);
    if ( v25 >= 0.0 )
    {
      if ( v42 != 0.5 )
      {
        y = floorf(v25 + 0.5);
        goto LABEL_108;
      }
      v43 = *(double *)&iptr.fields.m_Center.fields.x;
      v44 = 1.0;
    }
    else
    {
      if ( v42 != -0.5 )
      {
        y = ceilf(v25 + -0.5);
        goto LABEL_108;
      }
      v43 = *(double *)&iptr.fields.m_Center.fields.x;
      v44 = -1.0;
    }
    if ( ((__int64)v43 & 1) != 0 )
    {
      v45 = v43;
      y = v45 + v44;
    }
    else
    {
      y = v43;
    }
LABEL_108:
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41);
    transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_156;
      transform = (UnityEngine_Animation_o *)UIRect__get_cachedTransform((UIRect_o *)v9, 0);
      if ( !transform )
        goto LABEL_156;
      v64.fields.z = 0.0;
    }
    else
    {
      v48 = (UnityEngine_Object_o *)this->fields.container;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      if ( !UnityEngine_Object__op_Inequality(v48, 0, 0) )
        goto LABEL_125;
      transform = (UnityEngine_Animation_o *)this->fields.container;
      if ( !transform )
        goto LABEL_156;
      transform = (UnityEngine_Animation_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)transform,
                                               0);
      if ( !transform )
        goto LABEL_156;
      v50 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
      transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(v50, 0, 0);
      if ( ((unsigned __int8)transform & 1) == 0 )
        goto LABEL_125;
      if ( !v50 )
        goto LABEL_156;
      v64.fields.z = 0.0;
      transform = (UnityEngine_Animation_o *)v50;
    }
    v64.fields.x = x;
    v64.fields.y = y;
    v47 = (unsigned __int64)UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)transform, v64, 0);
    y = *((float *)&v47 + 1);
    x = *(float *)&v47;
LABEL_125:
    transform = (UnityEngine_Animation_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_156;
    z = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0).fields.z;
LABEL_146:
    v57 = z;
    transform = (UnityEngine_Animation_o *)this->fields.mTrans;
    if ( transform )
    {
      v61 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      if ( (float)((float)((float)(v61.fields.z - v57) * (float)(v61.fields.z - v57))
                 + (float)((float)((float)(v61.fields.x - x) * (float)(v61.fields.x - x))
                         + (float)((float)(v61.fields.y - y) * (float)(v61.fields.y - y)))) < 1.0e-10 )
        goto LABEL_150;
      transform = (UnityEngine_Animation_o *)this->fields.mTrans;
      if ( transform )
      {
        v65.fields.x = x;
        v65.fields.y = y;
        v65.fields.z = v57;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v65, 0);
LABEL_150:
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
LABEL_156:
    sub_2213CDC(transform, v4);
  }
  v23 = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
  {
    transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
    if ( !transform )
      goto LABEL_156;
    pixelRect = UnityEngine_Camera__get_pixelRect((UnityEngine_Camera_o *)transform, 0);
    *(float *)&v11 = pixelRect.fields.m_XMin;
    m_YMin = pixelRect.fields.m_YMin;
    *(float *)&v13 = pixelRect.fields.m_Width;
    w = pixelRect.fields.m_Height;
    v10 = 1;
    this->fields.mRect.fields.m_XMin = pixelRect.fields.m_XMin;
    this->fields.mRect.fields.m_YMin = pixelRect.fields.m_YMin;
    this->fields.mRect.fields.m_Width = pixelRect.fields.m_Width;
    goto LABEL_38;
  }
}