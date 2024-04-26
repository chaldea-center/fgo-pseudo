void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_43565E3 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
    byte_43565E3 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    71,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
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
      sub_B7076C(0LL, v5);
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
      sub_B7076C(0LL, v5);
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

  if ( (byte_43565E1 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
    byte_43565E1 = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_21C0890 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
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

  if ( (byte_43565E2 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
    byte_43565E2 = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
}


bool __fastcall QuestPhaseDetailMaster__preProcess(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  unsigned __int64 v11; // x10
  int32_t *v12; // x11
  __int64 v13; // x0
  _QWORD *v14; // x0
  __int64 v15; // x1
  _QWORD *v16; // x20
  __int64 v17; // x9
  _QWORD *v18; // x22
  QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *v19; // x21
  QuestPhaseDetailEntity_BoardInfo_TextInfo_o *v20; // x23
  __int64 v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x21
  __int64 v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v60; // x0
  __int64 v61; // x0

  if ( (byte_43565E4 & 1) == 0 )
  {
    sub_B70694(&QuestPhaseDetailEntity_BoardInfo___TypeInfo);
    sub_B70694(&QuestPhaseDetailEntity_BoardInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
    sub_B70694(&QuestPhaseDetailEntity_TypeInfo);
    sub_B70694(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
    byte_43565E4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7076C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v12 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v11;
        v12 += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12].method;
    }
    else
    {
LABEL_16:
      v13 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                      Enumerator,
                      *(_QWORD *)(v13 + 8));
    v16 = v14;
    if ( !v14 )
      goto LABEL_43;
    v17 = *(&QuestPhaseDetailEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v14 + 300LL) < (unsigned int)v17
      || *(QuestPhaseDetailEntity_c **)(*(_QWORD *)(*v14 + 200LL) + 8 * v17 - 8) != QuestPhaseDetailEntity_TypeInfo )
    {
      sub_B70A60(v14);
LABEL_43:
      sub_B7076C(v14, v15);
    }
    v18 = (_QWORD *)v14[5];
    if ( v18 )
    {
      v19 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)v18[2];
      if ( (v19 || v18[3]) && !v18[4] )
      {
        if ( !v19 )
        {
          v19 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)sub_B70764(QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
          QuestPhaseDetailEntity_BoardInfo_ImageInfo___ctor(v19, 0LL);
        }
        v20 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)v18[3];
        if ( !v20 )
        {
          v20 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)sub_B70764(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
          QuestPhaseDetailEntity_BoardInfo_TextInfo___ctor(v20, 0LL);
        }
        v21 = sub_B70764(QuestPhaseDetailEntity_BoardInfo_TypeInfo);
        QuestPhaseDetailEntity_BoardInfo___ctor((QuestPhaseDetailEntity_BoardInfo_o *)v21, 0LL);
        if ( !v21 )
          sub_B7076C(v22, v23);
        *(_QWORD *)(v21 + 24) = v19;
        sub_B70630((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)v19, v24, v25, v26, v27, v28, v29);
        *(_QWORD *)(v21 + 16) = v20;
        sub_B70630((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)v20, v30, v31, v32, v33, v34, v35);
        v36 = v16[5];
        v37 = sub_B706AC(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL);
        v39 = v37;
        if ( !v37 )
          sub_B7076C(0LL, v38);
        v40 = sub_B70754(v21, *(_QWORD *)(*(_QWORD *)v37 + 64LL));
        if ( !v40 )
        {
          v60 = sub_B7078C(0LL);
          sub_B70738(v60, 0LL);
        }
        if ( !*(_DWORD *)(v39 + 24) )
        {
          v61 = sub_B70798(v40);
          sub_B70738(v61, 0LL);
        }
        *(_QWORD *)(v39 + 32) = v21;
        sub_B70630((BattleServantConfConponent_o *)(v39 + 32), (System_Int32_array **)v21, v41, v42, v43, v44, v45, v46);
        if ( !v36 )
          sub_B7076C(v47, v48);
        *(_QWORD *)(v36 + 32) = v39;
        sub_B70630((BattleServantConfConponent_o *)(v36 + 32), (System_Int32_array **)v39, v49, v50, v51, v52, v53, v54);
      }
    }
  }
  v55 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v56 = 0LL;
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      ++v56;
      v57 += 4;
      if ( v56 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_39:
    v58 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(Enumerator, *(_QWORD *)(v58 + 8));
  return 1;
}