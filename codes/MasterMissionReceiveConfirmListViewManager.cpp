void __fastcall MasterMissionReceiveConfirmListViewManager___cctor(const MethodInfo *method)
{
  if ( (byte_438BB7D & 1) == 0 )
  {
    sub_B775C4(&MasterMissionReceiveConfirmListViewManager_TypeInfo);
    byte_438BB7D = 1;
  }
  MasterMissionReceiveConfirmListViewManager_TypeInfo->static_fields->LIST_BLANK = 5;
}


void __fastcall MasterMissionReceiveConfirmListViewManager___ctor(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438BB7C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
    byte_438BB7C = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  this->fields.isInput = 1;
  this->fields.initialScrollPosition = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__CreateList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *confirmItemList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  float v9; // s8
  float v10; // s9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t size; // w8
  unsigned __int64 v19; // x25
  signed __int64 v20; // x26
  struct UnityEngine_GameObject_o *prefabObject; // x21
  MissionListViewItem_o *v22; // x22
  UnityEngine_Object_o *v23; // x21
  System_Int32_array **condMsg; // x23
  UnityEngine_Component_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  intptr_t monitor_high; // w22
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x3
  UnityEngine_Object_o *v35; // x20
  UnityEngine_Object_o *v36; // x20
  float width; // s8
  float height; // s0
  struct UIScrollView_o *v39; // x8
  __int64 v40; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o basePosition; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438BB79 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BB79 = 1;
  }
  basePosition.fields.z = 0.0;
  *(_QWORD *)&basePosition.fields.x = 0LL;
  MasterMissionReceiveConfirmListViewManager__DestroyList(this, (const MethodInfo *)confirmItemList);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_51;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                transform,
                                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_WebViewObject,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_51;
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_51;
      v9 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v10 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_51;
      v42.fields.x = -v9;
      v42.fields.y = -v10;
      v42.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v42, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_51;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)&basePosition.fields.x = 0LL;
  basePosition.fields.z = 0.0;
  if ( !confirmItemList )
    goto LABEL_51;
  size = confirmItemList->fields._size;
  if ( size >= 1 )
  {
    v40 = size - 1;
    v19 = 0LL;
    v20 = size;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      prefabObject = this->fields.prefabObject;
      v22 = (MissionListViewItem_o *)confirmItemList->fields._items->m_Items[v19];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v23 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabObject,
                                      (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_51;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)v23,
                                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
        if ( !v22 )
          goto LABEL_51;
        condMsg = (System_Int32_array **)v22->fields.condMsg;
        v25 = transform;
        transform = (UnityEngine_Component_o *)MissionListViewItem__get_EventMissionEntity(v22, 0LL);
        if ( !transform )
          goto LABEL_51;
        if ( !v25 )
          goto LABEL_51;
        monitor_high = HIDWORD(transform[3].monitor);
        v25[1].monitor = condMsg;
        sub_B77560((BattleServantConfConponent_o *)&v25[1].monitor, condMsg, v26, v27, v28, v29, v30, v31);
        v25[1].fields.m_CachedPtr = monitor_high;
        *((_BYTE *)&v25[1].fields + 4) = (__int64)v19 < v40;
        MasterMissionReceiveConfirmListViewObject__Init((MasterMissionReceiveConfirmListViewObject_o *)v25, 2, v33);
        MasterMissionReceiveConfirmListViewManager__SetObjectPosition(
          this,
          &basePosition,
          (MasterMissionReceiveConfirmListViewObject_o *)v25,
          v34);
        transform = (UnityEngine_Component_o *)this->fields.objectList;
        if ( !transform )
          goto LABEL_51;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__);
      }
      if ( (__int64)++v19 >= v20 )
        break;
      size = confirmItemList->fields._size;
    }
  }
  v35 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_51;
    v36 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    transform,
                                    (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v36 )
        goto LABEL_51;
      width = UIPanel__get_width((UIPanel_o *)v36, 0LL);
      height = UIPanel__get_height((UIPanel_o *)v36, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      this->fields.scrollViewSize.fields.x = width;
      this->fields.scrollViewSize.fields.y = height;
      if ( !transform )
        goto LABEL_51;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_51;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
      v39 = this->fields.scrollView;
      this->fields.initialScrollPosition = localPosition;
      if ( !v39 )
        goto LABEL_51;
      HIDWORD(v39->fields.onDragStarted) = 1;
    }
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      return;
    }
LABEL_51:
    sub_B7769C(transform, v6);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewManager__DestroyList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v7; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_438BB78 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BB78 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v7,
    objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
  v8 = v7;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B7769C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v8.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.scrollView;
    if ( objectList )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)objectList, 0LL);
      return;
    }
LABEL_20:
    sub_B7769C(objectList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__RequestListObject(
        MasterMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438BB7B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__get_Count__);
    byte_438BB7B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, *(_QWORD *)&mode);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      objectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v8,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
    {
      if ( !v8.fields.current )
        sub_B7769C(0LL, v6);
      MasterMissionReceiveConfirmListViewObject__Init(
        (MasterMissionReceiveConfirmListViewObject_o *)v8.fields.current,
        mode,
        v7);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewManager__SetMode(
        MasterMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int32_t v6; // w1

  this->fields.initMode = mode;
  MasterMissionReceiveConfirmListViewManager__set_IsInput(this, mode == 1, method);
  if ( mode == 1 )
  {
    v6 = 3;
  }
  else
  {
    if ( mode != 2 )
      return;
    v6 = 2;
  }
  MasterMissionReceiveConfirmListViewManager__RequestListObject(this, v6, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__SetObjectPosition(
        MasterMissionReceiveConfirmListViewManager_o *this,
        UnityEngine_Vector3_o *basePosition,
        MasterMissionReceiveConfirmListViewObject_o *obj,
        const MethodInfo *method)
{
  MasterMissionReceiveConfirmListViewManager_o *v6; // x22
  int32_t Size; // w20
  UnityEngine_Transform_o *v8; // x23
  UnityEngine_Transform_o *transform; // x23
  int v10; // s0
  UnityEngine_Transform_o *v14; // x23
  int v15; // s0
  UnityEngine_GameObject_o *v18; // x23
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  float y; // s8
  MasterMissionReceiveConfirmListViewManager_c *v22; // x0

  v6 = this;
  if ( (byte_438BB7A & 1) == 0 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_B775C4(&MasterMissionReceiveConfirmListViewManager_TypeInfo);
    byte_438BB7A = 1;
  }
  if ( !obj )
    goto LABEL_15;
  Size = MasterMissionReceiveConfirmListViewObject__GetSize(obj, (const MethodInfo *)basePosition);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0LL);
  if ( !v6->fields.listParent )
    goto LABEL_15;
  v8 = (UnityEngine_Transform_o *)this;
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_GameObject__get_transform(
                                                           v6->fields.listParent,
                                                           0LL);
  if ( !v8 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(v8, (UnityEngine_Transform_o *)this, 0LL);
  this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)obj,
                                                           0LL);
  if ( !this )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *basePosition, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL);
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v10, 0LL),
        v14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL),
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL),
        !v14)
    || (UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0LL),
        this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)obj,
                                                                 0LL),
        !v6->fields.listParent)
    || (v18 = (UnityEngine_GameObject_o *)this,
        this = (MasterMissionReceiveConfirmListViewManager_o *)UnityEngine_GameObject__get_layer(
                                                                 v6->fields.listParent,
                                                                 0LL),
        !v18) )
  {
LABEL_15:
    sub_B7769C(this, basePosition);
  }
  UnityEngine_GameObject__set_layer(v18, (int32_t)this, 0LL);
  MasterMissionReceiveConfirmListViewObject__SetBaseTransform(obj, v19);
  MasterMissionReceiveConfirmListViewObject__SetManager(obj, v6, v20);
  y = basePosition->fields.y;
  v22 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  if ( (BYTE3(MasterMissionReceiveConfirmListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionReceiveConfirmListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewManager_TypeInfo);
    v22 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  }
  basePosition->fields.y = y - (float)(v22->static_fields->LIST_BLANK + Size);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__add_callbackFunc(
        MasterMissionReceiveConfirmListViewManager_o *this,
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterMissionReceiveConfirmListViewManager_o *v11; // x0
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438BB73 & 1) == 0 )
  {
    sub_B775C4(&MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo);
    byte_438BB73 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MasterMissionReceiveConfirmListViewManager_CallbackFunc_c *)v8->klass != MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B77990(v8);
  MasterMissionReceiveConfirmListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__add_callbackFunc2(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterMissionReceiveConfirmListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438BB75 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438BB75 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B77990(v8);
  MasterMissionReceiveConfirmListViewManager__remove_callbackFunc2(v11, v12, v13);
}


bool __fastcall MasterMissionReceiveConfirmListViewManager__get_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isInput;
}


void __fastcall MasterMissionReceiveConfirmListViewManager__remove_callbackFunc(
        MasterMissionReceiveConfirmListViewManager_o *this,
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterMissionReceiveConfirmListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438BB74 & 1) == 0 )
  {
    sub_B775C4(&MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo);
    byte_438BB74 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MasterMissionReceiveConfirmListViewManager_CallbackFunc_c *)v8->klass != MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B77990(v8);
  MasterMissionReceiveConfirmListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__remove_callbackFunc2(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterMissionReceiveConfirmListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438BB76 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438BB76 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v6 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B77990(v8);
  MasterMissionReceiveConfirmListViewManager__get_IsInput(v11, v12);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__set_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UIProgressBar_o *v8; // x19
  float alpha; // s0

  if ( (byte_438BB77 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438BB77 = 1;
  }
  this->fields.isInput = value;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v6 )
  {
    v8 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v8 )
      sub_B7769C(v6, v7);
    alpha = UIProgressBar__get_alpha(v8, 0LL);
    UIProgressBar__set_alpha(v8, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc___ctor(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__BeginInvoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B77568(this, &v5, callback, object);
}


void __fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__EndInvoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__Invoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B775F4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B775EC(v18);
      v21 = sub_B779F0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B0F4C0(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B77674(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B0F4C0(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}