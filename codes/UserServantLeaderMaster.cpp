void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22EA6 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__, method);
    byte_4C22EA6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    150,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_4C22EA4 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__, userId);
    byte_4C22EA4 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_329F900 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_4C22EA5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__, entity);
    byte_4C22EA5 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
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

  if ( (byte_4C22EA8 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v5);
    sub_1C3B764(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v6);
    byte_4C22EA8 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
  SupportDeck = (System_Collections_Generic_IEnumerable_T__o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
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
      System_Collections_Generic_List_object___AddRange(
        v7,
        SupportDeck,
        (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v11 == v12 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v7,
                                                  (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1C3B9C0(SupportDeck, v8);
  }
  if ( !v7 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
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
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int32_t v34; // w24
  __int64 v35; // x25
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x4
  __int64 v38; // x2
  __int64 v39; // x8
  __int128 v40; // q0
  __int64 v41; // x8
  __int128 v42; // q0
  System_Int64_array *v43; // x26
  __int64 v44; // x8
  __int64 v46; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C22EA7 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, *(_QWORD *)&supportDeckId);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__, v5);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__, v6);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1C3B764(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v9);
    sub_1C3B764(&long___TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1C3B764(&UserServantLeaderEntity___TypeInfo, v13);
    sub_1C3B764(&UserServantLeaderEntity_TypeInfo, v14);
    byte_4C22EA7 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_32351F4 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
  v19 = BalanceConfig_TypeInfo;
  v20 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  v21 = (UserServantLeaderEntity_array *)sub_1C3B80C(
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
    v26 = (UserServantLeaderEntity_o *)sub_1C3B9B0(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_41714752(v26, v23, supportDeckId, v27);
    if ( !v21 )
      goto LABEL_50;
    if ( v26 )
    {
      Instance = sub_1C3B8A0(v26, v21->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v46 = sub_1C3B9E4(0LL);
        sub_1C3B88C(v46, 0LL);
      }
    }
    if ( v23 >= v21->max_length )
LABEL_51:
      sub_1C3B9C8(Instance, v16);
    m_Items[v23] = v26;
    sub_1C3B708((PartyOrganizationUtility_o *)&m_Items[v22], (int64_t)v26, v28, v29, v30, v31, v32, v33);
    ++v23;
    ++v22;
  }
  if ( v20 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        break;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v34,
                            (const MethodInfo_3235284 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
      if ( !Instance )
        break;
      v35 = Instance;
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v36 = *(const MethodInfo **)(Instance + 56);
        if ( v36 )
        {
          if ( !v17 )
            break;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v17,
                       &entity,
                       (int64_t)v36,
                       (const MethodInfo_329D3F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v21 )
              break;
            v38 = *(int *)(v35 + 52);
            if ( (unsigned int)v38 >= v21->max_length )
              goto LABEL_51;
            Instance = (__int64)v21->m_Items[v38];
            if ( !Instance )
              break;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v38,
              supportDeckId,
              v37);
          }
        }
        v39 = *(_QWORD *)(v35 + 32);
        if ( v39 )
        {
          v40 = *(_OWORD *)(v39 + 40);
          *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v39 + 24);
          *(_OWORD *)&v49.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v49;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v48, 0LL);
          if ( Instance )
          {
            Instance = sub_1C3B80C(long___TypeInfo, 1LL);
            v41 = *(_QWORD *)(v35 + 32);
            if ( !v41 )
              break;
            v42 = *(_OWORD *)(v41 + 40);
            v43 = (System_Int64_array *)Instance;
            *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v41 + 24);
            *(_OWORD *)&v49.fields.fakeValue = v42;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v47 = v49;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47886084(&v47, 0LL);
            if ( !v43 )
              break;
            if ( !v43->max_length )
              goto LABEL_51;
            v43->m_Items[0] = Instance;
            if ( !v17 )
              break;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v17,
                         v43,
                         (const MethodInfo_329C980 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
        v44 = *(int *)(v35 + 52);
        if ( (unsigned int)v44 >= v21->max_length )
          goto LABEL_51;
        if ( (Instance & 1) != 0 )
          v16 = *(EquipTargetInfo_o **)(v35 + 32);
        else
          v16 = 0LL;
        Instance = (__int64)v21->m_Items[v44];
        if ( !Instance )
          break;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v16, v36);
      }
      if ( v20 == ++v34 )
        return v21;
    }
LABEL_50:
    sub_1C3B9C0(Instance, v16);
  }
  return v21;
}