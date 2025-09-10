void UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28316 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
    byte_4C28316 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    150,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
}


UserServantLeaderEntity_o *UserServantLeaderMaster__GetEntity(
        UserServantLeaderMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28314 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
    byte_4C28314 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, 0);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_338C850 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_4C28315 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
    byte_4C28315 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v7; // w22
  int v8; // w21

  if ( (byte_4C28318 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
    byte_4C28318 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  }
  v7 = *((_DWORD *)SupportDeck[11].monitor + 42);
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
      System_Collections_Generic_List_object___AddRange(
        v3,
        SupportDeck,
        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v7 == v8 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v3,
                                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1C2D6EC(SupportDeck, v4);
  }
  if ( !v3 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v3,
                                            (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
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
  int64_t v17; // x2
  const MethodInfo *v18; // x3
  int32_t v19; // w24
  __int64 v20; // x25
  __int64 v21; // x8
  __int128 v22; // q0
  __int64 v23; // x8
  __int128 v24; // q0
  __int64 v25; // x26
  __int64 v26; // x8
  __int64 v28; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C28317 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&UserServantLeaderEntity___TypeInfo);
    sub_1C2D490(&UserServantLeaderEntity_TypeInfo);
    byte_4C28317 = 1;
  }
  entity = 0;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
  v9 = BalanceConfig_TypeInfo;
  v10 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  v11 = (unsigned int *)sub_1C2D538(
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
    v16 = (UserServantLeaderEntity_o *)sub_1C2D6DC(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_42978312(v16, v13, supportDeckId, 0);
    if ( !v11 )
      goto LABEL_50;
    if ( v16 )
    {
      Instance = sub_1C2D5CC(v16, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
      if ( !Instance )
      {
        v28 = sub_1C2D710(0);
        sub_1C2D5B8(v28, 0);
      }
    }
    if ( v13 >= v11[6] )
LABEL_51:
      sub_1C2D6F4(Instance, v6, v17);
    *(_QWORD *)&v14[2 * v13] = v16;
    sub_1C2D434((CGThumbnailListItem_o *)&v14[v12], (int32_t)v16, v17, v18);
    ++v13;
    v12 += 2;
  }
  if ( v10 >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        break;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v19,
                            (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
      if ( !Instance )
        break;
      v20 = Instance;
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v17 = *(_QWORD *)(Instance + 56);
        if ( v17 )
        {
          if ( !v7 )
            break;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v7,
                       &entity,
                       v17,
                       (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v11 )
              break;
            v17 = *(int *)(v20 + 52);
            if ( (unsigned int)v17 >= v11[6] )
              goto LABEL_51;
            Instance = *(_QWORD *)&v11[2 * v17 + 8];
            if ( !Instance )
              break;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v17,
              supportDeckId,
              0);
          }
        }
        v21 = *(_QWORD *)(v20 + 32);
        if ( v21 )
        {
          v22 = *(_OWORD *)(v21 + 40);
          *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v21 + 24);
          *(_OWORD *)&v31.fields.fakeValue = v22;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v30 = v31;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v30, 0);
          if ( Instance )
          {
            Instance = sub_1C2D538(long___TypeInfo, 1);
            v23 = *(_QWORD *)(v20 + 32);
            if ( !v23 )
              break;
            v24 = *(_OWORD *)(v23 + 40);
            v25 = Instance;
            *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)(v23 + 24);
            *(_OWORD *)&v31.fields.fakeValue = v24;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v29 = v31;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v29, 0);
            if ( !v25 )
              break;
            if ( !*(_DWORD *)(v25 + 24) )
              goto LABEL_51;
            *(_QWORD *)(v25 + 32) = Instance;
            if ( !v7 )
              break;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v7,
                         (System_Int64_array *)v25,
                         (const MethodInfo_33898D0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
        v26 = *(int *)(v20 + 52);
        if ( (unsigned int)v26 >= v11[6] )
          goto LABEL_51;
        if ( (Instance & 1) != 0 )
          v6 = *(EquipTargetInfo_o **)(v20 + 32);
        else
          v6 = 0;
        Instance = *(_QWORD *)&v11[2 * v26 + 8];
        if ( !Instance )
          break;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v6, 0);
      }
      if ( v10 == ++v19 )
        return (UserServantLeaderEntity_array *)v11;
    }
LABEL_50:
    sub_1C2D6EC(Instance, v6);
  }
  return (UserServantLeaderEntity_array *)v11;
}