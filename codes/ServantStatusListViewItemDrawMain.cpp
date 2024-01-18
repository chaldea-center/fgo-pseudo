void __fastcall ServantStatusListViewItemDrawMain___ctor(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_418A7CB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A7CB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  return ServantLimitImageMaster__GetServantLimitCountSealAfter(
           (ServantLimitImageMaster_o *)Instance,
           svtId,
           limitCount,
           0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyPortrait(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain_o *v4; // x20
  __int64 v5; // x1
  int32_t SvtId; // w21
  int32_t ConvertOverwritePortraitLimitCount; // w22
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v9; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v12; // w20
  int32_t v13; // w19

  v4 = this;
  if ( (byte_418A7CD & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, item);
    this = (ServantStatusListViewItemDrawMain_o *)sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v5);
    byte_418A7CD = 1;
  }
  if ( LOBYTE(v4[1].klass) )
  {
    if ( !item )
      sub_B2C434(this, item);
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
    levelLabel = (UITexture_o *)v4->fields.levelLabel;
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

  if ( (byte_418A7CE & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, item);
    sub_B2C35C(&RandomLimitCountManager_TypeInfo, v5);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v6);
    byte_418A7CE = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_4185F2D )
    {
      sub_B2C35C(&RandomLimitCountManager_TypeInfo, item);
      byte_4185F2D = 1;
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
        sub_B2C434(v7, item);
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
  ServantStatusListViewItemDrawMain_o *v4; // x19
  __int64 v5; // x1
  int32_t SvtId; // w0
  int32_t v7; // w20
  int32_t ConvertOverwritePortraitLimitCount; // w21
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v10; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v13; // w19

  v4 = this;
  if ( (byte_418A7CC & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, item);
    this = (ServantStatusListViewItemDrawMain_o *)sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v5);
    byte_418A7CC = 1;
  }
  if ( !item )
    sub_B2C434(this, item);
  SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( SvtId >= 1 )
  {
    v7 = SvtId;
    LOBYTE(v4[1].klass) = 1;
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
    levelLabel = (UITexture_o *)v4->fields.levelLabel;
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
  System_String_o *svtEntity; // x0
  __int64 v13; // x1
  struct UIIconLabel_o *attackIconLabel; // x21
  struct UnityEngine_GameObject_o *expBase; // x21
  bool IsStatusUp; // w0
  UIIconLabel_o *hpIconLabel; // x21
  bool v18; // w23
  int32_t Atk; // w22
  UIIconLabel_o *reinforceAttackIconLabel; // x21
  UIIconLabel_o *v21; // x21
  int32_t Hp; // w22
  int32_t AdjustAtk; // w0
  UIIconLabel_o *reinforceAttackMaxLabel; // x21
  int32_t v25; // w24
  int v26; // w22
  BalanceConfig_c *v27; // x8
  int32_t AdjustHp; // w0
  UIIconLabel_o *reinforceHpMaxLabel; // x21
  int32_t v30; // w25
  BalanceConfig_c *v31; // x8
  int v32; // w22
  System_String_o *v33; // x1
  UILabel_o *expBar; // x21
  int32_t v35; // w22
  ServantStatusLimitCountGauge_o *tdStrengthStatusSprite; // x21
  struct ServantEntity_o *v37; // x8
  UnityEngine_Object_o *skillStrengthStatusLabelList; // x21
  UISprite_o *v39; // x21
  SkillInfo_array *v40; // x8
  __int64 v41; // x9
  unsigned int v42; // w25
  unsigned __int64 v43; // x26
  signed __int64 v44; // x27
  int *v45; // x22
  int32_t v46; // w21
  int32_t IconCnt; // w21
  int32_t v48; // w22
  int32_t i; // w24
  struct ServantStatusFriendshipGauge_o *friendshipGauge; // x8
  UISprite_o *v51; // x23
  System_String_o *ICON_SKILL_OFF; // x1
  struct ServantStatusFriendshipGauge_o *v53; // x8
  int levelLabel; // w21
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *servantTexture; // x19
  __int64 v58; // x0
  float fraction[2]; // [xsp+10h] [xbp-90h] BYREF
  __int64 max; // [xsp+18h] [xbp-88h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-78h] BYREF
  float barExp[2]; // [xsp+30h] [xbp-70h] BYREF
  __int64 exp; // [xsp+38h] [xbp-68h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+40h] [xbp-60h] BYREF
  __int64 maxAjustAtk; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_418A7CA & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&ServantSkillStrengthStatus_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418A7CA = 1;
  }
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  maxAjustAtk = 0LL;
  *(_QWORD *)barExp = 0LL;
  exp = 0LL;
  skillInfoList = 0LL;
  tdInfo = 0LL;
  *(_QWORD *)fraction = 0LL;
  max = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    maxLevelLabel = this->fields.maxLevelLabel;
    HIDWORD(exp) = ServantStatusListViewItem__get_Level(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp + 4, 0LL);
    if ( !maxLevelLabel )
      goto LABEL_113;
    UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, svtEntity, 0LL);
    attackIconLabel = this->fields.attackIconLabel;
    HIDWORD(exp) = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp + 4, 0LL);
    if ( !attackIconLabel )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)attackIconLabel, svtEntity, 0LL);
    expBase = this->fields.expBase;
    HIDWORD(exp) = ServantStatusListViewItem__get_Cost(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp + 4, 0LL);
    if ( !expBase )
      goto LABEL_113;
    UILabel__set_text((UILabel_o *)expBase, svtEntity, 0LL);
    svtEntity = (System_String_o *)item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_113;
    IsStatusUp = ServantEntity__get_IsStatusUp((ServantEntity_o *)svtEntity, 0LL);
    hpIconLabel = this->fields.hpIconLabel;
    v18 = IsStatusUp;
    Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
    if ( v18 )
    {
      svtEntity = (System_String_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !hpIconLabel )
        goto LABEL_113;
      UIIconLabel__Set_41609428(
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
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_Hp(item, 0LL);
      if ( !reinforceAttackIconLabel )
        goto LABEL_113;
      UIIconLabel__Set_41609428(
        reinforceAttackIconLabel,
        38,
        BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * (_DWORD)svtEntity,
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
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      if ( !hpIconLabel )
        goto LABEL_113;
      UIIconLabel__Set_41609428(hpIconLabel, 5, Atk, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0LL);
      v21 = this->fields.reinforceAttackIconLabel;
      Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      if ( !v21 )
        goto LABEL_113;
      UIIconLabel__Set_41609428(v21, 3, Hp, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0LL);
    }
    if ( ServantStatusListViewItem__GetAdjustMax(
           item,
           (int32_t *)&maxAjustAtk + 1,
           (int32_t *)&maxAjustAtk,
           &secondMaxAdjustAtk[1],
           secondMaxAdjustAtk,
           0LL) )
    {
      AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      reinforceAttackMaxLabel = (UIIconLabel_o *)this->fields.reinforceAttackMaxLabel;
      if ( AdjustAtk >= (int)maxAjustAtk )
        v25 = secondMaxAdjustAtk[0];
      else
        v25 = maxAjustAtk;
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      v26 = (int)svtEntity;
      v27 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceAttackMaxLabel )
        goto LABEL_113;
      UIIconLabel__Set_41609428(
        reinforceAttackMaxLabel,
        45,
        v27->static_fields->StatusUpAdjustHp * v26,
        v27->static_fields->StatusUpAdjustHp * v25,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
      if ( !svtEntity )
        goto LABEL_113;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      AdjustHp = ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      reinforceHpMaxLabel = (UIIconLabel_o *)this->fields.reinforceHpMaxLabel;
      if ( AdjustHp >= SHIDWORD(maxAjustAtk) )
        v30 = secondMaxAdjustAtk[1];
      else
        v30 = HIDWORD(maxAjustAtk);
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      v31 = BalanceConfig_TypeInfo;
      v32 = (int)svtEntity;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v31 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceHpMaxLabel )
        goto LABEL_113;
      UIIconLabel__Set_41609428(
        reinforceHpMaxLabel,
        44,
        v31->static_fields->StatusUpAdjustHp * v32,
        v31->static_fields->StatusUpAdjustHp * v30,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      svtEntity = (System_String_o *)this->fields.costLabel;
      if ( !svtEntity )
        goto LABEL_113;
      v33 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_113;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
      if ( !svtEntity )
        goto LABEL_113;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      svtEntity = (System_String_o *)this->fields.reinforceHpMaxLabel;
      if ( !svtEntity )
        goto LABEL_113;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.costLabel;
      if ( !svtEntity )
        goto LABEL_113;
      v33 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)svtEntity, v33, 0LL);
    svtEntity = (System_String_o *)ServantStatusListViewItem__GetExpInfo(
                                     item,
                                     (int32_t *)&exp,
                                     (int32_t *)&barExp[1],
                                     barExp,
                                     0LL);
    if ( !this->fields.lateExpBase )
      goto LABEL_113;
    if ( ((unsigned __int8)svtEntity & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
      svtEntity = (System_String_o *)this->fields.lateExpLabel;
      if ( !svtEntity )
        goto LABEL_113;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, SLODWORD(barExp[1]) > 0, 0LL);
      expBar = (UILabel_o *)this->fields.expBar;
      v35 = LODWORD(barExp[1]);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      svtEntity = LocalizationManager__GetNumberFormat(v35, 0LL);
      if ( !expBar )
        goto LABEL_113;
      UILabel__set_text(expBar, svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.limitCountGauge;
      if ( !svtEntity )
        goto LABEL_113;
      UIProgressBar__set_value((UIProgressBar_o *)svtEntity, barExp[0], 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 0, 0LL);
    }
    tdStrengthStatusSprite = (ServantStatusLimitCountGauge_o *)this->fields.tdStrengthStatusSprite;
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
    v37 = item->fields.svtEntity;
    if ( !v37 || !tdStrengthStatusSprite )
      goto LABEL_113;
    ServantStatusLimitCountGauge__Set(tdStrengthStatusSprite, (int32_t)svtEntity, v37->fields.limitMax, 0LL);
    skillStrengthStatusLabelList = (UnityEngine_Object_o *)this->fields.skillStrengthStatusLabelList;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(skillStrengthStatusLabelList, 0LL, 0LL) )
    {
      svtEntity = (System_String_o *)ServantStatusListViewItem__GetNpInfo(item, &tdInfo, 0LL);
      if ( !tdInfo )
        goto LABEL_113;
      v39 = (UISprite_o *)this->fields.skillStrengthStatusLabelList;
      svtEntity = StrengthStatus__GetTreasureDeviceIconName(
                    tdInfo->fields.strengthStatus,
                    tdInfo->fields.treasureDeviceNum,
                    0LL);
      if ( !v39 )
        goto LABEL_113;
      UISprite__set_spriteName(v39, svtEntity, 0LL);
    }
    if ( this->fields.friendshipGauge )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
      v40 = skillInfoList;
      if ( skillInfoList )
      {
        v41 = *(_QWORD *)&skillInfoList->max_length;
        if ( (int)v41 >= 1 )
        {
          v42 = 0;
          v43 = 0LL;
          v44 = (int)v41;
          while ( v43 < v40->max_length )
          {
            v45 = (int *)v40->m_Items[v43];
            if ( v45 && v45[4] >= 1 && v45[12] )
            {
              v46 = v45[13];
              if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
              }
              IconCnt = ServantSkillStrengthStatus__GetIconCnt(v46, 0LL);
              svtEntity = (System_String_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(v45[12], v45[13], 0LL);
              if ( IconCnt >= 1 )
              {
                v48 = (int)svtEntity;
                for ( i = 0; i < IconCnt; ++i )
                {
                  friendshipGauge = this->fields.friendshipGauge;
                  if ( !friendshipGauge )
                    goto LABEL_113;
                  if ( v42 + i >= LODWORD(friendshipGauge->fields.levelLabel) )
                    goto LABEL_114;
                  svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
                  v51 = (UISprite_o *)*((_QWORD *)&friendshipGauge->fields.maxLevelLabel + (int)(v42 + i));
                  if ( i >= v48 )
                  {
                    if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                    }
                    if ( !v51 )
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
                    if ( !v51 )
                      goto LABEL_113;
                    ICON_SKILL_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_ON;
                  }
                  UISprite__set_spriteName(v51, ICON_SKILL_OFF, 0LL);
                }
                v42 += i;
              }
            }
            if ( (__int64)++v43 >= v44 )
              goto LABEL_93;
            v40 = skillInfoList;
            if ( !skillInfoList )
              goto LABEL_113;
          }
LABEL_114:
          v58 = sub_B2C460(svtEntity);
          sub_B2C400(v58, 0LL);
        }
      }
      v42 = 0;
LABEL_93:
      v53 = this->fields.friendshipGauge;
      if ( !v53 )
        goto LABEL_113;
      levelLabel = (int)v53->fields.levelLabel;
      if ( (int)v42 < levelLabel )
      {
        while ( v42 < LODWORD(v53->fields.levelLabel) )
        {
          svtEntity = (System_String_o *)*((_QWORD *)&v53->fields.maxLevelLabel + (int)v42);
          if ( !svtEntity )
            goto LABEL_113;
          UISprite__set_spriteName((UISprite_o *)svtEntity, 0LL, 0LL);
          if ( (int)++v42 >= levelLabel )
            goto LABEL_100;
          v53 = this->fields.friendshipGauge;
          if ( !v53 )
            goto LABEL_113;
        }
        goto LABEL_114;
      }
    }
LABEL_100:
    svtEntity = (System_String_o *)this->fields.eventJoinIcon;
    if ( svtEntity )
    {
      userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
      svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
      if ( svtEntity )
      {
        if ( userSvtCollectionEntity )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          ServantStatusListViewItem__GetFriendshipInfo(
            item,
            (int32_t *)&max + 1,
            (int32_t *)&max,
            (int32_t *)&fraction[1],
            fraction,
            0LL);
          svtEntity = (System_String_o *)this->fields.eventJoinIcon;
          if ( !svtEntity )
            goto LABEL_113;
          ServantStatusFriendshipGauge__Set(
            (ServantStatusFriendshipGauge_o *)svtEntity,
            SHIDWORD(max),
            max,
            SLODWORD(fraction[1]),
            fraction[0],
            0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        }
        svtEntity = *(System_String_o **)&this->fields.isStart;
        if ( svtEntity )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
          svtEntity = (System_String_o *)ServantStatusListViewItem__get_IsEventJoin(item, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)svtEntity & 1, 0LL);
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
    sub_B2C434(svtEntity, v13);
  }
}