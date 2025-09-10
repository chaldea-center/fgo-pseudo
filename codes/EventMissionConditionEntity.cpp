void EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C272F0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C272F0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4C272E5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C272E5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v6; // x2
  struct System_Int32_array *targetIds; // x8
  unsigned __int64 v8; // x25
  __int64 max_length; // x28
  int32_t v10; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  struct System_Int64_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10

  if ( (byte_4C272E9 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C272E9 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1C2D6DC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_3771364 *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)targetIds->max_length >= 1 )
  {
    v8 = 0;
    max_length = (unsigned int)targetIds->max_length;
    do
    {
      if ( v8 >= LODWORD(targetIds->max_length) )
        sub_1C2D6F4(ProgressNum, v5, v6);
      v10 = targetIds->m_Items[v8];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ProgressNum = CondType__GetProgressNum(condType, v10, targetNum, missionTargetId, 0);
      if ( !v3 )
        break;
      items = v3->fields._items;
      v15 = Method_System_Collections_Generic_List_long__Add__;
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
          *(const MethodInfo_3771BB8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = ProgressNum;
      }
      if ( max_length == ++v8 )
        return System_Linq_Enumerable__Max_66459884((System_Collections_Generic_IEnumerable_long__o *)v3, 0);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_16:
    sub_1C2D6EC(ProgressNum, v5);
  }
  return System_Linq_Enumerable__Max_66459884((System_Collections_Generic_IEnumerable_long__o *)v3, 0);
}


System_Collections_Generic_HashSet_int__o *EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
        EventMissionConditionEntity_o *this,
        int64_t deemedTime,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Int32_array *targetIds; // x25
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x26
  int32_t v10; // w23
  Il2CppClass *klass; // x28
  const char *namespaze; // x8
  unsigned __int64 v13; // x29
  int32_t v14; // w24
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_HashSet_int__o *v17; // [xsp+8h] [xbp-98h]
  Il2CppObject *v19; // [xsp+18h] [xbp-88h] BYREF
  UserEventRandomMissionEntity_o *v20; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v21; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v22; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C272EF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
    sub_1C2D490(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C272EF = 1;
  }
  v22 = 0;
  entity = 0;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  if ( !deemedTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    deemedTime = NetworkManager__getTime(0);
  }
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_56;
    max_length = targetIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)max_length )
LABEL_57:
          sub_1C2D6F4(Instance, v5, v6);
        v10 = targetIds->m_Items[v9];
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      &entity,
                                      v10,
                                      (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
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
              v13 = 0;
              break;
            case 2:
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            &v22,
                                            this->fields.missionId,
                                            (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              if ( !v22 )
                goto LABEL_56;
              if ( (__int64)v22[3].monitor > deemedTime || (__int64)v22[4].klass < deemedTime )
                goto LABEL_54;
              goto LABEL_52;
            case 3:
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            &v21,
                                            this->fields.missionTargetId,
                                            (const MethodInfo_3387DE4 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              Instance = (DataManager_o *)v21;
              if ( !v21 )
                goto LABEL_56;
              Instance = (DataManager_o *)MstMissionEntity__isOpen((MstMissionEntity_o *)v21, deemedTime, 0);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              goto LABEL_52;
            case 4:
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_56;
              MasterData_object = DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4C211E1 )
              {
                sub_1C2D490(&NetworkManager_TypeInfo);
                byte_4C211E1 = 1;
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
                                            &v20,
                                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                            this->fields.missionId,
                                            0);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              Instance = (DataManager_o *)v20;
              if ( !v20 )
                goto LABEL_56;
              Instance = (DataManager_o *)UserEventRandomMissionEntity__IsInProgress(v20, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_52;
              goto LABEL_54;
            default:
              goto LABEL_52;
          }
          while ( 1 )
          {
            if ( v13 >= (unsigned int)namespaze )
              goto LABEL_57;
            v14 = *((_DWORD *)&klass->_1.byval_arg.data + v13);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_56;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Instance )
              goto LABEL_56;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          &v19,
                                          v14,
                                          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)v19;
              if ( !v19 )
                goto LABEL_56;
              Instance = (DataManager_o *)EventEntity__IsOpen_41740880((EventEntity_o *)v19, deemedTime, 0, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                break;
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            if ( (__int64)++v13 >= (int)namespaze )
              goto LABEL_54;
          }
LABEL_52:
          Instance = (DataManager_o *)v17;
          if ( !v17 )
            break;
          Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                        v17,
                                        v10,
                                        (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_54:
        LODWORD(max_length) = targetIds->max_length;
        if ( (__int64)++v9 >= (int)max_length )
          return v17;
      }
LABEL_56:
      sub_1C2D6EC(Instance, v5);
    }
  }
  return v17;
}


int64_t EventMissionConditionEntity__GetProgNum(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  unsigned int condType; // w20
  int64_t IsMultiTargetParamCond; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w20
  System_Int32_array *targetIds; // x19
  struct System_Int32_array *v10; // x26
  il2cpp_array_size_t max_length; // x8
  int64_t v12; // x20
  unsigned __int64 v13; // x27
  int32_t v14; // w21
  int32_t v15; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23

  if ( (byte_4C272E7 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    byte_4C272E7 = 1;
  }
  condType = this->fields.condType;
  if ( condType <= 9 && ((1 << condType) & 0x2C0) != 0 )
    return EventMissionConditionEntity__GetMaxProgNum(this, method);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0);
  if ( (IsMultiTargetParamCond & 1) != 0 )
  {
    v8 = this->fields.condType;
    targetIds = this->fields.targetIds;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetProgressNumByTargetIds(v8, targetIds, 0);
  }
  else
  {
    v10 = this->fields.targetIds;
    if ( !v10 )
      sub_1C2D6EC(IsMultiTargetParamCond, v6);
    max_length = v10->max_length;
    if ( (int)max_length < 1 )
      return 0;
    v12 = 0;
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C2D6F4(IsMultiTargetParamCond, v6, v7);
      v14 = v10->m_Items[v13];
      v15 = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMultiTargetParamCond = CondType__GetProgressNum(v15, v14, targetNum, missionTargetId, 0);
      LODWORD(max_length) = v10->max_length;
      ++v13;
      v12 += IsMultiTargetParamCond;
    }
    while ( (__int64)v13 < (int)max_length );
    return v12;
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
    sub_1C2D6EC(this, 0);
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
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  Il2CppObject *object; // x0
  System_Collections_Generic_List_object__o *ListFromMissionTargetId; // x20
  System_Predicate_object__o *v23; // x21
  System_Collections_Generic_List_T__o *All; // x0
  int32_t condType; // w8
  System_Collections_Generic_List_T__o *v26; // x20
  EventMissionConditionEntity___c_c *v27; // x0
  System_Func_object__bool__o *_9__26_3; // x19
  Il2CppObject *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct EventMissionConditionEntity___c_StaticFields *v32; // x0
  CGThumbnailListItem_o *p__9__26_3; // x0
  __int64 v34; // x2
  Il2CppObject *v35; // x20
  struct System_Int32_array *targetIds; // x8
  EventMissionConditionEntity___c_c *v37; // x0
  Il2CppObject *v38; // x21
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x0
  UserEventMissionCondDetailEntity_o *v41; // [xsp+0h] [xbp-60h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C272EE & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_UserEventMissionEntity___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1C2D490(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    sub_1C2D490(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__);
    sub_1C2D490(&System_Func_UserEventMissionEntity__bool__TypeInfo);
    sub_1C2D490(&System_Func_EventMissionConditionEntity__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&System_Predicate_UserEventMissionEntity__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__);
    sub_1C2D490(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__);
    sub_1C2D490(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__);
    sub_1C2D490(&EventMissionConditionEntity___c_TypeInfo);
    byte_4C272EE = 1;
  }
  v41 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
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
    v23 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_UserEventMissionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v23,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      0);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_object___FindAll(
              ListFromMissionTargetId,
              (System_Predicate_T__o *)v23,
              (const MethodInfo_378A294 *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v26 = All;
        if ( condType == 24 )
        {
          v37 = EventMissionConditionEntity___c_TypeInfo;
          if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v37 = EventMissionConditionEntity___c_TypeInfo;
          }
          _9__26_3 = (System_Func_object__bool__o *)v37->static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v26,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v37->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v37);
            v37 = EventMissionConditionEntity___c_TypeInfo;
          }
          v38 = (Il2CppObject *)v37->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v38,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            0);
          static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          static_fields->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (CGThumbnailListItem_o *)&static_fields->__9__26_3;
          goto LABEL_66;
        }
        if ( condType == 23 )
        {
          v27 = EventMissionConditionEntity___c_TypeInfo;
          if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v27 = EventMissionConditionEntity___c_TypeInfo;
          }
          _9__26_3 = (System_Func_object__bool__o *)v27->static_fields->__9__26_2;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v26,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27);
            v27 = EventMissionConditionEntity___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v27->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v29,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            0);
          v32 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v32->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (CGThumbnailListItem_o *)&v32->__9__26_2;
LABEL_66:
          sub_1C2D434(p__9__26_3, (int32_t)_9__26_3, v30, v31);
          return BasicHelper__Any_object_(
                   v26,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v35 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
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
            sub_1C2D6F4(Instance, v4, v34);
          if ( v35 )
          {
            Instance = (DataManager_o *)UserEventMissionCondDetailMaster__TryGetEntity(
                                          (UserEventMissionCondDetailMaster_o *)v35,
                                          &v41,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          targetIds->m_Items[0],
                                          0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              return 0;
            if ( v41 )
              return v41->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_69:
    sub_1C2D6EC(Instance, v4);
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
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
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = v10 + 1;
    items->m_Items[v10] = 5;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v6,
          this->fields.missionProgressType,
          (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_33;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
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
    _9__26_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_EventMissionConditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_1,
      v15,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      0);
    v16 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v16->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v16->__9__26_1, (int32_t)_9__26_1, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  object = System_Linq_Enumerable__First_object_(
             v19,
             (const MethodInfo_30F5228 *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
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

  if ( (byte_4C272ED & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C272ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.missionId,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
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
    sub_1C2D6EC(this, target);
  if ( !LODWORD(targetIds->max_length) )
    sub_1C2D6F4(this, target, method);
  return target->fields.missionId == targetIds->m_Items[0] && UserEventMissionEntity__IsTodayMissionData(target, 0);
}


bool EventMissionConditionEntity__getMissionProgress(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x2
  int32_t condType; // w20
  __int64 v9; // x2
  int32_t v10; // w21
  int64_t targetNum; // x19
  System_Int32_array *targetIds; // x20
  struct System_Int32_array *v13; // x24
  il2cpp_array_size_t max_length; // x8
  bool v15; // w25
  unsigned __int64 v16; // x26
  int32_t v17; // w20
  int32_t v18; // w22
  int64_t v19; // x21
  Il2CppObject *v21; // [xsp+0h] [xbp-60h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C272E6 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C272E6 = 1;
  }
  v21 = 0;
  entity = 0;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v21,
                                this->fields.missionId,
                                (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v21 )
      goto LABEL_40;
    if ( LODWORD(v21[1].monitor) == 3
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
    v10 = this->fields.condType;
    targetIds = this->fields.targetIds;
    targetNum = this->fields.targetNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpenWithSumOfProgressCount(v10, targetIds, targetNum, 0);
  }
  v13 = this->fields.targetIds;
  if ( !v13 )
LABEL_40:
    sub_1C2D6EC(Instance, v4);
  max_length = v13->max_length;
  v15 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C2D6F4(Instance, v4, v9);
      v17 = v13->m_Items[v16];
      v18 = this->fields.condType;
      v19 = this->fields.targetNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsOpen(v18, v17, v19, 0, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      LODWORD(max_length) = v13->max_length;
      v15 = (__int64)++v16 < (int)max_length;
    }
    while ( (__int64)v16 < (int)max_length );
  }
  return !v15;
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

  if ( (byte_4C272E8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C272E8 = 1;
  }
  v8 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v6) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C211E1 )
    {
      sub_1C2D490(&NetworkManager_TypeInfo);
      byte_4C211E1 = 1;
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
      sub_1C2D6EC(Instance, v4);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v8,
                                this->fields.missionId,
                                (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
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

  if ( (byte_4C272EA & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    byte_4C272EA = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNumIsOpenByDate(targetNum, 0);
}


bool EventMissionConditionEntity__isMissionClear(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventMissionConditionEntity_o *v3; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 max_length; // x9
  unsigned __int64 v6; // x25
  __int64 v7; // x22
  __int64 v8; // x24
  bool v9; // w23
  int32_t v10; // w20

  v3 = this;
  if ( (byte_4C272EC & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1C2D490(&CondType_TypeInfo);
    byte_4C272EC = 1;
  }
  targetIds = v3->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1C2D6EC(this, method);
  if ( (int)targetIds->max_length < 1 )
  {
    v9 = 0;
  }
  else
  {
    max_length = (unsigned int)targetIds->max_length;
    v6 = 0;
    v7 = (int)max_length;
    v8 = max_length - 1;
    v9 = 1;
    while ( 1 )
    {
      if ( v6 >= LODWORD(targetIds->max_length) )
        sub_1C2D6F4(this, method, v2);
      v10 = targetIds->m_Items[v6];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      this = (EventMissionConditionEntity_o *)CondType__IsMissionClear(v10, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      v9 = (__int64)(v6 + 1) < v7;
      if ( v8 == v6 )
        break;
      targetIds = v3->fields.targetIds;
      ++v6;
      if ( !targetIds )
        goto LABEL_12;
    }
  }
  return !v9;
}


bool EventMissionConditionEntity__isQuestClear(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventMissionConditionEntity_o *v3; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 max_length; // x9
  unsigned __int64 v6; // x25
  __int64 v7; // x22
  __int64 v8; // x24
  bool v9; // w23
  int32_t v10; // w20

  v3 = this;
  if ( (byte_4C272EB & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1C2D490(&CondType_TypeInfo);
    byte_4C272EB = 1;
  }
  targetIds = v3->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1C2D6EC(this, method);
  if ( (int)targetIds->max_length < 1 )
  {
    v9 = 0;
  }
  else
  {
    max_length = (unsigned int)targetIds->max_length;
    v6 = 0;
    v7 = (int)max_length;
    v8 = max_length - 1;
    v9 = 1;
    while ( 1 )
    {
      if ( v6 >= LODWORD(targetIds->max_length) )
        sub_1C2D6F4(this, method, v2);
      v10 = targetIds->m_Items[v6];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_40102980(v10, -1, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        break;
      v9 = (__int64)(v6 + 1) < v7;
      if ( v8 == v6 )
        break;
      targetIds = v3->fields.targetIds;
      ++v6;
      if ( !targetIds )
        goto LABEL_12;
    }
  }
  return !v9;
}


void EventMissionConditionEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C272F1 & 1) == 0 )
  {
    sub_1C2D490(&EventMissionConditionEntity___c_TypeInfo);
    byte_4C272F1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventMissionConditionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventMissionConditionEntity___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)EventMissionConditionEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return x->fields.missionId;
}


bool EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C2D6EC(this, 0);
  return target->fields.missionProgressType > 3;
}


bool EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1C2D6EC(this, 0);
  return target->fields.missionProgressType == 5;
}