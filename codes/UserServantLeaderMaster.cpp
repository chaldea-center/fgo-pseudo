void UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF6AE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
    byte_4CEF6AE = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    150,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_o *UserServantLeaderMaster__GetEntity(
        UserServantLeaderMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CEF6AC & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
    byte_4CEF6AC = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3432DB4 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantLeaderMaster__TryGetEntity(
        UserServantLeaderMaster_o *this,
        UserServantLeaderEntity_o **entity,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CEF6AD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
    byte_4CEF6AD = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3432E00 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *UserServantLeaderMaster__getSupportDeck(
        UserServantLeaderMaster_o *this,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  EquipTargetInfo_o *v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  int32_t Count; // w0
  BalanceConfig_c *v9; // x8
  int v10; // w22
  unsigned int *v11; // x23
  __int64 v12; // x28
  unsigned __int64 v13; // x24
  unsigned int *v14; // x27
  BalanceConfig_c *v15; // x0
  UserServantLeaderEntity_o *v16; // x25
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w24
  __int64 v25; // x25
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x4
  __int64 v28; // x2
  __int64 v29; // x8
  __int128 v30; // q0
  __int64 v31; // x8
  __int128 v32; // q0
  __int64 v33; // x26
  __int64 v34; // x8
  __int64 v36; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4CEF6AF & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C7BAE8(&long___TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&UserServantLeaderEntity___TypeInfo);
    sub_1C7BAE8(&UserServantLeaderEntity_TypeInfo);
    byte_4CEF6AF = 1;
  }
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_33C6990 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
  v9 = BalanceConfig_TypeInfo;
  v10 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v11 = (unsigned int *)sub_1C7BB90(
                          UserServantLeaderEntity___TypeInfo,
                          (unsigned int)v9->static_fields->SupportDeckMemberMax);
  v12 = 0;
  v13 = 0;
  v14 = v11 + 8;
  while ( 1 )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v15->static_fields->SupportDeckMemberMax )
      break;
    v16 = (UserServantLeaderEntity_o *)sub_1C7BD34(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_43752820(v16, v13, supportDeckId, v17);
    if ( !v11 )
      goto LABEL_50;
    if ( v16 )
    {
      Instance = sub_1C7BC24(v16, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
      if ( !Instance )
      {
        v36 = sub_1C7BD64(0);
        sub_1C7BC10(v36, 0);
      }
    }
    if ( v13 >= v11[6] )
LABEL_51:
      sub_1C7BD48(Instance);
    *(_QWORD *)&v14[2 * v13] = v16;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v14[v12], (int32_t)v16, v18, v19, v20, v21, v22, v23);
    ++v13;
    v12 += 2;
  }
  if ( v10 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        break;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v24,
                            (const MethodInfo_33C6A20 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
      if ( !Instance )
        break;
      v25 = Instance;
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v26 = *(const MethodInfo **)(Instance + 56);
        if ( v26 )
        {
          if ( !v7 )
            break;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v7,
                       &entity,
                       (int64_t)v26,
                       (const MethodInfo_34308A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v11 )
              break;
            v28 = *(int *)(v25 + 52);
            if ( (unsigned int)v28 >= v11[6] )
              goto LABEL_51;
            Instance = *(_QWORD *)&v11[2 * v28 + 8];
            if ( !Instance )
              break;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v28,
              supportDeckId,
              v27);
          }
        }
        v29 = *(_QWORD *)(v25 + 32);
        if ( v29 )
        {
          v30 = *(_OWORD *)(v29 + 40);
          *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v29 + 24);
          *(_OWORD *)&v39.fields.fakeValue = v30;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = v39;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v38, 0);
          if ( Instance )
          {
            Instance = sub_1C7BB90(long___TypeInfo, 1);
            v31 = *(_QWORD *)(v25 + 32);
            if ( !v31 )
              break;
            v32 = *(_OWORD *)(v31 + 40);
            v33 = Instance;
            *(_OWORD *)&v39.fields.currentCryptoKey = *(_OWORD *)(v31 + 24);
            *(_OWORD *)&v39.fields.fakeValue = v32;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v37 = v39;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49453300(&v37, 0);
            if ( !v33 )
              break;
            if ( !*(_DWORD *)(v33 + 24) )
              goto LABEL_51;
            *(_QWORD *)(v33 + 32) = Instance;
            if ( !v7 )
              break;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v7,
                         (System_Int64_array *)v33,
                         (const MethodInfo_342FE34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          }
          if ( !v11 )
            break;
        }
        else
        {
          Instance = 0;
          if ( !v11 )
            break;
        }
        v34 = *(int *)(v25 + 52);
        if ( (unsigned int)v34 >= v11[6] )
          goto LABEL_51;
        if ( (Instance & 1) != 0 )
          v6 = *(EquipTargetInfo_o **)(v25 + 32);
        else
          v6 = 0;
        Instance = *(_QWORD *)&v11[2 * v34 + 8];
        if ( !Instance )
          break;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v6, v26);
      }
      if ( v10 == ++v24 )
        return (UserServantLeaderEntity_array *)v11;
    }
LABEL_50:
    sub_1C7BD40(Instance, v6);
  }
  return (UserServantLeaderEntity_array *)v11;
}