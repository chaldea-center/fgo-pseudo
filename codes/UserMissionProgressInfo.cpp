void __fastcall UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressInfo___ctor_22531444(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v11; // x20
  __int64 v12; // x22
  __int64 v13; // x21
  __int64 v14; // x0

  if ( (byte_42E71AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E71AB = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = (DataManager_o *)EventMissionConditionMaster__getMissionCondList(
                                      (EventMissionConditionMaster_o *)Instance,
                                      this->fields.eventId,
                                      this->fields.missionId,
                                      0LL)) == 0LL )
  {
LABEL_17:
    sub_B5D69C(Instance, v9);
  }
  datalist = Instance->fields.datalist;
  v11 = Instance;
  if ( datalist )
  {
    if ( (int)datalist >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= (unsigned int)datalist )
        {
          v14 = sub_B5D6C8(Instance);
          sub_B5D668(v14, 0LL);
        }
        v13 = *((_QWORD *)&v11->fields.lookup + v12);
        if ( !v13 )
          goto LABEL_17;
        Instance = (DataManager_o *)EventMissionConditionEntity__getMissionProgress(
                                      *((EventMissionConditionEntity_o **)&v11->fields.lookup + v12),
                                      0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
        LODWORD(datalist) = v11->fields.datalist;
        if ( (int)++v12 >= (int)datalist )
          goto LABEL_16;
      }
      this->fields.currentProgressType = *(_DWORD *)(v13 + 20) - 1;
    }
LABEL_16:
    UserMissionProgressInfo__setMissionCondInfo(this, v9);
  }
}


void __fastcall UserMissionProgressInfo__setMissionCondInfo(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  DataManager_o *Instance; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  int32_t currentProgressType; // w8
  int32_t v30; // w8
  int32_t v31; // w9
  struct DataMasterBase_array *datalist; // x8
  __int64 v33; // x9
  __int64 v34; // x12
  int32_t v35; // w8
  int64_t *p_progNum; // x21
  int64_t *p_targetNum; // x22
  Il2CppObject *current; // x20
  int64_t v39; // x24
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  __int64 v42; // x8
  _BOOL8 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x0
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E71AC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    byte_42E71AC = 1;
  }
  memset(&v46, 0, sizeof(v46));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)UserEventMissionMaster__getUserEventMissionList(
                                (UserEventMissionMaster_o *)Instance,
                                this->fields.eventId,
                                v28);
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
      v33 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v33 >= (unsigned int)datalist )
        {
          v45 = sub_B5D6C8(Instance);
          sub_B5D668(v45, 0LL);
        }
        v34 = *((_QWORD *)&Instance->fields.lookup + v33);
        if ( !v34 )
          break;
        if ( *(_DWORD *)(v34 + 24) == this->fields.missionId )
        {
          if ( *(_DWORD *)(v34 + 32) == 4 )
            v35 = 3;
          else
            v35 = 4;
          this->fields.currentProgStatus = v35;
          datalist = Instance->fields.datalist;
        }
        if ( (int)++v33 >= (int)datalist )
          goto LABEL_24;
      }
LABEL_41:
      sub_B5D69C(Instance, v27);
    case 3:
      v30 = 2;
      v31 = 4;
      goto LABEL_10;
    case 2:
      v30 = 1;
      v31 = 3;
LABEL_10:
      this->fields.currentProgStatus = v30;
      this->fields.condMsgType = v31;
      goto LABEL_24;
  }
  this->fields.currentProgStatus = 0;
  this->fields.condMsgType = 2;
LABEL_24:
  if ( this->fields.currentProgStatus == 2 )
    this->fields.currentProgStatus = 5;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
      &v46,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v46,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v43 )
        break;
      if ( this->fields.currentProgStatus )
      {
        current = v46.fields.current;
        if ( !v46.fields.current )
          sub_B5D69C(v43, v44);
        v39 = *p_progNum;
        if ( LODWORD(v46.fields.current[2].monitor) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v46.fields.current,
                                    0LL);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v39 + ProgressNumByDateType;
          v42 = 1LL;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v46.fields.current,
                         0LL)
                     + v39;
          v42 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v42;
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v46,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}