void PaymentHistoryListViewManager___ctor(PaymentHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PaymentHistoryListViewManager__CreateList(PaymentHistoryListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  PaymentHistoryMaster_o *Master_object; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  PaymentHistoryEntity_o *current; // x20
  int v11; // w8
  System_String_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  Il2CppObject *CreatedAtToString; // x23
  Il2CppObject *TypeText; // x0
  System_String_o *v19; // x0
  Il2CppObject *name; // x23
  System_String_o *v21; // x22
  Il2CppObject *DispPrice; // x0
  System_String_o *v23; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t idx; // w24
  PaymentHistoryListViewItem_o *v26; // x20
  const MethodInfo *v27; // x4
  __int64 v28; // x0
  __int64 v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  struct ListViewSort_o *sort; // x8
  struct ListViewSort_o *v41; // x8
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_5934535 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_PaymentHistoryMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&PaymentHistoryListViewItem_TypeInfo);
    sub_21FFC50(&StringLiteral_10747/*"PAYMENT_HISTORY_TEMPLATE_UPSIDE"*/);
    sub_21FFC50(&StringLiteral_10745/*"PAYMENT_HISTORY_SP_TEMPLATE"*/);
    sub_21FFC50(&StringLiteral_10746/*"PAYMENT_HISTORY_TEMPLATE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934535 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3, v4);
  Master_object = (PaymentHistoryMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_PaymentHistoryMaster___);
  if ( Master_object )
  {
    Master_object = (PaymentHistoryMaster_o *)PaymentHistoryMaster__GetEntityList(Master_object, 0);
    if ( Master_object )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
      v43 = v42;
      v42.fields._list = 0;
      *(_QWORD *)&v42.fields._index = &v43;
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v43,
               (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__MoveNext__);
        if ( !v7 )
          break;
        current = (PaymentHistoryEntity_o *)v43.fields._current;
        if ( !v43.fields._current )
          sub_21FFECC(v7, v8);
        v11 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
        if ( BYTE4(v43.fields._current[1].monitor) )
        {
          if ( !v11 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
          v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10745/*"PAYMENT_HISTORY_SP_TEMPLATE"*/, 0);
        }
        else
        {
          if ( !v11 )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
          v12 = LocalizationManager__Get((System_String_o *)StringLiteral_10746/*"PAYMENT_HISTORY_TEMPLATE"*/, 0);
        }
        v15 = v12;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_10747/*"PAYMENT_HISTORY_TEMPLATE_UPSIDE"*/, 0);
        CreatedAtToString = (Il2CppObject *)PaymentHistoryEntity__get_CreatedAtToString(current, 0);
        TypeText = (Il2CppObject *)PaymentHistoryEntity__GetTypeText(current, 0);
        v19 = System_String__Format_75484576(v16, CreatedAtToString, TypeText, 0);
        name = (Il2CppObject *)current->fields.name;
        v21 = v19;
        DispPrice = (Il2CppObject *)PaymentHistoryEntity__GetDispPrice(current, 0);
        v23 = System_String__Format_75484576(v15, name, DispPrice, 0);
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        idx = current->fields.idx;
        v26 = (PaymentHistoryListViewItem_o *)sub_21FFEBC(PaymentHistoryListViewItem_TypeInfo);
        PaymentHistoryListViewItem___ctor(v26, idx, v21, v23, v27);
        if ( !itemList
          || (items = itemList->fields._items,
              v37 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_21FFECC(v28, v29);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v26,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v26;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v26, v30, v31, v32, v33, v34, v35);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v43,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__Dispose__);
      sort = this->fields.sort;
      if ( sort )
      {
        sort->fields.isAscendingOrder = 0;
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
        return;
      }
    }
LABEL_30:
    sub_21FFECC(Master_object, v6);
  }
  v41 = this->fields.sort;
  if ( !v41 )
    goto LABEL_30;
  v41->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void PaymentHistoryListViewManager__SetObjectItem(
        PaymentHistoryListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_5934536 & 1) == 0 )
  {
    this = (PaymentHistoryListViewManager_o *)sub_21FFC50(&PaymentHistoryListViewObject_TypeInfo);
    byte_5934536 = 1;
  }
  if ( !obj
    || (naturalAligment = PaymentHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PaymentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PaymentHistoryListViewObject_TypeInfo )
  {
    sub_21FFECC(this, obj);
  }
  PaymentHistoryListViewObject__SetupDisp((PaymentHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float PaymentHistoryListViewManager__get_ListViewHeight(
        PaymentHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  seed = this->fields.seed;
  if ( !seed )
    sub_21FFECC(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}