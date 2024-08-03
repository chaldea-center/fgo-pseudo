void __fastcall UserShopMaster___ctor(UserShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD2B3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__, method);
    byte_49FD2B3 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    99,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntity(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FD2B1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__, userId);
    byte_49FD2B1 = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  return (UserShopEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_30D41FC *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntityDefinitely(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x20
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v20; // x10
  __int64 v21; // x0
  UserShopEntity_o *v22; // x19
  const MethodInfo *v23; // x3
  UserShopEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FD2B4 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_1B640C8(&UserShopEntity_TypeInfo, v7);
    byte_49FD2B4 = 1;
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
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v22 = (UserShopEntity_o *)sub_1B64314(UserShopEntity_TypeInfo, v15, v16);
    UserShopEntity___ctor_39945620(v22, userId, shopId, v23);
    return v22;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1B64324(lookup);
  v17 = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v20 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_16;
    }
    v21 = (__int64)&v17->vtable[*(_DWORD *)v20 + 2].method;
  }
  else
  {
LABEL_16:
    v21 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v21)(
                                 v18,
                                 PK,
                                 *(_QWORD *)(v21 + 8));
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

  if ( (byte_49FD2B2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__, entity);
    byte_49FD2B2 = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
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
    sub_1B64324(this);
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
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_ObjectModel_Collection_T__o *Item; // x0
  int32_t Count; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w21
  int32_t v20; // w22
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 methodPtr_low; // x10
  Il2CppObject *v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Comparison_T__o *v29; // x21

  if ( (byte_49FD2B5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_1B640C8(&System_Comparison_UserShopEntity__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserShopEntity__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserShopEntity__Sort__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserShopEntity___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserShopEntity__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UserShopEntity__TypeInfo, v10);
    sub_1B640C8(&UserShopEntity_TypeInfo, v11);
    sub_1B640C8(&Method_UserShopMaster_UpdateTimeSort__, v12);
    byte_49FD2B5 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UserShopEntity__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UserShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
  {
    return 0LL;
  }
  Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Item )
    goto LABEL_24;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            Item,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v19 = Count;
    v20 = 0;
    while ( 1 )
    {
      Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Item )
        break;
      Item = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 Item,
                                                                 v20,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !v13 )
        break;
      if ( Item
        && (methodPtr_low = LOBYTE(UserShopEntity_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(Item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v24 = (UserShopEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == UserShopEntity_TypeInfo
            ? (Il2CppObject *)Item
            : 0LL;
      }
      else
      {
        v24 = 0LL;
      }
      items = v13->fields._items;
      v26 = Method_System_Collections_Generic_List_UserShopEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        break;
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          v24,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v24, v21, v22);
      }
      if ( v19 == ++v20 )
        goto LABEL_21;
    }
LABEL_24:
    sub_1B64324(Item);
  }
LABEL_21:
  v29 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_UserShopEntity__TypeInfo, v17, v18);
  System_Comparison_object____ctor(v29, (Il2CppObject *)this, Method_UserShopMaster_UpdateTimeSort__, 0LL);
  if ( !v13 )
    goto LABEL_24;
  System_Collections_Generic_List_object___Sort_55243320(
    v13,
    v29,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_UserShopEntity__Sort__);
  return (UserShopEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v13,
                               0,
                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UserShopEntity__get_Item__);
}