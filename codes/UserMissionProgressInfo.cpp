void __fastcall UserMissionProgressInfo___ctor(UserMissionProgressInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserMissionProgressInfo___ctor_42514016(
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
  __int64 v6; // x2
  __int64 v7; // x8
  EventMissionConditionEntity_array *v8; // x20
  __int64 v9; // x22
  EventMissionConditionEntity_o *v10; // x21

  if ( (byte_4B0342C & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B0342C = 1;
  }
  this->fields.currentProgressType = 4;
  Instance = (EventMissionConditionEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (EventMissionConditionEntity_array *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___)) == 0LL
    || (Instance = EventMissionConditionMaster__getMissionCondList(
                     (EventMissionConditionMaster_o *)Instance,
                     this->fields.eventId,
                     this->fields.missionId,
                     0LL)) == 0LL )
  {
LABEL_17:
    sub_1BC3264(Instance, v5);
  }
  v7 = *(_QWORD *)&Instance->max_length;
  v8 = Instance;
  if ( v7 )
  {
    if ( (int)v7 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= (unsigned int)v7 )
          sub_1BC326C(Instance, v5, v6);
        v10 = v8->m_Items[v9];
        if ( !v10 )
          goto LABEL_17;
        Instance = (EventMissionConditionEntity_array *)EventMissionConditionEntity__getMissionProgress(
                                                          v8->m_Items[v9],
                                                          0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          break;
        LODWORD(v7) = v8->max_length;
        if ( (int)++v9 >= (int)v7 )
          goto LABEL_16;
      }
      this->fields.currentProgressType = v10->fields.missionProgressType - 1;
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
  __int64 v12; // x2
  int32_t currentProgressType; // w8
  int32_t v14; // w8
  int32_t v15; // w9
  int v16; // w8
  __int64 v17; // x9
  __int64 v18; // x12
  int32_t v19; // w12
  int64_t *p_progNum; // x22
  int64_t *p_targetNum; // x23
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x20
  int64_t v25; // x25
  int32_t ProgressNumByDateType; // w0
  int64_t *p_monitor; // x9
  __int64 v28; // x8
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B0342D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B0342D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
      v16 = *((_DWORD *)Instance + 6);
      if ( v16 < 1 )
        goto LABEL_24;
      v17 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v17 >= v16 )
          sub_1BC326C(Instance, v11, v12);
        v18 = *((_QWORD *)Instance + v17 + 4);
        if ( !v18 )
          break;
        if ( *(_DWORD *)(v18 + 24) == this->fields.missionId )
        {
          if ( *(_DWORD *)(v18 + 32) == 4 )
            v19 = 3;
          else
            v19 = 4;
          this->fields.currentProgStatus = v19;
        }
        if ( (int)++v17 >= v16 )
          goto LABEL_24;
      }
LABEL_41:
      sub_1BC3264(Instance, v11);
    case 3:
      v14 = 2;
      v15 = 4;
      goto LABEL_10;
    case 2:
      v14 = 1;
      v15 = 3;
LABEL_10:
      this->fields.currentProgStatus = v14;
      this->fields.condMsgType = v15;
      goto LABEL_24;
  }
  this->fields.currentProgStatus = 0;
  this->fields.condMsgType = 2;
LABEL_24:
  if ( this->fields.currentProgStatus == 2 )
    this->fields.currentProgStatus = 5;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__GetEnumerator__);
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v29,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__MoveNext__);
      if ( !v22 )
        break;
      if ( this->fields.currentProgStatus )
      {
        current = v29.fields._current;
        if ( !v29.fields._current )
          sub_1BC3264(v22, v23);
        v25 = *p_progNum;
        if ( LODWORD(v29.fields._current[2].monitor) == 12 )
        {
          ProgressNumByDateType = EventMissionConditionEntity__getProgressNumByDateType(
                                    (EventMissionConditionEntity_o *)v29.fields._current,
                                    0LL);
          p_monitor = &this->fields.targetNum;
          *p_progNum = v25 + ProgressNumByDateType;
          v28 = 1LL;
        }
        else
        {
          *p_progNum = EventMissionConditionEntity__getProgressNum(
                         (EventMissionConditionEntity_o *)v29.fields._current,
                         0LL)
                     + v25;
          v28 = *p_targetNum;
          p_monitor = (int64_t *)&current[3].monitor;
        }
        *p_targetNum = *p_monitor + v28;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v29,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventMissionConditionEntity__Dispose__);
  }
}