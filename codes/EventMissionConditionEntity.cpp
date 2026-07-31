void EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59387CB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59387CB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_59387C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59387C0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *EventMissionConditionEntity__CreatePrimaryKey(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return EventMissionConditionEntity__CreatePK(
           this->fields.missionId,
           this->fields.missionProgressType,
           this->fields.id,
           v2);
}


int64_t EventMissionConditionEntity__GetMaxProgNum(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t ProgressNum; // x0
  int64_t v5; // x1
  struct System_Int32_array *targetIds; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x25
  __int64 v9; // x28
  struct System_Int32_array *v10; // x8
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  int32_t v14; // w21
  struct System_Int64_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10

  if ( (byte_59387C4 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_long__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_long___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_long__TypeInfo);
    byte_59387C4 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_21FFEBC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_44378D8 *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_17;
  max_length = targetIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    v9 = (unsigned int)max_length;
    while ( 1 )
    {
      v10 = this->fields.targetIds;
      if ( !v10 )
        break;
      if ( v8 >= LODWORD(v10->max_length) )
        sub_21FFED4(ProgressNum);
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      v14 = v10->m_Items[v8];
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v5);
      ProgressNum = CondType__GetProgressNum(condType, v14, targetNum, missionTargetId, 0);
      if ( !v3 )
        break;
      items = v3->fields._items;
      v16 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      v5 = ProgressNum;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          ProgressNum,
          *(const MethodInfo_4438164 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = ProgressNum;
      }
      if ( v9 == ++v8 )
        return System_Linq_Enumerable__Max_78395108((System_Collections_Generic_IEnumerable_long__o *)v3, 0);
    }
LABEL_17:
    sub_21FFECC(ProgressNum, v5);
  }
  return System_Linq_Enumerable__Max_78395108((System_Collections_Generic_IEnumerable_long__o *)v3, 0);
}


System_Collections_Generic_HashSet_int__o *EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
        EventMissionConditionEntity_o *this,
        int64_t deemedTime,
        const MethodInfo *method)
{
  __int64 Time; // x20
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct System_Int32_array *targetIds; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x26
  int32_t v9; // w23
  int monitor; // w8
  Il2CppObject *MasterData_object; // x24
  Il2CppClass *klass; // x28
  const char *namespaze; // x8
  unsigned __int64 v14; // x29
  int32_t v15; // w24
  System_Collections_Generic_HashSet_int__o *v17; // [xsp+8h] [xbp-98h]
  Il2CppObject *v19; // [xsp+18h] [xbp-88h] BYREF
  UserEventRandomMissionEntity_o *v20; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v21; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v22; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  Time = deemedTime;
  if ( (byte_59387CA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
    sub_21FFC50(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59387CA = 1;
  }
  v22 = 0;
  entity = 0;
  v21 = 0;
  v19 = 0;
  v20 = 0;
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, deemedTime);
    Time = NetworkManager__getTime(0);
  }
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
LABEL_60:
      sub_21FFECC(Instance, v5);
    max_length = targetIds->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          goto LABEL_61;
        v9 = targetIds->m_Items[i];
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_60;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          goto LABEL_60;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      &entity,
                                      v9,
                                      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_60;
          monitor = (int)entity[3].monitor;
          if ( monitor > 2 )
          {
            if ( monitor == 3 )
            {
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_60;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_60;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            &v21,
                                            this->fields.missionTargetId,
                                            (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = (DataManager_o *)v21;
                if ( !v21 )
                  goto LABEL_60;
                Instance = (DataManager_o *)MstMissionEntity__isOpen((MstMissionEntity_o *)v21, Time, 0);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                  goto LABEL_56;
              }
            }
            else
            {
              if ( monitor != 4 )
                goto LABEL_56;
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_60;
              MasterData_object = DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
              if ( !byte_5931D52 )
              {
                sub_21FFC50(&NetworkManager_TypeInfo);
                byte_5931D52 = 1;
              }
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
              if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
                Instance = (DataManager_o *)NetworkManager_TypeInfo;
              }
              if ( !MasterData_object )
                goto LABEL_60;
              Instance = (DataManager_o *)UserEventRandomMissionMaster__TryGetEntity(
                                            (UserEventRandomMissionMaster_o *)MasterData_object,
                                            &v20,
                                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                            this->fields.missionId,
                                            0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = (DataManager_o *)v20;
                if ( !v20 )
                  goto LABEL_60;
                Instance = (DataManager_o *)UserEventRandomMissionEntity__IsInProgress(v20, 0);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
LABEL_56:
                  Instance = (DataManager_o *)v17;
                  if ( !v17 )
                    goto LABEL_60;
                  Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                                v17,
                                                v9,
                                                (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
              }
            }
          }
          else if ( monitor == 1 )
          {
            klass = entity[4].klass;
            if ( !klass )
              goto LABEL_60;
            namespaze = klass->_1.namespaze;
            if ( (int)namespaze >= 1 )
            {
              v14 = 0;
              while ( v14 < (unsigned int)namespaze )
              {
                v15 = *((_DWORD *)&klass->_1.byval_arg.data + v14);
                Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !Instance )
                  goto LABEL_60;
                Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                              Instance,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMaster___);
                if ( !Instance )
                  goto LABEL_60;
                Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                              &v19,
                                              v15,
                                              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
                if ( ((unsigned __int8)Instance & 1) != 0 )
                {
                  Instance = (DataManager_o *)v19;
                  if ( !v19 )
                    goto LABEL_60;
                  Instance = (DataManager_o *)EventEntity__IsOpen_48919328((EventEntity_o *)v19, Time, 0, 0);
                  if ( ((unsigned __int8)Instance & 1) != 0 )
                    goto LABEL_56;
                }
                LODWORD(namespaze) = klass->_1.namespaze;
                if ( (__int64)++v14 >= (int)namespaze )
                  goto LABEL_58;
              }
LABEL_61:
              sub_21FFED4(Instance);
            }
          }
          else
          {
            if ( monitor != 2 )
              goto LABEL_56;
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_60;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
            if ( !Instance )
              goto LABEL_60;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          &v22,
                                          this->fields.missionId,
                                          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_60;
              if ( (__int64)v22[3].monitor <= Time && (__int64)v22[4].klass >= Time )
                goto LABEL_56;
            }
          }
        }
LABEL_58:
        LODWORD(max_length) = targetIds->max_length;
      }
    }
  }
  return v17;
}


int64_t EventMissionConditionEntity__GetProgNum(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  unsigned int condType; // w20
  int64_t IsMultiTargetParamCond; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  System_Int32_array *targetIds; // x19
  struct System_Int32_array *v9; // x26
  il2cpp_array_size_t max_length; // x8
  int64_t v11; // x20
  unsigned __int64 v12; // x27
  int32_t v13; // w21
  int32_t v14; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23

  if ( (byte_59387C2 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_59387C2 = 1;
  }
  condType = this->fields.condType;
  if ( condType <= 9 && ((1 << condType) & 0x2C0) != 0 )
    return EventMissionConditionEntity__GetMaxProgNum(this, method);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0);
  if ( (IsMultiTargetParamCond & 1) != 0 )
  {
    v7 = this->fields.condType;
    targetIds = this->fields.targetIds;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
    return CondType__GetProgressNumByTargetIds(v7, targetIds, 0);
  }
  else
  {
    v9 = this->fields.targetIds;
    if ( !v9 )
      sub_21FFECC(IsMultiTargetParamCond, v6);
    max_length = v9->max_length;
    if ( (int)max_length < 1 )
      return 0;
    v11 = 0;
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_21FFED4(IsMultiTargetParamCond);
      v13 = v9->m_Items[v12];
      v14 = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v6);
      IsMultiTargetParamCond = CondType__GetProgressNum(v14, v13, targetNum, missionTargetId, 0);
      LODWORD(max_length) = v9->max_length;
      ++v12;
      v11 += IsMultiTargetParamCond;
    }
    while ( (__int64)v12 < (int)max_length );
    return v11;
  }
}


bool EventMissionConditionEntity__GetUserEventMissionFixProgress(
        EventMissionConditionEntity_o *this,
        UserEventMissionFixEntity_o *entity,
        const MethodInfo *method)
{
  int32_t progressType; // w8

  if ( !entity )
    sub_21FFECC(this, 0);
  progressType = entity->fields.progressType;
  if ( progressType == 3 )
    return this->fields.missionProgressType != 4 || this->fields.targetNum <= entity->fields.num;
  else
    return progressType == 2 && (this->fields.missionProgressType & 0xFFFFFFFD) == 0;
}


bool EventMissionConditionEntity__HasFlag(EventMissionConditionEntity_o *this, int32_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool EventMissionConditionEntity__IsActiveDailyMission(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_int__o *v6; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  __int64 v10; // x10
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntitiesFromTargetId; // x21
  EventMissionConditionEntity___c_c *v14; // x8
  struct EventMissionConditionEntity___c_StaticFields *v15; // x9
  System_Func_object__int__o *_9__26_1; // x22
  Il2CppObject *v17; // x23
  struct EventMissionConditionEntity___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  Il2CppObject *object; // x0
  System_Collections_Generic_List_object__o *ListFromMissionTargetId; // x20
  System_Predicate_object__o *v29; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v31; // x1
  int32_t condType; // w8
  System_Collections_Generic_List_T__o *v33; // x20
  EventMissionConditionEntity___c_c *v34; // x0
  struct EventMissionConditionEntity___c_StaticFields *v35; // x8
  System_Func_object__bool__o *_9__26_3; // x19
  Il2CppObject *v37; // x21
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct EventMissionConditionEntity___c_StaticFields *v44; // x0
  MissionNaviTransitionBoardItem_o *p__9__26_3; // x0
  EventMissionConditionEntity___c_c *v46; // x0
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x8
  Il2CppObject *v48; // x21
  struct EventMissionConditionEntity___c_StaticFields *v49; // x0
  Il2CppObject *v50; // x20
  struct System_Int32_array *targetIds; // x8
  UserEventMissionCondDetailEntity_o *v53; // [xsp+0h] [xbp-60h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_59387C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_UserEventMissionEntity___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    sub_21FFC50(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__);
    sub_21FFC50(&System_Func_UserEventMissionEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_EventMissionConditionEntity__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&System_Predicate_UserEventMissionEntity__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__);
    sub_21FFC50(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__);
    sub_21FFC50(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__);
    sub_21FFC50(&EventMissionConditionEntity___c_TypeInfo);
    byte_59387C9 = 1;
  }
  v53 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_69;
  if ( !UserEventMissionMaster__TryGetEntity(
          (UserEventMissionMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          this->fields.missionId,
          0) )
  {
LABEL_36:
    ListFromMissionTargetId = (System_Collections_Generic_List_object__o *)UserEventMissionMaster__getListFromMissionTargetId(
                                                                             (UserEventMissionMaster_o *)MasterData_object,
                                                                             this->fields.missionTargetId,
                                                                             0);
    v29 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_UserEventMissionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v29,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      0);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_object___FindAll(
              ListFromMissionTargetId,
              (System_Predicate_T__o *)v29,
              (const MethodInfo_4450234 *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v33 = All;
        if ( condType == 24 )
        {
          v46 = EventMissionConditionEntity___c_TypeInfo;
          if ( !*(&EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo, v31);
            v46 = EventMissionConditionEntity___c_TypeInfo;
          }
          static_fields = v46->static_fields;
          _9__26_3 = (System_Func_object__bool__o *)static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v33,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !*(&v46->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v46, v31);
            static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v48 = (Il2CppObject *)static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v48,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            0);
          v49 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v49->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (MissionNaviTransitionBoardItem_o *)&v49->__9__26_3;
          goto LABEL_52;
        }
        if ( condType == 23 )
        {
          v34 = EventMissionConditionEntity___c_TypeInfo;
          if ( !*(&EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo, v31);
            v34 = EventMissionConditionEntity___c_TypeInfo;
          }
          v35 = v34->static_fields;
          _9__26_3 = (System_Func_object__bool__o *)v35->__9__26_2;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v33,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !*(&v34->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v34, v31);
            v35 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v37 = (Il2CppObject *)v35->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v37,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            0);
          v44 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v44->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (MissionNaviTransitionBoardItem_o *)&v44->__9__26_2;
LABEL_52:
          sub_21FFBF4(p__9__26_3, (int32_t)_9__26_3, v38, v39, v40, v41, v42, v43);
          return BasicHelper__Any_object_(
                   v33,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v50 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        targetIds = this->fields.targetIds;
        if ( targetIds )
        {
          if ( !LODWORD(targetIds->max_length) )
            sub_21FFED4(Instance);
          if ( v50 )
          {
            Instance = (DataManager_o *)UserEventMissionCondDetailMaster__TryGetEntity(
                                          (UserEventMissionCondDetailMaster_o *)v50,
                                          &v53,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          targetIds->m_Items[0],
                                          0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              return 0;
            if ( v53 )
              return v53->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_69:
    sub_21FFECC(Instance, v4);
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v6 )
    goto LABEL_69;
  items = v6->fields._items;
  v8 = Method_System_Collections_Generic_List_int__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_69;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      4,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v8 = Method_System_Collections_Generic_List_int__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_69;
  }
  else
  {
    v6->fields._size = size + 1;
    items->m_Items[size] = 4;
    ++v6->fields._version;
  }
  v10 = v6->fields._size;
  if ( (unsigned int)v10 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      5,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = v10 + 1;
    items->m_Items[v10] = 5;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v6,
          this->fields.missionProgressType,
          (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_33;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_69;
  EntitiesFromTargetId = EventMissionConditionMaster__GetEntitiesFromTargetId(
                           (EventMissionConditionMaster_o *)Instance,
                           this->fields.missionTargetId,
                           v11);
  v14 = EventMissionConditionEntity___c_TypeInfo;
  if ( !*(&EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo, v12);
    v14 = EventMissionConditionEntity___c_TypeInfo;
  }
  v15 = v14->static_fields;
  _9__26_1 = (System_Func_object__int__o *)v15->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v12);
      v15 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)v15->__9;
    _9__26_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_EventMissionConditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_1,
      v17,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      0);
    v18 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v18->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18->__9__26_1, (int32_t)_9__26_1, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  object = System_Linq_Enumerable__First_object_(
             v25,
             (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
  if ( !object || LODWORD(object[1].klass) != this->fields.missionId )
  {
LABEL_33:
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_69;
    if ( UserEventMissionEntity__IsTodayMissionData(entity, 0) )
      return 1;
    goto LABEL_36;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
  return UserEventMissionEntity__IsTodayMissionData(entity, 0);
}


bool EventMissionConditionEntity__IsIgnoreStartCondition(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_59387C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59387C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.missionId,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return (BYTE4(Instance[1].klass) >> 3) & 1;
}


bool EventMissionConditionEntity__MissionTypeORCond(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  return (this->fields.condType < 0xAu) & (0x2C0u >> this->fields.condType);
}


bool EventMissionConditionEntity___IsActiveDailyMission_b__26_0(
        EventMissionConditionEntity_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  if ( !target || (targetIds = this->fields.targetIds) == 0 )
    sub_21FFECC(this, target);
  if ( !LODWORD(targetIds->max_length) )
    sub_21FFED4(this);
  return target->fields.missionId == targetIds->m_Items[0] && UserEventMissionEntity__IsTodayMissionData(target, 0);
}


bool EventMissionConditionEntity__getMissionProgress(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x2
  int32_t condType; // w20
  int32_t v8; // w20
  int64_t targetNum; // x19
  System_Int32_array *targetIds; // x21
  struct System_Int32_array *v12; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x25
  int32_t v15; // w20
  int32_t v16; // w22
  int64_t v17; // x21
  Il2CppObject *v18; // [xsp+8h] [xbp-58h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59387C1 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59387C1 = 1;
  }
  entity = 0;
  v18 = 0;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_41;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_41;
    if ( UserEventMissionFixMaster__TryGetEntity(
           (UserEventMissionFixMaster_o *)MasterData_object,
           &entity,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           this->fields.missionId,
           0) )
    {
      LOBYTE(Instance) = EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v6);
      return (unsigned __int8)Instance & 1;
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_41;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v18,
                                this->fields.missionId,
                                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_41;
    if ( LODWORD(v18[1].monitor) == 3
      && !EventMissionConditionEntity__IsActiveDailyMission(this, v4)
      && this->fields.missionProgressType != 1 )
    {
      LOBYTE(Instance) = 0;
      return (unsigned __int8)Instance & 1;
    }
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
  {
    LOBYTE(Instance) = EventMissionConditionEntity__GetProgNum(this, v4) >= this->fields.targetNum;
    return (unsigned __int8)Instance & 1;
  }
  condType = this->fields.condType;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
  Instance = (DataManager_o *)CondType__IsMultiTargetParamCond(condType, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v8 = this->fields.condType;
    targetIds = this->fields.targetIds;
    targetNum = this->fields.targetNum;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
    LOBYTE(Instance) = CondType__IsOpenWithSumOfProgressCount(v8, targetIds, targetNum, 0);
    return (unsigned __int8)Instance & 1;
  }
  v12 = this->fields.targetIds;
  if ( !v12 )
LABEL_41:
    sub_21FFECC(Instance, v4);
  max_length = v12->max_length;
  if ( (int)max_length < 1 )
  {
    LOBYTE(Instance) = 1;
  }
  else
  {
    v14 = 0;
    do
    {
      if ( v14 >= (unsigned int)max_length )
        sub_21FFED4(Instance);
      v15 = v12->m_Items[v14];
      v16 = this->fields.condType;
      v17 = this->fields.targetNum;
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
      Instance = (DataManager_o *)CondType__IsOpen(v16, v15, v17, 0, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      LODWORD(max_length) = v12->max_length;
      ++v14;
    }
    while ( (__int64)v14 < (int)max_length );
  }
  return (unsigned __int8)Instance & 1;
}


int64_t EventMissionConditionEntity__getProgressNum(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1
  int64_t result; // x0
  Il2CppObject *v8; // [xsp+0h] [xbp-40h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59387C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59387C3 = 1;
  }
  v8 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v6) )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_27;
    Instance = (DataManager_o *)UserEventMissionFixMaster__TryGetEntity(
                                  (UserEventMissionFixMaster_o *)MasterData_object,
                                  &entity,
                                  *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                  this->fields.missionId,
                                  0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
      {
        if ( entity->fields.progressType == 3 )
          return entity->fields.num;
        return 0;
      }
LABEL_27:
      sub_21FFECC(Instance, v4);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v8,
                                this->fields.missionId,
                                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_27;
    if ( LODWORD(v8[1].monitor) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v4) )
      return 0;
  }
  result = EventMissionConditionEntity__GetProgNum(this, v4);
  if ( result >= this->fields.targetNum )
    return this->fields.targetNum;
  return result;
}


int32_t EventMissionConditionEntity__getProgressNumByDateType(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int64_t targetNum; // x19

  if ( (byte_59387C5 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_59387C5 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__GetNumIsOpenByDate(targetNum, 0);
}


bool EventMissionConditionEntity__isMissionClear(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  EventMissionConditionEntity_o *v2; // x19
  struct System_Int32_array *targetIds; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x22
  bool v6; // w21
  unsigned __int64 v7; // x24
  struct System_Int32_array *v8; // x8
  int32_t v9; // w20

  v2 = this;
  if ( (byte_59387C7 & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_59387C7 = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
    goto LABEL_15;
  max_length = targetIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    v6 = 0;
    v7 = (unsigned int)max_length;
    while ( 1 )
    {
      v8 = v2->fields.targetIds;
      if ( !v8 )
        break;
      if ( v5 >= LODWORD(v8->max_length) )
        sub_21FFED4(this);
      v9 = v8->m_Items[v5];
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
      this = (EventMissionConditionEntity_o *)CondType__IsMissionClear(v9, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v6 = ++v5 >= v7;
        if ( v7 != v5 )
          continue;
      }
      return v6;
    }
LABEL_15:
    sub_21FFECC(this, method);
  }
  return 1;
}


bool EventMissionConditionEntity__isQuestClear(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  EventMissionConditionEntity_o *v2; // x19
  struct System_Int32_array *targetIds; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v5; // x22
  bool v6; // w21
  unsigned __int64 v7; // x24
  struct System_Int32_array *v8; // x8
  int32_t v9; // w20

  v2 = this;
  if ( (byte_59387C6 & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_21FFC50(&CondType_TypeInfo);
    byte_59387C6 = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
    goto LABEL_15;
  max_length = targetIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v5 = 0;
    v6 = 0;
    v7 = (unsigned int)max_length;
    while ( 1 )
    {
      v8 = v2->fields.targetIds;
      if ( !v8 )
        break;
      if ( v5 >= LODWORD(v8->max_length) )
        sub_21FFED4(this);
      v9 = v8->m_Items[v5];
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
      this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_47254560(v9, -1, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v6 = ++v5 >= v7;
        if ( v7 != v5 )
          continue;
      }
      return v6;
    }
LABEL_15:
    sub_21FFECC(this, method);
  }
  return 1;
}


void EventMissionConditionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59387CC & 1) == 0 )
  {
    sub_21FFC50(&EventMissionConditionEntity___c_TypeInfo);
    byte_59387CC = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventMissionConditionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionConditionEntity___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventMissionConditionEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventMissionConditionEntity___c___ctor(EventMissionConditionEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t EventMissionConditionEntity___c___IsActiveDailyMission_b__26_1(
        EventMissionConditionEntity___c_o *this,
        EventMissionConditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.missionId;
}


bool EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_21FFECC(this, 0);
  return target->fields.missionProgressType > 3;
}


bool EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_21FFECC(this, 0);
  return target->fields.missionProgressType == 5;
}