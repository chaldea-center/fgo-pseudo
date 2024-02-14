void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_421A20E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__, method);
    byte_421A20E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    144,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_421A20C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__, userId);
    byte_421A20C = 1;
  }
  PK = UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_266A024 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_421A20D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__, entity);
    byte_421A20D = 1;
  }
  PK = UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v11; // w22
  int v12; // w21

  if ( (byte_421A210 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v7);
    byte_421A210 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  }
  v11 = *((_DWORD *)SupportDeck[11].monitor + 38);
  if ( v11 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)UserServantLeaderMaster__getSupportDeck(
                                                                     this,
                                                                     ++v12,
                                                                     v9);
      if ( !v8 )
        break;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
        SupportDeck,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v12 >= v11 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_13:
    sub_B0D97C(SupportDeck);
  }
  if ( !v8 )
    goto LABEL_13;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v8,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getSupportDeck(
        UserServantLeaderMaster_o *this,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v14; // x21
  int32_t Count; // w22
  BalanceConfig_c *v16; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  UserServantLeaderEntity_array *v19; // x23
  __int64 v20; // x28
  unsigned __int64 v21; // x24
  UserServantLeaderEntity_o **m_Items; // x20
  UserServantLeaderEntity_o *v23; // x25
  const MethodInfo *v24; // x3
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  BalanceConfig_c *v31; // x0
  int32_t v32; // w24
  __int64 v33; // x25
  __int64 v34; // x9
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x4
  __int64 v37; // x2
  __int64 v38; // x8
  __int128 v39; // q0
  __int64 v40; // x8
  __int128 v41; // q0
  System_Int64_array *v42; // x26
  __int64 v43; // x8
  UserServantLeaderEntity_o *v44; // x8
  EquipTargetInfo_o *v45; // x1
  __int64 v47; // x0
  __int64 v48; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+50h] [xbp-80h]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_421A20F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&supportDeckId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B0D8A4(&long___TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&UserServantLeaderEntity___TypeInfo, v11);
    sub_B0D8A4(&UserServantLeaderEntity_TypeInfo, v12);
    byte_421A20F = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___),
        !this->fields.list) )
  {
LABEL_56:
    sub_B0D97C(Instance);
  }
  v14 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  v19 = (UserServantLeaderEntity_array *)sub_B0D8BC(
                                           UserServantLeaderEntity___TypeInfo,
                                           (unsigned int)v16->static_fields->SupportDeckMemberMax);
  v20 = 0LL;
  v21 = 0LL;
  m_Items = v19->m_Items;
  while ( 1 )
  {
    v31 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v21 >= v31->static_fields->SupportDeckMemberMax )
      break;
    v23 = (UserServantLeaderEntity_o *)sub_B0D974(UserServantLeaderEntity_TypeInfo, v17, v18);
    UserServantLeaderEntity___ctor_34279952(v23, v21, supportDeckId, v24);
    if ( !v19 )
      goto LABEL_56;
    if ( v23 )
    {
      Instance = sub_B0D964(v23, v19->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_59;
    }
    if ( v21 >= v19->max_length )
    {
LABEL_57:
      v47 = sub_B0D9A8(Instance);
      sub_B0D948(v47, 0LL);
    }
    m_Items[v21] = v23;
    sub_B0D840((BattleServantConfConponent_o *)&m_Items[v20], (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
    ++v21;
    ++v20;
  }
  if ( Count >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        goto LABEL_56;
      Instance = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v32,
                            (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_56;
      v33 = Instance;
      v34 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v34
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v34 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v35 = *(const MethodInfo **)(Instance + 56);
        if ( v35 )
        {
          if ( !v14 )
            goto LABEL_56;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       v14,
                       &entity,
                       (int64_t)v35,
                       (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v19 )
              goto LABEL_56;
            v37 = *(int *)(v33 + 52);
            if ( (unsigned int)v37 >= v19->max_length )
              goto LABEL_57;
            Instance = (__int64)v19->m_Items[v37];
            if ( !Instance )
              goto LABEL_56;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              entity,
              v37,
              supportDeckId,
              v36);
          }
        }
        v38 = *(_QWORD *)(v33 + 32);
        if ( v38 )
        {
          v39 = *(_OWORD *)(v38 + 40);
          *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v38 + 24);
          *(_OWORD *)&v52.fields.fakeValue = v39;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v51 = v52;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v51, 0LL);
          if ( Instance )
          {
            Instance = sub_B0D8BC(long___TypeInfo, 1LL);
            v40 = *(_QWORD *)(v33 + 32);
            if ( !v40 )
              goto LABEL_56;
            v41 = *(_OWORD *)(v40 + 40);
            v42 = (System_Int64_array *)Instance;
            *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)(v40 + 24);
            *(_OWORD *)&v52.fields.fakeValue = v41;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v50 = v52;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v50, 0LL);
            if ( !v42 )
              goto LABEL_56;
            if ( !v42->max_length )
              goto LABEL_57;
            v42->m_Items[0] = Instance;
            if ( !v14 )
              goto LABEL_56;
            Instance = DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v14, v42, 0LL);
          }
          if ( !v19 )
            goto LABEL_56;
        }
        else
        {
          Instance = 0LL;
          if ( !v19 )
            goto LABEL_56;
        }
        v43 = *(int *)(v33 + 52);
        if ( (unsigned int)v43 >= v19->max_length )
          goto LABEL_57;
        v44 = v19->m_Items[v43];
        if ( (Instance & 1) != 0 )
        {
          v45 = *(EquipTargetInfo_o **)(v33 + 32);
          if ( !v44 )
            goto LABEL_56;
        }
        else
        {
          v45 = 0LL;
          if ( !v44 )
            goto LABEL_56;
        }
        UserServantLeaderEntity__setEquipTargetInfo(v44, v45, v35);
      }
      if ( ++v32 >= Count )
        return v19;
    }
    sub_B0DC70(Instance);
LABEL_59:
    v48 = sub_B0D99C(Instance);
    sub_B0D948(v48, 0LL);
  }
  return v19;
}