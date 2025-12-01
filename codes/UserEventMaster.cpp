void UserEventMaster___ctor(UserEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC820E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
    byte_4CC820E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    101,
    (const MethodInfo_340B614 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *UserEventMaster__GetEntity(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC820C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
    byte_4CC820C = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_340D938 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
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
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v11; // x23
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__c *v15; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *v16; // x20
  __int64 v17; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__c **v18; // x10
  __int64 v19; // x0
  UserEventEntity_o *v20; // x19
  const MethodInfo *v21; // x3

  if ( (byte_4CC820F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__get_lookup__);
    sub_1C713B0(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo);
    sub_1C713B0(&UserEventEntity_TypeInfo);
    byte_4CC820F = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_340B72C *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__get_lookup__);
  if ( !lookup )
    goto LABEL_20;
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo )
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
    v14 = sub_1C47738(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v14)(
          v11,
          PK,
          *(_QWORD *)(v14 + 8))
      & 1) == 0 )
  {
    v20 = (UserEventEntity_o *)sub_1C715FC(UserEventEntity_TypeInfo);
    UserEventEntity___ctor_43323388(v20, userId, eventId, v21);
    return v20;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_340B72C *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1C71608(lookup, v9);
  v15 = lookup->klass;
  v16 = lookup;
  v17 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    v18 = (System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__c **)&v15->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo )
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
    v19 = sub_1C47738(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo, 2);
  }
  return (UserEventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v19)(
                                v16,
                                PK,
                                *(_QWORD *)(v19 + 8));
}


bool UserEventMaster__TryGetEntity(
        UserEventMaster_o *this,
        UserEventEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC820D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
    byte_4CC820D = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
}


UserEventEntity_array *UserEventMaster__getList(UserEventMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  NetworkManager_c *v4; // x0

  if ( (byte_4CC8210 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC8210 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CC112A )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC112A = 1;
  }
  v4 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v4 = NetworkManager_TypeInfo;
  }
  return UserEventMaster__getList_43332560(this, v4->static_fields->userIdNumber, v2);
}


UserEventEntity_array *UserEventMaster__getList_43332560(
        UserEventMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  v3 = userId;
  if ( (byte_4CC8211 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserEventEntity__get_Count__);
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_UserEventEntity__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserEventEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserEventEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_UserEventEntity__TypeInfo);
    byte_4CC8211 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_17;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)Method_System_Collections_ObjectModel_Collection_UserEventEntity__get_Count__);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_UserEventEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_UserEventEntity___ctor__);
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
                                                                 (const MethodInfo_33A1C98 *)Method_System_Collections_ObjectModel_Collection_UserEventEntity__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        if ( list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v7 )
            break;
          items = v7->fields._items;
          v16 = Method_System_Collections_Generic_List_UserEventEntity__Add__;
          ++v7->fields._version;
          if ( !items )
            break;
          size = v7->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)list,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v18[4] = (Il2CppClass *)userId;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v18 + 4), userId, v9, v10, v11, v12, v13, v14);
          }
        }
      }
      if ( Count == ++v8 )
        goto LABEL_15;
    }
LABEL_17:
    sub_1C71608(list, userId);
  }
LABEL_15:
  if ( !v7 )
    goto LABEL_17;
  return (UserEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
}