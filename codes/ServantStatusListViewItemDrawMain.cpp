void __fastcall ServantStatusListViewItemDrawMain___ctor(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__Awake(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantStatusListViewItemDrawMain__GetKind(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall ServantStatusListViewItemDrawMain__GetServantLimitCount(
        ServantStatusListViewItemDrawMain_o *this,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42B425B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B425B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v7);
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
  int32_t SvtId; // w21
  int32_t ConvertOverwritePortraitLimitCount; // w22
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v8; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v11; // w20
  int32_t v12; // w19

  v4 = this;
  if ( (byte_42B425D & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    this = (ServantStatusListViewItemDrawMain_o *)sub_B52984(&ServantAssetLoadManager_TypeInfo);
    byte_42B425D = 1;
  }
  if ( LOBYTE(v4[1].klass) )
  {
    if ( !item )
      sub_B52A5C(this, item);
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
                          v8);
    levelLabel = (UITexture_o *)v4->fields.levelLabel;
    v11 = ServantLimitCount;
    v12 = ServantStatusListViewItem__get_SvtId(item, 0LL);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__loadStatusFace(levelLabel, v12, v11, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  RandomLimitCountManager_c *v5; // x0
  int32_t SvtId; // w21
  int32_t ConvertOverwritePortraitLimitCount; // w22
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v9; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v12; // w20
  int32_t v13; // w19

  if ( (byte_42B425E & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    byte_42B425E = 1;
  }
  if ( LOBYTE(this[1].klass) )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_42AE27F )
    {
      sub_B52984(&RandomLimitCountManager_TypeInfo);
      byte_42AE27F = 1;
    }
    v5 = RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v5 = RandomLimitCountManager_TypeInfo;
    }
    if ( v5->static_fields->enableRandomLimitCount )
    {
      if ( !item )
        sub_B52A5C(v5, item);
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
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyStatus(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain_o *v4; // x19
  int32_t SvtId; // w0
  int32_t v6; // w20
  int32_t ConvertOverwritePortraitLimitCount; // w21
  ServantStatusListViewItemDrawMain_o *LimitCountByImageLimitCostumeIn; // x0
  const MethodInfo *v9; // x3
  int32_t ServantLimitCount; // w0
  UITexture_o *levelLabel; // x21
  int32_t v12; // w19

  v4 = this;
  if ( (byte_42B425C & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    this = (ServantStatusListViewItemDrawMain_o *)sub_B52984(&ServantAssetLoadManager_TypeInfo);
    byte_42B425C = 1;
  }
  if ( !item )
    sub_B52A5C(this, item);
  SvtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
  if ( SvtId >= 1 )
  {
    v6 = SvtId;
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
                          v6,
                          (int32_t)LimitCountByImageLimitCostumeIn,
                          v9);
    levelLabel = (UITexture_o *)v4->fields.levelLabel;
    v12 = ServantLimitCount;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__loadStatusFace(levelLabel, v6, v12, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawMain__SetItem(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  struct UILabel_o *maxLevelLabel; // x21
  System_String_o *svtEntity; // x0
  __int64 v9; // x1
  struct UIIconLabel_o *attackIconLabel; // x21
  struct UnityEngine_GameObject_o *expBase; // x21
  bool IsStatusUp; // w0
  UIIconLabel_o *hpIconLabel; // x21
  bool v14; // w23
  int32_t Atk; // w22
  UIIconLabel_o *reinforceAttackIconLabel; // x21
  UIIconLabel_o *v17; // x21
  int32_t Hp; // w22
  int32_t AdjustAtk; // w0
  UIIconLabel_o *reinforceAttackMaxLabel; // x21
  int32_t v21; // w24
  int v22; // w22
  BalanceConfig_c *v23; // x8
  int32_t AdjustHp; // w0
  UIIconLabel_o *reinforceHpMaxLabel; // x21
  int32_t v26; // w25
  BalanceConfig_c *v27; // x8
  int v28; // w22
  System_String_o *v29; // x1
  UILabel_o *expBar; // x21
  int32_t v31; // w22
  ServantStatusLimitCountGauge_o *tdStrengthStatusSprite; // x21
  struct ServantEntity_o *v33; // x8
  UnityEngine_Object_o *skillStrengthStatusLabelList; // x21
  UISprite_o *v35; // x21
  SkillInfo_array *v36; // x8
  __int64 v37; // x9
  unsigned int v38; // w25
  unsigned __int64 v39; // x26
  signed __int64 v40; // x27
  int *v41; // x22
  int32_t v42; // w21
  int32_t IconCnt; // w21
  int32_t v44; // w22
  int32_t i; // w24
  struct ServantStatusFriendshipGauge_o *friendshipGauge; // x8
  UISprite_o *v47; // x23
  System_String_o *ICON_SKILL_OFF; // x1
  struct ServantStatusFriendshipGauge_o *v49; // x8
  int levelLabel; // w21
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *servantTexture; // x21
  int v54; // w21
  int v55; // w22
  int v56; // w8
  UnityEngine_GameObject_o *levelExceedButton; // x0
  int v58; // s0
  bool IsEventJoin; // w0
  struct UnityEngine_GameObject_o *limitCountUpObject; // x8
  struct UnityEngine_GameObject_o *bondLimitUpObject; // x8
  int v62; // s0
  int v64; // s1
  struct UnityEngine_GameObject_o *levelExceedObject; // x8
  __int64 v66; // x8
  __int64 v67; // x0
  int32_t maxFriendshipRank[2]; // [xsp+10h] [xbp-A0h] BYREF
  __int64 fraction; // [xsp+18h] [xbp-98h] BYREF
  int32_t max[2]; // [xsp+20h] [xbp-90h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-88h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+30h] [xbp-80h] BYREF
  __int64 barExp; // [xsp+38h] [xbp-78h] BYREF
  int32_t exp[2]; // [xsp+40h] [xbp-70h] BYREF
  __int64 secondMaxAdjustAtk; // [xsp+48h] [xbp-68h] BYREF
  int32_t maxAjustAtk; // [xsp+58h] [xbp-58h] BYREF
  int32_t maxAjustHp; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_42B425A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantSkillStrengthStatus_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B425A = 1;
  }
  maxAjustHp = 0;
  maxAjustAtk = 0;
  *(_QWORD *)exp = 0LL;
  secondMaxAdjustAtk = 0LL;
  tdInfo = 0LL;
  barExp = 0LL;
  *(_QWORD *)max = 0LL;
  skillInfoList = 0LL;
  *(_QWORD *)maxFriendshipRank = 0LL;
  fraction = 0LL;
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode )
  {
    maxLevelLabel = this->fields.maxLevelLabel;
    exp[1] = ServantStatusListViewItem__get_Level(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( !maxLevelLabel )
      goto LABEL_181;
    UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, svtEntity, 0LL);
    attackIconLabel = this->fields.attackIconLabel;
    exp[1] = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( !attackIconLabel )
      goto LABEL_181;
    UILabel__set_text((UILabel_o *)attackIconLabel, svtEntity, 0LL);
    expBase = this->fields.expBase;
    exp[1] = ServantStatusListViewItem__get_Cost(item, 0LL);
    svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
    if ( !expBase )
      goto LABEL_181;
    UILabel__set_text((UILabel_o *)expBase, svtEntity, 0LL);
    svtEntity = (System_String_o *)item->fields.svtEntity;
    if ( !svtEntity )
      goto LABEL_181;
    IsStatusUp = ServantEntity__get_IsStatusUp((ServantEntity_o *)svtEntity, 0LL);
    hpIconLabel = this->fields.hpIconLabel;
    v14 = IsStatusUp;
    Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
    if ( v14 )
    {
      svtEntity = (System_String_o *)BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      }
      if ( !hpIconLabel )
        goto LABEL_181;
      UIIconLabel__Set_41786400(
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
        goto LABEL_181;
      UIIconLabel__Set_41786400(
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
        goto LABEL_181;
      UIIconLabel__Set_41786400(hpIconLabel, 5, Atk, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0LL);
      v17 = this->fields.reinforceAttackIconLabel;
      Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      if ( !v17 )
        goto LABEL_181;
      UIIconLabel__Set_41786400(v17, 3, Hp, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0LL);
    }
    if ( ServantStatusListViewItem__GetAdjustMax(
           item,
           &maxAjustHp,
           &maxAjustAtk,
           (int32_t *)&secondMaxAdjustAtk + 1,
           (int32_t *)&secondMaxAdjustAtk,
           0LL) )
    {
      AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      reinforceAttackMaxLabel = (UIIconLabel_o *)this->fields.reinforceAttackMaxLabel;
      if ( AdjustAtk >= maxAjustAtk )
        v21 = secondMaxAdjustAtk;
      else
        v21 = maxAjustAtk;
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
      v22 = (int)svtEntity;
      v23 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v23 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceAttackMaxLabel )
        goto LABEL_181;
      UIIconLabel__Set_41786400(
        reinforceAttackMaxLabel,
        45,
        v23->static_fields->StatusUpAdjustHp * v22,
        v23->static_fields->StatusUpAdjustHp * v21,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      AdjustHp = ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      reinforceHpMaxLabel = (UIIconLabel_o *)this->fields.reinforceHpMaxLabel;
      if ( AdjustHp >= maxAjustHp )
        v26 = HIDWORD(secondMaxAdjustAtk);
      else
        v26 = maxAjustHp;
      svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
      v27 = BalanceConfig_TypeInfo;
      v28 = (int)svtEntity;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      if ( !reinforceHpMaxLabel )
        goto LABEL_181;
      UIIconLabel__Set_41786400(
        reinforceHpMaxLabel,
        44,
        v27->static_fields->StatusUpAdjustHp * v28,
        v27->static_fields->StatusUpAdjustHp * v26,
        0,
        0LL,
        0,
        0,
        0,
        0LL);
      svtEntity = (System_String_o *)this->fields.costLabel;
      if ( !svtEntity )
        goto LABEL_181;
      v29 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
      if ( !svtEntity )
        goto LABEL_181;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
      if ( !svtEntity )
        goto LABEL_181;
      UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      svtEntity = (System_String_o *)this->fields.reinforceHpMaxLabel;
      if ( !svtEntity )
        goto LABEL_181;
      UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.costLabel;
      if ( !svtEntity )
        goto LABEL_181;
      v29 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)svtEntity, v29, 0LL);
    svtEntity = (System_String_o *)ServantStatusListViewItem__GetExpInfo(
                                     item,
                                     exp,
                                     (int32_t *)&barExp + 1,
                                     (float *)&barExp,
                                     0LL);
    if ( !this->fields.lateExpBase )
      goto LABEL_181;
    if ( ((unsigned __int8)svtEntity & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
      svtEntity = (System_String_o *)this->fields.lateExpLabel;
      if ( !svtEntity )
        goto LABEL_181;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, SHIDWORD(barExp) > 0, 0LL);
      expBar = (UILabel_o *)this->fields.expBar;
      v31 = HIDWORD(barExp);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      svtEntity = LocalizationManager__GetNumberFormat(v31, 0LL);
      if ( !expBar )
        goto LABEL_181;
      UILabel__set_text(expBar, svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.limitCountGauge;
      if ( !svtEntity )
        goto LABEL_181;
      UIProgressBar__set_value((UIProgressBar_o *)svtEntity, *(float *)&barExp, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 0, 0LL);
    }
    tdStrengthStatusSprite = (ServantStatusLimitCountGauge_o *)this->fields.tdStrengthStatusSprite;
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
    v33 = item->fields.svtEntity;
    if ( !v33 || !tdStrengthStatusSprite )
      goto LABEL_181;
    ServantStatusLimitCountGauge__Set(tdStrengthStatusSprite, (int32_t)svtEntity, v33->fields.limitMax, 0LL);
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
        goto LABEL_181;
      v35 = (UISprite_o *)this->fields.skillStrengthStatusLabelList;
      svtEntity = StrengthStatus__GetTreasureDeviceIconName(
                    tdInfo->fields.strengthStatus,
                    tdInfo->fields.treasureDeviceNum,
                    0LL);
      if ( !v35 )
        goto LABEL_181;
      UISprite__set_spriteName(v35, svtEntity, 0LL);
    }
    if ( this->fields.friendshipGauge )
    {
      ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0LL);
      v36 = skillInfoList;
      if ( skillInfoList )
      {
        v37 = *(_QWORD *)&skillInfoList->max_length;
        if ( (int)v37 >= 1 )
        {
          v38 = 0;
          v39 = 0LL;
          v40 = (int)v37;
          while ( v39 < v36->max_length )
          {
            v41 = (int *)v36->m_Items[v39];
            if ( v41 && v41[4] >= 1 && v41[12] )
            {
              v42 = v41[13];
              if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
              }
              IconCnt = ServantSkillStrengthStatus__GetIconCnt(v42, 0LL);
              svtEntity = (System_String_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(v41[12], v41[13], 0LL);
              if ( IconCnt >= 1 )
              {
                v44 = (int)svtEntity;
                for ( i = 0; i < IconCnt; ++i )
                {
                  friendshipGauge = this->fields.friendshipGauge;
                  if ( !friendshipGauge )
                    goto LABEL_181;
                  if ( v38 + i >= LODWORD(friendshipGauge->fields.levelLabel) )
                    goto LABEL_182;
                  svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
                  v47 = (UISprite_o *)*((_QWORD *)&friendshipGauge->fields.maxLevelLabel + (int)(v38 + i));
                  if ( i >= v44 )
                  {
                    if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                    }
                    if ( !v47 )
                      goto LABEL_181;
                    ICON_SKILL_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_OFF;
                  }
                  else
                  {
                    if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                      && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                    }
                    if ( !v47 )
                      goto LABEL_181;
                    ICON_SKILL_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_ON;
                  }
                  UISprite__set_spriteName(v47, ICON_SKILL_OFF, 0LL);
                }
                v38 += i;
              }
            }
            if ( (__int64)++v39 >= v40 )
              goto LABEL_93;
            v36 = skillInfoList;
            if ( !skillInfoList )
              goto LABEL_181;
          }
LABEL_182:
          v67 = sub_B52A88(svtEntity);
          sub_B52A28(v67, 0LL);
        }
      }
      v38 = 0;
LABEL_93:
      v49 = this->fields.friendshipGauge;
      if ( !v49 )
        goto LABEL_181;
      levelLabel = (int)v49->fields.levelLabel;
      if ( (int)v38 < levelLabel )
      {
        while ( v38 < LODWORD(v49->fields.levelLabel) )
        {
          svtEntity = (System_String_o *)*((_QWORD *)&v49->fields.maxLevelLabel + (int)v38);
          if ( !svtEntity )
            goto LABEL_181;
          UISprite__set_spriteName((UISprite_o *)svtEntity, 0LL, 0LL);
          if ( (int)++v38 >= levelLabel )
            goto LABEL_100;
          v49 = this->fields.friendshipGauge;
          if ( !v49 )
            goto LABEL_181;
        }
        goto LABEL_182;
      }
    }
LABEL_100:
    svtEntity = (System_String_o *)this->fields.eventJoinIcon;
    if ( !svtEntity )
      goto LABEL_181;
    userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
    svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
    if ( !svtEntity )
      goto LABEL_181;
    if ( userSvtCollectionEntity )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
      ServantStatusListViewItem__GetFriendshipInfo(
        item,
        &max[1],
        max,
        (int32_t *)&fraction + 1,
        (float *)&fraction,
        0LL);
      svtEntity = (System_String_o *)this->fields.eventJoinIcon;
      if ( !svtEntity )
        goto LABEL_181;
      ServantStatusFriendshipGauge__Set(
        (ServantStatusFriendshipGauge_o *)svtEntity,
        max[1],
        max[0],
        SHIDWORD(fraction),
        *(float *)&fraction,
        0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
    }
    svtEntity = (System_String_o *)this->fields.baseSprite;
    if ( !svtEntity
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL),
          svtEntity = (System_String_o *)ServantStatusListViewItem__get_IsEventJoin(item, 0LL),
          !gameObject) )
    {
LABEL_181:
      sub_B52A5C(svtEntity, v9);
    }
    UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)svtEntity & 1, 0LL);
    servantTexture = (UnityEngine_Object_o *)this->fields.servantTexture;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__op_Inequality(servantTexture, 0LL, 0LL);
    if ( item->fields._IsDisplayCombineButton_k__BackingField )
    {
      svtEntity = (System_String_o *)item->fields.userSvtEntity;
      if ( svtEntity )
      {
        maxFriendshipRank[0] = -1;
        maxFriendshipRank[1] = -1;
        if ( item->fields.userSvtCollectionEntity )
        {
          UserServantCollectionEntity__getFriendShipRankInfo(
            item->fields.userSvtCollectionEntity,
            &maxFriendshipRank[1],
            maxFriendshipRank,
            0LL);
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
        }
        if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_116;
        svtEntity = (System_String_o *)item->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_181;
        IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL);
        v54 = 0;
        if ( maxFriendshipRank[1] == maxFriendshipRank[0]
          && !IsEventJoin
          && ((maxFriendshipRank[0] | maxFriendshipRank[1]) & 0x80000000) == 0 )
        {
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
          if ( UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)svtEntity, 0LL) )
          {
LABEL_116:
            v54 = 0;
            goto LABEL_117;
          }
          svtEntity = (System_String_o *)this->fields.bondLimitUpButton;
          if ( !svtEntity )
            goto LABEL_181;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          limitCountUpObject = this->fields.limitCountUpObject;
          if ( !limitCountUpObject )
            goto LABEL_181;
          BYTE1(limitCountUpObject[3].fields.m_CachedPtr) = 1;
          svtEntity = (System_String_o *)this->fields.limitCountUpObject;
          if ( !svtEntity )
            goto LABEL_181;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
          v54 = 1;
        }
LABEL_117:
        svtEntity = (System_String_o *)item->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_181;
        if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_123;
        svtEntity = (System_String_o *)item->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_181;
        if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_123;
        svtEntity = (System_String_o *)item->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_181;
        if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0LL) )
        {
LABEL_123:
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
          if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
            goto LABEL_131;
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
          if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL) )
            goto LABEL_131;
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
          if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
            goto LABEL_131;
          svtEntity = (System_String_o *)item->fields.userSvtEntity;
          if ( !svtEntity )
            goto LABEL_181;
          if ( UserServantEntity__isExceedLvMax((UserServantEntity_o *)svtEntity, 0LL) )
          {
LABEL_131:
            v55 = 0;
LABEL_132:
            svtEntity = (System_String_o *)item->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_181;
            if ( UserServantEntity__IsLeave((UserServantEntity_o *)svtEntity, 0LL) )
              goto LABEL_134;
            svtEntity = (System_String_o *)item->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_181;
            if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
              goto LABEL_153;
            svtEntity = (System_String_o *)item->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_181;
            if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)svtEntity, 0LL) )
              goto LABEL_153;
            svtEntity = (System_String_o *)item->fields.userSvtEntity;
            if ( !svtEntity )
              goto LABEL_181;
            if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)svtEntity, 0LL) )
            {
LABEL_134:
              v56 = 0;
              if ( !v54 )
              {
LABEL_157:
                if ( v55 )
                {
                  if ( v56 )
                    GameObjectExtensions__SetLocalPositionX(
                      (UnityEngine_GameObject_o *)this->fields.reinforceButton,
                      100.0,
                      0LL);
                  GameObjectExtensions__SetLocalPositionX(
                    (UnityEngine_GameObject_o *)this->fields.limitCountUpButton,
                    220.0,
                    0LL);
                  levelExceedButton = (UnityEngine_GameObject_o *)this->fields.levelExceedButton;
                  v58 = 1130102784;
                }
                else
                {
                  if ( !v56 )
                    return;
                  levelExceedButton = (UnityEngine_GameObject_o *)this->fields.reinforceButton;
                  v58 = 1130102784;
                }
                goto LABEL_163;
              }
            }
            else
            {
LABEL_153:
              svtEntity = (System_String_o *)this->fields.reinforceButton;
              if ( !svtEntity )
                goto LABEL_181;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
              bondLimitUpObject = this->fields.bondLimitUpObject;
              if ( !bondLimitUpObject )
                goto LABEL_181;
              BYTE1(bondLimitUpObject[3].fields.m_CachedPtr) = 1;
              svtEntity = (System_String_o *)this->fields.bondLimitUpObject;
              if ( !svtEntity )
                goto LABEL_181;
              UICommonButton__SetEnable(
                (UICommonButton_o *)svtEntity,
                item->fields._CanMoveCombine_k__BackingField,
                0LL);
              v56 = 1;
              if ( !v54 )
                goto LABEL_157;
            }
            if ( ((v55 | v56 ^ 1) & 1) != 0 )
            {
LABEL_164:
              svtEntity = (System_String_o *)this->fields.reinforceObject;
              if ( svtEntity )
              {
                svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)svtEntity,
                                                 0LL);
                if ( svtEntity )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
                  svtEntity = (System_String_o *)this->fields.baseCollider;
                  if ( svtEntity )
                  {
                    UIWidget__set_height((UIWidget_o *)svtEntity, 362, 0LL);
                    svtEntity = (System_String_o *)this->fields.baseUi;
                    if ( svtEntity )
                    {
                      *(UnityEngine_Vector3_o *)&v62 = UnityEngine_BoxCollider__get_size(
                                                         (UnityEngine_BoxCollider_o *)svtEntity,
                                                         0LL);
                      svtEntity = (System_String_o *)this->fields.baseUi;
                      if ( svtEntity )
                      {
                        v64 = 1135935488;
                        UnityEngine_BoxCollider__set_size(
                          (UnityEngine_BoxCollider_o *)svtEntity,
                          *(UnityEngine_Vector3_o *)&v62,
                          0LL);
                        GameObjectExtensions__SetLocalPositionY(
                          (UnityEngine_GameObject_o *)this->fields.reinforceMaskSprite,
                          23.0,
                          0LL);
                        return;
                      }
                    }
                  }
                }
              }
              goto LABEL_181;
            }
            levelExceedButton = (UnityEngine_GameObject_o *)this->fields.reinforceButton;
            v58 = 1120403456;
LABEL_163:
            GameObjectExtensions__SetLocalPositionX(levelExceedButton, *(float *)&v58, 0LL);
            goto LABEL_164;
          }
          svtEntity = (System_String_o *)this->fields.levelExceedButton;
          if ( !svtEntity )
            goto LABEL_181;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          v66 = *(_QWORD *)&this->fields.isStart;
          if ( !v66 )
            goto LABEL_181;
          *(_BYTE *)(v66 + 89) = 1;
          svtEntity = *(System_String_o **)&this->fields.isStart;
          if ( !svtEntity )
            goto LABEL_181;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
          svtEntity = (System_String_o *)this->fields.limitCountUpButton;
          if ( !svtEntity )
            goto LABEL_181;
        }
        else
        {
          svtEntity = (System_String_o *)this->fields.limitCountUpButton;
          if ( !svtEntity )
            goto LABEL_181;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          levelExceedObject = this->fields.levelExceedObject;
          if ( !levelExceedObject )
            goto LABEL_181;
          BYTE1(levelExceedObject[3].fields.m_CachedPtr) = 1;
          svtEntity = (System_String_o *)this->fields.levelExceedObject;
          if ( !svtEntity )
            goto LABEL_181;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
          svtEntity = (System_String_o *)this->fields.levelExceedButton;
          if ( !svtEntity )
            goto LABEL_181;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
        v55 = 1;
        goto LABEL_132;
      }
    }
  }
}