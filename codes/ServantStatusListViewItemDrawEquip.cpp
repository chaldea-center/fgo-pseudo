void __fastcall ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42186A9 & 1) == 0 )
  {
    sub_B0D8A4(&ServantStatusListViewItemDrawEquip_TypeInfo, v1);
    byte_42186A9 = 1;
  }
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquip___ctor(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BalanceConfig_c *v7; // x0
  struct SkillIconComponent_array *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct UIRangeLabel_array *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UILabel_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UnityEngine_GameObject_o *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  float v36; // s4
  float v37; // s5
  float v38; // s6
  __int128 v39; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42186A8 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, v3);
    sub_B0D8A4(&SkillIconComponent___TypeInfo, v4);
    sub_B0D8A4(&UILabel___TypeInfo, v5);
    sub_B0D8A4(&UIRangeLabel___TypeInfo, v6);
    byte_42186A8 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct SkillIconComponent_array *)sub_B0D8BC(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v7->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipSkillIcon,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (struct UIRangeLabel_array *)sub_B0D8BC(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipSkillTitleRangeLabelList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (struct UILabel_array *)sub_B0D8BC(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.equipSkillExplanationLabelList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct UnityEngine_GameObject_o *)sub_B0D8BC(
                                             UILabel___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.reinforceObject = v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v40.fields.r = 0.32941;
  v39 = 0uLL;
  v40.fields.g = 0.32941;
  v40.fields.b = 0.32941;
  UnityEngine_Color___ctor_40757524(v40, v36, v37, v38, (const MethodInfo *)&v39);
  *(_OWORD *)&this->fields.COLOR_INVALID.fields.b = v39;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquip__Awake(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  struct SkillIconComponent_array *equipSkillIcon; // x8
  ServantStatusListViewItemDrawEquip_o *v3; // x19
  float v4; // s1
  struct SkillIconComponent_array *v5; // x8
  float v6; // s8
  float v7; // s0
  double v8; // d0
  struct UISprite_o *titleSprite; // x9
  int v10; // w20
  float v11; // s1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  struct SkillIconComponent_array *v15; // x8
  int v16; // w9
  float v17; // s8
  __int64 v18; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_24;
  v3 = this;
  if ( (int)equipSkillIcon->max_length >= 2 )
  {
    this = (ServantStatusListViewItemDrawEquip_o *)equipSkillIcon->m_Items[0];
    if ( !this )
      goto LABEL_24;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v4 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v5 = v3->fields.equipSkillIcon;
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
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v7 = v6 - localPosition.fields.y;
    equipSkillIcon = v3->fields.equipSkillIcon;
    v8 = (float)(v6 - localPosition.fields.y) == INFINITY ? -v7 : v7;
    LODWORD(v3->fields.baseSize.fields.y) = (int)v8;
    if ( !equipSkillIcon )
      goto LABEL_24;
  }
  titleSprite = v3->fields.titleSprite;
  if ( !titleSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)v3->fields.equipButton;
  v10 = LODWORD(v3->fields.baseSize.fields.y) * equipSkillIcon->max_length;
  v11 = (float)(titleSprite->fields.mHeight - v10);
  v3->fields.baseSize.fields.z = (float)titleSprite->fields.mWidth;
  v3->fields.titleBasePosition.fields.x = v11;
  v3->fields.titleBasePosition.fields.y = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v15 = v3->fields.equipSkillIcon;
  v16 = v10 >= 0 ? v10 : v10 + 1;
  v17 = (float)(v16 >> 1);
  v3->fields.titleBasePosition.fields.z = v12;
  v3->fields.skillBasePosition.fields.x = v13 - v17;
  v3->fields.skillBasePosition.fields.y = v14;
  if ( !v15 )
LABEL_24:
    sub_B0D97C(this);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B0D9A8(this);
    sub_B0D948(v18, 0LL);
  }
  this = (ServantStatusListViewItemDrawEquip_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v3->fields.skillBasePosition.fields.z = v20.fields.x;
  v3->fields.COLOR_INVALID.fields.g = v20.fields.z;
  v3->fields.COLOR_INVALID.fields.r = v20.fields.y - v17;
}


int32_t __fastcall ServantStatusListViewItemDrawEquip__GetKind(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  return 3;
}


void __fastcall ServantStatusListViewItemDrawEquip__SetItem(
        ServantStatusListViewItemDrawEquip_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct UIRangeLabel_o *nameRangeLabel; // x21
  UIRangeLabel_o *explanationLabel; // x0
  __int64 equipTargetId1; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v19; // x21
  __int64 v20; // x22
  struct UILabel_o *v21; // x8
  struct ServantLeaderInfo_o *v22; // x9
  UIRangeLabel_o *levelLabel; // x21
  System_String_o *v24; // x1
  struct UILabel_o *maxLevelLabel; // x21
  struct UIIconLabel_o *attackIconLabel; // x21
  struct UnityEngine_GameObject_o *expBase; // x21
  UIIconLabel_o *hpIconLabel; // x21
  UIIconLabel_o *costLabel; // x21
  UILabel_o *expBar; // x21
  int32_t v31; // w22
  struct UISprite_o *lineSprite; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w2
  int32_t v35; // w1
  ServantStatusLimitCountGauge_o *v36; // x0
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  __int64 v38; // x10
  unsigned __int64 max_length; // x9
  int v40; // w22
  signed __int64 v41; // x8
  SkillInfo_o *v42; // x13
  UnityEngine_Object_o *equipSkillBaseList; // x21
  struct SkillIconComponent_array *equipSkillIcon; // x8
  int v45; // w23
  __int64 v46; // x27
  __int64 v47; // x28
  unsigned __int64 v48; // x25
  unsigned __int64 v49; // x9
  __int64 v50; // x8
  struct UnityEngine_GameObject_o *reinforceObject; // x9
  ServantStatusListViewItemDrawEquip_c *v52; // x0
  UILabel_o *v53; // x21
  System_String_o *v54; // x22
  struct UnityEngine_GameObject_o *v55; // x8
  __int64 v56; // x8
  float y; // w9
  int v58; // w10
  int v59; // w8
  __int64 v60; // x11
  __int64 v61; // x9
  int32_t EquipLevel; // w21
  struct ServantEntity_o *v63; // x8
  int v64; // w21
  __int64 v65; // x8
  int v66; // w8
  float x; // s8
  float z; // s9
  float v69; // s10
  UnityEngine_Object_o *baseSprite; // x21
  float v71; // s8
  double v72; // d0
  double v73; // d0
  int v74; // w21
  float v75; // s8
  float v76; // s11
  float v77; // s9
  float v78; // s10
  struct SkillIconComponent_array *v79; // x8
  float g; // s8
  float v81; // s9
  __int64 v82; // x25
  float v83; // s10
  int v84; // w9
  il2cpp_array_size_t v85; // w23
  il2cpp_array_size_t v86; // w11
  SkillInfo_o *v87; // x27
  struct UIRangeLabel_array *v88; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v91; // x21
  __int64 v92; // x22
  int32_t v93; // w21
  int32_t Rarity; // w0
  bool v95; // w1
  struct SkillIconComponent_array *v96; // x8
  struct UnityEngine_GameObject_o *v97; // x8
  __int64 v98; // x8
  int v99; // w21
  float v100; // w9
  struct ServantLeaderInfo_o *v101; // x8
  __int64 v102; // x21
  __int64 v103; // x22
  int32_t v104; // w22
  struct UIRangeLabel_array *v105; // x8
  struct UILabel_array *v106; // x8
  struct UnityEngine_GameObject_o *v107; // x8
  UnityEngine_Object_o *equipIcon; // x21
  __int64 v109; // x0
  char v110; // [xsp+14h] [xbp-8Ch]
  float barExp[2]; // [xsp+18h] [xbp-88h] BYREF
  int32_t exp[2]; // [xsp+20h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v116; // 0:x0.16
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42186A7 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, item);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B0D8A4(&ServantStatusListViewItemDrawEquip_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_12004/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_42186A7 = 1;
  }
  *(_QWORD *)exp = 0LL;
  skillInfoList = 0LL;
  *(_QWORD *)barExp = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( !item || !mode )
    return;
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  explanationLabel = (UIRangeLabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12004/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0LL);
  if ( !nameRangeLabel )
    goto LABEL_201;
  UILabel__set_text((UILabel_o *)nameRangeLabel, (System_String_o *)explanationLabel, 0LL);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = item->fields.equipTargetId1;
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    if ( equipTargetId1 >= 1 )
    {
      if ( !explanationLabel )
        goto LABEL_201;
      ServantFaceIconComponent__Set_29626568(
        (ServantFaceIconComponent_o *)explanationLabel,
        equipTargetId1,
        0LL,
        0LL,
        0LL);
      goto LABEL_26;
    }
    if ( !explanationLabel )
      goto LABEL_201;
LABEL_25:
    ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)explanationLabel, 0LL);
    goto LABEL_26;
  }
  servantLeaderInfo = item->fields.servantLeaderInfo;
  if ( !servantLeaderInfo || (equipTarget1 = servantLeaderInfo->fields.equipTarget1) == 0LL )
  {
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    if ( !explanationLabel )
      goto LABEL_201;
    goto LABEL_25;
  }
  v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v114.fields.currentCryptoKey = v20;
  *(_QWORD *)&v114.fields.fakeValue = v19;
  explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v114, 0LL);
  v21 = this->fields.explanationLabel;
  if ( (int)explanationLabel < 1 )
  {
    if ( !v21 )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    goto LABEL_25;
  }
  v22 = item->fields.servantLeaderInfo;
  if ( !v22 || !v21 )
    goto LABEL_201;
  ServantFaceIconComponent__Set_29631364(
    (ServantFaceIconComponent_o *)this->fields.explanationLabel,
    v22->fields.equipTarget1,
    0LL,
    0LL,
    0LL);
LABEL_26:
  explanationLabel = (UIRangeLabel_o *)item->fields.equipServantEntity;
  levelLabel = (UIRangeLabel_o *)this->fields.levelLabel;
  if ( explanationLabel )
  {
    explanationLabel = (UIRangeLabel_o *)ServantEntity__getName((ServantEntity_o *)explanationLabel, -1, -1, 0LL);
    v24 = (System_String_o *)explanationLabel;
    if ( !levelLabel )
      goto LABEL_201;
  }
  else
  {
    v24 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !levelLabel )
      goto LABEL_201;
  }
  UIRangeLabel__Set(levelLabel, v24, 0LL, 1, 0, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  exp[1] = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
  explanationLabel = (UIRangeLabel_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !maxLevelLabel )
    goto LABEL_201;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, (System_String_o *)explanationLabel, 0LL);
  attackIconLabel = this->fields.attackIconLabel;
  exp[1] = ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL);
  explanationLabel = (UIRangeLabel_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !attackIconLabel )
    goto LABEL_201;
  UILabel__set_text((UILabel_o *)attackIconLabel, (System_String_o *)explanationLabel, 0LL);
  expBase = this->fields.expBase;
  exp[1] = ServantStatusListViewItem__get_EquipCost(item, 0LL);
  explanationLabel = (UIRangeLabel_o *)System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !expBase )
    goto LABEL_201;
  UILabel__set_text((UILabel_o *)expBase, (System_String_o *)explanationLabel, 0LL);
  hpIconLabel = this->fields.hpIconLabel;
  explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipAtk(item, 0LL);
  if ( !hpIconLabel )
    goto LABEL_201;
  UIIconLabel__Set_41076120(hpIconLabel, 5, (int32_t)explanationLabel, 0, 0, 0LL, 0, 0, 0, 0LL);
  costLabel = (UIIconLabel_o *)this->fields.costLabel;
  explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipHp(item, 0LL);
  if ( !costLabel )
    goto LABEL_201;
  UIIconLabel__Set_41076120(costLabel, 3, (int32_t)explanationLabel, 0, 0, 0LL, 0, 0, 0, 0LL);
  explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__GetEquipExpInfo(
                                         item,
                                         exp,
                                         (int32_t *)&barExp[1],
                                         barExp,
                                         0LL);
  if ( !this->fields.lateExpBase )
    goto LABEL_201;
  if ( ((unsigned __int8)explanationLabel & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
    explanationLabel = (UIRangeLabel_o *)this->fields.lateExpLabel;
    if ( !explanationLabel )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, SLODWORD(barExp[1]) > 0, 0LL);
    expBar = (UILabel_o *)this->fields.expBar;
    v31 = LODWORD(barExp[1]);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    explanationLabel = (UIRangeLabel_o *)LocalizationManager__GetNumberFormat(v31, 0LL);
    if ( !expBar )
      goto LABEL_201;
    UILabel__set_text(expBar, (System_String_o *)explanationLabel, 0LL);
    explanationLabel = (UIRangeLabel_o *)this->fields.limitCountGauge;
    if ( !explanationLabel )
      goto LABEL_201;
    UIProgressBar__set_value((UIProgressBar_o *)explanationLabel, barExp[0], 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 0, 0LL);
  }
  lineSprite = this->fields.lineSprite;
  if ( item->fields.equipServantEntity )
  {
    explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    equipServantEntity = item->fields.equipServantEntity;
    if ( !equipServantEntity || !lineSprite )
      goto LABEL_201;
    limitMax = equipServantEntity->fields.limitMax;
    v35 = (int)explanationLabel;
    v36 = (ServantStatusLimitCountGauge_o *)lineSprite;
  }
  else
  {
    if ( !lineSprite )
      goto LABEL_201;
    v36 = (ServantStatusLimitCountGauge_o *)this->fields.lineSprite;
    v35 = 0;
    limitMax = 0;
  }
  ServantStatusLimitCountGauge__Set(v36, v35, limitMax, 0LL);
  ServantStatusListViewItem__GetEquipSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_62;
  equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
  if ( !equipSkillTitleRangeLabelList )
    goto LABEL_201;
  v38 = *(_QWORD *)&equipSkillTitleRangeLabelList->max_length;
  if ( v38 << 32 >= 1 )
  {
    max_length = skillInfoList->max_length;
    v40 = 0;
    v41 = 0LL;
    do
    {
      if ( v41 < (int)max_length )
      {
        if ( v41 >= max_length )
        {
LABEL_202:
          v109 = sub_B0D9A8(explanationLabel);
          sub_B0D948(v109, 0LL);
        }
        v42 = skillInfoList->m_Items[v41];
        if ( v42 && v42->fields.id >= 1 )
          v40 = v41 + 1;
      }
      ++v41;
    }
    while ( v41 < (int)v38 );
  }
  else
  {
LABEL_62:
    v40 = 0;
  }
  equipSkillBaseList = (UnityEngine_Object_o *)this->fields.equipSkillBaseList;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  explanationLabel = (UIRangeLabel_o *)UnityEngine_Object__op_Inequality(equipSkillBaseList, 0LL, 0LL);
  if ( ((unsigned __int8)explanationLabel & 1) != 0 )
  {
    explanationLabel = (UIRangeLabel_o *)this->fields.equipSkillBaseList;
    if ( !explanationLabel )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)explanationLabel,
                                           0LL);
    if ( !explanationLabel )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, v40 > 0, 0LL);
  }
  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_201;
  v110 = 0;
  v45 = 0;
  v46 = 4LL;
  v47 = 0x100000000LL;
  while ( 1 )
  {
    v48 = v46 - 4;
    if ( v46 - 4 >= (int)equipSkillIcon->max_length )
      break;
    if ( skillInfoList )
    {
      v49 = skillInfoList->max_length;
      if ( (__int64)v48 < (int)v49 )
      {
        if ( v48 >= v49 )
          goto LABEL_202;
        v50 = *((_QWORD *)&skillInfoList->obj.klass + v46);
        if ( v50 )
        {
          if ( *(int *)(v50 + 16) >= 1 )
          {
            reinforceObject = this->fields.reinforceObject;
            if ( !reinforceObject )
              goto LABEL_201;
            if ( v48 >= LODWORD(reinforceObject[1].klass) )
              goto LABEL_202;
            v52 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v53 = (UILabel_o *)*((_QWORD *)&reinforceObject->klass + v46);
            v54 = *(System_String_o **)(v50 + 40);
            if ( (BYTE3(ServantStatusListViewItemDrawEquip_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
              v52 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            explanationLabel = (UIRangeLabel_o *)WrapControlText__textAdjust(
                                                   v53,
                                                   v54,
                                                   v52->static_fields->DETAIL_FONT_SIZE,
                                                   v52->static_fields->DETAIL_FONT_SIZE,
                                                   v52->static_fields->MAX_HEIGHT,
                                                   0LL);
            v55 = this->fields.reinforceObject;
            if ( !v55 )
              goto LABEL_201;
            if ( v48 >= LODWORD(v55[1].klass) )
              goto LABEL_202;
            v56 = *((_QWORD *)&v55->klass + v46);
            if ( !v56 )
              goto LABEL_201;
            y = this->fields.baseSize.fields.y;
            v58 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + *(_DWORD *)(v56 + 164);
            v59 = v58 - LODWORD(y);
            if ( v58 >= SLODWORD(y) )
            {
              if ( !skillInfoList )
                goto LABEL_201;
              v60 = *(_QWORD *)&skillInfoList->max_length;
              v45 += v58;
              if ( v48 == (_DWORD)v60 - 1 )
                goto LABEL_93;
              if ( v46 - 3 >= (unsigned __int64)(unsigned int)v60 )
                goto LABEL_202;
              v61 = *(__int64 *)((char *)skillInfoList->m_Items + (v47 >> 29));
              if ( !v61 || *(int *)(v61 + 16) <= 0 )
LABEL_93:
                v110 |= v59 > 10;
            }
            else
            {
              v45 += LODWORD(y);
            }
          }
        }
      }
    }
    equipSkillIcon = this->fields.equipSkillIcon;
    ++v46;
    v47 += 0x100000000LL;
    if ( !equipSkillIcon )
      goto LABEL_201;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && item->fields.equipServantEntity )
  {
    EquipLevel = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
    if ( EquipLevel < ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL) )
      goto LABEL_101;
    explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    v63 = item->fields.equipServantEntity;
    if ( !v63 )
      goto LABEL_201;
    if ( (int)explanationLabel < v63->fields.limitMax )
    {
LABEL_101:
      explanationLabel = (UIRangeLabel_o *)this->fields.reinforceButton;
      if ( (v110 & 1) != 0 )
        v64 = 50;
      else
        v64 = 38;
      if ( !explanationLabel )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, 1, 0LL);
      v65 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v65 )
        goto LABEL_201;
      *(_BYTE *)(v65 + 89) = 1;
      explanationLabel = *(UIRangeLabel_o **)&this->fields.skillPitch;
      if ( !explanationLabel )
        goto LABEL_201;
      v45 += v64;
      UICommonButton__SetEnable((UICommonButton_o *)explanationLabel, item->fields._CanMoveCombine_k__BackingField, 0LL);
      if ( v45 >= 0 )
        v66 = v45;
      else
        v66 = v45 + 1;
      GameObjectExtensions__SetLocalPositionY(
        (UnityEngine_GameObject_o *)this->fields.reinforceButton,
        (float)-(v66 >> 1),
        0LL);
    }
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v69 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v71 = x + (float)v45;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    explanationLabel = (UIRangeLabel_o *)this->fields.baseSprite;
    if ( !explanationLabel )
      goto LABEL_201;
    v117.fields.x = z;
    v117.fields.y = v71;
    v117.fields.z = v69;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)explanationLabel, v117, 0LL);
  }
  explanationLabel = (UIRangeLabel_o *)this->fields.titleSprite;
  if ( !explanationLabel )
    goto LABEL_201;
  v72 = z;
  if ( z == INFINITY )
    v72 = -z;
  UIWidget__set_width((UIWidget_o *)explanationLabel, (int)v72, 0LL);
  explanationLabel = (UIRangeLabel_o *)this->fields.titleSprite;
  if ( !explanationLabel )
    goto LABEL_201;
  v73 = v71;
  if ( v71 == INFINITY )
    v73 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)explanationLabel, (int)v73, 0LL);
  explanationLabel = (UIRangeLabel_o *)this->fields.equipButton;
  v74 = v45 >= 0 ? v45 : v45 + 1;
  if ( !explanationLabel )
    goto LABEL_201;
  v75 = this->fields.titleBasePosition.fields.z;
  v76 = this->fields.skillBasePosition.fields.x;
  v77 = this->fields.skillBasePosition.fields.y;
  explanationLabel = (UIRangeLabel_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)explanationLabel,
                                         0LL);
  if ( !explanationLabel
    || (v78 = (float)(v74 >> 1),
        v118.fields.y = v76 + v78,
        v118.fields.x = v75,
        v118.fields.z = v77,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)explanationLabel, v118, 0LL),
        (v79 = this->fields.equipSkillIcon) == 0LL) )
  {
LABEL_201:
    sub_B0D97C(explanationLabel);
  }
  g = this->fields.COLOR_INVALID.fields.g;
  v81 = this->fields.skillBasePosition.fields.z;
  v82 = 4LL;
  v83 = this->fields.COLOR_INVALID.fields.r + v78;
  while ( 1 )
  {
    v84 = v79->max_length;
    v85 = v82 - 4;
    if ( (int)v82 - 4 >= v84 )
      break;
    if ( !skillInfoList )
      goto LABEL_151;
    v86 = skillInfoList->max_length;
    if ( (int)v85 >= (int)v86 )
      goto LABEL_151;
    if ( v85 >= v86 )
      goto LABEL_202;
    v87 = skillInfoList->m_Items[v85];
    if ( !v87 || v87->fields.id < 1 )
    {
LABEL_151:
      v95 = 0;
      goto LABEL_152;
    }
    if ( v85 >= v84 )
      goto LABEL_202;
    explanationLabel = (UIRangeLabel_o *)v79->m_Items[v85];
    if ( !explanationLabel )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)explanationLabel,
                                           0LL);
    if ( !explanationLabel )
      goto LABEL_201;
    v119.fields.x = v81;
    v119.fields.y = v83;
    v119.fields.z = g;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)explanationLabel, v119, 0LL);
    v88 = this->fields.equipSkillTitleRangeLabelList;
    if ( !v88 )
      goto LABEL_201;
    if ( v85 >= v88->max_length )
      goto LABEL_202;
    explanationLabel = v88->m_Items[v85];
    if ( !explanationLabel )
      goto LABEL_201;
    SkillIconComponent__Set((SkillIconComponent_o *)explanationLabel, v87->fields.id, 0LL);
    equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
    if ( !equipSkillExplanationLabelList )
      goto LABEL_201;
    if ( v85 >= equipSkillExplanationLabelList->max_length )
      goto LABEL_202;
    explanationLabel = (UIRangeLabel_o *)equipSkillExplanationLabelList->m_Items[v85];
    if ( !explanationLabel )
      goto LABEL_201;
    UIRangeLabel__Set(explanationLabel, v87->fields.title, 0LL, 1, 0, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v92 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v91 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v115.fields.currentCryptoKey = v92;
      *(_QWORD *)&v115.fields.fakeValue = v91;
      explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                             v115,
                                             0LL);
      if ( !item->fields.userSvtEntity )
        goto LABEL_201;
      v93 = (int)explanationLabel;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0LL);
LABEL_171:
      v104 = Rarity;
      goto LABEL_172;
    }
    v101 = item->fields.servantLeaderInfo;
    if ( v101 )
    {
      v103 = *(_QWORD *)&v101->fields.svtId.fields.currentCryptoKey;
      v102 = *(_QWORD *)&v101->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v116.fields.currentCryptoKey = v103;
      *(_QWORD *)&v116.fields.fakeValue = v102;
      explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                             v116,
                                             0LL);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_201;
      v93 = (int)explanationLabel;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0LL);
      goto LABEL_171;
    }
    v104 = -1;
    v93 = -1;
LABEL_172:
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    explanationLabel = (UIRangeLabel_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !explanationLabel )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)PartyOrganizationUtility__IsRarityRestriction_31064984(
                                           (PartyOrganizationUtility_o *)explanationLabel,
                                           v93,
                                           v104,
                                           v87->fields.id,
                                           v87->fields.lv,
                                           0LL);
    if ( ((unsigned __int8)explanationLabel & 1) != 0 )
    {
      v105 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v105 )
        goto LABEL_201;
      if ( v85 >= v105->max_length )
        goto LABEL_202;
      explanationLabel = v105->m_Items[v85];
      if ( !explanationLabel )
        goto LABEL_201;
      SkillIconComponent__SetInvalidColor(
        (SkillIconComponent_o *)explanationLabel,
        *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b,
        0LL);
      v106 = this->fields.equipSkillExplanationLabelList;
      if ( !v106 )
        goto LABEL_201;
      if ( v85 >= v106->max_length )
        goto LABEL_202;
      explanationLabel = (UIRangeLabel_o *)v106->m_Items[v85];
      if ( !explanationLabel )
        goto LABEL_201;
      UIRangeLabel__set_color(explanationLabel, *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b, 0LL);
      v107 = this->fields.reinforceObject;
      if ( !v107 )
        goto LABEL_201;
      if ( v85 >= LODWORD(v107[1].klass) )
        goto LABEL_202;
      explanationLabel = (UIRangeLabel_o *)*((_QWORD *)&v107[1].monitor + (int)v85);
      if ( !explanationLabel )
        goto LABEL_201;
      UIWidget__set_color(
        (UIWidget_o *)explanationLabel,
        *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b,
        0LL);
    }
    v95 = 1;
LABEL_152:
    v96 = this->fields.equipSkillIcon;
    if ( !v96 )
      goto LABEL_201;
    if ( v85 >= v96->max_length )
      goto LABEL_202;
    explanationLabel = (UIRangeLabel_o *)*((_QWORD *)&v96->obj.klass + v82);
    if ( explanationLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, v95, 0LL);
      v97 = this->fields.reinforceObject;
      if ( v97 )
      {
        if ( v85 >= LODWORD(v97[1].klass) )
          goto LABEL_202;
        v98 = *((_QWORD *)&v97->klass + v82);
        if ( v98 )
        {
          explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          v99 = *(_DWORD *)(v98 + 164);
          if ( (BYTE3(ServantStatusListViewItemDrawEquip_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
            explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v82;
          v79 = this->fields.equipSkillIcon;
          LODWORD(v100) = *(_DWORD *)(*(_QWORD *)&explanationLabel[3].fields.m_CachedPtr + 8LL) + v99;
          if ( SLODWORD(v100) < SLODWORD(this->fields.baseSize.fields.y) )
            v100 = this->fields.baseSize.fields.y;
          v83 = v83 - (float)SLODWORD(v100);
          if ( v79 )
            continue;
        }
      }
    }
    goto LABEL_201;
  }
  equipIcon = (UnityEngine_Object_o *)this->fields.equipIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(equipIcon, 0LL, 0LL) )
  {
    explanationLabel = (UIRangeLabel_o *)(item->fields.isEquipChangeMode
                                       || ServantStatusListViewItem__get_IsEquip(item, 0LL));
    if ( this->fields.equipIcon )
    {
      UICommonButton__SetColliderEnable(
        (UICommonButton_o *)this->fields.equipIcon,
        (unsigned __int8)explanationLabel & 1,
        1,
        0LL);
      return;
    }
    goto LABEL_201;
  }
}