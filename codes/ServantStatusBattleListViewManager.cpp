void __fastcall ServantStatusBattleListViewManager___ctor(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager__ChangeSelectIndex(
        ServantStatusBattleListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  int32_t size; // w8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *v14; // x20
  int v15; // w8
  __int64 v16; // x21
  ServantStatusBattleListViewObject_o *v17; // x19
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4185F95 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__, v9);
    byte_4185F95 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_18;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B2C434(0LL, v11);
    ListViewItem__set_IsSelect((ListViewItem_o *)v19.fields.current, HIDWORD(v19.fields.current[1].klass) == index, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                                              this,
                                                                                              v12);
  if ( !itemList )
    goto LABEL_18;
  size = itemList->fields._size;
  v14 = itemList;
  if ( size >= 1 )
  {
    this->fields.callbackCount = size;
    v15 = itemList->fields._size;
    if ( v15 >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( v15 <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v17 = (ServantStatusBattleListViewObject_o *)v14->fields._items->m_Items[v16];
        if ( !v17 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        ServantStatusBattleListViewObject__Init(
          v17,
          4,
          0LL,
          zero.fields.x,
          *(UnityEngine_Vector3_o *)&zero.fields.y,
          v18);
        v15 = v14->fields._size;
        if ( (int)++v16 >= v15 )
          return;
      }
LABEL_18:
      sub_B2C434(itemList, *(_QWORD *)&index);
    }
  }
}


void __fastcall ServantStatusBattleListViewManager__CreateList(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 ConvertOverwriteDispImageLimitCount; // x0
  __int64 v8; // x1
  struct System_Int32_array *dispSelectList; // x28
  __int64 v10; // x9
  il2cpp_array_size_t max_length; // w8
  bool v12; // w10
  bool v13; // cc
  __int64 v14; // x9
  unsigned __int64 v15; // x23
  int v16; // w12
  int v17; // w9
  bool v18; // w8
  int32_t v19; // w24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *itemList; // x25
  ServantStatusBattleListViewManager_o *v21; // x21
  int32_t size; // w26
  bool v23; // w27
  int32_t SvtId; // w19
  bool IsMine; // w22
  ServantStatusBattleListViewItem_o *v26; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v27; // x8
  struct UIScrollView_o *scrollView; // x9
  int v29; // w8
  __int64 v30; // x0
  const MethodInfo *v31; // [xsp+0h] [xbp-90h]
  unsigned __int64 v32; // [xsp+18h] [xbp-78h]
  bool v33; // [xsp+20h] [xbp-70h]
  int v34; // [xsp+24h] [xbp-6Ch]
  ServantStatusListViewItem_o *v35; // [xsp+28h] [xbp-68h]
  bool v36; // [xsp+38h] [xbp-58h]
  int index; // [xsp+3Ch] [xbp-54h]

  if ( (byte_4185F8D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, mainInfo);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B2C35C(&ServantStatusBattleListViewItem_TypeInfo, v6);
    byte_4185F8D = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !mainInfo )
    goto LABEL_34;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          mainInfo,
                                          0LL);
  dispSelectList = mainInfo->fields.dispSelectList;
  v34 = ConvertOverwriteDispImageLimitCount;
  if ( !dispSelectList )
    goto LABEL_34;
  v10 = *(_QWORD *)&dispSelectList->max_length;
  v35 = mainInfo;
  max_length = v10;
  if ( mainInfo->fields.isConvertOverwriteImage )
  {
    v33 = 0;
  }
  else
  {
    if ( mainInfo->fields.userSvtEntity )
      v12 = 1;
    else
      v12 = mainInfo->fields.userSvtCollectionEntity != 0LL;
    v33 = v12;
  }
  v13 = (int)v10 <= 3;
  v14 = 3LL;
  v15 = 0LL;
  v16 = 0;
  if ( !v13 )
    v14 = (unsigned int)*(_QWORD *)&dispSelectList->max_length;
  v32 = v14;
  while ( 1 )
  {
    if ( (__int64)v15 >= (int)max_length )
    {
      v36 = 0;
      v18 = 0;
      v19 = v15;
    }
    else
    {
      if ( v15 >= max_length )
      {
        v30 = sub_B2C460(ConvertOverwriteDispImageLimitCount);
        sub_B2C400(v30, 0LL);
      }
      v17 = dispSelectList->m_Items[v15 + 1];
      v18 = v17 >= 0;
      if ( v17 >= 0 )
        v19 = dispSelectList->m_Items[v15 + 1];
      else
        v19 = v15;
      v36 = v17 >= 0;
    }
    itemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
    v21 = this;
    size = itemList->fields._size;
    if ( v19 == v34 )
      v16 = v15;
    index = v16;
    v23 = v18 && v33;
    SvtId = ServantStatusListViewItem__get_SvtId(v35, 0LL);
    IsMine = ServantStatusListViewItem__get_IsMine(v35, 0LL);
    v26 = (ServantStatusBattleListViewItem_o *)sub_B2C42C(ServantStatusBattleListViewItem_TypeInfo);
    ServantStatusBattleListViewItem___ctor(v26, size, SvtId, v19, v23, v36, v19 == v34, IsMine, v31);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      itemList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
    if ( ++v15 >= v32 )
      break;
    max_length = dispSelectList->max_length;
    v16 = index;
    this = v21;
  }
  v27 = v21->fields.itemList;
  if ( !v27 || (scrollView = v21->fields.scrollView) == 0LL )
LABEL_34:
    sub_B2C434(ConvertOverwriteDispImageLimitCount, v8);
  if ( v27->fields._size > 5 )
    v29 = 1;
  else
    v29 = 4;
  HIDWORD(scrollView->fields.onDragStarted) = v29;
  ListViewManager__SortItem((ListViewManager_o *)v21, -1, 1, -1, 0LL);
  if ( index >= 5 )
    ListViewManager__MoveBottomItem((ListViewManager_o *)v21, index, 0, 0LL);
}


void __fastcall ServantStatusBattleListViewManager__DestroyList(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantStatusBattleListViewItem_o *__fastcall ServantStatusBattleListViewManager__GetItem(
        ServantStatusBattleListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_4185F8E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&ServantStatusBattleListViewItem_TypeInfo, v5);
    byte_4185F8E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&ServantStatusBattleListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (ServantStatusBattleListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == ServantStatusBattleListViewItem_TypeInfo )
    return (ServantStatusBattleListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall ServantStatusBattleListViewManager__OnClickListView(
        ServantStatusBattleListViewManager_o *this,
        ListViewObject_o *selectObj,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusBattleListViewManager__OnClickListViewButton(
        ServantStatusBattleListViewManager_o *this,
        ListViewObject_o *selectObj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  ServantStatusBattleListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 v11; // x11
  ServantStatusBattleListViewManager_CallbackFunc_o *callbackFunc; // x21
  int32_t Index; // w1

  v9 = this;
  if ( (byte_4185F94 & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_B2C35C(&ServantStatusBattleListViewItem_TypeInfo, selectObj);
    byte_4185F94 = 1;
  }
  if ( !selectObj
    || (linkItem = selectObj->fields.linkItem) == 0LL
    || (v11 = *(&ServantStatusBattleListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v11)
    || (ServantStatusBattleListViewItem_c *)linkItem->klass->_2.typeHierarchy[v11 - 1] != ServantStatusBattleListViewItem_TypeInfo )
  {
    sub_B2C434(this, selectObj);
  }
  if ( BYTE1(linkItem[1].fields.sortValue0) && LOBYTE(linkItem[1].fields.sortValue0) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      Index = ListViewObject__get_Index(selectObj, 0LL);
      ServantStatusBattleListViewManager_CallbackFunc__Invoke(callbackFunc, Index, 0LL);
    }
  }
}


void __fastcall ServantStatusBattleListViewManager__OnMoveEnd(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4185F93 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4185F93 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager__RequestListObject(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4185F91 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_ServantStatusBattleListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_4185F91 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusBattleListViewObject__Init(
        (ServantStatusBattleListViewObject_o *)current,
        mode,
        v18,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager__RequestListObject_21724300(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4185F92 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_ServantStatusBattleListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_4185F92 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      ServantStatusBattleListViewObject__Init(
        (ServantStatusBattleListViewObject_o *)current,
        mode,
        v16,
        zero.fields.x,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusBattleListViewManager__SetMode(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        ServantStatusBattleListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusBattleListViewManager__SetMode_21723792(this, mode, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager__SetMode_21723792(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        int32_t select,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_ServantStatusBattleListViewObject__o *ClippingObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  System_Collections_Generic_List_ServantStatusBattleListViewObject__o *v15; // x20
  int v16; // w8
  __int64 v17; // x23
  ServantStatusBattleListViewObject_o *v18; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4185F90 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__, v7);
    sub_B2C35C(&Method_ServantStatusBattleListViewManager_OnMoveEnd__, v8);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v9);
    byte_4185F90 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
  {
    ServantStatusBattleListViewManager__RequestListObject_21724300(this, 3, v11);
    return;
  }
  if ( mode == 2 )
  {
    ClippingObjectList = ServantStatusBattleListViewManager__get_ClippingObjectList(this, v10);
    if ( !ClippingObjectList )
      goto LABEL_16;
    size = ClippingObjectList->fields._size;
    v15 = ClippingObjectList;
    if ( size < 1 )
    {
      this->fields.callbackCount = 1;
      UnityEngine_MonoBehaviour__Invoke(
        (UnityEngine_MonoBehaviour_o *)this,
        (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
        0.2,
        0LL);
    }
    else
    {
      this->fields.callbackCount = size;
      v16 = ClippingObjectList->fields._size;
      if ( v16 >= 1 )
      {
        v17 = 0LL;
        while ( 1 )
        {
          if ( v16 <= (unsigned int)v17 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v18 = v15->fields._items->m_Items[v17];
          v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0LL);
          if ( !v18 )
            break;
          zero = UnityEngine_Vector3__get_zero(0LL);
          ServantStatusBattleListViewObject__Init(
            v18,
            4,
            v19,
            zero.fields.x,
            *(UnityEngine_Vector3_o *)&zero.fields.y,
            v20);
          v16 = v15->fields._size;
          if ( (int)++v17 >= v16 )
            return;
        }
LABEL_16:
        sub_B2C434(ClippingObjectList, v13);
      }
    }
  }
}


void __fastcall ServantStatusBattleListViewManager__SetMode_21724244(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  this->fields.callbackFunc2 = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusBattleListViewManager__SetMode_21723792(this, mode, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager__SetObjectItem(
        ServantStatusBattleListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusBattleListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  float v9; // s0
  int v10; // s1
  int32_t v13; // w1

  v5 = this;
  if ( (byte_4185F8F & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_B2C35C(&ServantStatusBattleListViewObject_TypeInfo, obj);
    byte_4185F8F = 1;
  }
  if ( !obj
    || (v6 = *(&ServantStatusBattleListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (ServantStatusBattleListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != ServantStatusBattleListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 1 )
    v13 = 3;
  else
    v13 = 2;
  ServantStatusBattleListViewObject__Init(
    (ServantStatusBattleListViewObject_o *)obj,
    v13,
    0LL,
    v9,
    *(UnityEngine_Vector3_o *)&v10,
    v8);
}


void __fastcall ServantStatusBattleListViewManager__add_callbackFunc(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusBattleListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusBattleListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusBattleListViewManager_o *v10; // x0
  ServantStatusBattleListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4185F87 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, value);
    byte_4185F87 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantStatusBattleListViewManager_CallbackFunc_c *)v7->klass != ServantStatusBattleListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_B2C728(v7);
  ServantStatusBattleListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall ServantStatusBattleListViewManager__add_callbackFunc2(
        ServantStatusBattleListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusBattleListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4185F89 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4185F89 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_B2C728(v7);
  ServantStatusBattleListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusBattleListViewObject__o *__fastcall ServantStatusBattleListViewManager__get_ClippingObjectList(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  ServantStatusBattleListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4185F8C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4185F8C = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (ServantStatusBattleListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)current,
                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusBattleListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusBattleListViewObject__o *)v11;
}


System_Collections_Generic_List_ServantStatusBattleListViewObject__o *__fastcall ServantStatusBattleListViewManager__get_ObjectList(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4185F8B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_4185F8B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusBattleListViewObject__o *)v11;
}


void __fastcall ServantStatusBattleListViewManager__remove_callbackFunc(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusBattleListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusBattleListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusBattleListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4185F88 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, value);
    byte_4185F88 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantStatusBattleListViewManager_CallbackFunc_c *)v7->klass != ServantStatusBattleListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_B2C728(v7);
  ServantStatusBattleListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall ServantStatusBattleListViewManager__remove_callbackFunc2(
        ServantStatusBattleListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusBattleListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4185F8A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_4185F8A = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_B2C728(v7);
  ServantStatusBattleListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager_CallbackFunc___ctor(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ServantStatusBattleListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_418541A & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    byte_418541A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall ServantStatusBattleListViewManager_CallbackFunc__EndInvoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager_CallbackFunc__Invoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  ServantStatusBattleListViewManager_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  ServantStatusBattleListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  ServantStatusBattleListViewManager_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (ServantStatusBattleListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)result, v22);
    goto LABEL_37;
  }
}