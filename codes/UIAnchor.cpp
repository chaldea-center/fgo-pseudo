void UIAnchor___ctor(UIAnchor_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_c *v3; // x8

  this->fields.side = 8;
  this->fields.runOnlyOnce = 1;
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
  }
  v3 = UnityEngine_Vector2_TypeInfo;
  this->fields.relativeOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.pixelOffset = v3->static_fields->zeroVector;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void UIAnchor__Awake(UIAnchor_o *this, const MethodInfo *method)
{
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *Component_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UICamera_c *v17; // x0
  System_Delegate_o *onScreenResize; // x20
  UICamera_OnScreenResize_o *v19; // x21
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Delegate_o *v27; // x8
  UICamera_OnScreenResize_c *v28; // x1
  struct UICamera_StaticFields *v29; // x0
  GrandQuestFolderBoardItem_o *p_onScreenResize; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_4D352E5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C93AD4(&UICamera_OnScreenResize_TypeInfo);
    sub_1C93AD4(&Method_UIAnchor_ScreenSizeChanged__);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D352E5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5, v6, v7, v8, v9);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.mAnim,
    (int32_t)Component_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v17 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v17->static_fields->onScreenResize;
  v19 = (UICamera_OnScreenResize_o *)sub_1C93D20(UICamera_OnScreenResize_TypeInfo);
  UICamera_OnScreenResize___ctor(v19, (Il2CppObject *)this, Method_UIAnchor_ScreenSizeChanged__, 0);
  v20 = System_Delegate__Combine(onScreenResize, (System_Delegate_o *)v19, 0);
  v27 = v20;
  if ( !v20 )
    goto LABEL_9;
  v28 = UICamera_OnScreenResize_TypeInfo;
  if ( (UICamera_OnScreenResize_c *)v20->klass != UICamera_OnScreenResize_TypeInfo
    || (v29 = UICamera_TypeInfo->static_fields,
        v29->onScreenResize = (struct UICamera_OnScreenResize_o *)v27,
        p_onScreenResize = (GrandQuestFolderBoardItem_o *)&v29->onScreenResize,
        (UICamera_OnScreenResize_c *)v27->klass != v28) )
  {
    sub_1C940C8(v27);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = (struct UICamera_OnScreenResize_o *)v27;
    p_onScreenResize = (GrandQuestFolderBoardItem_o *)&static_fields->onScreenResize;
  }
  sub_1C93A78(p_onScreenResize, (int32_t)v27, v21, v22, v23, v24, v25, v26);
}


void UIAnchor__OnDestroy(UIAnchor_o *this, const MethodInfo *method)
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

  if ( (byte_4D352E6 & 1) == 0 )
  {
    sub_1C93AD4(&UICamera_OnScreenResize_TypeInfo);
    sub_1C93AD4(&Method_UIAnchor_ScreenSizeChanged__);
    sub_1C93AD4(&UICamera_TypeInfo);
    byte_4D352E6 = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v3->static_fields->onScreenResize;
  v5 = (UICamera_OnScreenResize_o *)sub_1C93D20(UICamera_OnScreenResize_TypeInfo);
  UICamera_OnScreenResize___ctor(v5, (Il2CppObject *)this, Method_UIAnchor_ScreenSizeChanged__, 0);
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


void UIAnchor__ScreenSizeChanged(UIAnchor_o *this, const MethodInfo *method)
{
  if ( this->fields.mStarted && this->fields.runOnlyOnce )
    UIAnchor__Update(this, method);
}


void UIAnchor__Start(UIAnchor_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *v21; // x20
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *uiCamera; // x21
  const MethodInfo *v30; // x1
  int32_t layer; // w21
  struct UnityEngine_Camera_o *CameraForLayer; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D352E7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C93AD4(&NGUITools_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D352E7 = 1;
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
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v22 = NGUITools__FindInParents_object_(v21, (const MethodInfo_322EDC8 *)Method_NGUITools_FindInParents_UIRoot___);
  this->fields.mRoot = (struct UIRoot_o *)v22;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mRoot, (int32_t)v22, v23, v24, v25, v26, v27, v28);
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
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      goto LABEL_20;
    }
LABEL_21:
    sub_1C93D2C(v7, v6);
  }
LABEL_20:
  UIAnchor__Update(this, v30);
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
  float v15; // s5
  float v16; // s4
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *parent; // x21
  char v19; // w22
  UnityEngine_Transform_o *v20; // x0
  UnityEngine_Object_o *v21; // x21
  float v22; // s8
  float v23; // s9
  double v24; // d0
  double v25; // d0
  float v26; // s1
  double v27; // d0
  double v28; // d0
  float v29; // s1
  __int64 v30; // x8
  float v31; // s0
  float v32; // s1
  float x; // s8
  __int64 v34; // x8
  float v35; // s0
  float v36; // s1
  UnityEngine_Object_o *mRoot; // x21
  float v38; // s8
  int32_t activeHeight; // w21
  float v40; // s2
  float v41; // s0
  int32_t height; // w0
  double v43; // d0
  double v44; // d0
  float v45; // s1
  __int64 v46; // x8
  float v47; // s0
  float v48; // s1
  float y; // s9
  UnityEngine_Object_o *v50; // x20
  UnityEngine_Object_o *v51; // x20
  unsigned __int64 v52; // kr90_8
  double v53; // d0
  double v54; // d0
  float v55; // s1
  __int64 v56; // x8
  float v57; // s0
  float v58; // s1
  UnityEngine_Camera_o *uiCamera; // x20
  float v60; // s10
  float z; // s2
  UnityEngine_Bounds_o iptr; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v63; // 0:kr74_12.12
  UnityEngine_Vector3_o v64; // 0:kr80_12.12
  UnityEngine_Vector4_o finalClipRegion; // 0:kr20_16.16
  UnityEngine_Rect_o pixelRect; // 0:kr30_16.16
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D352E8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Application_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D352E8 = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    transform = this->fields.mAnim;
    if ( !transform )
      goto LABEL_146;
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)transform, 0) )
    {
      transform = this->fields.mAnim;
      if ( !transform )
        goto LABEL_146;
      if ( UnityEngine_Animation__get_isPlaying(transform, 0) )
        return;
    }
  }
  container = (UnityEngine_Object_o *)this->fields.container;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = 0;
  if ( !UnityEngine_Object__op_Equality(container, 0, 0) )
  {
    transform = (UnityEngine_Animation_o *)this->fields.container;
    if ( !transform )
      goto LABEL_146;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  v8 = (UnityEngine_Object_o *)this->fields.container;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
    goto LABEL_21;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_21:
    transform = (UnityEngine_Animation_o *)this->fields.container;
    if ( !transform )
      goto LABEL_146;
    v9 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)transform,
           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    transform = (UnityEngine_Animation_o *)this->fields.container;
    if ( !transform )
      goto LABEL_146;
    transform = (UnityEngine_Animation_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)transform,
                                             0);
    if ( !transform )
      goto LABEL_146;
    transform = (UnityEngine_Animation_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !Component_object )
      goto LABEL_146;
    UIWidget__CalculateBounds_50151560(&iptr, (UIWidget_o *)Component_object, (UnityEngine_Transform_o *)transform, 0);
    v10 = 0;
    *(float *)&v11 = iptr.fields.m_Center.fields.x - iptr.fields.m_Extents.fields.x;
    m_YMin = iptr.fields.m_Center.fields.y - iptr.fields.m_Extents.fields.y;
    *(float *)&v13 = iptr.fields.m_Extents.fields.x + iptr.fields.m_Extents.fields.x;
    w = iptr.fields.m_Extents.fields.y + iptr.fields.m_Extents.fields.y;
    goto LABEL_36;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_146;
    if ( !HIDWORD(v9[18].klass) )
    {
      mRoot = (UnityEngine_Object_o *)this->fields.mRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v38 = 0.5;
      if ( UnityEngine_Object__op_Inequality(mRoot, 0, 0) )
      {
        transform = (UnityEngine_Animation_o *)this->fields.mRoot;
        if ( !transform )
          goto LABEL_146;
        activeHeight = UIRoot__get_activeHeight((UIRoot_o *)transform, v4);
        v38 = (float)((float)activeHeight / (float)UnityEngine_Screen__get_height(0)) * 0.5;
      }
      v40 = v38 * (float)-UnityEngine_Screen__get_width(0);
      v41 = (float)(this->fields.mRect.fields.m_Width + this->fields.mRect.fields.m_XMin) - v40;
      this->fields.mRect.fields.m_XMin = v40;
      this->fields.mRect.fields.m_Width = v41;
      height = UnityEngine_Screen__get_height(0);
      *(float *)&v11 = this->fields.mRect.fields.m_XMin;
      m_YMin = v38 * (float)-height;
      w = (float)-m_YMin - m_YMin;
      v10 = 0;
      *(float *)&v13 = (float)-*(float *)&v11 - *(float *)&v11;
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
    this->fields.mRect.fields.m_Height = w;
    goto LABEL_38;
  }
  v17 = (UnityEngine_Object_o *)this->fields.container;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
  {
    transform = (UnityEngine_Animation_o *)this->fields.container;
    if ( !transform )
      goto LABEL_146;
    transform = (UnityEngine_Animation_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)transform,
                                             0);
    if ( !transform )
      goto LABEL_146;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
    if ( !this->fields.container )
      goto LABEL_146;
    v19 = (char)transform;
    v20 = UnityEngine_GameObject__get_transform(this->fields.container, 0);
    if ( (v19 & 1) != 0 )
      NGUIMath__CalculateRelativeWidgetBounds_49948180(&iptr, (UnityEngine_Transform_o *)parent, v20, 0);
    else
      NGUIMath__CalculateRelativeWidgetBounds(&iptr, v20, 0);
    v10 = 0;
    v11 = vsub_f32(*(float32x2_t *)&iptr.fields.m_Center.fields.x, *(float32x2_t *)&iptr.fields.m_Extents.fields.x).n64_u64[0];
    v13 = vadd_f32(*(float32x2_t *)&iptr.fields.m_Extents.fields.x, *(float32x2_t *)&iptr.fields.m_Extents.fields.x).n64_u64[0];
    *(_QWORD *)&this->fields.mRect.fields.m_XMin = v11;
    *(_QWORD *)&this->fields.mRect.fields.m_Width = v13;
    m_YMin = *((float *)&v11 + 1);
    w = *((float *)&v13 + 1);
LABEL_38:
    v15 = (float)(*(float *)&v11 + (float)(*(float *)&v11 + *(float *)&v13)) * 0.5;
    v16 = (float)(m_YMin + (float)(m_YMin + w)) * 0.5;
    switch ( this->fields.side )
    {
      case 1:
        goto LABEL_56;
      case 2:
        v16 = m_YMin + w;
        goto LABEL_56;
      case 3:
        v16 = m_YMin + w;
        break;
      case 4:
        v16 = m_YMin + w;
        goto LABEL_60;
      case 5:
        goto LABEL_60;
      case 6:
        v16 = m_YMin;
LABEL_60:
        v15 = *(float *)&v11 + *(float *)&v13;
        break;
      case 7:
        v16 = m_YMin;
        break;
      case 8:
        break;
      default:
        v16 = m_YMin;
LABEL_56:
        v15 = *(float *)&v11;
        break;
    }
    v22 = v15
        + (float)(this->fields.pixelOffset.fields.x + (float)(*(float *)&v13 * this->fields.relativeOffset.fields.x));
    v23 = v16 + (float)(this->fields.pixelOffset.fields.y + (float)(w * this->fields.relativeOffset.fields.y));
    if ( v10 )
    {
      transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
      if ( !transform )
        goto LABEL_146;
      if ( !UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)transform, 0) )
        goto LABEL_132;
      v24 = modf(v22, (double *)&iptr.fields.m_Center.fields.x);
      if ( v22 >= 0.0 )
      {
        if ( v24 != 0.5 )
        {
          v22 = floorf(v22 + 0.5);
          goto LABEL_122;
        }
        v25 = *(double *)&iptr.fields.m_Center.fields.x;
        v26 = 1.0;
      }
      else
      {
        if ( v24 != -0.5 )
        {
          v22 = ceilf(v22 + -0.5);
          goto LABEL_122;
        }
        v25 = *(double *)&iptr.fields.m_Center.fields.x;
        v26 = -1.0;
      }
      v34 = (__int64)v25;
      v35 = v25;
      v36 = v35 + v26;
      if ( (v34 & 1) != 0 )
        v22 = v36;
      else
        v22 = v35;
LABEL_122:
      v53 = modf(v23, (double *)&iptr.fields.m_Center.fields.x);
      if ( v23 >= 0.0 )
      {
        if ( v53 == 0.5 )
        {
          v54 = *(double *)&iptr.fields.m_Center.fields.x;
          v55 = 1.0;
LABEL_127:
          v56 = (__int64)v54;
          v57 = v54;
          v58 = v57 + v55;
          if ( (v56 & 1) != 0 )
            v23 = v58;
          else
            v23 = v57;
          goto LABEL_132;
        }
        v23 = floorf(v23 + 0.5);
      }
      else
      {
        if ( v53 == -0.5 )
        {
          v54 = *(double *)&iptr.fields.m_Center.fields.x;
          v55 = -1.0;
          goto LABEL_127;
        }
        v23 = ceilf(v23 + -0.5);
      }
LABEL_132:
      transform = (UnityEngine_Animation_o *)this->fields.mTrans;
      if ( !transform )
        goto LABEL_146;
      uiCamera = this->fields.uiCamera;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      if ( !uiCamera )
        goto LABEL_146;
      v70.fields.z = UnityEngine_Camera__WorldToScreenPoint_71924480(uiCamera, position, 0).fields.z;
      transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
      if ( !transform )
        goto LABEL_146;
      v70.fields.x = v22;
      v70.fields.y = v23;
      v63 = UnityEngine_Camera__ScreenToWorldPoint_71924504((UnityEngine_Camera_o *)transform, v70, 0);
      z = v63.fields.z;
      x = v63.fields.x;
      y = v63.fields.y;
      goto LABEL_136;
    }
    v27 = modf(v22, (double *)&iptr.fields.m_Center.fields.x);
    if ( v22 >= 0.0 )
    {
      if ( v27 != 0.5 )
      {
        x = floorf(v22 + 0.5);
        goto LABEL_89;
      }
      v28 = *(double *)&iptr.fields.m_Center.fields.x;
      v29 = 1.0;
    }
    else
    {
      if ( v27 != -0.5 )
      {
        x = ceilf(v22 + -0.5);
        goto LABEL_89;
      }
      v28 = *(double *)&iptr.fields.m_Center.fields.x;
      v29 = -1.0;
    }
    v30 = (__int64)v28;
    v31 = v28;
    v32 = v31 + v29;
    if ( (v30 & 1) != 0 )
      x = v32;
    else
      x = v31;
LABEL_89:
    v43 = modf(v23, (double *)&iptr.fields.m_Center.fields.x);
    if ( v23 >= 0.0 )
    {
      if ( v43 != 0.5 )
      {
        y = floorf(v23 + 0.5);
        goto LABEL_99;
      }
      v44 = *(double *)&iptr.fields.m_Center.fields.x;
      v45 = 1.0;
    }
    else
    {
      if ( v43 != -0.5 )
      {
        y = ceilf(v23 + -0.5);
        goto LABEL_99;
      }
      v44 = *(double *)&iptr.fields.m_Center.fields.x;
      v45 = -1.0;
    }
    v46 = (__int64)v44;
    v47 = v44;
    v48 = v47 + v45;
    if ( (v46 & 1) != 0 )
      y = v48;
    else
      y = v47;
LABEL_99:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_146;
      transform = (UnityEngine_Animation_o *)UIRect__get_cachedTransform((UIRect_o *)v9, 0);
      if ( !transform )
        goto LABEL_146;
      v67.fields.z = 0.0;
    }
    else
    {
      v50 = (UnityEngine_Object_o *)this->fields.container;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v50, 0, 0) )
        goto LABEL_116;
      transform = (UnityEngine_Animation_o *)this->fields.container;
      if ( !transform )
        goto LABEL_146;
      transform = (UnityEngine_Animation_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)transform,
                                               0);
      if ( !transform )
        goto LABEL_146;
      v51 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(v51, 0, 0);
      if ( ((unsigned __int8)transform & 1) == 0 )
        goto LABEL_116;
      if ( !v51 )
        goto LABEL_146;
      v67.fields.z = 0.0;
      transform = (UnityEngine_Animation_o *)v51;
    }
    v67.fields.x = x;
    v67.fields.y = y;
    v52 = (unsigned __int64)UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)transform, v67, 0);
    y = *((float *)&v52 + 1);
    x = *(float *)&v52;
LABEL_116:
    transform = (UnityEngine_Animation_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_146;
    z = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0).fields.z;
LABEL_136:
    transform = (UnityEngine_Animation_o *)this->fields.mTrans;
    v60 = z;
    if ( transform )
    {
      v64 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      if ( (float)((float)((float)(v64.fields.z - v60) * (float)(v64.fields.z - v60))
                 + (float)((float)((float)(v64.fields.x - x) * (float)(v64.fields.x - x))
                         + (float)((float)(v64.fields.y - y) * (float)(v64.fields.y - y)))) < 1.0e-10 )
        goto LABEL_140;
      transform = (UnityEngine_Animation_o *)this->fields.mTrans;
      if ( transform )
      {
        v68.fields.x = x;
        v68.fields.y = y;
        v68.fields.z = v60;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v68, 0);
LABEL_140:
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
LABEL_146:
    sub_1C93D2C(transform, v4);
  }
  v21 = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
  {
    transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
    if ( !transform )
      goto LABEL_146;
    pixelRect = UnityEngine_Camera__get_pixelRect((UnityEngine_Camera_o *)transform, 0);
    *(float *)&v11 = pixelRect.fields.m_XMin;
    m_YMin = pixelRect.fields.m_YMin;
    *(float *)&v13 = pixelRect.fields.m_Width;
    w = pixelRect.fields.m_Height;
    v10 = 1;
    this->fields.mRect = pixelRect;
    goto LABEL_38;
  }
}