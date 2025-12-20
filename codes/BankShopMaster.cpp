void BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C44C & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
    byte_4D2C44C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    49,
    (const MethodInfo_345919C *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
}


BankShopEntity_array *BankShopMaster__GetBuyableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct BankShopMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4D2C44E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    sub_1C94098(&System_Comparison_BankShopEntity__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BankShopEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BankShopEntity__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_1C94098(&Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__);
    sub_1C94098(&BankShopMaster___c_TypeInfo);
    byte_4D2C44E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( Item )
      {
        v10 = Item;
        list = (void *)BankShopEntity__IsOpen((BankShopEntity_o *)Item, v4);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v3 )
            break;
          items = v3->fields._items;
          v18 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v3->fields._version;
          if ( !items )
            break;
          size = v3->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v10,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C942F0(list, v4);
  }
LABEL_15:
  list = BankShopMaster___c_TypeInfo;
  if ( !BankShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BankShopMaster___c_TypeInfo);
    list = BankShopMaster___c_TypeInfo;
  }
  v21 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BankShopMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)list + 23);
    v21 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_BankShopEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, 0);
    static_fields = BankShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_BankShopEntity__o *)v21;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_59164920(
    v3,
    v21,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_BankShopEntity__Sort__);
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v3,
                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


BankShopEntity_array *BankShopMaster__GetEnableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_ObjectModel_Collection_T__o *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D2C44D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_BankShopEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2C44D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = (int)list;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( list )
      {
        v5 = list;
        if ( Time >= (__int64)list[6].monitor && Time <= (__int64)list[6].fields.items )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v16 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v5;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v5, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C942F0(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v4,
                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


int64_t BankShopMaster__GetSpBankEndedAt(BankShopMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w21
  int64_t klass; // x20
  int32_t v7; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x23

  if ( (byte_4D2C450 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    byte_4D2C450 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    klass = 0;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v7,
               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( Item )
      {
        v9 = Item;
        if ( (BYTE4(Item[9].klass) & 2) != 0
          && BankShopEntity__IsOpen((BankShopEntity_o *)Item, method)
          && klass < (__int64)v9[11].klass )
        {
          klass = (int64_t)v9[11].klass;
        }
      }
      if ( v5 == ++v7 )
        return klass;
    }
LABEL_16:
    sub_1C942F0(list, method);
  }
  return 0;
}


BankShopEntity_o *BankShopMaster__SearchProductId(
        BankShopMaster_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  BankShopEntity_o *v9; // x23

  if ( (byte_4D2C44F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    byte_4D2C44F = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( list )
      {
        if ( !productId )
          break;
        v9 = (BankShopEntity_o *)list;
        if ( System_String__Equals_64453064(productId, *((System_String_o **)list + 4), 0) )
          return v9;
      }
      if ( v7 == ++v8 )
        return 0;
    }
LABEL_13:
    sub_1C942F0(list, productId);
  }
  return 0;
}


void BankShopMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2C451 & 1) == 0 )
  {
    sub_1C94098(&BankShopMaster___c_TypeInfo);
    byte_4D2C451 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BankShopMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BankShopMaster___c_TypeInfo->static_fields->__9 = (struct BankShopMaster___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BankShopMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BankShopMaster___c___ctor(BankShopMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BankShopMaster___c___GetBuyableEntitiyList_b__2_0(
        BankShopMaster___c_o *this,
        BankShopEntity_o *a,
        BankShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C942F0(this, a);
  return b->fields.priority - a->fields.priority;
}