void __fastcall EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16210 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16210 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4B16205 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataEntityBase_CreateMultiplePK_int__int__int___,
      *(_QWORD *)&missionProgressType,
      *(_QWORD *)&id);
    byte_4B16205 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_long__o *v11; // x20
  int64_t ProgressNum; // x0
  int64_t v13; // x1
  struct System_Int32_array *targetIds; // x8
  unsigned __int64 v15; // x25
  __int64 v16; // x28
  int32_t v17; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  struct System_Int64_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10

  if ( (byte_4B16209 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_long___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_long__TypeInfo, v9, v10);
    byte_4B16209 = 1;
  }
  v11 = (System_Collections_Generic_List_long__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  System_Collections_Generic_List_long____ctor(
    v11,
    (const MethodInfo_358943C *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_16;
  if ( (int)*(_QWORD *)&targetIds->max_length >= 1 )
  {
    v15 = 0LL;
    v16 = (unsigned int)*(_QWORD *)&targetIds->max_length;
    do
    {
      if ( v15 >= targetIds->max_length )
        sub_1BCAA44(ProgressNum, v13);
      v17 = targetIds->m_Items[v15 + 1];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13);
      ProgressNum = CondType__GetProgressNum(condType, v17, targetNum, missionTargetId, 0LL);
      if ( !v11 )
        break;
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_long__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      v13 = ProgressNum;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v11,
          ProgressNum,
          *(const MethodInfo_3589C90 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = size + 1;
        items->m_Items[size] = ProgressNum;
      }
      if ( v16 == ++v15 )
        return System_Linq_Enumerable__Max_64624728((System_Collections_Generic_IEnumerable_long__o *)v11, 0LL);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_16:
    sub_1BCAA3C(ProgressNum, v13);
  }
  return System_Linq_Enumerable__Max_64624728((System_Collections_Generic_IEnumerable_long__o *)v11, 0LL);
}


System_Collections_Generic_HashSet_int__o *__fastcall EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
        EventMissionConditionEntity_o *this,
        int64_t deemedTime,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 Time; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  int64_t Instance; // x0
  __int64 v32; // x1
  struct System_Int32_array *targetIds; // x24
  __int64 v34; // x8
  unsigned __int64 v35; // x25
  int32_t v36; // w22
  Il2CppClass *klass; // x27
  const char *namespaze; // x8
  unsigned __int64 v39; // x28
  int32_t v40; // w23
  const MethodInfo *v41; // x3
  __int64 v42; // x1
  Il2CppObject *MasterData_object; // x23
  System_Collections_Generic_HashSet_int__o *v45; // [xsp+8h] [xbp-98h]
  Il2CppObject *v47; // [xsp+18h] [xbp-88h] BYREF
  UserEventRandomMissionEntity_o *v48; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *v49; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *v50; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  Time = deemedTime;
  if ( (byte_4B1620F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, deemedTime, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MstMissionMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v15,
      v16);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v25, v26);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30);
    byte_4B1620F = 1;
  }
  v50 = 0LL;
  entity = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v47 = 0LL;
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, deemedTime);
    Time = NetworkManager__getTime(0LL);
  }
  v45 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       deemedTime,
                                                       method,
                                                       v3);
  System_Collections_Generic_HashSet_int____ctor(
    v45,
    (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_52;
    v34 = *(_QWORD *)&targetIds->max_length;
    if ( (int)v34 >= 1 )
    {
      v35 = 0LL;
      while ( 1 )
      {
        if ( v35 >= (unsigned int)v34 )
LABEL_53:
          sub_1BCAA44(Instance, v32);
        v36 = targetIds->m_Items[v35 + 1];
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          break;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     v36,
                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
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
              v39 = 0LL;
              break;
            case 2:
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_52;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !Instance )
                goto LABEL_52;
              Instance = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           &v50,
                           this->fields.missionId,
                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              if ( !v50 )
                goto LABEL_52;
              if ( (__int64)v50[3].monitor > Time || (__int64)v50[4].klass < Time )
                goto LABEL_50;
              goto LABEL_48;
            case 3:
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_52;
              Instance = (int64_t)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_52;
              Instance = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                           &v49,
                           this->fields.missionTargetId,
                           (const MethodInfo_31B2E94 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              Instance = (int64_t)v49;
              if ( !v49 )
                goto LABEL_52;
              Instance = MstMissionEntity__isOpen((MstMissionEntity_o *)v49, Time, 0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              goto LABEL_48;
            case 4:
              Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_52;
              MasterData_object = DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v42);
              Instance = NetworkManager__get_UserId(0LL);
              if ( !MasterData_object )
                goto LABEL_52;
              Instance = UserEventRandomMissionMaster__TryGetEntity(
                           (UserEventRandomMissionMaster_o *)MasterData_object,
                           &v48,
                           Instance,
                           this->fields.missionId,
                           0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_50;
              Instance = (int64_t)v48;
              if ( !v48 )
                goto LABEL_52;
              Instance = UserEventRandomMissionEntity__IsInProgress(v48, 0LL);
              if ( (Instance & 1) != 0 )
                goto LABEL_48;
              goto LABEL_50;
            default:
              goto LABEL_48;
          }
          while ( 1 )
          {
            if ( v39 >= (unsigned int)namespaze )
              goto LABEL_53;
            v40 = *((_DWORD *)&klass->_1.byval_arg.data + v39);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_52;
            Instance = (int64_t)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Instance )
              goto LABEL_52;
            Instance = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                         &v47,
                         v40,
                         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)v47;
              if ( !v47 )
                goto LABEL_52;
              Instance = EventEntity__IsOpen_39841720((EventEntity_o *)v47, Time, 0, v41);
              if ( (Instance & 1) != 0 )
                break;
            }
            LODWORD(namespaze) = klass->_1.namespaze;
            if ( (__int64)++v39 >= (int)namespaze )
              goto LABEL_50;
          }
LABEL_48:
          Instance = (int64_t)v45;
          if ( !v45 )
            break;
          Instance = System_Collections_Generic_HashSet_int___Add(
                       v45,
                       v36,
                       (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_50:
        LODWORD(v34) = targetIds->max_length;
        if ( (__int64)++v35 >= (int)v34 )
          return v45;
      }
LABEL_52:
      sub_1BCAA3C(Instance, v32);
    }
  }
  return v45;
}


int64_t __fastcall EventMissionConditionEntity__GetProgNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  unsigned int condType; // w20
  int64_t IsMultiTargetParamCond; // x0
  __int64 v7; // x1
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

  if ( (byte_4B16207 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B16207 = 1;
  }
  condType = this->fields.condType;
  if ( condType <= 9 && ((1 << condType) & 0x2C0) != 0 )
    return EventMissionConditionEntity__GetMaxProgNum(this, method);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (IsMultiTargetParamCond & 1) != 0 )
  {
    v8 = this->fields.condType;
    targetIds = this->fields.targetIds;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7);
    return CondType__GetProgressNumByTargetIds(v8, targetIds, 0LL);
  }
  else
  {
    v10 = this->fields.targetIds;
    if ( !v10 )
      sub_1BCAA3C(IsMultiTargetParamCond, v7);
    v11 = *(_QWORD *)&v10->max_length;
    if ( (int)v11 < 1 )
      return 0LL;
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v11 )
        sub_1BCAA44(IsMultiTargetParamCond, v7);
      v14 = v10->m_Items[v13 + 1];
      v15 = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  int64_t Instance; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  Il2CppObject *MasterData_object; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Collections_Generic_List_int__o *v51; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  __int64 v55; // x10
  const MethodInfo *v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntitiesFromTargetId; // x21
  EventMissionConditionEntity___c_c *v61; // x8
  System_Func_object__int__o *_9__26_1; // x22
  Il2CppObject *v63; // x23
  struct EventMissionConditionEntity___c_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  Il2CppObject *object; // x0
  System_Collections_Generic_List_object__o *ListFromMissionTargetId; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  System_Predicate_object__o *v78; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  int32_t condType; // w8
  System_Collections_Generic_List_T__o *v84; // x20
  EventMissionConditionEntity___c_c *v85; // x0
  System_Func_object__bool__o *_9__26_3; // x19
  Il2CppObject *v87; // x21
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct EventMissionConditionEntity___c_StaticFields *v94; // x0
  PartyOrganizationUtility_o *p__9__26_3; // x0
  __int64 v96; // x1
  Il2CppObject *v97; // x20
  struct System_Int32_array *targetIds; // x8
  EventMissionConditionEntity___c_c *v99; // x0
  Il2CppObject *v100; // x21
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x0
  UserEventMissionCondDetailEntity_o *v103; // [xsp+8h] [xbp-58h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1620E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_UserEventMissionEntity___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v12, v13);
    sub_1BCA7E0(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__, v14, v15);
    sub_1BCA7E0(&System_Func_UserEventMissionEntity__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_EventMissionConditionEntity__int__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v28, v29);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Predicate_UserEventMissionEntity__TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__, v36, v37);
    sub_1BCA7E0(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__, v38, v39);
    sub_1BCA7E0(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__, v40, v41);
    sub_1BCA7E0(&EventMissionConditionEntity___c_TypeInfo, v42, v43);
    byte_4B1620E = 1;
  }
  entity = 0LL;
  v103 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v46);
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
    v78 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_UserEventMissionEntity__TypeInfo, v75, v76, v77);
    System_Predicate_object____ctor(
      v78,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      0LL);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_object___FindAll(
              ListFromMissionTargetId,
              (System_Predicate_T__o *)v78,
              (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v84 = All;
        if ( condType == 24 )
        {
          v99 = EventMissionConditionEntity___c_TypeInfo;
          if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo, v80);
            v99 = EventMissionConditionEntity___c_TypeInfo;
          }
          _9__26_3 = (System_Func_object__bool__o *)v99->static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v84,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v99->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v99, v80);
            v99 = EventMissionConditionEntity___c_TypeInfo;
          }
          v100 = (Il2CppObject *)v99->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_UserEventMissionEntity__bool__TypeInfo,
                                                      v80,
                                                      v81,
                                                      v82);
          System_Func_object__bool____ctor(
            _9__26_3,
            v100,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            0LL);
          static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          static_fields->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (PartyOrganizationUtility_o *)&static_fields->__9__26_3;
          goto LABEL_58;
        }
        if ( condType == 23 )
        {
          v85 = EventMissionConditionEntity___c_TypeInfo;
          if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo, v80);
            v85 = EventMissionConditionEntity___c_TypeInfo;
          }
          _9__26_3 = (System_Func_object__bool__o *)v85->static_fields->__9__26_2;
          if ( _9__26_3 )
            return BasicHelper__Any_object_(
                     v84,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( !v85->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v85, v80);
            v85 = EventMissionConditionEntity___c_TypeInfo;
          }
          v87 = (Il2CppObject *)v85->static_fields->__9;
          _9__26_3 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                      System_Func_UserEventMissionEntity__bool__TypeInfo,
                                                      v80,
                                                      v81,
                                                      v82);
          System_Func_object__bool____ctor(
            _9__26_3,
            v87,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            0LL);
          v94 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v94->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (PartyOrganizationUtility_o *)&v94->__9__26_2;
LABEL_58:
          sub_1BCA784(p__9__26_3, (int64_t)_9__26_3, v88, v89, v90, v91, v92, v93);
          return BasicHelper__Any_object_(
                   v84,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_2EFDC94 *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v97 = DataManager__GetMasterData_object_(
                (DataManager_o *)Instance,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v96);
        Instance = NetworkManager__get_UserId(0LL);
        targetIds = this->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
            sub_1BCAA44(Instance, v45);
          if ( v97 )
          {
            Instance = UserEventMissionCondDetailMaster__TryGetEntity(
                         (UserEventMissionCondDetailMaster_o *)v97,
                         &v103,
                         Instance,
                         targetIds->m_Items[1],
                         0LL);
            if ( (Instance & 1) == 0 )
              return 0;
            if ( v103 )
              return v103->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_61:
    sub_1BCAA3C(Instance, v45);
  }
  v51 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v48,
                                                    v49,
                                                    v50);
  System_Collections_Generic_List_int____ctor(
    v51,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v51 )
    goto LABEL_61;
  items = v51->fields._items;
  v53 = Method_System_Collections_Generic_List_int__Add__;
  ++v51->fields._version;
  if ( !items )
    goto LABEL_61;
  size = v51->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v51,
      4,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    items = v51->fields._items;
    v53 = Method_System_Collections_Generic_List_int__Add__;
    ++v51->fields._version;
    if ( !items )
      goto LABEL_61;
  }
  else
  {
    v51->fields._size = size + 1;
    items->m_Items[size + 1] = 4;
    ++v51->fields._version;
  }
  v55 = v51->fields._size;
  if ( (unsigned int)v55 >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v51,
      5,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v51->fields._size = v55 + 1;
    items->m_Items[v55 + 1] = 5;
  }
  if ( !System_Collections_Generic_List_int___Contains(
          v51,
          this->fields.missionProgressType,
          (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_29;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_61;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_61;
  EntitiesFromTargetId = EventMissionConditionMaster__GetEntitiesFromTargetId(
                           (EventMissionConditionMaster_o *)Instance,
                           this->fields.missionTargetId,
                           v56);
  v61 = EventMissionConditionEntity___c_TypeInfo;
  if ( !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo, v57);
    v61 = EventMissionConditionEntity___c_TypeInfo;
  }
  _9__26_1 = (System_Func_object__int__o *)v61->static_fields->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61, v57);
      v61 = EventMissionConditionEntity___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v61->static_fields->__9;
    _9__26_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_EventMissionConditionEntity__int__TypeInfo,
                                               v57,
                                               v58,
                                               v59);
    System_Func_object__int____ctor(
      _9__26_1,
      v63,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      0LL);
    v64 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v64->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v64->__9__26_1, (int64_t)_9__26_1, v65, v66, v67, v68, v69, v70);
  }
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  object = System_Linq_Enumerable__First_object_(
             v71,
             (const MethodInfo_2F32D3C *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B1620D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1620D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.missionId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
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
    sub_1BCAA3C(this, target);
  if ( !targetIds->max_length )
    sub_1BCAA44(this, target);
  return target->fields.missionId == targetIds->m_Items[1] && UserEventMissionEntity__IsTodayMissionData(target, 0LL);
}


bool __fastcall EventMissionConditionEntity__getMissionProgress(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t Instance; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v18; // x2
  int32_t condType; // w20
  int32_t v21; // w21
  int64_t targetNum; // x19
  System_Int32_array *targetIds; // x20
  struct System_Int32_array *v24; // x24
  __int64 v25; // x8
  bool v26; // w25
  unsigned __int64 v27; // x26
  int32_t v28; // w20
  int32_t v29; // w22
  int64_t v30; // x21
  Il2CppObject *v32; // [xsp+0h] [xbp-60h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B16206 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B16206 = 1;
  }
  v32 = 0LL;
  entity = 0LL;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
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
      return EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v18);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v32,
               this->fields.missionId,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_35;
    if ( LODWORD(v32[1].monitor) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v15) )
      return 0;
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
    return EventMissionConditionEntity__GetProgNum(this, v15) >= this->fields.targetNum;
  condType = this->fields.condType;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
  Instance = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v21 = this->fields.condType;
    targetIds = this->fields.targetIds;
    targetNum = this->fields.targetNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
    return CondType__IsOpenWithSumOfProgressCount(v21, targetIds, targetNum, 0LL);
  }
  v24 = this->fields.targetIds;
  if ( !v24 )
LABEL_35:
    sub_1BCAA3C(Instance, v15);
  v25 = *(_QWORD *)&v24->max_length;
  v26 = (int)v25 > 0;
  if ( (int)v25 >= 1 )
  {
    v27 = 0LL;
    do
    {
      if ( v27 >= (unsigned int)v25 )
        sub_1BCAA44(Instance, v15);
      v28 = v24->m_Items[v27 + 1];
      v29 = this->fields.condType;
      v30 = this->fields.targetNum;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
      Instance = CondType__IsOpen(v29, v28, v30, 0, 0LL, 0LL);
      if ( (Instance & 1) == 0 )
        break;
      LODWORD(v25) = v24->max_length;
      v26 = (__int64)++v27 < (int)v25;
    }
    while ( (__int64)v27 < (int)v25 );
  }
  return !v26;
}


int64_t __fastcall EventMissionConditionEntity__getProgressNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t Instance; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *MasterData_object; // x20
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  int64_t result; // x0
  Il2CppObject *v18; // [xsp+0h] [xbp-30h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16208 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    byte_4B16208 = 1;
  }
  v18 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v15) )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
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
      sub_1BCAA3C(Instance, v13);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_23;
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v18,
               this->fields.missionId,
               (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v18 )
      goto LABEL_23;
    if ( LODWORD(v18[1].monitor) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v13) )
      return 0LL;
  }
  result = EventMissionConditionEntity__GetProgNum(this, v13);
  if ( result >= this->fields.targetNum )
    return this->fields.targetNum;
  return result;
}


int32_t __fastcall EventMissionConditionEntity__getProgressNumByDateType(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t targetNum; // x19

  if ( (byte_4B1620A & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B1620A = 1;
  }
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
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
  if ( (byte_4B1620C & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B1620C = 1;
  }
  targetIds = v3->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1BCAA3C(this, method);
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
        sub_1BCAA44(this, method);
      v10 = targetIds->m_Items[v6 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
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
  if ( (byte_4B1620B & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B1620B = 1;
  }
  targetIds = v3->fields.targetIds;
  if ( !targetIds )
LABEL_12:
    sub_1BCAA3C(this, method);
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
        sub_1BCAA44(this, method);
      v10 = targetIds->m_Items[v6 + 1];
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
      this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_38310172(v10, -1, 0, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16211 & 1) == 0 )
  {
    sub_1BCA7E0(&EventMissionConditionEntity___c_TypeInfo, v1, v2);
    byte_4B16211 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventMissionConditionEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventMissionConditionEntity___c_TypeInfo->static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventMissionConditionEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.missionId;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1BCAA3C(this, 0LL);
  return target->fields.missionProgressType > 3;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1BCAA3C(this, 0LL);
  return target->fields.missionProgressType == 5;
}