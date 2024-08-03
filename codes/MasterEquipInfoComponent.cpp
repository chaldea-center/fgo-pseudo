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
  if ( (byte_49F7922 & 1) == 0 )
  {
    this = (MasterEquipInfoComponent_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_49F7922 = 1;
  }
  usrEquipEnt = v2->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_1B64324(this);
  v5 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v7, 0LL);
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
    sub_1B64324(this);
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

  if ( (byte_49F7923 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, isDisp);
    byte_49F7923 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    v6 = this->fields.effectObj;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v6, isDisp, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *equipStatusInfo; // x0
  Il2CppObject *equipEffectPrefab; // x21
  struct UnityEngine_GameObject_o **p_effectObj; // x21
  UnityEngine_Transform_o *v20; // x22
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x22
  __int64 v23; // x1
  UnityEngine_Transform_o *v24; // x21
  UILabel_o *equipLevelLb; // x21
  UILabel_o *equipMaxLvLb; // x21
  UILabel_o *equipExpLb; // x21
  const MethodInfo *v28; // x1
  int32_t Kind; // w0
  int32_t v30; // w20
  System_String_o *MasterEquipBgImage; // x0
  UIAtlas_o *partyOrganizationAtlas; // x20
  UISprite_o *bg; // x22
  System_String_o *v34; // x21
  UISprite_o *v35; // x20
  UILabel_o *skillCheckHelpLb; // x20
  UILabel_o *equipChangeHelpLb; // x19
  float barExp[2]; // [xsp+8h] [xbp-58h] BYREF
  int32_t genderImageId[2]; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+20h] [xbp-40h] BYREF
  __int64 maxLv; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_49F791F & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, usrEquipData);
    sub_1B640C8(&Grade_TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v14);
    sub_1B640C8(&StringLiteral_8486/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, v15);
    sub_1B640C8(&StringLiteral_8483/*"MASTER_EQUIP_EXPLANATION_TXT"*/, v16);
    byte_49F791F = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this->fields.effectObj = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                                equipEffectPrefab,
                                                                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  p_effectObj = &this->fields.effectObj;
  sub_1B6406C(&this->fields.effectObj);
  equipStatusInfo = this->fields.effectObj;
  if ( !equipStatusInfo )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL);
  if ( !this->fields.equipStatusInfo )
    goto LABEL_44;
  v20 = (UnityEngine_Transform_o *)equipStatusInfo;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.equipStatusInfo, 0LL);
  if ( !v20 )
    goto LABEL_44;
  UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)equipStatusInfo, 0LL);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL);
  v22 = (UnityEngine_Transform_o *)equipStatusInfo;
  if ( !byte_49F7111 )
  {
    equipStatusInfo = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
    byte_49F7111 = 1;
  }
  if ( !v22 )
    goto LABEL_44;
  UnityEngine_Transform__set_localPosition(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0LL);
  v24 = (UnityEngine_Transform_o *)equipStatusInfo;
  if ( !byte_49F7116 )
  {
    equipStatusInfo = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v23);
    byte_49F7116 = 1;
  }
  if ( !v24 )
LABEL_44:
    sub_1B64324(equipStatusInfo);
  UnityEngine_Transform__set_localScale(v24, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
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
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_62180668(
                                                  (int32_t)&barExp[1],
                                                  (System_String_o *)StringLiteral_430/*"#,0"*/,
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
  sub_1B6406C(&this->fields.usrEquipEnt);
  MasterEquipInfoComponent__setEquipSkillInfo(this, v28);
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0LL);
  if ( Kind )
  {
    v30 = Kind;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterEquipBgImage = Grade__GetMasterEquipBgImage(v30, 0LL);
    bg = this->fields.bg;
    partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
    v34 = MasterEquipBgImage;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetGradeBase(bg, v34, partyOrganizationAtlas, 0LL);
  }
  else
  {
    v35 = this->fields.bg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(v35, 0LL);
  }
  skillCheckHelpLb = this->fields.skillCheckHelpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8486/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, 0LL);
  if ( !skillCheckHelpLb )
    goto LABEL_44;
  UILabel__set_text(skillCheckHelpLb, (System_String_o *)equipStatusInfo, 0LL);
  equipChangeHelpLb = this->fields.equipChangeHelpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8483/*"MASTER_EQUIP_EXPLANATION_TXT"*/, 0LL);
  if ( !equipChangeHelpLb )
    goto LABEL_44;
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
  __int64 usrEquipEnt; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  __int64 v11; // x20
  unsigned __int64 v12; // x21
  int32_t v13; // w23
  int32_t v14; // w24
  bool IsNew; // w25
  UnityEngine_GameObject_o *skillInfoPrefab; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v18; // x26
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x27
  UnityEngine_Transform_o *v21; // x27
  int v22; // s0
  Il2CppObject *Component_object; // x26
  __int64 v26; // x1
  __int64 v27; // x2
  EquipSkillInfoComponent_ClickDelegate_o *v28; // x27
  const MethodInfo *v29; // x3
  int32_t v30; // w4
  const MethodInfo *v31; // x7

  if ( (byte_49F7920 & 1) == 0 )
  {
    sub_1B640C8(&EquipSkillInfoComponent_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v3);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___, v5);
    sub_1B640C8(&Method_MasterEquipInfoComponent_setSkillCallBack__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49F7920 = 1;
  }
  usrEquipEnt = (__int64)this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    goto LABEL_24;
  usrEquipEnt = (__int64)UserEquipEntity__getSkillIdList((UserEquipEntity_o *)usrEquipEnt, 0LL);
  if ( !usrEquipEnt )
    goto LABEL_24;
  v10 = *(_QWORD *)(usrEquipEnt + 24);
  v11 = usrEquipEnt;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v10 )
        sub_1B6432C(usrEquipEnt, v9);
      usrEquipEnt = (__int64)this->fields.usrEquipEnt;
      if ( !usrEquipEnt )
        break;
      v13 = *(_DWORD *)(v11 + 32 + 4 * v12);
      usrEquipEnt = UserEquipEntity__getSkillLv((UserEquipEntity_o *)usrEquipEnt, v12, 0LL);
      if ( !this->fields.usrEquipEnt )
        break;
      v14 = usrEquipEnt;
      IsNew = UserEquipEntity__IsNew(this->fields.usrEquipEnt, 0LL);
      usrEquipEnt = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)usrEquipEnt,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (__int64)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)usrEquipEnt,
                               v13,
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
      v18 = (UnityEngine_GameObject_o *)usrEquipEnt;
      usrEquipEnt = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)usrEquipEnt, 0LL);
      v20 = (UnityEngine_Transform_o *)usrEquipEnt;
      if ( !byte_49F7116 )
      {
        usrEquipEnt = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v19);
        byte_49F7116 = 1;
      }
      if ( !v20 )
        break;
      UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      usrEquipEnt = (__int64)UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !this->fields.skillInfoGrid )
        break;
      v21 = (UnityEngine_Transform_o *)usrEquipEnt;
      usrEquipEnt = (__int64)UnityEngine_Component__get_transform(
                               (UnityEngine_Component_o *)this->fields.skillInfoGrid,
                               0LL);
      if ( !usrEquipEnt )
        break;
      *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition(
                                         (UnityEngine_Transform_o *)usrEquipEnt,
                                         0LL);
      if ( !v21 )
        break;
      UnityEngine_Transform__set_localPosition(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v18,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
      v28 = (EquipSkillInfoComponent_ClickDelegate_o *)sub_1B64314(
                                                         EquipSkillInfoComponent_ClickDelegate_TypeInfo,
                                                         v26,
                                                         v27);
      EquipSkillInfoComponent_ClickDelegate___ctor(
        v28,
        (Il2CppObject *)this,
        Method_MasterEquipInfoComponent_setSkillCallBack__,
        v29);
      if ( !Component_object )
        break;
      EquipSkillInfoComponent__setEquipSkillInfo(
        (EquipSkillInfoComponent_o *)Component_object,
        v12,
        v13,
        v14,
        v30,
        IsNew,
        v28,
        v31);
      LODWORD(v10) = *(_DWORD *)(v11 + 24);
      if ( (__int64)++v12 >= (int)v10 )
        return;
    }
LABEL_24:
    sub_1B64324(usrEquipEnt);
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
  Il2CppObject *Entity; // x21
  DataManager_o *v17; // x20
  System_String_o *v18; // x21
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  Il2CppObject *v23; // x0
  System_String_o *v24; // x19
  int m_CancellationTokenSource; // [xsp+0h] [xbp-60h] BYREF
  int32_t v26; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49F7921 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillId);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v6);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_117/*" "*/, v12);
    sub_1B640C8(&StringLiteral_8482/*"MASTER_EQSKILL_LV_TXT"*/, v13);
    sub_1B640C8(&StringLiteral_2963/*"BATTLE_SKILLCHARGETURN"*/, v14);
    byte_49F7921 = 1;
  }
  name = 0LL;
  detail = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             skillId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0LL);
  if ( !Entity )
    goto LABEL_13;
  v17 = Instance;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, skillLv, 0LL);
  v18 = name;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8482/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
  v26 = skillLv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  v21 = System_String__Format(v19, v20, 0LL);
  name = System_String__Concat_61386656(v18, (System_String_o *)StringLiteral_117/*" "*/, v21, 0LL);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2963/*"BATTLE_SKILLCHARGETURN"*/, 0LL);
  if ( !v17
    || (v22 = (System_String_o *)Instance,
        m_CancellationTokenSource = (int)v17->fields.m_CancellationTokenSource,
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource),
        v24 = System_String__Format(v22, v23, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_13:
    sub_1B64324(Instance);
  }
  CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v24, detail, 0, 0, 0LL);
}