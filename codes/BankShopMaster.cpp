void __fastcall BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD385 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__, method);
    byte_4BFD385 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    49,
    (const MethodInfo_3278E5C *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetBuyableEntitiyList(
        BankShopMaster_o *this,
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
  System_Collections_Generic_List_object__o *v12; // x19
  const MethodInfo *v13; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v16; // w21
  int32_t v17; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v19; // x23
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Comparison_T__o *v30; // x20
  Il2CppObject *v31; // x21
  struct BankShopMaster___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BFD387 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__, v3);
    sub_1C2E12C(&System_Comparison_BankShopEntity__TypeInfo, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BankShopEntity__Sort__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v8);
    sub_1C2E12C(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v9);
    sub_1C2E12C(&Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, v10);
    sub_1C2E12C(&BankShopMaster___c_TypeInfo, v11);
    byte_4BFD387 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v17,
               (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( Item )
      {
        v19 = Item;
        list = (void *)BankShopEntity__IsOpen((BankShopEntity_o *)Item, v13);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          if ( !v12 )
            break;
          items = v12->fields._items;
          v27 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v12->fields._version;
          if ( !items )
            break;
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              v19,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v19;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v19, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      if ( v16 == ++v17 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C2E388(list, v13);
  }
LABEL_15:
  list = BankShopMaster___c_TypeInfo;
  if ( !BankShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BankShopMaster___c_TypeInfo);
    list = BankShopMaster___c_TypeInfo;
  }
  v30 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v30 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BankShopMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)**((_QWORD **)list + 23);
    v30 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_BankShopEntity__TypeInfo);
    System_Comparison_object____ctor(v30, v31, Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, 0LL);
    static_fields = BankShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_BankShopEntity__o *)v30;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)v30, v33, v34, v35, v36, v37, v38);
  }
  if ( !v12 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_57070448(
    v12,
    v30,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_BankShopEntity__Sort__);
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v12,
                                   (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetEnableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x1
  int64_t list; // x0
  int v13; // w22
  int32_t v14; // w23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_4BFD386 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v6);
    sub_1C2E12C(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v7);
    sub_1C2E12C(&NetworkManager_TypeInfo, v8);
    byte_4BFD386 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = list;
    v14 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v14,
                        (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( Time >= *(_QWORD *)(list + 152) && Time <= *(_QWORD *)(list + 160) )
        {
          if ( !v10 )
            break;
          items = v10->fields._items;
          v22 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v10->fields._version;
          if ( !items )
            break;
          size = v10->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)list,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v11;
            sub_1C2E0D0((PartyOrganizationUtility_o *)(v24 + 4), v11, v15, v16, v17, v18, v19, v20);
          }
        }
      }
      if ( v13 == ++v14 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C2E388(list, v11);
  }
LABEL_18:
  if ( !v10 )
    goto LABEL_20;
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v10,
                                   (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


int64_t __fastcall BankShopMaster__GetSpBankEndedAt(BankShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v6; // w21
  int64_t klass; // x20
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x23

  if ( (byte_4BFD389 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__, method);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__, v3);
    byte_4BFD389 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v6 = Count;
    klass = 0LL;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v8,
               (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( Item )
      {
        v10 = Item;
        if ( (BYTE4(Item[9].klass) & 2) != 0
          && BankShopEntity__IsOpen((BankShopEntity_o *)Item, method)
          && klass < (__int64)v10[11].klass )
        {
          klass = (int64_t)v10[11].klass;
        }
      }
      if ( v6 == ++v8 )
        return klass;
    }
LABEL_16:
    sub_1C2E388(list, method);
  }
  return 0LL;
}


BankShopEntity_o *__fastcall BankShopMaster__SearchProductId(
        BankShopMaster_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  BankShopEntity_o *v10; // x23

  if ( (byte_4BFD388 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__, productId);
    sub_1C2E12C(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__, v5);
    byte_4BFD388 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3215B6C *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v9,
               (const MethodInfo_3215BFC *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( list )
      {
        if ( !productId )
          break;
        v10 = (BankShopEntity_o *)list;
        if ( System_String__Equals_63243900(productId, *((System_String_o **)list + 4), 0LL) )
          return v10;
      }
      if ( v8 == ++v9 )
        return 0LL;
    }
LABEL_13:
    sub_1C2E388(list, productId);
  }
  return 0LL;
}


void __fastcall BankShopMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFD38A & 1) == 0 )
  {
    sub_1C2E12C(&BankShopMaster___c_TypeInfo, v1);
    byte_4BFD38A = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(BankShopMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BankShopMaster___c_TypeInfo->static_fields->__9 = (struct BankShopMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BankShopMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BankShopMaster___c___ctor(BankShopMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BankShopMaster___c___GetBuyableEntitiyList_b__2_0(
        BankShopMaster___c_o *this,
        BankShopEntity_o *a,
        BankShopEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2E388(this, a);
  return b->fields.priority - a->fields.priority;
}