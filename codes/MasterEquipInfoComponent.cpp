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
  if ( (byte_4C22161 & 1) == 0 )
  {
    this = (MasterEquipInfoComponent_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C22161 = 1;
  }
  usrEquipEnt = v2->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    sub_1C2D6EC(this, method);
  v5 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&usrEquipEnt->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v7, 0);
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C22162 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22162 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObj, 0, 0) )
  {
    v7 = this->fields.effectObj;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
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
  struct UnityEngine_GameObject_o **p_effectObj; // x21
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x21
  UILabel_o *equipLevelLb; // x21
  UILabel_o *equipMaxLvLb; // x21
  UILabel_o *equipExpLb; // x21
  const MethodInfo *v19; // x1
  int32_t Kind; // w0
  int32_t v21; // w20
  System_String_o *MasterEquipBgImage; // x0
  UIAtlas_o *partyOrganizationAtlas; // x20
  UISprite_o *bg; // x22
  System_String_o *v25; // x21
  UISprite_o *v26; // x20
  UILabel_o *skillCheckHelpLb; // x20
  UILabel_o *equipChangeHelpLb; // x19
  __int64 barExp; // [xsp+8h] [xbp-58h] BYREF
  int32_t genderImageId[2]; // [xsp+10h] [xbp-50h] BYREF
  System_String_o *detail; // [xsp+18h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+20h] [xbp-40h] BYREF
  int32_t maxLv[2]; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C2215E & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Grade_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_397/*"#,0"*/);
    sub_1C2D490(&StringLiteral_8547/*"MASTER_EQUIP_SKILL_INFO_TXT"*/);
    sub_1C2D490(&StringLiteral_8544/*"MASTER_EQUIP_EXPLANATION_TXT"*/);
    byte_4C2215E = 1;
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
  this->fields.effectObj = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                                equipEffectPrefab,
                                                                (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  p_effectObj = &this->fields.effectObj;
  sub_1C2D434(&this->fields.effectObj);
  equipStatusInfo = this->fields.effectObj;
  if ( !equipStatusInfo )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0);
  if ( !this->fields.equipStatusInfo )
    goto LABEL_44;
  v13 = (UnityEngine_Transform_o *)equipStatusInfo;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.equipStatusInfo, 0);
  if ( !v13 )
    goto LABEL_44;
  UnityEngine_Transform__set_parent(v13, (UnityEngine_Transform_o *)equipStatusInfo, 0);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0);
  v14 = (UnityEngine_Transform_o *)equipStatusInfo;
  if ( !byte_4C20DA1 )
  {
    equipStatusInfo = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v14 )
    goto LABEL_44;
  UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  equipStatusInfo = *p_effectObj;
  if ( !*p_effectObj )
    goto LABEL_44;
  equipStatusInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(equipStatusInfo, 0);
  v15 = (UnityEngine_Transform_o *)equipStatusInfo;
  if ( !byte_4C20DA6 )
  {
    equipStatusInfo = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v15 )
LABEL_44:
    sub_1C2D6EC(equipStatusInfo, usrEquipData);
  UnityEngine_Transform__set_localScale(v15, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
  equipStatusInfo = (UnityEngine_GameObject_o *)System_Int32__ToString_64968716(
                                                  (int32_t)&barExp + 4,
                                                  (System_String_o *)StringLiteral_397/*"#,0"*/,
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
  sub_1C2D434(&this->fields.usrEquipEnt);
  MasterEquipInfoComponent__setEquipSkillInfo(this, v19);
  if ( !Grade_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
  Kind = Grade__GetKind(0);
  if ( Kind )
  {
    v21 = Kind;
    if ( !Grade_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Grade_TypeInfo);
    MasterEquipBgImage = Grade__GetMasterEquipBgImage(v21, 0);
    bg = this->fields.bg;
    partyOrganizationAtlas = this->fields.partyOrganizationAtlas;
    v25 = MasterEquipBgImage;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetGradeBase(bg, v25, partyOrganizationAtlas, 0);
  }
  else
  {
    v26 = this->fields.bg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(v26, 0);
  }
  skillCheckHelpLb = this->fields.skillCheckHelpLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8547/*"MASTER_EQUIP_SKILL_INFO_TXT"*/, 0);
  if ( !skillCheckHelpLb )
    goto LABEL_44;
  UILabel__set_text(skillCheckHelpLb, (System_String_o *)equipStatusInfo, 0);
  equipChangeHelpLb = this->fields.equipChangeHelpLb;
  equipStatusInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8544/*"MASTER_EQUIP_EXPLANATION_TXT"*/, 0);
  if ( !equipChangeHelpLb )
    goto LABEL_44;
  UILabel__set_text(equipChangeHelpLb, (System_String_o *)equipStatusInfo, 0);
}


void MasterEquipInfoComponent__setEquipSkillInfo(MasterEquipInfoComponent_o *this, const MethodInfo *method)
{
  UserEquipEntity_o *usrEquipEnt; // x0
  __int64 v4; // x2
  int64_t userId; // x8
  UserEquipEntity_o *v6; // x20
  unsigned __int64 v7; // x21
  int32_t v8; // w23
  int32_t v9; // w24
  bool IsNew; // w25
  UnityEngine_GameObject_o *skillInfoPrefab; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v13; // x26
  UnityEngine_Transform_o *v14; // x27
  UnityEngine_Transform_o *v15; // x27
  Il2CppObject *Component_object; // x26
  EquipSkillInfoComponent_ClickDelegate_o *v17; // x27
  const MethodInfo *v18; // x3
  int32_t v19; // w4
  const MethodInfo *v20; // x7
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2215F & 1) == 0 )
  {
    sub_1C2D490(&EquipSkillInfoComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
    sub_1C2D490(&Method_MasterEquipInfoComponent_setSkillCallBack__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2215F = 1;
  }
  usrEquipEnt = this->fields.usrEquipEnt;
  if ( !usrEquipEnt )
    goto LABEL_24;
  usrEquipEnt = (UserEquipEntity_o *)UserEquipEntity__getSkillIdList(usrEquipEnt, 0);
  if ( !usrEquipEnt )
    goto LABEL_24;
  userId = usrEquipEnt->fields.userId;
  v6 = usrEquipEnt;
  if ( (int)userId >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)userId )
        sub_1C2D6F4(usrEquipEnt, method, v4);
      usrEquipEnt = this->fields.usrEquipEnt;
      if ( !usrEquipEnt )
        break;
      v8 = *(&v6->fields.equipId.fields.currentCryptoKey + v7);
      usrEquipEnt = (UserEquipEntity_o *)UserEquipEntity__getSkillLv(usrEquipEnt, v7, 0);
      if ( !this->fields.usrEquipEnt )
        break;
      v9 = (int)usrEquipEnt;
      IsNew = UserEquipEntity__IsNew(this->fields.usrEquipEnt, 0);
      usrEquipEnt = (UserEquipEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)usrEquipEnt,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
      if ( !usrEquipEnt )
        break;
      usrEquipEnt = (UserEquipEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)usrEquipEnt,
                                           v8,
                                           (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
      if ( !usrEquipEnt )
        break;
      SkillEntity__GetIconId((SkillEntity_o *)usrEquipEnt, 0);
      usrEquipEnt = (UserEquipEntity_o *)this->fields.skillInfoGrid;
      if ( !usrEquipEnt )
        break;
      skillInfoPrefab = this->fields.skillInfoPrefab;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)usrEquipEnt, 0);
      usrEquipEnt = (UserEquipEntity_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           skillInfoPrefab,
                                           transform,
                                           0,
                                           0);
      if ( !usrEquipEnt )
        break;
      v13 = (UnityEngine_GameObject_o *)usrEquipEnt;
      usrEquipEnt = (UserEquipEntity_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)usrEquipEnt,
                                           0);
      v14 = (UnityEngine_Transform_o *)usrEquipEnt;
      if ( !byte_4C20DA6 )
      {
        usrEquipEnt = (UserEquipEntity_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v14 )
        break;
      UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      usrEquipEnt = (UserEquipEntity_o *)UnityEngine_GameObject__get_transform(v13, 0);
      if ( !this->fields.skillInfoGrid )
        break;
      v15 = (UnityEngine_Transform_o *)usrEquipEnt;
      usrEquipEnt = (UserEquipEntity_o *)UnityEngine_Component__get_transform(
                                           (UnityEngine_Component_o *)this->fields.skillInfoGrid,
                                           0);
      if ( !usrEquipEnt )
        break;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)usrEquipEnt, 0);
      if ( !v15 )
        break;
      UnityEngine_Transform__set_localPosition(v15, localPosition, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v13,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EquipSkillInfoComponent___);
      v17 = (EquipSkillInfoComponent_ClickDelegate_o *)sub_1C2D6DC(EquipSkillInfoComponent_ClickDelegate_TypeInfo);
      EquipSkillInfoComponent_ClickDelegate___ctor(
        v17,
        (Il2CppObject *)this,
        Method_MasterEquipInfoComponent_setSkillCallBack__,
        v18);
      if ( !Component_object )
        break;
      EquipSkillInfoComponent__setEquipSkillInfo(
        (EquipSkillInfoComponent_o *)Component_object,
        v7,
        v8,
        v9,
        v19,
        IsNew,
        v17,
        v20);
      LODWORD(userId) = v6->fields.userId;
      if ( (__int64)++v7 >= (int)userId )
        return;
    }
LABEL_24:
    sub_1C2D6EC(usrEquipEnt, method);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_String_o *v20; // x19
  Il2CppObject *v21; // x0
  System_String_o *v22; // x19
  int m_CancellationTokenSource; // [xsp+0h] [xbp-60h] BYREF
  int32_t v24; // [xsp+4h] [xbp-5Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-58h] BYREF
  System_String_o *name; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C22160 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_113/*" "*/);
    sub_1C2D490(&StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/);
    sub_1C2D490(&StringLiteral_2869/*"BATTLE_SKILLCHARGETURN"*/);
    byte_4C22160 = 1;
  }
  name = 0;
  detail = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !Instance )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             skillId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_8543/*"MASTER_EQSKILL_LV_TXT"*/, 0);
  v24 = skillLv;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v12, v13, v14);
  v16 = System_String__Format(v11, v15, 0);
  name = System_String__Concat_63496112(v10, (System_String_o *)StringLiteral_113/*" "*/, v16, 0);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2869/*"BATTLE_SKILLCHARGETURN"*/, 0);
  if ( !v9
    || (v20 = (System_String_o *)Instance,
        m_CancellationTokenSource = (int)v9->fields.m_CancellationTokenSource,
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CancellationTokenSource, v17, v18, v19),
        v22 = System_String__Format(v20, v21, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_13:
    sub_1C2D6EC(Instance, v7);
  }
  CommonUI__OpenDetailLongInfoDialog((CommonUI_o *)Instance, name, v22, detail, 0, 0, 0);
}