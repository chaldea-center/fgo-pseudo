void __fastcall UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD6B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_long___ctor__);
    byte_4A5BD6B = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_311D77C *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserEquipEntity__CreatePrimaryKey(UserEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall UserEquipEntity__IsNew(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t lv; // w19
  int32_t v7; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A5BD69 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5BD69 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId )
    return 0;
  v4 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
  lv = this->fields.lv;
  v7 = v5;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  return UserEquipNewManager__IsNew(v7, lv, 0LL);
}


void __fastcall UserEquipEntity__SetOld(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  int32_t lv; // w19
  int32_t v7; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  if ( (byte_4A5BD6A & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&UserEquipNewManager_TypeInfo);
    byte_4A5BD6A = 1;
  }
  v4 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v8.fields.currentCryptoKey = v4;
  *(_QWORD *)&v8.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v8, 0LL);
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
  __int64 v13; // x0
  __int64 v14; // x0
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v17; // x25
  __int64 v18; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x24
  Il2CppObject *Entity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *v23; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  System_String_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  const MethodInfo *v31; // x0
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v33; // x0
  void *monitor; // x20
  Il2CppClass *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A5BD67 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1B885B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BD67 = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BDA48C(v13);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BDA48C(v14);
  SelfUserGame = **(UserGameEntity_o ***)(v14 + 184);
  if ( !SelfUserGame )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SelfUserGame,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipMaster___);
  v18 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v18;
  *(_QWORD *)&v39.fields.fakeValue = v17;
  SelfUserGame = (UserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v39, 0LL);
  if ( !v19 )
    goto LABEL_25;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v19,
             (int32_t)SelfUserGame,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    *equipName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)equipName, (int32_t)StringLiteral_1/*""*/, v21, v22);
    *detail = (System_String_o *)StringLiteral_1/*""*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)detail, (int32_t)StringLiteral_1/*""*/, v36, v37);
    v38 = 0;
    goto LABEL_23;
  }
  v23 = Entity;
  *condUsrLv = (int32_t)Entity[3].monitor;
  *maxLv = HIDWORD(Entity[3].monitor);
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Entity[2].klass;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(klass, 0LL);
  *equipName = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)equipName, (int32_t)v25, v26, v27);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v23[3].klass,
          0LL);
  *detail = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)detail, (int32_t)v28, v29, v30);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(v31);
  if ( !SelfUserGame )
LABEL_25:
    sub_1B8880C(SelfUserGame, condUsrLv);
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v35 = v23[5].klass;
    monitor = v23[5].monitor;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v35 = v23[4].klass;
    monitor = v23[4].monitor;
  }
  if ( !v33->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v33);
  *(_QWORD *)&v40.fields.currentCryptoKey = v35;
  *(_QWORD *)&v40.fields.fakeValue = monitor;
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
LABEL_23:
  *genderImageId = v38;
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

  if ( (byte_4A5BD68 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1B885B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD68 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipMaster___);
  v13 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
  if ( !v14 )
    goto LABEL_24;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                v14,
                                (int32_t)Instance,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_24;
  if ( this->fields.lv < SHIDWORD(Instance->fields.masterDataBytes) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    v15 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v19 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = v19;
      *(_QWORD *)&v23.fields.fakeValue = v18;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
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
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
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
    sub_1B8880C(Instance, v10);
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
  __int64 v18; // x1
  il2cpp_array_size_t max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4A5BD66 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipSkillMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5BD66 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)v3->static_fields->UserEquipSkillListMax);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v5) )
  {
LABEL_25:
    sub_1B8880C(MasterData_object, v4);
  }
  if ( (int)v5->max_length >= 1 )
  {
    v9 = (EquipSkillMaster_o *)MasterData_object;
    v10 = 1;
    do
    {
      v11 = v10 - 1;
      for ( i = &v5->m_Items[v10]; ; *i = -1 )
      {
        v14 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v21.fields.currentCryptoKey = v14;
        *(_QWORD *)&v21.fields.fakeValue = v13;
        MasterData_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                              v21,
                                              0LL);
        if ( !v9 )
          goto LABEL_25;
        Entity = EquipSkillMaster__GetEntity(v9, (int32_t)MasterData_object, v10, 0LL);
        if ( !Entity )
          goto LABEL_23;
        v16 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0LL);
        max_length = v5->max_length;
        if ( isUse )
          break;
        if ( v11 >= max_length )
          goto LABEL_26;
      }
      if ( v11 >= max_length )
LABEL_26:
        sub_1B88814(isUse, v18);
      *i = v16->fields.skillId;
LABEL_23:
      ++v10;
    }
    while ( v10 <= (signed int)v5->max_length );
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

  if ( (byte_4A5BD64 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v9 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v10 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
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
      sub_1B8880C(Instance, v6);
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

  if ( (byte_4A5BD65 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5BD65 = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v7 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v8 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v7;
  *(_QWORD *)&v11.fields.fakeValue = v6;
  result = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
  if ( !v8
    || (Entity = EquipExpMaster__GetEntity(v8, (int32_t)result, this->fields.lv, 0LL),
        result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 3LL),
        !Entity)
    || !result )
  {
LABEL_13:
    sub_1B8880C(result, v4);
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = Entity->fields.skillLv2, max_length <= 2) )
  {
    sub_1B88814(result, v4);
  }
  result->m_Items[3] = Entity->fields.skillLv3;
  return result;
}