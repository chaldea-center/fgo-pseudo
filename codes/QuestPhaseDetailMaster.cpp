void QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB692E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
    byte_4CB692E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    76,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
}


System_String_array *QuestPhaseDetailMaster__GetAfterAction(
        QuestPhaseDetailMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v5; // x1
  bool v6; // w8
  System_String_array *result; // x0
  __int64 v8; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  v6 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0;
  if ( v6 )
  {
    if ( !entity )
      sub_1C6BC60(0, v5);
    v8 = *(_QWORD *)((char *)&dword_40 + (_QWORD)entity);
    if ( v8 )
    {
      if ( *(int *)(v8 + 24) <= 1 )
        return 0;
      else
        return *(System_String_array **)((char *)&dword_40 + (_QWORD)entity);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_String_array *QuestPhaseDetailMaster__GetBeforeAction(
        QuestPhaseDetailMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v5; // x1
  bool v6; // w8
  System_String_array *result; // x0
  __int64 v8; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  v6 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0;
  if ( v6 )
  {
    if ( !entity )
      sub_1C6BC60(0, v5);
    v8 = *(_QWORD *)((char *)&word_38 + (_QWORD)entity);
    if ( v8 )
    {
      if ( *(int *)(v8 + 24) <= 1 )
        return 0;
      else
        return *(System_String_array **)((char *)&word_38 + (_QWORD)entity);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailEntity_o *QuestPhaseDetailMaster__GetEntity(
        QuestPhaseDetailMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB692C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
    byte_4CB692C = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_33FDB94 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool QuestPhaseDetailMaster__TryGetEntity(
        QuestPhaseDetailMaster_o *this,
        QuestPhaseDetailEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CB692D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
    byte_4CB692D = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
}


bool QuestPhaseDetailMaster__preProcess(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x20
  _QWORD *v17; // x22
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x23
  __int64 v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x21
  __int64 v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v43; // x0

  if ( (byte_4CB692F & 1) == 0 )
  {
    sub_1C6BA08(&QuestPhaseDetailEntity_BoardInfo___TypeInfo);
    sub_1C6BA08(&QuestPhaseDetailEntity_BoardInfo_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailEntity__GetEnumerator__);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
    sub_1C6BA08(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
    byte_4CB692F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_16:
      v13 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    v16 = v14;
    if ( !v14 )
      sub_1C6BC60(0, v15);
    v17 = *(_QWORD **)(v14 + 40);
    if ( v17 )
    {
      v18 = (Il2CppObject *)v17[2];
      if ( v18 )
      {
        if ( !v17[4] )
        {
LABEL_26:
          v19 = (Il2CppObject *)v17[3];
          if ( !v19 )
          {
            v19 = (Il2CppObject *)sub_1C6BC54(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
            System_Object___ctor(v19, 0);
          }
          v20 = sub_1C6BC54(QuestPhaseDetailEntity_BoardInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v20, 0);
          if ( !v20 )
            sub_1C6BC60(v21, v22);
          *(_QWORD *)(v20 + 24) = v18;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 24), (int32_t)v18, v23, v24);
          *(_QWORD *)(v20 + 16) = v19;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v20 + 16), (int32_t)v19, v25, v26);
          v27 = *(_QWORD *)(v16 + 40);
          v28 = sub_1C6BAB0(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1);
          v30 = v28;
          if ( !v28 )
            sub_1C6BC60(0, v29);
          v31 = sub_1C6BB44(v20, *(_QWORD *)(*(_QWORD *)v28 + 64LL));
          if ( !v31 )
          {
            v43 = sub_1C6BC84(0);
            sub_1C6BB30(v43, 0);
          }
          if ( !*(_DWORD *)(v30 + 24) )
            sub_1C6BC68(v31);
          *(_QWORD *)(v30 + 32) = v20;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 32), v20, v32, v33);
          if ( !v27 )
            sub_1C6BC60(v34, v35);
          *(_QWORD *)(v27 + 32) = v30;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v27 + 32), v30, v36, v37);
        }
      }
      else if ( v17[3] && !v17[4] )
      {
        v18 = (Il2CppObject *)sub_1C6BC54(QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
        System_Object___ctor(v18, 0);
        goto LABEL_26;
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_38;
    }
    v41 = (__int64)&v38->vtable[*v40];
  }
  else
  {
LABEL_38:
    v41 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
  return 1;
}