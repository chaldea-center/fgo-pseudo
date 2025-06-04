void __fastcall UserShopMaster___ctor(UserShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B03053 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__, method);
    byte_4B03053 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    103,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntity(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B03051 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__, userId);
    byte_4B03051 = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  return (UserShopEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_32B3B28 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *__fastcall UserShopMaster__GetEntityDefinitely(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v13; // x23
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v18; // x20
  __int64 v19; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__c **v20; // x10
  __int64 v21; // x0
  UserShopEntity_o *v22; // x19
  const MethodInfo *v23; // x3

  if ( (byte_4B03054 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__get_lookup__, userId);
    sub_1BC3008(&System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo, v7);
    sub_1BC3008(&UserShopEntity_TypeInfo, v8);
    byte_4B03054 = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32B191C *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_20;
  klass = lookup->klass;
  v13 = lookup;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C13570(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v22 = (UserShopEntity_o *)sub_1BC3254(UserShopEntity_TypeInfo);
    UserShopEntity___ctor_42224424(v22, userId, shopId, v23);
    return v22;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_32B191C *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1BC3264(lookup, v11);
  v17 = lookup->klass;
  v18 = lookup;
  v19 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v20 = (System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo )
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
    v21 = sub_1C13570(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo, 2LL);
  }
  return (UserShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v21)(
                               v18,
                               PK,
                               *(_QWORD *)(v21 + 8));
}


bool __fastcall UserShopMaster__TryGetEntity(
        UserShopMaster_o *this,
        UserShopEntity_o **entity,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B03052 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__, entity);
    byte_4B03052 = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
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
    sub_1BC3264(this, x);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *Item; // x0
  int32_t Count; // w0
  int32_t v16; // w21
  int32_t v17; // w22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v23; // x1
  Il2CppClass **v24; // x0
  System_Comparison_T__o *v25; // x21

  if ( (byte_4B03055 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Count__, method);
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Item__, v3);
    sub_1BC3008(&System_Comparison_UserShopEntity__TypeInfo, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserShopEntity__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserShopEntity__Sort__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserShopEntity___ctor__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_UserShopEntity__get_Item__, v8);
    sub_1BC3008(&System_Collections_Generic_List_UserShopEntity__TypeInfo, v9);
    sub_1BC3008(&Method_UserShopMaster_UpdateTimeSort__, v10);
    byte_4B03055 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UserShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UserShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Count__) < 1 )
  {
    return 0LL;
  }
  Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Item )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            Item,
            (const MethodInfo_324A858 *)Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Item )
        break;
      Item = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 Item,
                                                                 v17,
                                                                 (const MethodInfo_324A8E8 *)Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Item__);
      if ( !v11 )
        break;
      items = v11->fields._items;
      v21 = Method_System_Collections_Generic_List_UserShopEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      v23 = Item;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)Item,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v23;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
      }
      if ( v16 == ++v17 )
        goto LABEL_15;
    }
LABEL_18:
    sub_1BC3264(Item, v13);
  }
LABEL_15:
  v25 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_UserShopEntity__TypeInfo);
  System_Comparison_object____ctor(v25, (Il2CppObject *)this, Method_UserShopMaster_UpdateTimeSort__, 0LL);
  if ( !v11 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_57288964(
    v11,
    v25,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_UserShopEntity__Sort__);
  return (UserShopEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v11,
                               0,
                               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_UserShopEntity__get_Item__);
}