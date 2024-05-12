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
  if ( (byte_438E5E4 & 1) == 0 )
  {
    this = (MasterEquipInfoComponent_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438E5E4 = 1;
  }
  usrEquipEnt = v2->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_B7769C(this, method);
  v5 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v7, 0LL);
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
    sub_B7769C(this, method);
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
  UnityEngine_Object_o *effectObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_438E5E5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E5E5 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    v7 = this->fields.effectObj;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
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
  UnityEngine_GameObject_o *equipStatusInfo; // x0
  struct UnityEngine_GameObject_o *equipEffectPrefab; // x21
  struct UnityEngine_GameObject_o *v12; // x0
  struct UnityEngine_GameObject_o **p_effectObj; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_Transform_o *v20; // x22
  UnityEngine_Transform_o *transform; // x22
  int v22; // s0
  UnityEngine_Transform_o *v25; // x21
  int v26; // s0
  UILabel_o *equipLevelLb; // x21
  UILabel_o *equipMaxLvLb; // x21
  UILabel_o *equipExpLb; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  int32_t Kind; // w0
  int32_t v40; // w20
  System_String_o *MasterEquipBgImage; // x0
  UIAtlas_o *partyOrganizationAtlas; // x20
  UISprite_o *bg; // x22
  System_String_o *v44; // x21
  UISprite_o *v45; // x20
  UILabel_o *skillCheckHelpLb; // x20
  UILabel_o *equipChangeHelpLb; // x19
  int32_t lateExp[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 exp; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+28h] [xbp-28h] BYREF
  int32_t condUsrLv; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_438E5E1 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Grade_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_350/*"#,0"*/);
    sub_B775C4(&StringLiteral_8794/*"MASTER_EQUIP_SKILL_INFO_TXT"*/);
    sub_B775C4(&StringLiteral_8791/*"MASTER_EQUIP_EXPLANATION_TXT"*/);
    byte_438E5E1 = 1;
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
  v12 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)equipEffectPrefab,
                                             (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.effectObj = v12;
  p_effectObj = &this->fields.effectObj;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.effectObj,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  equipStatusInfo = this->fields.effectObj;
  if ( !equipStatusInfo )
    goto LABEL_46;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL);
  if ( !this->fields.equipStatusInfo )
    goto LABEL_46;
  v20 = (UnityEngine_Transform_o *)equipStatusInfo;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.equipStatusInfo, 0LL);
  if ( !v20 )
    goto LABEL_46;
  UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)equipStatusInfo, 0LL);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj
    || (transform = UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL),
        *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v22, 0LL),
        (equipStatusInfo = *p_effectObj) == 0LL)
    || (v25 = UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL),
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_one(0LL),
        !v25) )
  {
LABEL_46:
    sub_B7769C(equipStatusInfo, usrEquipData);
  }
  UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
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
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_39547236(
                                                  (int32_t)&lateExp[1],
                                                  (System_String_o *)StringLiteral_350/*"#,0"*/,
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
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.usrEquipEnt,
    (System_Int32_array **)usrEquipData,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  MasterEquipInfoComponent__setEquipSkillInfo(this, v38);
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v40 = Kind;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterEquipBgImage = Grade__GetMasterEquipBgImage(v40, 0LL);
    bg = this->fields.bg;
    partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
    v44 = MasterEquipBgImage;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetGradeBase(bg, v44, partyOrganizationAtlas, 0LL);
  }
  else
  {
    v45 = this->fields.bg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v45, 0LL);
  }
  skillCheckHelpLb = this->fields.skillCheckHelpLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8794/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, 0LL);
  if ( !skillCheckHelpLb )
    goto LABEL_46;
  UILabel__set_text(skillCheckHelpLb, (System_String_o *)equipStatusInfo, 0LL);
  equipChangeHelpLb = this->fields.equipChangeHelpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8791/*"MASTER_EQUIP_EXPLANATION_TXT"*/, 0LL);
  if ( !equipChangeHelpLb )
    goto LABEL_46;
  UILabel__set_text(equipChangeHelpLb, (System_String_o *)equipStatusInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setEquipSkillInfo(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  UserEquipEntity_o *usrEquipEnt; // x0
  int64_t userId; // x8
  UserEquipEntity_o *v5; // x20
  unsigned __int64 v6; // x21
  int32_t v7; // w22
  int32_t v8; // w23
  bool IsNew; // w24
  UnityEngine_GameObject_o *skillInfoPrefab; // x26
  int32_t v11; // w25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v13; // x26
  UnityEngine_Transform_o *v14; // x27
  int v15; // s0
  UnityEngine_Transform_o *v18; // x27
  int v19; // s0
  EquipSkillInfoComponent_o *Component_srcLineSprite; // x26
  EquipSkillInfoComponent_ClickDelegate_o *v23; // x27
  __int64 v24; // x0

  if ( (byte_438E5E2 & 1) == 0 )
  {
    sub_B775C4(&EquipSkillInfoComponent_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
    sub_B775C4(&Method_MasterEquipInfoComponent_setSkillCallBack__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E5E2 = 1;
  }
  usrEquipEnt = this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    goto LABEL_22;
  usrEquipEnt = (UserEquipEntity_o *)UserEquipEntity__getSkillIdList(usrEquipEnt, 0LL);
  if ( !usrEquipEnt )
    goto LABEL_22;
  userId = usrEquipEnt->fields.userId;
  v5 = usrEquipEnt;
  if ( (int)userId >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)userId )
      {
        v24 = sub_B776C8(usrEquipEnt);
        sub_B77668(v24, 0LL);
      }
      usrEquipEnt = this->fields.usrEquipEnt;
      if ( !usrEquipEnt )
        break;
      v7 = *(&v5->fields.equipId.fields.currentCryptoKey + v6);
      usrEquipEnt = (UserEquipEntity_o *)UserEquipEntity__getSkillLv(usrEquipEnt, v6, 0LL);
      if ( !this->fields.usrEquipEnt )
        break;
      v8 = (int)usrEquipEnt;
      IsNew = UserEquipEntity__IsNew(this->fields.usrEquipEnt, 0LL);
      usrEquipEnt = (UserEquipEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)usrEquipEnt,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)usrEquipEnt,
                                           v7,
                                           (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)SkillEntity__GetIconId((SkillEntity_o *)usrEquipEnt, 0LL);
      if ( !this->fields.skillInfoGrid )
        break;
      skillInfoPrefab = this->fields.skillInfoPrefab;
      v11 = (int)usrEquipEnt;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.skillInfoGrid, 0LL);
      usrEquipEnt = (UserEquipEntity_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           skillInfoPrefab,
                                           transform,
                                           0LL,
                                           0LL);
      if ( !usrEquipEnt )
        break;
      v13 = (UnityEngine_GameObject_o *)usrEquipEnt;
      v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)usrEquipEnt, 0LL);
      *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_one(0LL);
      if ( !v14 )
        break;
      UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
      usrEquipEnt = (UserEquipEntity_o *)UnityEngine_GameObject__get_transform(v13, 0LL);
      if ( !this->fields.skillInfoGrid )
        break;
      v18 = (UnityEngine_Transform_o *)usrEquipEnt;
      usrEquipEnt = (UserEquipEntity_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.skillInfoGrid,
                                           0LL);
      if ( !usrEquipEnt )
        break;
      *(UnityEngine_Vector3_o *)&v19 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)usrEquipEnt,
                                         0LL);
      if ( !v18 )
        break;
      UnityEngine_Transform__set_localPosition(v18, *(UnityEngine_Vector3_o *)&v19, 0LL);
      Component_srcLineSprite = (EquipSkillInfoComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                               v13,
                                                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
      v23 = (EquipSkillInfoComponent_ClickDelegate_o *)sub_B77694(EquipSkillInfoComponent_ClickDelegate_TypeInfo);
      EquipSkillInfoComponent_ClickDelegate___ctor(
        v23,
        (Il2CppObject *)this,
        Method_MasterEquipInfoComponent_setSkillCallBack__,
        0LL);
      if ( !Component_srcLineSprite )
        break;
      EquipSkillInfoComponent__setEquipSkillInfo(Component_srcLineSprite, v6, v7, v8, v11, IsNew, v23, 0LL);
      LODWORD(userId) = v5->fields.userId;
      if ( (__int64)++v6 >= (int)userId )
        return;
    }
LABEL_22:
    sub_B7769C(usrEquipEnt, method);
  }
}


void __fastcall MasterEquipInfoComponent__setSkillCallBack(
        MasterEquipInfoComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  SkillEntity_o *Entity; // x21
  DataManager_o *v9; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x2
  System_String_o *v16; // x19
  Il2CppObject *v17; // x0
  System_String_o *v18; // x19
  int datalist; // [xsp+0h] [xbp-40h] BYREF
  int32_t v20; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_438E5E3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&StringLiteral_82/*" "*/);
    sub_B775C4(&StringLiteral_8790/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_B775C4(&StringLiteral_2625/*"BATTLE_SKILLCHARGETURN"*/);
    byte_438E5E3 = 1;
  }
  name = 0LL;
  detail = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_14;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              skillId,
                              (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  if ( !Entity )
    goto LABEL_14;
  v9 = Instance;
  SkillEntity__getSkillMessageInfo(Entity, &name, &detail, skillLv, 0LL);
  v10 = name;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8790/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
  v20 = skillLv;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v12);
  v14 = System_String__Format(v11, v13, 0LL);
  name = System_String__Concat_44904220(v10, (System_String_o *)StringLiteral_82/*" "*/, v14, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2625/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
  if ( !v9
    || (v16 = (System_String_o *)Instance,
        datalist = (int)v9->fields.datalist,
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist, v15),
        v18 = System_String__Format(v16, v17, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_B7769C(Instance, v7);
  }
  CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v18, detail, 0, 0, 0LL);
}