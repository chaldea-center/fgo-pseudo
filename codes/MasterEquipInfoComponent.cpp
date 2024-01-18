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
  if ( (byte_4185905 & 1) == 0 )
  {
    this = (MasterEquipInfoComponent_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4185905 = 1;
  }
  usrEquipEnt = v2->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_B2C434(this, method);
  v5 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v7, 0LL);
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
    sub_B2C434(this, method);
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4185906 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4185906 = 1;
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
      sub_B2C434(0LL, v6);
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
  UnityEngine_Transform_o *v21; // x22
  UnityEngine_Transform_o *transform; // x22
  int v23; // s0
  UnityEngine_Transform_o *v26; // x21
  int v27; // s0
  UILabel_o *equipLevelLb; // x21
  UILabel_o *equipMaxLvLb; // x21
  UILabel_o *equipExpLb; // x21
  const MethodInfo *v33; // x1
  int32_t Kind; // w0
  int32_t v35; // w20
  System_String_o *MasterEquipBgImage; // x0
  UIAtlas_o *partyOrganizationAtlas; // x20
  UISprite_o *bg; // x22
  System_String_o *v39; // x21
  UISprite_o *v40; // x20
  UILabel_o *skillCheckHelpLb; // x20
  UILabel_o *equipChangeHelpLb; // x19
  int32_t lateExp[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 exp; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+28h] [xbp-28h] BYREF
  int32_t condUsrLv; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_4185902 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, usrEquipData);
    sub_B2C35C(&Grade_TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_340/*"#,0"*/, v14);
    sub_B2C35C(&StringLiteral_8636/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, v15);
    sub_B2C35C(&StringLiteral_8633/*"MASTER_EQUIP_EXPLANATION_TXT"*/, v16);
    byte_4185902 = 1;
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
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.effectObj = v19;
  p_effectObj = &this->fields.effectObj;
  sub_B2C2F8(&this->fields.effectObj, v19);
  equipStatusInfo = this->fields.effectObj;
  if ( !equipStatusInfo )
    goto LABEL_46;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL);
  if ( !this->fields.equipStatusInfo )
    goto LABEL_46;
  v21 = (UnityEngine_Transform_o *)equipStatusInfo;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.equipStatusInfo, 0LL);
  if ( !v21 )
    goto LABEL_46;
  UnityEngine_Transform__set_parent(v21, (UnityEngine_Transform_o *)equipStatusInfo, 0LL);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj
    || (transform = UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL),
        *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL),
        !transform)
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL),
        (equipStatusInfo = *p_effectObj) == 0LL)
    || (v26 = UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL),
        *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL),
        !v26) )
  {
LABEL_46:
    sub_B2C434(equipStatusInfo, usrEquipData);
  }
  UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
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
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_38381416(
                                                  (int32_t)&lateExp[1],
                                                  (System_String_o *)StringLiteral_340/*"#,0"*/,
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
  sub_B2C2F8(&this->fields.usrEquipEnt, usrEquipData);
  MasterEquipInfoComponent__setEquipSkillInfo(this, v33);
  if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v35 = Kind;
    if ( (BYTE3(Grade_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterEquipBgImage = Grade__GetMasterEquipBgImage(v35, 0LL);
    bg = this->fields.bg;
    partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
    v39 = MasterEquipBgImage;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetGradeBase(bg, v39, partyOrganizationAtlas, 0LL);
  }
  else
  {
    v40 = this->fields.bg;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v40, 0LL);
  }
  skillCheckHelpLb = this->fields.skillCheckHelpLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8636/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, 0LL);
  if ( !skillCheckHelpLb )
    goto LABEL_46;
  UILabel__set_text(skillCheckHelpLb, (System_String_o *)equipStatusInfo, 0LL);
  equipChangeHelpLb = this->fields.equipChangeHelpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8633/*"MASTER_EQUIP_EXPLANATION_TXT"*/, 0LL);
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
  EquipSkillInfoComponent_ClickDelegate_o *v28; // x27
  __int64 v29; // x0

  if ( (byte_4185903 & 1) == 0 )
  {
    sub_B2C35C(&EquipSkillInfoComponent_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___, v5);
    sub_B2C35C(&Method_MasterEquipInfoComponent_setSkillCallBack__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4185903 = 1;
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
        v29 = sub_B2C460(usrEquipEnt);
        sub_B2C400(v29, 0LL);
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
      usrEquipEnt = (UserEquipEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)usrEquipEnt,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                           (DataMasterBase_WarMaster__WarEntity__int__o *)usrEquipEnt,
                                           v12,
                                           (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
                                                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
      v28 = (EquipSkillInfoComponent_ClickDelegate_o *)sub_B2C42C(EquipSkillInfoComponent_ClickDelegate_TypeInfo);
      EquipSkillInfoComponent_ClickDelegate___ctor(
        v28,
        (Il2CppObject *)this,
        Method_MasterEquipInfoComponent_setSkillCallBack__,
        0LL);
      if ( !Component_srcLineSprite )
        break;
      EquipSkillInfoComponent__setEquipSkillInfo(Component_srcLineSprite, v11, v12, v13, v16, IsNew, v28, 0LL);
      LODWORD(userId) = v10->fields.userId;
      if ( (__int64)++v11 >= (int)userId )
        return;
    }
LABEL_22:
    sub_B2C434(usrEquipEnt, method);
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
  __int64 v16; // x1
  SkillEntity_o *Entity; // x21
  DataManager_o *v18; // x20
  System_String_o *v19; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x19
  Il2CppObject *v24; // x0
  System_String_o *v25; // x19
  int datalist; // [xsp+0h] [xbp-40h] BYREF
  int32_t v27; // [xsp+4h] [xbp-3Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-38h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4185904 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillId);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_80/*" "*/, v12);
    sub_B2C35C(&StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_B2C35C(&StringLiteral_2518/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_4185904 = 1;
  }
  name = 0LL;
  detail = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_14;
  Entity = (SkillEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              skillId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Instance )
    goto LABEL_14;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  if ( !Entity )
    goto LABEL_14;
  v18 = Instance;
  SkillEntity__getSkillMessageInfo(Entity, &name, &detail, skillLv, 0LL);
  v19 = name;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_8632/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
  v27 = skillLv;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v22 = System_String__Format(v20, v21, 0LL);
  name = System_String__Concat_44307816(v19, (System_String_o *)StringLiteral_80/*" "*/, v22, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2518/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
  if ( !v18
    || (v23 = (System_String_o *)Instance,
        datalist = (int)v18->fields.datalist,
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &datalist),
        v25 = System_String__Format(v23, v24, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_14:
    sub_B2C434(Instance, v16);
  }
  CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v25, detail, 0, 0, 0LL);
}