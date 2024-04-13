void __fastcall MasterMissionReceiveConfirmListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E89EC & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionReceiveConfirmListViewManager_TypeInfo, v1, v2, v3);
    byte_42E89EC = 1;
  }
  MasterMissionReceiveConfirmListViewManager_TypeInfo->static_fields->LIST_BLANK = 5;
}


void __fastcall MasterMissionReceiveConfirmListViewManager___ctor(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E89EB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo, v5, v6, v7);
    byte_42E89EB = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.isInput = 1;
  this->fields.initialScrollPosition = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__CreateList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Collections_Generic_List_MasterMissionListViewItem__o *confirmItemList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_Object_o *scrollView; // x21
  __int64 v31; // x1
  UnityEngine_Component_o *transform; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  float v34; // s8
  float v35; // s9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int32_t size; // w8
  unsigned __int64 v44; // x25
  signed __int64 v45; // x26
  struct UnityEngine_GameObject_o *prefabObject; // x21
  MissionListViewItem_o *v47; // x22
  UnityEngine_Object_o *v48; // x21
  System_Int32_array **condMsg; // x23
  UnityEngine_Component_o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  intptr_t monitor_high; // w22
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x3
  UnityEngine_Object_o *v60; // x20
  UnityEngine_Object_o *v61; // x20
  float width; // s8
  float height; // s0
  struct UIScrollView_o *v64; // x8
  __int64 v65; // [xsp+8h] [xbp-78h]
  UnityEngine_Vector3_o basePosition; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E89E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)confirmItemList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MasterMissionListViewItem__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    byte_42E89E8 = 1;
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
                                (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
      v34 = *((float *)&Component_WebViewObject[2].fields.webView + 1);
      v35 = *(float *)&Component_WebViewObject[2].fields.mVisibility;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_51;
      v67.fields.x = -v34;
      v67.fields.y = -v35;
      v67.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v67, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      if ( !transform )
        goto LABEL_51;
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
    }
  }
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject___ctor__);
  this->fields.objectList = (struct System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__o *)v36;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objectList,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  *(_QWORD *)&basePosition.fields.x = 0LL;
  basePosition.fields.z = 0.0;
  if ( !confirmItemList )
    goto LABEL_51;
  size = confirmItemList->fields._size;
  if ( size >= 1 )
  {
    v65 = size - 1;
    v44 = 0LL;
    v45 = size;
    while ( 1 )
    {
      if ( v44 >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      prefabObject = this->fields.prefabObject;
      v47 = (MissionListViewItem_o *)confirmItemList->fields._items->m_Items[v44];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v48 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)prefabObject,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( !v48 )
          goto LABEL_51;
        transform = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)v48,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MasterMissionReceiveConfirmListViewObject___);
        if ( !v47 )
          goto LABEL_51;
        condMsg = (System_Int32_array **)v47->fields.condMsg;
        v50 = transform;
        transform = (UnityEngine_Component_o *)MissionListViewItem__get_EventMissionEntity(v47, 0LL);
        if ( !transform )
          goto LABEL_51;
        if ( !v50 )
          goto LABEL_51;
        monitor_high = HIDWORD(transform[3].monitor);
        v50[1].monitor = condMsg;
        sub_B5D560((BattleServantConfConponent_o *)&v50[1].monitor, condMsg, v51, v52, v53, v54, v55, v56);
        v50[1].fields.m_CachedPtr = monitor_high;
        *((_BYTE *)&v50[1].fields + 4) = (__int64)v44 < v65;
        MasterMissionReceiveConfirmListViewObject__Init((MasterMissionReceiveConfirmListViewObject_o *)v50, 2, v58);
        MasterMissionReceiveConfirmListViewManager__SetObjectPosition(
          this,
          &basePosition,
          (MasterMissionReceiveConfirmListViewObject_o *)v50,
          v59);
        transform = (UnityEngine_Component_o *)this->fields.objectList;
        if ( !transform )
          goto LABEL_51;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Add__);
      }
      if ( (__int64)++v44 >= v45 )
        break;
      size = confirmItemList->fields._size;
    }
  }
  v60 = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( !transform )
      goto LABEL_51;
    v61 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                    transform,
                                    (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    transform = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v61, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v61 )
        goto LABEL_51;
      width = UIPanel__get_width((UIPanel_o *)v61, 0LL);
      height = UIPanel__get_height((UIPanel_o *)v61, 0LL);
      transform = (UnityEngine_Component_o *)this->fields.scrollView;
      this->fields.scrollViewSize.fields.x = width;
      this->fields.scrollViewSize.fields.y = height;
      if ( !transform )
        goto LABEL_51;
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL);
      if ( !transform )
        goto LABEL_51;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
      v64 = this->fields.scrollView;
      this->fields.initialScrollPosition = localPosition;
      if ( !v64 )
        goto LABEL_51;
      HIDWORD(v64->fields.onDragStarted) = 1;
    }
    transform = (UnityEngine_Component_o *)this->fields.scrollView;
    if ( transform )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)transform, 0LL);
      return;
    }
LABEL_51:
    sub_B5D69C(transform, v31);
  }
}


void __fastcall MasterMissionReceiveConfirmListViewManager__DestroyList(
        MasterMissionReceiveConfirmListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *scrollView; // x20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E89E7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E89E7 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
  v25 = v24;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v25,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
  {
    if ( !v25.fields.current )
      sub_B5D69C(0LL, v21);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v25.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    goto LABEL_20;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objectList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__Clear__);
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
    sub_B5D69C(objectList, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionReceiveConfirmListViewManager__RequestListObject(
        MasterMissionReceiveConfirmListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objectList; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E89EA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__,
      mode,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__get_Count__,
      v15,
      v16,
      v17);
    byte_42E89EA = 1;
  }
  memset(&v21, 0, sizeof(v21));
  objectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, *(_QWORD *)&mode);
  if ( objectList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      objectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MasterMissionReceiveConfirmListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__MoveNext__) )
    {
      if ( !v21.fields.current )
        sub_B5D69C(0LL, v19);
      MasterMissionReceiveConfirmListViewObject__Init(
        (MasterMissionReceiveConfirmListViewObject_o *)v21.fields.current,
        mode,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MasterMissionReceiveConfirmListViewObject__Dispose__);
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
  if ( (byte_42E89E9 & 1) == 0 )
  {
    this = (MasterMissionReceiveConfirmListViewManager_o *)sub_B5D5C4(
                                                             &MasterMissionReceiveConfirmListViewManager_TypeInfo,
                                                             (_DWORD)basePosition,
                                                             (_DWORD)obj,
                                                             method);
    byte_42E89E9 = 1;
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
    sub_B5D69C(this, basePosition);
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
  __int64 v3; // x3
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MasterMissionReceiveConfirmListViewManager_o *v12; // x0
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E89E2 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E89E2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (MasterMissionReceiveConfirmListViewManager_CallbackFunc_c *)v9->klass != MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B5D990(v9);
  MasterMissionReceiveConfirmListViewManager__remove_callbackFunc(v12, v13, v14);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__add_callbackFunc2(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MasterMissionReceiveConfirmListViewManager_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E89E4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E89E4 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v7 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc2, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B5D990(v9);
  MasterMissionReceiveConfirmListViewManager__remove_callbackFunc2(v12, v13, v14);
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
  __int64 v3; // x3
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MasterMissionReceiveConfirmListViewManager_o *v12; // x0
  System_Action_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E89E3 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E89E3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (MasterMissionReceiveConfirmListViewManager_CallbackFunc_c *)v9->klass != MasterMissionReceiveConfirmListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B5D990(v9);
  MasterMissionReceiveConfirmListViewManager__add_callbackFunc2(v12, v13, v14);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__remove_callbackFunc2(
        MasterMissionReceiveConfirmListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_o *callbackFunc2; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MasterMissionReceiveConfirmListViewManager_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E89E5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E89E5 = 1;
  }
  callbackFunc2 = this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  v7 = (System_Delegate_o *)callbackFunc2;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_c *)v9->klass != System_Action_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc2, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (MasterMissionReceiveConfirmListViewManager_o *)sub_B5D990(v9);
  MasterMissionReceiveConfirmListViewManager__get_IsInput(v12, v13);
}


void __fastcall MasterMissionReceiveConfirmListViewManager__set_IsInput(
        MasterMissionReceiveConfirmListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *scrollBar; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UIProgressBar_o *v9; // x19
  float alpha; // s0

  if ( (byte_42E89E6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, (_DWORD)method, v3);
    byte_42E89E6 = 1;
  }
  this->fields.isInput = value;
  scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL);
  if ( v7 )
  {
    v9 = (UIProgressBar_o *)this->fields.scrollBar;
    if ( !v9 )
      sub_B5D69C(v7, v8);
    alpha = UIProgressBar__get_alpha(v9, 0LL);
    UIProgressBar__set_alpha(v9, alpha, 0LL);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__BeginInvoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall MasterMissionReceiveConfirmListViewManager_CallbackFunc__EndInvoke(
        MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  MasterMissionReceiveConfirmListViewManager_CallbackFunc_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
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
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}