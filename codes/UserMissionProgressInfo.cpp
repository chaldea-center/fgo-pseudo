void __fastcall UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressInfo___ctor_40220332(
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
  EventMissionConditionEntity_array *Instance; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x8
  EventMissionConditionEntity_array *v7; // x20
  __int64 v8; // x22
  EventMissionConditionEntity_o *v9; // x21

  if ( (byte_49FFD54 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_49FFD54 = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = EventMissionConditionMaster__getMissionCondList(
                     (EventMissionConditionMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.missionId,
                     0LL)) == 0LL )
  {
LABEL_17:
    sub_1B64C5C(Instance, v5);
  }
  v6 = *(_QWORD *)&Instance->max_length;
  v7 = Instance;
  if ( v6 )
  {
    if ( (int)v6 >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= (unsigned int)v6 )
          sub_1B64C64(Instance, v5);
        v9 = v7->m_Items[v8];
        if ( !v9 )
          goto LABEL_17;
        Instance = (EventMissionConditionEntity_array *)EventMissionConditionEntity__getMissionProgress(
                                                          v7->m_Items[v8],
                                                          0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
        LODWORD(v6) = v7->max_length;
        if ( (int)++v8 >= (int)v6 )
          goto LABEL_16;
      }
      this->fields.currentProgressType = v9->fields.missionProgressType - 1;
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
  void *Instance; // x0
  __int64 v11; // x1
  int32_t currentProgressType; // w8
  int32_t v13; // w8
  int32_t v14; // w9
  int v15; // w8
  __int64 v16; // x9
  __int64 v17; // x12
  int32_t v18; // w12
  int64_t *p_progNum; // x22
  int64_t *p_targetNum; // x23
  _BOOL8 v21; // x0
  __int64 v22; // x1
  Il2CppObject *current; // x20
  int64_t v24; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  __int64 v27; // x8
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FFD55 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FFD55 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = UserEventMissionMaster__getUserEventMissionList(
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
      v15 = *((_DWORD *)Instance + 6);
      if ( v15 < 1 )
        goto LABEL_24;
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= v15 )
          sub_1B64C64(Instance, v11);
        v17 = *((_QWORD *)Instance + v16 + 4);
        if ( !v17 )
          break;
        if ( *(_DWORD *)(v17 + 24) == this->fields.missionId )
        {
          if ( *(_DWORD *)(v17 + 32) == 4 )
            v18 = 3;
          else
            v18 = 4;
          this->fields.currentProgStatus = v18;
        }
        if ( (int)++v16 >= v15 )
          goto LABEL_24;
      }
LABEL_41:
      sub_1B64C5C(Instance, v11);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = EventMissionConditionMaster__getMissionCondListByType(
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
  if ( *((int *)Instance + 6) >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v28,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( 1 )
    {
      v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v28,
              (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v21 )
        break;
      if ( this->fields.currentProgStatus )
      {
        current = v28.fields._current;
        if ( !v28.fields._current )
          sub_1B64C5C(v21, v22);
        v24 = *p_progNum;
        if ( LODWORD(v28.fields._current[2].monitor) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v28.fields._current,
                                    0LL);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v24 + ProgressNumByDateType;
          v27 = 1LL;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v28.fields._current,
                         0LL)
                     + v24;
          v27 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v27;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v28,
      (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}