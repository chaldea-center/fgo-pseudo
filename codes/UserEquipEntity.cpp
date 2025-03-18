void __fastcall UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22C19 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_long___ctor__, method);
    byte_4C22C19 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32989AC *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserEquipEntity__CreatePrimaryKey(UserEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall UserEquipEntity__IsNew(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  NetworkManager_c *v5; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  int32_t lv; // w19
  int32_t v10; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4C22C17 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1C3B764(&UserEquipNewManager_TypeInfo, v4);
    byte_4C22C17 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C1C955 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  if ( v5->static_fields->userIdNumber != this->fields.userId )
    return 0;
  v7 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v12, 0LL);
  lv = this->fields.lv;
  v10 = v8;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  return UserEquipNewManager__IsNew(v10, lv, 0LL);
}


void __fastcall UserEquipEntity__SetOld(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  int32_t lv; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C22C18 & 1) == 0 )
  {
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1C3B764(&UserEquipNewManager_TypeInfo, v3);
    byte_4C22C18 = 1;
  }
  v5 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v9, 0LL);
  lv = this->fields.lv;
  v8 = v6;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__SetOld(v8, lv, 0LL);
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x0
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v23; // x25
  __int64 v24; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x24
  Il2CppObject *Entity; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  Il2CppObject *v33; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  System_String_o *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_String_o *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v50; // x0
  void *monitor; // x20
  Il2CppClass *v52; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int32_t v59; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_4C22C15 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EquipMaster___, condUsrLv);
    sub_1C3B764(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v14);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v16);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v17);
    sub_1C3B764(&StringLiteral_1/*""*/, v18);
    byte_4C22C15 = 1;
  }
  v19 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C8D640(v7);
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1C8D640(v7);
  SelfUserGame = **(UserGameEntity_o ***)(v20 + 184);
  if ( !SelfUserGame )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SelfUserGame,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EquipMaster___);
  v24 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v60.fields.currentCryptoKey = v24;
  *(_QWORD *)&v60.fields.fakeValue = v23;
  SelfUserGame = (UserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v60, 0LL);
  if ( !v25 )
    goto LABEL_25;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v25,
             (int32_t)SelfUserGame,
             (const MethodInfo_329AE48 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    *equipName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C3B708((PartyOrganizationUtility_o *)equipName, (int64_t)StringLiteral_1/*""*/, v27, v28, v29, v30, v31, v32);
    *detail = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C3B708((PartyOrganizationUtility_o *)detail, (int64_t)StringLiteral_1/*""*/, v53, v54, v55, v56, v57, v58);
    v59 = 0;
    goto LABEL_23;
  }
  v33 = Entity;
  *condUsrLv = (int32_t)Entity[3].monitor;
  *maxLv = HIDWORD(Entity[3].monitor);
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Entity[2].klass;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47918404(klass, 0LL);
  *equipName = v35;
  sub_1C3B708((PartyOrganizationUtility_o *)equipName, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47918404(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v33[3].klass,
          0LL);
  *detail = v42;
  sub_1C3B708((PartyOrganizationUtility_o *)detail, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_25:
    sub_1C3B9C0(SelfUserGame, condUsrLv);
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v52 = v33[5].klass;
    monitor = v33[5].monitor;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v52 = v33[4].klass;
    monitor = v33[4].monitor;
  }
  if ( !v50->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v50);
  *(_QWORD *)&v61.fields.currentCryptoKey = v52;
  *(_QWORD *)&v61.fields.fakeValue = monitor;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v61, 0LL);
LABEL_23:
  *genderImageId = v59;
}


void __fastcall UserEquipEntity__getExpInfo(
        UserEquipEntity_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v16; // x24
  __int64 v17; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x23
  Il2CppObject *v19; // x23
  int m_CancellationTokenSource; // w27
  float v21; // s0
  __int64 v22; // x24
  __int64 v23; // x25
  __int64 v24; // x24
  __int64 v25; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4C22C16 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EquipExpMaster___, exp);
    sub_1C3B764(&Method_DataManager_GetMasterData_EquipMaster___, v9);
    sub_1C3B764(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4C22C16 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EquipMaster___);
  v17 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v17;
  *(_QWORD *)&v26.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v26, 0LL);
  if ( !v18 )
    goto LABEL_24;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                v18,
                                (int32_t)Instance,
                                (const MethodInfo_329AE48 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_24;
  if ( this->fields.lv < SHIDWORD(Instance->fields.masterDataBytes) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    v19 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v23 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = v23;
      *(_QWORD *)&v27.fields.fakeValue = v22;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v27, 0LL);
      if ( !v19 )
        goto LABEL_24;
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(
                                    (EquipExpMaster_o *)v19,
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
    v25 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v28.fields.currentCryptoKey = v25;
    *(_QWORD *)&v28.fields.fakeValue = v24;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v28, 0LL);
    if ( v19 )
    {
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(
                                    (EquipExpMaster_o *)v19,
                                    (int32_t)Instance,
                                    this->fields.lv,
                                    0LL);
      *exp = this->fields.exp - m_CancellationTokenSource;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
        v21 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
        goto LABEL_23;
      }
    }
LABEL_24:
    sub_1C3B9C0(Instance, v14);
  }
  v21 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_23:
  *barExp = v21;
}


System_Int32_array *__fastcall UserEquipEntity__getSkillIdList(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1
  System_Int32_array *v9; // x20
  long double v10; // q0
  __int64 v11; // x8
  __int64 v12; // x0
  Il2CppObject *MasterData_object; // x0
  EquipSkillMaster_o *v14; // x21
  int32_t v15; // w22
  unsigned int v16; // w28
  int32_t *i; // x27
  __int64 v18; // x23
  __int64 v19; // x24
  EquipSkillEntity_o *Entity; // x0
  EquipSkillEntity_o *v21; // x23
  _BOOL8 isUse; // x0
  __int64 v23; // x1
  il2cpp_array_size_t max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4C22C14 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EquipSkillMaster___, v3);
    sub_1C3B764(&int___TypeInfo, v4);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4C22C14 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v9 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, (unsigned int)v7->static_fields->UserEquipSkillListMax);
  v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C8D640(v10);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C8D640(v10);
  MasterData_object = **(Il2CppObject ***)(v12 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v9) )
  {
LABEL_25:
    sub_1C3B9C0(MasterData_object, v8);
  }
  if ( (int)v9->max_length >= 1 )
  {
    v14 = (EquipSkillMaster_o *)MasterData_object;
    v15 = 1;
    do
    {
      v16 = v15 - 1;
      for ( i = &v9->m_Items[v15]; ; *i = -1 )
      {
        v19 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v26.fields.currentCryptoKey = v19;
        *(_QWORD *)&v26.fields.fakeValue = v18;
        MasterData_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(
                                              v26,
                                              0LL);
        if ( !v14 )
          goto LABEL_25;
        Entity = EquipSkillMaster__GetEntity(v14, (int32_t)MasterData_object, v15, 0LL);
        if ( !Entity )
          goto LABEL_23;
        v21 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0LL);
        max_length = v9->max_length;
        if ( isUse )
          break;
        if ( v16 >= max_length )
          goto LABEL_26;
      }
      if ( v16 >= max_length )
LABEL_26:
        sub_1C3B9C8(isUse, v23);
      *i = v21->fields.skillId;
LABEL_23:
      ++v15;
    }
    while ( v15 <= (signed int)v9->max_length );
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEquipEntity__getSkillLv(UserEquipEntity_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x22
  __int64 v11; // x23
  EquipExpMaster_o *v12; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C22C12 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&index);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4C22C12 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v11 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v12 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v14, 0LL);
  if ( !v12 )
    goto LABEL_17;
  Instance = EquipExpMaster__GetEntity(v12, (int32_t)Instance, this->fields.lv, 0LL);
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
      sub_1C3B9C0(Instance, v8);
    default:
      return 0;
  }
}


System_Int32_array *__fastcall UserEquipEntity__getSkillLvList(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Int32_array *result; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  EquipExpMaster_o *v11; // x20
  EquipExpEntity_o *Entity; // x19
  il2cpp_array_size_t max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4C22C13 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EquipExpMaster___, method);
    sub_1C3B764(&int___TypeInfo, v3);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C22C13 = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v10 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v11 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  result = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v14, 0LL);
  if ( !v11
    || (Entity = EquipExpMaster__GetEntity(v11, (int32_t)result, this->fields.lv, 0LL),
        result = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 3LL),
        !Entity)
    || !result )
  {
LABEL_13:
    sub_1C3B9C0(result, v7);
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = Entity->fields.skillLv2, max_length <= 2) )
  {
    sub_1C3B9C8(result, v7);
  }
  result->m_Items[3] = Entity->fields.skillLv3;
  return result;
}