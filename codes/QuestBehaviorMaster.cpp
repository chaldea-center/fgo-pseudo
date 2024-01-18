void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418A25E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__, method);
    byte_418A25E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    199,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
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

  if ( (byte_418A25C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_418A25C = 1;
  }
  PK = QuestBehaviorEntity__CreatePK(questId, phase, num, priority, 0LL);
  return (QuestBehaviorEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
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

  v7 = questId;
  if ( (byte_418A265 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&QuestBehaviorEntity_TypeInfo, v10);
    byte_418A265 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B2C434(list, *(_QWORD *)&questId);
  v12 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
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
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v13 = (QuestBehaviorEntity_o *)list;
    v14 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v7
      && HIDWORD(list->fields.items) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)list, behaviorType, 0LL)
      && QuestBehaviorEntity__checkConditions(v13, 0LL) )
    {
      return 1;
    }
    if ( --v12 < 0 )
      return 0;
  }
  *(long double *)&v24 = sub_B2C728(list);
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

  if ( (byte_418A25D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__, entity);
    byte_418A25D = 1;
  }
  PK = QuestBehaviorEntity__CreatePK(questId, phase, num, priority, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
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

  v7 = questId;
  if ( (byte_418A260 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&QuestBehaviorEntity_TypeInfo, v10);
    byte_418A260 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B2C434(list, *(_QWORD *)&questId);
  v12 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
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
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v14 = (QuestBehaviorEntity_o *)list;
    v15 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v7
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
  sub_B2C728(list);
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
  int32_t v7; // w20
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

  v7 = questId;
  if ( (byte_418A263 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B2C35C(&int___TypeInfo, v10);
    sub_B2C35C(&QuestBehaviorEntity_TypeInfo, v11);
    byte_418A263 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B2C434(list, *(_QWORD *)&questId);
  v13 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
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
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v15 = (QuestBehaviorEntity_o *)list;
    v16 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v7
      && HIDWORD(list->fields.items) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)list, 4, 0LL)
      && priority < v15->fields.priority
      && QuestBehaviorEntity__checkConditions(v15, 0LL) )
    {
      defVals = v15->fields.behaviorValues;
      priority = v15->fields.priority;
      if ( !defVals )
        defVals = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
    }
    if ( --v13 < 0 )
      return defVals;
  }
  sub_B2C728(list);
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
  QuestBehaviorEntity_c *v19; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v21; // w23
  QuestBehaviorEntity_o *v22; // x24
  __int64 v23; // x9
  int32_t priority; // w28
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  QuestBehaviorMaster_o *v27; // x0
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_418A261 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__, v14);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo, v15);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v16);
    sub_B2C35C(&QuestBehaviorEntity_TypeInfo, v17);
    byte_418A261 = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v18,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (_DWORD)list - 1;
  if ( (int)list - 1 < 0 )
  {
LABEL_19:
    if ( v18 )
    {
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
              v18,
              (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
        return 0LL;
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v18,
                 (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
      return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                            (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    }
LABEL_23:
    sub_B2C434(list, v19);
  }
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v21,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    v19 = QuestBehaviorEntity_TypeInfo;
    v22 = (QuestBehaviorEntity_o *)list;
    v23 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v23 - 1] != QuestBehaviorEntity_TypeInfo )
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
                v22->fields.num,
                (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
          goto LABEL_16;
        priority = v22->fields.priority;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                             v18,
                                                                                             v22->fields.num,
                                                                                             (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
        if ( !list )
          goto LABEL_23;
        if ( priority >= SHIDWORD(list->fields._syncRoot) )
        {
LABEL_16:
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)QuestBehaviorEntity__checkConditions(
                                                                                               v22,
                                                                                               0LL);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v18,
              v22->fields.num,
              (const MethodInfo_2E66128 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v18,
              v22->fields.num,
              (WarBoardEvalValueSquare_EvalValueSquare_o *)v22,
              (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
          }
        }
      }
    }
    if ( --v21 < 0 )
      goto LABEL_19;
  }
  sub_B2C728(list);
  return (QuestBehaviorEntity_array *)QuestBehaviorMaster__getEnableContinue(v27, v28, v29, v30);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t v5; // w20
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

  v5 = questId;
  if ( (byte_418A262 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B2C35C(&QuestBehaviorEntity_TypeInfo, v8);
    byte_418A262 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B2C434(list, *(_QWORD *)&questId);
  v10 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
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
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v11 = (QuestBehaviorEntity_o *)list;
    v12 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v12 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(list->fields.items) == v5
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
  sub_B2C728(list);
  return (unsigned __int8)QuestBehaviorMaster__getBattleIndividuality(v14, v15, v16, v17, v18);
}


DataEntityBase_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_418A25F & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___, obj);
    sub_B2C35C(&JsonManager_TypeInfo, v4);
    byte_418A25F = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                   obj,
                                   (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
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
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v18; // w22
  QuestBehaviorEntity_o *v19; // x23
  __int64 v20; // x9
  int64_t QuestPhaseNo; // x0
  struct System_Int32_array *behaviorValues; // x2
  int64_t v23; // x24
  const MethodInfo_21035EC *v24; // x4
  int64_t v25; // x0
  struct System_Int32_array *v26; // x2
  int64_t v27; // x24
  const MethodInfo_21035EC *v28; // x4
  QuestBehaviorMaster_o *v30; // x0
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x4
  System_Collections_Generic_KeyValuePair_int__object__o v35; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o value; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v37; // 0:x0.16
  System_Collections_Generic_KeyValuePair_int__object__o v38; // 0:x0.16

  if ( (byte_418A264 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questIds);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v13);
    sub_B2C35C(&QuestBehaviorEntity_TypeInfo, v14);
    byte_418A264 = 1;
  }
  *(_QWORD *)&value.fields.key = 0LL;
  value.fields.value = 0LL;
  v15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B2C42C(System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo);
  System_Collections_Generic_Dictionary_long__KeyValuePair_int__object_____ctor(
    v15,
    (const MethodInfo_2E4941C *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B2C434(list, v16);
  v18 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v18 < 0 )
    return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v15;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v18,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v19 = (QuestBehaviorEntity_o *)list;
    v20 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v20
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v20 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)list, 4, 0LL)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questIds,
           v19->fields.questId,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)QuestBehaviorEntity__GetQuestPhaseNo(
                                                                                           v19,
                                                                                           0LL);
      if ( !v15 )
        goto LABEL_20;
      if ( System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____TryGetValue(
             v15,
             (int64_t)list,
             &value,
             (const MethodInfo_2E4BC74 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__) )
      {
        if ( value.fields.key < v19->fields.priority && QuestBehaviorEntity__checkConditions(v19, 0LL) )
        {
          QuestPhaseNo = QuestBehaviorEntity__GetQuestPhaseNo(v19, 0LL);
          v37.fields.value = (Il2CppObject *)(unsigned int)v19->fields.priority;
          behaviorValues = v19->fields.behaviorValues;
          v23 = QuestPhaseNo;
          *(_QWORD *)&v37.fields.key = &v35;
          *(_QWORD *)&v35.fields.key = 0LL;
          v35.fields.value = 0LL;
          System_Collections_Generic_KeyValuePair_int__object____ctor(
            v37,
            (int32_t)behaviorValues,
            (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
            v24);
          System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____set_Item(
            v15,
            v23,
            v35,
            (const MethodInfo_2E49FAC *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__);
        }
      }
      else if ( QuestBehaviorEntity__checkConditions(v19, 0LL) )
      {
        v25 = QuestBehaviorEntity__GetQuestPhaseNo(v19, 0LL);
        v38.fields.value = (Il2CppObject *)(unsigned int)v19->fields.priority;
        v26 = v19->fields.behaviorValues;
        v27 = v25;
        *(_QWORD *)&v38.fields.key = &v35;
        v35 = (System_Collections_Generic_KeyValuePair_int__object__o)0LL;
        System_Collections_Generic_KeyValuePair_int__object____ctor(
          v38,
          (int32_t)v26,
          (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
          v28);
        System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____Add(
          v15,
          v27,
          v35,
          (const MethodInfo_2E49FD4 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__);
      }
    }
    if ( --v18 < 0 )
      return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v15;
  }
  sub_B2C728(list);
  return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                                                                      v30,
                                                                                      v31,
                                                                                      v32,
                                                                                      v33,
                                                                                      v34);
}