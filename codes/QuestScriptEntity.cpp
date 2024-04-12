void __fastcall QuestScriptEntity___ctor(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4A7 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE4A7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_Int32_array *__fastcall QuestScriptEntity__BranchScripts(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4A5 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17044/*"branchScripts"*/);
    byte_42AE4A5 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17044/*"branchScripts"*/, 0LL, 0LL);
}


bool __fastcall QuestScriptEntity__CheckScriptRelease(QuestScriptEntity_o *this, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x10
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  const MethodInfo *v26; // x1
  int v27; // w8
  int v28; // w9
  bool result; // w0
  int v30[3]; // [xsp+8h] [xbp-68h]
  int v31; // [xsp+14h] [xbp-5Ch]
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42AE4A0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__get_Current__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
    sub_B52984(&QuestScriptReleaseEntity_TypeInfo);
    byte_42AE4A0 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v31 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_52;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list;
  if ( !list )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_20:
      v18 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v14);
    }
    v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_49;
    v21 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (QuestScriptReleaseEntity_c *)v19->klass->_2.typeHierarchy[v21 - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B52D50(v19);
LABEL_49:
      sub_B52A5C(v19, v20);
    }
    if ( v19->fields.missionTargetId == this->fields.id )
    {
      if ( !v4 )
        sub_B52A5C(v19, QuestScriptReleaseEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v4,
        v19,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    }
  }
  v30[0] = 77;
  v31 = 1;
  v22 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      v24 += 4;
      if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_32:
    v25 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v14);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  v31 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                                                       (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
  if ( ((unsigned __int8)list & 1) == 0 )
    return 1;
  if ( !v4 )
LABEL_52:
    sub_B52A5C(list, v6);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__) )
  {
    if ( !v32.fields.current )
      sub_B52A5C(0LL, v26);
    if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v32.fields.current, v26) )
    {
      v27 = 142;
      goto LABEL_42;
    }
  }
  v27 = 140;
LABEL_42:
  v30[0] = v27;
  ++v31;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
  if ( v31 )
  {
    v28 = v30[v31 - 1];
    if ( v28 == 140 )
    {
      --v31;
    }
    else if ( v28 == 142 )
    {
      result = 0;
      --v31;
      return result;
    }
  }
  return 1;
}


System_String_o *__fastcall QuestScriptEntity__CreatePK(
        int32_t id,
        int32_t folderType,
        int32_t materialFolderId,
        int32_t parentWarId,
        const MethodInfo *method)
{
  if ( (byte_42AE4A6 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
    byte_42AE4A6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           folderType,
           materialFolderId,
           parentWarId,
           (const MethodInfo_1A4E810 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  QuestScriptMaterialOverwriteMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  QuestScriptMaterialOverwriteEntity_o *ConditionClearEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_42AE49F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42AE49F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestScriptMaterialOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v6);
  ConditionClearEntity = QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
                           Master_WarQuestSelectionMaster,
                           questId,
                           v7);
  p_name = &this->fields.name;
  if ( ConditionClearEntity )
    p_name = &ConditionClearEntity->fields.overwriteName;
  return *p_name;
}


int32_t __fastcall QuestScriptEntity__GetMaxPhase(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4A2 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20598/*"maxPhase"*/);
    byte_42AE4A2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20598/*"maxPhase"*/, 0, 0LL);
}


bool __fastcall QuestScriptEntity__IsMaterialLatestClear(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4A1 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20581/*"materialLatestClear"*/);
    byte_42AE4A1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20581/*"materialLatestClear"*/, 0, 0LL) > 0;
}


bool __fastcall QuestScriptEntity__IsNoneMstQuest(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4A3 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21294/*"noneQuest"*/);
    byte_42AE4A3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21294/*"noneQuest"*/, 0, 0LL) > 0;
}


System_String_o *__fastcall QuestScriptEntity__IsQuestStartAction(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4A4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22456/*"startAction"*/);
    byte_42AE4A4 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22456/*"startAction"*/, 0LL, 0LL);
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