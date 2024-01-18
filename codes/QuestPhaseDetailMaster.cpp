void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186EEE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__, method);
    byte_4186EEE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    70,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
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
      sub_B2C434(0LL, v5);
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
      sub_B2C434(0LL, v5);
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

  if ( (byte_4186EEC & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4186EEC = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
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

  if ( (byte_4186EED & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__, entity);
    byte_4186EED = 1;
  }
  PK = QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
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
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  _QWORD *v24; // x0
  __int64 v25; // x1
  _QWORD *v26; // x20
  __int64 v27; // x9
  _QWORD *v28; // x22
  QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *v29; // x21
  QuestPhaseDetailEntity_BoardInfo_TextInfo_o *v30; // x23
  __int64 v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x20
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x21
  __int64 v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  __int64 v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  __int64 v70; // x0
  __int64 v71; // x0

  if ( (byte_4186EEF & 1) == 0 )
  {
    sub_B2C35C(&QuestPhaseDetailEntity_BoardInfo___TypeInfo, method);
    sub_B2C35C(&QuestPhaseDetailEntity_BoardInfo_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_B2C35C(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo, v8);
    sub_B2C35C(&QuestPhaseDetailEntity_TypeInfo, v9);
    sub_B2C35C(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo, v10);
    byte_4186EEF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v13);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v19);
    }
    v24 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                      Enumerator,
                      *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      goto LABEL_43;
    v27 = *(&QuestPhaseDetailEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*v24 + 300LL) < (unsigned int)v27
      || *(QuestPhaseDetailEntity_c **)(*(_QWORD *)(*v24 + 200LL) + 8 * v27 - 8) != QuestPhaseDetailEntity_TypeInfo )
    {
      v24 = (_QWORD *)sub_B2C728(v24);
LABEL_43:
      sub_B2C434(v24, v25);
    }
    v28 = (_QWORD *)v24[5];
    if ( v28 )
    {
      v29 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)v28[2];
      if ( (v29 || v28[3]) && !v28[4] )
      {
        if ( !v29 )
        {
          v29 = (QuestPhaseDetailEntity_BoardInfo_ImageInfo_o *)sub_B2C42C(QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
          QuestPhaseDetailEntity_BoardInfo_ImageInfo___ctor(v29, 0LL);
        }
        v30 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)v28[3];
        if ( !v30 )
        {
          v30 = (QuestPhaseDetailEntity_BoardInfo_TextInfo_o *)sub_B2C42C(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
          QuestPhaseDetailEntity_BoardInfo_TextInfo___ctor(v30, 0LL);
        }
        v31 = sub_B2C42C(QuestPhaseDetailEntity_BoardInfo_TypeInfo);
        QuestPhaseDetailEntity_BoardInfo___ctor((QuestPhaseDetailEntity_BoardInfo_o *)v31, 0LL);
        if ( !v31 )
          sub_B2C434(v32, v33);
        *(_QWORD *)(v31 + 24) = v29;
        sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)v29, v34, v35, v36, v37, v38, v39);
        *(_QWORD *)(v31 + 16) = v30;
        sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)v30, v40, v41, v42, v43, v44, v45);
        v46 = v26[5];
        v47 = sub_B2C374(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL);
        v49 = v47;
        if ( !v47 )
          sub_B2C434(0LL, v48);
        v50 = sub_B2C41C(v31, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
        if ( !v50 )
        {
          v70 = sub_B2C454();
          sub_B2C400(v70, 0LL);
        }
        if ( !*(_DWORD *)(v49 + 24) )
        {
          v71 = sub_B2C460(v50);
          sub_B2C400(v71, 0LL);
        }
        *(_QWORD *)(v49 + 32) = v31;
        sub_B2C2F8((BattleServantConfConponent_o *)(v49 + 32), (System_Int32_array **)v31, v51, v52, v53, v54, v55, v56);
        if ( !v46 )
          sub_B2C434(v57, v58);
        *(_QWORD *)(v46 + 32) = v49;
        sub_B2C2F8((BattleServantConfConponent_o *)(v46 + 32), (System_Int32_array **)v49, v59, v60, v61, v62, v63, v64);
      }
    }
  }
  v65 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v66 = 0LL;
    v67 = &v65->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      ++v66;
      v67 += 4;
      if ( v66 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_39;
    }
    v68 = (__int64)&v65->vtable[*v67].method;
  }
  else
  {
LABEL_39:
    v68 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(Enumerator, *(_QWORD *)(v68 + 8));
  return 1;
}