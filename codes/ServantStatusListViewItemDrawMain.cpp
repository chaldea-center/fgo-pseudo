void __fastcall ServantStatusListViewItemDrawMain___ctor(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawMain__GetKind(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  return 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantStatusListViewItemDrawMain__GetServantLimitCount(
        ServantStatusListViewItemDrawMain_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  ServantLimitImageMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FDEA3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FDEA3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           MasterData_WarQuestSelectionMaster,
           svtId,
           limitCount,
           0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyPortrait(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t SvtId; // w21
  int32_t ConvertOverwritePortraitLimitCount; // w22
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v9; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v12; // w20
  int32_t v13; // w19

  if ( (byte_40FDEA5 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, item);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v5);
    byte_40FDEA5 = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    if ( !item )
      sub_B170D4();
    SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimitCostumeIn = (ServantStatusListViewItemDrawMain_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                               ConvertOverwritePortraitLimitCount,
                                                                               0LL);
    ServantLimitCount = ServantStatusListViewItemDrawMain__GetServantLimitCount(
                          LimitCountByImageLimitCostumeIn,
                          SvtId,
                          (int32_t)LimitCountByImageLimitCostumeIn,
                          v9);
    levelLabel = (UITexture_o *)this->fields.levelLabel;
    v12 = ServantLimitCount;
    v13 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__loadStatusFace(levelLabel, v13, v12, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  RandomLimitCountManager_c *v7; // x0
  int32_t SvtId; // w21
  int32_t ConvertOverwritePortraitLimitCount; // w22
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v11; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v14; // w20
  int32_t v15; // w19

  if ( (byte_40FDEA6 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, item);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v5);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v6);
    byte_40FDEA6 = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_40F8215 )
    {
      sub_B16FFC(&RandomLimitCountManager_TypeInfo, item);
      byte_40F8215 = 1;
    }
    v7 = RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v7 = RandomLimitCountManager_TypeInfo;
    }
    if ( v7->static_fields->enableRandomLimitCount )
    {
      if ( !item )
        sub_B170D4();
      SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
      ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
      if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ImageLimitCount_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
      }
      LimitCountByImageLimitCostumeIn = (ServantStatusListViewItemDrawMain_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                                 ConvertOverwritePortraitLimitCount,
                                                                                 0LL);
      ServantLimitCount = ServantStatusListViewItemDrawMain__GetServantLimitCount(
                            LimitCountByImageLimitCostumeIn,
                            SvtId,
                            (int32_t)LimitCountByImageLimitCostumeIn,
                            v11);
      levelLabel = (UITexture_o *)this->fields.levelLabel;
      v14 = ServantLimitCount;
      v15 = ServantStatusListViewItem__get_SvtId(item, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__loadStatusFace(levelLabel, v15, v14, 0LL);
    }
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyStatus(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  int32_t SvtId; // w0
  int32_t v7; // w20
  int32_t ConvertOverwritePortraitLimitCount; // w21
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v10; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v13; // w19

  if ( (byte_40FDEA4 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, item);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v5);
    byte_40FDEA4 = 1;
  }
  if ( !item )
    sub_B170D4();
  SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( SvtId >= 1 )
  {
    v7 = SvtId;
    LOBYTE(this[1].klass) = 1;
    ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    LimitCountByImageLimitCostumeIn = (ServantStatusListViewItemDrawMain_o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                               ConvertOverwritePortraitLimitCount,
                                                                               0LL);
    ServantLimitCount = ServantStatusListViewItemDrawMain__GetServantLimitCount(
                          LimitCountByImageLimitCostumeIn,
                          v7,
                          (int32_t)LimitCountByImageLimitCostumeIn,
                          v10);
    levelLabel = (UITexture_o *)this->fields.levelLabel;
    v13 = ServantLimitCount;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__loadStatusFace(levelLabel, v7, v13, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawMain__SetItem(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UILabel_o *maxLevelLabel; // x21
  System_String_o *v12; // x0
  struct UIIconLabel_o *attackIconLabel; // x21
  System_String_o *v14; // x0
  struct UnityEngine_GameObject_o *expBase; // x21
  System_String_o *v16; // x0
  ServantEntity_o *svtEntity; // x0
  bool IsStatusUp; // w0
  UIIconLabel_o *hpIconLabel; // x21
  bool v20; // w23
  int32_t Atk; // w22
  UIIconLabel_o *reinforceAttackIconLabel; // x21
  int32_t Hp; // w0
  int32_t AdjustAtk; // w0
  UIIconLabel_o *v25; // x21
  int32_t v26; // w22
  int32_t AdjustHp; // w0
  int32_t v28; // w0
  UIIconLabel_o *reinforceAttackMaxLabel; // x21
  int32_t v30; // w24
  int32_t v31; // w22
  BalanceConfig_c *v32; // x8
  struct UIIconLabel_o *reinforceHpIconLabel; // x0
  int32_t v34; // w0
  UIIconLabel_o *reinforceHpMaxLabel; // x21
  int32_t v36; // w25
  int32_t v37; // w0
  BalanceConfig_c *v38; // x8
  int32_t v39; // w22
  UILabel_o *costLabel; // x0
  System_String_o *v41; // x1
  UIIconLabel_o *v42; // x0
  struct UIIconLabel_o *v43; // x0
  UIIconLabel_o *v44; // x0
  bool ExpInfo; // w0
  UnityEngine_GameObject_o *lateExpLabel; // x0
  UILabel_o *expBar; // x21
  int32_t v48; // w22
  System_String_o *NumberFormat; // x0
  struct ServantStatusLimitCountGauge_o *limitCountGauge; // x0
  ServantStatusLimitCountGauge_o *tdStrengthStatusSprite; // x21
  int32_t LimitCount; // w0
  struct ServantEntity_o *v53; // x8
  UnityEngine_Object_o *skillStrengthStatusLabelList; // x21
  UISprite_o *v55; // x21
  System_String_o *TreasureDeviceIconName; // x0
  __int64 StrengthenedCnt; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  SkillInfo_array *v60; // x8
  __int64 v61; // x9
  unsigned int v62; // w25
  unsigned __int64 v63; // x26
  signed __int64 v64; // x27
  int *v65; // x22
  int32_t v66; // w21
  int32_t IconCnt; // w21
  int32_t v68; // w22
  int32_t i; // w24
  struct ServantStatusFriendshipGauge_o *friendshipGauge; // x8
  UISprite_o *v71; // x23
  System_String_o *ICON_SKILL_OFF; // x1
  struct ServantStatusFriendshipGauge_o *v73; // x8
  int levelLabel; // w21
  UISprite_o *v75; // x0
  UnityEngine_Component_o *eventJoinIcon; // x0
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  ServantStatusFriendshipGauge_o *v79; // x0
  UnityEngine_Component_o *v80; // x0
  UnityEngine_GameObject_o *v81; // x21
  bool IsEventJoin; // w0
  UnityEngine_Object_o *servantTexture; // x19
  float fraction[2]; // [xsp+10h] [xbp-90h] BYREF
  __int64 max; // [xsp+18h] [xbp-88h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  float barExp[2]; // [xsp+30h] [xbp-70h] BYREF
  __int64 exp; // [xsp+38h] [xbp-68h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+40h] [xbp-60h] BYREF
  __int64 maxAjustAtk; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40FDEA2 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&ServantSkillStrengthStatus_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40FDEA2 = 1;
  }
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  maxAjustAtk = 0LL;
  *(_QWORD *)barExp = 0LL;
  exp = 0LL;
  skillInfoList = 0LL;
  tdInfo = 0LL;
  *(_QWORD *)fraction = 0LL;
  max = 0LL;
  LODWORD(this->fields.baseButton) = mode;
  if ( item && mode )
  {
    maxLevelLabel = this->fields.maxLevelLabel;
    HIDWORD(exp) = ServantStatusListViewItem__get_Level(item, 0LL);
    v12 = System_Int32__ToString((int32_t)&exp + 4, 0LL);
    if ( !maxLevelLabel )
      goto LABEL_113;
    UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, v12, 0LL);
    attackIconLabel = this->fields.attackIconLabel;
    HIDWORD(exp) = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
    v14 = System_Int32__ToString((int32_t)&exp + 4, 0LL);
    if ( !attackIconLabel )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)attackIconLabel, v14, 0LL);
    expBase = this->fields.expBase;
    HIDWORD(exp) = ServantStatusListViewItem__get_Cost(item, 0LL);
    v16 = System_Int32__ToString((int32_t)&exp + 4, 0LL);
    if ( !expBase )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)expBase, v16, 0LL);
    svtEntity = item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_113;
    IsStatusUp = ServantEntity__get_IsStatusUp(svtEntity, 0LL);
    hpIconLabel = this->fields.hpIconLabel;
    v20 = IsStatusUp;
    Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
    if ( v20 )
    {
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !hpIconLabel )
        goto LABEL_113;
      UIIconLabel__Set_40377052(
        hpIconLabel,
        39,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * Atk,
        0,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      reinforceAttackIconLabel = this->fields.reinforceAttackIconLabel;
      Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
      if ( !reinforceAttackIconLabel )
        goto LABEL_113;
      UIIconLabel__Set_40377052(
        reinforceAttackIconLabel,
        38,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * Hp,
        0,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
    }
    else
    {
      AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      if ( !hpIconLabel )
        goto LABEL_113;
      UIIconLabel__Set_40377052(hpIconLabel, 5, Atk, AdjustAtk, 0, 0LL, 0, 0, 0, 0LL);
      v25 = this->fields.reinforceAttackIconLabel;
      v26 = ServantStatusListViewItem__get_Hp(item, 0LL);
      AdjustHp = ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      if ( !v25 )
        goto LABEL_113;
      UIIconLabel__Set_40377052(v25, 3, v26, AdjustHp, 0, 0LL, 0, 0, 0, 0LL);
    }
    if ( ServantStatusListViewItem__GetAdjustMax(
           item,
           (int32_t *)&maxAjustAtk + 1,
           (int32_t *)&maxAjustAtk,
           &secondMaxAdjustAtk[1],
           secondMaxAdjustAtk,
           0LL) )
    {
      v28 = ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      reinforceAttackMaxLabel = (UIIconLabel_o *)this->fields.reinforceAttackMaxLabel;
      if ( v28 >= (int)maxAjustAtk )
        v30 = secondMaxAdjustAtk[0];
      else
        v30 = maxAjustAtk;
      v31 = ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      v32 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v32 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceAttackMaxLabel )
        goto LABEL_113;
      UIIconLabel__Set_40377052(
        reinforceAttackMaxLabel,
        45,
        v32->static_fields->StatusUpAdjustHp * v31,
        v32->static_fields->StatusUpAdjustHp * v30,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      reinforceHpIconLabel = this->fields.reinforceHpIconLabel;
      if ( !reinforceHpIconLabel )
        goto LABEL_113;
      UILabel__set_text((UILabel_o *)reinforceHpIconLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v34 = ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      reinforceHpMaxLabel = (UIIconLabel_o *)this->fields.reinforceHpMaxLabel;
      if ( v34 >= SHIDWORD(maxAjustAtk) )
        v36 = secondMaxAdjustAtk[1];
      else
        v36 = HIDWORD(maxAjustAtk);
      v37 = ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      v38 = BalanceConfig_TypeInfo;
      v39 = v37;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v38 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceHpMaxLabel )
        goto LABEL_113;
      UIIconLabel__Set_40377052(
        reinforceHpMaxLabel,
        44,
        v38->static_fields->StatusUpAdjustHp * v39,
        v38->static_fields->StatusUpAdjustHp * v36,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      costLabel = this->fields.costLabel;
      if ( !costLabel )
        goto LABEL_113;
      v41 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      v42 = (UIIconLabel_o *)this->fields.reinforceAttackMaxLabel;
      if ( !v42 )
        goto LABEL_113;
      UIIconLabel__Clear(v42, 0LL);
      v43 = this->fields.reinforceHpIconLabel;
      if ( !v43 )
        goto LABEL_113;
      UILabel__set_text((UILabel_o *)v43, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v44 = (UIIconLabel_o *)this->fields.reinforceHpMaxLabel;
      if ( !v44 )
        goto LABEL_113;
      UIIconLabel__Clear(v44, 0LL);
      costLabel = this->fields.costLabel;
      if ( !costLabel )
        goto LABEL_113;
      v41 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text(costLabel, v41, 0LL);
    ExpInfo = ServantStatusListViewItem__GetExpInfo(item, (int32_t *)&exp, (int32_t *)&barExp[1], barExp, 0LL);
    if ( !this->fields.lateExpBase )
      goto LABEL_113;
    if ( ExpInfo )
    {
      UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
      lateExpLabel = (UnityEngine_GameObject_o *)this->fields.lateExpLabel;
      if ( !lateExpLabel )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive(lateExpLabel, SLODWORD(barExp[1]) > 0, 0LL);
      expBar = (UILabel_o *)this->fields.expBar;
      v48 = LODWORD(barExp[1]);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      NumberFormat = LocalizationManager__GetNumberFormat(v48, 0LL);
      if ( !expBar )
        goto LABEL_113;
      UILabel__set_text(expBar, NumberFormat, 0LL);
      limitCountGauge = this->fields.limitCountGauge;
      if ( !limitCountGauge )
        goto LABEL_113;
      UIProgressBar__set_value((UIProgressBar_o *)limitCountGauge, barExp[0], 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 0, 0LL);
    }
    tdStrengthStatusSprite = (ServantStatusLimitCountGauge_o *)this->fields.tdStrengthStatusSprite;
    LimitCount = ServantStatusListViewItem__get_LimitCount(item, 0LL);
    v53 = item->fields.svtEntity;
    if ( !v53 || !tdStrengthStatusSprite )
      goto LABEL_113;
    ServantStatusLimitCountGauge__Set(tdStrengthStatusSprite, LimitCount, v53->fields.limitMax, 0LL);
    skillStrengthStatusLabelList = (UnityEngine_Object_o *)this->fields.skillStrengthStatusLabelList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatusLabelList, 0LL, 0LL) )
    {
      ServantStatusListViewItem__GetNpInfo(item, &tdInfo, 0LL);
      if ( !tdInfo )
        goto LABEL_113;
      v55 = (UISprite_o *)this->fields.skillStrengthStatusLabelList;
      TreasureDeviceIconName = StrengthStatus__GetTreasureDeviceIconName(
                                 tdInfo->fields.strengthStatus,
                                 tdInfo->fields.treasureDeviceNum,
                                 0LL);
      if ( !v55 )
        goto LABEL_113;
      UISprite__set_spriteName(v55, TreasureDeviceIconName, 0LL);
    }
    if ( this->fields.friendshipGauge )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
      v60 = skillInfoList;
      if ( skillInfoList )
      {
        v61 = *(_QWORD *)&skillInfoList->max_length;
        if ( (int)v61 >= 1 )
        {
          v62 = 0;
          v63 = 0LL;
          v64 = (int)v61;
          while ( v63 < v60->max_length )
          {
            v65 = (int *)v60->m_Items[v63];
            if ( v65 && v65[4] >= 1 && v65[12] )
            {
              v66 = v65[13];
              if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
              }
              IconCnt = ServantSkillStrengthStatus__GetIconCnt(v66, 0LL);
              StrengthenedCnt = ServantSkillStrengthStatus__GetStrengthenedCnt(v65[12], v65[13], 0LL);
              if ( IconCnt >= 1 )
              {
                v68 = StrengthenedCnt;
                for ( i = 0; i < IconCnt; ++i )
                {
                  friendshipGauge = this->fields.friendshipGauge;
                  if ( !friendshipGauge )
                    goto LABEL_113;
                  if ( v62 + i >= LODWORD(friendshipGauge->fields.levelLabel) )
                    goto LABEL_114;
                  v71 = (UISprite_o *)*((_QWORD *)&friendshipGauge->fields.maxLevelLabel + (int)(v62 + i));
                  if ( i >= v68 )
                  {
                    if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                    }
                    if ( !v71 )
                      goto LABEL_113;
                    ICON_SKILL_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_OFF;
                  }
                  else
                  {
                    if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                    }
                    if ( !v71 )
                      goto LABEL_113;
                    ICON_SKILL_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_ON;
                  }
                  UISprite__set_spriteName(v71, ICON_SKILL_OFF, 0LL);
                }
                v62 += i;
              }
            }
            if ( (__int64)++v63 >= v64 )
              goto LABEL_93;
            v60 = skillInfoList;
            if ( !skillInfoList )
              goto LABEL_113;
          }
LABEL_114:
          sub_B17100(StrengthenedCnt, v58, v59);
          sub_B170A0();
        }
      }
      v62 = 0;
LABEL_93:
      v73 = this->fields.friendshipGauge;
      if ( !v73 )
        goto LABEL_113;
      levelLabel = (int)v73->fields.levelLabel;
      if ( (int)v62 < levelLabel )
      {
        while ( v62 < LODWORD(v73->fields.levelLabel) )
        {
          v75 = (UISprite_o *)*((_QWORD *)&v73->fields.maxLevelLabel + (int)v62);
          if ( !v75 )
            goto LABEL_113;
          UISprite__set_spriteName(v75, 0LL, 0LL);
          if ( (int)++v62 >= levelLabel )
            goto LABEL_100;
          v73 = this->fields.friendshipGauge;
          if ( !v73 )
            goto LABEL_113;
        }
        goto LABEL_114;
      }
    }
LABEL_100:
    eventJoinIcon = (UnityEngine_Component_o *)this->fields.eventJoinIcon;
    if ( eventJoinIcon )
    {
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      gameObject = UnityEngine_Component__get_gameObject(eventJoinIcon, 0LL);
      if ( gameObject )
      {
        if ( userSvtCollectionEntity )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          ServantStatusListViewItem__GetFriendshipInfo(
            item,
            (int32_t *)&max + 1,
            (int32_t *)&max,
            (int32_t *)&fraction[1],
            fraction,
            0LL);
          v79 = (ServantStatusFriendshipGauge_o *)this->fields.eventJoinIcon;
          if ( !v79 )
            goto LABEL_113;
          ServantStatusFriendshipGauge__Set(v79, SHIDWORD(max), max, SLODWORD(fraction[1]), fraction[0], 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        }
        v80 = *(UnityEngine_Component_o **)&this->fields.isStart;
        if ( v80 )
        {
          v81 = UnityEngine_Component__get_gameObject(v80, 0LL);
          IsEventJoin = ServantStatusListViewItem__get_IsEventJoin(item, 0LL);
          if ( v81 )
          {
            UnityEngine_GameObject__SetActive(v81, IsEventJoin, 0LL);
            servantTexture = (UnityEngine_Object_o *)this->fields.servantTexture;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__op_Inequality(servantTexture, 0LL, 0LL);
            return;
          }
        }
      }
    }
LABEL_113:
    sub_B170D4();
  }
}