void __fastcall MasterEquipInfoComponent___ctor(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall MasterEquipInfoComponent__getEquipId(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterEquipInfoComponent_o *v4; // x19
  struct UserEquipEntity_o *usrEquipEnt; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_42EBB67 & 1) == 0 )
  {
    this = (MasterEquipInfoComponent_o *)sub_B5D5C4(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42EBB67 = 1;
  }
  usrEquipEnt = v4->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_B5D69C(this, method);
  v7 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL);
}


int32_t __fastcall MasterEquipInfoComponent__getMoveBannerIdx(
        MasterEquipInfoComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.moveEqIdx;
}


int64_t __fastcall MasterEquipInfoComponent__getUsrEquipId(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  struct UserEquipEntity_o *usrEquipEnt; // x8

  usrEquipEnt = this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_B5D69C(this, method);
  return usrEquipEnt->fields.id;
}


bool __fastcall MasterEquipInfoComponent__isChangeEquip(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isChange;
}


void __fastcall MasterEquipInfoComponent__setDispEffectObj(
        MasterEquipInfoComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *effectObj; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42EBB68 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDisp, (_DWORD)method, v3);
    byte_42EBB68 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    v8 = this->fields.effectObj;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isDisp, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setEquipInfo(
        MasterEquipInfoComponent_o *this,
        UserEquipEntity_o *usrEquipData,
        int64_t usrEquipId,
        int32_t userLv,
        int32_t moveIdx,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
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
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  UnityEngine_GameObject_o *equipStatusInfo; // x0
  struct UnityEngine_GameObject_o *equipEffectPrefab; // x21
  struct UnityEngine_GameObject_o *v33; // x0
  struct UnityEngine_GameObject_o **p_effectObj; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  UnityEngine_Transform_o *v41; // x22
  UnityEngine_Transform_o *transform; // x22
  int v43; // s0
  UnityEngine_Transform_o *v46; // x21
  int v47; // s0
  UILabel_o *equipLevelLb; // x21
  UILabel_o *equipMaxLvLb; // x21
  UILabel_o *equipExpLb; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  const MethodInfo *v59; // x1
  int32_t Kind; // w0
  int32_t v61; // w20
  System_String_o *MasterEquipBgImage; // x0
  UIAtlas_o *partyOrganizationAtlas; // x20
  UISprite_o *bg; // x22
  System_String_o *v65; // x21
  UISprite_o *v66; // x20
  UILabel_o *skillCheckHelpLb; // x20
  UILabel_o *equipChangeHelpLb; // x19
  int32_t lateExp[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 exp; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+28h] [xbp-28h] BYREF
  int32_t condUsrLv; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_42EBB64 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)usrEquipData, usrEquipId, *(_QWORD *)&userLv);
    sub_B5D5C4(&Grade_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_8723/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_8720/*"MASTER_EQUIP_EXPLANATION_TXT"*/, v28, v29, v30);
    byte_42EBB64 = 1;
  }
  condUsrLv = 0;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  *(_QWORD *)lateExp = 0LL;
  exp = 0LL;
  equipStatusInfo = this->fields.equipStatusInfo;
  if ( !equipStatusInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(equipStatusInfo, 0, 0LL);
  this->fields.isChange = 1;
  this->fields.moveEqIdx = moveIdx;
  if ( !usrEquipData )
    goto LABEL_46;
  UserEquipEntity__getEquipInfo(usrEquipData, &condUsrLv, &maxLv, &equipName, &detail, (int32_t *)&exp + 1, 0LL);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipIconComp;
  if ( !equipStatusInfo )
    goto LABEL_46;
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)equipStatusInfo, SHIDWORD(exp), 0LL);
  if ( usrEquipData->fields.id != usrEquipId )
    goto LABEL_19;
  equipStatusInfo = this->fields.equipStatusInfo;
  if ( !equipStatusInfo )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(equipStatusInfo, 1, 0LL);
  equipEffectPrefab = this->fields.equipEffectPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v33 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)equipEffectPrefab,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.effectObj = v33;
  p_effectObj = &this->fields.effectObj;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.effectObj,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  equipStatusInfo = this->fields.effectObj;
  if ( !equipStatusInfo )
    goto LABEL_46;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL);
  if ( !this->fields.equipStatusInfo )
    goto LABEL_46;
  v41 = (UnityEngine_Transform_o *)equipStatusInfo;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.equipStatusInfo, 0LL);
  if ( !v41 )
    goto LABEL_46;
  UnityEngine_Transform__set_parent(v41, (UnityEngine_Transform_o *)equipStatusInfo, 0LL);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj
    || (transform = UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL),
        *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v43, 0LL),
        (equipStatusInfo = *p_effectObj) == 0LL)
    || (v46 = UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL),
        *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Vector3__get_one(0LL),
        !v46) )
  {
LABEL_46:
    sub_B5D69C(equipStatusInfo, usrEquipData);
  }
  UnityEngine_Transform__set_localScale(v46, *(UnityEngine_Vector3_o *)&v47, 0LL);
LABEL_19:
  equipLevelLb = this->fields.equipLevelLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)usrEquipData + 48, 0LL);
  if ( !equipLevelLb )
    goto LABEL_46;
  UILabel__set_text(equipLevelLb, (System_String_o *)equipStatusInfo, 0LL);
  equipMaxLvLb = this->fields.equipMaxLvLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&maxLv, 0LL);
  if ( !equipMaxLvLb )
    goto LABEL_46;
  UILabel__set_text(equipMaxLvLb, (System_String_o *)equipStatusInfo, 0LL);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipNameLb;
  if ( !equipStatusInfo )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)equipStatusInfo, equipName, 0LL);
  UserEquipEntity__getExpInfo(usrEquipData, (int32_t *)&exp, &lateExp[1], (float *)lateExp, 0LL);
  equipExpLb = this->fields.equipExpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_39741776(
                                                  (int32_t)&lateExp[1],
                                                  (System_String_o *)StringLiteral_346/*"#,0"*/,
                                                  0LL);
  if ( !equipExpLb )
    goto LABEL_46;
  UILabel__set_text(equipExpLb, (System_String_o *)equipStatusInfo, 0LL);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipExpBar;
  if ( !equipStatusInfo )
    goto LABEL_46;
  UIProgressBar__set_value((UIProgressBar_o *)equipStatusInfo, *(float *)lateExp, 0LL);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipDetailLb;
  if ( !equipStatusInfo )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)equipStatusInfo, detail, 0LL);
  this->fields.usrEquipEnt = usrEquipData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrEquipEnt,
    (System_Int32_array **)usrEquipData,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  MasterEquipInfoComponent__setEquipSkillInfo(this, v59);
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v61 = Kind;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterEquipBgImage = Grade__GetMasterEquipBgImage(v61, 0LL);
    bg = this->fields.bg;
    partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
    v65 = MasterEquipBgImage;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetGradeBase(bg, v65, partyOrganizationAtlas, 0LL);
  }
  else
  {
    v66 = this->fields.bg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v66, 0LL);
  }
  skillCheckHelpLb = this->fields.skillCheckHelpLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8723/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, 0LL);
  if ( !skillCheckHelpLb )
    goto LABEL_46;
  UILabel__set_text(skillCheckHelpLb, (System_String_o *)equipStatusInfo, 0LL);
  equipChangeHelpLb = this->fields.equipChangeHelpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8720/*"MASTER_EQUIP_EXPLANATION_TXT"*/, 0LL);
  if ( !equipChangeHelpLb )
    goto LABEL_46;
  UILabel__set_text(equipChangeHelpLb, (System_String_o *)equipStatusInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setEquipSkillInfo(MasterEquipInfoComponent_o *this, const MethodInfo *method)
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UserEquipEntity_o *usrEquipEnt; // x0
  int64_t userId; // x8
  UserEquipEntity_o *v22; // x20
  unsigned __int64 v23; // x21
  int32_t v24; // w22
  int32_t v25; // w23
  bool IsNew; // w24
  UnityEngine_GameObject_o *skillInfoPrefab; // x26
  int32_t v28; // w25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v30; // x26
  UnityEngine_Transform_o *v31; // x27
  int v32; // s0
  UnityEngine_Transform_o *v35; // x27
  int v36; // s0
  EquipSkillInfoComponent_o *Component_srcLineSprite; // x26
  EquipSkillInfoComponent_ClickDelegate_o *v40; // x27
  __int64 v41; // x0

  if ( (byte_42EBB65 & 1) == 0 )
  {
    sub_B5D5C4(&EquipSkillInfoComponent_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_MasterEquipInfoComponent_setSkillCallBack__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42EBB65 = 1;
  }
  usrEquipEnt = this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    goto LABEL_22;
  usrEquipEnt = (UserEquipEntity_o *)UserEquipEntity__getSkillIdList(usrEquipEnt, 0LL);
  if ( !usrEquipEnt )
    goto LABEL_22;
  userId = usrEquipEnt->fields.userId;
  v22 = usrEquipEnt;
  if ( (int)userId >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)userId )
      {
        v41 = sub_B5D6C8(usrEquipEnt);
        sub_B5D668(v41, 0LL);
      }
      usrEquipEnt = this->fields.usrEquipEnt;
      if ( !usrEquipEnt )
        break;
      v24 = *(&v22->fields.equipId.fields.currentCryptoKey + v23);
      usrEquipEnt = (UserEquipEntity_o *)UserEquipEntity__getSkillLv(usrEquipEnt, v23, 0LL);
      if ( !this->fields.usrEquipEnt )
        break;
      v25 = (int)usrEquipEnt;
      IsNew = UserEquipEntity__IsNew(this->fields.usrEquipEnt, 0LL);
      usrEquipEnt = (UserEquipEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)usrEquipEnt,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)usrEquipEnt,
                                           v24,
                                           (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)SkillEntity__GetIconId((SkillEntity_o *)usrEquipEnt, 0LL);
      if ( !this->fields.skillInfoGrid )
        break;
      skillInfoPrefab = this->fields.skillInfoPrefab;
      v28 = (int)usrEquipEnt;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.skillInfoGrid, 0LL);
      usrEquipEnt = (UserEquipEntity_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           skillInfoPrefab,
                                           transform,
                                           0LL,
                                           0LL);
      if ( !usrEquipEnt )
        break;
      v30 = (UnityEngine_GameObject_o *)usrEquipEnt;
      v31 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)usrEquipEnt, 0LL);
      *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_one(0LL);
      if ( !v31 )
        break;
      UnityEngine_Transform__set_localScale(v31, *(UnityEngine_Vector3_o *)&v32, 0LL);
      usrEquipEnt = (UserEquipEntity_o *)UnityEngine_GameObject__get_transform(v30, 0LL);
      if ( !this->fields.skillInfoGrid )
        break;
      v35 = (UnityEngine_Transform_o *)usrEquipEnt;
      usrEquipEnt = (UserEquipEntity_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.skillInfoGrid,
                                           0LL);
      if ( !usrEquipEnt )
        break;
      *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)usrEquipEnt,
                                         0LL);
      if ( !v35 )
        break;
      UnityEngine_Transform__set_localPosition(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
      Component_srcLineSprite = (EquipSkillInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v30,
                                                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
      v40 = (EquipSkillInfoComponent_ClickDelegate_o *)sub_B5D694(EquipSkillInfoComponent_ClickDelegate_TypeInfo);
      EquipSkillInfoComponent_ClickDelegate___ctor(
        v40,
        (Il2CppObject *)this,
        Method_MasterEquipInfoComponent_setSkillCallBack__,
        0LL);
      if ( !Component_srcLineSprite )
        break;
      EquipSkillInfoComponent__setEquipSkillInfo(Component_srcLineSprite, v23, v24, v25, v28, IsNew, v40, 0LL);
      LODWORD(userId) = v22->fields.userId;
      if ( (__int64)++v23 >= (int)userId )
        return;
    }
LABEL_22:
    sub_B5D69C(usrEquipEnt, method);
  }
}


void __fastcall MasterEquipInfoComponent__setSkillCallBack(
        MasterEquipInfoComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  DataManager_o *Instance; // x0
  __int64 v34; // x1
  SkillEntity_o *Entity; // x21
  DataManager_o *v36; // x20
  System_String_o *v37; // x21
  System_String_o *v38; // x22
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x19
  Il2CppObject *v42; // x0
  System_String_o *v43; // x19
  int datalist; // [xsp+0h] [xbp-40h] BYREF
  int32_t v45; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42EBB66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, skillId, skillLv, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, v30, v31, v32);
    byte_42EBB66 = 1;
  }
  name = 0LL;
  detail = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_14;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              skillId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  if ( !Entity )
    goto LABEL_14;
  v36 = Instance;
  SkillEntity__getSkillMessageInfo(Entity, &name, &detail, skillLv, 0LL);
  v37 = name;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
  v45 = skillLv;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
  v40 = System_String__Format(v38, v39, 0LL);
  name = System_String__Concat_44580072(v37, (System_String_o *)StringLiteral_81/*" "*/, v40, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2572/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
  if ( !v36
    || (v41 = (System_String_o *)Instance,
        datalist = (int)v36->fields.datalist,
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist),
        v43 = System_String__Format(v41, v42, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(Instance, v34);
  }
  CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v43, detail, 0, 0, 0LL);
}