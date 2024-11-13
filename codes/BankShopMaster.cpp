void __fastcall BankShopMaster___ctor(BankShopMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E47 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__, method, v2);
    byte_4B15E47 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    45,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_BankShopMaster__BankShopEntity__int___ctor__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetBuyableEntitiyList(
        BankShopMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x19
  const MethodInfo *v26; // x1
  void *list; // x0
  int32_t Count; // w0
  int64_t v29; // x2
  __int64 v30; // x3
  int32_t v31; // w21
  int32_t v32; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v34; // x23
  __int64 methodPtr_low; // x10
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  System_Comparison_T__o *v44; // x20
  Il2CppObject *v45; // x21
  struct BankShopMaster___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7

  if ( (byte_4B15E49 & 1) == 0 )
  {
    sub_1BCA7E0(&BankShopEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&System_Comparison_BankShopEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BankShopEntity__Sort__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, v21, v22);
    sub_1BCA7E0(&BankShopMaster___c_TypeInfo, v23, v24);
    byte_4B15E49 = 1;
  }
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BankShopEntity__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_25;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v31 = Count;
    v32 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v32,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v34 = Item;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo )
        {
          list = (void *)BankShopEntity__IsOpen((BankShopEntity_o *)Item, v26);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            if ( !v25 )
              break;
            items = v25->fields._items;
            v41 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
            ++v25->fields._version;
            if ( !items )
              break;
            size = v25->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                v34,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &items->obj.klass + size;
              v25->fields._size = size + 1;
              v43[4] = (Il2CppClass *)v34;
              sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v34, v29, v30, v36, v37, v38, v39);
            }
          }
        }
      }
      if ( v31 == ++v32 )
        goto LABEL_17;
    }
LABEL_25:
    sub_1BCAA3C(list, v26);
  }
LABEL_17:
  list = BankShopMaster___c_TypeInfo;
  if ( !BankShopMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BankShopMaster___c_TypeInfo, v26);
    list = BankShopMaster___c_TypeInfo;
  }
  v44 = *(System_Comparison_T__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v44 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, v26);
      list = BankShopMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)**((_QWORD **)list + 23);
    v44 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_BankShopEntity__TypeInfo, v26, v29, v30);
    System_Comparison_object____ctor(v44, v45, Method_BankShopMaster___c__GetBuyableEntitiyList_b__2_0__, 0LL);
    static_fields = BankShopMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Comparison_BankShopEntity__o *)v44;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__2_0, (int64_t)v44, v47, v48, v49, v50, v51, v52);
  }
  if ( !v25 )
    goto LABEL_25;
  System_Collections_Generic_List_object___Sort_56244000(
    v25,
    v44,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BankShopEntity__Sort__);
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v25,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


BankShopEntity_array *__fastcall BankShopMaster__GetEnableEntitiyList(BankShopMaster_o *this, const MethodInfo *method)
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
  int64_t Time; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x1
  int64_t list; // x0
  int v25; // w22
  int32_t v26; // w23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0

  if ( (byte_4B15E48 & 1) == 0 )
  {
    sub_1BCA7E0(&BankShopEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BankShopEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BankShopEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BankShopEntity___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_BankShopEntity__TypeInfo, v14, v15);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v16, v17);
    byte_4B15E48 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BankShopEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BankShopEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = System_Collections_ObjectModel_Collection_object___get_Count(
           (System_Collections_ObjectModel_Collection_T__o *)list,
           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v25 = list;
    v26 = 0;
    while ( 1 )
    {
      list = (int64_t)this->fields.list;
      if ( !list )
        break;
      list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                        (System_Collections_ObjectModel_Collection_T__o *)list,
                        v26,
                        (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v23 = list;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(BankShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BankShopEntity_TypeInfo
          && Time >= *(_QWORD *)(list + 152)
          && Time <= *(_QWORD *)(list + 160) )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v35 = Method_System_Collections_Generic_List_BankShopEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v23;
            sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), v23, v27, v28, v29, v30, v31, v32);
          }
        }
      }
      if ( v25 == ++v26 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(list, v23);
  }
LABEL_20:
  if ( !v22 )
    goto LABEL_22;
  return (BankShopEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v22,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BankShopEntity__ToArray__);
}


int64_t __fastcall BankShopMaster__GetSpBankEndedAt(BankShopMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  int64_t klass; // x20
  int32_t v12; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4B15E4B & 1) == 0 )
  {
    sub_1BCA7E0(&BankShopEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    byte_4B15E4B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v10 = Count;
    klass = 0LL;
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v12,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v14 = Item;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
          && (BankShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == BankShopEntity_TypeInfo
          && (BYTE4(Item[9].klass) & 2) != 0
          && BankShopEntity__IsOpen((BankShopEntity_o *)Item, method)
          && klass < (__int64)v14[11].klass )
        {
          klass = (int64_t)v14[11].klass;
        }
      }
      if ( v10 == ++v12 )
        return klass;
    }
LABEL_18:
    sub_1BCAA3C(list, method);
  }
  return 0LL;
}


BankShopEntity_o *__fastcall BankShopMaster__SearchProductId(
        BankShopMaster_o *this,
        System_String_o *productId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *list; // x0
  int32_t Count; // w0
  int32_t v11; // w21
  int32_t v12; // w22
  BankShopEntity_o *v13; // x23
  __int64 methodPtr_low; // x10

  if ( (byte_4B15E4A & 1) == 0 )
  {
    sub_1BCA7E0(&BankShopEntity_TypeInfo, productId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    byte_4B15E4A = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v11 = Count;
    v12 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v12,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v13 = (BankShopEntity_o *)list;
        methodPtr_low = LOBYTE(BankShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
          && *(BankShopEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == BankShopEntity_TypeInfo )
        {
          if ( !productId )
            break;
          if ( System_String__Equals_62409536(productId, *((System_String_o **)list + 4), 0LL) )
            return v13;
        }
      }
      if ( v11 == ++v12 )
        return 0LL;
    }
LABEL_15:
    sub_1BCAA3C(list, productId);
  }
  return 0LL;
}


void __fastcall BankShopMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15E4C & 1) == 0 )
  {
    sub_1BCA7E0(&BankShopMaster___c_TypeInfo, v1, v2);
    byte_4B15E4C = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BankShopMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BankShopMaster___c_TypeInfo->static_fields->__9 = (struct BankShopMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BankShopMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}