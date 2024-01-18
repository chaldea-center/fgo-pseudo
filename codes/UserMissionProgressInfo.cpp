void __fastcall UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressInfo___ctor_24007156(
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
  DataManager_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v7; // x20
  __int64 v8; // x22
  __int64 v9; // x21
  __int64 v10; // x0

  if ( (byte_4187049 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4187049 = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionConditionMaster__getMissionCondList(
                                      (EventMissionConditionMaster_o *)Instance,
                                      this->fields.eventId,
                                      this->fields.missionId,
                                      0LL)) == 0LL )
  {
LABEL_17:
    sub_B2C434(Instance, v5);
  }
  datalist = Instance->fields.datalist;
  v7 = Instance;
  if ( datalist )
  {
    if ( (int)datalist >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= (unsigned int)datalist )
        {
          v10 = sub_B2C460(Instance);
          sub_B2C400(v10, 0LL);
        }
        v9 = *((_QWORD *)&v7->fields.lookup + v8);
        if ( !v9 )
          goto LABEL_17;
        Instance = (DataManager_o *)EventMissionConditionEntity__getMissionProgress(
                                      *((EventMissionConditionEntity_o **)&v7->fields.lookup + v8),
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
        LODWORD(datalist) = v7->fields.datalist;
        if ( (int)++v8 >= (int)datalist )
          goto LABEL_16;
      }
      this->fields.currentProgressType = *(_DWORD *)(v9 + 20) - 1;
    }
LABEL_16:
    UserMissionProgressInfo__setMissionCondInfo(this, v5);
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
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  int32_t currentProgressType; // w8
  int32_t v13; // w8
  int32_t v14; // w9
  struct DataMasterBase_array *datalist; // x8
  __int64 v16; // x9
  __int64 v17; // x12
  int32_t v18; // w8
  int64_t *p_progNum; // x21
  int64_t *p_targetNum; // x22
  Il2CppObject *current; // x20
  int64_t v22; // x24
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  __int64 v25; // x8
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418704A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418704A = 1;
  }
  memset(&v29, 0, sizeof(v29));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= (unsigned int)datalist )
        {
          v28 = sub_B2C460(Instance);
          sub_B2C400(v28, 0LL);
        }
        v17 = *((_QWORD *)&Instance->fields.lookup + v16);
        if ( !v17 )
          break;
        if ( *(_DWORD *)(v17 + 24) == this->fields.missionId )
        {
          if ( *(_DWORD *)(v17 + 32) == 4 )
            v18 = 3;
          else
            v18 = 4;
          this->fields.currentProgStatus = v18;
          datalist = Instance->fields.datalist;
        }
        if ( (int)++v16 >= (int)datalist )
          goto LABEL_24;
      }
LABEL_41:
      sub_B2C434(Instance, v11);
    case 3:
      v13 = 2;
      v14 = 4;
      goto LABEL_10;
    case 2:
      v13 = 1;
      v14 = 3;
LABEL_10:
      this->fields.currentProgStatus = v13;
      this->fields.condMsgType = v14;
      goto LABEL_24;
  }
  this->fields.currentProgStatus = 0;
  this->fields.condMsgType = 2;
LABEL_24:
  if ( this->fields.currentProgStatus == 2 )
    this->fields.currentProgStatus = 5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
      &v29,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v29,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v26 )
        break;
      if ( this->fields.currentProgStatus )
      {
        current = v29.fields.current;
        if ( !v29.fields.current )
          sub_B2C434(v26, v27);
        v22 = *p_progNum;
        if ( LODWORD(v29.fields.current[2].monitor) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v29.fields.current,
                                    0LL);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v22 + ProgressNumByDateType;
          v25 = 1LL;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v29.fields.current,
                         0LL)
                     + v22;
          v25 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v25;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v29,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}