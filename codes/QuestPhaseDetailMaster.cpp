void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B483B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
    byte_42B483B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    71,
    (const MethodInfo_23E268C *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
}


System_String_array *__fastcall QuestPhaseDetailMaster__GetAfterAction(
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

  entity = 0LL;
  v6 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_B52A5C(0LL, v5);
    afterActionVals = entity->fields.afterActionVals;
    if ( afterActionVals )
    {
      if ( (int)afterActionVals->max_length <= 1 )
        return 0LL;
      else
        return entity->fields.afterActionVals;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_array *__fastcall QuestPhaseDetailMaster__GetBeforeAction(
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

  entity = 0LL;
  v6 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_B52A5C(0LL, v5);
    beforeActionVals = entity->fields.beforeActionVals;
    if ( beforeActionVals )
    {
      if ( (int)beforeActionVals->max_length <= 1 )
        return 0LL;
      else
        return entity->fields.beforeActionVals;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseDetailEntity_o *__fastcall QuestPhaseDetailMaster__GetEntity(
        QuestPhaseDetailMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B4839 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
    byte_42B4839 = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23E2728 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseDetailMaster__TryGetEntity(
        QuestPhaseDetailMaster_o *this,
        QuestPhaseDetailEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B483A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
    byte_42B483A = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
}


bool __fastcall QuestPhaseDetailMaster__preProcess(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  _QWORD *v16; // x0
  __int64 v17; // x1
  _QWORD *v18; // x20
  __int64 v19; // x9
  _QWORD *v20; // x22
  QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *v21; // x21
  QuestPhaseDetailEntity_BoardInfo_TextInfo_o *v22; // x23
  __int64 v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x20
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x21
  __int64 v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  unsigned __int64 v58; // x10
  int32_t *v59; // x11
  __int64 v60; // x0
  __int64 v62; // x0
  __int64 v63; // x0

  if ( (byte_42B483C & 1) == 0 )
  {
    sub_B52984(&QuestPhaseDetailEntity_BoardInfo___TypeInfo);
    sub_B52984(&QuestPhaseDetailEntity_BoardInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
    sub_B52984(&QuestPhaseDetailEntity_TypeInfo);
    sub_B52984(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
    byte_42B483C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v16 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                      Enumerator,
                      *(_QWORD *)(v15 + 8));
    v18 = v16;
    if ( !v16 )
      goto LABEL_43;
    v19 = *(&QuestPhaseDetailEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v16 + 300LL) < (unsigned int)v19
      || *(QuestPhaseDetailEntity_c **)(*(_QWORD *)(*v16 + 200LL) + 8 * v19 - 8) != QuestPhaseDetailEntity_TypeInfo )
    {
      sub_B52D50(v16);
LABEL_43:
      sub_B52A5C(v16, v17);
    }
    v20 = (_QWORD *)v16[5];
    if ( v20 )
    {
      v21 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)v20[2];
      if ( (v21 || v20[3]) && !v20[4] )
      {
        if ( !v21 )
        {
          v21 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)sub_B52A54(QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
          QuestPhaseDetailEntity_BoardInfo_ImageInfo___ctor(v21, 0LL);
        }
        v22 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)v20[3];
        if ( !v22 )
        {
          v22 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)sub_B52A54(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
          QuestPhaseDetailEntity_BoardInfo_TextInfo___ctor(v22, 0LL);
        }
        v23 = sub_B52A54(QuestPhaseDetailEntity_BoardInfo_TypeInfo);
        QuestPhaseDetailEntity_BoardInfo___ctor((QuestPhaseDetailEntity_BoardInfo_o *)v23, 0LL);
        if ( !v23 )
          sub_B52A5C(v24, v25);
        *(_QWORD *)(v23 + 24) = v21;
        sub_B52920((BattleServantConfConponent_o *)(v23 + 24), (System_Int32_array **)v21, v26, v27, v28, v29, v30, v31);
        *(_QWORD *)(v23 + 16) = v22;
        sub_B52920((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)v22, v32, v33, v34, v35, v36, v37);
        v38 = v18[5];
        v39 = sub_B5299C(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL);
        v41 = v39;
        if ( !v39 )
          sub_B52A5C(0LL, v40);
        v42 = sub_B52A44(v23, *(_QWORD *)(*(_QWORD *)v39 + 64LL));
        if ( !v42 )
        {
          v62 = sub_B52A7C(0LL);
          sub_B52A28(v62, 0LL);
        }
        if ( !*(_DWORD *)(v41 + 24) )
        {
          v63 = sub_B52A88(v42);
          sub_B52A28(v63, 0LL);
        }
        *(_QWORD *)(v41 + 32) = v23;
        sub_B52920((BattleServantConfConponent_o *)(v41 + 32), (System_Int32_array **)v23, v43, v44, v45, v46, v47, v48);
        if ( !v38 )
          sub_B52A5C(v49, v50);
        *(_QWORD *)(v38 + 32) = v41;
        sub_B52920((BattleServantConfConponent_o *)(v38 + 32), (System_Int32_array **)v41, v51, v52, v53, v54, v55, v56);
      }
    }
  }
  v57 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v58 = 0LL;
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      ++v58;
      v59 += 4;
      if ( v58 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v60 = (__int64)&v57->vtable[*v59].method;
  }
  else
  {
LABEL_39:
    v60 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(Enumerator, *(_QWORD *)(v60 + 8));
  return 1;
}