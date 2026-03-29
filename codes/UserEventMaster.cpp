void UserEventMaster___ctor(UserEventMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D317DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
    byte_4D317DF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    101,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *UserEventMaster__GetEntity(
        UserEventMaster_o *this,
        int64_t userId,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D317DD & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
    byte_4D317DD = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  return (UserEventEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_34681D4 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__GetEntity__);
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

  if ( (byte_4D317E0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__get_lookup__);
    sub_1C93AD4(&System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo);
    sub_1C93AD4(&UserEventEntity_TypeInfo);
    byte_4D317E0 = 1;
  }
  PK = UserEventEntity__CreatePK(userId, eventId, *(const MethodInfo **)&eventId);
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3465D74 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__get_lookup__);
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
    v14 = sub_1C69E5C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v14)(
          v11,
          PK,
          *(_QWORD *)(v14 + 8))
      & 1) == 0 )
  {
    v20 = (UserEventEntity_o *)sub_1C93D20(UserEventEntity_TypeInfo);
    UserEventEntity___ctor_43736628(v20, userId, eventId, v21);
    return v20;
  }
  lookup = DataMasterBase_object__object__object___get_lookup(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             (const MethodInfo_3465D74 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__get_lookup__);
  if ( !lookup )
LABEL_20:
    sub_1C93D2C(lookup, v9);
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
    v19 = sub_1C69E5C(lookup, System_Collections_Generic_IReadOnlyDictionary_string__UserEventEntity__TypeInfo, 2);
  }
  return (*(UserEventEntity_o *(__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *, System_String_o *, _QWORD))v19)(
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

  if ( (byte_4D317DE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
    byte_4D317DE = 1;
  }
  PK = (Il2CppObject *)UserEventEntity__CreatePK(userId, eventId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_UserEventMaster__UserEventEntity__string__TryGetEntity__);
}