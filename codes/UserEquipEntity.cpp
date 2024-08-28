void __fastcall UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A206C9 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_long___ctor__, method);
    byte_4A206C9 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30F85A8 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserEquipEntity__CreatePrimaryKey(UserEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall UserEquipEntity__IsNew(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  int32_t lv; // w19
  int32_t v9; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4A206C7 & 1) == 0 )
  {
    sub_1B715CC(&NetworkManager_TypeInfo, method);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B715CC(&UserEquipNewManager_TypeInfo, v4);
    byte_4A206C7 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId )
    return 0;
  v6 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v11, 0LL);
  lv = this->fields.lv;
  v9 = v7;
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  return UserEquipNewManager__IsNew(v9, lv, 0LL);
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

  if ( (byte_4A206C8 & 1) == 0 )
  {
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_1B715CC(&UserEquipNewManager_TypeInfo, v3);
    byte_4A206C8 = 1;
  }
  v5 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v5;
  *(_QWORD *)&v9.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v9, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x0
  __int64 v19; // x0
  UserGameEntity_o *SelfUserGame; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v22; // x25
  __int64 v23; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x24
  Il2CppObject *Entity; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *klass; // x22
  System_String_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  const MethodInfo *v36; // x0
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v38; // x0
  void *monitor; // x20
  Il2CppClass *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  if ( (byte_4A206C5 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EquipMaster___, condUsrLv);
    sub_1B715CC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v13);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    sub_1B715CC(&StringLiteral_1/*""*/, v17);
    byte_4A206C5 = 1;
  }
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BC34A8(v18);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1BC34A8(v19);
  SelfUserGame = **(UserGameEntity_o ***)(v19 + 184);
  if ( !SelfUserGame )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)SelfUserGame,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EquipMaster___);
  v23 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v23;
  *(_QWORD *)&v44.fields.fakeValue = v22;
  SelfUserGame = (UserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v44, 0LL);
  if ( !v24 )
    goto LABEL_25;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v24,
             (int32_t)SelfUserGame,
             (const MethodInfo_30F8760 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    *equipName = (System_String_o *)StringLiteral_1/*""*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)equipName, (int32_t)StringLiteral_1/*""*/, v26, v27);
    *detail = (System_String_o *)StringLiteral_1/*""*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)detail, (int32_t)StringLiteral_1/*""*/, v41, v42);
    v43 = 0;
    goto LABEL_23;
  }
  v28 = Entity;
  *condUsrLv = (int32_t)Entity[3].monitor;
  *maxLv = HIDWORD(Entity[3].monitor);
  klass = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Entity[2].klass;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46344112(klass, 0LL);
  *equipName = v30;
  sub_1B71570((ServantStatusBattleListViewItem_o *)equipName, (int32_t)v30, v31, v32);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46344112(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v28[3].klass,
          0LL);
  *detail = v33;
  sub_1B71570((ServantStatusBattleListViewItem_o *)detail, (int32_t)v33, v34, v35);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(v36);
  if ( !SelfUserGame )
LABEL_25:
    sub_1B71828(SelfUserGame, condUsrLv);
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v40 = v28[5].klass;
    monitor = v28[5].monitor;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v40 = v28[4].klass;
    monitor = v28[4].monitor;
  }
  if ( !v38->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v38);
  *(_QWORD *)&v45.fields.currentCryptoKey = v40;
  *(_QWORD *)&v45.fields.fakeValue = monitor;
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v45, 0LL);
LABEL_23:
  *genderImageId = v43;
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

  if ( (byte_4A206C6 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EquipExpMaster___, exp);
    sub_1B715CC(&Method_DataManager_GetMasterData_EquipMaster___, v9);
    sub_1B715CC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v10);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4A206C6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EquipMaster___);
  v17 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v17;
  *(_QWORD *)&v26.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v26, 0LL);
  if ( !v18 )
    goto LABEL_24;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                v18,
                                (int32_t)Instance,
                                (const MethodInfo_30F8760 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_24;
  if ( this->fields.lv < SHIDWORD(Instance->fields.masterDataBytes) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_24;
    v19 = DataManager__GetMasterData_object_(
            Instance,
            (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v23 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = v23;
      *(_QWORD *)&v27.fields.fakeValue = v22;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v27, 0LL);
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
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v28, 0LL);
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
    sub_1B71828(Instance, v14);
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
  __int64 v10; // x8
  __int64 v11; // x0
  Il2CppObject *MasterData_object; // x0
  EquipSkillMaster_o *v13; // x21
  int32_t v14; // w22
  unsigned int v15; // w28
  int32_t *i; // x27
  __int64 v17; // x23
  __int64 v18; // x24
  EquipSkillEntity_o *Entity; // x0
  EquipSkillEntity_o *v20; // x23
  _BOOL8 isUse; // x0
  __int64 v22; // x1
  il2cpp_array_size_t max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A206C4 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&Method_DataManager_GetMasterData_EquipSkillMaster___, v3);
    sub_1B715CC(&int___TypeInfo, v4);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4A206C4 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v9 = (System_Int32_array *)sub_1B71674(int___TypeInfo, (unsigned int)v7->static_fields->UserEquipSkillListMax);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BC34A8(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BC34A8(v11);
  MasterData_object = **(Il2CppObject ***)(v11 + 184);
  if ( !MasterData_object
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)MasterData_object,
                              (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v9) )
  {
LABEL_25:
    sub_1B71828(MasterData_object, v8);
  }
  if ( (int)v9->max_length >= 1 )
  {
    v13 = (EquipSkillMaster_o *)MasterData_object;
    v14 = 1;
    do
    {
      v15 = v14 - 1;
      for ( i = &v9->m_Items[v14]; ; *i = -1 )
      {
        v18 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v17 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v25.fields.currentCryptoKey = v18;
        *(_QWORD *)&v25.fields.fakeValue = v17;
        MasterData_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(
                                              v25,
                                              0LL);
        if ( !v13 )
          goto LABEL_25;
        Entity = EquipSkillMaster__GetEntity(v13, (int32_t)MasterData_object, v14, 0LL);
        if ( !Entity )
          goto LABEL_23;
        v20 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0LL);
        max_length = v9->max_length;
        if ( isUse )
          break;
        if ( v15 >= max_length )
          goto LABEL_26;
      }
      if ( v15 >= max_length )
LABEL_26:
        sub_1B71830(isUse, v22);
      *i = v20->fields.skillId;
LABEL_23:
      ++v14;
    }
    while ( v14 <= (signed int)v9->max_length );
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

  if ( (byte_4A206C2 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&index);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A206C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v11 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v12 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v11;
  *(_QWORD *)&v14.fields.fakeValue = v10;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v14, 0LL);
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
      sub_1B71828(Instance, v8);
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

  if ( (byte_4A206C3 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EquipExpMaster___, method);
    sub_1B715CC(&int___TypeInfo, v3);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A206C3 = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_13;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)result,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v10 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v11 = (EquipExpMaster_o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  result = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v14, 0LL);
  if ( !v11
    || (Entity = EquipExpMaster__GetEntity(v11, (int32_t)result, this->fields.lv, 0LL),
        result = (System_Int32_array *)sub_1B71674(int___TypeInfo, 3LL),
        !Entity)
    || !result )
  {
LABEL_13:
    sub_1B71828(result, v7);
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = Entity->fields.skillLv2, max_length <= 2) )
  {
    sub_1B71830(result, v7);
  }
  result->m_Items[3] = Entity->fields.skillLv3;
  return result;
}