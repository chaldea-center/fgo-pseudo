void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D22B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__, method);
    byte_418D22B = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    144,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_418D229 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__, userId);
    byte_418D229 = 1;
  }
  PK = UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_24E4520 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_418D22A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__, entity);
    byte_418D22A = 1;
  }
  PK = UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v11; // w22
  int v12; // w21

  if ( (byte_418D22D & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v6);
    byte_418D22D = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
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
      if ( !v7 )
        break;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
        SupportDeck,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v12 >= v11 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_13:
    sub_B2C434(SupportDeck, v8);
  }
  if ( !v7 )
    goto LABEL_13;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
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
  EquipTargetInfo_o *v14; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v15; // x21
  int32_t Count; // w22
  BalanceConfig_c *v17; // x8
  UserServantLeaderEntity_array *v18; // x23
  __int64 v19; // x28
  unsigned __int64 v20; // x24
  UserServantLeaderEntity_o **m_Items; // x20
  UserServantLeaderEntity_o *v22; // x25
  const MethodInfo *v23; // x3
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BalanceConfig_c *v30; // x0
  int32_t v31; // w24
  __int64 v32; // x25
  __int64 v33; // x9
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x4
  __int64 v36; // x2
  __int64 v37; // x8
  __int128 v38; // q0
  __int64 v39; // x8
  __int128 v40; // q0
  System_Int64_array *v41; // x26
  __int64 v42; // x8
  UserServantLeaderEntity_o *v43; // x8
  __int64 v45; // x0
  __int64 v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+50h] [xbp-80h]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_418D22C & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&supportDeckId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&long___TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&UserServantLeaderEntity___TypeInfo, v11);
    sub_B2C35C(&UserServantLeaderEntity_TypeInfo, v12);
    byte_418D22C = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___),
        !this->fields.list) )
  {
LABEL_56:
    sub_B2C434(Instance, v14);
  }
  v15 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v18 = (UserServantLeaderEntity_array *)sub_B2C374(
                                           UserServantLeaderEntity___TypeInfo,
                                           (unsigned int)v17->static_fields->SupportDeckMemberMax);
  v19 = 0LL;
  v20 = 0LL;
  m_Items = v18->m_Items;
  while ( 1 )
  {
    v30 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v20 >= v30->static_fields->SupportDeckMemberMax )
      break;
    v22 = (UserServantLeaderEntity_o *)sub_B2C42C(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_34300676(v22, v20, supportDeckId, v23);
    if ( !v18 )
      goto LABEL_56;
    if ( v22 )
    {
      Instance = sub_B2C41C(v22, v18->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_59;
    }
    if ( v20 >= v18->max_length )
    {
LABEL_57:
      v45 = sub_B2C460(Instance);
      sub_B2C400(v45, 0LL);
    }
    m_Items[v20] = v22;
    sub_B2C2F8((BattleServantConfConponent_o *)&m_Items[v19], (System_Int32_array **)v22, v24, v25, v26, v27, v28, v29);
    ++v20;
    ++v19;
  }
  if ( Count >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        goto LABEL_56;
      Instance = (__int64)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
                            v31,
                            (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_56;
      v14 = (EquipTargetInfo_o *)UserServantLeaderEntity_TypeInfo;
      v32 = Instance;
      v33 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v33
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v33 - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v34 = *(const MethodInfo **)(Instance + 56);
        if ( v34 )
        {
          if ( !v15 )
            goto LABEL_56;
          Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                       v15,
                       &entity,
                       (int64_t)v34,
                       (const MethodInfo_24E4354 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v18 )
              goto LABEL_56;
            v36 = *(int *)(v32 + 52);
            if ( (unsigned int)v36 >= v18->max_length )
              goto LABEL_57;
            Instance = (__int64)v18->m_Items[v36];
            if ( !Instance )
              goto LABEL_56;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              entity,
              v36,
              supportDeckId,
              v35);
          }
        }
        v37 = *(_QWORD *)(v32 + 32);
        if ( v37 )
        {
          v38 = *(_OWORD *)(v37 + 40);
          *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v37 + 24);
          *(_OWORD *)&v50.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v49 = v50;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
          if ( Instance )
          {
            Instance = sub_B2C374(long___TypeInfo, 1LL);
            v39 = *(_QWORD *)(v32 + 32);
            if ( !v39 )
              goto LABEL_56;
            v40 = *(_OWORD *)(v39 + 40);
            v41 = (System_Int64_array *)Instance;
            *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)(v39 + 24);
            *(_OWORD *)&v50.fields.fakeValue = v40;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v48 = v50;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v48, 0LL);
            if ( !v41 )
              goto LABEL_56;
            if ( !v41->max_length )
              goto LABEL_57;
            v41->m_Items[0] = Instance;
            if ( !v15 )
              goto LABEL_56;
            Instance = DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v15, v41, 0LL);
          }
          if ( !v18 )
            goto LABEL_56;
        }
        else
        {
          Instance = 0LL;
          if ( !v18 )
            goto LABEL_56;
        }
        v42 = *(int *)(v32 + 52);
        if ( (unsigned int)v42 >= v18->max_length )
          goto LABEL_57;
        v43 = v18->m_Items[v42];
        if ( (Instance & 1) != 0 )
        {
          v14 = *(EquipTargetInfo_o **)(v32 + 32);
          if ( !v43 )
            goto LABEL_56;
        }
        else
        {
          v14 = 0LL;
          if ( !v43 )
            goto LABEL_56;
        }
        UserServantLeaderEntity__setEquipTargetInfo(v43, v14, v34);
      }
      if ( ++v31 >= Count )
        return v18;
    }
    sub_B2C728(Instance);
LABEL_59:
    v46 = sub_B2C454(Instance);
    sub_B2C400(v46, 0LL);
  }
  return v18;
}