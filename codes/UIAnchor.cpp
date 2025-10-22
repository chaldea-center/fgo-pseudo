void UIAnchor___ctor(UIAnchor_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_c *v3; // x8

  this->fields.side = 8;
  this->fields.runOnlyOnce = 1;
  if ( !byte_4C5059A )
  {
    sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    byte_4C5059A = 1;
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

  if ( (byte_4C5B5DB & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C3E564(&UICamera_OnScreenResize_TypeInfo);
    sub_1C3E564(&Method_UIAnchor_ScreenSizeChanged__);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B5DB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v4, v5);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.mAnim = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mAnim, (int32_t)Component_object, v7, v8);
  v9 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v9 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v9->static_fields->onScreenResize;
  v11 = (UICamera_OnScreenResize_o *)sub_1C3E7B0(UICamera_OnScreenResize_TypeInfo);
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
    sub_1C3EA80(v15);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = (struct UICamera_OnScreenResize_o *)v15;
    p_onScreenResize = (CGThumbnailListItem_o *)&static_fields->onScreenResize;
  }
  sub_1C3E508(p_onScreenResize, (int32_t)v15, v13, v14);
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

  if ( (byte_4C5B5DC & 1) == 0 )
  {
    sub_1C3E564(&UICamera_OnScreenResize_TypeInfo);
    sub_1C3E564(&Method_UIAnchor_ScreenSizeChanged__);
    sub_1C3E564(&UICamera_TypeInfo);
    byte_4C5B5DC = 1;
  }
  v3 = UICamera_TypeInfo;
  if ( !UICamera_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
    v3 = UICamera_TypeInfo;
  }
  onScreenResize = (System_Delegate_o *)v3->static_fields->onScreenResize;
  v5 = (UICamera_OnScreenResize_o *)sub_1C3E7B0(UICamera_OnScreenResize_TypeInfo);
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
    sub_1C3EA80(v9);
LABEL_9:
    static_fields = UICamera_TypeInfo->static_fields;
    static_fields->onScreenResize = (struct UICamera_OnScreenResize_o *)v9;
    p_onScreenResize = (CGThumbnailListItem_o *)&static_fields->onScreenResize;
  }
  sub_1C3E508(p_onScreenResize, (int32_t)v9, v7, v8);
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
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *v13; // x20
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *uiCamera; // x21
  const MethodInfo *v18; // x1
  int32_t layer; // w21
  struct UnityEngine_Camera_o *CameraForLayer; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C5B5DD & 1) == 0 )
  {
    sub_1C3E564(&Method_NGUITools_FindInParents_UIRoot___);
    sub_1C3E564(&NGUITools_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5DD = 1;
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
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.container, (int32_t)gameObject, v9, v10);
      *p_widgetContainer = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.widgetContainer, 0, v11, v12);
    }
  }
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v14 = NGUITools__FindInParents_object_(v13, (const MethodInfo_3183E10 *)Method_NGUITools_FindInParents_UIRoot___);
  this->fields.mRoot = (struct UIRoot_o *)v14;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mRoot, (int32_t)v14, v15, v16);
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
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.uiCamera, (int32_t)CameraForLayer, v21, v22);
      goto LABEL_20;
    }
LABEL_21:
    sub_1C3E7C0(v7, v6);
  }
LABEL_20:
  UIAnchor__Update(this, v18);
  this->fields.mStarted = 1;
}


// local variable allocation has failed, the output may be wrong!
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
  unsigned __int64 v11; // d0 OVERLAPPED
  float v12; // s1
  unsigned __int64 v13; // d2
  float v14; // s3
  float v15; // s1
  float v16; // s5
  float v17; // s4
  UnityEngine_Object_o *v18; // x21
  UnityEngine_Object_o *parent; // x21
  char v20; // w22
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Object_o *v22; // x21
  float v23; // s8
  float v24; // s9
  double v25; // d0
  double v26; // d0
  float v27; // s1
  double v28; // d0
  double v29; // d0
  float v30; // s1
  __int64 v31; // x8
  float v32; // s0
  float v33; // s1
  float x; // s8
  __int64 v35; // x8
  float v36; // s0
  float v37; // s1
  UnityEngine_Object_o *mRoot; // x21
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

  if ( (byte_4C5B5DE & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Application_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5B5DE = 1;
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
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
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
    UIWidget__CalculateBounds_49498480(&iptr, (UIWidget_o *)Component_object, (UnityEngine_Transform_o *)transform, 0);
    v10 = 0;
    *(float *)&v11 = iptr.fields.m_Center.fields.x - iptr.fields.m_Extents.fields.x;
    v12 = iptr.fields.m_Center.fields.y - iptr.fields.m_Extents.fields.y;
    *(float *)&v13 = iptr.fields.m_Extents.fields.x + iptr.fields.m_Extents.fields.x;
    v14 = iptr.fields.m_Extents.fields.y + iptr.fields.m_Extents.fields.y;
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
      v39 = 0.5;
      if ( UnityEngine_Object__op_Inequality(mRoot, 0, 0) )
      {
        transform = (UnityEngine_Animation_o *)this->fields.mRoot;
        if ( !transform )
          goto LABEL_146;
        activeHeight = UIRoot__get_activeHeight((UIRoot_o *)transform, v4);
        v39 = (float)((float)activeHeight / (float)UnityEngine_Screen__get_height(0)) * 0.5;
      }
      v41 = v39 * (float)-UnityEngine_Screen__get_width(0);
      v42 = (float)(this->fields.mRect.fields.m_Width + this->fields.mRect.fields.m_XMin) - v41;
      this->fields.mRect.fields.m_XMin = v41;
      this->fields.mRect.fields.m_Width = v42;
      height = UnityEngine_Screen__get_height(0);
      *(float *)&v11 = this->fields.mRect.fields.m_XMin;
      v12 = v39 * (float)-height;
      v14 = (float)-v12 - v12;
      v10 = 0;
      *(float *)&v13 = (float)-*(float *)&v11 - *(float *)&v11;
      goto LABEL_37;
    }
    *(UnityEngine_Vector4_o *)&v11 = UIPanel__get_finalClipRegion((UIPanel_o *)v9, 0);
    v10 = 0;
    *(float *)&v11 = *(float *)&v11 - (float)(*(float *)&v13 * 0.5);
    v12 = v15 - (float)(v14 * 0.5);
LABEL_36:
    LODWORD(this->fields.mRect.fields.m_XMin) = v11;
LABEL_37:
    this->fields.mRect.fields.m_YMin = v12;
    LODWORD(this->fields.mRect.fields.m_Width) = v13;
    this->fields.mRect.fields.m_Height = v14;
    goto LABEL_38;
  }
  v18 = (UnityEngine_Object_o *)this->fields.container;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
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
    v20 = (char)transform;
    v21 = UnityEngine_GameObject__get_transform(this->fields.container, 0);
    if ( (v20 & 1) != 0 )
      NGUIMath__CalculateRelativeWidgetBounds_49298288(&iptr, (UnityEngine_Transform_o *)parent, v21, 0);
    else
      NGUIMath__CalculateRelativeWidgetBounds(&iptr, v21, 0);
    v10 = 0;
    v11 = vsub_f32(*(float32x2_t *)&iptr.fields.m_Center.fields.x, *(float32x2_t *)&iptr.fields.m_Extents.fields.x).n64_u64[0];
    v13 = vadd_f32(*(float32x2_t *)&iptr.fields.m_Extents.fields.x, *(float32x2_t *)&iptr.fields.m_Extents.fields.x).n64_u64[0];
    *(_QWORD *)&this->fields.mRect.fields.m_XMin = v11;
    *(_QWORD *)&this->fields.mRect.fields.m_Width = v13;
    v12 = *((float *)&v11 + 1);
    v14 = *((float *)&v13 + 1);
LABEL_38:
    v16 = (float)(*(float *)&v11 + (float)(*(float *)&v11 + *(float *)&v13)) * 0.5;
    v17 = (float)(v12 + (float)(v12 + v14)) * 0.5;
    switch ( this->fields.side )
    {
      case 1:
        goto LABEL_56;
      case 2:
        v17 = v12 + v14;
        goto LABEL_56;
      case 3:
        v17 = v12 + v14;
        break;
      case 4:
        v17 = v12 + v14;
        goto LABEL_60;
      case 5:
        goto LABEL_60;
      case 6:
        v17 = v12;
LABEL_60:
        v16 = *(float *)&v11 + *(float *)&v13;
        break;
      case 7:
        v17 = v12;
        break;
      case 8:
        break;
      default:
        v17 = v12;
LABEL_56:
        v16 = *(float *)&v11;
        break;
    }
    v23 = v16
        + (float)(this->fields.pixelOffset.fields.x + (float)(*(float *)&v13 * this->fields.relativeOffset.fields.x));
    v24 = v17 + (float)(this->fields.pixelOffset.fields.y + (float)(v14 * this->fields.relativeOffset.fields.y));
    if ( v10 )
    {
      transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
      if ( !transform )
        goto LABEL_146;
      if ( !UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)transform, 0) )
        goto LABEL_132;
      v25 = modf(v23, (double *)&iptr.fields.m_Center.fields.x);
      if ( v23 >= 0.0 )
      {
        if ( v25 != 0.5 )
        {
          v23 = floorf(v23 + 0.5);
          goto LABEL_122;
        }
        v26 = *(double *)&iptr.fields.m_Center.fields.x;
        v27 = 1.0;
      }
      else
      {
        if ( v25 != -0.5 )
        {
          v23 = ceilf(v23 + -0.5);
          goto LABEL_122;
        }
        v26 = *(double *)&iptr.fields.m_Center.fields.x;
        v27 = -1.0;
      }
      v35 = (__int64)v26;
      v36 = v26;
      v37 = v36 + v27;
      if ( (v35 & 1) != 0 )
        v23 = v37;
      else
        v23 = v36;
LABEL_122:
      v56 = modf(v24, (double *)&iptr.fields.m_Center.fields.x);
      if ( v24 >= 0.0 )
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
            v24 = v61;
          else
            v24 = v60;
          goto LABEL_132;
        }
        v24 = floorf(v24 + 0.5);
      }
      else
      {
        if ( v56 == -0.5 )
        {
          v57 = *(double *)&iptr.fields.m_Center.fields.x;
          v58 = -1.0;
          goto LABEL_127;
        }
        v24 = ceilf(v24 + -0.5);
      }
LABEL_132:
      transform = (UnityEngine_Animation_o *)this->fields.mTrans;
      if ( !transform )
        goto LABEL_146;
      uiCamera = this->fields.uiCamera;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      if ( !uiCamera )
        goto LABEL_146;
      v72 = UnityEngine_Camera__WorldToScreenPoint_71147832(uiCamera, position, 0);
      transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
      if ( !transform )
        goto LABEL_146;
      v63 = v23;
      v64 = v24;
      v70 = UnityEngine_Camera__ScreenToWorldPoint_71147856((UnityEngine_Camera_o *)transform, v72, 0);
      x = v65;
      y = v66;
      goto LABEL_136;
    }
    v28 = modf(v23, (double *)&iptr.fields.m_Center.fields.x);
    if ( v23 >= 0.0 )
    {
      if ( v28 != 0.5 )
      {
        x = floorf(v23 + 0.5);
        goto LABEL_89;
      }
      v29 = *(double *)&iptr.fields.m_Center.fields.x;
      v30 = 1.0;
    }
    else
    {
      if ( v28 != -0.5 )
      {
        x = ceilf(v23 + -0.5);
        goto LABEL_89;
      }
      v29 = *(double *)&iptr.fields.m_Center.fields.x;
      v30 = -1.0;
    }
    v31 = (__int64)v29;
    v32 = v29;
    v33 = v32 + v30;
    if ( (v31 & 1) != 0 )
      x = v33;
    else
      x = v32;
LABEL_89:
    v44 = modf(v24, (double *)&iptr.fields.m_Center.fields.x);
    if ( v24 >= 0.0 )
    {
      if ( v44 != 0.5 )
      {
        y = floorf(v24 + 0.5);
        goto LABEL_99;
      }
      v45 = *(double *)&iptr.fields.m_Center.fields.x;
      v46 = 1.0;
    }
    else
    {
      if ( v44 != -0.5 )
      {
        y = ceilf(v24 + -0.5);
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
    transform = (UnityEngine_Animation_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_146;
      transform = (UnityEngine_Animation_o *)UIRect__get_cachedTransform((UIRect_o *)v9, 0);
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
    sub_1C3E7C0(transform, v4);
  }
  v22 = (UnityEngine_Object_o *)this->fields.uiCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
  {
    transform = (UnityEngine_Animation_o *)this->fields.uiCamera;
    if ( !transform )
      goto LABEL_146;
    *(UnityEngine_Rect_o *)&v11 = UnityEngine_Camera__get_pixelRect((UnityEngine_Camera_o *)transform, 0);
    v10 = 1;
    LODWORD(this->fields.mRect.fields.m_XMin) = v11;
    this->fields.mRect.fields.m_YMin = v12;
    LODWORD(this->fields.mRect.fields.m_Width) = v13;
    this->fields.mRect.fields.m_Height = v14;
    goto LABEL_38;
  }
}