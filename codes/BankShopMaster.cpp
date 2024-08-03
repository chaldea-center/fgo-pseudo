void __fastcall BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC07A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__, method);
    byte_49FC07A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    45,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetBuyableEntitiyList(
        BankShopMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_object__o *v14; // x19
  void *list; // x0
  int32_t Count; // w0
  const MethodInfo *v17; // x1
  __int64 v18; // x2
  int32_t v19; // w21
  int32_t v20; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v22; // x23
  __int64 methodPtr_low; // x10
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x20
  Il2CppObject *v30; // x21
  struct BankShopMaster___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_49FC07C & 1) == 0 )
  {
    sub_1B640C8(&BankShopEntity_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v4);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_BankShopEntity__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BankShopEntity__Sort__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v11);
    sub_1B640C8(&Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, v12);
    sub_1B640C8(&BankShopMaster___c_TypeInfo, v13);
    byte_49FC07C = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BankShopEntity__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v20,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = Item;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo )
        {
          list = (void *)BankShopEntity__IsOpen((BankShopEntity_o *)Item, v17);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v14 )
              break;
            items = v14->fields._items;
            v26 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
            ++v14->fields._version;
            if ( !items )
              break;
            size = v14->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v14,
                v22,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &items->obj.klass + size;
              v14->fields._size = size + 1;
              v28[4] = (Il2CppClass *)v22;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v22, v18, v24);
            }
          }
        }
      }
      if ( v19 == ++v20 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B64324(list);
  }
LABEL_17:
  list = BankShopMaster___c_TypeInfo;
  if ( !BankShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BankShopMaster___c_TypeInfo);
    list = BankShopMaster___c_TypeInfo;
  }
  v29 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BankShopMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)list + 23);
    v29 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BankShopEntity__TypeInfo, v17, v18);
    System_Comparison_object____ctor(v29, v30, Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, 0LL);
    static_fields = BankShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_BankShopEntity__o *)v29;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)v29, v32, v33);
  }
  if ( !v14 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55243320(
    v14,
    v29,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BankShopEntity__Sort__);
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v14,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v15; // w22
  int32_t v16; // w23
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0

  if ( (byte_49FC07B & 1) == 0 )
  {
    sub_1B640C8(&BankShopEntity_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v8);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    byte_49FC07B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BankShopEntity__TypeInfo,
                                                       v11,
                                                       v12);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v15 = (int)list;
    v16 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v16,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v19 = list;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo
          && Time >= (__int64)list[6].monitor
          && Time <= (__int64)list[6].fields.items )
        {
          if ( !v13 )
            break;
          items = v13->fields._items;
          v22 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v13->fields._version;
          if ( !items )
            break;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v13,
              (Il2CppObject *)list,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v13->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v19;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v19, v17, v18);
          }
        }
      }
      if ( v15 == ++v16 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B64324(list);
  }
LABEL_20:
  if ( !v13 )
    goto LABEL_22;
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v13,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
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
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_49FC07E & 1) == 0 )
  {
    sub_1B640C8(&BankShopEntity_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v3);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    byte_49FC07E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v12 = Item;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo
          && (BYTE4(Item[9].klass) & 2) != 0
          && BankShopEntity__IsOpen((BankShopEntity_o *)Item, v11)
          && klass < (__int64)v12[11].klass )
        {
          klass = (int64_t)v12[11].klass;
        }
      }
      if ( v7 == ++v9 )
        return klass;
    }
LABEL_18:
    sub_1B64324(list);
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

  if ( (byte_49FC07D & 1) == 0 )
  {
    sub_1B640C8(&BankShopEntity_TypeInfo, productId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    byte_49FC07D = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v11 = (BankShopEntity_o *)list;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(BankShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BankShopEntity_TypeInfo )
        {
          if ( !productId )
            break;
          if ( System_String__Equals_61383712(productId, *((System_String_o **)list + 4), 0LL) )
            return v11;
        }
      }
      if ( v9 == ++v10 )
        return 0LL;
    }
LABEL_15:
    sub_1B64324(list);
  }
  return 0LL;
}


void __fastcall BankShopMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC07F & 1) == 0 )
  {
    sub_1B640C8(&BankShopMaster___c_TypeInfo, v1);
    byte_49FC07F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BankShopMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BankShopMaster___c_TypeInfo->static_fields->__9 = (struct BankShopMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BankShopMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}