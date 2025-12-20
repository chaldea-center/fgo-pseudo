void UserGachaDrawLogMaster___ctor(UserGachaDrawLogMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D739 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string___ctor__);
    byte_4D2D739 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    373,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t UserGachaDrawLogMaster__GetDrawLogNum(
        UserGachaDrawLogMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        int64_t startAt,
        int64_t endAt,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  int32_t v14; // w20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4D2D73C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_UserGachaDrawLogEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_UserGachaDrawLogEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2D73C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, *(_QWORD *)&gachaId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_UserGachaDrawLogEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v12);
  v14 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v18 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserGachaDrawLogEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_UserGachaDrawLogEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_17:
      v22 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_UserGachaDrawLogEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1C942F0(0, v24);
    if ( *(_DWORD *)(v23 + 16) == gachaId && *(_DWORD *)(v23 + 20) == idx )
      v14 += *(_QWORD *)(v23 + 24) >= startAt && *(_QWORD *)(v23 + 24) < endAt;
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_27;
    }
    v28 = (__int64)&v25->vtable[*v27];
  }
  else
  {
LABEL_27:
    v28 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  return v14;
}


UserGachaDrawLogEntity_o *UserGachaDrawLogMaster__GetEntity(
        UserGachaDrawLogMaster_o *this,
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2D73A & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__GetEntity__);
    byte_4D2D73A = 1;
  }
  PK = (Il2CppObject *)UserGachaDrawLogEntity__CreatePK(gachaId, idx, drawAt, (const MethodInfo *)drawAt);
  return (UserGachaDrawLogEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_345FF78 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool UserGachaDrawLogMaster__TryGetEntity(
        UserGachaDrawLogMaster_o *this,
        UserGachaDrawLogEntity_o **entity,
        int32_t gachaId,
        int32_t idx,
        int64_t drawAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D2D73B & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__TryGetEntity__);
    byte_4D2D73B = 1;
  }
  PK = (Il2CppObject *)UserGachaDrawLogEntity__CreatePK(gachaId, idx, drawAt, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_UserGachaDrawLogMaster__UserGachaDrawLogEntity__string__TryGetEntity__);
}