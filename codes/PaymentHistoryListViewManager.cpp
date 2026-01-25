void PaymentHistoryListViewManager___ctor(PaymentHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PaymentHistoryListViewManager__CreateList(PaymentHistoryListViewManager_o *this, const MethodInfo *method)
{
  PaymentHistoryMaster_o *Master_object; // x0
  __int64 v4; // x1
  _BOOL8 v5; // x0
  __int64 v6; // x1
  PaymentHistoryEntity_o *current; // x20
  uint32_t cctor_finished; // w8
  System_String_o *v9; // x0
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  Il2CppObject *CreatedAtToString; // x23
  Il2CppObject *TypeText; // x2
  System_String_o *v14; // x0
  Il2CppObject *name; // x23
  System_String_o *v16; // x22
  Il2CppObject *DispPrice; // x2
  System_String_o *v18; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t idx; // w24
  PaymentHistoryListViewItem_o *v21; // x20
  const MethodInfo *v22; // x4
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CEA5A9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_PaymentHistoryMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&PaymentHistoryListViewItem_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10379/*"PAYMENT_HISTORY_TEMPLATE_UPSIDE"*/);
    sub_1C7BAE8(&StringLiteral_10377/*"PAYMENT_HISTORY_SP_TEMPLATE"*/);
    sub_1C7BAE8(&StringLiteral_10378/*"PAYMENT_HISTORY_TEMPLATE"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA5A9 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (PaymentHistoryMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_PaymentHistoryMaster___);
  if ( Master_object )
  {
    Master_object = (PaymentHistoryMaster_o *)PaymentHistoryMaster__GetEntityList(Master_object, 0);
    if ( !Master_object )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      (System_Collections_Generic_List_object__o *)Master_object,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
    v37 = v36;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v37,
             (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__MoveNext__);
      if ( !v5 )
        break;
      current = (PaymentHistoryEntity_o *)v37.fields._current;
      if ( !v37.fields._current )
        sub_1C7BD40(v5, v6);
      cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
      if ( BYTE4(v37.fields._current[1].monitor) )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10377/*"PAYMENT_HISTORY_SP_TEMPLATE"*/, 0);
      }
      else
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10378/*"PAYMENT_HISTORY_TEMPLATE"*/, 0);
      }
      v10 = v9;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_10379/*"PAYMENT_HISTORY_TEMPLATE_UPSIDE"*/, 0);
      CreatedAtToString = (Il2CppObject *)PaymentHistoryEntity__get_CreatedAtToString(current, 0);
      TypeText = (Il2CppObject *)PaymentHistoryEntity__GetTypeText(current, 0);
      v14 = System_String__Format_64218220(v11, CreatedAtToString, TypeText, 0);
      name = (Il2CppObject *)current->fields.name;
      v16 = v14;
      DispPrice = (Il2CppObject *)PaymentHistoryEntity__GetDispPrice(current, 0);
      v18 = System_String__Format_64218220(v10, name, DispPrice, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      idx = current->fields.idx;
      v21 = (PaymentHistoryListViewItem_o *)sub_1C7BD34(PaymentHistoryListViewItem_TypeInfo);
      PaymentHistoryListViewItem___ctor(v21, idx, v16, v18, v22);
      if ( !itemList )
        sub_1C7BD40(v23, v24);
      items = itemList->fields._items;
      v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C7BD40(v23, v24);
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v21,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v21;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)v21, v25, v26, v27, v28, v29, v30);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v37,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( !sort )
LABEL_30:
    sub_1C7BD40(Master_object, v4);
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void PaymentHistoryListViewManager__SetObjectItem(
        PaymentHistoryListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4CEA5AA & 1) == 0 )
  {
    this = (PaymentHistoryListViewManager_o *)sub_1C7BAE8(&PaymentHistoryListViewObject_TypeInfo);
    byte_4CEA5AA = 1;
  }
  if ( !obj
    || (naturalAligment = PaymentHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PaymentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PaymentHistoryListViewObject_TypeInfo )
  {
    sub_1C7BD40(this, obj);
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
    sub_1C7BD40(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}