void QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C43610 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
    byte_4C43610 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    76,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
}


System_String_array *QuestPhaseDetailMaster__GetAfterAction(
        QuestPhaseDetailMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  bool v5; // w8
  System_String_array *result; // x0
  __int64 v7; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  v5 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0;
  if ( v5 )
  {
    if ( !entity )
      sub_1C372B4(0);
    v7 = *(_QWORD *)((char *)&dword_40 + (_QWORD)entity);
    if ( v7 )
    {
      if ( *(int *)(v7 + 24) <= 1 )
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
  bool v5; // w8
  System_String_array *result; // x0
  __int64 v7; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  v5 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0;
  if ( v5 )
  {
    if ( !entity )
      sub_1C372B4(0);
    v7 = *(_QWORD *)((char *)&word_38 + (_QWORD)entity);
    if ( v7 )
    {
      if ( *(int *)(v7 + 24) <= 1 )
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

  if ( (byte_4C4360E & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
    byte_4C4360E = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_33A5B58 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
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

  if ( (byte_4C4360F & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
    byte_4C4360F = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
}


bool QuestPhaseDetailMaster__preProcess(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x20
  _QWORD *v15; // x22
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x23
  __int64 v18; // x22
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x20
  __int64 v25; // x0
  __int64 v26; // x21
  __int64 v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  __int64 v38; // x0

  if ( (byte_4C43611 & 1) == 0 )
  {
    sub_1C37058(&QuestPhaseDetailEntity_BoardInfo___TypeInfo);
    sub_1C37058(&QuestPhaseDetailEntity_BoardInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailEntity__GetEnumerator__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
    sub_1C37058(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
    byte_4C43611 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_9;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v8 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v8)(
            Enumerator,
            *(_QWORD *)(v8 + 8))
        & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__c **)v11 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_16;
      }
      v12 = (__int64)&v9->vtable[*v11];
    }
    else
    {
LABEL_16:
      v12 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8));
    v14 = v13;
    if ( !v13 )
      sub_1C372B4(0);
    v15 = *(_QWORD **)(v13 + 40);
    if ( v15 )
    {
      v16 = (Il2CppObject *)v15[2];
      if ( v16 )
      {
        if ( !v15[4] )
        {
LABEL_26:
          v17 = (Il2CppObject *)v15[3];
          if ( !v17 )
          {
            v17 = (Il2CppObject *)sub_1C372A4(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
            System_Object___ctor(v17, 0);
          }
          v18 = sub_1C372A4(QuestPhaseDetailEntity_BoardInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v18, 0);
          if ( !v18 )
            sub_1C372B4(v19);
          *(_QWORD *)(v18 + 24) = v16;
          sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 24), (int32_t)v16, v20, v21);
          *(_QWORD *)(v18 + 16) = v17;
          sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 16), (int32_t)v17, v22, v23);
          v24 = *(_QWORD *)(v14 + 40);
          v25 = sub_1C37100(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1);
          v26 = v25;
          if ( !v25 )
            sub_1C372B4(0);
          v27 = sub_1C37194(v18, *(_QWORD *)(*(_QWORD *)v25 + 64LL));
          if ( !v27 )
          {
            v38 = sub_1C372D8(0);
            sub_1C37180(v38, 0);
          }
          if ( !*(_DWORD *)(v26 + 24) )
            sub_1C372BC(v27);
          *(_QWORD *)(v26 + 32) = v18;
          sub_1C36FFC((CGThumbnailListItem_o *)(v26 + 32), v18, v28, v29);
          if ( !v24 )
            sub_1C372B4(v30);
          *(_QWORD *)(v24 + 32) = v26;
          sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 32), v26, v31, v32);
        }
      }
      else if ( v15[3] && !v15[4] )
      {
        v16 = (Il2CppObject *)sub_1C372A4(QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
        System_Object___ctor(v16, 0);
        goto LABEL_26;
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
        goto LABEL_38;
    }
    v36 = (__int64)&v33->vtable[*v35];
  }
  else
  {
LABEL_38:
    v36 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  return 1;
}