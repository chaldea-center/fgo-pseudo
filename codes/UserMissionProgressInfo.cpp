void __fastcall UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressInfo___ctor_22845904(
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

  if ( (byte_4350772 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350772 = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionConditionMaster__getMissionCondList(
                                      (EventMissionConditionMaster_o *)Instance,
                                      this->fields.eventId,
                                      this->fields.missionId,
                                      0LL)) == 0LL )
  {
LABEL_17:
    sub_B7076C(Instance, v4);
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
          v9 = sub_B70798(Instance);
          sub_B70738(v9, 0LL);
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
  const MethodInfo *v5; // x2
  int32_t currentProgressType; // w8
  int32_t v7; // w8
  int32_t v8; // w9
  struct DataMasterBase_array *datalist; // x8
  __int64 v10; // x9
  __int64 v11; // x12
  int32_t v12; // w8
  int64_t *p_progNum; // x21
  int64_t *p_targetNum; // x22
  Il2CppObject *current; // x20
  int64_t v16; // x24
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  __int64 v19; // x8
  _BOOL8 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x0
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4350773 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4350773 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)UserEventMissionMaster__getUserEventMissionList(
                                (UserEventMissionMaster_o *)Instance,
                                this->fields.eventId,
                                v5);
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
      v10 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= (unsigned int)datalist )
        {
          v22 = sub_B70798(Instance);
          sub_B70738(v22, 0LL);
        }
        v11 = *((_QWORD *)&Instance->fields.lookup + v10);
        if ( !v11 )
          break;
        if ( *(_DWORD *)(v11 + 24) == this->fields.missionId )
        {
          if ( *(_DWORD *)(v11 + 32) == 4 )
            v12 = 3;
          else
            v12 = 4;
          this->fields.currentProgStatus = v12;
          datalist = Instance->fields.datalist;
        }
        if ( (int)++v10 >= (int)datalist )
          goto LABEL_24;
      }
LABEL_41:
      sub_B7076C(Instance, v4);
    case 3:
      v7 = 2;
      v8 = 4;
      goto LABEL_10;
    case 2:
      v7 = 1;
      v8 = 3;
LABEL_10:
      this->fields.currentProgStatus = v7;
      this->fields.condMsgType = v8;
      goto LABEL_24;
  }
  this->fields.currentProgStatus = 0;
  this->fields.condMsgType = 2;
LABEL_24:
  if ( this->fields.currentProgStatus == 2 )
    this->fields.currentProgStatus = 5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
      &v23,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( 1 )
    {
      v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v20 )
        break;
      if ( this->fields.currentProgStatus )
      {
        current = v23.fields.current;
        if ( !v23.fields.current )
          sub_B7076C(v20, v21);
        v16 = *p_progNum;
        if ( LODWORD(v23.fields.current[2].monitor) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v23.fields.current,
                                    0LL);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v16 + ProgressNumByDateType;
          v19 = 1LL;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v23.fields.current,
                         0LL)
                     + v16;
          v19 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v19;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}