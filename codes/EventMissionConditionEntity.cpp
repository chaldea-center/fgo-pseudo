void __fastcall EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5D6F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5D6F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4AB5D64 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&missionProgressType);
    byte_4AB5D64 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_2EC2A28 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall EventMissionConditionEntity__CreatePrimaryKey(
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


int64_t __fastcall EventMissionConditionEntity__GetMaxProgNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_long__o *v6; // x20
  int64_t ProgressNum; // x0
  int64_t v8; // x1
  struct System_Int32_array *targetIds; // x8
  unsigned __int64 v10; // x25
  __int64 v11; // x28
  int32_t v12; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  struct System_Int64_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10

  if ( (byte_4AB5D68 & 1) == 0 )
  {
    sub_1BAB41C(&CondType_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_1BAB41C(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4AB5D68 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_1BAB668(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_353509C *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)*(_QWORD *)&targetIds->max_length >= 1 )
  {
    v10 = 0LL;
    v11 = (unsigned int)*(_QWORD *)&targetIds->max_length;
    do
    {
      if ( v10 >= targetIds->max_length )
        sub_1BAB680(ProgressNum, v8);
      v12 = targetIds->m_Items[v10 + 1];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ProgressNum = CondType__GetProgressNum(condType, v12, targetNum, missionTargetId, 0LL);
      if ( !v6 )
        break;
      items = v6->fields._items;
      v17 = Method_System_Collections_Generic_List_long__Add__;
      ++v6->fields._version;
      if ( !items )
        break;
      size = v6->fields._size;
      v8 = ProgressNum;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v6,
          ProgressNum,
          *(const MethodInfo_35358F0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = ProgressNum;
      }
      if ( v11 == ++v10 )
        return System_Linq_Enumerable__Max_64271192((System_Collections_Generic_IEnumerable_long__o *)v6, 0LL);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_16:
    sub_1BAB678(ProgressNum, v8);
  }
  return System_Linq_Enumerable__Max_64271192((System_Collections_Generic_IEnumerable_long__o *)v6, 0LL);
}


System_Collections_Generic_HashSet_int__o *__fastcall EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
        EventMissionConditionEntity_o *this,
        int64_t deemedTime,
        const MethodInfo *method)
{
  __int64 Time; // x20
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t Instance; // x0
  __int64 v18; // x1
  struct System_Int32_array *targetIds; // x24
  __int64 v20; // x8
  unsigned __int64 v21; // x25
  int32_t v22; // w22
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v25; // x28
  int32_t v26; // w23
  const MethodInfo *v27; // x3
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_HashSet_int__o *v30; // [xsp+8h] [xbp-98h]
  Il2CppObject *v32; // [xsp+18h] [xbp-88h] BYREF
  UserEventRandomMissionEntity_o *v33; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v34; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v35; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  Time = deemedTime;
  if ( (byte_4AB5D6E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMaster___, deemedTime);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, v4);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_MstMissionMaster___, v6);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___, v7);
    sub_1BAB41C(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__, v8);
    sub_1BAB41C(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v9);
    sub_1BAB41C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v10);
    sub_1BAB41C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_HashSet_int___ctor__, v13);
    sub_1BAB41C(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_1BAB41C(&NetworkManager_TypeInfo, v15);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4AB5D6E = 1;
  }
  v35 = 0LL;
  entity = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_1BAB668(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_3401638 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_52;
    v20 = *(_QWORD *)&targetIds->max_length;
    if ( (int)v20 >= 1 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        if ( v21 >= (unsigned int)v20 )
LABEL_53:
          sub_1BAB680(Instance, v18);
        v22 = targetIds->m_Items[v21 + 1];
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          break;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     v22,
                     (const MethodInfo_3163DE4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          switch ( LODWORD(entity[3].monitor) )
          {
            case 1:
              klass = entity[4].klass;
              if ( !klass )
                goto LABEL_52;
              namespaze = klass->_1.namespaze;
              if ( (int)namespaze < 1 )
                goto LABEL_50;
              v25 = 0LL;
              break;
            case 2:
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_52;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !Instance )
                goto LABEL_52;
              Instance = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           &v35,
                           this->fields.missionId,
                           (const MethodInfo_3163DE4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              if ( !v35 )
                goto LABEL_52;
              if ( (__int64)v35[3].monitor > Time || (__int64)v35[4].klass < Time )
                goto LABEL_50;
              goto LABEL_48;
            case 3:
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_52;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_52;
              Instance = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           &v34,
                           this->fields.missionTargetId,
                           (const MethodInfo_3163DE4 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              Instance = (int64_t)v34;
              if ( !v34 )
                goto LABEL_52;
              Instance = MstMissionEntity__isOpen((MstMissionEntity_o *)v34, Time, 0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              goto LABEL_48;
            case 4:
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_52;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager__get_UserId(0LL);
              if ( !MasterData_object )
                goto LABEL_52;
              Instance = UserEventRandomMissionMaster__TryGetEntity(
                           (UserEventRandomMissionMaster_o *)MasterData_object,
                           &v33,
                           Instance,
                           this->fields.missionId,
                           0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              Instance = (int64_t)v33;
              if ( !v33 )
                goto LABEL_52;
              Instance = UserEventRandomMissionEntity__IsInProgress(v33, 0LL);
              if ( (Instance & 1) != 0 )
                goto LABEL_48;
              goto LABEL_50;
            default:
              goto LABEL_48;
          }
          while ( 1 )
          {
            if ( v25 >= (unsigned int)namespaze )
              goto LABEL_53;
            v26 = *((_DWORD *)&klass->_1.byval_arg.data + v25);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_52;
            Instance = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Instance )
              goto LABEL_52;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                         &v32,
                         v26,
                         (const MethodInfo_3163DE4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)v32;
              if ( !v32 )
                goto LABEL_52;
              Instance = EventEntity__IsOpen_39508776((EventEntity_o *)v32, Time, 0, v27);
              if ( (Instance & 1) != 0 )
                break;
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            if ( (__int64)++v25 >= (int)namespaze )
              goto LABEL_50;
          }
LABEL_48:
          Instance = (int64_t)v30;
          if ( !v30 )
            break;
          Instance = System_Collections_Generic_HashSet_int___Add(
                       v30,
                       v22,
                       (const MethodInfo_340283C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_50:
        LODWORD(v20) = targetIds->max_length;
        if ( (__int64)++v21 >= (int)v20 )
          return v30;
      }
LABEL_52:
      sub_1BAB678(Instance, v18);
    }
  }
  return v30;
}


int64_t __fastcall EventMissionConditionEntity__GetProgNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  unsigned int condType; // w20
  int64_t IsMultiTargetParamCond; // x0
  __int64 v6; // x1
  int32_t v7; // w20
  System_Int32_array *targetIds; // x19
  struct System_Int32_array *v9; // x26
  __int64 v10; // x8
  int64_t v11; // x20
  unsigned __int64 v12; // x27
  int32_t v13; // w21
  int32_t v14; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23

  if ( (byte_4AB5D66 & 1) == 0 )
  {
    sub_1BAB41C(&CondType_TypeInfo, method);
    byte_4AB5D66 = 1;
  }
  condType = this->fields.condType;
  if ( condType <= 9 && ((1 << condType) & 0x2C0) != 0 )
    return EventMissionConditionEntity__GetMaxProgNum(this, method);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (IsMultiTargetParamCond & 1) != 0 )
  {
    v7 = this->fields.condType;
    targetIds = this->fields.targetIds;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetProgressNumByTargetIds(v7, targetIds, 0LL);
  }
  else
  {
    v9 = this->fields.targetIds;
    if ( !v9 )
      sub_1BAB678(IsMultiTargetParamCond, v6);
    v10 = *(_QWORD *)&v9->max_length;
    if ( (int)v10 < 1 )
      return 0LL;
    v11 = 0LL;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v10 )
        sub_1BAB680(IsMultiTargetParamCond, v6);
      v13 = v9->m_Items[v12 + 1];
      v14 = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMultiTargetParamCond = CondType__GetProgressNum(v14, v13, targetNum, missionTargetId, 0LL);
      LODWORD(v10) = v9->max_length;
      ++v12;
      v11 += IsMultiTargetParamCond;
    }
    while ( (__int64)v12 < (int)v10 );
    return v11;
  }
}


bool __fastcall EventMissionConditionEntity__GetUserEventMissionFixProgress(
        EventMissionConditionEntity_o *this,
        UserEventMissionFixEntity_o *entity,
        const MethodInfo *method)
{
  int32_t progressType; // w8
  int32_t missionProgressType; // w8

  if ( !entity )
    sub_1BAB678(this, 0LL);
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


bool __fastcall EventMissionConditionEntity__HasFlag(
        EventMissionConditionEntity_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


bool __fastcall EventMissionConditionEntity__IsActiveDailyMission(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  int64_t Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_int__o *v26; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  __int64 v30; // x10
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntitiesFromTargetId; // x21
  EventMissionConditionEntity___c_c *v33; // x8
  System_Func_object__int__o *_9__26_1; // x22
  Il2CppObject *v35; // x23
  struct EventMissionConditionEntity___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  Il2CppObject *object; // x0
  System_Collections_Generic_List_object__o *ListFromMissionTargetId; // x20
  System_Predicate_object__o *v43; // x21
  System_Collections_Generic_List_T__o *All; // x0
  int32_t condType; // w8
  System_Collections_Generic_List_T__o *v46; // x20
  EventMissionConditionEntity___c_c *v47; // x0
  System_Func_object__bool__o *_9__26_3; // x19
  Il2CppObject *v49; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  struct EventMissionConditionEntity___c_StaticFields *v52; // x0
  ServantStatusBattleListViewItem_o *p__9__26_3; // x0
  Il2CppObject *v54; // x20
  struct System_Int32_array *targetIds; // x8
  EventMissionConditionEntity___c_c *v56; // x0
  Il2CppObject *v57; // x21
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x0
  UserEventMissionCondDetailEntity_o *v60; // [xsp+8h] [xbp-58h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4AB5D6D & 1) == 0 )
  {
    sub_1BAB41C(&Method_BasicHelper_Any_UserEventMissionEntity___, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v3);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, v4);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_1BAB41C(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___, v6);
    sub_1BAB41C(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v7);
    sub_1BAB41C(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__, v8);
    sub_1BAB41C(&System_Func_UserEventMissionEntity__bool__TypeInfo, v9);
    sub_1BAB41C(&System_Func_EventMissionConditionEntity__int__TypeInfo, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_1BAB41C(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__, v13);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BAB41C(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1BAB41C(&NetworkManager_TypeInfo, v16);
    sub_1BAB41C(&System_Predicate_UserEventMissionEntity__TypeInfo, v17);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BAB41C(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__, v19);
    sub_1BAB41C(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__, v20);
    sub_1BAB41C(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__, v21);
    sub_1BAB41C(&EventMissionConditionEntity___c_TypeInfo, v22);
    byte_4AB5D6D = 1;
  }
  entity = 0LL;
  v60 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_61;
  if ( !UserEventMissionMaster__TryGetEntity(
          (UserEventMissionMaster_o *)MasterData_object,
          &entity,
          Instance,
          this->fields.missionId,
          0LL) )
  {
LABEL_32:
    ListFromMissionTargetId = (System_Collections_Generic_List_object__o *)UserEventMissionMaster__getListFromMissionTargetId(
                                                                             (UserEventMissionMaster_o *)MasterData_object,
                                                                             this->fields.missionTargetId,
                                                                             0LL);
    v43 = (System_Predicate_object__o *)sub_1BAB668(System_Predicate_UserEventMissionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v43,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      0LL);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_object___FindAll(
              ListFromMissionTargetId,
              (System_Predicate_T__o *)v43,
              (const MethodInfo_354DFCC *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v46 = All;
        if ( condType == 24 )
        {
          v56 = EventMissionConditionEntity___c_TypeInfo;
          if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v56 = EventMissionConditionEntity___c_TypeInfo;
          }
          _9__26_3 = (System_Func_object__bool__o *)v56->static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v46,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_2EAF73C *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            v56 = EventMissionConditionEntity___c_TypeInfo;
          }
          v57 = (Il2CppObject *)v56->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v57,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            0LL);
          static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          static_fields->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__26_3;
          goto LABEL_58;
        }
        if ( condType == 23 )
        {
          v47 = EventMissionConditionEntity___c_TypeInfo;
          if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v47 = EventMissionConditionEntity___c_TypeInfo;
          }
          _9__26_3 = (System_Func_object__bool__o *)v47->static_fields->__9__26_2;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v46,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_2EAF73C *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            v47 = EventMissionConditionEntity___c_TypeInfo;
          }
          v49 = (Il2CppObject *)v47->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1BAB668(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v49,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            0LL);
          v52 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v52->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (ServantStatusBattleListViewItem_o *)&v52->__9__26_2;
LABEL_58:
          sub_1BAB3C0(p__9__26_3, (int32_t)_9__26_3, v50, v51);
          return BasicHelper__Any_object_(
                   v46,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_2EAF73C *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v54 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        targetIds = this->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
            sub_1BAB680(Instance, v24);
          if ( v54 )
          {
            Instance = UserEventMissionCondDetailMaster__TryGetEntity(
                         (UserEventMissionCondDetailMaster_o *)v54,
                         &v60,
                         Instance,
                         targetIds->m_Items[1],
                         0LL);
            if ( (Instance & 1) == 0 )
              return 0;
            if ( v60 )
              return v60->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_61:
    sub_1BAB678(Instance, v24);
  }
  v26 = (System_Collections_Generic_List_int__o *)sub_1BAB668(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_3530044 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v26 )
    goto LABEL_61;
  items = v26->fields._items;
  v28 = Method_System_Collections_Generic_List_int__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_61;
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v26,
      4,
      *(const MethodInfo_3530898 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    items = v26->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v26->fields._version;
    if ( !items )
      goto LABEL_61;
  }
  else
  {
    v26->fields._size = size + 1;
    items->m_Items[size + 1] = 4;
    ++v26->fields._version;
  }
  v30 = v26->fields._size;
  if ( (unsigned int)v30 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v26,
      5,
      *(const MethodInfo_3530898 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v26->fields._size = v30 + 1;
    items->m_Items[v30 + 1] = 5;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v26,
          this->fields.missionProgressType,
          (const MethodInfo_3530C10 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_29;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_61;
  EntitiesFromTargetId = EventMissionConditionMaster__GetEntitiesFromTargetId(
                           (EventMissionConditionMaster_o *)Instance,
                           this->fields.missionTargetId,
                           v31);
  v33 = EventMissionConditionEntity___c_TypeInfo;
  if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
    v33 = EventMissionConditionEntity___c_TypeInfo;
  }
  _9__26_1 = (System_Func_object__int__o *)v33->static_fields->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = EventMissionConditionEntity___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__26_1 = (System_Func_object__int__o *)sub_1BAB668(System_Func_EventMissionConditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_1,
      v35,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      0LL);
    v36 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v36->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v36->__9__26_1, (int32_t)_9__26_1, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_2EEDCCC *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  object = System_Linq_Enumerable__First_object_(
             v39,
             (const MethodInfo_2EE5674 *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
  if ( !object || LODWORD(object[1].klass) != this->fields.missionId )
  {
LABEL_29:
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_61;
    if ( UserEventMissionEntity__IsTodayMissionData(entity, 0LL) )
      return 1;
    goto LABEL_32;
  }
  Instance = (int64_t)entity;
  if ( !entity )
    goto LABEL_61;
  return UserEventMissionEntity__IsTodayMissionData(entity, 0LL);
}


bool __fastcall EventMissionConditionEntity__IsIgnoreStartCondition(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4AB5D6C & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1BAB41C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4AB5D6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.missionId,
                     (const MethodInfo_3163D90 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BAB678(Instance, v6);
  }
  return (BYTE4(Instance[1].klass) >> 3) & 1;
}


bool __fastcall EventMissionConditionEntity__MissionTypeORCond(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
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


bool __fastcall EventMissionConditionEntity___IsActiveDailyMission_b__26_0(
        EventMissionConditionEntity_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8

  if ( !target || (targetIds = this->fields.targetIds) == 0LL )
    sub_1BAB678(this, target);
  if ( !targetIds->max_length )
    sub_1BAB680(this, target);
  return target->fields.missionId == targetIds->m_Items[1] && UserEventMissionEntity__IsTodayMissionData(target, 0LL);
}


bool __fastcall EventMissionConditionEntity__getMissionProgress(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Instance; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v11; // x2
  int32_t condType; // w20
  int32_t v14; // w21
  int64_t targetNum; // x19
  System_Int32_array *targetIds; // x20
  struct System_Int32_array *v17; // x24
  __int64 v18; // x8
  bool v19; // w25
  unsigned __int64 v20; // x26
  int32_t v21; // w20
  int32_t v22; // w22
  int64_t v23; // x21
  Il2CppObject *v25; // [xsp+0h] [xbp-60h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4AB5D65 & 1) == 0 )
  {
    sub_1BAB41C(&CondType_TypeInfo, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v4);
    sub_1BAB41C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v5);
    sub_1BAB41C(&NetworkManager_TypeInfo, v6);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4AB5D65 = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_35;
    if ( UserEventMissionFixMaster__TryGetEntity(
           (UserEventMissionFixMaster_o *)MasterData_object,
           &entity,
           Instance,
           this->fields.missionId,
           0LL) )
    {
      return EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v11);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v25,
               this->fields.missionId,
               (const MethodInfo_3163DE4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_35;
    if ( LODWORD(v25[1].monitor) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v9) )
      return 0;
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
    return EventMissionConditionEntity__GetProgNum(this, v9) >= this->fields.targetNum;
  condType = this->fields.condType;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v14 = this->fields.condType;
    targetIds = this->fields.targetIds;
    targetNum = this->fields.targetNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpenWithSumOfProgressCount(v14, targetIds, targetNum, 0LL);
  }
  v17 = this->fields.targetIds;
  if ( !v17 )
LABEL_35:
    sub_1BAB678(Instance, v9);
  v18 = *(_QWORD *)&v17->max_length;
  v19 = (int)v18 > 0;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v18 )
        sub_1BAB680(Instance, v9);
      v21 = v17->m_Items[v20 + 1];
      v22 = this->fields.condType;
      v23 = this->fields.targetNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsOpen(v22, v21, v23, 0, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
        break;
      LODWORD(v18) = v17->max_length;
      v19 = (__int64)++v20 < (int)v18;
    }
    while ( (__int64)v20 < (int)v18 );
  }
  return !v19;
}


int64_t __fastcall EventMissionConditionEntity__getProgressNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t Instance; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v10; // x1
  int64_t result; // x0
  Il2CppObject *v12; // [xsp+0h] [xbp-30h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB5D67 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v3);
    sub_1BAB41C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v4);
    sub_1BAB41C(&NetworkManager_TypeInfo, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4AB5D67 = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v10) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_23;
    Instance = UserEventMissionFixMaster__TryGetEntity(
                 (UserEventMissionFixMaster_o *)MasterData_object,
                 &entity,
                 Instance,
                 this->fields.missionId,
                 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( entity )
      {
        if ( entity->fields.progressType == 3 )
          return entity->fields.num;
        return 0LL;
      }
LABEL_23:
      sub_1BAB678(Instance, v8);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v12,
               this->fields.missionId,
               (const MethodInfo_3163DE4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_23;
    if ( LODWORD(v12[1].monitor) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v8) )
      return 0LL;
  }
  result = EventMissionConditionEntity__GetProgNum(this, v8);
  if ( result >= this->fields.targetNum )
    return this->fields.targetNum;
  return result;
}


int32_t __fastcall EventMissionConditionEntity__getProgressNumByDateType(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int64_t targetNum; // x19

  if ( (byte_4AB5D69 & 1) == 0 )
  {
    sub_1BAB41C(&CondType_TypeInfo, method);
    byte_4AB5D69 = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__GetNumIsOpenByDate(targetNum, 0LL);
}


bool __fastcall EventMissionConditionEntity__isMissionClear(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  EventMissionConditionEntity_o *v2; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 v4; // x9
  unsigned __int64 v5; // x25
  __int64 v6; // x22
  __int64 v7; // x24
  bool v8; // w23
  int32_t v9; // w20

  v2 = this;
  if ( (byte_4AB5D6B & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1BAB41C(&CondType_TypeInfo, method);
    byte_4AB5D6B = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1BAB678(this, method);
  if ( (int)*(_QWORD *)&targetIds->max_length < 1 )
  {
    v8 = 0;
  }
  else
  {
    v4 = (unsigned int)*(_QWORD *)&targetIds->max_length;
    v5 = 0LL;
    v6 = (int)v4;
    v7 = v4 - 1;
    v8 = 1;
    while ( 1 )
    {
      if ( v5 >= targetIds->max_length )
        sub_1BAB680(this, method);
      v9 = targetIds->m_Items[v5 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      this = (EventMissionConditionEntity_o *)CondType__IsMissionClear(v9, 0LL);
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


bool __fastcall EventMissionConditionEntity__isQuestClear(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  EventMissionConditionEntity_o *v2; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 v4; // x9
  unsigned __int64 v5; // x25
  __int64 v6; // x22
  __int64 v7; // x24
  bool v8; // w23
  int32_t v9; // w20

  v2 = this;
  if ( (byte_4AB5D6A & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1BAB41C(&CondType_TypeInfo, method);
    byte_4AB5D6A = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1BAB678(this, method);
  if ( (int)*(_QWORD *)&targetIds->max_length < 1 )
  {
    v8 = 0;
  }
  else
  {
    v4 = (unsigned int)*(_QWORD *)&targetIds->max_length;
    v5 = 0LL;
    v6 = (int)v4;
    v7 = v4 - 1;
    v8 = 1;
    while ( 1 )
    {
      if ( v5 >= targetIds->max_length )
        sub_1BAB680(this, method);
      v9 = targetIds->m_Items[v5 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_37980612(v9, -1, 0, 0LL);
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


void __fastcall EventMissionConditionEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB5D70 & 1) == 0 )
  {
    sub_1BAB41C(&EventMissionConditionEntity___c_TypeInfo, v1);
    byte_4AB5D70 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(EventMissionConditionEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionConditionEntity___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)EventMissionConditionEntity___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall EventMissionConditionEntity___c___ctor(
        EventMissionConditionEntity___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_1(
        EventMissionConditionEntity___c_o *this,
        EventMissionConditionEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BAB678(this, 0LL);
  return x->fields.missionId;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1BAB678(this, 0LL);
  return target->fields.missionProgressType > 3;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1BAB678(this, 0LL);
  return target->fields.missionProgressType == 5;
}