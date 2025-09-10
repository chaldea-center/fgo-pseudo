void UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserMissionProgressInfo___ctor_43308800(
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
  __int64 v5; // x2
  il2cpp_array_size_t max_length; // x8
  EventMissionConditionEntity_array *v7; // x20
  __int64 v8; // x22
  EventMissionConditionEntity_o *v9; // x21

  if ( (byte_4C2873B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2873B = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0
    || (Instance = EventMissionConditionMaster__getMissionCondList(
                     (EventMissionConditionMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.missionId,
                     0)) == 0 )
  {
LABEL_17:
    sub_1C2D6EC(Instance, v4);
  }
  max_length = Instance->max_length;
  v7 = Instance;
  if ( max_length )
  {
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= (unsigned int)max_length )
          sub_1C2D6F4(Instance, v4, v5);
        v9 = v7->m_Items[v8];
        if ( !v9 )
          goto LABEL_17;
        Instance = (EventMissionConditionEntity_array *)EventMissionConditionEntity__getMissionProgress(
                                                          v7->m_Items[v8],
                                                          0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
        LODWORD(max_length) = v7->max_length;
        if ( (int)++v8 >= (int)max_length )
          goto LABEL_16;
      }
      this->fields.currentProgressType = v9->fields.missionProgressType - 1;
    }
LABEL_16:
    UserMissionProgressInfo__setMissionCondInfo(this, v4);
  }
}


void UserMissionProgressInfo__setMissionCondInfo(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t currentProgressType; // w8
  int32_t v7; // w8
  int32_t v8; // w9
  int v9; // w8
  __int64 v10; // x9
  __int64 v11; // x12
  int32_t v12; // w12
  int64_t *p_progNum; // x22
  int64_t *p_targetNum; // x23
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x20
  int64_t v18; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  __int64 v21; // x8
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2873C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2873C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      v9 = *((_DWORD *)Instance + 6);
      if ( v9 < 1 )
        goto LABEL_24;
      v10 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= v9 )
          sub_1C2D6F4(Instance, v4, v5);
        v11 = *((_QWORD *)Instance + v10 + 4);
        if ( !v11 )
          break;
        if ( *(_DWORD *)(v11 + 24) == this->fields.missionId )
        {
          if ( *(_DWORD *)(v11 + 32) == 4 )
            v12 = 3;
          else
            v12 = 4;
          this->fields.currentProgStatus = v12;
        }
        if ( (int)++v10 >= v9 )
          goto LABEL_24;
      }
LABEL_41:
      sub_1C2D6EC(Instance, v4);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v15 )
        break;
      if ( this->fields.currentProgStatus )
      {
        current = v22.fields._current;
        if ( !v22.fields._current )
          sub_1C2D6EC(v15, v16);
        v18 = *p_progNum;
        if ( *(_DWORD *)((char *)&v22.fields._current->klass + (unsigned __int64)&qword_28) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v22.fields._current,
                                    0);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v18 + ProgressNumByDateType;
          v21 = 1;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v22.fields._current,
                         0)
                     + v18;
          v21 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v21;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}