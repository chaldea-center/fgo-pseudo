void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F95FC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__, method);
    byte_40F95FC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    70,
    (const MethodInfo_266F73C *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
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
      sub_B170D4();
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
      sub_B170D4();
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

  if ( (byte_40F95FA & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_40F95FA = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
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

  if ( (byte_40F95FB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__, entity);
    byte_40F95FB = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
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
  __int64 v23; // x3
  __int64 v24; // x4
  _QWORD *v25; // x20
  QuestPhaseDetailEntity_c *v26; // x1
  __int64 v27; // x9
  _QWORD *v28; // x22
  QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *v29; // x21
  QuestPhaseDetailEntity_BoardInfo_TextInfo_o *v30; // x23
  __int64 v31; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x20
  __int64 v45; // x2
  __int64 v46; // x0
  __int64 v47; // x21
  __int64 v48; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  unsigned __int64 v63; // x10
  int32_t *v64; // x11
  __int64 v65; // x0

  if ( (byte_40F95FD & 1) == 0 )
  {
    sub_B16FFC(&QuestPhaseDetailEntity_BoardInfo___TypeInfo, method);
    sub_B16FFC(&QuestPhaseDetailEntity_BoardInfo_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B16FFC(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo, v8);
    sub_B16FFC(&QuestPhaseDetailEntity_TypeInfo, v9);
    sub_B16FFC(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo, v10);
    byte_40F95FD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v20 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                      Enumerator,
                      *(_QWORD *)(v20 + 8));
    v25 = v21;
    if ( !v21 )
      goto LABEL_43;
    v26 = QuestPhaseDetailEntity_TypeInfo;
    v27 = *(&QuestPhaseDetailEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v21 + 300LL) < (unsigned int)v27
      || *(QuestPhaseDetailEntity_c **)(*(_QWORD *)(*v21 + 200LL) + 8 * v27 - 8) != QuestPhaseDetailEntity_TypeInfo )
    {
      sub_B173C8(v21);
LABEL_43:
      sub_B170D4();
    }
    v28 = (_QWORD *)v21[5];
    if ( v28 )
    {
      v29 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)v28[2];
      if ( (v29 || v28[3]) && !v28[4] )
      {
        if ( !v29 )
        {
          v29 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)sub_B170CC(
                                                                  QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo,
                                                                  QuestPhaseDetailEntity_TypeInfo,
                                                                  v22,
                                                                  v23,
                                                                  v24);
          QuestPhaseDetailEntity_BoardInfo_ImageInfo___ctor(v29, 0LL);
        }
        v30 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)v28[3];
        if ( !v30 )
        {
          v30 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)sub_B170CC(
                                                                 QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo,
                                                                 v26,
                                                                 v22,
                                                                 v23,
                                                                 v24);
          QuestPhaseDetailEntity_BoardInfo_TextInfo___ctor(v30, 0LL);
        }
        v31 = sub_B170CC(QuestPhaseDetailEntity_BoardInfo_TypeInfo, v26, v22, v23, v24);
        QuestPhaseDetailEntity_BoardInfo___ctor((QuestPhaseDetailEntity_BoardInfo_o *)v31, 0LL);
        if ( !v31 )
          sub_B170D4();
        *(_QWORD *)(v31 + 24) = v29;
        sub_B16F98((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)v29, v32, v33, v34, v35, v36, v37);
        *(_QWORD *)(v31 + 16) = v30;
        sub_B16F98((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)v30, v38, v39, v40, v41, v42, v43);
        v44 = v25[5];
        v46 = sub_B17014(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL, v45);
        v47 = v46;
        if ( !v46 )
          sub_B170D4();
        v48 = sub_B170BC(v31, *(_QWORD *)(*(_QWORD *)v46 + 64LL));
        if ( !v48 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        if ( !*(_DWORD *)(v47 + 24) )
        {
          sub_B17100(v48, v49, v50);
          sub_B170A0();
        }
        *(_QWORD *)(v47 + 32) = v31;
        sub_B16F98((BattleServantConfConponent_o *)(v47 + 32), (System_Int32_array **)v31, v50, v51, v52, v53, v54, v55);
        if ( !v44 )
          sub_B170D4();
        *(_QWORD *)(v44 + 32) = v47;
        sub_B16F98((BattleServantConfConponent_o *)(v44 + 32), (System_Int32_array **)v47, v56, v57, v58, v59, v60, v61);
      }
    }
  }
  v62 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v63 = 0LL;
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      ++v63;
      v64 += 4;
      if ( v63 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_39:
    v65 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(Enumerator, *(_QWORD *)(v65 + 8));
  return 1;
}