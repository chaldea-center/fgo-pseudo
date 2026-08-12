void QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970EFF & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
    byte_5970EFF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    76,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
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
  struct System_String_array *afterActionVals; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  v6 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0;
  if ( v6 )
  {
    if ( !entity )
      sub_2213CDC(0, v5);
    afterActionVals = entity->fields.afterActionVals;
    if ( afterActionVals )
    {
      if ( SLODWORD(afterActionVals->max_length) <= 1 )
        return 0;
      else
        return entity->fields.afterActionVals;
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
  struct System_String_array *beforeActionVals; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  v6 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0;
  if ( v6 )
  {
    if ( !entity )
      sub_2213CDC(0, v5);
    beforeActionVals = entity->fields.beforeActionVals;
    if ( beforeActionVals )
    {
      if ( SLODWORD(beforeActionVals->max_length) <= 1 )
        return 0;
      else
        return entity->fields.beforeActionVals;
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

  if ( (byte_5970EFD & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
    byte_5970EFD = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_3F157EC *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
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

  if ( (byte_5970EFE & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
    byte_5970EFE = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
}


bool QuestPhaseDetailMaster__preProcess(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int *v12; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__o *v14; // x19
  _QWORD *monitor; // x21
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x22
  __int64 v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  char *v33; // x19
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v56; // x0
  System_Collections_Generic_IEnumerator_T__o *v57; // [xsp+18h] [xbp-68h]

  if ( (byte_5970F00 & 1) == 0 )
  {
    sub_2213A60(&QuestPhaseDetailEntity_BoardInfo___TypeInfo);
    sub_2213A60(&QuestPhaseDetailEntity_BoardInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
    sub_2213A60(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
    byte_5970F00 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailEntity__GetEnumerator__);
  v57 = Enumerator;
  while ( 1 )
  {
    if ( !v57 )
      sub_2213CDC(Enumerator, v5);
    klass = v57->klass;
    v7 = *(unsigned __int16 *)&v57->klass->_2.rank;
    if ( *(_WORD *)&v57->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_224BC3C(v57, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            v57,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = v57->klass;
    v11 = *(unsigned __int16 *)&v57->klass->_2.rank;
    if ( *(_WORD *)&v57->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_17:
      v13 = sub_224BC3C(v57, System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                                                                  v57,
                                                                  *(_QWORD *)(v13 + 8));
    v14 = Enumerator;
    if ( !Enumerator )
      sub_2213CDC(0, v5);
    monitor = Enumerator[2].monitor;
    if ( monitor )
    {
      v16 = (Il2CppObject *)monitor[2];
      if ( v16 )
      {
        if ( !monitor[4] )
        {
LABEL_27:
          v17 = (Il2CppObject *)monitor[3];
          if ( !v17 )
          {
            v17 = (Il2CppObject *)sub_2213CCC(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
            System_Object___ctor(v17, 0);
          }
          v18 = sub_2213CCC(QuestPhaseDetailEntity_BoardInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v18, 0);
          if ( !v18 )
            sub_2213CDC(v19, v20);
          *(_QWORD *)(v18 + 24) = v16;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 24), (int32_t)v16, v21, v22, v23, v24, v25, v26);
          *(_QWORD *)(v18 + 16) = v17;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 16), (int32_t)v17, v27, v28, v29, v30, v31, v32);
          v33 = (char *)v14[2].monitor;
          v34 = sub_2213B20(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1);
          v36 = v34;
          if ( !v34 )
            goto LABEL_44;
          v37 = sub_2213BB4(v18, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
          if ( !v37 )
          {
            v56 = sub_2213D00(0, v38);
            sub_2213BA0(v56, 0);
          }
          if ( !*(_DWORD *)(v36 + 24) )
            sub_2213CE4(v37);
          *(_QWORD *)(v36 + 32) = v18;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 32), v18, v39, v40, v41, v42, v43, v44);
          if ( !v33 )
LABEL_44:
            sub_2213CDC(v34, v35);
          *((_QWORD *)v33 + 4) = v36;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 32), v36, v45, v46, v47, v48, v49, v50);
        }
      }
      else if ( monitor[3] && !monitor[4] )
      {
        v16 = (Il2CppObject *)sub_2213CCC(QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
        System_Object___ctor(v16, 0);
        goto LABEL_27;
      }
    }
  }
  v51 = v57->klass;
  v52 = *(unsigned __int16 *)&v57->klass->_2.rank;
  if ( *(_WORD *)&v57->klass->_2.rank )
  {
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_39;
    }
    v54 = (__int64)&v51->vtable[*v53];
  }
  else
  {
LABEL_39:
    v54 = sub_224BC3C(v57, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(v57, *(_QWORD *)(v54 + 8));
  return 1;
}