void __fastcall EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C542 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1C542 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4B1C537 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&missionProgressType);
    byte_4B1C537 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_30190BC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v9; // x2
  struct System_Int32_array *targetIds; // x8
  unsigned __int64 v11; // x25
  __int64 v12; // x28
  int32_t v13; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  struct System_Int64_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10

  if ( (byte_4B1C53B & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4B1C53B = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_1BCB244(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_36A13B0 *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)*(_QWORD *)&targetIds->max_length >= 1 )
  {
    v11 = 0LL;
    v12 = (unsigned int)*(_QWORD *)&targetIds->max_length;
    do
    {
      if ( v11 >= targetIds->max_length )
        sub_1BCB25C(ProgressNum, v8, v9);
      v13 = targetIds->m_Items[v11 + 1];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ProgressNum = CondType__GetProgressNum(condType, v13, targetNum, missionTargetId, 0LL);
      if ( !v6 )
        break;
      items = v6->fields._items;
      v18 = Method_System_Collections_Generic_List_long__Add__;
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
          *(const MethodInfo_36A1C04 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v6->fields._size = size + 1;
        items->m_Items[size] = ProgressNum;
      }
      if ( v12 == ++v11 )
        return System_Linq_Enumerable__Max_65451264((System_Collections_Generic_IEnumerable_long__o *)v6, 0LL);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_16:
    sub_1BCB254(ProgressNum, v8);
  }
  return System_Linq_Enumerable__Max_65451264((System_Collections_Generic_IEnumerable_long__o *)v6, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  struct System_Int32_array *targetIds; // x25
  __int64 v21; // x8
  unsigned __int64 v22; // x26
  int32_t v23; // w23
  Il2CppClass *klass; // x28
  const char *namespaze; // x8
  unsigned __int64 v26; // x29
  int32_t v27; // w24
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_HashSet_int__o *v30; // [xsp+8h] [xbp-98h]
  Il2CppObject *v32; // [xsp+18h] [xbp-88h] BYREF
  UserEventRandomMissionEntity_o *v33; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v34; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v35; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  Time = deemedTime;
  if ( (byte_4B1C541 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, deemedTime);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_MstMissionMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__, v8);
    sub_1BCAFF8(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v9);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v10);
    sub_1BCAFF8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4B1C541 = 1;
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
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_56;
    v21 = *(_QWORD *)&targetIds->max_length;
    if ( (int)v21 >= 1 )
    {
      v22 = 0LL;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)v21 )
LABEL_57:
          sub_1BCB25C(Instance, v18, v19);
        v23 = targetIds->m_Items[v22 + 1];
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          break;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      &entity,
                                      v23,
                                      (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
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
              v26 = 0LL;
              break;
            case 2:
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            &v35,
                                            this->fields.missionId,
                                            (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              if ( !v35 )
                goto LABEL_56;
              if ( (__int64)v35[3].monitor > Time || (__int64)v35[4].klass < Time )
                goto LABEL_54;
              goto LABEL_52;
            case 3:
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                            Instance,
                                            (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_56;
              Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                            &v34,
                                            this->fields.missionTargetId,
                                            (const MethodInfo_32C7E4C *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              Instance = (DataManager_o *)v34;
              if ( !v34 )
                goto LABEL_56;
              Instance = (DataManager_o *)MstMissionEntity__isOpen((MstMissionEntity_o *)v34, Time, 0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              goto LABEL_52;
            case 4:
              Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_56;
              MasterData_object = DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              if ( !byte_4B165D1 )
              {
                sub_1BCAFF8(&NetworkManager_TypeInfo, v18);
                byte_4B165D1 = 1;
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
                                            &v33,
                                            *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                            this->fields.missionId,
                                            0LL);
              if ( ((unsigned __int8)Instance & 1) == 0 )
                goto LABEL_54;
              Instance = (DataManager_o *)v33;
              if ( !v33 )
                goto LABEL_56;
              Instance = (DataManager_o *)UserEventRandomMissionEntity__IsInProgress(v33, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                goto LABEL_52;
              goto LABEL_54;
            default:
              goto LABEL_52;
          }
          while ( 1 )
          {
            if ( v26 >= (unsigned int)namespaze )
              goto LABEL_57;
            v27 = *((_DWORD *)&klass->_1.byval_arg.data + v26);
            Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_56;
            Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                          Instance,
                                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Instance )
              goto LABEL_56;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                          &v32,
                                          v27,
                                          (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( ((unsigned __int8)Instance & 1) != 0 )
            {
              Instance = (DataManager_o *)v32;
              if ( !v32 )
                goto LABEL_56;
              Instance = (DataManager_o *)EventEntity__IsOpen_41133700((EventEntity_o *)v32, Time, 0, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                break;
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            if ( (__int64)++v26 >= (int)namespaze )
              goto LABEL_54;
          }
LABEL_52:
          Instance = (DataManager_o *)v30;
          if ( !v30 )
            break;
          Instance = (DataManager_o *)System_Collections_Generic_HashSet_int___Add(
                                        v30,
                                        v23,
                                        (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_54:
        LODWORD(v21) = targetIds->max_length;
        if ( (__int64)++v22 >= (int)v21 )
          return v30;
      }
LABEL_56:
      sub_1BCB254(Instance, v18);
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
  __int64 v7; // x2
  int32_t v8; // w20
  System_Int32_array *targetIds; // x19
  struct System_Int32_array *v10; // x26
  __int64 v11; // x8
  int64_t v12; // x20
  unsigned __int64 v13; // x27
  int32_t v14; // w21
  int32_t v15; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23

  if ( (byte_4B1C539 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    byte_4B1C539 = 1;
  }
  condType = this->fields.condType;
  if ( condType <= 9 && ((1 << condType) & 0x2C0) != 0 )
    return EventMissionConditionEntity__GetMaxProgNum(this, method);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (IsMultiTargetParamCond & 1) != 0 )
  {
    v8 = this->fields.condType;
    targetIds = this->fields.targetIds;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetProgressNumByTargetIds(v8, targetIds, 0LL);
  }
  else
  {
    v10 = this->fields.targetIds;
    if ( !v10 )
      sub_1BCB254(IsMultiTargetParamCond, v6);
    v11 = *(_QWORD *)&v10->max_length;
    if ( (int)v11 < 1 )
      return 0LL;
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v11 )
        sub_1BCB25C(IsMultiTargetParamCond, v6, v7);
      v14 = v10->m_Items[v13 + 1];
      v15 = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMultiTargetParamCond = CondType__GetProgressNum(v15, v14, targetNum, missionTargetId, 0LL);
      LODWORD(v11) = v10->max_length;
      ++v13;
      v12 += IsMultiTargetParamCond;
    }
    while ( (__int64)v13 < (int)v11 );
    return v12;
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
    sub_1BCB254(this, 0LL);
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
  DataManager_o *Instance; // x0
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
  const MethodInfo *v38; // x3
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
  const MethodInfo *v51; // x3
  struct EventMissionConditionEntity___c_StaticFields *v52; // x0
  CGThumbnailListItem_o *p__9__26_3; // x0
  __int64 v54; // x2
  Il2CppObject *v55; // x20
  struct System_Int32_array *targetIds; // x8
  EventMissionConditionEntity___c_c *v57; // x0
  Il2CppObject *v58; // x21
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x0
  UserEventMissionCondDetailEntity_o *v61; // [xsp+0h] [xbp-60h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1C540 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_UserEventMissionEntity___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v7);
    sub_1BCAFF8(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__, v8);
    sub_1BCAFF8(&System_Func_UserEventMissionEntity__bool__TypeInfo, v9);
    sub_1BCAFF8(&System_Func_EventMissionConditionEntity__int__TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v16);
    sub_1BCAFF8(&System_Predicate_UserEventMissionEntity__TypeInfo, v17);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BCAFF8(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__, v19);
    sub_1BCAFF8(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__, v20);
    sub_1BCAFF8(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__, v21);
    sub_1BCAFF8(&EventMissionConditionEntity___c_TypeInfo, v22);
    byte_4B1C540 = 1;
  }
  v61 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B165D1 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v24);
    byte_4B165D1 = 1;
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
          0LL) )
  {
LABEL_36:
    ListFromMissionTargetId = (System_Collections_Generic_List_object__o *)UserEventMissionMaster__getListFromMissionTargetId(
                                                                             (UserEventMissionMaster_o *)MasterData_object,
                                                                             this->fields.missionTargetId,
                                                                             0LL);
    v43 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_UserEventMissionEntity__TypeInfo);
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
              (const MethodInfo_36BA2E0 *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v46 = All;
        if ( condType == 24 )
        {
          v57 = EventMissionConditionEntity___c_TypeInfo;
          if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v57 = EventMissionConditionEntity___c_TypeInfo;
          }
          _9__26_3 = (System_Func_object__bool__o *)v57->static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v46,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_3003F1C *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v57->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v57);
            v57 = EventMissionConditionEntity___c_TypeInfo;
          }
          v58 = (Il2CppObject *)v57->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v58,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            0LL);
          static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          static_fields->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (CGThumbnailListItem_o *)&static_fields->__9__26_3;
          goto LABEL_66;
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
                     (const MethodInfo_3003F1C *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            v47 = EventMissionConditionEntity___c_TypeInfo;
          }
          v49 = (Il2CppObject *)v47->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__26_3,
            v49,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            0LL);
          v52 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v52->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (CGThumbnailListItem_o *)&v52->__9__26_2;
LABEL_66:
          sub_1BCAF9C(p__9__26_3, (int32_t)_9__26_3, v50, v51);
          return BasicHelper__Any_object_(
                   v46,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_3003F1C *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v55 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v24);
          byte_4B165D1 = 1;
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
          if ( !targetIds->max_length )
            sub_1BCB25C(Instance, v24, v54);
          if ( v55 )
          {
            Instance = (DataManager_o *)UserEventMissionCondDetailMaster__TryGetEntity(
                                          (UserEventMissionCondDetailMaster_o *)v55,
                                          &v61,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          targetIds->m_Items[1],
                                          0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              return 0;
            if ( v61 )
              return v61->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_69:
    sub_1BCB254(Instance, v24);
  }
  v26 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v26 )
    goto LABEL_69;
  items = v26->fields._items;
  v28 = Method_System_Collections_Generic_List_int__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_69;
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v26,
      4,
      *(const MethodInfo_369CBAC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    items = v26->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v26->fields._version;
    if ( !items )
      goto LABEL_69;
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
      *(const MethodInfo_369CBAC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v26->fields._size = v30 + 1;
    items->m_Items[v30 + 1] = 5;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v26,
          this->fields.missionProgressType,
          (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_33;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_69;
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
    _9__26_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_EventMissionConditionEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_1,
      v35,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      0LL);
    v36 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v36->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v36->__9__26_1, (int32_t)_9__26_1, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_3046148 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  object = System_Linq_Enumerable__First_object_(
             v39,
             (const MethodInfo_303D3A4 *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
  if ( !object || LODWORD(object[1].klass) != this->fields.missionId )
  {
LABEL_33:
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_69;
    if ( UserEventMissionEntity__IsTodayMissionData(entity, 0LL) )
      return 1;
    goto LABEL_36;
  }
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_69;
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

  if ( (byte_4B1C53F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B1C53F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.missionId,
                     (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCB254(Instance, v6);
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
    sub_1BCB254(this, target);
  if ( !targetIds->max_length )
    sub_1BCB25C(this, target, method);
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
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v11; // x2
  int32_t condType; // w20
  __int64 v14; // x2
  int32_t v15; // w21
  int64_t targetNum; // x19
  System_Int32_array *targetIds; // x20
  struct System_Int32_array *v18; // x24
  __int64 v19; // x8
  bool v20; // w25
  unsigned __int64 v21; // x26
  int32_t v22; // w20
  int32_t v23; // w22
  int64_t v24; // x21
  Il2CppObject *v26; // [xsp+0h] [xbp-60h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1C538 & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v4);
    sub_1BCAFF8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v5);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B1C538 = 1;
  }
  v26 = 0LL;
  entity = 0LL;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
      byte_4B165D1 = 1;
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
           0LL) )
    {
      return EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v11);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v26,
                                this->fields.missionId,
                                (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v26 )
      goto LABEL_40;
    if ( LODWORD(v26[1].monitor) == 3
      && !EventMissionConditionEntity__IsActiveDailyMission(this, v9)
      && this->fields.missionProgressType != 1 )
    {
      return 0;
    }
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
    return EventMissionConditionEntity__GetProgNum(this, v9) >= this->fields.targetNum;
  condType = this->fields.condType;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = (DataManager_o *)CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v15 = this->fields.condType;
    targetIds = this->fields.targetIds;
    targetNum = this->fields.targetNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__IsOpenWithSumOfProgressCount(v15, targetIds, targetNum, 0LL);
  }
  v18 = this->fields.targetIds;
  if ( !v18 )
LABEL_40:
    sub_1BCB254(Instance, v9);
  v19 = *(_QWORD *)&v18->max_length;
  v20 = (int)v19 > 0;
  if ( (int)v19 >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)v19 )
        sub_1BCB25C(Instance, v9, v14);
      v22 = v18->m_Items[v21 + 1];
      v23 = this->fields.condType;
      v24 = this->fields.targetNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      Instance = (DataManager_o *)CondType__IsOpen(v23, v22, v24, 0, 0LL, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      LODWORD(v19) = v18->max_length;
      v20 = (__int64)++v21 < (int)v19;
    }
    while ( (__int64)v21 < (int)v19 );
  }
  return !v20;
}


int64_t __fastcall EventMissionConditionEntity__getProgressNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v10; // x1
  int64_t result; // x0
  Il2CppObject *v12; // [xsp+0h] [xbp-40h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1C53A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v4);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B1C53A = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v10) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B165D1 )
    {
      sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
      byte_4B165D1 = 1;
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
                                  0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
      {
        if ( entity->fields.progressType == 3 )
          return entity->fields.num;
        return 0LL;
      }
LABEL_27:
      sub_1BCB254(Instance, v8);
    }
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v12,
                                this->fields.missionId,
                                (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_27;
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

  if ( (byte_4B1C53C & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, method);
    byte_4B1C53C = 1;
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
  __int64 v2; // x2
  EventMissionConditionEntity_o *v3; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 v5; // x9
  unsigned __int64 v6; // x25
  __int64 v7; // x22
  __int64 v8; // x24
  bool v9; // w23
  int32_t v10; // w20

  v3 = this;
  if ( (byte_4B1C53E & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1BCAFF8(&CondType_TypeInfo, method);
    byte_4B1C53E = 1;
  }
  targetIds = v3->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1BCB254(this, method);
  if ( (int)*(_QWORD *)&targetIds->max_length < 1 )
  {
    v9 = 0;
  }
  else
  {
    v5 = (unsigned int)*(_QWORD *)&targetIds->max_length;
    v6 = 0LL;
    v7 = (int)v5;
    v8 = v5 - 1;
    v9 = 1;
    while ( 1 )
    {
      if ( v6 >= targetIds->max_length )
        sub_1BCB25C(this, method, v2);
      v10 = targetIds->m_Items[v6 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      this = (EventMissionConditionEntity_o *)CondType__IsMissionClear(v10, 0LL);
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


bool __fastcall EventMissionConditionEntity__isQuestClear(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventMissionConditionEntity_o *v3; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 v5; // x9
  unsigned __int64 v6; // x25
  __int64 v7; // x22
  __int64 v8; // x24
  bool v9; // w23
  int32_t v10; // w20

  v3 = this;
  if ( (byte_4B1C53D & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1BCAFF8(&CondType_TypeInfo, method);
    byte_4B1C53D = 1;
  }
  targetIds = v3->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1BCB254(this, method);
  if ( (int)*(_QWORD *)&targetIds->max_length < 1 )
  {
    v9 = 0;
  }
  else
  {
    v5 = (unsigned int)*(_QWORD *)&targetIds->max_length;
    v6 = 0LL;
    v7 = (int)v5;
    v8 = v5 - 1;
    v9 = 1;
    while ( 1 )
    {
      if ( v6 >= targetIds->max_length )
        sub_1BCB25C(this, method, v2);
      v10 = targetIds->m_Items[v6 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_39516796(v10, -1, 0, 0LL);
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


void __fastcall EventMissionConditionEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C543 & 1) == 0 )
  {
    sub_1BCAFF8(&EventMissionConditionEntity___c_TypeInfo, v1);
    byte_4B1C543 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(EventMissionConditionEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventMissionConditionEntity___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)EventMissionConditionEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
  return x->fields.missionId;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1BCB254(this, 0LL);
  return target->fields.missionProgressType > 3;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1BCB254(this, 0LL);
  return target->fields.missionProgressType == 5;
}