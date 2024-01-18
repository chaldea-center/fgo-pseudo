void __fastcall QuestScriptEntity___ctor(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418608B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418608B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x10
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0
  const MethodInfo *v40; // x1
  int v41; // w8
  int v42; // w9
  bool result; // w0
  int v44[3]; // [xsp+8h] [xbp-68h]
  int v45; // [xsp+14h] [xbp-5Ch]
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4186086 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestScriptReleaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__get_Current__, v8);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo, v15);
    sub_B2C35C(&QuestScriptReleaseEntity_TypeInfo, v16);
    byte_4186086 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v45 = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestScriptReleaseMaster___);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_QuestScriptReleaseEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity___ctor__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_52;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Master_WarQuestSelectionMaster->fields.list;
  if ( !list )
    goto LABEL_52;
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        p_offset += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_13;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_13:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
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
      v32 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v28);
    }
    v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v32 + 8));
    if ( !v33 )
      goto LABEL_49;
    v35 = *(&QuestScriptReleaseEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v33->klass->_2.bitflags2 + 1) < (unsigned int)v35
      || (QuestScriptReleaseEntity_c *)v33->klass->_2.typeHierarchy[v35 - 1] != QuestScriptReleaseEntity_TypeInfo )
    {
      v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)sub_B2C728(v33);
LABEL_49:
      sub_B2C434(v33, v34);
    }
    if ( v33->fields.missionTargetId == this->fields.id )
    {
      if ( !v18 )
        sub_B2C434(v33, QuestScriptReleaseEntity_TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v18,
        v33,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__Add__);
    }
  }
  v44[0] = 77;
  v45 = 1;
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_32:
    v39 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  v45 = 0;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                                                       (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_QuestScriptReleaseEntity___);
  if ( ((unsigned __int8)list & 1) == 0 )
    return 1;
  if ( !v18 )
LABEL_52:
    sub_B2C434(list, v20);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v46,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestScriptReleaseEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__MoveNext__) )
  {
    if ( !v46.fields.current )
      sub_B2C434(0LL, v40);
    if ( !QuestScriptReleaseEntity__IsOpen((QuestScriptReleaseEntity_o *)v46.fields.current, v40) )
    {
      v41 = 142;
      goto LABEL_42;
    }
  }
  v41 = 140;
LABEL_42:
  v44[0] = v41;
  ++v45;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestScriptReleaseEntity__Dispose__);
  if ( v45 )
  {
    v42 = v44[v45 - 1];
    if ( v42 == 140 )
    {
      --v45;
    }
    else if ( v42 == 142 )
    {
      result = 0;
      --v45;
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
  if ( (byte_418608A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int__int___, *(_QWORD *)&folderType);
    byte_418608A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__int_(
           id,
           folderType,
           materialFolderId,
           parentWarId,
           (const MethodInfo_1733078 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__int___);
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
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  QuestScriptMaterialOverwriteEntity_o *ConditionClearEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4186085 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    byte_4186085 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestScriptMaterialOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestScriptMaterialOverwriteMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v7);
  ConditionClearEntity = QuestScriptMaterialOverwriteMaster__GetConditionClearEntity(
                           Master_WarQuestSelectionMaster,
                           questId,
                           v8);
  p_name = &this->fields.name;
  if ( ConditionClearEntity )
    p_name = &ConditionClearEntity->fields.overwriteName;
  return *p_name;
}


int32_t __fastcall QuestScriptEntity__GetMaxPhase(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186088 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20443/*"maxPhase"*/, method);
    byte_4186088 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20443/*"maxPhase"*/, 0, 0LL);
}


bool __fastcall QuestScriptEntity__IsMaterialLatestClear(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186087 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20426/*"materialLatestClear"*/, method);
    byte_4186087 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20426/*"materialLatestClear"*/, 0, 0LL) > 0;
}


bool __fastcall QuestScriptEntity__IsNoneMstQuest(QuestScriptEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186089 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21122/*"noneQuest"*/, method);
    byte_4186089 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21122/*"noneQuest"*/, 0, 0LL) > 0;
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