void __fastcall UserEventMaster___ctor(UserEventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__, method, v2);
    byte_4B16E7B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    97,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall UserEventMaster__GetEntity(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16E79 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&eventId);
    byte_4B16E79 = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_31B3198 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall UserEventMaster__GetEntityDefinitely(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v11; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x23
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v20; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x20
  __int64 v22; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x10
  __int64 v24; // x0
  UserEventEntity_o *v25; // x19
  const MethodInfo *v26; // x3
  UserEventEntity_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16E7C & 1) == 0 )
  {
    sub_1BCA7E0(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      userId,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&UserEventEntity_TypeInfo, v7, v8);
    byte_4B16E7C = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_25;
  klass = lookup->klass;
  v13 = lookup;
  v14 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
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
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v25 = (UserEventEntity_o *)sub_1BCAA2C(UserEventEntity_TypeInfo, v17, v18, v19);
    UserEventEntity___ctor_40808560(v25, userId, eventId, v26);
    return v25;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_25:
    sub_1BCAA3C(lookup, v11);
  v20 = lookup->klass;
  v21 = lookup;
  v22 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v22;
      v23 += 2;
      if ( !v22 )
        goto LABEL_16;
    }
    v24 = (__int64)&v20->vtable[*(_DWORD *)v23 + 2].method;
  }
  else
  {
LABEL_16:
    v24 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  result = (UserEventEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v24)(
                                  v21,
                                  PK,
                                  *(_QWORD *)(v24 + 8));
  if ( result )
  {
    methodPtr_low = LOBYTE(UserEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (UserEventEntity_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != UserEventEntity_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


bool __fastcall UserEventMaster__TryGetEntity(
        UserEventMaster_o *this,
        UserEventEntity_o **entity,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16E7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__, entity, userId);
    byte_4B16E7A = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
}


UserEventEntity_array *__fastcall UserEventMaster__getList(UserEventMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t UserId; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4B16E7D & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B16E7D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  return UserEventMaster__getList_40817180(this, UserId, v5);
}


UserEventEntity_array *__fastcall UserEventMaster__getList_40817180(
        UserEventMaster_o *this,
        int64_t userId,
        const MethodInfo *method)
{
  int64_t v3; // x19
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x22
  int32_t v23; // w23
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0

  v3 = userId;
  if ( (byte_4B16E7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, userId, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventEntity__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventEntity__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventEntity___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_UserEventEntity__TypeInfo, v13, v14);
    sub_1BCA7E0(&UserEventEntity_TypeInfo, v15, v16);
    byte_4B16E7E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_UserEventEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UserEventEntity___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v23,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        userId = (int64_t)list;
        methodPtr_low = LOBYTE(UserEventEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
          && (UserEventEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == UserEventEntity_TypeInfo
          && list->fields.items == (struct System_Collections_Generic_IList_T__o *)v3 )
        {
          if ( !v22 )
            break;
          items = v22->fields._items;
          v32 = Method_System_Collections_Generic_List_UserEventEntity__Add__;
          ++v22->fields._version;
          if ( !items )
            break;
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)list,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v34[4] = (Il2CppClass *)userId;
            sub_1BCA784((PartyOrganizationUtility_o *)(v34 + 4), userId, v24, v25, v26, v27, v28, v29);
          }
        }
      }
      if ( Count == ++v23 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(list, userId);
  }
LABEL_17:
  if ( !v22 )
    goto LABEL_19;
  return (UserEventEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v22,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserEventEntity__ToArray__);
}