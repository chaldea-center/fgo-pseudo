void UIAnchor___ctor(UIAnchor_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_c *v3; // x8

  this->fields.side = 8;
  this->fields.runOnlyOnce = 1;
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
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
  const MethodInfo *v5; // x3
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UICamera_c *v9; // x0
  System_Delegate_o *onScreenResize; // x20
  UICamera_OnScreenResize_o *v11; // x21
  System_Delegate_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Delegate_o *v15; // x8
  UICamera_OnScreenResize_c *v16; // x1
  struct UICamera_StaticFields *v17; // x0
  CGThumbnailListItem_o *p_onScreenResize; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_4C3C269 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&UICamera_OnScreenResize_TypeInfo);
    sub_1C32C20(&Method_UIAnchor_ScreenSizeChanged__);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C269 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mAnim, (int32_t)Component_object, v7, v8);
  v9 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v9->static_fields->onScreenResize;
  v11 = (UICamera_OnScreenResize_o *)sub_1C32E6C(UICamera_OnScreenResize_TypeInfo);
  UICamera_OnScreenResize___ctor(v11, (Il2CppObject *)this, Method_UIAnchor_ScreenSizeChanged__, 0);
  v12 = System_Delegate__Combine(onScreenResize, (System_Delegate_o *)v11, 0);
  v15 = v12;
  if ( !v12 )
    goto LABEL_9;
  v16 = UICamera_OnScreenResize_TypeInfo;
  if ( (UICamera_OnScreenResize_c *)v12->klass != UICamera_OnScreenResize_TypeInfo
    || (v17 = UICamera_TypeInfo->static_fields,
        v17->onScreenResize = (struct UICamera_OnScreenResize_o *)v15,
        p_onScreenResize = (CGThumbnailListItem_o *)&v17->onScreenResize,
        (UICamera_OnScreenResize_c *)v15->klass != v16) )
  {
    sub_1C3313C(v15);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = (struct UICamera_OnScreenResize_o *)v15;
    p_onScreenResize = (CGThumbnailListItem_o *)&static_fields->onScreenResize;
  }
  sub_1C32BC4(p_onScreenResize, (int32_t)v15, v13, v14);
}


void UIAnchor__OnDestroy(UIAnchor_o *this, const MethodInfo *method)
{
  UICamera_c *v3; // x0
  System_Delegate_o *onScreenResize; // x20
  UICamera_OnScreenResize_o *v5; // x21
  System_Delegate_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Delegate_o *v9; // x8
  UICamera_OnScreenResize_c *v10; // x1
  struct UICamera_StaticFields *v11; // x0
  CGThumbnailListItem_o *p_onScreenResize; // x0
  struct UICamera_StaticFields *static_fields; // x0

  if ( (byte_4C3C26A & 1) == 0 )
  {
    sub_1C32C20(&UICamera_OnScreenResize_TypeInfo);
    sub_1C32C20(&Method_UIAnchor_ScreenSizeChanged__);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C3C26A = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v3->static_fields->onScreenResize;
  v5 = (UICamera_OnScreenResize_o *)sub_1C32E6C(UICamera_OnScreenResize_TypeInfo);
  UICamera_OnScreenResize___ctor(v5, (Il2CppObject *)this, Method_UIAnchor_ScreenSizeChanged__, 0);
  v6 = System_Delegate__Remove(onScreenResize, (System_Delegate_o *)v5, 0);
  v9 = v6;
  if ( !v6 )
    goto LABEL_9;
  v10 = UICamera_OnScreenResize_TypeInfo;
  if ( (UICamera_OnScreenResize_c *)v6->klass != UICamera_OnScreenResize_TypeInfo
    || (v11 = UICamera_TypeInfo->static_fields,
        v11->onScreenResize = (struct UICamera_OnScreenResize_o *)v9,
        p_onScreenResize = (CGThumbnailListItem_o *)&v11->onScreenResize,
        (UICamera_OnScreenResize_c *)v9->klass != v10) )
  {
    sub_1C3313C(v9);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = (struct UICamera_OnScreenResize_o *)v9;
    p_onScreenResize = (CGThumbnailListItem_o *)&static_fields->onScreenResize;
  }
  sub_1C32BC4(p_onScreenResize, (int32_t)v9, v7, v8);
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
  UnityEngine_Component_o *v6; // x0
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_GameObject_o *v12; // x20
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *uiCamera; // x21
  const MethodInfo *v17; // x1
  int32_t layer; // w21
  struct UnityEngine_Camera_o *CameraForLayer; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C3C26B & 1) == 0 )
  {
    sub_1C32C20(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C26B = 1;
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
      v6 = (UnityEngine_Component_o *)*p_widgetContainer;
      if ( !*p_widgetContainer )
        goto LABEL_21;
      gameObject = UnityEngine_Component__get_gameObject(v6, 0);
      this->fields.container = gameObject;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.container, (int32_t)gameObject, v8, v9);
      *p_widgetContainer = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.widgetContainer, 0, v10, v11);
    }
  }
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v13 = NGUITools__FindInParents_object_(v12, (const MethodInfo_31676B4 *)Method_NGUITools_FindInParents_UIRoot___);
  this->fields.mRoot = (struct UIRoot_o *)v13;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mRoot, (int32_t)v13, v14, v15);
  uiCamera = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(uiCamera, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( v6 )
    {
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)v6, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      CameraForLayer = NGUITools__FindCameraForLayer(layer, 0);
      this->fields.uiCamera = CameraForLayer;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.uiCamera, (int32_t)CameraForLayer, v20, v21);
      goto LABEL_20;
    }
LABEL_21:
    sub_1C32E7C(v6);
  }
LABEL_20:
  UIAnchor__Update(this, v17);
  this->fields.mStarted = 1;
}


// local variable allocation has failed, the output may be wrong!
void UIAnchor__Update(UIAnchor_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x20
  UnityEngine_Animation_o *transform; // x0
  UnityEngine_Object_o *container; // x20
  Il2CppObject *Component_object; // x21
  UnityEngine_Object_o *v7; // x20
  Il2CppObject *v8; // x20
  int v9; // w8
  unsigned __int64 v10; // d0 OVERLAPPED
  float v11; // s1
  unsigned __int64 v12; // d2
  float v13; // s3
  float v14; // s1
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
  const MethodInfo *v38; // x1
  float v39; // s8
  int32_t activeHeight; // w21
  float v41; // s2
  float v42; // s0
  int32_t height; // w0
  double v44; // d0
  double v45; // d0
  float v46; // s1
  __int64 v47; // x8
  float v48; // s0
  float v49; // s1
  float y; // s9
  int v51; // s2 OVERLAPPED
  UnityEngine_Object_o *v52; // x20
  UnityEngine_Object_o *v53; // x20
  float v54; // s0
  float v55; // s1
  double v56; // d0
  double v57; // d0
  float v58; // s1
  __int64 v59; // x8
  float v60; // s0
  float v61; // s1
  UnityEngine_Camera_o *uiCamera; // x20
  float v63; // s0
  float v64; // s1
  float v65; // s0
  float v66; // s1
  float z; // s10
  UnityEngine_Bounds_o iptr; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3C26C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3C26C = 1;
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
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  }
  v7 = (UnityEngine_Object_o *)this->fields.container;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
    goto LABEL_21;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
LABEL_21:
    transform = (UnityEngine_Animation_o *)this->fields.container;
    if ( !transform )
      goto LABEL_146;
    v8 = UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)transform,
           (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    UIWidget__CalculateBounds_49382128(&iptr, (UIWidget_o *)Component_object, (UnityEngine_Transform_o *)transform, 0);
    v9 = 0;
    *(float *)&v10 = iptr.fields.m_Center.fields.x - iptr.fields.m_Extents.fields.x;
    v11 = iptr.fields.m_Center.fields.y - iptr.fields.m_Extents.fields.y;
    *(float *)&v12 = iptr.fields.m_Extents.fields.x + iptr.fields.m_Extents.fields.x;
    v13 = iptr.fields.m_Extents.fields.y + iptr.fields.m_Extents.fields.y;
    goto LABEL_36;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_146;
    if ( !HIDWORD(v8[18].klass) )
    {
      mRoot = (UnityEngine_Object_o *)this->fields.mRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v39 = 0.5;
      if ( UnityEngine_Object__op_Inequality(mRoot, 0, 0) )
      {
        transform = (UnityEngine_Animation_o *)this->fields.mRoot;
        if ( !transform )
          goto LABEL_146;
        activeHeight = UIRoot__get_activeHeight((UIRoot_o *)transform, v38);
        v39 = (float)((float)activeHeight / (float)UnityEngine_Screen__get_height(0)) * 0.5;
      }
      v41 = v39 * (float)-UnityEngine_Screen__get_width(0);
      v42 = (float)(this->fields.mRect.fields.m_Width + this->fields.mRect.fields.m_XMin) - v41;
      this->fields.mRect.fields.m_XMin = v41;
      this->fields.mRect.fields.m_Width = v42;
      height = UnityEngine_Screen__get_height(0);
      *(float *)&v10 = this->fields.mRect.fields.m_XMin;
      v11 = v39 * (float)-height;
      v13 = (float)-v11 - v11;
      v9 = 0;
      *(float *)&v12 = (float)-*(float *)&v10 - *(float *)&v10;
      goto LABEL_37;
    }
    *(UnityEngine_Vector4_o *)&v10 = UIPanel__get_finalClipRegion((UIPanel_o *)v8, 0);
    v9 = 0;
    *(float *)&v10 = *(float *)&v10 - (float)(*(float *)&v12 * 0.5);
    v11 = v14 - (float)(v13 * 0.5);
LABEL_36:
    LODWORD(this->fields.mRect.fields.m_XMin) = v10;
LABEL_37:
    this->fields.mRect.fields.m_YMin = v11;
    LODWORD(this->fields.mRect.fields.m_Width) = v12;
    this->fields.mRect.fields.m_Height = v13;
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
      NGUIMath__CalculateRelativeWidgetBounds_49181936(&iptr, (UnityEngine_Transform_o *)parent, v20, 0);
    else
      NGUIMath__CalculateRelativeWidgetBounds(&iptr, v20, 0);
    v9 = 0;
    v10 = vsub_f32(*(float32x2_t *)&iptr.fields.m_Center.fields.x, *(float32x2_t *)&iptr.fields.m_Extents.fields.x).n64_u64[0];
    v12 = vadd_f32(*(float32x2_t *)&iptr.fields.m_Extents.fields.x, *(float32x2_t *)&iptr.fields.m_Extents.fields.x).n64_u64[0];
    *(_QWORD *)&this->fields.mRect.fields.m_XMin = v10;
    *(_QWORD *)&this->fields.mRect.fields.m_Width = v12;
    v11 = *((float *)&v10 + 1);
    v13 = *((float *)&v12 + 1);
LABEL_38:
    v15 = (float)(*(float *)&v10 + (float)(*(float *)&v10 + *(float *)&v12)) * 0.5;
    v16 = (float)(v11 + (float)(v11 + v13)) * 0.5;
    switch ( this->fields.side )
    {
      case 1:
        goto LABEL_56;
      case 2:
        v16 = v11 + v13;
        goto LABEL_56;
      case 3:
        v16 = v11 + v13;
        break;
      case 4:
        v16 = v11 + v13;
        goto LABEL_60;
      case 5:
        goto LABEL_60;
      case 6:
        v16 = v11;
LABEL_60:
        v15 = *(float *)&v10 + *(float *)&v12;
        break;
      case 7:
        v16 = v11;
        break;
      case 8:
        break;
      default:
        v16 = v11;
LABEL_56:
        v15 = *(float *)&v10;
        break;
    }
    v22 = v15
        + (float)(this->fields.pixelOffset.fields.x + (float)(*(float *)&v12 * this->fields.relativeOffset.fields.x));
    v23 = v16 + (float)(this->fields.pixelOffset.fields.y + (float)(v13 * this->fields.relativeOffset.fields.y));
    if ( v9 )
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
      v56 = modf(v23, (double *)&iptr.fields.m_Center.fields.x);
      if ( v23 >= 0.0 )
      {
        if ( v56 == 0.5 )
        {
          v57 = *(double *)&iptr.fields.m_Center.fields.x;
          v58 = 1.0;
LABEL_127:
          v59 = (__int64)v57;
          v60 = v57;
          v61 = v60 + v58;
          if ( (v59 & 1) != 0 )
            v23 = v61;
          else
            v23 = v60;
          goto LABEL_132;
        }
        v23 = floorf(v23 + 0.5);
      }
      else
      {
        if ( v56 == -0.5 )
        {
          v57 = *(double *)&iptr.fields.m_Center.fields.x;
          v58 = -1.0;
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
      v72 = UnityEngine_Camera__WorldToScreenPoint_71029908(uiCamera, position, 0);
      transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
      if ( !transform )
        goto LABEL_146;
      v63 = v22;
      v64 = v23;
      v70 = UnityEngine_Camera__ScreenToWorldPoint_71029932((UnityEngine_Camera_o *)transform, v72, 0);
      x = v65;
      y = v66;
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
    v44 = modf(v23, (double *)&iptr.fields.m_Center.fields.x);
    if ( v23 >= 0.0 )
    {
      if ( v44 != 0.5 )
      {
        y = floorf(v23 + 0.5);
        goto LABEL_99;
      }
      v45 = *(double *)&iptr.fields.m_Center.fields.x;
      v46 = 1.0;
    }
    else
    {
      if ( v44 != -0.5 )
      {
        y = ceilf(v23 + -0.5);
        goto LABEL_99;
      }
      v45 = *(double *)&iptr.fields.m_Center.fields.x;
      v46 = -1.0;
    }
    v47 = (__int64)v45;
    v48 = v45;
    v49 = v48 + v46;
    if ( (v47 & 1) != 0 )
      y = v49;
    else
      y = v48;
LABEL_99:
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_146;
      transform = (UnityEngine_Animation_o *)UIRect__get_cachedTransform((UIRect_o *)v8, 0);
      if ( !transform )
        goto LABEL_146;
      v51 = 0;
    }
    else
    {
      v52 = (UnityEngine_Object_o *)this->fields.container;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v52, 0, 0) )
        goto LABEL_116;
      transform = (UnityEngine_Animation_o *)this->fields.container;
      if ( !transform )
        goto LABEL_146;
      transform = (UnityEngine_Animation_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)transform,
                                               0);
      if ( !transform )
        goto LABEL_146;
      v53 = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality(v53, 0, 0);
      if ( ((unsigned __int8)transform & 1) == 0 )
        goto LABEL_116;
      if ( !v53 )
        goto LABEL_146;
      v51 = 0;
      transform = (UnityEngine_Animation_o *)v53;
    }
    v54 = x;
    v55 = y;
    v69 = UnityEngine_Transform__TransformPoint(
            (UnityEngine_Transform_o *)transform,
            *(UnityEngine_Vector3_o *)(&v51 - 2),
            0);
    x = v69.fields.x;
    y = v69.fields.y;
LABEL_116:
    transform = (UnityEngine_Animation_o *)this->fields.mTrans;
    if ( !transform )
      goto LABEL_146;
    v70 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
LABEL_136:
    transform = (UnityEngine_Animation_o *)this->fields.mTrans;
    z = v70.fields.z;
    if ( transform )
    {
      v73 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      if ( (float)((float)((float)(v73.fields.z - z) * (float)(v73.fields.z - z))
                 + (float)((float)((float)(v73.fields.x - x) * (float)(v73.fields.x - x))
                         + (float)((float)(v73.fields.y - y) * (float)(v73.fields.y - y)))) < 1.0e-10 )
        goto LABEL_140;
      transform = (UnityEngine_Animation_o *)this->fields.mTrans;
      if ( transform )
      {
        v74.fields.x = x;
        v74.fields.y = y;
        v74.fields.z = z;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)transform, v74, 0);
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
    sub_1C32E7C(transform);
  }
  v21 = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
  {
    transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
    if ( !transform )
      goto LABEL_146;
    *(UnityEngine_Rect_o *)&v10 = UnityEngine_Camera__get_pixelRect((UnityEngine_Camera_o *)transform, 0);
    v9 = 1;
    LODWORD(this->fields.mRect.fields.m_XMin) = v10;
    this->fields.mRect.fields.m_YMin = v11;
    LODWORD(this->fields.mRect.fields.m_Width) = v12;
    this->fields.mRect.fields.m_Height = v13;
    goto LABEL_38;
  }
}