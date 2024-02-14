void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4213D18 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__, method);
    byte_4213D18 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    70,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
}


System_String_array *__fastcall QuestPhaseDetailMaster__GetAfterAction(
        QuestPhaseDetailMaster_o *this,
        int32_t questId,
        int32_t phaseCnt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  bool v5; // w8
  System_String_array *result; // x0
  struct System_String_array *afterActionVals; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v5 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0LL;
  if ( v5 )
  {
    if ( !entity )
      sub_B0D97C(0LL);
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
  bool v5; // w8
  System_String_array *result; // x0
  struct System_String_array *beforeActionVals; // x8
  QuestPhaseDetailEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  v5 = QuestPhaseDetailMaster__TryGetEntity(this, &entity, questId, phaseCnt, v4);
  result = 0LL;
  if ( v5 )
  {
    if ( !entity )
      sub_B0D97C(0LL);
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

  if ( (byte_4213D16 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4213D16 = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266A024 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
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

  if ( (byte_4213D17 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__, entity);
    byte_4213D17 = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
}


bool __fastcall QuestPhaseDetailMaster__preProcess(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  _QWORD *v21; // x0
  __int64 v22; // x2
  _QWORD *v23; // x20
  QuestPhaseDetailEntity_c *v24; // x1
  __int64 v25; // x9
  _QWORD *v26; // x22
  QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *v27; // x21
  QuestPhaseDetailEntity_BoardInfo_TextInfo_o *v28; // x23
  __int64 v29; // x22
  __int64 v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x20
  __int64 v44; // x0
  __int64 v45; // x21
  __int64 v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  unsigned __int64 v61; // x10
  int32_t *v62; // x11
  __int64 v63; // x0
  __int64 v65; // x0
  __int64 v66; // x0

  if ( (byte_4213D19 & 1) == 0 )
  {
    sub_B0D8A4(&QuestPhaseDetailEntity_BoardInfo___TypeInfo, method);
    sub_B0D8A4(&QuestPhaseDetailEntity_BoardInfo_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B0D8A4(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo, v8);
    sub_B0D8A4(&QuestPhaseDetailEntity_TypeInfo, v9);
    sub_B0D8A4(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo, v10);
    byte_4213D19 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      goto LABEL_43;
    v24 = QuestPhaseDetailEntity_TypeInfo;
    v25 = *(&QuestPhaseDetailEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v21 + 300LL) < (unsigned int)v25
      || *(QuestPhaseDetailEntity_c **)(*(_QWORD *)(*v21 + 200LL) + 8 * v25 - 8) != QuestPhaseDetailEntity_TypeInfo )
    {
      v21 = (_QWORD *)sub_B0DC70(v21);
LABEL_43:
      sub_B0D97C(v21);
    }
    v26 = (_QWORD *)v21[5];
    if ( v26 )
    {
      v27 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)v26[2];
      if ( (v27 || v26[3]) && !v26[4] )
      {
        if ( !v27 )
        {
          v27 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)sub_B0D974(
                                                                  QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo,
                                                                  QuestPhaseDetailEntity_TypeInfo,
                                                                  v22);
          QuestPhaseDetailEntity_BoardInfo_ImageInfo___ctor(v27, 0LL);
        }
        v28 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)v26[3];
        if ( !v28 )
        {
          v28 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)sub_B0D974(
                                                                 QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo,
                                                                 v24,
                                                                 v22);
          QuestPhaseDetailEntity_BoardInfo_TextInfo___ctor(v28, 0LL);
        }
        v29 = sub_B0D974(QuestPhaseDetailEntity_BoardInfo_TypeInfo, v24, v22);
        QuestPhaseDetailEntity_BoardInfo___ctor((QuestPhaseDetailEntity_BoardInfo_o *)v29, 0LL);
        if ( !v29 )
          sub_B0D97C(v30);
        *(_QWORD *)(v29 + 24) = v27;
        sub_B0D840((BattleServantConfConponent_o *)(v29 + 24), (System_Int32_array **)v27, v31, v32, v33, v34, v35, v36);
        *(_QWORD *)(v29 + 16) = v28;
        sub_B0D840((BattleServantConfConponent_o *)(v29 + 16), (System_Int32_array **)v28, v37, v38, v39, v40, v41, v42);
        v43 = v23[5];
        v44 = sub_B0D8BC(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL);
        v45 = v44;
        if ( !v44 )
          sub_B0D97C(0LL);
        v46 = sub_B0D964(v29, *(_QWORD *)(*(_QWORD *)v44 + 64LL));
        if ( !v46 )
        {
          v65 = sub_B0D99C(0LL);
          sub_B0D948(v65, 0LL);
        }
        if ( !*(_DWORD *)(v45 + 24) )
        {
          v66 = sub_B0D9A8(v46);
          sub_B0D948(v66, 0LL);
        }
        *(_QWORD *)(v45 + 32) = v29;
        sub_B0D840((BattleServantConfConponent_o *)(v45 + 32), (System_Int32_array **)v29, v47, v48, v49, v50, v51, v52);
        if ( !v43 )
          sub_B0D97C(v53);
        *(_QWORD *)(v43 + 32) = v45;
        sub_B0D840((BattleServantConfConponent_o *)(v43 + 32), (System_Int32_array **)v45, v54, v55, v56, v57, v58, v59);
      }
    }
  }
  v60 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v61 = 0LL;
    v62 = &v60->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      ++v61;
      v62 += 4;
      if ( v61 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v63 = (__int64)&v60->vtable[*v62].method;
  }
  else
  {
LABEL_39:
    v63 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v63)(Enumerator, *(_QWORD *)(v63 + 8));
  return 1;
}