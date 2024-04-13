void __fastcall QuestScriptEntity___ctor(QuestScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F18 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E6F18 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_Int32_array *__fastcall QuestScriptEntity__BranchScripts(QuestScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F16 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17135/*"branchScripts"*/, (_DWORD)method, v2, v3);
    byte_42E6F16 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17135/*"branchScripts"*/, 0LL, 0LL);
}


bool __fastcall QuestScriptEntity__CheckScriptRelease(QuestScriptEntity_o *this, const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v55; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v58; // x3
  System_Collections_Generic_IEnumerator_T__c *v59; // x8
  unsigned __int64 v60; // x10
  int32_t *v61; // x11
  __int64 v62; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v63; // x0
  __int64 v64; // x1
  __int64 v65; // x10
  System_Collections_Generic_IEnumerator_T__c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  const MethodInfo *v70; // x1
  int v71; // w8
  int v72; // w9
  bool result; // w0
  int v74[3]; // [xsp+8h] [xbp-68h]
  int v75; // [xsp+14h] [xbp-5Ch]
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E6F11 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__get_Current__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v38, v39, v40);
    sub_B5D5C4(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v41, v42, v43);
    sub_B5D5C4(&QuestScriptReleaseEntity_TypeInfo, v44, v45, v46);
    byte_42E6F11 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  v75 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_52;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list;
  if ( !list )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v51);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v55 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v55;
        p_offset += 4;
        if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v52);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v59 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v60 = 0LL;
      v61 = &v59->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v61 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v60;
        v61 += 4;
        if ( v60 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v62 = (__int64)&v59->vtable[*v61].method;
    }
    else
    {
LABEL_20:
      v62 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v58);
    }
    v63 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v62)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v62 + 8));
    if ( !v63 )
      goto LABEL_49;
    v65 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v63->klass->_2.bitflags2 + 1) < (unsigned int)v65
      || (QuestScriptReleaseEntity_c *)v63->klass->_2.typeHierarchy[v65 - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      v63 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B5D990(v63);
LABEL_49:
      sub_B5D69C(v63, v64);
    }
    if ( v63->fields.missionTargetId == this->fields.id )
    {
      if ( !v48 )
        sub_B5D69C(v63, QuestScriptReleaseEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v48,
        v63,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    }
  }
  v74[0] = 77;
  v75 = 1;
  v66 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v69 = (__int64)&v66->vtable[*v68].method;
  }
  else
  {
LABEL_32:
    v69 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v58);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v69)(Enumerator, *(_QWORD *)(v69 + 8));
  v75 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                                                                                       (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
  if ( ((unsigned __int8)list & 1) == 0 )
    return 1;
  if ( !v48 )
LABEL_52:
    sub_B5D69C(list, v50);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v76,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v48,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v76,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__) )
  {
    if ( !v76.fields.current )
      sub_B5D69C(0LL, v70);
    if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v76.fields.current, v70) )
    {
      v71 = 142;
      goto LABEL_42;
    }
  }
  v71 = 140;
LABEL_42:
  v74[0] = v71;
  ++v75;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v76,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
  if ( v75 )
  {
    v72 = v74[v75 - 1];
    if ( v72 == 140 )
    {
      --v75;
    }
    else if ( v72 == 142 )
    {
      result = 0;
      --v75;
      return result;
    }
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptEntity__CreatePK(
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  if ( (byte_42E6F17 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int__int___,
      folderType,
      materialFolderId,
      *(_QWORD *)&parentWarId);
    byte_42E6F17 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           folderType,
           materialFolderId,
           parentWarId,
           (const MethodInfo_1AE38D8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
}


System_String_o *__fastcall QuestScriptEntity__CreatePrimaryKey(QuestScriptEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return QuestScriptEntity__CreatePK(
           this->fields.id,
           this->fields.folderType,
           this->fields.materialFolderId,
           this->fields.parentWarId,
           v2);
}


int32_t __fastcall QuestScriptEntity__GetFolderId(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( this->fields.folderType == 1 )
    return this->fields.materialFolderId;
  else
    return -1;
}


System_String_o *__fastcall QuestScriptEntity__GetMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  QuestScriptMaterialOverwriteMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  QuestScriptMaterialOverwriteEntity_o *ConditionClearEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_42E6F10 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42E6F10 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestScriptMaterialOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v10);
  ConditionClearEntity = QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
                           Master_WarQuestSelectionMaster,
                           questId,
                           v11);
  p_name = &this->fields.name;
  if ( ConditionClearEntity )
    p_name = &ConditionClearEntity->fields.overwriteName;
  return *p_name;
}


int32_t __fastcall QuestScriptEntity__GetMaxPhase(QuestScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F13 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20703/*"maxPhase"*/, (_DWORD)method, v2, v3);
    byte_42E6F13 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20703/*"maxPhase"*/, 0, 0LL);
}


bool __fastcall QuestScriptEntity__IsMaterialLatestClear(QuestScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F12 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20686/*"materialLatestClear"*/, (_DWORD)method, v2, v3);
    byte_42E6F12 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20686/*"materialLatestClear"*/, 0, 0LL) > 0;
}


bool __fastcall QuestScriptEntity__IsNoneMstQuest(QuestScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F14 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21400/*"noneQuest"*/, (_DWORD)method, v2, v3);
    byte_42E6F14 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21400/*"noneQuest"*/, 0, 0LL) > 0;
}


System_String_o *__fastcall QuestScriptEntity__IsQuestStartAction(QuestScriptEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F15 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22571/*"startAction"*/, (_DWORD)method, v2, v3);
    byte_42E6F15 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22571/*"startAction"*/, 0LL, 0LL);
}


int32_t __fastcall QuestScriptEntity__getQuestId(QuestScriptEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall QuestScriptEntity__isMateiralRegistWithEventId(
        QuestScriptEntity_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  return this->fields.folderType != 2 || this->fields.materialFolderId == eventId;
}