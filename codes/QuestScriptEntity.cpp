void __fastcall QuestScriptEntity___ctor(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F8237 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F8237 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall QuestScriptEntity__CheckScriptRelease(QuestScriptEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x0
  __int64 v34; // x10
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  unsigned __int64 v36; // x10
  int32_t *v37; // x11
  __int64 v38; // x0
  const MethodInfo *v39; // x1
  int v40; // w8
  int v41; // w9
  bool result; // w0
  int v43[3]; // [xsp+8h] [xbp-68h]
  int v44; // [xsp+14h] [xbp-5Ch]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40F8232 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__get_Current__, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v15);
    sub_B16FFC(&QuestScriptReleaseEntity_TypeInfo, v16);
    byte_40F8232 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_52;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list;
  if ( !list )
    goto LABEL_52;
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
      v26 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v26;
        p_offset += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_20:
      v32 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v32 + 8));
    if ( !v33 )
      goto LABEL_49;
    v34 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v34
      || (QuestScriptReleaseEntity_c *)v33->klass->_2.typeHierarchy[v34 - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      sub_B173C8(v33);
LABEL_49:
      sub_B170D4();
    }
    if ( v33->fields.missionTargetId == this->fields.id )
    {
      if ( !v22 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v22,
        v33,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    }
  }
  v43[0] = 77;
  v44 = 1;
  v35 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      v37 += 4;
      if ( v36 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v38 = (__int64)&v35->vtable[*v37].method;
  }
  else
  {
LABEL_32:
    v38 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  v44 = 0;
  if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___) )
    return 1;
  if ( !v22 )
LABEL_52:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v22,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__) )
  {
    if ( !v45.fields.current )
      sub_B170D4();
    if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v45.fields.current, v39) )
    {
      v40 = 142;
      goto LABEL_42;
    }
  }
  v40 = 140;
LABEL_42:
  v43[0] = v40;
  ++v44;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
  if ( v44 )
  {
    v41 = v43[v44 - 1];
    if ( v41 == 140 )
    {
      --v44;
    }
    else if ( v41 == 142 )
    {
      result = 0;
      --v44;
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
  if ( (byte_40F8236 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&folderType);
    byte_40F8236 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           folderType,
           materialFolderId,
           parentWarId,
           (const MethodInfo_18C2910 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestScriptEntity__GetMaterialName(
        QuestScriptEntity_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  QuestScriptMaterialOverwriteMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x2
  QuestScriptMaterialOverwriteEntity_o *ConditionClearEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_40F8231 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40F8231 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestScriptMaterialOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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
  if ( (byte_40F8234 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20360/*"maxPhase"*/, method);
    byte_40F8234 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20360/*"maxPhase"*/, 0, 0LL);
}


bool __fastcall QuestScriptEntity__IsMaterialLatestClear(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F8233 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20343/*"materialLatestClear"*/, method);
    byte_40F8233 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20343/*"materialLatestClear"*/, 0, 0LL) > 0;
}


bool __fastcall QuestScriptEntity__IsNoneMstQuest(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F8235 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21034/*"noneQuest"*/, method);
    byte_40F8235 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21034/*"noneQuest"*/, 0, 0LL) > 0;
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