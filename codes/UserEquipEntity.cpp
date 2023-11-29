void __fastcall UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FAB28 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_long___ctor__, method);
    byte_40FAB28 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_266F28C *)Method_DataEntityBase_long___ctor__);
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

  if ( (byte_40FAB26 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v4);
    byte_40FAB26 = 1;
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
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
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

  if ( (byte_40FAB27 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    sub_B16FFC(&UserEquipNewManager_TypeInfo, v3);
    byte_40FAB27 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
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
  DataManager_o *v20; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v22; // x25
  __int64 v23; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x24
  int32_t v25; // w0
  WarEntity_o *Entity; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  WarEntity_o *v33; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UserGameEntity_o *SelfUserGame; // x0
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v51; // x0
  __int64 v52; // x20
  struct System_String_o *emptyMessage; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  int32_t v60; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_40FAB24 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, condUsrLv);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    sub_B16FFC(&StringLiteral_1, v17);
    byte_40FAB24 = 1;
  }
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v19 = **(_QWORD **)(v18 + 192);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AAFCFC(v19);
  v20 = **(DataManager_o ***)(v19 + 184);
  if ( !v20 )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         v20,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___);
  v23 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v23;
  *(_QWORD *)&v61.fields.fakeValue = v22;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
  if ( !v24 )
    goto LABEL_28;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v24,
             v25,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    *equipName = (System_String_o *)StringLiteral_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)equipName,
      (System_Int32_array **)StringLiteral_1,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    *detail = (System_String_o *)StringLiteral_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)detail,
      (System_Int32_array **)StringLiteral_1,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
    v60 = 0;
    goto LABEL_26;
  }
  v33 = Entity;
  *condUsrLv = Entity->fields.bannerId;
  *maxLv = Entity->fields.priority;
  name = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Entity->fields.name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(name, 0LL);
  *equipName = v35;
  sub_B16F98((BattleServantConfConponent_o *)equipName, (System_Int32_array **)v35, v36, v37, v38, v39, v40, v41);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(
          (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)v33->fields.longName,
          0LL);
  *detail = v42;
  sub_B16F98((BattleServantConfConponent_o *)detail, (System_Int32_array **)v42, v43, v44, v45, v46, v47, v48);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_28:
    sub_B170D4();
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    emptyMessage = v33->fields.emptyMessage;
    v52 = *(_QWORD *)&v33->fields.startType;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    emptyMessage = *(struct System_String_o **)&v33->fields.parentWarId;
    v52 = *(_QWORD *)&v33->fields.flag;
  }
  if ( (BYTE3(v51->vtable._0_Equals.methodPtr) & 4) != 0 && !v51->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v51);
  *(_QWORD *)&v62.fields.currentCryptoKey = emptyMessage;
  *(_QWORD *)&v62.fields.fakeValue = v52;
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
LABEL_26:
  *genderImageId = v60;
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v15; // x24
  __int64 v16; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x23
  int32_t v18; // w0
  WarEntity_o *Entity; // x0
  WebViewManager_o *v20; // x0
  EquipExpMaster_o *v21; // x23
  int32_t v22; // w27
  float v23; // s0
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t v26; // w0
  EquipExpEntity_o *v27; // x0
  __int64 v28; // x24
  __int64 v29; // x25
  int32_t v30; // w0
  EquipExpEntity_o *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_40FAB25 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipExpMaster___, exp);
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FAB25 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipMaster___);
  v16 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v32.fields.currentCryptoKey = v16;
  *(_QWORD *)&v32.fields.fakeValue = v15;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
  if ( !v17 )
    goto LABEL_27;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v17,
             v18,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_27;
  if ( this->fields.lv < Entity->fields.priority )
  {
    v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v20 )
      goto LABEL_27;
    v21 = (EquipExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v20,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v25 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v33.fields.currentCryptoKey = v25;
      *(_QWORD *)&v33.fields.fakeValue = v24;
      v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v33, 0LL);
      if ( !v21 )
        goto LABEL_27;
      v27 = EquipExpMaster__GetEntity(v21, v26, this->fields.lv - 1, 0LL);
      if ( !v27 )
        goto LABEL_27;
      v22 = v27->fields.exp;
    }
    else
    {
      v22 = 0;
    }
    v29 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
    v28 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v34.fields.currentCryptoKey = v29;
    *(_QWORD *)&v34.fields.fakeValue = v28;
    v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v34, 0LL);
    if ( v21 )
    {
      v31 = EquipExpMaster__GetEntity(v21, v30, this->fields.lv, 0LL);
      *exp = this->fields.exp - v22;
      if ( v31 )
      {
        *lateExp = v31->fields.exp - this->fields.exp;
        v23 = (float)*exp / (float)(v31->fields.exp - v22);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_B170D4();
  }
  v23 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_26:
  *barExp = v23;
}


System_Int32_array *__fastcall UserEquipEntity__getSkillIdList(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0
  System_Int32_array *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x21
  DataManager_o *v12; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EquipSkillMaster_o *v14; // x21
  int32_t v15; // w22
  unsigned int v16; // w28
  int32_t *i; // x27
  __int64 v18; // x23
  __int64 v19; // x24
  int32_t v20; // w0
  EquipSkillEntity_o *Entity; // x0
  EquipSkillEntity_o *v22; // x23
  _BOOL8 isUse; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  il2cpp_array_size_t max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_40FAB23 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipSkillMaster___, v4);
    sub_B16FFC(&int___TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_40FAB23 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  v9 = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)v8->static_fields->UserEquipSkillListMax, v2);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AAFCFC(v11);
  v12 = **(DataManager_o ***)(v11 + 184);
  if ( !v12
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v12,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v9) )
  {
LABEL_27:
    sub_B170D4();
  }
  if ( (int)v9->max_length >= 1 )
  {
    v14 = (EquipSkillMaster_o *)MasterData_WarQuestSelectionMaster;
    v15 = 1;
    do
    {
      v16 = v15 - 1;
      for ( i = &v9->m_Items[v15]; ; *i = -1 )
      {
        v19 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v18 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v28.fields.currentCryptoKey = v19;
        *(_QWORD *)&v28.fields.fakeValue = v18;
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28, 0LL);
        if ( !v14 )
          goto LABEL_27;
        Entity = EquipSkillMaster__GetEntity(v14, v20, v15, 0LL);
        if ( !Entity )
          goto LABEL_25;
        v22 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0LL);
        max_length = v9->max_length;
        if ( isUse )
          break;
        if ( v16 >= max_length )
          goto LABEL_28;
      }
      if ( v16 >= max_length )
      {
LABEL_28:
        sub_B17100(isUse, v24, v25);
        sub_B170A0();
      }
      *i = v22->fields.skillId;
LABEL_25:
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v9; // x22
  __int64 v10; // x23
  EquipExpMaster_o *v11; // x21
  int32_t v12; // w0
  EquipExpEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_40FAB21 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipExpMaster___, *(_QWORD *)&index);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FAB21 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v10 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v11 = (EquipExpMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v15.fields.currentCryptoKey = v10;
  *(_QWORD *)&v15.fields.fakeValue = v9;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
  if ( !v11 )
    goto LABEL_18;
  Entity = EquipExpMaster__GetEntity(v11, v12, this->fields.lv, 0LL);
  switch ( index )
  {
    case 2:
      if ( !Entity )
        goto LABEL_18;
      return Entity->fields.skillLv3;
    case 1:
      if ( !Entity )
        goto LABEL_18;
      return Entity->fields.skillLv2;
    case 0:
      if ( Entity )
        return Entity->fields.skillLv1;
LABEL_18:
      sub_B170D4();
    default:
      return 0;
  }
}


System_Int32_array *__fastcall UserEquipEntity__getSkillLvList(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  EquipExpMaster_o *v10; // x20
  int32_t v11; // w0
  EquipExpEntity_o *Entity; // x19
  __int64 v13; // x2
  System_Int32_array *result; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  il2cpp_array_size_t max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40FAB22 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EquipExpMaster___, method);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FAB22 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v9 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v10 = (EquipExpMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v9;
  *(_QWORD *)&v18.fields.fakeValue = v8;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v18, 0LL);
  if ( !v10
    || (Entity = EquipExpMaster__GetEntity(v10, v11, this->fields.lv, 0LL),
        result = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, v13),
        !Entity)
    || !result )
  {
LABEL_14:
    sub_B170D4();
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = Entity->fields.skillLv2, max_length <= 2) )
  {
    sub_B17100(result, v15, v16);
    sub_B170A0();
  }
  result->m_Items[3] = Entity->fields.skillLv3;
  return result;
}