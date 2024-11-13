void __fastcall UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16E20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B16E20 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserEquipEntity__CreatePrimaryKey(UserEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall UserEquipEntity__IsNew(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x21
  int32_t v11; // w0
  __int64 v12; // x1
  int32_t lv; // w19
  int32_t v14; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4B16E1E & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4, v5);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v6, v7);
    byte_4B16E1E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId )
    return 0;
  v10 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
  lv = this->fields.lv;
  v14 = v11;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v12);
  return UserEquipNewManager__IsNew(v14, lv, 0LL);
}


void __fastcall UserEquipEntity__SetOld(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  __int64 v9; // x1
  int32_t lv; // w19
  int32_t v11; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4B16E1F & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
    sub_1BCA7E0(&UserEquipNewManager_TypeInfo, v4, v5);
    byte_4B16E1F = 1;
  }
  v7 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v12, 0LL);
  lv = this->fields.lv;
  v11 = v8;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v9);
  UserEquipNewManager__SetOld(v11, lv, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x0
  __int64 v25; // x0
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v28; // x1
  __int64 v29; // x25
  __int64 v30; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x24
  Il2CppObject *Entity; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  Il2CppObject *v40; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  System_String_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_String_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  const MethodInfo *v56; // x0
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v58; // x0
  void *monitor; // x20
  Il2CppClass *v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int32_t v67; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_4B16E1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, condUsrLv, maxLv);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v20, v21);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v22, v23);
    byte_4B16E1C = 1;
  }
  v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
    v24 = sub_1C1C6BC(v7);
  v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(v7);
  SelfUserGame = **(UserGameEntity_o ***)(v25 + 184);
  if ( !SelfUserGame )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SelfUserGame,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___);
  v30 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v29 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
  *(_QWORD *)&v68.fields.currentCryptoKey = v30;
  *(_QWORD *)&v68.fields.fakeValue = v29;
  SelfUserGame = (UserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v68, 0LL);
  if ( !v31 )
    goto LABEL_25;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v31,
             (int32_t)SelfUserGame,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    *equipName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784((PartyOrganizationUtility_o *)equipName, (int64_t)StringLiteral_1/*""*/, v34, v35, v36, v37, v38, v39);
    *detail = (System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784((PartyOrganizationUtility_o *)detail, (int64_t)StringLiteral_1/*""*/, v61, v62, v63, v64, v65, v66);
    v67 = 0;
    goto LABEL_23;
  }
  v40 = Entity;
  *condUsrLv = (int32_t)Entity[3].monitor;
  *maxLv = HIDWORD(Entity[3].monitor);
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Entity[2].klass;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v33);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(klass, 0LL);
  *equipName = v42;
  sub_1BCA784((PartyOrganizationUtility_o *)equipName, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v40[3].klass,
          0LL);
  *detail = v49;
  sub_1BCA784((PartyOrganizationUtility_o *)detail, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(v56);
  if ( !SelfUserGame )
LABEL_25:
    sub_1BCAA3C(SelfUserGame, condUsrLv);
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v60 = v40[5].klass;
    monitor = v40[5].monitor;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v60 = v40[4].klass;
    monitor = v40[4].monitor;
  }
  if ( !v58->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v58, condUsrLv);
  *(_QWORD *)&v69.fields.currentCryptoKey = v60;
  *(_QWORD *)&v69.fields.fakeValue = monitor;
  v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v69, 0LL);
LABEL_23:
  *genderImageId = v67;
}


void __fastcall UserEquipEntity__getExpInfo(
        UserEquipEntity_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v20; // x1
  __int64 v21; // x24
  __int64 v22; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x23
  Il2CppObject *v24; // x23
  int m_CancellationTokenSource; // w27
  float v26; // s0
  __int64 v27; // x24
  __int64 v28; // x25
  __int64 v29; // x24
  __int64 v30; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  if ( (byte_4B16E1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipExpMaster___, exp, lateExp);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    byte_4B16E1D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipMaster___);
  v22 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v31.fields.currentCryptoKey = v22;
  *(_QWORD *)&v31.fields.fakeValue = v21;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL);
  if ( !v23 )
    goto LABEL_24;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                v23,
                                (int32_t)Instance,
                                (const MethodInfo_31B2E40 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_24;
  if ( this->fields.lv < SHIDWORD(Instance->fields.masterDataBytes) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    v24 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v28 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
      *(_QWORD *)&v32.fields.currentCryptoKey = v28;
      *(_QWORD *)&v32.fields.fakeValue = v27;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
      if ( !v24 )
        goto LABEL_24;
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(
                                    (EquipExpMaster_o *)v24,
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
    v30 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
    v29 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    *(_QWORD *)&v33.fields.currentCryptoKey = v30;
    *(_QWORD *)&v33.fields.fakeValue = v29;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
    if ( v24 )
    {
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(
                                    (EquipExpMaster_o *)v24,
                                    (int32_t)Instance,
                                    this->fields.lv,
                                    0LL);
      *exp = this->fields.exp - m_CancellationTokenSource;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
        v26 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
        goto LABEL_23;
      }
    }
LABEL_24:
    sub_1BCAA3C(Instance, v18);
  }
  v26 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_23:
  *barExp = v26;
}


System_Int32_array *__fastcall UserEquipEntity__getSkillIdList(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  BalanceConfig_c *v12; // x0
  __int64 v13; // x1
  System_Int32_array *v14; // x20
  long double v15; // q0
  __int64 v16; // x8
  __int64 v17; // x0
  Il2CppObject *MasterData_object; // x0
  EquipSkillMaster_o *v19; // x21
  int32_t v20; // w22
  unsigned int v21; // w28
  int32_t *i; // x27
  __int64 v23; // x23
  __int64 v24; // x24
  EquipSkillEntity_o *Entity; // x0
  EquipSkillEntity_o *v26; // x23
  _BOOL8 isUse; // x0
  il2cpp_array_size_t max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B16E1B & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipSkillMaster___, v4, v5);
    sub_1BCA7E0(&int___TypeInfo, v6, v7);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10, v11);
    byte_4B16E1B = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v12 = BalanceConfig_TypeInfo;
  }
  v14 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)v12->static_fields->UserEquipSkillListMax);
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC(v15);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC(v15);
  MasterData_object = **(Il2CppObject ***)(v17 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v14) )
  {
LABEL_25:
    sub_1BCAA3C(MasterData_object, v13);
  }
  if ( (int)v14->max_length >= 1 )
  {
    v19 = (EquipSkillMaster_o *)MasterData_object;
    v20 = 1;
    do
    {
      v21 = v20 - 1;
      for ( i = &v14->m_Items[v20]; ; *i = -1 )
      {
        v24 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v23 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
        *(_QWORD *)&v30.fields.currentCryptoKey = v24;
        *(_QWORD *)&v30.fields.fakeValue = v23;
        MasterData_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                              v30,
                                              0LL);
        if ( !v19 )
          goto LABEL_25;
        Entity = EquipSkillMaster__GetEntity(v19, (int32_t)MasterData_object, v20, 0LL);
        if ( !Entity )
          goto LABEL_23;
        v26 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0LL);
        max_length = v14->max_length;
        if ( isUse )
          break;
        if ( v21 >= max_length )
          goto LABEL_26;
      }
      if ( v21 >= max_length )
LABEL_26:
        sub_1BCAA44(isUse, v13);
      *i = v26->fields.skillId;
LABEL_23:
      ++v20;
    }
    while ( v20 <= (signed int)v14->max_length );
  }
  return v14;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEquipEntity__getSkillLv(UserEquipEntity_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  void *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x23
  EquipExpMaster_o *v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4B16E19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B16E19 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v14 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v15 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v17.fields.currentCryptoKey = v14;
  *(_QWORD *)&v17.fields.fakeValue = v13;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v17, 0LL);
  if ( !v15 )
    goto LABEL_17;
  Instance = EquipExpMaster__GetEntity(v15, (int32_t)Instance, this->fields.lv, 0LL);
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
      sub_1BCAA3C(Instance, v10);
    default:
      return 0;
  }
}


System_Int32_array *__fastcall UserEquipEntity__getSkillLvList(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Int32_array *result; // x0
  __int64 v11; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  EquipExpMaster_o *v16; // x20
  EquipExpEntity_o *Entity; // x19
  il2cpp_array_size_t max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4B16E1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EquipExpMaster___, method, v2);
    sub_1BCA7E0(&int___TypeInfo, v4, v5);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16E1A = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v15 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v16 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
  *(_QWORD *)&v19.fields.currentCryptoKey = v15;
  *(_QWORD *)&v19.fields.fakeValue = v14;
  result = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v19, 0LL);
  if ( !v16
    || (Entity = EquipExpMaster__GetEntity(v16, (int32_t)result, this->fields.lv, 0LL),
        result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 3LL),
        !Entity)
    || !result )
  {
LABEL_13:
    sub_1BCAA3C(result, v11);
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = Entity->fields.skillLv2, max_length <= 2) )
  {
    sub_1BCAA44(result, v11);
  }
  result->m_Items[3] = Entity->fields.skillLv3;
  return result;
}