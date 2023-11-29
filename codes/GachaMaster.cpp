void __fastcall GachaMaster___ctor(GachaMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB38A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__, method);
    byte_40FB38A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    31,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_GachaMaster__GachaEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaMaster__CheckIsDrawGroupSummon(GachaMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  UserGachaMaster_o *v9; // x21
  const MethodInfo *v10; // x2
  GachaEntity_array *GachaDataInGroup; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  GachaEntity_array *v15; // x19
  unsigned int v16; // w20
  GachaEntity_o *v17; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB392 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GachaGroupMaster___, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_DataManager_GetMaster_UserGachaMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v7);
    byte_40FB392 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_21;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          groupId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserGachaMaster___);
  GachaDataInGroup = GachaMaster__getGachaDataInGroup(this, groupId, v10);
  if ( !GachaDataInGroup )
LABEL_21:
    sub_B170D4();
  max_length = GachaDataInGroup->max_length;
  v15 = GachaDataInGroup;
  if ( max_length < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
    {
      sub_B17100(GachaDataInGroup, v12, v13);
      sub_B170A0();
    }
    v17 = v15->m_Items[v16];
    if ( !v17 || !v9 )
      goto LABEL_21;
    GachaDataInGroup = (GachaEntity_array *)UserGachaMaster__checkIsDrawGroupSummon(v9, v17->fields.id, 0LL);
    if ( ((unsigned __int8)GachaDataInGroup & 1) != 0 )
      return 1;
    max_length = v15->max_length;
    if ( (int)++v16 >= max_length )
      return 0;
  }
}


bool __fastcall GachaMaster__CheckIsMaxDrawNum(
        GachaMaster_o *this,
        UserGachaEntity_o *drawUsrGachaEnt,
        GachaEntity_o **drawGachaEnt,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  GachaEntity_o *v8; // x8
  int32_t gachaGroupId; // w20
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  int32_t maxDrawNum; // w8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB391 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GachaGroupMaster___, drawUsrGachaEnt);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__, v7);
    byte_40FB391 = 1;
  }
  entity = 0LL;
  v8 = *drawGachaEnt;
  if ( !*drawGachaEnt )
    goto LABEL_13;
  gachaGroupId = v8->fields.gachaGroupId;
  if ( gachaGroupId >= 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaGroupMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              gachaGroupId,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_GachaGroupMaster__GachaGroupEntity__int__TryGetEntity__) )
        return 0;
      if ( !entity )
        goto LABEL_13;
      maxDrawNum = *(&entity->fields.id + 1);
      if ( maxDrawNum < 1 )
        return 0;
      if ( !drawUsrGachaEnt )
        goto LABEL_13;
      return drawUsrGachaEnt->fields.num >= maxDrawNum;
    }
LABEL_13:
    sub_B170D4();
  }
  maxDrawNum = v8->fields.maxDrawNum;
  if ( maxDrawNum < 1 )
    return 0;
  if ( !drawUsrGachaEnt )
    goto LABEL_13;
  return drawUsrGachaEnt->fields.num >= maxDrawNum;
}


System_Collections_Generic_List_GachaEntity__o *__fastcall GachaMaster__GetValidGachaEntityList(
        GachaMaster_o *this,
        const MethodInfo *method)
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
  int64_t UserId; // x21
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x22
  UserGachaMaster_o *v17; // x23
  GachaReleaseMaster_o *v18; // x24
  const MethodInfo *v19; // x1
  GachaEntity_array *ListValidData; // x25
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x19
  WarEntity_o *QuestPhase; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int max_length; // w8
  int i; // w27
  GachaEntity_o *v33; // x26
  int32_t beforeGachaId; // w3
  _BOOL8 v35; // x0
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x3
  int32_t gachaGroupId; // w1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x20
  signed __int64 size; // x9
  unsigned __int64 j; // x22
  struct EventMissionProgressRequest_Argument_ProgressData_array *items; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v43; // x25
  __int64 v44; // x26
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x9
  UserGachaEntity_o *drawUsrGachaEnt; // [xsp+0h] [xbp-70h] BYREF
  UserGachaEntity_o *v49; // [xsp+8h] [xbp-68h] BYREF
  GachaEntity_o *drawGachaEnt; // [xsp+10h] [xbp-60h] BYREF
  UserQuestEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FB390 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GachaReleaseMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserGachaMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__Contains__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v12);
    sub_B16FFC(&NetworkManager_TypeInfo, v13);
    sub_B16FFC(&TutorialFlag_TypeInfo, v14);
    byte_40FB390 = 1;
  }
  entity = 0LL;
  v49 = 0LL;
  drawGachaEnt = 0LL;
  drawUsrGachaEnt = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestMaster___);
  v17 = (UserGachaMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserGachaMaster___);
  v18 = (GachaReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaReleaseMaster___);
  ListValidData = GachaMaster__getListValidData(this, v19);
  entity = 0LL;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_64;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        sub_B17100(QuestPhase, v27, v28);
        sub_B170A0();
      }
      v33 = ListValidData->m_Items[i];
      drawGachaEnt = v33;
      if ( !v33 || !Master_WarQuestSelectionMaster )
        goto LABEL_64;
      QuestPhase = (WarEntity_o *)UserQuestMaster__TryGetEntity(
                                    Master_WarQuestSelectionMaster,
                                    &entity,
                                    UserId,
                                    v33->fields.condQuestId,
                                    0LL);
      if ( ((unsigned __int8)QuestPhase & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_64;
        if ( UserQuestEntity__getClearNum(entity, 0LL) > 0 )
          goto LABEL_20;
        if ( !entity )
          goto LABEL_64;
        QuestPhase = (WarEntity_o *)UserQuestEntity__getQuestPhase(entity, 0LL);
        if ( (int)QuestPhase >= v33->fields.condQuestPhase )
        {
LABEL_20:
          if ( !v18 )
            goto LABEL_64;
          QuestPhase = (WarEntity_o *)GachaReleaseMaster__IsEnableRelease(v18, v33->fields.id, v28);
          if ( ((unsigned __int8)QuestPhase & 1) != 0 )
          {
            beforeGachaId = v33->fields.beforeGachaId;
            if ( beforeGachaId <= 0 )
              goto LABEL_37;
            if ( !v17 )
              goto LABEL_64;
            QuestPhase = (WarEntity_o *)UserGachaMaster__TryGetEntity(v17, &v49, UserId, beforeGachaId, 0LL);
            if ( ((unsigned __int8)QuestPhase & 1) != 0 )
            {
              QuestPhase = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                             v33->fields.beforeGachaId,
                             (const MethodInfo_266F388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
              if ( !v49 || !QuestPhase )
                goto LABEL_64;
              if ( v49->fields.num >= SHIDWORD(QuestPhase->fields.targetId) )
              {
                if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TutorialFlag_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                }
                QuestPhase = (WarEntity_o *)TutorialFlag__IsProgressDone(2, 0LL);
                if ( ((unsigned __int8)QuestPhase & 1) != 0 )
                {
                  v35 = UserGachaMaster__TryGetEntity(v17, &drawUsrGachaEnt, UserId, v33->fields.id, 0LL);
                  if ( v35 )
                  {
                    QuestPhase = (WarEntity_o *)GachaMaster__CheckIsMaxDrawNum(
                                                  (GachaMaster_o *)v35,
                                                  drawUsrGachaEnt,
                                                  &drawGachaEnt,
                                                  v37);
                    if ( ((unsigned __int8)QuestPhase & 1) == 0 )
                      goto LABEL_37;
                  }
                  else
                  {
                    gachaGroupId = v33->fields.gachaGroupId;
                    if ( gachaGroupId < 1
                      || (QuestPhase = (WarEntity_o *)GachaMaster__CheckIsDrawGroupSummon(this, gachaGroupId, v36),
                          ((unsigned __int8)QuestPhase & 1) == 0) )
                    {
LABEL_37:
                      if ( !v25 )
                        goto LABEL_64;
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v25,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
                        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
                    }
                  }
                }
              }
            }
          }
        }
      }
      max_length = ListValidData->max_length;
    }
  }
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !v25 )
LABEL_64:
    sub_B170D4();
  LODWORD(size) = v25->fields._size;
  if ( (int)size >= 1 )
  {
    for ( j = 0LL; (__int64)j < size; ++j )
    {
      if ( j >= (unsigned int)size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      items = v25->fields._items;
      v43 = items->m_Items[j];
      if ( (int)size < 1 )
      {
        v45 = items->m_Items[j];
        if ( !v39 )
          goto LABEL_64;
      }
      else
      {
        v44 = 0LL;
        v45 = items->m_Items[j];
        do
        {
          if ( (unsigned int)size <= (unsigned int)v44 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          if ( !v43 )
            goto LABEL_64;
          v46 = items->m_Items[v44];
          if ( !v46 )
            goto LABEL_64;
          if ( v43->fields.missionTargetId != v46->fields.missionTargetId
            && HIDWORD(v43[1].klass) == HIDWORD(v46[1].klass) )
          {
            if ( !v45 )
              goto LABEL_64;
            if ( *((_DWORD *)&v45->fields + 5) < *((_DWORD *)&v46->fields + 5) )
              v45 = items->m_Items[v44];
          }
          LODWORD(size) = v25->fields._size;
          ++v44;
        }
        while ( (int)v44 < (int)size );
        if ( !v39 )
          goto LABEL_64;
      }
      if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v39,
              (WarBoardManager_TaskList_o *)v45,
              (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_GachaEntity__Contains__) )
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v39,
          v45,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
      size = v25->fields._size;
    }
  }
  return (System_Collections_Generic_List_GachaEntity__o *)v39;
}


GachaEntity_o *__fastcall GachaMaster__getFriendPointGachaEntity(GachaMaster_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *ListByPayType; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  GachaMaster___c_c *v21; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__2_0; // x20
  Il2CppObject *v24; // x21
  struct GachaMaster___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_40FB38C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_GachaEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_GachaEntity__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity___ctor___66735840, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v7);
    sub_B16FFC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    sub_B16FFC(&Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__, v9);
    sub_B16FFC(&GachaMaster___c_TypeInfo, v10);
    byte_40FB38C = 1;
  }
  ListByPayType = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListByPayType(this, 3, v2);
  v16 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                          v12,
                                                                          v13,
                                                                          v14,
                                                                          v15);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v16,
    ListByPayType,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_GachaEntity___ctor___66735840);
  v21 = GachaMaster___c_TypeInfo;
  if ( (BYTE3(GachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v21 = GachaMaster___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_GachaEntity__TypeInfo,
                                                                          v17,
                                                                          v18,
                                                                          v19,
                                                                          v20);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__2_0,
      v24,
      Method_GachaMaster___c__getFriendPointGachaEntity_b__2_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_GachaEntity___ctor__);
    v25 = GachaMaster___c_TypeInfo->static_fields;
    v25->__9__2_0 = (struct System_Comparison_GachaEntity__o *)_9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v25->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  if ( !v16 )
    sub_B170D4();
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v16,
    (System_Comparison_T__o *)_9__2_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  if ( !v16->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  return (GachaEntity_o *)v16->fields._items->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getGachaDataInGroup(
        GachaMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  GachaEntity_array *ListValidData; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  __int64 v20; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x1
  __int64 v22; // x2
  int max_length; // w8
  unsigned int v24; // w22

  if ( (byte_40FB38F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__Add__, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity___ctor___66735840, v7);
    sub_B16FFC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    byte_40FB38F = 1;
  }
  ListValidData = GachaMaster__getListValidData(this, *(const MethodInfo **)&groupId);
  v14 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                          v10,
                                                                          v11,
                                                                          v12,
                                                                          v13);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v14,
    (System_Collections_Generic_IEnumerable_T__o *)ListValidData,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_GachaEntity___ctor___66735840);
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                                                  v15,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  if ( !ListValidData )
    goto LABEL_14;
  max_length = ListValidData->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
      {
        sub_B17100(v20, v21, v22);
        sub_B170A0();
      }
      v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)ListValidData->m_Items[v24];
      if ( !v21 )
        break;
      if ( v21[3].fields.targetId == groupId )
      {
        if ( !v19 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          v21,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
      }
      max_length = ListValidData->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_12;
    }
LABEL_14:
    sub_B170D4();
  }
LABEL_12:
  if ( !v19 )
    goto LABEL_14;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
GachaEntity_array *__fastcall GachaMaster__getListByPayType(
        GachaMaster_o *this,
        int32_t gachaType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t Time; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v20; // w23
  int32_t v21; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v24; // x10

  if ( (byte_40FB38B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaType);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&GachaEntity_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    byte_40FB38B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v20 = Count;
    v21 = 0;
    while ( 1 )
    {
      v22 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v22 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v22,
               v21,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v24 = *(&GachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v24
          && (GachaEntity_c *)Item->klass->_2.typeHierarchy[v24 - 1] == GachaEntity_TypeInfo
          && LODWORD(Item[3].klass) == gachaType
          && Time >= (__int64)Item[6].monitor
          && Time <= (__int64)Item[7].klass )
        {
          if ( !v17 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
        }
      }
      if ( ++v21 >= v20 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_19:
  if ( !v17 )
    goto LABEL_21;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


GachaEntity_array *__fastcall GachaMaster__getListValidData(GachaMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t Time; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v18; // w22
  int32_t v19; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v20; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v22; // x10

  if ( (byte_40FB38D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&GachaEntity_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    byte_40FB38D = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                                                  v11,
                                                                                                  v12,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GachaEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v18 = Count;
    v19 = 0;
    while ( 1 )
    {
      v20 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v20 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v20,
               v19,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v22 = *(&GachaEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (GachaEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == GachaEntity_TypeInfo
          && Time >= (__int64)Item[6].monitor
          && Time <= (__int64)Item[7].klass )
        {
          if ( !v15 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Item,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GachaEntity__Add__);
        }
      }
      if ( ++v19 >= v18 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_18:
  if ( !v15 )
    goto LABEL_20;
  return (GachaEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GachaEntity__ToArray__);
}


int32_t __fastcall GachaMaster__getVaildPayType(GachaMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_T__o *ListValidData; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  GachaMaster___c_c *v20; // x0
  struct GachaMaster___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x20
  Il2CppObject *v23; // x21
  struct GachaMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  WarBoardAIRoute_RouteData_o *v31; // x8

  if ( (byte_40FB38E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Comparison_GachaEntity___ctor__, method);
    sub_B16FFC(&System_Comparison_GachaEntity__TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__Sort__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity___ctor___66735840, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GachaEntity__get_Item__, v6);
    sub_B16FFC(&System_Collections_Generic_List_GachaEntity__TypeInfo, v7);
    sub_B16FFC(&Method_GachaMaster___c__getVaildPayType_b__4_0__, v8);
    sub_B16FFC(&GachaMaster___c_TypeInfo, v9);
    byte_40FB38E = 1;
  }
  ListValidData = (System_Collections_Generic_IEnumerable_T__o *)GachaMaster__getListValidData(this, method);
  v15 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_GachaEntity__TypeInfo,
                                                                          v11,
                                                                          v12,
                                                                          v13,
                                                                          v14);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v15,
    ListValidData,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_GachaEntity___ctor___66735840);
  v20 = GachaMaster___c_TypeInfo;
  if ( (BYTE3(GachaMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaMaster___c_TypeInfo);
    v20 = GachaMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = GachaMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                          System_Comparison_GachaEntity__TypeInfo,
                                                                          v16,
                                                                          v17,
                                                                          v18,
                                                                          v19);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v23,
      Method_GachaMaster___c__getVaildPayType_b__4_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_GachaEntity___ctor__);
    v24 = GachaMaster___c_TypeInfo->static_fields;
    v24->__9__4_0 = (struct System_Comparison_GachaEntity__o *)_9__4_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !v15 )
    goto LABEL_16;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v15,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_2F27DB4 *)Method_System_Collections_Generic_List_GachaEntity__Sort__);
  if ( !v15->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v31 = v15->fields._items->m_Items[0];
  if ( !v31 )
LABEL_16:
    sub_B170D4();
  return (int32_t)v31->fields.basePiece;
}


void __fastcall GachaMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F68D5 & 1) == 0 )
  {
    sub_B16FFC(&GachaMaster___c_TypeInfo, v1);
    byte_40F68D5 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(GachaMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)GachaMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall GachaMaster___c___ctor(GachaMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GachaMaster___c___getFriendPointGachaEntity_b__2_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}


int32_t __fastcall GachaMaster___c___getVaildPayType_b__4_0(
        GachaMaster___c_o *this,
        GachaEntity_o *a,
        GachaEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B170D4();
  return b->fields.priority - a->fields.priority;
}