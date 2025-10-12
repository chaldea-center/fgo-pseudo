void UserShopMaster___ctor(UserShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38A62 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
    byte_4C38A62 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    103,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *UserShopMaster__GetEntity(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C38A60 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
    byte_4C38A60 = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  return (UserShopEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_339B2F0 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *UserShopMaster__GetEntityDefinitely(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v10; // x23
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v14; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v15; // x20
  __int64 v16; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__c **v17; // x10
  __int64 v18; // x0
  UserShopEntity_o *v19; // x19
  const MethodInfo *v20; // x3

  if ( (byte_4C38A63 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo);
    sub_1C32C20(&UserShopEntity_TypeInfo);
    byte_4C38A63 = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33990E4 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_20;
  klass = lookup->klass;
  v10 = lookup;
  v11 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v13 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v13)(
          v10,
          PK,
          *(_QWORD *)(v13 + 8))
      & 1) == 0 )
  {
    v19 = (UserShopEntity_o *)sub_1C32E6C(UserShopEntity_TypeInfo);
    UserShopEntity___ctor_43151132(v19, userId, shopId, v20);
    return v19;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33990E4 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1C32E7C(lookup);
  v14 = lookup->klass;
  v15 = lookup;
  v16 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v17 = (System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__c **)&v14->_1.interfaceOffsets->offset;
    while ( *(v17 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo )
    {
      --v16;
      v17 += 2;
      if ( !v16 )
        goto LABEL_16;
    }
    v18 = (__int64)&v14->vtable[*(_DWORD *)v17 + 2];
  }
  else
  {
LABEL_16:
    v18 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo, 2);
  }
  return (UserShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v18)(
                               v15,
                               PK,
                               *(_QWORD *)(v18 + 8));
}


bool UserShopMaster__TryGetEntity(
        UserShopMaster_o *this,
        UserShopEntity_o **entity,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C38A61 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
    byte_4C38A61 = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
}


int32_t UserShopMaster__UpdateTimeSort(
        UserShopMaster_o *this,
        UserShopEntity_o *x,
        UserShopEntity_o *y,
        const MethodInfo *method)
{
  int64_t updatedAt; // x8
  int64_t v5; // x9

  if ( !x || !y )
    sub_1C32E7C(this);
  updatedAt = x->fields.updatedAt;
  v5 = y->fields.updatedAt;
  if ( updatedAt < v5 )
    return 1;
  if ( updatedAt <= v5 )
    return x->fields.shopId - y->fields.shopId;
  return -1;
}


UserShopEntity_o *UserShopMaster__getLastPurchaseEntity(UserShopMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_ObjectModel_Collection_T__o *Item; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v14; // x1
  Il2CppClass **v15; // x0
  System_Comparison_T__o *v16; // x21

  if ( (byte_4C38A64 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Item__);
    sub_1C32C20(&System_Comparison_UserShopEntity__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserShopEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserShopEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserShopEntity___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserShopEntity__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_UserShopEntity__TypeInfo);
    sub_1C32C20(&Method_UserShopMaster_UpdateTimeSort__);
    byte_4C38A64 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Count__) < 1 )
  {
    return 0;
  }
  Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Item )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            Item,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !Item )
        break;
      Item = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 Item,
                                                                 v8,
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Item__);
      if ( !v3 )
        break;
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_UserShopEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      v14 = Item;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)Item,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v15 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v15[4] = (Il2CppClass *)v14;
        sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
      }
      if ( v7 == ++v8 )
        goto LABEL_15;
    }
LABEL_18:
    sub_1C32E7C(Item);
  }
LABEL_15:
  v16 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_UserShopEntity__TypeInfo);
  System_Comparison_object____ctor(v16, (Il2CppObject *)this, Method_UserShopMaster_UpdateTimeSort__, 0);
  if ( !v3 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_58303104(
    v3,
    v16,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_UserShopEntity__Sort__);
  return (UserShopEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v3,
                               0,
                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UserShopEntity__get_Item__);
}