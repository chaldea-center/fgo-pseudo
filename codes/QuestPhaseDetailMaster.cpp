void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED1C4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42ED1C4 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    71,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
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
      sub_B5D69C(0LL, v5);
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
      sub_B5D69C(0LL, v5);
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

  if ( (byte_42ED1C2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__,
      questId,
      phase,
      method);
    byte_42ED1C2 = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                       (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
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

  if ( (byte_42ED1C3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&phase);
    byte_42ED1C3 = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
}


bool __fastcall QuestPhaseDetailMaster__preProcess(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  _QWORD *v42; // x0
  __int64 v43; // x1
  _QWORD *v44; // x20
  __int64 v45; // x9
  _QWORD *v46; // x22
  QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *v47; // x21
  QuestPhaseDetailEntity_BoardInfo_TextInfo_o *v48; // x23
  __int64 v49; // x22
  __int64 v50; // x0
  __int64 v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x20
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x21
  __int64 v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x0
  __int64 v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  unsigned __int64 v84; // x10
  int32_t *v85; // x11
  __int64 v86; // x0
  __int64 v88; // x0
  __int64 v89; // x0

  if ( (byte_42ED1C5 & 1) == 0 )
  {
    sub_B5D5C4(&QuestPhaseDetailEntity_BoardInfo___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestPhaseDetailEntity_BoardInfo_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&QuestPhaseDetailEntity_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo, v26, v27, v28);
    byte_42ED1C5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v30);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v40 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v41 = (__int64)&v38->vtable[*v40].method;
    }
    else
    {
LABEL_16:
      v41 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v37);
    }
    v42 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                      Enumerator,
                      *(_QWORD *)(v41 + 8));
    v44 = v42;
    if ( !v42 )
      goto LABEL_43;
    v45 = *(&QuestPhaseDetailEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v42 + 300LL) < (unsigned int)v45
      || *(QuestPhaseDetailEntity_c **)(*(_QWORD *)(*v42 + 200LL) + 8 * v45 - 8) != QuestPhaseDetailEntity_TypeInfo )
    {
      sub_B5D990(v42);
LABEL_43:
      sub_B5D69C(v42, v43);
    }
    v46 = (_QWORD *)v42[5];
    if ( v46 )
    {
      v47 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)v46[2];
      if ( (v47 || v46[3]) && !v46[4] )
      {
        if ( !v47 )
        {
          v47 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)sub_B5D694(QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
          QuestPhaseDetailEntity_BoardInfo_ImageInfo___ctor(v47, 0LL);
        }
        v48 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)v46[3];
        if ( !v48 )
        {
          v48 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)sub_B5D694(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
          QuestPhaseDetailEntity_BoardInfo_TextInfo___ctor(v48, 0LL);
        }
        v49 = sub_B5D694(QuestPhaseDetailEntity_BoardInfo_TypeInfo);
        QuestPhaseDetailEntity_BoardInfo___ctor((QuestPhaseDetailEntity_BoardInfo_o *)v49, 0LL);
        if ( !v49 )
          sub_B5D69C(v50, v51);
        *(_QWORD *)(v49 + 24) = v47;
        sub_B5D560((BattleServantConfConponent_o *)(v49 + 24), (System_Int32_array **)v47, v52, v53, v54, v55, v56, v57);
        *(_QWORD *)(v49 + 16) = v48;
        sub_B5D560((BattleServantConfConponent_o *)(v49 + 16), (System_Int32_array **)v48, v58, v59, v60, v61, v62, v63);
        v64 = v44[5];
        v65 = sub_B5D5DC(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL);
        v67 = v65;
        if ( !v65 )
          sub_B5D69C(0LL, v66);
        v68 = sub_B5D684(v49, *(_QWORD *)(*(_QWORD *)v65 + 64LL));
        if ( !v68 )
        {
          v88 = sub_B5D6BC(0LL);
          sub_B5D668(v88, 0LL);
        }
        if ( !*(_DWORD *)(v67 + 24) )
        {
          v89 = sub_B5D6C8(v68);
          sub_B5D668(v89, 0LL);
        }
        *(_QWORD *)(v67 + 32) = v49;
        sub_B5D560((BattleServantConfConponent_o *)(v67 + 32), (System_Int32_array **)v49, v69, v70, v71, v72, v73, v74);
        if ( !v64 )
          sub_B5D69C(v75, v76);
        *(_QWORD *)(v64 + 32) = v67;
        sub_B5D560((BattleServantConfConponent_o *)(v64 + 32), (System_Int32_array **)v67, v77, v78, v79, v80, v81, v82);
      }
    }
  }
  v83 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v84 = 0LL;
    v85 = &v83->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      ++v84;
      v85 += 4;
      if ( v84 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v86 = (__int64)&v83->vtable[*v85].method;
  }
  else
  {
LABEL_39:
    v86 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(Enumerator, *(_QWORD *)(v86 + 8));
  return 1;
}