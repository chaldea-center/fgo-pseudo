void __fastcall BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC17D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
    byte_4BDC17D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    49,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetBuyableEntitiyList(
        BankShopMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x20
  Il2CppObject *v22; // x21
  struct BankShopMaster___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BDC17F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    sub_1C21E38(&System_Comparison_BankShopEntity__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BankShopEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BankShopEntity__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_1C21E38(&Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__);
    sub_1C21E38(&BankShopMaster___c_TypeInfo);
    byte_4BDC17F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
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
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
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
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v3,
              v10,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v3->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v10, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_15;
    }
LABEL_23:
    sub_1C22094(list, v4);
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
    v21 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_BankShopEntity__TypeInfo);
    System_Comparison_object____ctor(v21, v22, Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, 0LL);
    static_fields = BankShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_BankShopEntity__o *)v21;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !v3 )
    goto LABEL_23;
  System_Collections_Generic_List_object___Sort_56953720(
    v3,
    v21,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_BankShopEntity__Sort__);
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v3,
                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetEnableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x1
  int64_t list; // x0
  int v7; // w22
  int32_t v8; // w23
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDC17E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BankShopEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDC17E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( (int)list >= 1 )
  {
    v7 = list;
    v8 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v8,
                        (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( list )
      {
        v5 = list;
        if ( Time >= *(_QWORD *)(list + 152) && Time <= *(_QWORD *)(list + 160) )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v16 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v5;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v5, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_18;
    }
LABEL_20:
    sub_1C22094(list, v5);
  }
LABEL_18:
  if ( !v4 )
    goto LABEL_20;
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v4,
                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


int64_t __fastcall BankShopMaster__GetSpBankEndedAt(BankShopMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v5; // w21
  int64_t klass; // x20
  int32_t v7; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x23

  if ( (byte_4BDC181 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    byte_4BDC181 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_16;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v5 = Count;
    klass = 0LL;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v7,
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
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
    sub_1C22094(list, method);
  }
  return 0LL;
}


BankShopEntity_o *__fastcall BankShopMaster__SearchProductId(
        BankShopMaster_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  BankShopEntity_o *v9; // x23

  if ( (byte_4BDC180 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
    byte_4BDC180 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_13;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Count__);
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
               (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_BankShopEntity__get_Item__);
      if ( list )
      {
        if ( !productId )
          break;
        v9 = (BankShopEntity_o *)list;
        if ( System_String__Equals_63123792(productId, *((System_String_o **)list + 4), 0LL) )
          return v9;
      }
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_13:
    sub_1C22094(list, productId);
  }
  return 0LL;
}


void __fastcall BankShopMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDC182 & 1) == 0 )
  {
    sub_1C21E38(&BankShopMaster___c_TypeInfo);
    byte_4BDC182 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BankShopMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BankShopMaster___c_TypeInfo->static_fields->__9 = (struct BankShopMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BankShopMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, a);
  return b->fields.priority - a->fields.priority;
}