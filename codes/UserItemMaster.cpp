void UserItemMaster___ctor(UserItemMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C281AD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
    byte_4C281AD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    36,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *UserItemMaster__GetEntity(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C281AB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
    byte_4C281AB = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  return (UserItemEntity_o *)DataMasterBase_object__object__object___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               PK,
                               (const MethodInfo_338C850 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserItemEntity_o *UserItemMaster__GetEntityDefinitely(
        UserItemMaster_o *this,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  System_String_o *PK; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *lookup; // x0
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *v15; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x19
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **v18; // x10
  __int64 v19; // x0
  UserItemEntity_o *v20; // x21
  const MethodInfo *v21; // x3
  UserSvtCoinEntity_o *v23; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C281AF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
    sub_1C2D490(&System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo);
    sub_1C2D490(&UserItemEntity_TypeInfo);
    byte_4C281AF = 1;
  }
  v23 = 0;
  entity = 0;
  PK = UserItemEntity__CreatePK(userId, itemId, *(const MethodInfo **)&itemId);
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___get_lookup(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           (const MethodInfo_338A644 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_34;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_8:
    v14 = sub_1C7DCA8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v14)(
          v11,
          PK,
          *(_QWORD *)(v14 + 8))
      & 1) == 0 )
  {
    v20 = (UserItemEntity_o *)sub_1C2D6DC(UserItemEntity_TypeInfo);
    UserItemEntity___ctor_42864776(v20, userId, itemId, v21);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
    if ( lookup )
    {
      lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                               lookup,
                                                               &entity,
                                                               itemId,
                                                               (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)lookup & 1) == 0 )
        return v20;
      if ( entity )
      {
        if ( LODWORD(entity[3].klass) != 29 )
          return v20;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
        if ( entity && lookup )
        {
          lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)UserSvtCoinMaster__TryGetEntity(
                                                                   (UserSvtCoinMaster_o *)lookup,
                                                                   &v23,
                                                                   userId,
                                                                   (int32_t)entity[4].klass,
                                                                   0);
          if ( ((unsigned __int8)lookup & 1) == 0 )
            return v20;
          if ( v23 && v20 )
          {
            v20->fields.num = v23->fields.num;
            return v20;
          }
        }
      }
    }
LABEL_34:
    sub_1C2D6EC(lookup, v9);
  }
  lookup = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___get_lookup(
                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                           (const MethodInfo_338A644 *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_34;
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_16;
    }
    v19 = (__int64)(&v15->vtable._2_GetHashCode + *(_DWORD *)v18);
  }
  else
  {
LABEL_16:
    v19 = sub_1C7DCA8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserItemEntity__TypeInfo, 2);
  }
  return (UserItemEntity_o *)(*(__int64 (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, System_String_o *, _QWORD))v19)(
                               v16,
                               PK,
                               *(_QWORD *)(v19 + 8));
}


int32_t UserItemMaster__GetUserStoneFragmentNum(UserItemMaster_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  int64_t userIdNumber; // x20
  _DWORD *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4C281B2 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C281B2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  userIdNumber = v3->static_fields->userIdNumber;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object
    || (Master_object = UserItemMaster__GetEntityDefinitely(this, userIdNumber, Master_object[23], v7)) == 0 )
  {
    sub_1C2D6EC(Master_object, v6);
  }
  return Master_object[7];
}


bool UserItemMaster__TryGetEntity(
        UserItemMaster_o *this,
        UserItemEntity_o **entity,
        int64_t userId,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C281AC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
    byte_4C281AC = 1;
  }
  PK = (Il2CppObject *)UserItemEntity__CreatePK(userId, itemId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserItemMaster__UserItemEntity__string__TryGetEntity__);
}


UserItemEntity_array *UserItemMaster__getList(UserItemMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4C281AE & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C281AE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserItemMaster__getList_42865468(this, v4->static_fields->userIdNumber, v2);
}


UserItemEntity_array *UserItemMaster__getList_42865468(
        UserItemMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  v3 = userId;
  if ( (byte_4C281B1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserItemEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserItemEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserItemEntity__TypeInfo);
    byte_4C281B1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserItemEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserItemEntity___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        if ( list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v12 = Method_System_Collections_Generic_List_UserItemEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
          }
          else
          {
            v14 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v14[4] = (Il2CppClass *)userId;
            sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), userId, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C2D6EC(list, userId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (UserItemEntity_array *)System_Collections_Generic_List_object___ToArray(
                                   v7,
                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserItemEntity__ToArray__);
}


int32_t UserItemMaster__getSum(UserItemMaster_o *this, int64_t userId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w22
  int32_t v8; // w21
  int32_t v9; // w23
  Il2CppObject *Item; // x0

  if ( (byte_4C281B0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
    byte_4C281B0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               v9,
               (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserItemEntity__get_Item__);
      if ( Item && Item[1].klass == (Il2CppClass *)userId )
        ++v8;
      if ( v7 == ++v9 )
        return v8;
    }
LABEL_14:
    sub_1C2D6EC(list, userId);
  }
  return 0;
}