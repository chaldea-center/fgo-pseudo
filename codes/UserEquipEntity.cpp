void UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C38765 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_long___ctor__);
    byte_4C38765 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_339439C *)Method_DataEntityBase_long___ctor__);
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
  int32_t lv; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4C38763 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38763 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v10, 0);
  lv = this->fields.lv;
  v8 = v6;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  return UserEquipNewManager__IsNew(v8, lv, 0);
}


void UserEquipEntity__SetOld(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t lv; // w19
  int32_t v7; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4C38764 & 1) == 0 )
  {
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&UserEquipNewManager_TypeInfo);
    byte_4C38764 = 1;
  }
  v4 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v8, 0);
  lv = this->fields.lv;
  v7 = v5;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__SetOld(v7, lv, 0);
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
  __int64 v18; // x25
  __int64 v19; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x24
  Il2CppObject *Entity; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  System_String_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x0
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v34; // x0
  void *monitor; // x20
  Il2CppClass *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4C38761 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C32C20(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C38761 = 1;
  }
  v14 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C83334(v7);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C83334(v7);
  SelfUserGame = **(UserGameEntity_o ***)(v15 + 184);
  if ( !SelfUserGame )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SelfUserGame,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipMaster___);
  v19 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v19;
  *(_QWORD *)&v40.fields.fakeValue = v18;
  SelfUserGame = (UserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v40, 0);
  if ( !v20 )
    goto LABEL_25;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             (int32_t)SelfUserGame,
             (const MethodInfo_3396838 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    *equipName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)equipName, StringLiteral_1/*""*/, v22, v23);
    *detail = (System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)detail, StringLiteral_1/*""*/, v37, v38);
    v39 = 0;
    goto LABEL_23;
  }
  v24 = Entity;
  *condUsrLv = (int32_t)Entity[3].monitor;
  *maxLv = HIDWORD(Entity[3].monitor);
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Entity[2].klass;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48923628(klass, 0);
  *equipName = v26;
  sub_1C32BC4((CGThumbnailListItem_o *)equipName, (int32_t)v26, v27, v28);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48923628(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v24[3].klass,
          0);
  *detail = v29;
  sub_1C32BC4((CGThumbnailListItem_o *)detail, (int32_t)v29, v30, v31);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(v32);
  if ( !SelfUserGame )
LABEL_25:
    sub_1C32E7C(SelfUserGame);
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v36 = v24[5].klass;
    monitor = v24[5].monitor;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v36 = v24[4].klass;
    monitor = v24[4].monitor;
  }
  if ( !v34->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v34);
  *(_QWORD *)&v41.fields.currentCryptoKey = v36;
  *(_QWORD *)&v41.fields.fakeValue = monitor;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v41, 0);
LABEL_23:
  *genderImageId = v39;
}


void UserEquipEntity__getExpInfo(
        UserEquipEntity_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v11; // x24
  __int64 v12; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x23
  Il2CppObject *v14; // x23
  int m_CancellationTokenSource; // w27
  float v16; // s0
  __int64 v17; // x24
  __int64 v18; // x25
  __int64 v19; // x24
  __int64 v20; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C38762 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C32C20(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C38762 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipMaster___);
  v12 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v21, 0);
  if ( !v13 )
    goto LABEL_24;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                v13,
                                (int32_t)Instance,
                                (const MethodInfo_3396838 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_24;
  if ( this->fields.lv < SHIDWORD(Instance->fields.masterDataBytes) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    v14 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v18 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v22.fields.currentCryptoKey = v18;
      *(_QWORD *)&v22.fields.fakeValue = v17;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v22, 0);
      if ( !v14 )
        goto LABEL_24;
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(
                                    (EquipExpMaster_o *)v14,
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
    v20 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v23.fields.currentCryptoKey = v20;
    *(_QWORD *)&v23.fields.fakeValue = v19;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v23, 0);
    if ( v14 )
    {
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(
                                    (EquipExpMaster_o *)v14,
                                    (int32_t)Instance,
                                    this->fields.lv,
                                    0);
      *exp = this->fields.exp - m_CancellationTokenSource;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.m_CancellationTokenSource) - this->fields.exp;
        v16 = (float)*exp / (float)(LODWORD(Instance->fields.m_CancellationTokenSource) - m_CancellationTokenSource);
        goto LABEL_23;
      }
    }
LABEL_24:
    sub_1C32E7C(Instance);
  }
  v16 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_23:
  *barExp = v16;
}


System_Int32_array *UserEquipEntity__getSkillIdList(UserEquipEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x20
  long double v5; // q0
  __int64 v6; // x8
  __int64 v7; // x0
  Il2CppObject *MasterData_object; // x0
  EquipSkillMaster_o *v9; // x21
  int32_t v10; // w22
  unsigned int v11; // w28
  int32_t *i; // x27
  __int64 v13; // x23
  __int64 v14; // x24
  EquipSkillEntity_o *Entity; // x0
  EquipSkillEntity_o *v16; // x23
  _BOOL8 isUse; // x0
  unsigned int v18; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4C38760 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipSkillMaster___);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4C38760 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = sub_1C32CC8(int___TypeInfo, (unsigned int)v3->static_fields->UserEquipSkillListMax);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C83334(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C83334(v5);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v4) )
  {
LABEL_25:
    sub_1C32E7C(MasterData_object);
  }
  if ( *(int *)(v4 + 24) >= 1 )
  {
    v9 = (EquipSkillMaster_o *)MasterData_object;
    v10 = 1;
    do
    {
      v11 = v10 - 1;
      for ( i = (int32_t *)(v4 + 4LL * (v10 - 1) + 32); ; *i = -1 )
      {
        v14 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = v14;
        *(_QWORD *)&v20.fields.fakeValue = v13;
        MasterData_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v20, 0);
        if ( !v9 )
          goto LABEL_25;
        Entity = EquipSkillMaster__GetEntity(v9, (int32_t)MasterData_object, v10, 0);
        if ( !Entity )
          goto LABEL_23;
        v16 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0);
        v18 = *(_DWORD *)(v4 + 24);
        if ( isUse )
          break;
        if ( v11 >= v18 )
          goto LABEL_26;
      }
      if ( v11 >= v18 )
LABEL_26:
        sub_1C32E84(isUse);
      *i = v16->fields.skillId;
LABEL_23:
      ++v10;
    }
    while ( v10 <= *(_DWORD *)(v4 + 24) );
  }
  return (System_Int32_array *)v4;
}


int32_t UserEquipEntity__getSkillLv(UserEquipEntity_o *this, int32_t index, const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v7; // x22
  __int64 v8; // x23
  EquipExpMaster_o *v9; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4C3875E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3875E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v8 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v9 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v11, 0);
  if ( !v9 )
    goto LABEL_17;
  Instance = EquipExpMaster__GetEntity(v9, (int32_t)Instance, this->fields.lv, 0);
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
      sub_1C32E7C(Instance);
    default:
      return 0;
  }
}


System_Int32_array *UserEquipEntity__getSkillLvList(UserEquipEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v5; // x21
  __int64 v6; // x22
  EquipExpMaster_o *v7; // x20
  EquipExpEntity_o *Entity; // x19
  unsigned int max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4C3875F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3875F = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v6 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v7 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v5;
  result = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v10, 0);
  if ( !v7
    || (Entity = EquipExpMaster__GetEntity(v7, (int32_t)result, this->fields.lv, 0),
        result = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 3),
        !Entity)
    || !result )
  {
LABEL_13:
    sub_1C32E7C(result);
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[0] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[1] = Entity->fields.skillLv2, max_length <= 2) )
  {
    sub_1C32E84(result);
  }
  result->m_Items[2] = Entity->fields.skillLv3;
  return result;
}