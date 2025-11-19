void MasterEquipInfoComponent___ctor(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t MasterEquipInfoComponent__getEquipId(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  MasterEquipInfoComponent_o *v2; // x19
  struct UserEquipEntity_o *usrEquipEnt; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_4CB10E2 & 1) == 0 )
  {
    this = (MasterEquipInfoComponent_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB10E2 = 1;
  }
  usrEquipEnt = v2->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_1C6BC60(this, method);
  v5 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v7, 0);
}


int32_t MasterEquipInfoComponent__getMoveBannerIdx(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.moveEqIdx;
}


int64_t MasterEquipInfoComponent__getUsrEquipId(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  struct UserEquipEntity_o *usrEquipEnt; // x8

  usrEquipEnt = this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_1C6BC60(this, method);
  return usrEquipEnt->fields.id;
}


bool MasterEquipInfoComponent__isChangeEquip(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  return this->fields.isChange;
}


void MasterEquipInfoComponent__setDispEffectObj(
        MasterEquipInfoComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4CB10E3 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB10E3 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObj, 0, 0) )
  {
    v7 = this->fields.effectObj;
    if ( !v7 )
      sub_1C6BC60(0, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0);
  }
}


void MasterEquipInfoComponent__setEquipInfo(
        MasterEquipInfoComponent_o *this,
        UserEquipEntity_o *usrEquipData,
        int64_t usrEquipId,
        int32_t userLv,
        int32_t moveIdx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *equipStatusInfo; // x0
  Il2CppObject *equipEffectPrefab; // x21
  Il2CppObject *v12; // x0
  struct UnityEngine_GameObject_o **p_effectObj; // x21
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x22
  UnityEngine_Transform_o *v16; // x21
  UILabel_o *equipLevelLb; // x21
  UILabel_o *equipMaxLvLb; // x21
  UILabel_o *equipExpLb; // x21
  const MethodInfo *v20; // x1
  int32_t Kind; // w0
  int32_t v22; // w20
  System_String_o *MasterEquipBgImage; // x0
  UIAtlas_o *partyOrganizationAtlas; // x20
  UISprite_o *bg; // x22
  System_String_o *v26; // x21
  UISprite_o *v27; // x20
  UILabel_o *skillCheckHelpLb; // x20
  UILabel_o *equipChangeHelpLb; // x19
  __int64 barExp; // [xsp+8h] [xbp-58h] BYREF
  int32_t genderImageId[2]; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+20h] [xbp-40h] BYREF
  int32_t maxLv[2]; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4CB10DF & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&Grade_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_396/*"#,0"*/);
    sub_1C6BA08(&StringLiteral_8551/*"MASTER_EQUIP_SKILL_INFO_TXT"*/);
    sub_1C6BA08(&StringLiteral_8548/*"MASTER_EQUIP_EXPLANATION_TXT"*/);
    byte_4CB10DF = 1;
  }
  equipName = 0;
  *(_QWORD *)maxLv = 0;
  *(_QWORD *)genderImageId = 0;
  detail = 0;
  barExp = 0;
  equipStatusInfo = this->fields.equipStatusInfo;
  if ( !equipStatusInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(equipStatusInfo, 0, 0);
  this->fields.isChange = 1;
  this->fields.moveEqIdx = moveIdx;
  if ( !usrEquipData )
    goto LABEL_44;
  UserEquipEntity__getEquipInfo(usrEquipData, &maxLv[1], maxLv, &equipName, &detail, &genderImageId[1], 0);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipIconComp;
  if ( !equipStatusInfo )
    goto LABEL_44;
  ItemIconComponent__SetEquipItem((ItemIconComponent_o *)equipStatusInfo, genderImageId[1], 0);
  if ( usrEquipData->fields.id != usrEquipId )
    goto LABEL_22;
  equipStatusInfo = this->fields.equipStatusInfo;
  if ( !equipStatusInfo )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive(equipStatusInfo, 1, 0);
  equipEffectPrefab = (Il2CppObject *)this->fields.equipEffectPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object_(
          equipEffectPrefab,
          (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  this->fields.effectObj = (struct UnityEngine_GameObject_o *)v12;
  p_effectObj = &this->fields.effectObj;
  sub_1C6B9AC(&this->fields.effectObj, v12);
  equipStatusInfo = this->fields.effectObj;
  if ( !equipStatusInfo )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0);
  if ( !this->fields.equipStatusInfo )
    goto LABEL_44;
  v14 = (UnityEngine_Transform_o *)equipStatusInfo;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.equipStatusInfo, 0);
  if ( !v14 )
    goto LABEL_44;
  UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)equipStatusInfo, 0);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0);
  v15 = (UnityEngine_Transform_o *)equipStatusInfo;
  if ( !byte_4CAFC09 )
  {
    equipStatusInfo = (UnityEngine_GameObject_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC09 = 1;
  }
  if ( !v15 )
    goto LABEL_44;
  UnityEngine_Transform__set_localPosition(v15, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0);
  v16 = (UnityEngine_Transform_o *)equipStatusInfo;
  if ( !byte_4CAFC0E )
  {
    equipStatusInfo = (UnityEngine_GameObject_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
    byte_4CAFC0E = 1;
  }
  if ( !v16 )
LABEL_44:
    sub_1C6BC60(equipStatusInfo, usrEquipData);
  UnityEngine_Transform__set_localScale(v16, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
LABEL_22:
  equipLevelLb = this->fields.equipLevelLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)usrEquipData + 48, 0);
  if ( !equipLevelLb )
    goto LABEL_44;
  UILabel__set_text(equipLevelLb, (System_String_o *)equipStatusInfo, 0);
  equipMaxLvLb = this->fields.equipMaxLvLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)maxLv, 0);
  if ( !equipMaxLvLb )
    goto LABEL_44;
  UILabel__set_text(equipMaxLvLb, (System_String_o *)equipStatusInfo, 0);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipNameLb;
  if ( !equipStatusInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)equipStatusInfo, equipName, 0);
  UserEquipEntity__getExpInfo(usrEquipData, genderImageId, (int32_t *)&barExp + 1, (float *)&barExp, 0);
  equipExpLb = this->fields.equipExpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_65475288(
                                                  (int32_t)&barExp + 4,
                                                  (System_String_o *)StringLiteral_396/*"#,0"*/,
                                                  0);
  if ( !equipExpLb )
    goto LABEL_44;
  UILabel__set_text(equipExpLb, (System_String_o *)equipStatusInfo, 0);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipExpBar;
  if ( !equipStatusInfo )
    goto LABEL_44;
  UIProgressBar__set_value((UIProgressBar_o *)equipStatusInfo, *(float *)&barExp, 0);
  equipStatusInfo = (UnityEngine_GameObject_o *)this->fields.equipDetailLb;
  if ( !equipStatusInfo )
    goto LABEL_44;
  UILabel__set_text((UILabel_o *)equipStatusInfo, detail, 0);
  this->fields.usrEquipEnt = usrEquipData;
  sub_1C6B9AC(&this->fields.usrEquipEnt, usrEquipData);
  MasterEquipInfoComponent__setEquipSkillInfo(this, v20);
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0);
  if ( Kind )
  {
    v22 = Kind;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterEquipBgImage = Grade__GetMasterEquipBgImage(v22, 0);
    bg = this->fields.bg;
    partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
    v26 = MasterEquipBgImage;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetGradeBase(bg, v26, partyOrganizationAtlas, 0);
  }
  else
  {
    v27 = this->fields.bg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(v27, 0);
  }
  skillCheckHelpLb = this->fields.skillCheckHelpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8551/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, 0);
  if ( !skillCheckHelpLb )
    goto LABEL_44;
  UILabel__set_text(skillCheckHelpLb, (System_String_o *)equipStatusInfo, 0);
  equipChangeHelpLb = this->fields.equipChangeHelpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8548/*"MASTER_EQUIP_EXPLANATION_TXT"*/, 0);
  if ( !equipChangeHelpLb )
    goto LABEL_44;
  UILabel__set_text(equipChangeHelpLb, (System_String_o *)equipStatusInfo, 0);
}


void MasterEquipInfoComponent__setEquipSkillInfo(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  __int64 usrEquipEnt; // x0
  __int64 v4; // x8
  __int64 v5; // x20
  unsigned __int64 v6; // x21
  int32_t v7; // w23
  int32_t v8; // w24
  bool IsNew; // w25
  UnityEngine_GameObject_o *skillInfoPrefab; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v12; // x26
  UnityEngine_Transform_o *v13; // x27
  UnityEngine_Transform_o *v14; // x27
  Il2CppObject *Component_object; // x26
  EquipSkillInfoComponent_ClickDelegate_o *v16; // x27
  const MethodInfo *v17; // x3
  int32_t v18; // w4
  const MethodInfo *v19; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB10E0 & 1) == 0 )
  {
    sub_1C6BA08(&EquipSkillInfoComponent_ClickDelegate_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
    sub_1C6BA08(&Method_MasterEquipInfoComponent_setSkillCallBack__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB10E0 = 1;
  }
  usrEquipEnt = (__int64)this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    goto LABEL_24;
  usrEquipEnt = (__int64)UserEquipEntity__getSkillIdList((UserEquipEntity_o *)usrEquipEnt, 0);
  if ( !usrEquipEnt )
    goto LABEL_24;
  v4 = *(_QWORD *)(usrEquipEnt + 24);
  v5 = usrEquipEnt;
  if ( (int)v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1C6BC68(usrEquipEnt);
      usrEquipEnt = (__int64)this->fields.usrEquipEnt;
      if ( !usrEquipEnt )
        break;
      v7 = *(_DWORD *)(v5 + 32 + 4 * v6);
      usrEquipEnt = UserEquipEntity__getSkillLv((UserEquipEntity_o *)usrEquipEnt, v6, 0);
      if ( !this->fields.usrEquipEnt )
        break;
      v8 = usrEquipEnt;
      IsNew = UserEquipEntity__IsNew(this->fields.usrEquipEnt, 0);
      usrEquipEnt = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (__int64)DataManager__GetMasterData_object_(
                               (DataManager_o *)usrEquipEnt,
                               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (__int64)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)usrEquipEnt,
                               v7,
                               (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !usrEquipEnt )
        break;
      SkillEntity__GetIconId((SkillEntity_o *)usrEquipEnt, 0);
      usrEquipEnt = (__int64)this->fields.skillInfoGrid;
      if ( !usrEquipEnt )
        break;
      skillInfoPrefab = this->fields.skillInfoPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)usrEquipEnt, 0);
      usrEquipEnt = (__int64)BaseMonoBehaviour__createObject(
                               (BaseMonoBehaviour_o *)this,
                               skillInfoPrefab,
                               transform,
                               0,
                               0);
      if ( !usrEquipEnt )
        break;
      v12 = (UnityEngine_GameObject_o *)usrEquipEnt;
      usrEquipEnt = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)usrEquipEnt, 0);
      v13 = (UnityEngine_Transform_o *)usrEquipEnt;
      if ( !byte_4CAFC0E )
      {
        usrEquipEnt = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC0E = 1;
      }
      if ( !v13 )
        break;
      UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      usrEquipEnt = (__int64)UnityEngine_GameObject__get_transform(v12, 0);
      if ( !this->fields.skillInfoGrid )
        break;
      v14 = (UnityEngine_Transform_o *)usrEquipEnt;
      usrEquipEnt = (__int64)UnityEngine_Component__get_transform(
                               (UnityEngine_Component_o *)this->fields.skillInfoGrid,
                               0);
      if ( !usrEquipEnt )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)usrEquipEnt, 0);
      if ( !v14 )
        break;
      UnityEngine_Transform__set_localPosition(v14, localPosition, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v12,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
      v16 = (EquipSkillInfoComponent_ClickDelegate_o *)sub_1C6BC54(EquipSkillInfoComponent_ClickDelegate_TypeInfo);
      EquipSkillInfoComponent_ClickDelegate___ctor(
        v16,
        (Il2CppObject *)this,
        Method_MasterEquipInfoComponent_setSkillCallBack__,
        v17);
      if ( !Component_object )
        break;
      EquipSkillInfoComponent__setEquipSkillInfo(
        (EquipSkillInfoComponent_o *)Component_object,
        v6,
        v7,
        v8,
        v18,
        IsNew,
        v16,
        v19);
      LODWORD(v4) = *(_DWORD *)(v5 + 24);
      if ( (__int64)++v6 >= (int)v4 )
        return;
    }
LABEL_24:
    sub_1C6BC60(usrEquipEnt, method);
  }
}


void MasterEquipInfoComponent__setSkillCallBack(
        MasterEquipInfoComponent_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x21
  DataManager_o *v9; // x20
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x19
  Il2CppObject *v15; // x0
  System_String_o *v16; // x19
  int m_CancellationTokenSource; // [xsp+0h] [xbp-60h] BYREF
  int32_t v18; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CB10E1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C6BA08(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_113/*" "*/);
    sub_1C6BA08(&StringLiteral_8547/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C6BA08(&StringLiteral_2864/*"BATTLE_SKILLCHARGETURN"*/);
    byte_4CB10E1 = 1;
  }
  name = 0;
  detail = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             skillId,
             (const MethodInfo_33F90DC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, skillId, skillLv, 0);
  if ( !Entity )
    goto LABEL_13;
  v9 = Instance;
  SkillEntity__getSkillMessageInfo((SkillEntity_o *)Entity, &name, &detail, skillLv, 0);
  v10 = name;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8547/*"MASTER_EQSKILL_LV_TXT"*/, 0);
  v18 = skillLv;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v13 = System_String__Format(v11, v12, 0);
  name = System_String__Concat_64005056(v10, (System_String_o *)StringLiteral_113/*" "*/, v13, 0);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2864/*"BATTLE_SKILLCHARGETURN"*/, 0);
  if ( !v9
    || (v14 = (System_String_o *)Instance,
        m_CancellationTokenSource = (int)v9->fields.m_CancellationTokenSource,
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource),
        v16 = System_String__Format(v14, v15, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_1C6BC60(Instance, v7);
  }
  CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v16, detail, 0, 0, 0);
}