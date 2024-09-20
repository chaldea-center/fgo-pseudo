void __fastcall EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B181 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B181 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4A5B176 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B176 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  System_Collections_Generic_List_long__o *v3; // x20
  int64_t ProgressNum; // x0
  int64_t v5; // x1
  struct System_Int32_array *targetIds; // x8
  unsigned __int64 v7; // x25
  __int64 v8; // x28
  int32_t v9; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  struct System_Int64_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10

  if ( (byte_4A5B17A & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4A5B17A = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_1B887FC(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_34E5014 *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)*(_QWORD *)&targetIds->max_length >= 1 )
  {
    v7 = 0LL;
    v8 = (unsigned int)*(_QWORD *)&targetIds->max_length;
    do
    {
      if ( v7 >= targetIds->max_length )
        sub_1B88814(ProgressNum, v5);
      v9 = targetIds->m_Items[v7 + 1];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ProgressNum = CondType__GetProgressNum(condType, v9, targetNum, missionTargetId, 0LL);
      if ( !v3 )
        break;
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_long__Add__;
      ++v3->fields._version;
      if ( !items )
        break;
      size = v3->fields._size;
      v5 = ProgressNum;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v3,
          ProgressNum,
          *(const MethodInfo_34E5868 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = ProgressNum;
      }
      if ( v8 == ++v7 )
        return System_Linq_Enumerable__Max_63930096((System_Collections_Generic_IEnumerable_long__o *)v3, 0LL);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_16:
    sub_1B8880C(ProgressNum, v5);
  }
  return System_Linq_Enumerable__Max_63930096((System_Collections_Generic_IEnumerable_long__o *)v3, 0LL);
}


System_Collections_Generic_HashSet_int__o *__fastcall EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
        EventMissionConditionEntity_o *this,
        int64_t deemedTime,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v5; // x1
  struct System_Int32_array *targetIds; // x24
  __int64 v7; // x8
  unsigned __int64 v8; // x25
  int32_t v9; // w22
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v12; // x28
  int32_t v13; // w23
  const MethodInfo *v14; // x3
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_HashSet_int__o *v17; // [xsp+8h] [xbp-98h]
  Il2CppObject *v19; // [xsp+18h] [xbp-88h] BYREF
  UserEventRandomMissionEntity_o *v20; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v21; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v22; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A5B180 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
    sub_1B885B0(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B180 = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  if ( !deemedTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    deemedTime = NetworkManager__getTime(0LL);
  }
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_52;
    v7 = *(_QWORD *)&targetIds->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)v7 )
LABEL_53:
          sub_1B88814(Instance, v5);
        v9 = targetIds->m_Items[v8 + 1];
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          break;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     v9,
                     (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
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
              v12 = 0LL;
              break;
            case 2:
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_52;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !Instance )
                goto LABEL_52;
              Instance = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           &v22,
                           this->fields.missionId,
                           (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              if ( !v22 )
                goto LABEL_52;
              if ( (__int64)v22[3].monitor > deemedTime || (__int64)v22[4].klass < deemedTime )
                goto LABEL_50;
              goto LABEL_48;
            case 3:
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_52;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_52;
              Instance = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           &v21,
                           this->fields.missionTargetId,
                           (const MethodInfo_311D988 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              Instance = (int64_t)v21;
              if ( !v21 )
                goto LABEL_52;
              Instance = MstMissionEntity__isOpen((MstMissionEntity_o *)v21, deemedTime, 0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              goto LABEL_48;
            case 4:
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_52;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager__get_UserId(0LL);
              if ( !MasterData_object )
                goto LABEL_52;
              Instance = UserEventRandomMissionMaster__TryGetEntity(
                           (UserEventRandomMissionMaster_o *)MasterData_object,
                           &v20,
                           Instance,
                           this->fields.missionId,
                           0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              Instance = (int64_t)v20;
              if ( !v20 )
                goto LABEL_52;
              Instance = UserEventRandomMissionEntity__IsInProgress(v20, 0LL);
              if ( (Instance & 1) != 0 )
                goto LABEL_48;
              goto LABEL_50;
            default:
              goto LABEL_48;
          }
          while ( 1 )
          {
            if ( v12 >= (unsigned int)namespaze )
              goto LABEL_53;
            v13 = *((_DWORD *)&klass->_1.byval_arg.data + v12);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_52;
            Instance = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Instance )
              goto LABEL_52;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                         &v19,
                         v13,
                         (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)v19;
              if ( !v19 )
                goto LABEL_52;
              Instance = EventEntity__IsOpen_39121580((EventEntity_o *)v19, deemedTime, 0, v14);
              if ( (Instance & 1) != 0 )
                break;
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            if ( (__int64)++v12 >= (int)namespaze )
              goto LABEL_50;
          }
LABEL_48:
          Instance = (int64_t)v17;
          if ( !v17 )
            break;
          Instance = System_Collections_Generic_HashSet_int___Add(
                       v17,
                       v9,
                       (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_50:
        LODWORD(v7) = targetIds->max_length;
        if ( (__int64)++v8 >= (int)v7 )
          return v17;
      }
LABEL_52:
      sub_1B8880C(Instance, v5);
    }
  }
  return v17;
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

  if ( (byte_4A5B178 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5B178 = 1;
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
      sub_1B8880C(IsMultiTargetParamCond, v6);
    v10 = *(_QWORD *)&v9->max_length;
    if ( (int)v10 < 1 )
      return 0LL;
    v11 = 0LL;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v10 )
        sub_1B88814(IsMultiTargetParamCond, v6);
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
    sub_1B8880C(this, 0LL);
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
  int64_t Instance; // x0
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
  int32_t v31; // w3
  struct EventMissionConditionEntity___c_StaticFields *v32; // x0
  ServantStatusBattleListViewItem_o *p__9__26_3; // x0
  Il2CppObject *v34; // x20
  struct System_Int32_array *targetIds; // x8
  EventMissionConditionEntity___c_c *v36; // x0
  Il2CppObject *v37; // x21
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x0
  UserEventMissionCondDetailEntity_o *v40; // [xsp+8h] [xbp-58h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A5B17F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_UserEventMissionEntity___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_1B885B0(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    sub_1B885B0(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__);
    sub_1B885B0(&System_Func_UserEventMissionEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_EventMissionConditionEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&System_Predicate_UserEventMissionEntity__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__);
    sub_1B885B0(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__);
    sub_1B885B0(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__);
    sub_1B885B0(&EventMissionConditionEntity___c_TypeInfo);
    byte_4A5B17F = 1;
  }
  entity = 0LL;
  v40 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    v23 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_UserEventMissionEntity__TypeInfo);
    System_Predicate_object____ctor(
      v23,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      0LL);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_object___FindAll(
              ListFromMissionTargetId,
              (System_Predicate_T__o *)v23,
              (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v26 = All;
        if ( condType == 24 )
        {
          v36 = EventMissionConditionEntity___c_TypeInfo;
          if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v36 = EventMissionConditionEntity___c_TypeInfo;
          }
          _9__26_3 = (System_Func_object__bool__o *)v36->static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v26,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v36->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v36);
            v36 = EventMissionConditionEntity___c_TypeInfo;
          }
          v37 = (Il2CppObject *)v36->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v37,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            0LL);
          static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          static_fields->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__26_3;
          goto LABEL_58;
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
                     (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27);
            v27 = EventMissionConditionEntity___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v27->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v29,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            0LL);
          v32 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v32->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (ServantStatusBattleListViewItem_o *)&v32->__9__26_2;
LABEL_58:
          sub_1B88554(p__9__26_3, (int32_t)_9__26_3, v30, v31);
          return BasicHelper__Any_object_(
                   v26,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v34 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        targetIds = this->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
            sub_1B88814(Instance, v4);
          if ( v34 )
          {
            Instance = UserEventMissionCondDetailMaster__TryGetEntity(
                         (UserEventMissionCondDetailMaster_o *)v34,
                         &v40,
                         Instance,
                         targetIds->m_Items[1],
                         0LL);
            if ( (Instance & 1) == 0 )
              return 0;
            if ( v40 )
              return v40->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_61:
    sub_1B8880C(Instance, v4);
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v6 )
    goto LABEL_61;
  items = v6->fields._items;
  v8 = Method_System_Collections_Generic_List_int__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_61;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      4,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v6->fields._items;
    v8 = Method_System_Collections_Generic_List_int__Add__;
    ++v6->fields._version;
    if ( !items )
      goto LABEL_61;
  }
  else
  {
    v6->fields._size = size + 1;
    items->m_Items[size + 1] = 4;
    ++v6->fields._version;
  }
  v10 = v6->fields._size;
  if ( (unsigned int)v10 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      5,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = v10 + 1;
    items->m_Items[v10 + 1] = 5;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v6,
          this->fields.missionProgressType,
          (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_29;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_61;
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
    _9__26_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_EventMissionConditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_1,
      v15,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      0LL);
    v16 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v16->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->__9__26_1, (int32_t)_9__26_1, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  object = System_Linq_Enumerable__First_object_(
             v19,
             (const MethodInfo_2EA17D4 *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5B17E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B17E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.missionId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
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
    sub_1B8880C(this, target);
  if ( !targetIds->max_length )
    sub_1B88814(this, target);
  return target->fields.missionId == targetIds->m_Items[1] && UserEventMissionEntity__IsTodayMissionData(target, 0LL);
}


bool __fastcall EventMissionConditionEntity__getMissionProgress(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x2
  int32_t condType; // w20
  int32_t v9; // w21
  int64_t targetNum; // x19
  System_Int32_array *targetIds; // x20
  struct System_Int32_array *v12; // x24
  __int64 v13; // x8
  bool v14; // w25
  unsigned __int64 v15; // x26
  int32_t v16; // w20
  int32_t v17; // w22
  int64_t v18; // x21
  Il2CppObject *v20; // [xsp+0h] [xbp-60h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5B177 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B177 = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
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
      return EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v6);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v20,
               this->fields.missionId,
               (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_35;
    if ( LODWORD(v20[1].monitor) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v4) )
      return 0;
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
    return EventMissionConditionEntity__GetProgNum(this, v4) >= this->fields.targetNum;
  condType = this->fields.condType;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v9 = this->fields.condType;
    targetIds = this->fields.targetIds;
    targetNum = this->fields.targetNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpenWithSumOfProgressCount(v9, targetIds, targetNum, 0LL);
  }
  v12 = this->fields.targetIds;
  if ( !v12 )
LABEL_35:
    sub_1B8880C(Instance, v4);
  v13 = *(_QWORD *)&v12->max_length;
  v14 = (int)v13 > 0;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 >= (unsigned int)v13 )
        sub_1B88814(Instance, v4);
      v16 = v12->m_Items[v15 + 1];
      v17 = this->fields.condType;
      v18 = this->fields.targetNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = CondType__IsOpen(v17, v16, v18, 0, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
        break;
      LODWORD(v13) = v12->max_length;
      v14 = (__int64)++v15 < (int)v13;
    }
    while ( (__int64)v15 < (int)v13 );
  }
  return !v14;
}


int64_t __fastcall EventMissionConditionEntity__getProgressNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v6; // x1
  int64_t result; // x0
  Il2CppObject *v8; // [xsp+0h] [xbp-30h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B179 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B179 = 1;
  }
  v8 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v6) )
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
      sub_1B8880C(Instance, v4);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v8,
               this->fields.missionId,
               (const MethodInfo_311D988 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_23;
    if ( LODWORD(v8[1].monitor) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v4) )
      return 0LL;
  }
  result = EventMissionConditionEntity__GetProgNum(this, v4);
  if ( result >= this->fields.targetNum )
    return this->fields.targetNum;
  return result;
}


int32_t __fastcall EventMissionConditionEntity__getProgressNumByDateType(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int64_t targetNum; // x19

  if ( (byte_4A5B17B & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5B17B = 1;
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
  if ( (byte_4A5B17D & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5B17D = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1B8880C(this, method);
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
        sub_1B88814(this, method);
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
  if ( (byte_4A5B17C & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1B885B0(&CondType_TypeInfo);
    byte_4A5B17C = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1B8880C(this, method);
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
        sub_1B88814(this, method);
      v9 = targetIds->m_Items[v5 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_37596684(v9, -1, 0, 0LL);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B182 & 1) == 0 )
  {
    sub_1B885B0(&EventMissionConditionEntity___c_TypeInfo);
    byte_4A5B182 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(EventMissionConditionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  EventMissionConditionEntity___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventMissionConditionEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.missionId;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1B8880C(this, 0LL);
  return target->fields.missionProgressType > 3;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1B8880C(this, 0LL);
  return target->fields.missionProgressType == 5;
}