void __fastcall EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B49C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B49C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_438B491 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438B491 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v5; // x1
  struct System_Int32_array *targetIds; // x8
  __int64 v7; // x9
  unsigned __int64 v8; // x25
  signed __int64 v9; // x26
  int32_t v10; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  __int64 v15; // x0

  if ( (byte_438B495 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    byte_438B495 = 1;
  }
  v3 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_13;
  v7 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = (int)v7;
    do
    {
      if ( v8 >= targetIds->max_length )
      {
        v15 = sub_B776C8(ProgressNum);
        sub_B77668(v15, 0LL);
      }
      v10 = targetIds->m_Items[v8 + 1];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ProgressNum = CondType__GetProgressNum(condType, v10, targetNum, missionTargetId, 0LL);
      if ( !v3 )
        break;
      System_Collections_Generic_List_long___Add(
        v3,
        ProgressNum,
        (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
      if ( (__int64)++v8 >= v9 )
        return System_Linq_Enumerable__Max_41378948((System_Collections_Generic_IEnumerable_long__o *)v3, 0LL);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_13:
    sub_B7769C(ProgressNum, v5);
  }
  return System_Linq_Enumerable__Max_41378948((System_Collections_Generic_IEnumerable_long__o *)v3, 0LL);
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
  __int64 v10; // x28
  __int64 v11; // x8
  unsigned __int64 v12; // x21
  int32_t v13; // w23
  UserEventRandomMissionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v16; // x0
  System_Collections_Generic_HashSet_int__o *v17; // [xsp+8h] [xbp-88h]
  WarEntity_o *v19; // [xsp+18h] [xbp-78h] BYREF
  UserEventRandomMissionEntity_o *v20; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *v21; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *v22; // [xsp+30h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_438B49B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_MstMissionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B49B = 1;
  }
  v22 = 0LL;
  entity = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  if ( !deemedTime )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    deemedTime = NetworkManager__getTime(0LL);
  }
  v17 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v17,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_54;
    v7 = *(_QWORD *)&targetIds->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)v7 )
        {
LABEL_55:
          v16 = sub_B776C8(Instance);
          sub_B77668(v16, 0LL);
        }
        v9 = targetIds->m_Items[v8 + 1];
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     &entity,
                     v9,
                     (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          switch ( entity->fields.parentWarId )
          {
            case 1:
              v10 = *(_QWORD *)&entity->fields.flag;
              if ( !v10 )
                goto LABEL_54;
              v11 = *(_QWORD *)(v10 + 24);
              if ( (int)v11 < 1 )
                goto LABEL_52;
              v12 = 0LL;
              break;
            case 2:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !Instance )
                goto LABEL_54;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &v22,
                           this->fields.missionId,
                           (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              if ( !v22 )
                goto LABEL_54;
              if ( *(_QWORD *)&v22->fields.parentWarId > deemedTime || *(_QWORD *)&v22->fields.flag < deemedTime )
                goto LABEL_52;
              goto LABEL_50;
            case 3:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_54;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &v21,
                           this->fields.missionTargetId,
                           (const MethodInfo_21FB8F0 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              Instance = (int64_t)v21;
              if ( !v21 )
                goto LABEL_54;
              Instance = MstMissionEntity__isOpen((MstMissionEntity_o *)v21, deemedTime, 0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              goto LABEL_50;
            case 4:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              MasterData_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)Instance,
                                                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
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
                           &v20,
                           Instance,
                           this->fields.missionId,
                           0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              Instance = (int64_t)v20;
              if ( !v20 )
                goto LABEL_54;
              Instance = UserEventRandomMissionEntity__IsInProgress(v20, 0LL);
              if ( (Instance & 1) != 0 )
                goto LABEL_50;
              goto LABEL_52;
            default:
              goto LABEL_50;
          }
          while ( 1 )
          {
            if ( v12 >= (unsigned int)v11 )
              goto LABEL_55;
            v13 = *(_DWORD *)(v10 + 32 + 4 * v12);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_54;
            Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Instance )
              goto LABEL_54;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &v19,
                         v13,
                         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)v19;
              if ( !v19 )
                goto LABEL_54;
              Instance = EventEntity__IsOpen_30360280((EventEntity_o *)v19, deemedTime, 0, 0LL);
              if ( (Instance & 1) != 0 )
                break;
            }
            LODWORD(v11) = *(_DWORD *)(v10 + 24);
            if ( (__int64)++v12 >= (int)v11 )
              goto LABEL_52;
          }
LABEL_50:
          Instance = (int64_t)v17;
          if ( !v17 )
            break;
          Instance = System_Collections_Generic_HashSet_int___Add(
                       v17,
                       v9,
                       (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_52:
        LODWORD(v7) = targetIds->max_length;
        if ( (__int64)++v8 >= (int)v7 )
          return v17;
      }
LABEL_54:
      sub_B7769C(Instance, v5);
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
  __int64 v17; // x0

  if ( (byte_438B493 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    byte_438B493 = 1;
  }
  condType = this->fields.condType;
  if ( condType <= 9 && ((1 << condType) & 0x2C0) != 0 )
    return EventMissionConditionEntity__GetMaxProgNum(this, method);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (IsMultiTargetParamCond & 1) != 0 )
  {
    v7 = this->fields.condType;
    targetIds = this->fields.targetIds;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetProgressNumByTargetIds(v7, targetIds, 0LL);
  }
  else
  {
    v9 = this->fields.targetIds;
    if ( !v9 )
      sub_B7769C(IsMultiTargetParamCond, v6);
    v10 = *(_QWORD *)&v9->max_length;
    if ( (int)v10 < 1 )
      return 0LL;
    v11 = 0LL;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v10 )
      {
        v17 = sub_B776C8(IsMultiTargetParamCond);
        sub_B77668(v17, 0LL);
      }
      v13 = v9->m_Items[v12 + 1];
      v14 = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
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
    sub_B7769C(this, 0LL);
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
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *v6; // x21
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntitiesFromTargetId; // x21
  EventMissionConditionEntity___c_c *v9; // x8
  struct EventMissionConditionEntity___c_StaticFields *v10; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__26_1; // x22
  Il2CppObject *v12; // x23
  struct EventMissionConditionEntity___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  System_Collections_Generic_List_UserEventMissionEntity__o *ListFromMissionTargetId; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x21
  System_Collections_Generic_List_T__o *All; // x0
  int32_t condType; // w8
  System_Collections_Generic_List_T__o *v27; // x20
  EventMissionConditionEntity___c_c *v28; // x0
  struct EventMissionConditionEntity___c_StaticFields *v29; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__26_3; // x19
  Il2CppObject *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct EventMissionConditionEntity___c_StaticFields *v38; // x0
  BattleServantConfConponent_o *p__9__26_3; // x0
  EventMissionConditionEntity___c_c *v40; // x0
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x8
  Il2CppObject *v42; // x21
  struct EventMissionConditionEntity___c_StaticFields *v43; // x0
  UserEventMissionCondDetailMaster_o *v44; // x20
  struct System_Int32_array *targetIds; // x8
  __int64 v47; // x0
  UserEventMissionCondDetailEntity_o *v48; // [xsp+0h] [xbp-50h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438B49A & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_UserEventMissionEntity___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___);
    sub_B775C4(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
    sub_B775C4(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__);
    sub_B775C4(&Method_System_Func_EventMissionConditionEntity__int___ctor__);
    sub_B775C4(&Method_System_Func_UserEventMissionEntity__bool___ctor__);
    sub_B775C4(&System_Func_UserEventMissionEntity__bool__TypeInfo);
    sub_B775C4(&System_Func_EventMissionConditionEntity__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_System_Predicate_UserEventMissionEntity___ctor__);
    sub_B775C4(&System_Predicate_UserEventMissionEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__);
    sub_B775C4(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__);
    sub_B775C4(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__);
    sub_B775C4(&EventMissionConditionEntity___c_TypeInfo);
    byte_438B49A = 1;
  }
  v48 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_UserEventMissionEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v24,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_UserEventMissionEntity___ctor__);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)ListFromMissionTargetId,
              (System_Predicate_T__o *)v24,
              (const MethodInfo_3053C20 *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v27 = All;
        if ( condType == 24 )
        {
          v40 = EventMissionConditionEntity___c_TypeInfo;
          if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v40 = EventMissionConditionEntity___c_TypeInfo;
          }
          static_fields = v40->static_fields;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                     v27,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_1C66144 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v40);
            static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v42 = (Il2CppObject *)static_fields->__9;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__26_3,
            v42,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            (const MethodInfo_29E92C4 *)Method_System_Func_UserEventMissionEntity__bool___ctor__);
          v43 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v43->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (BattleServantConfConponent_o *)&v43->__9__26_3;
          goto LABEL_48;
        }
        if ( condType == 23 )
        {
          v28 = EventMissionConditionEntity___c_TypeInfo;
          if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v28 = EventMissionConditionEntity___c_TypeInfo;
          }
          v29 = v28->static_fields;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v29->__9__26_2;
          if ( _9__26_3 )
            return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                     v27,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_1C66144 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v28);
            v29 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v31 = (Il2CppObject *)v29->__9;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__26_3,
            v31,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            (const MethodInfo_29E92C4 *)Method_System_Func_UserEventMissionEntity__bool___ctor__);
          v38 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v38->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (BattleServantConfConponent_o *)&v38->__9__26_2;
LABEL_48:
          sub_B77560(p__9__26_3, (System_Int32_array **)_9__26_3, v32, v33, v34, v35, v36, v37);
          return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                   v27,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_1C66144 *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v44 = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
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
            v47 = sub_B776C8(Instance);
            sub_B77668(v47, 0LL);
          }
          if ( v44 )
          {
            Instance = UserEventMissionCondDetailMaster__TryGetEntity(v44, &v48, Instance, targetIds->m_Items[1], 0LL);
            if ( (Instance & 1) == 0 )
              return 0;
            if ( v48 )
              return v48->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_62:
    sub_B7769C(Instance, v4);
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( !v6 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Add(
    v6,
    4,
    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v6,
    5,
    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  if ( !System_Collections_Generic_List_int___Contains(
          v6,
          this->fields.missionProgressType,
          (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_25;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_62;
  EntitiesFromTargetId = EventMissionConditionMaster__GetEntitiesFromTargetId(
                           (EventMissionConditionMaster_o *)Instance,
                           this->fields.missionTargetId,
                           v7);
  v9 = EventMissionConditionEntity___c_TypeInfo;
  if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
    v9 = EventMissionConditionEntity___c_TypeInfo;
  }
  v10 = v9->static_fields;
  _9__26_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v10->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v10 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)v10->__9;
    _9__26_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_EventMissionConditionEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__26_1,
      v12,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      (const MethodInfo_29E9E70 *)Method_System_Func_EventMissionConditionEntity__int___ctor__);
    v13 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v13->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v13->__9__26_1,
      (System_Int32_array **)_9__26_1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_1D3499C *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    v20,
                                                    (const MethodInfo_1D30534 *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438B499 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B499 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.missionId,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7769C(Instance, v4);
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
    sub_B7769C(this, target);
  if ( !targetIds->max_length )
  {
    v5 = sub_B776C8(this);
    sub_B77668(v5, 0LL);
  }
  return target->fields.missionId == targetIds->m_Items[1] && UserEventMissionEntity__IsTodayMissionData(target, 0LL);
}


bool __fastcall EventMissionConditionEntity__getMissionProgress(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  UserEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x2
  int32_t condType; // w20
  int32_t v9; // w21
  int64_t v10; // x19
  System_Int32_array *v11; // x20
  struct System_Int32_array *targetIds; // x24
  __int64 v13; // x8
  unsigned __int64 v14; // x25
  int32_t v15; // w20
  int32_t v16; // w22
  int64_t targetNum; // x21
  __int64 v19; // x0
  WarEntity_o *v20; // [xsp+0h] [xbp-50h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438B492 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B492 = 1;
  }
  v20 = 0LL;
  entity = 0LL;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (UserEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
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
      return EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v6);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v20,
               this->fields.missionId,
               (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_39;
    if ( LODWORD(v20->fields.age) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v4) )
      return 0;
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
    return EventMissionConditionEntity__GetProgNum(this, v4) >= this->fields.targetNum;
  condType = this->fields.condType;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (Instance & 1) == 0 )
  {
    targetIds = this->fields.targetIds;
    if ( targetIds )
    {
      v13 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v13 < 1 )
        return 1;
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v13 )
        {
          v19 = sub_B776C8(Instance);
          sub_B77668(v19, 0LL);
        }
        v15 = targetIds->m_Items[v14 + 1];
        v16 = this->fields.condType;
        targetNum = this->fields.targetNum;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = CondType__IsOpen(v16, v15, targetNum, 0, 0LL);
        if ( (Instance & 1) == 0 )
          break;
        LODWORD(v13) = targetIds->max_length;
        if ( (__int64)++v14 >= (int)v13 )
          return 1;
      }
      return 0;
    }
LABEL_39:
    sub_B7769C(Instance, v4);
  }
  v9 = this->fields.condType;
  v11 = this->fields.targetIds;
  v10 = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenWithSumOfProgressCount(v9, v11, v10, 0LL);
}


int64_t __fastcall EventMissionConditionEntity__getProgressNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  UserEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v6; // x1
  int64_t result; // x0
  WarEntity_o *v8; // [xsp+8h] [xbp-28h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_438B494 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438B494 = 1;
  }
  entity = 0LL;
  v8 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v6) )
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
      sub_B7769C(Instance, v4);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v8,
               this->fields.missionId,
               (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_24;
    if ( LODWORD(v8->fields.age) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v4) )
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

  if ( (byte_438B496 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    byte_438B496 = 1;
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
  if ( (byte_438B498 & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_B775C4(&CondType_TypeInfo);
    byte_438B498 = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_13:
    sub_B7769C(this, method);
  v4 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v4 < 1 )
    return 1;
  v5 = 0LL;
  v6 = (int)v4;
  while ( 1 )
  {
    if ( v5 >= targetIds->max_length )
    {
      v9 = sub_B776C8(this);
      sub_B77668(v9, 0LL);
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
  if ( (byte_438B497 & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_B775C4(&CondType_TypeInfo);
    byte_438B497 = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_13:
    sub_B7769C(this, method);
  v4 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v4 < 1 )
    return 1;
  v5 = 0LL;
  v6 = (int)v4;
  while ( 1 )
  {
    if ( v5 >= targetIds->max_length )
    {
      v9 = sub_B776C8(this);
      sub_B77668(v9, 0LL);
    }
    v7 = targetIds->m_Items[v5 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_24699280(v7, -1, 0, 0LL);
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
  Il2CppObject *v1; // x19
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x0

  if ( (byte_438868A & 1) == 0 )
  {
    sub_B775C4(&EventMissionConditionEntity___c_TypeInfo);
    byte_438868A = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventMissionConditionEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return x->fields.missionId;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B7769C(this, 0LL);
  return target->fields.missionProgressType > 3;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B7769C(this, 0LL);
  return target->fields.missionProgressType == 5;
}