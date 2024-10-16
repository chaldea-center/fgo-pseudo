void __fastcall BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB59AB & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__, method);
    byte_4AB59AB = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    45,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
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
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x19
  const MethodInfo *v14; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v17; // w21
  int32_t v18; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x23
  __int64 methodPtr_low; // x10
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Comparison_T__o *v28; // x20
  Il2CppObject *v29; // x21
  struct BankShopMaster___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3

  if ( (byte_4AB59AD & 1) == 0 )
  {
    sub_1BAB41C(&BankShopEntity_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1BAB41C(&System_Comparison_BankShopEntity__TypeInfo, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BankShopEntity__Sort__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v9);
    sub_1BAB41C(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v10);
    sub_1BAB41C(&Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, v11);
    sub_1BAB41C(&BankShopMaster___c_TypeInfo, v12);
    byte_4AB59AD = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v18,
               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v20 = Item;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo )
        {
          list = (void *)BankShopEntity__IsOpen((BankShopEntity_o *)Item, v14);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v13 )
              break;
            items = v13->fields._items;
            v25 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
            ++v13->fields._version;
            if ( !items )
              break;
            size = v13->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v13,
                v20,
                *(const MethodInfo_354D8BC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v27 = &items->obj.klass + size;
              v13->fields._size = size + 1;
              v27[4] = (Il2CppClass *)v20;
              sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v20, v22, v23);
            }
          }
        }
      }
      if ( v17 == ++v18 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BAB678(list, v14);
  }
LABEL_17:
  list = BankShopMaster___c_TypeInfo;
  if ( !BankShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BankShopMaster___c_TypeInfo);
    list = BankShopMaster___c_TypeInfo;
  }
  v28 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BankShopMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)list + 23);
    v28 = (System_Comparison_T__o *)sub_1BAB668(System_Comparison_BankShopEntity__TypeInfo);
    System_Comparison_object____ctor(v28, v29, Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, 0LL);
    static_fields = BankShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_BankShopEntity__o *)v28;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)v28, v31, v32);
  }
  if ( !v13 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55899008(
    v13,
    v28,
    (const MethodInfo_354F380 *)Method_System_Collections_Generic_List_BankShopEntity__Sort__);
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v13,
                                   (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetEnableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v11; // x20
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v14; // w22
  int32_t v15; // w23
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4AB59AC & 1) == 0 )
  {
    sub_1BAB41C(&BankShopEntity_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v7);
    sub_1BAB41C(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v8);
    sub_1BAB41C(&NetworkManager_TypeInfo, v9);
    byte_4AB59AC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v12 = list;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo
          && Time >= (__int64)list[6].monitor
          && Time <= (__int64)list[6].fields.items )
        {
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)list,
              *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v22[4] = (Il2CppClass *)v12;
            sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
          }
        }
      }
      if ( v14 == ++v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BAB678(list, v12);
  }
LABEL_20:
  if ( !v11 )
    goto LABEL_22;
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v11,
                                   (const MethodInfo_354F414 *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


int64_t __fastcall BankShopMaster__GetSpBankEndedAt(BankShopMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int64_t klass; // x20
  int32_t v9; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4AB59AF & 1) == 0 )
  {
    sub_1BAB41C(&BankShopEntity_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    byte_4AB59AF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    klass = 0LL;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v11 = Item;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo
          && (BYTE4(Item[9].klass) & 2) != 0
          && BankShopEntity__IsOpen((BankShopEntity_o *)Item, method)
          && klass < (__int64)v11[11].klass )
        {
          klass = (int64_t)v11[11].klass;
        }
      }
      if ( v7 == ++v9 )
        return klass;
    }
LABEL_18:
    sub_1BAB678(list, method);
  }
  return 0LL;
}


BankShopEntity_o *__fastcall BankShopMaster__SearchProductId(
        BankShopMaster_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  BankShopEntity_o *v11; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4AB59AE & 1) == 0 )
  {
    sub_1BAB41C(&BankShopEntity_TypeInfo, productId);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    byte_4AB59AE = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v9 = Count;
    v10 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v10,
               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = (BankShopEntity_o *)list;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(BankShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BankShopEntity_TypeInfo )
        {
          if ( !productId )
            break;
          if ( System_String__Equals_62056444(productId, *((System_String_o **)list + 4), 0LL) )
            return v11;
        }
      }
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_15:
    sub_1BAB678(list, productId);
  }
  return 0LL;
}


void __fastcall BankShopMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB59B0 & 1) == 0 )
  {
    sub_1BAB41C(&BankShopMaster___c_TypeInfo, v1);
    byte_4AB59B0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(BankShopMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BankShopMaster___c_TypeInfo->static_fields->__9 = (struct BankShopMaster___c_o *)v2;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)BankShopMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BAB678(this, a);
  return b->fields.priority - a->fields.priority;
}