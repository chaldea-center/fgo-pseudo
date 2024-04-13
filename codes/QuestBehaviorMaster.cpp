void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA004 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA004 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    200,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
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

  if ( (byte_42EA002 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__,
      questId,
      phase,
      *(_QWORD *)&num);
    byte_42EA002 = 1;
  }
  PK = QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&priority);
  return (QuestBehaviorEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v16; // w23
  __int64 v17; // x9
  bool result; // w0
  QuestBoardInformaionText_o *v19; // x0
  System_String_o *v20; // x1
  int64_t v21; // x2
  bool v22; // w3
  bool v23; // w4
  int32_t v24; // w5
  int32_t v25; // w6
  bool v26; // w7
  EventCampaignEntity_o *v27; // [xsp+50h] [xbp+10h]
  TerminalBoardOptionTextData_o *v28; // [xsp+58h] [xbp+18h]
  const MethodInfo *v29; // [xsp+60h] [xbp+20h]
  UnityEngine_Vector3_o v30; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v7 = questId;
  if ( (byte_42EA00B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questId,
      phase,
      *(_QWORD *)&behaviorType);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&QuestBehaviorEntity_TypeInfo, v12, v13, v14);
    byte_42EA00B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_B5D69C(list, *(_QWORD *)&questId);
  v16 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v16 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v16,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_16;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v17 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v17
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] != QuestBehaviorEntity_TypeInfo )
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
    if ( --v16 < 0 )
      return 0;
  }
  v19 = (QuestBoardInformaionText_o *)sub_B5D990(list);
  QuestBoardInformaionText___ctor(v19, v20, v21, v22, v23, v31, v24, v25, v30, v26, v27, v28, v29);
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

  if ( (byte_42EA003 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__,
      (_DWORD)entity,
      questId,
      *(_QWORD *)&phase);
    byte_42EA003 = 1;
  }
  PK = QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestBehaviorMaster__getBattleBg(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v5; // w19
  int32_t v7; // w21
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v16; // w23
  int syncRoot_high; // w25
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x24
  __int64 v19; // x9
  _DWORD *monitor; // x8
  QuestBehaviorMaster_o *v22; // x0
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  v5 = defaultValue;
  v7 = questId;
  if ( (byte_42EA006 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      questId,
      phase,
      *(_QWORD *)&defaultValue);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&QuestBehaviorEntity_TypeInfo, v12, v13, v14);
    byte_42EA006 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_20:
    sub_B5D69C(list, *(_QWORD *)&questId);
  v16 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v16 < 0 )
    return v5;
  syncRoot_high = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v16,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v18 = list;
    v19 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v19 - 1] != QuestBehaviorEntity_TypeInfo )
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
      monitor = v18[1].monitor;
      if ( monitor )
      {
        if ( (int)monitor[6] >= 1 )
        {
          syncRoot_high = HIDWORD(v18->fields._syncRoot);
          v5 = monitor[8];
        }
      }
    }
    if ( --v16 < 0 )
      return v5;
  }
  v22 = (QuestBehaviorMaster_o *)sub_B5D990(list);
  return (unsigned int)QuestBehaviorMaster__getBattleSkill(v22, v23, v24, v25);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestBehaviorMaster__getBattleIndividuality(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  System_Int32_array *monitor; // x22
  int32_t v7; // w20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v19; // w23
  int syncRoot_high; // w26
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x24
  __int64 v22; // x9
  QuestBehaviorMaster_o *v24; // x0
  System_Int32_array *v25; // x1
  const MethodInfo *v26; // x2

  monitor = defVals;
  v7 = questId;
  if ( (byte_42EA009 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questId, phase, defVals);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10, v11);
    sub_B5D5C4(&int___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&QuestBehaviorEntity_TypeInfo, v15, v16, v17);
    byte_42EA009 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_19:
    sub_B5D69C(list, *(_QWORD *)&questId);
  v19 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v19 < 0 )
    return monitor;
  syncRoot_high = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v19,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_19;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v21 = list;
    v22 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v22 - 1] != QuestBehaviorEntity_TypeInfo )
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
      monitor = (System_Int32_array *)v21[1].monitor;
      syncRoot_high = HIDWORD(v21->fields._syncRoot);
      if ( !monitor )
        monitor = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
    }
    if ( --v19 < 0 )
      return monitor;
  }
  v24 = (QuestBehaviorMaster_o *)sub_B5D990(list);
  return (System_Int32_array *)QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(v24, v25, v26);
}


QuestBehaviorEntity_array *__fastcall QuestBehaviorMaster__getBattleSkill(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v40; // x22
  QuestBehaviorEntity_c *v41; // x1
  void *list; // x0
  int32_t v43; // w23
  QuestBehaviorEntity_o *v44; // x24
  __int64 v45; // x9
  int32_t priority; // w28
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  QuestBehaviorMaster_o *v49; // x0
  int32_t v50; // w1
  int32_t v51; // w2
  const MethodInfo *v52; // x3

  if ( (byte_42EA007 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questId, phase, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__, v28, v29, v30);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v34, v35, v36);
    sub_B5D5C4(&QuestBehaviorEntity_TypeInfo, v37, v38, v39);
    byte_42EA007 = 1;
  }
  v40 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v40,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (void *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                   (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
                   (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v43 = (_DWORD)list - 1;
  if ( (int)list - 1 < 0 )
  {
LABEL_19:
    if ( v40 )
    {
      if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
              v40,
              (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
        return 0LL;
      Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                 (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v40,
                 (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
      return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                            (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    }
LABEL_23:
    sub_B5D69C(list, v41);
  }
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v43,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    v41 = QuestBehaviorEntity_TypeInfo;
    v44 = (QuestBehaviorEntity_o *)list;
    v45 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v45
      || *(QuestBehaviorEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v45 - 8) != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( *((_DWORD *)list + 4) == questId && *((_DWORD *)list + 5) == phase && *((_DWORD *)list + 8) == 1 )
    {
      if ( !v40 )
        goto LABEL_23;
      if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v40,
              *((_DWORD *)list + 6),
              (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
        goto LABEL_16;
      priority = v44->fields.priority;
      list = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
               v40,
               v44->fields.num,
               (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
      if ( !list )
        goto LABEL_23;
      if ( priority >= *((_DWORD *)list + 7) )
      {
LABEL_16:
        list = (void *)QuestBehaviorEntity__checkConditions(v44, (const MethodInfo *)v41);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v40,
            v44->fields.num,
            (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            v40,
            v44->fields.num,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)v44,
            (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
        }
      }
    }
    if ( --v43 < 0 )
      goto LABEL_19;
  }
  v49 = (QuestBehaviorMaster_o *)sub_B5D990(list);
  return (QuestBehaviorEntity_array *)QuestBehaviorMaster__getEnableContinue(v49, v50, v51, v52);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestBehaviorMaster__getEnableContinue(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t v5; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w22
  __int64 v15; // x9
  QuestBehaviorMaster_o *v17; // x0
  int32_t v18; // w1
  int32_t v19; // w2
  System_Int32_array *v20; // x3
  const MethodInfo *v21; // x4

  v5 = questId;
  if ( (byte_42EA008 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, questId, phase, method);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    sub_B5D5C4(&QuestBehaviorEntity_TypeInfo, v10, v11, v12);
    byte_42EA008 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B5D69C(list, *(_QWORD *)&questId);
  v14 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          list,
          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v14 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_17;
    *(_QWORD *)&questId = QuestBehaviorEntity_TypeInfo;
    v15 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (QuestBehaviorEntity_c *)list->klass->_2.typeHierarchy[v15 - 1] != QuestBehaviorEntity_TypeInfo )
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
    if ( --v14 < 0 )
      return 0;
  }
  v17 = (QuestBehaviorMaster_o *)sub_B5D990(list);
  return (unsigned __int8)QuestBehaviorMaster__getBattleIndividuality(v17, v18, v19, v20, v21);
}


DataEntityBase_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42EA005 & 1) == 0 )
  {
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    byte_42EA005 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                   obj,
                                   (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
}


System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *__fastcall QuestBehaviorMaster__getPrioredIndividualitiesWithMatched(
        QuestBehaviorMaster_o *this,
        System_Int32_array *questIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v36; // x21
  QuestBehaviorEntity_c *v37; // x1
  void *list; // x0
  int32_t v39; // w22
  QuestBehaviorEntity_o *v40; // x23
  __int64 v41; // x9
  const MethodInfo_237CA70 *v42; // x4
  int32_t questId; // w8
  int32_t phase; // w9
  struct System_Int32_array *behaviorValues; // x2
  int64_t v46; // x23
  const MethodInfo_237CA70 *v47; // x4
  int32_t v48; // w8
  int32_t v49; // w9
  struct System_Int32_array *v50; // x2
  int64_t v51; // x23
  QuestBehaviorMaster_o *v53; // x0
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  const MethodInfo *v57; // x4
  System_Collections_Generic_KeyValuePair_int__object__o v58; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o value; // [xsp+10h] [xbp-60h] BYREF
  System_Collections_Generic_KeyValuePair_int__object__o v60; // 0:x0.16
  System_Collections_Generic_KeyValuePair_int__object__o v61; // 0:x0.16

  if ( (byte_42EA00A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)questIds,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__, v9, v10, v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int____get_Key__, v30, v31, v32);
    sub_B5D5C4(&QuestBehaviorEntity_TypeInfo, v33, v34, v35);
    byte_42EA00A = 1;
  }
  *(_QWORD *)&value.fields.key = 0LL;
  value.fields.value = 0LL;
  v36 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B5D694(System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TypeInfo);
  System_Collections_Generic_Dictionary_long__KeyValuePair_int__object_____ctor(
    v36,
    (const MethodInfo_2F4C9F4 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int______ctor__);
  list = this->fields.list;
  if ( !list )
LABEL_20:
    sub_B5D69C(list, v37);
  v39 = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
          (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
          (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v39 < 0 )
    return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v36;
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
             v39,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_20;
    v37 = QuestBehaviorEntity_TypeInfo;
    v40 = (QuestBehaviorEntity_o *)list;
    v41 = *(&QuestBehaviorEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v41
      || *(QuestBehaviorEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v41 - 8) != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( *((_DWORD *)list + 8) == 4 )
    {
      list = (void *)System_Linq_Enumerable__Contains_int_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)questIds,
                       *((_DWORD *)list + 4),
                       (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
      if ( ((unsigned __int8)list & 1) != 0 )
      {
        if ( !v36 )
          goto LABEL_20;
        if ( System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____TryGetValue(
               v36,
               v40->fields.phase + 100 * v40->fields.questId,
               &value,
               (const MethodInfo_2F4F24C *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____TryGetValue__) )
        {
          if ( value.fields.key < v40->fields.priority
            && QuestBehaviorEntity__checkConditions(v40, (const MethodInfo *)v37) )
          {
            questId = v40->fields.questId;
            phase = v40->fields.phase;
            v60.fields.value = (Il2CppObject *)(unsigned int)v40->fields.priority;
            behaviorValues = v40->fields.behaviorValues;
            v58.fields.value = 0LL;
            *(_QWORD *)&v60.fields.key = &v58;
            v46 = phase + 100 * questId;
            *(_QWORD *)&v58.fields.key = 0LL;
            System_Collections_Generic_KeyValuePair_int__object____ctor(
              v60,
              (int32_t)behaviorValues,
              (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
              v42);
            System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____set_Item(
              v36,
              v46,
              v58,
              (const MethodInfo_2F4D584 *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____set_Item__);
          }
        }
        else if ( QuestBehaviorEntity__checkConditions(v40, (const MethodInfo *)v37) )
        {
          v48 = v40->fields.questId;
          v49 = v40->fields.phase;
          v61.fields.value = (Il2CppObject *)(unsigned int)v40->fields.priority;
          v50 = v40->fields.behaviorValues;
          v58 = (System_Collections_Generic_KeyValuePair_int__object__o)0LL;
          *(_QWORD *)&v61.fields.key = &v58;
          v51 = v49 + 100 * v48;
          System_Collections_Generic_KeyValuePair_int__object____ctor(
            v61,
            (int32_t)v50,
            (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_int__int_____ctor__,
            v47);
          System_Collections_Generic_Dictionary_long__KeyValuePair_int__object____Add(
            v36,
            v51,
            v58,
            (const MethodInfo_2F4D5AC *)Method_System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____Add__);
        }
      }
    }
    if ( --v39 < 0 )
      return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)v36;
  }
  v53 = (QuestBehaviorMaster_o *)sub_B5D990(list);
  return (System_Collections_Generic_Dictionary_long__KeyValuePair_int__int_____o *)QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                                                                                      v53,
                                                                                      v54,
                                                                                      v55,
                                                                                      v56,
                                                                                      v57);
}