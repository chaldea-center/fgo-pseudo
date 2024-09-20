void __fastcall BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5ADBD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
    byte_4A5ADBD = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    45,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
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
  __int64 methodPtr_low; // x10
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Comparison_T__o *v18; // x20
  Il2CppObject *v19; // x21
  struct BankShopMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A5ADBF & 1) == 0 )
  {
    sub_1B885B0(&BankShopEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_BankShopEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BankShopEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BankShopEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_1B885B0(&Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__);
    sub_1B885B0(&BankShopMaster___c_TypeInfo);
    byte_4A5ADBF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = Item;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo )
        {
          list = (void *)BankShopEntity__IsOpen((BankShopEntity_o *)Item, v4);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v3 )
              break;
            items = v3->fields._items;
            v15 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
            ++v3->fields._version;
            if ( !items )
              break;
            size = v3->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v3,
                v10,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            }
            else
            {
              v17 = &items->obj.klass + size;
              v3->fields._size = size + 1;
              v17[4] = (Il2CppClass *)v10;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v10, v12, v13);
            }
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1B8880C(list, v4);
  }
LABEL_17:
  list = BankShopMaster___c_TypeInfo;
  if ( !BankShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BankShopMaster___c_TypeInfo);
    list = BankShopMaster___c_TypeInfo;
  }
  v18 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v18 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = BankShopMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)**((_QWORD **)list + 23);
    v18 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BankShopEntity__TypeInfo);
    System_Comparison_object____ctor(v18, v19, Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, 0LL);
    static_fields = BankShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_BankShopEntity__o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__2_0, (int32_t)v18, v21, v22);
  }
  if ( !v3 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_55571192(
    v3,
    v18,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BankShopEntity__Sort__);
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v3,
                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetEnableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
{
  int64_t Time; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  System_Collections_ObjectModel_Collection_T__o *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int v7; // w22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5ADBE & 1) == 0 )
  {
    sub_1B885B0(&BankShopEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BankShopEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BankShopEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BankShopEntity__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5ADBE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BankShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                             list,
                                                             (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v5 = list;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo
          && Time >= (__int64)list[6].monitor
          && Time <= (__int64)list[6].fields.items )
        {
          if ( !v4 )
            break;
          items = v4->fields._items;
          v13 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v4->fields._version;
          if ( !items )
            break;
          size = v4->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)list,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v5;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v5, v9, v10);
          }
        }
      }
      if ( v7 == ++v8 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(list, v5);
  }
LABEL_20:
  if ( !v4 )
    goto LABEL_22;
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v4,
                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5ADC1 & 1) == 0 )
  {
    sub_1B885B0(&BankShopEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    byte_4A5ADC1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v9 = Item;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo
          && (BYTE4(Item[9].klass) & 2) != 0
          && BankShopEntity__IsOpen((BankShopEntity_o *)Item, method)
          && klass < (__int64)v9[11].klass )
        {
          klass = (int64_t)v9[11].klass;
        }
      }
      if ( v5 == ++v7 )
        return klass;
    }
LABEL_18:
    sub_1B8880C(list, method);
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
  __int64 methodPtr_low; // x10

  if ( (byte_4A5ADC0 & 1) == 0 )
  {
    sub_1B885B0(&BankShopEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    byte_4A5ADC0 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v9 = (BankShopEntity_o *)list;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(BankShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BankShopEntity_TypeInfo )
        {
          if ( !productId )
            break;
          if ( System_String__Equals_61715348(productId, *((System_String_o **)list + 4), 0LL) )
            return v9;
        }
      }
      if ( v7 == ++v8 )
        return 0LL;
    }
LABEL_15:
    sub_1B8880C(list, productId);
  }
  return 0LL;
}


void __fastcall BankShopMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5ADC2 & 1) == 0 )
  {
    sub_1B885B0(&BankShopMaster___c_TypeInfo);
    byte_4A5ADC2 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BankShopMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BankShopMaster___c_TypeInfo->static_fields->__9 = (struct BankShopMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BankShopMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}