void __fastcall CombineListViewManager___cctor(const MethodInfo *method)
{
  System_Int32_array **v1; // x19
  CombineListItemInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  CombineListItemInfo_o *v12; // x20
  const MethodInfo *v13; // x5
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CombineListItemInfo_o *v20; // x20
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
  struct CombineListViewManager_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x0
  __int64 v44; // x0
  System_RuntimeFieldHandle_o v45; // 0:w1.4

  if ( (byte_438B23F & 1) == 0 )
  {
    sub_B775C4(&CombineListItemInfo___TypeInfo);
    sub_B775C4(&CombineListItemInfo_TypeInfo);
    sub_B775C4(&CombineListViewManager_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    sub_B775C4(&StringLiteral_8880/*"MENU_OPERATION_FRIEND"*/);
    sub_B775C4(&StringLiteral_19931/*"img_myroom_01"*/);
    sub_B775C4(&StringLiteral_8881/*"MENU_OPERATION_OFFER"*/);
    sub_B775C4(&StringLiteral_8882/*"MENU_OPERATION_OFFERED"*/);
    sub_B775C4(&StringLiteral_19933/*"img_myroom_03"*/);
    sub_B775C4(&StringLiteral_19932/*"img_myroom_02"*/);
    byte_438B23F = 1;
  }
  v1 = (System_Int32_array **)sub_B775DC(CombineListItemInfo___TypeInfo, 3LL);
  v2 = (CombineListItemInfo_o *)sub_B77694(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v2,
    1,
    1,
    (System_String_o *)StringLiteral_19931/*"img_myroom_01"*/,
    (System_String_o *)StringLiteral_8880/*"MENU_OPERATION_FRIEND"*/,
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
  v12 = (CombineListItemInfo_o *)sub_B77694(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v12,
    2,
    1,
    (System_String_o *)StringLiteral_19932/*"img_myroom_02"*/,
    (System_String_o *)StringLiteral_8881/*"MENU_OPERATION_OFFER"*/,
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
  v20 = (CombineListItemInfo_o *)sub_B77694(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v20,
    3,
    1,
    (System_String_o *)StringLiteral_19933/*"img_myroom_03"*/,
    (System_String_o *)StringLiteral_8882/*"MENU_OPERATION_OFFERED"*/,
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
  static_fields = (BattleServantConfConponent_o *)CombineListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, v1, v29, v30, v31, v32, v33, v34);
  v35 = (System_Array_o *)sub_B775DC(int___TypeInfo, 3LL);
  v45.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43528236(v35, v45, 0LL);
  v36 = CombineListViewManager_TypeInfo->static_fields;
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


void __fastcall CombineListViewManager___ctor(CombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager__CreateList(
        CombineListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  ListViewItemSeed_o *seed; // x0
  CombineListViewManager_c *v8; // x0
  struct System_Int32_array *normalKindList; // x25
  __int64 v10; // x21
  unsigned __int64 v11; // x26
  int32_t v12; // w20
  signed __int64 v13; // x27
  int32_t v14; // w21
  __int64 v15; // x8
  int v16; // w9
  unsigned int v17; // w10
  __int64 v18; // x22
  __int64 v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // s0
  int v27; // s1
  int v28; // s2
  bool v29; // vf
  int v30; // w20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  ListViewItem_o *v32; // x9
  CombineListViewItem_c *v33; // x8
  __int64 v34; // x11
  struct System_Collections_Generic_List_ListViewItem__o *v35; // x21
  ListViewItem_o *v36; // x9
  __int64 v37; // x11
  __int64 v38; // x0

  if ( (byte_438B238 & 1) == 0 )
  {
    sub_B775C4(&CombineListViewItem_TypeInfo);
    sub_B775C4(&CombineListViewManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B238 = 1;
  }
  if ( kind )
    goto LABEL_4;
  v8 = CombineListViewManager_TypeInfo;
  if ( (BYTE3(CombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineListViewManager_TypeInfo);
    v8 = CombineListViewManager_TypeInfo;
  }
  normalKindList = v8->static_fields->normalKindList;
  if ( !normalKindList )
  {
LABEL_4:
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  }
  else
  {
    v10 = *(_QWORD *)&normalKindList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, v10, 0LL);
    if ( (int)v10 >= 1 )
    {
      v11 = 0LL;
      v12 = 0;
      v13 = (int)v10;
      do
      {
        if ( v11 >= normalKindList->max_length )
        {
LABEL_50:
          v38 = sub_B776C8(seed);
          sub_B77668(v38, 0LL);
        }
        seed = (ListViewItemSeed_o *)CombineListViewManager_TypeInfo;
        v14 = normalKindList->m_Items[v11 + 1];
        if ( (BYTE3(CombineListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineListViewManager_TypeInfo);
          seed = (ListViewItemSeed_o *)CombineListViewManager_TypeInfo;
        }
        v15 = **(_QWORD **)&seed[2].fields.arrangementPich.fields.y;
        if ( !v15 )
          goto LABEL_49;
        v16 = *(_DWORD *)(v15 + 24);
        if ( v16 >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            if ( v17 >= v16 )
              goto LABEL_50;
            v18 = *(_QWORD *)(v15 + 8LL * (int)v17 + 32);
            if ( !v18 )
              goto LABEL_49;
            if ( *(_DWORD *)(v18 + 16) == v14 )
              break;
            if ( (int)++v17 >= v16 )
              goto LABEL_34;
          }
          v19 = sub_B77694(CombineListViewItem_TypeInfo);
          ListViewItem___ctor((ListViewItem_o *)v19, 0LL);
          *(_DWORD *)(v19 + 20) = v12;
          *(_QWORD *)(v19 + 112) = v18;
          sub_B77560(
            (BattleServantConfConponent_o *)(v19 + 112),
            (System_Int32_array **)v18,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          seed = this->fields.seed;
          if ( !seed )
            goto LABEL_49;
          *(UnityEngine_Vector3_o *)&v26 = ListViewItemSeed__GetLocalPosition(seed, v12, 0LL);
          if ( !v19 )
            goto LABEL_49;
          *(_DWORD *)(v19 + 92) = v26;
          *(_DWORD *)(v19 + 96) = v27;
          *(_DWORD *)(v19 + 100) = v28;
          seed = (ListViewItemSeed_o *)this->fields.itemList;
          if ( !seed )
            goto LABEL_49;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)seed,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
          ++v12;
        }
LABEL_34:
        ++v11;
      }
      while ( (__int64)v11 < v13 );
      v29 = __OFSUB__(v12, 1);
      v30 = v12 - 1;
      if ( v30 < 0 == v29 )
      {
        itemList = this->fields.itemList;
        if ( !itemList )
          goto LABEL_49;
        if ( !itemList->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v32 = itemList->fields._items->m_Items[0];
        if ( !v32 )
          goto LABEL_49;
        v33 = CombineListViewItem_TypeInfo;
        v34 = *(&CombineListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v34 )
          goto LABEL_49;
        if ( (CombineListViewItem_c *)v32->klass->_2.typeHierarchy[v34 - 1] != CombineListViewItem_TypeInfo )
          goto LABEL_49;
        v32->fields.isTermination = 1;
        v35 = this->fields.itemList;
        if ( !v35 )
          goto LABEL_49;
        if ( v35->fields._size <= (unsigned int)v30 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v36 = v35->fields._items->m_Items[v30];
        if ( !v36 )
          goto LABEL_49;
        v37 = *(&v33->_2.bitflags2 + 1);
        if ( *(&v36->klass->_2.bitflags2 + 1) < (unsigned int)v37
          || (CombineListViewItem_c *)v36->klass->_2.typeHierarchy[v37 - 1] != v33 )
        {
          goto LABEL_49;
        }
        v36->fields.isTermination = 1;
      }
    }
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    seed = (ListViewItemSeed_o *)this->fields.scrollView;
    if ( seed )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)seed, 0LL);
      return;
    }
LABEL_49:
    sub_B7769C(seed, v6);
  }
}


void __fastcall CombineListViewManager__DestroyList(CombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


CombineListViewItem_o *__fastcall CombineListViewManager__GetItem(
        CombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_438B239 & 1) == 0 )
  {
    sub_B775C4(&CombineListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438B239 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&CombineListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (CombineListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == CombineListViewItem_TypeInfo )
    return (CombineListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall CombineListViewManager__OnClickListView(
        CombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CombineListViewManager_CallbackFunc_o *callbackFunc; // x20
  CombineListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x10
  struct CombineListItemInfo_o *info; // x8

  if ( (byte_438B23E & 1) == 0 )
  {
    sub_B775C4(&CombineListViewObject_TypeInfo);
    byte_438B23E = 1;
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
      || (v13 = *(&CombineListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v13)
      || (CombineListViewObject_c *)obj->klass->_2.typeHierarchy[v13 - 1] != CombineListViewObject_TypeInfo
      || (Item = CombineListViewObject__GetItem((CombineListViewObject_o *)obj, v12)) == 0LL
      || (info = Item->fields.info) == 0LL )
    {
      sub_B7769C(Item, v12);
    }
    CombineListViewManager_CallbackFunc__Invoke(callbackFunc, info->fields.eventData, 0LL);
  }
}


void __fastcall CombineListViewManager__OnMoveEnd(CombineListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_438B23D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B23D = 1;
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
          sub_B7769C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager__RequestListObject(
        CombineListViewManager_o *this,
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

  if ( (byte_438B23B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CombineListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineListViewObject__get_Count__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438B23B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineListViewManager__get_ObjectList(
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
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      CombineListViewObject__Init(
        (CombineListViewObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager__RequestListObject_25347712(
        CombineListViewManager_o *this,
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

  if ( (byte_438B23C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CombineListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineListViewObject__get_Count__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438B23C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineListViewManager__get_ObjectList(
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
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      CombineListViewObject__Init(
        (CombineListViewObject_o *)current,
        mode,
        v9,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
  }
}


void __fastcall CombineListViewManager__SetMode(
        CombineListViewManager_o *this,
        int32_t mode,
        CombineListViewManager_CallbackFunc_o *callback,
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
  CombineListViewManager__SetMode_25347560(this, mode, v10);
}


void __fastcall CombineListViewManager__SetMode_25347560(
        CombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
    CombineListViewManager__RequestListObject_25347712(this, 4, v5);
}


void __fastcall CombineListViewManager__SetMode_25347656(
        CombineListViewManager_o *this,
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
  CombineListViewManager__SetMode_25347560(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager__SetObjectItem(
        CombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_438B23A & 1) == 0 )
  {
    this = (CombineListViewManager_o *)sub_B775C4(&CombineListViewObject_TypeInfo);
    byte_438B23A = 1;
  }
  if ( !obj
    || (v6 = *(&CombineListViewObject_TypeInfo->_2.bitflags2 + 1), *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (CombineListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CombineListViewObject_TypeInfo )
  {
    sub_B7769C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 1 )
    v12 = 4;
  else
    v12 = 2;
  CombineListViewObject__Init((CombineListViewObject_o *)obj, v12, 0LL, 0.0, *(UnityEngine_Vector3_o *)&v9, v8);
}


void __fastcall CombineListViewManager__add_callbackFunc(
        CombineListViewManager_o *this,
        CombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  CombineListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438B232 & 1) == 0 )
  {
    sub_B775C4(&CombineListViewManager_CallbackFunc_TypeInfo);
    byte_438B232 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineListViewManager_CallbackFunc_c *)v7->klass != CombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CombineListViewManager_o *)sub_B77990(v7);
  CombineListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall CombineListViewManager__add_callbackFunc2(
        CombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438B234 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438B234 = 1;
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
  v10 = (CombineListViewManager_o *)sub_B77990(v7);
  CombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineListViewObject__o *__fastcall CombineListViewManager__get_ClippingObjectList(
        CombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  CombineListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438B237 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_CombineListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B237 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CombineListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
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
      Component_srcLineSprite = (CombineListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             (UnityEngine_GameObject_o *)current,
                                                             (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)CombineListViewObject__GetItem(Component_srcLineSprite, v10);
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
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CombineListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineListViewObject__o *)v3;
}


System_Collections_Generic_List_CombineListViewObject__o *__fastcall CombineListViewManager__get_ObjectList(
        CombineListViewManager_o *this,
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

  if ( (byte_438B236 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_CombineListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438B236 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CombineListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CombineListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineListViewObject__o *)v3;
}


void __fastcall CombineListViewManager__remove_callbackFunc(
        CombineListViewManager_o *this,
        CombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438B233 & 1) == 0 )
  {
    sub_B775C4(&CombineListViewManager_CallbackFunc_TypeInfo);
    byte_438B233 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineListViewManager_CallbackFunc_c *)v7->klass != CombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CombineListViewManager_o *)sub_B77990(v7);
  CombineListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall CombineListViewManager__remove_callbackFunc2(
        CombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_438B235 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438B235 = 1;
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
  v10 = (CombineListViewManager_o *)sub_B77990(v7);
  CombineListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager_CallbackFunc___ctor(
        CombineListViewManager_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall CombineListViewManager_CallbackFunc__BeginInvoke(
        CombineListViewManager_CallbackFunc_o *this,
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


void __fastcall CombineListViewManager_CallbackFunc__EndInvoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall CombineListViewManager_CallbackFunc__Invoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CombineListViewManager_CallbackFunc_o **v7; // x25
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
  CombineListViewManager_CallbackFunc_o *v27; // x8
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
  CombineListViewManager_CallbackFunc_o *v47; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (CombineListViewManager_CallbackFunc_o **)(v3 + 32);
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