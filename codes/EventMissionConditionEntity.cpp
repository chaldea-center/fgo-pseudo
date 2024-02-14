void __fastcall EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4214C92 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4214C92 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4214C87 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&missionProgressType);
    byte_4214C87 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_1713844 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_long__o *v7; // x20
  int64_t ProgressNum; // x0
  struct System_Int32_array *targetIds; // x8
  __int64 v10; // x9
  unsigned __int64 v11; // x25
  signed __int64 v12; // x26
  int32_t v13; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  __int64 v18; // x0

  if ( (byte_4214C8B & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v6);
    byte_4214C8B = 1;
  }
  v7 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, method, v2);
  System_Collections_Generic_List_long____ctor(
    v7,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_13;
  v10 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    v12 = (int)v10;
    do
    {
      if ( v11 >= targetIds->max_length )
      {
        v18 = sub_B0D9A8(ProgressNum);
        sub_B0D948(v18, 0LL);
      }
      v13 = targetIds->m_Items[v11 + 1];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ProgressNum = CondType__GetProgressNum(condType, v13, targetNum, missionTargetId, 0LL);
      if ( !v7 )
        break;
      System_Collections_Generic_List_long___Add(
        v7,
        ProgressNum,
        (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      if ( (__int64)++v11 >= v12 )
        return System_Linq_Enumerable__Max_40215928((System_Collections_Generic_IEnumerable_long__o *)v7, 0LL);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_13:
    sub_B0D97C(ProgressNum);
  }
  return System_Linq_Enumerable__Max_40215928((System_Collections_Generic_IEnumerable_long__o *)v7, 0LL);
}


System_Collections_Generic_HashSet_int__o *__fastcall EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
        EventMissionConditionEntity_o *this,
        int64_t deemedTime,
        const MethodInfo *method)
{
  int64_t Time; // x20
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
  struct System_Int32_array *targetIds; // x24
  __int64 v19; // x8
  unsigned __int64 v20; // x25
  int32_t v21; // w22
  __int64 v22; // x28
  __int64 v23; // x8
  unsigned __int64 v24; // x21
  int32_t v25; // w23
  UserEventRandomMissionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v28; // x0
  System_Collections_Generic_HashSet_int__o *v29; // [xsp+8h] [xbp-88h]
  WarEntity_o *v31; // [xsp+18h] [xbp-78h] BYREF
  UserEventRandomMissionEntity_o *v32; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *v33; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *v34; // [xsp+30h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  Time = deemedTime;
  if ( (byte_4214C91 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, deemedTime);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_MstMissionMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v10);
    sub_B0D8A4(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v13);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_B0D8A4(&NetworkManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4214C91 = 1;
  }
  v34 = 0LL;
  entity = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  v29 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       deemedTime,
                                                       method);
  System_Collections_Generic_HashSet_int____ctor(
    v29,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_54;
    v19 = *(_QWORD *)&targetIds->max_length;
    if ( (int)v19 >= 1 )
    {
      v20 = 0LL;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)v19 )
        {
LABEL_55:
          v28 = sub_B0D9A8(Instance);
          sub_B0D948(v28, 0LL);
        }
        v21 = targetIds->m_Items[v20 + 1];
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     &entity,
                     v21,
                     (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          switch ( entity->fields.parentWarId )
          {
            case 1:
              v22 = *(_QWORD *)&entity->fields.flag;
              if ( !v22 )
                goto LABEL_54;
              v23 = *(_QWORD *)(v22 + 24);
              if ( (int)v23 < 1 )
                goto LABEL_52;
              v24 = 0LL;
              break;
            case 2:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !Instance )
                goto LABEL_54;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &v34,
                           this->fields.missionId,
                           (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              if ( !v34 )
                goto LABEL_54;
              if ( *(_QWORD *)&v34->fields.parentWarId > Time || *(_QWORD *)&v34->fields.flag < Time )
                goto LABEL_52;
              goto LABEL_50;
            case 3:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_54;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &v33,
                           this->fields.missionTargetId,
                           (const MethodInfo_2669C30 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              Instance = (int64_t)v33;
              if ( !v33 )
                goto LABEL_54;
              Instance = MstMissionEntity__isOpen((MstMissionEntity_o *)v33, Time, 0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              goto LABEL_50;
            case 4:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              MasterData_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)Instance,
                                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              Instance = NetworkManager__get_UserId(0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                goto LABEL_54;
              Instance = UserEventRandomMissionMaster__TryGetEntity(
                           MasterData_WarQuestSelectionMaster,
                           &v32,
                           Instance,
                           this->fields.missionId,
                           0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              Instance = (int64_t)v32;
              if ( !v32 )
                goto LABEL_54;
              Instance = UserEventRandomMissionEntity__IsInProgress(v32, 0LL);
              if ( (Instance & 1) != 0 )
                goto LABEL_50;
              goto LABEL_52;
            default:
              goto LABEL_50;
          }
          while ( 1 )
          {
            if ( v24 >= (unsigned int)v23 )
              goto LABEL_55;
            v25 = *(_DWORD *)(v22 + 32 + 4 * v24);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_54;
            Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Instance )
              goto LABEL_54;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &v31,
                         v25,
                         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)v31;
              if ( !v31 )
                goto LABEL_54;
              Instance = EventEntity__IsOpen_28904008((EventEntity_o *)v31, Time, 0, 0LL);
              if ( (Instance & 1) != 0 )
                break;
            }
            LODWORD(v23) = *(_DWORD *)(v22 + 24);
            if ( (__int64)++v24 >= (int)v23 )
              goto LABEL_52;
          }
LABEL_50:
          Instance = (int64_t)v29;
          if ( !v29 )
            break;
          Instance = System_Collections_Generic_HashSet_int___Add(
                       v29,
                       v21,
                       (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_52:
        LODWORD(v19) = targetIds->max_length;
        if ( (__int64)++v20 >= (int)v19 )
          return v29;
      }
LABEL_54:
      sub_B0D97C(Instance);
    }
  }
  return v29;
}


int64_t __fastcall EventMissionConditionEntity__GetProgNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  unsigned int condType; // w20
  int64_t IsMultiTargetParamCond; // x0
  int32_t v6; // w20
  System_Int32_array *targetIds; // x19
  struct System_Int32_array *v8; // x26
  __int64 v9; // x8
  int64_t v10; // x20
  unsigned __int64 v11; // x27
  int32_t v12; // w21
  int32_t v13; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  __int64 v16; // x0

  if ( (byte_4214C89 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    byte_4214C89 = 1;
  }
  condType = this->fields.condType;
  if ( condType <= 9 && ((1 << condType) & 0x2C0) != 0 )
    return EventMissionConditionEntity__GetMaxProgNum(this, method);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (IsMultiTargetParamCond & 1) != 0 )
  {
    v6 = this->fields.condType;
    targetIds = this->fields.targetIds;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetProgressNumByTargetIds(v6, targetIds, 0LL);
  }
  else
  {
    v8 = this->fields.targetIds;
    if ( !v8 )
      sub_B0D97C(IsMultiTargetParamCond);
    v9 = *(_QWORD *)&v8->max_length;
    if ( (int)v9 < 1 )
      return 0LL;
    v10 = 0LL;
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v9 )
      {
        v16 = sub_B0D9A8(IsMultiTargetParamCond);
        sub_B0D948(v16, 0LL);
      }
      v12 = v8->m_Items[v11 + 1];
      v13 = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMultiTargetParamCond = CondType__GetProgressNum(v13, v12, targetNum, missionTargetId, 0LL);
      LODWORD(v9) = v8->max_length;
      ++v11;
      v10 += IsMultiTargetParamCond;
    }
    while ( (__int64)v11 < (int)v9 );
    return v10;
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
    sub_B0D97C(this);
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int64_t Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_int__o *v30; // x21
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntitiesFromTargetId; // x21
  EventMissionConditionEntity___c_c *v35; // x8
  struct EventMissionConditionEntity___c_StaticFields *v36; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__26_1; // x22
  Il2CppObject *v38; // x23
  struct EventMissionConditionEntity___c_StaticFields *v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  System_Collections_Generic_List_UserEventMissionEntity__o *ListFromMissionTargetId; // x20
  __int64 v50; // x1
  __int64 v51; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v52; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  int32_t condType; // w8
  System_Collections_Generic_List_T__o *v57; // x20
  EventMissionConditionEntity___c_c *v58; // x0
  struct EventMissionConditionEntity___c_StaticFields *v59; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__26_3; // x19
  Il2CppObject *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct EventMissionConditionEntity___c_StaticFields *v68; // x0
  BattleServantConfConponent_o *p__9__26_3; // x0
  EventMissionConditionEntity___c_c *v70; // x0
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x8
  Il2CppObject *v72; // x21
  struct EventMissionConditionEntity___c_StaticFields *v73; // x0
  UserEventMissionCondDetailMaster_o *v74; // x20
  struct System_Int32_array *targetIds; // x8
  __int64 v77; // x0
  UserEventMissionCondDetailEntity_o *v78; // [xsp+0h] [xbp-50h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4214C90 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_UserEventMissionEntity___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v7);
    sub_B0D8A4(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__, v8);
    sub_B0D8A4(&Method_System_Func_EventMissionConditionEntity__int___ctor__, v9);
    sub_B0D8A4(&Method_System_Func_UserEventMissionEntity__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_UserEventMissionEntity__bool__TypeInfo, v11);
    sub_B0D8A4(&System_Func_EventMissionConditionEntity__int__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B0D8A4(&NetworkManager_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Predicate_UserEventMissionEntity___ctor__, v19);
    sub_B0D8A4(&System_Predicate_UserEventMissionEntity__TypeInfo, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B0D8A4(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__, v22);
    sub_B0D8A4(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__, v23);
    sub_B0D8A4(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__, v24);
    sub_B0D8A4(&EventMissionConditionEntity___c_TypeInfo, v25);
    byte_4214C90 = 1;
  }
  v78 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_62;
  if ( !UserEventMissionMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          Instance,
          this->fields.missionId,
          0LL) )
  {
LABEL_28:
    ListFromMissionTargetId = UserEventMissionMaster__getListFromMissionTargetId(
                                MasterData_WarQuestSelectionMaster,
                                this->fields.missionTargetId,
                                0LL);
    v52 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_UserEventMissionEntity__TypeInfo,
                                                                     v50,
                                                                     v51);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v52,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_UserEventMissionEntity___ctor__);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)ListFromMissionTargetId,
              (System_Predicate_T__o *)v52,
              (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v57 = All;
        if ( condType == 24 )
        {
          v70 = EventMissionConditionEntity___c_TypeInfo;
          if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v70 = EventMissionConditionEntity___c_TypeInfo;
          }
          static_fields = v70->static_fields;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                     v57,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_1707138 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v70);
            static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v72 = (Il2CppObject *)static_fields->__9;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                          System_Func_UserEventMissionEntity__bool__TypeInfo,
                                                                                          v54,
                                                                                          v55);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__26_3,
            v72,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            (const MethodInfo_26189B8 *)Method_System_Func_UserEventMissionEntity__bool___ctor__);
          v73 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v73->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (BattleServantConfConponent_o *)&v73->__9__26_3;
          goto LABEL_48;
        }
        if ( condType == 23 )
        {
          v58 = EventMissionConditionEntity___c_TypeInfo;
          if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v58 = EventMissionConditionEntity___c_TypeInfo;
          }
          v59 = v58->static_fields;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v59->__9__26_2;
          if ( _9__26_3 )
            return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                     v57,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_1707138 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v58);
            v59 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v61 = (Il2CppObject *)v59->__9;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                          System_Func_UserEventMissionEntity__bool__TypeInfo,
                                                                                          v54,
                                                                                          v55);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__26_3,
            v61,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            (const MethodInfo_26189B8 *)Method_System_Func_UserEventMissionEntity__bool___ctor__);
          v68 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v68->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (BattleServantConfConponent_o *)&v68->__9__26_2;
LABEL_48:
          sub_B0D840(p__9__26_3, (System_Int32_array **)_9__26_3, v62, v63, v64, v65, v66, v67);
          return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                   v57,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_1707138 *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v74 = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        targetIds = this->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
          {
            v77 = sub_B0D9A8(Instance);
            sub_B0D948(v77, 0LL);
          }
          if ( v74 )
          {
            Instance = UserEventMissionCondDetailMaster__TryGetEntity(v74, &v78, Instance, targetIds->m_Items[1], 0LL);
            if ( (Instance & 1) == 0 )
              return 0;
            if ( v78 )
              return v78->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_62:
    sub_B0D97C(Instance);
  }
  v30 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v28, v29);
  System_Collections_Generic_List_int____ctor(
    v30,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v30 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Add(
    v30,
    4,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v30,
    5,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  if ( !System_Collections_Generic_List_int___Contains(
          v30,
          this->fields.missionProgressType,
          (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_25;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_62;
  EntitiesFromTargetId = EventMissionConditionMaster__GetEntitiesFromTargetId(
                           (EventMissionConditionMaster_o *)Instance,
                           this->fields.missionTargetId,
                           v31);
  v35 = EventMissionConditionEntity___c_TypeInfo;
  if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
    v35 = EventMissionConditionEntity___c_TypeInfo;
  }
  v36 = v35->static_fields;
  _9__26_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v36->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v36 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__26_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_EventMissionConditionEntity__int__TypeInfo,
                                                                                 v32,
                                                                                 v33);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__26_1,
      v38,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      (const MethodInfo_2619564 *)Method_System_Func_EventMissionConditionEntity__int___ctor__);
    v39 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v39->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v39->__9__26_1,
      (System_Int32_array **)_9__26_1,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    v46,
                                                    (const MethodInfo_1B4A958 *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
  if ( !StonePurchaseNotificationMenu_DialogOpenQueue
    || StonePurchaseNotificationMenu_DialogOpenQueue->fields.kind != this->fields.missionId )
  {
LABEL_25:
    Instance = (int64_t)entity;
    if ( !entity )
      goto LABEL_62;
    if ( UserEventMissionEntity__IsTodayMissionData(entity, 0LL) )
      return 1;
    goto LABEL_28;
  }
  Instance = (int64_t)entity;
  if ( !entity )
    goto LABEL_62;
  return UserEventMissionEntity__IsTodayMissionData(entity, 0LL);
}


bool __fastcall EventMissionConditionEntity__IsIgnoreStartCondition(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0

  if ( (byte_4214C8F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4214C8F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.missionId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return ((unsigned __int8)Instance->fields._DispLog >> 3) & 1;
}


bool __fastcall EventMissionConditionEntity__MissionTypeORCond(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int32_t condType; // w8

  condType = this->fields.condType;
  return condType == 9 || (condType | 1) == 7;
}


bool __fastcall EventMissionConditionEntity___IsActiveDailyMission_b__26_0(
        EventMissionConditionEntity_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  struct System_Int32_array *targetIds; // x8
  __int64 v5; // x0

  if ( !target || (targetIds = this->fields.targetIds) == 0LL )
    sub_B0D97C(this);
  if ( !targetIds->max_length )
  {
    v5 = sub_B0D9A8(this);
    sub_B0D948(v5, 0LL);
  }
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
  UserEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v12; // x1
  int32_t condType; // w20
  int32_t v14; // w21
  int64_t v15; // x19
  System_Int32_array *v16; // x20
  struct System_Int32_array *targetIds; // x24
  __int64 v18; // x8
  unsigned __int64 v19; // x25
  int32_t v20; // w20
  int32_t v21; // w22
  int64_t targetNum; // x21
  __int64 v24; // x0
  WarEntity_o *v25; // [xsp+0h] [xbp-50h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4214C88 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4214C88 = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (UserEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    if ( UserEventMissionFixMaster__TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           Instance,
           this->fields.missionId,
           0LL) )
    {
      return EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v10);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v25,
               this->fields.missionId,
               (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_39;
    if ( LODWORD(v25->fields.age) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v12) )
      return 0;
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
    return EventMissionConditionEntity__GetProgNum(this, v12) >= this->fields.targetNum;
  condType = this->fields.condType;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (Instance & 1) == 0 )
  {
    targetIds = this->fields.targetIds;
    if ( targetIds )
    {
      v18 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v18 < 1 )
        return 1;
      v19 = 0LL;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v18 )
        {
          v24 = sub_B0D9A8(Instance);
          sub_B0D948(v24, 0LL);
        }
        v20 = targetIds->m_Items[v19 + 1];
        v21 = this->fields.condType;
        targetNum = this->fields.targetNum;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = CondType__IsOpen(v21, v20, targetNum, 0, 0LL);
        if ( (Instance & 1) == 0 )
          break;
        LODWORD(v18) = targetIds->max_length;
        if ( (__int64)++v19 >= (int)v18 )
          return 1;
      }
      return 0;
    }
LABEL_39:
    sub_B0D97C(Instance);
  }
  v14 = this->fields.condType;
  v16 = this->fields.targetIds;
  v15 = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenWithSumOfProgressCount(v14, v16, v15, 0LL);
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
  UserEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v9; // x1
  int64_t result; // x0
  const MethodInfo *v11; // x1
  WarEntity_o *v12; // [xsp+8h] [xbp-28h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4214C8A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4214C8A = 1;
  }
  entity = 0LL;
  v12 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v9) )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_24;
    Instance = UserEventMissionFixMaster__TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
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
LABEL_24:
      sub_B0D97C(Instance);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v12,
               this->fields.missionId,
               (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_24;
    if ( LODWORD(v12->fields.age) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v11) )
      return 0LL;
  }
  result = EventMissionConditionEntity__GetProgNum(this, v11);
  if ( result >= this->fields.targetNum )
    return this->fields.targetNum;
  return result;
}


int32_t __fastcall EventMissionConditionEntity__getProgressNumByDateType(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int64_t targetNum; // x19

  if ( (byte_4214C8C & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, method);
    byte_4214C8C = 1;
  }
  targetNum = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
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
  unsigned __int64 v5; // x21
  signed __int64 v6; // x22
  int32_t v7; // w20
  __int64 v9; // x0

  v2 = this;
  if ( (byte_4214C8E & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_B0D8A4(&CondType_TypeInfo, method);
    byte_4214C8E = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_13:
    sub_B0D97C(this);
  v4 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v4 < 1 )
    return 1;
  v5 = 0LL;
  v6 = (int)v4;
  while ( 1 )
  {
    if ( v5 >= targetIds->max_length )
    {
      v9 = sub_B0D9A8(this);
      sub_B0D948(v9, 0LL);
    }
    v7 = targetIds->m_Items[v5 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventMissionConditionEntity_o *)CondType__IsMissionClear(v7, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    if ( (__int64)++v5 >= v6 )
      return 1;
    targetIds = v2->fields.targetIds;
    if ( !targetIds )
      goto LABEL_13;
  }
}


bool __fastcall EventMissionConditionEntity__isQuestClear(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  EventMissionConditionEntity_o *v2; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 v4; // x9
  unsigned __int64 v5; // x21
  signed __int64 v6; // x22
  int32_t v7; // w20
  __int64 v9; // x0

  v2 = this;
  if ( (byte_4214C8D & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_B0D8A4(&CondType_TypeInfo, method);
    byte_4214C8D = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_13:
    sub_B0D97C(this);
  v4 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v4 < 1 )
    return 1;
  v5 = 0LL;
  v6 = (int)v4;
  while ( 1 )
  {
    if ( v5 >= targetIds->max_length )
    {
      v9 = sub_B0D9A8(this);
      sub_B0D948(v9, 0LL);
    }
    v7 = targetIds->m_Items[v5 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_25410236(v7, -1, 0, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    if ( (__int64)++v5 >= v6 )
      return 1;
    targetIds = v2->fields.targetIds;
    if ( !targetIds )
      goto LABEL_13;
  }
}


void __fastcall EventMissionConditionEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4211B89 & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionConditionEntity___c_TypeInfo, v1);
    byte_4211B89 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EventMissionConditionEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.missionId;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B0D97C(this);
  return target->fields.missionProgressType > 3;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B0D97C(this);
  return target->fields.missionProgressType == 5;
}