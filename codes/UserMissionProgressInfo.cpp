void __fastcall UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressInfo___ctor_23240584(
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
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v6; // x20
  __int64 v7; // x22
  __int64 v8; // x21
  __int64 v9; // x0

  if ( (byte_42AEFAB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEFAB = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionConditionMaster__getMissionCondList(
                                      (EventMissionConditionMaster_o *)Instance,
                                      this->fields.eventId,
                                      this->fields.missionId,
                                      0LL)) == 0LL )
  {
LABEL_17:
    sub_B52A5C(Instance, v4);
  }
  datalist = Instance->fields.datalist;
  v6 = Instance;
  if ( datalist )
  {
    if ( (int)datalist >= 1 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= (unsigned int)datalist )
        {
          v9 = sub_B52A88(Instance);
          sub_B52A28(v9, 0LL);
        }
        v8 = *((_QWORD *)&v6->fields.lookup + v7);
        if ( !v8 )
          goto LABEL_17;
        Instance = (DataManager_o *)EventMissionConditionEntity__getMissionProgress(
                                      *((EventMissionConditionEntity_o **)&v6->fields.lookup + v7),
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
        LODWORD(datalist) = v6->fields.datalist;
        if ( (int)++v7 >= (int)datalist )
          goto LABEL_16;
      }
      this->fields.currentProgressType = *(_DWORD *)(v8 + 20) - 1;
    }
LABEL_16:
    UserMissionProgressInfo__setMissionCondInfo(this, v4);
  }
}


void __fastcall UserMissionProgressInfo__setMissionCondInfo(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  int32_t currentProgressType; // w8
  int32_t v6; // w8
  int32_t v7; // w9
  struct DataMasterBase_array *datalist; // x8
  __int64 v9; // x9
  __int64 v10; // x12
  int32_t v11; // w8
  int64_t *p_progNum; // x21
  int64_t *p_targetNum; // x22
  Il2CppObject *current; // x20
  int64_t v15; // x24
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  __int64 v18; // x8
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AEFAC & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AEFAC = 1;
  }
  memset(&v22, 0, sizeof(v22));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)UserEventMissionMaster__getUserEventMissionList(
                                (UserEventMissionMaster_o *)Instance,
                                this->fields.eventId,
                                0LL);
  currentProgressType = this->fields.currentProgressType;
  switch ( currentProgressType )
  {
    case 4:
      this->fields.condMsgType = 4;
      if ( !Instance )
        goto LABEL_24;
      datalist = Instance->fields.datalist;
      if ( (int)datalist < 1 )
        goto LABEL_24;
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= (unsigned int)datalist )
        {
          v21 = sub_B52A88(Instance);
          sub_B52A28(v21, 0LL);
        }
        v10 = *((_QWORD *)&Instance->fields.lookup + v9);
        if ( !v10 )
          break;
        if ( *(_DWORD *)(v10 + 24) == this->fields.missionId )
        {
          if ( *(_DWORD *)(v10 + 32) == 4 )
            v11 = 3;
          else
            v11 = 4;
          this->fields.currentProgStatus = v11;
          datalist = Instance->fields.datalist;
        }
        if ( (int)++v9 >= (int)datalist )
          goto LABEL_24;
      }
LABEL_41:
      sub_B52A5C(Instance, v4);
    case 3:
      v6 = 2;
      v7 = 4;
      goto LABEL_10;
    case 2:
      v6 = 1;
      v7 = 3;
LABEL_10:
      this->fields.currentProgStatus = v6;
      this->fields.condMsgType = v7;
      goto LABEL_24;
  }
  this->fields.currentProgStatus = 0;
  this->fields.condMsgType = 2;
LABEL_24:
  if ( this->fields.currentProgStatus == 2 )
    this->fields.currentProgStatus = 5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)EventMissionConditionMaster__getMissionCondListByType(
                                (EventMissionConditionMaster_o *)Instance,
                                this->fields.eventId,
                                this->fields.missionId,
                                this->fields.condMsgType,
                                0LL);
  this->fields.progNum = 0LL;
  p_progNum = &this->fields.progNum;
  this->fields.targetNum = 0LL;
  p_targetNum = &this->fields.targetNum;
  if ( !Instance )
    goto LABEL_41;
  if ( SLODWORD(Instance->fields.datalist) >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v19 )
        break;
      if ( this->fields.currentProgStatus )
      {
        current = v22.fields.current;
        if ( !v22.fields.current )
          sub_B52A5C(v19, v20);
        v15 = *p_progNum;
        if ( LODWORD(v22.fields.current[2].monitor) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v22.fields.current,
                                    0LL);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v15 + ProgressNumByDateType;
          v18 = 1LL;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v22.fields.current,
                         0LL)
                     + v15;
          v18 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v18;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}