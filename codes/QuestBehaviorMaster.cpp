void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC6C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__, method);
    byte_40FC6C1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    199,
    (const MethodInfo_266F73C *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
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

  if ( (byte_40FC6BF & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_40FC6BF = 1;
  }
  PK = QuestBehaviorEntity__CreatePK(questId, phase, num, priority, 0LL);
  return (QuestBehaviorEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  QuestBehaviorEntity_o *v15; // x24
  __int64 v16; // x9
  bool result; // w0
  QuestBoardInformaionText_o *v18; // x0
  System_String_o *v19; // x1
  int64_t v20; // x2
  bool v21; // w3
  bool v22; // w4
  int32_t v23; // w5
  int32_t v24; // w6
  bool v25; // w7
  UnityEngine_Color_o v26; // q0 OVERLAPPED
  EventCampaignEntity_o *v27; // [xsp+50h] [xbp+10h]
  TerminalBoardOptionTextData_o *v28; // [xsp+58h] [xbp+18h]
  const MethodInfo *v29; // [xsp+60h] [xbp+20h]
  UnityEngine_Vector3_o v30; // 0:s4.4,4:s5.4,8:s6.4

  if ( (byte_40FC6C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&QuestBehaviorEntity_TypeInfo, v10);
    byte_40FC6C8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B170D4();
  v12 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v12 < 0 )
    return 0;
  while ( 1 )
  {
    v13 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v13 )
      goto LABEL_16;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v13,
             v12,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_16;
    v15 = (QuestBehaviorEntity_o *)Item;
    v16 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (QuestBehaviorEntity_c *)Item->klass->_2.typeHierarchy[v16 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(Item[1].klass) == questId
      && HIDWORD(Item[1].klass) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)Item, behaviorType, 0LL)
      && QuestBehaviorEntity__checkConditions(v15, 0LL) )
    {
      return 1;
    }
    if ( --v12 < 0 )
      return 0;
  }
  *(long double *)&v26 = sub_B173C8(Item);
  QuestBoardInformaionText___ctor(v18, v19, v20, v21, v22, v26, v23, v24, v30, v25, v27, v28, v29);
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

  if ( (byte_40FC6C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__, entity);
    byte_40FC6C0 = 1;
  }
  PK = QuestBehaviorEntity__CreatePK(questId, phase, num, priority, 0LL);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  QuestBehaviorEntity_o *v16; // x24
  __int64 v17; // x9
  struct System_Int32_array *behaviorValues; // x8
  QuestBehaviorMaster_o *v20; // x0
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_40FC6C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&QuestBehaviorEntity_TypeInfo, v10);
    byte_40FC6C3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B170D4();
  v12 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v12 < 0 )
    return defaultValue;
  priority = 0;
  while ( 1 )
  {
    v14 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v14 )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v14,
             v12,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_20;
    v16 = (QuestBehaviorEntity_o *)Item;
    v17 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (QuestBehaviorEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(Item[1].klass) == questId
      && HIDWORD(Item[1].klass) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)Item, 3, 0LL)
      && priority < v16->fields.priority
      && QuestBehaviorEntity__checkConditions(v16, 0LL) )
    {
      behaviorValues = v16->fields.behaviorValues;
      if ( behaviorValues )
      {
        if ( (int)behaviorValues->max_length >= 1 )
        {
          priority = v16->fields.priority;
          defaultValue = behaviorValues->m_Items[1];
        }
      }
    }
    if ( --v12 < 0 )
      return defaultValue;
  }
  sub_B173C8(Item);
  return (unsigned int)QuestBehaviorMaster__getBattleSkill(v20, v21, v22, v23);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  QuestBehaviorEntity_o *v17; // x24
  __int64 v18; // x9
  __int64 v19; // x2
  QuestBehaviorMaster_o *v21; // x0
  System_Int32_array *v22; // x1
  const MethodInfo *v23; // x2

  if ( (byte_40FC6C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9);
    sub_B16FFC(&int___TypeInfo, v10);
    sub_B16FFC(&QuestBehaviorEntity_TypeInfo, v11);
    byte_40FC6C6 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B170D4();
  v13 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v13 < 0 )
    return defVals;
  priority = 0;
  while ( 1 )
  {
    v15 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v15 )
      goto LABEL_19;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v15,
             v13,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_19;
    v17 = (QuestBehaviorEntity_o *)Item;
    v18 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (QuestBehaviorEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(Item[1].klass) == questId
      && HIDWORD(Item[1].klass) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)Item, 4, 0LL)
      && priority < v17->fields.priority
      && QuestBehaviorEntity__checkConditions(v17, 0LL) )
    {
      defVals = v17->fields.behaviorValues;
      priority = v17->fields.priority;
      if ( !defVals )
        defVals = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v19);
    }
    if ( --v13 < 0 )
      return defVals;
  }
  sub_B173C8(Item);
  return (System_Int32_array *)QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(v21, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_array *__fastcall QuestBehaviorMaster__getBattleSkill(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v19; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v21; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v24; // x24
  __int64 v25; // x9
  int monitor_high; // w28
  WarBoardEvalValueSquare_EvalValueSquare_o *v27; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  QuestBehaviorMaster_o *v30; // x0
  int32_t v31; // w1
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_40FC6C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__, v15);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo, v16);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v17);
    sub_B16FFC(&QuestBehaviorEntity_TypeInfo, v18);
    byte_40FC6C4 = 1;
  }
  v19 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo,
                                                                                                   *(_QWORD *)&questId,
                                                                                                   *(_QWORD *)&phase,
                                                                                                   method,
                                                                                                   v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v19,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  v21 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v21 < 0 )
  {
LABEL_19:
    if ( v19 )
    {
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
              v19,
              (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
        return 0LL;
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v19,
                 (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
      return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    }
LABEL_23:
    sub_B170D4();
  }
  while ( 1 )
  {
    v22 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v22 )
      goto LABEL_23;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v22,
             v21,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_23;
    v24 = Item;
    v25 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (QuestBehaviorEntity_c *)Item->klass->_2.typeHierarchy[v25 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(Item[1].klass) == questId
      && HIDWORD(Item[1].klass) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)Item, 1, 0LL) )
    {
      if ( !v19 )
        goto LABEL_23;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v19,
              (int32_t)v24[1].monitor,
              (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
        goto LABEL_16;
      monitor_high = HIDWORD(v24[1].monitor);
      v27 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
              v19,
              (int32_t)v24[1].monitor,
              (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
      if ( !v27 )
        goto LABEL_23;
      if ( monitor_high >= SLODWORD(v27->fields._EvalValueBenefit_k__BackingField) )
      {
LABEL_16:
        if ( QuestBehaviorEntity__checkConditions((QuestBehaviorEntity_o *)v24, 0LL) )
        {
          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v19,
            (int32_t)v24[1].monitor,
            (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            v19,
            (int32_t)v24[1].monitor,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v24,
            (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
        }
      }
    }
    if ( --v21 < 0 )
      goto LABEL_19;
  }
  sub_B173C8(Item);
  return (QuestBehaviorEntity_array *)QuestBehaviorMaster__getEnableContinue(v30, v31, v32, v33);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v11; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  QuestBehaviorEntity_o *v13; // x23
  __int64 v14; // x9
  QuestBehaviorMaster_o *v16; // x0
  int32_t v17; // w1
  int32_t v18; // w2
  System_Int32_array *v19; // x3
  const MethodInfo *v20; // x4

  if ( (byte_40FC6C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&questId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&QuestBehaviorEntity_TypeInfo, v8);
    byte_40FC6C5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B170D4();
  v10 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v10 < 0 )
    return 0;
  while ( 1 )
  {
    v11 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v11 )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v11,
             v10,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_17;
    v13 = (QuestBehaviorEntity_o *)Item;
    v14 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (QuestBehaviorEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( LODWORD(Item[1].klass) == questId
      && HIDWORD(Item[1].klass) == phase
      && QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)Item, 2, 0LL)
      && v13->fields.priority >= 1
      && QuestBehaviorEntity__checkConditions(v13, 0LL) )
    {
      return 1;
    }
    if ( --v10 < 0 )
      return 0;
  }
  sub_B173C8(Item);
  return (unsigned __int8)QuestBehaviorMaster__getBattleIndividuality(v16, v17, v18, v19, v20);
}


DataEntityBase_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1

  if ( (byte_40FC6C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___, obj);
    sub_B16FFC(&JsonManager_TypeInfo, v4);
    byte_40FC6C2 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                   obj,
                                   (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
}


System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *__fastcall QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(
        QuestBehaviorMaster_o *this,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v19; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  QuestBehaviorEntity_o *v22; // x23
  __int64 v23; // x9
  int64_t QuestPhaseNo; // x0
  int64_t v25; // x0
  struct System_Int32_array *behaviorValues; // x2
  int64_t v27; // x24
  const MethodInfo_23F5AFC *v28; // x4
  int64_t v29; // x0
  struct System_Int32_array *v30; // x2
  int64_t v31; // x24
  const MethodInfo_23F5AFC *v32; // x4
  QuestBehaviorMaster_o *v34; // x0
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  const MethodInfo *v38; // x4
  System_Collections_Generic_KeyValuePair_int__object__o v39; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o value; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v41; // 0:x0.16
  System_Collections_Generic_KeyValuePair_int__object__o v42; // 0:x0.16

  if ( (byte_40FC6C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questIds);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v13);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v15);
    sub_B16FFC(&QuestBehaviorEntity_TypeInfo, v16);
    byte_40FC6C7 = 1;
  }
  *(_QWORD *)&value.fields.key = 0LL;
  value.fields.value = 0LL;
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B170CC(
                                                                   System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo,
                                                                   questIds,
                                                                   method,
                                                                   v3,
                                                                   v4);
  System_Collections_Generic_Dictionary_long__KeyValuePair_int__object_____ctor(
    v17,
    (const MethodInfo_2E02CEC *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B170D4();
  v19 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v19 < 0 )
    return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v17;
  while ( 1 )
  {
    v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v20 )
      goto LABEL_20;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v20,
             v19,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !Item )
      goto LABEL_20;
    v22 = (QuestBehaviorEntity_o *)Item;
    v23 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (QuestBehaviorEntity_c *)Item->klass->_2.typeHierarchy[v23 - 1] != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( QuestBehaviorEntity__checkBehaviorType((QuestBehaviorEntity_o *)Item, 4, 0LL)
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questIds,
           v22->fields.questId,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      QuestPhaseNo = QuestBehaviorEntity__GetQuestPhaseNo(v22, 0LL);
      if ( !v17 )
        goto LABEL_20;
      if ( System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____TryGetValue(
             v17,
             QuestPhaseNo,
             &value,
             (const MethodInfo_2E05544 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__) )
      {
        if ( value.fields.key < v22->fields.priority && QuestBehaviorEntity__checkConditions(v22, 0LL) )
        {
          v25 = QuestBehaviorEntity__GetQuestPhaseNo(v22, 0LL);
          v41.fields.value = (Il2CppObject *)(unsigned int)v22->fields.priority;
          behaviorValues = v22->fields.behaviorValues;
          v27 = v25;
          *(_QWORD *)&v41.fields.key = &v39;
          *(_QWORD *)&v39.fields.key = 0LL;
          v39.fields.value = 0LL;
          System_Collections_Generic_KeyValuePair_int__object____ctor(
            v41,
            (int32_t)behaviorValues,
            (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
            v28);
          System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____set_Item(
            v17,
            v27,
            v39,
            (const MethodInfo_2E0387C *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__);
        }
      }
      else if ( QuestBehaviorEntity__checkConditions(v22, 0LL) )
      {
        v29 = QuestBehaviorEntity__GetQuestPhaseNo(v22, 0LL);
        v42.fields.value = (Il2CppObject *)(unsigned int)v22->fields.priority;
        v30 = v22->fields.behaviorValues;
        v31 = v29;
        *(_QWORD *)&v42.fields.key = &v39;
        v39 = (System_Collections_Generic_KeyValuePair_int__object__o)0LL;
        System_Collections_Generic_KeyValuePair_int__object____ctor(
          v42,
          (int32_t)v30,
          (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
          v32);
        System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____Add(
          v17,
          v31,
          v39,
          (const MethodInfo_2E038A4 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__);
      }
    }
    if ( --v19 < 0 )
      return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v17;
  }
  sub_B173C8(Item);
  return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                                                                      v34,
                                                                                      v35,
                                                                                      v36,
                                                                                      v37,
                                                                                      v38);
}