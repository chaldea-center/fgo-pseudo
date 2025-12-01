void UIPanel___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_HashSet_T__o *v8; // x19
  struct UIPanel_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x0
  struct UIPanel_StaticFields *v17; // x8
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x0
  struct UIPanel_StaticFields *v25; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct UIPanel_StaticFields *v32; // x8

  if ( (byte_4CCBA57 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_UIPanel___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_UIPanel__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UIPanel__TypeInfo);
    sub_1C713B0(&float___TypeInfo);
    sub_1C713B0(&UIPanel_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector3___TypeInfo);
    byte_4CCBA57 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UIPanel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UIPanel___ctor__);
  UIPanel_TypeInfo->static_fields->list = (struct System_Collections_Generic_List_UIPanel__o *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)UIPanel_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
  v8 = (System_Collections_Generic_HashSet_T__o *)sub_1C715FC(System_Collections_Generic_HashSet_UIPanel__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v8,
    (const MethodInfo_36C7184 *)Method_System_Collections_Generic_HashSet_UIPanel___ctor__);
  static_fields = UIPanel_TypeInfo->static_fields;
  static_fields->updateAgainPanels = (struct System_Collections_Generic_HashSet_UIPanel__o *)v8;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&static_fields->updateAgainPanels,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = sub_1C71458(float___TypeInfo, 4);
  v17 = UIPanel_TypeInfo->static_fields;
  v17->mTemp = (struct System_Single_array *)v16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v17->mTemp, v16, v18, v19, v20, v21, v22, v23);
  v24 = sub_1C71458(UnityEngine_Vector3___TypeInfo, 4);
  v25 = UIPanel_TypeInfo->static_fields;
  v25->mCorners = (struct UnityEngine_Vector3_array *)v24;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v25->mCorners, v24, v26, v27, v28, v29, v30, v31);
  v32 = UIPanel_TypeInfo->static_fields;
  v32->mUpdateFrame = -1;
  v32->mUpdating = 0;
}


void UIPanel___ctor(UIPanel_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UnityEngine_Matrix4x4_StaticFields *static_fields; // x8
  __int128 v18; // q1
  __int128 v19; // q2
  __int128 v20; // q3
  __int128 v21; // q4
  UnityEngine_Vector2_c *v27; // x8
  struct UnityEngine_Vector2_o zeroVector; // d0

  if ( (byte_4CCBA56 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UIDrawCall__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C713B0(&UIRect_TypeInfo);
    byte_4CCBA56 = 1;
  }
  this->fields.showInPanelTool = 1;
  this->fields.cullWhileDragging = 1;
  this->fields.softBorderPadding = 1;
  this->fields.startingRenderQueue = 3000;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.widgets = (struct System_Collections_Generic_List_UIWidget__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.widgets, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UIDrawCall__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UIDrawCall___ctor__);
  this->fields.drawCalls = (struct System_Collections_Generic_List_UIDrawCall__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.drawCalls, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !byte_4CC8DB0 )
  {
    sub_1C713B0(&UnityEngine_Matrix4x4_TypeInfo);
    byte_4CC8DB0 = 1;
  }
  static_fields = UnityEngine_Matrix4x4_TypeInfo->static_fields;
  v18 = *(_OWORD *)&static_fields->identityMatrix.fields.m02;
  v19 = *(_OWORD *)&static_fields->identityMatrix.fields.m03;
  v20 = *(_OWORD *)&static_fields->identityMatrix.fields.m00;
  v21 = *(_OWORD *)&static_fields->identityMatrix.fields.m01;
  this->fields.mAlpha = 1.0;
  *(_OWORD *)&this->fields.worldToLocal.fields.m03 = v19;
  this->fields.drawCallClipRange = (struct UnityEngine_Vector4_o)xmmword_CEEB10;
  *(_OWORD *)&this->fields.worldToLocal.fields.m01 = v21;
  *(_OWORD *)&this->fields.worldToLocal.fields.m02 = v18;
  __asm { FMOV            V0.2S, #4.0 }
  *(_OWORD *)&this->fields.worldToLocal.fields.m00 = v20;
  this->fields.mClipRange = (struct UnityEngine_Vector4_o)xmmword_CF0540;
  this->fields.mClipSoftness = _D0;
  if ( !byte_4CC0BE9 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CC0BE9 = 1;
  }
  v27 = UnityEngine_Vector2_TypeInfo;
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&this->fields.mUpdatedFrame = -1;
  this->fields.mClipOffset = zeroVector;
  this->fields.mLayer = -1;
  this->fields.mMin = v27->static_fields->zeroVector;
  this->fields.mMax = v27->static_fields->zeroVector;
  if ( !UIRect_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
  UIRect___ctor((UIRect_o *)this, 0);
}


void UIPanel__AddWidget(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *widgets; // x0
  __int64 size; // x8
  struct System_Object_array *v12; // x9
  _QWORD *v13; // x10
  int32_t v14; // w10
  Il2CppClass **v15; // x8
  const MethodInfo *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  const MethodInfo *v19; // x2
  Il2CppObject *Item; // x0
  struct System_Collections_Generic_List_UIWidget__o *v21; // x8
  int v22; // w21
  Il2CppObject *v23; // x0
  int32_t v24; // w1
  const MethodInfo_38114C8 *v25; // x3

  if ( (byte_4CCBA4D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__Insert__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    byte_4CCBA4D = 1;
  }
  widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
  this->fields.mUpdateScroll = 1;
  if ( !widgets )
    goto LABEL_26;
  size = widgets->fields._size;
  if ( !(_DWORD)size )
  {
    items = widgets->fields._items;
    v18 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++widgets->fields._version;
    if ( items )
    {
      if ( LODWORD(items->max_length) )
      {
        widgets->fields._size = 1;
        items->m_Items[0] = (Il2CppObject *)w;
        sub_1C71354((GrandQuestFolderBoardItem_o *)items->m_Items, (int32_t)w, (int32_t)method, v3, v4, v5, v6, v7);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          widgets,
          (Il2CppObject *)w,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
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
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
    widgets = (System_Collections_Generic_List_object__o *)UIWidget__PanelCompareFunc(w, (UIWidget_o *)Item, 0);
    v21 = this->fields.widgets;
    if ( v21 )
    {
      if ( (_DWORD)widgets == -1 )
      {
        widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
        v24 = 0;
        v25 = (const MethodInfo_38114C8 *)Method_System_Collections_Generic_List_UIWidget__Insert__;
        goto LABEL_24;
      }
      v22 = v21->fields._size;
      do
      {
        if ( v22 <= 0 )
          goto LABEL_25;
        widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
        if ( !widgets )
          goto LABEL_26;
        v23 = System_Collections_Generic_List_object___get_Item(
                widgets,
                --v22,
                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
      }
      while ( UIWidget__PanelCompareFunc(w, (UIWidget_o *)v23, 0) == -1 );
      widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
      if ( widgets )
      {
        v24 = v22 + 1;
        v25 = (const MethodInfo_38114C8 *)Method_System_Collections_Generic_List_UIWidget__Insert__;
LABEL_24:
        System_Collections_Generic_List_object___Insert(widgets, v24, (Il2CppObject *)w, v25);
        goto LABEL_25;
      }
    }
LABEL_26:
    sub_1C71608(widgets, w);
  }
  v12 = widgets->fields._items;
  v13 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++widgets->fields._version;
  if ( !v12 )
    goto LABEL_26;
  if ( (unsigned int)size >= LODWORD(v12->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      widgets,
      (Il2CppObject *)w,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = size + 1;
    v15 = &v12->obj.klass + size;
    widgets->fields._size = v14;
    v15[4] = (Il2CppClass *)w;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)w, (int32_t)method, v3, v4, v5, v6, v7);
  }
  UIPanel__SortWidgets(this, v16);
LABEL_25:
  UIPanel__FindDrawCall(this, w, v19);
}


bool UIPanel__Affects(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *panel; // x20
  int32_t clipCount; // w0

  if ( (byte_4CCBA3D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA3D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)w, 0, 0);
  if ( !v5 )
  {
    if ( !w )
LABEL_22:
      sub_1C71608(v5, v6);
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
        clipCount = UIPanel__get_clipCount(this, v6);
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
  bool *p_mHalfPixelOffset; // x20
  int32_t platform; // w0
  bool v19; // w0
  System_String_o *graphicsDeviceVersion; // x0
  __int64 v21; // x1

  if ( (byte_4CCBA3F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Application_TypeInfo);
    sub_1C713B0(&StringLiteral_5272/*"Direct3D"*/);
    byte_4CCBA3F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mGo = gameObject;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mGo, (int32_t)gameObject, v4, v5, v6, v7, v8, v9);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this->fields.mTrans = transform;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mTrans, (int32_t)transform, v11, v12, v13, v14, v15, v16);
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
        sub_1C71608(0, v21);
      v19 = System_String__Contains(graphicsDeviceVersion, (System_String_o *)StringLiteral_5272/*"Direct3D"*/, 0);
    }
    else
    {
      v19 = 0;
    }
    *p_mHalfPixelOffset = v19;
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
  __int64 v9; // x1

  if ( (byte_4CCBA39 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA39 = 1;
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
      sub_1C71608(v8, v9);
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
  __int64 v6; // x1
  int32_t mDepth; // w8
  int32_t v8; // w9
  int32_t InstanceID; // w20

  if ( (byte_4CCBA2F & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA2F = 1;
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
    sub_1C71608(v5, v6);
  mDepth = a->fields.mDepth;
  v8 = b->fields.mDepth;
  if ( mDepth < v8 )
    return -1;
  if ( mDepth > v8 )
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
  __int64 v19; // x1
  float pixelSizeAdjustment; // s0
  float v21; // s10
  float v22; // s1
  float v23; // s9
  float v24; // s2
  float v25; // s8
  float v26; // s1
  float v27; // s2
  Il2CppObject *Component_object; // x19
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBA50 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA50 = 1;
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
  v21 = v16
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
  v23 = v16 * v22;
  v25 = v16 * v24;
  if ( (float)((float)(v25 * v25) + (float)((float)(v21 * v21) + (float)(v23 * v23))) <= 0.0 )
    return 0;
  if ( !target )
LABEL_22:
    sub_1C71608(v18, v19);
  if ( !immediate )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0);
    localPosition = UnityEngine_Transform__get_localPosition(target, 0);
    localPosition.fields.x = v21 + localPosition.fields.x;
    localPosition.fields.y = v23 + localPosition.fields.y;
    localPosition.fields.z = v25 + localPosition.fields.z;
    v18 = SpringPosition__Begin(gameObject, localPosition, 13.0, 0);
    if ( v18 )
    {
      *(_WORD *)&v18->fields.worldSpace = 256;
      return 1;
    }
    goto LABEL_22;
  }
  v31 = UnityEngine_Transform__get_localPosition(target, 0);
  v31.fields.x = v21 + v31.fields.x;
  v31.fields.y = v23 + v31.fields.y;
  v31.fields.z = v25 + v31.fields.z;
  UnityEngine_Transform__set_localPosition(target, v31, 0);
  v26 = v23 + targetBounds->fields.m_Center.fields.y;
  v27 = v25 + targetBounds->fields.m_Center.fields.z;
  targetBounds->fields.m_Center.fields.x = v21 + targetBounds->fields.m_Center.fields.x;
  targetBounds->fields.m_Center.fields.y = v26;
  targetBounds->fields.m_Center.fields.z = v27;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)target,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SpringPosition___);
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


bool UIPanel__ConstrainTargetToBounds_49486996(
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
  NGUIMath__CalculateRelativeWidgetBounds_49592104(&v10, cachedTransform, target, 0);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *v21; // x24
  UnityEngine_Object_o *v22; // x25
  UnityEngine_Object_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x8
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  GrandQuestFolderBoardItem_c *klass; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t mDepth; // w8
  char *v61; // x26
  int32_t v62; // w8
  BetterList_Vector3__o *v63; // x4
  BetterList_Vector4__o *v64; // x5
  UIWidget_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  System_Delegate_o *v72; // x0
  System_Delegate_o *v73; // x8
  UIDrawCall_OnRenderCallback_c *v74; // x1
  struct UIDrawCall_OnRenderCallback_o **v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  __int64 v82; // x8
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  GrandQuestFolderBoardItem_c *v87; // x1
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  UIPanel_o *v100; // x0
  UIDrawCall_o *v101; // x1
  const MethodInfo *v102; // x2
  GrandQuestFolderBoardItem_o *p_mOnRender; // [xsp+8h] [xbp-68h]

  if ( (byte_4CCBA47 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIDrawCall_OnRenderCallback_TypeInfo);
    sub_1C713B0(&UIDrawCall_TypeInfo);
    byte_4CCBA47 = 1;
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
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
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
  p_mOnRender = (GrandQuestFolderBoardItem_o *)&this->fields.mOnRender;
  while ( v13 < *((_DWORD *)drawCalls + 6) )
  {
    drawCalls = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)drawCalls,
                  v13,
                  (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
    if ( !drawCalls )
      goto LABEL_9;
    v14 = (UIWidget_o *)drawCalls;
    if ( UIWidget__get_isVisible((UIWidget_o *)drawCalls, 0) && UIWidget__get_hasVertices(v14, 0) )
    {
      v21 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v14->klass->vtable._24_get_material.methodPtr)(
                                      v14,
                                      v14->klass->vtable._24_get_material.method);
      v22 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v14->klass->vtable._26_get_mainTexture.methodPtr)(
                                      v14,
                                      v14->klass->vtable._26_get_mainTexture.method);
      v23 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v14->klass->vtable._28_get_shader.methodPtr)(
                                      v14,
                                      v14->klass->vtable._28_get_shader.method);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v8, v21, 0) )
        goto LABEL_95;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v9, v22, 0) )
        goto LABEL_95;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v10, v23, 0) )
      {
LABEL_95:
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        drawCalls = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
        if ( ((unsigned __int8)drawCalls & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_9;
          v30 = *((_QWORD *)v11 + 10);
          if ( !v30 )
            goto LABEL_9;
          if ( *(_DWORD *)(v30 + 24) )
          {
            drawCalls = this->fields.drawCalls;
            if ( !drawCalls )
              goto LABEL_9;
            v31 = *((_QWORD *)drawCalls + 2);
            v32 = Method_System_Collections_Generic_List_UIDrawCall__Add__;
            ++*((_DWORD *)drawCalls + 7);
            if ( !v31 )
              goto LABEL_9;
            v33 = *((int *)drawCalls + 6);
            if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)drawCalls,
                (Il2CppObject *)v11,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
            }
            else
            {
              v34 = v31 + 8 * v33;
              *((_DWORD *)drawCalls + 6) = v33 + 1;
              *(_QWORD *)(v34 + 32) = v11;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v34 + 32), (int32_t)v11, v24, v25, v26, v27, v28, v29);
            }
            UIDrawCall__UpdateGeometry((UIDrawCall_o *)v11, v12, 0);
            klass = p_mOnRender->klass;
            *((_QWORD *)v11 + 28) = p_mOnRender->klass;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 224), (int32_t)klass, v36, v37, v38, v39, v40, v41);
            p_mOnRender->klass = 0;
            sub_1C71354(p_mOnRender, 0, v42, v43, v44, v45, v46, v47);
            v12 = 0;
            v11 = 0;
          }
        }
      }
      else
      {
        v23 = v10;
        v22 = v9;
        v21 = v8;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
        goto LABEL_96;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
        goto LABEL_96;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
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
                        (UnityEngine_Material_o *)v21,
                        (UnityEngine_Texture_o *)v22,
                        (UnityEngine_Shader_o *)v23,
                        0);
          if ( !drawCalls )
            goto LABEL_9;
          mDepth = v14->fields.mDepth;
          *((_QWORD *)drawCalls + 7) = this;
          v61 = (char *)drawCalls + 56;
          v11 = (char *)drawCalls;
          *((_DWORD *)drawCalls + 9) = mDepth;
          *((_DWORD *)drawCalls + 10) = mDepth;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)((char *)drawCalls + 56),
            (int32_t)this,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
          v61[64] = v14->fields.mUseOriginalMaterial;
        }
        else
        {
          if ( !v11 )
            goto LABEL_9;
          v62 = v14->fields.mDepth;
          if ( v62 < *((_DWORD *)v11 + 9) )
            *((_DWORD *)v11 + 9) = v62;
          if ( v62 > *((_DWORD *)v11 + 10) )
            *((_DWORD *)v11 + 10) = v62;
        }
        v14->fields.drawCall = (struct UIDrawCall_o *)v11;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->fields.drawCall, (int32_t)v11, v48, v49, v50, v51, v52, v53);
        if ( this->fields.generateNormals )
        {
          v63 = (BetterList_Vector3__o *)*((_QWORD *)v11 + 11);
          v64 = (BetterList_Vector4__o *)*((_QWORD *)v11 + 12);
          v65 = v14;
        }
        else
        {
          v65 = v14;
          v63 = 0;
          v64 = 0;
        }
        UIWidget__WriteToBuffers(
          v65,
          *((BetterList_Vector3__o **)v11 + 10),
          *((BetterList_Vector2__o **)v11 + 13),
          *((BetterList_Color32__o **)v11 + 14),
          v63,
          v64,
          0);
        method = (const MethodInfo *)v14->fields.mOnRender;
        ++v12;
        if ( method )
        {
          if ( p_mOnRender->klass )
          {
            v72 = System_Delegate__Combine((System_Delegate_o *)p_mOnRender->klass, (System_Delegate_o *)method, 0);
            v73 = v72;
            if ( v72 )
            {
              v74 = UIDrawCall_OnRenderCallback_TypeInfo;
              if ( (UIDrawCall_OnRenderCallback_c *)v72->klass != UIDrawCall_OnRenderCallback_TypeInfo
                || (v75 = &this->fields.mOnRender,
                    p_mOnRender->klass = (GrandQuestFolderBoardItem_c *)v73,
                    (UIDrawCall_OnRenderCallback_c *)v73->klass != v74) )
              {
                sub_1C719A4(v73);
                UIPanel__FillDrawCall(v100, v101, v102);
                return;
              }
            }
            else
            {
              v75 = &this->fields.mOnRender;
              p_mOnRender->klass = 0;
            }
            LODWORD(method) = (_DWORD)v73;
          }
          else
          {
            v75 = &this->fields.mOnRender;
            p_mOnRender->klass = (GrandQuestFolderBoardItem_c *)method;
          }
          sub_1C71354((GrandQuestFolderBoardItem_o *)v75, (int32_t)method, v66, v67, v68, v69, v70, v71);
        }
      }
    }
    else
    {
      v14->fields.drawCall = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->fields.drawCall, 0, v15, v16, v17, v18, v19, v20);
      v23 = v10;
      v22 = v9;
      v21 = v8;
    }
    drawCalls = this->fields.widgets;
    ++v13;
    v8 = v21;
    v9 = v22;
    v10 = v23;
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
      v82 = *((_QWORD *)v11 + 10);
      if ( v82 )
      {
        if ( !*(_DWORD *)(v82 + 24) )
          return;
        drawCalls = this->fields.drawCalls;
        if ( drawCalls )
        {
          v83 = *((_QWORD *)drawCalls + 2);
          v84 = Method_System_Collections_Generic_List_UIDrawCall__Add__;
          ++*((_DWORD *)drawCalls + 7);
          if ( v83 )
          {
            v85 = *((int *)drawCalls + 6);
            if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)drawCalls,
                (Il2CppObject *)v11,
                *(const MethodInfo_3810718 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
            }
            else
            {
              v86 = v83 + 8 * v85;
              *((_DWORD *)drawCalls + 6) = v85 + 1;
              *(_QWORD *)(v86 + 32) = v11;
              sub_1C71354((GrandQuestFolderBoardItem_o *)(v86 + 32), (int32_t)v11, v76, v77, v78, v79, v80, v81);
            }
            UIDrawCall__UpdateGeometry((UIDrawCall_o *)v11, v12, 0);
            v87 = p_mOnRender->klass;
            *((_QWORD *)v11 + 28) = p_mOnRender->klass;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 224), (int32_t)v87, v88, v89, v90, v91, v92, v93);
            p_mOnRender->klass = 0;
            sub_1C71354(p_mOnRender, 0, v94, v95, v96, v97, v98, v99);
            return;
          }
        }
      }
    }
LABEL_9:
    sub_1C71608(drawCalls, method);
  }
}


bool UIPanel__FillDrawCall(UIPanel_o *this, UIDrawCall_o *dc, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIWidget__o *widgets; // x0
  System_Delegate_o *v6; // x1
  int32_t v7; // w22
  int32_t v8; // w23
  struct UIDrawCall_OnRenderCallback_o **p_mOnRender; // x21
  UnityEngine_Object_o *Item; // x24
  UnityEngine_Object_o *monitor; // x25
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  BetterList_Vector3__o *norms; // x4
  BetterList_Vector4__o *tans; // x5
  UIWidget_o *v20; // x0
  struct UIDrawCall_OnRenderCallback_o **p_monitor; // x0
  System_Delegate_o *v22; // x0
  int v23; // w8
  UIDrawCall_OnRenderCallback_c *v24; // x1
  struct BetterList_Vector3__o *verts; // x8
  struct UIDrawCall_OnRenderCallback_o *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  bool result; // w0
  UIPanel_o *v40; // x0
  const MethodInfo *v41; // x1

  if ( (byte_4CCBA48 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIDrawCall_OnRenderCallback_TypeInfo);
    byte_4CCBA48 = 1;
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
    sub_1C71608(widgets, v6);
  v7 = 0;
  v8 = 0;
  p_mOnRender = &this->fields.mOnRender;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v8 >= widgets->fields._size )
      {
        verts = dc->fields.verts;
        if ( verts )
        {
          if ( verts->fields.size )
          {
            UIDrawCall__UpdateGeometry(dc, v7, 0);
            v26 = *p_mOnRender;
            dc->fields.onRender = *p_mOnRender;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&dc->fields.onRender, (int32_t)v26, v27, v28, v29, v30, v31, v32);
            *p_mOnRender = 0;
            sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mOnRender, 0, v33, v34, v35, v36, v37, v38);
            return 1;
          }
          return 0;
        }
        goto LABEL_42;
      }
      Item = (UnityEngine_Object_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)widgets,
                                       v8,
                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
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
          v8,
          (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_UIWidget__RemoveAt__);
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
    LODWORD(v6) = 0;
    Item[14].monitor = 0;
LABEL_25:
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_monitor, (int32_t)v6, v12, v13, v14, v15, v16, v17);
LABEL_26:
    widgets = this->fields.widgets;
    ++v8;
    if ( !widgets )
      goto LABEL_42;
  }
  if ( this->fields.generateNormals )
  {
    norms = dc->fields.norms;
    tans = dc->fields.tans;
    v20 = (UIWidget_o *)Item;
  }
  else
  {
    v20 = (UIWidget_o *)Item;
    norms = 0;
    tans = 0;
  }
  UIWidget__WriteToBuffers(v20, dc->fields.verts, dc->fields.uvs, dc->fields.cols, norms, tans, 0);
  v6 = (System_Delegate_o *)Item[8].monitor;
  ++v7;
  if ( !v6 )
    goto LABEL_26;
  if ( !*p_mOnRender )
  {
    *p_mOnRender = (struct UIDrawCall_OnRenderCallback_o *)v6;
    p_monitor = &this->fields.mOnRender;
    goto LABEL_25;
  }
  v22 = System_Delegate__Combine((System_Delegate_o *)*p_mOnRender, v6, 0);
  v23 = (int)v22;
  if ( !v22 )
  {
    *p_mOnRender = 0;
LABEL_37:
    p_monitor = &this->fields.mOnRender;
    LODWORD(v6) = v23;
    goto LABEL_25;
  }
  v24 = UIDrawCall_OnRenderCallback_TypeInfo;
  if ( (UIDrawCall_OnRenderCallback_c *)v22->klass == UIDrawCall_OnRenderCallback_TypeInfo )
  {
    *p_mOnRender = (struct UIDrawCall_OnRenderCallback_o *)v22;
    if ( (UIDrawCall_OnRenderCallback_c *)v22->klass == v24 )
      goto LABEL_37;
  }
  sub_1C719A4(v22);
  UIPanel__SortWidgets(v40, v41);
  return result;
}


UIPanel_o *UIPanel__Find(UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CCBA51 & 1) == 0 )
  {
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA51 = 1;
  }
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
  return UIPanel__Find_49487192(trans, 0, -1, v2);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  bool isVisible; // w8
  UIDrawCall_o *result; // x0
  bool hasVertices; // w8

  v4 = this;
  if ( (byte_4CCBA4C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    this = (UIPanel_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA4C = 1;
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
                                    (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( v9 )
    {
      this = (UIPanel_o *)v4->fields.drawCalls;
      if ( !this )
        goto LABEL_31;
      this = (UIPanel_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            v9 - 1,
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
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
                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
      if ( !this )
        goto LABEL_31;
      v12 = HIDWORD(this->fields.leftAnchor) - 1;
    }
  }
  while ( v11 > mDepth || v12 < mDepth );
  if ( !Item )
LABEL_31:
    sub_1C71608(this, w);
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
      sub_1C71354((GrandQuestFolderBoardItem_o *)&w->fields.drawCall, (int32_t)Item, v15, v16, v17, v18, v19, v20);
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
  struct UIPanel_o *v4; // x1
  UnityEngine_Object_o *parent; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4CCBA40 & 1) == 0 )
  {
    sub_1C713B0(&Method_NGUITools_FindInParents_UIPanel___);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA40 = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_13;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(cachedTransform, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  v4 = 0;
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    if ( !parent )
      goto LABEL_13;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)NGUITools__FindInParents_object_(
                                                   gameObject,
                                                   (const MethodInfo_31D5C14 *)Method_NGUITools_FindInParents_UIPanel___);
    v4 = (struct UIPanel_o *)cachedTransform;
  }
  if ( !this )
LABEL_13:
    sub_1C71608(cachedTransform, v4);
  this->fields.mParentPanel = v4;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mParentPanel, (int32_t)v4, v6, v7, v8, v9, v10, v11);
}


UIPanel_o *UIPanel__Find_49487192(
        UnityEngine_Transform_o *trans,
        bool createIfMissing,
        int32_t layer,
        const MethodInfo *method)
{
  Il2CppObject *v7; // x22
  _BOOL4 v8; // w8
  UIPanel_o *result; // x0

  if ( (byte_4CCBA53 & 1) == 0 )
  {
    sub_1C713B0(&Method_NGUITools_FindInParents_UIPanel____78722168);
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA53 = 1;
  }
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  v7 = NGUITools__FindInParents_object__52256108(
         trans,
         (const MethodInfo_31D5D6C *)Method_NGUITools_FindInParents_UIPanel____78722168);
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
    return NGUITools__CreateUI_49720080(trans, 0, layer, 0);
  }
  return result;
}


UIPanel_o *UIPanel__Find_49487456(UnityEngine_Transform_o *trans, bool createIfMissing, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CCBA52 & 1) == 0 )
  {
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA52 = 1;
  }
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
  return UIPanel__Find_49487192(trans, createIfMissing, -1, v3);
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
  __int64 v12; // x1
  UIRect_c *v13; // x8
  UnityEngine_Transform_o *v14; // x20
  float v15; // s0
  float v16; // s8
  float v17; // s11
  float v18; // s10
  struct UnityEngine_Vector3_array *mSides; // x21
  float v20; // s9
  float v21; // s12
  float v22; // s10
  struct UnityEngine_Vector3_array *v23; // x21
  struct UnityEngine_Vector3_array *v24; // x21
  struct UnityEngine_Vector3_array *v25; // x21
  __int64 v26; // x20
  unsigned __int64 v27; // x21
  __int64 v28; // x22
  __int64 v29; // x24
  UIRect_c *v30; // x0
  UnityEngine_Vector3_array *Sides_49730340; // x20
  UnityEngine_Object_o *anchorCamera; // x20
  UnityEngine_Camera_o *mCam; // x20
  float cameraRayDistance; // s8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v37; // x8
  float v38; // v0.s[1]
  float *p_z; // x10
  float v40; // s3
  unsigned __int64 v41; // x8
  unsigned __int64 v42; // x21
  float *v43; // x22
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBA38 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIRect_TypeInfo);
    byte_4CCBA38 = 1;
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
    v13 = UIRect_TypeInfo;
    v14 = cachedTransform;
    if ( !UIRect_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
      v13 = UIRect_TypeInfo;
    }
    if ( !v14 )
      goto LABEL_52;
    v15 = x + v6;
    v16 = (float)(y + v9) - (float)(w * 0.5);
    v17 = w + v16;
    v18 = v15 - (float)(z * 0.5);
    mSides = v13->static_fields->mSides;
    v20 = (float)(v16 + (float)(w + v16)) * 0.5;
    v44 = UnityEngine_Transform__TransformPoint_71751388(v14, v18, v20, 0.0, 0);
    if ( !mSides )
      goto LABEL_52;
    if ( LODWORD(mSides->max_length) )
    {
      mSides->m_Items[0] = v44;
      v21 = z + v18;
      v22 = (float)(v18 + v21) * 0.5;
      v23 = UIRect_TypeInfo->static_fields->mSides;
      v45 = UnityEngine_Transform__TransformPoint_71751388(v14, v22, v17, 0.0, 0);
      if ( !v23 )
        goto LABEL_52;
      if ( LODWORD(v23->max_length) > 1 )
      {
        v23->m_Items[1] = v45;
        v24 = UIRect_TypeInfo->static_fields->mSides;
        v46 = UnityEngine_Transform__TransformPoint_71751388(v14, v21, v20, 0.0, 0);
        if ( !v24 )
          goto LABEL_52;
        if ( LODWORD(v24->max_length) > 2 )
        {
          v24->m_Items[2] = v46;
          v25 = UIRect_TypeInfo->static_fields->mSides;
          v47 = UnityEngine_Transform__TransformPoint_71751388(v14, v22, v16, 0.0, 0);
          if ( !v25 )
            goto LABEL_52;
          if ( LODWORD(v25->max_length) > 3 )
          {
            v25->m_Items[3] = v47;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)relativeTo, 0, 0) )
            {
              v26 = 0;
              v27 = 0;
              while ( 1 )
              {
                cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
                if ( !UIRect_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
                  cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
                }
                v28 = *(_QWORD *)cachedTransform[7].fields.m_CachedPtr;
                if ( !v28 )
                  break;
                if ( v27 >= *(unsigned int *)(v28 + 24) )
                  goto LABEL_51;
                if ( !relativeTo )
                  break;
                v29 = v28 + v26;
                v48 = UnityEngine_Transform__InverseTransformPoint(
                        relativeTo,
                        *(UnityEngine_Vector3_o *)(v28 + v26 + 32),
                        0);
                if ( v27 >= *(unsigned int *)(v28 + 24) )
                  goto LABEL_51;
                ++v27;
                v26 += 12;
                *(UnityEngine_Vector3_o *)(v29 + 32) = v48;
                if ( v27 == 4 )
                  goto LABEL_26;
              }
LABEL_52:
              sub_1C71608(cachedTransform, v12);
            }
LABEL_26:
            v30 = UIRect_TypeInfo;
            if ( !UIRect_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UIRect_TypeInfo);
              v30 = UIRect_TypeInfo;
            }
            return v30->static_fields->mSides;
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
    Sides_49730340 = NGUITools__GetSides_49730340(mCam, cameraRayDistance, 0);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !cachedTransform )
      goto LABEL_52;
    position = UnityEngine_Transform__get_position(cachedTransform, 0);
    if ( !Sides_49730340 )
      goto LABEL_52;
    max_length_low = LODWORD(Sides_49730340->max_length);
    v37 = 0;
    v38 = position.fields.y;
    p_z = &Sides_49730340->m_Items[0].fields.z;
    do
    {
      if ( v37 >= max_length_low )
        goto LABEL_51;
      ++v37;
      v40 = position.fields.z + *p_z;
      *((float32x2_t *)p_z - 1) = vadd_f32(*(float32x2_t *)&position.fields.x, *(float32x2_t *)(p_z - 2));
      *p_z = v40;
      p_z += 3;
    }
    while ( v37 != 4 );
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)relativeTo,
                                                   0,
                                                   0);
    if ( ((unsigned __int8)cachedTransform & 1) == 0 )
      return Sides_49730340;
    LODWORD(v41) = Sides_49730340->max_length;
    v42 = 0;
    v43 = &Sides_49730340->m_Items[0].fields.z;
    while ( v42 < (unsigned int)v41 )
    {
      if ( !relativeTo )
        goto LABEL_52;
      v50 = UnityEngine_Transform__InverseTransformPoint(relativeTo, *(UnityEngine_Vector3_o *)(v43 - 2), 0);
      v41 = LODWORD(Sides_49730340->max_length);
      if ( v42 >= v41 )
        break;
      ++v42;
      *(UnityEngine_Vector3_o *)(v43 - 2) = v50;
      v43 += 3;
      if ( v42 == 4 )
        return Sides_49730340;
    }
LABEL_51:
    sub_1C71610(cachedTransform);
  }
  return UIRect__GetSides((UIRect_o *)this, relativeTo, 0);
}


UnityEngine_Vector2_o UIPanel__GetViewSize(UIPanel_o *this, const MethodInfo *method)
{
  float z; // s0
  float w; // s1
  UnityEngine_Vector2_o screenSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CCBA55 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    byte_4CCBA55 = 1;
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
  __int64 v9; // x1
  double v10; // d0
  double v11; // d0
  double v12; // d1
  double v13; // d1
  int32_t v14; // w1
  float PixelSizeAdjustment_49896496; // s0
  float v16; // s0
  float v17; // s1
  double iptr; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CCBA54 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA54 = 1;
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
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v7 = screenSize.fields.y;
    v10 = modf(screenSize.fields.y, &iptr);
    if ( screenSize.fields.y >= 0.0 )
    {
      if ( v10 == 0.5 )
      {
        v11 = iptr;
        v12 = 1.0;
LABEL_17:
        v13 = v11 + v12;
        if ( ((__int64)v11 & 1) != 0 )
          v11 = v13;
        goto LABEL_22;
      }
      v11 = floor(v7 + 0.5);
    }
    else
    {
      if ( v10 == -0.5 )
      {
        v11 = iptr;
        v12 = -1.0;
        goto LABEL_17;
      }
      v11 = ceil(v7 + -0.5);
    }
LABEL_22:
    if ( !root )
      sub_1C71608(v8, v9);
    if ( v11 == INFINITY )
      v14 = 0x80000000;
    else
      v14 = (int)v11;
    PixelSizeAdjustment_49896496 = UIRoot__GetPixelSizeAdjustment_49896496(root, v14, 0);
    x = screenSize.fields.x * PixelSizeAdjustment_49896496;
    y = screenSize.fields.y * PixelSizeAdjustment_49896496;
  }
  v16 = x;
  v17 = y;
  result.fields.y = v17;
  result.fields.x = v16;
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

  if ( (byte_4CCBA33 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA33 = 1;
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
                                       (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
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
          UIPanel__InvalidateClipping((UIPanel_o *)Item, method);
      }
      if ( v8 == i )
        return;
      v5 = UIPanel_TypeInfo;
    }
LABEL_25:
    sub_1C71608(v5, method);
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
  __int64 v18; // x1
  UIPanel_c *v19; // x0
  float v20; // s14
  float v21; // s12
  struct System_Single_array *mTemp; // x8
  il2cpp_array_size_t max_length; // x9
  float v24; // s0
  __int64 v25; // x10
  float *v26; // x11
  float v27; // t1
  float v28; // s1
  float v29; // s1
  __int64 v30; // x10
  float *v31; // x11
  float v32; // t1
  float v33; // s2
  float v34; // s2
  __int64 v35; // x10
  float *v36; // x11
  float v37; // t1
  float v38; // s3
  float v39; // s3
  __int64 v40; // x9
  float *v41; // x8
  float v42; // t1
  float v43; // s4
  float z; // [xsp+0h] [xbp-70h]
  __int64 v46; // [xsp+80h] [xbp+10h]
  float v47; // [xsp+88h] [xbp+18h]
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  x = a.fields.x;
  y = b.fields.y;
  z = b.fields.z;
  v8 = b.fields.x;
  v9 = a.fields.z;
  v10 = a.fields.y;
  if ( (byte_4CCBA3B & 1) == 0 )
  {
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA3B = 1;
  }
  UIPanel__UpdateTransformMatrix(this, *(const MethodInfo **)&d.fields.x);
  v48.fields.x = x;
  v48.fields.y = v10;
  v48.fields.z = v9;
  v49 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v48, 0);
  v49.fields.z = z;
  v12 = v49.fields.x;
  v13 = v49.fields.y;
  v49.fields.x = v8;
  v49.fields.y = y;
  v50 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v49, 0);
  v14 = v50.fields.x;
  v15 = v50.fields.y;
  v51 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, c, 0);
  v16 = v51.fields.x;
  v17 = v51.fields.y;
  *(_QWORD *)&v51.fields.x = v46;
  v51.fields.z = v47;
  v52 = UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v51, 0);
  v19 = UIPanel_TypeInfo;
  v20 = v52.fields.x;
  v21 = v52.fields.y;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v19 = UIPanel_TypeInfo;
  }
  mTemp = v19->static_fields->mTemp;
  if ( !mTemp )
    sub_1C71608(v19, v18);
  max_length = mTemp->max_length;
  if ( !(_DWORD)max_length
    || (mTemp->m_Items[0] = v12, (_DWORD)max_length == 1)
    || (mTemp->m_Items[1] = v14, (unsigned int)max_length <= 2)
    || (mTemp->m_Items[2] = v16, (_DWORD)max_length == 3) )
  {
    sub_1C71610(v19);
  }
  mTemp->m_Items[3] = v20;
  if ( (int)max_length < 2 )
  {
    mTemp->m_Items[0] = v13;
    mTemp->m_Items[1] = v15;
    mTemp->m_Items[2] = v17;
    mTemp->m_Items[3] = v21;
    v29 = v12;
    v39 = v13;
  }
  else
  {
    if ( v14 >= v12 )
      v24 = v12;
    else
      v24 = v14;
    v25 = (unsigned int)max_length - 2LL;
    v26 = &mTemp->m_Items[2];
    do
    {
      v27 = *v26++;
      v28 = v27;
      if ( v27 < v24 )
        v24 = v28;
      --v25;
    }
    while ( v25 );
    if ( v14 <= v12 )
      v29 = v12;
    else
      v29 = v14;
    v30 = (unsigned int)max_length - 2LL;
    v31 = &mTemp->m_Items[2];
    do
    {
      v32 = *v31++;
      v33 = v32;
      if ( v32 > v29 )
        v29 = v33;
      --v30;
    }
    while ( v30 );
    if ( v15 >= v13 )
      v34 = v13;
    else
      v34 = v15;
    v35 = (unsigned int)max_length - 2LL;
    mTemp->m_Items[0] = v13;
    mTemp->m_Items[1] = v15;
    mTemp->m_Items[2] = v17;
    mTemp->m_Items[3] = v21;
    v36 = &mTemp->m_Items[2];
    do
    {
      v37 = *v36++;
      v38 = v37;
      if ( v37 < v34 )
        v34 = v38;
      --v35;
    }
    while ( v35 );
    if ( v15 <= v13 )
      v39 = v13;
    else
      v39 = v15;
    v40 = (unsigned int)max_length - 2LL;
    if ( v40 )
    {
      v41 = &mTemp->m_Items[2];
      do
      {
        v42 = *v41++;
        v43 = v42;
        if ( v42 > v39 )
          v39 = v43;
        --v40;
      }
      while ( v40 );
    }
    v13 = v34;
    v12 = v24;
  }
  return v29 >= this->fields.mMin.fields.x
      && v39 >= this->fields.mMin.fields.y
      && v12 <= this->fields.mMax.fields.x
      && v13 <= this->fields.mMax.fields.y;
}


bool UIPanel__IsVisible_49440772(UIPanel_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
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


bool UIPanel__IsVisible_49475524(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  UnityEngine_Vector3_o v7; // x1
  const MethodInfo *v8; // x3
  char v9; // w22

  if ( (byte_4CCBA3C & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA3C = 1;
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
        sub_1C71608(v6, *(_QWORD *)&v7.fields.x);
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
      sub_1C71610(v6);
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
  const MethodInfo *v6; // x1
  struct UIPanel_StaticFields *static_fields; // x9
  System_Collections_Generic_HashSet_T__o *updateAgainPanels; // x8
  struct System_Collections_Generic_List_UIPanel__o *list; // x8
  int32_t v10; // w19
  int v11; // w23
  __int64 *v12; // x8
  struct System_Collections_Generic_HashSet_UIPanel__o *v13; // x8
  __int64 v14; // x19
  int v15; // w8
  unsigned int v16; // w23
  UIPanel_c *v17; // x0
  __int64 v18; // x8
  int32_t v19; // w19
  int v20; // w24
  int v21; // w23
  __int64 v22; // x8
  int v23; // w25
  __int64 v24; // x20
  __int64 v25; // x8
  int v26; // w8
  int v27; // w8
  __int64 v28; // x8
  int v29; // w8

  if ( (byte_4CCBA44 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_UIPanel__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_UIPanel__CopyTo__);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_UIPanel__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_1C713B0(&UIPanel___TypeInfo);
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA44 = 1;
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
      (const MethodInfo_36C7818 *)Method_System_Collections_Generic_HashSet_UIPanel__Clear__);
    frameCount = (__int64)UIPanel_TypeInfo;
    list = UIPanel_TypeInfo->static_fields->list;
    if ( !list )
      goto LABEL_55;
    v10 = 0;
    v11 = list->fields._size & ~(list->fields._size >> 31);
    while ( 1 )
    {
      if ( !*(_DWORD *)(frameCount + 224) )
      {
        j_il2cpp_runtime_class_init_0(frameCount);
        frameCount = (__int64)UIPanel_TypeInfo;
      }
      v12 = *(__int64 **)(frameCount + 184);
      if ( v11 == v10 )
        break;
      frameCount = *v12;
      if ( !*v12 )
        goto LABEL_55;
      frameCount = (__int64)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)frameCount,
                              v10,
                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
      if ( !frameCount )
        goto LABEL_55;
      UIPanel__UpdateSelf((UIPanel_o *)frameCount, v6);
      frameCount = (__int64)UIPanel_TypeInfo;
      ++v10;
    }
    v13 = (struct System_Collections_Generic_HashSet_UIPanel__o *)v12[1];
    if ( !v13 )
LABEL_55:
      sub_1C71608(frameCount, v6);
    if ( v13->fields._count >= 1 )
    {
      if ( !*(_DWORD *)(frameCount + 224) )
      {
        j_il2cpp_runtime_class_init_0(frameCount);
        v13 = UIPanel_TypeInfo->static_fields->updateAgainPanels;
        if ( !v13 )
          goto LABEL_55;
      }
      frameCount = sub_1C71458(UIPanel___TypeInfo, (unsigned int)v13->fields._count);
      if ( !UIPanel_TypeInfo->static_fields->updateAgainPanels )
        goto LABEL_55;
      v14 = frameCount;
      System_Collections_Generic_HashSet_object___CopyTo_57444000(
        (System_Collections_Generic_HashSet_T__o *)UIPanel_TypeInfo->static_fields->updateAgainPanels,
        (System_Object_array *)frameCount,
        (const MethodInfo_36C86A0 *)Method_System_Collections_Generic_HashSet_UIPanel__CopyTo__);
      if ( !v14 )
        goto LABEL_55;
      v15 = *(_DWORD *)(v14 + 24);
      if ( v15 >= 1 )
      {
        v16 = 0;
        do
        {
          if ( v16 >= v15 )
            sub_1C71610(frameCount);
          frameCount = *(_QWORD *)(v14 + 8LL * (int)v16 + 32);
          if ( !frameCount )
            goto LABEL_55;
          UIPanel__UpdateSelf((UIPanel_o *)frameCount, v6);
          v15 = *(_DWORD *)(v14 + 24);
        }
        while ( (int)++v16 < v15 );
      }
      v17 = UIPanel_TypeInfo;
      if ( !UIPanel_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
        v17 = UIPanel_TypeInfo;
      }
      frameCount = (__int64)v17->static_fields->updateAgainPanels;
      if ( !frameCount )
        goto LABEL_55;
      System_Collections_Generic_HashSet_object___Clear(
        (System_Collections_Generic_HashSet_T__o *)frameCount,
        (const MethodInfo_36C7818 *)Method_System_Collections_Generic_HashSet_UIPanel__Clear__);
      frameCount = (__int64)UIPanel_TypeInfo;
    }
    if ( !*(_DWORD *)(frameCount + 224) )
    {
      j_il2cpp_runtime_class_init_0(frameCount);
      frameCount = (__int64)UIPanel_TypeInfo;
    }
    v18 = **(_QWORD **)(frameCount + 184);
    if ( !v18 )
      goto LABEL_55;
    v19 = 0;
    v20 = 3000;
    v21 = *(_DWORD *)(v18 + 24) & ~(*(int *)(v18 + 24) >> 31);
    while ( 1 )
    {
      if ( !*(_DWORD *)(frameCount + 224) )
      {
        j_il2cpp_runtime_class_init_0(frameCount);
        frameCount = (__int64)UIPanel_TypeInfo;
      }
      v22 = *(_QWORD *)(frameCount + 184);
      if ( v21 == v19 )
        break;
      frameCount = *(_QWORD *)v22;
      if ( !*(_QWORD *)v22 )
        goto LABEL_55;
      frameCount = (__int64)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)frameCount,
                              v19,
                              (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
      if ( !frameCount )
        goto LABEL_55;
      v23 = *(_DWORD *)(frameCount + 168);
      v24 = frameCount;
      if ( v23 )
      {
        UIPanel__UpdateDrawCalls((UIPanel_o *)frameCount, v6);
        v25 = *(_QWORD *)(v24 + 184);
        if ( !v25 )
          goto LABEL_55;
        v26 = *(_DWORD *)(v25 + 24);
        if ( v23 == 1 )
        {
          if ( v26 )
          {
            v27 = *(_DWORD *)(v24 + 172) + v26;
            if ( v20 <= v27 )
              v20 = v27;
          }
        }
        else if ( v26 )
        {
          v29 = *(_DWORD *)(v24 + 172);
          if ( v20 <= v29 + 1 )
            v20 = v29 + 1;
        }
      }
      else
      {
        *(_DWORD *)(frameCount + 172) = v20;
        UIPanel__UpdateDrawCalls((UIPanel_o *)frameCount, v6);
        v28 = *(_QWORD *)(v24 + 184);
        if ( !v28 )
          goto LABEL_55;
        v20 += *(_DWORD *)(v28 + 24);
      }
      frameCount = (__int64)UIPanel_TypeInfo;
      ++v19;
    }
    *(_BYTE *)(v22 + 36) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void UIPanel__OnAnchor(UIPanel_o *this, const MethodInfo *method)
{
  void *cachedTransform; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Transform_o *v5; // x21
  UnityEngine_Transform_o *parent; // x20
  const MethodInfo *v7; // x1
  UnityEngine_Vector2_o ViewSize; // kr00_8
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  struct UIRect_AnchorPoint_o *bottomAnchor; // x9
  UnityEngine_Object_o *target; // x21
  UnityEngine_Object_o *v12; // x22
  float x; // s9
  float y; // s8
  struct UIRect_AnchorPoint_o *v15; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  UnityEngine_Object_o *v17; // x21
  UnityEngine_Object_o *v18; // x22
  struct UIRect_AnchorPoint_o *v19; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x9
  UnityEngine_Object_o *v21; // x21
  UnityEngine_Object_o *v22; // x22
  float *v23; // x21
  struct UIRect_AnchorPoint_o *v24; // x8
  float v25; // s0
  struct UIRect_AnchorPoint_o *v26; // x8
  struct UIRect_AnchorPoint_o *v27; // x9
  float v28; // s10
  int absolute; // s13
  float v30; // s0
  struct UIRect_AnchorPoint_o *v31; // x8
  struct UIRect_AnchorPoint_o *v32; // x9
  float v33; // s11
  int v34; // s14
  float v35; // s0
  struct UIRect_AnchorPoint_o *v36; // x8
  struct UIRect_AnchorPoint_o *v37; // x9
  float v38; // s12
  int v39; // s15
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

  if ( (byte_4CCBA43 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA43 = 1;
  }
  if ( this->fields.mClipping )
  {
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !cachedTransform )
      goto LABEL_103;
    v5 = (UnityEngine_Transform_o *)cachedTransform;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)cachedTransform, 0);
    ViewSize = UIPanel__GetViewSize(this, v7);
    localPosition = UnityEngine_Transform__get_localPosition(v5, 0);
    leftAnchor = this->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_103;
    bottomAnchor = this->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_103;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    v12 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (void *)UnityEngine_Object__op_Equality(target, v12, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      v15 = this->fields.leftAnchor;
      if ( !v15 )
        goto LABEL_103;
      rightAnchor = this->fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_103;
      v17 = (UnityEngine_Object_o *)v15->fields.target;
      v18 = (UnityEngine_Object_o *)rightAnchor->fields.target;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      cachedTransform = (void *)UnityEngine_Object__op_Equality(v17, v18, 0);
      if ( ((unsigned __int8)cachedTransform & 1) != 0 )
      {
        v19 = this->fields.leftAnchor;
        if ( !v19 )
          goto LABEL_103;
        topAnchor = this->fields.topAnchor;
        if ( !topAnchor )
          goto LABEL_103;
        v21 = (UnityEngine_Object_o *)v19->fields.target;
        v22 = (UnityEngine_Object_o *)topAnchor->fields.target;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        cachedTransform = (void *)UnityEngine_Object__op_Equality(v21, v22, 0);
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
          v23 = (float *)cachedTransform;
          if ( *((_DWORD *)cachedTransform + 6) > 2u )
          {
            v24 = this->fields.leftAnchor;
            if ( !v24 )
              goto LABEL_103;
            v25 = NGUIMath__Lerp(
                    *((float *)cachedTransform + 8),
                    *((float *)cachedTransform + 14),
                    v24->fields.relative,
                    0);
            v26 = this->fields.leftAnchor;
            if ( !v26 )
              goto LABEL_103;
            if ( *((_DWORD *)v23 + 6) > 2u )
            {
              v27 = this->fields.rightAnchor;
              if ( !v27 )
                goto LABEL_103;
              v28 = v25;
              absolute = v26->fields.absolute;
              v30 = NGUIMath__Lerp(v23[8], v23[14], v27->fields.relative, 0);
              v31 = this->fields.rightAnchor;
              if ( !v31 )
                goto LABEL_103;
              if ( *((_DWORD *)v23 + 6) > 3u )
              {
                v32 = this->fields.bottomAnchor;
                if ( !v32 )
                  goto LABEL_103;
                v33 = v30;
                v34 = v31->fields.absolute;
                v35 = NGUIMath__Lerp(v23[18], v23[12], v32->fields.relative, 0);
                v36 = this->fields.bottomAnchor;
                if ( !v36 )
                  goto LABEL_103;
                if ( *((_DWORD *)v23 + 6) > 3u )
                {
                  v37 = this->fields.topAnchor;
                  if ( v37 )
                  {
                    v38 = v35;
                    v39 = v36->fields.absolute;
                    v40 = NGUIMath__Lerp(v23[18], v23[12], v37->fields.relative, 0);
                    v41 = this->fields.topAnchor;
                    if ( v41 )
                    {
                      v42 = v28 + (float)absolute;
                      v43 = v38 + (float)v39;
                      v44 = (float)v41->fields.absolute;
                      v45 = v33 + (float)v34;
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
                      UIPanel__set_baseClipRegion(this, *(UnityEngine_Vector4_o *)&v79, v4);
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
              sub_1C71608(cachedTransform, v4);
            }
LABEL_104:
            sub_1C71610(cachedTransform);
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

  if ( (byte_4CCBA42 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__Remove__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIDrawCall_TypeInfo);
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA42 = 1;
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
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
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
                                                                   (const MethodInfo_3811C40 *)Method_System_Collections_Generic_List_UIPanel__Remove__),
        *(_QWORD *)&this->fields.mMatrixFrame = -1,
        (list = UIPanel_TypeInfo->static_fields->list) == 0) )
  {
LABEL_13:
    sub_1C71608(drawCalls, method);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_Object_o *mParentPanel; // x20
  UnityEngine_Object_o *anchorCamera; // x20
  bool v15; // w0
  Il2CppObject *v16; // x20
  UnityEngine_Rigidbody_o *v17; // x20
  UIPanel_c *v18; // x0
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x8
  System_Collections_Generic_List_object__o *v23; // x19
  System_Comparison_T__o *v24; // x20

  if ( (byte_4CCBA41 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_UIPanel__TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UICamera___);
    sub_1C713B0(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__Contains__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__Sort__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_UIPanel_CompareFunc__);
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA41 = 1;
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
         (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_UIPanel__Contains__) )
  {
    return;
  }
  UIRect__OnInit((UIRect_o *)this, 0);
  UIPanel__FindParent(this, v5);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
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
      v15 = UnityEngine_Object__op_Inequality(anchorCamera, 0, 0);
      v16 = 0;
      if ( v15 )
      {
        list = (System_Collections_Generic_List_object__o *)this->fields.mCam;
        if ( !list )
          goto LABEL_35;
        v16 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)list,
                (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UICamera___);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      list = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v16,
                                                            0,
                                                            0);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_35;
        if ( HIDWORD(v16[2].klass) <= 1 )
        {
          list = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
          if ( !list )
            goto LABEL_35;
          list = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)list,
                                                                (const MethodInfo_31A2DE8 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
          if ( !list )
            goto LABEL_35;
          v17 = (UnityEngine_Rigidbody_o *)list;
          UnityEngine_Rigidbody__set_isKinematic((UnityEngine_Rigidbody_o *)list, 1, 0);
          UnityEngine_Rigidbody__set_useGravity(v17, 0, 0);
        }
      }
    }
  }
  this->fields.mRebuild = 1;
  *(_QWORD *)&this->fields.mMatrixFrame = -1;
  v18 = UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    v18 = UIPanel_TypeInfo;
  }
  list = (System_Collections_Generic_List_object__o *)v18->static_fields->list;
  if ( !list )
    goto LABEL_35;
  items = list->fields._items;
  v20 = Method_System_Collections_Generic_List_UIPanel__Add__;
  ++list->fields._version;
  if ( !items )
    goto LABEL_35;
  size = list->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v22[4] = (Il2CppClass *)this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)this, v7, v8, v9, v10, v11, v12);
  }
  v23 = (System_Collections_Generic_List_object__o *)UIPanel_TypeInfo->static_fields->list;
  v24 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_UIPanel__TypeInfo);
  System_Comparison_object____ctor(v24, 0, Method_UIPanel_CompareFunc__, 0);
  if ( !v23 )
LABEL_35:
    sub_1C71608(list, method);
  System_Collections_Generic_List_object___Sort_58794460(
    v23,
    v24,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_UIPanel__Sort__);
}


void UIPanel__OnStart(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mGo; // x0

  mGo = this->fields.mGo;
  if ( !mGo )
    sub_1C71608(0, method);
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

  if ( (byte_4CCBA4F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA4F = 1;
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
                                                            (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
      if ( Item )
      {
        UIPanel__LateUpdate((UIPanel_o *)Item, method);
        return;
      }
    }
LABEL_13:
    sub_1C71608(Item, method);
  }
}


void UIPanel__RemoveWidget(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIWidget__o *widgets; // x0
  UnityEngine_Object_o *drawCall; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct UIDrawCall_o *v13; // x8
  int32_t mDepth; // w9
  GrandQuestFolderBoardItem_o *p_drawCall; // x0

  if ( (byte_4CCBA4E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__Remove__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA4E = 1;
  }
  widgets = this->fields.widgets;
  if ( !widgets )
    goto LABEL_15;
  widgets = (struct System_Collections_Generic_List_UIWidget__o *)System_Collections_Generic_List_object___Remove(
                                                                    (System_Collections_Generic_List_object__o *)widgets,
                                                                    (Il2CppObject *)w,
                                                                    (const MethodInfo_3811C40 *)Method_System_Collections_Generic_List_UIWidget__Remove__);
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
    v13 = w->fields.drawCall;
    if ( v13 )
    {
      mDepth = w->fields.mDepth;
      p_drawCall = (GrandQuestFolderBoardItem_o *)&w->fields.drawCall;
      if ( mDepth == v13->fields.depthStart || mDepth == v13->fields.depthEnd )
        this->fields.mRebuild = 1;
      v13->fields.isDirty = 1;
      p_drawCall->klass = 0;
      sub_1C71354(p_drawCall, 0, v7, v8, v9, v10, v11, v12);
      return;
    }
LABEL_15:
    sub_1C71608(widgets, w);
  }
}


void UIPanel__SetDirty(UIPanel_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *drawCalls; // x0
  int size; // w21
  int32_t v5; // w20

  if ( (byte_4CCBA3E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    byte_4CCBA3E = 1;
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
                                                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
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
    sub_1C71608(drawCalls, method);
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
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x20
  const MethodInfo *v20; // x1
  int v21; // w9
  int v22; // w8
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Transform_o *v24; // x20
  UnityEngine_Object_o *target; // x21
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v27; // x21
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v29; // x21
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v31; // x21
  UnityEngine_Vector4_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCBA3A & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA3A = 1;
  }
  if ( !byte_4CC0D08 )
  {
    sub_1C713B0(&System_Math_TypeInfo);
    byte_4CC0D08 = 1;
  }
  v11 = floorf(width + 0.5);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( !byte_4CC0D08 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC0D08 = 1;
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
  v19 = cachedTransform;
  UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  if ( v15 <= 2 )
    v21 = 2;
  else
    v21 = v15;
  if ( v16 <= 2 )
    v22 = 2;
  else
    v22 = v16;
  v32.fields.x = floorf(x + 0.5);
  v32.fields.y = floorf(y + 0.5);
  v32.fields.z = (float)v21;
  v32.fields.w = (float)v22;
  UIPanel__set_baseClipRegion(this, v32, v20);
  if ( UIRect__get_isAnchored((UIRect_o *)this, 0) )
  {
    cachedTransform = UnityEngine_Transform__get_parent(v19, 0);
    leftAnchor = this->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_49;
    v24 = cachedTransform;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(target, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.leftAnchor;
      if ( !cachedTransform )
        goto LABEL_49;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v24, x, 0);
    }
    rightAnchor = this->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_49;
    v27 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v27, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.rightAnchor;
      if ( !cachedTransform )
        goto LABEL_49;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v24, x + width, 0);
    }
    bottomAnchor = this->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_49;
    v29 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v29, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.bottomAnchor;
      if ( !cachedTransform )
        goto LABEL_49;
      UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v24, y, 0);
    }
    topAnchor = this->fields.topAnchor;
    if ( !topAnchor )
LABEL_49:
      sub_1C71608(cachedTransform, v18);
    v31 = (UnityEngine_Object_o *)topAnchor->fields.target;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Implicit(v31, 0) )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.topAnchor;
      if ( cachedTransform )
      {
        UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v24, y + height, 0);
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
  __int64 v6; // x1

  if ( (byte_4CCBA46 & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_UIWidget__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__Sort__);
    sub_1C713B0(&Method_UIWidget_PanelCompareFunc__);
    byte_4CCBA46 = 1;
  }
  this->fields.mSortWidgets = 0;
  widgets = this->fields.widgets;
  v4 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_UIWidget__TypeInfo);
  System_Comparison_object____ctor(v4, 0, Method_UIWidget_PanelCompareFunc__, 0);
  if ( !widgets )
    sub_1C71608(v5, v6);
  System_Collections_Generic_List_object___Sort_58794460(
    (System_Collections_Generic_List_object__o *)widgets,
    v4,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_UIWidget__Sort__);
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
  float v26; // s11
  float v27; // s12
  float v28; // s13
  float v29; // s14
  float v30; // s15
  float v31; // s10
  float v32; // s9
  int32_t v33; // w20
  __int64 v34; // x21
  UnityEngine_Transform_o *v35; // x22
  int32_t v36; // w8
  bool alwaysOnScreen; // w8
  int32_t mClipping; // w8
  struct UnityEngine_Texture2D_o *mClipTexture; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  float v46; // [xsp+0h] [xbp-80h]
  float v47; // [xsp+4h] [xbp-7Ch]
  double iptr; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o rotation; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCBA49 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA49 = 1;
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
    if ( !byte_4CC0FF6 )
    {
      usedForUI = sub_1C713B0(&UnityEngine_Vector4_TypeInfo);
      byte_4CC0FF6 = 1;
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
        v51.fields.x = x;
        v51.fields.y = y;
        v51.fields.z = v14;
        v52 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)parent, v51, 0);
        x = v52.fields.x;
        y = v52.fields.y;
        v14 = v52.fields.z;
      }
      v53 = UIPanel__get_drawCallOffset(this, v6);
      if ( cachedTransform )
      {
        v46 = y + v53.fields.y;
        v47 = x + v53.fields.x;
        v19 = v14 + v53.fields.z;
        goto LABEL_61;
      }
LABEL_74:
      sub_1C71608(usedForUI, v6);
    }
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
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
    if ( !byte_4CC24D5 )
    {
      sub_1C713B0(&System_Math_TypeInfo);
      byte_4CC24D5 = 1;
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
  v46 = position.fields.y;
  v47 = position.fields.x;
LABEL_61:
  rotation = UnityEngine_Transform__get_rotation(cachedTransform, 0);
  v26 = rotation.fields.x;
  v27 = rotation.fields.y;
  v28 = rotation.fields.z;
  v29 = rotation.fields.w;
  lossyScale = UnityEngine_Transform__get_lossyScale(cachedTransform, 0);
  usedForUI = (__int64)this->fields.drawCalls;
  if ( !usedForUI )
    goto LABEL_74;
  v30 = lossyScale.fields.x;
  v31 = lossyScale.fields.y;
  v32 = lossyScale.fields.z;
  v33 = 0;
  while ( v33 < *(_DWORD *)(usedForUI + 24) )
  {
    usedForUI = (__int64)System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)usedForUI,
                           v33,
                           (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( usedForUI )
    {
      v34 = usedForUI;
      usedForUI = (__int64)UIDrawCall__get_cachedTransform((UIDrawCall_o *)usedForUI, 0);
      if ( usedForUI )
      {
        v55.fields.y = v46;
        v55.fields.x = v47;
        v55.fields.z = v19;
        v35 = (UnityEngine_Transform_o *)usedForUI;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)usedForUI, v55, 0);
        v59.fields.x = v26;
        v59.fields.y = v27;
        v59.fields.z = v28;
        v59.fields.w = v29;
        UnityEngine_Transform__set_rotation(v35, v59, 0);
        v56.fields.x = v30;
        v56.fields.y = v31;
        v56.fields.z = v32;
        UnityEngine_Transform__set_localScale(v35, v56, 0);
        v36 = this->fields.renderQueue == 2 ? 0 : v33;
        UIDrawCall__set_renderQueue((UIDrawCall_o *)v34, v36 + this->fields.startingRenderQueue, 0);
        alwaysOnScreen = this->fields.alwaysOnScreen;
        if ( alwaysOnScreen )
        {
          mClipping = this->fields.mClipping;
          if ( mClipping )
            alwaysOnScreen = mClipping == 4;
          else
            alwaysOnScreen = 1;
        }
        *(_BYTE *)(v34 + 72) = alwaysOnScreen;
        UIDrawCall__set_sortingOrder((UIDrawCall_o *)v34, this->fields.mSortingOrder, 0);
        mClipTexture = this->fields.mClipTexture;
        *(_QWORD *)(v34 + 64) = mClipTexture;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v34 + 64), (int32_t)mClipTexture, v40, v41, v42, v43, v44, v45);
        usedForUI = (__int64)this->fields.drawCalls;
        ++v33;
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
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *widgets; // x8
  int size; // w23
  int32_t v8; // w20
  Il2CppObject *Item; // x21
  UnityEngine_Object_o *parent; // x22
  int32_t v11; // w20

  if ( (byte_4CCBA4A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA4A = 1;
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
    v8 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               widgets,
               v8,
               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
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
      if ( size == ++v8 )
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
    sub_1C71608(cachedGameObject, v5);
  v11 = 0;
  while ( v11 < SLODWORD(cachedGameObject[1].klass) )
  {
    cachedGameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)cachedGameObject,
                                                     v11,
                                                     (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( cachedGameObject )
    {
      cachedGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cachedGameObject, 0);
      if ( cachedGameObject )
      {
        UnityEngine_GameObject__set_layer(cachedGameObject, this->fields.mLayer, 0);
        cachedGameObject = (UnityEngine_GameObject_o *)this->fields.drawCalls;
        ++v11;
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

  if ( (byte_4CCBA45 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__RemoveAt__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIDrawCall_TypeInfo);
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA45 = 1;
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
                                                                 (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
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
          (const MethodInfo_3811EEC *)Method_System_Collections_Generic_List_UIDrawCall__RemoveAt__);
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
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
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
      sub_1C71608(drawCalls, v7);
    }
  }
}


void UIPanel__UpdateTransformMatrix(UIPanel_o *this, const MethodInfo *method)
{
  int32_t frameCount; // w0
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v5; // x1
  __int128 v6; // q0
  __int128 v7; // q2
  __int128 v8; // q3
  const MethodInfo *v9; // x1
  UnityEngine_Vector2_o ViewSize; // kr00_8
  float v11; // s2
  float v12; // s3
  UnityEngine_Matrix4x4_o v13[2]; // [xsp+0h] [xbp-90h] BYREF

  frameCount = UnityEngine_Time__get_frameCount(0);
  if ( this->fields.mMatrixFrame != frameCount )
  {
    this->fields.mMatrixFrame = frameCount;
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !cachedTransform )
      sub_1C71608(0, v5);
    UnityEngine_Transform__get_worldToLocalMatrix(v13, cachedTransform, 0);
    v6 = *(_OWORD *)&v13[0].fields.m03;
    v8 = *(_OWORD *)&v13[0].fields.m00;
    v7 = *(_OWORD *)&v13[0].fields.m01;
    v13[1] = v13[0];
    *(_OWORD *)&this->fields.worldToLocal.fields.m02 = *(_OWORD *)&v13[0].fields.m02;
    *(_OWORD *)&this->fields.worldToLocal.fields.m03 = v6;
    *(_OWORD *)&this->fields.worldToLocal.fields.m00 = v8;
    *(_OWORD *)&this->fields.worldToLocal.fields.m01 = v7;
    ViewSize = UIPanel__GetViewSize(this, v9);
    v11 = this->fields.mClipOffset.fields.x + this->fields.mClipRange.fields.x;
    v12 = this->fields.mClipOffset.fields.y + this->fields.mClipRange.fields.y;
    this->fields.mMin.fields.x = v11 - (float)(ViewSize.fields.x * 0.5);
    this->fields.mMin.fields.y = v12 - (float)(ViewSize.fields.y * 0.5);
    this->fields.mMax.fields.x = (float)(ViewSize.fields.x * 0.5) + v11;
    this->fields.mMax.fields.y = (float)(ViewSize.fields.y * 0.5) + v12;
  }
}


void UIPanel__UpdateWidgets(UIPanel_o *this, const MethodInfo *method)
{
  _BOOL4 v3; // w25
  UnityEngine_Object_o **clipCount; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *widgets; // x8
  int size; // w26
  int v8; // w20
  int32_t v9; // w21
  char v10; // w29
  UnityEngine_Object_o **v11; // x22
  UnityEngine_Object_o *v12; // x23
  int32_t frameCount; // w23
  bool v14; // w2
  char v15; // w24
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *v17; // x23
  const MethodInfo *v18; // x2
  UnityEngine_Object_o *v19; // x8
  struct UIPanel_OnGeometryUpdated_o *onGeometryUpdated; // x8

  if ( (byte_4CCBA4B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA4B = 1;
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
    sub_1C71608(clipCount, v5);
  size = widgets->fields._size;
  if ( size >= 1 )
  {
    v8 = (int)clipCount;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      clipCount = (UnityEngine_Object_o **)System_Collections_Generic_List_object___get_Item(
                                             widgets,
                                             v9,
                                             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
      if ( !clipCount )
        goto LABEL_41;
      v11 = clipCount;
      v12 = clipCount[29];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      clipCount = (UnityEngine_Object_o **)UnityEngine_Object__op_Equality(v12, (UnityEngine_Object_o *)this, 0);
      if ( ((unsigned __int8)clipCount & 1) != 0 )
      {
        clipCount = (UnityEngine_Object_o **)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v11, 0);
        if ( ((unsigned __int8)clipCount & 1) != 0 )
        {
          frameCount = UnityEngine_Time__get_frameCount(0);
          if ( UIWidget__UpdateTransform((UIWidget_o *)v11, frameCount, 0) || this->fields.mResized )
          {
            if ( v3 )
            {
              v14 = 1;
              v15 = 1;
            }
            else
            {
              v15 = UIWidget__CalculateCumulativeAlpha((UIWidget_o *)v11, frameCount, 0) > 0.001;
              v14 = !v8 && !*((_BYTE *)v11 + 209) || UIPanel__IsVisible_49475524(this, (UIWidget_o *)v11, v16);
            }
            UIWidget__UpdateVisibility((UIWidget_o *)v11, v15, v14, 0);
          }
          clipCount = (UnityEngine_Object_o **)UIWidget__UpdateGeometry((UIWidget_o *)v11, frameCount, 0);
          if ( ((unsigned __int8)clipCount & 1) != 0 )
          {
            if ( this->fields.mRebuild )
              goto LABEL_32;
            v17 = v11[43];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            clipCount = (UnityEngine_Object_o **)UnityEngine_Object__op_Inequality(v17, 0, 0);
            if ( ((unsigned __int8)clipCount & 1) == 0 )
            {
              clipCount = (UnityEngine_Object_o **)UIPanel__FindDrawCall(this, (UIWidget_o *)v11, v18);
LABEL_32:
              v10 = 1;
              goto LABEL_33;
            }
            v19 = v11[43];
            if ( !v19 )
              goto LABEL_41;
            v10 = 1;
            BYTE4(v19[9].klass) = 1;
          }
        }
      }
LABEL_33:
      if ( size == ++v9 )
      {
        if ( (v10 & 1) != 0 )
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

  if ( (byte_4CCBA2C & 1) == 0 )
  {
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA2C = 1;
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
  __int64 v5; // x1

  if ( (byte_4CCBA32 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA32 = 1;
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
      sub_1C71608(v4, v5);
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
  __int64 v4; // x1
  UIRoot_o *mCam; // x0
  const MethodInfo *v6; // x1
  float y; // s8
  UnityEngine_Object_o *root; // x20
  float pixelSizeAdjustment; // s9
  float v10; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBA31 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA31 = 1;
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
        y = UIPanel__GetWindowSize(this, v6).fields.y;
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
          v10 = (float)(pixelSizeAdjustment / y)
              / UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)mCam, 0);
          x = -v10;
          z = 0.0;
          goto LABEL_20;
        }
LABEL_19:
        sub_1C71608(mCam, v4);
      }
    }
  }
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  v10 = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
LABEL_20:
  result.fields.z = z;
  result.fields.y = v10;
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

  if ( (byte_4CCBA36 & 1) == 0 )
  {
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA36 = 1;
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
      sub_1C71610(cachedTransform);
    }
LABEL_23:
    sub_1C71608(cachedTransform, method);
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
  __int64 v1; // x1
  void *Item; // x0
  __int64 v3; // x8
  int v4; // w8
  int v5; // w21
  int32_t v6; // w19
  signed int v7; // w22

  if ( (byte_4CCBA2D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA2D = 1;
  }
  Item = UIPanel_TypeInfo;
  if ( !UIPanel_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
    Item = UIPanel_TypeInfo;
  }
  v3 = **((_QWORD **)Item + 23);
  if ( !v3 )
LABEL_19:
    sub_1C71608(Item, v1);
  v4 = *(_DWORD *)(v3 + 24);
  v5 = v4 - 1;
  if ( v4 < 1 )
    return 0;
  v6 = 0;
  v7 = 0x80000000;
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
             v6,
             (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
    if ( !Item )
      goto LABEL_19;
    if ( v7 <= *((_DWORD *)Item + 80) )
      v7 = *((_DWORD *)Item + 80);
    if ( v5 == v6 )
      break;
    Item = UIPanel_TypeInfo;
    ++v6;
  }
  if ( v7 == 0x80000000 )
    return 0;
  else
    return v7 + 1;
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
  __int64 v4; // x1
  UnityEngine_Camera_o *mCam; // x0

  if ( (byte_4CCBA30 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA30 = 1;
  }
  anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(anchorCamera, 0, 0) )
    return 0;
  mCam = this->fields.mCam;
  if ( !mCam )
    sub_1C71608(0, v4);
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
  __int64 v10; // x1
  UIPanel_c *v11; // x8
  UnityEngine_Transform_o *v12; // x19
  struct UnityEngine_Vector3_array *mCorners; // x20
  float v14; // s9
  float v15; // s8
  float v16; // s10
  struct UnityEngine_Vector3_array *v17; // x20
  float v18; // s9
  struct UnityEngine_Vector3_array *v19; // x20
  struct UnityEngine_Vector3_array *v20; // x20
  UIPanel_c *v21; // x0
  UnityEngine_Object_o *anchorCamera; // x20
  const MethodInfo *v24; // x1
  UnityEngine_Camera_o *v25; // x20
  float cameraRayDistance; // s8
  UnityEngine_Vector2_o ViewSize; // kr00_8
  __int64 v28; // x8
  float v29; // s1
  float v30; // s0
  struct UnityEngine_Vector3_array *v31; // x8
  struct UnityEngine_Vector3_array *v32; // x8
  float v33; // s1
  struct UnityEngine_Vector3_array *v34; // x8
  UnityEngine_Object_o *mCam; // x20
  UnityEngine_Object_o *parent; // x20
  UnityEngine_Object_o *v37; // x21
  float v38; // s2
  float v39; // s8
  __int64 v40; // x19
  unsigned __int64 v41; // x20
  unsigned __int32 v42; // s1
  float32x2_t v43; // d0 OVERLAPPED
  __int64 v44; // x8
  float32x2_t *v45; // x8
  float v46; // s1
  unsigned __int64 v47; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCBA37 & 1) == 0 )
  {
    sub_1C713B0(&NGUITools_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA37 = 1;
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
    v11 = UIPanel_TypeInfo;
    v12 = (UnityEngine_Transform_o *)cachedTransform;
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
      v11 = UIPanel_TypeInfo;
    }
    if ( v12 )
    {
      mCorners = v11->static_fields->mCorners;
      v14 = (float)(x + v4) - (float)(z * 0.5);
      v15 = (float)(y + v7) - (float)(w * 0.5);
      v48 = UnityEngine_Transform__TransformPoint_71751388(v12, v14, v15, 0.0, 0);
      if ( mCorners )
      {
        if ( !LODWORD(mCorners->max_length) )
          goto LABEL_53;
        mCorners->m_Items[0] = v48;
        v16 = w + v15;
        v17 = UIPanel_TypeInfo->static_fields->mCorners;
        v49 = UnityEngine_Transform__TransformPoint_71751388(v12, v14, v16, 0.0, 0);
        if ( v17 )
        {
          if ( LODWORD(v17->max_length) <= 1 )
            goto LABEL_53;
          v17->m_Items[1] = v49;
          v18 = z + v14;
          v19 = UIPanel_TypeInfo->static_fields->mCorners;
          v50 = UnityEngine_Transform__TransformPoint_71751388(v12, v18, v16, 0.0, 0);
          if ( v19 )
          {
            if ( LODWORD(v19->max_length) <= 2 )
              goto LABEL_53;
            v19->m_Items[2] = v50;
            v20 = UIPanel_TypeInfo->static_fields->mCorners;
            v51 = UnityEngine_Transform__TransformPoint_71751388(v12, v18, v15, 0.0, 0);
            if ( v20 )
            {
              if ( LODWORD(v20->max_length) > 3 )
              {
                v20->m_Items[3] = v51;
LABEL_16:
                v21 = UIPanel_TypeInfo;
                if ( !UIPanel_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
                  v21 = UIPanel_TypeInfo;
                }
                return v21->static_fields->mCorners;
              }
LABEL_53:
              sub_1C71610(cachedTransform);
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
    ViewSize = UIPanel__GetViewSize(this, v24);
    cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
    if ( !UIPanel_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
      cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
    }
    v28 = *(_QWORD *)(cachedTransform[7].fields.m_CachedPtr + 24);
    if ( v28 )
    {
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_53;
      v29 = ViewSize.fields.x * -0.5;
      v30 = ViewSize.fields.y * -0.5;
      *(float *)(v28 + 32) = ViewSize.fields.x * -0.5;
      *(float *)(v28 + 36) = ViewSize.fields.y * -0.5;
      *(_DWORD *)(v28 + 40) = 0;
      v31 = UIPanel_TypeInfo->static_fields->mCorners;
      if ( v31 )
      {
        if ( LODWORD(v31->max_length) <= 1 )
          goto LABEL_53;
        v31->m_Items[1].fields.x = v29;
        v31->m_Items[1].fields.y = ViewSize.fields.y + v30;
        v31->m_Items[1].fields.z = 0.0;
        v32 = UIPanel_TypeInfo->static_fields->mCorners;
        if ( v32 )
        {
          if ( LODWORD(v32->max_length) <= 2 )
            goto LABEL_53;
          v33 = ViewSize.fields.x + v29;
          v32->m_Items[2].fields.x = v33;
          v32->m_Items[2].fields.y = ViewSize.fields.y + v30;
          v32->m_Items[2].fields.z = 0.0;
          v34 = UIPanel_TypeInfo->static_fields->mCorners;
          if ( v34 )
          {
            if ( LODWORD(v34->max_length) <= 3 )
              goto LABEL_53;
            v34->m_Items[3].fields.x = v33;
            v34->m_Items[3].fields.y = v30;
            v34->m_Items[3].fields.z = 0.0;
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
              v37 = (UnityEngine_Object_o *)UIRect__get_cachedTransform((UIRect_o *)this, 0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Inequality(parent, v37, 0) )
                goto LABEL_16;
            }
            cachedTransform = (UnityEngine_Component_o *)UIRect__get_cachedTransform((UIRect_o *)this, 0);
            if ( cachedTransform )
            {
              *(UnityEngine_Vector3_o *)v43.n64_u64 = UnityEngine_Transform__get_position(
                                                        (UnityEngine_Transform_o *)cachedTransform,
                                                        0);
              v39 = v38;
              v40 = 0;
              v41 = 0;
              v43.n64_u32[1] = v42;
              v47 = v43.n64_u64[0];
              while ( 1 )
              {
                cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
                if ( !UIPanel_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo);
                  v43.n64_u64[0] = v47;
                  cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
                }
                v44 = *(_QWORD *)(cachedTransform[7].fields.m_CachedPtr + 24);
                if ( !v44 )
                  break;
                if ( v41 >= *(unsigned int *)(v44 + 24) )
                  goto LABEL_53;
                v45 = (float32x2_t *)(v44 + v40);
                ++v41;
                v46 = v39 + v45[5].n64_f32[0];
                v40 += 12;
                v45[4].n64_u64[0] = vadd_f32(v43, v45[4]).n64_u64[0];
                v45[5].n64_f32[0] = v46;
                if ( v41 == 4 )
                  goto LABEL_16;
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_1C71608(cachedTransform, v10);
  }
  v25 = this->fields.mCam;
  cameraRayDistance = UIRect__get_cameraRayDistance((UIRect_o *)this, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  return NGUITools__GetWorldCorners_49731940(v25, cameraRayDistance, 0);
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
  __int64 v12; // x1
  struct UIPanel_OnClippingMoved_o *onClipMove; // x8

  w = value.fields.w;
  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_4CCBA35 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA35 = 1;
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
                         (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v11 )
    {
      if ( !Component_object )
        sub_1C71608(v11, v12);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCBA34 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCBA34 = 1;
  }
  mClipTexture = (UnityEngine_Object_o *)this->fields.mClipTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mClipTexture, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mClipTexture = value;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.mClipTexture, (int32_t)value, v6, v7, v8, v9, v10, v11);
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
  __int64 v9; // x1

  if ( (byte_4CCBA2E & 1) == 0 )
  {
    sub_1C713B0(&System_Comparison_UIPanel__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UIPanel__Sort__);
    sub_1C713B0(&Method_UIPanel_CompareFunc__);
    sub_1C713B0(&UIPanel_TypeInfo);
    byte_4CCBA2E = 1;
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
    v7 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_UIPanel__TypeInfo);
    System_Comparison_object____ctor(v7, 0, Method_UIPanel_CompareFunc__, 0);
    if ( !list )
      sub_1C71608(v8, v9);
    System_Collections_Generic_List_object___Sort_58794460(
      list,
      v7,
      (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_UIPanel__Sort__);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AADE74;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_1C71468(method);
        v16 = sub_1C719FC(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AADF70;
          else
            v13 = sub_1AADF34;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AADEB0;
        }
        else
        {
          v13 = sub_1AADE84;
        }
      }
      else
      {
        v13 = sub_1AADE54;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AADE0C;
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
  return (System_IAsyncResult_o *)sub_1C71364(this, &v6, callback, object);
}


void UIPanel_OnClippingMoved__EndInvoke(
        UIPanel_OnClippingMoved_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AADDF8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AADDB8;
}


System_IAsyncResult_o *UIPanel_OnGeometryUpdated__BeginInvoke(
        UIPanel_OnGeometryUpdated_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void UIPanel_OnGeometryUpdated__EndInvoke(
        UIPanel_OnGeometryUpdated_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void UIPanel_OnGeometryUpdated__Invoke(UIPanel_OnGeometryUpdated_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}