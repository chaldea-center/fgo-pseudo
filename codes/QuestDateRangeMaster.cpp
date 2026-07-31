void QuestDateRangeMaster___ctor(QuestDateRangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938CD7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__);
    byte_5938CD7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    292,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestDateRangeEntity_o *QuestDateRangeMaster__GetEntity(
        QuestDateRangeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938CD5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__);
    byte_5938CD5 = 1;
  }
  PK = (Il2CppObject *)QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (QuestDateRangeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_3EE2044 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool QuestDateRangeMaster__IsPeriodFromOpenedToClosed(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  char v17; // w21
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  _DWORD *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_Generic_IEnumerator_T__o *v29; // [xsp+18h] [xbp-38h]

  if ( (byte_5938CD8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestDateRangeEntity__GetEnumerator__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestDateRangeEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938CD8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&questDateRangeId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestDateRangeEntity__GetEnumerator__);
  v29 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v9);
  for ( i = Enumerator; ; i = v29 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( (v15 & 1) == 0 )
      break;
    if ( !v29 )
      sub_21FFECC(v15, v16);
    v18 = v29->klass;
    v19 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestDateRangeEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_QuestDateRangeEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_2237E2C(v29, System_Collections_Generic_IEnumerator_QuestDateRangeEntity__TypeInfo, 0);
    }
    v22 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                      v29,
                      *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_21FFECC(0, v23);
    if ( v22[4] == questDateRangeId && (int)v22[6] <= nowTime && (int)v22[7] > nowTime )
      goto LABEL_27;
  }
  v17 = 0;
LABEL_27:
  if ( v29 )
  {
    v24 = v29->klass;
    v25 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_32;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_32:
      v27 = sub_2237E2C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(v29, *(_QWORD *)(v27 + 8));
  }
  return v17 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool QuestDateRangeMaster__TryGetEntity(
        QuestDateRangeMaster_o *this,
        QuestDateRangeEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5938CD6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__);
    byte_5938CD6 = 1;
  }
  PK = (Il2CppObject *)QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__);
}