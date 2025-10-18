void UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C44013 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
    byte_4C44013 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    150,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
}


UserServantLeaderEntity_o *UserServantLeaderMaster__GetEntity(
        UserServantLeaderMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C44011 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
    byte_4C44011 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, 0);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_33A5B58 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
}


bool UserServantLeaderMaster__TryGetEntity(
        UserServantLeaderMaster_o *this,
        UserServantLeaderEntity_o **entity,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C44012 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
    byte_4C44012 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v6; // w22
  int v7; // w21

  if ( (byte_4C44015 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
    byte_4C44015 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  }
  v6 = *((_DWORD *)SupportDeck[11].monitor + 42);
  if ( v6 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)UserServantLeaderMaster__getSupportDeck(
                                                                     this,
                                                                     ++v7,
                                                                     v4);
      if ( !v3 )
        break;
      System_Collections_Generic_List_object___AddRange(
        v3,
        SupportDeck,
        (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v6 == v7 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v3,
                                                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1C372B4(SupportDeck);
  }
  if ( !v3 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
}


UserServantLeaderEntity_array *UserServantLeaderMaster__getSupportDeck(
        UserServantLeaderMaster_o *this,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  int32_t Count; // w0
  BalanceConfig_c *v8; // x8
  int v9; // w22
  unsigned int *v10; // x23
  __int64 v11; // x28
  unsigned __int64 v12; // x24
  unsigned int *v13; // x27
  BalanceConfig_c *v14; // x0
  UserServantLeaderEntity_o *v15; // x25
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w24
  __int64 v19; // x25
  int64_t v20; // x2
  __int64 v21; // x2
  __int64 v22; // x8
  __int128 v23; // q0
  __int64 v24; // x8
  __int128 v25; // q0
  __int64 v26; // x26
  __int64 v27; // x8
  EquipTargetInfo_o *v28; // x1
  __int64 v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C44014 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&UserServantLeaderEntity___TypeInfo);
    sub_1C37058(&UserServantLeaderEntity_TypeInfo);
    byte_4C44014 = 1;
  }
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_333A510 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
  v8 = BalanceConfig_TypeInfo;
  v9 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v10 = (unsigned int *)sub_1C37100(
                          UserServantLeaderEntity___TypeInfo,
                          (unsigned int)v8->static_fields->SupportDeckMemberMax);
  v11 = 0;
  v12 = 0;
  v13 = v10 + 8;
  while ( 1 )
  {
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v12 >= v14->static_fields->SupportDeckMemberMax )
      break;
    v15 = (UserServantLeaderEntity_o *)sub_1C372A4(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_43213376(v15, v12, supportDeckId, 0);
    if ( !v10 )
      goto LABEL_50;
    if ( v15 )
    {
      Instance = sub_1C37194(v15, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
      if ( !Instance )
      {
        v30 = sub_1C372D8(0);
        sub_1C37180(v30, 0);
      }
    }
    if ( v12 >= v10[6] )
LABEL_51:
      sub_1C372BC(Instance);
    *(_QWORD *)&v13[2 * v12] = v15;
    sub_1C36FFC((CGThumbnailListItem_o *)&v13[v11], (int32_t)v15, v16, v17);
    ++v12;
    v11 += 2;
  }
  if ( v9 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        break;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v18,
                            (const MethodInfo_333A5A0 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
      if ( !Instance )
        break;
      v19 = Instance;
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v20 = *(_QWORD *)(Instance + 56);
        if ( v20 )
        {
          if ( !v6 )
            break;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v6,
                       &entity,
                       v20,
                       (const MethodInfo_33A3648 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v10 )
              break;
            v21 = *(int *)(v19 + 52);
            if ( (unsigned int)v21 >= v10[6] )
              goto LABEL_51;
            Instance = *(_QWORD *)&v10[2 * v21 + 8];
            if ( !Instance )
              break;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v21,
              supportDeckId,
              0);
          }
        }
        v22 = *(_QWORD *)(v19 + 32);
        if ( v22 )
        {
          v23 = *(_OWORD *)(v22 + 40);
          *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v22 + 24);
          *(_OWORD *)&v33.fields.fakeValue = v23;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v32 = v33;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v32, 0);
          if ( Instance )
          {
            Instance = sub_1C37100(long___TypeInfo, 1);
            v24 = *(_QWORD *)(v19 + 32);
            if ( !v24 )
              break;
            v25 = *(_OWORD *)(v24 + 40);
            v26 = Instance;
            *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)(v24 + 24);
            *(_OWORD *)&v33.fields.fakeValue = v25;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v31 = v33;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v31, 0);
            if ( !v26 )
              break;
            if ( !*(_DWORD *)(v26 + 24) )
              goto LABEL_51;
            *(_QWORD *)(v26 + 32) = Instance;
            if ( !v6 )
              break;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v6,
                         (System_Int64_array *)v26,
                         (const MethodInfo_33A2BD8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          }
          if ( !v10 )
            break;
        }
        else
        {
          Instance = 0;
          if ( !v10 )
            break;
        }
        v27 = *(int *)(v19 + 52);
        if ( (unsigned int)v27 >= v10[6] )
          goto LABEL_51;
        if ( (Instance & 1) != 0 )
          v28 = *(EquipTargetInfo_o **)(v19 + 32);
        else
          v28 = 0;
        Instance = *(_QWORD *)&v10[2 * v27 + 8];
        if ( !Instance )
          break;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v28, 0);
      }
      if ( v9 == ++v18 )
        return (UserServantLeaderEntity_array *)v10;
    }
LABEL_50:
    sub_1C372B4(Instance);
  }
  return (UserServantLeaderEntity_array *)v10;
}