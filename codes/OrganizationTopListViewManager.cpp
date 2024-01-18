void __fastcall OrganizationTopListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  OrganizationTopItemInfo_o *v14; // x20
  const MethodInfo *v15; // x5
  __int64 v16; // x0
  __int64 v17; // x1
  OrganizationTopItemInfo_o *v18; // x20
  const MethodInfo *v19; // x5
  OrganizationTopItemInfo_o *v20; // x20
  const MethodInfo *v21; // x5
  struct OrganizationTopListViewManager_StaticFields *static_fields; // x0
  System_Array_o *v23; // x19
  struct OrganizationTopListViewManager_StaticFields *v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  System_RuntimeFieldHandle_o v27; // 0:w1.4

  if ( (byte_41851AA & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, v1);
    sub_B2C35C(&OrganizationTopItemInfo___TypeInfo, v2);
    sub_B2C35C(&OrganizationTopItemInfo_TypeInfo, v3);
    sub_B2C35C(&OrganizationTopListViewManager_TypeInfo, v4);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D,
      v5);
    sub_B2C35C(&StringLiteral_8725/*"MENU_PARTY_ORGANIZATION"*/, v6);
    sub_B2C35C(&StringLiteral_10207/*"PARTY_ORGANIZATION"*/, v7);
    sub_B2C35C(&StringLiteral_8651/*"MASTER_ORGANIZATION"*/, v8);
    sub_B2C35C(&StringLiteral_8718/*"MENU_MASTER_ORGANIZATION"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    sub_B2C35C(&StringLiteral_11737/*"SERVANT_LIST"*/, v11);
    sub_B2C35C(&StringLiteral_8737/*"MENU_SERVANT_LIST"*/, v12);
    byte_41851AA = 1;
  }
  v13 = sub_B2C374(OrganizationTopItemInfo___TypeInfo, 3LL);
  v14 = (OrganizationTopItemInfo_o *)sub_B2C42C(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v14,
    1,
    (System_String_o *)StringLiteral_8651/*"MASTER_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8718/*"MENU_MASTER_ORGANIZATION"*/,
    v15);
  if ( !v13 )
    sub_B2C434(v16, v17);
  if ( v14 )
  {
    v16 = sub_B2C41C(v14, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !v16 )
      goto LABEL_15;
  }
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_14;
  *(_QWORD *)(v13 + 32) = v14;
  sub_B2C2F8(v13 + 32, v14);
  v18 = (OrganizationTopItemInfo_o *)sub_B2C42C(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v18,
    2,
    (System_String_o *)StringLiteral_10207/*"PARTY_ORGANIZATION"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8725/*"MENU_PARTY_ORGANIZATION"*/,
    v19);
  if ( v18 )
  {
    v16 = sub_B2C41C(v18, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !v16 )
      goto LABEL_15;
  }
  if ( *(_DWORD *)(v13 + 24) <= 1u )
    goto LABEL_14;
  *(_QWORD *)(v13 + 40) = v18;
  sub_B2C2F8(v13 + 40, v18);
  v20 = (OrganizationTopItemInfo_o *)sub_B2C42C(OrganizationTopItemInfo_TypeInfo);
  OrganizationTopItemInfo___ctor(
    v20,
    3,
    (System_String_o *)StringLiteral_11737/*"SERVANT_LIST"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_8737/*"MENU_SERVANT_LIST"*/,
    v21);
  if ( v20 )
  {
    v16 = sub_B2C41C(v20, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !v16 )
    {
LABEL_15:
      v26 = sub_B2C454();
      sub_B2C400(v26, 0LL);
    }
  }
  if ( *(_DWORD *)(v13 + 24) <= 2u )
  {
LABEL_14:
    v25 = sub_B2C460(v16);
    sub_B2C400(v25, 0LL);
  }
  *(_QWORD *)(v13 + 48) = v20;
  sub_B2C2F8(v13 + 48, v20);
  static_fields = OrganizationTopListViewManager_TypeInfo->static_fields;
  static_fields->itemInfo = (struct OrganizationTopItemInfo_array *)v13;
  sub_B2C2F8(static_fields, v13);
  v23 = (System_Array_o *)sub_B2C374(int___TypeInfo, 3LL);
  v27.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v23, v27, 0LL);
  v24 = OrganizationTopListViewManager_TypeInfo->static_fields;
  v24->normalKindList = (struct System_Int32_array *)v23;
  sub_B2C2F8(&v24->normalKindList, v23);
}


void __fastcall OrganizationTopListViewManager___ctor(OrganizationTopListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__CreateList(
        OrganizationTopListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  OrganizationTopListViewManager_c *v8; // x0
  struct System_Int32_array *normalKindList; // x24
  __int64 v10; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x0
  __int64 v12; // x1
  unsigned __int64 v13; // x25
  signed __int64 v14; // x26
  int32_t v15; // w21
  __int64 v16; // x8
  int v17; // w9
  unsigned int v18; // w10
  __int64 v19; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int32_t size; // w22
  ListViewItem_o *v22; // x21
  __int64 v23; // x0

  if ( (byte_41851A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&kind);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B2C35C(&OrganizationTopListViewItem_TypeInfo, v6);
    sub_B2C35C(&OrganizationTopListViewManager_TypeInfo, v7);
    byte_41851A2 = 1;
  }
  if ( kind )
    goto LABEL_4;
  v8 = OrganizationTopListViewManager_TypeInfo;
  if ( (BYTE3(OrganizationTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo);
    v8 = OrganizationTopListViewManager_TypeInfo;
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
      v13 = 0LL;
      v14 = (int)v10;
      while ( 1 )
      {
        if ( v13 >= normalKindList->max_length )
        {
LABEL_29:
          v23 = sub_B2C460(v11);
          sub_B2C400(v23, 0LL);
        }
        v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)OrganizationTopListViewManager_TypeInfo;
        v15 = normalKindList->m_Items[v13 + 1];
        if ( (BYTE3(OrganizationTopListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OrganizationTopListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OrganizationTopListViewManager_TypeInfo);
          v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)OrganizationTopListViewManager_TypeInfo;
        }
        v16 = **(_QWORD **)&v11[4].fields._size;
        if ( !v16 )
          break;
        v17 = *(_DWORD *)(v16 + 24);
        if ( v17 >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            if ( v18 >= v17 )
              goto LABEL_29;
            v19 = *(_QWORD *)(v16 + 8LL * (int)v18 + 32);
            if ( !v19 )
              goto LABEL_30;
            if ( *(_DWORD *)(v19 + 16) == v15 )
              break;
            if ( (int)++v18 >= v17 )
              goto LABEL_27;
          }
          itemList = this->fields.itemList;
          if ( !itemList )
            break;
          size = itemList->fields._size;
          v22 = (ListViewItem_o *)sub_B2C42C(OrganizationTopListViewItem_TypeInfo);
          ListViewItem___ctor_24128628(v22, size, 0LL);
          v22[1].klass = (ListViewItem_c *)v19;
          sub_B2C2F8(&v22[1], v19);
          v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.itemList;
          if ( !v11 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v11,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        }
LABEL_27:
        if ( (__int64)++v13 >= v14 )
          goto LABEL_5;
      }
LABEL_30:
      sub_B2C434(v11, v12);
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


// local variable allocation has failed, the output may be wrong!
OrganizationTopListViewItem_o *__fastcall OrganizationTopListViewManager__GetItem(
        OrganizationTopListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_41851A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_B2C35C(&OrganizationTopListViewItem_TypeInfo, v5);
    byte_41851A3 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&OrganizationTopListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (OrganizationTopListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == OrganizationTopListViewItem_TypeInfo )
    return (OrganizationTopListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall OrganizationTopListViewManager__OnClickListView(
        OrganizationTopListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  OrganizationTopListViewManager_CallbackFunc_o *callbackFunc; // x20
  OrganizationTopListViewItem_o *Item; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x10
  struct OrganizationTopItemInfo_o *info; // x8

  if ( (byte_41851A9 & 1) == 0 )
  {
    sub_B2C35C(&OrganizationTopListViewObject_TypeInfo, obj);
    byte_41851A9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_B2C2F8(&this->fields.callbackFunc, 0LL);
  if ( callbackFunc )
  {
    if ( !obj
      || (v8 = *(&OrganizationTopListViewObject_TypeInfo->_2.bitflags2 + 1),
          *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v8)
      || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] != OrganizationTopListViewObject_TypeInfo
      || (Item = OrganizationTopListViewObject__GetItem((OrganizationTopListViewObject_o *)obj, v7)) == 0LL
      || (info = Item->fields.info) == 0LL )
    {
      sub_B2C434(Item, v7);
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
  System_Action_o *callbackFunc2; // x20

  if ( (byte_41851A8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41851A8 = 1;
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
        sub_B2C2F8(&this->fields.callbackFunc2, 0LL);
        if ( callbackFunc2 )
          System_Action__Invoke(callbackFunc2, 0LL);
        return;
      }
LABEL_21:
      sub_B2C434(v8, v7);
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

  if ( (byte_41851A6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__, v11);
    sub_B2C35C(&Method_OrganizationTopListViewManager_OnMoveEnd__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_41851A6 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)OrganizationTopListViewManager__get_ObjectList(
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
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      OrganizationTopListViewObject__Init(
        (OrganizationTopListViewObject_o *)current,
        mode,
        v18,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__RequestListObject_20155504(
        OrganizationTopListViewManager_o *this,
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

  if ( (byte_41851A7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__, v9);
    sub_B2C35C(&Method_OrganizationTopListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_41851A7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)OrganizationTopListViewManager__get_ObjectList(
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
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      OrganizationTopListViewObject__Init(
        (OrganizationTopListViewObject_o *)current,
        mode,
        v16,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_OrganizationTopListViewObject__Dispose__);
  }
}


void __fastcall OrganizationTopListViewManager__SetMode(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        OrganizationTopListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_B2C2F8(&this->fields.callbackFunc, callback);
  OrganizationTopListViewManager__SetMode_20154656(this, mode, v6);
}


void __fastcall OrganizationTopListViewManager__SetMode_20149904(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_B2C2F8(&this->fields.callbackFunc2, callback);
  OrganizationTopListViewManager__SetMode_20154656(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager__SetMode_20154656(
        OrganizationTopListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int v9; // w20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_OrganizationTopListViewObject__o *ClippingObjectList; // x0
  __int64 v13; // x1
  int32_t v14; // w8
  System_Collections_Generic_List_OrganizationTopListViewObject__o *v15; // x20
  int v16; // w8
  __int64 v17; // x23
  OrganizationTopListViewObject_o *v18; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  int32_t size; // w8
  System_Collections_Generic_List_OrganizationTopListViewObject__o *v22; // x20
  int v23; // w8
  __int64 v24; // x23
  OrganizationTopListViewObject_o *v25; // x21
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x3
  int32_t v28; // w8
  System_Collections_Generic_List_OrganizationTopListViewObject__o *v29; // x20
  int v30; // w8
  __int64 v31; // x23
  OrganizationTopListViewObject_o *v32; // x21
  System_Action_o *v33; // x22
  const MethodInfo *v34; // x3
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41851A5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__get_Item__, v6);
    sub_B2C35C(&Method_OrganizationTopListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v8);
    byte_41851A5 = 1;
  }
  this->fields.initMode = mode;
  v9 = mode - 1;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, v9 == 0, 0LL);
  switch ( v9 )
  {
    case 0:
      OrganizationTopListViewManager__RequestListObject_20155504(this, 4, v11);
      return;
    case 1:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v10);
      if ( !ClippingObjectList )
        goto LABEL_33;
      size = ClippingObjectList->fields._size;
      v22 = ClippingObjectList;
      this->fields.callbackCount = size;
      if ( size < 1 )
        goto LABEL_32;
      v23 = ClippingObjectList->fields._size;
      if ( v23 < 1 )
        return;
      v24 = 0LL;
      while ( 1 )
      {
        if ( v23 <= (unsigned int)v24 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v25 = v22->fields._items->m_Items[v24];
        v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v26, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
        if ( !v25 )
          break;
        zero = UnityEngine_Vector3__get_zero(0LL);
        OrganizationTopListViewObject__Init(v25, 5, v26, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v27);
        v23 = v22->fields._size;
        if ( (int)++v24 >= v23 )
          return;
      }
      goto LABEL_33;
    case 2:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v10);
      if ( !ClippingObjectList )
        goto LABEL_33;
      v14 = ClippingObjectList->fields._size;
      v15 = ClippingObjectList;
      this->fields.callbackCount = v14;
      if ( v14 < 1 )
        goto LABEL_32;
      v16 = ClippingObjectList->fields._size;
      if ( v16 < 1 )
        return;
      v17 = 0LL;
      while ( 1 )
      {
        if ( v16 <= (unsigned int)v17 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v18 = v15->fields._items->m_Items[v17];
        v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
        if ( !v18 )
          break;
        v35 = UnityEngine_Vector3__get_zero(0LL);
        OrganizationTopListViewObject__Init(v18, 6, v19, 0.1, *(UnityEngine_Vector3_o *)&v35.fields.y, v20);
        v16 = v15->fields._size;
        if ( (int)++v17 >= v16 )
          return;
      }
      goto LABEL_33;
    case 4:
      ClippingObjectList = OrganizationTopListViewManager__get_ClippingObjectList(this, v10);
      if ( !ClippingObjectList )
        goto LABEL_33;
      v28 = ClippingObjectList->fields._size;
      v29 = ClippingObjectList;
      this->fields.callbackCount = v28;
      if ( v28 < 1 )
      {
LABEL_32:
        this->fields.callbackCount = 1;
        UnityEngine_MonoBehaviour__Invoke(
          (UnityEngine_MonoBehaviour_o *)this,
          (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
          0.0,
          0LL);
      }
      else
      {
        v30 = ClippingObjectList->fields._size;
        if ( v30 >= 1 )
        {
          v31 = 0LL;
          do
          {
            if ( v30 <= (unsigned int)v31 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v32 = v29->fields._items->m_Items[v31];
            v33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v33, (Il2CppObject *)this, Method_OrganizationTopListViewManager_OnMoveEnd__, 0LL);
            if ( !v32 )
LABEL_33:
              sub_B2C434(ClippingObjectList, v13);
            v37 = UnityEngine_Vector3__get_zero(0LL);
            OrganizationTopListViewObject__Init(v32, 8, v33, 0.1, *(UnityEngine_Vector3_o *)&v37.fields.y, v34);
            v30 = v29->fields._size;
            ++v31;
          }
          while ( (int)v31 < v30 );
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
  if ( (byte_41851A4 & 1) == 0 )
  {
    this = (OrganizationTopListViewManager_o *)sub_B2C35C(&OrganizationTopListViewObject_TypeInfo, obj);
    byte_41851A4 = 1;
  }
  if ( !obj
    || (v6 = *(&OrganizationTopListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (OrganizationTopListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != OrganizationTopListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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

  if ( (byte_418519C & 1) == 0 )
  {
    sub_B2C35C(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, value);
    byte_418519C = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_418519E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418519E = 1;
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
  v10 = (OrganizationTopListViewManager_o *)sub_B2C728(v7);
  OrganizationTopListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *__fastcall OrganizationTopListViewManager__get_ClippingObjectList(
        OrganizationTopListViewManager_o *this,
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
  OrganizationTopListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_41851A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41851A1 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
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
      Component_srcLineSprite = (OrganizationTopListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                     (UnityEngine_GameObject_o *)current,
                                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)OrganizationTopListViewObject__GetItem(Component_srcLineSprite, v18);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v11;
}


System_Collections_Generic_List_OrganizationTopListViewObject__o *__fastcall OrganizationTopListViewManager__get_ObjectList(
        OrganizationTopListViewManager_o *this,
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

  if ( (byte_41851A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41851A0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_OrganizationTopListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_OrganizationTopListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_OrganizationTopListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_OrganizationTopListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_OrganizationTopListViewObject__o *)v11;
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

  if ( (byte_418519D & 1) == 0 )
  {
    sub_B2C35C(&OrganizationTopListViewManager_CallbackFunc_TypeInfo, value);
    byte_418519D = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (OrganizationTopListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_418519F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418519F = 1;
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
  v10 = (OrganizationTopListViewManager_o *)sub_B2C728(v7);
  OrganizationTopListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OrganizationTopListViewManager_CallbackFunc___ctor(
        OrganizationTopListViewManager_CallbackFunc_o *this,
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall OrganizationTopListViewManager_CallbackFunc__EndInvoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall OrganizationTopListViewManager_CallbackFunc__Invoke(
        OrganizationTopListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  OrganizationTopListViewManager_CallbackFunc_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  System_String_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_String_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_String_o *, _QWORD); // x0
  OrganizationTopListViewManager_CallbackFunc_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_String_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_String_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  OrganizationTopListViewManager_CallbackFunc_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (OrganizationTopListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_String_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, result, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = result->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(result, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_String_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(result, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = result->klass;
                if ( *(_WORD *)&result->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&result->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(result, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_String_o *, _QWORD))v16)(result, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_String_o *, _QWORD))&result->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  result,
                  *((_QWORD *)&result->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(result, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_String_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, result, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))v24)(v32, result, *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_String_o *, _QWORD))(*v32
                                                                           + 16LL * *(unsigned __int16 *)(v31 + 72)
                                                                           + 312))(
                v32,
                result,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_String_o *, __int64))v33)(v32, result, v31);
    }
  }
}