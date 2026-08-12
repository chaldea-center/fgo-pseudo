void UIPanel___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_HashSet_object__o *v8; // x19
  struct UIPanel_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  struct UIPanel_StaticFields *v17; // x8
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x0
  struct UIPanel_StaticFields *v25; // x8
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct UIPanel_StaticFields *v32; // x8

  if ( (byte_5974F66 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIPanel___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_UIPanel__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIPanel__TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&UIPanel_TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    byte_5974F66 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIPanel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIPanel___ctor__);
  UIPanel_TypeInfo->static_fields->list = (struct System_Collections_Generic_List_UIPanel__o *)v1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)UIPanel_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
  v8 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_UIPanel__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v8,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_UIPanel___ctor__);
  static_fields = UIPanel_TypeInfo->static_fields;
  static_fields->updateAgainPanels = (struct System_Collections_Generic_HashSet_UIPanel__o *)v8;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->updateAgainPanels,
    (int32_t)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = sub_2213B20(float___TypeInfo, 4);
  v17 = UIPanel_TypeInfo->static_fields;
  v17->mTemp = (struct System_Single_array *)v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->mTemp, v16, v18, v19, v20, v21, v22, v23);
  v24 = sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  v25 = UIPanel_TypeInfo->static_fields;
  v25->mCorners = (struct UnityEngine_Vector3_array *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->mCorners, v24, v26, v27, v28, v29, v30, v31);
  v32 = UIPanel_TypeInfo->static_fields;
  v32->mUpdateFrame = -1;
  v32->mUpdating = 0;
}


void UIPanel___ctor(UIPanel_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_UIWidget__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  struct UnityEngine_Matrix4x4_StaticFields *static_fields; // x8
  __int128 v20; // q1
  __int128 v21; // q2
  __int128 v22; // q3
  __int128 v23; // q4
  UnityEngine_Vector2_c *v29; // x8
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct UnityEngine_Vector2_o *p_zeroVector; // x10
  UIRect_c *v32; // x0

  if ( (byte_5974F65 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIDrawCall__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_2213A60(&UIRect_TypeInfo);
    byte_5974F65 = 1;
  }
  v3 = System_Collections_Generic_List_UIWidget__TypeInfo;
  this->fields.showInPanelTool = 1;
  this->fields.cullWhileDragging = 1;
  this->fields.softBorderPadding = 1;
  this->fields.startingRenderQueue = 3000;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.widgets = (struct System_Collections_Generic_List_UIWidget__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.widgets, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIDrawCall__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIDrawCall___ctor__);
  this->fields.drawCalls = (struct System_Collections_Generic_List_UIDrawCall__o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.drawCalls, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !byte_5972286 )
  {
    sub_2213A60(&UnityEngine_Matrix4x4_TypeInfo);
    byte_5972286 = 1;
  }
  static_fields = UnityEngine_Matrix4x4_TypeInfo->static_fields;
  v20 = *(_OWORD *)&static_fields->identityMatrix.fields.m02;
  v21 = *(_OWORD *)&static_fields->identityMatrix.fields.m03;
  v23 = *(_OWORD *)&static_fields->identityMatrix.fields.m00;
  v22 = *(_OWORD *)&static_fields->identityMatrix.fields.m01;
  this->fields.mAlpha = 1.0;
  LODWORD(static_fields) = (unsigned __int8)byte_59699C0;
  *(_OWORD *)&this->fields.worldToLocal.fields.m03 = v21;
  this->fields.drawCallClipRange = (struct UnityEngine_Vector4_o)xmmword_E9BD10;
  *(_OWORD *)&this->fields.worldToLocal.fields.m02 = v20;
  this->fields.mClipRange = (struct UnityEngine_Vector4_o)xmmword_E9C6A0;
  __asm { FMOV            V0.2S, #4.0 }
  *(_OWORD *)&this->fields.worldToLocal.fields.m00 = v23;
  *(_OWORD *)&this->fields.worldToLocal.fields.m01 = v22;
  this->fields.mClipSoftness = _D0;
  if ( !(_DWORD)static_fields )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  v29 = UnityEngine_Vector2_TypeInfo;
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&this->fields.mUpdatedFrame = -1;
  this->fields.mClipOffset = zeroVector;
  p_zeroVector = &v29->static_fields->zeroVector;
  this->fields.mLayer = -1;
  this->fields.mMin = *p_zeroVector;
  v32 = UIRect_TypeInfo;
  this->fields.mMax = v29->static_fields->zeroVector;
  if ( !*(&v32->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v32, v18);
  UIRect___ctor((UIRect_o *)this, 0);
}


void UIPanel__AddWidget(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  int32_t v21; // w8
  int v22; // w21
  Il2CppObject *v23; // x0
  int32_t v24; // w1

  if ( (byte_5974F5C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    byte_5974F5C = 1;
  }
  widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
  this->fields.mUpdateScroll = 1;
  if ( !widgets )
    goto LABEL_27;
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
        items->m_Items[0] = (Il2CppObject *)w;
        widgets->fields._size = 1;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)items->m_Items,
          (int32_t)w,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7);
      }
      else
      {
        System_Collections_Generic_List_object___AddWithResize(
          widgets,
          (Il2CppObject *)w,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  if ( !this->fields.mSortWidgets )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             widgets,
             0,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
    v21 = UIWidget__PanelCompareFunc(w, (UIWidget_o *)Item, 0);
    widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
    if ( v21 == -1 )
    {
      if ( widgets )
      {
        v24 = 0;
        goto LABEL_25;
      }
    }
    else if ( widgets )
    {
      v22 = widgets->fields._size;
      do
      {
        if ( v22 <= 0 )
          goto LABEL_26;
        widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
        if ( !widgets )
          goto LABEL_27;
        v23 = System_Collections_Generic_List_object___get_Item(
                widgets,
                --v22,
                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
      }
      while ( UIWidget__PanelCompareFunc(w, (UIWidget_o *)v23, 0) == -1 );
      widgets = (System_Collections_Generic_List_object__o *)this->fields.widgets;
      if ( widgets )
      {
        v24 = v22 + 1;
LABEL_25:
        System_Collections_Generic_List_object___Insert(
          widgets,
          v24,
          (Il2CppObject *)w,
          (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_UIWidget__Insert__);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_2213CDC(widgets, w);
  }
  v12 = widgets->fields._items;
  v13 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++widgets->fields._version;
  if ( !v12 )
    goto LABEL_27;
  if ( (unsigned int)size >= LODWORD(v12->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      widgets,
      (Il2CppObject *)w,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = size + 1;
    v15 = &v12->obj.klass + size;
    widgets->fields._size = v14;
    v15[4] = (Il2CppClass *)w;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v15 + 4),
      (int32_t)w,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  UIPanel__SortWidgets(this, v16);
LABEL_26:
  UIPanel__FindDrawCall(this, w, v19);
}


bool UIPanel__Affects(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *panel; // x20
  __int64 v8; // x1
  int32_t clipCount; // w0
  __int64 v10; // x1

  if ( (byte_5974F4C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F4C = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, w);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)w, 0, 0);
  if ( !v5 )
  {
    if ( !w )
LABEL_22:
      sub_2213CDC(v5, v6);
    panel = (UnityEngine_Object_o *)w->fields.panel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( !UnityEngine_Object__op_Equality(panel, 0, 0) )
    {
      while ( 1 )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, 0, 0) )
          break;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t platform; // w0
  bool v20; // w0
  System_String_o *graphicsDeviceVersion; // x0
  __int64 v22; // x1

  if ( (byte_5974F4E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&StringLiteral_5471/*"Direct3D"*/);
    byte_5974F4E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mGo = gameObject;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mGo, (int32_t)gameObject, v4, v5, v6, v7, v8, v9);
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
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v17);
  if ( UnityEngine_Application__get_platform(0) == 2 )
  {
    this->fields.mHalfPixelOffset = 1;
LABEL_10:
    if ( UnityEngine_SystemInfo__get_graphicsShaderLevel(0) <= 39 )
    {
      graphicsDeviceVersion = UnityEngine_SystemInfo__get_graphicsDeviceVersion(0);
      if ( !graphicsDeviceVersion )
        sub_2213CDC(0, v22);
      v20 = System_String__Contains(graphicsDeviceVersion, (System_String_o *)StringLiteral_5471/*"Direct3D"*/, 0);
    }
    else
    {
      v20 = 0;
    }
    this->fields.mHalfPixelOffset = v20;
    return;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v18);
  platform = UnityEngine_Application__get_platform(0);
  this->fields.mHalfPixelOffset = platform == 7;
  if ( platform == 7 )
    goto LABEL_10;
}


UnityEngine_Vector3_o UIPanel__CalculateConstrainOffset(
        UIPanel_o *this,
        UnityEngine_Vector2_o min,
        UnityEngine_Vector2_o max,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float v7; // s10
  float v8; // s11
  float v11; // s0
  float v12; // s1
  UnityEngine_Vector2_o v15; // kr10_8
  UnityEngine_Vector4_o finalClipRegion; // 0:kr00_16.16
  UnityEngine_Vector2_o v18; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v19; // 0:s2.4,4:s3.4
  UnityEngine_Vector2_o v20; // 0:s4.4,4:s5.4
  UnityEngine_Vector2_o v21; // 0:s6.4,4:s7.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  y = max.fields.y;
  x = max.fields.x;
  v7 = min.fields.y;
  v8 = min.fields.x;
  finalClipRegion = UIPanel__get_finalClipRegion(this, method);
  v20.fields.x = finalClipRegion.fields.x - (float)(finalClipRegion.fields.z * 0.5);
  v20.fields.y = finalClipRegion.fields.y - (float)(finalClipRegion.fields.w * 0.5);
  v21.fields.x = finalClipRegion.fields.x + (float)(finalClipRegion.fields.z * 0.5);
  v21.fields.y = finalClipRegion.fields.y + (float)(finalClipRegion.fields.w * 0.5);
  if ( this->fields.softBorderPadding && this->fields.mClipping == 3 )
  {
    v11 = this->fields.mClipSoftness.fields.x;
    v12 = this->fields.mClipSoftness.fields.y;
    v20.fields.x = v20.fields.x + v11;
    v20.fields.y = v20.fields.y + v12;
    v21.fields.x = v21.fields.x - v11;
    v21.fields.y = v21.fields.y - v12;
  }
  v18.fields.x = v8;
  v18.fields.y = v7;
  v19.fields.x = x;
  v19.fields.y = y;
  v15 = NGUIMath__ConstrainRect(v18, v19, v20, v21, 0);
  result.fields.y = v15.fields.y;
  result.fields.x = v15.fields.x;
  result.fields.z = 0.0;
  return result;
}


float UIPanel__CalculateFinalAlpha(UIPanel_o *this, int32_t frameID, const MethodInfo *method)
{
  float result; // s0
  UIRect_o *parent; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x22
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_5974F48 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F48 = 1;
  }
  if ( this->fields.mAlphaFrameID == frameID )
    return this->fields.finalAlpha;
  this->fields.mAlphaFrameID = frameID;
  parent = UIRect__get_parent((UIRect_o *)this, 0);
  v8 = (UnityEngine_Object_o *)UIRect__get_parent((UIRect_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v9 = UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( v9 )
  {
    if ( !parent )
      sub_2213CDC(v9, v10);
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
  __int64 v5; // x1
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int32_t mDepth; // w8
  int32_t v10; // w9
  int32_t InstanceID; // w20

  if ( (byte_5974F3E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F3E = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, b);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)a, (UnityEngine_Object_o *)b, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)a, 0, 0) )
    return 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)b, 0, 0);
  if ( !v7 )
    return 0;
  if ( !a || !b )
    sub_2213CDC(v7, v8);
  mDepth = a->fields.mDepth;
  v10 = b->fields.mDepth;
  if ( mDepth < v10 )
    return -1;
  if ( mDepth > v10 )
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
  float x; // s0
  float y; // s3
  float v11; // s12
  float v12; // s2
  float v13; // s11
  float v14; // s10
  float v15; // s9
  float v16; // s8
  __int64 v17; // x1
  UnityEngine_Object_o *root; // x23
  SpringPosition_o *v19; // x0
  __int64 v20; // x1
  float pixelSizeAdjustment; // s0
  float v22; // s11
  float v23; // s1
  float v24; // s10
  float v25; // s2
  float v26; // s9
  float v27; // s8
  float v28; // s1
  float v29; // s2
  const MethodInfo_3820CA8 *v30; // x1
  __int64 v31; // x1
  Il2CppObject *Component_object; // x19
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_Vector3_o v35; // 0:kr00_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974F5F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SpringPosition___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F5F = 1;
  }
  x = targetBounds->fields.m_Extents.fields.x;
  y = targetBounds->fields.m_Extents.fields.y;
  v11 = 1.0;
  v12 = targetBounds->fields.m_Center.fields.y;
  v13 = targetBounds->fields.m_Center.fields.x - x;
  v14 = v12 - y;
  v15 = targetBounds->fields.m_Center.fields.x + x;
  v16 = v12 + y;
  if ( !this->fields.mClipping )
  {
    root = (UnityEngine_Object_o *)UIRect__get_root((UIRect_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    v19 = (SpringPosition_o *)UnityEngine_Object__op_Inequality(root, 0, 0);
    if ( ((unsigned __int8)v19 & 1) != 0 )
    {
      if ( !root )
        goto LABEL_22;
      pixelSizeAdjustment = UIRoot__get_pixelSizeAdjustment((UIRoot_o *)root, 0);
      v11 = 1.0;
      if ( pixelSizeAdjustment != 1.0 )
      {
        v13 = v13 / pixelSizeAdjustment;
        v11 = pixelSizeAdjustment;
        v14 = v14 / pixelSizeAdjustment;
        v15 = v15 / pixelSizeAdjustment;
        v16 = v16 / pixelSizeAdjustment;
      }
    }
  }
  v22 = v11
      * ((float (__fastcall *)(UIPanel_o *, const MethodInfo *, UnityEngine_Bounds_o *, bool, const MethodInfo *, float, float, float, float))this->klass->vtable._22_CalculateConstrainOffset.methodPtr)(
          this,
          this->klass->vtable._22_CalculateConstrainOffset.method,
          targetBounds,
          immediate,
          method,
          v13,
          v14,
          v15,
          v16);
  v24 = v11 * v23;
  v26 = v11 * v25;
  v27 = (float)(v26 * v26) + (float)((float)(v22 * v22) + (float)(v24 * v24));
  if ( v27 > 0.0 )
  {
    if ( !immediate )
    {
      if ( target )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)target, 0);
        localPosition = UnityEngine_Transform__get_localPosition(target, 0);
        v38.fields.x = v22 + localPosition.fields.x;
        v38.fields.y = v24 + localPosition.fields.y;
        v38.fields.z = v26 + localPosition.fields.z;
        v19 = SpringPosition__Begin(gameObject, v38, 13.0, 0);
        if ( v19 )
        {
          *(_WORD *)&v19->fields.worldSpace = 256;
          return v27 > 0.0;
        }
      }
      goto LABEL_22;
    }
    if ( !target )
      goto LABEL_22;
    v35 = UnityEngine_Transform__get_localPosition(target, 0);
    v37.fields.x = v22 + v35.fields.x;
    v37.fields.y = v24 + v35.fields.y;
    v37.fields.z = v26 + v35.fields.z;
    UnityEngine_Transform__set_localPosition(target, v37, 0);
    v28 = v24 + targetBounds->fields.m_Center.fields.y;
    v29 = v26 + targetBounds->fields.m_Center.fields.z;
    targetBounds->fields.m_Center.fields.x = v22 + targetBounds->fields.m_Center.fields.x;
    targetBounds->fields.m_Center.fields.y = v28;
    v30 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SpringPosition___;
    targetBounds->fields.m_Center.fields.z = v29;
    Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)target, v30);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    v19 = (SpringPosition_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)v19 & 1) != 0 )
    {
      if ( Component_object )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
        return v27 > 0.0;
      }
LABEL_22:
      sub_2213CDC(v19, v20);
    }
  }
  return v27 > 0.0;
}


bool UIPanel__ConstrainTargetToBounds_56185392(
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
  NGUIMath__CalculateRelativeWidgetBounds_56289764(&v10, cachedTransform, target, 0);
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
  __int64 v6; // x1
  Il2CppObject *Item; // x21
  int v8; // w8
  UnityEngine_Object_o *v9; // x27
  UnityEngine_Object_o *v10; // x28
  UnityEngine_Object_o *v11; // x29
  char *v12; // x21
  int32_t v13; // w20
  int32_t v14; // w22
  UIWidget_o *v15; // x26
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  UnityEngine_Object_o *v22; // x23
  UnityEngine_Object_o *v23; // x24
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x25
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x8
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  struct UIDrawCall_OnRenderCallback_o *mOnRender; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  int32_t mDepth; // w8
  char *v63; // x27
  int32_t v64; // w8
  BetterList_Vector3__o *v65; // x4
  BetterList_Vector4__o *v66; // x5
  UIWidget_o *v67; // x0
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  System_Delegate_o *v74; // x0
  struct UIDrawCall_OnRenderCallback_o *v75; // x0
  int v76; // w8
  UIDrawCall_OnRenderCallback_c *v77; // x1
  struct UIDrawCall_OnRenderCallback_o **p_mOnRender; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  __int64 v85; // x8
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  struct UIDrawCall_OnRenderCallback_o *v90; // x1
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  UIPanel_o *v103; // x0
  UIDrawCall_o *v104; // x1
  const MethodInfo *v105; // x2

  if ( (byte_5974F56 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDrawCall_OnRenderCallback_TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    byte_5974F56 = 1;
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
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v6);
    UIDrawCall__Destroy((UIDrawCall_o *)Item, 0);
    drawCalls = this->fields.drawCalls;
    ++v4;
    if ( !drawCalls )
      goto LABEL_9;
  }
  v8 = *((_DWORD *)drawCalls + 7) + 1;
  *((_DWORD *)drawCalls + 6) = 0;
  *((_DWORD *)drawCalls + 7) = v8;
  if ( v5 >= 1 )
    System_Array__Clear(*((System_Array_o **)drawCalls + 2), 0, v5, 0);
  if ( this->fields.mSortWidgets )
    UIPanel__SortWidgets(this, method);
  drawCalls = this->fields.widgets;
  if ( !drawCalls )
    goto LABEL_9;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( v14 < *((_DWORD *)drawCalls + 6) )
  {
    drawCalls = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)drawCalls,
                  v14,
                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
    if ( !drawCalls )
      goto LABEL_9;
    v15 = (UIWidget_o *)drawCalls;
    if ( UIWidget__get_isVisible((UIWidget_o *)drawCalls, 0) && UIWidget__get_hasVertices(v15, 0) )
    {
      v22 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v15->klass->vtable._24_get_material.methodPtr)(
                                      v15,
                                      v15->klass->vtable._24_get_material.method);
      v23 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v15->klass->vtable._26_get_mainTexture.methodPtr)(
                                      v15,
                                      v15->klass->vtable._26_get_mainTexture.method);
      v25 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))v15->klass->vtable._28_get_shader.methodPtr)(
                                      v15,
                                      v15->klass->vtable._28_get_shader.method);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      if ( UnityEngine_Object__op_Inequality(v9, v22, 0) )
        goto LABEL_95;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(v10, v23, 0) )
        goto LABEL_95;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(v11, v25, 0) )
      {
LABEL_95:
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        drawCalls = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
        if ( ((unsigned __int8)drawCalls & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_9;
          v32 = *((_QWORD *)v12 + 10);
          if ( !v32 )
            goto LABEL_9;
          if ( *(_DWORD *)(v32 + 24) )
          {
            drawCalls = this->fields.drawCalls;
            if ( !drawCalls )
              goto LABEL_9;
            v33 = *((_QWORD *)drawCalls + 2);
            v34 = Method_System_Collections_Generic_List_UIDrawCall__Add__;
            ++*((_DWORD *)drawCalls + 7);
            if ( !v33 )
              goto LABEL_9;
            v35 = *((int *)drawCalls + 6);
            if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)drawCalls,
                (Il2CppObject *)v12,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v36 = v33 + 8 * v35;
              *((_DWORD *)drawCalls + 6) = v35 + 1;
              *(_QWORD *)(v36 + 32) = v12;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 32), (int32_t)v12, v26, v27, v28, v29, v30, v31);
            }
            UIDrawCall__UpdateGeometry((UIDrawCall_o *)v12, v13, 0);
            mOnRender = this->fields.mOnRender;
            *((_QWORD *)v12 + 28) = mOnRender;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v12 + 224),
              (int32_t)mOnRender,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43);
            this->fields.mOnRender = 0;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mOnRender, 0, v44, v45, v46, v47, v48, v49);
            v13 = 0;
            v12 = 0;
          }
        }
      }
      else
      {
        v22 = v9;
        v25 = v11;
        v23 = v10;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
        goto LABEL_96;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(v25, 0, 0) )
        goto LABEL_96;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(v23, 0, 0) )
      {
LABEL_96:
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        drawCalls = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0);
        if ( ((unsigned __int8)drawCalls & 1) != 0 )
        {
          if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, method);
          drawCalls = UIDrawCall__Create(
                        this,
                        (UnityEngine_Material_o *)v22,
                        (UnityEngine_Texture_o *)v23,
                        (UnityEngine_Shader_o *)v25,
                        0);
          if ( !drawCalls )
            goto LABEL_9;
          mDepth = v15->fields.mDepth;
          v12 = (char *)drawCalls;
          *((_QWORD *)drawCalls + 7) = this;
          v63 = (char *)drawCalls + 56;
          *((_DWORD *)drawCalls + 9) = mDepth;
          *((_DWORD *)drawCalls + 10) = mDepth;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)((char *)drawCalls + 56),
            (int32_t)this,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          v63[64] = v15->fields.mUseOriginalMaterial;
        }
        else
        {
          if ( !v12 )
            goto LABEL_9;
          v64 = v15->fields.mDepth;
          if ( v64 < *((_DWORD *)v12 + 9) )
            *((_DWORD *)v12 + 9) = v64;
          if ( v64 > *((_DWORD *)v12 + 10) )
            *((_DWORD *)v12 + 10) = v64;
        }
        v15->fields.drawCall = (struct UIDrawCall_o *)v12;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v15->fields.drawCall,
          (int32_t)v12,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55);
        if ( this->fields.generateNormals )
        {
          v65 = (BetterList_Vector3__o *)*((_QWORD *)v12 + 11);
          v66 = (BetterList_Vector4__o *)*((_QWORD *)v12 + 12);
          v67 = v15;
        }
        else
        {
          v67 = v15;
          v65 = 0;
          v66 = 0;
        }
        UIWidget__WriteToBuffers(
          v67,
          *((BetterList_Vector3__o **)v12 + 10),
          *((BetterList_Vector2__o **)v12 + 13),
          *((BetterList_Color32__o **)v12 + 14),
          v65,
          v66,
          0);
        method = (const MethodInfo *)v15->fields.mOnRender;
        ++v13;
        if ( method )
        {
          v74 = (System_Delegate_o *)this->fields.mOnRender;
          if ( v74 )
          {
            v75 = (struct UIDrawCall_OnRenderCallback_o *)System_Delegate__Combine(v74, (System_Delegate_o *)method, 0);
            v76 = (int)v75;
            if ( v75 )
            {
              v77 = UIDrawCall_OnRenderCallback_TypeInfo;
              if ( v75->klass != UIDrawCall_OnRenderCallback_TypeInfo
                || (this->fields.mOnRender = v75, v75->klass != v77) )
              {
                sub_221405C(v75, v77, v68);
                UIPanel__FillDrawCall(v103, v104, v105);
                return;
              }
            }
            else
            {
              this->fields.mOnRender = 0;
            }
            p_mOnRender = &this->fields.mOnRender;
            LODWORD(method) = v76;
          }
          else
          {
            p_mOnRender = &this->fields.mOnRender;
            this->fields.mOnRender = (struct UIDrawCall_OnRenderCallback_o *)method;
          }
          sub_2213A04((MissionNaviTransitionBoardItem_o *)p_mOnRender, (int32_t)method, v68, v69, v70, v71, v72, v73);
        }
      }
    }
    else
    {
      v15->fields.drawCall = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->fields.drawCall, 0, v16, v17, v18, v19, v20, v21);
      v25 = v11;
      v23 = v10;
      v22 = v9;
    }
    drawCalls = this->fields.widgets;
    ++v14;
    v9 = v22;
    v10 = v23;
    v11 = v25;
    if ( !drawCalls )
      goto LABEL_9;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  drawCalls = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0);
  if ( ((unsigned __int8)drawCalls & 1) != 0 )
  {
    if ( v12 )
    {
      v85 = *((_QWORD *)v12 + 10);
      if ( v85 )
      {
        if ( !*(_DWORD *)(v85 + 24) )
          return;
        drawCalls = this->fields.drawCalls;
        if ( drawCalls )
        {
          v86 = *((_QWORD *)drawCalls + 2);
          v87 = Method_System_Collections_Generic_List_UIDrawCall__Add__;
          ++*((_DWORD *)drawCalls + 7);
          if ( v86 )
          {
            v88 = *((int *)drawCalls + 6);
            if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)drawCalls,
                (Il2CppObject *)v12,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
            }
            else
            {
              v89 = v86 + 8 * v88;
              *((_DWORD *)drawCalls + 6) = v88 + 1;
              *(_QWORD *)(v89 + 32) = v12;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v89 + 32), (int32_t)v12, v79, v80, v81, v82, v83, v84);
            }
            UIDrawCall__UpdateGeometry((UIDrawCall_o *)v12, v13, 0);
            v90 = this->fields.mOnRender;
            *((_QWORD *)v12 + 28) = v90;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 224), (int32_t)v90, v91, v92, v93, v94, v95, v96);
            this->fields.mOnRender = 0;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mOnRender, 0, v97, v98, v99, v100, v101, v102);
            return;
          }
        }
      }
    }
LABEL_9:
    sub_2213CDC(drawCalls, method);
  }
}


bool UIPanel__FillDrawCall(UIPanel_o *this, UIDrawCall_o *dc, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIWidget__o *widgets; // x0
  struct UIDrawCall_OnRenderCallback_o *v6; // x1
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x1
  UnityEngine_Object_o *Item; // x23
  UnityEngine_Object_o *monitor; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BetterList_Vector3__o *norms; // x4
  BetterList_Vector4__o *tans; // x5
  UIWidget_o *v20; // x0
  struct UIDrawCall_OnRenderCallback_o **p_monitor; // x0
  System_Delegate_o *v22; // x0
  System_Delegate_o *v23; // x0
  int v24; // w8
  UIDrawCall_OnRenderCallback_c *v25; // x1
  struct BetterList_Vector3__o *verts; // x8
  struct UIDrawCall_OnRenderCallback_o *mOnRender; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  bool result; // w0
  UIPanel_o *v41; // x0
  const MethodInfo *v42; // x1

  if ( (byte_5974F57 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDrawCall_OnRenderCallback_TypeInfo);
    byte_5974F57 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, dc);
  widgets = (struct System_Collections_Generic_List_UIWidget__o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)dc,
                                                                    0,
                                                                    0);
  if ( ((unsigned __int8)widgets & 1) == 0 )
    return 0;
  if ( !dc || (widgets = this->fields.widgets, dc->fields.isDirty = 0, !widgets) )
LABEL_42:
    sub_2213CDC(widgets, v6);
  v7 = 0;
  v8 = 0;
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
            mOnRender = this->fields.mOnRender;
            dc->fields.onRender = mOnRender;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&dc->fields.onRender,
              (int32_t)mOnRender,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
            this->fields.mOnRender = 0;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mOnRender, 0, v34, v35, v36, v37, v38, v39);
            return 1;
          }
          return 0;
        }
        goto LABEL_42;
      }
      Item = (UnityEngine_Object_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)widgets,
                                       v8,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      widgets = (struct System_Collections_Generic_List_UIWidget__o *)UnityEngine_Object__op_Equality(Item, 0, 0);
      if ( ((unsigned __int8)widgets & 1) == 0 )
        break;
      widgets = this->fields.widgets;
      if ( widgets )
      {
        System_Collections_Generic_List_object___RemoveAt(
          (System_Collections_Generic_List_object__o *)widgets,
          v8,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_UIWidget__RemoveAt__);
        widgets = this->fields.widgets;
        if ( widgets )
          continue;
      }
      goto LABEL_42;
    }
    if ( !Item )
      goto LABEL_42;
    monitor = (UnityEngine_Object_o *)Item[14].monitor;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( !UnityEngine_Object__op_Equality(monitor, (UnityEngine_Object_o *)dc, 0) )
      goto LABEL_26;
    if ( UIWidget__get_isVisible((UIWidget_o *)Item, 0) && UIWidget__get_hasVertices((UIWidget_o *)Item, 0) )
      break;
    p_monitor = (struct UIDrawCall_OnRenderCallback_o **)&Item[14].monitor;
    LODWORD(v6) = 0;
    Item[14].monitor = 0;
LABEL_25:
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_monitor, (int32_t)v6, v12, v13, v14, v15, v16, v17);
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
  v6 = (struct UIDrawCall_OnRenderCallback_o *)Item[8].monitor;
  ++v7;
  if ( !v6 )
    goto LABEL_26;
  v22 = (System_Delegate_o *)this->fields.mOnRender;
  if ( !v22 )
  {
    this->fields.mOnRender = v6;
    p_monitor = &this->fields.mOnRender;
    goto LABEL_25;
  }
  v23 = System_Delegate__Combine(v22, (System_Delegate_o *)v6, 0);
  v24 = (int)v23;
  if ( !v23 )
  {
    this->fields.mOnRender = 0;
LABEL_37:
    p_monitor = &this->fields.mOnRender;
    LODWORD(v6) = v24;
    goto LABEL_25;
  }
  v25 = UIDrawCall_OnRenderCallback_TypeInfo;
  if ( (UIDrawCall_OnRenderCallback_c *)v23->klass == UIDrawCall_OnRenderCallback_TypeInfo )
  {
    this->fields.mOnRender = (struct UIDrawCall_OnRenderCallback_o *)v23;
    if ( (UIDrawCall_OnRenderCallback_c *)v23->klass == v25 )
      goto LABEL_37;
  }
  sub_221405C(v23, v25, v12);
  UIPanel__SortWidgets(v41, v42);
  return result;
}


UIPanel_o *UIPanel__Find(UnityEngine_Transform_o *trans, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5974F60 & 1) == 0 )
  {
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F60 = 1;
  }
  if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, method);
  return UIPanel__Find_56185588(trans, 0, -1, v2);
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
  __int64 v14; // x1
  UnityEngine_Object_o *mTexture; // x23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  bool isVisible; // w8
  UIDrawCall_o *result; // x0

  v4 = this;
  if ( (byte_5974F5B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    this = (UIPanel_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F5B = 1;
  }
  if ( !w )
    goto LABEL_32;
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
      goto LABEL_32;
    if ( v9 >= SLODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_30;
    Item = (struct UIDrawCall_o *)System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)this,
                                    v9,
                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( v9 )
    {
      this = (UIPanel_o *)v4->fields.drawCalls;
      if ( !this )
        goto LABEL_32;
      this = (UIPanel_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            v9 - 1,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
      if ( !this )
        goto LABEL_32;
      v11 = LODWORD(this->fields.rightAnchor) + 1;
    }
    else
    {
      v11 = 0x80000000;
    }
    this = (UIPanel_o *)v4->fields.drawCalls;
    if ( !this )
      goto LABEL_32;
    if ( ++v9 == LODWORD(this->fields.m_CancellationTokenSource) )
    {
      v12 = 0x7FFFFFFF;
    }
    else
    {
      this = (UIPanel_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            v9,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
      if ( !this )
        goto LABEL_32;
      v12 = HIDWORD(this->fields.leftAnchor) - 1;
    }
  }
  while ( v11 > mDepth || v12 < mDepth );
  if ( !Item )
LABEL_32:
    sub_2213CDC(this, w);
  mMaterial = (UnityEngine_Object_o *)Item->fields.mMaterial;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, w);
  if ( !UnityEngine_Object__op_Equality(mMaterial, v5, 0) )
    goto LABEL_30;
  mTexture = (UnityEngine_Object_o *)Item->fields.mTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Equality(mTexture, v8, 0) )
  {
    isVisible = UIWidget__get_isVisible(w, 0);
    result = 0;
    if ( isVisible )
    {
      w->fields.drawCall = Item;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&w->fields.drawCall, (int32_t)Item, v16, v17, v18, v19, v20, v21);
      if ( UIWidget__get_hasVertices(w, 0) )
        Item->fields.isDirty = 1;
      return Item;
    }
  }
  else
  {
LABEL_30:
    result = 0;
    v4->fields.mRebuild = 1;
  }
  return result;
}


void UIPanel__FindParent(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  struct UIPanel_o *v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *parent; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_5974F4F & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel___);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F4F = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_13;
  parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(cachedTransform, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(parent, 0, 0);
  v4 = 0;
  if ( ((unsigned __int8)cachedTransform & 1) != 0 )
  {
    if ( !parent )
      goto LABEL_13;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v13);
    cachedTransform = (UnityEngine_Transform_o *)NGUITools__FindInParents_object_(
                                                   gameObject,
                                                   (const MethodInfo_38F0B48 *)Method_NGUITools_FindInParents_UIPanel___);
    v4 = (struct UIPanel_o *)cachedTransform;
  }
  if ( !this )
LABEL_13:
    sub_2213CDC(cachedTransform, v4);
  this->fields.mParentPanel = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mParentPanel, (int32_t)v4, v7, v8, v9, v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
UIPanel_o *UIPanel__Find_56185588(
        UnityEngine_Transform_o *trans,
        bool createIfMissing,
        int32_t layer,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *v8; // x22
  __int64 v9; // x1
  _BOOL4 v10; // w8
  UIPanel_o *result; // x0

  if ( (byte_5974F62 & 1) == 0 )
  {
    sub_2213A60(&Method_NGUITools_FindInParents_UIPanel____91798312);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F62 = 1;
  }
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, createIfMissing);
  v8 = NGUITools__FindInParents_object__59706528(
         trans,
         (const MethodInfo_38F0CA0 *)Method_NGUITools_FindInParents_UIPanel____91798312);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( v10 )
    result = (UIPanel_o *)v8;
  else
    result = 0;
  if ( !v10 && createIfMissing )
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v9);
    return NGUITools__CreateUI_56418888(trans, 0, layer, 0);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UIPanel_o *UIPanel__Find_56185852(UnityEngine_Transform_o *trans, bool createIfMissing, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5974F61 & 1) == 0 )
  {
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F61 = 1;
  }
  if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, createIfMissing);
  return UIPanel__Find_56185588(trans, createIfMissing, -1, v3);
}


UnityEngine_Vector3_array *UIPanel__GetSides(
        UIPanel_o *this,
        UnityEngine_Transform_o *relativeTo,
        const MethodInfo *method)
{
  float x; // s9
  float v6; // s10
  float z; // s11
  float y; // s8
  float v9; // s14
  float w; // s12
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v12; // x1
  UIRect_c *v13; // x8
  UnityEngine_Transform_o *v14; // x20
  struct UnityEngine_Vector3_array *mSides; // x21
  float v16; // s8
  float v17; // s12
  float v18; // s10
  float v19; // s11
  struct UnityEngine_Vector3_array *v20; // x21
  float v21; // s10
  struct UnityEngine_Vector3_array *v22; // x21
  struct UnityEngine_Vector3_array *v23; // x21
  __int64 v24; // x20
  unsigned __int64 v25; // x21
  __int64 v26; // x24
  __int64 v27; // x22
  UIRect_c *v28; // x0
  UnityEngine_Vector3_array *Sides_56429188; // x20
  __int64 v31; // x1
  UnityEngine_Object_o *anchorCamera; // x20
  UnityEngine_Camera_o *mCam; // x20
  __int64 v34; // x1
  float cameraRayDistance; // s8
  unsigned __int64 v36; // x8
  float *p_z; // x9
  float v38; // s3
  unsigned __int64 v39; // x21
  float *v40; // x22
  float32x2_t v41; // d0
  UnityEngine_Vector3_o v42; // 0:kr00_12.12
  UnityEngine_Vector3_o v43; // 0:kr14_12.12
  UnityEngine_Vector3_o v44; // 0:kr20_12.12
  UnityEngine_Vector3_o v45; // 0:kr34_12.12
  UnityEngine_Vector3_o v46; // 0:kr40_12.12
  UnityEngine_Vector3_o position; // 0:kr54_12.12
  UnityEngine_Vector3_o v48; // 0:kr60_12.12

  if ( (byte_5974F47 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIRect_TypeInfo);
    byte_5974F47 = 1;
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
    if ( !*(&UIRect_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIRect_TypeInfo, v12);
      v13 = UIRect_TypeInfo;
    }
    if ( !v14 )
      goto LABEL_52;
    mSides = v13->static_fields->mSides;
    v16 = (float)(y + v9) - (float)(w * 0.5);
    v17 = w + v16;
    v18 = (float)(x + v6) - (float)(z * 0.5);
    v42 = UnityEngine_Transform__TransformPoint_83496448(v14, v18, (float)(v16 + v17) * 0.5, 0.0, 0);
    if ( !mSides )
      goto LABEL_52;
    if ( LODWORD(mSides->max_length) )
    {
      v19 = z + v18;
      mSides->m_Items[0] = v42;
      v20 = UIRect_TypeInfo->static_fields->mSides;
      v21 = (float)(v18 + v19) * 0.5;
      v43 = UnityEngine_Transform__TransformPoint_83496448(v14, v21, v17, 0.0, 0);
      if ( !v20 )
        goto LABEL_52;
      if ( (v20->max_length & 0xFFFFFFFE) != 0 )
      {
        v20->m_Items[1] = v43;
        v22 = UIRect_TypeInfo->static_fields->mSides;
        v44 = UnityEngine_Transform__TransformPoint_83496448(v14, v19, (float)(v16 + v17) * 0.5, 0.0, 0);
        if ( !v22 )
          goto LABEL_52;
        if ( LODWORD(v22->max_length) > 2 )
        {
          v22->m_Items[2] = v44;
          v23 = UIRect_TypeInfo->static_fields->mSides;
          v45 = UnityEngine_Transform__TransformPoint_83496448(v14, v21, v16, 0.0, 0);
          if ( !v23 )
            goto LABEL_52;
          if ( (v23->max_length & 0xFFFFFFFC) != 0 )
          {
            v23->m_Items[3] = v45;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)relativeTo, 0, 0) )
            {
              v24 = 0;
              v25 = 0;
              while ( 1 )
              {
                cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
                if ( !*(&UIRect_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(UIRect_TypeInfo, v12);
                  cachedTransform = (UnityEngine_Transform_o *)UIRect_TypeInfo;
                }
                v26 = *(_QWORD *)cachedTransform[7].fields.m_CachedPtr;
                if ( !v26 )
                  break;
                if ( v25 >= *(unsigned int *)(v26 + 24) )
                  goto LABEL_51;
                if ( !relativeTo )
                  break;
                v27 = v26 + v24;
                v46 = UnityEngine_Transform__InverseTransformPoint(
                        relativeTo,
                        *(UnityEngine_Vector3_o *)(v26 + v24 + 32),
                        0);
                if ( v25 >= *(unsigned int *)(v26 + 24) )
                  goto LABEL_51;
                ++v25;
                v24 += 12;
                *(UnityEngine_Vector3_o *)(v27 + 32) = v46;
                if ( v25 == 4 )
                  goto LABEL_26;
              }
LABEL_52:
              sub_2213CDC(cachedTransform, v12);
            }
LABEL_26:
            v28 = UIRect_TypeInfo;
            if ( !*(&UIRect_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(UIRect_TypeInfo, v12);
              v28 = UIRect_TypeInfo;
            }
            return v28->static_fields->mSides;
          }
        }
      }
    }
    goto LABEL_51;
  }
  anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
  if ( UnityEngine_Object__op_Inequality(anchorCamera, 0, 0) && this->fields.anchorOffset )
  {
    mCam = this->fields.mCam;
    cameraRayDistance = UIRect__get_cameraRayDistance((UIRect_o *)this, 0);
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v34);
    Sides_56429188 = NGUITools__GetSides_56429188(mCam, cameraRayDistance, 0);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !cachedTransform )
      goto LABEL_52;
    position = UnityEngine_Transform__get_position(cachedTransform, 0);
    v41.n64_u32[0] = LODWORD(position.fields.x);
    if ( !Sides_56429188 )
      goto LABEL_52;
    v41.n64_u32[1] = LODWORD(position.fields.y);
    v36 = 0;
    p_z = &Sides_56429188->m_Items[0].fields.z;
    do
    {
      if ( v36 >= LODWORD(Sides_56429188->max_length) )
        goto LABEL_51;
      ++v36;
      v38 = position.fields.z + *p_z;
      *((float32x2_t *)p_z - 1) = vadd_f32(v41, *(float32x2_t *)(p_z - 2));
      *p_z = v38;
      p_z += 3;
    }
    while ( v36 != 4 );
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)relativeTo,
                                                   0,
                                                   0);
    if ( ((unsigned __int8)cachedTransform & 1) == 0 )
      return Sides_56429188;
    v39 = 0;
    v40 = &Sides_56429188->m_Items[0].fields.z;
    while ( v39 < LODWORD(Sides_56429188->max_length) )
    {
      if ( !relativeTo )
        goto LABEL_52;
      v48 = UnityEngine_Transform__InverseTransformPoint(relativeTo, *(UnityEngine_Vector3_o *)(v40 - 2), 0);
      if ( v39 >= LODWORD(Sides_56429188->max_length) )
        break;
      ++v39;
      *(UnityEngine_Vector3_o *)(v40 - 2) = v48;
      v40 += 3;
      if ( v39 == 4 )
        return Sides_56429188;
    }
LABEL_51:
    sub_2213CE4(cachedTransform);
  }
  return UIRect__GetSides((UIRect_o *)this, relativeTo, 0);
}


UnityEngine_Vector2_o UIPanel__GetViewSize(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o screenSize; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5974F64 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    byte_5974F64 = 1;
  }
  if ( this->fields.mClipping )
  {
    result.fields.x = this->fields.mClipRange.fields.z;
    result.fields.y = this->fields.mClipRange.fields.w;
  }
  else
  {
    if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, method);
    screenSize = NGUITools__get_screenSize(0);
    result.fields.y = screenSize.fields.y;
    result.fields.x = screenSize.fields.x;
  }
  return result;
}


UnityEngine_Vector2_o UIPanel__GetWindowSize(UIPanel_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIRoot_o *root; // x19
  UnityEngine_Vector2_o v5; // x1
  UnityEngine_Vector2_o screenSize; // kr00_8
  float x; // s8
  float y; // s9
  __int64 v9; // x1
  double v10; // d10
  __int64 v11; // x0
  __int64 v12; // x1
  double v13; // d0
  double v14; // d0
  double v15; // d1
  double v16; // d1
  int32_t v17; // w1
  float PixelSizeAdjustment_56594508; // s0
  double iptr; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5974F63 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F63 = 1;
  }
  root = UIRect__get_root((UIRect_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v3);
  screenSize = NGUITools__get_screenSize(0);
  x = screenSize.fields.x;
  y = screenSize.fields.y;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)root, 0, 0) )
  {
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
    v10 = screenSize.fields.y;
    v13 = modf(screenSize.fields.y, &iptr);
    if ( screenSize.fields.y >= 0.0 )
    {
      if ( v13 == 0.5 )
      {
        v15 = 1.0;
        v14 = iptr;
LABEL_17:
        v16 = v14 + v15;
        if ( ((__int64)v14 & 1) != 0 )
          v14 = v16;
        goto LABEL_22;
      }
      v14 = floor(v10 + 0.5);
    }
    else
    {
      if ( v13 == -0.5 )
      {
        v14 = iptr;
        v15 = -1.0;
        goto LABEL_17;
      }
      v14 = ceil(v10 + -0.5);
    }
LABEL_22:
    if ( !root )
      sub_2213CDC(v11, v12);
    if ( v14 == INFINITY )
      v17 = 0x80000000;
    else
      v17 = (int)v14;
    PixelSizeAdjustment_56594508 = UIRoot__GetPixelSizeAdjustment_56594508(root, v17, 0);
    x = screenSize.fields.x * PixelSizeAdjustment_56594508;
    y = screenSize.fields.y * PixelSizeAdjustment_56594508;
  }
  result.fields.x = x;
  result.fields.y = y;
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
  System_Collections_Generic_List_object__o *list; // x0
  struct System_Collections_Generic_List_UIPanel__o *v6; // x8
  int size; // w24
  int32_t v8; // w20
  UIPanel_c *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *Item; // x21
  UnityEngine_Object_o *klass; // x22

  if ( (byte_5974F42 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F42 = 1;
  }
  mCullTime = this->fields.mCullTime;
  this->fields.mResized = 1;
  this->fields.mMatrixFrame = -1;
  if ( mCullTime == 0.0 )
    v4 = 0.001;
  else
    v4 = RealTime__get_time(0) + 0.15;
  list = (System_Collections_Generic_List_object__o *)UIPanel_TypeInfo;
  this->fields.mCullTime = v4;
  if ( !list[5].fields._version )
  {
    j_il2cpp_runtime_class_init_0(list, method);
    list = (System_Collections_Generic_List_object__o *)UIPanel_TypeInfo;
  }
  v6 = **(struct System_Collections_Generic_List_UIPanel__o ***)&list[4].fields._size;
  if ( !v6 )
    goto LABEL_24;
  size = v6->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = UIPanel_TypeInfo;
      if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, method);
        v9 = UIPanel_TypeInfo;
      }
      list = (System_Collections_Generic_List_object__o *)v9->static_fields->list;
      if ( !list )
        break;
      Item = (UnityEngine_Object_o *)System_Collections_Generic_List_object___get_Item(
                                       list,
                                       v8,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      list = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                            Item,
                                                            (UnityEngine_Object_o *)this,
                                                            0);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !Item )
          break;
        klass = (UnityEngine_Object_o *)Item[16].klass;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        if ( UnityEngine_Object__op_Equality(klass, (UnityEngine_Object_o *)this, 0) )
          UIPanel__InvalidateClipping((UIPanel_o *)Item, method);
      }
      if ( size == ++v8 )
        return;
    }
LABEL_24:
    sub_2213CDC(list, method);
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
  float x; // s10
  float y; // s11
  float v8; // s15
  float z; // s8
  float v10; // s13
  float v12; // s8
  UIPanel_c *v13; // x0
  struct System_Single_array *mTemp; // x8
  il2cpp_array_size_t max_length; // x9
  float v16; // s3
  float v17; // s0
  float *v18; // x10
  __int64 v19; // x9
  __int64 v20; // x11
  float v21; // t1
  float v22; // s1
  float *v23; // x10
  __int64 v24; // x11
  float v25; // t1
  float v26; // s1
  __int64 v27; // x11
  float *v28; // x10
  float v29; // s1
  float v30; // t1
  float v31; // s2
  float v32; // s2
  float *v33; // x8
  float v34; // t1
  float v35; // s3
  unsigned __int64 v37; // kr00_8
  unsigned __int64 v38; // kr20_8
  unsigned __int64 v39; // kr50_8
  __int64 v40; // x1
  unsigned __int64 v41; // kr58_8
  float v42; // [xsp+10h] [xbp-70h]
  __int64 v43; // [xsp+90h] [xbp+10h]
  float v44; // [xsp+98h] [xbp+18h]
  UnityEngine_Vector3_o v45; // 0:kr40_12.12
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  x = a.fields.x;
  y = b.fields.y;
  v8 = b.fields.x;
  z = a.fields.z;
  v10 = a.fields.y;
  v42 = b.fields.z;
  if ( (byte_5974F4A & 1) == 0 )
  {
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F4A = 1;
  }
  UIPanel__UpdateTransformMatrix(this, *(const MethodInfo **)&d.fields.x);
  v46.fields.x = x;
  v46.fields.y = v10;
  v46.fields.z = z;
  v37 = (unsigned __int64)UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v46, 0);
  v12 = *(float *)&v37;
  v47.fields.x = v8;
  v47.fields.y = y;
  v47.fields.z = v42;
  v38 = (unsigned __int64)UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v47, 0);
  v39 = (unsigned __int64)UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, c, 0);
  *(_QWORD *)&v45.fields.x = v43;
  v45.fields.z = v44;
  v41 = (unsigned __int64)UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v45, 0);
  v13 = UIPanel_TypeInfo;
  if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v40);
    v13 = UIPanel_TypeInfo;
  }
  mTemp = v13->static_fields->mTemp;
  if ( !mTemp )
    sub_2213CDC(v13, v40);
  max_length = mTemp->max_length;
  if ( !(_DWORD)max_length
    || (LODWORD(mTemp->m_Items[0]) = v37, (_DWORD)max_length == 1)
    || (LODWORD(mTemp->m_Items[1]) = v38, (unsigned int)max_length <= 2)
    || (LODWORD(mTemp->m_Items[2]) = v39, (_DWORD)max_length == 3) )
  {
    sub_2213CE4(v13);
  }
  v16 = *((float *)&v37 + 1);
  LODWORD(mTemp->m_Items[3]) = v41;
  if ( (int)max_length < 2 )
  {
    mTemp->m_Items[2] = *((float *)&v39 + 1);
    mTemp->m_Items[3] = *((float *)&v41 + 1);
    v32 = *((float *)&v37 + 1);
    mTemp->m_Items[0] = *((float *)&v37 + 1);
    mTemp->m_Items[1] = *((float *)&v38 + 1);
    v17 = *(float *)&v37;
  }
  else
  {
    v17 = *(float *)&v37;
    v18 = &mTemp->m_Items[1];
    v19 = (unsigned int)max_length - 1LL;
    v20 = v19;
    do
    {
      v21 = *v18++;
      v22 = v21;
      if ( v21 < v17 )
        v17 = v22;
      --v20;
    }
    while ( v20 );
    v23 = &mTemp->m_Items[1];
    v24 = v19;
    do
    {
      v25 = *v23++;
      v26 = v25;
      if ( v25 > v12 )
        v12 = v26;
      --v24;
    }
    while ( v24 );
    v27 = v19;
    mTemp->m_Items[1] = *((float *)&v38 + 1);
    v28 = &mTemp->m_Items[1];
    v29 = *((float *)&v37 + 1);
    mTemp->m_Items[0] = *((float *)&v37 + 1);
    mTemp->m_Items[2] = *((float *)&v39 + 1);
    mTemp->m_Items[3] = *((float *)&v41 + 1);
    do
    {
      v30 = *v28++;
      v31 = v30;
      if ( v30 < v29 )
        v29 = v31;
      --v27;
    }
    while ( v27 );
    v32 = *((float *)&v37 + 1);
    v33 = &mTemp->m_Items[1];
    do
    {
      v34 = *v33++;
      v35 = v34;
      if ( v34 > v32 )
        v32 = v35;
      --v19;
    }
    while ( v19 );
    v16 = v29;
  }
  return v12 >= this->fields.mMin.fields.x
      && v32 >= this->fields.mMin.fields.y
      && v17 <= this->fields.mMax.fields.x
      && v16 <= this->fields.mMax.fields.y;
}


bool UIPanel__IsVisible_56139504(UIPanel_o *this, UnityEngine_Vector3_o worldPos, const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  unsigned __int64 v8; // kr00_8
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  z = worldPos.fields.z;
  y = worldPos.fields.y;
  if ( this->fields.mAlpha < 0.001 )
    return 0;
  if ( (this->fields.mClipping | 4) == 4 )
    return 1;
  x = worldPos.fields.x;
  UIPanel__UpdateTransformMatrix(this, method);
  v9.fields.x = x;
  v9.fields.y = y;
  v9.fields.z = z;
  v8 = (unsigned __int64)UnityEngine_Matrix4x4__MultiplyPoint3x4(&this->fields.worldToLocal, v9, 0);
  if ( *(float *)&v8 < this->fields.mMin.fields.x
    || *((float *)&v8 + 1) < this->fields.mMin.fields.y
    || *(float *)&v8 > this->fields.mMax.fields.x )
  {
    return 0;
  }
  return *((float *)&v8 + 1) <= this->fields.mMax.fields.y;
}


// local variable allocation has failed, the output may be wrong!
bool UIPanel__IsVisible_56173888(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x3
  char v8; // w22

  if ( (byte_5974F4B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F4B = 1;
  }
  v5 = 0;
  while ( 1 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, w);
    v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, 0, 0);
    v8 = v6;
    if ( (v6 & 1) == 0 )
      return (v8 & 1) == 0;
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
        sub_2213CDC(v6, w);
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
      sub_2213CE4(v6);
    if ( !UIPanel__IsVisible(
            this,
            *(UnityEngine_Vector3_o *)(v5 + 32),
            *(UnityEngine_Vector3_o *)(v5 + 44),
            *(UnityEngine_Vector3_o *)(v5 + 56),
            *(UnityEngine_Vector3_o *)&w,
            v7) )
      return (v8 & 1) == 0;
LABEL_11:
    this = this->fields.mParentPanel;
  }
}


void UIPanel__LateUpdate(UIPanel_o *this, const MethodInfo *method)
{
  UIPanel_c *v2; // x0
  int32_t mUpdateFrame; // w19
  __int64 v4; // x1
  UIPanel_c *v5; // x0
  __int64 frameCount; // x0
  const MethodInfo *v7; // x1
  struct UIPanel_StaticFields *static_fields; // x9
  System_Collections_Generic_HashSet_object__o *updateAgainPanels; // x8
  struct System_Collections_Generic_List_UIPanel__o *list; // x8
  int size; // w22
  int32_t i; // w19
  UIPanel_c *v13; // x0
  struct System_Collections_Generic_HashSet_UIPanel__o *v14; // x8
  __int64 v15; // x19
  int v16; // w8
  __int64 v17; // x22
  UIPanel_c *v18; // x0
  __int64 v19; // x8
  int v20; // w22
  int32_t v21; // w19
  int v22; // w24
  UIPanel_c *v23; // x0
  int v24; // w8
  __int64 v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8
  int v28; // w8
  int v29; // w8
  __int64 v30; // x8
  int v31; // w8

  if ( (byte_5974F53 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIPanel__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIPanel__CopyTo__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIPanel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_2213A60(&UIPanel___TypeInfo);
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F53 = 1;
  }
  v2 = UIPanel_TypeInfo;
  if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, method);
    v2 = UIPanel_TypeInfo;
  }
  mUpdateFrame = v2->static_fields->mUpdateFrame;
  if ( mUpdateFrame != UnityEngine_Time__get_frameCount(0) )
  {
    v5 = UIPanel_TypeInfo;
    if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v4);
      v5 = UIPanel_TypeInfo;
    }
    v5->static_fields->mUpdating = 1;
    frameCount = UnityEngine_Time__get_frameCount(0);
    static_fields = UIPanel_TypeInfo->static_fields;
    updateAgainPanels = (System_Collections_Generic_HashSet_object__o *)static_fields->updateAgainPanels;
    static_fields->mUpdateFrame = frameCount;
    if ( !updateAgainPanels )
      goto LABEL_62;
    System_Collections_Generic_HashSet_object___Clear(
      updateAgainPanels,
      (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_UIPanel__Clear__);
    frameCount = (__int64)UIPanel_TypeInfo;
    list = UIPanel_TypeInfo->static_fields->list;
    if ( !list )
      goto LABEL_62;
    size = list->fields._size;
    if ( size >= 1 )
    {
      for ( i = 0; i != size; ++i )
      {
        v13 = UIPanel_TypeInfo;
        if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v7);
          v13 = UIPanel_TypeInfo;
        }
        frameCount = (__int64)v13->static_fields->list;
        if ( !frameCount )
          goto LABEL_62;
        frameCount = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)frameCount,
                                i,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
        if ( !frameCount )
          goto LABEL_62;
        UIPanel__UpdateSelf((UIPanel_o *)frameCount, v7);
      }
      frameCount = (__int64)UIPanel_TypeInfo;
    }
    if ( !*(_DWORD *)(frameCount + 228) )
    {
      j_il2cpp_runtime_class_init_0(frameCount, v7);
      frameCount = (__int64)UIPanel_TypeInfo;
    }
    v14 = *(struct System_Collections_Generic_HashSet_UIPanel__o **)(*(_QWORD *)(frameCount + 184) + 8LL);
    if ( !v14 )
LABEL_62:
      sub_2213CDC(frameCount, v7);
    if ( v14->fields._count >= 1 )
    {
      if ( !*(_DWORD *)(frameCount + 228) )
      {
        j_il2cpp_runtime_class_init_0(frameCount, v7);
        v14 = UIPanel_TypeInfo->static_fields->updateAgainPanels;
        if ( !v14 )
          goto LABEL_62;
      }
      frameCount = sub_2213B20(UIPanel___TypeInfo, (unsigned int)v14->fields._count);
      if ( !UIPanel_TypeInfo->static_fields->updateAgainPanels )
        goto LABEL_62;
      v15 = frameCount;
      System_Collections_Generic_HashSet_object___CopyTo_69973968(
        (System_Collections_Generic_HashSet_object__o *)UIPanel_TypeInfo->static_fields->updateAgainPanels,
        (System_Object_array *)frameCount,
        (const MethodInfo_42BB7D0 *)Method_System_Collections_Generic_HashSet_UIPanel__CopyTo__);
      if ( !v15 )
        goto LABEL_62;
      v16 = *(_DWORD *)(v15 + 24);
      if ( v16 >= 1 )
      {
        v17 = 0;
        do
        {
          if ( (unsigned int)v17 >= v16 )
            sub_2213CE4(frameCount);
          frameCount = *(_QWORD *)(v15 + 32 + 8 * v17);
          if ( !frameCount )
            goto LABEL_62;
          UIPanel__UpdateSelf((UIPanel_o *)frameCount, v7);
          v16 = *(_DWORD *)(v15 + 24);
        }
        while ( (int)++v17 < v16 );
      }
      v18 = UIPanel_TypeInfo;
      if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v7);
        v18 = UIPanel_TypeInfo;
      }
      frameCount = (__int64)v18->static_fields->updateAgainPanels;
      if ( !frameCount )
        goto LABEL_62;
      System_Collections_Generic_HashSet_object___Clear(
        (System_Collections_Generic_HashSet_object__o *)frameCount,
        (const MethodInfo_42BA970 *)Method_System_Collections_Generic_HashSet_UIPanel__Clear__);
      frameCount = (__int64)UIPanel_TypeInfo;
    }
    if ( !*(_DWORD *)(frameCount + 228) )
    {
      j_il2cpp_runtime_class_init_0(frameCount, v7);
      frameCount = (__int64)UIPanel_TypeInfo;
    }
    v19 = **(_QWORD **)(frameCount + 184);
    if ( !v19 )
      goto LABEL_62;
    v20 = *(_DWORD *)(v19 + 24);
    if ( v20 >= 1 )
    {
      v21 = 0;
      v22 = 3000;
      do
      {
        v23 = UIPanel_TypeInfo;
        if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v7);
          v23 = UIPanel_TypeInfo;
        }
        frameCount = (__int64)v23->static_fields->list;
        if ( !frameCount )
          goto LABEL_62;
        frameCount = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)frameCount,
                                v21,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
        if ( !frameCount )
          goto LABEL_62;
        v24 = *(_DWORD *)(frameCount + 168);
        v25 = frameCount;
        if ( v24 == 1 )
        {
          UIPanel__UpdateDrawCalls((UIPanel_o *)frameCount, v7);
          v27 = *(_QWORD *)(v25 + 184);
          if ( !v27 )
            goto LABEL_62;
          v28 = *(_DWORD *)(v27 + 24);
          if ( v28 )
          {
            v29 = *(_DWORD *)(v25 + 172) + v28;
            if ( v22 <= v29 )
              v22 = v29;
          }
        }
        else if ( v24 )
        {
          UIPanel__UpdateDrawCalls((UIPanel_o *)frameCount, v7);
          v30 = *(_QWORD *)(v25 + 184);
          if ( !v30 )
            goto LABEL_62;
          if ( *(_DWORD *)(v30 + 24) )
          {
            v31 = *(_DWORD *)(v25 + 172);
            if ( v22 <= v31 + 1 )
              v22 = v31 + 1;
          }
        }
        else
        {
          *(_DWORD *)(frameCount + 172) = v22;
          UIPanel__UpdateDrawCalls((UIPanel_o *)frameCount, v7);
          v26 = *(_QWORD *)(v25 + 184);
          if ( !v26 )
            goto LABEL_62;
          v22 += *(_DWORD *)(v26 + 24);
        }
        ++v21;
      }
      while ( v20 != v21 );
      frameCount = (__int64)UIPanel_TypeInfo;
    }
    if ( !*(_DWORD *)(frameCount + 228) )
    {
      j_il2cpp_runtime_class_init_0(frameCount, v7);
      frameCount = (__int64)UIPanel_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(frameCount + 184) + 36LL) = 0;
  }
}


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
  struct UIRect_AnchorPoint_o *v13; // x8
  struct UIRect_AnchorPoint_o *rightAnchor; // x9
  UnityEngine_Object_o *v15; // x21
  UnityEngine_Object_o *v16; // x22
  struct UIRect_AnchorPoint_o *v17; // x8
  struct UIRect_AnchorPoint_o *topAnchor; // x9
  UnityEngine_Object_o *v19; // x21
  UnityEngine_Object_o *v20; // x22
  float *v21; // x21
  struct UIRect_AnchorPoint_o *v22; // x8
  float v23; // s0
  struct UIRect_AnchorPoint_o *v24; // x8
  struct UIRect_AnchorPoint_o *v25; // x9
  float v26; // s10
  int absolute; // s13
  float v28; // s0
  struct UIRect_AnchorPoint_o *v29; // x8
  struct UIRect_AnchorPoint_o *v30; // x9
  float v31; // s11
  int v32; // s14
  float v33; // s0
  struct UIRect_AnchorPoint_o *v34; // x8
  struct UIRect_AnchorPoint_o *v35; // x9
  float v36; // s12
  int v37; // s15
  float v38; // s0
  struct UIRect_AnchorPoint_o *v39; // x8
  float v40; // s1
  float v41; // s13
  float v42; // s11
  float v43; // s12
  struct UIRect_AnchorPoint_o *v44; // x8
  UnityEngine_Object_o *v45; // x21
  struct UIRect_AnchorPoint_o *v46; // x8
  float v47; // s0
  struct UIRect_AnchorPoint_o *v48; // x8
  struct UIRect_AnchorPoint_o *v49; // x8
  UnityEngine_Object_o *v50; // x21
  struct UIRect_AnchorPoint_o *v51; // x8
  float v52; // s0
  float v53; // s1
  struct UIRect_AnchorPoint_o *v54; // x8
  struct UIRect_AnchorPoint_o *v55; // x8
  UnityEngine_Object_o *v56; // x21
  struct UIRect_AnchorPoint_o *v57; // x8
  float v58; // s0
  struct UIRect_AnchorPoint_o *v59; // x8
  float y; // s1
  float v61; // s0
  struct UIRect_AnchorPoint_o *v62; // x8
  struct UIRect_AnchorPoint_o *v63; // x8
  UnityEngine_Object_o *v64; // x21
  struct UIRect_AnchorPoint_o *v65; // x8
  struct UIRect_AnchorPoint_o *v66; // x8
  float v67; // s0
  float x; // s4
  float v69; // s1
  float v70; // s2
  float v71; // s5
  float v72; // s1
  float v73; // s6
  float v74; // s0
  float v75; // s1
  float v76; // s16
  struct UIRect_AnchorPoint_o *v79; // x8
  struct UIRect_AnchorPoint_o *v80; // x8
  struct UIRect_AnchorPoint_o *v81; // x10
  struct UIRect_AnchorPoint_o *v82; // x9
  struct UIRect_AnchorPoint_o *v83; // x11
  unsigned __int64 localPosition; // kr10_8
  float v85; // s1
  unsigned __int64 LocalPos; // kr60_8
  UnityEngine_Vector4_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974F52 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F52 = 1;
  }
  if ( this->fields.mClipping )
  {
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !cachedTransform )
      goto LABEL_105;
    v5 = (UnityEngine_Transform_o *)cachedTransform;
    parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)cachedTransform, 0);
    ViewSize = UIPanel__GetViewSize(this, v7);
    localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(v5, 0);
    leftAnchor = this->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_105;
    bottomAnchor = this->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_105;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    v12 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    cachedTransform = (void *)UnityEngine_Object__op_Equality(target, v12, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      v13 = this->fields.leftAnchor;
      if ( !v13 )
        goto LABEL_105;
      rightAnchor = this->fields.rightAnchor;
      if ( !rightAnchor )
        goto LABEL_105;
      v15 = (UnityEngine_Object_o *)v13->fields.target;
      v16 = (UnityEngine_Object_o *)rightAnchor->fields.target;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
      cachedTransform = (void *)UnityEngine_Object__op_Equality(v15, v16, 0);
      if ( ((unsigned __int8)cachedTransform & 1) != 0 )
      {
        v17 = this->fields.leftAnchor;
        if ( !v17 )
          goto LABEL_105;
        topAnchor = this->fields.topAnchor;
        if ( !topAnchor )
          goto LABEL_105;
        v19 = (UnityEngine_Object_o *)v17->fields.target;
        v20 = (UnityEngine_Object_o *)topAnchor->fields.target;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
        cachedTransform = (void *)UnityEngine_Object__op_Equality(v19, v20, 0);
        if ( ((unsigned __int8)cachedTransform & 1) != 0 )
        {
          cachedTransform = this->fields.leftAnchor;
          if ( !cachedTransform )
            goto LABEL_105;
          cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, 0);
          if ( !cachedTransform )
          {
            LocalPos = (unsigned __int64)UIRect__GetLocalPos((UIRect_o *)this, this->fields.leftAnchor, parent, 0);
            v80 = this->fields.leftAnchor;
            if ( v80 )
            {
              v81 = this->fields.bottomAnchor;
              if ( v81 )
              {
                v82 = this->fields.rightAnchor;
                if ( v82 )
                {
                  v83 = this->fields.topAnchor;
                  if ( v83 )
                  {
                    v41 = *(float *)&LocalPos + (float)v80->fields.absolute;
                    v43 = *((float *)&LocalPos + 1) + (float)v81->fields.absolute;
                    v42 = *(float *)&LocalPos + (float)v82->fields.absolute;
                    v67 = *((float *)&LocalPos + 1) + (float)v83->fields.absolute;
                    goto LABEL_88;
                  }
                }
              }
            }
            goto LABEL_105;
          }
          v21 = (float *)cachedTransform;
          if ( *((_DWORD *)cachedTransform + 6) > 2u )
          {
            v22 = this->fields.leftAnchor;
            if ( !v22 )
              goto LABEL_105;
            v23 = NGUIMath__Lerp(
                    *((float *)cachedTransform + 8),
                    *((float *)cachedTransform + 14),
                    v22->fields.relative,
                    0);
            v24 = this->fields.leftAnchor;
            if ( !v24 )
              goto LABEL_105;
            if ( *((_DWORD *)v21 + 6) > 2u )
            {
              v25 = this->fields.rightAnchor;
              if ( !v25 )
                goto LABEL_105;
              v26 = v23;
              absolute = v24->fields.absolute;
              v28 = NGUIMath__Lerp(v21[8], v21[14], v25->fields.relative, 0);
              v29 = this->fields.rightAnchor;
              if ( !v29 )
                goto LABEL_105;
              if ( ((_DWORD)v21[6] & 0xFFFFFFFC) != 0 )
              {
                v30 = this->fields.bottomAnchor;
                if ( !v30 )
                  goto LABEL_105;
                v31 = v28;
                v32 = v29->fields.absolute;
                v33 = NGUIMath__Lerp(v21[18], v21[12], v30->fields.relative, 0);
                v34 = this->fields.bottomAnchor;
                if ( !v34 )
                  goto LABEL_105;
                if ( ((_DWORD)v21[6] & 0xFFFFFFFC) != 0 )
                {
                  v35 = this->fields.topAnchor;
                  if ( v35 )
                  {
                    v36 = v33;
                    v37 = v34->fields.absolute;
                    v38 = NGUIMath__Lerp(v21[18], v21[12], v35->fields.relative, 0);
                    v39 = this->fields.topAnchor;
                    if ( v39 )
                    {
                      v40 = (float)v39->fields.absolute;
                      v41 = v26 + (float)absolute;
                      v42 = v31 + (float)v32;
                      v43 = v36 + (float)v37;
LABEL_87:
                      v67 = v38 + v40;
LABEL_88:
                      v87.fields.w = 2.0;
                      x = this->fields.mClipSoftness.fields.x;
                      v69 = *(float *)&localPosition + this->fields.mClipOffset.fields.x;
                      v70 = *((float *)&localPosition + 1) + this->fields.mClipOffset.fields.y;
                      v71 = v41 - v69;
                      v72 = v42 - v69;
                      v73 = v43 - v70;
                      v74 = v67 - v70;
                      if ( x < 2.0 )
                        x = 2.0;
                      v75 = v72 - v71;
                      v76 = v74 - v73;
                      if ( this->fields.mClipSoftness.fields.y >= 2.0 )
                        v87.fields.w = this->fields.mClipSoftness.fields.y;
                      if ( v75 >= x )
                        v87.fields.z = v75;
                      else
                        v87.fields.z = x;
                      v87.fields.x = v71 + (float)(v75 * 0.5);
                      if ( v76 >= v87.fields.w )
                        v87.fields.w = v76;
                      v87.fields.y = v73 + (float)(v76 * 0.5);
                      UIPanel__set_baseClipRegion(this, v87, v4);
                      return;
                    }
                  }
                  goto LABEL_105;
                }
              }
            }
          }
          goto LABEL_106;
        }
      }
    }
    v44 = this->fields.leftAnchor;
    if ( !v44 )
      goto LABEL_105;
    v45 = (UnityEngine_Object_o *)v44->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    cachedTransform = (void *)UnityEngine_Object__op_Implicit(v45, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = this->fields.leftAnchor;
      if ( !cachedTransform )
        goto LABEL_105;
      cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, 0);
      if ( cachedTransform )
      {
        if ( *((_DWORD *)cachedTransform + 6) <= 2u )
          goto LABEL_106;
        v46 = this->fields.leftAnchor;
        if ( !v46 )
          goto LABEL_105;
        v47 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v46->fields.relative, 0);
      }
      else
      {
        LODWORD(v47) = (unsigned int)UIRect__GetLocalPos((UIRect_o *)this, this->fields.leftAnchor, parent, 0);
      }
      v48 = this->fields.leftAnchor;
      if ( !v48 )
        goto LABEL_105;
      v41 = v47 + (float)v48->fields.absolute;
    }
    else
    {
      v41 = this->fields.mClipRange.fields.x + (float)(ViewSize.fields.x * -0.5);
    }
    v49 = this->fields.rightAnchor;
    if ( !v49 )
      goto LABEL_105;
    v50 = (UnityEngine_Object_o *)v49->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    cachedTransform = (void *)UnityEngine_Object__op_Implicit(v50, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = this->fields.rightAnchor;
      if ( !cachedTransform )
        goto LABEL_105;
      cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, 0);
      if ( cachedTransform )
      {
        if ( *((_DWORD *)cachedTransform + 6) <= 2u )
          goto LABEL_106;
        v51 = this->fields.rightAnchor;
        if ( !v51 )
          goto LABEL_105;
        v52 = NGUIMath__Lerp(*((float *)cachedTransform + 8), *((float *)cachedTransform + 14), v51->fields.relative, 0);
      }
      else
      {
        LODWORD(v52) = (unsigned int)UIRect__GetLocalPos((UIRect_o *)this, this->fields.rightAnchor, parent, 0);
      }
      v54 = this->fields.rightAnchor;
      if ( !v54 )
        goto LABEL_105;
      v53 = (float)v54->fields.absolute;
    }
    else
    {
      v53 = this->fields.mClipRange.fields.x;
      v52 = ViewSize.fields.x * 0.5;
    }
    v42 = v52 + v53;
    v55 = this->fields.bottomAnchor;
    if ( !v55 )
      goto LABEL_105;
    v56 = (UnityEngine_Object_o *)v55->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    cachedTransform = (void *)UnityEngine_Object__op_Implicit(v56, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = this->fields.bottomAnchor;
      if ( !cachedTransform )
        goto LABEL_105;
      cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, 0);
      if ( cachedTransform )
      {
        if ( (*((_DWORD *)cachedTransform + 6) & 0xFFFFFFFC) == 0 )
          goto LABEL_106;
        v57 = this->fields.bottomAnchor;
        if ( !v57 )
          goto LABEL_105;
        v58 = NGUIMath__Lerp(
                *((float *)cachedTransform + 18),
                *((float *)cachedTransform + 12),
                v57->fields.relative,
                0);
        v59 = this->fields.bottomAnchor;
        if ( !v59 )
          goto LABEL_105;
        v43 = v58 + (float)v59->fields.absolute;
        goto LABEL_76;
      }
      y = UIRect__GetLocalPos((UIRect_o *)this, this->fields.bottomAnchor, parent, 0).fields.y;
      v62 = this->fields.bottomAnchor;
      if ( !v62 )
        goto LABEL_105;
      v61 = (float)v62->fields.absolute;
    }
    else
    {
      y = this->fields.mClipRange.fields.y;
      v61 = ViewSize.fields.y * -0.5;
    }
    v43 = y + v61;
LABEL_76:
    v63 = this->fields.topAnchor;
    if ( !v63 )
      goto LABEL_105;
    v64 = (UnityEngine_Object_o *)v63->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Implicit(v64, 0) )
    {
      v40 = this->fields.mClipRange.fields.y;
      v38 = ViewSize.fields.y * 0.5;
      goto LABEL_87;
    }
    cachedTransform = this->fields.topAnchor;
    if ( !cachedTransform )
      goto LABEL_105;
    cachedTransform = UIRect_AnchorPoint__GetSides((UIRect_AnchorPoint_o *)cachedTransform, parent, 0);
    if ( !cachedTransform )
    {
      v85 = UIRect__GetLocalPos((UIRect_o *)this, this->fields.topAnchor, parent, 0).fields.y;
      v79 = this->fields.topAnchor;
      if ( v79 )
      {
        v67 = v85 + (float)v79->fields.absolute;
        goto LABEL_88;
      }
      goto LABEL_105;
    }
    if ( (*((_DWORD *)cachedTransform + 6) & 0xFFFFFFFC) != 0 )
    {
      v65 = this->fields.topAnchor;
      if ( v65 )
      {
        v38 = NGUIMath__Lerp(
                *((float *)cachedTransform + 18),
                *((float *)cachedTransform + 12),
                v65->fields.relative,
                0);
        v66 = this->fields.topAnchor;
        if ( v66 )
        {
          v40 = (float)v66->fields.absolute;
          goto LABEL_87;
        }
      }
LABEL_105:
      sub_2213CDC(cachedTransform, v4);
    }
LABEL_106:
    sub_2213CE4(cachedTransform);
  }
}


void UIPanel__OnDisable(UIPanel_o *this, const MethodInfo *method)
{
  UIPanel_o *v2; // x19
  struct System_Collections_Generic_List_UIDrawCall__o *drawCalls; // x8
  int size; // w23
  int32_t i; // w20
  __int64 v6; // x1
  Il2CppObject *Item; // x21
  int32_t v8; // w2
  int v9; // w9
  UIPanel_c *v10; // x0
  struct System_Collections_Generic_List_UIPanel__o *list; // x8
  __int64 v12; // x1
  UIPanel_c *v13; // x0

  v2 = this;
  if ( (byte_5974F51 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    this = (UIPanel_o *)sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F51 = 1;
  }
  drawCalls = v2->fields.drawCalls;
  if ( !drawCalls )
    goto LABEL_28;
  size = drawCalls->fields._size;
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      this = (UIPanel_o *)v2->fields.drawCalls;
      if ( !this )
        goto LABEL_28;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               i,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      this = (UIPanel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, method);
        UIDrawCall__Destroy((UIDrawCall_o *)Item, 0);
      }
    }
    drawCalls = v2->fields.drawCalls;
    if ( !drawCalls )
      goto LABEL_28;
  }
  v8 = drawCalls->fields._size;
  v9 = drawCalls->fields._version + 1;
  drawCalls->fields._size = 0;
  drawCalls->fields._version = v9;
  if ( v8 >= 1 )
    System_Array__Clear((System_Array_o *)drawCalls->fields._items, 0, v8, 0);
  v10 = UIPanel_TypeInfo;
  if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, method);
    v10 = UIPanel_TypeInfo;
  }
  this = (UIPanel_o *)v10->static_fields->list;
  if ( !this
    || (this = (UIPanel_o *)System_Collections_Generic_List_object___Remove(
                              (System_Collections_Generic_List_object__o *)this,
                              (Il2CppObject *)v2,
                              (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_UIPanel__Remove__),
        list = UIPanel_TypeInfo->static_fields->list,
        *(_QWORD *)&v2->fields.mMatrixFrame = -1,
        !list) )
  {
LABEL_28:
    sub_2213CDC(this, method);
  }
  if ( !list->fields._size )
  {
    if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, method);
    UIDrawCall__ReleaseAll(0);
    v13 = UIPanel_TypeInfo;
    if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v12);
      v13 = UIPanel_TypeInfo;
    }
    v13->static_fields->mUpdateFrame = -1;
  }
  UIRect__OnDisable((UIRect_o *)v2, 0);
}


void UIPanel__OnEnable(UIPanel_o *this, const MethodInfo *method)
{
  UIPanel_c *klass; // x8
  void (__fastcall *methodPtr)(UIPanel_o *, const MethodInfo *); // x9
  const MethodInfo *v5; // x1

  klass = this->klass;
  this->fields.mRebuild = 1;
  methodPtr = (void (__fastcall *)(UIPanel_o *, const MethodInfo *))klass->vtable._20_OnStart.methodPtr;
  v5 = klass->vtable._20_OnStart.method;
  *(_QWORD *)&this->fields.mMatrixFrame = -1;
  methodPtr(this, v5);
  UIRect__OnEnable((UIRect_o *)this, 0);
  this->fields.mMatrixFrame = -1;
}


void UIPanel__OnInit(UIPanel_o *this, const MethodInfo *method)
{
  UIPanel_c *v3; // x0
  System_Collections_Generic_List_object__o *list; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  UnityEngine_Object_o *mParentPanel; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *anchorCamera; // x20
  bool v17; // w0
  Il2CppObject *v18; // x20
  UnityEngine_Rigidbody_o *v19; // x20
  UIPanel_c *v20; // x0
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x8
  System_Collections_Generic_List_object__o *v25; // x19
  System_Comparison_T__o *v26; // x20

  if ( (byte_5974F50 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_UIPanel__TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Rigidbody___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UICamera___);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__Sort__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UIPanel_CompareFunc__);
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F50 = 1;
  }
  v3 = UIPanel_TypeInfo;
  if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, method);
    v3 = UIPanel_TypeInfo;
  }
  list = (System_Collections_Generic_List_object__o *)v3->static_fields->list;
  if ( !list )
    goto LABEL_35;
  if ( System_Collections_Generic_List_object___Contains(
         list,
         (Il2CppObject *)this,
         (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_UIPanel__Contains__) )
  {
    return;
  }
  UIRect__OnInit((UIRect_o *)this, 0);
  UIPanel__FindParent(this, v5);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Rigidbody___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    mParentPanel = (UnityEngine_Object_o *)this->fields.mParentPanel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Equality(mParentPanel, 0, 0) )
    {
      anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      v17 = UnityEngine_Object__op_Inequality(anchorCamera, 0, 0);
      v18 = 0;
      if ( v17 )
      {
        list = (System_Collections_Generic_List_object__o *)this->fields.mCam;
        if ( !list )
          goto LABEL_35;
        v18 = UnityEngine_Component__GetComponent_object_(
                (UnityEngine_Component_o *)list,
                (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UICamera___);
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      list = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                            (UnityEngine_Object_o *)v18,
                                                            0,
                                                            0);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_35;
        if ( HIDWORD(v18[2].klass) <= 1 )
        {
          list = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
          if ( !list )
            goto LABEL_35;
          list = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__AddComponent_object_(
                                                                (UnityEngine_GameObject_o *)list,
                                                                (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_Rigidbody___);
          if ( !list )
            goto LABEL_35;
          v19 = (UnityEngine_Rigidbody_o *)list;
          UnityEngine_Rigidbody__set_isKinematic((UnityEngine_Rigidbody_o *)list, 1, 0);
          UnityEngine_Rigidbody__set_useGravity(v19, 0, 0);
        }
      }
    }
  }
  v20 = UIPanel_TypeInfo;
  this->fields.mRebuild = 1;
  *(_QWORD *)&this->fields.mMatrixFrame = -1;
  if ( !*(&v20->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v20, method);
    v20 = UIPanel_TypeInfo;
  }
  list = (System_Collections_Generic_List_object__o *)v20->static_fields->list;
  if ( !list )
    goto LABEL_35;
  items = list->fields._items;
  v22 = Method_System_Collections_Generic_List_UIPanel__Add__;
  ++list->fields._version;
  if ( !items )
    goto LABEL_35;
  size = list->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      (Il2CppObject *)this,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v24[4] = (Il2CppClass *)this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)this, v8, v9, v10, v11, v12, v13);
  }
  v25 = (System_Collections_Generic_List_object__o *)UIPanel_TypeInfo->static_fields->list;
  v26 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UIPanel__TypeInfo);
  System_Comparison_object____ctor(v26, 0, Method_UIPanel_CompareFunc__, 0);
  if ( !v25 )
LABEL_35:
    sub_2213CDC(list, method);
  System_Collections_Generic_List_object___Sort_71849708(
    v25,
    v26,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UIPanel__Sort__);
}


void UIPanel__OnStart(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mGo; // x0

  mGo = this->fields.mGo;
  if ( !mGo )
    sub_2213CDC(0, method);
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
  UIPanel_o *Item; // x0
  struct System_Collections_Generic_List_UIDrawCall__o *drawCalls; // x9
  System_Collections_Generic_List_object__o *klass; // x8

  if ( (byte_5974F5E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F5E = 1;
  }
  Item = (UIPanel_o *)UIPanel_TypeInfo;
  this->fields.mRebuild = 1;
  if ( !LODWORD(Item->fields.worldToLocal.fields.m12) )
  {
    j_il2cpp_runtime_class_init_0(Item, method);
    Item = (UIPanel_o *)UIPanel_TypeInfo;
  }
  drawCalls = Item->fields.drawCalls;
  klass = (System_Collections_Generic_List_object__o *)drawCalls->klass;
  LODWORD(drawCalls->fields._syncRoot) = -1;
  if ( !klass )
    goto LABEL_12;
  if ( klass->fields._size >= 1 )
  {
    if ( LODWORD(Item->fields.worldToLocal.fields.m12)
      || (j_il2cpp_runtime_class_init_0(Item, method),
          (klass = (System_Collections_Generic_List_object__o *)UIPanel_TypeInfo->static_fields->list) != 0) )
    {
      Item = (UIPanel_o *)System_Collections_Generic_List_object___get_Item(
                            klass,
                            0,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
      if ( Item )
      {
        UIPanel__LateUpdate(Item, method);
        return;
      }
    }
LABEL_12:
    sub_2213CDC(Item, method);
  }
}


void UIPanel__RemoveWidget(UIPanel_o *this, UIWidget_o *w, const MethodInfo *method)
{
  struct System_Collections_Generic_List_UIWidget__o *widgets; // x0
  UnityEngine_Object_o *drawCall; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UIDrawCall_o *v13; // x8
  int32_t mDepth; // w9

  if ( (byte_5974F5D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Remove__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F5D = 1;
  }
  widgets = this->fields.widgets;
  if ( !widgets )
    goto LABEL_15;
  widgets = (struct System_Collections_Generic_List_UIWidget__o *)System_Collections_Generic_List_object___Remove(
                                                                    (System_Collections_Generic_List_object__o *)widgets,
                                                                    (Il2CppObject *)w,
                                                                    (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_UIWidget__Remove__);
  if ( ((unsigned __int8)widgets & 1) == 0 )
    return;
  if ( !w )
    goto LABEL_15;
  drawCall = (UnityEngine_Object_o *)w->fields.drawCall;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, w);
  widgets = (struct System_Collections_Generic_List_UIWidget__o *)UnityEngine_Object__op_Inequality(drawCall, 0, 0);
  if ( ((unsigned __int8)widgets & 1) != 0 )
  {
    v13 = w->fields.drawCall;
    if ( v13 )
    {
      mDepth = w->fields.mDepth;
      if ( mDepth == v13->fields.depthStart || mDepth == v13->fields.depthEnd )
        this->fields.mRebuild = 1;
      w->fields.drawCall = 0;
      v13->fields.isDirty = 1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&w->fields.drawCall, 0, v7, v8, v9, v10, v11, v12);
      return;
    }
LABEL_15:
    sub_2213CDC(widgets, w);
  }
}


void UIPanel__SetDirty(UIPanel_o *this, const MethodInfo *method)
{
  UIPanel_o **v2; // x19
  UIPanel_o *v3; // x8
  int m_CancellationTokenSource; // w21
  int32_t v5; // w20

  v2 = (UIPanel_o **)this;
  if ( (byte_5974F4D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    this = (UIPanel_o *)sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    byte_5974F4D = 1;
  }
  v3 = v2[23];
  if ( !v3 )
    goto LABEL_10;
  m_CancellationTokenSource = (int)v3->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = v2[23];
      if ( !this )
        break;
      this = (UIPanel_o *)System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this,
                            v5,
                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
      if ( !this )
        break;
      ++v5;
      LOBYTE(this->fields.worldToLocal.fields.m31) = 1;
      if ( m_CancellationTokenSource == v5 )
        goto LABEL_9;
    }
LABEL_10:
    sub_2213CDC(this, method);
  }
LABEL_9:
  (*(void (__fastcall **)(UIPanel_o **, __int64, _QWORD))&(*v2)[1].fields.mChanged)(
    v2,
    1,
    *(_QWORD *)&(*v2)[1].fields.mAnchorsCached);
}


void UIPanel__SetRect(UIPanel_o *this, float x, float y, float width, float height, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v12; // x1
  UnityEngine_Transform_o *v13; // x20
  float v14; // s12
  float v15; // s13
  signed int v16; // w8
  signed int v17; // w9
  int v18; // w21
  int v19; // w22
  const MethodInfo *v20; // x1
  struct UIRect_AnchorPoint_o *leftAnchor; // x8
  UnityEngine_Transform_o *v25; // x20
  UnityEngine_Object_o *target; // x21
  struct UIRect_AnchorPoint_o *rightAnchor; // x8
  UnityEngine_Object_o *v28; // x21
  struct UIRect_AnchorPoint_o *bottomAnchor; // x8
  UnityEngine_Object_o *v30; // x21
  struct UIRect_AnchorPoint_o *topAnchor; // x8
  UnityEngine_Object_o *v32; // x21
  UnityEngine_Vector4_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974F49 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F49 = 1;
  }
  if ( !byte_5969ADF )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969ADF = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
    if ( !byte_5969ADF )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969ADF = 1;
    }
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, method);
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  if ( !cachedTransform )
    goto LABEL_49;
  v13 = cachedTransform;
  v14 = floorf(width + 0.5);
  v15 = floorf(height + 0.5);
  v16 = vcvtms_s32_f32(height + 0.5) & 0xFFFFFFFE;
  v17 = vcvtms_s32_f32(width + 0.5) & 0xFFFFFFFE;
  if ( v16 <= 2 )
    v18 = 2;
  else
    v18 = v16;
  if ( v17 <= 2 )
    v19 = 2;
  else
    v19 = v17;
  UnityEngine_Transform__get_localPosition(cachedTransform, 0);
  if ( v14 == INFINITY )
    v33.fields.z = 2.0;
  else
    v33.fields.z = (float)v19;
  v33.fields.x = floorf(x + 0.5);
  v33.fields.y = floorf(y + 0.5);
  if ( v15 == INFINITY )
    v33.fields.w = 2.0;
  else
    v33.fields.w = (float)v18;
  UIPanel__set_baseClipRegion(this, v33, v20);
  if ( UIRect__get_isAnchored((UIRect_o *)this, 0) )
  {
    cachedTransform = UnityEngine_Transform__get_parent(v13, 0);
    leftAnchor = this->fields.leftAnchor;
    if ( !leftAnchor )
      goto LABEL_49;
    v25 = cachedTransform;
    target = (UnityEngine_Object_o *)leftAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(target, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.leftAnchor;
      if ( !cachedTransform )
        goto LABEL_49;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v25, x, 0);
    }
    rightAnchor = this->fields.rightAnchor;
    if ( !rightAnchor )
      goto LABEL_49;
    v28 = (UnityEngine_Object_o *)rightAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v28, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.rightAnchor;
      if ( !cachedTransform )
        goto LABEL_49;
      UIRect_AnchorPoint__SetHorizontal((UIRect_AnchorPoint_o *)cachedTransform, v25, x + width, 0);
    }
    bottomAnchor = this->fields.bottomAnchor;
    if ( !bottomAnchor )
      goto LABEL_49;
    v30 = (UnityEngine_Object_o *)bottomAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Implicit(v30, 0);
    if ( ((unsigned __int8)cachedTransform & 1) != 0 )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.bottomAnchor;
      if ( !cachedTransform )
        goto LABEL_49;
      UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v25, y, 0);
    }
    topAnchor = this->fields.topAnchor;
    if ( !topAnchor )
LABEL_49:
      sub_2213CDC(cachedTransform, v12);
    v32 = (UnityEngine_Object_o *)topAnchor->fields.target;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    if ( UnityEngine_Object__op_Implicit(v32, 0) )
    {
      cachedTransform = (UnityEngine_Transform_o *)this->fields.topAnchor;
      if ( cachedTransform )
      {
        UIRect_AnchorPoint__SetVertical((UIRect_AnchorPoint_o *)cachedTransform, v25, y + height, 0);
        return;
      }
      goto LABEL_49;
    }
  }
}


void UIPanel__SortWidgets(UIPanel_o *this, const MethodInfo *method)
{
  System_Comparison_UIWidget__c *v3; // x0
  struct System_Collections_Generic_List_UIWidget__o *widgets; // x20
  System_Comparison_T__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5974F55 & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_UIWidget__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__Sort__);
    sub_2213A60(&Method_UIWidget_PanelCompareFunc__);
    byte_5974F55 = 1;
  }
  v3 = System_Comparison_UIWidget__TypeInfo;
  widgets = this->fields.widgets;
  this->fields.mSortWidgets = 0;
  v5 = (System_Comparison_T__o *)sub_2213CCC(v3);
  System_Comparison_object____ctor(v5, 0, Method_UIWidget_PanelCompareFunc__, 0);
  if ( !widgets )
    sub_2213CDC(v6, v7);
  System_Collections_Generic_List_object___Sort_71849708(
    (System_Collections_Generic_List_object__o *)widgets,
    v5,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UIWidget__Sort__);
}


void UIPanel__UpdateDrawCalls(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *cachedTransform; // x20
  const MethodInfo *v4; // x1
  __int64 usedForUI; // x0
  const MethodInfo *v6; // x1
  char v7; // w21
  float v8; // s4
  float w; // s2
  struct UnityEngine_Vector4_StaticFields *static_fields; // x8
  UnityEngine_Object_o *parent; // x21
  __int64 v12; // x1
  float x; // s10
  float y; // s9
  float z; // s8
  double v16; // d11
  __int64 v17; // x1
  double v18; // d0
  double v19; // d0
  double v20; // d1
  float v21; // s8
  double v22; // d1
  double v23; // d11
  double v24; // d0
  double v25; // d0
  double v26; // d1
  double v27; // d1
  int32_t v28; // w20
  __int64 v29; // x21
  UnityEngine_Transform_o *v30; // x22
  int32_t v31; // w8
  bool alwaysOnScreen; // w8
  struct UnityEngine_Texture2D_o *mClipTexture; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  float v40; // [xsp+0h] [xbp-80h]
  float v41; // [xsp+4h] [xbp-7Ch]
  double iptr; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr10_12.12
  UnityEngine_Vector3_o position; // 0:kr24_12.12
  UnityEngine_Vector3_o v45; // 0:kr30_12.12
  UnityEngine_Vector3_o v46; // 0:kr44_12.12
  UnityEngine_Vector3_o lossyScale; // 0:kr60_12.12
  UnityEngine_Vector4_o finalClipRegion; // 0:kr00_16.16
  UnityEngine_Quaternion_o rotation; // 0:kr50_16.16
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974F58 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F58 = 1;
  }
  cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
  usedForUI = UIPanel__get_usedForUI(this, v4);
  v7 = usedForUI;
  if ( this->fields.mClipping )
  {
    finalClipRegion = UIPanel__get_finalClipRegion(this, v6);
    this->fields.drawCallClipRange.fields.x = finalClipRegion.fields.x;
    this->fields.drawCallClipRange.fields.y = finalClipRegion.fields.y;
    v8 = finalClipRegion.fields.z * 0.5;
    w = finalClipRegion.fields.w * 0.5;
    this->fields.drawCallClipRange.fields.z = finalClipRegion.fields.z * 0.5;
    this->fields.drawCallClipRange.fields.w = finalClipRegion.fields.w * 0.5;
  }
  else
  {
    if ( !byte_5969DBE )
    {
      usedForUI = sub_2213A60(&UnityEngine_Vector4_TypeInfo);
      byte_5969DBE = 1;
    }
    static_fields = UnityEngine_Vector4_TypeInfo->static_fields;
    LODWORD(v8) = *(_QWORD *)&static_fields->zeroVector.fields.z;
    LODWORD(w) = HIDWORD(*(_OWORD *)&static_fields->zeroVector);
    this->fields.drawCallClipRange = static_fields->zeroVector;
  }
  if ( v8 == 0.0 )
  {
    usedForUI = UnityEngine_Screen__get_width(0);
    w = this->fields.drawCallClipRange.fields.w;
    this->fields.drawCallClipRange.fields.z = vcvts_n_f32_s32(usedForUI, 1u);
  }
  if ( w == 0.0 )
  {
    usedForUI = UnityEngine_Screen__get_height(0);
    this->fields.drawCallClipRange.fields.w = vcvts_n_f32_s32(usedForUI, 1u);
  }
  if ( this->fields.mHalfPixelOffset )
    *(float32x2_t *)&this->fields.drawCallClipRange.fields.x = vadd_f32(
                                                                 *(float32x2_t *)&this->fields.drawCallClipRange.fields.x,
                                                                 (float32x2_t)0x3F000000BF000000LL);
  if ( (v7 & 1) != 0 )
  {
    usedForUI = (__int64)UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !usedForUI )
      goto LABEL_72;
    parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)usedForUI, 0);
    usedForUI = (__int64)UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !usedForUI )
      goto LABEL_72;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)usedForUI, 0);
    x = localPosition.fields.x;
    y = localPosition.fields.y;
    z = localPosition.fields.z;
    if ( !this->fields.mClipping )
    {
LABEL_54:
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      usedForUI = UnityEngine_Object__op_Inequality(parent, 0, 0);
      if ( (usedForUI & 1) != 0 )
      {
        if ( !parent )
          goto LABEL_72;
        v50.fields.x = x;
        v50.fields.y = y;
        v50.fields.z = localPosition.fields.z;
        v45 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)parent, v50, 0);
        x = v45.fields.x;
        y = v45.fields.y;
        z = v45.fields.z;
      }
      v46 = UIPanel__get_drawCallOffset(this, v6);
      if ( cachedTransform )
      {
        v21 = z + v46.fields.z;
        v40 = y + v46.fields.y;
        v41 = x + v46.fields.x;
        goto LABEL_61;
      }
LABEL_72:
      sub_2213CDC(usedForUI, v6);
    }
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
    v16 = localPosition.fields.x;
    v18 = modf(localPosition.fields.x, &iptr);
    if ( localPosition.fields.x >= 0.0 )
    {
      if ( v18 != 0.5 )
      {
        v19 = floor(v16 + 0.5);
        goto LABEL_34;
      }
      v20 = 1.0;
      v19 = iptr;
    }
    else
    {
      if ( v18 != -0.5 )
      {
        v19 = ceil(v16 + -0.5);
        goto LABEL_34;
      }
      v19 = iptr;
      v20 = -1.0;
    }
    v22 = v19 + v20;
    if ( ((__int64)v19 & 1) != 0 )
      v19 = v22;
LABEL_34:
    if ( v19 == INFINITY )
      x = -2147500000.0;
    else
      x = (float)(int)v19;
    if ( !byte_596A30A )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_596A30A = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v17);
    v23 = localPosition.fields.y;
    v24 = modf(localPosition.fields.y, &iptr);
    if ( localPosition.fields.y >= 0.0 )
    {
      if ( v24 == 0.5 )
      {
        v26 = 1.0;
        v25 = iptr;
LABEL_46:
        v27 = v25 + v26;
        if ( ((__int64)v25 & 1) != 0 )
          v25 = v27;
        goto LABEL_51;
      }
      v25 = floor(v23 + 0.5);
    }
    else
    {
      if ( v24 == -0.5 )
      {
        v25 = iptr;
        v26 = -1.0;
        goto LABEL_46;
      }
      v25 = ceil(v23 + -0.5);
    }
LABEL_51:
    if ( v25 == INFINITY )
      y = -2147500000.0;
    else
      y = (float)(int)v25;
    goto LABEL_54;
  }
  if ( !cachedTransform )
    goto LABEL_72;
  position = UnityEngine_Transform__get_position(cachedTransform, 0);
  v21 = position.fields.z;
  v40 = position.fields.y;
  v41 = position.fields.x;
LABEL_61:
  rotation = UnityEngine_Transform__get_rotation(cachedTransform, 0);
  lossyScale = UnityEngine_Transform__get_lossyScale(cachedTransform, 0);
  usedForUI = (__int64)this->fields.drawCalls;
  if ( !usedForUI )
    goto LABEL_72;
  v28 = 0;
  while ( v28 < *(_DWORD *)(usedForUI + 24) )
  {
    usedForUI = (__int64)System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)usedForUI,
                           v28,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( usedForUI )
    {
      v29 = usedForUI;
      usedForUI = (__int64)UIDrawCall__get_cachedTransform((UIDrawCall_o *)usedForUI, 0);
      if ( usedForUI )
      {
        v51.fields.z = v21;
        v51.fields.y = v40;
        v51.fields.x = v41;
        v30 = (UnityEngine_Transform_o *)usedForUI;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)usedForUI, v51, 0);
        UnityEngine_Transform__set_rotation(v30, rotation, 0);
        UnityEngine_Transform__set_localScale(v30, lossyScale, 0);
        v31 = this->fields.renderQueue == 2 ? 0 : v28;
        UIDrawCall__set_renderQueue((UIDrawCall_o *)v29, this->fields.startingRenderQueue + v31, 0);
        alwaysOnScreen = this->fields.alwaysOnScreen;
        if ( alwaysOnScreen )
          alwaysOnScreen = (this->fields.mClipping & 0xFFFFFFFB) == 0;
        *(_BYTE *)(v29 + 72) = alwaysOnScreen;
        UIDrawCall__set_sortingOrder((UIDrawCall_o *)v29, this->fields.mSortingOrder, 0);
        mClipTexture = this->fields.mClipTexture;
        *(_QWORD *)(v29 + 64) = mClipTexture;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 64), (int32_t)mClipTexture, v34, v35, v36, v37, v38, v39);
        usedForUI = (__int64)this->fields.drawCalls;
        ++v28;
        if ( usedForUI )
          continue;
      }
    }
    goto LABEL_72;
  }
}


void UIPanel__UpdateLayers(UIPanel_o *this, const MethodInfo *method)
{
  int32_t mLayer; // w20
  UnityEngine_GameObject_o *cachedGameObject; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_UIWidget__o *widgets; // x8
  int size; // w23
  int32_t v8; // w20
  __int64 v9; // x1
  Il2CppObject *Item; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *parent; // x22
  int32_t v13; // w20

  if ( (byte_5974F59 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F59 = 1;
  }
  mLayer = this->fields.mLayer;
  cachedGameObject = UIRect__get_cachedGameObject((UIRect_o *)this, 0);
  if ( !cachedGameObject )
    goto LABEL_27;
  if ( mLayer == UnityEngine_GameObject__get_layer(cachedGameObject, 0) )
    return;
  cachedGameObject = this->fields.mGo;
  if ( !cachedGameObject
    || (cachedGameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(cachedGameObject, 0),
        widgets = this->fields.widgets,
        this->fields.mLayer = (int)cachedGameObject,
        !widgets) )
  {
LABEL_27:
    sub_2213CDC(cachedGameObject, v5);
  }
  size = widgets->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    do
    {
      cachedGameObject = (UnityEngine_GameObject_o *)this->fields.widgets;
      if ( !cachedGameObject )
        goto LABEL_27;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)cachedGameObject,
               v8,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      cachedGameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)Item, 0);
      if ( ((unsigned __int8)cachedGameObject & 1) != 0 )
      {
        if ( !Item )
          goto LABEL_27;
        parent = (UnityEngine_Object_o *)UIRect__get_parent((UIRect_o *)Item, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
        if ( UnityEngine_Object__op_Equality(parent, (UnityEngine_Object_o *)this, 0) )
        {
          cachedGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
          if ( !cachedGameObject )
            goto LABEL_27;
          UnityEngine_GameObject__set_layer(cachedGameObject, this->fields.mLayer, 0);
        }
      }
    }
    while ( size != ++v8 );
  }
  UIRect__ResetAnchors((UIRect_o *)this, 0);
  cachedGameObject = (UnityEngine_GameObject_o *)this->fields.drawCalls;
  if ( !cachedGameObject )
    goto LABEL_27;
  v13 = 0;
  while ( v13 < SLODWORD(cachedGameObject[1].klass) )
  {
    cachedGameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                                     (System_Collections_Generic_List_object__o *)cachedGameObject,
                                                     v13,
                                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    if ( cachedGameObject )
    {
      cachedGameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cachedGameObject, 0);
      if ( cachedGameObject )
      {
        UnityEngine_GameObject__set_layer(cachedGameObject, this->fields.mLayer, 0);
        cachedGameObject = (UnityEngine_GameObject_o *)this->fields.drawCalls;
        ++v13;
        if ( cachedGameObject )
          continue;
      }
    }
    goto LABEL_27;
  }
}


void UIPanel__UpdateSelf(UIPanel_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float time; // s0
  UIPanel_c *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  Il2CppObject *Component_object; // x19
  System_Collections_Generic_List_object__o *drawCalls; // x0
  int32_t v12; // w20
  const MethodInfo *v13; // x2
  UIDrawCall_o *v14; // x21

  if ( (byte_5974F54 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIDrawCall_TypeInfo);
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F54 = 1;
  }
  time = RealTime__get_time(0);
  v5 = UIPanel_TypeInfo;
  this->fields.mUpdateTime = time;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v3);
    v5 = UIPanel_TypeInfo;
  }
  this->fields.mUpdatedFrame = v5->static_fields->mUpdateFrame;
  UIPanel__UpdateTransformMatrix(this, v3);
  UIPanel__UpdateLayers(this, v6);
  UIPanel__UpdateWidgets(this, v7);
  if ( this->fields.mRebuild )
  {
    this->fields.mRebuild = 0;
    UIPanel__FillAllDrawCalls(this, v8);
  }
  else
  {
    drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
    if ( !drawCalls )
      goto LABEL_26;
    v12 = 0;
    while ( v12 < drawCalls->fields._size )
    {
      drawCalls = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 drawCalls,
                                                                 v12,
                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIDrawCall__get_Item__);
      if ( !drawCalls )
        goto LABEL_26;
      v14 = (UIDrawCall_o *)drawCalls;
      if ( !BYTE4(drawCalls[5].fields._items) || UIPanel__FillDrawCall(this, (UIDrawCall_o *)drawCalls, v13) )
      {
        drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
        ++v12;
        if ( !drawCalls )
          goto LABEL_26;
      }
      else
      {
        if ( !*(&UIDrawCall_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UIDrawCall_TypeInfo, v8);
        UIDrawCall__Destroy(v14, 0);
        drawCalls = (System_Collections_Generic_List_object__o *)this->fields.drawCalls;
        if ( !drawCalls )
          goto LABEL_26;
        System_Collections_Generic_List_object___RemoveAt(
          drawCalls,
          v12,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_UIDrawCall__RemoveAt__);
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
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
      sub_2213CDC(drawCalls, v8);
    }
  }
}


void UIPanel__UpdateTransformMatrix(UIPanel_o *this, const MethodInfo *method)
{
  int32_t frameCount; // w0
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v5; // x1
  __int128 v6; // q1
  __int128 v7; // q2
  const MethodInfo *v8; // x1
  float32x4_t v9; // q0
  float32x4_t v10; // q2
  float32x2_t v11; // d1
  UnityEngine_Matrix4x4_o v12; // [xsp+0h] [xbp-60h] BYREF

  frameCount = UnityEngine_Time__get_frameCount(0);
  if ( this->fields.mMatrixFrame != frameCount )
  {
    this->fields.mMatrixFrame = frameCount;
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( !cachedTransform )
      sub_2213CDC(0, v5);
    UnityEngine_Transform__get_worldToLocalMatrix(&v12, cachedTransform, 0);
    v6 = *(_OWORD *)&v12.fields.m01;
    *(_OWORD *)&this->fields.worldToLocal.fields.m00 = *(_OWORD *)&v12.fields.m00;
    *(_OWORD *)&this->fields.worldToLocal.fields.m01 = v6;
    v7 = *(_OWORD *)&v12.fields.m03;
    *(_OWORD *)&this->fields.worldToLocal.fields.m02 = *(_OWORD *)&v12.fields.m02;
    *(_OWORD *)&this->fields.worldToLocal.fields.m03 = v7;
    v9.n128_u64[0] = (unsigned __int64)UIPanel__GetViewSize(this, v8);
    v10.n128_u64[0] = 0x3F0000003F000000LL;
    v10.n128_u64[1] = 0x3F0000003F000000LL;
    v11.n64_u64[0] = vadd_f32((float32x2_t)this->fields.mClipOffset, *(float32x2_t *)&this->fields.mClipRange.fields.x).n64_u64[0];
    v9.n128_u64[0] = vmulq_f32(v9, v10).n128_u64[0];
    v10.n128_u64[0] = vadd_f32((float32x2_t)v9.n128_u64[0], v11).n64_u64[0];
    v9.n128_u64[0] = vsub_f32(v11, (float32x2_t)v9.n128_u64[0]).n64_u64[0];
    v9.n128_u64[1] = v10.n128_u64[0];
    *(float32x4_t *)&this->fields.mMin.fields.x = v9;
  }
}


void UIPanel__UpdateWidgets(UIPanel_o *this, const MethodInfo *method)
{
  _BOOL4 v3; // w25
  System_Collections_Generic_List_object__o *clipCount; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_UIWidget__o *widgets; // x8
  int size; // w26
  int v8; // w20
  char v9; // w29
  int32_t v10; // w21
  System_Collections_Generic_List_object__o *v11; // x22
  UnityEngine_Object_o *syncRoot; // x23
  int32_t frameCount; // w23
  bool v14; // w0
  char v15; // w24
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *v17; // x23
  const MethodInfo *v18; // x2
  __int64 v19; // x8
  struct UIPanel_OnGeometryUpdated_o *onGeometryUpdated; // x8

  if ( (byte_5974F5A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F5A = 1;
  }
  v3 = !this->fields.cullWhileDragging && this->fields.mCullTime > this->fields.mUpdateTime;
  if ( this->fields.mForced != v3 )
  {
    this->fields.mForced = v3;
    this->fields.mResized = 1;
  }
  clipCount = (System_Collections_Generic_List_object__o *)UIPanel__get_clipCount(this, method);
  widgets = this->fields.widgets;
  if ( !widgets )
LABEL_41:
    sub_2213CDC(clipCount, v5);
  size = widgets->fields._size;
  if ( size >= 1 )
  {
    v8 = (int)clipCount;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      clipCount = (System_Collections_Generic_List_object__o *)this->fields.widgets;
      if ( !clipCount )
        goto LABEL_41;
      clipCount = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                 clipCount,
                                                                 v10,
                                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
      if ( !clipCount )
        goto LABEL_41;
      v11 = clipCount;
      syncRoot = (UnityEngine_Object_o *)clipCount[5].fields._syncRoot;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      if ( !UnityEngine_Object__op_Equality(syncRoot, (UnityEngine_Object_o *)this, 0)
        || !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v11, 0) )
      {
        goto LABEL_34;
      }
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
          v14 = !v8 && !BYTE1(v11[5].monitor) || UIPanel__IsVisible_56173888(this, (UIWidget_o *)v11, v16);
        }
        UIWidget__UpdateVisibility((UIWidget_o *)v11, v15, v14, 0);
      }
      if ( !UIWidget__UpdateGeometry((UIWidget_o *)v11, frameCount, 0) )
        goto LABEL_34;
      if ( !this->fields.mRebuild )
      {
        v17 = *(UnityEngine_Object_o **)&v11[8].fields._size;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
        clipCount = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
        if ( ((unsigned __int8)clipCount & 1) != 0 )
        {
          v19 = *(_QWORD *)&v11[8].fields._size;
          if ( !v19 )
            goto LABEL_41;
          v9 = 1;
          *(_BYTE *)(v19 + 220) = 1;
          goto LABEL_34;
        }
        UIPanel__FindDrawCall(this, (UIWidget_o *)v11, v18);
      }
      v9 = 1;
LABEL_34:
      if ( size == ++v10 )
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
    }
  }
  this->fields.mResized = 0;
}


bool UIPanel__get_IsUpdated(UIPanel_o *this, const MethodInfo *method)
{
  UIPanel_c *v3; // x0
  int32_t mUpdatedFrame; // w19

  if ( (byte_5974F3B & 1) == 0 )
  {
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F3B = 1;
  }
  v3 = UIPanel_TypeInfo;
  mUpdatedFrame = this->fields.mUpdatedFrame;
  if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, method);
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
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.x = this->fields.mClipRange.fields.x;
  result.fields.y = this->fields.mClipRange.fields.y;
  result.fields.z = this->fields.mClipRange.fields.z;
  result.fields.w = this->fields.mClipRange.fields.w;
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

  if ( (byte_5974F41 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F41 = 1;
  }
  v3 = 0;
  while ( 1 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)this, 0, 0);
    if ( !v4 )
      break;
    if ( !this )
      sub_2213CDC(v4, method);
    if ( (this->fields.mClipping | 2) == 3 )
      ++v3;
    this = this->fields.mParentPanel;
  }
  return v3;
}


UnityEngine_Vector2_o UIPanel__get_clipOffset(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = this->fields.mClipOffset.fields.x;
  result.fields.y = this->fields.mClipOffset.fields.y;
  return result;
}


UnityEngine_Vector4_o UIPanel__get_clipRange(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.x = this->fields.mClipRange.fields.x;
  result.fields.y = this->fields.mClipRange.fields.y;
  result.fields.z = this->fields.mClipRange.fields.z;
  result.fields.w = this->fields.mClipRange.fields.w;
  return result;
}


UnityEngine_Vector2_o UIPanel__get_clipSoftness(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  result.fields.x = this->fields.mClipSoftness.fields.x;
  result.fields.y = this->fields.mClipSoftness.fields.y;
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
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.w = 0.0;
  result.fields.x = this->fields.mClipRange.fields.x;
  result.fields.y = this->fields.mClipRange.fields.y;
  result.fields.z = this->fields.mClipTextureRotation;
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
  __int64 v3; // x1
  UnityEngine_Object_o *anchorCamera; // x20
  __int64 v5; // x1
  UIRoot_o *mCam; // x0
  const MethodInfo *v7; // x1
  float y; // s8
  __int64 v9; // x1
  UnityEngine_Object_o *root; // x20
  float pixelSizeAdjustment; // s9
  float orthographicSize; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5974F40 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F40 = 1;
  }
  if ( this->fields.mHalfPixelOffset )
  {
    anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
    if ( UnityEngine_Object__op_Inequality(anchorCamera, 0, 0) )
    {
      mCam = (UIRoot_o *)this->fields.mCam;
      if ( !mCam )
        goto LABEL_19;
      if ( UnityEngine_Camera__get_orthographic((UnityEngine_Camera_o *)mCam, 0) )
      {
        y = UIPanel__GetWindowSize(this, v7).fields.y;
        root = (UnityEngine_Object_o *)UIRect__get_root((UIRect_o *)this, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
          orthographicSize = UnityEngine_Camera__get_orthographicSize((UnityEngine_Camera_o *)mCam, 0);
          result.fields.z = 0.0;
          result.fields.y = (float)(pixelSizeAdjustment / y) / orthographicSize;
          result.fields.x = -result.fields.y;
          return result;
        }
LABEL_19:
        sub_2213CDC(mCam, v5);
      }
    }
  }
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  result.fields.x = static_fields->zeroVector.fields.x;
  result.fields.y = static_fields->zeroVector.fields.y;
  result.fields.z = static_fields->zeroVector.fields.z;
  return result;
}


UnityEngine_Vector4_o UIPanel__get_finalClipRegion(UIPanel_o *this, const MethodInfo *method)
{
  UnityEngine_Vector2_o ViewSize; // kr00_8
  UnityEngine_Vector4_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  ViewSize = UIPanel__GetViewSize(this, method);
  result.fields.z = ViewSize.fields.x;
  result.fields.w = ViewSize.fields.y;
  if ( this->fields.mClipping )
  {
    result.fields.x = this->fields.mClipRange.fields.x + this->fields.mClipOffset.fields.x;
    result.fields.y = this->fields.mClipRange.fields.y + this->fields.mClipOffset.fields.y;
  }
  else
  {
    result.fields.x = 0.0;
    result.fields.y = 0.0;
  }
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
  float32x2_t v3; // d8
  float32x2_t v4; // d10
  struct UnityEngine_Vector2_o mClipOffset; // d9
  UnityEngine_Transform_o *cachedTransform; // x0
  float32x2_t *v7; // x8
  float32x2_t v8; // d0
  struct UnityEngine_Vector3_array *mCorners; // x8
  unsigned __int64 v10; // d1
  struct UnityEngine_Vector3_array *v11; // x8
  struct UnityEngine_Vector3_array *v12; // x8
  __int64 v13; // x19
  UnityEngine_Transform_o *v14; // x20
  unsigned __int64 v15; // x21
  __int64 v16; // x22
  UnityEngine_Vector3_o v18; // 0:kr00_12.12

  if ( (byte_5974F45 & 1) == 0 )
  {
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F45 = 1;
  }
  if ( !this->fields.mClipping )
  {
    v13 = ((__int64 (__fastcall *)(UIPanel_o *, const MethodInfo *))this->klass->vtable._11_get_worldCorners.methodPtr)(
            this,
            this->klass->vtable._11_get_worldCorners.method);
    cachedTransform = UIRect__get_cachedTransform((UIRect_o *)this, 0);
    if ( v13 )
    {
      v14 = cachedTransform;
      v15 = 0;
      v16 = v13 + 40;
      while ( v15 < *(unsigned int *)(v13 + 24) )
      {
        if ( !v14 )
          goto LABEL_23;
        v18 = UnityEngine_Transform__InverseTransformPoint(v14, *(UnityEngine_Vector3_o *)(v16 - 8), 0);
        if ( v15 >= *(unsigned int *)(v13 + 24) )
          break;
        ++v15;
        *(UnityEngine_Vector3_o *)(v16 - 8) = v18;
        v16 += 12;
        if ( v15 == 4 )
          return (UnityEngine_Vector3_array *)v13;
      }
LABEL_22:
      sub_2213CE4(cachedTransform);
    }
LABEL_23:
    sub_2213CDC(cachedTransform, method);
  }
  v4.n64_u64[0] = *(unsigned __int64 *)&this->fields.mClipRange.fields.x;
  v3.n64_u64[0] = *(unsigned __int64 *)&this->fields.mClipRange.fields.z;
  mClipOffset = this->fields.mClipOffset;
  cachedTransform = (UnityEngine_Transform_o *)UIPanel_TypeInfo;
  if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, method);
    cachedTransform = (UnityEngine_Transform_o *)UIPanel_TypeInfo;
  }
  v7 = *(float32x2_t **)(cachedTransform[7].fields.m_CachedPtr + 24);
  if ( !v7 )
    goto LABEL_23;
  if ( !v7[3].n64_u32[0] )
    goto LABEL_22;
  v7[5].n64_u32[0] = 0;
  v8.n64_u64[0] = vadd_f32(vadd_f32((float32x2_t)mClipOffset, v4), vmul_f32(v3, (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
  v7[4].n64_u64[0] = v8.n64_u64[0];
  mCorners = UIPanel_TypeInfo->static_fields->mCorners;
  if ( !mCorners )
    goto LABEL_23;
  if ( (mCorners->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_22;
  v10 = vadd_f32(v3, v8).n64_u64[0];
  mCorners->m_Items[1].fields.z = 0.0;
  *(_QWORD *)&mCorners->m_Items[1].fields.x = __PAIR64__(HIDWORD(v10), v8.n64_u32[0]);
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
  if ( (v12->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_22;
  HIDWORD(v10) = v8.n64_u32[1];
  v12->m_Items[3].fields.z = 0.0;
  *(_QWORD *)&v12->m_Items[3].fields.x = v10;
  return UIPanel_TypeInfo->static_fields->mCorners;
}


int32_t UIPanel__get_nextUnusedDepth(const MethodInfo *method)
{
  __int64 v1; // x1
  void *list; // x0
  __int64 v3; // x8
  int v4; // w21
  int32_t v5; // w19
  signed int v6; // w22
  UIPanel_c *v7; // x0

  if ( (byte_5974F3C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__get_Item__);
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F3C = 1;
  }
  list = UIPanel_TypeInfo;
  if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v1);
    list = UIPanel_TypeInfo;
  }
  v3 = **((_QWORD **)list + 23);
  if ( !v3 )
LABEL_18:
    sub_2213CDC(list, v1);
  v4 = *(_DWORD *)(v3 + 24);
  if ( v4 < 1 )
    return 0;
  v5 = 0;
  v6 = 0x80000000;
  do
  {
    v7 = UIPanel_TypeInfo;
    if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v1);
      v7 = UIPanel_TypeInfo;
    }
    list = v7->static_fields->list;
    if ( !list )
      goto LABEL_18;
    list = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)list,
             v5,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIPanel__get_Item__);
    if ( !list )
      goto LABEL_18;
    ++v5;
    if ( v6 <= *((_DWORD *)list + 80) )
      v6 = *((_DWORD *)list + 80);
  }
  while ( v4 != v5 );
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
  __int64 v3; // x1
  UnityEngine_Object_o *anchorCamera; // x20
  __int64 v5; // x1
  UnityEngine_Camera_o *mCam; // x0

  if ( (byte_5974F3F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F3F = 1;
  }
  anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( !UnityEngine_Object__op_Inequality(anchorCamera, 0, 0) )
    return 0;
  mCam = this->fields.mCam;
  if ( !mCam )
    sub_2213CDC(0, v5);
  return UnityEngine_Camera__get_orthographic(mCam, 0);
}


// attributes: thunk
float UIPanel__get_width(UIPanel_o *this, const MethodInfo *method)
{
  float result; // s0

  LODWORD(result) = *(_QWORD *)&UIPanel__GetViewSize(this, method);
  return result;
}


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
  __int64 v23; // x1
  UnityEngine_Object_o *anchorCamera; // x20
  const MethodInfo *v25; // x1
  UnityEngine_Camera_o *v26; // x20
  __int64 v27; // x1
  float cameraRayDistance; // s8
  UnityEngine_Vector2_o ViewSize; // kr50_8
  __int64 v30; // x8
  float v31; // s1
  float v32; // s0
  struct UnityEngine_Vector3_array *v33; // x8
  struct UnityEngine_Vector3_array *v34; // x8
  float v35; // s1
  struct UnityEngine_Vector3_array *v36; // x8
  UnityEngine_Object_o *mCam; // x20
  UnityEngine_Object_o *parent; // x20
  __int64 v39; // x1
  UnityEngine_Object_o *v40; // x21
  __int64 v41; // x19
  unsigned __int64 v42; // x20
  __int64 v43; // x8
  float32x2_t *v44; // x8
  float v45; // s1
  float32x2_t v46; // d0
  UnityEngine_Vector3_o v47; // 0:kr00_12.12
  UnityEngine_Vector3_o v48; // 0:kr14_12.12
  UnityEngine_Vector3_o v49; // 0:kr20_12.12
  UnityEngine_Vector3_o v50; // 0:kr34_12.12
  UnityEngine_Vector3_o position; // 0:kr40_12.12

  if ( (byte_5974F46 & 1) == 0 )
  {
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F46 = 1;
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
    if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v10);
      v11 = UIPanel_TypeInfo;
    }
    if ( v12 )
    {
      mCorners = v11->static_fields->mCorners;
      v14 = (float)(x + v4) - (float)(z * 0.5);
      v15 = (float)(y + v7) - (float)(w * 0.5);
      v47 = UnityEngine_Transform__TransformPoint_83496448(v12, v14, v15, 0.0, 0);
      if ( mCorners )
      {
        if ( !LODWORD(mCorners->max_length) )
          goto LABEL_53;
        v16 = w + v15;
        mCorners->m_Items[0] = v47;
        v17 = UIPanel_TypeInfo->static_fields->mCorners;
        v48 = UnityEngine_Transform__TransformPoint_83496448(v12, v14, v16, 0.0, 0);
        if ( v17 )
        {
          if ( (v17->max_length & 0xFFFFFFFE) == 0 )
            goto LABEL_53;
          v18 = z + v14;
          v17->m_Items[1] = v48;
          v19 = UIPanel_TypeInfo->static_fields->mCorners;
          v49 = UnityEngine_Transform__TransformPoint_83496448(v12, v18, v16, 0.0, 0);
          if ( v19 )
          {
            if ( LODWORD(v19->max_length) <= 2 )
              goto LABEL_53;
            v19->m_Items[2] = v49;
            v20 = UIPanel_TypeInfo->static_fields->mCorners;
            v50 = UnityEngine_Transform__TransformPoint_83496448(v12, v18, v15, 0.0, 0);
            if ( v20 )
            {
              if ( (v20->max_length & 0xFFFFFFFC) != 0 )
              {
                v20->m_Items[3] = v50;
LABEL_16:
                v21 = UIPanel_TypeInfo;
                if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v10);
                  v21 = UIPanel_TypeInfo;
                }
                return v21->static_fields->mCorners;
              }
LABEL_53:
              sub_2213CE4(cachedTransform);
            }
          }
        }
      }
    }
    goto LABEL_52;
  }
  anchorCamera = (UnityEngine_Object_o *)UIRect__get_anchorCamera((UIRect_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( !UnityEngine_Object__op_Inequality(anchorCamera, 0, 0) )
  {
    ViewSize = UIPanel__GetViewSize(this, v25);
    cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
    if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v10);
      cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
    }
    v30 = *(_QWORD *)(cachedTransform[7].fields.m_CachedPtr + 24);
    if ( v30 )
    {
      if ( !*(_DWORD *)(v30 + 24) )
        goto LABEL_53;
      *(_DWORD *)(v30 + 40) = 0;
      v31 = ViewSize.fields.x * -0.5;
      v32 = ViewSize.fields.y * -0.5;
      *(float *)(v30 + 32) = ViewSize.fields.x * -0.5;
      *(float *)(v30 + 36) = ViewSize.fields.y * -0.5;
      v33 = UIPanel_TypeInfo->static_fields->mCorners;
      if ( v33 )
      {
        if ( (v33->max_length & 0xFFFFFFFE) == 0 )
          goto LABEL_53;
        v33->m_Items[1].fields.z = 0.0;
        v33->m_Items[1].fields.x = v31;
        v33->m_Items[1].fields.y = ViewSize.fields.y + v32;
        v34 = UIPanel_TypeInfo->static_fields->mCorners;
        if ( v34 )
        {
          if ( LODWORD(v34->max_length) <= 2 )
            goto LABEL_53;
          v35 = ViewSize.fields.x + v31;
          v34->m_Items[2].fields.z = 0.0;
          v34->m_Items[2].fields.x = v35;
          v34->m_Items[2].fields.y = ViewSize.fields.y + v32;
          v36 = UIPanel_TypeInfo->static_fields->mCorners;
          if ( v36 )
          {
            if ( (v36->max_length & 0xFFFFFFFC) == 0 )
              goto LABEL_53;
            v36->m_Items[3].fields.x = v35;
            v36->m_Items[3].fields.y = v32;
            v36->m_Items[3].fields.z = 0.0;
            if ( !this->fields.anchorOffset )
              goto LABEL_16;
            mCam = (UnityEngine_Object_o *)this->fields.mCam;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
              v40 = (UnityEngine_Object_o *)UIRect__get_cachedTransform((UIRect_o *)this, 0);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
              if ( !UnityEngine_Object__op_Inequality(parent, v40, 0) )
                goto LABEL_16;
            }
            cachedTransform = (UnityEngine_Component_o *)UIRect__get_cachedTransform((UIRect_o *)this, 0);
            if ( cachedTransform )
            {
              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)cachedTransform, 0);
              v46.n64_u64[0] = *(unsigned __int64 *)&position.fields.x;
              v41 = 0;
              v42 = 0;
              while ( 1 )
              {
                cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
                if ( !*(&UIPanel_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(UIPanel_TypeInfo, v10);
                  v46.n64_u64[0] = *(unsigned __int64 *)&position.fields.x;
                  cachedTransform = (UnityEngine_Component_o *)UIPanel_TypeInfo;
                }
                v43 = *(_QWORD *)(cachedTransform[7].fields.m_CachedPtr + 24);
                if ( !v43 )
                  break;
                if ( v42 >= *(unsigned int *)(v43 + 24) )
                  goto LABEL_53;
                v44 = (float32x2_t *)(v43 + v41);
                ++v42;
                v41 += 12;
                v45 = position.fields.z + v44[5].n64_f32[0];
                v44[4].n64_u64[0] = vadd_f32(v46, v44[4]).n64_u64[0];
                v44[5].n64_f32[0] = v45;
                if ( v42 == 4 )
                  goto LABEL_16;
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_2213CDC(cachedTransform, v10);
  }
  v26 = this->fields.mCam;
  cameraRayDistance = UIRect__get_cameraRayDistance((UIRect_o *)this, 0);
  if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v27);
  return NGUITools__GetWorldCorners_56430788(v26, cameraRayDistance, 0);
}


void UIPanel__set_alpha(UIPanel_o *this, float value, const MethodInfo *method)
{
  float v3; // s1
  float v4; // s0

  v3 = 1.0;
  if ( value <= 1.0 )
    v3 = value;
  if ( value >= 0.0 )
    v4 = v3;
  else
    v4 = 0.0;
  if ( this->fields.mAlpha != v4 )
  {
    this->fields.mAlpha = v4;
    this->fields.mAlphaFrameID = -1;
    this->fields.mResized = 1;
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
  const MethodInfo_3820CA8 *v10; // x1
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  struct UIPanel_OnClippingMoved_o *onClipMove; // x8

  w = value.fields.w;
  z = value.fields.z;
  y = value.fields.y;
  x = value.fields.x;
  if ( (byte_5974F44 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIScrollView___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F44 = 1;
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
    v10 = (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIScrollView___;
    this->fields.mCullTime = v8;
    this->fields.mClipRange.fields.x = x;
    this->fields.mClipRange.fields.y = y;
    this->fields.mClipRange.fields.z = z;
    this->fields.mClipRange.fields.w = w;
    this->fields.mMatrixFrame = -1;
    Component_object = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v10);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v13 )
    {
      if ( !Component_object )
        sub_2213CDC(v13, v14);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5974F43 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974F43 = 1;
  }
  mClipTexture = (UnityEngine_Object_o *)this->fields.mClipTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, value);
  if ( UnityEngine_Object__op_Inequality(mClipTexture, (UnityEngine_Object_o *)value, 0) )
  {
    this->fields.mClipTexture = value;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mClipTexture,
      (int32_t)value,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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


// local variable allocation has failed, the output may be wrong!
void UIPanel__set_depth(UIPanel_o *this, int32_t value, const MethodInfo *method)
{
  UIPanel_c *v5; // x0
  int v6; // w8
  System_Collections_Generic_List_object__o *list; // x19
  System_Comparison_T__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_5974F3D & 1) == 0 )
  {
    sub_2213A60(&System_Comparison_UIPanel__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIPanel__Sort__);
    sub_2213A60(&Method_UIPanel_CompareFunc__);
    sub_2213A60(&UIPanel_TypeInfo);
    byte_5974F3D = 1;
  }
  if ( this->fields.mDepth != value )
  {
    v5 = UIPanel_TypeInfo;
    v6 = *(&UIPanel_TypeInfo->_2.cctor_finished + 1);
    this->fields.mDepth = value;
    if ( !v6 )
    {
      j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&value);
      v5 = UIPanel_TypeInfo;
    }
    list = (System_Collections_Generic_List_object__o *)v5->static_fields->list;
    v8 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_UIPanel__TypeInfo);
    System_Comparison_object____ctor(v8, 0, Method_UIPanel_CompareFunc__, 0);
    if ( !list )
      sub_2213CDC(v9, v10);
    System_Collections_Generic_List_object___Sort_71849708(
      list,
      v8,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_UIPanel__Sort__);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_2016A3C;
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
        v15 = sub_2213B30(method);
        v16 = sub_22140B4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_2016B34;
          else
            v13 = sub_2016AF8;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_2016A74;
        }
        else
        {
          v13 = sub_2016A4C;
        }
      }
      else
      {
        v13 = sub_2016A20;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_20169D8;
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
  return sub_2213A14(this, &v6, callback, object);
}


void UIPanel_OnClippingMoved__EndInvoke(
        UIPanel_OnClippingMoved_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_20169C4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2016984;
}


System_IAsyncResult_o *UIPanel_OnGeometryUpdated__BeginInvoke(
        UIPanel_OnGeometryUpdated_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void UIPanel_OnGeometryUpdated__EndInvoke(
        UIPanel_OnGeometryUpdated_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void UIPanel_OnGeometryUpdated__Invoke(UIPanel_OnGeometryUpdated_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}