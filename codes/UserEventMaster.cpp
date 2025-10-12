void UserEventMaster___ctor(UserEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C387C7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
    byte_4C387C7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    101,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *UserEventMaster__GetEntity(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C387C5 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
    byte_4C387C5 = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_339B2F0 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *UserEventMaster__GetEntityDefinitely(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
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
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__c **v17; // x10
  __int64 v18; // x0
  UserEventEntity_o *v19; // x19
  const MethodInfo *v20; // x3

  if ( (byte_4C387C8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__get_lookup__);
    sub_1C32C20(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo);
    sub_1C32C20(&UserEventEntity_TypeInfo);
    byte_4C387C8 = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33990E4 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_20;
  klass = lookup->klass;
  v10 = lookup;
  v11 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo )
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
    v13 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v13)(
          v10,
          PK,
          *(_QWORD *)(v13 + 8))
      & 1) == 0 )
  {
    v19 = (UserEventEntity_o *)sub_1C32E6C(UserEventEntity_TypeInfo);
    UserEventEntity___ctor_42934976(v19, userId, eventId, v20);
    return v19;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_33990E4 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1C32E7C(lookup);
  v14 = lookup->klass;
  v15 = lookup;
  v16 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v17 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__c **)&v14->_1.interfaceOffsets->offset;
    while ( *(v17 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo )
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
    v18 = sub_1C83438(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo, 2);
  }
  return (UserEventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v18)(
                                v15,
                                PK,
                                *(_QWORD *)(v18 + 8));
}


bool UserEventMaster__TryGetEntity(
        UserEventMaster_o *this,
        UserEventEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C387C6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
    byte_4C387C6 = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
}


UserEventEntity_array *UserEventMaster__getList(UserEventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4C387C9 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C387C9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserEventMaster__getList_42944148(this, v4->static_fields->userIdNumber, v2);
}


UserEventEntity_array *UserEventMaster__getList_42944148(
        UserEventMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4C387CA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserEventEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserEventEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserEventEntity__TypeInfo);
    byte_4C387CA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_UserEventEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserEventEntity___ctor__);
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
                                                                 (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_UserEventEntity__get_Item__);
      if ( list )
      {
        v11 = list;
        if ( list->fields.items == (struct System_Collections_Generic_IList_T__o *)userId )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v13 = Method_System_Collections_Generic_List_UserEventEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v15[4] = (Il2CppClass *)v11;
            sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C32E7C(list);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (UserEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
}