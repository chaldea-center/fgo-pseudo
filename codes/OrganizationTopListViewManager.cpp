void __fastcall OrganizationTopListViewManager___cctor(const MethodInfo *method)
{
  System_Int32_array **v1; // x19
  OrganizationTopItemInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  OrganizationTopItemInfo_o *v12; // x20
  const MethodInfo *v13; // x5
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  OrganizationTopItemInfo_o *v20; // x20
  const MethodInfo *v21; // x5
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Array_o *v35; // x19
  struct OrganizationTopListViewManager_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x0
  __int64 v44; // x0
  System_RuntimeFieldHandle_o v45; // 0:w1.4

  if ( (byte_438A2D6 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&OrganizationTopItemInfo___TypeInfo);
    sub_B775C4(&OrganizationTopItemInfo_TypeInfo);
    sub_B775C4(&OrganizationTopListViewManager_TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    sub_B775C4(&StringLiteral_8886/*"MENU_PARTY_ORGANIZATION"*/);
    sub_B775C4(&StringLiteral_10391/*"PARTY_ORGANIZATION"*/);
    sub_B775C4(&StringLiteral_8809/*"MASTER_ORGANIZATION"*/);
    sub_B775C4(&StringLiteral_8879/*"MENU_MASTER_ORGANIZATION"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_11961/*"SERVANT_LIST"*/);
    sub_B775C4(&StringLiteral_8898/*"MENU_SERVANT_LIST"*/);
    byte_438A2D6 = 1;
  }
  v1 = (System_Int32_array **)sub_B775DC(OrganizationTopItemInfo___TypeInfo, 3LL);
  v2 = (OrganizationTopItemInfo_o *)sub_B77694(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v2,
    1,
    (System_String_o *)StringLiteral_8809/*"MASTER_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8879/*"MENU_MASTER_ORGANIZATION"*/,
    v3);
  if ( !v1 )
    sub_B7769C(v4, v5);
  if ( v2 )
  {
    v4 = sub_B77684(v2, *(_QWORD *)&(*v1)->m_Items[9]);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( !*((_DWORD *)v1 + 6) )
    goto LABEL_14;
  v1[4] = (System_Int32_array *)v2;
  sub_B77560((BattleServantConfConponent_o *)(v1 + 4), (System_Int32_array **)v2, v6, v7, v8, v9, v10, v11);
  v12 = (OrganizationTopItemInfo_o *)sub_B77694(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v12,
    2,
    (System_String_o *)StringLiteral_10391/*"PARTY_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8886/*"MENU_PARTY_ORGANIZATION"*/,
    v13);
  if ( v12 )
  {
    v4 = sub_B77684(v12, *(_QWORD *)&(*v1)->m_Items[9]);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( *((_DWORD *)v1 + 6) <= 1u )
    goto LABEL_14;
  v1[5] = (System_Int32_array *)v12;
  sub_B77560((BattleServantConfConponent_o *)(v1 + 5), (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
  v20 = (OrganizationTopItemInfo_o *)sub_B77694(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v20,
    3,
    (System_String_o *)StringLiteral_11961/*"SERVANT_LIST"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8898/*"MENU_SERVANT_LIST"*/,
    v21);
  if ( v20 )
  {
    v4 = sub_B77684(v20, *(_QWORD *)&(*v1)->m_Items[9]);
    if ( !v4 )
    {
LABEL_15:
      v44 = sub_B776BC(v4);
      sub_B77668(v44, 0LL);
    }
  }
  if ( *((_DWORD *)v1 + 6) <= 2u )
  {
LABEL_14:
    v43 = sub_B776C8(v4);
    sub_B77668(v43, 0LL);
  }
  v1[6] = (System_Int32_array *)v20;
  sub_B77560((BattleServantConfConponent_o *)(v1 + 6), (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
  static_fields = (BattleServantConfConponent_o *)OrganizationTopListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, v1, v29, v30, v31, v32, v33, v34);
  v35 = (System_Array_o *)sub_B775DC(int___TypeInfo, 3LL);
  v45.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v35, v45, 0LL);
  v36 = OrganizationTopListViewManager_TypeInfo->static_fields;
  v36->normalKindList = (struct System_Int32_array *)v35;
  sub_B77560(
    (BattleServantConfConponent_o *)&v36->normalKindList,
    (System_Int32_array **)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
}


void __fastcall OrganizationTopListViewManager___ctor(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall OrganizationTopListViewManager__CreateList(
        OrganizationTopListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  OrganizationTopListViewManager_c *v5; // x0
  struct System_Int32_array *normalKindList; // x24
  __int64 v7; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x0
  __int64 v9; // x1
  unsigned __int64 v10; // x25
  signed __int64 v11; // x26
  int32_t v12; // w21
  __int64 v13; // x8
  int v14; // w9
  unsigned int v15; // w10
  __int64 v16; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w22
  __int64 v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x0

  if ( (byte_438A2CE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&OrganizationTopListViewItem_TypeInfo);
    sub_B775C4(&OrganizationTopListViewManager_TypeInfo);
    byte_438A2CE = 1;
  }
  if ( kind )
    goto LABEL_4;
  v5 = OrganizationTopListViewManager_TypeInfo;
  if ( (BYTE3(OrganizationTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo);
    v5 = OrganizationTopListViewManager_TypeInfo;
  }
  normalKindList = v5->static_fields->normalKindList;
  if ( !normalKindList )
  {
LABEL_4:
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  }
  else
  {
    v7 = *(_QWORD *)&normalKindList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, v7, 0LL);
    if ( (int)v7 >= 1 )
    {
      v10 = 0LL;
      v11 = (int)v7;
      while ( 1 )
      {
        if ( v10 >= normalKindList->max_length )
        {
LABEL_29:
          v26 = sub_B776C8(v8);
          sub_B77668(v26, 0LL);
        }
        v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)OrganizationTopListViewManager_TypeInfo;
        v12 = normalKindList->m_Items[v10 + 1];
        if ( (BYTE3(OrganizationTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo);
          v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)OrganizationTopListViewManager_TypeInfo;
        }
        v13 = **(_QWORD **)&v8[4].fields._size;
        if ( !v13 )
          break;
        v14 = *(_DWORD *)(v13 + 24);
        if ( v14 >= 1 )
        {
          v15 = 0;
          while ( 1 )
          {
            if ( v15 >= v14 )
              goto LABEL_29;
            v16 = *(_QWORD *)(v13 + 8LL * (int)v15 + 32);
            if ( !v16 )
              goto LABEL_30;
            if ( *(_DWORD *)(v16 + 16) == v12 )
              break;
            if ( (int)++v15 >= v14 )
              goto LABEL_27;
          }
          itemList = this->fields.itemList;
          if ( !itemList )
            break;
          size = itemList->fields._size;
          v19 = sub_B77694(OrganizationTopListViewItem_TypeInfo);
          ListViewItem___ctor_24167012((ListViewItem_o *)v19, size, 0LL);
          *(_QWORD *)(v19 + 112) = v16;
          sub_B77560(
            (BattleServantConfConponent_o *)(v19 + 112),
            (System_Int32_array **)v16,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
          if ( !v8 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v8,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
LABEL_27:
        if ( (__int64)++v10 >= v11 )
          goto LABEL_5;
      }
LABEL_30:
      sub_B7769C(v8, v9);
    }
  }
LABEL_5:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall OrganizationTopListViewManager__DestroyList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


OrganizationTopListViewItem_o *__fastcall OrganizationTopListViewManager__GetItem(
        OrganizationTopListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438A2CF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&OrganizationTopListViewItem_TypeInfo);
    byte_438A2CF = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&OrganizationTopListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (OrganizationTopListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == OrganizationTopListViewItem_TypeInfo )
    return (OrganizationTopListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall OrganizationTopListViewManager__OnClickListView(
        OrganizationTopListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  OrganizationTopListViewManager_CallbackFunc_o *callbackFunc; // x20
  OrganizationTopListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x10
  struct OrganizationTopItemInfo_o *info; // x8

  if ( (byte_438A2D5 & 1) == 0 )
  {
    sub_B775C4(&OrganizationTopListViewObject_TypeInfo);
    byte_438A2D5 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    0LL,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj
      || (v13 = *(&OrganizationTopListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v13)
      || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[v13 - 1] != OrganizationTopListViewObject_TypeInfo
      || (Item = OrganizationTopListViewObject__GetItem((OrganizationTopListViewObject_o *)obj, v12)) == 0LL
      || (info = Item->fields.info) == 0LL )
    {
      sub_B7769C(Item, v12);
    }
    OrganizationTopListViewManager_CallbackFunc__Invoke(callbackFunc, info->fields.eventData, 0LL);
  }
}


void __fastcall OrganizationTopListViewManager__OnMoveEnd(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  UIScrollView_o *v8; // x0
  UnityEngine_Object_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *callbackFunc2; // x20

  if ( (byte_438A2D4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A2D4 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      if ( this->fields.initMode == 5 )
      {
        scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
        {
          v8 = this->fields.scrollView;
          if ( !v8 )
            goto LABEL_21;
          UIScrollView__Press(v8, 0, 0LL);
        }
      }
      v9 = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
        goto LABEL_19;
      v8 = this->fields.scrollView;
      if ( v8 )
      {
        ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
LABEL_19:
        callbackFunc2 = this->fields.callbackFunc2;
        this->fields.callbackFunc2 = 0LL;
        sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
        if ( callbackFunc2 )
          System_Action__Invoke(callbackFunc2, 0LL);
        return;
      }
LABEL_21:
      sub_B7769C(v8, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__RequestListObject(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438A2D2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_B775C4(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438A2D2 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)OrganizationTopListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      OrganizationTopListViewObject__Init(
        (OrganizationTopListViewObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__RequestListObject_23656104(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438A2D3 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_B775C4(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438A2D3 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)OrganizationTopListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      OrganizationTopListViewObject__Init(
        (OrganizationTopListViewObject_o *)current,
        mode,
        v9,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


void __fastcall OrganizationTopListViewManager__SetMode(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        OrganizationTopListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  OrganizationTopListViewManager__SetMode_23655256(this, mode, v10);
}


void __fastcall OrganizationTopListViewManager__SetMode_23650504(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  OrganizationTopListViewManager__SetMode_23655256(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__SetMode_23655256(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  int v5; // w20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_OrganizationTopListViewObject__o *ClippingObjectList; // x0
  __int64 v9; // x1
  int32_t v10; // w8
  System_Collections_Generic_List_OrganizationTopListViewObject__o *v11; // x20
  int v12; // w8
  __int64 v13; // x23
  OrganizationTopListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3
  int32_t size; // w8
  System_Collections_Generic_List_OrganizationTopListViewObject__o *v18; // x20
  int v19; // w8
  __int64 v20; // x23
  OrganizationTopListViewObject_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3
  int32_t v24; // w8
  System_Collections_Generic_List_OrganizationTopListViewObject__o *v25; // x20
  int v26; // w8
  __int64 v27; // x23
  OrganizationTopListViewObject_o *v28; // x21
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x3
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_438A2D1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__);
    sub_B775C4(&Method_OrganizationTopListViewManager_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438A2D1 = 1;
  }
  this->fields.initMode = mode;
  v5 = mode - 1;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, v5 == 0, 0LL);
  switch ( v5 )
  {
    case 0:
      OrganizationTopListViewManager__RequestListObject_23656104(this, 4, v7);
      return;
    case 1:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v6);
      if ( !ClippingObjectList )
        goto LABEL_33;
      size = ClippingObjectList->fields._size;
      v18 = ClippingObjectList;
      this->fields.callbackCount = size;
      if ( size < 1 )
        goto LABEL_32;
      v19 = ClippingObjectList->fields._size;
      if ( v19 < 1 )
        return;
      v20 = 0LL;
      while ( 1 )
      {
        if ( v19 <= (unsigned int)v20 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v21 = v18->fields._items->m_Items[v20];
        v22 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v22, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
        if ( !v21 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        OrganizationTopListViewObject__Init(v21, 5, v22, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v23);
        v19 = v18->fields._size;
        if ( (int)++v20 >= v19 )
          return;
      }
      goto LABEL_33;
    case 2:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v6);
      if ( !ClippingObjectList )
        goto LABEL_33;
      v10 = ClippingObjectList->fields._size;
      v11 = ClippingObjectList;
      this->fields.callbackCount = v10;
      if ( v10 < 1 )
        goto LABEL_32;
      v12 = ClippingObjectList->fields._size;
      if ( v12 < 1 )
        return;
      v13 = 0LL;
      while ( 1 )
      {
        if ( v12 <= (unsigned int)v13 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v14 = v11->fields._items->m_Items[v13];
        v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v15, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
        if ( !v14 )
          break;
        v31 = UnityEngine_Vector3__get_zero(0LL);
        OrganizationTopListViewObject__Init(v14, 6, v15, 0.1, *(UnityEngine_Vector3_o *)&v31.fields.y, v16);
        v12 = v11->fields._size;
        if ( (int)++v13 >= v12 )
          return;
      }
      goto LABEL_33;
    case 4:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v6);
      if ( !ClippingObjectList )
        goto LABEL_33;
      v24 = ClippingObjectList->fields._size;
      v25 = ClippingObjectList;
      this->fields.callbackCount = v24;
      if ( v24 < 1 )
      {
LABEL_32:
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
          0.0,
          0LL);
      }
      else
      {
        v26 = ClippingObjectList->fields._size;
        if ( v26 >= 1 )
        {
          v27 = 0LL;
          do
          {
            if ( v26 <= (unsigned int)v27 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v28 = v25->fields._items->m_Items[v27];
            v29 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
            System_Action___ctor(v29, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
            if ( !v28 )
LABEL_33:
              sub_B7769C(ClippingObjectList, v9);
            v33 = UnityEngine_Vector3__get_zero(0LL);
            OrganizationTopListViewObject__Init(v28, 8, v29, 0.1, *(UnityEngine_Vector3_o *)&v33.fields.y, v30);
            v26 = v25->fields._size;
            ++v27;
          }
          while ( (int)v27 < v26 );
        }
      }
      return;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__SetObjectItem(
        OrganizationTopListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  OrganizationTopListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_438A2D0 & 1) == 0 )
  {
    this = (OrganizationTopListViewManager_o *)sub_B775C4(&OrganizationTopListViewObject_TypeInfo);
    byte_438A2D0 = 1;
  }
  if ( !obj
    || (v6 = *(&OrganizationTopListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != OrganizationTopListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 1 )
    v12 = 4;
  else
    v12 = 2;
  OrganizationTopListViewObject__Init(
    (OrganizationTopListViewObject_o *)obj,
    v12,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&v9,
    v8);
}


void __fastcall OrganizationTopListViewManager__add_callbackFunc(
        OrganizationTopListViewManager_o *this,
        OrganizationTopListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct OrganizationTopListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  OrganizationTopListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438A2C8 & 1) == 0 )
  {
    sub_B775C4(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    byte_438A2C8 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (OrganizationTopListViewManager_CallbackFunc_c *)v7->klass != OrganizationTopListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_B77990(v7);
  OrganizationTopListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall OrganizationTopListViewManager__add_callbackFunc2(
        OrganizationTopListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438A2CA & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438A2CA = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_B77990(v7);
  OrganizationTopListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *__fastcall OrganizationTopListViewManager__get_ClippingObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  OrganizationTopListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438A2CD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A2CD = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (OrganizationTopListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)current,
                                                                     (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)OrganizationTopListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v3;
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *__fastcall OrganizationTopListViewManager__get_ObjectList(
        OrganizationTopListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438A2CC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A2CC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v3;
}


void __fastcall OrganizationTopListViewManager__remove_callbackFunc(
        OrganizationTopListViewManager_o *this,
        OrganizationTopListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct OrganizationTopListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438A2C9 & 1) == 0 )
  {
    sub_B775C4(&OrganizationTopListViewManager_CallbackFunc_TypeInfo);
    byte_438A2C9 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (OrganizationTopListViewManager_CallbackFunc_c *)v7->klass != OrganizationTopListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_B77990(v7);
  OrganizationTopListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall OrganizationTopListViewManager__remove_callbackFunc2(
        OrganizationTopListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  OrganizationTopListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_438A2CB & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438A2CB = 1;
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
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_B77990(v7);
  OrganizationTopListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager_CallbackFunc___ctor(
        OrganizationTopListViewManager_CallbackFunc_o *this,
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall OrganizationTopListViewManager_CallbackFunc__BeginInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)result;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B77568(this, v6, callback, object);
}


void __fastcall OrganizationTopListViewManager_CallbackFunc__EndInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall OrganizationTopListViewManager_CallbackFunc__Invoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  OrganizationTopListViewManager_CallbackFunc_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  System_String_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(System_String_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_String_o *, _QWORD); // x0
  OrganizationTopListViewManager_CallbackFunc_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_String_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  System_String_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  OrganizationTopListViewManager_CallbackFunc_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (OrganizationTopListViewManager_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_String_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v27->fields.extra_arg, result);
      v31 = sub_B775F4(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B775EC(v28);
            v41 = sub_B779F0(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = result->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_B0F4C0(result, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B77674(v15, v28);
              (*v24)(result, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_B0F4C0(result, class_0, v9);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v14)(result, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(result, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B775EC(v28);
          v34 = sub_B779F0(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_B0F4C0(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B77674(v22, v28);
            (*v26)(v29, result, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_B0F4C0(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v21)(v29, result, *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v29
                                                                           + 16LL * *(unsigned __int16 *)(v28 + 72)
                                                                           + 312))(
                v29,
                result,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v30)(v29, result, v28);
    }
  }
}