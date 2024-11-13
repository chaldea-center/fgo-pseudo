void __fastcall MasterEquipInfoComponent___ctor(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall MasterEquipInfoComponent__getEquipId(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterEquipInfoComponent_o *v3; // x19
  struct UserEquipEntity_o *usrEquipEnt; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v3 = this;
  if ( (byte_4B11501 & 1) == 0 )
  {
    this = (MasterEquipInfoComponent_o *)sub_1BCA7E0(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           method,
                                           v2);
    byte_4B11501 = 1;
  }
  usrEquipEnt = v3->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_1BCAA3C(this, method);
  v6 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL);
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
    sub_1BCAA3C(this, method);
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

  if ( (byte_4B11502 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isDisp, method);
    byte_4B11502 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    v7 = this->fields.effectObj;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
  }
}


void __fastcall MasterEquipInfoComponent__setEquipInfo(
        MasterEquipInfoComponent_o *this,
        UserEquipEntity_o *usrEquipData,
        int64_t usrEquipId,
        int32_t userLv,
        int32_t moveIdx,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_GameObject_o *equipStatusInfo; // x0
  __int64 v25; // x1
  Il2CppObject *equipEffectPrefab; // x21
  Il2CppObject *v27; // x0
  struct UnityEngine_GameObject_o **p_effectObj; // x21
  UnityEngine_Transform_o *v29; // x22
  __int64 v30; // x2
  UnityEngine_Transform_o *v31; // x22
  __int64 v32; // x2
  UnityEngine_Transform_o *v33; // x21
  UILabel_o *equipLevelLb; // x21
  UILabel_o *equipMaxLvLb; // x21
  UILabel_o *equipExpLb; // x21
  const MethodInfo *v37; // x1
  __int64 v38; // x1
  int32_t Kind; // w0
  __int64 v40; // x1
  int32_t v41; // w20
  System_String_o *MasterEquipBgImage; // x0
  __int64 v43; // x1
  UIAtlas_o *partyOrganizationAtlas; // x20
  UISprite_o *bg; // x22
  System_String_o *v46; // x21
  __int64 v47; // x1
  UISprite_o *v48; // x20
  UILabel_o *skillCheckHelpLb; // x20
  UILabel_o *equipChangeHelpLb; // x19
  float barExp[2]; // [xsp+8h] [xbp-58h] BYREF
  int32_t genderImageId[2]; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+20h] [xbp-40h] BYREF
  __int64 maxLv; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4B114FE & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, usrEquipData, usrEquipId);
    sub_1BCA7E0(&Grade_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_8652/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_8649/*"MASTER_EQUIP_EXPLANATION_TXT"*/, v22, v23);
    byte_4B114FE = 1;
  }
  equipName = 0LL;
  maxLv = 0LL;
  *(_QWORD *)genderImageId = 0LL;
  detail = 0LL;
  *(_QWORD *)barExp = 0LL;
  equipStatusInfo = this->fields.equipStatusInfo;
  if ( !equipStatusInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(equipStatusInfo, 0, 0LL);
  this->fields.isChange = 1;
  this->fields.moveEqIdx = moveIdx;
  if ( !usrEquipData )
    goto LABEL_44;
  UserEquipEntity__getEquipInfo(
    usrEquipData,
    (int32_t *)&maxLv + 1,
    (int32_t *)&maxLv,
    &equipName,
    &detail,
    &genderImageId[1],
    0LL);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipIconComp;
  if ( !equipStatusInfo )
    goto LABEL_44;
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)equipStatusInfo, genderImageId[1], 0LL);
  if ( usrEquipData->fields.id != usrEquipId )
    goto LABEL_22;
  equipStatusInfo = this->fields.equipStatusInfo;
  if ( !equipStatusInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(equipStatusInfo, 1, 0LL);
  equipEffectPrefab = (Il2CppObject *)this->fields.equipEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  v27 = UnityEngine_Object__Instantiate_object_(
          equipEffectPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.effectObj = (struct UnityEngine_GameObject_o *)v27;
  p_effectObj = &this->fields.effectObj;
  sub_1BCA784(&this->fields.effectObj, v27);
  equipStatusInfo = this->fields.effectObj;
  if ( !equipStatusInfo )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL);
  if ( !this->fields.equipStatusInfo )
    goto LABEL_44;
  v29 = (UnityEngine_Transform_o *)equipStatusInfo;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.equipStatusInfo, 0LL);
  if ( !v29 )
    goto LABEL_44;
  UnityEngine_Transform__set_parent(v29, (UnityEngine_Transform_o *)equipStatusInfo, 0LL);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL);
  v31 = (UnityEngine_Transform_o *)equipStatusInfo;
  if ( !byte_4B109C1 )
  {
    equipStatusInfo = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, usrEquipData, v30);
    byte_4B109C1 = 1;
  }
  if ( !v31 )
    goto LABEL_44;
  UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL);
  v33 = (UnityEngine_Transform_o *)equipStatusInfo;
  if ( !byte_4B109C6 )
  {
    equipStatusInfo = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, usrEquipData, v32);
    byte_4B109C6 = 1;
  }
  if ( !v33 )
LABEL_44:
    sub_1BCAA3C(equipStatusInfo, usrEquipData);
  UnityEngine_Transform__set_localScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
LABEL_22:
  equipLevelLb = this->fields.equipLevelLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)usrEquipData + 48, 0LL);
  if ( !equipLevelLb )
    goto LABEL_44;
  UILabel__set_text(equipLevelLb, (System_String_o *)equipStatusInfo, 0LL);
  equipMaxLvLb = this->fields.equipMaxLvLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&maxLv, 0LL);
  if ( !equipMaxLvLb )
    goto LABEL_44;
  UILabel__set_text(equipMaxLvLb, (System_String_o *)equipStatusInfo, 0LL);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipNameLb;
  if ( !equipStatusInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)equipStatusInfo, equipName, 0LL);
  UserEquipEntity__getExpInfo(usrEquipData, genderImageId, (int32_t *)&barExp[1], barExp, 0LL);
  equipExpLb = this->fields.equipExpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_63206828(
                                                  (int32_t)&barExp[1],
                                                  (System_String_o *)StringLiteral_424/*"#,0"*/,
                                                  0LL);
  if ( !equipExpLb )
    goto LABEL_44;
  UILabel__set_text(equipExpLb, (System_String_o *)equipStatusInfo, 0LL);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipExpBar;
  if ( !equipStatusInfo )
    goto LABEL_44;
  UIProgressBar__set_value((UIProgressBar_o *)equipStatusInfo, barExp[0], 0LL);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipDetailLb;
  if ( !equipStatusInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)equipStatusInfo, detail, 0LL);
  this->fields.usrEquipEnt = usrEquipData;
  sub_1BCA784(&this->fields.usrEquipEnt, usrEquipData);
  MasterEquipInfoComponent__setEquipSkillInfo(this, v37);
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v38);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v41 = Kind;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo, v40);
    MasterEquipBgImage = Grade__GetMasterEquipBgImage(v41, 0LL);
    bg = this->fields.bg;
    partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
    v46 = MasterEquipBgImage;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v43);
    AtlasManager__SetGradeBase(bg, v46, partyOrganizationAtlas, 0LL);
  }
  else
  {
    v48 = this->fields.bg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v40);
    AtlasManager__SetCommon(v48, 0LL);
  }
  skillCheckHelpLb = this->fields.skillCheckHelpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47);
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8652/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, 0LL);
  if ( !skillCheckHelpLb )
    goto LABEL_44;
  UILabel__set_text(skillCheckHelpLb, (System_String_o *)equipStatusInfo, 0LL);
  equipChangeHelpLb = this->fields.equipChangeHelpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8649/*"MASTER_EQUIP_EXPLANATION_TXT"*/, 0LL);
  if ( !equipChangeHelpLb )
    goto LABEL_44;
  UILabel__set_text(equipChangeHelpLb, (System_String_o *)equipStatusInfo, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipInfoComponent__setEquipSkillInfo(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 usrEquipEnt; // x0
  __int64 v15; // x8
  __int64 v16; // x20
  unsigned __int64 v17; // x21
  int32_t v18; // w23
  int32_t v19; // w24
  bool IsNew; // w25
  UnityEngine_GameObject_o *skillInfoPrefab; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v23; // x26
  __int64 v24; // x2
  UnityEngine_Transform_o *v25; // x27
  UnityEngine_Transform_o *v26; // x27
  int v27; // s0
  Il2CppObject *Component_object; // x26
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  EquipSkillInfoComponent_ClickDelegate_o *v34; // x27
  const MethodInfo *v35; // x3
  int32_t v36; // w4
  const MethodInfo *v37; // x7

  if ( (byte_4B114FF & 1) == 0 )
  {
    sub_1BCA7E0(&EquipSkillInfoComponent_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___, v8, v9);
    sub_1BCA7E0(&Method_MasterEquipInfoComponent_setSkillCallBack__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B114FF = 1;
  }
  usrEquipEnt = (__int64)this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    goto LABEL_24;
  usrEquipEnt = (__int64)UserEquipEntity__getSkillIdList((UserEquipEntity_o *)usrEquipEnt, 0LL);
  if ( !usrEquipEnt )
    goto LABEL_24;
  v15 = *(_QWORD *)(usrEquipEnt + 24);
  v16 = usrEquipEnt;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1BCAA44(usrEquipEnt, method);
      usrEquipEnt = (__int64)this->fields.usrEquipEnt;
      if ( !usrEquipEnt )
        break;
      v18 = *(_DWORD *)(v16 + 32 + 4 * v17);
      usrEquipEnt = UserEquipEntity__getSkillLv((UserEquipEntity_o *)usrEquipEnt, v17, 0LL);
      if ( !this->fields.usrEquipEnt )
        break;
      v19 = usrEquipEnt;
      IsNew = UserEquipEntity__IsNew(this->fields.usrEquipEnt, 0LL);
      usrEquipEnt = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)usrEquipEnt,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (__int64)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)usrEquipEnt,
                               v18,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !usrEquipEnt )
        break;
      SkillEntity__GetIconId((SkillEntity_o *)usrEquipEnt, 0LL);
      usrEquipEnt = (__int64)this->fields.skillInfoGrid;
      if ( !usrEquipEnt )
        break;
      skillInfoPrefab = this->fields.skillInfoPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)usrEquipEnt, 0LL);
      usrEquipEnt = (__int64)BaseMonoBehaviour__createObject(
                               (BaseMonoBehaviour_o *)this,
                               skillInfoPrefab,
                               transform,
                               0LL,
                               0LL);
      if ( !usrEquipEnt )
        break;
      v23 = (UnityEngine_GameObject_o *)usrEquipEnt;
      usrEquipEnt = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)usrEquipEnt, 0LL);
      v25 = (UnityEngine_Transform_o *)usrEquipEnt;
      if ( !byte_4B109C6 )
      {
        usrEquipEnt = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v24);
        byte_4B109C6 = 1;
      }
      if ( !v25 )
        break;
      UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      usrEquipEnt = (__int64)UnityEngine_GameObject__get_transform(v23, 0LL);
      if ( !this->fields.skillInfoGrid )
        break;
      v26 = (UnityEngine_Transform_o *)usrEquipEnt;
      usrEquipEnt = (__int64)UnityEngine_Component__get_transform(
                               (UnityEngine_Component_o *)this->fields.skillInfoGrid,
                               0LL);
      if ( !usrEquipEnt )
        break;
      *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)usrEquipEnt,
                                         0LL);
      if ( !v26 )
        break;
      UnityEngine_Transform__set_localPosition(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v23,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
      v34 = (EquipSkillInfoComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                         EquipSkillInfoComponent_ClickDelegate_TypeInfo,
                                                         v31,
                                                         v32,
                                                         v33);
      EquipSkillInfoComponent_ClickDelegate___ctor(
        v34,
        (Il2CppObject *)this,
        Method_MasterEquipInfoComponent_setSkillCallBack__,
        v35);
      if ( !Component_object )
        break;
      EquipSkillInfoComponent__setEquipSkillInfo(
        (EquipSkillInfoComponent_o *)Component_object,
        v17,
        v18,
        v19,
        v36,
        IsNew,
        v34,
        v37);
      LODWORD(v15) = *(_DWORD *)(v16 + 24);
      if ( (__int64)++v17 >= (int)v15 )
        return;
    }
LABEL_24:
    sub_1BCAA3C(usrEquipEnt, method);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  Il2CppObject *Entity; // x21
  DataManager_o *v27; // x20
  __int64 v28; // x1
  System_String_o *v29; // x21
  System_String_o *v30; // x22
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x19
  Il2CppObject *v34; // x0
  System_String_o *v35; // x19
  int m_CancellationTokenSource; // [xsp+0h] [xbp-60h] BYREF
  int32_t v37; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B11500 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillId, *(_QWORD *)&skillLv);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, v22, v23);
    byte_4B11500 = 1;
  }
  name = 0LL;
  detail = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             skillId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  if ( !Entity )
    goto LABEL_13;
  v27 = Instance;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, skillLv, 0LL);
  v29 = name;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v28);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
  v37 = skillLv;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  v32 = System_String__Format(v30, v31, 0LL);
  name = System_String__Concat_62412480(v29, (System_String_o *)StringLiteral_116/*" "*/, v32, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
  if ( !v27
    || (v33 = (System_String_o *)Instance,
        m_CancellationTokenSource = (int)v27->fields.m_CancellationTokenSource,
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource),
        v35 = System_String__Format(v33, v34, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v25);
  }
  CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v35, detail, 0, 0, 0LL);
}