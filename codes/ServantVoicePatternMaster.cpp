void __fastcall ServantVoicePatternMaster___ctor(ServantVoicePatternMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B82 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string___ctor__,
      method,
      v2);
    byte_4B16B82 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    480,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantVoicePatternEntity_o *__fastcall ServantVoicePatternMaster__GetEntity(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16B7F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&svtId);
    byte_4B16B7F = 1;
  }
  PK = (Il2CppObject *)ServantVoicePatternEntity__CreatePK(id, svtId, voiceId, (const MethodInfo *)voiceId);
  return (ServantVoicePatternEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_31B3198 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoicePatternEntity__o *__fastcall ServantVoicePatternMaster__GetEntityList(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  __int64 v22; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x8
  ServantVoicePatternEntity_c *v43; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v46; // x10
  __int64 size; // x11
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_4B16B81 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&id,
      *(_QWORD *)&svtId);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoicePatternEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantVoicePatternEntity___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantVoicePatternEntity__TypeInfo, v17, v18);
    sub_1BCA7E0(&ServantVoicePatternEntity_TypeInfo, v19, v20);
    byte_4B16B81 = 1;
  }
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantVoicePatternEntity__TypeInfo,
                                                       *(_QWORD *)&id,
                                                       *(_QWORD *)&svtId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantVoicePatternEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v22);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v30 = Enumerator->klass;
    v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v32 = &v30->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v32 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = (__int64)&v30->vtable[*v32].method;
    }
    else
    {
LABEL_16:
      v33 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
            Enumerator,
            *(_QWORD *)(v33 + 8));
    v42 = v34;
    if ( !v34 )
      goto LABEL_36;
    v43 = ServantVoicePatternEntity_TypeInfo;
    methodPtr_low = LOBYTE(ServantVoicePatternEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantVoicePatternEntity_c **)(*(_QWORD *)(*(_QWORD *)v34 + 200LL) + 8 * methodPtr_low - 8) != ServantVoicePatternEntity_TypeInfo )
    {
      sub_1BCACFC(v34);
LABEL_36:
      sub_1BCAA3C(v34, v35);
    }
    if ( *(_DWORD *)(v34 + 16) == id && *(_DWORD *)(v34 + 20) == svtId )
    {
      if ( !v21 )
        sub_1BCAA3C(v34, ServantVoicePatternEntity_TypeInfo);
      items = v21->fields._items;
      v46 = Method_System_Collections_Generic_List_ServantVoicePatternEntity__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(v34, v43);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          (Il2CppObject *)v34,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v42;
        sub_1BCA784((PartyOrganizationUtility_o *)(v48 + 4), v42, v36, v37, v38, v39, v40, v41);
      }
    }
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_32;
    }
    v52 = (__int64)&v49->vtable[*v51].method;
  }
  else
  {
LABEL_32:
    v52 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
  return (System_Collections_Generic_List_ServantVoicePatternEntity__o *)v21;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoicePatternMaster__IsSatisfyPlayCondition(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t limitCount,
        int32_t targetValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int32_t type; // w8
  ServantVoicePatternEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  if ( !ServantVoicePatternMaster__TryGetEntity(this, &entity, id, svtId, voiceId, *(const MethodInfo **)&targetValue) )
    return 1;
  if ( !entity )
    sub_1BCAA3C(0LL, v9);
  type = entity->fields.type;
  if ( !type )
    return 0;
  return type != 1 || ServantVoicePatternEntity__CheckAddCond(entity, limitCount, targetValue, v10);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoicePatternMaster__TryGetEntity(
        ServantVoicePatternMaster_o *this,
        ServantVoicePatternEntity_o **entity,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16B80 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B16B80 = 1;
  }
  PK = (Il2CppObject *)ServantVoicePatternEntity__CreatePK(id, svtId, voiceId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__TryGetEntity__);
}