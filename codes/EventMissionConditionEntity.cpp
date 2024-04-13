void __fastcall EventMissionConditionEntity___ctor(EventMissionConditionEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8FF9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8FF9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventMissionConditionEntity__CreatePK(
        int32_t missionId,
        int32_t missionProgressType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_42E8FEE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, missionProgressType, id, method);
    byte_42E8FEE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           missionId,
           missionProgressType,
           id,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_long__o *v14; // x20
  int64_t ProgressNum; // x0
  __int64 v16; // x1
  struct System_Int32_array *targetIds; // x8
  __int64 v18; // x9
  unsigned __int64 v19; // x25
  signed __int64 v20; // x26
  int32_t v21; // w21
  int32_t condType; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  __int64 v26; // x0

  if ( (byte_42E8FF2 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_long__TypeInfo, v11, v12, v13);
    byte_42E8FF2 = 1;
  }
  v14 = (System_Collections_Generic_List_long__o *)sub_B5D694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_3046A2C *)Method_System_Collections_Generic_List_long___ctor__);
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    goto LABEL_13;
  v18 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = 0LL;
    v20 = (int)v18;
    do
    {
      if ( v19 >= targetIds->max_length )
      {
        v26 = sub_B5D6C8(ProgressNum);
        sub_B5D668(v26, 0LL);
      }
      v21 = targetIds->m_Items[v19 + 1];
      condType = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      ProgressNum = CondType__GetProgressNum(condType, v21, targetNum, missionTargetId, 0LL);
      if ( !v14 )
        break;
      System_Collections_Generic_List_long___Add(
        v14,
        ProgressNum,
        (const MethodInfo_3047788 *)Method_System_Collections_Generic_List_long__Add__);
      if ( (__int64)++v19 >= v20 )
        return System_Linq_Enumerable__Max_41210692((System_Collections_Generic_IEnumerable_long__o *)v14, 0LL);
      targetIds = this->fields.targetIds;
    }
    while ( targetIds );
LABEL_13:
    sub_B5D69C(ProgressNum, v16);
  }
  return System_Linq_Enumerable__Max_41210692((System_Collections_Generic_IEnumerable_long__o *)v14, 0LL);
}


System_Collections_Generic_HashSet_int__o *__fastcall EventMissionConditionEntity__GetPossibleClientProgressMissionCondDetailIdHashSet(
        EventMissionConditionEntity_o *this,
        int64_t deemedTime,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int64_t Instance; // x0
  __int64 v45; // x1
  struct System_Int32_array *targetIds; // x24
  __int64 v47; // x8
  unsigned __int64 v48; // x25
  int32_t v49; // w22
  __int64 v50; // x28
  __int64 v51; // x8
  unsigned __int64 v52; // x21
  int32_t v53; // w23
  UserEventRandomMissionMaster_o *MasterData_WarQuestSelectionMaster; // x23
  __int64 v56; // x0
  System_Collections_Generic_HashSet_int__o *v57; // [xsp+8h] [xbp-88h]
  WarEntity_o *v59; // [xsp+18h] [xbp-78h] BYREF
  UserEventRandomMissionEntity_o *v60; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *v61; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *v62; // [xsp+30h] [xbp-60h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  Time = deemedTime;
  if ( (byte_42E8FF8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, deemedTime, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionCondDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_MstMissionMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventRandomMissionMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(
      &Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&NetworkManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    byte_42E8FF8 = 1;
  }
  v62 = 0LL;
  entity = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v59 = 0LL;
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  v57 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v57,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( this->fields.condType == 22 )
  {
    targetIds = this->fields.targetIds;
    if ( !targetIds )
      goto LABEL_54;
    v47 = *(_QWORD *)&targetIds->max_length;
    if ( (int)v47 >= 1 )
    {
      v48 = 0LL;
      while ( 1 )
      {
        if ( v48 >= (unsigned int)v47 )
        {
LABEL_55:
          v56 = sub_B5D6C8(Instance);
          sub_B5D668(v56, 0LL);
        }
        v49 = targetIds->m_Items[v48 + 1];
        Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          break;
        Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionCondDetailMaster___);
        if ( !Instance )
          break;
        Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                     (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                     &entity,
                     v49,
                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionCondDetailMaster__EventMissionCondDetailEntity__int__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          if ( !entity )
            break;
          switch ( entity->fields.parentWarId )
          {
            case 1:
              v50 = *(_QWORD *)&entity->fields.flag;
              if ( !v50 )
                goto LABEL_54;
              v51 = *(_QWORD *)(v50 + 24);
              if ( (int)v51 < 1 )
                goto LABEL_52;
              v52 = 0LL;
              break;
            case 2:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
              if ( !Instance )
                goto LABEL_54;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &v62,
                           this->fields.missionId,
                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              if ( !v62 )
                goto LABEL_54;
              if ( *(_QWORD *)&v62->fields.parentWarId > Time || *(_QWORD *)&v62->fields.flag < Time )
                goto LABEL_52;
              goto LABEL_50;
            case 3:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MstMissionMaster___);
              if ( !Instance )
                goto LABEL_54;
              Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                           (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                           &v61,
                           this->fields.missionTargetId,
                           (const MethodInfo_23FAE6C *)Method_DataMasterBase_MstMissionMaster__MstMissionEntity__int__TryGetEntity__);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              Instance = (int64_t)v61;
              if ( !v61 )
                goto LABEL_54;
              Instance = MstMissionEntity__isOpen((MstMissionEntity_o *)v61, Time, 0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              goto LABEL_50;
            case 4:
              Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_54;
              MasterData_WarQuestSelectionMaster = (UserEventRandomMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)Instance,
                                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventRandomMissionMaster___);
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
                           &v60,
                           Instance,
                           this->fields.missionId,
                           0LL);
              if ( (Instance & 1) == 0 )
                goto LABEL_52;
              Instance = (int64_t)v60;
              if ( !v60 )
                goto LABEL_54;
              Instance = UserEventRandomMissionEntity__IsInProgress(v60, 0LL);
              if ( (Instance & 1) != 0 )
                goto LABEL_50;
              goto LABEL_52;
            default:
              goto LABEL_50;
          }
          while ( 1 )
          {
            if ( v52 >= (unsigned int)v51 )
              goto LABEL_55;
            v53 = *(_DWORD *)(v50 + 32 + 4 * v52);
            Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_54;
            Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
            if ( !Instance )
              goto LABEL_54;
            Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                         &v59,
                         v53,
                         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
            if ( (Instance & 1) != 0 )
            {
              Instance = (int64_t)v59;
              if ( !v59 )
                goto LABEL_54;
              Instance = EventEntity__IsOpen_29837068((EventEntity_o *)v59, Time, 0, 0LL);
              if ( (Instance & 1) != 0 )
                break;
            }
            LODWORD(v51) = *(_DWORD *)(v50 + 24);
            if ( (__int64)++v52 >= (int)v51 )
              goto LABEL_52;
          }
LABEL_50:
          Instance = (int64_t)v57;
          if ( !v57 )
            break;
          Instance = System_Collections_Generic_HashSet_int___Add(
                       v57,
                       v49,
                       (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
LABEL_52:
        LODWORD(v47) = targetIds->max_length;
        if ( (__int64)++v48 >= (int)v47 )
          return v57;
      }
LABEL_54:
      sub_B5D69C(Instance, v45);
    }
  }
  return v57;
}


int64_t __fastcall EventMissionConditionEntity__GetProgNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  unsigned int condType; // w20
  int64_t IsMultiTargetParamCond; // x0
  __int64 v8; // x1
  int32_t v9; // w20
  System_Int32_array *targetIds; // x19
  struct System_Int32_array *v11; // x26
  __int64 v12; // x8
  int64_t v13; // x20
  unsigned __int64 v14; // x27
  int32_t v15; // w21
  int32_t v16; // w24
  int64_t targetNum; // x22
  int32_t missionTargetId; // w23
  __int64 v19; // x0

  if ( (byte_42E8FF0 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8FF0 = 1;
  }
  condType = this->fields.condType;
  if ( condType <= 9 && ((1 << condType) & 0x2C0) != 0 )
    return EventMissionConditionEntity__GetMaxProgNum(this, method);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsMultiTargetParamCond = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (IsMultiTargetParamCond & 1) != 0 )
  {
    v9 = this->fields.condType;
    targetIds = this->fields.targetIds;
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__GetProgressNumByTargetIds(v9, targetIds, 0LL);
  }
  else
  {
    v11 = this->fields.targetIds;
    if ( !v11 )
      sub_B5D69C(IsMultiTargetParamCond, v8);
    v12 = *(_QWORD *)&v11->max_length;
    if ( (int)v12 < 1 )
      return 0LL;
    v13 = 0LL;
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v12 )
      {
        v19 = sub_B5D6C8(IsMultiTargetParamCond);
        sub_B5D668(v19, 0LL);
      }
      v15 = v11->m_Items[v14 + 1];
      v16 = this->fields.condType;
      targetNum = this->fields.targetNum;
      missionTargetId = this->fields.missionTargetId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsMultiTargetParamCond = CondType__GetProgressNum(v16, v15, targetNum, missionTargetId, 0LL);
      LODWORD(v12) = v11->max_length;
      ++v14;
      v13 += IsMultiTargetParamCond;
    }
    while ( (__int64)v14 < (int)v12 );
    return v13;
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int64_t Instance; // x0
  __int64 v75; // x1
  UserEventMissionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_int__o *v77; // x21
  const MethodInfo *v78; // x2
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntitiesFromTargetId; // x21
  EventMissionConditionEntity___c_c *v80; // x8
  struct EventMissionConditionEntity___c_StaticFields *v81; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__26_1; // x22
  Il2CppObject *v83; // x23
  struct EventMissionConditionEntity___c_StaticFields *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  StonePurchaseNotificationMenu_DialogOpenQueue_o *StonePurchaseNotificationMenu_DialogOpenQueue; // x0
  System_Collections_Generic_List_UserEventMissionEntity__o *ListFromMissionTargetId; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v95; // x21
  System_Collections_Generic_List_T__o *All; // x0
  int32_t condType; // w8
  System_Collections_Generic_List_T__o *v98; // x20
  EventMissionConditionEntity___c_c *v99; // x0
  struct EventMissionConditionEntity___c_StaticFields *v100; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__26_3; // x19
  Il2CppObject *v102; // x21
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct EventMissionConditionEntity___c_StaticFields *v109; // x0
  BattleServantConfConponent_o *p__9__26_3; // x0
  EventMissionConditionEntity___c_c *v111; // x0
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x8
  Il2CppObject *v113; // x21
  struct EventMissionConditionEntity___c_StaticFields *v114; // x0
  UserEventMissionCondDetailMaster_o *v115; // x20
  struct System_Int32_array *targetIds; // x8
  __int64 v118; // x0
  UserEventMissionCondDetailEntity_o *v119; // [xsp+0h] [xbp-50h] BYREF
  UserEventMissionEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8FF7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_UserEventMissionEntity___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_First_EventMissionConditionEntity___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___, v17, v18, v19);
    sub_B5D5C4(&Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_EventMissionConditionEntity__int___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_UserEventMissionEntity__bool___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Func_UserEventMissionEntity__bool__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Func_EventMissionConditionEntity__int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v44, v45, v46);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v47, v48, v49);
    sub_B5D5C4(&NetworkManager_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_System_Predicate_UserEventMissionEntity___ctor__, v53, v54, v55);
    sub_B5D5C4(&System_Predicate_UserEventMissionEntity__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59, v60, v61);
    sub_B5D5C4(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__, v62, v63, v64);
    sub_B5D5C4(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__, v65, v66, v67);
    sub_B5D5C4(&Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__, v68, v69, v70);
    sub_B5D5C4(&EventMissionConditionEntity___c_TypeInfo, v71, v72, v73);
    byte_42E8FF7 = 1;
  }
  v119 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_WarQuestSelectionMaster = (UserEventMissionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionMaster___);
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
    v95 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_UserEventMissionEntity__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v95,
      (Il2CppObject *)this,
      Method_EventMissionConditionEntity__IsActiveDailyMission_b__26_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_UserEventMissionEntity___ctor__);
    if ( ListFromMissionTargetId )
    {
      All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)ListFromMissionTargetId,
              (System_Predicate_T__o *)v95,
              (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_UserEventMissionEntity__FindAll__);
      condType = this->fields.condType;
      if ( condType != 22 )
      {
        v98 = All;
        if ( condType == 24 )
        {
          v111 = EventMissionConditionEntity___c_TypeInfo;
          if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v111 = EventMissionConditionEntity___c_TypeInfo;
          }
          static_fields = v111->static_fields;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__26_3;
          if ( _9__26_3 )
            return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                     v98,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( (BYTE3(v111->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v111);
            static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v113 = (Il2CppObject *)static_fields->__9;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__26_3,
            v113,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_3__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_UserEventMissionEntity__bool___ctor__);
          v114 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v114->__9__26_3 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (BattleServantConfConponent_o *)&v114->__9__26_3;
          goto LABEL_48;
        }
        if ( condType == 23 )
        {
          v99 = EventMissionConditionEntity___c_TypeInfo;
          if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
            v99 = EventMissionConditionEntity___c_TypeInfo;
          }
          v100 = v99->static_fields;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v100->__9__26_2;
          if ( _9__26_3 )
            return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                     v98,
                     (System_Func_T__bool__o *)_9__26_3,
                     (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_UserEventMissionEntity___);
          if ( (BYTE3(v99->vtable._0_Equals.methodPtr) & 4) != 0 && !v99->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v99);
            v100 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          }
          v102 = (Il2CppObject *)v100->__9;
          _9__26_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_UserEventMissionEntity__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            _9__26_3,
            v102,
            Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_2__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_UserEventMissionEntity__bool___ctor__);
          v109 = EventMissionConditionEntity___c_TypeInfo->static_fields;
          v109->__9__26_2 = (struct System_Func_UserEventMissionEntity__bool__o *)_9__26_3;
          p__9__26_3 = (BattleServantConfConponent_o *)&v109->__9__26_2;
LABEL_48:
          sub_B5D560(p__9__26_3, (System_Int32_array **)_9__26_3, v103, v104, v105, v106, v107, v108);
          return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                   v98,
                   (System_Func_T__bool__o *)_9__26_3,
                   (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_UserEventMissionEntity___);
        }
        return 0;
      }
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        v115 = (UserEventMissionCondDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)Instance,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionCondDetailMaster___);
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
            v118 = sub_B5D6C8(Instance);
            sub_B5D668(v118, 0LL);
          }
          if ( v115 )
          {
            Instance = UserEventMissionCondDetailMaster__TryGetEntity(v115, &v119, Instance, targetIds->m_Items[1], 0LL);
            if ( (Instance & 1) == 0 )
              return 0;
            if ( v119 )
              return v119->fields.progressNum <= this->fields.targetNum;
          }
        }
      }
    }
LABEL_62:
    sub_B5D69C(Instance, v75);
  }
  v77 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v77,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !v77 )
    goto LABEL_62;
  System_Collections_Generic_List_int___Add(
    v77,
    4,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  System_Collections_Generic_List_int___Add(
    v77,
    5,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  if ( !System_Collections_Generic_List_int___Contains(
          v77,
          this->fields.missionProgressType,
          (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
    goto LABEL_25;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( !Instance )
    goto LABEL_62;
  EntitiesFromTargetId = EventMissionConditionMaster__GetEntitiesFromTargetId(
                           (EventMissionConditionMaster_o *)Instance,
                           this->fields.missionTargetId,
                           v78);
  v80 = EventMissionConditionEntity___c_TypeInfo;
  if ( (BYTE3(EventMissionConditionEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionConditionEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionConditionEntity___c_TypeInfo);
    v80 = EventMissionConditionEntity___c_TypeInfo;
  }
  v81 = v80->static_fields;
  _9__26_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v81->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80);
      v81 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    }
    v83 = (Il2CppObject *)v81->__9;
    _9__26_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_EventMissionConditionEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__26_1,
      v83,
      Method_EventMissionConditionEntity___c__IsActiveDailyMission_b__26_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_EventMissionConditionEntity__int___ctor__);
    v84 = EventMissionConditionEntity___c_TypeInfo->static_fields;
    v84->__9__26_1 = (struct System_Func_EventMissionConditionEntity__int__o *)_9__26_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v84->__9__26_1,
      (System_Int32_array **)_9__26_1,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
  }
  v91 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntitiesFromTargetId,
                                                               (System_Func_TSource__TKey__o *)_9__26_1,
                                                               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_EventMissionConditionEntity__int___);
  StonePurchaseNotificationMenu_DialogOpenQueue = System_Linq_Enumerable__First_StonePurchaseNotificationMenu_DialogOpenQueue_(
                                                    v91,
                                                    (const MethodInfo_1CAADA0 *)Method_System_Linq_Enumerable_First_EventMissionConditionEntity___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1

  if ( (byte_42E8FF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8FF6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.missionId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
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
    sub_B5D69C(this, target);
  if ( !targetIds->max_length )
  {
    v5 = sub_B5D6C8(this);
    sub_B5D668(v5, 0LL);
  }
  return target->fields.missionId == targetIds->m_Items[1] && UserEventMissionEntity__IsTodayMissionData(target, 0LL);
}


bool __fastcall EventMissionConditionEntity__getMissionProgress(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int64_t Instance; // x0
  const MethodInfo *v21; // x1
  UserEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v23; // x2
  int32_t condType; // w20
  int32_t v26; // w21
  int64_t v27; // x19
  System_Int32_array *v28; // x20
  struct System_Int32_array *targetIds; // x24
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  int32_t v32; // w20
  int32_t v33; // w22
  int64_t targetNum; // x21
  __int64 v36; // x0
  WarEntity_o *v37; // [xsp+0h] [xbp-50h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8FEF & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E8FEF = 1;
  }
  v37 = 0LL;
  entity = 0LL;
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, method) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_39;
    MasterData_WarQuestSelectionMaster = (UserEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
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
      return EventMissionConditionEntity__GetUserEventMissionFixProgress(this, entity, v23);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v37,
               this->fields.missionId,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v37 )
      goto LABEL_39;
    if ( LODWORD(v37->fields.age) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v21) )
      return 0;
  }
  if ( (unsigned int)(this->fields.missionProgressType - 1) > 2 )
    return EventMissionConditionEntity__GetProgNum(this, v21) >= this->fields.targetNum;
  condType = this->fields.condType;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  Instance = CondType__IsMultiTargetParamCond(condType, 0LL);
  if ( (Instance & 1) == 0 )
  {
    targetIds = this->fields.targetIds;
    if ( targetIds )
    {
      v30 = *(_QWORD *)&targetIds->max_length;
      if ( (int)v30 < 1 )
        return 1;
      v31 = 0LL;
      while ( 1 )
      {
        if ( v31 >= (unsigned int)v30 )
        {
          v36 = sub_B5D6C8(Instance);
          sub_B5D668(v36, 0LL);
        }
        v32 = targetIds->m_Items[v31 + 1];
        v33 = this->fields.condType;
        targetNum = this->fields.targetNum;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = CondType__IsOpen(v33, v32, targetNum, 0, 0LL);
        if ( (Instance & 1) == 0 )
          break;
        LODWORD(v30) = targetIds->max_length;
        if ( (__int64)++v31 >= (int)v30 )
          return 1;
      }
      return 0;
    }
LABEL_39:
    sub_B5D69C(Instance, v21);
  }
  v26 = this->fields.condType;
  v28 = this->fields.targetIds;
  v27 = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenWithSumOfProgressCount(v26, v28, v27, 0LL);
}


int64_t __fastcall EventMissionConditionEntity__getProgressNum(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int64_t Instance; // x0
  const MethodInfo *v18; // x1
  UserEventMissionFixMaster_o *MasterData_WarQuestSelectionMaster; // x20
  const MethodInfo *v20; // x1
  int64_t result; // x0
  WarEntity_o *v22; // [xsp+8h] [xbp-28h] BYREF
  UserEventMissionFixEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E8FF1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMissionFixMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42E8FF1 = 1;
  }
  entity = 0LL;
  v22 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_WarQuestSelectionMaster = (UserEventMissionFixMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMissionFixMaster___);
  if ( !EventMissionConditionEntity__IsIgnoreStartCondition(this, v20) )
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
      sub_B5D69C(Instance, v18);
    }
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v22,
               this->fields.missionId,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v22 )
      goto LABEL_24;
    if ( LODWORD(v22->fields.age) == 3 && !EventMissionConditionEntity__IsActiveDailyMission(this, v18) )
      return 0LL;
  }
  result = EventMissionConditionEntity__GetProgNum(this, v18);
  if ( result >= this->fields.targetNum )
    return this->fields.targetNum;
  return result;
}


int32_t __fastcall EventMissionConditionEntity__getProgressNumByDateType(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int64_t targetNum; // x19

  if ( (byte_42E8FF3 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8FF3 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  EventMissionConditionEntity_o *v4; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 v6; // x9
  unsigned __int64 v7; // x21
  signed __int64 v8; // x22
  int32_t v9; // w20
  __int64 v11; // x0

  v4 = this;
  if ( (byte_42E8FF5 & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8FF5 = 1;
  }
  targetIds = v4->fields.targetIds;
  if ( !targetIds )
LABEL_13:
    sub_B5D69C(this, method);
  v6 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v6 < 1 )
    return 1;
  v7 = 0LL;
  v8 = (int)v6;
  while ( 1 )
  {
    if ( v7 >= targetIds->max_length )
    {
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
    }
    v9 = targetIds->m_Items[v7 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventMissionConditionEntity_o *)CondType__IsMissionClear(v9, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    if ( (__int64)++v7 >= v8 )
      return 1;
    targetIds = v4->fields.targetIds;
    if ( !targetIds )
      goto LABEL_13;
  }
}


bool __fastcall EventMissionConditionEntity__isQuestClear(
        EventMissionConditionEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventMissionConditionEntity_o *v4; // x19
  struct System_Int32_array *targetIds; // x8
  __int64 v6; // x9
  unsigned __int64 v7; // x21
  signed __int64 v8; // x22
  int32_t v9; // w20
  __int64 v11; // x0

  v4 = this;
  if ( (byte_42E8FF4 & 1) == 0 )
  {
    this = (EventMissionConditionEntity_o *)sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8FF4 = 1;
  }
  targetIds = v4->fields.targetIds;
  if ( !targetIds )
LABEL_13:
    sub_B5D69C(this, method);
  v6 = *(_QWORD *)&targetIds->max_length;
  if ( (int)v6 < 1 )
    return 1;
  v7 = 0LL;
  v8 = (int)v6;
  while ( 1 )
  {
    if ( v7 >= targetIds->max_length )
    {
      v11 = sub_B5D6C8(this);
      sub_B5D668(v11, 0LL);
    }
    v9 = targetIds->m_Items[v7 + 1];
    if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    this = (EventMissionConditionEntity_o *)CondType__IsQuestClear_25877652(v9, -1, 0, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 0;
    if ( (__int64)++v7 >= v8 )
      return 1;
    targetIds = v4->fields.targetIds;
    if ( !targetIds )
      goto LABEL_13;
  }
}


void __fastcall EventMissionConditionEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventMissionConditionEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E655E & 1) == 0 )
  {
    sub_B5D5C4(&EventMissionConditionEntity___c_TypeInfo, v1, v2, v3);
    byte_42E655E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventMissionConditionEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventMissionConditionEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventMissionConditionEntity___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields.missionId;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_2(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B5D69C(this, 0LL);
  return target->fields.missionProgressType > 3;
}


bool __fastcall EventMissionConditionEntity___c___IsActiveDailyMission_b__26_3(
        EventMissionConditionEntity___c_o *this,
        UserEventMissionEntity_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_B5D69C(this, 0LL);
  return target->fields.missionProgressType == 5;
}