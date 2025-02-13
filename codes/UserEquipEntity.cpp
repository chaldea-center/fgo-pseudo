void __fastcall UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD1BE & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_long___ctor__);
    byte_4BDD1BE = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_325992C *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserEquipEntity__CreatePrimaryKey(UserEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall UserEquipEntity__IsNew(UserEquipEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  int32_t lv; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4BDD1BC & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&UserEquipNewManager_TypeInfo);
    byte_4BDD1BC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->userIdNumber != this->fields.userId )
    return 0;
  v5 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v10, 0LL);
  lv = this->fields.lv;
  v8 = v6;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  return UserEquipNewManager__IsNew(v8, lv, 0LL);
}


void __fastcall UserEquipEntity__SetOld(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t lv; // w19
  int32_t v7; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4BDD1BD & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&UserEquipNewManager_TypeInfo);
    byte_4BDD1BD = 1;
  }
  v4 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v8, 0LL);
  lv = this->fields.lv;
  v7 = v5;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__SetOld(v7, lv, 0LL);
}


void __fastcall UserEquipEntity__getEquipInfo(
        UserEquipEntity_o *this,
        int32_t *condUsrLv,
        int32_t *maxLv,
        System_String_o **equipName,
        System_String_o **detail,
        int32_t *genderImageId,
        const MethodInfo *method)
{
  long double v7; // q0
  __int64 v14; // x0
  __int64 v15; // x0
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v18; // x25
  __int64 v19; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x24
  Il2CppObject *Entity; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  System_String_o *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_String_o *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v45; // x0
  void *monitor; // x20
  Il2CppClass *v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int32_t v54; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4BDD1BA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C21E38(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDD1BA = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C73D14(v7);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C73D14(v7);
  SelfUserGame = **(UserGameEntity_o ***)(v15 + 184);
  if ( !SelfUserGame )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SelfUserGame,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EquipMaster___);
  v19 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v19;
  *(_QWORD *)&v55.fields.fakeValue = v18;
  SelfUserGame = (UserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v55, 0LL);
  if ( !v20 )
    goto LABEL_25;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             (int32_t)SelfUserGame,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    *equipName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)equipName, (int64_t)StringLiteral_1/*""*/, v22, v23, v24, v25, v26, v27);
    *detail = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)detail, (int64_t)StringLiteral_1/*""*/, v48, v49, v50, v51, v52, v53);
    v54 = 0;
    goto LABEL_23;
  }
  v28 = Entity;
  *condUsrLv = (int32_t)Entity[3].monitor;
  *maxLv = HIDWORD(Entity[3].monitor);
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Entity[2].klass;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(klass, 0LL);
  *equipName = v30;
  sub_1C21DDC((PartyOrganizationUtility_o *)equipName, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47657208(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v28[3].klass,
          0LL);
  *detail = v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)detail, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_25:
    sub_1C22094(SelfUserGame, condUsrLv);
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v47 = v28[5].klass;
    monitor = v28[5].monitor;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v47 = v28[4].klass;
    monitor = v28[4].monitor;
  }
  if ( !v45->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v45);
  *(_QWORD *)&v56.fields.currentCryptoKey = v47;
  *(_QWORD *)&v56.fields.fakeValue = monitor;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v56, 0LL);
LABEL_23:
  *genderImageId = v54;
}


void __fastcall UserEquipEntity__getExpInfo(
        UserEquipEntity_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x23
  Il2CppObject *v15; // x23
  int m_CancellationTokenSource; // w27
  float v17; // s0
  __int64 v18; // x24
  __int64 v19; // x25
  __int64 v20; // x24
  __int64 v21; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4BDD1BB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C21E38(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD1BB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EquipMaster___);
  v13 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v22, 0LL);
  if ( !v14 )
    goto LABEL_24;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                v14,
                                (int32_t)Instance,
                                (const MethodInfo_325BDC8 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_24;
  if ( this->fields.lv < SHIDWORD(Instance->fields.masterDataBytes) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    v15 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v19 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v19;
      *(_QWORD *)&v23.fields.fakeValue = v18;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v23, 0LL);
      if ( !v15 )
        goto LABEL_24;
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(
                                    (EquipExpMaster_o *)v15,
                                    (int32_t)Instance,
                                    this->fields.lv - 1,
                                    0LL);
      if ( !Instance )
        goto LABEL_24;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
    }
    else
    {
      m_CancellationTokenSource = 0;
    }
    v21 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v24.fields.currentCryptoKey = v21;
    *(_QWORD *)&v24.fields.fakeValue = v20;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v24, 0LL);
    if ( v15 )
    {
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(
                                    (EquipExpMaster_o *)v15,
                                    (int32_t)Instance,
                                    this->fields.lv,
                                    0LL);
      *exp = this->fields.exp - m_CancellationTokenSource;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
        v17 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
        goto LABEL_23;
      }
    }
LABEL_24:
    sub_1C22094(Instance, v10);
  }
  v17 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_23:
  *barExp = v17;
}


System_Int32_array *__fastcall UserEquipEntity__getSkillIdList(UserEquipEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  System_Int32_array *v5; // x20
  long double v6; // q0
  __int64 v7; // x8
  __int64 v8; // x0
  Il2CppObject *MasterData_object; // x0
  EquipSkillMaster_o *v10; // x21
  int32_t v11; // w22
  unsigned int v12; // w28
  int32_t *i; // x27
  __int64 v14; // x23
  __int64 v15; // x24
  EquipSkillEntity_o *Entity; // x0
  EquipSkillEntity_o *v17; // x23
  _BOOL8 isUse; // x0
  __int64 v19; // x1
  il2cpp_array_size_t max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4BDD1B9 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EquipSkillMaster___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4BDD1B9 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, (unsigned int)v3->static_fields->UserEquipSkillListMax);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C73D14(v6);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C73D14(v6);
  MasterData_object = **(Il2CppObject ***)(v8 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v5) )
  {
LABEL_25:
    sub_1C22094(MasterData_object, v4);
  }
  if ( (int)v5->max_length >= 1 )
  {
    v10 = (EquipSkillMaster_o *)MasterData_object;
    v11 = 1;
    do
    {
      v12 = v11 - 1;
      for ( i = &v5->m_Items[v11]; ; *i = -1 )
      {
        v15 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v14 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v22.fields.currentCryptoKey = v15;
        *(_QWORD *)&v22.fields.fakeValue = v14;
        MasterData_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                              v22,
                                              0LL);
        if ( !v10 )
          goto LABEL_25;
        Entity = EquipSkillMaster__GetEntity(v10, (int32_t)MasterData_object, v11, 0LL);
        if ( !Entity )
          goto LABEL_23;
        v17 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0LL);
        max_length = v5->max_length;
        if ( isUse )
          break;
        if ( v12 >= max_length )
          goto LABEL_26;
      }
      if ( v12 >= max_length )
LABEL_26:
        sub_1C2209C(isUse, v19);
      *i = v17->fields.skillId;
LABEL_23:
      ++v11;
    }
    while ( v11 <= (signed int)v5->max_length );
  }
  return v5;
}


int32_t __fastcall UserEquipEntity__getSkillLv(UserEquipEntity_o *this, int32_t index, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  EquipExpMaster_o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4BDD1B7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD1B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v9 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v10 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v12, 0LL);
  if ( !v10 )
    goto LABEL_17;
  Instance = EquipExpMaster__GetEntity(v10, (int32_t)Instance, this->fields.lv, 0LL);
  switch ( index )
  {
    case 2:
      if ( !Instance )
        goto LABEL_17;
      return *((_DWORD *)Instance + 9);
    case 1:
      if ( !Instance )
        goto LABEL_17;
      return *((_DWORD *)Instance + 8);
    case 0:
      if ( Instance )
        return *((_DWORD *)Instance + 7);
LABEL_17:
      sub_1C22094(Instance, v6);
    default:
      return 0;
  }
}


System_Int32_array *__fastcall UserEquipEntity__getSkillLvList(UserEquipEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  EquipExpMaster_o *v8; // x20
  EquipExpEntity_o *Entity; // x19
  il2cpp_array_size_t max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4BDD1B8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDD1B8 = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v7 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v8 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  result = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v11, 0LL);
  if ( !v8
    || (Entity = EquipExpMaster__GetEntity(v8, (int32_t)result, this->fields.lv, 0LL),
        result = (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 3LL),
        !Entity)
    || !result )
  {
LABEL_13:
    sub_1C22094(result, v4);
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = Entity->fields.skillLv2, max_length <= 2) )
  {
    sub_1C2209C(result, v4);
  }
  result->m_Items[3] = Entity->fields.skillLv3;
  return result;
}