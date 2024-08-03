void __fastcall ServantStatusListViewItemDrawEquip___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusListViewItemDrawEquip_StaticFields *static_fields; // x8

  if ( (byte_49F9273 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusListViewItemDrawEquip_TypeInfo, v1);
    byte_49F9273 = 1;
  }
  static_fields = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x1F400000012LL;
  static_fields->ADJUST_HEIGHT = 40;
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
  struct UnityEngine_GameObject_array *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct SkillIconComponent_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct UIRangeLabel_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct UILabel_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49F9272 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, v3);
    sub_1B640C8(&SkillIconComponent___TypeInfo, v4);
    sub_1B640C8(&UILabel___TypeInfo, v5);
    sub_1B640C8(&UIRangeLabel___TypeInfo, v6);
    byte_49F9272 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1B64170(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)v7->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillBaseList = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillBaseList, (int32_t)v8, v9, v10);
  v11 = (struct SkillIconComponent_array *)sub_1B64170(
                                             SkillIconComponent___TypeInfo,
                                             (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillIcon = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillIcon, (int32_t)v11, v12, v13);
  v14 = (struct UIRangeLabel_array *)sub_1B64170(
                                       UIRangeLabel___TypeInfo,
                                       (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillTitleRangeLabelList = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillTitleRangeLabelList, (int32_t)v14, v15, v16);
  v17 = (struct UILabel_array *)sub_1B64170(
                                  UILabel___TypeInfo,
                                  (unsigned int)BalanceConfig_TypeInfo->static_fields->SvtEquipSkillListMax);
  this->fields.equipSkillExplanationLabelList = v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.equipSkillExplanationLabelList, (int32_t)v17, v18, v19);
  this->fields.COLOR_INVALID = (struct UnityEngine_Color_o)xmmword_BA3AB0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawEquip__Awake(
        ServantStatusListViewItemDrawEquip_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  ServantStatusListViewItemDrawEquip_o *v3; // x19
  __int64 v4; // x1
  float v5; // s1
  struct UnityEngine_GameObject_array *v6; // x8
  float v7; // s8
  float v8; // s1
  unsigned int v9; // w9
  struct UISprite_o *baseSprite; // x9
  int v11; // w20
  float v12; // s1
  float v13; // s0
  float v14; // s1
  float v15; // s2
  int v16; // w9
  struct UnityEngine_GameObject_array *v17; // x8
  float v18; // s8
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
    *(UnityEngine_Vector3_o *)(&v5 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v6 = v3->fields.equipSkillBaseList;
    if ( !v6 )
      goto LABEL_24;
    if ( v6->max_length <= 1 )
      goto LABEL_25;
    this = (ServantStatusListViewItemDrawEquip_o *)v6->m_Items[1];
    if ( !this )
      goto LABEL_24;
    v7 = v5;
    this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
    if ( !this )
      goto LABEL_24;
    *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    equipSkillBaseList = v3->fields.equipSkillBaseList;
    v9 = (float)(v7 - v8) == INFINITY ? 0x80000000 : (int)(float)(v7 - v8);
    v3->fields.skillPitch = v9;
    if ( !equipSkillBaseList )
      goto LABEL_24;
  }
  baseSprite = v3->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)v3->fields.titleSprite;
  v11 = v3->fields.skillPitch * equipSkillBaseList->max_length;
  v12 = (float)(baseSprite->fields.mHeight - v11);
  v3->fields.baseSize.fields.x = (float)baseSprite->fields.mWidth;
  v3->fields.baseSize.fields.y = v12;
  v3->fields.baseSize.fields.z = 0.0;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusListViewItemDrawEquip_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
  if ( !this )
    goto LABEL_24;
  *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v16 = v11 >= 0 ? v11 : v11 + 1;
  v17 = v3->fields.equipSkillBaseList;
  v18 = (float)(v16 >> 1);
  v3->fields.titleBasePosition.fields.x = v13;
  v3->fields.titleBasePosition.fields.z = v15;
  v3->fields.titleBasePosition.fields.y = v14 - v18;
  if ( !v17 )
LABEL_24:
    sub_1B64324(this);
  if ( !v17->max_length )
LABEL_25:
    sub_1B6432C(this, v4);
  this = (ServantStatusListViewItemDrawEquip_o *)v17->m_Items[0];
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
  v3->fields.skillBasePosition.fields.y = localPosition.fields.y - v18;
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
  UILabel_o *explanationLabel; // x21
  SkillIconComponent_o *equipIcon; // x0
  __int64 equipTargetId1; // x1
  struct ServantLeaderInfo_o *servantLeaderInfo; // x8
  struct EquipTargetInfo_o *equipTarget1; // x8
  __int64 v18; // x21
  __int64 v19; // x22
  struct ServantFaceIconComponent_o *v20; // x8
  struct ServantLeaderInfo_o *v21; // x9
  UIRangeLabel_o *nameRangeLabel; // x21
  System_String_o *v23; // x1
  UIExtrusionLabel_o *levelLabel; // x21
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *costLabel; // x21
  UIIconLabel_o *attackIconLabel; // x21
  UIIconLabel_o *hpIconLabel; // x21
  UILabel_o *lateExpLabel; // x21
  int32_t v30; // w22
  struct ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *equipServantEntity; // x8
  int32_t limitMax; // w2
  int32_t v34; // w1
  ServantStatusLimitCountGauge_o *v35; // x0
  _BOOL8 v36; // x1
  struct SkillIconComponent_array *equipSkillIcon; // x8
  __int64 v38; // x10
  unsigned __int64 max_length; // x9
  int v40; // w22
  signed __int64 v41; // x8
  SkillInfo_o *v42; // x13
  UnityEngine_Object_o *lineSprite; // x21
  struct UnityEngine_GameObject_array *equipSkillBaseList; // x8
  char v45; // w26
  int v46; // w25
  __int64 v47; // x28
  __int64 v48; // x29
  unsigned __int64 v49; // x23
  unsigned __int64 v50; // x9
  __int64 v51; // x8
  struct UILabel_array *equipSkillExplanationLabelList; // x9
  ServantStatusListViewItemDrawEquip_c *v53; // x0
  UILabel_o *v54; // x21
  System_String_o *v55; // x22
  struct UILabel_array *v56; // x8
  __int64 v57; // x8
  int32_t skillPitch; // w9
  int v59; // w10
  int v60; // w8
  __int64 v61; // x11
  __int64 v62; // x9
  int32_t v63; // w21
  struct ServantEntity_o *v64; // x8
  int v65; // w21
  int v66; // w8
  float y; // s8
  float x; // s9
  float z; // s10
  UnityEngine_Object_o *baseCollider; // x21
  float v71; // s8
  int32_t v72; // w1
  int32_t v73; // w1
  int v74; // w21
  float v75; // s8
  float v76; // s11
  float v77; // s9
  float v78; // s10
  struct UnityEngine_GameObject_array *v79; // x8
  float v80; // s8
  float v81; // s9
  il2cpp_array_size_t v82; // w25
  float v83; // s10
  il2cpp_array_size_t v84; // w9
  il2cpp_array_size_t v85; // w11
  SkillInfo_o *v86; // x29
  struct SkillIconComponent_array *v87; // x8
  struct UIRangeLabel_array *equipSkillTitleRangeLabelList; // x8
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v90; // x21
  __int64 v91; // x22
  int32_t v92; // w21
  int32_t Rarity; // w0
  struct UnityEngine_GameObject_array *v94; // x8
  struct UILabel_array *v95; // x8
  UILabel_o *v96; // x8
  int32_t mHeight; // w21
  int32_t v98; // w9
  struct ServantLeaderInfo_o *v99; // x8
  __int64 v100; // x21
  __int64 v101; // x22
  int32_t v102; // w22
  struct SkillIconComponent_array *v103; // x8
  struct UIRangeLabel_array *v104; // x8
  struct UILabel_array *v105; // x8
  UnityEngine_Object_o *equipButton; // x21
  float barExp[2]; // [xsp+18h] [xbp-98h] BYREF
  int32_t exp; // [xsp+20h] [xbp-90h] BYREF
  int32_t EquipLevel; // [xsp+24h] [xbp-8Ch] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F9271 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, item);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&ServantStatusListViewItemDrawEquip_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1B640C8(&StringLiteral_11809/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, v11);
    sub_1B640C8(&StringLiteral_1/*""*/, v12);
    byte_49F9271 = 1;
  }
  skillInfoList = 0LL;
  exp = 0;
  *(_QWORD *)barExp = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  equipIcon = (SkillIconComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11809/*"SERVANT_STATUS_EXPLANATION_EQUIP_ICON"*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_189;
  UILabel__set_text(explanationLabel, (System_String_o *)equipIcon, 0LL);
  if ( item->fields.userSvtEntity )
  {
    equipTargetId1 = item->fields.equipTargetId1;
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    if ( equipTargetId1 >= 1 )
    {
      if ( !equipIcon )
        goto LABEL_189;
      ServantFaceIconComponent__Set_37904692((ServantFaceIconComponent_o *)equipIcon, equipTargetId1, 0LL, 0LL, 0LL);
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
  v19 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v111.fields.currentCryptoKey = v19;
  *(_QWORD *)&v111.fields.fakeValue = v18;
  equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v111, 0LL);
  v20 = this->fields.equipIcon;
  if ( (int)equipIcon < 1 )
  {
    if ( !v20 )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)this->fields.equipIcon;
    goto LABEL_23;
  }
  v21 = item->fields.servantLeaderInfo;
  if ( !v21 || !v20 )
    goto LABEL_189;
  ServantFaceIconComponent__Set_37910572(this->fields.equipIcon, v21->fields.equipTarget1, 0LL, 0LL, 0LL);
LABEL_24:
  equipIcon = (SkillIconComponent_o *)item->fields.equipServantEntity;
  nameRangeLabel = this->fields.nameRangeLabel;
  if ( equipIcon )
  {
    equipIcon = (SkillIconComponent_o *)ServantEntity__getName((ServantEntity_o *)equipIcon, -1, -1, 0LL);
    v23 = (System_String_o *)equipIcon;
    if ( !nameRangeLabel )
      goto LABEL_189;
  }
  else
  {
    v23 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !nameRangeLabel )
      goto LABEL_189;
  }
  UIRangeLabel__Set(nameRangeLabel, v23, 0LL, 1, 0, 0LL);
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
  UIIconLabel__Set_37921148(attackIconLabel, 5, (int32_t)equipIcon, 0, 0, 0LL, 0, 0, 0, 0LL);
  hpIconLabel = this->fields.hpIconLabel;
  equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipHp(item, 0LL);
  if ( !hpIconLabel )
    goto LABEL_189;
  UIIconLabel__Set_37921148(hpIconLabel, 3, (int32_t)equipIcon, 0, 0, 0LL, 0, 0, 0, 0LL);
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
    v30 = LODWORD(barExp[1]);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    equipIcon = (SkillIconComponent_o *)LocalizationManager__GetNumberFormat(v30, 0LL);
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
    v34 = (int)equipIcon;
    v35 = limitCountGauge;
  }
  else
  {
    if ( !limitCountGauge )
      goto LABEL_189;
    v35 = this->fields.limitCountGauge;
    v34 = 0;
    limitMax = 0;
  }
  ServantStatusLimitCountGauge__Set(v35, v34, limitMax, 0LL);
  ServantStatusListViewItem__GetEquipSkillInfo(item, &skillInfoList, 0LL);
  if ( !skillInfoList )
    goto LABEL_59;
  equipSkillIcon = this->fields.equipSkillIcon;
  if ( !equipSkillIcon )
    goto LABEL_189;
  v38 = *(_QWORD *)&equipSkillIcon->max_length;
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
LABEL_190:
          sub_1B6432C(equipIcon, v36);
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
LABEL_59:
    v40 = 0;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  equipIcon = (SkillIconComponent_o *)UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)equipIcon & 1) != 0 )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.lineSprite;
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)equipIcon, 0LL);
    if ( !equipIcon )
      goto LABEL_189;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, v40 > 0, 0LL);
  }
  equipSkillBaseList = this->fields.equipSkillBaseList;
  if ( !equipSkillBaseList )
    goto LABEL_189;
  v45 = 0;
  v46 = 0;
  v47 = 4LL;
  v48 = 0x100000000LL;
  while ( 1 )
  {
    v49 = v47 - 4;
    if ( v47 - 4 >= (int)equipSkillBaseList->max_length )
      break;
    if ( skillInfoList )
    {
      v50 = skillInfoList->max_length;
      if ( (__int64)v49 < (int)v50 )
      {
        if ( v49 >= v50 )
          goto LABEL_190;
        v51 = *((_QWORD *)&skillInfoList->obj.klass + v47);
        if ( v51 )
        {
          if ( *(int *)(v51 + 16) >= 1 )
          {
            equipSkillExplanationLabelList = this->fields.equipSkillExplanationLabelList;
            if ( !equipSkillExplanationLabelList )
              goto LABEL_189;
            if ( v49 >= equipSkillExplanationLabelList->max_length )
              goto LABEL_190;
            v53 = ServantStatusListViewItemDrawEquip_TypeInfo;
            v54 = (UILabel_o *)*((_QWORD *)&equipSkillExplanationLabelList->obj.klass + v47);
            v55 = *(System_String_o **)(v51 + 40);
            if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
              v53 = ServantStatusListViewItemDrawEquip_TypeInfo;
            }
            equipIcon = (SkillIconComponent_o *)WrapControlText__textAdjust(
                                                  v54,
                                                  v55,
                                                  v53->static_fields->DETAIL_FONT_SIZE,
                                                  v53->static_fields->DETAIL_FONT_SIZE,
                                                  v53->static_fields->MAX_HEIGHT,
                                                  0LL);
            v56 = this->fields.equipSkillExplanationLabelList;
            if ( !v56 )
              goto LABEL_189;
            if ( v49 >= v56->max_length )
              goto LABEL_190;
            v57 = *((_QWORD *)&v56->obj.klass + v47);
            if ( !v57 )
              goto LABEL_189;
            skillPitch = this->fields.skillPitch;
            v59 = ServantStatusListViewItemDrawEquip_TypeInfo->static_fields->ADJUST_HEIGHT + *(_DWORD *)(v57 + 172);
            v60 = v59 - skillPitch;
            if ( v59 >= skillPitch )
            {
              if ( !skillInfoList )
                goto LABEL_189;
              v61 = *(_QWORD *)&skillInfoList->max_length;
              v46 += v59;
              if ( v49 == (_DWORD)v61 - 1 )
                goto LABEL_88;
              if ( v47 - 3 >= (unsigned __int64)(unsigned int)v61 )
                goto LABEL_190;
              v62 = *(__int64 *)((char *)skillInfoList->m_Items + (v48 >> 29));
              if ( !v62 || *(int *)(v62 + 16) <= 0 )
LABEL_88:
                v45 |= v60 > 10;
            }
            else
            {
              v46 += skillPitch;
            }
          }
        }
      }
    }
    equipSkillBaseList = this->fields.equipSkillBaseList;
    ++v47;
    v48 += 0x100000000LL;
    if ( !equipSkillBaseList )
      goto LABEL_189;
  }
  if ( item->fields._IsDisplayCombineButton_k__BackingField && item->fields.equipServantEntity )
  {
    v63 = ServantStatusListViewItem__get_EquipLevel(item, 0LL);
    if ( v63 < ServantStatusListViewItem__get_EquipMaxLevel(item, 0LL) )
      goto LABEL_96;
    equipIcon = (SkillIconComponent_o *)ServantStatusListViewItem__get_EquipLimitCount(item, 0LL);
    v64 = item->fields.equipServantEntity;
    if ( !v64 )
      goto LABEL_189;
    if ( (int)equipIcon < v64->fields.limitMax )
    {
LABEL_96:
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceObject;
      if ( (v45 & 1) != 0 )
        v65 = 50;
      else
        v65 = 38;
      if ( !equipIcon )
        goto LABEL_189;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, 1, 0LL);
      equipIcon = (SkillIconComponent_o *)this->fields.reinforceButton;
      if ( !equipIcon )
        goto LABEL_189;
      BYTE1(equipIcon[1].monitor) = 1;
      v46 += v65;
      UICommonButton__SetEnable((UICommonButton_o *)equipIcon, item->fields._CanMoveCombine_k__BackingField, 0LL);
      if ( v46 >= 0 )
        v66 = v46;
      else
        v66 = v46 + 1;
      GameObjectExtensions__SetLocalPositionY(this->fields.reinforceObject, (float)-(v66 >> 1), 0LL);
    }
  }
  x = this->fields.baseSize.fields.x;
  y = this->fields.baseSize.fields.y;
  z = this->fields.baseSize.fields.z;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v71 = y + (float)v46;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    equipIcon = (SkillIconComponent_o *)this->fields.baseCollider;
    if ( !equipIcon )
      goto LABEL_189;
    v114.fields.x = x;
    v114.fields.y = v71;
    v114.fields.z = z;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)equipIcon, v114, 0LL);
  }
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v72 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)equipIcon, v72, 0LL);
  equipIcon = (SkillIconComponent_o *)this->fields.baseSprite;
  if ( !equipIcon )
    goto LABEL_189;
  v73 = v71 == INFINITY ? 0x80000000 : (int)v71;
  UIWidget__set_height((UIWidget_o *)equipIcon, v73, 0LL);
  equipIcon = (SkillIconComponent_o *)this->fields.titleSprite;
  v74 = v46 >= 0 ? v46 : v46 + 1;
  if ( !equipIcon )
    goto LABEL_189;
  v75 = this->fields.titleBasePosition.fields.x;
  v76 = this->fields.titleBasePosition.fields.y;
  v77 = this->fields.titleBasePosition.fields.z;
  equipIcon = (SkillIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)equipIcon, 0LL);
  if ( !equipIcon
    || (v78 = (float)(v74 >> 1),
        v115.fields.y = v76 + v78,
        v115.fields.x = v75,
        v115.fields.z = v77,
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v115, 0LL),
        (v79 = this->fields.equipSkillBaseList) == 0LL) )
  {
LABEL_189:
    sub_1B64324(equipIcon);
  }
  v80 = this->fields.skillBasePosition.fields.z;
  v81 = this->fields.skillBasePosition.fields.x;
  v82 = 0;
  v83 = this->fields.skillBasePosition.fields.y + v78;
  while ( 1 )
  {
    v84 = v79->max_length;
    if ( (int)v82 >= (int)v84 )
      break;
    if ( !skillInfoList )
      goto LABEL_145;
    v85 = skillInfoList->max_length;
    if ( (int)v82 >= (int)v85 )
      goto LABEL_145;
    if ( v82 >= v85 )
      goto LABEL_190;
    v86 = skillInfoList->m_Items[v82];
    if ( !v86 || v86->fields.id < 1 )
    {
LABEL_145:
      v36 = 0LL;
      goto LABEL_146;
    }
    if ( v82 >= v84 )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v79->m_Items[v82];
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)equipIcon,
                                          0LL);
    if ( !equipIcon )
      goto LABEL_189;
    v116.fields.x = v81;
    v116.fields.y = v83;
    v116.fields.z = v80;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)equipIcon, v116, 0LL);
    v87 = this->fields.equipSkillIcon;
    if ( !v87 )
      goto LABEL_189;
    if ( v82 >= v87->max_length )
      goto LABEL_190;
    equipIcon = v87->m_Items[v82];
    if ( !equipIcon )
      goto LABEL_189;
    SkillIconComponent__Set(equipIcon, v86->fields.id, 0LL);
    equipSkillTitleRangeLabelList = this->fields.equipSkillTitleRangeLabelList;
    if ( !equipSkillTitleRangeLabelList )
      goto LABEL_189;
    if ( v82 >= equipSkillTitleRangeLabelList->max_length )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)equipSkillTitleRangeLabelList->m_Items[v82];
    if ( !equipIcon )
      goto LABEL_189;
    UIRangeLabel__Set((UIRangeLabel_o *)equipIcon, v86->fields.title, 0LL, 1, 0, 0LL);
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v91 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
      v90 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v112.fields.currentCryptoKey = v91;
      *(_QWORD *)&v112.fields.fakeValue = v90;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v112, 0LL);
      if ( !item->fields.userSvtEntity )
        goto LABEL_189;
      v92 = (int)equipIcon;
      Rarity = UserServantEntity__getRarity(item->fields.userSvtEntity, 0LL);
    }
    else
    {
      v99 = item->fields.servantLeaderInfo;
      if ( !v99 )
      {
        v102 = -1;
        v92 = -1;
        goto LABEL_164;
      }
      v101 = *(_QWORD *)&v99->fields.svtId.fields.currentCryptoKey;
      v100 = *(_QWORD *)&v99->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v113.fields.currentCryptoKey = v101;
      *(_QWORD *)&v113.fields.fakeValue = v100;
      equipIcon = (SkillIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v113, 0LL);
      if ( !item->fields.servantLeaderInfo )
        goto LABEL_189;
      v92 = (int)equipIcon;
      Rarity = ServantLeaderInfo__getRarity(item->fields.servantLeaderInfo, 0LL);
    }
    v102 = Rarity;
LABEL_164:
    equipIcon = (SkillIconComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !equipIcon )
      goto LABEL_189;
    equipIcon = (SkillIconComponent_o *)PartyOrganizationUtility__IsRarityRestriction_32017480(
                                          (PartyOrganizationUtility_o *)equipIcon,
                                          v92,
                                          v102,
                                          v86->fields.id,
                                          v86->fields.lv,
                                          0LL);
    if ( ((unsigned __int8)equipIcon & 1) != 0 )
    {
      v103 = this->fields.equipSkillIcon;
      if ( !v103 )
        goto LABEL_189;
      if ( v82 >= v103->max_length )
        goto LABEL_190;
      equipIcon = v103->m_Items[v82];
      if ( !equipIcon )
        goto LABEL_189;
      SkillIconComponent__SetInvalidColor(equipIcon, this->fields.COLOR_INVALID, 0LL);
      v104 = this->fields.equipSkillTitleRangeLabelList;
      if ( !v104 )
        goto LABEL_189;
      if ( v82 >= v104->max_length )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v104->m_Items[v82];
      if ( !equipIcon )
        goto LABEL_189;
      UIRangeLabel__set_color((UIRangeLabel_o *)equipIcon, this->fields.COLOR_INVALID, 0LL);
      v105 = this->fields.equipSkillExplanationLabelList;
      if ( !v105 )
        goto LABEL_189;
      if ( v82 >= v105->max_length )
        goto LABEL_190;
      equipIcon = (SkillIconComponent_o *)v105->m_Items[v82];
      if ( !equipIcon )
        goto LABEL_189;
      UIWidget__set_color((UIWidget_o *)equipIcon, this->fields.COLOR_INVALID, 0LL);
    }
    v36 = 1LL;
LABEL_146:
    v94 = this->fields.equipSkillBaseList;
    if ( !v94 )
      goto LABEL_189;
    if ( v82 >= v94->max_length )
      goto LABEL_190;
    equipIcon = (SkillIconComponent_o *)v94->m_Items[v82];
    if ( equipIcon )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)equipIcon, v36, 0LL);
      v95 = this->fields.equipSkillExplanationLabelList;
      if ( v95 )
      {
        if ( v82 >= v95->max_length )
          goto LABEL_190;
        v96 = v95->m_Items[v82];
        if ( v96 )
        {
          equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          mHeight = v96->fields.mHeight;
          if ( !ServantStatusListViewItemDrawEquip_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantStatusListViewItemDrawEquip_TypeInfo);
            equipIcon = (SkillIconComponent_o *)ServantStatusListViewItemDrawEquip_TypeInfo;
          }
          ++v82;
          v79 = this->fields.equipSkillBaseList;
          v98 = *((_DWORD *)equipIcon[2].monitor + 2) + mHeight;
          if ( v98 < this->fields.skillPitch )
            v98 = this->fields.skillPitch;
          v83 = v83 - (float)v98;
          if ( v79 )
            continue;
        }
      }
    }
    goto LABEL_189;
  }
  equipButton = (UnityEngine_Object_o *)this->fields.equipButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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