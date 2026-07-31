void ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  if ( (byte_5935155 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusListViewItemDrawEquip_TypeInfo);
    byte_5935155 = 1;
  }
  *ServantStatusListViewItemDrawEquip_TypeInfo->static_fields = (struct ServantStatusListViewItemDrawEquip_StaticFields)0x2800000012LL;
}


void ServantStatusListViewItemDrawEquip___ctor(ServantStatusListViewItemDrawEquip_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct UnityEngine_GameObject_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SkillIconComponent_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UIRangeLabel_array *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct UILabel_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5935154 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    sub_21FFC50(&SkillIconComponent___TypeInfo);
    sub_21FFC50(&UILabel___TypeInfo);
    sub_21FFC50(&UIRangeLabel___TypeInfo);
    byte_5935154 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct UnityEngine_GameObject_array *)sub_21FFD10(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v4->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillBaseList = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSkillBaseList,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (struct SkillIconComponent_array *)sub_21FFD10(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSkillIcon,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (struct UIRangeLabel_array *)sub_21FFD10(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSkillTitleRangeLabelList,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (struct UILabel_array *)sub_21FFD10(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v26;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.equipSkillExplanationLabelList,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_E93050;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawEquip__Awake(ServantStatusListViewItemDrawEquip_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  ServantStatusListViewItemDrawEquip_o *v3; // x19
  struct UnityEngine_GameObject_array *v4; // x8
  float y; // s8
  int v6; // w9
  struct UISprite_o *baseSprite; // x9
  int v8; // w20
  int32_t mHeight; // w8
  float mWidth; // s0
  int v11; // w8
  float v12; // s8
  struct UnityEngine_GameObject_array *v13; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_23;
  v3 = this;
  if ( SLODWORD(equipSkillBaseList->max_length) >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquip_o *)equipSkillBaseList->m_Items[0];
    if ( !this )
      goto LABEL_23;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_23;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v4 = v3->fields.equipSkillBaseList;
    if ( !v4 )
      goto LABEL_23;
    if ( (v4->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquip_o *)v4->m_Items[1];
    if ( !this )
      goto LABEL_23;
    y = localPosition.fields.y;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
    if ( !this )
      goto LABEL_23;
    v15 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    equipSkillBaseList = v3->fields.equipSkillBaseList;
    v6 = (int)(float)(y - v15.fields.y);
    if ( (float)(y - v15.fields.y) == INFINITY )
      v6 = 0x80000000;
    v3->fields.skillPitch = v6;
    if ( !equipSkillBaseList )
      goto LABEL_23;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawEquip_o *)v3->fields.titleSprite;
  v8 = v3->fields.skillPitch * LODWORD(equipSkillBaseList->max_length);
  mHeight = baseSprite->fields.mHeight;
  mWidth = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.z = 0.0;
  v3->fields.baseSize.fields.x = mWidth;
  v3->fields.baseSize.fields.y = (float)(mHeight - v8);
  if ( !this )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_23;
  v16 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.titleBasePosition.fields.x = v16.fields.x;
  v11 = v8 >= 0 ? v8 : v8 + 1;
  v3->fields.titleBasePosition.fields.z = v16.fields.z;
  v12 = (float)(v11 >> 1);
  v13 = v3->fields.equipSkillBaseList;
  v3->fields.titleBasePosition.fields.y = v16.fields.y - v12;
  if ( !v13 )
LABEL_23:
    sub_21FFECC(this, method);
  if ( !LODWORD(v13->max_length) )
LABEL_24:
    sub_21FFED4(this);
  this = (ServantStatusListViewItemDrawEquip_o *)v13->m_Items[0];
  if ( !this )
    goto LABEL_23;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0);
  if ( !this )
    goto LABEL_23;
  v17 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v3->fields.skillBasePosition.fields.x = v17.fields.x;
  v3->fields.skillBasePosition.fields.z = v17.fields.z;
  v3->fields.skillBasePosition.fields.y = v17.fields.y - v12;
}


int32_t ServantStatusListViewItemDrawEquip__GetKind(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  return 3;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawEquip__SetItem(
        ServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  UILabel_o *explanationLabel; // x21
  SkillIconComponent_o *equipIcon; // x0
  System_String_o *equipTargetId1; // x1
  __int64 v10; // x2
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t v15; // w8
  struct ServantLeaderInfo_o *v16; // x8
  UIRangeLabel_o *nameRangeLabel; // x21
  UIExtrusionLabel_o *levelLabel; // x21
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *costLabel; // x21
  UIIconLabel_o *attackIconLabel; // x21
  UIIconLabel_o *hpIconLabel; // x21
  bool EquipExpInfo; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *lateExpLabel; // x21
  int32_t v27; // w22
  struct ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w2
  int32_t v31; // w1
  ServantStatusLimitCountGauge_o *v32; // x0
  __int64 v33; // x2
  struct SkillIconComponent_array *equipSkillIcon; // x8
  int max_length; // w10
  unsigned __int64 max_length_low; // x9
  __int64 v37; // x10
  int v38; // w22
  unsigned __int64 v39; // x8
  SkillInfo_o *v40; // x13
  UnityEngine_Object_o *lineSprite; // x21
  __int64 v42; // x2
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  char v44; // w26
  int v45; // w25
  __int64 v46; // x28
  __int64 v47; // x29
  unsigned __int64 v48; // x23
  unsigned __int64 v49; // x9
  __int64 v50; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquip_c *v52; // x0
  UILabel_o *v53; // x21
  System_String_o *v54; // x22
  struct UILabel_array *v55; // x8
  __int64 v56; // x8
  int32_t skillPitch; // w9
  int v58; // w10
  int v59; // w8
  il2cpp_array_size_t v60; // x11
  __int64 v61; // x9
  int32_t EquipLevel; // w21
  struct ServantEntity_o *v63; // x8
  int v64; // w21
  bool CanMoveCombine_k__BackingField; // w1
  int v66; // w8
  float z; // s10
  float x; // s9
  float y; // s11
  UnityEngine_Object_o *baseCollider; // x21
  float v71; // s8
  int32_t v72; // w1
  int32_t v73; // w1
  int v74; // w21
  float v75; // s8
  float v76; // s11
  float v77; // s9
  float v78; // s10
  __int64 v79; // x2
  struct UnityEngine_GameObject_array *v80; // x8
  float v81; // s9
  unsigned int v82; // w27
  float v83; // s8
  float v84; // s10
  unsigned int v85; // w9
  unsigned int v86; // w11
  SkillInfo_o *v87; // x29
  struct SkillIconComponent_array *v88; // x8
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  __int64 v90; // x1
  __int64 v91; // x2
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v93; // x21
  __int64 v94; // x22
  int32_t v95; // w21
  int32_t Rarity; // w0
  struct UnityEngine_GameObject_array *v97; // x8
  struct UILabel_array *v98; // x8
  UILabel_o *v99; // x8
  int32_t mHeight; // w21
  int32_t v101; // w8
  float v102; // s0
  struct ServantLeaderInfo_o *v103; // x8
  __int64 v104; // x21
  __int64 v105; // x22
  int32_t v106; // w22
  struct SkillIconComponent_array *v107; // x8
  struct UIRangeLabel_array *v108; // x8
  struct UILabel_array *v109; // x8
  UnityEngine_Object_o *equipButton; // x21
  __int64 barExp; // [xsp+18h] [xbp-98h] BYREF
  int32_t exp[2]; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935153 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantStatusListViewItemDrawEquip_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&StringLiteral_12406/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935153 = 1;
  }
  *(_QWORD *)exp = 0;
  skillInfoList = 0;
  barExp = 0;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, *(_QWORD *)&mode);
  equipIcon = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12406/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0);
  if ( !explanationLabel )
    goto LABEL_90;
  UILabel__set_text(explanationLabel, (System_String_o *)equipIcon, 0);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = (System_String_o *)item->fields.equipTargetId1;
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    if ( (__int64)equipTargetId1 >= 1 )
    {
      if ( !equipIcon )
        goto LABEL_90;
      ServantFaceIconComponent__Set_48018012((ServantFaceIconComponent_o *)equipIcon, (int64_t)equipTargetId1, 0, 0, 0);
      goto LABEL_23;
    }
    goto LABEL_21;
  }
  servantLeaderInfo = item->fields.servantLeaderInfo;
  if ( !servantLeaderInfo || (equipTarget1 = servantLeaderInfo->fields.equipTarget1) == 0 )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
LABEL_21:
    if ( !equipIcon )
      goto LABEL_90;
    ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)equipIcon, 0);
    goto LABEL_23;
  }
  v13 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, equipTargetId1, v10);
  *(_QWORD *)&v114.fields.currentCryptoKey = v13;
  *(_QWORD *)&v114.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v114, 0);
  equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
  if ( v15 < 1 )
    goto LABEL_21;
  v16 = item->fields.servantLeaderInfo;
  if ( !v16 || !equipIcon )
    goto LABEL_90;
  ServantFaceIconComponent__Set_48024312((ServantFaceIconComponent_o *)equipIcon, v16->fields.equipTarget1, 0, 0, 0);
LABEL_23:
  equipIcon = (SkillIconComponent_o *)item->fields.equipServantEntity;
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( equipIcon )
  {
    equipIcon = (SkillIconComponent_o *)ServantEntity__getName((ServantEntity_o *)equipIcon, -1, -1, 0, 0, 0);
    equipTargetId1 = (System_String_o *)equipIcon;
    if ( !nameRangeLabel )
      goto LABEL_90;
  }
  else
  {
    equipTargetId1 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !nameRangeLabel )
      goto LABEL_90;
  }
  UIRangeLabel__Set(nameRangeLabel, equipTargetId1, 0, 1, 0, 0, 0);
  levelLabel = this->fields.levelLabel;
  exp[1] = ServantStatusListViewItem__get_EquipLevel(item, 0);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&exp[1], 0);
  if ( !levelLabel )
    goto LABEL_90;
  UIExtrusionLabel__set_text(levelLabel, (System_String_o *)equipIcon, 0);
  maxLevelLabel = this->fields.maxLevelLabel;
  exp[1] = ServantStatusListViewItem__get_EquipMaxLevel(item, 0);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&exp[1], 0);
  if ( !maxLevelLabel )
    goto LABEL_90;
  UILabel__set_text(maxLevelLabel, (System_String_o *)equipIcon, 0);
  costLabel = this->fields.costLabel;
  exp[1] = ServantStatusListViewItem__get_EquipCost(item, 0);
  equipIcon = (SkillIconComponent_o *)System_Int32__ToString((int32_t)&exp[1], 0);
  if ( !costLabel )
    goto LABEL_90;
  UILabel__set_text(costLabel, (System_String_o *)equipIcon, 0);
  attackIconLabel = this->fields.attackIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipAtk(item, 0);
  if ( !attackIconLabel )
    goto LABEL_90;
  UIIconLabel__Set_48040364(attackIconLabel, 5, (int32_t)equipIcon, 0, 0, 0, 0, 0, 0, 0, 0);
  hpIconLabel = this->fields.hpIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipHp(item, 0);
  if ( !hpIconLabel )
    goto LABEL_90;
  UIIconLabel__Set_48040364(hpIconLabel, 3, (int32_t)equipIcon, 0, 0, 0, 0, 0, 0, 0, 0);
  EquipExpInfo = ServantStatusListViewItem__GetEquipExpInfo(item, exp, (int32_t *)&barExp + 1, (float *)&barExp, 0);
  equipIcon = (SkillIconComponent_o *)this->fields.expBase;
  if ( EquipExpInfo )
  {
    if ( !equipIcon )
      goto LABEL_90;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, 1, 0);
    equipIcon = (SkillIconComponent_o *)this->fields.lateExpBase;
    if ( !equipIcon )
      goto LABEL_90;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, SHIDWORD(barExp) > 0, 0);
    lateExpLabel = this->fields.lateExpLabel;
    v27 = HIDWORD(barExp);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    equipIcon = (SkillIconComponent_o *)LocalizationManager__GetNumberFormat(v27, 0);
    if ( !lateExpLabel )
      goto LABEL_90;
    UILabel__set_text(lateExpLabel, (System_String_o *)equipIcon, 0);
    equipIcon = (SkillIconComponent_o *)this->fields.expBar;
    if ( !equipIcon )
      goto LABEL_90;
    UIProgressBar__set_value((UIProgressBar_o *)equipIcon, *(float *)&barExp, 0);
  }
  else
  {
    if ( !equipIcon )
      goto LABEL_90;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, 0, 0);
  }
  limitCountGauge = this->fields.limitCountGauge;
  if ( item->fields.equipServantEntity )
  {
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0);
    equipServantEntity = item->fields.equipServantEntity;
    if ( !equipServantEntity || !limitCountGauge )
      goto LABEL_90;
    limitMax = equipServantEntity->fields.limitMax;
    v31 = (int)equipIcon;
    v32 = limitCountGauge;
  }
  else
  {
    if ( !limitCountGauge )
      goto LABEL_90;
    v32 = this->fields.limitCountGauge;
    v31 = 0;
    limitMax = 0;
  }
  ServantStatusLimitCountGauge__Set(v32, v31, limitMax, 0);
  ServantStatusListViewItem__GetEquipSkillInfo(item, &skillInfoList, 0);
  if ( !skillInfoList )
    goto LABEL_59;
  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_90;
  max_length = equipSkillIcon->max_length;
  if ( max_length >= 1 )
  {
    max_length_low = LODWORD(skillInfoList->max_length);
    v37 = max_length & (unsigned int)~(max_length >> 31);
    v38 = 0;
    v39 = 0;
    do
    {
      if ( (__int64)v39 < (int)max_length_low )
      {
        if ( v39 >= max_length_low )
LABEL_184:
          sub_21FFED4(equipIcon);
        v40 = skillInfoList->m_Items[v39];
        if ( v40 && v40->fields.id >= 1 )
          v38 = v39 + 1;
      }
      ++v39;
    }
    while ( v37 != v39 );
  }
  else
  {
LABEL_59:
    v38 = 0;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, equipTargetId1, v33);
  equipIcon = (SkillIconComponent_o *)UnityEngine_Object__op_Inequality(lineSprite, 0, 0);
  if ( ((unsigned __int8)equipIcon & 1) != 0 )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.lineSprite;
    if ( !equipIcon )
      goto LABEL_90;
    equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)equipIcon, 0);
    if ( !equipIcon )
      goto LABEL_90;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, v38 > 0, 0);
  }
  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_90;
  v44 = 0;
  v45 = 0;
  v46 = 4;
  v47 = 0x100000000LL;
  while ( 1 )
  {
    v48 = v46 - 4;
    if ( v46 - 4 >= SLODWORD(equipSkillBaseList->max_length) )
      break;
    if ( skillInfoList )
    {
      v49 = LODWORD(skillInfoList->max_length);
      if ( (__int64)v48 < (int)v49 )
      {
        if ( v48 >= v49 )
          goto LABEL_184;
        v50 = *((_QWORD *)&skillInfoList->obj.klass + v46);
        if ( v50 )
        {
          if ( *(int *)(v50 + 16) >= 1 )
          {
            equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
            if ( !equipSkillExplanationLabelList )
              goto LABEL_90;
            if ( v48 >= LODWORD(equipSkillExplanationLabelList->max_length) )
              goto LABEL_184;
            v52 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v53 = (UILabel_o *)*((_QWORD *)&equipSkillExplanationLabelList->obj.klass + v46);
            v54 = *(System_String_o **)(v50 + 40);
            if ( !*(&ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo, equipTargetId1, v42);
              v52 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            equipIcon = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                  v53,
                                                  v54,
                                                  v52->static_fields->DETAIL_FONT_SIZE,
                                                  v52->static_fields->DETAIL_FONT_SIZE,
                                                  0);
            v55 = this->fields.equipSkillExplanationLabelList;
            if ( !v55 )
              goto LABEL_90;
            if ( v48 >= LODWORD(v55->max_length) )
              goto LABEL_184;
            v56 = *((_QWORD *)&v55->obj.klass + v46);
            if ( !v56 )
              goto LABEL_90;
            skillPitch = this->fields.skillPitch;
            v58 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + *(_DWORD *)(v56 + 172);
            v59 = v58 - skillPitch;
            if ( v58 >= skillPitch )
            {
              if ( !skillInfoList )
                goto LABEL_90;
              v60 = skillInfoList->max_length;
              v45 += v58;
              if ( v48 == (_DWORD)v60 - 1 )
                goto LABEL_88;
              if ( v46 - 3 >= (unsigned __int64)(unsigned int)v60 )
                goto LABEL_184;
              v61 = *(__int64 *)((char *)skillInfoList->m_Items + (v47 >> 29));
              if ( !v61 || *(int *)(v61 + 16) <= 0 )
LABEL_88:
                v44 |= v59 > 10;
            }
            else
            {
              v45 += skillPitch;
            }
          }
        }
      }
    }
    equipSkillBaseList = this->fields.equipSkillBaseList;
    ++v46;
    v47 += 0x100000000LL;
    if ( !equipSkillBaseList )
      goto LABEL_90;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && item->fields.equipServantEntity )
  {
    EquipLevel = ServantStatusListViewItem__get_EquipLevel(item, 0);
    if ( EquipLevel < ServantStatusListViewItem__get_EquipMaxLevel(item, 0) )
      goto LABEL_96;
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0);
    v63 = item->fields.equipServantEntity;
    if ( !v63 )
      goto LABEL_90;
    if ( (int)equipIcon < v63->fields.limitMax )
    {
LABEL_96:
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceObject;
      if ( (v44 & 1) != 0 )
        v64 = 50;
      else
        v64 = 38;
      if ( !equipIcon )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, 1, 0);
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceButton;
      if ( !equipIcon )
        goto LABEL_90;
      CanMoveCombine_k__BackingField = item->fields._CanMoveCombine_k__BackingField;
      v45 += v64;
      BYTE1(equipIcon[1].monitor) = 1;
      UICommonButton__SetEnable((UICommonButton_o *)equipIcon, CanMoveCombine_k__BackingField, 0);
      if ( v45 >= 0 )
        v66 = v45;
      else
        v66 = v45 + 1;
      GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v66 >> 1), 0);
    }
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, equipTargetId1, v42);
  v71 = y + (float)v45;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.baseCollider;
    if ( !equipIcon )
      goto LABEL_90;
    v117.fields.x = x;
    v117.fields.y = y + (float)v45;
    v117.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)equipIcon, v117, 0);
  }
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_90;
  v72 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)equipIcon, v72, 0);
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_90;
  v73 = v71 == INFINITY ? 0x80000000 : (int)v71;
  UIWidget__set_height((UIWidget_o *)equipIcon, v73, 0);
  equipIcon = (SkillIconComponent_o *)this->fields.titleSprite;
  v74 = v45 >= 0 ? v45 : v45 + 1;
  if ( !equipIcon )
    goto LABEL_90;
  v75 = this->fields.titleBasePosition.fields.x;
  v76 = this->fields.titleBasePosition.fields.y;
  v77 = this->fields.titleBasePosition.fields.z;
  equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)equipIcon, 0);
  if ( !equipIcon
    || (v118.fields.x = v75,
        v118.fields.z = v77,
        v78 = (float)(v74 >> 1),
        v118.fields.y = v76 + v78,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v118, 0),
        (v80 = this->fields.equipSkillBaseList) == 0) )
  {
LABEL_90:
    sub_21FFECC(equipIcon, equipTargetId1);
  }
  v81 = this->fields.skillBasePosition.fields.z;
  v82 = 0;
  v83 = this->fields.skillBasePosition.fields.y + v78;
  v84 = this->fields.skillBasePosition.fields.x;
  while ( 1 )
  {
    v85 = v80->max_length;
    if ( (int)v82 >= (int)v85 )
      break;
    if ( !skillInfoList )
      goto LABEL_145;
    v86 = skillInfoList->max_length;
    if ( (int)v82 >= (int)v86 )
      goto LABEL_145;
    if ( v82 >= v86 )
      goto LABEL_184;
    v87 = skillInfoList->m_Items[v82];
    if ( !v87 || v87->fields.id < 1 )
    {
LABEL_145:
      equipTargetId1 = 0;
      goto LABEL_146;
    }
    if ( v82 >= v85 )
      goto LABEL_184;
    equipIcon = (SkillIconComponent_o *)v80->m_Items[v82];
    if ( !equipIcon )
      goto LABEL_90;
    equipIcon = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)equipIcon, 0);
    if ( !equipIcon )
      goto LABEL_90;
    v119.fields.x = v84;
    v119.fields.y = v83;
    v119.fields.z = v81;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v119, 0);
    v88 = this->fields.equipSkillIcon;
    if ( !v88 )
      goto LABEL_90;
    if ( v82 >= LODWORD(v88->max_length) )
      goto LABEL_184;
    equipIcon = v88->m_Items[v82];
    if ( !equipIcon )
      goto LABEL_90;
    SkillIconComponent__Set(equipIcon, v87->fields.id, 0);
    equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
    if ( !equipSkillTitleRangeLabelList )
      goto LABEL_90;
    if ( v82 >= LODWORD(equipSkillTitleRangeLabelList->max_length) )
      goto LABEL_184;
    equipIcon = (SkillIconComponent_o *)equipSkillTitleRangeLabelList->m_Items[v82];
    if ( !equipIcon )
      goto LABEL_90;
    UIRangeLabel__Set((UIRangeLabel_o *)equipIcon, v87->fields.title, 0, 1, 0, 0, 0);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v93 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v94 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v90, v91);
      *(_QWORD *)&v115.fields.currentCryptoKey = v93;
      *(_QWORD *)&v115.fields.fakeValue = v94;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v115, 0);
      if ( !item->fields.userSvtEntity )
        goto LABEL_90;
      v95 = (int)equipIcon;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0);
    }
    else
    {
      v103 = item->fields.servantLeaderInfo;
      if ( !v103 )
      {
        v106 = -1;
        v95 = -1;
        goto LABEL_164;
      }
      v104 = *(_QWORD *)&v103->fields.svtId.fields.currentCryptoKey;
      v105 = *(_QWORD *)&v103->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v90, v91);
      *(_QWORD *)&v116.fields.currentCryptoKey = v104;
      *(_QWORD *)&v116.fields.fakeValue = v105;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v116, 0);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_90;
      v95 = (int)equipIcon;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0);
    }
    v106 = Rarity;
LABEL_164:
    equipIcon = (SkillIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !equipIcon )
      goto LABEL_90;
    equipIcon = (SkillIconComponent_o *)PartyOrganizationUtility__IsRarityRestriction_41240800(
                                          (PartyOrganizationUtility_o *)equipIcon,
                                          v95,
                                          v106,
                                          v87->fields.id,
                                          v87->fields.lv,
                                          0);
    if ( ((unsigned __int8)equipIcon & 1) != 0 )
    {
      v107 = this->fields.equipSkillIcon;
      if ( !v107 )
        goto LABEL_90;
      if ( v82 >= LODWORD(v107->max_length) )
        goto LABEL_184;
      equipIcon = v107->m_Items[v82];
      if ( !equipIcon )
        goto LABEL_90;
      SkillIconComponent__SetInvalidColor(equipIcon, this->fields.COLOR_INVALID, 0);
      v108 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v108 )
        goto LABEL_90;
      if ( v82 >= LODWORD(v108->max_length) )
        goto LABEL_184;
      equipIcon = (SkillIconComponent_o *)v108->m_Items[v82];
      if ( !equipIcon )
        goto LABEL_90;
      UIRangeLabel__set_color((UIRangeLabel_o *)equipIcon, this->fields.COLOR_INVALID, 0);
      v109 = this->fields.equipSkillExplanationLabelList;
      if ( !v109 )
        goto LABEL_90;
      if ( v82 >= LODWORD(v109->max_length) )
        goto LABEL_184;
      equipIcon = (SkillIconComponent_o *)v109->m_Items[v82];
      if ( !equipIcon )
        goto LABEL_90;
      UIWidget__set_color((UIWidget_o *)equipIcon, this->fields.COLOR_INVALID, 0);
    }
    equipTargetId1 = (System_String_o *)(&dword_0 + 1);
LABEL_146:
    v97 = this->fields.equipSkillBaseList;
    if ( !v97 )
      goto LABEL_90;
    if ( v82 >= LODWORD(v97->max_length) )
      goto LABEL_184;
    equipIcon = (SkillIconComponent_o *)v97->m_Items[v82];
    if ( equipIcon )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, (bool)equipTargetId1, 0);
      v98 = this->fields.equipSkillExplanationLabelList;
      if ( v98 )
      {
        if ( v82 >= LODWORD(v98->max_length) )
          goto LABEL_184;
        v99 = v98->m_Items[v82];
        if ( v99 )
        {
          equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          mHeight = v99->fields.mHeight;
          if ( !*(&ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo, equipTargetId1, v79);
            equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v82;
          v101 = *((_DWORD *)equipIcon[2].monitor + 1) + mHeight;
          if ( v101 <= this->fields.skillPitch )
            v101 = this->fields.skillPitch;
          v102 = (float)v101;
          v80 = this->fields.equipSkillBaseList;
          v83 = v83 - v102;
          if ( v80 )
            continue;
        }
      }
    }
    goto LABEL_90;
  }
  equipButton = (UnityEngine_Object_o *)this->fields.equipButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, equipTargetId1, v79);
  if ( UnityEngine_Object__op_Inequality(equipButton, 0, 0) )
  {
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_IsEquip(item, 0);
    if ( this->fields.equipButton )
    {
      UICommonButton__SetColliderEnable(this->fields.equipButton, (unsigned __int8)equipIcon & 1, 1, 0);
      return;
    }
    goto LABEL_90;
  }
}