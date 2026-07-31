void UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59394A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_long___ctor__);
    byte_59394A6 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3EDADB8 *)Method_DataEntityBase_long___ctor__);
}


int64_t UserEquipEntity__CreatePrimaryKey(UserEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool UserEquipEntity__IsNew(UserEquipEntity_o *this, const MethodInfo *method)
{
  NetworkManager_c *v3; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  __int64 v7; // x1
  int32_t lv; // w19
  int32_t v9; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_59394A4 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&UserEquipNewManager_TypeInfo);
    byte_59394A4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v3 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v3 = NetworkManager_TypeInfo;
  }
  if ( v3->static_fields->userIdNumber != this->fields.userId )
    return 0;
  v4 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v11.fields.currentCryptoKey = v4;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v11, 0);
  lv = this->fields.lv;
  v9 = v6;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v7);
  return UserEquipNewManager__IsNew(v9, lv, 0);
}


void UserEquipEntity__SetOld(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  __int64 v6; // x1
  int32_t lv; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_59394A5 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&UserEquipNewManager_TypeInfo);
    byte_59394A5 = 1;
  }
  v3 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v9.fields.currentCryptoKey = v3;
  *(_QWORD *)&v9.fields.fakeValue = v4;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v9, 0);
  lv = this->fields.lv;
  v8 = v5;
  if ( !*(&UserEquipNewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo, v6);
  UserEquipNewManager__SetOld(v8, lv, 0);
}


void UserEquipEntity__getEquipInfo(
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
  __int64 v18; // x1
  __int64 v19; // x25
  __int64 v20; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x24
  Il2CppObject *Entity; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x24
  int32_t monitor_high; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_c *v32; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  System_String_o *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v49; // x0
  Il2CppClass *v50; // x20
  void *monitor; // x21
  int32_t v52; // w1
  int32_t v53; // w1
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  int32_t v60; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_59394A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59394A2 = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_2237AF8(v7);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_2237AF8(v7);
  SelfUserGame = **(UserGameEntity_o ***)(v15 + 184);
  if ( !SelfUserGame )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SelfUserGame,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___);
  v19 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
  *(_QWORD *)&v61.fields.currentCryptoKey = v19;
  *(_QWORD *)&v61.fields.fakeValue = v20;
  SelfUserGame = (UserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v61, 0);
  if ( !v21 )
    goto LABEL_25;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v21,
             (int32_t)SelfUserGame,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    v52 = (int)StringLiteral_1/*""*/;
    *equipName = (System_String_o *)StringLiteral_1/*""*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)equipName, v52, v24, v25, v26, v27, v28, v29);
    v53 = (int)StringLiteral_1/*""*/;
    *detail = (System_String_o *)StringLiteral_1/*""*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)detail, v53, v54, v55, v56, v57, v58, v59);
    v60 = 0;
    goto LABEL_23;
  }
  v30 = Entity;
  *condUsrLv = (int32_t)Entity[3].monitor;
  monitor_high = HIDWORD(Entity[3].monitor);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo;
  *maxLv = monitor_high;
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v30[2].klass;
  if ( !*(&v32->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v32, v23);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(klass, 0);
  *equipName = v34;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)equipName, (int32_t)v34, v35, v36, v37, v38, v39, v40);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_55828364(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v30[3].klass,
          0);
  *detail = v41;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)detail, (int32_t)v41, v42, v43, v44, v45, v46, v47);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
LABEL_25:
    sub_21FFECC(SelfUserGame, condUsrLv);
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v50 = v30[5].klass;
    monitor = v30[5].monitor;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v50 = v30[4].klass;
    monitor = v30[4].monitor;
  }
  if ( !*(&v49->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v49, condUsrLv);
  *(_QWORD *)&v62.fields.currentCryptoKey = v50;
  *(_QWORD *)&v62.fields.fakeValue = monitor;
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v62, 0);
LABEL_23:
  *genderImageId = v60;
}


void UserEquipEntity__getExpInfo(
        UserEquipEntity_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x23
  Il2CppObject *v16; // x23
  int m_CancellationTokenSource; // w27
  float v18; // s0
  __int64 v19; // x24
  __int64 v20; // x25
  __int64 v21; // x24
  __int64 v22; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_59394A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_21FFC50(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59394A3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipMaster___);
  v13 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v23, 0);
  if ( !v15 )
    goto LABEL_24;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                v15,
                                (int32_t)Instance,
                                (const MethodInfo_3EDD388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_24;
  if ( this->fields.lv < SHIDWORD(Instance->fields.masterDataBytes) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    v16 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v19 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
      *(_QWORD *)&v24.fields.currentCryptoKey = v19;
      *(_QWORD *)&v24.fields.fakeValue = v20;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v24, 0);
      if ( !v16 )
        goto LABEL_24;
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(
                                    (EquipExpMaster_o *)v16,
                                    (int32_t)Instance,
                                    this->fields.lv - 1,
                                    0);
      if ( !Instance )
        goto LABEL_24;
      m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
    }
    else
    {
      m_CancellationTokenSource = 0;
    }
    v21 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
    v22 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    *(_QWORD *)&v25.fields.currentCryptoKey = v21;
    *(_QWORD *)&v25.fields.fakeValue = v22;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v25, 0);
    if ( v16 )
    {
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(
                                    (EquipExpMaster_o *)v16,
                                    (int32_t)Instance,
                                    this->fields.lv,
                                    0);
      *exp = this->fields.exp - m_CancellationTokenSource;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
        v18 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
        goto LABEL_23;
      }
    }
LABEL_24:
    sub_21FFECC(Instance, v10);
  }
  v18 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_23:
  *barExp = v18;
}


System_Int32_array *UserEquipEntity__getSkillIdList(UserEquipEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  long double v6; // q0
  __int64 v7; // x8
  __int64 v8; // x0
  Il2CppObject *MasterData_object; // x0
  EquipSkillMaster_o *v10; // x21
  int32_t v11; // w22
  unsigned int v12; // w28
  __int64 i; // x27
  __int64 v14; // x23
  __int64 v15; // x24
  EquipSkillEntity_o *Entity; // x0
  EquipSkillEntity_o *v17; // x23
  _BOOL8 isUse; // x0
  unsigned int v19; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_59394A1 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipSkillMaster___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_59394A1 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = sub_21FFD10(int___TypeInfo, (unsigned int)v3->static_fields->UserEquipSkillListMax);
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8(v6);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8(v6);
  MasterData_object = **(Il2CppObject ***)(v8 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v5) )
  {
LABEL_25:
    sub_21FFECC(MasterData_object, v4);
  }
  if ( *(int *)(v5 + 24) >= 1 )
  {
    v10 = (EquipSkillMaster_o *)MasterData_object;
    v11 = 1;
    do
    {
      v12 = v11 - 1;
      for ( i = v5 + 4LL * (v11 - 1); ; *(_DWORD *)(i + 32) = -1 )
      {
        v14 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v15 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
        *(_QWORD *)&v21.fields.currentCryptoKey = v14;
        *(_QWORD *)&v21.fields.fakeValue = v15;
        MasterData_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v21, 0);
        if ( !v10 )
          goto LABEL_25;
        Entity = EquipSkillMaster__GetEntity(v10, (int32_t)MasterData_object, v11, 0);
        if ( !Entity )
          goto LABEL_23;
        v17 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0);
        v19 = *(_DWORD *)(v5 + 24);
        if ( isUse )
          break;
        if ( v12 >= v19 )
          goto LABEL_26;
      }
      if ( v12 >= v19 )
LABEL_26:
        sub_21FFED4(isUse);
      *(_DWORD *)(i + 32) = v17->fields.skillId;
LABEL_23:
      ++v11;
    }
    while ( v11 <= *(_DWORD *)(v5 + 24) );
  }
  return (System_Int32_array *)v5;
}


int32_t UserEquipEntity__getSkillLv(UserEquipEntity_o *this, int32_t index, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  EquipExpMaster_o *v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_593949F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593949F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v9 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v11 = (EquipExpMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
  *(_QWORD *)&v13.fields.currentCryptoKey = v9;
  *(_QWORD *)&v13.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v13, 0);
  if ( !v11 )
    goto LABEL_17;
  Instance = EquipExpMaster__GetEntity(v11, (int32_t)Instance, this->fields.lv, 0);
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
      sub_21FFECC(Instance, v6);
    default:
      return 0;
  }
}


System_Int32_array *UserEquipEntity__getSkillLvList(UserEquipEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  EquipExpMaster_o *v9; // x20
  EquipExpEntity_o *Entity; // x19
  unsigned int max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_59394A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59394A0 = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v7 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v9 = (EquipExpMaster_o *)MasterData_object;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  result = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v12, 0);
  if ( !v9
    || (Entity = EquipExpMaster__GetEntity(v9, (int32_t)result, this->fields.lv, 0),
        result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 3),
        !Entity)
    || !result )
  {
LABEL_13:
    sub_21FFECC(result, v4);
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[0] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[1] = Entity->fields.skillLv2, max_length <= 2) )
  {
    sub_21FFED4(result);
  }
  result->m_Items[2] = Entity->fields.skillLv3;
  return result;
}