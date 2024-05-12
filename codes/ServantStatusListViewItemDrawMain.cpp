void __fastcall ServantStatusListViewItemDrawMain___ctor(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  this->fields.baseSpriteHeightBase = 34;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__Awake(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_BoxCollider_o *baseCollider; // x8
  UnityEngine_GameObject_o *reinforceMaskSprite; // x0
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *combineRoot; // x0
  float v7; // s0
  UnityEngine_GameObject_o *v8; // x0

  baseCollider = this->fields.baseCollider;
  if ( !baseCollider )
    sub_B7769C(this, method);
  reinforceMaskSprite = (UnityEngine_GameObject_o *)this->fields.reinforceMaskSprite;
  this->fields.mainContentsRootPosYBase = *((float *)&baseCollider[6].fields + 1);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(reinforceMaskSprite, 0LL);
  combineRoot = this->fields.combineRoot;
  this->fields.combineRootPosYBase = LocalPositionY;
  v7 = GameObjectExtensions__GetLocalPositionY(combineRoot, 0LL);
  v8 = *(UnityEngine_GameObject_o **)&this->fields.transformNameAddHeight;
  *(float *)&this[1].klass = v7;
  *((float *)&this[1].klass + 1) = GameObjectExtensions__GetLocalPositionY(v8, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawMain__GetKind(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(
        ServantStatusListViewItemDrawMain_o *this,
        int32_t *svtId,
        int32_t *limitCount,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  struct ServantEntity_o *TransformedServant_k__BackingField; // x8
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  int32_t limitMax; // w21
  int32_t ServantLimitCountSealAfter; // w0
  int32_t ConvertOverwritePortraitLimitCount; // w21

  if ( (byte_438F2D5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&ImageLimitCount_TypeInfo);
    this = (ServantStatusListViewItemDrawMain_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438F2D5 = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsTransformed_k__BackingField )
  {
    *svtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
    if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ImageLimitCount_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    }
    *limitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(ConvertOverwritePortraitLimitCount, 0LL);
    this = (ServantStatusListViewItemDrawMain_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ServantStatusListViewItemDrawMain_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       *svtId,
                                       *limitCount,
                                       0LL);
        goto LABEL_16;
      }
    }
LABEL_17:
    sub_B7769C(this, svtId);
  }
  *svtId = item->fields._TransformedSvtId_k__BackingField;
  TransformedServant_k__BackingField = item->fields._TransformedServant_k__BackingField;
  if ( !TransformedServant_k__BackingField )
    goto LABEL_17;
  TransformedServantDispLimitCount_k__BackingField = item->fields._TransformedServantDispLimitCount_k__BackingField;
  limitMax = TransformedServant_k__BackingField->fields.limitMax;
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ServantLimitCountSealAfter = ImageLimitCount__GetLimitCountByDispLimit(
                                 TransformedServantDispLimitCount_k__BackingField,
                                 limitMax,
                                 0LL);
LABEL_16:
  *limitCount = ServantLimitCountSealAfter;
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyPortrait(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantStatusListViewItemDrawMain_o *v5; // x19
  UITexture_o *levelLabel; // x21
  int32_t v7; // w19
  int32_t v8; // w20
  int32_t limitCount[2]; // [xsp+8h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_438F2D7 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_438F2D7 = 1;
  }
  *(_QWORD *)limitCount = 0LL;
  if ( LOBYTE(v5->fields.baseUiPosYBase) )
  {
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(this, &limitCount[1], limitCount, item, v3);
    levelLabel = (UITexture_o *)v5->fields.levelLabel;
    v8 = limitCount[0];
    v7 = limitCount[1];
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__loadStatusFace(levelLabel, v7, v8, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantStatusListViewItemDrawMain_o *v6; // x0
  UITexture_o *levelLabel; // x21
  int32_t v8; // w19
  int32_t v9; // w20
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438F2D8 & 1) == 0 )
  {
    sub_B775C4(&RandomLimitCountManager_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_438F2D8 = 1;
  }
  *(_QWORD *)limitCount = 0LL;
  if ( LOBYTE(this->fields.baseUiPosYBase) )
  {
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    }
    if ( !byte_4389478 )
    {
      sub_B775C4(&RandomLimitCountManager_TypeInfo);
      byte_4389478 = 1;
    }
    v6 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v6 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( LOBYTE(v6->fields.eventJoinSprite->monitor) )
    {
      ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(v6, &limitCount[1], limitCount, item, v3);
      levelLabel = (UITexture_o *)this->fields.levelLabel;
      v9 = limitCount[0];
      v8 = limitCount[1];
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__loadStatusFace(levelLabel, v8, v9, 0LL);
    }
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyStatus(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain_o *v4; // x19
  ServantStatusListViewItemDrawMain_o *SvtId; // x0
  const MethodInfo *v6; // x4
  UITexture_o *levelLabel; // x21
  int32_t v8; // w19
  int32_t v9; // w20
  int32_t limitCount[2]; // [xsp+8h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_438F2D6 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_438F2D6 = 1;
  }
  *(_QWORD *)limitCount = 0LL;
  if ( !item )
    sub_B7769C(this, item);
  SvtId = (ServantStatusListViewItemDrawMain_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  limitCount[1] = (int)SvtId;
  if ( (int)SvtId >= 1 )
  {
    LOBYTE(v4->fields.baseUiPosYBase) = 1;
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(SvtId, &limitCount[1], limitCount, item, v6);
    levelLabel = (UITexture_o *)v4->fields.levelLabel;
    v9 = limitCount[0];
    v8 = limitCount[1];
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__loadStatusFace(levelLabel, v8, v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawMain__SetBaseView(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  UIWidget_o *baseCollider; // x0
  int v4; // s0
  int v6; // s1

  baseCollider = (UIWidget_o *)this->fields.baseCollider;
  if ( !baseCollider
    || (UIWidget__set_height(baseCollider, LODWORD(this->fields.mainContentsRootPosYBase), 0LL),
        GameObjectExtensions__SetLocalPositionY(
          (UnityEngine_GameObject_o *)this->fields.reinforceMaskSprite,
          this->fields.combineRootPosYBase,
          0LL),
        (baseCollider = (UIWidget_o *)this->fields.baseUi) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v4 = UnityEngine_BoxCollider__get_size(
                                          (UnityEngine_BoxCollider_o *)baseCollider,
                                          0LL),
        (baseCollider = (UIWidget_o *)this->fields.baseUi) == 0LL) )
  {
    sub_B7769C(baseCollider, method);
  }
  v6 = 1135935488;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseCollider, *(UnityEngine_Vector3_o *)&v4, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.combineRoot, *(float *)&this[1].klass, 0LL);
  GameObjectExtensions__SetLocalPositionY(
    *(UnityEngine_GameObject_o **)&this->fields.transformNameAddHeight,
    *((float *)&this[1].klass + 1),
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawMain__SetItem(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  struct UILabel_o *maxLevelLabel; // x21
  System_String_o *svtEntity; // x0
  __int64 v10; // x1
  struct UIIconLabel_o *attackIconLabel; // x21
  struct UnityEngine_GameObject_o *expBase; // x21
  bool IsStatusUp; // w0
  UIIconLabel_o *hpIconLabel; // x21
  bool v15; // w23
  int32_t Atk; // w22
  UIIconLabel_o *reinforceAttackIconLabel; // x21
  UIIconLabel_o *v18; // x21
  int32_t Hp; // w22
  int32_t AdjustAtk; // w0
  UIIconLabel_o *reinforceAttackMaxLabel; // x21
  int32_t v22; // w24
  int v23; // w22
  BalanceConfig_c *v24; // x8
  int32_t AdjustHp; // w0
  UIIconLabel_o *reinforceHpMaxLabel; // x21
  int32_t v27; // w25
  BalanceConfig_c *v28; // x8
  int v29; // w22
  System_String_o *v30; // x1
  UILabel_o *expBar; // x21
  int32_t v32; // w22
  ServantStatusLimitCountGauge_o *tdStrengthStatusSprite; // x21
  struct ServantEntity_o *v34; // x8
  UnityEngine_Object_o *skillStrengthStatusLabelList; // x21
  UISprite_o *v36; // x21
  SkillInfo_array *v37; // x8
  __int64 v38; // x9
  unsigned int v39; // w25
  unsigned __int64 v40; // x26
  signed __int64 v41; // x27
  int *v42; // x22
  int32_t v43; // w21
  int32_t IconCnt; // w21
  int32_t v45; // w22
  int32_t i; // w24
  struct ServantStatusFriendshipGauge_o *friendshipGauge; // x8
  UISprite_o *v48; // x23
  System_String_o *ICON_SKILL_OFF; // x1
  struct ServantStatusFriendshipGauge_o *v50; // x8
  int levelLabel; // w21
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *servantTexture; // x21
  int v55; // w21
  int v56; // w22
  int v57; // w8
  UnityEngine_GameObject_o *reinforceButton; // x0
  int v59; // s0
  bool IsEventJoin; // w0
  struct UnityEngine_GameObject_o *limitCountUpObject; // x8
  struct UnityEngine_GameObject_o *bondLimitUpObject; // x8
  int v63; // s0
  int v65; // s1
  _BOOL4 IsTransformServant_k__BackingField; // w21
  struct UnityEngine_GameObject_o *mainContentsRoot; // x21
  int32_t v68; // w20
  int v69; // s0
  float v71; // s1
  struct UnityEngine_GameObject_o *levelExceedObject; // x8
  struct UISprite_o *transformNameSprite; // x8
  __int64 v74; // x0
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

  if ( (byte_438F2D4 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantSkillStrengthStatus_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438F2D4 = 1;
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
  if ( !item || !mode )
    return;
  ServantStatusListViewItemDrawMain__SetBaseView(this, v7);
  maxLevelLabel = this->fields.maxLevelLabel;
  exp[1] = ServantStatusListViewItem__get_Level(item, 0LL);
  svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !maxLevelLabel )
    goto LABEL_190;
  UIExtrusionLabel__set_text((UIExtrusionLabel_o *)maxLevelLabel, svtEntity, 0LL);
  attackIconLabel = this->fields.attackIconLabel;
  exp[1] = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
  svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !attackIconLabel )
    goto LABEL_190;
  UILabel__set_text((UILabel_o *)attackIconLabel, svtEntity, 0LL);
  expBase = this->fields.expBase;
  exp[1] = ServantStatusListViewItem__get_Cost(item, 0LL);
  svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !expBase )
    goto LABEL_190;
  UILabel__set_text((UILabel_o *)expBase, svtEntity, 0LL);
  svtEntity = (System_String_o *)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_190;
  IsStatusUp = ServantEntity__get_IsStatusUp((ServantEntity_o *)svtEntity, 0LL);
  hpIconLabel = this->fields.hpIconLabel;
  v15 = IsStatusUp;
  Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
  if ( v15 )
  {
    svtEntity = (System_String_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    }
    if ( !hpIconLabel )
      goto LABEL_190;
    UIIconLabel__Set_41716724(
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
      goto LABEL_190;
    UIIconLabel__Set_41716724(
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
      goto LABEL_190;
    UIIconLabel__Set_41716724(hpIconLabel, 5, Atk, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0LL);
    v18 = this->fields.reinforceAttackIconLabel;
    Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
    if ( !v18 )
      goto LABEL_190;
    UIIconLabel__Set_41716724(v18, 3, Hp, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0LL);
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
      v22 = secondMaxAdjustAtk;
    else
      v22 = maxAjustAtk;
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
    v23 = (int)svtEntity;
    v24 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v24 = BalanceConfig_TypeInfo;
    }
    if ( !reinforceAttackMaxLabel )
      goto LABEL_190;
    UIIconLabel__Set_41716724(
      reinforceAttackMaxLabel,
      45,
      v24->static_fields->StatusUpAdjustHp * v23,
      v24->static_fields->StatusUpAdjustHp * v22,
      0,
      0LL,
      0,
      0,
      0,
      0LL);
    svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
    if ( !svtEntity )
      goto LABEL_190;
    UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    AdjustHp = ServantStatusListViewItem__get_AdjustHp(item, 0LL);
    reinforceHpMaxLabel = (UIIconLabel_o *)this->fields.reinforceHpMaxLabel;
    if ( AdjustHp >= maxAjustHp )
      v27 = HIDWORD(secondMaxAdjustAtk);
    else
      v27 = maxAjustHp;
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
    v28 = BalanceConfig_TypeInfo;
    v29 = (int)svtEntity;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    if ( !reinforceHpMaxLabel )
      goto LABEL_190;
    UIIconLabel__Set_41716724(
      reinforceHpMaxLabel,
      44,
      v28->static_fields->StatusUpAdjustHp * v29,
      v28->static_fields->StatusUpAdjustHp * v27,
      0,
      0LL,
      0,
      0,
      0,
      0LL);
    svtEntity = (System_String_o *)this->fields.costLabel;
    if ( !svtEntity )
      goto LABEL_190;
    v30 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
    if ( !svtEntity )
      goto LABEL_190;
    UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
    svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
    if ( !svtEntity )
      goto LABEL_190;
    UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    svtEntity = (System_String_o *)this->fields.reinforceHpMaxLabel;
    if ( !svtEntity )
      goto LABEL_190;
    UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
    svtEntity = (System_String_o *)this->fields.costLabel;
    if ( !svtEntity )
      goto LABEL_190;
    v30 = (System_String_o *)StringLiteral_1/*""*/;
  }
  UILabel__set_text((UILabel_o *)svtEntity, v30, 0LL);
  svtEntity = (System_String_o *)ServantStatusListViewItem__GetExpInfo(
                                   item,
                                   exp,
                                   (int32_t *)&barExp + 1,
                                   (float *)&barExp,
                                   0LL);
  if ( !this->fields.lateExpBase )
    goto LABEL_190;
  if ( ((unsigned __int8)svtEntity & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 1, 0LL);
    svtEntity = (System_String_o *)this->fields.lateExpLabel;
    if ( !svtEntity )
      goto LABEL_190;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, SHIDWORD(barExp) > 0, 0LL);
    expBar = (UILabel_o *)this->fields.expBar;
    v32 = HIDWORD(barExp);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    svtEntity = LocalizationManager__GetNumberFormat(v32, 0LL);
    if ( !expBar )
      goto LABEL_190;
    UILabel__set_text(expBar, svtEntity, 0LL);
    svtEntity = (System_String_o *)this->fields.limitCountGauge;
    if ( !svtEntity )
      goto LABEL_190;
    UIProgressBar__set_value((UIProgressBar_o *)svtEntity, *(float *)&barExp, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.lateExpBase, 0, 0LL);
  }
  tdStrengthStatusSprite = (ServantStatusLimitCountGauge_o *)this->fields.tdStrengthStatusSprite;
  svtEntity = (System_String_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
  v34 = item->fields.svtEntity;
  if ( !v34 || !tdStrengthStatusSprite )
    goto LABEL_190;
  ServantStatusLimitCountGauge__Set(tdStrengthStatusSprite, (int32_t)svtEntity, v34->fields.limitMax, 0LL);
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
      goto LABEL_190;
    v36 = (UISprite_o *)this->fields.skillStrengthStatusLabelList;
    svtEntity = StrengthStatus__GetTreasureDeviceIconName(
                  tdInfo->fields.strengthStatus,
                  tdInfo->fields.treasureDeviceNum,
                  0LL);
    if ( !v36 )
      goto LABEL_190;
    UISprite__set_spriteName(v36, svtEntity, 0LL);
  }
  if ( this->fields.friendshipGauge )
  {
    ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0LL);
    v37 = skillInfoList;
    if ( skillInfoList )
    {
      v38 = *(_QWORD *)&skillInfoList->max_length;
      if ( (int)v38 >= 1 )
      {
        v39 = 0;
        v40 = 0LL;
        v41 = (int)v38;
        while ( v40 < v37->max_length )
        {
          v42 = (int *)v37->m_Items[v40];
          if ( v42 && v42[4] >= 1 && v42[12] )
          {
            v43 = v42[13];
            if ( (BYTE3(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
            }
            IconCnt = ServantSkillStrengthStatus__GetIconCnt(v43, 0LL);
            svtEntity = (System_String_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(v42[12], v42[13], 0LL);
            if ( IconCnt >= 1 )
            {
              v45 = (int)svtEntity;
              for ( i = 0; i < IconCnt; ++i )
              {
                friendshipGauge = this->fields.friendshipGauge;
                if ( !friendshipGauge )
                  goto LABEL_190;
                if ( v39 + i >= LODWORD(friendshipGauge->fields.levelLabel) )
                  goto LABEL_191;
                svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
                v48 = (UISprite_o *)*((_QWORD *)&friendshipGauge->fields.maxLevelLabel + (int)(v39 + i));
                if ( i >= v45 )
                {
                  if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  }
                  if ( !v48 )
                    goto LABEL_190;
                  ICON_SKILL_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_OFF;
                }
                else
                {
                  if ( (WORD1(ServantSkillStrengthStatus_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                    && !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                  }
                  if ( !v48 )
                    goto LABEL_190;
                  ICON_SKILL_OFF = ServantSkillStrengthStatus_TypeInfo->static_fields->ICON_SKILL_ON;
                }
                UISprite__set_spriteName(v48, ICON_SKILL_OFF, 0LL);
              }
              v39 += i;
            }
          }
          if ( (__int64)++v40 >= v41 )
            goto LABEL_93;
          v37 = skillInfoList;
          if ( !skillInfoList )
            goto LABEL_190;
        }
LABEL_191:
        v74 = sub_B776C8(svtEntity);
        sub_B77668(v74, 0LL);
      }
    }
    v39 = 0;
LABEL_93:
    v50 = this->fields.friendshipGauge;
    if ( !v50 )
      goto LABEL_190;
    levelLabel = (int)v50->fields.levelLabel;
    if ( (int)v39 < levelLabel )
    {
      while ( v39 < LODWORD(v50->fields.levelLabel) )
      {
        svtEntity = (System_String_o *)*((_QWORD *)&v50->fields.maxLevelLabel + (int)v39);
        if ( !svtEntity )
          goto LABEL_190;
        UISprite__set_spriteName((UISprite_o *)svtEntity, 0LL, 0LL);
        if ( (int)++v39 >= levelLabel )
          goto LABEL_100;
        v50 = this->fields.friendshipGauge;
        if ( !v50 )
          goto LABEL_190;
      }
      goto LABEL_191;
    }
  }
LABEL_100:
  svtEntity = (System_String_o *)this->fields.eventJoinIcon;
  if ( !svtEntity )
    goto LABEL_190;
  userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
  svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity )
    goto LABEL_190;
  if ( userSvtCollectionEntity )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
    ServantStatusListViewItem__GetFriendshipInfo(item, &max[1], max, (int32_t *)&fraction + 1, (float *)&fraction, 0LL);
    svtEntity = (System_String_o *)this->fields.eventJoinIcon;
    if ( !svtEntity )
      goto LABEL_190;
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
LABEL_190:
    sub_B7769C(svtEntity, v10);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)svtEntity & 1, 0LL);
  servantTexture = (UnityEngine_Object_o *)this->fields.servantTexture;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__op_Inequality(servantTexture, 0LL, 0LL);
  if ( !item->fields._IsDisplayCombineButton_k__BackingField )
    goto LABEL_170;
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_170;
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
      goto LABEL_190;
  }
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
    goto LABEL_116;
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_190;
  IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL);
  v55 = 0;
  if ( maxFriendshipRank[1] == maxFriendshipRank[0]
    && !IsEventJoin
    && ((maxFriendshipRank[0] | maxFriendshipRank[1]) & 0x80000000) == 0 )
  {
    svtEntity = (System_String_o *)item->fields.userSvtEntity;
    if ( !svtEntity )
      goto LABEL_190;
    if ( UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)svtEntity, 0LL) )
    {
LABEL_116:
      v55 = 0;
      goto LABEL_117;
    }
    svtEntity = (System_String_o *)this->fields.bondLimitUpButton;
    if ( !svtEntity )
      goto LABEL_190;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
    limitCountUpObject = this->fields.limitCountUpObject;
    if ( !limitCountUpObject )
      goto LABEL_190;
    BYTE1(limitCountUpObject[3].fields.m_CachedPtr) = 1;
    svtEntity = (System_String_o *)this->fields.limitCountUpObject;
    if ( !svtEntity )
      goto LABEL_190;
    UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
    v55 = 1;
  }
LABEL_117:
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_190;
  if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
  {
    svtEntity = (System_String_o *)item->fields.userSvtEntity;
    if ( !svtEntity )
      goto LABEL_190;
    if ( UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = (System_String_o *)item->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_190;
      if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0LL) )
      {
        svtEntity = (System_String_o *)this->fields.limitCountUpButton;
        if ( !svtEntity )
          goto LABEL_190;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        levelExceedObject = this->fields.levelExceedObject;
        if ( !levelExceedObject )
          goto LABEL_190;
        BYTE1(levelExceedObject[3].fields.m_CachedPtr) = 1;
        svtEntity = (System_String_o *)this->fields.levelExceedObject;
        if ( !svtEntity )
          goto LABEL_190;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        svtEntity = (System_String_o *)this->fields.levelExceedButton;
        if ( !svtEntity )
          goto LABEL_190;
        goto LABEL_189;
      }
    }
  }
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_190;
  if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
  {
    svtEntity = (System_String_o *)item->fields.userSvtEntity;
    if ( !svtEntity )
      goto LABEL_190;
    if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = (System_String_o *)item->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_190;
      if ( UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
      {
        svtEntity = (System_String_o *)item->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_190;
        if ( !UserServantEntity__isExceedLvMax((UserServantEntity_o *)svtEntity, 0LL) )
        {
          svtEntity = (System_String_o *)this->fields.levelExceedButton;
          if ( !svtEntity )
            goto LABEL_190;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          transformNameSprite = this->fields.transformNameSprite;
          if ( !transformNameSprite )
            goto LABEL_190;
          transformNameSprite->fields.mStarted = 1;
          svtEntity = (System_String_o *)this->fields.transformNameSprite;
          if ( !svtEntity )
            goto LABEL_190;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
          svtEntity = (System_String_o *)this->fields.limitCountUpButton;
          if ( !svtEntity )
            goto LABEL_190;
LABEL_189:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
          v56 = 1;
          goto LABEL_132;
        }
      }
    }
  }
  v56 = 0;
LABEL_132:
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_190;
  if ( UserServantEntity__IsLeave((UserServantEntity_o *)svtEntity, 0LL) )
    goto LABEL_134;
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_190;
  if ( UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
  {
    svtEntity = (System_String_o *)item->fields.userSvtEntity;
    if ( !svtEntity )
      goto LABEL_190;
    if ( UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = (System_String_o *)item->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_190;
      if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)svtEntity, 0LL) )
      {
LABEL_134:
        v57 = 0;
        if ( !v55 )
          goto LABEL_157;
LABEL_135:
        if ( ((v56 | v57 ^ 1) & 1) != 0 )
          goto LABEL_164;
        reinforceButton = (UnityEngine_GameObject_o *)this->fields.reinforceButton;
        v59 = 1120403456;
LABEL_163:
        GameObjectExtensions__SetLocalPositionX(reinforceButton, *(float *)&v59, 0LL);
LABEL_164:
        svtEntity = (System_String_o *)this->fields.reinforceObject;
        if ( !svtEntity )
          goto LABEL_190;
        svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
        if ( !svtEntity )
          goto LABEL_190;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        svtEntity = (System_String_o *)this->fields.baseCollider;
        if ( !svtEntity )
          goto LABEL_190;
        UIWidget__set_height((UIWidget_o *)svtEntity, 362, 0LL);
        svtEntity = (System_String_o *)this->fields.baseUi;
        if ( !svtEntity )
          goto LABEL_190;
        *(UnityEngine_Vector3_o *)&v63 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)svtEntity, 0LL);
        svtEntity = (System_String_o *)this->fields.baseUi;
        if ( !svtEntity )
          goto LABEL_190;
        v65 = 1135935488;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, *(UnityEngine_Vector3_o *)&v63, 0LL);
        GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)this->fields.reinforceMaskSprite, 23.0, 0LL);
        goto LABEL_170;
      }
    }
  }
  svtEntity = (System_String_o *)this->fields.reinforceButton;
  if ( !svtEntity )
    goto LABEL_190;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
  bondLimitUpObject = this->fields.bondLimitUpObject;
  if ( !bondLimitUpObject )
    goto LABEL_190;
  BYTE1(bondLimitUpObject[3].fields.m_CachedPtr) = 1;
  svtEntity = (System_String_o *)this->fields.bondLimitUpObject;
  if ( !svtEntity )
    goto LABEL_190;
  UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
  v57 = 1;
  if ( v55 )
    goto LABEL_135;
LABEL_157:
  if ( v56 )
  {
    if ( v57 )
      GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)this->fields.reinforceButton, 100.0, 0LL);
    GameObjectExtensions__SetLocalPositionX((UnityEngine_GameObject_o *)this->fields.limitCountUpButton, 220.0, 0LL);
    reinforceButton = (UnityEngine_GameObject_o *)this->fields.levelExceedButton;
    v59 = 1130102784;
    goto LABEL_163;
  }
  if ( v57 )
  {
    reinforceButton = (UnityEngine_GameObject_o *)this->fields.reinforceButton;
    v59 = 1130102784;
    goto LABEL_163;
  }
LABEL_170:
  svtEntity = (System_String_o *)this->fields.transformNameLabel;
  if ( !svtEntity )
    goto LABEL_190;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity )
    goto LABEL_190;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
    mainContentsRoot = this->fields.mainContentsRoot;
    svtEntity = ServantStatusListViewItem__GetTransformName(item, 0LL);
    if ( mainContentsRoot )
    {
      UILabel__set_text((UILabel_o *)mainContentsRoot, svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.baseCollider;
      if ( svtEntity )
      {
        v68 = this->fields.baseSpriteHeightBase + *(_DWORD *)&svtEntity[6].fields.m_firstChar;
        UIWidget__set_height((UIWidget_o *)svtEntity, v68, 0LL);
        svtEntity = (System_String_o *)this->fields.baseUi;
        if ( svtEntity )
        {
          *(UnityEngine_Vector3_o *)&v69 = UnityEngine_BoxCollider__get_size(
                                             (UnityEngine_BoxCollider_o *)svtEntity,
                                             0LL);
          svtEntity = (System_String_o *)this->fields.baseUi;
          if ( svtEntity )
          {
            v71 = (float)v68;
            UnityEngine_BoxCollider__set_size(
              (UnityEngine_BoxCollider_o *)svtEntity,
              *(UnityEngine_Vector3_o *)&v69,
              0LL);
            GameObjectExtensions__AddLocalPositionY(
              (UnityEngine_GameObject_o *)this->fields.reinforceMaskSprite,
              (float)(this->fields.baseSpriteHeightBase / 2),
              0LL);
            GameObjectExtensions__AddLocalPositionY(
              this->fields.combineRoot,
              (float)-this->fields.baseSpriteHeightBase,
              0LL);
            GameObjectExtensions__AddLocalPositionY(
              *(UnityEngine_GameObject_o **)&this->fields.transformNameAddHeight,
              (float)-this->fields.baseSpriteHeightBase,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_190;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
}