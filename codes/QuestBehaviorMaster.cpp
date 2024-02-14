void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4216CB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__, method);
    byte_4216CB1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    199,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
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

  if ( (byte_4216CAF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4216CAF = 1;
  }
  PK = QuestBehaviorEntity__CreatePK(questId, phase, num, priority, 0LL);
  return (QuestBehaviorEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266A024 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__IsOpenQuestBehaviorCond(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t behaviorType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v12; // w23
  QuestBehaviorEntity_o *v13; // x24
  __int64 v14; // x9
  bool result; // w0
  QuestBoardInformaionText_o *v16; // x0
  System_String_o *v17; // x1
  int64_t v18; // x2
  bool v19; // w3
  bool v20; // w4
  int32_t v21; // w5
  int32_t v22; // w6
  bool v23; // w7
  UnityEngine_Color_o v24; // q0 OVERLAPPED
  EventCampaignEntity_o *v25; // [xsp+50h] [xbp+10h]
  TerminalBoardOptionTextData_o *v26; // [xsp+58h] [xbp+18h]
  const MethodInfo *v27; // [xsp+60h] [xbp+20h]
  UnityEngine_Vector3_o v28; // 0:s4.4,4:s5.4,8:s6.4

  if ( (byte_4216CB8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B0D8A4(&QuestBehaviorEntity_TypeInfo, v10);
    byte_4216CB8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B0D97C(list);
  v12 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v12 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v12,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    v13 = (QuestBehaviorEntity_o *)list;
    v14 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == questId
      && HIDWORD(list->fields.items) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)list, behaviorType, 0LL)
      && QuestBehaviorEntity__checkConditions(v13, 0LL) )
    {
      return 1;
    }
    if ( --v12 < 0 )
      return 0;
  }
  *(long double *)&v24 = sub_B0DC70(list);
  QuestBoardInformaionText___ctor(v16, v17, v18, v19, v20, v24, v21, v22, v28, v23, v25, v26, v27);
  return result;
}


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

  if ( (byte_4216CB0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__, entity);
    byte_4216CB0 = 1;
  }
  PK = QuestBehaviorEntity__CreatePK(questId, phase, num, priority, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestBehaviorMaster__getBattleBg(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v12; // w23
  int32_t priority; // w25
  QuestBehaviorEntity_o *v14; // x24
  __int64 v15; // x9
  struct System_Int32_array *behaviorValues; // x8
  QuestBehaviorMaster_o *v18; // x0
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4216CB3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B0D8A4(&QuestBehaviorEntity_TypeInfo, v10);
    byte_4216CB3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B0D97C(list);
  v12 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v12 < 0 )
    return defaultValue;
  priority = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v12,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v14 = (QuestBehaviorEntity_o *)list;
    v15 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == questId
      && HIDWORD(list->fields.items) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)list, 3, 0LL)
      && priority < v14->fields.priority
      && QuestBehaviorEntity__checkConditions(v14, 0LL) )
    {
      behaviorValues = v14->fields.behaviorValues;
      if ( behaviorValues )
      {
        if ( (int)behaviorValues->max_length >= 1 )
        {
          priority = v14->fields.priority;
          defaultValue = behaviorValues->m_Items[1];
        }
      }
    }
    if ( --v12 < 0 )
      return defaultValue;
  }
  sub_B0DC70(list);
  return (unsigned int)QuestBehaviorMaster__getBattleSkill(v18, v19, v20, v21);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestBehaviorMaster__getBattleIndividuality(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w23
  int32_t priority; // w26
  QuestBehaviorEntity_o *v15; // x24
  __int64 v16; // x9
  QuestBehaviorMaster_o *v18; // x0
  System_Int32_array *v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4216CB6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B0D8A4(&int___TypeInfo, v10);
    sub_B0D8A4(&QuestBehaviorEntity_TypeInfo, v11);
    byte_4216CB6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B0D97C(list);
  v13 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v13 < 0 )
    return defVals;
  priority = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v13,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    v15 = (QuestBehaviorEntity_o *)list;
    v16 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == questId
      && HIDWORD(list->fields.items) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)list, 4, 0LL)
      && priority < v15->fields.priority
      && QuestBehaviorEntity__checkConditions(v15, 0LL) )
    {
      defVals = v15->fields.behaviorValues;
      priority = v15->fields.priority;
      if ( !defVals )
        defVals = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
    }
    if ( --v13 < 0 )
      return defVals;
  }
  sub_B0DC70(list);
  return (System_Int32_array *)QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(v18, v19, v20);
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_array *__fastcall QuestBehaviorMaster__getBattleSkill(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v18; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v20; // w23
  QuestBehaviorEntity_o *v21; // x24
  __int64 v22; // x9
  int32_t priority; // w28
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  QuestBehaviorMaster_o *v26; // x0
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4216CB4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__, v14);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo, v15);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v16);
    sub_B0D8A4(&QuestBehaviorEntity_TypeInfo, v17);
    byte_4216CB4 = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo,
                                                                                                   *(_QWORD *)&questId,
                                                                                                   *(_QWORD *)&phase);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v18,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (_DWORD)list - 1;
  if ( (int)list - 1 < 0 )
  {
LABEL_19:
    if ( v18 )
    {
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
              v18,
              (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
        return 0LL;
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v18,
                 (const MethodInfo_2E901CC *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
      return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                            (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    }
LABEL_23:
    sub_B0D97C(list);
  }
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v20,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    v21 = (QuestBehaviorEntity_o *)list;
    v22 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v22 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == questId && HIDWORD(list->fields.items) == phase )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)QuestBehaviorEntity__checkBehaviorType(
                                                                                           (QuestBehaviorEntity_o *)list,
                                                                                           1,
                                                                                           0LL);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v18 )
          goto LABEL_23;
        if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v18,
                v21->fields.num,
                (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
          goto LABEL_16;
        priority = v21->fields.priority;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                             v18,
                                                                                             v21->fields.num,
                                                                                             (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
        if ( !list )
          goto LABEL_23;
        if ( priority >= SHIDWORD(list->fields._syncRoot) )
        {
LABEL_16:
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)QuestBehaviorEntity__checkConditions(
                                                                                               v21,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v18,
              v21->fields.num,
              (const MethodInfo_2E91E04 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v18,
              v21->fields.num,
              (WarBoardEvalValueSquare_EvalValueSquare_o *)v21,
              (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
          }
        }
      }
    }
    if ( --v20 < 0 )
      goto LABEL_19;
  }
  sub_B0DC70(list);
  return (QuestBehaviorEntity_array *)QuestBehaviorMaster__getEnableContinue(v26, v27, v28, v29);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v10; // w22
  QuestBehaviorEntity_o *v11; // x23
  __int64 v12; // x9
  QuestBehaviorMaster_o *v14; // x0
  int32_t v15; // w1
  int32_t v16; // w2
  System_Int32_array *v17; // x3
  const MethodInfo *v18; // x4

  if ( (byte_4216CB5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B0D8A4(&QuestBehaviorEntity_TypeInfo, v8);
    byte_4216CB5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B0D97C(list);
  v10 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v10 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    v11 = (QuestBehaviorEntity_o *)list;
    v12 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == questId
      && HIDWORD(list->fields.items) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)list, 2, 0LL)
      && v11->fields.priority >= 1
      && QuestBehaviorEntity__checkConditions(v11, 0LL) )
    {
      return 1;
    }
    if ( --v10 < 0 )
      return 0;
  }
  sub_B0DC70(list);
  return (unsigned __int8)QuestBehaviorMaster__getBattleIndividuality(v14, v15, v16, v17, v18);
}


DataEntityBase_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_4216CB2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___, obj);
    sub_B0D8A4(&JsonManager_TypeInfo, v4);
    byte_4216CB2 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                   obj,
                                   (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
}


System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *__fastcall QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(
        QuestBehaviorMaster_o *this,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v15; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v17; // w22
  QuestBehaviorEntity_o *v18; // x23
  __int64 v19; // x9
  int64_t QuestPhaseNo; // x0
  struct System_Int32_array *behaviorValues; // x2
  int64_t v22; // x24
  const MethodInfo_2028F24 *v23; // x4
  int64_t v24; // x0
  struct System_Int32_array *v25; // x2
  int64_t v26; // x24
  const MethodInfo_2028F24 *v27; // x4
  QuestBehaviorMaster_o *v29; // x0
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  const MethodInfo *v33; // x4
  System_Collections_Generic_KeyValuePair_int__object__o v34; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o value; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v36; // 0:x0.16
  System_Collections_Generic_KeyValuePair_int__object__o v37; // 0:x0.16

  if ( (byte_4216CB7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questIds);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v13);
    sub_B0D8A4(&QuestBehaviorEntity_TypeInfo, v14);
    byte_4216CB7 = 1;
  }
  *(_QWORD *)&value.fields.key = 0LL;
  value.fields.value = 0LL;
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B0D974(
                                                                   System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo,
                                                                   questIds,
                                                                   method);
  System_Collections_Generic_Dictionary_long__KeyValuePair_int__object_____ctor(
    v15,
    (const MethodInfo_2EA9D58 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B0D97C(list);
  v17 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v17 < 0 )
    return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v15;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v17,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v18 = (QuestBehaviorEntity_o *)list;
    v19 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)list, 4, 0LL)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questIds,
           v18->fields.questId,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)QuestBehaviorEntity__GetQuestPhaseNo(
                                                                                           v18,
                                                                                           0LL);
      if ( !v15 )
        goto LABEL_20;
      if ( System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____TryGetValue(
             v15,
             (int64_t)list,
             &value,
             (const MethodInfo_2EAC5B0 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__) )
      {
        if ( value.fields.key < v18->fields.priority && QuestBehaviorEntity__checkConditions(v18, 0LL) )
        {
          QuestPhaseNo = QuestBehaviorEntity__GetQuestPhaseNo(v18, 0LL);
          v36.fields.value = (Il2CppObject *)(unsigned int)v18->fields.priority;
          behaviorValues = v18->fields.behaviorValues;
          v22 = QuestPhaseNo;
          *(_QWORD *)&v36.fields.key = &v34;
          *(_QWORD *)&v34.fields.key = 0LL;
          v34.fields.value = 0LL;
          System_Collections_Generic_KeyValuePair_int__object____ctor(
            v36,
            (int32_t)behaviorValues,
            (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
            v23);
          System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____set_Item(
            v15,
            v22,
            v34,
            (const MethodInfo_2EAA8E8 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__);
        }
      }
      else if ( QuestBehaviorEntity__checkConditions(v18, 0LL) )
      {
        v24 = QuestBehaviorEntity__GetQuestPhaseNo(v18, 0LL);
        v37.fields.value = (Il2CppObject *)(unsigned int)v18->fields.priority;
        v25 = v18->fields.behaviorValues;
        v26 = v24;
        *(_QWORD *)&v37.fields.key = &v34;
        v34 = (System_Collections_Generic_KeyValuePair_int__object__o)0LL;
        System_Collections_Generic_KeyValuePair_int__object____ctor(
          v37,
          (int32_t)v25,
          (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
          v27);
        System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____Add(
          v15,
          v26,
          v34,
          (const MethodInfo_2EAA910 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__);
      }
    }
    if ( --v17 < 0 )
      return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v15;
  }
  sub_B0DC70(list);
  return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                                                                      v29,
                                                                                      v30,
                                                                                      v31,
                                                                                      v32,
                                                                                      v33);
}