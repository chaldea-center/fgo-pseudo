void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B38063 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__, method);
    byte_4B38063 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    146,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_4B38061 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__, userId);
    byte_4B38061 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_31D2248 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_4B38062 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__, entity);
    byte_4B38062 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
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

  if ( (byte_4B38065 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v5);
    sub_1BD3458(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v6);
    byte_4B38065 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
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
        (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v11 == v12 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v7,
                                                  (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1BD36B4(SupportDeck, v8);
  }
  if ( !v7 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
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
  __int64 Instance; // x0
  EquipTargetInfo_o *v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  int32_t Count; // w0
  BalanceConfig_c *v18; // x8
  int v19; // w22
  UserServantLeaderEntity_array *v20; // x23
  __int64 v21; // x29
  unsigned __int64 v22; // x24
  UserServantLeaderEntity_o **m_Items; // x28
  BalanceConfig_c *v24; // x0
  UserServantLeaderEntity_o *v25; // x25
  const MethodInfo *v26; // x3
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int32_t v33; // w24
  __int64 v34; // x25
  __int64 methodPtr_low; // x9
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

  if ( (byte_4B38064 & 1) == 0 )
  {
    sub_1BD3458(&BalanceConfig_TypeInfo, *(_QWORD *)&supportDeckId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, v5);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1BD3458(&long___TypeInfo, v9);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v10);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BD3458(&UserServantLeaderEntity___TypeInfo, v12);
    sub_1BD3458(&UserServantLeaderEntity_TypeInfo, v13);
    byte_4B38064 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserServantMaster___),
        !this->fields.list) )
  {
LABEL_52:
    sub_1BD36B4(Instance, v15);
  }
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v18 = BalanceConfig_TypeInfo;
  v19 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  v20 = (UserServantLeaderEntity_array *)sub_1BD3500(
                                           UserServantLeaderEntity___TypeInfo,
                                           (unsigned int)v18->static_fields->SupportDeckMemberMax);
  v21 = 0LL;
  v22 = 0LL;
  m_Items = v20->m_Items;
  while ( 1 )
  {
    v24 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    if ( (__int64)v22 >= v24->static_fields->SupportDeckMemberMax )
      break;
    v25 = (UserServantLeaderEntity_o *)sub_1BD36A4(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_41069532(v25, v22, supportDeckId, v26);
    if ( !v20 )
      goto LABEL_52;
    if ( v25 )
    {
      Instance = sub_1BD3594(v25, v20->obj.klass->_1.element_class);
      if ( !Instance )
        goto LABEL_55;
    }
    if ( v22 >= v20->max_length )
LABEL_53:
      sub_1BD36BC(Instance, v15);
    m_Items[v22] = v25;
    sub_1BD33FC((PartyOrganizationUtility_o *)&m_Items[v21], (int64_t)v25, v27, v28, v29, v30, v31, v32);
    ++v22;
    ++v21;
  }
  if ( v19 >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      Instance = (__int64)this->fields.list;
      if ( !Instance )
        goto LABEL_52;
      Instance = (__int64)System_Collections_ObjectModel_Collection_object___get_Item(
                            (System_Collections_ObjectModel_Collection_T__o *)Instance,
                            v33,
                            (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Instance )
        goto LABEL_52;
      v15 = (EquipTargetInfo_o *)UserServantLeaderEntity_TypeInfo;
      v34 = Instance;
      methodPtr_low = LOBYTE(UserServantLeaderEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 304LL) < (unsigned int)methodPtr_low
        || *(UserServantLeaderEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * methodPtr_low - 8) != UserServantLeaderEntity_TypeInfo )
      {
        break;
      }
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v36 = *(const MethodInfo **)(Instance + 56);
        if ( v36 )
        {
          if ( !v16 )
            goto LABEL_52;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v16,
                       &entity,
                       (int64_t)v36,
                       (const MethodInfo_31D20F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_52;
            v38 = *(int *)(v34 + 52);
            if ( (unsigned int)v38 >= v20->max_length )
              goto LABEL_53;
            Instance = (__int64)v20->m_Items[v38];
            if ( !Instance )
              goto LABEL_52;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v38,
              supportDeckId,
              v37);
          }
        }
        v39 = *(_QWORD *)(v34 + 32);
        if ( v39 )
        {
          v40 = *(_OWORD *)(v39 + 40);
          *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v39 + 24);
          *(_OWORD *)&v49.fields.fakeValue = v40;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v48 = v49;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v48, 0LL);
          if ( Instance )
          {
            Instance = sub_1BD3500(long___TypeInfo, 1LL);
            v41 = *(_QWORD *)(v34 + 32);
            if ( !v41 )
              goto LABEL_52;
            v42 = *(_OWORD *)(v41 + 40);
            v43 = (System_Int64_array *)Instance;
            *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)(v41 + 24);
            *(_OWORD *)&v49.fields.fakeValue = v42;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v47 = v49;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47140144(&v47, 0LL);
            if ( !v43 )
              goto LABEL_52;
            if ( !v43->max_length )
              goto LABEL_53;
            v43->m_Items[0] = Instance;
            if ( !v16 )
              goto LABEL_52;
            Instance = DataMasterBase__isEntityExistsFromId((DataMasterBase_o *)v16, v43, 0LL);
          }
          if ( !v20 )
            goto LABEL_52;
        }
        else
        {
          Instance = 0LL;
          if ( !v20 )
            goto LABEL_52;
        }
        v44 = *(int *)(v34 + 52);
        if ( (unsigned int)v44 >= v20->max_length )
          goto LABEL_53;
        if ( (Instance & 1) != 0 )
          v15 = *(EquipTargetInfo_o **)(v34 + 32);
        else
          v15 = 0LL;
        Instance = (__int64)v20->m_Items[v44];
        if ( !Instance )
          goto LABEL_52;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v15, v36);
      }
      if ( v19 == ++v33 )
        return v20;
    }
    sub_1BD3974(Instance);
LABEL_55:
    v46 = sub_1BD36D8(Instance);
    sub_1BD3580(v46, 0LL);
  }
  return v20;
}