void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B5DFC & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
    byte_42B5DFC = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    145,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_o *__fastcall UserServantLeaderMaster__GetEntity(
        UserServantLeaderMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B5DFA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
    byte_42B5DFA = 1;
  }
  PK = UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23E2728 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantLeaderMaster__TryGetEntity(
        UserServantLeaderMaster_o *this,
        UserServantLeaderEntity_o **entity,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B5DFB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
    byte_42B5DFB = 1;
  }
  PK = UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v7; // w22
  int v8; // w21

  if ( (byte_42B5DFE & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
    byte_42B5DFE = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  }
  v7 = *((_DWORD *)SupportDeck[11].monitor + 38);
  if ( v7 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)UserServantLeaderMaster__getSupportDeck(
                                                                     this,
                                                                     ++v8,
                                                                     v5);
      if ( !v3 )
        break;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3,
        SupportDeck,
        (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v8 >= v7 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                                  (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_13:
    sub_B52A5C(SupportDeck, v4);
  }
  if ( !v3 )
    goto LABEL_13;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                            (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getSupportDeck(
        UserServantLeaderMaster_o *this,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  EquipTargetInfo_o *v5; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v6; // x21
  int32_t Count; // w22
  BalanceConfig_c *v8; // x8
  UserServantLeaderEntity_array *v9; // x23
  __int64 v10; // x28
  unsigned __int64 v11; // x24
  UserServantLeaderEntity_o **m_Items; // x20
  UserServantLeaderEntity_o *v13; // x25
  const MethodInfo *v14; // x3
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BalanceConfig_c *v21; // x0
  int32_t v22; // w24
  __int64 v23; // x25
  __int64 v24; // x9
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x4
  __int64 v27; // x2
  __int64 v28; // x8
  __int128 v29; // q0
  __int64 v30; // x8
  __int128 v31; // q0
  System_Int64_array *v32; // x26
  __int64 v33; // x8
  UserServantLeaderEntity_o *v34; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+50h] [xbp-80h]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_42B5DFD & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantLeaderEntity___TypeInfo);
    sub_B52984(&UserServantLeaderEntity_TypeInfo);
    byte_42B5DFD = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___),
        !this->fields.list) )
  {
LABEL_56:
    sub_B52A5C(Instance, v5);
  }
  v6 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (UserServantLeaderEntity_array *)sub_B5299C(
                                          UserServantLeaderEntity___TypeInfo,
                                          (unsigned int)v8->static_fields->SupportDeckMemberMax);
  v10 = 0LL;
  v11 = 0LL;
  m_Items = v9->m_Items;
  while ( 1 )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v11 >= v21->static_fields->SupportDeckMemberMax )
      break;
    v13 = (UserServantLeaderEntity_o *)sub_B52A54(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_35286032(v13, v11, supportDeckId, v14);
    if ( !v9 )
      goto LABEL_56;
    if ( v13 )
    {
      Instance = sub_B52A44(v13, v9->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_59;
    }
    if ( v11 >= v9->max_length )
    {
LABEL_57:
      v36 = sub_B52A88(Instance);
      sub_B52A28(v36, 0LL);
    }
    m_Items[v11] = v13;
    sub_B52920((BattleServantConfConponent_o *)&m_Items[v10], (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
    ++v11;
    ++v10;
  }
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        goto LABEL_56;
      Instance = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v22,
                            (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_56;
      v5 = (EquipTargetInfo_o *)UserServantLeaderEntity_TypeInfo;
      v23 = Instance;
      v24 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v24
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v24 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v25 = *(const MethodInfo **)(Instance + 56);
        if ( v25 )
        {
          if ( !v6 )
            goto LABEL_56;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       v6,
                       &entity,
                       (int64_t)v25,
                       (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v9 )
              goto LABEL_56;
            v27 = *(int *)(v23 + 52);
            if ( (unsigned int)v27 >= v9->max_length )
              goto LABEL_57;
            Instance = (__int64)v9->m_Items[v27];
            if ( !Instance )
              goto LABEL_56;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              entity,
              v27,
              supportDeckId,
              v26);
          }
        }
        v28 = *(_QWORD *)(v23 + 32);
        if ( v28 )
        {
          v29 = *(_OWORD *)(v28 + 40);
          *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(v28 + 24);
          *(_OWORD *)&v41.fields.fakeValue = v29;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v40 = v41;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v40, 0LL);
          if ( Instance )
          {
            Instance = sub_B5299C(long___TypeInfo, 1LL);
            v30 = *(_QWORD *)(v23 + 32);
            if ( !v30 )
              goto LABEL_56;
            v31 = *(_OWORD *)(v30 + 40);
            v32 = (System_Int64_array *)Instance;
            *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)(v30 + 24);
            *(_OWORD *)&v41.fields.fakeValue = v31;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v39 = v41;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v39, 0LL);
            if ( !v32 )
              goto LABEL_56;
            if ( !v32->max_length )
              goto LABEL_57;
            v32->m_Items[0] = Instance;
            if ( !v6 )
              goto LABEL_56;
            Instance = DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v6, v32, 0LL);
          }
          if ( !v9 )
            goto LABEL_56;
        }
        else
        {
          Instance = 0LL;
          if ( !v9 )
            goto LABEL_56;
        }
        v33 = *(int *)(v23 + 52);
        if ( (unsigned int)v33 >= v9->max_length )
          goto LABEL_57;
        v34 = v9->m_Items[v33];
        if ( (Instance & 1) != 0 )
        {
          v5 = *(EquipTargetInfo_o **)(v23 + 32);
          if ( !v34 )
            goto LABEL_56;
        }
        else
        {
          v5 = 0LL;
          if ( !v34 )
            goto LABEL_56;
        }
        UserServantLeaderEntity__setEquipTargetInfo(v34, v5, v25);
      }
      if ( ++v22 >= Count )
        return v9;
    }
    sub_B52D50(Instance);
LABEL_59:
    v37 = sub_B52A7C(Instance);
    sub_B52A28(v37, 0LL);
  }
  return v9;
}