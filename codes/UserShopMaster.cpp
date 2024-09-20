void __fastcall UserShopMaster___ctor(UserShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C02D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
    byte_4A5C02D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    99,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntity(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C02B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
    byte_4A5C02B = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  return (UserShopEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_311DC8C *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntityDefinitely(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v18; // x10
  __int64 v19; // x0
  UserShopEntity_o *v20; // x19
  const MethodInfo *v21; // x3
  UserShopEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5C02E & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&UserShopEntity_TypeInfo);
    byte_4A5C02E = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_25;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v20 = (UserShopEntity_o *)sub_1B887FC(UserShopEntity_TypeInfo);
    UserShopEntity___ctor_40277788(v20, userId, shopId, v21);
    return v20;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1B8880C(lookup, v9);
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 2].method;
  }
  else
  {
LABEL_16:
    v19 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v19)(
                                 v16,
                                 PK,
                                 *(_QWORD *)(v19 + 8));
  if ( result )
  {
    methodPtr_low = LOBYTE(UserShopEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (UserShopEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != UserShopEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


bool __fastcall UserShopMaster__TryGetEntity(
        UserShopMaster_o *this,
        UserShopEntity_o **entity,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5C02C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
    byte_4A5C02C = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
}


int32_t __fastcall UserShopMaster__UpdateTimeSort(
        UserShopMaster_o *this,
        UserShopEntity_o *x,
        UserShopEntity_o *y,
        const MethodInfo *method)
{
  int64_t updatedAt; // x8
  int64_t v5; // x9

  if ( !x || !y )
    sub_1B8880C(this, x);
  updatedAt = x->fields.updatedAt;
  v5 = y->fields.updatedAt;
  if ( updatedAt < v5 )
    return 1;
  if ( updatedAt <= v5 )
    return x->fields.shopId - y->fields.shopId;
  return -1;
}


UserShopEntity_o *__fastcall UserShopMaster__getLastPurchaseEntity(UserShopMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  Il2CppObject *v5; // x1
  System_Collections_ObjectModel_Collection_T__o *Item; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Comparison_T__o *v17; // x21

  if ( (byte_4A5C02F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_UserShopEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserShopEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserShopEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserShopEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserShopEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_UserShopEntity__TypeInfo);
    sub_1B885B0(&UserShopEntity_TypeInfo);
    sub_1B885B0(&Method_UserShopMaster_UpdateTimeSort__);
    byte_4A5C02F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UserShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UserShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
  {
    return 0LL;
  }
  Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Item )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            Item,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v8 = Count;
    v9 = 0;
    while ( 1 )
    {
      Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Item )
        break;
      Item = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 Item,
                                                                 v9,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v3 )
        break;
      if ( Item
        && (methodPtr_low = LOBYTE(UserShopEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v5 = (UserShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserShopEntity_TypeInfo
           ? (Il2CppObject *)Item
           : 0LL;
      }
      else
      {
        v5 = 0LL;
      }
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_UserShopEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v5,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v5;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v5, v10, v11);
      }
      if ( v8 == ++v9 )
        goto LABEL_21;
    }
LABEL_24:
    sub_1B8880C(Item, v5);
  }
LABEL_21:
  v17 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_UserShopEntity__TypeInfo);
  System_Comparison_object____ctor(v17, (Il2CppObject *)this, Method_UserShopMaster_UpdateTimeSort__, 0LL);
  if ( !v3 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_55571192(
    v3,
    v17,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_UserShopEntity__Sort__);
  return (UserShopEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v3,
                               0,
                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UserShopEntity__get_Item__);
}