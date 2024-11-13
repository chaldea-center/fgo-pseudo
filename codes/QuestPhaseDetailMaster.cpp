void __fastcall QuestPhaseDetailMaster___ctor(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B166A8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__, method, v2);
    byte_4B166A8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    72,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string___ctor__);
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
      sub_1BCAA3C(0LL, v5);
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
      sub_1BCAA3C(0LL, v5);
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

  if ( (byte_4B166A6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    byte_4B166A6 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseDetailEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__GetEntity__);
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

  if ( (byte_4B166A7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    byte_4B166A7 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseDetailEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestPhaseDetailMaster__QuestPhaseDetailEntity__string__TryGetEntity__);
}


bool __fastcall QuestPhaseDetailMaster__preProcess(QuestPhaseDetailMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  _QWORD *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  _QWORD *v35; // x20
  QuestPhaseDetailEntity_c *v36; // x1
  __int64 methodPtr_low; // x9
  _QWORD *v38; // x22
  Il2CppObject *v39; // x21
  Il2CppObject *v40; // x23
  int64_t v41; // x22
  __int64 v42; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x20
  __int64 v57; // x0
  __int64 v58; // x1
  int64_t v59; // x21
  __int64 v60; // x0
  __int64 v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x0
  __int64 v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  System_Collections_Generic_IEnumerator_T__c *v76; // x8
  __int64 v77; // x9
  int32_t *v78; // x10
  __int64 v79; // x0
  __int64 v81; // x0

  if ( (byte_4B166A9 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestPhaseDetailEntity_BoardInfo___TypeInfo, method, v2);
    sub_1BCA7E0(&QuestPhaseDetailEntity_BoardInfo_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo, v14, v15);
    sub_1BCA7E0(&QuestPhaseDetailEntity_TypeInfo, v16, v17);
    sub_1BCA7E0(&QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo, v18, v19);
    byte_4B166A9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
                      Enumerator,
                      *(_QWORD *)(v30 + 8));
    v35 = v31;
    if ( !v31 )
      goto LABEL_44;
    v36 = QuestPhaseDetailEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestPhaseDetailEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*v31 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestPhaseDetailEntity_c **)(*(_QWORD *)(*v31 + 200LL) + 8 * methodPtr_low - 8) != QuestPhaseDetailEntity_TypeInfo )
    {
      sub_1BCACFC(v31);
LABEL_44:
      sub_1BCAA3C(v31, v32);
    }
    v38 = (_QWORD *)v31[5];
    if ( v38 )
    {
      v39 = (Il2CppObject *)v38[2];
      if ( v39 )
      {
        if ( !v38[4] )
        {
LABEL_28:
          v40 = (Il2CppObject *)v38[3];
          if ( !v40 )
          {
            v40 = (Il2CppObject *)sub_1BCAA2C(QuestPhaseDetailEntity_BoardInfo_TextInfo_TypeInfo, v36, v33, v34);
            System_Object___ctor(v40, 0LL);
          }
          v41 = sub_1BCAA2C(QuestPhaseDetailEntity_BoardInfo_TypeInfo, v36, v33, v34);
          System_Object___ctor((Il2CppObject *)v41, 0LL);
          if ( !v41 )
            sub_1BCAA3C(v42, v43);
          *(_QWORD *)(v41 + 24) = v39;
          sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 24), (int64_t)v39, v44, v45, v46, v47, v48, v49);
          *(_QWORD *)(v41 + 16) = v40;
          sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), (int64_t)v40, v50, v51, v52, v53, v54, v55);
          v56 = v35[5];
          v57 = sub_1BCA888(QuestPhaseDetailEntity_BoardInfo___TypeInfo, 1LL);
          v59 = v57;
          if ( !v57 )
            sub_1BCAA3C(0LL, v58);
          v60 = sub_1BCA91C(v41, *(_QWORD *)(*(_QWORD *)v57 + 64LL));
          if ( !v60 )
          {
            v81 = sub_1BCAA60(0LL);
            sub_1BCA908(v81, 0LL);
          }
          if ( !*(_DWORD *)(v59 + 24) )
            sub_1BCAA44(v60, v61);
          *(_QWORD *)(v59 + 32) = v41;
          sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 32), v41, v62, v63, v64, v65, v66, v67);
          if ( !v56 )
            sub_1BCAA3C(v68, v69);
          *(_QWORD *)(v56 + 32) = v59;
          sub_1BCA784((PartyOrganizationUtility_o *)(v56 + 32), v59, v70, v71, v72, v73, v74, v75);
        }
      }
      else if ( v38[3] && !v38[4] )
      {
        v39 = (Il2CppObject *)sub_1BCAA2C(
                                QuestPhaseDetailEntity_BoardInfo_ImageInfo_TypeInfo,
                                QuestPhaseDetailEntity_TypeInfo,
                                v33,
                                v34);
        System_Object___ctor(v39, 0LL);
        goto LABEL_28;
      }
    }
  }
  v76 = Enumerator->klass;
  v77 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v78 = &v76->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      --v77;
      v78 += 4;
      if ( !v77 )
        goto LABEL_40;
    }
    v79 = (__int64)&v76->vtable[*v78].method;
  }
  else
  {
LABEL_40:
    v79 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v79)(Enumerator, *(_QWORD *)(v79 + 8));
  return 1;
}