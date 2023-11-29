void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FF69E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__, method);
    byte_40FF69E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    144,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_40FF69C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__, userId);
    byte_40FF69C = 1;
  }
  PK = UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                        (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_40FF69D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__, entity);
    byte_40FF69D = 1;
  }
  PK = UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  const MethodInfo *v11; // x2
  BalanceConfig_c *v12; // x0
  int SupportDeckMax; // w22
  int v14; // w21
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0

  if ( (byte_40FF6A0 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v9);
    byte_40FF6A0 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  SupportDeckMax = v12->static_fields->SupportDeckMax;
  if ( SupportDeckMax >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)UserServantLeaderMaster__getSupportDeck(
                                                                     this,
                                                                     ++v14,
                                                                     v11);
      if ( !v10 )
        break;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
        SupportDeck,
        (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v14 >= SupportDeckMax )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_13:
    sub_B170D4();
  }
  if ( !v10 )
    goto LABEL_13;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v15; // x21
  __int64 v16; // x2
  int32_t Count; // w22
  BalanceConfig_c *v18; // x8
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  UserServantLeaderEntity_array *v23; // x23
  __int64 v24; // x28
  unsigned __int64 v25; // x24
  UserServantLeaderEntity_o **m_Items; // x20
  UserServantLeaderEntity_o *v27; // x25
  const MethodInfo *v28; // x3
  __int64 isEntityExistsFromId; // x0
  UserServantLeaderEntity_c *v30; // x1
  int64_t monitor; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BalanceConfig_c *v37; // x0
  int32_t v38; // w24
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v41; // x25
  __int64 v42; // x9
  const MethodInfo *v43; // x4
  UserServantLeaderEntity_o *v44; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x8
  __int128 v46; // q0
  __int64 v47; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v48; // x8
  __int128 v49; // q0
  System_Int64_array *v50; // x26
  __int64 klass_high; // x8
  UserServantLeaderEntity_o *v52; // x8
  EquipTargetInfo_o *v53; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+50h] [xbp-80h]
  UserServantEntity_o *entity; // [xsp+78h] [xbp-58h] BYREF

  if ( (byte_40FF69F & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&supportDeckId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&long___TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&UserServantLeaderEntity___TypeInfo, v11);
    sub_B16FFC(&UserServantLeaderEntity_TypeInfo, v12);
    byte_40FF69F = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___),
        !this->fields.list) )
  {
LABEL_56:
    sub_B170D4();
  }
  v15 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v23 = (UserServantLeaderEntity_array *)sub_B17014(
                                           UserServantLeaderEntity___TypeInfo,
                                           (unsigned int)v18->static_fields->SupportDeckMemberMax,
                                           v16);
  v24 = 0LL;
  v25 = 0LL;
  m_Items = v23->m_Items;
  while ( 1 )
  {
    v37 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v25 >= v37->static_fields->SupportDeckMemberMax )
      break;
    v27 = (UserServantLeaderEntity_o *)sub_B170CC(UserServantLeaderEntity_TypeInfo, v19, v20, v21, v22);
    UserServantLeaderEntity___ctor_34309140(v27, v25, supportDeckId, v28);
    if ( !v23 )
      goto LABEL_56;
    if ( v27 )
    {
      isEntityExistsFromId = sub_B170BC(v27, v23->obj.klass->_1.element_class);
      if ( !isEntityExistsFromId )
        goto LABEL_59;
    }
    if ( v25 >= v23->max_length )
    {
LABEL_57:
      sub_B17100(isEntityExistsFromId, v30, monitor);
      sub_B170A0();
    }
    m_Items[v25] = v27;
    sub_B16F98(
      (BattleServantConfConponent_o *)&m_Items[v24],
      (System_Int32_array **)v27,
      (System_String_array **)monitor,
      v32,
      v33,
      v34,
      v35,
      v36);
    ++v25;
    ++v24;
  }
  if ( Count >= 1 )
  {
    v38 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        goto LABEL_56;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v38,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        goto LABEL_56;
      v30 = UserServantLeaderEntity_TypeInfo;
      v41 = Item;
      v42 = *(&UserServantLeaderEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v42
        || (UserServantLeaderEntity_c *)Item->klass->_2.typeHierarchy[v42 - 1] != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      if ( LODWORD(Item[3].klass) == supportDeckId )
      {
        monitor = (int64_t)Item[3].monitor;
        if ( monitor )
        {
          if ( !v15 )
            goto LABEL_56;
          isEntityExistsFromId = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                   v15,
                                   &entity,
                                   monitor,
                                   (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (isEntityExistsFromId & 1) != 0 )
          {
            if ( !v23 )
              goto LABEL_56;
            monitor = SHIDWORD(v41[3].klass);
            if ( (unsigned int)monitor >= v23->max_length )
              goto LABEL_57;
            v44 = v23->m_Items[monitor];
            if ( !v44 )
              goto LABEL_56;
            UserServantLeaderEntity__setUserServantEntity(v44, entity, monitor, supportDeckId, v43);
          }
        }
        klass = v41[2].klass;
        if ( klass )
        {
          v46 = *(_OWORD *)&klass->_1.byval_arg.bits;
          *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&klass->_1.namespaze;
          *(_OWORD *)&v58.fields.fakeValue = v46;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v57 = v58;
          isEntityExistsFromId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v57, 0LL);
          if ( isEntityExistsFromId )
          {
            v47 = sub_B17014(long___TypeInfo, 1LL, monitor);
            v48 = v41[2].klass;
            if ( !v48 )
              goto LABEL_56;
            v49 = *(_OWORD *)&v48->_1.byval_arg.bits;
            v50 = (System_Int64_array *)v47;
            *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v48->_1.namespaze;
            *(_OWORD *)&v58.fields.fakeValue = v49;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v56 = v58;
            isEntityExistsFromId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v56, 0LL);
            if ( !v50 )
              goto LABEL_56;
            if ( !v50->max_length )
              goto LABEL_57;
            v50->m_Items[0] = isEntityExistsFromId;
            if ( !v15 )
              goto LABEL_56;
            isEntityExistsFromId = DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v15, v50, 0LL);
          }
          if ( !v23 )
            goto LABEL_56;
        }
        else
        {
          isEntityExistsFromId = 0LL;
          if ( !v23 )
            goto LABEL_56;
        }
        klass_high = SHIDWORD(v41[3].klass);
        if ( (unsigned int)klass_high >= v23->max_length )
          goto LABEL_57;
        v52 = v23->m_Items[klass_high];
        if ( (isEntityExistsFromId & 1) != 0 )
        {
          v53 = (EquipTargetInfo_o *)v41[2].klass;
          if ( !v52 )
            goto LABEL_56;
        }
        else
        {
          v53 = 0LL;
          if ( !v52 )
            goto LABEL_56;
        }
        UserServantLeaderEntity__setEquipTargetInfo(v52, v53, (const MethodInfo *)monitor);
      }
      if ( ++v38 >= Count )
        return v23;
    }
    sub_B173C8(Item);
LABEL_59:
    sub_B170F4(isEntityExistsFromId);
    sub_B170A0();
  }
  return v23;
}