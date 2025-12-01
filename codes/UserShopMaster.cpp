void UserShopMaster___ctor(UserShopMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC84BA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
    byte_4CC84BA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    103,
    (const MethodInfo_340B614 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserShopEntity_o *UserShopMaster__GetEntity(
        UserShopMaster_o *this,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC84B8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
    byte_4CC84B8 = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  return (UserShopEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_340D938 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__GetEntity__);
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
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__c **v18; // x10
  __int64 v19; // x0
  UserShopEntity_o *v20; // x19
  const MethodInfo *v21; // x3

  if ( (byte_4CC84BB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo);
    sub_1C713B0(&UserShopEntity_TypeInfo);
    byte_4CC84BB = 1;
  }
  PK = UserShopEntity__CreatePK(userId, shopId, *(const MethodInfo **)&shopId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_340B72C *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_20;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v14 = sub_1C47738(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v14)(
          v11,
          PK,
          *(_QWORD *)(v14 + 8))
      & 1) == 0 )
  {
    v20 = (UserShopEntity_o *)sub_1C715FC(UserShopEntity_TypeInfo);
    UserShopEntity___ctor_43543616(v20, userId, shopId, v21);
    return v20;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_340B72C *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1C71608(lookup, v9);
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)&v15->vtable[*(_DWORD *)v18 + 2];
  }
  else
  {
LABEL_16:
    v19 = sub_1C47738(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserShopEntity__TypeInfo, 2);
  }
  return (UserShopEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v19)(
                               v16,
                               PK,
                               *(_QWORD *)(v19 + 8));
}


bool UserShopMaster__TryGetEntity(
        UserShopMaster_o *this,
        UserShopEntity_o **entity,
        int64_t userId,
        int32_t shopId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC84B9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
    byte_4CC84B9 = 1;
  }
  PK = (Il2CppObject *)UserShopEntity__CreatePK(userId, shopId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_UserShopMaster__UserShopEntity__string__TryGetEntity__);
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
    sub_1C71608(this, x);
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
  __int64 v5; // x1
  System_Collections_ObjectModel_Collection_T__o *Item; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_ObjectModel_Collection_T__o *v19; // x1
  Il2CppClass **v20; // x0
  System_Comparison_T__o *v21; // x21

  if ( (byte_4CC84BC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Item__);
    sub_1C713B0(&System_Comparison_UserShopEntity__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserShopEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserShopEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserShopEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserShopEntity__get_Item__);
    sub_1C713B0(&System_Collections_Generic_List_UserShopEntity__TypeInfo);
    sub_1C713B0(&Method_UserShopMaster_UpdateTimeSort__);
    byte_4CC84BC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserShopEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list
    || System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Count__) < 1 )
  {
    return 0;
  }
  Item = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !Item )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            Item,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Count__);
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
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_UserShopEntity__get_Item__);
      if ( !v3 )
        break;
      items = v3->fields._items;
      v17 = Method_System_Collections_Generic_List_UserShopEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      v19 = Item;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)Item,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v19, v10, v11, v12, v13, v14, v15);
      }
      if ( v8 == ++v9 )
        goto LABEL_15;
    }
LABEL_18:
    sub_1C71608(Item, v5);
  }
LABEL_15:
  v21 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_UserShopEntity__TypeInfo);
  System_Comparison_object____ctor(v21, (Il2CppObject *)this, Method_UserShopMaster_UpdateTimeSort__, 0);
  if ( !v3 )
    goto LABEL_18;
  System_Collections_Generic_List_object___Sort_58794460(
    v3,
    v21,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_UserShopEntity__Sort__);
  return (UserShopEntity_o *)System_Collections_Generic_List_object___get_Item(
                               v3,
                               0,
                               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserShopEntity__get_Item__);
}