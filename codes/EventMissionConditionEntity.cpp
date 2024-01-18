void __fastcall EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188DCE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188DCE = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4188DC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&missionProgressType);
    byte_4188DC3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v8; // x1
  struct System_Int32_array *targetIds; // x8
  __int64 v10; // x9
  unsigned __int64 v11; // x25
  signed __int64 v12; // x26
  int32_t v13; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  __int64 v18; // x0

  if ( (byte_4188DC7 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v5);
    byte_4188DC7 = 1;
  }
  v6 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
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
        v18 = sub_B2C460(ProgressNum);
        sub_B2C400(v18, 0LL);
      }
      v13 = targetIds->m_Items[v11 + 1];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ProgressNum = CondType__GetProgressNum(condType, v13, targetNum, missionTargetId, 0LL);
      if ( !v6 )
        break;
      System_Collections_Generic_List_long___Add(
        v6,
        ProgressNum,
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      if ( (__int64)++v11 >= v12 )
        return System_Linq_Enumerable__Max_40444508((System_Collections_Generic_IEnumerable_long__o *)v6, 0LL);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_13:
    sub_B2C434(ProgressNum, v8);
  }
  return System_Linq_Enumerable__Max_40444508((System_Collections_Generic_IEnumerable_long__o *)v6, 0LL);
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
  __int64 v18; // x1
  struct System_Int32_array *targetIds; // x24
  __int64 v20; // x8
  unsigned __int64 v21; // x25
  int32_t v22; // w22
  __int64 v23; // x28
  __int64 v24; // x8
  unsigned __int64 v25; // x21
  int32_t v26; // w23
  UserEventRandomMissionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v29; // x0
  System_Collections_Generic_HashSet_int__o *v30; // [xsp+8h] [xbp-88h]
  WarEntity_o *v32; // [xsp+18h] [xbp-78h] BYREF
  UserEventRandomMissionEntity_o *v33; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *v34; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *v35; // [xsp+30h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  Time = deemedTime;
  if ( (byte_4188DCD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, deemedTime);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_MstMissionMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_B2C35C(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v10);
    sub_B2C35C(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v13);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_4188DCD = 1;
  }
  v35 = 0LL;
  entity = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  v30 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v30,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_54;
    v20 = *(_QWORD *)&targetIds->max_length;
    if ( (int)v20 >= 1 )
    {
      v21 = 0LL;
      while ( 1 )
      {
        if ( v21 >= (unsigned int)v20 )
        {
LABEL_55:
          v29 = sub_B2C460(Instance);
          sub_B2C400(v29, 0LL);
        }
        v22 = targetIds->m_Items[v21 + 1];
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     &entity,
                     v22,
                     (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          switch ( entity->fields.parentWarId )
          {
            case 1:
              v23 = *(_QWORD *)&entity->fields.flag;
              if ( !v23 )
                goto LABEL_54;
              v24 = *(_QWORD *)(v23 + 24);
              if ( (int)v24 < 1 )
                goto LABEL_52;
              v25 = 0LL;
              break;
            case 2:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !Instance )
                goto LABEL_54;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &v35,
                           this->fields.missionId,
                           (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              if ( !v35 )
                goto LABEL_54;
              if ( *(_QWORD *)&v35->fields.parentWarId > Time || *(_QWORD *)&v35->fields.flag < Time )
                goto LABEL_52;
              goto LABEL_50;
            case 3:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_54;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &v34,
                           this->fields.missionTargetId,
                           (const MethodInfo_24E412C *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              Instance = (int64_t)v34;
              if ( !v34 )
                goto LABEL_54;
              Instance = MstMissionEntity__isOpen((MstMissionEntity_o *)v34, Time, 0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              goto LABEL_50;
            case 4:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              MasterData_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)Instance,
                                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
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
                           &v33,
                           Instance,
                           this->fields.missionId,
                           0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              Instance = (int64_t)v33;
              if ( !v33 )
                goto LABEL_54;
              Instance = UserEventRandomMissionEntity__IsInProgress(v33, 0LL);
              if ( (Instance & 1) != 0 )
                goto LABEL_50;
              goto LABEL_52;
            default:
              goto LABEL_50;
          }
          while ( 1 )
          {
            if ( v25 >= (unsigned int)v24 )
              goto LABEL_55;
            v26 = *(_DWORD *)(v23 + 32 + 4 * v25);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_54;
            Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Instance )
              goto LABEL_54;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &v32,
                         v26,
                         (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)v32;
              if ( !v32 )
                goto LABEL_54;
              Instance = EventEntity__IsOpen_29738096((EventEntity_o *)v32, Time, 0, 0LL);
              if ( (Instance & 1) != 0 )
                break;
            }
            LODWORD(v24) = *(_DWORD *)(v23 + 24);
            if ( (__int64)++v25 >= (int)v24 )
              goto LABEL_52;
          }
LABEL_50:
          Instance = (int64_t)v30;
          if ( !v30 )
            break;
          Instance = System_Collections_Generic_HashSet_int___Add(
                       v30,
                       v22,
                       (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_52:
        LODWORD(v20) = targetIds->max_length;
        if ( (__int64)++v21 >= (int)v20 )
          return v30;
      }
LABEL_54:
      sub_B2C434(Instance, v18);
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
  __int64 v17; // x0

  if ( (byte_4188DC5 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    byte_4188DC5 = 1;
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
      sub_B2C434(IsMultiTargetParamCond, v6);
    v10 = *(_QWORD *)&v9->max_length;
    if ( (int)v10 < 1 )
      return 0LL;
    v11 = 0LL;
    v12 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v10 )
      {
        v17 = sub_B2C460(IsMultiTargetParamCond);
        sub_B2C400(v17, 0LL);
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
    sub_B2C434(this, 0LL);
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
  __int64 v27; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *v29; // x21
  const MethodInfo *v30; // x2
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntitiesFromTargetId; // x21
  EventMissionConditionEntity___c_c *v32; // x8
  struct EventMissionConditionEntity___c_StaticFields *v33; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__26_1; // x22
  Il2CppObject *v35; // x23
  struct EventMissionConditionEntity___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  System_Collections_Generic_List_UserEventMissionEntity__o *ListFromMissionTargetId; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v47; // x21
  System_Collections_Generic_List_T__o *All; // x0
  int32_t condType; // w8
  System_Collections_Generic_List_T__o *v50; // x20
  EventMissionConditionEntity___c_c *v51; // x0
  struct EventMissionConditionEntity___c_StaticFields *v52; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__26_3; // x19
  Il2CppObject *v54; // x21
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct EventMissionConditionEntity___c_StaticFields *v61; // x0
  BattleServantConfConponent_o *p__9__26_3; // x0
  EventMissionConditionEntity___c_c *v63; // x0
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x8
  Il2CppObject *v65; // x21
  struct EventMissionConditionEntity___c_StaticFields *v66; // x0
  UserEventMissionCondDetailMaster_o *v67; // x20
  struct System_Int32_array *targetIds; // x8
  __int64 v70; // x0
  UserEventMissionCondDetailEntity_o *v71; // [xsp+0h] [xbp-50h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4188DCC & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_UserEventMissionEntity___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v7);
    sub_B2C35C(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__, v8);
    sub_B2C35C(&Method_System_Func_EventMissionConditionEntity__int___ctor__, v9);
    sub_B2C35C(&Method_System_Func_UserEventMissionEntity__bool___ctor__, v10);
    sub_B2C35C(&System_Func_UserEventMissionEntity__bool__TypeInfo, v11);
    sub_B2C35C(&System_Func_EventMissionConditionEntity__int__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B2C35C(&NetworkManager_TypeInfo, v18);
    sub_B2C35C(&Method_System_Predicate_UserEventMissionEntity___ctor__, v19);
    sub_B2C35C(&System_Predicate_UserEventMissionEntity__TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__, v22);
    sub_B2C35C(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__, v23);
    sub_B2C35C(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__, v24);
    sub_B2C35C(&EventMissionConditionEntity___c_TypeInfo, v25);
    byte_4188DCC = 1;
  }
  v71 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    v47 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_UserEventMissionEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v47,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_UserEventMissionEntity___ctor__);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)ListFromMissionTargetId,
              (System_Predicate_T__o *)v47,
              (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v50 = All;
        if ( condType == 24 )
        {
          v63 = EventMissionConditionEntity___c_TypeInfo;
          if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v63 = EventMissionConditionEntity___c_TypeInfo;
          }
          static_fields = v63->static_fields;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                     v50,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_17266AC *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v63);
            static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v65 = (Il2CppObject *)static_fields->__9;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__26_3,
            v65,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            (const MethodInfo_2711C04 *)Method_System_Func_UserEventMissionEntity__bool___ctor__);
          v66 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v66->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (BattleServantConfConponent_o *)&v66->__9__26_3;
          goto LABEL_48;
        }
        if ( condType == 23 )
        {
          v51 = EventMissionConditionEntity___c_TypeInfo;
          if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v51 = EventMissionConditionEntity___c_TypeInfo;
          }
          v52 = v51->static_fields;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v52->__9__26_2;
          if ( _9__26_3 )
            return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                     v50,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_17266AC *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v51);
            v52 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v54 = (Il2CppObject *)v52->__9;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__26_3,
            v54,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            (const MethodInfo_2711C04 *)Method_System_Func_UserEventMissionEntity__bool___ctor__);
          v61 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v61->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (BattleServantConfConponent_o *)&v61->__9__26_2;
LABEL_48:
          sub_B2C2F8(p__9__26_3, (System_Int32_array **)_9__26_3, v55, v56, v57, v58, v59, v60);
          return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                   v50,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_17266AC *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v67 = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)Instance,
                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
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
            v70 = sub_B2C460(Instance);
            sub_B2C400(v70, 0LL);
          }
          if ( v67 )
          {
            Instance = UserEventMissionCondDetailMaster__TryGetEntity(v67, &v71, Instance, targetIds->m_Items[1], 0LL);
            if ( (Instance & 1) == 0 )
              return 0;
            if ( v71 )
              return v71->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_62:
    sub_B2C434(Instance, v27);
  }
  v29 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v29 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Add(
    v29,
    4,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v29,
    5,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  if ( !System_Collections_Generic_List_int___Contains(
          v29,
          this->fields.missionProgressType,
          (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_25;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_62;
  EntitiesFromTargetId = EventMissionConditionMaster__GetEntitiesFromTargetId(
                           (EventMissionConditionMaster_o *)Instance,
                           this->fields.missionTargetId,
                           v30);
  v32 = EventMissionConditionEntity___c_TypeInfo;
  if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
    v32 = EventMissionConditionEntity___c_TypeInfo;
  }
  v33 = v32->static_fields;
  _9__26_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v33->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v33 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__26_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_EventMissionConditionEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__26_1,
      v35,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_EventMissionConditionEntity__int___ctor__);
    v36 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v36->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v36->__9__26_1,
      (System_Int32_array **)_9__26_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    v43,
                                                    (const MethodInfo_1A8F68C *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
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
  __int64 v6; // x1

  if ( (byte_4188DCB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4188DCB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.missionId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v6);
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
    sub_B2C434(this, target);
  if ( !targetIds->max_length )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
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
  const MethodInfo *v9; // x1
  UserEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v11; // x2
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

  if ( (byte_4188DC4 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4188DC4 = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (UserEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
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
      return EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v11);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v25,
               this->fields.missionId,
               (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_39;
    if ( LODWORD(v25->fields.age) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v9) )
      return 0;
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
    return EventMissionConditionEntity__GetProgNum(this, v9) >= this->fields.targetNum;
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
          v24 = sub_B2C460(Instance);
          sub_B2C400(v24, 0LL);
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
    sub_B2C434(Instance, v9);
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
  const MethodInfo *v8; // x1
  UserEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v10; // x1
  int64_t result; // x0
  WarEntity_o *v12; // [xsp+8h] [xbp-28h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4188DC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&NetworkManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4188DC6 = 1;
  }
  entity = 0LL;
  v12 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v10) )
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
      sub_B2C434(Instance, v8);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v12,
               this->fields.missionId,
               (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_24;
    if ( LODWORD(v12->fields.age) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v8) )
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

  if ( (byte_4188DC8 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    byte_4188DC8 = 1;
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
  if ( (byte_4188DCA & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_B2C35C(&CondType_TypeInfo, method);
    byte_4188DCA = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_13:
    sub_B2C434(this, method);
  v4 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v4 < 1 )
    return 1;
  v5 = 0LL;
  v6 = (int)v4;
  while ( 1 )
  {
    if ( v5 >= targetIds->max_length )
    {
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
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
  if ( (byte_4188DC9 & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_B2C35C(&CondType_TypeInfo, method);
    byte_4188DC9 = 1;
  }
  targetIds = v2->fields.targetIds;
  if ( !targetIds )
LABEL_13:
    sub_B2C434(this, method);
  v4 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v4 < 1 )
    return 1;
  v5 = 0LL;
  v6 = (int)v4;
  while ( 1 )
  {
    if ( v5 >= targetIds->max_length )
    {
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
    }
    v7 = targetIds->m_Items[v5 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_25746984(v7, -1, 0, 0LL);
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
  Il2CppObject *v2; // x19
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4184B23 & 1) == 0 )
  {
    sub_B2C35C(&EventMissionConditionEntity___c_TypeInfo, v1);
    byte_4184B23 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventMissionConditionEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.missionId;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B2C434(this, 0LL);
  return target->fields.missionProgressType > 3;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B2C434(this, 0LL);
  return target->fields.missionProgressType == 5;
}