void __fastcall EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F88C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F88C0 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_40F88B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&missionProgressType);
    byte_40F88B5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_long__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Int32_array *targetIds; // x8
  __int64 v14; // x9
  unsigned __int64 v15; // x25
  signed __int64 v16; // x26
  int32_t v17; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  int64_t ProgressNum; // x0

  if ( (byte_40F88B9 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v8);
    byte_40F88B9 = 1;
  }
  v9 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                    System_Collections_Generic_List_long__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_long____ctor(
    v9,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_13;
  v14 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = 0LL;
    v16 = (int)v14;
    do
    {
      if ( v15 >= targetIds->max_length )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v17 = targetIds->m_Items[v15 + 1];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ProgressNum = CondType__GetProgressNum(condType, v17, targetNum, missionTargetId, 0LL);
      if ( !v9 )
        break;
      System_Collections_Generic_List_long___Add(
        v9,
        ProgressNum,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      if ( (__int64)++v15 >= v16 )
        return System_Linq_Enumerable__Max_40254604((System_Collections_Generic_IEnumerable_long__o *)v9, 0LL);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_13:
    sub_B170D4();
  }
  return System_Linq_Enumerable__Max_40254604((System_Collections_Generic_IEnumerable_long__o *)v9, 0LL);
}


System_Collections_Generic_HashSet_int__o *__fastcall EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
        EventMissionConditionEntity_o *this,
        int64_t deemedTime,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int64_t Time; // x20
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
  _BOOL8 isOpen; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Int32_array *targetIds; // x24
  __int64 v23; // x8
  unsigned __int64 v24; // x25
  int32_t v25; // w22
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v28; // x28
  __int64 v29; // x8
  unsigned __int64 v30; // x21
  int32_t v31; // w23
  WebViewManager_o *v32; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x0
  WebViewManager_o *v34; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x0
  WebViewManager_o *v36; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v37; // x0
  WebViewManager_o *v38; // x0
  UserEventRandomMissionMaster_o *v39; // x23
  int64_t UserId; // x0
  System_Collections_Generic_HashSet_int__o *v42; // [xsp+8h] [xbp-88h]
  WarEntity_o *v44; // [xsp+18h] [xbp-78h] BYREF
  UserEventRandomMissionEntity_o *v45; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *v46; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *v47; // [xsp+30h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  Time = deemedTime;
  if ( (byte_40F88BF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, deemedTime);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_MstMissionMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v11);
    sub_B16FFC(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v12);
    sub_B16FFC(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v15);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v16);
    sub_B16FFC(&NetworkManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    byte_40F88BF = 1;
  }
  v47 = 0LL;
  entity = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v44 = 0LL;
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  v42 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       deemedTime,
                                                       method,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor(
    v42,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_54;
    v23 = *(_QWORD *)&targetIds->max_length;
    if ( (int)v23 >= 1 )
    {
      v24 = 0LL;
      while ( 1 )
      {
        if ( v24 >= (unsigned int)v23 )
        {
LABEL_55:
          sub_B17100(isOpen, v20, v21);
          sub_B170A0();
        }
        v25 = targetIds->m_Items[v24 + 1];
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        isOpen = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                   MasterData_WarQuestSelectionMaster,
                   &entity,
                   v25,
                   (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
        if ( isOpen )
        {
          if ( !entity )
            break;
          switch ( entity->fields.parentWarId )
          {
            case 1:
              v28 = *(_QWORD *)&entity->fields.flag;
              if ( !v28 )
                goto LABEL_54;
              v29 = *(_QWORD *)(v28 + 24);
              if ( (int)v29 < 1 )
                goto LABEL_52;
              v30 = 0LL;
              break;
            case 2:
              v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v34 )
                goto LABEL_54;
              v35 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)v34,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !v35 )
                goto LABEL_54;
              isOpen = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         v35,
                         &v47,
                         this->fields.missionId,
                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( !isOpen )
                goto LABEL_52;
              if ( !v47 )
                goto LABEL_54;
              if ( *(_QWORD *)&v47->fields.parentWarId > Time || *(_QWORD *)&v47->fields.flag < Time )
                goto LABEL_52;
              goto LABEL_50;
            case 3:
              v36 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v36 )
                goto LABEL_54;
              v37 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)v36,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !v37 )
                goto LABEL_54;
              isOpen = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         v37,
                         &v46,
                         this->fields.missionTargetId,
                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( !isOpen )
                goto LABEL_52;
              if ( !v46 )
                goto LABEL_54;
              isOpen = MstMissionEntity__isOpen((MstMissionEntity_o *)v46, Time, 0LL);
              if ( !isOpen )
                goto LABEL_52;
              goto LABEL_50;
            case 4:
              v38 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !v38 )
                goto LABEL_54;
              v39 = (UserEventRandomMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)v38,
                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
              if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !NetworkManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              }
              UserId = NetworkManager__get_UserId(0LL);
              if ( !v39 )
                goto LABEL_54;
              isOpen = UserEventRandomMissionMaster__TryGetEntity(v39, &v45, UserId, this->fields.missionId, 0LL);
              if ( !isOpen )
                goto LABEL_52;
              if ( !v45 )
                goto LABEL_54;
              isOpen = UserEventRandomMissionEntity__IsInProgress(v45, 0LL);
              if ( isOpen )
                goto LABEL_50;
              goto LABEL_52;
            default:
              goto LABEL_50;
          }
          while ( 1 )
          {
            if ( v30 >= (unsigned int)v29 )
              goto LABEL_55;
            v31 = *(_DWORD *)(v28 + 32 + 4 * v30);
            v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v32 )
              goto LABEL_54;
            v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)v32,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !v33 )
              goto LABEL_54;
            isOpen = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       v33,
                       &v44,
                       v31,
                       (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( isOpen )
            {
              if ( !v44 )
                goto LABEL_54;
              isOpen = EventEntity__IsOpen_29427156((EventEntity_o *)v44, Time, 0, 0LL);
              if ( isOpen )
                break;
            }
            LODWORD(v29) = *(_DWORD *)(v28 + 24);
            if ( (__int64)++v30 >= (int)v29 )
              goto LABEL_52;
          }
LABEL_50:
          if ( !v42 )
            break;
          isOpen = System_Collections_Generic_HashSet_int___Add(
                     v42,
                     v25,
                     (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_52:
        LODWORD(v23) = targetIds->max_length;
        if ( (__int64)++v24 >= (int)v23 )
          return v42;
      }
LABEL_54:
      sub_B170D4();
    }
  }
  return v42;
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

  if ( (byte_40F88B7 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40F88B7 = 1;
  }
  condType = this->fields.condType;
  if ( condType <= 9 && ((1 << condType) & 0x2C0) != 0 )
    return EventMissionConditionEntity__GetMaxProgNum(this, method);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (IsMultiTargetParamCond & 1) != 0 )
  {
    v8 = this->fields.condType;
    targetIds = this->fields.targetIds;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetProgressNumByTargetIds(v8, targetIds, 0LL);
  }
  else
  {
    v10 = this->fields.targetIds;
    if ( !v10 )
      sub_B170D4();
    v11 = *(_QWORD *)&v10->max_length;
    if ( (int)v11 < 1 )
      return 0LL;
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v11 )
      {
        sub_B17100(IsMultiTargetParamCond, v6, v7);
        sub_B170A0();
      }
      v14 = v10->m_Items[v13 + 1];
      v15 = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_int__o *v33; // x21
  WebViewManager_o *v34; // x0
  EventMissionConditionMaster_o *v35; // x0
  const MethodInfo *v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntitiesFromTargetId; // x21
  EventMissionConditionEntity___c_c *v42; // x8
  struct EventMissionConditionEntity___c_StaticFields *v43; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__26_1; // x22
  Il2CppObject *v45; // x23
  struct EventMissionConditionEntity___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  System_Collections_Generic_List_UserEventMissionEntity__o *ListFromMissionTargetId; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v61; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  int32_t condType; // w8
  System_Collections_Generic_List_T__o *v68; // x20
  EventMissionConditionEntity___c_c *v69; // x0
  struct EventMissionConditionEntity___c_StaticFields *v70; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__26_3; // x19
  Il2CppObject *v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct EventMissionConditionEntity___c_StaticFields *v79; // x0
  BattleServantConfConponent_o *p__9__26_3; // x0
  EventMissionConditionEntity___c_c *v81; // x0
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x8
  Il2CppObject *v83; // x21
  struct EventMissionConditionEntity___c_StaticFields *v84; // x0
  WebViewManager_o *v85; // x0
  UserEventMissionCondDetailMaster_o *v86; // x20
  int64_t v87; // x0
  __int64 v88; // x1
  __int64 v89; // x2
  struct System_Int32_array *targetIds; // x8
  UserEventMissionCondDetailEntity_o *v92; // [xsp+0h] [xbp-50h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F88BE & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_UserEventMissionEntity___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v7);
    sub_B16FFC(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__, v8);
    sub_B16FFC(&Method_System_Func_EventMissionConditionEntity__int___ctor__, v9);
    sub_B16FFC(&Method_System_Func_UserEventMissionEntity__bool___ctor__, v10);
    sub_B16FFC(&System_Func_UserEventMissionEntity__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_EventMissionConditionEntity__int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&Method_System_Predicate_UserEventMissionEntity___ctor__, v19);
    sub_B16FFC(&System_Predicate_UserEventMissionEntity__TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__, v22);
    sub_B16FFC(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__, v23);
    sub_B16FFC(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__, v24);
    sub_B16FFC(&EventMissionConditionEntity___c_TypeInfo, v25);
    byte_40F88BE = 1;
  }
  v92 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_62;
  if ( !UserEventMissionMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          UserId,
          this->fields.missionId,
          0LL) )
  {
LABEL_28:
    ListFromMissionTargetId = UserEventMissionMaster__getListFromMissionTargetId(
                                MasterData_WarQuestSelectionMaster,
                                this->fields.missionTargetId,
                                0LL);
    v61 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                     System_Predicate_UserEventMissionEntity__TypeInfo,
                                                                     v57,
                                                                     v58,
                                                                     v59,
                                                                     v60);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v61,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_UserEventMissionEntity___ctor__);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)ListFromMissionTargetId,
              (System_Predicate_T__o *)v61,
              (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v68 = All;
        if ( condType == 24 )
        {
          v81 = EventMissionConditionEntity___c_TypeInfo;
          if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v81 = EventMissionConditionEntity___c_TypeInfo;
          }
          static_fields = v81->static_fields;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                     v68,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( (BYTE3(v81->vtable._0_Equals.methodPtr) & 4) != 0 && !v81->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v81);
            static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v83 = (Il2CppObject *)static_fields->__9;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                          System_Func_UserEventMissionEntity__bool__TypeInfo,
                                                                                          v63,
                                                                                          v64,
                                                                                          v65,
                                                                                          v66);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__26_3,
            v83,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_UserEventMissionEntity__bool___ctor__);
          v84 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v84->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (BattleServantConfConponent_o *)&v84->__9__26_3;
          goto LABEL_48;
        }
        if ( condType == 23 )
        {
          v69 = EventMissionConditionEntity___c_TypeInfo;
          if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v69 = EventMissionConditionEntity___c_TypeInfo;
          }
          v70 = v69->static_fields;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v70->__9__26_2;
          if ( _9__26_3 )
            return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                     v68,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( (BYTE3(v69->vtable._0_Equals.methodPtr) & 4) != 0 && !v69->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v69);
            v70 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v72 = (Il2CppObject *)v70->__9;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                          System_Func_UserEventMissionEntity__bool__TypeInfo,
                                                                                          v63,
                                                                                          v64,
                                                                                          v65,
                                                                                          v66);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__26_3,
            v72,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_UserEventMissionEntity__bool___ctor__);
          v79 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v79->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (BattleServantConfConponent_o *)&v79->__9__26_2;
LABEL_48:
          sub_B16F98(p__9__26_3, (System_Int32_array **)_9__26_3, v73, v74, v75, v76, v77, v78);
          return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                   v68,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      v85 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v85 )
      {
        v86 = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)v85,
                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        v87 = NetworkManager__get_UserId(0LL);
        targetIds = this->fields.targetIds;
        if ( targetIds )
        {
          if ( !targetIds->max_length )
          {
            sub_B17100(v87, v88, v89);
            sub_B170A0();
          }
          if ( v86 )
          {
            if ( !UserEventMissionCondDetailMaster__TryGetEntity(v86, &v92, v87, targetIds->m_Items[1], 0LL) )
              return 0;
            if ( v92 )
              return v92->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_62:
    sub_B170D4();
  }
  v33 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31,
                                                    v32);
  System_Collections_Generic_List_int____ctor(
    v33,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v33 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Add(
    v33,
    4,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v33,
    5,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  if ( !System_Collections_Generic_List_int___Contains(
          v33,
          this->fields.missionProgressType,
          (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_25;
  v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v34 )
    goto LABEL_62;
  v35 = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v34,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !v35 )
    goto LABEL_62;
  EntitiesFromTargetId = EventMissionConditionMaster__GetEntitiesFromTargetId(v35, this->fields.missionTargetId, v36);
  v42 = EventMissionConditionEntity___c_TypeInfo;
  if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
    v42 = EventMissionConditionEntity___c_TypeInfo;
  }
  v43 = v42->static_fields;
  _9__26_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v43->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v43 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__26_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_EventMissionConditionEntity__int__TypeInfo,
                                                                                 v37,
                                                                                 v38,
                                                                                 v39,
                                                                                 v40);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__26_1,
      v45,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_EventMissionConditionEntity__int___ctor__);
    v46 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v46->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v46->__9__26_1,
      (System_Int32_array **)_9__26_1,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    v53,
                                                    (const MethodInfo_18D6DD4 *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
  if ( !StonePurchaseNotificationMenu_DialogOpenQueue
    || StonePurchaseNotificationMenu_DialogOpenQueue->fields.kind != this->fields.missionId )
  {
LABEL_25:
    if ( !entity )
      goto LABEL_62;
    if ( UserEventMissionEntity__IsTodayMissionData(entity, 0LL) )
      return 1;
    goto LABEL_28;
  }
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40F88BD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F88BD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   this->fields.missionId,
                   (const MethodInfo_266F388 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  return (*((unsigned __int8 *)&Entity->fields.id + 4) >> 3) & 1;
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

  if ( !target || (targetIds = this->fields.targetIds) == 0LL )
    sub_B170D4();
  if ( !targetIds->max_length )
  {
    sub_B17100(this, target, method);
    sub_B170A0();
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
  WebViewManager_o *Instance; // x0
  UserEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  const MethodInfo *v11; // x2
  WebViewManager_o *v13; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x0
  const MethodInfo *v15; // x1
  int32_t condType; // w20
  _BOOL8 IsMultiTargetParamCond; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t v20; // w21
  int64_t v21; // x19
  System_Int32_array *v22; // x20
  struct System_Int32_array *targetIds; // x24
  __int64 v24; // x8
  unsigned __int64 v25; // x25
  int32_t v26; // w20
  int32_t v27; // w22
  int64_t targetNum; // x21
  WarEntity_o *v30; // [xsp+0h] [xbp-50h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F88B6 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F88B6 = 1;
  }
  v30 = 0LL;
  entity = 0LL;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (UserEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_39;
    if ( UserEventMissionFixMaster__TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           UserId,
           this->fields.missionId,
           0LL) )
    {
      return EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v11);
    }
  }
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13 )
    goto LABEL_39;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v13,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !v14 )
    goto LABEL_39;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v14,
         &v30,
         this->fields.missionId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    if ( !v30 )
      goto LABEL_39;
    if ( LODWORD(v30->fields.age) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v15) )
      return 0;
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
    return EventMissionConditionEntity__GetProgNum(this, v15) >= this->fields.targetNum;
  condType = this->fields.condType;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( !IsMultiTargetParamCond )
  {
    targetIds = this->fields.targetIds;
    if ( targetIds )
    {
      v24 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v24 < 1 )
        return 1;
      v25 = 0LL;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)v24 )
        {
          sub_B17100(IsMultiTargetParamCond, v18, v19);
          sub_B170A0();
        }
        v26 = targetIds->m_Items[v25 + 1];
        v27 = this->fields.condType;
        targetNum = this->fields.targetNum;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        IsMultiTargetParamCond = CondType__IsOpen(v27, v26, targetNum, 0, 0LL);
        if ( !IsMultiTargetParamCond )
          break;
        LODWORD(v24) = targetIds->max_length;
        if ( (__int64)++v25 >= (int)v24 )
          return 1;
      }
      return 0;
    }
LABEL_39:
    sub_B170D4();
  }
  v20 = this->fields.condType;
  v22 = this->fields.targetIds;
  v21 = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenWithSumOfProgressCount(v20, v22, v21, 0LL);
}


int64_t __fastcall EventMissionConditionEntity__getProgressNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  UserEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v9; // x1
  int64_t UserId; // x0
  int64_t result; // x0
  WebViewManager_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x0
  const MethodInfo *v14; // x1
  WarEntity_o *v15; // [xsp+8h] [xbp-28h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F88B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F88B8 = 1;
  }
  entity = 0LL;
  v15 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v9) )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_24;
    if ( UserEventMissionFixMaster__TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           UserId,
           this->fields.missionId,
           0LL) )
    {
      if ( entity )
      {
        if ( entity->fields.progressType == 3 )
          return entity->fields.num;
        return 0LL;
      }
LABEL_24:
      sub_B170D4();
    }
  }
  v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v12 )
    goto LABEL_24;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v12,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !v13 )
    goto LABEL_24;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v13,
         &v15,
         this->fields.missionId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__) )
  {
    if ( !v15 )
      goto LABEL_24;
    if ( LODWORD(v15->fields.age) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v14) )
      return 0LL;
  }
  result = EventMissionConditionEntity__GetProgNum(this, v14);
  if ( result >= this->fields.targetNum )
    return this->fields.targetNum;
  return result;
}


int32_t __fastcall EventMissionConditionEntity__getProgressNumByDateType(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int64_t targetNum; // x19

  if ( (byte_40F88BA & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40F88BA = 1;
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
  __int64 v2; // x2
  EventMissionConditionEntity_o *v3; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 v5; // x9
  unsigned __int64 v6; // x21
  signed __int64 v7; // x22
  int32_t v8; // w20

  v3 = this;
  if ( (byte_40F88BC & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_B16FFC(&CondType_TypeInfo, method);
    byte_40F88BC = 1;
  }
  targetIds = v3->fields.targetIds;
  if ( !targetIds )
LABEL_13:
    sub_B170D4();
  v5 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v5 < 1 )
    return 1;
  v6 = 0LL;
  v7 = (int)v5;
  while ( 1 )
  {
    if ( v6 >= targetIds->max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v8 = targetIds->m_Items[v6 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventMissionConditionEntity_o *)CondType__IsMissionClear(v8, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    if ( (__int64)++v6 >= v7 )
      return 1;
    targetIds = v3->fields.targetIds;
    if ( !targetIds )
      goto LABEL_13;
  }
}


bool __fastcall EventMissionConditionEntity__isQuestClear(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventMissionConditionEntity_o *v3; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 v5; // x9
  unsigned __int64 v6; // x21
  signed __int64 v7; // x22
  int32_t v8; // w20

  v3 = this;
  if ( (byte_40F88BB & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_B16FFC(&CondType_TypeInfo, method);
    byte_40F88BB = 1;
  }
  targetIds = v3->fields.targetIds;
  if ( !targetIds )
LABEL_13:
    sub_B170D4();
  v5 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v5 < 1 )
    return 1;
  v6 = 0LL;
  v7 = (int)v5;
  while ( 1 )
  {
    if ( v6 >= targetIds->max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v8 = targetIds->m_Items[v6 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_25438860(v8, -1, 0, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    if ( (__int64)++v6 >= v7 )
      return 1;
    targetIds = v3->fields.targetIds;
    if ( !targetIds )
      goto LABEL_13;
  }
}


void __fastcall EventMissionConditionEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FF0 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionConditionEntity___c_TypeInfo, v1);
    byte_40F6FF0 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventMissionConditionEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventMissionConditionEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.missionId;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B170D4();
  return target->fields.missionProgressType > 3;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B170D4();
  return target->fields.missionProgressType == 5;
}