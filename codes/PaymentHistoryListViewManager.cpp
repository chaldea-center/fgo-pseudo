void PaymentHistoryListViewManager___ctor(PaymentHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void PaymentHistoryListViewManager__CreateList(PaymentHistoryListViewManager_o *this, const MethodInfo *method)
{
  PaymentHistoryMaster_o *Master_object; // x0
  _BOOL8 v4; // x0
  PaymentHistoryEntity_o *current; // x20
  uint32_t cctor_finished; // w8
  System_String_o *v7; // x0
  System_String_o *v8; // x21
  System_String_o *v9; // x22
  Il2CppObject *CreatedAtToString; // x23
  Il2CppObject *TypeText; // x2
  System_String_o *v12; // x0
  Il2CppObject *name; // x23
  System_String_o *v14; // x22
  Il2CppObject *DispPrice; // x2
  System_String_o *v16; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t idx; // w24
  PaymentHistoryListViewItem_o *v19; // x20
  const MethodInfo *v20; // x4
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3F043 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_PaymentHistoryMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&PaymentHistoryListViewItem_TypeInfo);
    sub_1C37058(&StringLiteral_10345/*"PAYMENT_HISTORY_TEMPLATE_UPSIDE"*/);
    sub_1C37058(&StringLiteral_10343/*"PAYMENT_HISTORY_SP_TEMPLATE"*/);
    sub_1C37058(&StringLiteral_10344/*"PAYMENT_HISTORY_TEMPLATE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F043 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (PaymentHistoryMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_PaymentHistoryMaster___);
  if ( Master_object )
  {
    Master_object = (PaymentHistoryMaster_o *)PaymentHistoryMaster__GetEntityList(Master_object, 0);
    if ( !Master_object )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)Master_object,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
    v30 = v29;
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v30,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__MoveNext__);
      if ( !v4 )
        break;
      current = (PaymentHistoryEntity_o *)v30.fields._current;
      if ( !v30.fields._current )
        sub_1C372B4(v4);
      cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
      if ( BYTE4(v30.fields._current[1].monitor) )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10343/*"PAYMENT_HISTORY_SP_TEMPLATE"*/, 0);
      }
      else
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v7 = LocalizationManager__Get((System_String_o *)StringLiteral_10344/*"PAYMENT_HISTORY_TEMPLATE"*/, 0);
      }
      v8 = v7;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_10345/*"PAYMENT_HISTORY_TEMPLATE_UPSIDE"*/, 0);
      CreatedAtToString = (Il2CppObject *)PaymentHistoryEntity__get_CreatedAtToString(current, 0);
      TypeText = (Il2CppObject *)PaymentHistoryEntity__GetTypeText(current, 0);
      v12 = System_String__Format_63602948(v9, CreatedAtToString, TypeText, 0);
      name = (Il2CppObject *)current->fields.name;
      v14 = v12;
      DispPrice = (Il2CppObject *)PaymentHistoryEntity__GetDispPrice(current, 0);
      v16 = System_String__Format_63602948(v8, name, DispPrice, 0);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      idx = current->fields.idx;
      v19 = (PaymentHistoryListViewItem_o *)sub_1C372A4(PaymentHistoryListViewItem_TypeInfo);
      PaymentHistoryListViewItem___ctor(v19, idx, v14, v16, v20);
      if ( !itemList )
        sub_1C372B4(v21);
      items = itemList->fields._items;
      v25 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C372B4(v21);
      size = itemList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v19,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v19;
        sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v19, v22, v23);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( !sort )
LABEL_30:
    sub_1C372B4(Master_object);
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

  if ( (byte_4C3F044 & 1) == 0 )
  {
    this = (PaymentHistoryListViewManager_o *)sub_1C37058(&PaymentHistoryListViewObject_TypeInfo);
    byte_4C3F044 = 1;
  }
  if ( !obj
    || (naturalAligment = PaymentHistoryListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (PaymentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != PaymentHistoryListViewObject_TypeInfo )
  {
    sub_1C372B4(this);
  }
  PaymentHistoryListViewObject__SetupDisp((PaymentHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float PaymentHistoryListViewManager__get_ListViewHeight(
        PaymentHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0);
  seed = this->fields.seed;
  if ( !seed )
    sub_1C372B4(ItemSum);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}