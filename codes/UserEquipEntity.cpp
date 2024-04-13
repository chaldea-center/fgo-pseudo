void __fastcall UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA1CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42EA1CE = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall UserEquipEntity__CreatePrimaryKey(UserEquipEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall UserEquipEntity__IsNew(UserEquipEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w0
  const MethodInfo *v14; // x2
  int32_t lv; // w19
  int32_t v16; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42EA1CC & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v8, v9, v10);
    byte_42EA1CC = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId )
    return 0;
  v12 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v12;
  *(_QWORD *)&v18.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
  lv = this->fields.lv;
  v16 = v13;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  return UserEquipNewManager__IsNew(v16, lv, v14);
}


void __fastcall UserEquipEntity__SetOld(UserEquipEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x20
  __int64 v9; // x21
  int32_t v10; // w0
  const MethodInfo *v11; // x2
  int32_t lv; // w19
  int32_t v13; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42EA1CD & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v5, v6, v7);
    byte_42EA1CD = 1;
  }
  v9 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v9;
  *(_QWORD *)&v14.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v14, 0LL);
  lv = this->fields.lv;
  v13 = v10;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  UserEquipNewManager__SetOld(v13, lv, v11);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x25
  __int64 v29; // x25
  UserGameEntity_o *SelfUserGame; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v32; // x25
  __int64 v33; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x24
  WarEntity_o *Entity; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  WarEntity_o *v42; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_o *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v59; // x0
  int64_t targetId; // x20
  __int64 v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  int32_t v68; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_42EA1CA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, (_DWORD)condUsrLv, (_DWORD)maxLv, equipName);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    byte_42EA1CA = 1;
  }
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AF52C4(v29);
  SelfUserGame = **(UserGameEntity_o ***)(v29 + 184);
  if ( !SelfUserGame )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)SelfUserGame,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
  v33 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v32 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v69.fields.currentCryptoKey = v33;
  *(_QWORD *)&v69.fields.fakeValue = v32;
  SelfUserGame = (UserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69, 0LL);
  if ( !v34 )
    goto LABEL_28;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v34,
             (int32_t)SelfUserGame,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    *equipName = (System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560(
      (BattleServantConfConponent_o *)equipName,
      (System_Int32_array **)StringLiteral_1/*""*/,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    *detail = (System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560(
      (BattleServantConfConponent_o *)detail,
      (System_Int32_array **)StringLiteral_1/*""*/,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v68 = 0;
    goto LABEL_26;
  }
  v42 = Entity;
  *condUsrLv = Entity->fields.parentWarId;
  *maxLv = Entity->fields.materialParentWarId;
  name = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Entity->fields.name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(name, 0LL);
  *equipName = v44;
  sub_B5D560((BattleServantConfConponent_o *)equipName, (System_Int32_array **)v44, v45, v46, v47, v48, v49, v50);
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v42->fields.bannerId,
          0LL);
  *detail = v51;
  sub_B5D560((BattleServantConfConponent_o *)detail, (System_Int32_array **)v51, v52, v53, v54, v55, v56, v57);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_28:
    sub_B5D69C(SelfUserGame, condUsrLv);
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v61 = *(_QWORD *)&v42->fields.startType;
    targetId = v42->fields.targetId;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v61 = *(_QWORD *)&v42->fields.flag;
    targetId = (int64_t)v42->fields.emptyMessage;
  }
  if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v59);
  *(_QWORD *)&v70.fields.currentCryptoKey = v61;
  *(_QWORD *)&v70.fields.fakeValue = targetId;
  v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
LABEL_26:
  *genderImageId = v68;
}


void __fastcall UserEquipEntity__getExpInfo(
        UserEquipEntity_o *this,
        int32_t *exp,
        int32_t *lateExp,
        float *barExp,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v24; // x24
  __int64 v25; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x23
  EquipExpMaster_o *v27; // x23
  int datalist; // w27
  float v29; // s0
  __int64 v30; // x24
  __int64 v31; // x25
  __int64 v32; // x24
  __int64 v33; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42EA1CB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipExpMaster___, (_DWORD)exp, (_DWORD)lateExp, barExp);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EA1CB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipMaster___);
  v25 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v34.fields.currentCryptoKey = v25;
  *(_QWORD *)&v34.fields.fakeValue = v24;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v34, 0LL);
  if ( !v26 )
    goto LABEL_27;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v26,
                                (int32_t)Instance,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_27;
  if ( this->fields.lv < SHIDWORD(Instance->fields.saveDataMapList) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    v27 = (EquipExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v31 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v35.fields.currentCryptoKey = v31;
      *(_QWORD *)&v35.fields.fakeValue = v30;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v35, 0LL);
      if ( !v27 )
        goto LABEL_27;
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(v27, (int32_t)Instance, this->fields.lv - 1, 0LL);
      if ( !Instance )
        goto LABEL_27;
      datalist = (int)Instance->fields.datalist;
    }
    else
    {
      datalist = 0;
    }
    v33 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
    v32 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v36.fields.currentCryptoKey = v33;
    *(_QWORD *)&v36.fields.fakeValue = v32;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v36, 0LL);
    if ( v27 )
    {
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(v27, (int32_t)Instance, this->fields.lv, 0LL);
      *exp = this->fields.exp - datalist;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
        v29 = (float)*exp / (float)(LODWORD(Instance->fields.datalist) - datalist);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_B5D69C(Instance, v22);
  }
  v29 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_26:
  *barExp = v29;
}


System_Int32_array *__fastcall UserEquipEntity__getSkillIdList(UserEquipEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BalanceConfig_c *v17; // x0
  __int64 v18; // x1
  System_Int32_array *v19; // x20
  __int64 v20; // x21
  __int64 v21; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EquipSkillMaster_o *v23; // x21
  int32_t v24; // w22
  unsigned int v25; // w28
  int32_t *i; // x27
  __int64 v27; // x23
  __int64 v28; // x24
  EquipSkillEntity_o *Entity; // x0
  EquipSkillEntity_o *v30; // x23
  _BOOL8 isUse; // x0
  il2cpp_array_size_t max_length; // w8
  __int64 v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42EA1C9 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipSkillMaster___, v5, v6, v7);
    sub_B5D5C4(&int___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14, v15, v16);
    byte_42EA1C9 = 1;
  }
  v17 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  v19 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)v17->static_fields->UserEquipSkillListMax);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v21 = **(_QWORD **)(v20 + 192);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AF52C4(v21);
  MasterData_WarQuestSelectionMaster = **(WarQuestSelectionMaster_o ***)(v21 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v19) )
  {
LABEL_27:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, v18);
  }
  if ( (int)v19->max_length >= 1 )
  {
    v23 = (EquipSkillMaster_o *)MasterData_WarQuestSelectionMaster;
    v24 = 1;
    do
    {
      v25 = v24 - 1;
      for ( i = &v19->m_Items[v24]; ; *i = -1 )
      {
        v28 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v27 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v35.fields.currentCryptoKey = v28;
        *(_QWORD *)&v35.fields.fakeValue = v27;
        MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                            v35,
                                                                            0LL);
        if ( !v23 )
          goto LABEL_27;
        Entity = EquipSkillMaster__GetEntity(v23, (int32_t)MasterData_WarQuestSelectionMaster, v24, 0LL);
        if ( !Entity )
          goto LABEL_25;
        v30 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0LL);
        max_length = v19->max_length;
        if ( isUse )
          break;
        if ( v25 >= max_length )
          goto LABEL_28;
      }
      if ( v25 >= max_length )
      {
LABEL_28:
        v34 = sub_B5D6C8(isUse);
        sub_B5D668(v34, 0LL);
      }
      *i = v30->fields.skillId;
LABEL_25:
      ++v24;
    }
    while ( v24 <= (signed int)v19->max_length );
  }
  return v19;
}


int32_t __fastcall UserEquipEntity__getSkillLv(UserEquipEntity_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  void *Instance; // x0
  __int64 v13; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x22
  __int64 v16; // x23
  EquipExpMaster_o *v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_42EA1C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipExpMaster___, index, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42EA1C7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v16 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v17 = (EquipExpMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v16;
  *(_QWORD *)&v19.fields.fakeValue = v15;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v19, 0LL);
  if ( !v17 )
    goto LABEL_18;
  Instance = EquipExpMaster__GetEntity(v17, (int32_t)Instance, this->fields.lv, 0LL);
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
      sub_B5D69C(Instance, v13);
    default:
      return 0;
  }
}


System_Int32_array *__fastcall UserEquipEntity__getSkillLvList(UserEquipEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Int32_array *result; // x0
  __int64 v15; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x21
  __int64 v18; // x22
  EquipExpMaster_o *v19; // x20
  EquipExpEntity_o *Entity; // x19
  il2cpp_array_size_t max_length; // w8
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42EA1C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EquipExpMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EA1C8 = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)result,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v18 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v19 = (EquipExpMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v18;
  *(_QWORD *)&v23.fields.fakeValue = v17;
  result = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  if ( !v19
    || (Entity = EquipExpMaster__GetEntity(v19, (int32_t)result, this->fields.lv, 0LL),
        result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL),
        !Entity)
    || !result )
  {
LABEL_14:
    sub_B5D69C(result, v15);
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = Entity->fields.skillLv2, max_length <= 2) )
  {
    v22 = sub_B5D6C8(result);
    sub_B5D668(v22, 0LL);
  }
  result->m_Items[3] = Entity->fields.skillLv3;
  return result;
}