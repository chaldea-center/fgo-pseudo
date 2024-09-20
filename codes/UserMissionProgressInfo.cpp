void __fastcall UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressInfo___ctor_40550328(
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
  EventMissionConditionEntity_array *Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x8
  EventMissionConditionEntity_array *v6; // x20
  __int64 v7; // x22
  EventMissionConditionEntity_o *v8; // x21

  if ( (byte_4A5C3C0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C3C0 = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = EventMissionConditionMaster__getMissionCondList(
                     (EventMissionConditionMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.missionId,
                     0LL)) == 0LL )
  {
LABEL_17:
    sub_1B8880C(Instance, v4);
  }
  v5 = *(_QWORD *)&Instance->max_length;
  v6 = Instance;
  if ( v5 )
  {
    if ( (int)v5 >= 1 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= (unsigned int)v5 )
          sub_1B88814(Instance, v4);
        v8 = v6->m_Items[v7];
        if ( !v8 )
          goto LABEL_17;
        Instance = (EventMissionConditionEntity_array *)EventMissionConditionEntity__getMissionProgress(
                                                          v6->m_Items[v7],
                                                          0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
        LODWORD(v5) = v6->max_length;
        if ( (int)++v7 >= (int)v5 )
          goto LABEL_16;
      }
      this->fields.currentProgressType = v8->fields.missionProgressType - 1;
    }
LABEL_16:
    UserMissionProgressInfo__setMissionCondInfo(this, v4);
  }
}


void __fastcall UserMissionProgressInfo__setMissionCondInfo(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  int32_t currentProgressType; // w8
  int32_t v6; // w8
  int32_t v7; // w9
  int v8; // w8
  __int64 v9; // x9
  __int64 v10; // x12
  int32_t v11; // w12
  int64_t *p_progNum; // x22
  int64_t *p_targetNum; // x23
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  int64_t v17; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  __int64 v20; // x8
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5C3C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5C3C1 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      v8 = *((_DWORD *)Instance + 6);
      if ( v8 < 1 )
        goto LABEL_24;
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= v8 )
          sub_1B88814(Instance, v4);
        v10 = *((_QWORD *)Instance + v9 + 4);
        if ( !v10 )
          break;
        if ( *(_DWORD *)(v10 + 24) == this->fields.missionId )
        {
          if ( *(_DWORD *)(v10 + 32) == 4 )
            v11 = 3;
          else
            v11 = 4;
          this->fields.currentProgStatus = v11;
        }
        if ( (int)++v9 >= v8 )
          goto LABEL_24;
      }
LABEL_41:
      sub_1B8880C(Instance, v4);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v14 )
        break;
      if ( this->fields.currentProgStatus )
      {
        current = v21.fields._current;
        if ( !v21.fields._current )
          sub_1B8880C(v14, v15);
        v17 = *p_progNum;
        if ( LODWORD(v21.fields._current[2].monitor) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v21.fields._current,
                                    0LL);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v17 + ProgressNumByDateType;
          v20 = 1LL;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v21.fields._current,
                         0LL)
                     + v17;
          v20 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v20;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}