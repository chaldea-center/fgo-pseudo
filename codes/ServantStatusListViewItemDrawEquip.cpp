void __fastcall ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct ServantStatusListViewItemDrawEquip_StaticFields *static_fields; // x8

  if ( (byte_4B131FD & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusListViewItemDrawEquip_TypeInfo, v1, v2);
    byte_4B131FD = 1;
  }
  static_fields = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquip___ctor(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
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
  BalanceConfig_c *v12; // x0
  struct UnityEngine_GameObject_array *v13; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct SkillIconComponent_array *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct UIRangeLabel_array *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct UILabel_array *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B131FC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, v4, v5);
    sub_1BCA7E0(&SkillIconComponent___TypeInfo, v6, v7);
    sub_1BCA7E0(&UILabel___TypeInfo, v8, v9);
    sub_1BCA7E0(&UIRangeLabel___TypeInfo, v10, v11);
    byte_4B131FC = 1;
  }
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v12 = BalanceConfig_TypeInfo;
  }
  v13 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)v12->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillBaseList = v13;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipSkillBaseList,
    (int64_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (struct SkillIconComponent_array *)sub_1BCA888(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.equipSkillIcon, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = (struct UIRangeLabel_array *)sub_1BCA888(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v27;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipSkillTitleRangeLabelList,
    (int64_t)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (struct UILabel_array *)sub_1BCA888(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v34;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.equipSkillExplanationLabelList,
    (int64_t)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_BD3490;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquip__Awake(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  ServantStatusListViewItemDrawEquip_o *v3; // x19
  float v4; // s1
  struct UnityEngine_GameObject_array *v5; // x8
  float v6; // s8
  float v7; // s1
  unsigned int v8; // w9
  struct UISprite_o *baseSprite; // x9
  int v10; // w20
  float v11; // s1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  int v15; // w9
  struct UnityEngine_GameObject_array *v16; // x8
  float v17; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_24;
  v3 = this;
  if ( (int)equipSkillBaseList->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquip_o *)equipSkillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.equipSkillBaseList;
    if ( !v5 )
      goto LABEL_24;
    if ( v5->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquip_o *)v5->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v6 = v4;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    equipSkillBaseList = v3->fields.equipSkillBaseList;
    v8 = (float)(v6 - v7) == INFINITY ? 0x80000000 : (int)(float)(v6 - v7);
    v3->fields.skillPitch = v8;
    if ( !equipSkillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)v3->fields.titleSprite;
  v10 = v3->fields.skillPitch * equipSkillBaseList->max_length;
  v11 = (float)(baseSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v11;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v15 = v10 >= 0 ? v10 : v10 + 1;
  v16 = v3->fields.equipSkillBaseList;
  v17 = (float)(v15 >> 1);
  v3->fields.titleBasePosition.fields.x = v12;
  v3->fields.titleBasePosition.fields.z = v14;
  v3->fields.titleBasePosition.fields.y = v13 - v17;
  if ( !v16 )
LABEL_24:
    sub_1BCAA3C(this, method);
  if ( !v16->max_length )
LABEL_25:
    sub_1BCAA44(this, method);
  this = (ServantStatusListViewItemDrawEquip_o *)v16->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.x = localPosition.fields.x;
  v3->fields.skillBasePosition.fields.z = localPosition.fields.z;
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v17;
}


int32_t __fastcall ServantStatusListViewItemDrawEquip__GetKind(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  return 3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquip__SetItem(
        ServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *explanationLabel; // x21
  SkillIconComponent_o *equipIcon; // x0
  System_String_o *equipTargetId1; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  struct ServantFaceIconComponent_o *v26; // x8
  struct ServantLeaderInfo_o *v27; // x9
  UIRangeLabel_o *nameRangeLabel; // x21
  UIExtrusionLabel_o *levelLabel; // x21
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *costLabel; // x21
  UIIconLabel_o *attackIconLabel; // x21
  UIIconLabel_o *hpIconLabel; // x21
  __int64 v34; // x1
  UILabel_o *lateExpLabel; // x21
  int32_t v36; // w22
  struct ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w2
  int32_t v40; // w1
  ServantStatusLimitCountGauge_o *v41; // x0
  struct SkillIconComponent_array *equipSkillIcon; // x8
  __int64 v43; // x10
  unsigned __int64 max_length; // x9
  int v45; // w22
  signed __int64 v46; // x8
  SkillInfo_o *v47; // x13
  UnityEngine_Object_o *lineSprite; // x21
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  char v50; // w26
  int v51; // w25
  __int64 v52; // x28
  __int64 v53; // x29
  unsigned __int64 v54; // x23
  unsigned __int64 v55; // x9
  __int64 v56; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquip_c *v58; // x0
  UILabel_o *v59; // x21
  System_String_o *v60; // x22
  struct UILabel_array *v61; // x8
  __int64 v62; // x8
  int32_t skillPitch; // w9
  int v64; // w10
  int v65; // w8
  __int64 v66; // x11
  __int64 v67; // x9
  int32_t v68; // w21
  struct ServantEntity_o *v69; // x8
  int v70; // w21
  int v71; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  float v76; // s8
  int32_t v77; // w1
  int32_t v78; // w1
  int v79; // w21
  float v80; // s8
  float v81; // s11
  float v82; // s9
  float v83; // s10
  struct UnityEngine_GameObject_array *v84; // x8
  float v85; // s8
  float v86; // s9
  il2cpp_array_size_t v87; // w25
  float v88; // s10
  il2cpp_array_size_t v89; // w9
  il2cpp_array_size_t v90; // w11
  SkillInfo_o *v91; // x29
  struct SkillIconComponent_array *v92; // x8
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  __int64 v94; // x1
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v96; // x21
  __int64 v97; // x22
  int32_t v98; // w21
  int32_t Rarity; // w0
  struct UnityEngine_GameObject_array *v100; // x8
  struct UILabel_array *v101; // x8
  UILabel_o *v102; // x8
  int32_t mHeight; // w21
  int32_t v104; // w9
  struct ServantLeaderInfo_o *v105; // x8
  __int64 v106; // x21
  __int64 v107; // x22
  int32_t v108; // w22
  struct SkillIconComponent_array *v109; // x8
  struct UIRangeLabel_array *v110; // x8
  struct UILabel_array *v111; // x8
  UnityEngine_Object_o *equipButton; // x21
  float barExp[2]; // [xsp+18h] [xbp-98h] BYREF
  int32_t exp; // [xsp+20h] [xbp-90h] BYREF
  int32_t EquipLevel; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B131FB & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantStatusListViewItemDrawEquip_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_12002/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    byte_4B131FB = 1;
  }
  skillInfoList = 0LL;
  exp = 0;
  *(_QWORD *)barExp = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item);
  equipIcon = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12002/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_189;
  UILabel__set_text(explanationLabel, (System_String_o *)equipIcon, 0LL);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = (System_String_o *)item->fields.equipTargetId1;
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    if ( (__int64)equipTargetId1 >= 1 )
    {
      if ( !equipIcon )
        goto LABEL_189;
      ServantFaceIconComponent__Set_38931044(
        (ServantFaceIconComponent_o *)equipIcon,
        (int64_t)equipTargetId1,
        0LL,
        0LL,
        0LL);
      goto LABEL_24;
    }
    if ( !equipIcon )
      goto LABEL_189;
LABEL_23:
    ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)equipIcon, 0LL);
    goto LABEL_24;
  }
  servantLeaderInfo = item->fields.servantLeaderInfo;
  if ( !servantLeaderInfo || (equipTarget1 = servantLeaderInfo->fields.equipTarget1) == 0LL )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    if ( !equipIcon )
      goto LABEL_189;
    goto LABEL_23;
  }
  v25 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetId1);
  *(_QWORD *)&v117.fields.currentCryptoKey = v25;
  *(_QWORD *)&v117.fields.fakeValue = v24;
  equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v117, 0LL);
  v26 = this->fields.equipIcon;
  if ( (int)equipIcon < 1 )
  {
    if ( !v26 )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    goto LABEL_23;
  }
  v27 = item->fields.servantLeaderInfo;
  if ( !v27 || !v26 )
    goto LABEL_189;
  ServantFaceIconComponent__Set_38936924(this->fields.equipIcon, v27->fields.equipTarget1, 0LL, 0LL, 0LL);
LABEL_24:
  equipIcon = (SkillIconComponent_o *)item->fields.equipServantEntity;
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( equipIcon )
  {
    equipIcon = (SkillIconComponent_o *)ServantEntity__getName((ServantEntity_o *)equipIcon, -1, -1, 0LL);
    equipTargetId1 = (System_String_o *)equipIcon;
    if ( !nameRangeLabel )
      goto LABEL_189;
  }
  else
  {
    equipTargetId1 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !nameRangeLabel )
      goto LABEL_189;
  }
  UIRangeLabel__Set(nameRangeLabel, equipTargetId1, 0LL, 1, 0, 0LL);
  levelLabel = this->fields.levelLabel;
  EquipLevel = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&EquipLevel, 0LL);
  if ( !levelLabel )
    goto LABEL_189;
  UIExtrusionLabel__set_text(levelLabel, (System_String_o *)equipIcon, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  EquipLevel = ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&EquipLevel, 0LL);
  if ( !maxLevelLabel )
    goto LABEL_189;
  UILabel__set_text(maxLevelLabel, (System_String_o *)equipIcon, 0LL);
  costLabel = this->fields.costLabel;
  EquipLevel = ServantStatusListViewItem__get_EquipCost(item, 0LL);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&EquipLevel, 0LL);
  if ( !costLabel )
    goto LABEL_189;
  UILabel__set_text(costLabel, (System_String_o *)equipIcon, 0LL);
  attackIconLabel = this->fields.attackIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipAtk(item, 0LL);
  if ( !attackIconLabel )
    goto LABEL_189;
  UIIconLabel__Set_38947284(attackIconLabel, 5, (int32_t)equipIcon, 0, 0, 0LL, 0, 0, 0, 0LL);
  hpIconLabel = this->fields.hpIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipHp(item, 0LL);
  if ( !hpIconLabel )
    goto LABEL_189;
  UIIconLabel__Set_38947284(hpIconLabel, 3, (int32_t)equipIcon, 0, 0, 0LL, 0, 0, 0, 0LL);
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__GetEquipExpInfo(
                                        item,
                                        &exp,
                                        (int32_t *)&barExp[1],
                                        barExp,
                                        0LL);
  if ( !this->fields.expBase )
    goto LABEL_189;
  if ( ((unsigned __int8)equipIcon & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.expBase, 1, 0LL);
    equipIcon = (SkillIconComponent_o *)this->fields.lateExpBase;
    if ( !equipIcon )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, SLODWORD(barExp[1]) > 0, 0LL);
    lateExpLabel = this->fields.lateExpLabel;
    v36 = LODWORD(barExp[1]);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34);
    equipIcon = (SkillIconComponent_o *)LocalizationManager__GetNumberFormat(v36, 0LL);
    if ( !lateExpLabel )
      goto LABEL_189;
    UILabel__set_text(lateExpLabel, (System_String_o *)equipIcon, 0LL);
    equipIcon = (SkillIconComponent_o *)this->fields.expBar;
    if ( !equipIcon )
      goto LABEL_189;
    UIProgressBar__set_value((UIProgressBar_o *)equipIcon, barExp[0], 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.expBase, 0, 0LL);
  }
  limitCountGauge = this->fields.limitCountGauge;
  if ( item->fields.equipServantEntity )
  {
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    equipServantEntity = item->fields.equipServantEntity;
    if ( !equipServantEntity || !limitCountGauge )
      goto LABEL_189;
    limitMax = equipServantEntity->fields.limitMax;
    v40 = (int)equipIcon;
    v41 = limitCountGauge;
  }
  else
  {
    if ( !limitCountGauge )
      goto LABEL_189;
    v41 = this->fields.limitCountGauge;
    v40 = 0;
    limitMax = 0;
  }
  ServantStatusLimitCountGauge__Set(v41, v40, limitMax, 0LL);
  ServantStatusListViewItem__GetEquipSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_59;
  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_189;
  v43 = *(_QWORD *)&equipSkillIcon->max_length;
  if ( v43 << 32 >= 1 )
  {
    max_length = skillInfoList->max_length;
    v45 = 0;
    v46 = 0LL;
    do
    {
      if ( v46 < (int)max_length )
      {
        if ( v46 >= max_length )
LABEL_190:
          sub_1BCAA44(equipIcon, equipTargetId1);
        v47 = skillInfoList->m_Items[v46];
        if ( v47 && v47->fields.id >= 1 )
          v45 = v46 + 1;
      }
      ++v46;
    }
    while ( v46 < (int)v43 );
  }
  else
  {
LABEL_59:
    v45 = 0;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, equipTargetId1);
  equipIcon = (SkillIconComponent_o *)UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)equipIcon & 1) != 0 )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.lineSprite;
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)equipIcon, 0LL);
    if ( !equipIcon )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, v45 > 0, 0LL);
  }
  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_189;
  v50 = 0;
  v51 = 0;
  v52 = 4LL;
  v53 = 0x100000000LL;
  while ( 1 )
  {
    v54 = v52 - 4;
    if ( v52 - 4 >= (int)equipSkillBaseList->max_length )
      break;
    if ( skillInfoList )
    {
      v55 = skillInfoList->max_length;
      if ( (__int64)v54 < (int)v55 )
      {
        if ( v54 >= v55 )
          goto LABEL_190;
        v56 = *((_QWORD *)&skillInfoList->obj.klass + v52);
        if ( v56 )
        {
          if ( *(int *)(v56 + 16) >= 1 )
          {
            equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
            if ( !equipSkillExplanationLabelList )
              goto LABEL_189;
            if ( v54 >= equipSkillExplanationLabelList->max_length )
              goto LABEL_190;
            v58 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v59 = (UILabel_o *)*((_QWORD *)&equipSkillExplanationLabelList->obj.klass + v52);
            v60 = *(System_String_o **)(v56 + 40);
            if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo, equipTargetId1);
              v58 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            equipIcon = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                  v59,
                                                  v60,
                                                  v58->static_fields->DETAIL_FONT_SIZE,
                                                  v58->static_fields->DETAIL_FONT_SIZE,
                                                  v58->static_fields->MAX_HEIGHT,
                                                  0LL);
            v61 = this->fields.equipSkillExplanationLabelList;
            if ( !v61 )
              goto LABEL_189;
            if ( v54 >= v61->max_length )
              goto LABEL_190;
            v62 = *((_QWORD *)&v61->obj.klass + v52);
            if ( !v62 )
              goto LABEL_189;
            skillPitch = this->fields.skillPitch;
            v64 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + *(_DWORD *)(v62 + 172);
            v65 = v64 - skillPitch;
            if ( v64 >= skillPitch )
            {
              if ( !skillInfoList )
                goto LABEL_189;
              v66 = *(_QWORD *)&skillInfoList->max_length;
              v51 += v64;
              if ( v54 == (_DWORD)v66 - 1 )
                goto LABEL_88;
              if ( v52 - 3 >= (unsigned __int64)(unsigned int)v66 )
                goto LABEL_190;
              v67 = *(__int64 *)((char *)skillInfoList->m_Items + (v53 >> 29));
              if ( !v67 || *(int *)(v67 + 16) <= 0 )
LABEL_88:
                v50 |= v65 > 10;
            }
            else
            {
              v51 += skillPitch;
            }
          }
        }
      }
    }
    equipSkillBaseList = this->fields.equipSkillBaseList;
    ++v52;
    v53 += 0x100000000LL;
    if ( !equipSkillBaseList )
      goto LABEL_189;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && item->fields.equipServantEntity )
  {
    v68 = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
    if ( v68 < ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL) )
      goto LABEL_96;
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    v69 = item->fields.equipServantEntity;
    if ( !v69 )
      goto LABEL_189;
    if ( (int)equipIcon < v69->fields.limitMax )
    {
LABEL_96:
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceObject;
      if ( (v50 & 1) != 0 )
        v70 = 50;
      else
        v70 = 38;
      if ( !equipIcon )
        goto LABEL_189;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, 1, 0LL);
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceButton;
      if ( !equipIcon )
        goto LABEL_189;
      BYTE1(equipIcon[1].monitor) = 1;
      v51 += v70;
      UICommonButton__SetEnable((UICommonButton_o *)equipIcon, item->fields._CanMoveCombine_k__BackingField, 0LL);
      if ( v51 >= 0 )
        v71 = v51;
      else
        v71 = v51 + 1;
      GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v71 >> 1), 0LL);
    }
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, equipTargetId1);
  v76 = y + (float)v51;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.baseCollider;
    if ( !equipIcon )
      goto LABEL_189;
    v120.fields.x = x;
    v120.fields.y = v76;
    v120.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)equipIcon, v120, 0LL);
  }
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v77 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)equipIcon, v77, 0LL);
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v78 = v76 == INFINITY ? 0x80000000 : (int)v76;
  UIWidget__set_height((UIWidget_o *)equipIcon, v78, 0LL);
  equipIcon = (SkillIconComponent_o *)this->fields.titleSprite;
  v79 = v51 >= 0 ? v51 : v51 + 1;
  if ( !equipIcon )
    goto LABEL_189;
  v80 = this->fields.titleBasePosition.fields.x;
  v81 = this->fields.titleBasePosition.fields.y;
  v82 = this->fields.titleBasePosition.fields.z;
  equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)equipIcon, 0LL);
  if ( !equipIcon
    || (v83 = (float)(v79 >> 1),
        v121.fields.y = v81 + v83,
        v121.fields.x = v80,
        v121.fields.z = v82,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v121, 0LL),
        (v84 = this->fields.equipSkillBaseList) == 0LL) )
  {
LABEL_189:
    sub_1BCAA3C(equipIcon, equipTargetId1);
  }
  v85 = this->fields.skillBasePosition.fields.z;
  v86 = this->fields.skillBasePosition.fields.x;
  v87 = 0;
  v88 = this->fields.skillBasePosition.fields.y + v83;
  while ( 1 )
  {
    v89 = v84->max_length;
    if ( (int)v87 >= (int)v89 )
      break;
    if ( !skillInfoList )
      goto LABEL_145;
    v90 = skillInfoList->max_length;
    if ( (int)v87 >= (int)v90 )
      goto LABEL_145;
    if ( v87 >= v90 )
      goto LABEL_190;
    v91 = skillInfoList->m_Items[v87];
    if ( !v91 || v91->fields.id < 1 )
    {
LABEL_145:
      equipTargetId1 = 0LL;
      goto LABEL_146;
    }
    if ( v87 >= v89 )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v84->m_Items[v87];
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)equipIcon,
                                          0LL);
    if ( !equipIcon )
      goto LABEL_189;
    v122.fields.x = v86;
    v122.fields.y = v88;
    v122.fields.z = v85;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v122, 0LL);
    v92 = this->fields.equipSkillIcon;
    if ( !v92 )
      goto LABEL_189;
    if ( v87 >= v92->max_length )
      goto LABEL_190;
    equipIcon = v92->m_Items[v87];
    if ( !equipIcon )
      goto LABEL_189;
    SkillIconComponent__Set(equipIcon, v91->fields.id, 0LL);
    equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
    if ( !equipSkillTitleRangeLabelList )
      goto LABEL_189;
    if ( v87 >= equipSkillTitleRangeLabelList->max_length )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)equipSkillTitleRangeLabelList->m_Items[v87];
    if ( !equipIcon )
      goto LABEL_189;
    UIRangeLabel__Set((UIRangeLabel_o *)equipIcon, v91->fields.title, 0LL, 1, 0, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v97 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v96 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v94);
      *(_QWORD *)&v118.fields.currentCryptoKey = v97;
      *(_QWORD *)&v118.fields.fakeValue = v96;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v118, 0LL);
      if ( !item->fields.userSvtEntity )
        goto LABEL_189;
      v98 = (int)equipIcon;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0LL);
    }
    else
    {
      v105 = item->fields.servantLeaderInfo;
      if ( !v105 )
      {
        v108 = -1;
        v98 = -1;
        goto LABEL_164;
      }
      v107 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
      v106 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v94);
      *(_QWORD *)&v119.fields.currentCryptoKey = v107;
      *(_QWORD *)&v119.fields.fakeValue = v106;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v119, 0LL);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_189;
      v98 = (int)equipIcon;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0LL);
    }
    v108 = Rarity;
LABEL_164:
    equipIcon = (SkillIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)PartyOrganizationUtility__IsRarityRestriction_32832564(
                                          (PartyOrganizationUtility_o *)equipIcon,
                                          v98,
                                          v108,
                                          v91->fields.id,
                                          v91->fields.lv,
                                          0LL);
    if ( ((unsigned __int8)equipIcon & 1) != 0 )
    {
      v109 = this->fields.equipSkillIcon;
      if ( !v109 )
        goto LABEL_189;
      if ( v87 >= v109->max_length )
        goto LABEL_190;
      equipIcon = v109->m_Items[v87];
      if ( !equipIcon )
        goto LABEL_189;
      SkillIconComponent__SetInvalidColor(equipIcon, this->fields.COLOR_INVALID, 0LL);
      v110 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v110 )
        goto LABEL_189;
      if ( v87 >= v110->max_length )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v110->m_Items[v87];
      if ( !equipIcon )
        goto LABEL_189;
      UIRangeLabel__set_color((UIRangeLabel_o *)equipIcon, this->fields.COLOR_INVALID, 0LL);
      v111 = this->fields.equipSkillExplanationLabelList;
      if ( !v111 )
        goto LABEL_189;
      if ( v87 >= v111->max_length )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v111->m_Items[v87];
      if ( !equipIcon )
        goto LABEL_189;
      UIWidget__set_color((UIWidget_o *)equipIcon, this->fields.COLOR_INVALID, 0LL);
    }
    equipTargetId1 = (System_String_o *)(&dword_0 + 1);
LABEL_146:
    v100 = this->fields.equipSkillBaseList;
    if ( !v100 )
      goto LABEL_189;
    if ( v87 >= v100->max_length )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v100->m_Items[v87];
    if ( equipIcon )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, (bool)equipTargetId1, 0LL);
      v101 = this->fields.equipSkillExplanationLabelList;
      if ( v101 )
      {
        if ( v87 >= v101->max_length )
          goto LABEL_190;
        v102 = v101->m_Items[v87];
        if ( v102 )
        {
          equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          mHeight = v102->fields.mHeight;
          if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo, equipTargetId1);
            equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v87;
          v84 = this->fields.equipSkillBaseList;
          v104 = *((_DWORD *)equipIcon[2].monitor + 2) + mHeight;
          if ( v104 < this->fields.skillPitch )
            v104 = this->fields.skillPitch;
          v88 = v88 - (float)v104;
          if ( v84 )
            continue;
        }
      }
    }
    goto LABEL_189;
  }
  equipButton = (UnityEngine_Object_o *)this->fields.equipButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, equipTargetId1);
  if ( UnityEngine_Object__op_Inequality(equipButton, 0LL, 0LL) )
  {
    equipIcon = (SkillIconComponent_o *)(item->fields.isEquipChangeMode
                                      || ServantStatusListViewItem__get_IsEquip(item, 0LL));
    if ( this->fields.equipButton )
    {
      UICommonButton__SetColliderEnable(this->fields.equipButton, (unsigned __int8)equipIcon & 1, 1, 0LL);
      return;
    }
    goto LABEL_189;
  }
}