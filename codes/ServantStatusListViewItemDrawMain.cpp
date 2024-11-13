void __fastcall ServantStatusListViewItemDrawMain___ctor(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  this->fields.transformNameAddHeight = 34;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusListViewItemDrawMain__Awake(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *baseUi; // x0
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *mainContentsRoot; // x0
  float v7; // s0
  UnityEngine_GameObject_o *combineRoot; // x0

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite )
    sub_1BCAA3C(this, method);
  baseUi = this->fields.baseUi;
  this->fields.baseSpriteHeightBase = baseSprite->fields.mHeight;
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(baseUi, 0LL);
  mainContentsRoot = this->fields.mainContentsRoot;
  this->fields.baseUiPosYBase = LocalPositionY;
  v7 = GameObjectExtensions__GetLocalPositionY(mainContentsRoot, 0LL);
  combineRoot = this->fields.combineRoot;
  this->fields.mainContentsRootPosYBase = v7;
  this->fields.combineRootPosYBase = GameObjectExtensions__GetLocalPositionY(combineRoot, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct ServantEntity_o *TransformedServant_k__BackingField; // x8
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  int32_t limitMax; // w21
  int32_t ServantLimitCountSealAfter; // w0
  __int64 v16; // x1
  int32_t ConvertOverwritePortraitLimitCount; // w21

  if ( (byte_4B13208 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, svtId, limitCount);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v8, v9);
    this = (ServantStatusListViewItemDrawMain_o *)sub_1BCA7E0(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v10,
                                                    v11);
    byte_4B13208 = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !item->fields._IsTransformed_k__BackingField )
  {
    *svtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v16);
    *limitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(ConvertOverwritePortraitLimitCount, 0LL);
    this = (ServantStatusListViewItemDrawMain_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ServantStatusListViewItemDrawMain_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( this )
      {
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       (ServantLimitImageMaster_o *)this,
                                       *svtId,
                                       *limitCount,
                                       0LL);
        goto LABEL_14;
      }
    }
LABEL_15:
    sub_1BCAA3C(this, svtId);
  }
  *svtId = item->fields._TransformedSvtId_k__BackingField;
  TransformedServant_k__BackingField = item->fields._TransformedServant_k__BackingField;
  if ( !TransformedServant_k__BackingField )
    goto LABEL_15;
  TransformedServantDispLimitCount_k__BackingField = item->fields._TransformedServantDispLimitCount_k__BackingField;
  limitMax = TransformedServant_k__BackingField->fields.limitMax;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, svtId);
  ServantLimitCountSealAfter = ImageLimitCount__GetLimitCountByDispLimit(
                                 TransformedServantDispLimitCount_k__BackingField,
                                 limitMax,
                                 0LL);
LABEL_14:
  *limitCount = ServantLimitCountSealAfter;
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyPortrait(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  ServantStatusListViewItemDrawMain_o *v5; // x19
  __int64 v6; // x1
  UITexture_o *servantTexture; // x21
  int32_t v8; // w19
  int32_t v9; // w20
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4B1320A & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, item, method);
    byte_4B1320A = 1;
  }
  *(_QWORD *)limitCount = 0LL;
  if ( v5->fields.isStart )
  {
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(this, &limitCount[1], limitCount, item, v3);
    servantTexture = v5->fields.servantTexture;
    v9 = limitCount[0];
    v8 = limitCount[1];
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v6);
    ServantAssetLoadManager__loadStatusFace(servantTexture, v8, v9, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  __int64 v7; // x2
  ServantStatusListViewItemDrawMain_o *v8; // x0
  __int64 v9; // x1
  UITexture_o *servantTexture; // x21
  int32_t v11; // w19
  int32_t v12; // w20
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1320B & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, item, method);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v6, v7);
    byte_4B1320B = 1;
  }
  *(_QWORD *)limitCount = 0LL;
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, item);
    if ( !byte_4B12177 )
    {
      sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, item, method);
      byte_4B12177 = 1;
    }
    v8 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, item);
      v8 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( LOBYTE(v8->fields.friendshipGauge->monitor) )
    {
      ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(v8, &limitCount[1], limitCount, item, v3);
      servantTexture = this->fields.servantTexture;
      v12 = limitCount[0];
      v11 = limitCount[1];
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v9);
      ServantAssetLoadManager__loadStatusFace(servantTexture, v11, v12, 0LL);
    }
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyStatus(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawMain_o *v4; // x19
  ServantStatusListViewItemDrawMain_o *v5; // x0
  const MethodInfo *v6; // x4
  __int64 v7; // x1
  UITexture_o *servantTexture; // x21
  int32_t v9; // w19
  int32_t v10; // w20
  int32_t limitCount; // [xsp+8h] [xbp-28h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4B13209 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, item, method);
    byte_4B13209 = 1;
  }
  limitCount = 0;
  if ( !item )
    sub_1BCAA3C(this, item);
  v5 = (ServantStatusListViewItemDrawMain_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  svtId = (int)v5;
  if ( (int)v5 >= 1 )
  {
    v4->fields.isStart = 1;
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(v5, &svtId, &limitCount, item, v6);
    servantTexture = v4->fields.servantTexture;
    v10 = limitCount;
    v9 = svtId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v7);
    ServantAssetLoadManager__loadStatusFace(servantTexture, v9, v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawMain__SetBaseView(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  UIWidget_o *baseSprite; // x0
  int v4; // s0
  float baseSpriteHeightBase; // s1

  baseSprite = (UIWidget_o *)this->fields.baseSprite;
  if ( !baseSprite
    || (UIWidget__set_height(baseSprite, this->fields.baseSpriteHeightBase, 0LL),
        GameObjectExtensions__SetLocalPositionY(this->fields.baseUi, this->fields.baseUiPosYBase, 0LL),
        (baseSprite = (UIWidget_o *)this->fields.baseCollider) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v4 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)baseSprite, 0LL),
        (baseSprite = (UIWidget_o *)this->fields.baseCollider) == 0LL) )
  {
    sub_1BCAA3C(baseSprite, method);
  }
  baseSpriteHeightBase = (float)this->fields.baseSpriteHeightBase;
  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)baseSprite, *(UnityEngine_Vector3_o *)&v4, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.mainContentsRoot, this->fields.mainContentsRootPosYBase, 0LL);
  GameObjectExtensions__SetLocalPositionY(this->fields.combineRoot, this->fields.combineRootPosYBase, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawMain__SetItem(
        ServantStatusListViewItemDrawMain_o *this,
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
  UIExtrusionLabel_o *levelLabel; // x21
  System_String_o *svtEntity; // x0
  __int64 v17; // x1
  UILabel_o *maxLevelLabel; // x21
  UILabel_o *costLabel; // x21
  bool IsStatusUp; // w0
  UIIconLabel_o *attackIconLabel; // x21
  bool v22; // w23
  int32_t Atk; // w22
  UIIconLabel_o *hpIconLabel; // x21
  UIIconLabel_o *v25; // x21
  int32_t Hp; // w22
  int32_t AdjustAtk; // w0
  UIIconLabel_o *reinforceAttackIconLabel; // x21
  int32_t v29; // w24
  int v30; // w22
  BalanceConfig_c *v31; // x8
  int32_t AdjustHp; // w0
  UIIconLabel_o *reinforceHpIconLabel; // x21
  int32_t v34; // w24
  BalanceConfig_c *v35; // x8
  int v36; // w22
  __int64 v37; // x1
  UILabel_o *lateExpLabel; // x21
  int32_t v39; // w22
  ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *v41; // x8
  __int64 v42; // x1
  UnityEngine_Object_o *tdStrengthStatusSprite; // x21
  UISprite_o *v44; // x21
  SkillInfo_array *v45; // x8
  il2cpp_array_size_t v46; // w25
  unsigned __int64 v47; // x26
  __int64 v48; // x27
  int *v49; // x22
  int32_t v50; // w21
  int32_t IconCnt; // w21
  int v52; // w22
  int i; // w29
  struct UISprite_array *skillStrengthStatusLabelList; // x8
  UISprite_o *v55; // x23
  __int64 v56; // x9
  struct UISprite_array *v57; // x8
  signed int max_length; // w21
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v61; // x1
  UnityEngine_Object_o *baseButton; // x21
  bool IsEventJoin; // w0
  int v64; // w21
  int v65; // w22
  int v66; // w23
  int v67; // w9
  int v68; // s8
  UnityEngine_GameObject_o **p_levelExceedObject; // x8
  int v70; // s0
  int v72; // s1
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t v75; // w20
  int v76; // s0
  float v78; // s1
  int32_t maxFriendshipRank[2]; // [xsp+10h] [xbp-B0h] BYREF
  __int64 fraction; // [xsp+18h] [xbp-A8h] BYREF
  int32_t max[2]; // [xsp+20h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+30h] [xbp-90h] BYREF
  __int64 barExp; // [xsp+38h] [xbp-88h] BYREF
  int32_t exp[2]; // [xsp+40h] [xbp-80h] BYREF
  __int64 secondMaxAdjustAtk; // [xsp+48h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4B13207 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantSkillStrengthStatus_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B13207 = 1;
  }
  *(_QWORD *)maxAjustAtk = 0LL;
  *(_QWORD *)exp = 0LL;
  secondMaxAdjustAtk = 0LL;
  tdInfo = 0LL;
  barExp = 0LL;
  *(_QWORD *)max = 0LL;
  skillInfoList = 0LL;
  *(_QWORD *)maxFriendshipRank = 0LL;
  fraction = 0LL;
  this->fields.dispMode = mode;
  if ( !item || !mode )
    return;
  ServantStatusListViewItemDrawMain__SetBaseView(this, (const MethodInfo *)item);
  levelLabel = this->fields.levelLabel;
  exp[1] = ServantStatusListViewItem__get_Level(item, 0LL);
  svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !levelLabel )
    goto LABEL_175;
  UIExtrusionLabel__set_text(levelLabel, svtEntity, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  exp[1] = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
  svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !maxLevelLabel )
    goto LABEL_175;
  UILabel__set_text(maxLevelLabel, svtEntity, 0LL);
  costLabel = this->fields.costLabel;
  exp[1] = ServantStatusListViewItem__get_Cost(item, 0LL);
  svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !costLabel )
    goto LABEL_175;
  UILabel__set_text(costLabel, svtEntity, 0LL);
  svtEntity = (System_String_o *)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_175;
  IsStatusUp = ServantEntity__get_IsStatusUp((ServantEntity_o *)svtEntity, 0LL);
  attackIconLabel = this->fields.attackIconLabel;
  v22 = IsStatusUp;
  Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
  if ( v22 )
  {
    svtEntity = (System_String_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
    if ( !attackIconLabel )
      goto LABEL_175;
    UIIconLabel__Set_38947284(
      attackIconLabel,
      39,
      BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * Atk,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0LL);
    hpIconLabel = this->fields.hpIconLabel;
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_Hp(item, 0LL);
    if ( !hpIconLabel )
      goto LABEL_175;
    UIIconLabel__Set_38947284(
      hpIconLabel,
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
    if ( !attackIconLabel )
      goto LABEL_175;
    UIIconLabel__Set_38947284(attackIconLabel, 5, Atk, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0LL);
    v25 = this->fields.hpIconLabel;
    Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
    if ( !v25 )
      goto LABEL_175;
    UIIconLabel__Set_38947284(v25, 3, Hp, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0LL);
  }
  if ( ServantStatusListViewItem__GetAdjustMax(
         item,
         &maxAjustAtk[1],
         maxAjustAtk,
         (int32_t *)&secondMaxAdjustAtk + 1,
         (int32_t *)&secondMaxAdjustAtk,
         0LL) )
  {
    AdjustAtk = ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
    reinforceAttackIconLabel = this->fields.reinforceAttackIconLabel;
    if ( AdjustAtk >= maxAjustAtk[0] )
      v29 = secondMaxAdjustAtk;
    else
      v29 = maxAjustAtk[0];
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
    v30 = (int)svtEntity;
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
      v31 = BalanceConfig_TypeInfo;
    }
    if ( !reinforceAttackIconLabel )
      goto LABEL_175;
    UIIconLabel__Set_38947284(
      reinforceAttackIconLabel,
      45,
      v31->static_fields->StatusUpAdjustHp * v30,
      v31->static_fields->StatusUpAdjustHp * v29,
      0,
      0LL,
      0,
      0,
      0,
      0LL);
    svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
    if ( !svtEntity )
      goto LABEL_175;
    UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    AdjustHp = ServantStatusListViewItem__get_AdjustHp(item, 0LL);
    reinforceHpIconLabel = this->fields.reinforceHpIconLabel;
    if ( AdjustHp >= maxAjustAtk[1] )
      v34 = HIDWORD(secondMaxAdjustAtk);
    else
      v34 = maxAjustAtk[1];
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
    v35 = BalanceConfig_TypeInfo;
    v36 = (int)svtEntity;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v17);
      v35 = BalanceConfig_TypeInfo;
    }
    if ( !reinforceHpIconLabel )
      goto LABEL_175;
    UIIconLabel__Set_38947284(
      reinforceHpIconLabel,
      44,
      v35->static_fields->StatusUpAdjustHp * v36,
      v35->static_fields->StatusUpAdjustHp * v34,
      0,
      0LL,
      0,
      0,
      0,
      0LL);
  }
  else
  {
    svtEntity = (System_String_o *)this->fields.reinforceAttackIconLabel;
    if ( !svtEntity )
      goto LABEL_175;
    UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
    svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
    if ( !svtEntity )
      goto LABEL_175;
    UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
    if ( !svtEntity )
      goto LABEL_175;
    UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
  }
  svtEntity = (System_String_o *)this->fields.reinforceHpMaxLabel;
  if ( !svtEntity )
    goto LABEL_175;
  UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  svtEntity = (System_String_o *)ServantStatusListViewItem__GetExpInfo(
                                   item,
                                   exp,
                                   (int32_t *)&barExp + 1,
                                   (float *)&barExp,
                                   0LL);
  if ( !this->fields.expBase )
    goto LABEL_175;
  if ( ((unsigned __int8)svtEntity & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.expBase, 1, 0LL);
    svtEntity = (System_String_o *)this->fields.lateExpBase;
    if ( !svtEntity )
      goto LABEL_175;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, SHIDWORD(barExp) > 0, 0LL);
    lateExpLabel = this->fields.lateExpLabel;
    v39 = HIDWORD(barExp);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37);
    svtEntity = LocalizationManager__GetNumberFormat(v39, 0LL);
    if ( !lateExpLabel )
      goto LABEL_175;
    UILabel__set_text(lateExpLabel, svtEntity, 0LL);
    svtEntity = (System_String_o *)this->fields.expBar;
    if ( !svtEntity )
      goto LABEL_175;
    UIProgressBar__set_value((UIProgressBar_o *)svtEntity, *(float *)&barExp, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.expBase, 0, 0LL);
  }
  limitCountGauge = this->fields.limitCountGauge;
  svtEntity = (System_String_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
  v41 = item->fields.svtEntity;
  if ( !v41 || !limitCountGauge )
    goto LABEL_175;
  ServantStatusLimitCountGauge__Set(limitCountGauge, (int32_t)svtEntity, v41->fields.limitMax, 0LL);
  tdStrengthStatusSprite = (UnityEngine_Object_o *)this->fields.tdStrengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
  if ( UnityEngine_Object__op_Inequality(tdStrengthStatusSprite, 0LL, 0LL) )
  {
    svtEntity = (System_String_o *)ServantStatusListViewItem__GetNpInfo(item, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_175;
    v44 = this->fields.tdStrengthStatusSprite;
    svtEntity = StrengthStatus__GetTreasureDeviceIconName(
                  tdInfo->fields.strengthStatus,
                  tdInfo->fields.treasureDeviceNum,
                  0LL);
    if ( !v44 )
      goto LABEL_175;
    UISprite__set_spriteName(v44, svtEntity, 0LL);
  }
  if ( this->fields.skillStrengthStatusLabelList )
  {
    ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0LL);
    v45 = skillInfoList;
    if ( skillInfoList && (int)*(_QWORD *)&skillInfoList->max_length >= 1 )
    {
      v46 = 0;
      v47 = 0LL;
      v48 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
      while ( v47 < v45->max_length )
      {
        v49 = (int *)v45->m_Items[v47];
        if ( v49 && v49[4] >= 1 && v49[12] )
        {
          v50 = v49[13];
          if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v17);
          IconCnt = ServantSkillStrengthStatus__GetIconCnt(v50, 0LL);
          svtEntity = (System_String_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(v49[12], v49[13], 0LL);
          if ( IconCnt >= 1 )
          {
            v52 = (int)svtEntity;
            for ( i = 0; i != IconCnt; ++i )
            {
              skillStrengthStatusLabelList = this->fields.skillStrengthStatusLabelList;
              if ( !skillStrengthStatusLabelList )
                goto LABEL_175;
              if ( v46 + i >= skillStrengthStatusLabelList->max_length )
                goto LABEL_176;
              svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
              v55 = skillStrengthStatusLabelList->m_Items[v46 + i];
              if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo, v17);
                svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
              }
              if ( i >= v52 )
              {
                if ( !v55 )
                  goto LABEL_175;
                v56 = 32LL;
              }
              else
              {
                if ( !v55 )
                  goto LABEL_175;
                v56 = 24LL;
              }
              UISprite__set_spriteName(v55, *(System_String_o **)(*(_QWORD *)&svtEntity[7].fields + v56), 0LL);
            }
            v46 += i;
          }
        }
        if ( ++v47 == v48 )
          goto LABEL_82;
        v45 = skillInfoList;
        if ( !skillInfoList )
          goto LABEL_175;
      }
LABEL_176:
      sub_1BCAA44(svtEntity, v17);
    }
    v46 = 0;
LABEL_82:
    v57 = this->fields.skillStrengthStatusLabelList;
    if ( !v57 )
      goto LABEL_175;
    max_length = v57->max_length;
    if ( (int)v46 < max_length )
    {
      while ( v46 < v57->max_length )
      {
        svtEntity = (System_String_o *)v57->m_Items[v46];
        if ( !svtEntity )
          goto LABEL_175;
        UISprite__set_spriteName((UISprite_o *)svtEntity, 0LL, 0LL);
        if ( max_length == ++v46 )
          goto LABEL_89;
        v57 = this->fields.skillStrengthStatusLabelList;
        if ( !v57 )
          goto LABEL_175;
      }
      goto LABEL_176;
    }
  }
LABEL_89:
  svtEntity = (System_String_o *)this->fields.friendshipGauge;
  if ( !svtEntity )
    goto LABEL_175;
  userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
  svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity )
    goto LABEL_175;
  if ( userSvtCollectionEntity )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
    ServantStatusListViewItem__GetFriendshipInfo(item, &max[1], max, (int32_t *)&fraction + 1, (float *)&fraction, 0LL);
    svtEntity = (System_String_o *)this->fields.friendshipGauge;
    if ( !svtEntity )
      goto LABEL_175;
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
  svtEntity = (System_String_o *)this->fields.eventJoinSprite;
  if ( !svtEntity
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL),
        svtEntity = (System_String_o *)ServantStatusListViewItem__get_IsEventJoin(item, 0LL),
        !gameObject) )
  {
LABEL_175:
    sub_1BCAA3C(svtEntity, v17);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)svtEntity & 1, 0LL);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61);
  UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( !item->fields._IsDisplayCombineButton_k__BackingField )
    goto LABEL_154;
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_154;
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
      goto LABEL_175;
  }
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
    goto LABEL_110;
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_175;
  IsEventJoin = UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL);
  v64 = 0;
  if ( maxFriendshipRank[1] == maxFriendshipRank[0]
    && !IsEventJoin
    && ((maxFriendshipRank[0] | maxFriendshipRank[1]) & 0x80000000) == 0 )
  {
    svtEntity = (System_String_o *)item->fields.userSvtEntity;
    if ( !svtEntity )
      goto LABEL_175;
    if ( UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)svtEntity, 0LL) )
    {
LABEL_110:
      v64 = 0;
      goto LABEL_111;
    }
    svtEntity = (System_String_o *)this->fields.bondLimitUpObject;
    if ( !svtEntity )
      goto LABEL_175;
    v64 = 1;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
    svtEntity = (System_String_o *)this->fields.bondLimitUpButton;
    if ( !svtEntity )
      goto LABEL_175;
    BYTE1(svtEntity[4].klass) = 1;
    UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
  }
LABEL_111:
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_175;
  if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
  {
    svtEntity = (System_String_o *)item->fields.userSvtEntity;
    if ( !svtEntity )
      goto LABEL_175;
    if ( UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = (System_String_o *)item->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_175;
      if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0LL) )
      {
        svtEntity = (System_String_o *)this->fields.limitCountUpObject;
        if ( !svtEntity )
          goto LABEL_175;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
        svtEntity = (System_String_o *)this->fields.limitCountUpButton;
        if ( !svtEntity )
          goto LABEL_175;
        BYTE1(svtEntity[4].klass) = 1;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        svtEntity = (System_String_o *)this->fields.levelExceedObject;
        if ( !svtEntity )
          goto LABEL_175;
        goto LABEL_174;
      }
    }
  }
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_175;
  if ( !UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
  {
    svtEntity = (System_String_o *)item->fields.userSvtEntity;
    if ( !svtEntity )
      goto LABEL_175;
    if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = (System_String_o *)item->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_175;
      if ( UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
      {
        svtEntity = (System_String_o *)item->fields.userSvtEntity;
        if ( !svtEntity )
          goto LABEL_175;
        if ( !UserServantEntity__isExceedLvMax((UserServantEntity_o *)svtEntity, 0LL) )
        {
          svtEntity = (System_String_o *)this->fields.levelExceedObject;
          if ( !svtEntity )
            goto LABEL_175;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
          svtEntity = (System_String_o *)this->fields.levelExceedButton;
          if ( !svtEntity )
            goto LABEL_175;
          BYTE1(svtEntity[4].klass) = 1;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
          svtEntity = (System_String_o *)this->fields.limitCountUpObject;
          if ( !svtEntity )
            goto LABEL_175;
LABEL_174:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
          v65 = 1;
          goto LABEL_126;
        }
      }
    }
  }
  v65 = 0;
LABEL_126:
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_175;
  if ( UserServantEntity__IsLeave((UserServantEntity_o *)svtEntity, 0LL) )
    goto LABEL_128;
  svtEntity = (System_String_o *)item->fields.userSvtEntity;
  if ( !svtEntity )
    goto LABEL_175;
  if ( UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
  {
    svtEntity = (System_String_o *)item->fields.userSvtEntity;
    if ( !svtEntity )
      goto LABEL_175;
    if ( UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)svtEntity, 0LL) )
    {
      svtEntity = (System_String_o *)item->fields.userSvtEntity;
      if ( !svtEntity )
        goto LABEL_175;
      if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)svtEntity, 0LL) )
      {
LABEL_128:
        v66 = 0;
        if ( !v64 )
          goto LABEL_140;
LABEL_129:
        if ( ((v65 | v66 ^ 1) & 1) != 0 )
          goto LABEL_148;
        v67 = 1120403456;
        goto LABEL_146;
      }
    }
  }
  svtEntity = (System_String_o *)this->fields.reinforceObject;
  if ( !svtEntity )
    goto LABEL_175;
  v66 = 1;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
  svtEntity = (System_String_o *)this->fields.reinforceButton;
  if ( !svtEntity )
    goto LABEL_175;
  BYTE1(svtEntity[4].klass) = 1;
  UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
  if ( v64 )
    goto LABEL_129;
LABEL_140:
  if ( v65 )
  {
    if ( v66 )
      GameObjectExtensions__SetLocalPositionX(this->fields.reinforceObject, 100.0, 0LL);
    v68 = 1130102784;
    GameObjectExtensions__SetLocalPositionX(this->fields.limitCountUpObject, 220.0, 0LL);
    p_levelExceedObject = &this->fields.levelExceedObject;
    goto LABEL_147;
  }
  if ( v66 )
  {
    v67 = 1130102784;
LABEL_146:
    p_levelExceedObject = &this->fields.reinforceObject;
    v68 = v67;
LABEL_147:
    GameObjectExtensions__SetLocalPositionX(*p_levelExceedObject, *(float *)&v68, 0LL);
LABEL_148:
    svtEntity = (System_String_o *)this->fields.reinforceMaskSprite;
    if ( !svtEntity )
      goto LABEL_175;
    svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
    if ( !svtEntity )
      goto LABEL_175;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
    svtEntity = (System_String_o *)this->fields.baseSprite;
    if ( !svtEntity )
      goto LABEL_175;
    UIWidget__set_height((UIWidget_o *)svtEntity, 362, 0LL);
    svtEntity = (System_String_o *)this->fields.baseCollider;
    if ( !svtEntity )
      goto LABEL_175;
    *(UnityEngine_Vector3_o *)&v70 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)svtEntity, 0LL);
    svtEntity = (System_String_o *)this->fields.baseCollider;
    if ( !svtEntity )
      goto LABEL_175;
    v72 = 1135935488;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)svtEntity, *(UnityEngine_Vector3_o *)&v70, 0LL);
    GameObjectExtensions__SetLocalPositionY(this->fields.baseUi, 23.0, 0LL);
  }
LABEL_154:
  svtEntity = (System_String_o *)this->fields.transformNameSprite;
  if ( !svtEntity )
    goto LABEL_175;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity )
    goto LABEL_175;
  if ( IsTransformServant_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
    transformNameLabel = this->fields.transformNameLabel;
    svtEntity = ServantStatusListViewItem__GetTransformName(item, 0LL);
    if ( transformNameLabel )
    {
      UILabel__set_text(transformNameLabel, svtEntity, 0LL);
      svtEntity = (System_String_o *)this->fields.baseSprite;
      if ( svtEntity )
      {
        v75 = this->fields.transformNameAddHeight + HIDWORD(svtEntity[7].klass);
        UIWidget__set_height((UIWidget_o *)svtEntity, v75, 0LL);
        svtEntity = (System_String_o *)this->fields.baseCollider;
        if ( svtEntity )
        {
          *(UnityEngine_Vector3_o *)&v76 = UnityEngine_BoxCollider__get_size(
                                             (UnityEngine_BoxCollider_o *)svtEntity,
                                             0LL);
          svtEntity = (System_String_o *)this->fields.baseCollider;
          if ( svtEntity )
          {
            v78 = (float)v75;
            UnityEngine_BoxCollider__set_size(
              (UnityEngine_BoxCollider_o *)svtEntity,
              *(UnityEngine_Vector3_o *)&v76,
              0LL);
            GameObjectExtensions__AddLocalPositionY(
              this->fields.baseUi,
              (float)(this->fields.transformNameAddHeight / 2),
              0LL);
            GameObjectExtensions__AddLocalPositionY(
              this->fields.mainContentsRoot,
              (float)-this->fields.transformNameAddHeight,
              0LL);
            GameObjectExtensions__AddLocalPositionY(
              this->fields.combineRoot,
              (float)-this->fields.transformNameAddHeight,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_175;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
}