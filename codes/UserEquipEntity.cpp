void __fastcall UserEquipEntity___ctor(UserEquipEntity_o *this, const MethodInfo *method)
{
  if ( (byte_435339D & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_long___ctor__);
    byte_435339D = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_21C0344 *)Method_DataEntityBase_long___ctor__);
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
  const MethodInfo *v6; // x2
  int32_t lv; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_435339B & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&UserEquipNewManager_TypeInfo);
    byte_435339B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  if ( NetworkManager__get_UserId(0LL) != this->fields.userId )
    return 0;
  v4 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v4;
  *(_QWORD *)&v10.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v10, 0LL);
  lv = this->fields.lv;
  v8 = v5;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  return UserEquipNewManager__IsNew(v8, lv, v6);
}


void __fastcall UserEquipEntity__SetOld(UserEquipEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x21
  int32_t v5; // w0
  const MethodInfo *v6; // x2
  int32_t lv; // w19
  int32_t v8; // w20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_435339C & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&UserEquipNewManager_TypeInfo);
    byte_435339C = 1;
  }
  v4 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v4;
  *(_QWORD *)&v9.fields.fakeValue = v3;
  v5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v9, 0LL);
  lv = this->fields.lv;
  v8 = v5;
  if ( (BYTE3(UserEquipNewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserEquipNewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  }
  UserEquipNewManager__SetOld(v8, lv, v6);
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
  __int64 v13; // x25
  __int64 v14; // x25
  UserGameEntity_o *SelfUserGame; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x25
  __int64 v18; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x24
  WarEntity_o *Entity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WarEntity_o *v27; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *name; // x22
  System_String_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_o *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int32_t genderType; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v44; // x0
  int64_t targetId; // x20
  __int64 v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  int32_t v53; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  if ( (byte_4353399 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B70694(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353399 = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v14 = **(_QWORD **)(v13 + 192);
  if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
    sub_B08394(v14);
  SelfUserGame = **(UserGameEntity_o ***)(v14 + 184);
  if ( !SelfUserGame )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)SelfUserGame,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EquipMaster___);
  v18 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v54.fields.currentCryptoKey = v18;
  *(_QWORD *)&v54.fields.fakeValue = v17;
  SelfUserGame = (UserGameEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v54, 0LL);
  if ( !v19 )
    goto LABEL_28;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v19,
             (int32_t)SelfUserGame,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
  {
    *condUsrLv = 0;
    *maxLv = 0;
    *equipName = (System_String_o *)StringLiteral_1/*""*/;
    sub_B70630(
      (BattleServantConfConponent_o *)equipName,
      (System_Int32_array **)StringLiteral_1/*""*/,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    *detail = (System_String_o *)StringLiteral_1/*""*/;
    sub_B70630(
      (BattleServantConfConponent_o *)detail,
      (System_Int32_array **)StringLiteral_1/*""*/,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    v53 = 0;
    goto LABEL_26;
  }
  v27 = Entity;
  *condUsrLv = Entity->fields.parentWarId;
  *maxLv = Entity->fields.materialParentWarId;
  name = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)Entity->fields.name;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45218448(name, 0LL);
  *equipName = v29;
  sub_B70630((BattleServantConfConponent_o *)equipName, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45218448(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)&v27->fields.bannerId,
          0LL);
  *detail = v36;
  sub_B70630((BattleServantConfConponent_o *)detail, (System_Int32_array **)v36, v37, v38, v39, v40, v41, v42);
  *genderImageId = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_28:
    sub_B7076C(SelfUserGame, condUsrLv);
  genderType = SelfUserGame->fields.genderType;
  if ( genderType == 2 )
  {
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v46 = *(_QWORD *)&v27->fields.startType;
    targetId = v27->fields.targetId;
  }
  else
  {
    if ( genderType != 1 )
      return;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v46 = *(_QWORD *)&v27->fields.flag;
    targetId = (int64_t)v27->fields.emptyMessage;
  }
  if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v44);
  *(_QWORD *)&v55.fields.currentCryptoKey = v46;
  *(_QWORD *)&v55.fields.fakeValue = targetId;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v55, 0LL);
LABEL_26:
  *genderImageId = v53;
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x24
  __int64 v13; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x23
  EquipExpMaster_o *v15; // x23
  int datalist; // w27
  float v17; // s0
  __int64 v18; // x24
  __int64 v19; // x25
  __int64 v20; // x24
  __int64 v21; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_435339A & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_B70694(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_435339A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EquipMaster___);
  v13 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v22, 0LL);
  if ( !v14 )
    goto LABEL_27;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                v14,
                                (int32_t)Instance,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_27;
  if ( this->fields.lv < SHIDWORD(Instance->fields.saveDataMapList) )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    v15 = (EquipExpMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EquipExpMaster___);
    if ( this->fields.lv >= 2 )
    {
      v19 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
      v18 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v23.fields.currentCryptoKey = v19;
      *(_QWORD *)&v23.fields.fakeValue = v18;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v23, 0LL);
      if ( !v15 )
        goto LABEL_27;
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(v15, (int32_t)Instance, this->fields.lv - 1, 0LL);
      if ( !Instance )
        goto LABEL_27;
      datalist = (int)Instance->fields.datalist;
    }
    else
    {
      datalist = 0;
    }
    v21 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
    v20 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v24.fields.currentCryptoKey = v21;
    *(_QWORD *)&v24.fields.fakeValue = v20;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v24, 0LL);
    if ( v15 )
    {
      Instance = (DataManager_o *)EquipExpMaster__GetEntity(v15, (int32_t)Instance, this->fields.lv, 0LL);
      *exp = this->fields.exp - datalist;
      if ( Instance )
      {
        *lateExp = LODWORD(Instance->fields.datalist) - this->fields.exp;
        v17 = (float)*exp / (float)(LODWORD(Instance->fields.datalist) - datalist);
        goto LABEL_26;
      }
    }
LABEL_27:
    sub_B7076C(Instance, v10);
  }
  v17 = 1.0;
  *exp = 0;
  *lateExp = 0;
LABEL_26:
  *barExp = v17;
}


System_Int32_array *__fastcall UserEquipEntity__getSkillIdList(UserEquipEntity_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  __int64 v4; // x1
  System_Int32_array *v5; // x20
  __int64 v6; // x21
  __int64 v7; // x21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EquipSkillMaster_o *v9; // x21
  int32_t v10; // w22
  unsigned int v11; // w28
  int32_t *i; // x27
  __int64 v13; // x23
  __int64 v14; // x24
  EquipSkillEntity_o *Entity; // x0
  EquipSkillEntity_o *v16; // x23
  _BOOL8 isUse; // x0
  il2cpp_array_size_t max_length; // w8
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4353398 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EquipSkillMaster___);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4353398 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v5 = (System_Int32_array *)sub_B706AC(int___TypeInfo, (unsigned int)v3->static_fields->UserEquipSkillListMax);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v7 = **(_QWORD **)(v6 + 192);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_B08394(v7);
  MasterData_WarQuestSelectionMaster = **(WarQuestSelectionMaster_o ***)(v7 + 184);
  if ( !MasterData_WarQuestSelectionMaster
    || (MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)MasterData_WarQuestSelectionMaster,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EquipSkillMaster___),
        !v5) )
  {
LABEL_27:
    sub_B7076C(MasterData_WarQuestSelectionMaster, v4);
  }
  if ( (int)v5->max_length >= 1 )
  {
    v9 = (EquipSkillMaster_o *)MasterData_WarQuestSelectionMaster;
    v10 = 1;
    do
    {
      v11 = v10 - 1;
      for ( i = &v5->m_Items[v10]; ; *i = -1 )
      {
        v14 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
        v13 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v21.fields.currentCryptoKey = v14;
        *(_QWORD *)&v21.fields.fakeValue = v13;
        MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                                                            v21,
                                                                            0LL);
        if ( !v9 )
          goto LABEL_27;
        Entity = EquipSkillMaster__GetEntity(v9, (int32_t)MasterData_WarQuestSelectionMaster, v10, 0LL);
        if ( !Entity )
          goto LABEL_25;
        v16 = Entity;
        isUse = EquipSkillEntity__isUse(Entity, this->fields.lv, 0LL);
        max_length = v5->max_length;
        if ( isUse )
          break;
        if ( v11 >= max_length )
          goto LABEL_28;
      }
      if ( v11 >= max_length )
      {
LABEL_28:
        v20 = sub_B70798(isUse);
        sub_B70738(v20, 0LL);
      }
      *i = v16->fields.skillId;
LABEL_25:
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
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  EquipExpMaster_o *v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4353396 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353396 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v9 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v10 = (EquipExpMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12, 0LL);
  if ( !v10 )
    goto LABEL_18;
  Instance = EquipExpMaster__GetEntity(v10, (int32_t)Instance, this->fields.lv, 0LL);
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
      sub_B7076C(Instance, v6);
    default:
      return 0;
  }
}


System_Int32_array *__fastcall UserEquipEntity__getSkillLvList(UserEquipEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v6; // x21
  __int64 v7; // x22
  EquipExpMaster_o *v8; // x20
  EquipExpEntity_o *Entity; // x19
  il2cpp_array_size_t max_length; // w8
  __int64 v11; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4353397 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EquipExpMaster___);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4353397 = 1;
  }
  result = (System_Int32_array *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)result,
                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EquipExpMaster___);
  v7 = *(_QWORD *)&this->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&this->fields.equipId.fields.fakeValue;
  v8 = (EquipExpMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v7;
  *(_QWORD *)&v12.fields.fakeValue = v6;
  result = (System_Int32_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v12, 0LL);
  if ( !v8
    || (Entity = EquipExpMaster__GetEntity(v8, (int32_t)result, this->fields.lv, 0LL),
        result = (System_Int32_array *)sub_B706AC(int___TypeInfo, 3LL),
        !Entity)
    || !result )
  {
LABEL_14:
    sub_B7076C(result, v4);
  }
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = Entity->fields.skillLv1, max_length == 1)
    || (result->m_Items[2] = Entity->fields.skillLv2, max_length <= 2) )
  {
    v11 = sub_B70798(result);
    sub_B70738(v11, 0LL);
  }
  result->m_Items[3] = Entity->fields.skillLv3;
  return result;
}