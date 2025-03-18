void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2244A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__, method);
    byte_4C2244A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    76,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
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
      sub_1C3B9C0(0LL, v5);
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
      sub_1C3B9C0(0LL, v5);
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
  Il2CppObject *PK; // x1

  if ( (byte_4C22448 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4C22448 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_329F900 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseDetailMaster__TryGetEntity(
        QuestPhaseDetailMaster_o *this,
        QuestPhaseDetailEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C22449 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__, entity);
    byte_4C22449 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  _QWORD *v24; // x22
  Il2CppObject *v25; // x21
  Il2CppObject *v26; // x23
  int64_t v27; // x22
  __int64 v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x20
  __int64 v43; // x0
  __int64 v44; // x1
  int64_t v45; // x21
  __int64 v46; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x0
  __int64 v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_IEnumerator_T__c *v62; // x8
  __int64 v63; // x9
  int32_t *v64; // x10
  __int64 v65; // x0
  __int64 v67; // x0

  if ( (byte_4C2244B & 1) == 0 )
  {
    sub_1C3B764(&QuestPhaseDetailEntity_BoardInfo___TypeInfo, method);
    sub_1C3B764(&QuestPhaseDetailEntity_BoardInfo_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailEntity__GetEnumerator__, v4);
    sub_1C3B764(&System_IDisposable_TypeInfo, v5);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo, v6);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1C3B764(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo, v8);
    sub_1C3B764(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo, v9);
    byte_4C2244B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_QuestPhaseDetailEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseDetailEntity__TypeInfo, 0LL);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_1C3B9C0(0LL, v22);
    v24 = *(_QWORD **)(v21 + 40);
    if ( v24 )
    {
      v25 = (Il2CppObject *)v24[2];
      if ( v25 )
      {
        if ( !v24[4] )
        {
LABEL_26:
          v26 = (Il2CppObject *)v24[3];
          if ( !v26 )
          {
            v26 = (Il2CppObject *)sub_1C3B9B0(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo);
            System_Object___ctor(v26, 0LL);
          }
          v27 = sub_1C3B9B0(QuestPhaseDetailEntity_BoardInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v27, 0LL);
          if ( !v27 )
            sub_1C3B9C0(v28, v29);
          *(_QWORD *)(v27 + 24) = v25;
          sub_1C3B708((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)v25, v30, v31, v32, v33, v34, v35);
          *(_QWORD *)(v27 + 16) = v26;
          sub_1C3B708((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)v26, v36, v37, v38, v39, v40, v41);
          v42 = *(_QWORD *)(v23 + 40);
          v43 = sub_1C3B80C(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL);
          v45 = v43;
          if ( !v43 )
            sub_1C3B9C0(0LL, v44);
          v46 = sub_1C3B8A0(v27, *(_QWORD *)(*(_QWORD *)v43 + 64LL));
          if ( !v46 )
          {
            v67 = sub_1C3B9E4(0LL);
            sub_1C3B88C(v67, 0LL);
          }
          if ( !*(_DWORD *)(v45 + 24) )
            sub_1C3B9C8(v46, v47);
          *(_QWORD *)(v45 + 32) = v27;
          sub_1C3B708((PartyOrganizationUtility_o *)(v45 + 32), v27, v48, v49, v50, v51, v52, v53);
          if ( !v42 )
            sub_1C3B9C0(v54, v55);
          *(_QWORD *)(v42 + 32) = v45;
          sub_1C3B708((PartyOrganizationUtility_o *)(v42 + 32), v45, v56, v57, v58, v59, v60, v61);
        }
      }
      else if ( v24[3] && !v24[4] )
      {
        v25 = (Il2CppObject *)sub_1C3B9B0(QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo);
        System_Object___ctor(v25, 0LL);
        goto LABEL_26;
      }
    }
  }
  v62 = Enumerator->klass;
  v63 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v64 = &v62->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_38;
    }
    v65 = (__int64)&v62->vtable[*v64].method;
  }
  else
  {
LABEL_38:
    v65 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v65)(Enumerator, *(_QWORD *)(v65 + 8));
  return 1;
}