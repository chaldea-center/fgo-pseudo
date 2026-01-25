void EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE6B7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEE6B7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4CEE6AC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEE6AC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  unsigned __int64 v7; // x25
  __int64 max_length; // x28
  int32_t v9; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  struct System_Int64_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4CEE6B0 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CEE6B0 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C7BD34(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_38265DC *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)targetIds->max_length >= 1 )
  {
    v7 = 0;
    max_length = (unsigned int)targetIds->max_length;
    do
    {
      if ( v7 >= LODWORD(targetIds->max_length) )
        sub_1C7BD48(ProgressNum);
      v9 = targetIds->m_Items[v7];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ProgressNum = CondType__GetProgressNum(condType, v9, targetNum, missionTargetId, 0);
      if ( !v3 )
        break;
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_long__Add__;
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
          *(const MethodInfo_3826E30 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = ProgressNum;
      }
      if ( max_length == ++v7 )
        return System_Linq_Enumerable__Max_67177848((System_Collections_Generic_IEnumerable_long__o *)v3, 0);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_16:
    sub_1C7BD40(ProgressNum, v5);
  }
  return System_Linq_Enumerable__Max_67177848((System_Collections_Generic_IEnumerable_long__o *)v3, 0);
}


System_Collections_Generic_HashSet_int__o *EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
        EventMissionConditionEntity_o *this,
        int64_t deemedTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct System_Int32_array *targetIds; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x26
  int32_t v9; // w23
  Il2CppClass *klass; // x28
  const char *namespaze; // x8
  unsigned __int64 v12; // x29
  int32_t v13; // w24
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_HashSet_int__o *v16; // [xsp+8h] [xbp-98h]
  Il2CppObject *v18; // [xsp+18h] [xbp-88h] BYREF
  UserEventRandomMissionEntity_o *v19; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v20; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v21; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CEE6B6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE6B6 = 1;
  }
  v21 = 0;
  entity = 0;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  if ( !deemedTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    deemedTime = NetworkManager__getTime(0);
  }
  v16 = (System_Collections_Generic_HashSet_int__o *)sub_1C7BD34(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v16,
    (const MethodInfo_36E9940 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_56;
    max_length = targetIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)max_length )
LABEL_57:
          sub_1C7BD48(Instance);
        v9 = targetIds->m_Items[v8];
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      &entity,
                                      v9,
                                      (const MethodInfo_342E348 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          switch ( LODWORD(entity[3].monitor) )
          {
            case 1:
              klass = entity[4].klass;
              if ( !klass )
                goto LABEL_56;
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze < 1 )
                goto LABEL_54;
              v12 = 0;
              break;
            case 2:
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            &v21,
                                            this->fields.missionId,
                                            (const MethodInfo_342E348 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              if ( !v21 )
                goto LABEL_56;
              if ( (__int64)v21[3].monitor > deemedTime || (__int64)v21[4].klass < deemedTime )
                goto LABEL_54;
              goto LABEL_52;
            case 3:
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            &v20,
                                            this->fields.missionTargetId,
                                            (const MethodInfo_342E348 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              Instance = (DataManager_o *)v20;
              if ( !v20 )
                goto LABEL_56;
              Instance = (DataManager_o *)MstMissionEntity__isOpen((MstMissionEntity_o *)v20, deemedTime, 0);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              goto LABEL_52;
            case 4:
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_56;
              MasterData_object = DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4CE827C )
              {
                sub_1C7BAE8(&NetworkManager_TypeInfo);
                byte_4CE827C = 1;
              }
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                Instance = (DataManager_o *)NetworkManager_TypeInfo;
              }
              if ( !MasterData_object )
                goto LABEL_56;
              Instance = (DataManager_o *)UserEventRandomMissionMaster__TryGetEntity(
                                            (UserEventRandomMissionMaster_o *)MasterData_object,
                                            &v19,
                                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                            this->fields.missionId,
                                            0);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              Instance = (DataManager_o *)v19;
              if ( !v19 )
                goto LABEL_56;
              Instance = (DataManager_o *)UserEventRandomMissionEntity__IsInProgress(v19, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_52;
              goto LABEL_54;
            default:
              goto LABEL_52;
          }
          while ( 1 )
          {
            if ( v12 >= (unsigned int)namespaze )
              goto LABEL_57;
            v13 = *((_DWORD *)&klass->_1.byval_arg.data + v12);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_56;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Instance )
              goto LABEL_56;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          &v18,
                                          v13,
                                          (const MethodInfo_342E348 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)v18;
              if ( !v18 )
                goto LABEL_56;
              Instance = (DataManager_o *)EventEntity__IsOpen_42542088((EventEntity_o *)v18, deemedTime, 0, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                break;
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            if ( (__int64)++v12 >= (int)namespaze )
              goto LABEL_54;
          }
LABEL_52:
          Instance = (DataManager_o *)v16;
          if ( !v16 )
            break;
          Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                        v16,
                                        v9,
                                        (const MethodInfo_36EAB44 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_54:
        LODWORD(max_length) = targetIds->max_length;
        if ( (__int64)++v8 >= (int)max_length )
          return v16;
      }
LABEL_56:
      sub_1C7BD40(Instance, v5);
    }
  }
  return v16;
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

  if ( (byte_4CEE6AE & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEE6AE = 1;
  }
  condType = this->fields.condType;
  if ( condType <= 9 && ((1 << condType) & 0x2C0) != 0 )
    return EventMissionConditionEntity__GetMaxProgNum(this, method);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0);
  if ( (IsMultiTargetParamCond & 1) != 0 )
  {
    v7 = this->fields.condType;
    targetIds = this->fields.targetIds;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetProgressNumByTargetIds(v7, targetIds, 0);
  }
  else
  {
    v9 = this->fields.targetIds;
    if ( !v9 )
      sub_1C7BD40(IsMultiTargetParamCond, v6);
    max_length = v9->max_length;
    if ( (int)max_length < 1 )
      return 0;
    v11 = 0;
    v12 = 0;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C7BD48(IsMultiTargetParamCond);
      v13 = v9->m_Items[v12];
      v14 = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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
  int32_t missionProgressType; // w8

  if ( !entity )
    sub_1C7BD40(this, 0);
  progressType = entity->fields.progressType;
  if ( progressType == 3 )
  {
    if ( this->fields.missionProgressType == 4 )
      return this->fields.targetNum <= entity->fields.num;
  }
  else
  {
    if ( progressType != 2 )
      return 0;
    missionProgressType = this->fields.missionProgressType;
    if ( missionProgressType )
      return missionProgressType == 2;
  }
  return 1;
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
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntitiesFromTargetId; // x21
  EventMissionConditionEntity___c_c *v13; // x8
  System_Func_object__int__o *_9__26_1; // x22
  Il2CppObject *v15; // x23
  struct EventMissionConditionEntity___c_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  Il2CppObject *object; // x0
  System_Collections_Generic_List_object__o *ListFromMissionTargetId; // x20
  System_Predicate_object__o *v27; // x21
  System_Collections_Generic_List_T__o *All; // x0
  int32_t condType; // w8
  System_Collections_Generic_List_T__o *v30; // x20
  EventMissionConditionEntity___c_c *v31; // x0
  System_Func_object__bool__o *_9__26_3; // x19
  Il2CppObject *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct EventMissionConditionEntity___c_StaticFields *v40; // x0
  GrandQuestFolderBoardItem_o *p__9__26_3; // x0
  Il2CppObject *v42; // x20
  struct System_Int32_array *targetIds; // x8
  EventMissionConditionEntity___c_c *v44; // x0
  Il2CppObject *v45; // x21
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x0
  UserEventMissionCondDetailEntity_o *v48; // [xsp+0h] [xbp-60h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CEE6B5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_UserEventMissionEntity___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    sub_1C7BAE8(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__);
    sub_1C7BAE8(&System_Func_UserEventMissionEntity__bool__TypeInfo);
    sub_1C7BAE8(&System_Func_EventMissionConditionEntity__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&System_Predicate_UserEventMissionEntity__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__);
    sub_1C7BAE8(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__);
    sub_1C7BAE8(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__);
    sub_1C7BAE8(&EventMissionConditionEntity___c_TypeInfo);
    byte_4CEE6B5 = 1;
  }
  v48 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    v27 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_UserEventMissionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v27,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      0);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_object___FindAll(
              ListFromMissionTargetId,
              (System_Predicate_T__o *)v27,
              (const MethodInfo_383F50C *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v30 = All;
        if ( condType == 24 )
        {
          v44 = EventMissionConditionEntity___c_TypeInfo;
          if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v44 = EventMissionConditionEntity___c_TypeInfo;
          }
          _9__26_3 = (System_Func_object__bool__o *)v44->static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v30,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_3159728 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v44->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v44);
            v44 = EventMissionConditionEntity___c_TypeInfo;
          }
          v45 = (Il2CppObject *)v44->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v45,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            0);
          static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          static_fields->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (GrandQuestFolderBoardItem_o *)&static_fields->__9__26_3;
          goto LABEL_66;
        }
        if ( condType == 23 )
        {
          v31 = EventMissionConditionEntity___c_TypeInfo;
          if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v31 = EventMissionConditionEntity___c_TypeInfo;
          }
          _9__26_3 = (System_Func_object__bool__o *)v31->static_fields->__9__26_2;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v30,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_3159728 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            v31 = EventMissionConditionEntity___c_TypeInfo;
          }
          v33 = (Il2CppObject *)v31->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v33,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            0);
          v40 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v40->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (GrandQuestFolderBoardItem_o *)&v40->__9__26_2;
LABEL_66:
          sub_1C7BA8C(p__9__26_3, (int32_t)_9__26_3, v34, v35, v36, v37, v38, v39);
          return BasicHelper__Any_object_(
                   v30,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_3159728 *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v42 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CE827C )
        {
          sub_1C7BAE8(&NetworkManager_TypeInfo);
          byte_4CE827C = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        targetIds = this->fields.targetIds;
        if ( targetIds )
        {
          if ( !LODWORD(targetIds->max_length) )
            sub_1C7BD48(Instance);
          if ( v42 )
          {
            Instance = (DataManager_o *)UserEventMissionCondDetailMaster__TryGetEntity(
                                          (UserEventMissionCondDetailMaster_o *)v42,
                                          &v48,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          targetIds->m_Items[0],
                                          0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              return 0;
            if ( v48 )
              return v48->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_69:
    sub_1C7BD40(Instance, v4);
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
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
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
      *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = v10 + 1;
    items->m_Items[v10] = 5;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v6,
          this->fields.missionProgressType,
          (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_33;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_69;
  EntitiesFromTargetId = EventMissionConditionMaster__GetEntitiesFromTargetId(
                           (EventMissionConditionMaster_o *)Instance,
                           this->fields.missionTargetId,
                           v11);
  v13 = EventMissionConditionEntity___c_TypeInfo;
  if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
    v13 = EventMissionConditionEntity___c_TypeInfo;
  }
  _9__26_1 = (System_Func_object__int__o *)v13->static_fields->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = EventMissionConditionEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__26_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_EventMissionConditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_1,
      v15,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      0);
    v16 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v16->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->__9__26_1, (int32_t)_9__26_1, v17, v18, v19, v20, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_319EF58 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  object = System_Linq_Enumerable__First_object_(
             v23,
             (const MethodInfo_319601C *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
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

  if ( (byte_4CEE6B4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE6B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.missionId,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  return (BYTE4(Instance[1].klass) >> 3) & 1;
}


bool EventMissionConditionEntity__MissionTypeORCond(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  unsigned int v2; // w8
  _BOOL4 v3; // w0

  v2 = this->fields.condType - 6;
  if ( v2 > 3 )
    LOBYTE(v3) = 0;
  else
    return (0xBu >> (v2 & 0xF)) & 1;
  return v3;
}


bool EventMissionConditionEntity___IsActiveDailyMission_b__26_0(
        EventMissionConditionEntity_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  if ( !target || (targetIds = this->fields.targetIds) == 0 )
    sub_1C7BD40(this, target);
  if ( !LODWORD(targetIds->max_length) )
    sub_1C7BD48(this);
  return target->fields.missionId == targetIds->m_Items[0] && UserEventMissionEntity__IsTodayMissionData(target, 0);
}


bool EventMissionConditionEntity__getMissionProgress(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x2
  int32_t condType; // w20
  int32_t v9; // w21
  int64_t targetNum; // x19
  System_Int32_array *targetIds; // x20
  struct System_Int32_array *v12; // x24
  il2cpp_array_size_t max_length; // x8
  bool v14; // w25
  unsigned __int64 v15; // x26
  int32_t v16; // w20
  int32_t v17; // w22
  int64_t v18; // x21
  Il2CppObject *v20; // [xsp+0h] [xbp-60h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CEE6AD & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE6AD = 1;
  }
  v20 = 0;
  entity = 0;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_40;
    if ( UserEventMissionFixMaster__TryGetEntity(
           (UserEventMissionFixMaster_o *)MasterData_object,
           &entity,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           this->fields.missionId,
           0) )
    {
      return EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v6);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v20,
                                this->fields.missionId,
                                (const MethodInfo_342E348 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_40;
    if ( LODWORD(v20[1].monitor) == 3
      && !EventMissionConditionEntity__IsActiveDailyMission(this, v4)
      && this->fields.missionProgressType != 1 )
    {
      return 0;
    }
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
    return EventMissionConditionEntity__GetProgNum(this, v4) >= this->fields.targetNum;
  condType = this->fields.condType;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__IsMultiTargetParamCond(condType, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v9 = this->fields.condType;
    targetIds = this->fields.targetIds;
    targetNum = this->fields.targetNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpenWithSumOfProgressCount(v9, targetIds, targetNum, 0);
  }
  v12 = this->fields.targetIds;
  if ( !v12 )
LABEL_40:
    sub_1C7BD40(Instance, v4);
  max_length = v12->max_length;
  v14 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= (unsigned int)max_length )
        sub_1C7BD48(Instance);
      v16 = v12->m_Items[v15];
      v17 = this->fields.condType;
      v18 = this->fields.targetNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsOpen(v17, v16, v18, 0, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      LODWORD(max_length) = v12->max_length;
      v14 = (__int64)++v15 < (int)max_length;
    }
    while ( (__int64)v15 < (int)max_length );
  }
  return !v14;
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

  if ( (byte_4CEE6AF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CEE6AF = 1;
  }
  v8 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v6) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4CE827C )
    {
      sub_1C7BAE8(&NetworkManager_TypeInfo);
      byte_4CE827C = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      sub_1C7BD40(Instance, v4);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v8,
                                this->fields.missionId,
                                (const MethodInfo_342E348 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
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

  if ( (byte_4CEE6B1 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEE6B1 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNumIsOpenByDate(targetNum, 0);
}


bool EventMissionConditionEntity__isMissionClear(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  EventMissionConditionEntity_o *v2; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 max_length; // x9
  unsigned __int64 v5; // x25
  __int64 v6; // x22
  __int64 v7; // x24
  bool v8; // w23
  int32_t v9; // w20

  v2 = this;
  if ( (byte_4CEE6B3 & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEE6B3 = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1C7BD40(this, method);
  if ( (int)targetIds->max_length < 1 )
  {
    v8 = 0;
  }
  else
  {
    max_length = (unsigned int)targetIds->max_length;
    v5 = 0;
    v6 = (int)max_length;
    v7 = max_length - 1;
    v8 = 1;
    while ( 1 )
    {
      if ( v5 >= LODWORD(targetIds->max_length) )
        sub_1C7BD48(this);
      v9 = targetIds->m_Items[v5];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      this = (EventMissionConditionEntity_o *)CondType__IsMissionClear(v9, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      v8 = (__int64)(v5 + 1) < v6;
      if ( v7 == v5 )
        break;
      targetIds = v2->fields.targetIds;
      ++v5;
      if ( !targetIds )
        goto LABEL_12;
    }
  }
  return !v8;
}


bool EventMissionConditionEntity__isQuestClear(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  EventMissionConditionEntity_o *v2; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 max_length; // x9
  unsigned __int64 v5; // x25
  __int64 v6; // x22
  __int64 v7; // x24
  bool v8; // w23
  int32_t v9; // w20

  v2 = this;
  if ( (byte_4CEE6B2 & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEE6B2 = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1C7BD40(this, method);
  if ( (int)targetIds->max_length < 1 )
  {
    v8 = 0;
  }
  else
  {
    max_length = (unsigned int)targetIds->max_length;
    v5 = 0;
    v6 = (int)max_length;
    v7 = max_length - 1;
    v8 = 1;
    while ( 1 )
    {
      if ( v5 >= LODWORD(targetIds->max_length) )
        sub_1C7BD48(this);
      v9 = targetIds->m_Items[v5];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_40887944(v9, -1, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      v8 = (__int64)(v5 + 1) < v6;
      if ( v7 == v5 )
        break;
      targetIds = v2->fields.targetIds;
      ++v5;
      if ( !targetIds )
        goto LABEL_12;
    }
  }
  return !v8;
}


void EventMissionConditionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEE6B8 & 1) == 0 )
  {
    sub_1C7BAE8(&EventMissionConditionEntity___c_TypeInfo);
    byte_4CEE6B8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(EventMissionConditionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionConditionEntity___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)EventMissionConditionEntity___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
  return x->fields.missionId;
}


bool EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C7BD40(this, 0);
  return target->fields.missionProgressType > 3;
}


bool EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C7BD40(this, 0);
  return target->fields.missionProgressType == 5;
}