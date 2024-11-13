void __fastcall PaymentHistoryListViewManager___ctor(PaymentHistoryListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall PaymentHistoryListViewManager__CreateList(
        PaymentHistoryListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  PaymentHistoryMaster_o *Master_object; // x0
  __int64 v30; // x1
  _BOOL8 v31; // x0
  __int64 v32; // x1
  PaymentHistoryEntity_o *current; // x20
  uint32_t cctor_finished; // w8
  System_String_o *v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x21
  System_String_o *v38; // x22
  Il2CppObject *CreatedAtToString; // x23
  Il2CppObject *TypeText; // x2
  System_String_o *v41; // x0
  Il2CppObject *name; // x23
  System_String_o *v43; // x22
  Il2CppObject *DispPrice; // x2
  System_String_o *v45; // x23
  System_Collections_Generic_List_object__o *itemList; // x21
  int32_t idx; // w24
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  PaymentHistoryListViewItem_o *v51; // x20
  const MethodInfo *v52; // x4
  __int64 v53; // x0
  __int64 v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  struct ListViewSort_o *sort; // x8
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1255F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_PaymentHistoryMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&PaymentHistoryListViewItem_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_10492/*"PAYMENT_HISTORY_TEMPLATE_UPSIDE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_10490/*"PAYMENT_HISTORY_SP_TEMPLATE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_10491/*"PAYMENT_HISTORY_TEMPLATE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v26, v27);
    byte_4B1255F = 1;
  }
  memset(&v67, 0, sizeof(v67));
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
  Master_object = (PaymentHistoryMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_PaymentHistoryMaster___);
  if ( Master_object )
  {
    Master_object = (PaymentHistoryMaster_o *)PaymentHistoryMaster__GetEntityList(Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_30;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v66,
      (System_Collections_Generic_List_object__o *)Master_object,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_PaymentHistoryEntity__GetEnumerator__);
    v67 = v66;
    while ( 1 )
    {
      v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v67,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__MoveNext__);
      if ( !v31 )
        break;
      current = (PaymentHistoryEntity_o *)v67.fields._current;
      if ( !v67.fields._current )
        sub_1BCAA3C(v31, v32);
      cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
      if ( LOBYTE(v67.fields._current[1].monitor) )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_10490/*"PAYMENT_HISTORY_SP_TEMPLATE"*/, 0LL);
      }
      else
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32);
        v35 = LocalizationManager__Get((System_String_o *)StringLiteral_10491/*"PAYMENT_HISTORY_TEMPLATE"*/, 0LL);
      }
      v37 = v35;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_10492/*"PAYMENT_HISTORY_TEMPLATE_UPSIDE"*/, 0LL);
      CreatedAtToString = (Il2CppObject *)PaymentHistoryEntity__get_CreatedAtToString(current, 0LL);
      TypeText = (Il2CppObject *)PaymentHistoryEntity__GetTypeText(current, 0LL);
      v41 = System_String__Format_62415592(v38, CreatedAtToString, TypeText, 0LL);
      name = (Il2CppObject *)current->fields.name;
      v43 = v41;
      DispPrice = (Il2CppObject *)PaymentHistoryEntity__GetDispPrice(current, 0LL);
      v45 = System_String__Format_62415592(v37, name, DispPrice, 0LL);
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      idx = current->fields.idx;
      v51 = (PaymentHistoryListViewItem_o *)sub_1BCAA2C(PaymentHistoryListViewItem_TypeInfo, v48, v49, v50);
      PaymentHistoryListViewItem___ctor(v51, idx, v43, v45, v52);
      if ( !itemList )
        sub_1BCAA3C(v53, v54);
      items = itemList->fields._items;
      v62 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        sub_1BCAA3C(v53, v54);
      size = itemList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v51,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v64 = &items->obj.klass + size;
        itemList->fields._size = size + 1;
        v64[4] = (Il2CppClass *)v51;
        sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v51, v55, v56, v57, v58, v59, v60);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v67,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_PaymentHistoryEntity__Dispose__);
  }
  sort = this->fields.sort;
  if ( !sort )
LABEL_30:
    sub_1BCAA3C(Master_object, v30);
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

  if ( (byte_4B12560 & 1) == 0 )
  {
    this = (PaymentHistoryListViewManager_o *)sub_1BCA7E0(&PaymentHistoryListViewObject_TypeInfo, obj, item);
    byte_4B12560 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(PaymentHistoryListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (PaymentHistoryListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != PaymentHistoryListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
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
    sub_1BCAA3C(ItemSum, v4);
  return seed->fields.arrangementPich.fields.y * (float)(int)ItemSum;
}