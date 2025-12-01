void GiftAddMaster___ctor(GiftAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC771D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
    byte_4CC771D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    25,
    (const MethodInfo_340B614 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *GiftAddMaster__GetEntity(
        GiftAddMaster_o *this,
        int32_t giftId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC771B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
    byte_4CC771B = 1;
  }
  PK = (Il2CppObject *)GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&priority);
  return (GiftAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              PK,
                              (const MethodInfo_340D938 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
GiftAddEntity_o *GiftAddMaster__GetValidPriorDataById(GiftAddMaster_o *this, int32_t giftId, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  GiftAddEntity_o *v8; // x22
  GiftAddEntity_o *v9; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  GiftAddEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  int32_t priority; // w8
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4CC771E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_GiftAddEntity__GetEnumerator__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_GiftAddEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC771E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, *(_QWORD *)&giftId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_GiftAddEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v6);
  v8 = 0;
LABEL_6:
  v9 = v8;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_11;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GiftAddEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_GiftAddEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_18;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_18:
      v17 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_GiftAddEntity__TypeInfo, 0);
    }
    v18 = (GiftAddEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                               Enumerator,
                               *(_QWORD *)(v17 + 8));
    v8 = v18;
    if ( !v18 )
      sub_1C71608(0, v19);
    if ( v18->fields.giftId == giftId && GiftAddEntity__CheckValid(v18, v19) )
    {
      if ( !v9 )
        goto LABEL_6;
      priority = v8->fields.priority;
      if ( priority )
      {
        if ( priority > v9->fields.priority )
          goto LABEL_6;
      }
    }
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_31;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_31:
    v24 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool GiftAddMaster__TryGetEntity(
        GiftAddMaster_o *this,
        GiftAddEntity_o **entity,
        int32_t giftId,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC771C & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
    byte_4CC771C = 1;
  }
  PK = (Il2CppObject *)GiftAddEntity__CreatePK(giftId, priority, *(const MethodInfo **)&giftId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_GiftAddMaster__GiftAddEntity__string__TryGetEntity__);
}