void UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserMissionProgressInfo___ctor_43600292(
        UserMissionProgressInfo_o *this,
        int32_t eventId,
        int32_t missionId,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.eventId = eventId;
  this->fields.missionId = missionId;
  UserMissionProgressInfo__checkMissionCond(this, v7);
}


void UserMissionProgressInfo__Finalize(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0);
}


void UserMissionProgressInfo__checkMissionCond(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  EventMissionConditionEntity_array *Instance; // x0
  const MethodInfo *v4; // x1
  il2cpp_array_size_t max_length; // x8
  EventMissionConditionEntity_array *v6; // x20
  __int64 v7; // x22
  EventMissionConditionEntity_o *v8; // x21

  if ( (byte_4C58209 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C58209 = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0
    || (Instance = EventMissionConditionMaster__getMissionCondList(
                     (EventMissionConditionMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.missionId,
                     0)) == 0 )
  {
LABEL_17:
    sub_1C3E7C0(Instance, v4);
  }
  max_length = Instance->max_length;
  v6 = Instance;
  if ( max_length )
  {
    if ( (int)max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= (unsigned int)max_length )
          sub_1C3E7C8(Instance, v4);
        v8 = v6->m_Items[v7];
        if ( !v8 )
          goto LABEL_17;
        Instance = (EventMissionConditionEntity_array *)EventMissionConditionEntity__getMissionProgress(
                                                          v6->m_Items[v7],
                                                          0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
        LODWORD(max_length) = v6->max_length;
        if ( (int)++v7 >= (int)max_length )
          goto LABEL_16;
      }
      this->fields.currentProgressType = v8->fields.missionProgressType - 1;
    }
LABEL_16:
    UserMissionProgressInfo__setMissionCondInfo(this, v4);
  }
}


void UserMissionProgressInfo__setMissionCondInfo(UserMissionProgressInfo_o *this, const MethodInfo *method)
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

  if ( (byte_4C5820A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5820A = 1;
  }
  memset(&v21, 0, sizeof(v21));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = UserEventMissionMaster__getUserEventMissionList(
               (UserEventMissionMaster_o *)Instance,
               this->fields.eventId,
               0);
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
      v9 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= v8 )
          sub_1C3E7C8(Instance, v4);
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
      sub_1C3E7C0(Instance, v4);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = EventMissionConditionMaster__getMissionCondListByType(
               (EventMissionConditionMaster_o *)Instance,
               this->fields.eventId,
               this->fields.missionId,
               this->fields.condMsgType,
               0);
  this->fields.progNum = 0;
  p_progNum = &this->fields.progNum;
  this->fields.targetNum = 0;
  p_targetNum = &this->fields.targetNum;
  if ( !Instance )
    goto LABEL_41;
  if ( *((int *)Instance + 6) >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( 1 )
    {
      v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v14 )
        break;
      if ( this->fields.currentProgStatus )
      {
        current = v21.fields._current;
        if ( !v21.fields._current )
          sub_1C3E7C0(v14, v15);
        v17 = *p_progNum;
        if ( *(_DWORD *)((char *)&v21.fields._current->klass + (unsigned __int64)&qword_28) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v21.fields._current,
                                    0);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v17 + ProgressNumByDateType;
          v20 = 1;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v21.fields._current,
                         0)
                     + v17;
          v20 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v20;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}