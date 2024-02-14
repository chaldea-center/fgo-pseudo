void __fastcall UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4215BC7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_long___ctor__, method);
    byte_4215BC7 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_2669AD8 *)Method_DataEntityBase_long___ctor__);
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
  const MethodInfo *v8; // x2
  int32_t lv; // w19
  int32_t v10; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4215BC5 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B0D8A4(&UserEquipNewManager_TypeInfo, v4);
    byte_4215BC5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId )
    return 0;
  v6 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v6;
  *(_QWORD *)&v12.fields.fakeValue = v5;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v12, 0LL);
  lv = this->fields.lv;
  v10 = v7;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  return UserEquipNewManager__IsNew(v10, lv, v8);
}


void __fastcall UserEquipEntity__SetOld(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  const MethodInfo *v7; // x2
  int32_t lv; // w19
  int32_t v9; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4215BC6 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B0D8A4(&UserEquipNewManager_TypeInfo, v3);
    byte_4215BC6 = 1;
  }
  v5 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v10, 0LL);
  lv = this->fields.lv;
  v9 = v6;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  UserEquipNewManager__SetOld(v9, lv, v7);
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
  __int64 v18; // x25
  __int64 v19; // x25
  UserGameEntity_o *SelfUserGame; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x25
  __int64 v23; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x24
  WarEntity_o *Entity; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WarEntity_o *v32; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_o *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v49; // x0
  __int64 v50; // x20
  struct System_String_o *emptyMessage; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int32_t v58; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4215BC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipMaster___, condUsrLv);
    sub_B0D8A4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    sub_B0D8A4(&StringLiteral_1/*""*/, v17);
    byte_4215BC3 = 1;
  }
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v19 = **(_QWORD **)(v18 + 192);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AA65A4(v19);
  SelfUserGame = **(UserGameEntity_o ***)(v19 + 184);
  if ( !SelfUserGame )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)SelfUserGame,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipMaster___);
  v23 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v23;
  *(_QWORD *)&v59.fields.fakeValue = v22;
  SelfUserGame = (UserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v59, 0LL);
  if ( !v24 )
    goto LABEL_28;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v24,
             (int32_t)SelfUserGame,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    *equipName = (System_String_o *)StringLiteral_1/*""*/;
    sub_B0D840(
      (BattleServantConfConponent_o *)equipName,
      (System_Int32_array **)StringLiteral_1/*""*/,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    *detail = (System_String_o *)StringLiteral_1/*""*/;
    sub_B0D840(
      (BattleServantConfConponent_o *)detail,
      (System_Int32_array **)StringLiteral_1/*""*/,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v58 = 0;
    goto LABEL_26;
  }
  v32 = Entity;
  *condUsrLv = Entity->fields.bannerId;
  *maxLv = Entity->fields.priority;
  name = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Entity->fields.name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(name, 0LL);
  *equipName = v34;
  sub_B0D840((BattleServantConfConponent_o *)equipName, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v32->fields.longName,
          0LL);
  *detail = v41;
  sub_B0D840((BattleServantConfConponent_o *)detail, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_28:
    sub_B0D97C(SelfUserGame);
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    emptyMessage = v32->fields.emptyMessage;
    v50 = *(_QWORD *)&v32->fields.startType;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    emptyMessage = *(struct System_String_o **)&v32->fields.parentWarId;
    v50 = *(_QWORD *)&v32->fields.flag;
  }
  if ( (BYTE3(v49->vtable._0_Equals.methodPtr) & 4) != 0 && !v49->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v49);
  *(_QWORD *)&v60.fields.currentCryptoKey = emptyMessage;
  *(_QWORD *)&v60.fields.fakeValue = v50;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v60, 0LL);
LABEL_26:
  *genderImageId = v58;
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x24
  __int64 v16; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x23
  EquipExpMaster_o *v18; // x23
  int datalist; // w27
  float v20; // s0
  __int64 v21; // x24
  __int64 v22; // x25
  __int64 v23; // x24
  __int64 v24; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4215BC4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipExpMaster___, exp);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4215BC4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipMaster___);
  v16 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v16;
  *(_QWORD *)&v25.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v25, 0LL);
  if ( !v17 )
    goto LABEL_27;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v17,
                                (int32_t)Instance,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_27;
  if ( this->fields.lv < SHIDWORD(Instance->fields.saveNameList) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    v18 = (EquipExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v22 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v21 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v26.fields.currentCryptoKey = v22;
      *(_QWORD *)&v26.fields.fakeValue = v21;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v26, 0LL);
      if ( !v18 )
        goto LABEL_27;
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(v18, (int32_t)Instance, this->fields.lv - 1, 0LL);
      if ( !Instance )
        goto LABEL_27;
      datalist = (int)Instance->fields.datalist;
    }
    else
    {
      datalist = 0;
    }
    v24 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v27.fields.currentCryptoKey = v24;
    *(_QWORD *)&v27.fields.fakeValue = v23;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v27, 0LL);
    if ( v18 )
    {
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(v18, (int32_t)Instance, this->fields.lv, 0LL);
      *exp = this->fields.exp - datalist;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
        v20 = (float)*exp / (float)(LODWORD(Instance->fields.datalist) - datalist);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_B0D97C(Instance);
  }
  v20 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_26:
  *barExp = v20;
}


System_Int32_array *__fastcall UserEquipEntity__getSkillIdList(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  System_Int32_array *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EquipSkillMaster_o *v12; // x21
  int32_t v13; // w22
  unsigned int v14; // w28
  int32_t *i; // x27
  __int64 v16; // x23
  __int64 v17; // x24
  EquipSkillEntity_o *Entity; // x0
  EquipSkillEntity_o *v19; // x23
  _BOOL8 isUse; // x0
  il2cpp_array_size_t max_length; // w8
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4215BC2 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipSkillMaster___, v3);
    sub_B0D8A4(&int___TypeInfo, v4);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    byte_4215BC2 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, (unsigned int)v7->static_fields->UserEquipSkillListMax);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v10 = **(_QWORD **)(v9 + 192);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AA65A4(v10);
  MasterData_WarQuestSelectionMaster = **(WarQuestSelectionMaster_o ***)(v10 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v8) )
  {
LABEL_27:
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
  if ( (int)v8->max_length >= 1 )
  {
    v12 = (EquipSkillMaster_o *)MasterData_WarQuestSelectionMaster;
    v13 = 1;
    do
    {
      v14 = v13 - 1;
      for ( i = &v8->m_Items[v13]; ; *i = -1 )
      {
        v17 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v16 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v24.fields.currentCryptoKey = v17;
        *(_QWORD *)&v24.fields.fakeValue = v16;
        MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                            v24,
                                                                            0LL);
        if ( !v12 )
          goto LABEL_27;
        Entity = EquipSkillMaster__GetEntity(v12, (int32_t)MasterData_WarQuestSelectionMaster, v13, 0LL);
        if ( !Entity )
          goto LABEL_25;
        v19 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0LL);
        max_length = v8->max_length;
        if ( isUse )
          break;
        if ( v14 >= max_length )
          goto LABEL_28;
      }
      if ( v14 >= max_length )
      {
LABEL_28:
        v23 = sub_B0D9A8(isUse);
        sub_B0D948(v23, 0LL);
      }
      *i = v19->fields.skillId;
LABEL_25:
      ++v13;
    }
    while ( v13 <= (signed int)v8->max_length );
  }
  return v8;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall UserEquipEntity__getSkillLv(UserEquipEntity_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  void *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  EquipExpMaster_o *v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4215BC0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&index);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4215BC0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v10 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v11 = (EquipExpMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v13, 0LL);
  if ( !v11 )
    goto LABEL_18;
  Instance = EquipExpMaster__GetEntity(v11, (int32_t)Instance, this->fields.lv, 0LL);
  switch ( index )
  {
    case 2:
      if ( !Instance )
        goto LABEL_18;
      return *((_DWORD *)Instance + 9);
    case 1:
      if ( !Instance )
        goto LABEL_18;
      return *((_DWORD *)Instance + 8);
    case 0:
      if ( Instance )
        return *((_DWORD *)Instance + 7);
LABEL_18:
      sub_B0D97C(Instance);
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  EquipExpMaster_o *v10; // x20
  EquipExpEntity_o *Entity; // x19
  il2cpp_array_size_t max_length; // w8
  __int64 v13; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4215BC1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EquipExpMaster___, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4215BC1 = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)result,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v9 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v10 = (EquipExpMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  result = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v14, 0LL);
  if ( !v10
    || (Entity = EquipExpMaster__GetEntity(v10, (int32_t)result, this->fields.lv, 0LL),
        result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL),
        !Entity)
    || !result )
  {
LABEL_14:
    sub_B0D97C(result);
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = Entity->fields.skillLv2, max_length <= 2) )
  {
    v13 = sub_B0D9A8(result);
    sub_B0D948(v13, 0LL);
  }
  result->m_Items[3] = Entity->fields.skillLv3;
  return result;
}