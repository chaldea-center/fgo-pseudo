void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C7C8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
    byte_438C7C8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    200,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_o *__fastcall QuestBehaviorMaster__GetEntity(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438C7C6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
    byte_438C7C6 = 1;
  }
  PK = QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&priority);
  return (QuestBehaviorEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_21FBCE4 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__IsOpenQuestBehaviorCond(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t behaviorType,
        const MethodInfo *method)
{
  int32_t v7; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w23
  __int64 v11; // x9
  bool result; // w0
  QuestBoardInformaionText_o *v13; // x0
  System_String_o *v14; // x1
  int64_t v15; // x2
  bool v16; // w3
  bool v17; // w4
  int32_t v18; // w5
  int32_t v19; // w6
  bool v20; // w7
  EventCampaignEntity_o *v21; // [xsp+50h] [xbp+10h]
  TerminalBoardOptionTextData_o *v22; // [xsp+58h] [xbp+18h]
  const MethodInfo *v23; // [xsp+60h] [xbp+20h]
  UnityEngine_Vector3_o v24; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = questId;
  if ( (byte_438C7CF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&QuestBehaviorEntity_TypeInfo);
    byte_438C7CF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B7769C(list, *(_QWORD *)&questId);
  v10 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v10 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v11 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v11 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v7
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].klass) == behaviorType
      && QuestBehaviorEntity__checkConditions(
           (QuestBehaviorEntity_o *)list,
           (const MethodInfo *)QuestBehaviorEntity_TypeInfo) )
    {
      return 1;
    }
    if ( --v10 < 0 )
      return 0;
  }
  v13 = (QuestBoardInformaionText_o *)sub_B77990(list);
  QuestBoardInformaionText___ctor(v13, v14, v15, v16, v17, v25, v18, v19, v24, v20, v21, v22, v23);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__TryGetEntity(
        QuestBehaviorMaster_o *this,
        QuestBehaviorEntity_o **entity,
        int32_t questId,
        int32_t phase,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438C7C7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
    byte_438C7C7 = 1;
  }
  PK = QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestBehaviorMaster__getBattleBg(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v7; // w21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w23
  int syncRoot_high; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x24
  __int64 v13; // x9
  _DWORD *monitor; // x8
  QuestBehaviorMaster_o *v16; // x0
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  v7 = questId;
  if ( (byte_438C7CA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&QuestBehaviorEntity_TypeInfo);
    byte_438C7CA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B7769C(list, *(_QWORD *)&questId);
  v10 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v10 < 0 )
    return defaultValue;
  syncRoot_high = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v12 = list;
    v13 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v7
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].klass) == 3
      && syncRoot_high < SHIDWORD(list->fields._syncRoot)
      && QuestBehaviorEntity__checkConditions(
           (QuestBehaviorEntity_o *)list,
           (const MethodInfo *)QuestBehaviorEntity_TypeInfo) )
    {
      monitor = v12[1].monitor;
      if ( monitor )
      {
        if ( (int)monitor[6] >= 1 )
        {
          syncRoot_high = HIDWORD(v12->fields._syncRoot);
          defaultValue = monitor[8];
        }
      }
    }
    if ( --v10 < 0 )
      return defaultValue;
  }
  v16 = (QuestBehaviorMaster_o *)sub_B77990(list);
  return (unsigned int)QuestBehaviorMaster__getBattleSkill(v16, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestBehaviorMaster__getBattleIndividuality(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  int32_t v7; // w20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w23
  int syncRoot_high; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x24
  __int64 v13; // x9
  QuestBehaviorMaster_o *v15; // x0
  System_Int32_array *v16; // x1
  const MethodInfo *v17; // x2

  v7 = questId;
  if ( (byte_438C7CD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&QuestBehaviorEntity_TypeInfo);
    byte_438C7CD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B7769C(list, *(_QWORD *)&questId);
  v10 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v10 < 0 )
    return defVals;
  syncRoot_high = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v12 = list;
    v13 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v13
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v13 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v7
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].klass) == 4
      && syncRoot_high < SHIDWORD(list->fields._syncRoot)
      && QuestBehaviorEntity__checkConditions(
           (QuestBehaviorEntity_o *)list,
           (const MethodInfo *)QuestBehaviorEntity_TypeInfo) )
    {
      defVals = (System_Int32_array *)v12[1].monitor;
      syncRoot_high = HIDWORD(v12->fields._syncRoot);
      if ( !defVals )
        defVals = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
    }
    if ( --v10 < 0 )
      return defVals;
  }
  v15 = (QuestBehaviorMaster_o *)sub_B77990(list);
  return (System_Int32_array *)QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(v15, v16, v17);
}


QuestBehaviorEntity_array *__fastcall QuestBehaviorMaster__getBattleSkill(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v7; // x22
  QuestBehaviorEntity_c *v8; // x1
  void *list; // x0
  int32_t v10; // w23
  QuestBehaviorEntity_o *v11; // x24
  __int64 v12; // x9
  int32_t priority; // w28
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  QuestBehaviorMaster_o *v16; // x0
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_438C7CB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    sub_B775C4(&QuestBehaviorEntity_TypeInfo);
    byte_438C7CB = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v7,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v10 = (_DWORD)list - 1;
  if ( (int)list - 1 < 0 )
  {
LABEL_19:
    if ( v7 )
    {
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
              v7,
              (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
        return 0LL;
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v7,
                 (const MethodInfo_2FF3F1C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
      return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                            (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    }
LABEL_23:
    sub_B7769C(list, v8);
  }
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v10,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    v8 = QuestBehaviorEntity_TypeInfo;
    v11 = (QuestBehaviorEntity_o *)list;
    v12 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v12
      || *(QuestBehaviorEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v12 - 8) != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( *((_DWORD *)list + 4) == questId && *((_DWORD *)list + 5) == phase && *((_DWORD *)list + 8) == 1 )
    {
      if ( !v7 )
        goto LABEL_23;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v7,
              *((_DWORD *)list + 6),
              (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
        goto LABEL_16;
      priority = v11->fields.priority;
      list = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v7,
               v11->fields.num,
               (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
      if ( !list )
        goto LABEL_23;
      if ( priority >= *((_DWORD *)list + 7) )
      {
LABEL_16:
        list = (void *)QuestBehaviorEntity__checkConditions(v11, (const MethodInfo *)v8);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v7,
            v11->fields.num,
            (const MethodInfo_2FF5B54 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            v7,
            v11->fields.num,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v11,
            (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
        }
      }
    }
    if ( --v10 < 0 )
      goto LABEL_19;
  }
  v16 = (QuestBehaviorMaster_o *)sub_B77990(list);
  return (QuestBehaviorEntity_array *)QuestBehaviorMaster__getEnableContinue(v16, v17, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t v5; // w20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v8; // w22
  __int64 v9; // x9
  QuestBehaviorMaster_o *v11; // x0
  int32_t v12; // w1
  int32_t v13; // w2
  System_Int32_array *v14; // x3
  const MethodInfo *v15; // x4

  v5 = questId;
  if ( (byte_438C7CC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&QuestBehaviorEntity_TypeInfo);
    byte_438C7CC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B7769C(list, *(_QWORD *)&questId);
  v8 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
     - 1;
  if ( v8 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v8,
                                                                                         (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v9 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v5
      && HIDWORD(list->fields.items) == phase
      && LODWORD(list[1].klass) == 2
      && SHIDWORD(list->fields._syncRoot) >= 1
      && QuestBehaviorEntity__checkConditions(
           (QuestBehaviorEntity_o *)list,
           (const MethodInfo *)QuestBehaviorEntity_TypeInfo) )
    {
      return 1;
    }
    if ( --v8 < 0 )
      return 0;
  }
  v11 = (QuestBehaviorMaster_o *)sub_B77990(list);
  return (unsigned __int8)QuestBehaviorMaster__getBattleIndividuality(v11, v12, v13, v14, v15);
}


DataEntityBase_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  if ( (byte_438C7C9 & 1) == 0 )
  {
    sub_B775C4(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
    sub_B775C4(&JsonManager_TypeInfo);
    byte_438C7C9 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                   obj,
                                   (const MethodInfo_1DF16CC *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
}


System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *__fastcall QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(
        QuestBehaviorMaster_o *this,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x21
  QuestBehaviorEntity_c *v6; // x1
  void *list; // x0
  int32_t v8; // w22
  QuestBehaviorEntity_o *v9; // x23
  __int64 v10; // x9
  const MethodInfo_21C41D0 *v11; // x4
  int32_t questId; // w8
  int32_t phase; // w9
  struct System_Int32_array *behaviorValues; // x2
  int64_t v15; // x23
  const MethodInfo_21C41D0 *v16; // x4
  int32_t v17; // w8
  int32_t v18; // w9
  struct System_Int32_array *v19; // x2
  int64_t v20; // x23
  QuestBehaviorMaster_o *v22; // x0
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x4
  System_Collections_Generic_KeyValuePair_int__object__o v27; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o value; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v29; // 0:x0.16
  System_Collections_Generic_KeyValuePair_int__object__o v30; // 0:x0.16

  if ( (byte_438C7CE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B775C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__);
    sub_B775C4(&QuestBehaviorEntity_TypeInfo);
    byte_438C7CE = 1;
  }
  *(_QWORD *)&value.fields.key = 0LL;
  value.fields.value = 0LL;
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B77694(System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo);
  System_Collections_Generic_Dictionary_long__KeyValuePair_int__object_____ctor(
    v5,
    (const MethodInfo_2FA2CCC *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_20:
    sub_B7769C(list, v6);
  v8 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
         (const MethodInfo_2CC5044 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
     - 1;
  if ( v8 < 0 )
    return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v5;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v8,
             (const MethodInfo_2CC50E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v6 = QuestBehaviorEntity_TypeInfo;
    v9 = (QuestBehaviorEntity_o *)list;
    v10 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v10
      || *(QuestBehaviorEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( *((_DWORD *)list + 8) == 4 )
    {
      list = (void *)System_Linq_Enumerable__Contains_int_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)questIds,
                       *((_DWORD *)list + 4),
                       (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v5 )
          goto LABEL_20;
        if ( System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____TryGetValue(
               v5,
               v9->fields.phase + 100 * v9->fields.questId,
               &value,
               (const MethodInfo_2FA5524 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__) )
        {
          if ( value.fields.key < v9->fields.priority
            && QuestBehaviorEntity__checkConditions(v9, (const MethodInfo *)v6) )
          {
            questId = v9->fields.questId;
            phase = v9->fields.phase;
            v29.fields.value = (Il2CppObject *)(unsigned int)v9->fields.priority;
            behaviorValues = v9->fields.behaviorValues;
            v27.fields.value = 0LL;
            *(_QWORD *)&v29.fields.key = &v27;
            v15 = phase + 100 * questId;
            *(_QWORD *)&v27.fields.key = 0LL;
            System_Collections_Generic_KeyValuePair_int__object____ctor(
              v29,
              (int32_t)behaviorValues,
              (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
              v11);
            System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____set_Item(
              v5,
              v15,
              v27,
              (const MethodInfo_2FA385C *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__);
          }
        }
        else if ( QuestBehaviorEntity__checkConditions(v9, (const MethodInfo *)v6) )
        {
          v17 = v9->fields.questId;
          v18 = v9->fields.phase;
          v30.fields.value = (Il2CppObject *)(unsigned int)v9->fields.priority;
          v19 = v9->fields.behaviorValues;
          v27 = (System_Collections_Generic_KeyValuePair_int__object__o)0LL;
          *(_QWORD *)&v30.fields.key = &v27;
          v20 = v18 + 100 * v17;
          System_Collections_Generic_KeyValuePair_int__object____ctor(
            v30,
            (int32_t)v19,
            (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
            v16);
          System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____Add(
            v5,
            v20,
            v27,
            (const MethodInfo_2FA3884 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__);
        }
      }
    }
    if ( --v8 < 0 )
      return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v5;
  }
  v22 = (QuestBehaviorMaster_o *)sub_B77990(list);
  return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                                                                      v22,
                                                                                      v23,
                                                                                      v24,
                                                                                      v25,
                                                                                      v26);
}