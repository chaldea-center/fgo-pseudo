void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45A5C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__, method);
    byte_4B45A5C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    150,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_o *__fastcall UserServantLeaderMaster__GetEntity(
        UserServantLeaderMaster_o *this,
        int64_t userId,
        int32_t classId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B45A5A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__, userId);
    byte_4B45A5A = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_32E68F4 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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
  Il2CppObject *PK; // x2

  if ( (byte_4B45A5B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__, entity);
    byte_4B45A5B = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32E6940 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
}


UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getAllSupportDeckList(
        UserServantLeaderMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *SupportDeck; // x0
  int v11; // w22
  int v12; // w21

  if ( (byte_4B45A5E & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v6);
    byte_4B45A5E = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  }
  v11 = *((_DWORD *)SupportDeck[11].monitor + 42);
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
      System_Collections_Generic_List_object___AddRange(
        v7,
        SupportDeck,
        (const MethodInfo_36D5FD0 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v11 == v12 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v7,
                                                  (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1BDBAD4(SupportDeck, v8);
  }
  if ( !v7 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserServantLeaderEntity_array *__fastcall UserServantLeaderMaster__getSupportDeck(
        UserServantLeaderMaster_o *this,
        int32_t supportDeckId,
        const MethodInfo *method)
{
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
  __int64 Instance; // x0
  EquipTargetInfo_o *v16; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x21
  int32_t Count; // w0
  BalanceConfig_c *v19; // x8
  int v20; // w22
  UserServantLeaderEntity_array *v21; // x23
  __int64 v22; // x28
  unsigned __int64 v23; // x24
  UserServantLeaderEntity_o **m_Items; // x27
  BalanceConfig_c *v25; // x0
  UserServantLeaderEntity_o *v26; // x25
  const MethodInfo *v27; // x3
  int64_t v28; // x2
  const MethodInfo *v29; // x3
  int32_t v30; // w24
  __int64 v31; // x25
  const MethodInfo *v32; // x4
  __int64 v33; // x8
  __int128 v34; // q0
  __int64 v35; // x8
  __int128 v36; // q0
  System_Int64_array *v37; // x26
  __int64 v38; // x8
  __int64 v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B45A5D & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&supportDeckId);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__, v5);
    sub_1BDB878(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v9);
    sub_1BDB878(&long___TypeInfo, v10);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&UserServantLeaderEntity___TypeInfo, v13);
    sub_1BDB878(&UserServantLeaderEntity_TypeInfo, v14);
    byte_4B45A5D = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_327D624 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
  v19 = BalanceConfig_TypeInfo;
  v20 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  v21 = (UserServantLeaderEntity_array *)sub_1BDB920(
                                           UserServantLeaderEntity___TypeInfo,
                                           (unsigned int)v19->static_fields->SupportDeckMemberMax);
  v22 = 0LL;
  v23 = 0LL;
  m_Items = v21->m_Items;
  while ( 1 )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v23 >= v25->static_fields->SupportDeckMemberMax )
      break;
    v26 = (UserServantLeaderEntity_o *)sub_1BDBAC4(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_42150604(v26, v23, supportDeckId, v27);
    if ( !v21 )
      goto LABEL_50;
    if ( v26 )
    {
      Instance = sub_1BDB9B4(v26, v21->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v40 = sub_1BDBAF8(0LL);
        sub_1BDB9A0(v40, 0LL);
      }
    }
    if ( v23 >= v21->max_length )
LABEL_51:
      sub_1BDBADC(Instance, v16, v28);
    m_Items[v23] = v26;
    sub_1BDB81C((CGThumbnailListItem_o *)&m_Items[v22], (int32_t)v26, v28, v29);
    ++v23;
    ++v22;
  }
  if ( v20 >= 1 )
  {
    v30 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        break;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v30,
                            (const MethodInfo_327D6B4 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
      if ( !Instance )
        break;
      v31 = Instance;
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v28 = *(_QWORD *)(Instance + 56);
        if ( v28 )
        {
          if ( !v17 )
            break;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v17,
                       &entity,
                       v28,
                       (const MethodInfo_32E43E4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v21 )
              break;
            v28 = *(int *)(v31 + 52);
            if ( (unsigned int)v28 >= v21->max_length )
              goto LABEL_51;
            Instance = (__int64)v21->m_Items[v28];
            if ( !Instance )
              break;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v28,
              supportDeckId,
              v32);
          }
        }
        v33 = *(_QWORD *)(v31 + 32);
        if ( v33 )
        {
          v34 = *(_OWORD *)(v33 + 40);
          *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v33 + 24);
          *(_OWORD *)&v43.fields.fakeValue = v34;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v42 = v43;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v42, 0LL);
          if ( Instance )
          {
            Instance = sub_1BDB920(long___TypeInfo, 1LL);
            v35 = *(_QWORD *)(v31 + 32);
            if ( !v35 )
              break;
            v36 = *(_OWORD *)(v35 + 40);
            v37 = (System_Int64_array *)Instance;
            *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)(v35 + 24);
            *(_OWORD *)&v43.fields.fakeValue = v36;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v41 = v43;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v41, 0LL);
            if ( !v37 )
              break;
            if ( !v37->max_length )
              goto LABEL_51;
            v37->m_Items[0] = Instance;
            if ( !v17 )
              break;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v17,
                         v37,
                         (const MethodInfo_32E3974 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
          }
          if ( !v21 )
            break;
        }
        else
        {
          Instance = 0LL;
          if ( !v21 )
            break;
        }
        v38 = *(int *)(v31 + 52);
        if ( (unsigned int)v38 >= v21->max_length )
          goto LABEL_51;
        if ( (Instance & 1) != 0 )
          v16 = *(EquipTargetInfo_o **)(v31 + 32);
        else
          v16 = 0LL;
        Instance = (__int64)v21->m_Items[v38];
        if ( !Instance )
          break;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v16, (const MethodInfo *)v28);
      }
      if ( v20 == ++v30 )
        return v21;
    }
LABEL_50:
    sub_1BDBAD4(Instance, v16);
  }
  return v21;
}