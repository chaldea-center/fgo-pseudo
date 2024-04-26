void __fastcall ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  if ( (byte_4355DF6 & 1) == 0 )
  {
    sub_B70694(&ServantStatusListViewItemDrawEquip_TypeInfo);
    byte_4355DF6 = 1;
  }
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->DETAIL_FONT_SIZE = 18;
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->MAX_HEIGHT = 500;
  ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT = 40;
}


void __fastcall ServantStatusListViewItemDrawEquip___ctor(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct SkillIconComponent_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UIRangeLabel_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UILabel_array *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct UnityEngine_GameObject_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  float v32; // s4
  float v33; // s5
  float v34; // s6
  __int128 v35; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4355DF5 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&UnityEngine_GameObject___TypeInfo);
    sub_B70694(&SkillIconComponent___TypeInfo);
    sub_B70694(&UILabel___TypeInfo);
    sub_B70694(&UIRangeLabel___TypeInfo);
    byte_4355DF5 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct SkillIconComponent_array *)sub_B706AC(
                                            UnityEngine_GameObject___TypeInfo,
                                            (unsigned int)v3->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v4;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.equipSkillIcon,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = (struct UIRangeLabel_array *)sub_B706AC(
                                       SkillIconComponent___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.equipSkillTitleRangeLabelList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (struct UILabel_array *)sub_B706AC(
                                  UIRangeLabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.equipSkillExplanationLabelList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (struct UnityEngine_GameObject_o *)sub_B706AC(
                                             UILabel___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.reinforceObject = v25;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.reinforceObject,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v36.fields.r = 0.32941;
  v35 = 0uLL;
  v36.fields.g = 0.32941;
  v36.fields.b = 0.32941;
  UnityEngine_Color___ctor_41064944(v36, v32, v33, v34, (const MethodInfo *)&v35);
  *(_OWORD *)&this->fields.COLOR_INVALID.fields.b = v35;
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
    sub_B7076C(this, method);
  if ( !v15->max_length )
  {
LABEL_25:
    v18 = sub_B70798(this);
    sub_B70738(v18, 0LL);
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
  struct UIRangeLabel_o *nameRangeLabel; // x21
  UIRangeLabel_o *explanationLabel; // x0
  System_String_o *equipTargetId1; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  struct UILabel_o *v14; // x8
  struct ServantLeaderInfo_o *v15; // x9
  UIRangeLabel_o *levelLabel; // x21
  struct UILabel_o *maxLevelLabel; // x21
  struct UIIconLabel_o *attackIconLabel; // x21
  struct UnityEngine_GameObject_o *expBase; // x21
  UIIconLabel_o *hpIconLabel; // x21
  UIIconLabel_o *costLabel; // x21
  UILabel_o *expBar; // x21
  int32_t v23; // w22
  struct UISprite_o *lineSprite; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w2
  int32_t v27; // w1
  ServantStatusLimitCountGauge_o *v28; // x0
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  __int64 v30; // x10
  unsigned __int64 max_length; // x9
  int v32; // w22
  signed __int64 v33; // x8
  SkillInfo_o *v34; // x13
  UnityEngine_Object_o *equipSkillBaseList; // x21
  struct SkillIconComponent_array *equipSkillIcon; // x8
  int v37; // w23
  __int64 v38; // x27
  __int64 v39; // x28
  unsigned __int64 v40; // x25
  unsigned __int64 v41; // x9
  __int64 v42; // x8
  struct UnityEngine_GameObject_o *reinforceObject; // x9
  ServantStatusListViewItemDrawEquip_c *v44; // x0
  UILabel_o *v45; // x21
  System_String_o *v46; // x22
  struct UnityEngine_GameObject_o *v47; // x8
  __int64 v48; // x8
  float y; // w9
  int v50; // w10
  int v51; // w8
  __int64 v52; // x11
  __int64 v53; // x9
  int32_t EquipLevel; // w21
  struct ServantEntity_o *v55; // x8
  int v56; // w21
  __int64 v57; // x8
  int v58; // w8
  float x; // s8
  float z; // s9
  float v61; // s10
  UnityEngine_Object_o *baseSprite; // x21
  float v63; // s8
  double v64; // d0
  double v65; // d0
  int v66; // w21
  float v67; // s8
  float v68; // s11
  float v69; // s9
  float v70; // s10
  struct SkillIconComponent_array *v71; // x8
  float g; // s8
  float v73; // s9
  __int64 v74; // x25
  float v75; // s10
  int v76; // w9
  il2cpp_array_size_t v77; // w23
  il2cpp_array_size_t v78; // w11
  SkillInfo_o *v79; // x27
  struct UIRangeLabel_array *v80; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v83; // x21
  __int64 v84; // x22
  int32_t v85; // w21
  int32_t Rarity; // w0
  struct SkillIconComponent_array *v87; // x8
  struct UnityEngine_GameObject_o *v88; // x8
  __int64 v89; // x8
  int v90; // w21
  float v91; // w9
  struct ServantLeaderInfo_o *v92; // x8
  __int64 v93; // x21
  __int64 v94; // x22
  int32_t v95; // w22
  struct UIRangeLabel_array *v96; // x8
  struct UILabel_array *v97; // x8
  struct UnityEngine_GameObject_o *v98; // x8
  UnityEngine_Object_o *equipIcon; // x21
  __int64 v100; // x0
  char v101; // [xsp+14h] [xbp-8Ch]
  float barExp[2]; // [xsp+18h] [xbp-88h] BYREF
  int32_t exp[2]; // [xsp+20h] [xbp-80h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v107; // 0:x0.16
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4355DF4 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&ServantStatusListViewItemDrawEquip_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B70694(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    sub_B70694(&StringLiteral_12137/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4355DF4 = 1;
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
  explanationLabel = (UIRangeLabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12137/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0LL);
  if ( !nameRangeLabel )
    goto LABEL_201;
  UILabel__set_text((UILabel_o *)nameRangeLabel, (System_String_o *)explanationLabel, 0LL);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = (System_String_o *)item->fields.equipTargetId1;
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    if ( (__int64)equipTargetId1 >= 1 )
    {
      if ( !explanationLabel )
        goto LABEL_201;
      ServantFaceIconComponent__Set_31481092(
        (ServantFaceIconComponent_o *)explanationLabel,
        (int64_t)equipTargetId1,
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
  v13 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v105.fields.currentCryptoKey = v13;
  *(_QWORD *)&v105.fields.fakeValue = v12;
  explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v105, 0LL);
  v14 = this->fields.explanationLabel;
  if ( (int)explanationLabel < 1 )
  {
    if ( !v14 )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)this->fields.explanationLabel;
    goto LABEL_25;
  }
  v15 = item->fields.servantLeaderInfo;
  if ( !v15 || !v14 )
    goto LABEL_201;
  ServantFaceIconComponent__Set_31485940(
    (ServantFaceIconComponent_o *)this->fields.explanationLabel,
    v15->fields.equipTarget1,
    0LL,
    0LL,
    0LL);
LABEL_26:
  explanationLabel = (UIRangeLabel_o *)item->fields.equipServantEntity;
  levelLabel = (UIRangeLabel_o *)this->fields.levelLabel;
  if ( explanationLabel )
  {
    explanationLabel = (UIRangeLabel_o *)ServantEntity__getName((ServantEntity_o *)explanationLabel, -1, -1, 0LL);
    equipTargetId1 = (System_String_o *)explanationLabel;
    if ( !levelLabel )
      goto LABEL_201;
  }
  else
  {
    equipTargetId1 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !levelLabel )
      goto LABEL_201;
  }
  UIRangeLabel__Set(levelLabel, equipTargetId1, 0LL, 1, 0, 0LL);
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
  UIIconLabel__Set_41432452(hpIconLabel, 5, (int32_t)explanationLabel, 0, 0, 0LL, 0, 0, 0, 0LL);
  costLabel = (UIIconLabel_o *)this->fields.costLabel;
  explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipHp(item, 0LL);
  if ( !costLabel )
    goto LABEL_201;
  UIIconLabel__Set_41432452(costLabel, 3, (int32_t)explanationLabel, 0, 0, 0LL, 0, 0, 0, 0LL);
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
    v23 = LODWORD(barExp[1]);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    explanationLabel = (UIRangeLabel_o *)LocalizationManager__GetNumberFormat(v23, 0LL);
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
    v27 = (int)explanationLabel;
    v28 = (ServantStatusLimitCountGauge_o *)lineSprite;
  }
  else
  {
    if ( !lineSprite )
      goto LABEL_201;
    v28 = (ServantStatusLimitCountGauge_o *)this->fields.lineSprite;
    v27 = 0;
    limitMax = 0;
  }
  ServantStatusLimitCountGauge__Set(v28, v27, limitMax, 0LL);
  ServantStatusListViewItem__GetEquipSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_62;
  equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
  if ( !equipSkillTitleRangeLabelList )
    goto LABEL_201;
  v30 = *(_QWORD *)&equipSkillTitleRangeLabelList->max_length;
  if ( v30 << 32 >= 1 )
  {
    max_length = skillInfoList->max_length;
    v32 = 0;
    v33 = 0LL;
    do
    {
      if ( v33 < (int)max_length )
      {
        if ( v33 >= max_length )
        {
LABEL_202:
          v100 = sub_B70798(explanationLabel);
          sub_B70738(v100, 0LL);
        }
        v34 = skillInfoList->m_Items[v33];
        if ( v34 && v34->fields.id >= 1 )
          v32 = v33 + 1;
      }
      ++v33;
    }
    while ( v33 < (int)v30 );
  }
  else
  {
LABEL_62:
    v32 = 0;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, v32 > 0, 0LL);
  }
  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_201;
  v101 = 0;
  v37 = 0;
  v38 = 4LL;
  v39 = 0x100000000LL;
  while ( 1 )
  {
    v40 = v38 - 4;
    if ( v38 - 4 >= (int)equipSkillIcon->max_length )
      break;
    if ( skillInfoList )
    {
      v41 = skillInfoList->max_length;
      if ( (__int64)v40 < (int)v41 )
      {
        if ( v40 >= v41 )
          goto LABEL_202;
        v42 = *((_QWORD *)&skillInfoList->obj.klass + v38);
        if ( v42 )
        {
          if ( *(int *)(v42 + 16) >= 1 )
          {
            reinforceObject = this->fields.reinforceObject;
            if ( !reinforceObject )
              goto LABEL_201;
            if ( v40 >= LODWORD(reinforceObject[1].klass) )
              goto LABEL_202;
            v44 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v45 = (UILabel_o *)*((_QWORD *)&reinforceObject->klass + v38);
            v46 = *(System_String_o **)(v42 + 40);
            if ( (BYTE3(ServantStatusListViewItemDrawEquip_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
              v44 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            explanationLabel = (UIRangeLabel_o *)WrapControlText__textAdjust(
                                                   v45,
                                                   v46,
                                                   v44->static_fields->DETAIL_FONT_SIZE,
                                                   v44->static_fields->DETAIL_FONT_SIZE,
                                                   v44->static_fields->MAX_HEIGHT,
                                                   0LL);
            v47 = this->fields.reinforceObject;
            if ( !v47 )
              goto LABEL_201;
            if ( v40 >= LODWORD(v47[1].klass) )
              goto LABEL_202;
            v48 = *((_QWORD *)&v47->klass + v38);
            if ( !v48 )
              goto LABEL_201;
            y = this->fields.baseSize.fields.y;
            v50 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + *(_DWORD *)(v48 + 164);
            v51 = v50 - LODWORD(y);
            if ( v50 >= SLODWORD(y) )
            {
              if ( !skillInfoList )
                goto LABEL_201;
              v52 = *(_QWORD *)&skillInfoList->max_length;
              v37 += v50;
              if ( v40 == (_DWORD)v52 - 1 )
                goto LABEL_93;
              if ( v38 - 3 >= (unsigned __int64)(unsigned int)v52 )
                goto LABEL_202;
              v53 = *(__int64 *)((char *)skillInfoList->m_Items + (v39 >> 29));
              if ( !v53 || *(int *)(v53 + 16) <= 0 )
LABEL_93:
                v101 |= v51 > 10;
            }
            else
            {
              v37 += LODWORD(y);
            }
          }
        }
      }
    }
    equipSkillIcon = this->fields.equipSkillIcon;
    ++v38;
    v39 += 0x100000000LL;
    if ( !equipSkillIcon )
      goto LABEL_201;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && item->fields.equipServantEntity )
  {
    EquipLevel = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
    if ( EquipLevel < ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL) )
      goto LABEL_101;
    explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    v55 = item->fields.equipServantEntity;
    if ( !v55 )
      goto LABEL_201;
    if ( (int)explanationLabel < v55->fields.limitMax )
    {
LABEL_101:
      explanationLabel = (UIRangeLabel_o *)this->fields.reinforceButton;
      if ( (v101 & 1) != 0 )
        v56 = 50;
      else
        v56 = 38;
      if ( !explanationLabel )
        goto LABEL_201;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, 1, 0LL);
      v57 = *(_QWORD *)&this->fields.skillPitch;
      if ( !v57 )
        goto LABEL_201;
      *(_BYTE *)(v57 + 89) = 1;
      explanationLabel = *(UIRangeLabel_o **)&this->fields.skillPitch;
      if ( !explanationLabel )
        goto LABEL_201;
      v37 += v56;
      UICommonButton__SetEnable((UICommonButton_o *)explanationLabel, item->fields._CanMoveCombine_k__BackingField, 0LL);
      if ( v37 >= 0 )
        v58 = v37;
      else
        v58 = v37 + 1;
      GameObjectExtensions__SetLocalPositionY(
        (UnityEngine_GameObject_o *)this->fields.reinforceButton,
        (float)-(v58 >> 1),
        0LL);
    }
  }
  z = this->fields.baseSize.fields.z;
  x = this->fields.titleBasePosition.fields.x;
  v61 = this->fields.titleBasePosition.fields.y;
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v63 = x + (float)v37;
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    explanationLabel = (UIRangeLabel_o *)this->fields.baseSprite;
    if ( !explanationLabel )
      goto LABEL_201;
    v108.fields.x = z;
    v108.fields.y = v63;
    v108.fields.z = v61;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)explanationLabel, v108, 0LL);
  }
  explanationLabel = (UIRangeLabel_o *)this->fields.titleSprite;
  if ( !explanationLabel )
    goto LABEL_201;
  v64 = z;
  if ( z == INFINITY )
    v64 = -z;
  UIWidget__set_width((UIWidget_o *)explanationLabel, (int)v64, 0LL);
  explanationLabel = (UIRangeLabel_o *)this->fields.titleSprite;
  if ( !explanationLabel )
    goto LABEL_201;
  v65 = v63;
  if ( v63 == INFINITY )
    v65 = -INFINITY;
  UIWidget__set_height((UIWidget_o *)explanationLabel, (int)v65, 0LL);
  explanationLabel = (UIRangeLabel_o *)this->fields.equipButton;
  v66 = v37 >= 0 ? v37 : v37 + 1;
  if ( !explanationLabel )
    goto LABEL_201;
  v67 = this->fields.titleBasePosition.fields.z;
  v68 = this->fields.skillBasePosition.fields.x;
  v69 = this->fields.skillBasePosition.fields.y;
  explanationLabel = (UIRangeLabel_o *)UnityEngine_Component__get_transform(
                                         (UnityEngine_Component_o *)explanationLabel,
                                         0LL);
  if ( !explanationLabel
    || (v70 = (float)(v66 >> 1),
        v109.fields.y = v68 + v70,
        v109.fields.x = v67,
        v109.fields.z = v69,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)explanationLabel, v109, 0LL),
        (v71 = this->fields.equipSkillIcon) == 0LL) )
  {
LABEL_201:
    sub_B7076C(explanationLabel, equipTargetId1);
  }
  g = this->fields.COLOR_INVALID.fields.g;
  v73 = this->fields.skillBasePosition.fields.z;
  v74 = 4LL;
  v75 = this->fields.COLOR_INVALID.fields.r + v70;
  while ( 1 )
  {
    v76 = v71->max_length;
    v77 = v74 - 4;
    if ( (int)v74 - 4 >= v76 )
      break;
    if ( !skillInfoList )
      goto LABEL_151;
    v78 = skillInfoList->max_length;
    if ( (int)v77 >= (int)v78 )
      goto LABEL_151;
    if ( v77 >= v78 )
      goto LABEL_202;
    v79 = skillInfoList->m_Items[v77];
    if ( !v79 || v79->fields.id < 1 )
    {
LABEL_151:
      equipTargetId1 = 0LL;
      goto LABEL_152;
    }
    if ( v77 >= v76 )
      goto LABEL_202;
    explanationLabel = (UIRangeLabel_o *)v71->m_Items[v77];
    if ( !explanationLabel )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)explanationLabel,
                                           0LL);
    if ( !explanationLabel )
      goto LABEL_201;
    v110.fields.x = v73;
    v110.fields.y = v75;
    v110.fields.z = g;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)explanationLabel, v110, 0LL);
    v80 = this->fields.equipSkillTitleRangeLabelList;
    if ( !v80 )
      goto LABEL_201;
    if ( v77 >= v80->max_length )
      goto LABEL_202;
    explanationLabel = v80->m_Items[v77];
    if ( !explanationLabel )
      goto LABEL_201;
    SkillIconComponent__Set((SkillIconComponent_o *)explanationLabel, v79->fields.id, 0LL);
    equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
    if ( !equipSkillExplanationLabelList )
      goto LABEL_201;
    if ( v77 >= equipSkillExplanationLabelList->max_length )
      goto LABEL_202;
    explanationLabel = (UIRangeLabel_o *)equipSkillExplanationLabelList->m_Items[v77];
    if ( !explanationLabel )
      goto LABEL_201;
    UIRangeLabel__Set(explanationLabel, v79->fields.title, 0LL, 1, 0, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v84 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v83 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v106.fields.currentCryptoKey = v84;
      *(_QWORD *)&v106.fields.fakeValue = v83;
      explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                             v106,
                                             0LL);
      if ( !item->fields.userSvtEntity )
        goto LABEL_201;
      v85 = (int)explanationLabel;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0LL);
LABEL_171:
      v95 = Rarity;
      goto LABEL_172;
    }
    v92 = item->fields.servantLeaderInfo;
    if ( v92 )
    {
      v94 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
      v93 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v107.fields.currentCryptoKey = v94;
      *(_QWORD *)&v107.fields.fakeValue = v93;
      explanationLabel = (UIRangeLabel_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(
                                             v107,
                                             0LL);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_201;
      v85 = (int)explanationLabel;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0LL);
      goto LABEL_171;
    }
    v95 = -1;
    v85 = -1;
LABEL_172:
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    explanationLabel = (UIRangeLabel_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !explanationLabel )
      goto LABEL_201;
    explanationLabel = (UIRangeLabel_o *)PartyOrganizationUtility__IsRarityRestriction_32201572(
                                           (PartyOrganizationUtility_o *)explanationLabel,
                                           v85,
                                           v95,
                                           v79->fields.id,
                                           v79->fields.lv,
                                           0LL);
    if ( ((unsigned __int8)explanationLabel & 1) != 0 )
    {
      v96 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v96 )
        goto LABEL_201;
      if ( v77 >= v96->max_length )
        goto LABEL_202;
      explanationLabel = v96->m_Items[v77];
      if ( !explanationLabel )
        goto LABEL_201;
      SkillIconComponent__SetInvalidColor(
        (SkillIconComponent_o *)explanationLabel,
        *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b,
        0LL);
      v97 = this->fields.equipSkillExplanationLabelList;
      if ( !v97 )
        goto LABEL_201;
      if ( v77 >= v97->max_length )
        goto LABEL_202;
      explanationLabel = (UIRangeLabel_o *)v97->m_Items[v77];
      if ( !explanationLabel )
        goto LABEL_201;
      UIRangeLabel__set_color(explanationLabel, *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b, 0LL);
      v98 = this->fields.reinforceObject;
      if ( !v98 )
        goto LABEL_201;
      if ( v77 >= LODWORD(v98[1].klass) )
        goto LABEL_202;
      explanationLabel = (UIRangeLabel_o *)*((_QWORD *)&v98[1].monitor + (int)v77);
      if ( !explanationLabel )
        goto LABEL_201;
      UIWidget__set_color(
        (UIWidget_o *)explanationLabel,
        *(UnityEngine_Color_o *)&this->fields.COLOR_INVALID.fields.b,
        0LL);
    }
    equipTargetId1 = (System_String_o *)(&dword_0 + 1);
LABEL_152:
    v87 = this->fields.equipSkillIcon;
    if ( !v87 )
      goto LABEL_201;
    if ( v77 >= v87->max_length )
      goto LABEL_202;
    explanationLabel = (UIRangeLabel_o *)*((_QWORD *)&v87->obj.klass + v74);
    if ( explanationLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)explanationLabel, (bool)equipTargetId1, 0LL);
      v88 = this->fields.reinforceObject;
      if ( v88 )
      {
        if ( v77 >= LODWORD(v88[1].klass) )
          goto LABEL_202;
        v89 = *((_QWORD *)&v88->klass + v74);
        if ( v89 )
        {
          explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          v90 = *(_DWORD *)(v89 + 164);
          if ( (BYTE3(ServantStatusListViewItemDrawEquip_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
            explanationLabel = (UIRangeLabel_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v74;
          v71 = this->fields.equipSkillIcon;
          LODWORD(v91) = *(_DWORD *)(*(_QWORD *)&explanationLabel[3].fields.m_CachedPtr + 8LL) + v90;
          if ( SLODWORD(v91) < SLODWORD(this->fields.baseSize.fields.y) )
            v91 = this->fields.baseSize.fields.y;
          v75 = v75 - (float)SLODWORD(v91);
          if ( v71 )
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