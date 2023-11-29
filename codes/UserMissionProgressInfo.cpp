void __fastcall UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressInfo___ctor_24049560(
        UserMissionProgressInfo_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.eventId = eventId;
  this->fields.missionId = missionId;
  UserMissionProgressInfo__checkMissionCond(this, v7);
}


void __fastcall UserMissionProgressInfo__Finalize(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressInfo__checkMissionCond(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMissionConditionEntity_array *MissionCondList; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  __int64 v9; // x8
  EventMissionConditionEntity_array *v10; // x20
  __int64 v11; // x22
  EventMissionConditionEntity_o *v12; // x21

  if ( (byte_40F9753 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40F9753 = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                (DataManager_o *)Instance,
                                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (MissionCondList = EventMissionConditionMaster__getMissionCondList(
                            MasterData_WarQuestSelectionMaster,
                            this->fields.eventId,
                            this->fields.missionId,
                            0LL)) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  v9 = *(_QWORD *)&MissionCondList->max_length;
  v10 = MissionCondList;
  if ( v9 )
  {
    if ( (int)v9 >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= (unsigned int)v9 )
        {
          sub_B17100(MissionCondList, v7, v8);
          sub_B170A0();
        }
        v12 = v10->m_Items[v11];
        if ( !v12 )
          goto LABEL_17;
        MissionCondList = (EventMissionConditionEntity_array *)EventMissionConditionEntity__getMissionProgress(
                                                                 v10->m_Items[v11],
                                                                 0LL);
        if ( ((unsigned __int8)MissionCondList & 1) == 0 )
          break;
        LODWORD(v9) = v10->max_length;
        if ( (int)++v11 >= (int)v9 )
          goto LABEL_16;
      }
      this->fields.currentProgressType = v12->fields.missionProgressType - 1;
    }
LABEL_16:
    UserMissionProgressInfo__setMissionCondInfo(this, v7);
  }
}


void __fastcall UserMissionProgressInfo__setMissionCondInfo(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  UserEventMissionEntity_array *UserEventMissionList; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t currentProgressType; // w8
  int32_t v16; // w8
  int32_t v17; // w9
  __int64 v18; // x8
  __int64 v19; // x9
  UserEventMissionEntity_o *v20; // x12
  int32_t v21; // w8
  WebViewManager_o *v22; // x0
  EventMissionConditionMaster_o *v23; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *MissionCondListByType; // x0
  int64_t *p_progNum; // x21
  int64_t *p_targetNum; // x22
  Il2CppObject *current; // x20
  int64_t v28; // x24
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  __int64 v31; // x8
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F9754 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40F9754 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_41;
  UserEventMissionList = UserEventMissionMaster__getUserEventMissionList(
                           MasterData_WarQuestSelectionMaster,
                           this->fields.eventId,
                           0LL);
  currentProgressType = this->fields.currentProgressType;
  switch ( currentProgressType )
  {
    case 4:
      this->fields.condMsgType = 4;
      if ( !UserEventMissionList )
        goto LABEL_24;
      v18 = *(_QWORD *)&UserEventMissionList->max_length;
      if ( (int)v18 < 1 )
        goto LABEL_24;
      v19 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= (unsigned int)v18 )
        {
          sub_B17100(UserEventMissionList, v13, v14);
          sub_B170A0();
        }
        v20 = UserEventMissionList->m_Items[v19];
        if ( !v20 )
          break;
        if ( v20->fields.missionId == this->fields.missionId )
        {
          if ( v20->fields.missionProgressType == 4 )
            v21 = 3;
          else
            v21 = 4;
          this->fields.currentProgStatus = v21;
          v18 = *(_QWORD *)&UserEventMissionList->max_length;
        }
        if ( (int)++v19 >= (int)v18 )
          goto LABEL_24;
      }
LABEL_41:
      sub_B170D4();
    case 3:
      v16 = 2;
      v17 = 4;
      goto LABEL_10;
    case 2:
      v16 = 1;
      v17 = 3;
LABEL_10:
      this->fields.currentProgStatus = v16;
      this->fields.condMsgType = v17;
      goto LABEL_24;
  }
  this->fields.currentProgStatus = 0;
  this->fields.condMsgType = 2;
LABEL_24:
  if ( this->fields.currentProgStatus == 2 )
    this->fields.currentProgStatus = 5;
  v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v22 )
    goto LABEL_41;
  v23 = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v22,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !v23 )
    goto LABEL_41;
  MissionCondListByType = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventMissionConditionMaster__getMissionCondListByType(v23, this->fields.eventId, this->fields.missionId, this->fields.condMsgType, 0LL);
  this->fields.progNum = 0LL;
  p_progNum = &this->fields.progNum;
  this->fields.targetNum = 0LL;
  p_targetNum = &this->fields.targetNum;
  if ( !MissionCondListByType )
    goto LABEL_41;
  if ( MissionCondListByType->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      MissionCondListByType,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v32,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__) )
    {
      if ( this->fields.currentProgStatus )
      {
        current = v32.fields.current;
        if ( !v32.fields.current )
          sub_B170D4();
        v28 = *p_progNum;
        if ( LODWORD(v32.fields.current[2].monitor) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v32.fields.current,
                                    0LL);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v28 + ProgressNumByDateType;
          v31 = 1LL;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v32.fields.current,
                         0LL)
                     + v28;
          v31 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v31;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v32,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}