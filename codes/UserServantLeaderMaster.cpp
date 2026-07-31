void UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593975E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
    byte_593975E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    152,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_593975C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
    byte_593975C = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_593975D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
    byte_593975D = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
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
  __int64 v9; // x1
  BalanceConfig_c *v10; // x8
  int v11; // w22
  unsigned int *v12; // x23
  unsigned __int64 v13; // x24
  __int64 i; // x28
  BalanceConfig_c *v15; // x0
  UserServantLeaderEntity_o *v16; // x25
  const MethodInfo *v17; // x3
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  int32_t v25; // w24
  __int64 v26; // x25
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x4
  __int64 v29; // x2
  __int64 v30; // x8
  __int128 v31; // q0
  __int128 v32; // q1
  int v33; // w8
  __int64 v34; // x8
  __int64 v35; // x26
  __int128 v36; // q0
  __int128 v37; // q1
  int v38; // w8
  __int64 v39; // x8
  __int64 v41; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_593975F & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UserServantLeaderEntity___TypeInfo);
    sub_21FFC50(&UserServantLeaderEntity_TypeInfo);
    byte_593975F = 1;
  }
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
  v10 = BalanceConfig_TypeInfo;
  v11 = Count;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
    v10 = BalanceConfig_TypeInfo;
  }
  v12 = (unsigned int *)sub_21FFD10(
                          UserServantLeaderEntity___TypeInfo,
                          (unsigned int)v10->static_fields->SupportDeckMemberMax);
  v13 = 0;
  for ( i = 8; ; i += 2 )
  {
    v15 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6);
      v15 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v13 >= v15->static_fields->SupportDeckMemberMax )
      break;
    v16 = (UserServantLeaderEntity_o *)sub_21FFEBC(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_50166628(v16, v13, supportDeckId, v17);
    if ( !v12 )
      goto LABEL_50;
    if ( v16 )
    {
      Instance = sub_21FFDA4(v16, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
      if ( !Instance )
      {
        v41 = sub_21FFEF0(0, v24);
        sub_21FFD90(v41, 0);
      }
    }
    if ( v13 >= v12[6] )
LABEL_51:
      sub_21FFED4(Instance);
    *(_QWORD *)&v12[2 * v13 + 8] = v16;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12[i], (int32_t)v16, v18, v19, v20, v21, v22, v23);
    ++v13;
  }
  if ( v11 >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        break;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v25,
                            (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
      if ( !Instance )
        break;
      v26 = Instance;
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v27 = *(const MethodInfo **)(Instance + 56);
        if ( v27 )
        {
          if ( !v7 )
            break;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v7,
                       &entity,
                       (int64_t)v27,
                       (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v12 )
              break;
            v29 = *(int *)(v26 + 52);
            if ( (unsigned int)v29 >= v12[6] )
              goto LABEL_51;
            Instance = *(_QWORD *)&v12[2 * v29 + 8];
            if ( !Instance )
              break;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v29,
              supportDeckId,
              v28);
          }
        }
        v30 = *(_QWORD *)(v26 + 32);
        if ( v30 )
        {
          v31 = *(_OWORD *)(v30 + 24);
          v32 = *(_OWORD *)(v30 + 40);
          v33 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
          *(_OWORD *)&v44.fields.currentCryptoKey = v31;
          *(_OWORD *)&v44.fields.fakeValue = v32;
          if ( !v33 )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
          v43 = v44;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v43, 0);
          if ( Instance )
          {
            Instance = sub_21FFD10(long___TypeInfo, 1);
            v34 = *(_QWORD *)(v26 + 32);
            if ( !v34 )
              break;
            v35 = Instance;
            v36 = *(_OWORD *)(v34 + 24);
            v37 = *(_OWORD *)(v34 + 40);
            v38 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
            *(_OWORD *)&v44.fields.currentCryptoKey = v36;
            *(_OWORD *)&v44.fields.fakeValue = v37;
            if ( !v38 )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
            v42 = v44;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v42, 0);
            if ( !v35 )
              break;
            if ( !*(_DWORD *)(v35 + 24) )
              goto LABEL_51;
            *(_QWORD *)(v35 + 32) = Instance;
            if ( !v7 )
              break;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v7,
                         (System_Int64_array *)v35,
                         (const MethodInfo_3EDF0C0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          }
          if ( !v12 )
            break;
        }
        else
        {
          Instance = 0;
          if ( !v12 )
            break;
        }
        v39 = *(int *)(v26 + 52);
        if ( (unsigned int)v39 >= v12[6] )
          goto LABEL_51;
        if ( (Instance & 1) != 0 )
          v6 = *(EquipTargetInfo_o **)(v26 + 32);
        else
          v6 = 0;
        Instance = *(_QWORD *)&v12[2 * v39 + 8];
        if ( !Instance )
          break;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v6, v27);
      }
      if ( v11 == ++v25 )
        return (UserServantLeaderEntity_array *)v12;
    }
LABEL_50:
    sub_21FFECC(Instance, v6);
  }
  return (UserServantLeaderEntity_array *)v12;
}