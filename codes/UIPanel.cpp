void UIPanel___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Collections_Generic_HashSet_T__o *v4; // x19
  struct UIPanel_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  struct UIPanel_StaticFields *v9; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  struct UIPanel_StaticFields *v13; // x8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UIPanel_StaticFields *v16; // x8

  if ( (byte_4C3BFAF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIPanel___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_UIPanel__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIPanel__TypeInfo);
    sub_1C32C20(&float___TypeInfo);
    sub_1C32C20(&UIPanel_TypeInfo);
    sub_1C32C20(&UnityEngine_Vector3___TypeInfo);
    byte_4C3BFAF = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIPanel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIPanel___ctor__);
  UIPanel_TypeInfo->static_fields->list = (struct System_Collections_Generic_List_UIPanel__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)UIPanel_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_UIPanel__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_364F828 *)Method_System_Collections_Generic_HashSet_UIPanel___ctor__);
  static_fields = UIPanel_TypeInfo->static_fields;
  static_fields->updateAgainPanels = (struct System_Collections_Generic_HashSet_UIPanel__o *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->updateAgainPanels, (int32_t)v4, v6, v7);
  v8 = sub_1C32CC8(float___TypeInfo, 4);
  v9 = UIPanel_TypeInfo->static_fields;
  v9->mTemp = (struct System_Single_array *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->mTemp, v8, v10, v11);
  v12 = sub_1C32CC8(UnityEngine_Vector3___TypeInfo, 4);
  v13 = UIPanel_TypeInfo->static_fields;
  v13->mCorners = (struct UnityEngine_Vector3_array *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&v13->mCorners, v12, v14, v15);
  v16 = UIPanel_TypeInfo->static_fields;
  v16->mUpdateFrame = -1;
  v16->mUpdating = 0;
}


void UIPanel___ctor(UIPanel_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UnityEngine_Matrix4x4_StaticFields *static_fields; // x8
  __int128 v10; // q1
  __int128 v11; // q2
  __int128 v12; // q3
  __int128 v13; // q4
  UnityEngine_Vector2_c *v19; // x8
  struct UnityEngine_Vector2_o zeroVector; // d0

  if ( (byte_4C3BFAE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UIDrawCall__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C32C20(&UIRect_TypeInfo);
    byte_4C3BFAE = 1;
  }
  this->fields.showInPanelTool = 1;
  this->fields.cullWhileDragging = 1;
  this->fields.softBorderPadding = 1;
  this->fields.startingRenderQueue = 3000;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.widgets = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.widgets, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UIDrawCall__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UIDrawCall___ctor__);
  this->fields.drawCalls = (struct System_Collections_Generic_List_UIDrawCall__o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.drawCalls, (int32_t)v6, v7, v8);
  if ( !byte_4C39373 )
  {
    sub_1C32C20(&UnityEngine_Matrix4x4_TypeInfo);
    byte_4C39373 = 1;
  }
  static_fields = UnityEngine_Matrix4x4_TypeInfo->static_fields;
  v10 = *(_OWORD *)&static_fields->identityMatrix.fields.m02;
  v11 = *(_OWORD *)&static_fields->identityMatrix.fields.m03;
  v12 = *(_OWORD *)&static_fields->identityMatrix.fields.m00;
  v13 = *(_OWORD *)&static_fields->identityMatrix.fields.m01;
  this->fields.mAlpha = 1.0;
  *(_OWORD *)&this->fields.worldToLocal.fields.m03 = v11;
  this->fields.drawCallClipRange = (struct UnityEngine_Vector4_o)xmmword_C0C610;
  *(_OWORD *)&this->fields.worldToLocal.fields.m01 = v13;
  *(_OWORD *)&this->fields.worldToLocal.fields.m02 = v10;
  __asm { FMOV            V0.2S, #4.0 }
  *(_OWORD *)&this->fields.worldToLocal.fields.m00 = v12;
  this->fields.mClipRange = (struct UnityEngine_Vector4_o)xmmword_C0E050;
  this->fields.mClipSoftness = _D0;
  if ( !byte_4C312CA )
  {
    sub_1C32C20(&UnityEngine_Vector2_TypeInfo);
    byte_4C312CA = 1;
  }
  v19 = UnityEngine_Vector2_TypeInfo;
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&this->fields.mUpdatedFrame = -1;
  this->fields.mClipOffset = zeroVector;
  this->fields.mLayer = -1;
  this->fields.mMin = v19->static_fields->zeroVector;
  this->fields.mMax = v19->static_fields->zeroVector;
  if ( !UIRect_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
  UIRect___ctor((UIRect_o *)this, 0);
}


void UIPanel__AddWidget(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *widgets; // x0
  __int64 size; // x8
  struct System_Object_array *v8; // x9
  _QWORD *v9; // x10
  int32_t v10; // w10
  Il2CppClass **v11; // x8
  const MethodInfo *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  const MethodInfo *v15; // x2
  Il2CppObject *Item; // x0
  struct System_Collections_Generic_List_UIWidget__o *v17; // x8
  int v18; // w21
  Il2CppObject *v19; // x0
  int32_t v20; // w1
  const MethodInfo_379956C *v21; // x3

  if ( (byte_4C3BFA5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Insert__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    byte_4C3BFA5 = 1;
  }
  widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
  this->fields.mUpdateScroll = 1;
  if ( !widgets )
    goto LABEL_26;
  size = widgets->fields._size;
  if ( !(_DWORD)size )
  {
    items = widgets->fields._items;
    v14 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++widgets->fields._version;
    if ( items )
    {
      if ( LODWORD(items->max_length) )
      {
        widgets->fields._size = 1;
        items->m_Items[0] = (Il2CppObject *)w;
        sub_1C32BC4((CGThumbnailListItem_o *)items->m_Items, (int32_t)w, (int32_t)method, v3);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          widgets,
          (Il2CppObject *)w,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      goto LABEL_25;
    }
    goto LABEL_26;
  }
  if ( !this->fields.mSortWidgets )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             widgets,
             0,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
    widgets = (System_Collections_Generic_List_object__o *)UIWidget__PanelCompareFunc(w, (UIWidget_o *)Item, 0);
    v17 = this->fields.widgets;
    if ( v17 )
    {
      if ( (_DWORD)widgets == -1 )
      {
        widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
        v20 = 0;
        v21 = (const MethodInfo_379956C *)Method_System_Collections_Generic_List_UIWidget__Insert__;
        goto LABEL_24;
      }
      v18 = v17->fields._size;
      do
      {
        if ( v18 <= 0 )
          goto LABEL_25;
        widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
        if ( !widgets )
          goto LABEL_26;
        v19 = System_Collections_Generic_List_object___get_Item(
                widgets,
                --v18,
                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
      }
      while ( UIWidget__PanelCompareFunc(w, (UIWidget_o *)v19, 0) == -1 );
      widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
      if ( widgets )
      {
        v20 = v18 + 1;
        v21 = (const MethodInfo_379956C *)Method_System_Collections_Generic_List_UIWidget__Insert__;
LABEL_24:
        System_Collections_Generic_List_object___Insert(widgets, v20, (Il2CppObject *)w, v21);
        goto LABEL_25;
      }
    }
LABEL_26:
    sub_1C32E7C(widgets);
  }
  v8 = widgets->fields._items;
  v9 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++widgets->fields._version;
  if ( !v8 )
    goto LABEL_26;
  if ( (unsigned int)size >= LODWORD(v8->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      widgets,
      (Il2CppObject *)w,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = size + 1;
    v11 = &v8->obj.klass + size;
    widgets->fields._size = v10;
    v11[4] = (Il2CppClass *)w;
    sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 4), (int32_t)w, (int32_t)method, v3);
  }
  UIPanel__SortWidgets(this, v12);
LABEL_25:
  UIPanel__FindDrawCall(this, w, v15);
}


bool UIPanel__Affects(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  UnityEngine_Object_o *panel; // x20
  int32_t clipCount; // w0
  const MethodInfo *v8; // x1

  if ( (byte_4C3BF95 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF95 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)w, 0, 0);
  if ( !v5 )
  {
    if ( !w )
LABEL_22:
      sub_1C32E7C(v5);
    panel = (UnityEngine_Object_o *)w->fields.panel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(panel, 0, 0) )
    {
      while ( 1 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, 0, 0) )
          break;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)this, panel, 0);
        if ( v5 )
        {
          LOBYTE(clipCount) = 1;
          return clipCount;
        }
        if ( !this )
          goto LABEL_22;
        clipCount = UIPanel__get_clipCount(this, v8);
        if ( !clipCount )
          return clipCount;
        this = this->fields.mParentPanel;
      }
    }
  }
  LOBYTE(clipCount) = 0;
  return clipCount;
}


void UIPanel__Awake(UIPanel_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct UnityEngine_Transform_o *transform; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool *p_mHalfPixelOffset; // x20
  int32_t platform; // w0
  bool v11; // w0
  System_String_o *graphicsDeviceVersion; // x0

  if ( (byte_4C3BF97 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Application_TypeInfo);
    sub_1C32C20(&StringLiteral_5280/*"Direct3D"*/);
    byte_4C3BF97 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mGo = gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mGo, (int32_t)gameObject, v4, v5);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mTrans, (int32_t)transform, v7, v8);
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_platform(0) == 2 )
  {
    p_mHalfPixelOffset = &this->fields.mHalfPixelOffset;
    this->fields.mHalfPixelOffset = 1;
LABEL_11:
    if ( UnityEngine_SystemInfo__get_graphicsShaderLevel(0) <= 39 )
    {
      graphicsDeviceVersion = UnityEngine_SystemInfo__get_graphicsDeviceVersion(0);
      if ( !graphicsDeviceVersion )
        sub_1C32E7C(0);
      v11 = System_String__Contains(graphicsDeviceVersion, (System_String_o *)StringLiteral_5280/*"Direct3D"*/, 0);
    }
    else
    {
      v11 = 0;
    }
    *p_mHalfPixelOffset = v11;
    return;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  platform = UnityEngine_Application__get_platform(0);
  this->fields.mHalfPixelOffset = platform == 7;
  if ( platform == 7 )
  {
    p_mHalfPixelOffset = &this->fields.mHalfPixelOffset;
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o UIPanel__CalculateConstrainOffset(
        UIPanel_o *this,
        UnityEngine_Vector2_o min,
        UnityEngine_Vector2_o max,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float v6; // s10
  float v7; // s11
  float v9; // s4 OVERLAPPED
  float v10; // s5
  float v11; // s6 OVERLAPPED
  float v12; // s7
  float v13; // s0
  float v14; // s1
  float v15; // s0
  float v16; // s1
  UnityEngine_Vector2_o v17; // kr00_8
  float v18; // s2
  UnityEngine_Vector2_o v19; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v20; // 0:s2.4,4:s3.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = max.fields.y;
  x = max.fields.x;
  v6 = min.fields.y;
  v7 = min.fields.x;
  finalClipRegion = UIPanel__get_finalClipRegion(this, method);
  finalClipRegion.fields.z = finalClipRegion.fields.z * 0.5;
  finalClipRegion.fields.w = finalClipRegion.fields.w * 0.5;
  v9 = finalClipRegion.fields.x - finalClipRegion.fields.z;
  v10 = finalClipRegion.fields.y - finalClipRegion.fields.w;
  v11 = finalClipRegion.fields.x + finalClipRegion.fields.z;
  v12 = finalClipRegion.fields.y + finalClipRegion.fields.w;
  if ( this->fields.softBorderPadding && this->fields.mClipping == 3 )
  {
    v13 = this->fields.mClipSoftness.fields.x;
    v14 = this->fields.mClipSoftness.fields.y;
    v9 = v9 + v13;
    v10 = v10 + v14;
    v11 = v11 - v13;
    v12 = v12 - v14;
  }
  v19.fields.x = v7;
  v19.fields.y = v6;
  v20.fields.x = x;
  v20.fields.y = y;
  v17 = NGUIMath__ConstrainRect(v19, v20, *(UnityEngine_Vector2_o *)&v9, *(UnityEngine_Vector2_o *)&v11, 0);
  v16 = v17.fields.y;
  v15 = v17.fields.x;
  v18 = 0.0;
  result.fields.z = v18;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}


float UIPanel__CalculateFinalAlpha(UIPanel_o *this, int32_t frameID, const MethodInfo *method)
{
  float result; // s0
  UIRect_o *parent; // x21
  UnityEngine_Object_o *v7; // x22
  _BOOL8 v8; // x0

  if ( (byte_4C3BF91 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF91 = 1;
  }
  if ( this->fields.mAlphaFrameID == frameID )
    return this->fields.finalAlpha;
  this->fields.mAlphaFrameID = frameID;
  parent = UIRect__get_parent((UIRect_o *)this, 0);
  v7 = (UnityEngine_Object_o *)UIRect__get_parent((UIRect_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(v7, 0, 0);
  if ( v8 )
  {
    if ( !parent )
      sub_1C32E7C(v8);
    result = ((float (__fastcall *)(UIRect_o *, _QWORD, const MethodInfo *))parent->klass->vtable._9_unknown.methodPtr)(
               parent,
               (unsigned int)frameID,
               parent->klass->vtable._9_unknown.method)
           * this->fields.mAlpha;
  }
  else
  {
    result = this->fields.mAlpha;
  }
  this->fields.finalAlpha = result;
  return result;
}


int32_t UIPanel__CompareFunc(UIPanel_o *a, UIPanel_o *b, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  int32_t mDepth; // w8
  int32_t v7; // w9
  int32_t InstanceID; // w20

  if ( (byte_4C3BF87 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF87 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)a, (UnityEngine_Object_o *)b, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)a, 0, 0) )
    return 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)b, 0, 0);
  if ( !v5 )
    return 0;
  if ( !a || !b )
    sub_1C32E7C(v5);
  mDepth = a->fields.mDepth;
  v7 = b->fields.mDepth;
  if ( mDepth < v7 )
    return -1;
  if ( mDepth > v7 )
    return 1;
  InstanceID = UnityEngine_Object__GetInstanceID((UnityEngine_Object_o *)a, 0);
  if ( InstanceID < UnityEngine_Object__GetInstanceID((UnityEngine_Object_o *)b, 0) )
    return -1;
  else
    return 1;
}


// local variable allocation has failed, the output may be wrong!
bool UIPanel__ConstrainTargetToBounds(
        UIPanel_o *this,
        UnityEngine_Transform_o *target,
        UnityEngine_Bounds_o *targetBounds,
        bool immediate,
        const MethodInfo *method)
{
  long double v5; // q8
  long double v6; // q9
  long double v7; // q10
  long double v8; // q11
  float y; // s1
  float x; // s2
  float v15; // s3
  float v16; // s12
  UnityEngine_Object_o *root; // x23
  SpringPosition_o *v18; // x0
  float pixelSizeAdjustment; // s0
  float v20; // s10
  float v21; // s1
  float v22; // s9
  float v23; // s2
  float v24; // s8
  float v25; // s1
  float v26; // s2
  Il2CppObject *Component_object; // x19
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BFA8 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFA8 = 1;
  }
  y = targetBounds->fields.m_Center.fields.y;
  x = targetBounds->fields.m_Extents.fields.x;
  v15 = targetBounds->fields.m_Extents.fields.y;
  v16 = 1.0;
  *(float *)&v8 = targetBounds->fields.m_Center.fields.x - x;
  *(float *)&v7 = y - v15;
  *(float *)&v6 = targetBounds->fields.m_Center.fields.x + x;
  *(float *)&v5 = y + v15;
  if ( !this->fields.mClipping )
  {
    root = (UnityEngine_Object_o *)UIRect__get_root((UIRect_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v18 = (SpringPosition_o *)UnityEngine_Object__op_Inequality(root, 0, 0);
    if ( ((unsigned __int8)v18 & 1) != 0 )
    {
      if ( !root )
        goto LABEL_22;
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment((UIRoot_o *)root, 0);
      v16 = 1.0;
      if ( pixelSizeAdjustment != 1.0 )
      {
        *(float *)&v8 = *(float *)&v8 / pixelSizeAdjustment;
        *(float *)&v7 = *(float *)&v7 / pixelSizeAdjustment;
        *(float *)&v6 = *(float *)&v6 / pixelSizeAdjustment;
        *(float *)&v5 = *(float *)&v5 / pixelSizeAdjustment;
        v16 = pixelSizeAdjustment;
      }
    }
  }
  v20 = v16
      * ((float (__fastcall *)(UIPanel_o *, const MethodInfo *, UnityEngine_Bounds_o *, bool, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
          this,
          this->klass->vtable._22_CalculateConstrainOffset.method,
          targetBounds,
          immediate,
          method,
          v8,
          v7,
          v6,
          v5);
  v22 = v16 * v21;
  v24 = v16 * v23;
  if ( (float)((float)(v24 * v24) + (float)((float)(v20 * v20) + (float)(v22 * v22))) <= 0.0 )
    return 0;
  if ( !target )
LABEL_22:
    sub_1C32E7C(v18);
  if ( !immediate )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0);
    localPosition = UnityEngine_Transform__get_localPosition(target, 0);
    localPosition.fields.x = v20 + localPosition.fields.x;
    localPosition.fields.y = v22 + localPosition.fields.y;
    localPosition.fields.z = v24 + localPosition.fields.z;
    v18 = SpringPosition__Begin(gameObject, localPosition, 13.0, 0);
    if ( v18 )
    {
      *(_WORD *)&v18->fields.worldSpace = 256;
      return 1;
    }
    goto LABEL_22;
  }
  v30 = UnityEngine_Transform__get_localPosition(target, 0);
  v30.fields.x = v20 + v30.fields.x;
  v30.fields.y = v22 + v30.fields.y;
  v30.fields.z = v24 + v30.fields.z;
  UnityEngine_Transform__set_localPosition(target, v30, 0);
  v25 = v22 + targetBounds->fields.m_Center.fields.y;
  v26 = v24 + targetBounds->fields.m_Center.fields.z;
  targetBounds->fields.m_Center.fields.x = v20 + targetBounds->fields.m_Center.fields.x;
  targetBounds->fields.m_Center.fields.y = v25;
  targetBounds->fields.m_Center.fields.z = v26;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)target,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = (SpringPosition_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)v18 & 1) == 0 )
    return 1;
  if ( !Component_object )
    goto LABEL_22;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  return 1;
}


bool UIPanel__ConstrainTargetToBounds_49076828(
        UIPanel_o *this,
        UnityEngine_Transform_o *target,
        bool immediate,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  const MethodInfo *v8; // x4
  UnityEngine_Bounds_o v10; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Bounds_o targetBounds; // [xsp+20h] [xbp-40h] BYREF

  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  NGUIMath__CalculateRelativeWidgetBounds_49181936(&v10, cachedTransform, target, 0);
  targetBounds = v10;
  return UIPanel__ConstrainTargetToBounds(this, target, &targetBounds, immediate, v8);
}


void UIPanel__EndShowOverWriteRange(UIPanel_o *this, float overWriteValue, const MethodInfo *method)
{
  this->fields.mClipRange.fields.z = overWriteValue;
}


void UIPanel__FillAllDrawCalls(UIPanel_o *this, const MethodInfo *method)
{
  void *drawCalls; // x0
  int32_t v4; // w20
  int32_t v5; // w2
  Il2CppObject *Item; // x21
  int v7; // w8
  UnityEngine_Object_o *v8; // x28
  UnityEngine_Object_o *v9; // x29
  UnityEngine_Object_o *v10; // x26
  char *v11; // x22
  int32_t v12; // w20
  int32_t v13; // w23
  UIWidget_o *v14; // x27
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *v17; // x24
  UnityEngine_Object_o *v18; // x25
  UnityEngine_Object_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x8
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  __int64 v26; // x8
  CGThumbnailListItem_c *klass; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t mDepth; // w8
  char *v37; // x26
  int32_t v38; // w8
  BetterList_Vector3__o *v39; // x4
  BetterList_Vector4__o *v40; // x5
  UIWidget_o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Delegate_o *mOnRender; // x1
  System_Delegate_o *v45; // x0
  System_Delegate_o *v46; // x8
  UIDrawCall_OnRenderCallback_c *v47; // x1
  struct UIDrawCall_OnRenderCallback_o **v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x8
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  CGThumbnailListItem_c *v56; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  UIPanel_o *v61; // x0
  UIDrawCall_o *v62; // x1
  const MethodInfo *v63; // x2
  CGThumbnailListItem_o *p_mOnRender; // [xsp+8h] [xbp-68h]

  if ( (byte_4C3BF9F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_OnRenderCallback_TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    byte_4C3BF9F = 1;
  }
  drawCalls = this->fields.drawCalls;
  if ( !drawCalls )
    goto LABEL_9;
  v4 = 0;
  while ( 1 )
  {
    v5 = *((_DWORD *)drawCalls + 6);
    if ( v4 >= v5 )
      break;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)drawCalls,
             v4,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    UIDrawCall__Destroy((UIDrawCall_o *)Item, 0);
    drawCalls = this->fields.drawCalls;
    ++v4;
    if ( !drawCalls )
      goto LABEL_9;
  }
  v7 = *((_DWORD *)drawCalls + 7) + 1;
  *((_DWORD *)drawCalls + 6) = 0;
  *((_DWORD *)drawCalls + 7) = v7;
  if ( v5 >= 1 )
    System_Array__Clear(*((System_Array_o **)drawCalls + 2), 0, v5, 0);
  if ( this->fields.mSortWidgets )
    UIPanel__SortWidgets(this, method);
  drawCalls = this->fields.widgets;
  if ( !drawCalls )
    goto LABEL_9;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  p_mOnRender = (CGThumbnailListItem_o *)&this->fields.mOnRender;
  while ( v13 < *((_DWORD *)drawCalls + 6) )
  {
    drawCalls = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)drawCalls,
                  v13,
                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
    if ( !drawCalls )
      goto LABEL_9;
    v14 = (UIWidget_o *)drawCalls;
    if ( UIWidget__get_isVisible((UIWidget_o *)drawCalls, 0) && UIWidget__get_hasVertices(v14, 0) )
    {
      v17 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v14->klass->vtable._24_get_material.methodPtr)(
                                      v14,
                                      v14->klass->vtable._24_get_material.method);
      v18 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v14->klass->vtable._26_get_mainTexture.methodPtr)(
                                      v14,
                                      v14->klass->vtable._26_get_mainTexture.method);
      v19 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v14->klass->vtable._28_get_shader.methodPtr)(
                                      v14,
                                      v14->klass->vtable._28_get_shader.method);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v8, v17, 0) )
        goto LABEL_95;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v9, v18, 0) )
        goto LABEL_95;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v10, v19, 0) )
      {
LABEL_95:
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        drawCalls = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
        if ( ((unsigned __int8)drawCalls & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_9;
          v22 = *((_QWORD *)v11 + 10);
          if ( !v22 )
            goto LABEL_9;
          if ( *(_DWORD *)(v22 + 24) )
          {
            drawCalls = this->fields.drawCalls;
            if ( !drawCalls )
              goto LABEL_9;
            v23 = *((_QWORD *)drawCalls + 2);
            v24 = Method_System_Collections_Generic_List_UIDrawCall__Add__;
            ++*((_DWORD *)drawCalls + 7);
            if ( !v23 )
              goto LABEL_9;
            v25 = *((int *)drawCalls + 6);
            if ( (unsigned int)v25 >= *(_DWORD *)(v23 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)drawCalls,
                (Il2CppObject *)v11,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
            }
            else
            {
              v26 = v23 + 8 * v25;
              *((_DWORD *)drawCalls + 6) = v25 + 1;
              *(_QWORD *)(v26 + 32) = v11;
              sub_1C32BC4((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v11, v20, v21);
            }
            UIDrawCall__UpdateGeometry((UIDrawCall_o *)v11, v12, 0);
            klass = p_mOnRender->klass;
            *((_QWORD *)v11 + 28) = p_mOnRender->klass;
            sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 224), (int32_t)klass, v28, v29);
            p_mOnRender->klass = 0;
            sub_1C32BC4(p_mOnRender, 0, v30, v31);
            v12 = 0;
            v11 = 0;
          }
        }
      }
      else
      {
        v19 = v10;
        v18 = v9;
        v17 = v8;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
        goto LABEL_96;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
        goto LABEL_96;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
      {
LABEL_96:
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        drawCalls = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v11, 0, 0);
        if ( ((unsigned __int8)drawCalls & 1) != 0 )
        {
          if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
          drawCalls = UIDrawCall__Create(
                        this,
                        (UnityEngine_Material_o *)v17,
                        (UnityEngine_Texture_o *)v18,
                        (UnityEngine_Shader_o *)v19,
                        0);
          if ( !drawCalls )
            goto LABEL_9;
          mDepth = v14->fields.mDepth;
          *((_QWORD *)drawCalls + 7) = this;
          v37 = (char *)drawCalls + 56;
          v11 = (char *)drawCalls;
          *((_DWORD *)drawCalls + 9) = mDepth;
          *((_DWORD *)drawCalls + 10) = mDepth;
          sub_1C32BC4((CGThumbnailListItem_o *)((char *)drawCalls + 56), (int32_t)this, v34, v35);
          v37[64] = v14->fields.mUseOriginalMaterial;
        }
        else
        {
          if ( !v11 )
            goto LABEL_9;
          v38 = v14->fields.mDepth;
          if ( v38 < *((_DWORD *)v11 + 9) )
            *((_DWORD *)v11 + 9) = v38;
          if ( v38 > *((_DWORD *)v11 + 10) )
            *((_DWORD *)v11 + 10) = v38;
        }
        v14->fields.drawCall = (struct UIDrawCall_o *)v11;
        sub_1C32BC4((CGThumbnailListItem_o *)&v14->fields.drawCall, (int32_t)v11, v32, v33);
        if ( this->fields.generateNormals )
        {
          v39 = (BetterList_Vector3__o *)*((_QWORD *)v11 + 11);
          v40 = (BetterList_Vector4__o *)*((_QWORD *)v11 + 12);
          v41 = v14;
        }
        else
        {
          v41 = v14;
          v39 = 0;
          v40 = 0;
        }
        UIWidget__WriteToBuffers(
          v41,
          *((BetterList_Vector3__o **)v11 + 10),
          *((BetterList_Vector2__o **)v11 + 13),
          *((BetterList_Color32__o **)v11 + 14),
          v39,
          v40,
          0);
        mOnRender = (System_Delegate_o *)v14->fields.mOnRender;
        ++v12;
        if ( mOnRender )
        {
          if ( p_mOnRender->klass )
          {
            v45 = System_Delegate__Combine((System_Delegate_o *)p_mOnRender->klass, mOnRender, 0);
            v46 = v45;
            if ( v45 )
            {
              v47 = UIDrawCall_OnRenderCallback_TypeInfo;
              if ( (UIDrawCall_OnRenderCallback_c *)v45->klass != UIDrawCall_OnRenderCallback_TypeInfo
                || (v48 = &this->fields.mOnRender,
                    p_mOnRender->klass = (CGThumbnailListItem_c *)v46,
                    (UIDrawCall_OnRenderCallback_c *)v46->klass != v47) )
              {
                sub_1C3313C(v46);
                UIPanel__FillDrawCall(v61, v62, v63);
                return;
              }
            }
            else
            {
              v48 = &this->fields.mOnRender;
              p_mOnRender->klass = 0;
            }
            LODWORD(mOnRender) = (_DWORD)v46;
          }
          else
          {
            v48 = &this->fields.mOnRender;
            p_mOnRender->klass = (CGThumbnailListItem_c *)mOnRender;
          }
          sub_1C32BC4((CGThumbnailListItem_o *)v48, (int32_t)mOnRender, v42, v43);
        }
      }
    }
    else
    {
      v14->fields.drawCall = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&v14->fields.drawCall, 0, v15, v16);
      v19 = v10;
      v18 = v9;
      v17 = v8;
    }
    drawCalls = this->fields.widgets;
    ++v13;
    v8 = v17;
    v9 = v18;
    v10 = v19;
    if ( !drawCalls )
      goto LABEL_9;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  drawCalls = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
  if ( ((unsigned __int8)drawCalls & 1) != 0 )
  {
    if ( v11 )
    {
      v51 = *((_QWORD *)v11 + 10);
      if ( v51 )
      {
        if ( !*(_DWORD *)(v51 + 24) )
          return;
        drawCalls = this->fields.drawCalls;
        if ( drawCalls )
        {
          v52 = *((_QWORD *)drawCalls + 2);
          v53 = Method_System_Collections_Generic_List_UIDrawCall__Add__;
          ++*((_DWORD *)drawCalls + 7);
          if ( v52 )
          {
            v54 = *((int *)drawCalls + 6);
            if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)drawCalls,
                (Il2CppObject *)v11,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            }
            else
            {
              v55 = v52 + 8 * v54;
              *((_DWORD *)drawCalls + 6) = v54 + 1;
              *(_QWORD *)(v55 + 32) = v11;
              sub_1C32BC4((CGThumbnailListItem_o *)(v55 + 32), (int32_t)v11, v49, v50);
            }
            UIDrawCall__UpdateGeometry((UIDrawCall_o *)v11, v12, 0);
            v56 = p_mOnRender->klass;
            *((_QWORD *)v11 + 28) = p_mOnRender->klass;
            sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 224), (int32_t)v56, v57, v58);
            p_mOnRender->klass = 0;
            sub_1C32BC4(p_mOnRender, 0, v59, v60);
            return;
          }
        }
      }
    }
LABEL_9:
    sub_1C32E7C(drawCalls);
  }
}


bool UIPanel__FillDrawCall(UIPanel_o *this, UIDrawCall_o *dc, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIWidget__o *widgets; // x0
  int32_t v6; // w22
  int32_t v7; // w23
  struct UIDrawCall_OnRenderCallback_o **p_mOnRender; // x21
  UnityEngine_Object_o *Item; // x24
  UnityEngine_Object_o *monitor; // x25
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BetterList_Vector3__o *norms; // x4
  BetterList_Vector4__o *tans; // x5
  UIWidget_o *v15; // x0
  struct UIDrawCall_OnRenderCallback_o **p_monitor; // x0
  System_Delegate_o *v17; // x1
  System_Delegate_o *v18; // x0
  int v19; // w8
  UIDrawCall_OnRenderCallback_c *v20; // x1
  struct BetterList_Vector3__o *verts; // x8
  struct UIDrawCall_OnRenderCallback_o *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  bool result; // w0
  UIPanel_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_4C3BFA0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_OnRenderCallback_TypeInfo);
    byte_4C3BFA0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  widgets = (struct System_Collections_Generic_List_UIWidget__o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)dc,
                                                                    0,
                                                                    0);
  if ( ((unsigned __int8)widgets & 1) == 0 )
    return 0;
  if ( !dc || (dc->fields.isDirty = 0, (widgets = this->fields.widgets) == 0) )
LABEL_42:
    sub_1C32E7C(widgets);
  v6 = 0;
  v7 = 0;
  p_mOnRender = &this->fields.mOnRender;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v7 >= widgets->fields._size )
      {
        verts = dc->fields.verts;
        if ( verts )
        {
          if ( verts->fields.size )
          {
            UIDrawCall__UpdateGeometry(dc, v6, 0);
            v22 = *p_mOnRender;
            dc->fields.onRender = *p_mOnRender;
            sub_1C32BC4((CGThumbnailListItem_o *)&dc->fields.onRender, (int32_t)v22, v23, v24);
            *p_mOnRender = 0;
            sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mOnRender, 0, v25, v26);
            return 1;
          }
          return 0;
        }
        goto LABEL_42;
      }
      Item = (UnityEngine_Object_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)widgets,
                                       v7,
                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      widgets = (struct System_Collections_Generic_List_UIWidget__o *)UnityEngine_Object__op_Equality(Item, 0, 0);
      if ( ((unsigned __int8)widgets & 1) == 0 )
        break;
      widgets = this->fields.widgets;
      if ( widgets )
      {
        System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)widgets,
          v7,
          (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_UIWidget__RemoveAt__);
        widgets = this->fields.widgets;
        if ( widgets )
          continue;
      }
      goto LABEL_42;
    }
    if ( !Item )
      goto LABEL_42;
    monitor = (UnityEngine_Object_o *)Item[14].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(monitor, (UnityEngine_Object_o *)dc, 0) )
      goto LABEL_26;
    if ( UIWidget__get_isVisible((UIWidget_o *)Item, 0) && UIWidget__get_hasVertices((UIWidget_o *)Item, 0) )
      break;
    p_monitor = (struct UIDrawCall_OnRenderCallback_o **)&Item[14].monitor;
    LODWORD(v17) = 0;
    Item[14].monitor = 0;
LABEL_25:
    sub_1C32BC4((CGThumbnailListItem_o *)p_monitor, (int32_t)v17, v11, v12);
LABEL_26:
    widgets = this->fields.widgets;
    ++v7;
    if ( !widgets )
      goto LABEL_42;
  }
  if ( this->fields.generateNormals )
  {
    norms = dc->fields.norms;
    tans = dc->fields.tans;
    v15 = (UIWidget_o *)Item;
  }
  else
  {
    v15 = (UIWidget_o *)Item;
    norms = 0;
    tans = 0;
  }
  UIWidget__WriteToBuffers(v15, dc->fields.verts, dc->fields.uvs, dc->fields.cols, norms, tans, 0);
  v17 = (System_Delegate_o *)Item[8].monitor;
  ++v6;
  if ( !v17 )
    goto LABEL_26;
  if ( !*p_mOnRender )
  {
    *p_mOnRender = (struct UIDrawCall_OnRenderCallback_o *)v17;
    p_monitor = &this->fields.mOnRender;
    goto LABEL_25;
  }
  v18 = System_Delegate__Combine((System_Delegate_o *)*p_mOnRender, v17, 0);
  v19 = (int)v18;
  if ( !v18 )
  {
    *p_mOnRender = 0;
LABEL_37:
    p_monitor = &this->fields.mOnRender;
    LODWORD(v17) = v19;
    goto LABEL_25;
  }
  v20 = UIDrawCall_OnRenderCallback_TypeInfo;
  if ( (UIDrawCall_OnRenderCallback_c *)v18->klass == UIDrawCall_OnRenderCallback_TypeInfo )
  {
    *p_mOnRender = (struct UIDrawCall_OnRenderCallback_o *)v18;
    if ( (UIDrawCall_OnRenderCallback_c *)v18->klass == v20 )
      goto LABEL_37;
  }
  sub_1C3313C(v18);
  UIPanel__SortWidgets(v28, v29);
  return result;
}


UIPanel_o *UIPanel__Find(UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C3BFA9 & 1) == 0 )
  {
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BFA9 = 1;
  }
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
  return UIPanel__Find_49077024(trans, 0, -1, v2);
}


UIDrawCall_o *UIPanel__FindDrawCall(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  UIPanel_o *v4; // x20
  UnityEngine_Object_o *v5; // x23
  __int64 v6; // x0
  int32_t mDepth; // w26
  UnityEngine_Object_o *v8; // x22
  int32_t v9; // w24
  struct UIDrawCall_o *Item; // x21
  int v11; // w27
  int v12; // w8
  UnityEngine_Object_o *mMaterial; // x24
  UnityEngine_Object_o *mTexture; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  bool isVisible; // w8
  UIDrawCall_o *result; // x0
  bool hasVertices; // w8

  v4 = this;
  if ( (byte_4C3BFA4 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    this = (UIPanel_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFA4 = 1;
  }
  if ( !w )
    goto LABEL_31;
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *, const MethodInfo *))w->klass->vtable._24_get_material.methodPtr)(
                                 w,
                                 w->klass->vtable._24_get_material.method,
                                 method);
  v6 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))w->klass->vtable._26_get_mainTexture.methodPtr)(
         w,
         w->klass->vtable._26_get_mainTexture.method);
  mDepth = w->fields.mDepth;
  v8 = (UnityEngine_Object_o *)v6;
  v9 = 0;
  do
  {
    this = (UIPanel_o *)v4->fields.drawCalls;
    if ( !this )
      goto LABEL_31;
    if ( v9 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_29;
    Item = (struct UIDrawCall_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)this,
                                    v9,
                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( v9 )
    {
      this = (UIPanel_o *)v4->fields.drawCalls;
      if ( !this )
        goto LABEL_31;
      this = (UIPanel_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            v9 - 1,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
      if ( !this )
        goto LABEL_31;
      v11 = LODWORD(this->fields.rightAnchor) + 1;
    }
    else
    {
      v11 = 0x80000000;
    }
    this = (UIPanel_o *)v4->fields.drawCalls;
    if ( !this )
      goto LABEL_31;
    if ( ++v9 == LODWORD(this->fields.m_CancellationTokenSource) )
    {
      v12 = 0x7FFFFFFF;
    }
    else
    {
      this = (UIPanel_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            v9,
                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
      if ( !this )
        goto LABEL_31;
      v12 = HIDWORD(this->fields.leftAnchor) - 1;
    }
  }
  while ( v11 > mDepth || v12 < mDepth );
  if ( !Item )
LABEL_31:
    sub_1C32E7C(this);
  mMaterial = (UnityEngine_Object_o *)Item->fields.mMaterial;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(mMaterial, v5, 0) )
    goto LABEL_29;
  mTexture = (UnityEngine_Object_o *)Item->fields.mTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mTexture, v8, 0) )
  {
    isVisible = UIWidget__get_isVisible(w, 0);
    result = 0;
    if ( isVisible )
    {
      w->fields.drawCall = Item;
      sub_1C32BC4((CGThumbnailListItem_o *)&w->fields.drawCall, (int32_t)Item, v15, v16);
      hasVertices = UIWidget__get_hasVertices(w, 0);
      result = Item;
      if ( hasVertices )
      {
        Item->fields.isDirty = 1;
        return Item;
      }
    }
  }
  else
  {
LABEL_29:
    result = 0;
    v4->fields.mRebuild = 1;
  }
  return result;
}


void UIPanel__FindParent(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  UnityEngine_Object_o *parent; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UIPanel_o *v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4C3BF98 & 1) == 0 )
  {
    sub_1C32C20(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF98 = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_13;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(cachedTransform, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  v7 = 0;
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    if ( !parent )
      goto LABEL_13;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)NGUITools__FindInParents_object_(
                                                   gameObject,
                                                   (const MethodInfo_31676B4 *)Method_NGUITools_FindInParents_UIPanel___);
    v7 = (struct UIPanel_o *)cachedTransform;
  }
  if ( !this )
LABEL_13:
    sub_1C32E7C(cachedTransform);
  this->fields.mParentPanel = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mParentPanel, (int32_t)v7, v5, v6);
}


UIPanel_o *UIPanel__Find_49077024(
        UnityEngine_Transform_o *trans,
        bool createIfMissing,
        int32_t layer,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  _BOOL4 v8; // w8
  UIPanel_o *result; // x0

  if ( (byte_4C3BFAB & 1) == 0 )
  {
    sub_1C32C20(&Method_NGUITools_FindInParents_UIPanel____78144192);
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFAB = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v7 = NGUITools__FindInParents_object__51804172(
         trans,
         (const MethodInfo_316780C *)Method_NGUITools_FindInParents_UIPanel____78144192);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
  if ( v8 )
    result = (UIPanel_o *)v7;
  else
    result = 0;
  if ( !v8 && createIfMissing )
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    return NGUITools__CreateUI_49309912(trans, 0, layer, 0);
  }
  return result;
}


UIPanel_o *UIPanel__Find_49077288(UnityEngine_Transform_o *trans, bool createIfMissing, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C3BFAA & 1) == 0 )
  {
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BFAA = 1;
  }
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
  return UIPanel__Find_49077024(trans, createIfMissing, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_array *UIPanel__GetSides(
        UIPanel_o *this,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  float x; // s8
  float v6; // s10
  float z; // s12
  float y; // s11
  float v9; // s14
  float w; // s9
  UnityEngine_Transform_o *cachedTransform; // x0
  UIRect_c *v12; // x8
  UnityEngine_Transform_o *v13; // x20
  float v14; // s0
  float v15; // s8
  float v16; // s11
  float v17; // s10
  struct UnityEngine_Vector3_array *mSides; // x21
  float v19; // s9
  float v20; // s12
  float v21; // s10
  struct UnityEngine_Vector3_array *v22; // x21
  struct UnityEngine_Vector3_array *v23; // x21
  struct UnityEngine_Vector3_array *v24; // x21
  __int64 v25; // x20
  unsigned __int64 v26; // x21
  __int64 v27; // x22
  __int64 v28; // x24
  UIRect_c *v29; // x0
  UnityEngine_Vector3_array *Sides_49320172; // x20
  UnityEngine_Object_o *anchorCamera; // x20
  UnityEngine_Camera_o *mCam; // x20
  float cameraRayDistance; // s8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v36; // x8
  float v37; // v0.s[1]
  float *p_z; // x10
  float v39; // s3
  unsigned __int64 v40; // x8
  unsigned __int64 v41; // x21
  float *v42; // x22
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BF90 & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIRect_TypeInfo);
    byte_4C3BF90 = 1;
  }
  if ( this->fields.mClipping )
  {
    x = this->fields.mClipOffset.fields.x;
    v6 = this->fields.mClipRange.fields.x;
    z = this->fields.mClipRange.fields.z;
    y = this->fields.mClipOffset.fields.y;
    v9 = this->fields.mClipRange.fields.y;
    w = this->fields.mClipRange.fields.w;
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    v12 = UIRect_TypeInfo;
    v13 = cachedTransform;
    if ( !UIRect_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
      v12 = UIRect_TypeInfo;
    }
    if ( !v13 )
      goto LABEL_52;
    v14 = x + v6;
    v15 = (float)(y + v9) - (float)(w * 0.5);
    v16 = w + v15;
    v17 = v14 - (float)(z * 0.5);
    mSides = v12->static_fields->mSides;
    v19 = (float)(v15 + (float)(w + v15)) * 0.5;
    v43 = UnityEngine_Transform__TransformPoint_71250240(v13, v17, v19, 0.0, 0);
    if ( !mSides )
      goto LABEL_52;
    if ( LODWORD(mSides->max_length) )
    {
      mSides->m_Items[0] = v43;
      v20 = z + v17;
      v21 = (float)(v17 + v20) * 0.5;
      v22 = UIRect_TypeInfo->static_fields->mSides;
      v44 = UnityEngine_Transform__TransformPoint_71250240(v13, v21, v16, 0.0, 0);
      if ( !v22 )
        goto LABEL_52;
      if ( LODWORD(v22->max_length) > 1 )
      {
        v22->m_Items[1] = v44;
        v23 = UIRect_TypeInfo->static_fields->mSides;
        v45 = UnityEngine_Transform__TransformPoint_71250240(v13, v20, v19, 0.0, 0);
        if ( !v23 )
          goto LABEL_52;
        if ( LODWORD(v23->max_length) > 2 )
        {
          v23->m_Items[2] = v45;
          v24 = UIRect_TypeInfo->static_fields->mSides;
          v46 = UnityEngine_Transform__TransformPoint_71250240(v13, v21, v15, 0.0, 0);
          if ( !v24 )
            goto LABEL_52;
          if ( LODWORD(v24->max_length) > 3 )
          {
            v24->m_Items[3] = v46;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)relativeTo, 0, 0) )
            {
              v25 = 0;
              v26 = 0;
              while ( 1 )
              {
                cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
                if ( !UIRect_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
                  cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
                }
                v27 = *(_QWORD *)cachedTransform[7].fields.m_CachedPtr;
                if ( !v27 )
                  break;
                if ( v26 >= *(unsigned int *)(v27 + 24) )
                  goto LABEL_51;
                if ( !relativeTo )
                  break;
                v28 = v27 + v25;
                v47 = UnityEngine_Transform__InverseTransformPoint(
                        relativeTo,
                        *(UnityEngine_Vector3_o *)(v27 + v25 + 32),
                        0);
                if ( v26 >= *(unsigned int *)(v27 + 24) )
                  goto LABEL_51;
                ++v26;
                v25 += 12;
                *(UnityEngine_Vector3_o *)(v28 + 32) = v47;
                if ( v26 == 4 )
                  goto LABEL_26;
              }
LABEL_52:
              sub_1C32E7C(cachedTransform);
            }
LABEL_26:
            v29 = UIRect_TypeInfo;
            if ( !UIRect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
              v29 = UIRect_TypeInfo;
            }
            return v29->static_fields->mSides;
          }
        }
      }
    }
    goto LABEL_51;
  }
  anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(anchorCamera, 0, 0) && this->fields.anchorOffset )
  {
    mCam = this->fields.mCam;
    cameraRayDistance = UIRect__get_cameraRayDistance((UIRect_o *)this, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    Sides_49320172 = NGUITools__GetSides_49320172(mCam, cameraRayDistance, 0);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !cachedTransform )
      goto LABEL_52;
    position = UnityEngine_Transform__get_position(cachedTransform, 0);
    if ( !Sides_49320172 )
      goto LABEL_52;
    max_length_low = LODWORD(Sides_49320172->max_length);
    v36 = 0;
    v37 = position.fields.y;
    p_z = &Sides_49320172->m_Items[0].fields.z;
    do
    {
      if ( v36 >= max_length_low )
        goto LABEL_51;
      ++v36;
      v39 = position.fields.z + *p_z;
      *((float32x2_t *)p_z - 1) = vadd_f32(*(float32x2_t *)&position.fields.x, *(float32x2_t *)(p_z - 2));
      *p_z = v39;
      p_z += 3;
    }
    while ( v36 != 4 );
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)relativeTo,
                                                   0,
                                                   0);
    if ( ((unsigned __int8)cachedTransform & 1) == 0 )
      return Sides_49320172;
    LODWORD(v40) = Sides_49320172->max_length;
    v41 = 0;
    v42 = &Sides_49320172->m_Items[0].fields.z;
    while ( v41 < (unsigned int)v40 )
    {
      if ( !relativeTo )
        goto LABEL_52;
      v49 = UnityEngine_Transform__InverseTransformPoint(relativeTo, *(UnityEngine_Vector3_o *)(v42 - 2), 0);
      v40 = LODWORD(Sides_49320172->max_length);
      if ( v41 >= v40 )
        break;
      ++v41;
      *(UnityEngine_Vector3_o *)(v42 - 2) = v49;
      v42 += 3;
      if ( v41 == 4 )
        return Sides_49320172;
    }
LABEL_51:
    sub_1C32E84(cachedTransform);
  }
  return UIRect__GetSides((UIRect_o *)this, relativeTo, 0);
}


UnityEngine_Vector2_o UIPanel__GetViewSize(UIPanel_o *this, const MethodInfo *method)
{
  float z; // s0
  float w; // s1
  UnityEngine_Vector2_o screenSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C3BFAD & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    byte_4C3BFAD = 1;
  }
  if ( this->fields.mClipping )
  {
    z = this->fields.mClipRange.fields.z;
    w = this->fields.mClipRange.fields.w;
  }
  else
  {
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    screenSize = NGUITools__get_screenSize(0);
    w = screenSize.fields.y;
    z = screenSize.fields.x;
  }
  result.fields.y = w;
  result.fields.x = z;
  return result;
}


UnityEngine_Vector2_o UIPanel__GetWindowSize(UIPanel_o *this, const MethodInfo *method)
{
  UIRoot_o *root; // x19
  UnityEngine_Vector2_o screenSize; // kr00_8
  float x; // s8
  float y; // s9
  double v7; // d10
  __int64 v8; // x0
  double v9; // d0
  double v10; // d0
  double v11; // d1
  double v12; // d1
  int32_t v13; // w1
  float PixelSizeAdjustment_49486328; // s0
  float v15; // s0
  float v16; // s1
  double iptr; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C3BFAC & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFAC = 1;
  }
  root = UIRect__get_root((UIRect_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  screenSize = NGUITools__get_screenSize(0);
  x = screenSize.fields.x;
  y = screenSize.fields.y;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)root, 0, 0) )
  {
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v7 = screenSize.fields.y;
    v9 = modf(screenSize.fields.y, &iptr);
    if ( screenSize.fields.y >= 0.0 )
    {
      if ( v9 == 0.5 )
      {
        v10 = iptr;
        v11 = 1.0;
LABEL_17:
        v12 = v10 + v11;
        if ( ((__int64)v10 & 1) != 0 )
          v10 = v12;
        goto LABEL_22;
      }
      v10 = floor(v7 + 0.5);
    }
    else
    {
      if ( v9 == -0.5 )
      {
        v10 = iptr;
        v11 = -1.0;
        goto LABEL_17;
      }
      v10 = ceil(v7 + -0.5);
    }
LABEL_22:
    if ( !root )
      sub_1C32E7C(v8);
    if ( v10 == INFINITY )
      v13 = 0x80000000;
    else
      v13 = (int)v10;
    PixelSizeAdjustment_49486328 = UIRoot__GetPixelSizeAdjustment_49486328(root, v13, 0);
    x = screenSize.fields.x * PixelSizeAdjustment_49486328;
    y = screenSize.fields.y * PixelSizeAdjustment_49486328;
  }
  v15 = x;
  v16 = y;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}


void UIPanel__Invalidate(UIPanel_o *this, bool includeChildren, const MethodInfo *method)
{
  this->fields.mAlphaFrameID = -1;
  UIRect__Invalidate((UIRect_o *)this, includeChildren, 0);
}


void UIPanel__InvalidateClipping(UIPanel_o *this, const MethodInfo *method)
{
  float mCullTime; // s0
  float v4; // s0
  UIPanel_c *v5; // x0
  struct System_Collections_Generic_List_UIPanel__o *list; // x8
  int size; // w8
  int v8; // w24
  int32_t i; // w20
  UnityEngine_Object_o *Item; // x21
  UnityEngine_Object_o *klass; // x22
  const MethodInfo *v12; // x1

  if ( (byte_4C3BF8B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF8B = 1;
  }
  mCullTime = this->fields.mCullTime;
  this->fields.mResized = 1;
  this->fields.mMatrixFrame = -1;
  if ( mCullTime == 0.0 )
    v4 = 0.001;
  else
    v4 = RealTime__get_time(0) + 0.15;
  this->fields.mCullTime = v4;
  v5 = UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v5 = UIPanel_TypeInfo;
  }
  list = v5->static_fields->list;
  if ( !list )
    goto LABEL_25;
  size = list->fields._size;
  v8 = size - 1;
  if ( size >= 1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        v5 = UIPanel_TypeInfo;
      }
      v5 = (UIPanel_c *)v5->static_fields->list;
      if ( !v5 )
        break;
      Item = (UnityEngine_Object_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)v5,
                                       i,
                                       (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = (UIPanel_c *)UnityEngine_Object__op_Inequality(Item, (UnityEngine_Object_o *)this, 0);
      if ( ((unsigned __int8)v5 & 1) != 0 )
      {
        if ( !Item )
          break;
        klass = (UnityEngine_Object_o *)Item[16].klass;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(klass, (UnityEngine_Object_o *)this, 0) )
          UIPanel__InvalidateClipping((UIPanel_o *)Item, v12);
      }
      if ( v8 == i )
        return;
      v5 = UIPanel_TypeInfo;
    }
LABEL_25:
    sub_1C32E7C(v5);
  }
}


bool UIPanel__IsVisible(
        UIPanel_o *this,
        UnityEngine_Vector3_o a,
        UnityEngine_Vector3_o b,
        UnityEngine_Vector3_o c,
        UnityEngine_Vector3_o d,
        const MethodInfo *method)
{
  float x; // s9
  float y; // s13
  float v8; // s8
  float v9; // s10
  float v10; // s15
  float v12; // s10
  float v13; // s15
  float v14; // s13
  float v15; // s9
  float v16; // s11
  float v17; // s8
  UIPanel_c *v18; // x0
  float v19; // s14
  float v20; // s12
  struct System_Single_array *mTemp; // x8
  il2cpp_array_size_t max_length; // x9
  float v23; // s0
  __int64 v24; // x10
  float *v25; // x11
  float v26; // t1
  float v27; // s1
  float v28; // s1
  __int64 v29; // x10
  float *v30; // x11
  float v31; // t1
  float v32; // s2
  float v33; // s2
  __int64 v34; // x10
  float *v35; // x11
  float v36; // t1
  float v37; // s3
  float v38; // s3
  __int64 v39; // x9
  float *v40; // x8
  float v41; // t1
  float v42; // s4
  float z; // [xsp+0h] [xbp-70h]
  __int64 v45; // [xsp+80h] [xbp+10h]
  float v46; // [xsp+88h] [xbp+18h]
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  x = a.fields.x;
  y = b.fields.y;
  z = b.fields.z;
  v8 = b.fields.x;
  v9 = a.fields.z;
  v10 = a.fields.y;
  if ( (byte_4C3BF93 & 1) == 0 )
  {
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF93 = 1;
  }
  UIPanel__UpdateTransformMatrix(this, *(const MethodInfo **)&d.fields.x);
  v47.fields.x = x;
  v47.fields.y = v10;
  v47.fields.z = v9;
  v48 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v47, 0);
  v48.fields.z = z;
  v12 = v48.fields.x;
  v13 = v48.fields.y;
  v48.fields.x = v8;
  v48.fields.y = y;
  v49 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v48, 0);
  v14 = v49.fields.x;
  v15 = v49.fields.y;
  v50 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, c, 0);
  v16 = v50.fields.x;
  v17 = v50.fields.y;
  *(_QWORD *)&v50.fields.x = v45;
  v50.fields.z = v46;
  v51 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v50, 0);
  v18 = UIPanel_TypeInfo;
  v19 = v51.fields.x;
  v20 = v51.fields.y;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v18 = UIPanel_TypeInfo;
  }
  mTemp = v18->static_fields->mTemp;
  if ( !mTemp )
    sub_1C32E7C(v18);
  max_length = mTemp->max_length;
  if ( !(_DWORD)max_length
    || (mTemp->m_Items[0] = v12, (_DWORD)max_length == 1)
    || (mTemp->m_Items[1] = v14, (unsigned int)max_length <= 2)
    || (mTemp->m_Items[2] = v16, (_DWORD)max_length == 3) )
  {
    sub_1C32E84(v18);
  }
  mTemp->m_Items[3] = v19;
  if ( (int)max_length < 2 )
  {
    mTemp->m_Items[0] = v13;
    mTemp->m_Items[1] = v15;
    mTemp->m_Items[2] = v17;
    mTemp->m_Items[3] = v20;
    v28 = v12;
    v38 = v13;
  }
  else
  {
    if ( v14 >= v12 )
      v23 = v12;
    else
      v23 = v14;
    v24 = (unsigned int)max_length - 2LL;
    v25 = &mTemp->m_Items[2];
    do
    {
      v26 = *v25++;
      v27 = v26;
      if ( v26 < v23 )
        v23 = v27;
      --v24;
    }
    while ( v24 );
    if ( v14 <= v12 )
      v28 = v12;
    else
      v28 = v14;
    v29 = (unsigned int)max_length - 2LL;
    v30 = &mTemp->m_Items[2];
    do
    {
      v31 = *v30++;
      v32 = v31;
      if ( v31 > v28 )
        v28 = v32;
      --v29;
    }
    while ( v29 );
    if ( v15 >= v13 )
      v33 = v13;
    else
      v33 = v15;
    v34 = (unsigned int)max_length - 2LL;
    mTemp->m_Items[0] = v13;
    mTemp->m_Items[1] = v15;
    mTemp->m_Items[2] = v17;
    mTemp->m_Items[3] = v20;
    v35 = &mTemp->m_Items[2];
    do
    {
      v36 = *v35++;
      v37 = v36;
      if ( v36 < v33 )
        v33 = v37;
      --v34;
    }
    while ( v34 );
    if ( v15 <= v13 )
      v38 = v13;
    else
      v38 = v15;
    v39 = (unsigned int)max_length - 2LL;
    if ( v39 )
    {
      v40 = &mTemp->m_Items[2];
      do
      {
        v41 = *v40++;
        v42 = v41;
        if ( v41 > v38 )
          v38 = v42;
        --v39;
      }
      while ( v39 );
    }
    v13 = v33;
    v12 = v23;
  }
  return v28 >= this->fields.mMin.fields.x
      && v38 >= this->fields.mMin.fields.y
      && v12 <= this->fields.mMax.fields.x
      && v13 <= this->fields.mMax.fields.y;
}


bool UIPanel__IsVisible_49030604(UIPanel_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  if ( this->fields.mAlpha < 0.001 )
    return 0;
  if ( (this->fields.mClipping | 4) == 4 )
    return 1;
  x = worldPos.fields.x;
  UIPanel__UpdateTransformMatrix(this, method);
  v8.fields.x = x;
  v8.fields.y = y;
  v8.fields.z = z;
  v9 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v8, 0);
  return v9.fields.x >= this->fields.mMin.fields.x
      && v9.fields.y >= this->fields.mMin.fields.y
      && v9.fields.x <= this->fields.mMax.fields.x
      && v9.fields.y <= this->fields.mMax.fields.y;
}


bool UIPanel__IsVisible_49065356(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  UnityEngine_Vector3_o v7; // x1
  const MethodInfo *v8; // x3
  char v9; // w22

  if ( (byte_4C3BF94 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF94 = 1;
  }
  v5 = 0;
  while ( 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, 0, 0);
    v9 = v6;
    if ( (v6 & 1) == 0 )
      return (v9 & 1) == 0;
    if ( !this )
      goto LABEL_20;
    if ( (this->fields.mClipping | 4) != 4 )
    {
      if ( v5 )
        goto LABEL_17;
      if ( !w )
        goto LABEL_20;
LABEL_16:
      v6 = ((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))w->klass->vtable._11_get_worldCorners.methodPtr)(
             w,
             w->klass->vtable._11_get_worldCorners.method);
      v5 = v6;
      if ( !v6 )
LABEL_20:
        sub_1C32E7C(v6);
      goto LABEL_17;
    }
    if ( !w )
      goto LABEL_20;
    if ( !w->fields.hideIfOffScreen )
      goto LABEL_11;
    if ( !v5 )
      goto LABEL_16;
LABEL_17:
    if ( *(_DWORD *)(v5 + 24) < 4u )
      sub_1C32E84(v6);
    if ( !UIPanel__IsVisible(
            this,
            *(UnityEngine_Vector3_o *)(v5 + 32),
            *(UnityEngine_Vector3_o *)(v5 + 44),
            *(UnityEngine_Vector3_o *)(v5 + 56),
            v7,
            v8) )
      return (v9 & 1) == 0;
LABEL_11:
    this = this->fields.mParentPanel;
  }
}


void UIPanel__LateUpdate(UIPanel_o *this, const MethodInfo *method)
{
  UIPanel_c *v2; // x0
  int32_t mUpdateFrame; // w19
  UIPanel_c *v4; // x0
  __int64 frameCount; // x0
  struct UIPanel_StaticFields *static_fields; // x9
  System_Collections_Generic_HashSet_T__o *updateAgainPanels; // x8
  struct System_Collections_Generic_List_UIPanel__o *list; // x8
  int32_t v9; // w19
  int v10; // w23
  __int64 *v11; // x8
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_HashSet_UIPanel__o *v13; // x8
  __int64 v14; // x19
  const MethodInfo *v15; // x1
  int v16; // w8
  unsigned int v17; // w23
  UIPanel_c *v18; // x0
  __int64 v19; // x8
  int32_t v20; // w19
  int v21; // w24
  int v22; // w23
  __int64 v23; // x8
  const MethodInfo *v24; // x1
  int v25; // w25
  __int64 v26; // x20
  __int64 v27; // x8
  int v28; // w8
  int v29; // w8
  __int64 v30; // x8
  int v31; // w8

  if ( (byte_4C3BF9C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIPanel__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIPanel__CopyTo__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_UIPanel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_1C32C20(&UIPanel___TypeInfo);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF9C = 1;
  }
  v2 = UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v2 = UIPanel_TypeInfo;
  }
  mUpdateFrame = v2->static_fields->mUpdateFrame;
  if ( mUpdateFrame != UnityEngine_Time__get_frameCount(0) )
  {
    v4 = UIPanel_TypeInfo;
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
      v4 = UIPanel_TypeInfo;
    }
    v4->static_fields->mUpdating = 1;
    frameCount = UnityEngine_Time__get_frameCount(0);
    static_fields = UIPanel_TypeInfo->static_fields;
    updateAgainPanels = (System_Collections_Generic_HashSet_T__o *)static_fields->updateAgainPanels;
    static_fields->mUpdateFrame = frameCount;
    if ( !updateAgainPanels )
      goto LABEL_55;
    System_Collections_Generic_HashSet_object___Clear(
      updateAgainPanels,
      (const MethodInfo_364FEBC *)Method_System_Collections_Generic_HashSet_UIPanel__Clear__);
    frameCount = (__int64)UIPanel_TypeInfo;
    list = UIPanel_TypeInfo->static_fields->list;
    if ( !list )
      goto LABEL_55;
    v9 = 0;
    v10 = list->fields._size & ~(list->fields._size >> 31);
    while ( 1 )
    {
      if ( !*(_DWORD *)(frameCount + 224) )
      {
        j_il2cpp_runtime_class_init_0(frameCount);
        frameCount = (__int64)UIPanel_TypeInfo;
      }
      v11 = *(__int64 **)(frameCount + 184);
      if ( v10 == v9 )
        break;
      frameCount = *v11;
      if ( !*v11 )
        goto LABEL_55;
      frameCount = (__int64)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)frameCount,
                              v9,
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
      if ( !frameCount )
        goto LABEL_55;
      UIPanel__UpdateSelf((UIPanel_o *)frameCount, v12);
      frameCount = (__int64)UIPanel_TypeInfo;
      ++v9;
    }
    v13 = (struct System_Collections_Generic_HashSet_UIPanel__o *)v11[1];
    if ( !v13 )
LABEL_55:
      sub_1C32E7C(frameCount);
    if ( v13->fields._count >= 1 )
    {
      if ( !*(_DWORD *)(frameCount + 224) )
      {
        j_il2cpp_runtime_class_init_0(frameCount);
        v13 = UIPanel_TypeInfo->static_fields->updateAgainPanels;
        if ( !v13 )
          goto LABEL_55;
      }
      frameCount = sub_1C32CC8(UIPanel___TypeInfo, (unsigned int)v13->fields._count);
      if ( !UIPanel_TypeInfo->static_fields->updateAgainPanels )
        goto LABEL_55;
      v14 = frameCount;
      System_Collections_Generic_HashSet_object___CopyTo_56954180(
        (System_Collections_Generic_HashSet_T__o *)UIPanel_TypeInfo->static_fields->updateAgainPanels,
        (System_Object_array *)frameCount,
        (const MethodInfo_3650D44 *)Method_System_Collections_Generic_HashSet_UIPanel__CopyTo__);
      if ( !v14 )
        goto LABEL_55;
      v16 = *(_DWORD *)(v14 + 24);
      if ( v16 >= 1 )
      {
        v17 = 0;
        do
        {
          if ( v17 >= v16 )
            sub_1C32E84(frameCount);
          frameCount = *(_QWORD *)(v14 + 8LL * (int)v17 + 32);
          if ( !frameCount )
            goto LABEL_55;
          UIPanel__UpdateSelf((UIPanel_o *)frameCount, v15);
          v16 = *(_DWORD *)(v14 + 24);
        }
        while ( (int)++v17 < v16 );
      }
      v18 = UIPanel_TypeInfo;
      if ( !UIPanel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
        v18 = UIPanel_TypeInfo;
      }
      frameCount = (__int64)v18->static_fields->updateAgainPanels;
      if ( !frameCount )
        goto LABEL_55;
      System_Collections_Generic_HashSet_object___Clear(
        (System_Collections_Generic_HashSet_T__o *)frameCount,
        (const MethodInfo_364FEBC *)Method_System_Collections_Generic_HashSet_UIPanel__Clear__);
      frameCount = (__int64)UIPanel_TypeInfo;
    }
    if ( !*(_DWORD *)(frameCount + 224) )
    {
      j_il2cpp_runtime_class_init_0(frameCount);
      frameCount = (__int64)UIPanel_TypeInfo;
    }
    v19 = **(_QWORD **)(frameCount + 184);
    if ( !v19 )
      goto LABEL_55;
    v20 = 0;
    v21 = 3000;
    v22 = *(_DWORD *)(v19 + 24) & ~(*(int *)(v19 + 24) >> 31);
    while ( 1 )
    {
      if ( !*(_DWORD *)(frameCount + 224) )
      {
        j_il2cpp_runtime_class_init_0(frameCount);
        frameCount = (__int64)UIPanel_TypeInfo;
      }
      v23 = *(_QWORD *)(frameCount + 184);
      if ( v22 == v20 )
        break;
      frameCount = *(_QWORD *)v23;
      if ( !*(_QWORD *)v23 )
        goto LABEL_55;
      frameCount = (__int64)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)frameCount,
                              v20,
                              (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
      if ( !frameCount )
        goto LABEL_55;
      v25 = *(_DWORD *)(frameCount + 168);
      v26 = frameCount;
      if ( v25 )
      {
        UIPanel__UpdateDrawCalls((UIPanel_o *)frameCount, v24);
        v27 = *(_QWORD *)(v26 + 184);
        if ( !v27 )
          goto LABEL_55;
        v28 = *(_DWORD *)(v27 + 24);
        if ( v25 == 1 )
        {
          if ( v28 )
          {
            v29 = *(_DWORD *)(v26 + 172) + v28;
            if ( v21 <= v29 )
              v21 = v29;
          }
        }
        else if ( v28 )
        {
          v31 = *(_DWORD *)(v26 + 172);
          if ( v21 <= v31 + 1 )
            v21 = v31 + 1;
        }
      }
      else
      {
        *(_DWORD *)(frameCount + 172) = v21;
        UIPanel__UpdateDrawCalls((UIPanel_o *)frameCount, v24);
        v30 = *(_QWORD *)(v26 + 184);
        if ( !v30 )
          goto LABEL_55;
        v21 += *(_DWORD *)(v30 + 24);
      }
      frameCount = (__int64)UIPanel_TypeInfo;
      ++v20;
    }
    *(_BYTE *)(v23 + 36) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPanel__OnAnchor(UIPanel_o *this, const MethodInfo *method)
{
  void *cachedTransform; // x0
  UnityEngine_Transform_o *v4; // x21
  UnityEngine_Transform_o *parent; // x20
  const MethodInfo *v6; // x1
  UnityEngine_Vector2_o ViewSize; // kr00_8
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  struct UIRect_AnchorPoint_o *bottomAnchor; // x9
  UnityEngine_Object_o *target; // x21
  UnityEngine_Object_o *v11; // x22
  float x; // s9
  float y; // s8
  struct UIRect_AnchorPoint_o *v14; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  UnityEngine_Object_o *v16; // x21
  UnityEngine_Object_o *v17; // x22
  struct UIRect_AnchorPoint_o *v18; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x9
  UnityEngine_Object_o *v20; // x21
  UnityEngine_Object_o *v21; // x22
  float *v22; // x21
  struct UIRect_AnchorPoint_o *v23; // x8
  float v24; // s0
  struct UIRect_AnchorPoint_o *v25; // x8
  struct UIRect_AnchorPoint_o *v26; // x9
  float v27; // s10
  int absolute; // s13
  float v29; // s0
  struct UIRect_AnchorPoint_o *v30; // x8
  struct UIRect_AnchorPoint_o *v31; // x9
  float v32; // s11
  int v33; // s14
  float v34; // s0
  struct UIRect_AnchorPoint_o *v35; // x8
  struct UIRect_AnchorPoint_o *v36; // x9
  float v37; // s12
  int v38; // s15
  const MethodInfo *v39; // x1
  float v40; // s0
  struct UIRect_AnchorPoint_o *v41; // x8
  float v42; // s13
  float v43; // s12
  float v44; // s1
  float v45; // s11
  struct UIRect_AnchorPoint_o *v46; // x8
  UnityEngine_Object_o *v47; // x21
  struct UIRect_AnchorPoint_o *v48; // x8
  float v49; // s0
  float v50; // s1
  struct UIRect_AnchorPoint_o *v51; // x8
  struct UIRect_AnchorPoint_o *v52; // x8
  UnityEngine_Object_o *v53; // x21
  struct UIRect_AnchorPoint_o *v54; // x8
  float v55; // s0
  struct UIRect_AnchorPoint_o *v56; // x8
  struct UIRect_AnchorPoint_o *v57; // x8
  UnityEngine_Object_o *v58; // x21
  struct UIRect_AnchorPoint_o *v59; // x8
  float v60; // s0
  struct UIRect_AnchorPoint_o *v61; // x8
  float v62; // s1
  struct UIRect_AnchorPoint_o *v63; // x8
  UnityEngine_Object_o *v64; // x21
  struct UIRect_AnchorPoint_o *v65; // x8
  struct UIRect_AnchorPoint_o *v66; // x8
  float v67; // s0
  float v68; // s0
  float v69; // s1 OVERLAPPED
  struct UIRect_AnchorPoint_o *v70; // x8
  struct UIRect_AnchorPoint_o *v71; // x8
  float v72; // s1
  float v73; // s3
  float v74; // s4
  float v75; // s2
  float v76; // s16
  float v77; // s7
  float v78; // s2
  float v79; // s0 OVERLAPPED
  float v80; // s5
  float v81; // s1
  float v82; // s2
  float v83; // s1
  float v84; // s3
  struct UIRect_AnchorPoint_o *v85; // x9
  struct UIRect_AnchorPoint_o *v86; // x10
  struct UIRect_AnchorPoint_o *v87; // x8
  struct UIRect_AnchorPoint_o *v88; // x11
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPos; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BF9B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF9B = 1;
  }
  if ( this->fields.mClipping )
  {
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !cachedTransform )
      goto LABEL_103;
    v4 = (UnityEngine_Transform_o *)cachedTransform;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)cachedTransform, 0);
    ViewSize = UIPanel__GetViewSize(this, v6);
    localPosition = UnityEngine_Transform__get_localPosition(v4, 0);
    leftAnchor = this->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_103;
    bottomAnchor = this->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_103;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    v11 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (void *)UnityEngine_Object__op_Equality(target, v11, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      v14 = this->fields.leftAnchor;
      if ( !v14 )
        goto LABEL_103;
      rightAnchor = this->fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_103;
      v16 = (UnityEngine_Object_o *)v14->fields.target;
      v17 = (UnityEngine_Object_o *)rightAnchor->fields.target;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      cachedTransform = (void *)UnityEngine_Object__op_Equality(v16, v17, 0);
      if ( ((unsigned __int8)cachedTransform & 1) != 0 )
      {
        v18 = this->fields.leftAnchor;
        if ( !v18 )
          goto LABEL_103;
        topAnchor = this->fields.topAnchor;
        if ( !topAnchor )
          goto LABEL_103;
        v20 = (UnityEngine_Object_o *)v18->fields.target;
        v21 = (UnityEngine_Object_o *)topAnchor->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        cachedTransform = (void *)UnityEngine_Object__op_Equality(v20, v21, 0);
        if ( ((unsigned __int8)cachedTransform & 1) != 0 )
        {
          cachedTransform = this->fields.leftAnchor;
          if ( !cachedTransform )
            goto LABEL_103;
          cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, 0);
          if ( !cachedTransform )
          {
            LocalPos = UIRect__GetLocalPos((UIRect_o *)this, this->fields.leftAnchor, parent, 0);
            v85 = this->fields.leftAnchor;
            if ( v85 )
            {
              v86 = this->fields.bottomAnchor;
              if ( v86 )
              {
                v87 = this->fields.rightAnchor;
                if ( v87 )
                {
                  v88 = this->fields.topAnchor;
                  if ( v88 )
                  {
                    v42 = LocalPos.fields.x + (float)v85->fields.absolute;
                    v43 = LocalPos.fields.y + (float)v86->fields.absolute;
                    v45 = LocalPos.fields.x + (float)v87->fields.absolute;
                    v67 = LocalPos.fields.y + (float)v88->fields.absolute;
                    goto LABEL_91;
                  }
                }
              }
            }
            goto LABEL_103;
          }
          v22 = (float *)cachedTransform;
          if ( *((_DWORD *)cachedTransform + 6) > 2u )
          {
            v23 = this->fields.leftAnchor;
            if ( !v23 )
              goto LABEL_103;
            v24 = NGUIMath__Lerp(
                    *((float *)cachedTransform + 8),
                    *((float *)cachedTransform + 14),
                    v23->fields.relative,
                    0);
            v25 = this->fields.leftAnchor;
            if ( !v25 )
              goto LABEL_103;
            if ( *((_DWORD *)v22 + 6) > 2u )
            {
              v26 = this->fields.rightAnchor;
              if ( !v26 )
                goto LABEL_103;
              v27 = v24;
              absolute = v25->fields.absolute;
              v29 = NGUIMath__Lerp(v22[8], v22[14], v26->fields.relative, 0);
              v30 = this->fields.rightAnchor;
              if ( !v30 )
                goto LABEL_103;
              if ( *((_DWORD *)v22 + 6) > 3u )
              {
                v31 = this->fields.bottomAnchor;
                if ( !v31 )
                  goto LABEL_103;
                v32 = v29;
                v33 = v30->fields.absolute;
                v34 = NGUIMath__Lerp(v22[18], v22[12], v31->fields.relative, 0);
                v35 = this->fields.bottomAnchor;
                if ( !v35 )
                  goto LABEL_103;
                if ( *((_DWORD *)v22 + 6) > 3u )
                {
                  v36 = this->fields.topAnchor;
                  if ( v36 )
                  {
                    v37 = v34;
                    v38 = v35->fields.absolute;
                    v40 = NGUIMath__Lerp(v22[18], v22[12], v36->fields.relative, 0);
                    v41 = this->fields.topAnchor;
                    if ( v41 )
                    {
                      v42 = v27 + (float)absolute;
                      v43 = v37 + (float)v38;
                      v44 = (float)v41->fields.absolute;
                      v45 = v32 + (float)v33;
LABEL_84:
                      v67 = v40 + v44;
LABEL_91:
                      v72 = x + this->fields.mClipOffset.fields.x;
                      v73 = fmaxf(this->fields.mClipSoftness.fields.x, 2.0);
                      v74 = fmaxf(this->fields.mClipSoftness.fields.y, 2.0);
                      v75 = y + this->fields.mClipOffset.fields.y;
                      v76 = (float)(v45 - v72) - (float)(v42 - v72);
                      v77 = v43 - v75;
                      v78 = v67 - v75;
                      v79 = (float)(v42 - v72) + (float)(v76 * 0.5);
                      v80 = v78 - v77;
                      v81 = (float)(v78 - v77) * 0.5;
                      if ( v76 >= v73 )
                        v82 = v76;
                      else
                        v82 = v73;
                      v83 = v77 + v81;
                      if ( v80 >= v74 )
                        v84 = v80;
                      else
                        v84 = v74;
                      UIPanel__set_baseClipRegion(this, *(UnityEngine_Vector4_o *)&v79, v39);
                      return;
                    }
                  }
                  goto LABEL_103;
                }
              }
            }
          }
          goto LABEL_104;
        }
      }
    }
    v46 = this->fields.leftAnchor;
    if ( !v46 )
      goto LABEL_103;
    v47 = (UnityEngine_Object_o *)v46->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (void *)UnityEngine_Object__op_Implicit(v47, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = this->fields.leftAnchor;
      if ( !cachedTransform )
        goto LABEL_103;
      cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, 0);
      if ( cachedTransform )
      {
        if ( *((_DWORD *)cachedTransform + 6) <= 2u )
          goto LABEL_104;
        v48 = this->fields.leftAnchor;
        if ( !v48 )
          goto LABEL_103;
        v49 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v48->fields.relative, 0);
      }
      else
      {
        LODWORD(v49) = (unsigned int)UIRect__GetLocalPos((UIRect_o *)this, this->fields.leftAnchor, parent, 0);
      }
      v51 = this->fields.leftAnchor;
      if ( !v51 )
        goto LABEL_103;
      v50 = (float)v51->fields.absolute;
    }
    else
    {
      v49 = this->fields.mClipRange.fields.x;
      v50 = ViewSize.fields.x * -0.5;
    }
    v52 = this->fields.rightAnchor;
    v42 = v49 + v50;
    if ( !v52 )
      goto LABEL_103;
    v53 = (UnityEngine_Object_o *)v52->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (void *)UnityEngine_Object__op_Implicit(v53, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = this->fields.rightAnchor;
      if ( !cachedTransform )
        goto LABEL_103;
      cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, 0);
      if ( cachedTransform )
      {
        if ( *((_DWORD *)cachedTransform + 6) <= 2u )
          goto LABEL_104;
        v54 = this->fields.rightAnchor;
        if ( !v54 )
          goto LABEL_103;
        v55 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v54->fields.relative, 0);
      }
      else
      {
        LODWORD(v55) = (unsigned int)UIRect__GetLocalPos((UIRect_o *)this, this->fields.rightAnchor, parent, 0);
      }
      v56 = this->fields.rightAnchor;
      if ( !v56 )
        goto LABEL_103;
      v45 = v55 + (float)v56->fields.absolute;
    }
    else
    {
      v45 = (float)(ViewSize.fields.x * 0.5) + this->fields.mClipRange.fields.x;
    }
    v57 = this->fields.bottomAnchor;
    if ( !v57 )
      goto LABEL_103;
    v58 = (UnityEngine_Object_o *)v57->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (void *)UnityEngine_Object__op_Implicit(v58, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = this->fields.bottomAnchor;
      if ( !cachedTransform )
        goto LABEL_103;
      cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, 0);
      if ( !cachedTransform )
      {
        v90 = UIRect__GetLocalPos((UIRect_o *)this, this->fields.bottomAnchor, parent, 0);
        v70 = this->fields.bottomAnchor;
        if ( !v70 )
          goto LABEL_103;
        v43 = v90.fields.y + (float)v70->fields.absolute;
LABEL_74:
        v63 = this->fields.topAnchor;
        if ( !v63 )
          goto LABEL_103;
        v64 = (UnityEngine_Object_o *)v63->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Implicit(v64, 0) )
        {
          cachedTransform = this->fields.topAnchor;
          if ( !cachedTransform )
            goto LABEL_103;
          cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, 0);
          if ( cachedTransform )
          {
            if ( *((_DWORD *)cachedTransform + 6) > 3u )
            {
              v65 = this->fields.topAnchor;
              if ( v65 )
              {
                v40 = NGUIMath__Lerp(
                        *((float *)cachedTransform + 18),
                        *((float *)cachedTransform + 12),
                        v65->fields.relative,
                        0);
                v66 = this->fields.topAnchor;
                if ( v66 )
                {
                  v44 = (float)v66->fields.absolute;
                  goto LABEL_84;
                }
              }
LABEL_103:
              sub_1C32E7C(cachedTransform);
            }
LABEL_104:
            sub_1C32E84(cachedTransform);
          }
          *(UnityEngine_Vector3_o *)(&v69 - 1) = UIRect__GetLocalPos(
                                                   (UIRect_o *)this,
                                                   this->fields.topAnchor,
                                                   parent,
                                                   0);
          v71 = this->fields.topAnchor;
          if ( !v71 )
            goto LABEL_103;
          v68 = (float)v71->fields.absolute;
        }
        else
        {
          v68 = this->fields.mClipRange.fields.y;
          v69 = ViewSize.fields.y * 0.5;
        }
        v67 = v69 + v68;
        goto LABEL_91;
      }
      if ( *((_DWORD *)cachedTransform + 6) <= 3u )
        goto LABEL_104;
      v59 = this->fields.bottomAnchor;
      if ( !v59 )
        goto LABEL_103;
      v60 = NGUIMath__Lerp(*((float *)cachedTransform + 18), *((float *)cachedTransform + 12), v59->fields.relative, 0);
      v61 = this->fields.bottomAnchor;
      if ( !v61 )
        goto LABEL_103;
      v62 = (float)v61->fields.absolute;
    }
    else
    {
      v60 = this->fields.mClipRange.fields.y;
      v62 = ViewSize.fields.y * -0.5;
    }
    v43 = v60 + v62;
    goto LABEL_74;
  }
}


void UIPanel__OnDisable(UIPanel_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *drawCalls; // x0
  int32_t v4; // w20
  int v5; // w27
  Il2CppObject *Item; // x21
  int32_t size; // w2
  int v8; // w8
  UIPanel_c *v9; // x0
  struct System_Collections_Generic_List_UIPanel__o *list; // x8
  UIPanel_c *v11; // x0

  if ( (byte_4C3BF9A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__Remove__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF9A = 1;
  }
  drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
  if ( !drawCalls )
    goto LABEL_13;
  v4 = 0;
  v5 = drawCalls->fields._size & ~(drawCalls->fields._size >> 31);
  while ( v5 != v4 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             drawCalls,
             v4,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
    {
      if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
      UIDrawCall__Destroy((UIDrawCall_o *)Item, 0);
    }
    drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
    ++v4;
    if ( !drawCalls )
      goto LABEL_13;
  }
  size = drawCalls->fields._size;
  v8 = drawCalls->fields._version + 1;
  drawCalls->fields._size = 0;
  drawCalls->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)drawCalls->fields._items, 0, size, 0);
  v9 = UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v9 = UIPanel_TypeInfo;
  }
  drawCalls = (System_Collections_Generic_List_object__o *)v9->static_fields->list;
  if ( !drawCalls
    || (drawCalls = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Remove(
                                                                   drawCalls,
                                                                   (Il2CppObject *)this,
                                                                   (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_UIPanel__Remove__),
        *(_QWORD *)&this->fields.mMatrixFrame = -1,
        (list = UIPanel_TypeInfo->static_fields->list) == 0) )
  {
LABEL_13:
    sub_1C32E7C(drawCalls);
  }
  if ( !list->fields._size )
  {
    if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
    UIDrawCall__ReleaseAll(0);
    v11 = UIPanel_TypeInfo;
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
      v11 = UIPanel_TypeInfo;
    }
    v11->static_fields->mUpdateFrame = -1;
  }
  UIRect__OnDisable((UIRect_o *)this, 0);
}


void UIPanel__OnEnable(UIPanel_o *this, const MethodInfo *method)
{
  UIPanel_c *klass; // x9

  klass = this->klass;
  this->fields.mRebuild = 1;
  *(_QWORD *)&this->fields.mMatrixFrame = -1;
  ((void (__fastcall *)(UIPanel_o *, const MethodInfo *))klass->vtable._20_OnStart.methodPtr)(
    this,
    klass->vtable._20_OnStart.method);
  UIRect__OnEnable((UIRect_o *)this, 0);
  this->fields.mMatrixFrame = -1;
}


void UIPanel__OnInit(UIPanel_o *this, const MethodInfo *method)
{
  UIPanel_c *v3; // x0
  System_Collections_Generic_List_object__o *list; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *Component_object; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *mParentPanel; // x20
  UnityEngine_Object_o *anchorCamera; // x20
  bool v11; // w0
  Il2CppObject *v12; // x20
  UnityEngine_Rigidbody_o *v13; // x20
  UIPanel_c *v14; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  System_Collections_Generic_List_object__o *v19; // x19
  System_Comparison_T__o *v20; // x20

  if ( (byte_4C3BF99 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_UIPanel__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UICamera___);
    sub_1C32C20(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__Sort__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_UIPanel_CompareFunc__);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF99 = 1;
  }
  v3 = UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v3 = UIPanel_TypeInfo;
  }
  list = (System_Collections_Generic_List_object__o *)v3->static_fields->list;
  if ( !list )
    goto LABEL_35;
  if ( System_Collections_Generic_List_object___Contains(
         list,
         (Il2CppObject *)this,
         (const MethodInfo_3798B4C *)Method_System_Collections_Generic_List_UIPanel__Contains__) )
  {
    return;
  }
  UIRect__OnInit((UIRect_o *)this, 0);
  UIPanel__FindParent(this, v5);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    mParentPanel = (UnityEngine_Object_o *)this->fields.mParentPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(mParentPanel, 0, 0) )
    {
      anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Inequality(anchorCamera, 0, 0);
      v12 = 0;
      if ( v11 )
      {
        list = (System_Collections_Generic_List_object__o *)this->fields.mCam;
        if ( !list )
          goto LABEL_35;
        v12 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)list,
                (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UICamera___);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      list = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v12,
                                                            0,
                                                            0);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_35;
        if ( HIDWORD(v12[2].klass) <= 1 )
        {
          list = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
          if ( !list )
            goto LABEL_35;
          list = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)list,
                                                                (const MethodInfo_3134888 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
          if ( !list )
            goto LABEL_35;
          v13 = (UnityEngine_Rigidbody_o *)list;
          UnityEngine_Rigidbody__set_isKinematic((UnityEngine_Rigidbody_o *)list, 1, 0);
          UnityEngine_Rigidbody__set_useGravity(v13, 0, 0);
        }
      }
    }
  }
  this->fields.mRebuild = 1;
  *(_QWORD *)&this->fields.mMatrixFrame = -1;
  v14 = UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v14 = UIPanel_TypeInfo;
  }
  list = (System_Collections_Generic_List_object__o *)v14->static_fields->list;
  if ( !list )
    goto LABEL_35;
  items = list->fields._items;
  v16 = Method_System_Collections_Generic_List_UIPanel__Add__;
  ++list->fields._version;
  if ( !items )
    goto LABEL_35;
  size = list->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v18[4] = (Il2CppClass *)this;
    sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)this, v7, v8);
  }
  v19 = (System_Collections_Generic_List_object__o *)UIPanel_TypeInfo->static_fields->list;
  v20 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_UIPanel__TypeInfo);
  System_Comparison_object____ctor(v20, 0, Method_UIPanel_CompareFunc__, 0);
  if ( !v19 )
LABEL_35:
    sub_1C32E7C(list);
  System_Collections_Generic_List_object___Sort_58303104(
    v19,
    v20,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_UIPanel__Sort__);
}


void UIPanel__OnStart(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mGo; // x0

  mGo = this->fields.mGo;
  if ( !mGo )
    sub_1C32E7C(0);
  this->fields.mLayer = UnityEngine_GameObject__get_layer(mGo, 0);
}


void UIPanel__ParentHasChanged(UIPanel_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UIRect__ParentHasChanged((UIRect_o *)this, 0);
  UIPanel__FindParent(this, v3);
}


void UIPanel__RebuildAllDrawCalls(UIPanel_o *this, const MethodInfo *method)
{
  this->fields.mRebuild = 1;
}


void UIPanel__Refresh(UIPanel_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 *v4; // x9
  __int64 v5; // x8
  const MethodInfo *v6; // x1

  if ( (byte_4C3BFA7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BFA7 = 1;
  }
  this->fields.mRebuild = 1;
  Item = (System_Collections_Generic_List_object__o *)UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    Item = (System_Collections_Generic_List_object__o *)UIPanel_TypeInfo;
  }
  v4 = *(__int64 **)&Item[4].fields._size;
  v5 = *v4;
  *((_DWORD *)v4 + 8) = -1;
  if ( !v5 )
    goto LABEL_13;
  if ( *(int *)(v5 + 24) >= 1 )
  {
    if ( !Item[5].fields._size )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = (System_Collections_Generic_List_object__o *)UIPanel_TypeInfo;
    }
    Item = **(System_Collections_Generic_List_object__o ***)&Item[4].fields._size;
    if ( Item )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            Item,
                                                            0,
                                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
      if ( Item )
      {
        UIPanel__LateUpdate((UIPanel_o *)Item, v6);
        return;
      }
    }
LABEL_13:
    sub_1C32E7C(Item);
  }
}


void UIPanel__RemoveWidget(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIWidget__o *widgets; // x0
  UnityEngine_Object_o *drawCall; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UIDrawCall_o *v9; // x8
  int32_t mDepth; // w9
  CGThumbnailListItem_o *p_drawCall; // x0

  if ( (byte_4C3BFA6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Remove__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFA6 = 1;
  }
  widgets = this->fields.widgets;
  if ( !widgets )
    goto LABEL_15;
  widgets = (struct System_Collections_Generic_List_UIWidget__o *)System_Collections_Generic_List_object___Remove(
                                                                    (System_Collections_Generic_List_object__o *)widgets,
                                                                    (Il2CppObject *)w,
                                                                    (const MethodInfo_3799CE4 *)Method_System_Collections_Generic_List_UIWidget__Remove__);
  if ( ((unsigned __int8)widgets & 1) == 0 )
    return;
  if ( !w )
    goto LABEL_15;
  drawCall = (UnityEngine_Object_o *)w->fields.drawCall;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  widgets = (struct System_Collections_Generic_List_UIWidget__o *)UnityEngine_Object__op_Inequality(drawCall, 0, 0);
  if ( ((unsigned __int8)widgets & 1) != 0 )
  {
    v9 = w->fields.drawCall;
    if ( v9 )
    {
      mDepth = w->fields.mDepth;
      p_drawCall = (CGThumbnailListItem_o *)&w->fields.drawCall;
      if ( mDepth == v9->fields.depthStart || mDepth == v9->fields.depthEnd )
        this->fields.mRebuild = 1;
      v9->fields.isDirty = 1;
      p_drawCall->klass = 0;
      sub_1C32BC4(p_drawCall, 0, v7, v8);
      return;
    }
LABEL_15:
    sub_1C32E7C(widgets);
  }
}


void UIPanel__SetDirty(UIPanel_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *drawCalls; // x0
  int size; // w21
  int32_t v5; // w20

  if ( (byte_4C3BF96 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    byte_4C3BF96 = 1;
  }
  drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
  if ( !drawCalls )
    goto LABEL_9;
  size = drawCalls->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    do
    {
      drawCalls = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 drawCalls,
                                                                 v5,
                                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
      if ( !drawCalls )
        break;
      ++v5;
      BYTE4(drawCalls[5].fields._items) = 1;
      if ( size == v5 )
        goto LABEL_10;
      drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
    }
    while ( drawCalls );
LABEL_9:
    sub_1C32E7C(drawCalls);
  }
LABEL_10:
  ((void (__fastcall *)(UIPanel_o *, __int64, const MethodInfo *))this->klass->vtable._12_Invalidate.methodPtr)(
    this,
    1,
    this->klass->vtable._12_Invalidate.method);
}


void UIPanel__SetRect(UIPanel_o *this, float x, float y, float width, float height, const MethodInfo *method)
{
  float v11; // s12
  float v12; // s13
  float v13; // s0
  unsigned int v14; // w8
  signed int v15; // w22
  int v16; // w21
  UnityEngine_Transform_o *cachedTransform; // x0
  UnityEngine_Transform_o *v18; // x20
  const MethodInfo *v19; // x1
  int v20; // w9
  int v21; // w8
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Transform_o *v23; // x20
  UnityEngine_Object_o *target; // x21
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v26; // x21
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v28; // x21
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v30; // x21
  UnityEngine_Vector4_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3BF92 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF92 = 1;
  }
  if ( !byte_4C313D0 )
  {
    sub_1C32C20(&System_Math_TypeInfo);
    byte_4C313D0 = 1;
  }
  v11 = floorf(width + 0.5);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( !byte_4C313D0 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C313D0 = 1;
    }
  }
  v12 = height + 0.5;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = floorf(v12);
  v14 = vcvtms_s32_f32(v12) & 0xFFFFFFFE;
  if ( v11 == INFINITY )
    v15 = 0x80000000;
  else
    v15 = (int)v11 & 0xFFFFFFFE;
  if ( v13 == INFINITY )
    v16 = 0x80000000;
  else
    v16 = v14;
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_49;
  v18 = cachedTransform;
  UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  if ( v15 <= 2 )
    v20 = 2;
  else
    v20 = v15;
  if ( v16 <= 2 )
    v21 = 2;
  else
    v21 = v16;
  v31.fields.x = floorf(x + 0.5);
  v31.fields.y = floorf(y + 0.5);
  v31.fields.z = (float)v20;
  v31.fields.w = (float)v21;
  UIPanel__set_baseClipRegion(this, v31, v19);
  if ( UIRect__get_isAnchored((UIRect_o *)this, 0) )
  {
    cachedTransform = UnityEngine_Transform__get_parent(v18, 0);
    leftAnchor = this->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_49;
    v23 = cachedTransform;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(target, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.leftAnchor;
      if ( !cachedTransform )
        goto LABEL_49;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v23, x, 0);
    }
    rightAnchor = this->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_49;
    v26 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v26, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.rightAnchor;
      if ( !cachedTransform )
        goto LABEL_49;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v23, x + width, 0);
    }
    bottomAnchor = this->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_49;
    v28 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v28, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.bottomAnchor;
      if ( !cachedTransform )
        goto LABEL_49;
      UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v23, y, 0);
    }
    topAnchor = this->fields.topAnchor;
    if ( !topAnchor )
LABEL_49:
      sub_1C32E7C(cachedTransform);
    v30 = (UnityEngine_Object_o *)topAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v30, 0) )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.topAnchor;
      if ( cachedTransform )
      {
        UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v23, y + height, 0);
        return;
      }
      goto LABEL_49;
    }
  }
}


void UIPanel__SortWidgets(UIPanel_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIWidget__o *widgets; // x19
  System_Comparison_T__o *v4; // x20
  __int64 v5; // x0

  if ( (byte_4C3BF9E & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_UIWidget__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__Sort__);
    sub_1C32C20(&Method_UIWidget_PanelCompareFunc__);
    byte_4C3BF9E = 1;
  }
  this->fields.mSortWidgets = 0;
  widgets = this->fields.widgets;
  v4 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_UIWidget__TypeInfo);
  System_Comparison_object____ctor(v4, 0, Method_UIWidget_PanelCompareFunc__, 0);
  if ( !widgets )
    sub_1C32E7C(v5);
  System_Collections_Generic_List_object___Sort_58303104(
    (System_Collections_Generic_List_object__o *)widgets,
    v4,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_UIWidget__Sort__);
}


void UIPanel__UpdateDrawCalls(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x20
  const MethodInfo *v4; // x1
  __int64 usedForUI; // x0
  const MethodInfo *v6; // x1
  char v7; // w21
  float z; // s1
  float w; // s0
  struct UnityEngine_Vector4_StaticFields *static_fields; // x8
  UnityEngine_Object_o *parent; // x21
  float x; // s10
  float y; // s9
  float v14; // s8
  double v15; // d11
  double v16; // d0
  double v17; // d0
  double v18; // d1
  float v19; // s8
  double v20; // d1
  double v21; // d11
  double v22; // d0
  double v23; // d0
  double v24; // d1
  double v25; // d1
  const MethodInfo *v26; // x1
  float v27; // s11
  float v28; // s12
  float v29; // s13
  float v30; // s14
  float v31; // s15
  float v32; // s10
  float v33; // s9
  int32_t v34; // w20
  __int64 v35; // x21
  UnityEngine_Transform_o *v36; // x22
  int32_t v37; // w8
  bool alwaysOnScreen; // w8
  int32_t mClipping; // w8
  struct UnityEngine_Texture2D_o *mClipTexture; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  float v43; // [xsp+0h] [xbp-80h]
  float v44; // [xsp+4h] [xbp-7Ch]
  double iptr; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3BFA1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFA1 = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  usedForUI = UIPanel__get_usedForUI(this, v4);
  v7 = usedForUI;
  if ( this->fields.mClipping )
  {
    finalClipRegion = UIPanel__get_finalClipRegion(this, v6);
    this->fields.drawCallClipRange.fields.x = finalClipRegion.fields.x;
    this->fields.drawCallClipRange.fields.y = finalClipRegion.fields.y;
    z = finalClipRegion.fields.z * 0.5;
    w = finalClipRegion.fields.w * 0.5;
    this->fields.drawCallClipRange.fields.z = finalClipRegion.fields.z * 0.5;
    this->fields.drawCallClipRange.fields.w = finalClipRegion.fields.w * 0.5;
  }
  else
  {
    if ( !byte_4C316D7 )
    {
      usedForUI = sub_1C32C20(&UnityEngine_Vector4_TypeInfo);
      byte_4C316D7 = 1;
    }
    static_fields = UnityEngine_Vector4_TypeInfo->static_fields;
    z = static_fields->zeroVector.fields.z;
    w = static_fields->zeroVector.fields.w;
    *(_QWORD *)&this->fields.drawCallClipRange.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
    this->fields.drawCallClipRange.fields.z = z;
    this->fields.drawCallClipRange.fields.w = w;
  }
  if ( z == 0.0 )
  {
    usedForUI = UnityEngine_Screen__get_width(0);
    w = this->fields.drawCallClipRange.fields.w;
    this->fields.drawCallClipRange.fields.z = (float)(int)usedForUI * 0.5;
  }
  if ( w == 0.0 )
  {
    usedForUI = UnityEngine_Screen__get_height(0);
    this->fields.drawCallClipRange.fields.w = (float)(int)usedForUI * 0.5;
  }
  if ( this->fields.mHalfPixelOffset )
    *(float32x2_t *)&this->fields.drawCallClipRange.fields.x = vadd_f32(
                                                                 *(float32x2_t *)&this->fields.drawCallClipRange.fields.x,
                                                                 (float32x2_t)0x3F000000BF000000LL);
  if ( (v7 & 1) != 0 )
  {
    usedForUI = (__int64)UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !usedForUI )
      goto LABEL_74;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)usedForUI, 0);
    usedForUI = (__int64)UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !usedForUI )
      goto LABEL_74;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)usedForUI, 0);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    v14 = localPosition.fields.z;
    if ( !this->fields.mClipping )
    {
LABEL_54:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      usedForUI = UnityEngine_Object__op_Inequality(parent, 0, 0);
      if ( (usedForUI & 1) != 0 )
      {
        if ( !parent )
          goto LABEL_74;
        v48.fields.x = x;
        v48.fields.y = y;
        v48.fields.z = v14;
        v49 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)parent, v48, 0);
        x = v49.fields.x;
        y = v49.fields.y;
        v14 = v49.fields.z;
      }
      v50 = UIPanel__get_drawCallOffset(this, v26);
      if ( cachedTransform )
      {
        v43 = y + v50.fields.y;
        v44 = x + v50.fields.x;
        v19 = v14 + v50.fields.z;
        goto LABEL_61;
      }
LABEL_74:
      sub_1C32E7C(usedForUI);
    }
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v15 = x;
    v16 = modf(x, &iptr);
    if ( x >= 0.0 )
    {
      if ( v16 != 0.5 )
      {
        v17 = floor(v15 + 0.5);
        goto LABEL_34;
      }
      v17 = iptr;
      v18 = 1.0;
    }
    else
    {
      if ( v16 != -0.5 )
      {
        v17 = ceil(v15 + -0.5);
        goto LABEL_34;
      }
      v17 = iptr;
      v18 = -1.0;
    }
    v20 = v17 + v18;
    if ( ((__int64)v17 & 1) != 0 )
      v17 = v20;
LABEL_34:
    if ( v17 == INFINITY )
      x = -2147500000.0;
    else
      x = (float)(int)v17;
    if ( !byte_4C32B16 )
    {
      sub_1C32C20(&System_Math_TypeInfo);
      byte_4C32B16 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v21 = y;
    v22 = modf(y, &iptr);
    if ( y >= 0.0 )
    {
      if ( v22 == 0.5 )
      {
        v23 = iptr;
        v24 = 1.0;
LABEL_46:
        v25 = v23 + v24;
        if ( ((__int64)v23 & 1) != 0 )
          v23 = v25;
        goto LABEL_51;
      }
      v23 = floor(v21 + 0.5);
    }
    else
    {
      if ( v22 == -0.5 )
      {
        v23 = iptr;
        v24 = -1.0;
        goto LABEL_46;
      }
      v23 = ceil(v21 + -0.5);
    }
LABEL_51:
    if ( v23 == INFINITY )
      y = -2147500000.0;
    else
      y = (float)(int)v23;
    goto LABEL_54;
  }
  if ( !cachedTransform )
    goto LABEL_74;
  position = UnityEngine_Transform__get_position(cachedTransform, 0);
  v19 = position.fields.z;
  v43 = position.fields.y;
  v44 = position.fields.x;
LABEL_61:
  rotation = UnityEngine_Transform__get_rotation(cachedTransform, 0);
  v27 = rotation.fields.x;
  v28 = rotation.fields.y;
  v29 = rotation.fields.z;
  v30 = rotation.fields.w;
  lossyScale = UnityEngine_Transform__get_lossyScale(cachedTransform, 0);
  usedForUI = (__int64)this->fields.drawCalls;
  if ( !usedForUI )
    goto LABEL_74;
  v31 = lossyScale.fields.x;
  v32 = lossyScale.fields.y;
  v33 = lossyScale.fields.z;
  v34 = 0;
  while ( v34 < *(_DWORD *)(usedForUI + 24) )
  {
    usedForUI = (__int64)System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)usedForUI,
                           v34,
                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( usedForUI )
    {
      v35 = usedForUI;
      usedForUI = (__int64)UIDrawCall__get_cachedTransform((UIDrawCall_o *)usedForUI, 0);
      if ( usedForUI )
      {
        v52.fields.y = v43;
        v52.fields.x = v44;
        v52.fields.z = v19;
        v36 = (UnityEngine_Transform_o *)usedForUI;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)usedForUI, v52, 0);
        v56.fields.x = v27;
        v56.fields.y = v28;
        v56.fields.z = v29;
        v56.fields.w = v30;
        UnityEngine_Transform__set_rotation(v36, v56, 0);
        v53.fields.x = v31;
        v53.fields.y = v32;
        v53.fields.z = v33;
        UnityEngine_Transform__set_localScale(v36, v53, 0);
        v37 = this->fields.renderQueue == 2 ? 0 : v34;
        UIDrawCall__set_renderQueue((UIDrawCall_o *)v35, v37 + this->fields.startingRenderQueue, 0);
        alwaysOnScreen = this->fields.alwaysOnScreen;
        if ( alwaysOnScreen )
        {
          mClipping = this->fields.mClipping;
          if ( mClipping )
            alwaysOnScreen = mClipping == 4;
          else
            alwaysOnScreen = 1;
        }
        *(_BYTE *)(v35 + 72) = alwaysOnScreen;
        UIDrawCall__set_sortingOrder((UIDrawCall_o *)v35, this->fields.mSortingOrder, 0);
        mClipTexture = this->fields.mClipTexture;
        *(_QWORD *)(v35 + 64) = mClipTexture;
        sub_1C32BC4((CGThumbnailListItem_o *)(v35 + 64), (int32_t)mClipTexture, v41, v42);
        usedForUI = (__int64)this->fields.drawCalls;
        ++v34;
        if ( usedForUI )
          continue;
      }
    }
    goto LABEL_74;
  }
}


void UIPanel__UpdateLayers(UIPanel_o *this, const MethodInfo *method)
{
  int32_t mLayer; // w20
  UnityEngine_GameObject_o *cachedGameObject; // x0
  System_Collections_Generic_List_object__o *widgets; // x8
  int size; // w23
  int32_t v7; // w20
  Il2CppObject *Item; // x21
  UnityEngine_Object_o *parent; // x22
  int32_t v10; // w20

  if ( (byte_4C3BFA2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFA2 = 1;
  }
  mLayer = this->fields.mLayer;
  cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)this, 0);
  if ( !cachedGameObject )
    goto LABEL_28;
  if ( mLayer == UnityEngine_GameObject__get_layer(cachedGameObject, 0) )
    return;
  cachedGameObject = this->fields.mGo;
  if ( !cachedGameObject )
    goto LABEL_28;
  cachedGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(cachedGameObject, 0);
  widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
  this->fields.mLayer = (int)cachedGameObject;
  if ( !widgets )
    goto LABEL_28;
  size = widgets->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               widgets,
               v7,
               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      cachedGameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Item, 0);
      if ( ((unsigned __int8)cachedGameObject & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_28;
        parent = (UnityEngine_Object_o *)UIRect__get_parent((UIRect_o *)Item, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        cachedGameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                         parent,
                                                         (UnityEngine_Object_o *)this,
                                                         0);
        if ( ((unsigned __int8)cachedGameObject & 1) != 0 )
        {
          cachedGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
          if ( !cachedGameObject )
            goto LABEL_28;
          UnityEngine_GameObject__set_layer(cachedGameObject, this->fields.mLayer, 0);
        }
      }
      if ( size == ++v7 )
        break;
      widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
      if ( !widgets )
        goto LABEL_28;
    }
  }
  UIRect__ResetAnchors((UIRect_o *)this, 0);
  cachedGameObject = (UnityEngine_GameObject_o *)this->fields.drawCalls;
  if ( !cachedGameObject )
LABEL_28:
    sub_1C32E7C(cachedGameObject);
  v10 = 0;
  while ( v10 < SLODWORD(cachedGameObject[1].klass) )
  {
    cachedGameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)cachedGameObject,
                                                     v10,
                                                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( cachedGameObject )
    {
      cachedGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cachedGameObject, 0);
      if ( cachedGameObject )
      {
        UnityEngine_GameObject__set_layer(cachedGameObject, this->fields.mLayer, 0);
        cachedGameObject = (UnityEngine_GameObject_o *)this->fields.drawCalls;
        ++v10;
        if ( cachedGameObject )
          continue;
      }
    }
    goto LABEL_28;
  }
}


void UIPanel__UpdateSelf(UIPanel_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UIPanel_c *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  Il2CppObject *Component_object; // x19
  System_Collections_Generic_List_object__o *drawCalls; // x0
  int32_t v10; // w20
  const MethodInfo *v11; // x2
  UIDrawCall_o *v12; // x21

  if ( (byte_4C3BF9D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIDrawCall_TypeInfo);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF9D = 1;
  }
  this->fields.mUpdateTime = RealTime__get_time(0);
  v4 = UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v4 = UIPanel_TypeInfo;
  }
  this->fields.mUpdatedFrame = v4->static_fields->mUpdateFrame;
  UIPanel__UpdateTransformMatrix(this, v3);
  UIPanel__UpdateLayers(this, v5);
  UIPanel__UpdateWidgets(this, v6);
  if ( this->fields.mRebuild )
  {
    this->fields.mRebuild = 0;
    UIPanel__FillAllDrawCalls(this, v7);
  }
  else
  {
    drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
    if ( !drawCalls )
      goto LABEL_26;
    v10 = 0;
    while ( v10 < drawCalls->fields._size )
    {
      drawCalls = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 drawCalls,
                                                                 v10,
                                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
      if ( !drawCalls )
        goto LABEL_26;
      v12 = (UIDrawCall_o *)drawCalls;
      if ( !BYTE4(drawCalls[5].fields._items) || UIPanel__FillDrawCall(this, (UIDrawCall_o *)drawCalls, v11) )
      {
        drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
        ++v10;
        if ( !drawCalls )
          goto LABEL_26;
      }
      else
      {
        if ( !UIDrawCall_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo);
        UIDrawCall__Destroy(v12, 0);
        drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
        if ( !drawCalls )
          goto LABEL_26;
        System_Collections_Generic_List_object___RemoveAt(
          drawCalls,
          v10,
          (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_UIDrawCall__RemoveAt__);
        drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
        if ( !drawCalls )
          goto LABEL_26;
      }
    }
  }
  if ( this->fields.mUpdateScroll )
  {
    this->fields.mUpdateScroll = 0;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    drawCalls = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0,
                                                               0);
    if ( ((unsigned __int8)drawCalls & 1) != 0 )
    {
      if ( Component_object )
      {
        UIScrollView__UpdateScrollbars((UIScrollView_o *)Component_object, 0);
        return;
      }
LABEL_26:
      sub_1C32E7C(drawCalls);
    }
  }
}


void UIPanel__UpdateTransformMatrix(UIPanel_o *this, const MethodInfo *method)
{
  int32_t frameCount; // w0
  UnityEngine_Transform_o *cachedTransform; // x0
  __int128 v5; // q0
  __int128 v6; // q2
  __int128 v7; // q3
  const MethodInfo *v8; // x1
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float v10; // s2
  float v11; // s3
  UnityEngine_Matrix4x4_o v12[2]; // [xsp+0h] [xbp-90h] BYREF

  frameCount = UnityEngine_Time__get_frameCount(0);
  if ( this->fields.mMatrixFrame != frameCount )
  {
    this->fields.mMatrixFrame = frameCount;
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !cachedTransform )
      sub_1C32E7C(0);
    UnityEngine_Transform__get_worldToLocalMatrix(v12, cachedTransform, 0);
    v5 = *(_OWORD *)&v12[0].fields.m03;
    v7 = *(_OWORD *)&v12[0].fields.m00;
    v6 = *(_OWORD *)&v12[0].fields.m01;
    v12[1] = v12[0];
    *(_OWORD *)&this->fields.worldToLocal.fields.m02 = *(_OWORD *)&v12[0].fields.m02;
    *(_OWORD *)&this->fields.worldToLocal.fields.m03 = v5;
    *(_OWORD *)&this->fields.worldToLocal.fields.m00 = v7;
    *(_OWORD *)&this->fields.worldToLocal.fields.m01 = v6;
    ViewSize = UIPanel__GetViewSize(this, v8);
    v10 = this->fields.mClipOffset.fields.x + this->fields.mClipRange.fields.x;
    v11 = this->fields.mClipOffset.fields.y + this->fields.mClipRange.fields.y;
    this->fields.mMin.fields.x = v10 - (float)(ViewSize.fields.x * 0.5);
    this->fields.mMin.fields.y = v11 - (float)(ViewSize.fields.y * 0.5);
    this->fields.mMax.fields.x = (float)(ViewSize.fields.x * 0.5) + v10;
    this->fields.mMax.fields.y = (float)(ViewSize.fields.y * 0.5) + v11;
  }
}


void UIPanel__UpdateWidgets(UIPanel_o *this, const MethodInfo *method)
{
  _BOOL4 v3; // w25
  UnityEngine_Object_o **clipCount; // x0
  System_Collections_Generic_List_object__o *widgets; // x8
  int size; // w26
  int v7; // w20
  int32_t v8; // w21
  char v9; // w29
  UnityEngine_Object_o **v10; // x22
  UnityEngine_Object_o *v11; // x23
  int32_t frameCount; // w23
  bool v13; // w2
  char v14; // w24
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *v16; // x23
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *v18; // x8
  struct UIPanel_OnGeometryUpdated_o *onGeometryUpdated; // x8

  if ( (byte_4C3BFA3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BFA3 = 1;
  }
  v3 = !this->fields.cullWhileDragging && this->fields.mCullTime > this->fields.mUpdateTime;
  if ( this->fields.mForced != v3 )
  {
    this->fields.mForced = v3;
    this->fields.mResized = 1;
  }
  clipCount = (UnityEngine_Object_o **)UIPanel__get_clipCount(this, method);
  widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
  if ( !widgets )
LABEL_41:
    sub_1C32E7C(clipCount);
  size = widgets->fields._size;
  if ( size >= 1 )
  {
    v7 = (int)clipCount;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      clipCount = (UnityEngine_Object_o **)System_Collections_Generic_List_object___get_Item(
                                             widgets,
                                             v8,
                                             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
      if ( !clipCount )
        goto LABEL_41;
      v10 = clipCount;
      v11 = clipCount[29];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      clipCount = (UnityEngine_Object_o **)UnityEngine_Object__op_Equality(v11, (UnityEngine_Object_o *)this, 0);
      if ( ((unsigned __int8)clipCount & 1) != 0 )
      {
        clipCount = (UnityEngine_Object_o **)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v10, 0);
        if ( ((unsigned __int8)clipCount & 1) != 0 )
        {
          frameCount = UnityEngine_Time__get_frameCount(0);
          if ( UIWidget__UpdateTransform((UIWidget_o *)v10, frameCount, 0) || this->fields.mResized )
          {
            if ( v3 )
            {
              v13 = 1;
              v14 = 1;
            }
            else
            {
              v14 = UIWidget__CalculateCumulativeAlpha((UIWidget_o *)v10, frameCount, 0) > 0.001;
              v13 = !v7 && !*((_BYTE *)v10 + 209) || UIPanel__IsVisible_49065356(this, (UIWidget_o *)v10, v15);
            }
            UIWidget__UpdateVisibility((UIWidget_o *)v10, v14, v13, 0);
          }
          clipCount = (UnityEngine_Object_o **)UIWidget__UpdateGeometry((UIWidget_o *)v10, frameCount, 0);
          if ( ((unsigned __int8)clipCount & 1) != 0 )
          {
            if ( this->fields.mRebuild )
              goto LABEL_32;
            v16 = v10[43];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            clipCount = (UnityEngine_Object_o **)UnityEngine_Object__op_Inequality(v16, 0, 0);
            if ( ((unsigned __int8)clipCount & 1) == 0 )
            {
              clipCount = (UnityEngine_Object_o **)UIPanel__FindDrawCall(this, (UIWidget_o *)v10, v17);
LABEL_32:
              v9 = 1;
              goto LABEL_33;
            }
            v18 = v10[43];
            if ( !v18 )
              goto LABEL_41;
            v9 = 1;
            BYTE4(v18[9].klass) = 1;
          }
        }
      }
LABEL_33:
      if ( size == ++v8 )
      {
        if ( (v9 & 1) != 0 )
        {
          onGeometryUpdated = this->fields.onGeometryUpdated;
          if ( onGeometryUpdated )
            ((void (__fastcall *)(intptr_t, intptr_t))onGeometryUpdated->fields.invoke_impl)(
              onGeometryUpdated->fields.method_code,
              onGeometryUpdated->fields.method);
        }
        break;
      }
      widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
      if ( !widgets )
        goto LABEL_41;
    }
  }
  this->fields.mResized = 0;
}


bool UIPanel__get_IsUpdated(UIPanel_o *this, const MethodInfo *method)
{
  UIPanel_c *v3; // x0
  int32_t mUpdatedFrame; // w19

  if ( (byte_4C3BF84 & 1) == 0 )
  {
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF84 = 1;
  }
  v3 = UIPanel_TypeInfo;
  mUpdatedFrame = this->fields.mUpdatedFrame;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v3 = UIPanel_TypeInfo;
  }
  return mUpdatedFrame == v3->static_fields->mUpdateFrame;
}


float UIPanel__get_alpha(UIPanel_o *this, const MethodInfo *method)
{
  return this->fields.mAlpha;
}


UnityEngine_Vector4_o UIPanel__get_baseClipRegion(UIPanel_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  float w; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  x = this->fields.mClipRange.fields.x;
  y = this->fields.mClipRange.fields.y;
  z = this->fields.mClipRange.fields.z;
  w = this->fields.mClipRange.fields.w;
  result.fields.w = w;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


bool UIPanel__get_canBeAnchored(UIPanel_o *this, const MethodInfo *method)
{
  return this->fields.mClipping != 0;
}


int32_t UIPanel__get_clipCount(UIPanel_o *this, const MethodInfo *method)
{
  int32_t v3; // w20
  _BOOL8 v4; // x0

  if ( (byte_4C3BF8A & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF8A = 1;
  }
  v3 = 0;
  while ( 1 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, 0, 0);
    if ( !v4 )
      break;
    if ( !this )
      sub_1C32E7C(v4);
    if ( (this->fields.mClipping | 2) == 3 )
      ++v3;
    this = this->fields.mParentPanel;
  }
  return v3;
}


UnityEngine_Vector2_o UIPanel__get_clipOffset(UIPanel_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.mClipOffset.fields.x;
  y = this->fields.mClipOffset.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector4_o UIPanel__get_clipRange(UIPanel_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  float w; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  x = this->fields.mClipRange.fields.x;
  y = this->fields.mClipRange.fields.y;
  z = this->fields.mClipRange.fields.z;
  w = this->fields.mClipRange.fields.w;
  result.fields.w = w;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o UIPanel__get_clipSoftness(UIPanel_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  x = this->fields.mClipSoftness.fields.x;
  y = this->fields.mClipSoftness.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Texture2D_o *UIPanel__get_clipTexture(UIPanel_o *this, const MethodInfo *method)
{
  return this->fields.mClipTexture;
}


float UIPanel__get_clipTextureRotation(UIPanel_o *this, const MethodInfo *method)
{
  return this->fields.mClipTextureRotation;
}


UnityEngine_Vector4_o UIPanel__get_clipTextureRotationInfo(UIPanel_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float mClipTextureRotation; // s2
  float v5; // s3
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  x = this->fields.mClipRange.fields.x;
  y = this->fields.mClipRange.fields.y;
  mClipTextureRotation = this->fields.mClipTextureRotation;
  v5 = 0.0;
  result.fields.w = v5;
  result.fields.z = mClipTextureRotation;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t UIPanel__get_clipping(UIPanel_o *this, const MethodInfo *method)
{
  return this->fields.mClipping;
}


bool UIPanel__get_clipsChildren(UIPanel_o *this, const MethodInfo *method)
{
  return UIPanel__get_clipCount(this, method) != 0;
}


int32_t UIPanel__get_depth(UIPanel_o *this, const MethodInfo *method)
{
  return this->fields.mDepth;
}


UnityEngine_Vector3_o UIPanel__get_drawCallOffset(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anchorCamera; // x20
  UIRoot_o *mCam; // x0
  const MethodInfo *v5; // x1
  float y; // s8
  UnityEngine_Object_o *root; // x20
  float pixelSizeAdjustment; // s9
  float v9; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BF89 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF89 = 1;
  }
  if ( this->fields.mHalfPixelOffset )
  {
    anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(anchorCamera, 0, 0) )
    {
      mCam = (UIRoot_o *)this->fields.mCam;
      if ( !mCam )
        goto LABEL_19;
      if ( UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)mCam, 0) )
      {
        y = UIPanel__GetWindowSize(this, v5).fields.y;
        root = (UnityEngine_Object_o *)UIRect__get_root((UIRect_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        pixelSizeAdjustment = 1.0;
        if ( UnityEngine_Object__op_Inequality(root, 0, 0) )
        {
          mCam = UIRect__get_root((UIRect_o *)this, 0);
          if ( !mCam )
            goto LABEL_19;
          pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment(mCam, 0);
        }
        mCam = (UIRoot_o *)this->fields.mCam;
        if ( mCam )
        {
          v9 = (float)(pixelSizeAdjustment / y)
             / UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)mCam, 0);
          x = -v9;
          z = 0.0;
          goto LABEL_20;
        }
LABEL_19:
        sub_1C32E7C(mCam);
      }
    }
  }
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  v9 = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
LABEL_20:
  result.fields.z = z;
  result.fields.y = v9;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector4_o UIPanel__get_finalClipRegion(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float x; // s2
  float y; // s3
  unsigned __int64 v6; // d0
  float v7; // s1
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  ViewSize = UIPanel__GetViewSize(this, method);
  x = ViewSize.fields.x;
  y = ViewSize.fields.y;
  if ( this->fields.mClipping )
    v6 = vadd_f32(*(float32x2_t *)&this->fields.mClipRange.fields.x, (float32x2_t)this->fields.mClipOffset).n64_u64[0];
  else
    v6 = 0;
  v7 = *((float *)&v6 + 1);
  result.fields.x = *(float *)&v6;
  result.fields.w = y;
  result.fields.z = x;
  result.fields.y = v7;
  return result;
}


bool UIPanel__get_halfPixelOffset(UIPanel_o *this, const MethodInfo *method)
{
  return this->fields.mHalfPixelOffset;
}


bool UIPanel__get_hasClipping(UIPanel_o *this, const MethodInfo *method)
{
  return (this->fields.mClipping & 0xFFFFFFFD) == 1;
}


bool UIPanel__get_hasCumulativeClipping(UIPanel_o *this, const MethodInfo *method)
{
  return UIPanel__get_clipCount(this, method) != 0;
}


float UIPanel__get_height(UIPanel_o *this, const MethodInfo *method)
{
  return UIPanel__GetViewSize(this, method).fields.y;
}


UnityEngine_Vector3_array *UIPanel__get_localCorners(UIPanel_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector2_o mClipOffset; // d9
  float32x2_t v4; // d8
  float32x2_t v5; // d10
  UnityEngine_Transform_o *cachedTransform; // x0
  float32x2_t *v7; // x8
  float32x2_t v8; // d0
  struct UnityEngine_Vector3_array *mCorners; // x8
  unsigned __int64 v10; // d1
  struct UnityEngine_Vector3_array *v11; // x8
  struct UnityEngine_Vector3_array *v12; // x8
  __int64 v13; // x19
  unsigned __int64 v14; // x8
  UnityEngine_Transform_o *v15; // x20
  unsigned __int64 v16; // x21
  __int64 v17; // x22
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BF8E & 1) == 0 )
  {
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF8E = 1;
  }
  if ( !this->fields.mClipping )
  {
    v13 = ((__int64 (__fastcall *)(UIPanel_o *, const MethodInfo *))this->klass->vtable._11_get_worldCorners.methodPtr)(
            this,
            this->klass->vtable._11_get_worldCorners.method);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( v13 )
    {
      LODWORD(v14) = *(_DWORD *)(v13 + 24);
      v15 = cachedTransform;
      v16 = 0;
      v17 = v13 + 40;
      while ( v16 < (unsigned int)v14 )
      {
        if ( !v15 )
          goto LABEL_23;
        v19 = UnityEngine_Transform__InverseTransformPoint(v15, *(UnityEngine_Vector3_o *)(v17 - 8), 0);
        v14 = *(unsigned int *)(v13 + 24);
        if ( v16 >= v14 )
          break;
        ++v16;
        *(UnityEngine_Vector3_o *)(v17 - 8) = v19;
        v17 += 12;
        if ( v16 == 4 )
          return (UnityEngine_Vector3_array *)v13;
      }
LABEL_22:
      sub_1C32E84(cachedTransform);
    }
LABEL_23:
    sub_1C32E7C(cachedTransform);
  }
  mClipOffset = this->fields.mClipOffset;
  v5.n64_u64[0] = *(unsigned __int64 *)&this->fields.mClipRange.fields.x;
  v4.n64_u64[0] = *(unsigned __int64 *)&this->fields.mClipRange.fields.z;
  cachedTransform = (UnityEngine_Transform_o *)UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UIPanel_TypeInfo;
  }
  v7 = *(float32x2_t **)(cachedTransform[7].fields.m_CachedPtr + 24);
  if ( !v7 )
    goto LABEL_23;
  if ( !v7[3].n64_u32[0] )
    goto LABEL_22;
  v8.n64_u64[0] = vadd_f32(vadd_f32((float32x2_t)mClipOffset, v5), vmul_f32(v4, (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
  v7[4].n64_u64[0] = v8.n64_u64[0];
  v7[5].n64_u32[0] = 0;
  mCorners = UIPanel_TypeInfo->static_fields->mCorners;
  if ( !mCorners )
    goto LABEL_23;
  if ( LODWORD(mCorners->max_length) <= 1 )
    goto LABEL_22;
  v10 = vadd_f32(v4, v8).n64_u64[0];
  *(_QWORD *)&mCorners->m_Items[1].fields.x = __PAIR64__(HIDWORD(v10), v8.n64_u32[0]);
  mCorners->m_Items[1].fields.z = 0.0;
  v11 = UIPanel_TypeInfo->static_fields->mCorners;
  if ( !v11 )
    goto LABEL_23;
  if ( LODWORD(v11->max_length) <= 2 )
    goto LABEL_22;
  *(_QWORD *)&v11->m_Items[2].fields.x = v10;
  v11->m_Items[2].fields.z = 0.0;
  v12 = UIPanel_TypeInfo->static_fields->mCorners;
  if ( !v12 )
    goto LABEL_23;
  if ( LODWORD(v12->max_length) <= 3 )
    goto LABEL_22;
  HIDWORD(v10) = v8.n64_u32[1];
  *(_QWORD *)&v12->m_Items[3].fields.x = v10;
  v12->m_Items[3].fields.z = 0.0;
  return UIPanel_TypeInfo->static_fields->mCorners;
}


int32_t UIPanel__get_nextUnusedDepth(const MethodInfo *method)
{
  void *Item; // x0
  __int64 v2; // x8
  int v3; // w8
  int v4; // w21
  int32_t v5; // w19
  signed int v6; // w22

  if ( (byte_4C3BF85 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF85 = 1;
  }
  Item = UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    Item = UIPanel_TypeInfo;
  }
  v2 = **((_QWORD **)Item + 23);
  if ( !v2 )
LABEL_19:
    sub_1C32E7C(Item);
  v3 = *(_DWORD *)(v2 + 24);
  v4 = v3 - 1;
  if ( v3 < 1 )
    return 0;
  v5 = 0;
  v6 = 0x80000000;
  while ( 1 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = UIPanel_TypeInfo;
    }
    Item = (void *)**((_QWORD **)Item + 23);
    if ( !Item )
      goto LABEL_19;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             v5,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
    if ( !Item )
      goto LABEL_19;
    if ( v6 <= *((_DWORD *)Item + 80) )
      v6 = *((_DWORD *)Item + 80);
    if ( v4 == v5 )
      break;
    Item = UIPanel_TypeInfo;
    ++v5;
  }
  if ( v6 == 0x80000000 )
    return 0;
  else
    return v6 + 1;
}


UIPanel_o *UIPanel__get_parentPanel(UIPanel_o *this, const MethodInfo *method)
{
  return this->fields.mParentPanel;
}


int32_t UIPanel__get_sortingOrder(UIPanel_o *this, const MethodInfo *method)
{
  return this->fields.mSortingOrder;
}


bool UIPanel__get_usedForUI(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *anchorCamera; // x20
  UnityEngine_Camera_o *mCam; // x0

  if ( (byte_4C3BF88 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF88 = 1;
  }
  anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(anchorCamera, 0, 0) )
    return 0;
  mCam = this->fields.mCam;
  if ( !mCam )
    sub_1C32E7C(0);
  return UnityEngine_Camera__get_orthographic(mCam, 0);
}


// attributes: thunk
float UIPanel__get_width(UIPanel_o *this, const MethodInfo *method)
{
  float result; // s0

  LODWORD(result) = *(_QWORD *)&UIPanel__GetViewSize(this, method);
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_array *UIPanel__get_worldCorners(UIPanel_o *this, const MethodInfo *method)
{
  float x; // s8
  float v4; // s9
  float z; // s11
  float y; // s12
  float v7; // s13
  float w; // s10
  UnityEngine_Component_o *cachedTransform; // x0
  UIPanel_c *v10; // x8
  UnityEngine_Transform_o *v11; // x19
  struct UnityEngine_Vector3_array *mCorners; // x20
  float v13; // s9
  float v14; // s8
  float v15; // s10
  struct UnityEngine_Vector3_array *v16; // x20
  float v17; // s9
  struct UnityEngine_Vector3_array *v18; // x20
  struct UnityEngine_Vector3_array *v19; // x20
  UIPanel_c *v20; // x0
  UnityEngine_Object_o *anchorCamera; // x20
  const MethodInfo *v23; // x1
  UnityEngine_Camera_o *v24; // x20
  float cameraRayDistance; // s8
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v27; // x8
  float v28; // s1
  float v29; // s0
  struct UnityEngine_Vector3_array *v30; // x8
  struct UnityEngine_Vector3_array *v31; // x8
  float v32; // s1
  struct UnityEngine_Vector3_array *v33; // x8
  UnityEngine_Object_o *mCam; // x20
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Object_o *v36; // x21
  float v37; // s2
  float v38; // s8
  __int64 v39; // x19
  unsigned __int64 v40; // x20
  unsigned __int32 v41; // s1
  float32x2_t v42; // d0 OVERLAPPED
  __int64 v43; // x8
  float32x2_t *v44; // x8
  float v45; // s1
  unsigned __int64 v46; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3BF8F & 1) == 0 )
  {
    sub_1C32C20(&NGUITools_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF8F = 1;
  }
  if ( this->fields.mClipping )
  {
    x = this->fields.mClipOffset.fields.x;
    v4 = this->fields.mClipRange.fields.x;
    z = this->fields.mClipRange.fields.z;
    y = this->fields.mClipOffset.fields.y;
    v7 = this->fields.mClipRange.fields.y;
    w = this->fields.mClipRange.fields.w;
    cachedTransform = (UnityEngine_Component_o *)UIRect__get_cachedTransform((UIRect_o *)this, 0);
    v10 = UIPanel_TypeInfo;
    v11 = (UnityEngine_Transform_o *)cachedTransform;
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
      v10 = UIPanel_TypeInfo;
    }
    if ( v11 )
    {
      mCorners = v10->static_fields->mCorners;
      v13 = (float)(x + v4) - (float)(z * 0.5);
      v14 = (float)(y + v7) - (float)(w * 0.5);
      v47 = UnityEngine_Transform__TransformPoint_71250240(v11, v13, v14, 0.0, 0);
      if ( mCorners )
      {
        if ( !LODWORD(mCorners->max_length) )
          goto LABEL_53;
        mCorners->m_Items[0] = v47;
        v15 = w + v14;
        v16 = UIPanel_TypeInfo->static_fields->mCorners;
        v48 = UnityEngine_Transform__TransformPoint_71250240(v11, v13, v15, 0.0, 0);
        if ( v16 )
        {
          if ( LODWORD(v16->max_length) <= 1 )
            goto LABEL_53;
          v16->m_Items[1] = v48;
          v17 = z + v13;
          v18 = UIPanel_TypeInfo->static_fields->mCorners;
          v49 = UnityEngine_Transform__TransformPoint_71250240(v11, v17, v15, 0.0, 0);
          if ( v18 )
          {
            if ( LODWORD(v18->max_length) <= 2 )
              goto LABEL_53;
            v18->m_Items[2] = v49;
            v19 = UIPanel_TypeInfo->static_fields->mCorners;
            v50 = UnityEngine_Transform__TransformPoint_71250240(v11, v17, v14, 0.0, 0);
            if ( v19 )
            {
              if ( LODWORD(v19->max_length) > 3 )
              {
                v19->m_Items[3] = v50;
LABEL_16:
                v20 = UIPanel_TypeInfo;
                if ( !UIPanel_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
                  v20 = UIPanel_TypeInfo;
                }
                return v20->static_fields->mCorners;
              }
LABEL_53:
              sub_1C32E84(cachedTransform);
            }
          }
        }
      }
    }
    goto LABEL_52;
  }
  anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(anchorCamera, 0, 0) )
  {
    ViewSize = UIPanel__GetViewSize(this, v23);
    cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
      cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
    }
    v27 = *(_QWORD *)(cachedTransform[7].fields.m_CachedPtr + 24);
    if ( v27 )
    {
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_53;
      v28 = ViewSize.fields.x * -0.5;
      v29 = ViewSize.fields.y * -0.5;
      *(float *)(v27 + 32) = ViewSize.fields.x * -0.5;
      *(float *)(v27 + 36) = ViewSize.fields.y * -0.5;
      *(_DWORD *)(v27 + 40) = 0;
      v30 = UIPanel_TypeInfo->static_fields->mCorners;
      if ( v30 )
      {
        if ( LODWORD(v30->max_length) <= 1 )
          goto LABEL_53;
        v30->m_Items[1].fields.x = v28;
        v30->m_Items[1].fields.y = ViewSize.fields.y + v29;
        v30->m_Items[1].fields.z = 0.0;
        v31 = UIPanel_TypeInfo->static_fields->mCorners;
        if ( v31 )
        {
          if ( LODWORD(v31->max_length) <= 2 )
            goto LABEL_53;
          v32 = ViewSize.fields.x + v28;
          v31->m_Items[2].fields.x = v32;
          v31->m_Items[2].fields.y = ViewSize.fields.y + v29;
          v31->m_Items[2].fields.z = 0.0;
          v33 = UIPanel_TypeInfo->static_fields->mCorners;
          if ( v33 )
          {
            if ( LODWORD(v33->max_length) <= 3 )
              goto LABEL_53;
            v33->m_Items[3].fields.x = v32;
            v33->m_Items[3].fields.y = v29;
            v33->m_Items[3].fields.z = 0.0;
            if ( !this->fields.anchorOffset )
              goto LABEL_16;
            mCam = (UnityEngine_Object_o *)this->fields.mCam;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Equality(mCam, 0, 0) )
            {
              cachedTransform = (UnityEngine_Component_o *)this->fields.mCam;
              if ( !cachedTransform )
                goto LABEL_52;
              cachedTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(cachedTransform, 0);
              if ( !cachedTransform )
                goto LABEL_52;
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(
                                                 (UnityEngine_Transform_o *)cachedTransform,
                                                 0);
              v36 = (UnityEngine_Object_o *)UIRect__get_cachedTransform((UIRect_o *)this, 0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(parent, v36, 0) )
                goto LABEL_16;
            }
            cachedTransform = (UnityEngine_Component_o *)UIRect__get_cachedTransform((UIRect_o *)this, 0);
            if ( cachedTransform )
            {
              *(UnityEngine_Vector3_o *)v42.n64_u64 = UnityEngine_Transform__get_position(
                                                        (UnityEngine_Transform_o *)cachedTransform,
                                                        0);
              v38 = v37;
              v39 = 0;
              v40 = 0;
              v42.n64_u32[1] = v41;
              v46 = v42.n64_u64[0];
              while ( 1 )
              {
                cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
                if ( !UIPanel_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
                  v42.n64_u64[0] = v46;
                  cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
                }
                v43 = *(_QWORD *)(cachedTransform[7].fields.m_CachedPtr + 24);
                if ( !v43 )
                  break;
                if ( v40 >= *(unsigned int *)(v43 + 24) )
                  goto LABEL_53;
                v44 = (float32x2_t *)(v43 + v39);
                ++v40;
                v45 = v38 + v44[5].n64_f32[0];
                v39 += 12;
                v44[4].n64_u64[0] = vadd_f32(v42, v44[4]).n64_u64[0];
                v44[5].n64_f32[0] = v45;
                if ( v40 == 4 )
                  goto LABEL_16;
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_1C32E7C(cachedTransform);
  }
  v24 = this->fields.mCam;
  cameraRayDistance = UIRect__get_cameraRayDistance((UIRect_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  return NGUITools__GetWorldCorners_49321772(v24, cameraRayDistance, 0);
}


void UIPanel__set_alpha(UIPanel_o *this, float value, const MethodInfo *method)
{
  float v3; // s1
  bool v4; // nf
  float v5; // s0

  v3 = fminf(value, 1.0);
  v4 = value < 0.0;
  v5 = 0.0;
  if ( !v4 )
    v5 = v3;
  if ( this->fields.mAlpha != v5 )
  {
    this->fields.mAlphaFrameID = -1;
    this->fields.mResized = 1;
    this->fields.mAlpha = v5;
    UIPanel__SetDirty(this, method);
  }
}


void UIPanel__set_baseClipRegion(UIPanel_o *this, UnityEngine_Vector4_o value, const MethodInfo *method)
{
  float w; // s8
  float z; // s9
  float y; // s10
  float x; // s11
  float v8; // s0
  float mCullTime; // s1
  Il2CppObject *Component_object; // x20
  _BOOL8 v11; // x0
  struct UIPanel_OnClippingMoved_o *onClipMove; // x8

  w = value.fields.w;
  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4C3BF8D & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF8D = 1;
  }
  v8 = 0.001;
  if ( vabds_f32(this->fields.mClipRange.fields.x, x) > 0.001
    || vabds_f32(this->fields.mClipRange.fields.y, y) > 0.001
    || vabds_f32(this->fields.mClipRange.fields.z, z) > 0.001
    || vabds_f32(this->fields.mClipRange.fields.w, w) > 0.001 )
  {
    mCullTime = this->fields.mCullTime;
    this->fields.mResized = 1;
    if ( mCullTime != 0.0 )
      v8 = RealTime__get_time(0) + 0.15;
    this->fields.mCullTime = v8;
    this->fields.mClipRange.fields.x = x;
    this->fields.mClipRange.fields.y = y;
    this->fields.mClipRange.fields.z = z;
    this->fields.mClipRange.fields.w = w;
    this->fields.mMatrixFrame = -1;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v11 )
    {
      if ( !Component_object )
        sub_1C32E7C(v11);
      UIScrollView__UpdatePosition((UIScrollView_o *)Component_object, 0);
    }
    onClipMove = this->fields.onClipMove;
    if ( onClipMove )
      ((void (__fastcall *)(intptr_t, UIPanel_o *, intptr_t))onClipMove->fields.invoke_impl)(
        onClipMove->fields.method_code,
        this,
        onClipMove->fields.method);
  }
}


void UIPanel__set_clipOffset(UIPanel_o *this, UnityEngine_Vector2_o value, const MethodInfo *method)
{
  struct UIPanel_OnClippingMoved_o *onClipMove; // x8

  if ( vabds_f32(this->fields.mClipOffset.fields.x, value.fields.x) > 0.001
    || vabds_f32(this->fields.mClipOffset.fields.y, value.fields.y) > 0.001 )
  {
    this->fields.mClipOffset = value;
    UIPanel__InvalidateClipping(this, method);
    onClipMove = this->fields.onClipMove;
    if ( onClipMove )
      ((void (__fastcall *)(intptr_t, UIPanel_o *, intptr_t))onClipMove->fields.invoke_impl)(
        onClipMove->fields.method_code,
        this,
        onClipMove->fields.method);
  }
}


// attributes: thunk
void UIPanel__set_clipRange(UIPanel_o *this, UnityEngine_Vector4_o value, const MethodInfo *method)
{
  UIPanel__set_baseClipRegion(this, value, method);
}


void UIPanel__set_clipSoftness(UIPanel_o *this, UnityEngine_Vector2_o value, const MethodInfo *method)
{
  if ( (float)((float)((float)(this->fields.mClipSoftness.fields.x - value.fields.x)
                     * (float)(this->fields.mClipSoftness.fields.x - value.fields.x))
             + (float)((float)(this->fields.mClipSoftness.fields.y - value.fields.y)
                     * (float)(this->fields.mClipSoftness.fields.y - value.fields.y))) >= 1.0e-10 )
    this->fields.mClipSoftness = value;
}


void UIPanel__set_clipTexture(UIPanel_o *this, UnityEngine_Texture2D_o *value, const MethodInfo *method)
{
  UnityEngine_Object_o *mClipTexture; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3BF8C & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3BF8C = 1;
  }
  mClipTexture = (UnityEngine_Object_o *)this->fields.mClipTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mClipTexture, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mClipTexture = value;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.mClipTexture, (int32_t)value, v6, v7);
  }
}


void UIPanel__set_clipTextureRotation(UIPanel_o *this, float value, const MethodInfo *method)
{
  if ( this->fields.mClipTextureRotation != value )
    this->fields.mClipTextureRotation = value;
}


void UIPanel__set_clipping(UIPanel_o *this, int32_t value, const MethodInfo *method)
{
  if ( this->fields.mClipping != value )
  {
    this->fields.mClipping = value;
    this->fields.mResized = 1;
    this->fields.mMatrixFrame = -1;
  }
}


void UIPanel__set_depth(UIPanel_o *this, int32_t value, const MethodInfo *method)
{
  UIPanel_c *v5; // x0
  System_Collections_Generic_List_object__o *list; // x19
  System_Comparison_T__o *v7; // x20
  __int64 v8; // x0

  if ( (byte_4C3BF86 & 1) == 0 )
  {
    sub_1C32C20(&System_Comparison_UIPanel__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UIPanel__Sort__);
    sub_1C32C20(&Method_UIPanel_CompareFunc__);
    sub_1C32C20(&UIPanel_TypeInfo);
    byte_4C3BF86 = 1;
  }
  if ( this->fields.mDepth != value )
  {
    this->fields.mDepth = value;
    v5 = UIPanel_TypeInfo;
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
      v5 = UIPanel_TypeInfo;
    }
    list = (System_Collections_Generic_List_object__o *)v5->static_fields->list;
    v7 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_UIPanel__TypeInfo);
    System_Comparison_object____ctor(v7, 0, Method_UIPanel_CompareFunc__, 0);
    if ( !list )
      sub_1C32E7C(v8);
    System_Collections_Generic_List_object___Sort_58303104(
      list,
      v7,
      (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_UIPanel__Sort__);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPanel__set_sortingOrder(UIPanel_o *this, int32_t value, const MethodInfo *method)
{
  if ( this->fields.mSortingOrder != value )
  {
    this->fields.mSortingOrder = value;
    UIPanel__UpdateDrawCalls(this, *(const MethodInfo **)&value);
  }
}


void UIPanel_OnClippingMoved___ctor(
        UIPanel_OnClippingMoved_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7DDFC;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C32CD8(method);
        v12 = sub_1C33194(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A7DEF8;
          else
            v9 = sub_1A7DEBC;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A7DE38;
        }
        else
        {
          v9 = sub_1A7DE0C;
        }
      }
      else
      {
        v9 = sub_1A7DDDC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A7DD94;
}


System_IAsyncResult_o *UIPanel_OnClippingMoved__BeginInvoke(
        UIPanel_OnClippingMoved_o *this,
        UIPanel_o *panel,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UIPanel_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = panel;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void UIPanel_OnClippingMoved__EndInvoke(
        UIPanel_OnClippingMoved_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void UIPanel_OnClippingMoved__Invoke(UIPanel_OnClippingMoved_o *this, UIPanel_o *panel, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UIPanel_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    panel,
    this->fields.method);
}


void UIPanel_OnGeometryUpdated___ctor(
        UIPanel_OnGeometryUpdated_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7DD80;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7DD40;
}


System_IAsyncResult_o *UIPanel_OnGeometryUpdated__BeginInvoke(
        UIPanel_OnGeometryUpdated_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v5, callback, object);
}


void UIPanel_OnGeometryUpdated__EndInvoke(
        UIPanel_OnGeometryUpdated_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void UIPanel_OnGeometryUpdated__Invoke(UIPanel_OnGeometryUpdated_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}