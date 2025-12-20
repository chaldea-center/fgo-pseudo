void ServantVoicePatternMaster___ctor(ServantVoicePatternMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D370 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string___ctor__);
    byte_4D2D370 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    486,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string___ctor__);
}


ServantVoicePatternEntity_o *ServantVoicePatternMaster__GetEntity(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D36D & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__GetEntity__);
    byte_4D2D36D = 1;
  }
  PK = (Il2CppObject *)ServantVoicePatternEntity__CreatePK(id, svtId, voiceId, (const MethodInfo *)voiceId);
  return (ServantVoicePatternEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_345FF78 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__GetEntity__);
}


System_Collections_Generic_List_ServantVoicePatternEntity__o *ServantVoicePatternMaster__GetEntityList(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  __int64 v28; // x8
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4D2D36F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_ServantVoicePatternEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_ServantVoicePatternEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoicePatternEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_ServantVoicePatternEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_ServantVoicePatternEntity__TypeInfo);
    byte_4D2D36F = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_ServantVoicePatternEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_ServantVoicePatternEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_ServantVoicePatternEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantVoicePatternEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantVoicePatternEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_ServantVoicePatternEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v28 = v20;
    if ( !v20 )
      sub_1C942F0(0, v21);
    if ( *(_DWORD *)(v20 + 16) == id && *(_DWORD *)(v20 + 20) == svtId )
    {
      if ( !v7 )
        sub_1C942F0(v20, v21);
      items = v7->fields._items;
      v30 = Method_System_Collections_Generic_List_ServantVoicePatternEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C942F0(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v32[4] = (Il2CppClass *)v28;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 4), v28, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_30;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_30:
    v36 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return (System_Collections_Generic_List_ServantVoicePatternEntity__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
bool ServantVoicePatternMaster__IsSatisfyPlayCondition(
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
  int v11; // w8
  ServantVoicePatternEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  if ( !ServantVoicePatternMaster__TryGetEntity(this, &entity, id, svtId, voiceId, *(const MethodInfo **)&targetValue) )
    return 1;
  if ( !entity )
    sub_1C942F0(0, v9);
  v11 = *(_DWORD *)((char *)&qword_20 + (_QWORD)entity);
  if ( !v11 )
    return 0;
  return v11 != 1 || ServantVoicePatternEntity__CheckAddCond(entity, limitCount, targetValue, v10);
}


// local variable allocation has failed, the output may be wrong!
bool ServantVoicePatternMaster__TryGetEntity(
        ServantVoicePatternMaster_o *this,
        ServantVoicePatternEntity_o **entity,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D36E & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__TryGetEntity__);
    byte_4D2D36E = 1;
  }
  PK = (Il2CppObject *)ServantVoicePatternEntity__CreatePK(id, svtId, voiceId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__TryGetEntity__);
}