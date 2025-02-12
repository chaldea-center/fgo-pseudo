void __fastcall PaymentHistoryListViewManager___ctor(PaymentHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PaymentHistoryListViewManager__CreateList(
        PaymentHistoryListViewManager_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  PaymentHistoryMaster_o *Master_object; // x0
  __int64 v16; // x1
  _BOOL8 v17; // x0
  __int64 v18; // x1
  PaymentHistoryEntity_o *current; // x20
  uint32_t cctor_finished; // w8
  System_String_o *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  Il2CppObject *CreatedAtToString; // x23
  Il2CppObject *TypeText; // x2
  System_String_o *v26; // x0
  Il2CppObject *name; // x23
  System_String_o *v28; // x22
  Il2CppObject *DispPrice; // x2
  System_String_o *v30; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t idx; // w24
  PaymentHistoryListViewItem_o *v33; // x20
  const MethodInfo *v34; // x4
  __int64 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BC3D8C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_PaymentHistoryMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__Dispose__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__MoveNext__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__get_Current__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__, v8);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v9);
    sub_1C1ABD4(&PaymentHistoryListViewItem_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_10553/*"PAYMENT_HISTORY_TEMPLATE_UPSIDE"*/, v11);
    sub_1C1ABD4(&StringLiteral_10551/*"PAYMENT_HISTORY_SP_TEMPLATE"*/, v12);
    sub_1C1ABD4(&StringLiteral_10552/*"PAYMENT_HISTORY_TEMPLATE"*/, v13);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v14);
    byte_4BC3D8C = 1;
  }
  memset(&v49, 0, sizeof(v49));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (PaymentHistoryMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_PaymentHistoryMaster___);
  if ( Master_object )
  {
    Master_object = (PaymentHistoryMaster_o *)PaymentHistoryMaster__GetEntityList(Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      (System_Collections_Generic_List_object__o *)Master_object,
      (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
    v49 = v48;
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__MoveNext__);
      if ( !v17 )
        break;
      current = (PaymentHistoryEntity_o *)v49.fields._current;
      if ( !v49.fields._current )
        sub_1C1AE30(v17, v18);
      cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
      if ( LOBYTE(v49.fields._current[1].monitor) )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10551/*"PAYMENT_HISTORY_SP_TEMPLATE"*/, 0LL);
      }
      else
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10552/*"PAYMENT_HISTORY_TEMPLATE"*/, 0LL);
      }
      v22 = v21;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_10553/*"PAYMENT_HISTORY_TEMPLATE_UPSIDE"*/, 0LL);
      CreatedAtToString = (Il2CppObject *)PaymentHistoryEntity__get_CreatedAtToString(current, 0LL);
      TypeText = (Il2CppObject *)PaymentHistoryEntity__GetTypeText(current, 0LL);
      v26 = System_String__Format_63054740(v23, CreatedAtToString, TypeText, 0LL);
      name = (Il2CppObject *)current->fields.name;
      v28 = v26;
      DispPrice = (Il2CppObject *)PaymentHistoryEntity__GetDispPrice(current, 0LL);
      v30 = System_String__Format_63054740(v22, name, DispPrice, 0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      idx = current->fields.idx;
      v33 = (PaymentHistoryListViewItem_o *)sub_1C1AE20(PaymentHistoryListViewItem_TypeInfo);
      PaymentHistoryListViewItem___ctor(v33, idx, v28, v30, v34);
      if ( !itemList )
        sub_1C1AE30(v35, v36);
      items = itemList->fields._items;
      v44 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1C1AE30(v35, v36);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v33,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v33;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v46 + 4), (int64_t)v33, v37, v38, v39, v40, v41, v42);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( !sort )
LABEL_30:
    sub_1C1AE30(Master_object, v16);
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall PaymentHistoryListViewManager__SetObjectItem(
        PaymentHistoryListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4BC3D8D & 1) == 0 )
  {
    this = (PaymentHistoryListViewManager_o *)sub_1C1ABD4(&PaymentHistoryListViewObject_TypeInfo, obj);
    byte_4BC3D8D = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PaymentHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PaymentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PaymentHistoryListViewObject_TypeInfo )
  {
    sub_1C1AE30(this, obj);
  }
  PaymentHistoryListViewObject__SetupDisp((PaymentHistoryListViewObject_o *)obj, (const MethodInfo *)obj);
}


float __fastcall PaymentHistoryListViewManager__get_ListViewHeight(
        PaymentHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ItemSum; // x0
  __int64 v4; // x1
  struct ListViewItemSeed_o *seed; // x8

  ItemSum = ListViewManager__get_ItemSum((ListViewManager_o *)this, 0LL);
  seed = this->fields.seed;
  if ( !seed )
    sub_1C1AE30(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}