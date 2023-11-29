void __fastcall MasterMissionReceiveConfirmListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FB26B & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionReceiveConfirmListViewManager_TypeInfo, v1);
    byte_40FB26B = 1;
  }
  MasterMissionReceiveConfirmListViewManager_TypeInfo->static_fields->LIST_BLANK = 5;
}


void __fastcall MasterMissionReceiveConfirmListViewManager___ctor(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FB26A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo, v6);
    byte_40FB26A = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.isInput = 1;
  this->fields.initialScrollPosition = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__CreateList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *confirmItemList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *scrollView; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  UnityEngine_Component_o *v18; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  UnityEngine_Component_o *v20; // x0
  float v21; // s8
  float v22; // s9
  UnityEngine_Transform_o *transform; // x0
  UIScrollView_o *v24; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int32_t size; // w8
  unsigned __int64 v33; // x25
  signed __int64 v34; // x26
  struct UnityEngine_GameObject_o *prefabObject; // x21
  MissionListViewItem_o *v36; // x22
  UnityEngine_GameObject_o *v37; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_Int32_array **condMsg; // x23
  srcLineSprite_o *v40; // x21
  EventMissionEntity_o *EventMissionEntity; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t giftId; // w22
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x3
  struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *objectList; // x0
  UnityEngine_Object_o *v52; // x20
  UnityEngine_Component_o *v53; // x0
  WebViewObject_o *v54; // x20
  float width; // s8
  float height; // s0
  UnityEngine_Component_o *v57; // x0
  UnityEngine_Transform_o *v58; // x0
  struct UIScrollView_o *v59; // x8
  UIScrollView_o *v60; // x0
  __int64 v61; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o basePosition; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB267 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIPanel___, confirmItemList);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo, v10);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    byte_40FB267 = 1;
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
    v18 = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !v18 )
      goto LABEL_51;
    Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                v18,
                                (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( !Component_WebViewObject )
        goto LABEL_51;
      v20 = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !v20 )
        goto LABEL_51;
      v21 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v22 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = UnityEngine_Component__get_transform(v20, 0LL);
      if ( !transform )
        goto LABEL_51;
      v63.fields.x = -v21;
      v63.fields.y = -v22;
      v63.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(transform, v63, 0LL);
      v24 = this->fields.scrollView;
      if ( !v24 )
        goto LABEL_51;
      UIScrollView__ResetPosition(v24, 0LL);
    }
  }
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  *(_QWORD *)&basePosition.fields.x = 0LL;
  basePosition.fields.z = 0.0;
  if ( !confirmItemList )
    goto LABEL_51;
  size = confirmItemList->fields._size;
  if ( size >= 1 )
  {
    v61 = size - 1;
    v33 = 0LL;
    v34 = size;
    while ( 1 )
    {
      if ( v33 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      prefabObject = this->fields.prefabObject;
      v36 = (MissionListViewItem_o *)confirmItemList->fields._items->m_Items[v33];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v37 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabObject,
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v37, 0LL, 0LL) )
      {
        if ( !v37 )
          goto LABEL_51;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v37,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
        if ( !v36 )
          goto LABEL_51;
        condMsg = (System_Int32_array **)v36->fields.condMsg;
        v40 = Component_srcLineSprite;
        EventMissionEntity = MissionListViewItem__get_EventMissionEntity(v36, 0LL);
        if ( !EventMissionEntity )
          goto LABEL_51;
        if ( !v40 )
          goto LABEL_51;
        giftId = EventMissionEntity->fields.giftId;
        *(_QWORD *)&v40->fields.mtIsUpdate = condMsg;
        sub_B16F98((BattleServantConfConponent_o *)&v40->fields.mtIsUpdate, condMsg, v42, v43, v44, v45, v46, v47);
        LODWORD(v40->fields.mcMyTrans) = giftId;
        BYTE4(v40->fields.mcMyTrans) = (__int64)v33 < v61;
        MasterMissionReceiveConfirmListViewObject__Init((MasterMissionReceiveConfirmListViewObject_o *)v40, 2, v49);
        MasterMissionReceiveConfirmListViewManager__SetObjectPosition(
          this,
          &basePosition,
          (MasterMissionReceiveConfirmListViewObject_o *)v40,
          v50);
        objectList = this->fields.objectList;
        if ( !objectList )
          goto LABEL_51;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objectList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__);
      }
      if ( (__int64)++v33 >= v34 )
        break;
      size = confirmItemList->fields._size;
    }
  }
  v52 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
  {
    v53 = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !v53 )
      goto LABEL_51;
    v54 = UnityEngine_Component__GetComponent_WebViewObject_(
            v53,
            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v54, 0LL, 0LL) )
    {
      if ( !v54 )
        goto LABEL_51;
      width = UIPanel__get_width((UIPanel_o *)v54, 0LL);
      height = UIPanel__get_height((UIPanel_o *)v54, 0LL);
      v57 = (UnityEngine_Component_o *)this->fields.scrollView;
      this->fields.scrollViewSize.fields.x = width;
      this->fields.scrollViewSize.fields.y = height;
      if ( !v57 )
        goto LABEL_51;
      v58 = UnityEngine_Component__get_transform(v57, 0LL);
      if ( !v58 )
        goto LABEL_51;
      localPosition = UnityEngine_Transform__get_localPosition(v58, 0LL);
      v59 = this->fields.scrollView;
      this->fields.initialScrollPosition = localPosition;
      if ( !v59 )
        goto LABEL_51;
      HIDWORD(v59->fields.onDragStarted) = 1;
    }
    v60 = this->fields.scrollView;
    if ( v60 )
    {
      UIScrollView__ResetPosition(v60, 0LL);
      return;
    }
LABEL_51:
    sub_B170D4();
  }
}


void __fastcall MasterMissionReceiveConfirmListViewManager__DestroyList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *objectList; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *v10; // x0
  UnityEngine_Object_o *scrollView; // x20
  UIScrollView_o *v12; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FB266 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__,
      v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FB266 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
  {
    if ( !v14.fields.current )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v14.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
  v10 = this->fields.objectList;
  if ( !v10 )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v12 = this->fields.scrollView;
    if ( v12 )
    {
      UIScrollView__ResetPosition(v12, 0LL);
      return;
    }
LABEL_20:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__RequestListObject(
        MasterMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FB269 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__,
      *(_QWORD *)&mode);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__,
      v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__get_Count__, v8);
    byte_40FB269 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      objectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
    {
      if ( !v11.fields.current )
        sub_B170D4();
      MasterMissionReceiveConfirmListViewObject__Init(
        (MasterMissionReceiveConfirmListViewObject_o *)v11.fields.current,
        mode,
        v10);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
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
  int32_t Size; // w20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v9; // x23
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  UnityEngine_Transform_o *v12; // x23
  int v13; // s0
  UnityEngine_Transform_o *v17; // x23
  int v18; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x23
  int32_t layer; // w0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  float y; // s8
  MasterMissionReceiveConfirmListViewManager_c *v27; // x0

  if ( (byte_40FB268 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionReceiveConfirmListViewManager_TypeInfo, basePosition);
    byte_40FB268 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  Size = MasterMissionReceiveConfirmListViewObject__GetSize(obj, (const MethodInfo *)basePosition);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL);
  if ( !this->fields.listParent )
    goto LABEL_15;
  v9 = transform;
  v10 = UnityEngine_GameObject__get_transform(this->fields.listParent, 0LL);
  if ( !v9 )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(v9, v10, 0LL);
  v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL);
  if ( !v11 )
    goto LABEL_15;
  UnityEngine_Transform__set_localPosition(v11, *basePosition, 0LL);
  v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL);
  *(UnityEngine_Quaternion_o *)&v13 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !v12
    || (UnityEngine_Transform__set_localRotation(v12, *(UnityEngine_Quaternion_o *)&v13, 0LL),
        v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)obj, 0LL),
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_one(0LL),
        !v17)
    || (UnityEngine_Transform__set_localScale(v17, *(UnityEngine_Vector3_o *)&v18, 0LL),
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)obj, 0LL),
        !this->fields.listParent)
    || (v22 = gameObject, layer = UnityEngine_GameObject__get_layer(this->fields.listParent, 0LL), !v22) )
  {
LABEL_15:
    sub_B170D4();
  }
  UnityEngine_GameObject__set_layer(v22, layer, 0LL);
  MasterMissionReceiveConfirmListViewObject__SetBaseTransform(obj, v24);
  MasterMissionReceiveConfirmListViewObject__SetManager(obj, this, v25);
  y = basePosition->fields.y;
  v27 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  if ( (BYTE3(MasterMissionReceiveConfirmListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MasterMissionReceiveConfirmListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MasterMissionReceiveConfirmListViewManager_TypeInfo);
    v27 = MasterMissionReceiveConfirmListViewManager_TypeInfo;
  }
  basePosition->fields.y = y - (float)(v27->static_fields->LIST_BLANK + Size);
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

  if ( (byte_40FB261 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FB261 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B173C8(v8);
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

  if ( (byte_40FB263 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FB263 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B173C8(v8);
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

  if ( (byte_40FB262 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FB262 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B173C8(v8);
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

  if ( (byte_40FB264 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FB264 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc2, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B173C8(v8);
  MasterMissionReceiveConfirmListViewManager__get_IsInput(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__set_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  UIProgressBar_o *v6; // x19
  float alpha; // s0

  if ( (byte_40FB265 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, value);
    byte_40FB265 = 1;
  }
  this->fields.isInput = value;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
  {
    v6 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v6 )
      sub_B170D4();
    alpha = UIProgressBar__get_alpha(v6, 0LL);
    UIProgressBar__set_alpha(v6, alpha, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc___ctor(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__BeginInvoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__EndInvoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__Invoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}