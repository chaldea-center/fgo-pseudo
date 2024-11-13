void __fastcall UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressInfo___ctor_41288732(
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  EventMissionConditionEntity_array *Instance; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x8
  EventMissionConditionEntity_array *v9; // x20
  __int64 v10; // x22
  EventMissionConditionEntity_o *v11; // x21

  if ( (byte_4B17489 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B17489 = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = EventMissionConditionMaster__getMissionCondList(
                     (EventMissionConditionMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.missionId,
                     0LL)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v7);
  }
  v8 = *(_QWORD *)&Instance->max_length;
  v9 = Instance;
  if ( v8 )
  {
    if ( (int)v8 >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= (unsigned int)v8 )
          sub_1BCAA44(Instance, v7);
        v11 = v9->m_Items[v10];
        if ( !v11 )
          goto LABEL_17;
        Instance = (EventMissionConditionEntity_array *)EventMissionConditionEntity__getMissionProgress(
                                                          v9->m_Items[v10],
                                                          0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
        LODWORD(v8) = v9->max_length;
        if ( (int)++v10 >= (int)v8 )
          goto LABEL_16;
      }
      this->fields.currentProgressType = v11->fields.missionProgressType - 1;
    }
LABEL_16:
    UserMissionProgressInfo__setMissionCondInfo(this, v7);
  }
}


void __fastcall UserMissionProgressInfo__setMissionCondInfo(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  void *Instance; // x0
  __int64 v19; // x1
  int32_t currentProgressType; // w8
  int32_t v21; // w8
  int32_t v22; // w9
  int v23; // w8
  __int64 v24; // x9
  __int64 v25; // x12
  int32_t v26; // w12
  int64_t *p_progNum; // x22
  int64_t *p_targetNum; // x23
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *current; // x20
  int64_t v32; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  __int64 v35; // x8
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1748A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B1748A = 1;
  }
  memset(&v36, 0, sizeof(v36));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      v23 = *((_DWORD *)Instance + 6);
      if ( v23 < 1 )
        goto LABEL_24;
      v24 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v24 >= v23 )
          sub_1BCAA44(Instance, v19);
        v25 = *((_QWORD *)Instance + v24 + 4);
        if ( !v25 )
          break;
        if ( *(_DWORD *)(v25 + 24) == this->fields.missionId )
        {
          if ( *(_DWORD *)(v25 + 32) == 4 )
            v26 = 3;
          else
            v26 = 4;
          this->fields.currentProgStatus = v26;
        }
        if ( (int)++v24 >= v23 )
          goto LABEL_24;
      }
LABEL_41:
      sub_1BCAA3C(Instance, v19);
    case 3:
      v21 = 2;
      v22 = 4;
      goto LABEL_10;
    case 2:
      v21 = 1;
      v22 = 3;
LABEL_10:
      this->fields.currentProgStatus = v21;
      this->fields.condMsgType = v22;
      goto LABEL_24;
  }
  this->fields.currentProgStatus = 0;
  this->fields.condMsgType = 2;
LABEL_24:
  if ( this->fields.currentProgStatus == 2 )
    this->fields.currentProgStatus = 5;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( 1 )
    {
      v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v29 )
        break;
      if ( this->fields.currentProgStatus )
      {
        current = v36.fields._current;
        if ( !v36.fields._current )
          sub_1BCAA3C(v29, v30);
        v32 = *p_progNum;
        if ( LODWORD(v36.fields._current[2].monitor) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v36.fields._current,
                                    0LL);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v32 + ProgressNumByDateType;
          v35 = 1LL;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v36.fields._current,
                         0LL)
                     + v32;
          v35 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v35;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}