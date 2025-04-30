void __fastcall UserServantLeaderMaster___ctor(UserServantLeaderMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F447 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__, method);
    byte_4A4F447 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    150,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string___ctor__);
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

  if ( (byte_4A4F445 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__, userId);
    byte_4A4F445 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(
                         userId,
                         classId,
                         supportDeckId,
                         *(const MethodInfo **)&supportDeckId);
  return (UserServantLeaderEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_3218D38 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__GetEntity__);
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

  if ( (byte_4A4F446 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__, entity);
    byte_4A4F446 = 1;
  }
  PK = (Il2CppObject *)UserServantLeaderEntity__CreatePK(userId, classId, supportDeckId, *(const MethodInfo **)&classId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_UserServantLeaderMaster__UserServantLeaderEntity__string__TryGetEntity__);
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

  if ( (byte_4A4F449 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__, v5);
    sub_1B863B8(&System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo, v6);
    byte_4A4F449 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UserServantLeaderEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UserServantLeaderEntity___ctor__);
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
        (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__AddRange__);
      if ( v11 == v12 )
        return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                  v7,
                                                  (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
    }
LABEL_12:
    sub_1B86614(SupportDeck, v8);
  }
  if ( !v7 )
    goto LABEL_12;
  return (UserServantLeaderEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v7,
                                            (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UserServantLeaderEntity__ToArray__);
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w24
  __int64 v31; // x25
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x4
  __int64 v34; // x2
  __int64 v35; // x8
  __int128 v36; // q0
  __int64 v37; // x8
  __int128 v38; // q0
  System_Int64_array *v39; // x26
  __int64 v40; // x8
  __int64 v42; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+40h] [xbp-90h]
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A4F448 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, *(_QWORD *)&supportDeckId);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__, v9);
    sub_1B863B8(&long___TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B863B8(&UserServantLeaderEntity___TypeInfo, v13);
    sub_1B863B8(&UserServantLeaderEntity_TypeInfo, v14);
    byte_4A4F448 = 1;
  }
  entity = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this->fields.list )
    goto LABEL_50;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)this->fields.list,
            (const MethodInfo_31B0908 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Count__);
  v19 = BalanceConfig_TypeInfo;
  v20 = Count;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  v21 = (UserServantLeaderEntity_array *)sub_1B86460(
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
    v26 = (UserServantLeaderEntity_o *)sub_1B86604(UserServantLeaderEntity_TypeInfo);
    UserServantLeaderEntity___ctor_41279220(v26, v23, supportDeckId, v27);
    if ( !v21 )
      goto LABEL_50;
    if ( v26 )
    {
      Instance = sub_1B864F4(v26, v21->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v42 = sub_1B86638(0LL);
        sub_1B864E0(v42, 0LL);
      }
    }
    if ( v23 >= v21->max_length )
LABEL_51:
      sub_1B8661C(Instance, v16);
    m_Items[v23] = v26;
    sub_1B8635C((CGThumbnailListItem_o *)&m_Items[v22], (int32_t)v26, v28, v29);
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
                            (const MethodInfo_31B0998 *)Method_System_Collections_ObjectModel_Collection_UserServantLeaderEntity__get_Item__);
      if ( !Instance )
        break;
      v31 = Instance;
      if ( *(_DWORD *)(Instance + 48) == supportDeckId )
      {
        v32 = *(const MethodInfo **)(Instance + 56);
        if ( v32 )
        {
          if ( !v17 )
            break;
          Instance = DataMasterBase_object__object__long___TryGetEntity(
                       v17,
                       &entity,
                       (int64_t)v32,
                       (const MethodInfo_3216828 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
          if ( (Instance & 1) != 0 )
          {
            if ( !v21 )
              break;
            v34 = *(int *)(v31 + 52);
            if ( (unsigned int)v34 >= v21->max_length )
              goto LABEL_51;
            Instance = (__int64)v21->m_Items[v34];
            if ( !Instance )
              break;
            UserServantLeaderEntity__setUserServantEntity(
              (UserServantLeaderEntity_o *)Instance,
              (UserServantEntity_o *)entity,
              v34,
              supportDeckId,
              v33);
          }
        }
        v35 = *(_QWORD *)(v31 + 32);
        if ( v35 )
        {
          v36 = *(_OWORD *)(v35 + 40);
          *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v35 + 24);
          *(_OWORD *)&v45.fields.fakeValue = v36;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v44 = v45;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v44, 0LL);
          if ( Instance )
          {
            Instance = sub_1B86460(long___TypeInfo, 1LL);
            v37 = *(_QWORD *)(v31 + 32);
            if ( !v37 )
              break;
            v38 = *(_OWORD *)(v37 + 40);
            v39 = (System_Int64_array *)Instance;
            *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)(v37 + 24);
            *(_OWORD *)&v45.fields.fakeValue = v38;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v43 = v45;
            Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v43, 0LL);
            if ( !v39 )
              break;
            if ( !v39->max_length )
              goto LABEL_51;
            v39->m_Items[0] = Instance;
            if ( !v17 )
              break;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v17,
                         v39,
                         (const MethodInfo_3215DB8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
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
        v40 = *(int *)(v31 + 52);
        if ( (unsigned int)v40 >= v21->max_length )
          goto LABEL_51;
        if ( (Instance & 1) != 0 )
          v16 = *(EquipTargetInfo_o **)(v31 + 32);
        else
          v16 = 0LL;
        Instance = (__int64)v21->m_Items[v40];
        if ( !Instance )
          break;
        UserServantLeaderEntity__setEquipTargetInfo((UserServantLeaderEntity_o *)Instance, v16, v32);
      }
      if ( v20 == ++v30 )
        return v21;
    }
LABEL_50:
    sub_1B86614(Instance, v16);
  }
  return v21;
}