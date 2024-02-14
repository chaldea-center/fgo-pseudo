void __fastcall MasterEquipInfoComponent___ctor(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall MasterEquipInfoComponent__getEquipId(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  MasterEquipInfoComponent_o *v2; // x19
  struct UserEquipEntity_o *usrEquipEnt; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_4212A41 & 1) == 0 )
  {
    this = (MasterEquipInfoComponent_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4212A41 = 1;
  }
  usrEquipEnt = v2->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_B0D97C(this);
  v5 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v7, 0LL);
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
    sub_B0D97C(this);
  return usrEquipEnt->fields.id;
}


bool __fastcall MasterEquipInfoComponent__isChangeEquip(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isChange;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setDispEffectObj(
        MasterEquipInfoComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4212A42 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4212A42 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    v6 = this->fields.effectObj;
    if ( !v6 )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v6, isDisp, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *equipStatusInfo; // x0
  struct UnityEngine_GameObject_o *equipEffectPrefab; // x21
  struct UnityEngine_GameObject_o *v19; // x0
  struct UnityEngine_GameObject_o **p_effectObj; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Transform_o *v27; // x22
  UnityEngine_Transform_o *transform; // x22
  int v29; // s0
  UnityEngine_Transform_o *v32; // x21
  int v33; // s0
  UILabel_o *equipLevelLb; // x21
  UILabel_o *equipMaxLvLb; // x21
  UILabel_o *equipExpLb; // x21
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x1
  int32_t Kind; // w0
  int32_t v47; // w20
  System_String_o *MasterEquipBgImage; // x0
  UIAtlas_o *partyOrganizationAtlas; // x20
  UISprite_o *bg; // x22
  System_String_o *v51; // x21
  UISprite_o *v52; // x20
  UILabel_o *skillCheckHelpLb; // x20
  UILabel_o *equipChangeHelpLb; // x19
  int32_t lateExp[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 exp; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+28h] [xbp-28h] BYREF
  int32_t condUsrLv; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4212A3E & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, usrEquipData);
    sub_B0D8A4(&Grade_TypeInfo, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_345/*"#,0"*/, v14);
    sub_B0D8A4(&StringLiteral_8658/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, v15);
    sub_B0D8A4(&StringLiteral_8655/*"MASTER_EQUIP_EXPLANATION_TXT"*/, v16);
    byte_4212A3E = 1;
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
  v19 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)equipEffectPrefab,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.effectObj = v19;
  p_effectObj = &this->fields.effectObj;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.effectObj,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  equipStatusInfo = this->fields.effectObj;
  if ( !equipStatusInfo )
    goto LABEL_46;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL);
  if ( !this->fields.equipStatusInfo )
    goto LABEL_46;
  v27 = (UnityEngine_Transform_o *)equipStatusInfo;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.equipStatusInfo, 0LL);
  if ( !v27 )
    goto LABEL_46;
  UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)equipStatusInfo, 0LL);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj
    || (transform = UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL),
        *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v29, 0LL),
        (equipStatusInfo = *p_effectObj) == 0LL)
    || (v32 = UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL),
        *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Vector3__get_one(0LL),
        !v32) )
  {
LABEL_46:
    sub_B0D97C(equipStatusInfo);
  }
  UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
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
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_38473032(
                                                  (int32_t)&lateExp[1],
                                                  (System_String_o *)StringLiteral_345/*"#,0"*/,
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.usrEquipEnt,
    (System_Int32_array **)usrEquipData,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  MasterEquipInfoComponent__setEquipSkillInfo(this, v45);
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v47 = Kind;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterEquipBgImage = Grade__GetMasterEquipBgImage(v47, 0LL);
    bg = this->fields.bg;
    partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
    v51 = MasterEquipBgImage;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetGradeBase(bg, v51, partyOrganizationAtlas, 0LL);
  }
  else
  {
    v52 = this->fields.bg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v52, 0LL);
  }
  skillCheckHelpLb = this->fields.skillCheckHelpLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8658/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, 0LL);
  if ( !skillCheckHelpLb )
    goto LABEL_46;
  UILabel__set_text(skillCheckHelpLb, (System_String_o *)equipStatusInfo, 0LL);
  equipChangeHelpLb = this->fields.equipChangeHelpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8655/*"MASTER_EQUIP_EXPLANATION_TXT"*/, 0LL);
  if ( !equipChangeHelpLb )
    goto LABEL_46;
  UILabel__set_text(equipChangeHelpLb, (System_String_o *)equipStatusInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setEquipSkillInfo(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserEquipEntity_o *usrEquipEnt; // x0
  int64_t userId; // x8
  UserEquipEntity_o *v10; // x20
  unsigned __int64 v11; // x21
  int32_t v12; // w22
  int32_t v13; // w23
  bool IsNew; // w24
  UnityEngine_GameObject_o *skillInfoPrefab; // x26
  int32_t v16; // w25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x26
  UnityEngine_Transform_o *v19; // x27
  int v20; // s0
  UnityEngine_Transform_o *v23; // x27
  int v24; // s0
  EquipSkillInfoComponent_o *Component_srcLineSprite; // x26
  __int64 v28; // x1
  __int64 v29; // x2
  EquipSkillInfoComponent_ClickDelegate_o *v30; // x27
  __int64 v31; // x0

  if ( (byte_4212A3F & 1) == 0 )
  {
    sub_B0D8A4(&EquipSkillInfoComponent_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___, v5);
    sub_B0D8A4(&Method_MasterEquipInfoComponent_setSkillCallBack__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4212A3F = 1;
  }
  usrEquipEnt = this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    goto LABEL_22;
  usrEquipEnt = (UserEquipEntity_o *)UserEquipEntity__getSkillIdList(usrEquipEnt, 0LL);
  if ( !usrEquipEnt )
    goto LABEL_22;
  userId = usrEquipEnt->fields.userId;
  v10 = usrEquipEnt;
  if ( (int)userId >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)userId )
      {
        v31 = sub_B0D9A8(usrEquipEnt);
        sub_B0D948(v31, 0LL);
      }
      usrEquipEnt = this->fields.usrEquipEnt;
      if ( !usrEquipEnt )
        break;
      v12 = *(&v10->fields.equipId.fields.currentCryptoKey + v11);
      usrEquipEnt = (UserEquipEntity_o *)UserEquipEntity__getSkillLv(usrEquipEnt, v11, 0LL);
      if ( !this->fields.usrEquipEnt )
        break;
      v13 = (int)usrEquipEnt;
      IsNew = UserEquipEntity__IsNew(this->fields.usrEquipEnt, 0LL);
      usrEquipEnt = (UserEquipEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)usrEquipEnt,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)usrEquipEnt,
                                           v12,
                                           (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)SkillEntity__GetIconId((SkillEntity_o *)usrEquipEnt, 0LL);
      if ( !this->fields.skillInfoGrid )
        break;
      skillInfoPrefab = this->fields.skillInfoPrefab;
      v16 = (int)usrEquipEnt;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.skillInfoGrid, 0LL);
      usrEquipEnt = (UserEquipEntity_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           skillInfoPrefab,
                                           transform,
                                           0LL,
                                           0LL);
      if ( !usrEquipEnt )
        break;
      v18 = (UnityEngine_GameObject_o *)usrEquipEnt;
      v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)usrEquipEnt, 0LL);
      *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL);
      if ( !v19 )
        break;
      UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
      usrEquipEnt = (UserEquipEntity_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !this->fields.skillInfoGrid )
        break;
      v23 = (UnityEngine_Transform_o *)usrEquipEnt;
      usrEquipEnt = (UserEquipEntity_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.skillInfoGrid,
                                           0LL);
      if ( !usrEquipEnt )
        break;
      *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)usrEquipEnt,
                                         0LL);
      if ( !v23 )
        break;
      UnityEngine_Transform__set_localPosition(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
      Component_srcLineSprite = (EquipSkillInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v18,
                                                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
      v30 = (EquipSkillInfoComponent_ClickDelegate_o *)sub_B0D974(
                                                         EquipSkillInfoComponent_ClickDelegate_TypeInfo,
                                                         v28,
                                                         v29);
      EquipSkillInfoComponent_ClickDelegate___ctor(
        v30,
        (Il2CppObject *)this,
        Method_MasterEquipInfoComponent_setSkillCallBack__,
        0LL);
      if ( !Component_srcLineSprite )
        break;
      EquipSkillInfoComponent__setEquipSkillInfo(Component_srcLineSprite, v11, v12, v13, v16, IsNew, v30, 0LL);
      LODWORD(userId) = v10->fields.userId;
      if ( (__int64)++v11 >= (int)userId )
        return;
    }
LABEL_22:
    sub_B0D97C(usrEquipEnt);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setSkillCallBack(
        MasterEquipInfoComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  SkillEntity_o *Entity; // x21
  DataManager_o *v17; // x20
  System_String_o *v18; // x21
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  Il2CppObject *v23; // x0
  System_String_o *v24; // x19
  int datalist; // [xsp+0h] [xbp-40h] BYREF
  int32_t v26; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4212A40 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v12);
    sub_B0D8A4(&StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_B0D8A4(&StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_4212A40 = 1;
  }
  name = 0LL;
  detail = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_14;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              skillId,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  if ( !Entity )
    goto LABEL_14;
  v17 = Instance;
  SkillEntity__getSkillMessageInfo(Entity, &name, &detail, skillLv, 0LL);
  v18 = name;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8654/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
  v26 = skillLv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v21 = System_String__Format(v19, v20, 0LL);
  name = System_String__Concat_43852188(v18, (System_String_o *)StringLiteral_80/*" "*/, v21, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2529/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
  if ( !v17
    || (v22 = (System_String_o *)Instance,
        datalist = (int)v17->fields.datalist,
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist),
        v24 = System_String__Format(v22, v23, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(Instance);
  }
  CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v24, detail, 0, 0, 0LL);
}