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
    sub_1B86614(this, method);
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
  __int64 v9; // x1
  struct ServantEntity_o *TransformedServant_k__BackingField; // x8
  int32_t TransformedServantDispLimitCount_k__BackingField; // w20
  int32_t limitMax; // w21
  int32_t ServantLimitCountSealAfter; // w0
  int32_t ConvertOverwritePortraitLimitCount; // w21

  if ( (byte_4A4BCCF & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, svtId);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v8);
    this = (ServantStatusListViewItemDrawMain_o *)sub_1B863B8(
                                                    &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                    v9);
    byte_4A4BCCF = 1;
  }
  if ( !item )
    goto LABEL_15;
  if ( !item->fields._IsTransformed_k__BackingField )
  {
    *svtId = ServantStatusListViewItem__get_SvtId(item, 0LL);
    ConvertOverwritePortraitLimitCount = ServantStatusListViewItem__get_ConvertOverwritePortraitLimitCount(item, 0LL);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    *limitCount = ImageLimitCount__GetLimitCountByImageLimitCostumeIn(ConvertOverwritePortraitLimitCount, 0LL);
    this = (ServantStatusListViewItemDrawMain_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (ServantStatusListViewItemDrawMain_o *)DataManager__GetMasterData_object_(
                                                      (DataManager_o *)this,
                                                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
    sub_1B86614(this, svtId);
  }
  *svtId = item->fields._TransformedSvtId_k__BackingField;
  TransformedServant_k__BackingField = item->fields._TransformedServant_k__BackingField;
  if ( !TransformedServant_k__BackingField )
    goto LABEL_15;
  TransformedServantDispLimitCount_k__BackingField = item->fields._TransformedServantDispLimitCount_k__BackingField;
  limitMax = TransformedServant_k__BackingField->fields.limitMax;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
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
  UITexture_o *servantTexture; // x21
  int32_t v7; // w19
  int32_t v8; // w20
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4A4BCD1 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1B863B8(&ServantAssetLoadManager_TypeInfo, item);
    byte_4A4BCD1 = 1;
  }
  *(_QWORD *)limitCount = 0LL;
  if ( v5->fields.isStart )
  {
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(this, &limitCount[1], limitCount, item, v3);
    servantTexture = v5->fields.servantTexture;
    v8 = limitCount[0];
    v7 = limitCount[1];
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__loadStatusFace(servantTexture, v7, v8, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawMain__ModifyRandomLimitCountSetting(
        ServantStatusListViewItemDrawMain_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  ServantStatusListViewItemDrawMain_o *v7; // x0
  UITexture_o *servantTexture; // x21
  int32_t v9; // w19
  int32_t v10; // w20
  int32_t limitCount[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A4BCD2 & 1) == 0 )
  {
    sub_1B863B8(&RandomLimitCountManager_TypeInfo, item);
    sub_1B863B8(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4A4BCD2 = 1;
  }
  *(_QWORD *)limitCount = 0LL;
  if ( this->fields.isStart )
  {
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
    if ( !byte_4A4A1E0 )
    {
      sub_1B863B8(&RandomLimitCountManager_TypeInfo, item);
      byte_4A4A1E0 = 1;
    }
    v7 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
      v7 = (ServantStatusListViewItemDrawMain_o *)RandomLimitCountManager_TypeInfo;
    }
    if ( LOBYTE(v7->fields.friendshipGauge->monitor) )
    {
      ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(v7, &limitCount[1], limitCount, item, v3);
      servantTexture = this->fields.servantTexture;
      v10 = limitCount[0];
      v9 = limitCount[1];
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__loadStatusFace(servantTexture, v9, v10, 0LL);
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
  UITexture_o *servantTexture; // x21
  int32_t v8; // w19
  int32_t v9; // w20
  int32_t limitCount; // [xsp+8h] [xbp-28h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4A4BCD0 & 1) == 0 )
  {
    this = (ServantStatusListViewItemDrawMain_o *)sub_1B863B8(&ServantAssetLoadManager_TypeInfo, item);
    byte_4A4BCD0 = 1;
  }
  limitCount = 0;
  if ( !item )
    sub_1B86614(this, item);
  v5 = (ServantStatusListViewItemDrawMain_o *)ServantStatusListViewItem__get_SvtId(item, 0LL);
  svtId = (int)v5;
  if ( (int)v5 >= 1 )
  {
    v4->fields.isStart = 1;
    ServantStatusListViewItemDrawMain__GetServantIdAndLimitCount(v5, &svtId, &limitCount, item, v6);
    servantTexture = v4->fields.servantTexture;
    v9 = limitCount;
    v8 = svtId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__loadStatusFace(servantTexture, v8, v9, 0LL);
  }
}


void __fastcall ServantStatusListViewItemDrawMain__OnClickUnSealedQuestTransitionButton(
        ServantStatusListViewItemDrawMain_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t questId; // w8
  UnityEngine_GameObject_o *inputMessageObject; // x19
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A4BCD3 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&StringLiteral_9727/*"OnClickUnSealedQuestTransition"*/, v6);
    byte_4A4BCD3 = 1;
  }
  questId = this->fields.questId;
  if ( questId )
  {
    inputMessageObject = this->fields.inputMessageObject;
    v11 = questId;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4);
    if ( !inputMessageObject )
      sub_1B86614(v9, v10);
    UnityEngine_GameObject__SendMessage_69337672(inputMessageObject, (System_String_o *)StringLiteral_9727/*"OnClickUnSealedQuestTransition"*/, v9, 0LL);
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
    sub_1B86614(baseSprite, method);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
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
  UILabel_o *lateExpLabel; // x21
  int32_t v38; // w22
  ServantStatusLimitCountGauge_o *limitCountGauge; // x21
  struct ServantEntity_o *v40; // x8
  UnityEngine_Object_o *tdStrengthStatusSprite; // x21
  UISprite_o *v42; // x21
  SkillInfo_array *v43; // x8
  il2cpp_array_size_t v44; // w25
  unsigned __int64 v45; // x26
  __int64 v46; // x27
  int *v47; // x22
  int32_t v48; // w21
  int32_t IconCnt; // w21
  int v50; // w22
  int i; // w29
  struct UISprite_array *skillStrengthStatusLabelList; // x8
  UISprite_o *v53; // x23
  __int64 v54; // x9
  struct UISprite_array *v55; // x8
  signed int max_length; // w21
  struct UserServantCollectionEntity_o *userSvtCollectionEntity; // x21
  UnityEngine_GameObject_o *gameObject; // x21
  UnityEngine_Object_o *baseButton; // x21
  UserServantEntity_o *userSvtEntity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **p_userSvtEntity; // x28
  bool IsHeroine; // w0
  int32_t v63; // w9
  bool v64; // w23
  int32_t v65; // w8
  _BOOL4 v66; // w21
  _BOOL4 v67; // w22
  int v68; // w29
  _BOOL4 v69; // w23
  _BOOL4 v70; // w24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v71; // x8
  ServantLimitImageMaster_o *v72; // x25
  __int64 v73; // x26
  __int64 v74; // x27
  int32_t v75; // w26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v76; // x8
  __int64 v77; // x26
  __int64 v78; // x27
  int32_t v79; // w26
  int32_t v80; // w0
  int32_t ServantLimitCountSealedQuestOpen; // w0
  _BOOL4 CanMoveCombine_k__BackingField; // w8
  _BOOL4 v83; // w25
  UnityEngine_GameObject_o *reinforceObject; // x0
  float v85; // s0
  UnityEngine_GameObject_o *v86; // x0
  int v87; // w8
  UnityEngine_GameObject_o *limitCountUpObject; // x0
  float v89; // s0
  int v90; // s8
  float v91; // s0
  UnityEngine_GameObject_o **p_levelExceedObject; // x8
  int v93; // s0
  int v95; // s1
  _BOOL4 IsTransformServant_k__BackingField; // w21
  UILabel_o *transformNameLabel; // x21
  int32_t v98; // w20
  int v99; // s0
  float v101; // s1
  int32_t maxFriendshipRank[2]; // [xsp+20h] [xbp-B0h] BYREF
  __int64 fraction; // [xsp+28h] [xbp-A8h] BYREF
  int32_t max[2]; // [xsp+30h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-98h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+40h] [xbp-90h] BYREF
  __int64 barExp; // [xsp+48h] [xbp-88h] BYREF
  int32_t exp[2]; // [xsp+50h] [xbp-80h] BYREF
  __int64 secondMaxAdjustAtk; // [xsp+58h] [xbp-78h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v112; // 0:x0.16

  if ( (byte_4A4BCCE & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, item);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&LocalizationManager_TypeInfo, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&ServantSkillStrengthStatus_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13);
    sub_1B863B8(&StringLiteral_1/*""*/, v14);
    byte_4A4BCCE = 1;
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
    goto LABEL_220;
  UIExtrusionLabel__set_text(levelLabel, svtEntity, 0LL);
  maxLevelLabel = this->fields.maxLevelLabel;
  exp[1] = ServantStatusListViewItem__get_MaxLevel(item, 0LL);
  svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !maxLevelLabel )
    goto LABEL_220;
  UILabel__set_text(maxLevelLabel, svtEntity, 0LL);
  costLabel = this->fields.costLabel;
  exp[1] = ServantStatusListViewItem__get_Cost(item, 0LL);
  svtEntity = System_Int32__ToString((int32_t)&exp[1], 0LL);
  if ( !costLabel )
    goto LABEL_220;
  UILabel__set_text(costLabel, svtEntity, 0LL);
  svtEntity = (System_String_o *)item->fields.svtEntity;
  if ( !svtEntity )
    goto LABEL_220;
  IsStatusUp = ServantEntity__get_IsStatusUp((ServantEntity_o *)svtEntity, 0LL);
  attackIconLabel = this->fields.attackIconLabel;
  v22 = IsStatusUp;
  Atk = ServantStatusListViewItem__get_Atk(item, 0LL);
  if ( v22 )
  {
    svtEntity = (System_String_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !attackIconLabel )
      goto LABEL_220;
    UIIconLabel__Set_39193520(
      attackIconLabel,
      39,
      BalanceConfig_TypeInfo->static_fields->StatusUpAdjustAtk * Atk,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
    hpIconLabel = this->fields.hpIconLabel;
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_Hp(item, 0LL);
    if ( !hpIconLabel )
      goto LABEL_220;
    UIIconLabel__Set_39193520(
      hpIconLabel,
      38,
      BalanceConfig_TypeInfo->static_fields->StatusUpAdjustHp * (_DWORD)svtEntity,
      0,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
  }
  else
  {
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustAtk(item, 0LL);
    if ( !attackIconLabel )
      goto LABEL_220;
    UIIconLabel__Set_39193520(attackIconLabel, 5, Atk, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0, 0LL);
    v25 = this->fields.hpIconLabel;
    Hp = ServantStatusListViewItem__get_Hp(item, 0LL);
    svtEntity = (System_String_o *)ServantStatusListViewItem__get_AdjustHp(item, 0LL);
    if ( !v25 )
      goto LABEL_220;
    UIIconLabel__Set_39193520(v25, 3, Hp, (int32_t)svtEntity, 0, 0LL, 0, 0, 0, 0, 0LL);
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
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    if ( !reinforceAttackIconLabel )
      goto LABEL_220;
    UIIconLabel__Set_39193520(
      reinforceAttackIconLabel,
      45,
      v31->static_fields->StatusUpAdjustHp * v30,
      v31->static_fields->StatusUpAdjustHp * v29,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
    svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
    if ( !svtEntity )
      goto LABEL_220;
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
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    if ( !reinforceHpIconLabel )
      goto LABEL_220;
    UIIconLabel__Set_39193520(
      reinforceHpIconLabel,
      44,
      v35->static_fields->StatusUpAdjustHp * v36,
      v35->static_fields->StatusUpAdjustHp * v34,
      0,
      0LL,
      0,
      0,
      0,
      0,
      0LL);
  }
  else
  {
    svtEntity = (System_String_o *)this->fields.reinforceAttackIconLabel;
    if ( !svtEntity )
      goto LABEL_220;
    UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
    svtEntity = (System_String_o *)this->fields.reinforceAttackMaxLabel;
    if ( !svtEntity )
      goto LABEL_220;
    UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    svtEntity = (System_String_o *)this->fields.reinforceHpIconLabel;
    if ( !svtEntity )
      goto LABEL_220;
    UIIconLabel__Clear((UIIconLabel_o *)svtEntity, 0LL);
  }
  svtEntity = (System_String_o *)this->fields.reinforceHpMaxLabel;
  if ( !svtEntity )
    goto LABEL_220;
  UILabel__set_text((UILabel_o *)svtEntity, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  svtEntity = (System_String_o *)ServantStatusListViewItem__GetExpInfo(
                                   item,
                                   exp,
                                   (int32_t *)&barExp + 1,
                                   (float *)&barExp,
                                   0LL);
  if ( !this->fields.expBase )
    goto LABEL_220;
  if ( ((unsigned __int8)svtEntity & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.expBase, 1, 0LL);
    svtEntity = (System_String_o *)this->fields.lateExpBase;
    if ( !svtEntity )
      goto LABEL_220;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, SHIDWORD(barExp) > 0, 0LL);
    lateExpLabel = this->fields.lateExpLabel;
    v38 = HIDWORD(barExp);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    svtEntity = LocalizationManager__GetNumberFormat(v38, 0LL);
    if ( !lateExpLabel )
      goto LABEL_220;
    UILabel__set_text(lateExpLabel, svtEntity, 0LL);
    svtEntity = (System_String_o *)this->fields.expBar;
    if ( !svtEntity )
      goto LABEL_220;
    UIProgressBar__set_value((UIProgressBar_o *)svtEntity, *(float *)&barExp, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(this->fields.expBase, 0, 0LL);
  }
  limitCountGauge = this->fields.limitCountGauge;
  svtEntity = (System_String_o *)ServantStatusListViewItem__get_LimitCount(item, 0LL);
  v40 = item->fields.svtEntity;
  if ( !v40 || !limitCountGauge )
    goto LABEL_220;
  ServantStatusLimitCountGauge__Set(limitCountGauge, (int32_t)svtEntity, v40->fields.limitMax, 0LL);
  tdStrengthStatusSprite = (UnityEngine_Object_o *)this->fields.tdStrengthStatusSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(tdStrengthStatusSprite, 0LL, 0LL) )
  {
    svtEntity = (System_String_o *)ServantStatusListViewItem__GetNpInfo(item, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_220;
    v42 = this->fields.tdStrengthStatusSprite;
    svtEntity = StrengthStatus__GetTreasureDeviceIconName(
                  tdInfo->fields.strengthStatus,
                  tdInfo->fields.treasureDeviceNum,
                  0LL);
    if ( !v42 )
      goto LABEL_220;
    UISprite__set_spriteName(v42, svtEntity, 0LL);
  }
  if ( this->fields.skillStrengthStatusLabelList )
  {
    ServantStatusListViewItem__GetSkillInfo(item, &skillInfoList, 0, 0LL);
    v43 = skillInfoList;
    if ( skillInfoList && (int)*(_QWORD *)&skillInfoList->max_length >= 1 )
    {
      v44 = 0;
      v45 = 0LL;
      v46 = (unsigned int)*(_QWORD *)&skillInfoList->max_length;
      while ( v45 < v43->max_length )
      {
        v47 = (int *)v43->m_Items[v45];
        if ( v47 && v47[4] >= 1 && v47[12] )
        {
          v48 = v47[13];
          if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
          IconCnt = ServantSkillStrengthStatus__GetIconCnt(v48, 0LL);
          svtEntity = (System_String_o *)ServantSkillStrengthStatus__GetStrengthenedCnt(v47[12], v47[13], 0LL);
          if ( IconCnt >= 1 )
          {
            v50 = (int)svtEntity;
            for ( i = 0; i != IconCnt; ++i )
            {
              skillStrengthStatusLabelList = this->fields.skillStrengthStatusLabelList;
              if ( !skillStrengthStatusLabelList )
                goto LABEL_220;
              if ( v44 + i >= skillStrengthStatusLabelList->max_length )
                goto LABEL_221;
              svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
              v53 = skillStrengthStatusLabelList->m_Items[v44 + i];
              if ( !ServantSkillStrengthStatus_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantSkillStrengthStatus_TypeInfo);
                svtEntity = (System_String_o *)ServantSkillStrengthStatus_TypeInfo;
              }
              if ( i >= v50 )
              {
                if ( !v53 )
                  goto LABEL_220;
                v54 = 32LL;
              }
              else
              {
                if ( !v53 )
                  goto LABEL_220;
                v54 = 24LL;
              }
              UISprite__set_spriteName(v53, *(System_String_o **)(*(_QWORD *)&svtEntity[7].fields + v54), 0LL);
            }
            v44 += i;
          }
        }
        if ( ++v45 == v46 )
          goto LABEL_82;
        v43 = skillInfoList;
        if ( !skillInfoList )
          goto LABEL_220;
      }
LABEL_221:
      sub_1B8661C(svtEntity, v17);
    }
    v44 = 0;
LABEL_82:
    v55 = this->fields.skillStrengthStatusLabelList;
    if ( !v55 )
      goto LABEL_220;
    max_length = v55->max_length;
    if ( (int)v44 < max_length )
    {
      while ( v44 < v55->max_length )
      {
        svtEntity = (System_String_o *)v55->m_Items[v44];
        if ( !svtEntity )
          goto LABEL_220;
        UISprite__set_spriteName((UISprite_o *)svtEntity, 0LL, 0LL);
        if ( max_length == ++v44 )
          goto LABEL_89;
        v55 = this->fields.skillStrengthStatusLabelList;
        if ( !v55 )
          goto LABEL_220;
      }
      goto LABEL_221;
    }
  }
LABEL_89:
  svtEntity = (System_String_o *)this->fields.friendshipGauge;
  if ( !svtEntity )
    goto LABEL_220;
  userSvtCollectionEntity = item->fields.userSvtCollectionEntity;
  svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity )
    goto LABEL_220;
  if ( userSvtCollectionEntity )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
    ServantStatusListViewItem__GetFriendshipInfo(item, &max[1], max, (int32_t *)&fraction + 1, (float *)&fraction, 0LL);
    svtEntity = (System_String_o *)this->fields.friendshipGauge;
    if ( !svtEntity )
      goto LABEL_220;
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
  if ( !svtEntity )
    goto LABEL_220;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
  svtEntity = (System_String_o *)ServantStatusListViewItem__get_IsEventJoin(item, 0LL);
  if ( !gameObject )
    goto LABEL_220;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)svtEntity & 1, 0LL);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( item->fields._IsDisplayCombineButton_k__BackingField )
  {
    p_userSvtEntity = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o **)&item->fields.userSvtEntity;
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      IsHeroine = UserServantEntity__IsHeroine(userSvtEntity, 0LL);
      v63 = -1;
      maxFriendshipRank[0] = -1;
      maxFriendshipRank[1] = -1;
      v64 = IsHeroine;
      if ( item->fields.userSvtCollectionEntity )
      {
        UserServantCollectionEntity__getFriendShipRankInfo(
          item->fields.userSvtCollectionEntity,
          &maxFriendshipRank[1],
          maxFriendshipRank,
          0LL);
        v63 = maxFriendshipRank[0];
        v65 = maxFriendshipRank[1];
      }
      else
      {
        v65 = -1;
      }
      v66 = 0;
      if ( v65 == v63 && ((v63 | v65) & 0x80000000) == 0 )
      {
        svtEntity = (System_String_o *)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_220;
        if ( !UserServantEntity__isExceedFriendshipMax((UserServantEntity_o *)svtEntity, 0LL) )
        {
          svtEntity = (System_String_o *)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_220;
          if ( !UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL) )
          {
            if ( v64 )
            {
              svtEntity = (System_String_o *)*p_userSvtEntity;
              if ( !*p_userSvtEntity )
                goto LABEL_220;
              if ( !UserServantEntity__IsUseFriendshipExceedItemHeroine((UserServantEntity_o *)svtEntity, 0LL) )
              {
                v66 = 0;
                v67 = 0;
                v68 = 0;
                goto LABEL_125;
              }
            }
            svtEntity = (System_String_o *)this->fields.bondLimitUpObject;
            if ( !svtEntity )
              goto LABEL_220;
            v66 = 1;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
            svtEntity = (System_String_o *)this->fields.bondLimitUpButton;
            if ( !svtEntity )
              goto LABEL_220;
            BYTE1(svtEntity[4].klass) = 1;
            UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
            if ( !v64 )
              goto LABEL_112;
            goto LABEL_124;
          }
        }
        v66 = 0;
      }
      if ( !v64 )
      {
LABEL_112:
        svtEntity = (System_String_o *)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_220;
        if ( UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
        {
          svtEntity = (System_String_o *)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_220;
          if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0LL) )
          {
            svtEntity = (System_String_o *)this->fields.limitCountUpButton;
            if ( !svtEntity )
              goto LABEL_220;
            v67 = 1;
            BYTE1(svtEntity[4].klass) = 1;
            v68 = v66 + 1;
            UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
            goto LABEL_125;
          }
        }
      }
LABEL_124:
      v67 = 0;
      v68 = v66;
LABEL_125:
      svtEntity = (System_String_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_220;
      if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
        goto LABEL_138;
      svtEntity = (System_String_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_220;
      if ( UserServantEntity__isExceedLvMax((UserServantEntity_o *)svtEntity, 0LL) )
        goto LABEL_138;
      svtEntity = (System_String_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_220;
      if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)svtEntity, 0LL) )
        goto LABEL_138;
      svtEntity = (System_String_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_220;
      if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0LL) )
        goto LABEL_138;
      if ( !v64 )
        goto LABEL_136;
      svtEntity = (System_String_o *)*p_userSvtEntity;
      if ( !*p_userSvtEntity )
        goto LABEL_220;
      if ( !UserServantEntity__IsUseLevelExceedItemHeroine((UserServantEntity_o *)svtEntity, 0LL) )
      {
LABEL_138:
        v69 = 0;
      }
      else
      {
LABEL_136:
        svtEntity = (System_String_o *)this->fields.levelExceedButton;
        if ( !svtEntity )
          goto LABEL_220;
        v69 = 1;
        BYTE1(svtEntity[4].klass) = 1;
        ++v68;
        UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
      }
      svtEntity = (System_String_o *)*p_userSvtEntity;
      if ( *p_userSvtEntity )
      {
        if ( UserServantEntity__IsLeave((UserServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_141;
        svtEntity = (System_String_o *)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_220;
        if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_148;
        svtEntity = (System_String_o *)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_220;
        if ( !UserServantEntity__isSecondAdjustAtkMax((UserServantEntity_o *)svtEntity, 0LL) )
          goto LABEL_148;
        svtEntity = (System_String_o *)*p_userSvtEntity;
        if ( !*p_userSvtEntity )
          goto LABEL_220;
        if ( UserServantEntity__isSecondAdjustHpMax((UserServantEntity_o *)svtEntity, 0LL) )
        {
LABEL_141:
          v70 = 0;
        }
        else
        {
LABEL_148:
          svtEntity = (System_String_o *)this->fields.reinforceButton;
          if ( !svtEntity )
            goto LABEL_220;
          v70 = 1;
          BYTE1(svtEntity[4].klass) = 1;
          ++v68;
          UICommonButton__SetEnable((UICommonButton_o *)svtEntity, item->fields._CanMoveCombine_k__BackingField, 0LL);
        }
        svtEntity = (System_String_o *)*p_userSvtEntity;
        if ( *p_userSvtEntity )
        {
          if ( UserServantEntity__IsHeroine((UserServantEntity_o *)svtEntity, 0LL) )
            goto LABEL_173;
          svtEntity = (System_String_o *)*p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_220;
          if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)svtEntity, 0LL) )
            goto LABEL_173;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          svtEntity = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
          v71 = *p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_220;
          v72 = (ServantLimitImageMaster_o *)svtEntity;
          v74 = *(_QWORD *)&v71[5].fields.currentCryptoKey;
          v73 = *(_QWORD *)&v71[5].fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v111.fields.currentCryptoKey = v74;
          *(_QWORD *)&v111.fields.fakeValue = v73;
          svtEntity = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v111, 0LL);
          if ( !*p_userSvtEntity )
            goto LABEL_220;
          v75 = (int)svtEntity;
          svtEntity = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                           (*p_userSvtEntity)[6],
                                           0LL);
          if ( !v72 )
            goto LABEL_220;
          svtEntity = (System_String_o *)ServantLimitImageMaster__IsServantLimitCountSeal(
                                           v72,
                                           v75,
                                           (int32_t)svtEntity,
                                           0LL);
          if ( ((unsigned __int8)svtEntity & 1) == 0 )
            goto LABEL_173;
          v76 = *p_userSvtEntity;
          if ( !*p_userSvtEntity )
            goto LABEL_220;
          v78 = *(_QWORD *)&v76[5].fields.currentCryptoKey;
          v77 = *(_QWORD *)&v76[5].fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v112.fields.currentCryptoKey = v78;
          *(_QWORD *)&v112.fields.fakeValue = v77;
          svtEntity = (System_String_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v112, 0LL);
          if ( !*p_userSvtEntity )
            goto LABEL_220;
          v79 = (int)svtEntity;
          v80 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244((*p_userSvtEntity)[6], 0LL);
          ServantLimitCountSealedQuestOpen = ServantLimitImageMaster__GetServantLimitCountSealedQuestOpen(
                                               v72,
                                               v79,
                                               v80,
                                               0LL);
          this->fields.questId = ServantLimitCountSealedQuestOpen;
          if ( !ServantLimitCountSealedQuestOpen )
            goto LABEL_173;
          svtEntity = (System_String_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !svtEntity )
            goto LABEL_220;
          if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)svtEntity, this->fields.questId, 0LL) )
          {
            svtEntity = (System_String_o *)this->fields.unSealedQuestTransitionButton;
            if ( !svtEntity )
              goto LABEL_220;
            BYTE1(svtEntity[4].klass) = 1;
            CanMoveCombine_k__BackingField = item->fields._CanMoveCombine_k__BackingField;
            ++v68;
            if ( item->fields._CanMoveCombine_k__BackingField )
              CanMoveCombine_k__BackingField = item->fields.isEnableServantQuest;
            UICommonButton__SetEnable((UICommonButton_o *)svtEntity, CanMoveCombine_k__BackingField, 0LL);
            v83 = 1;
          }
          else
          {
LABEL_173:
            v83 = 0;
          }
          if ( v66 )
          {
            if ( v70 )
            {
              if ( v68 == 3 )
              {
                reinforceObject = this->fields.reinforceObject;
                v85 = -20.0;
                goto LABEL_185;
              }
              if ( v68 == 2 )
              {
                reinforceObject = this->fields.reinforceObject;
                v85 = 100.0;
LABEL_185:
                GameObjectExtensions__SetLocalPositionX(reinforceObject, v85, 0LL);
              }
            }
            if ( !v69 )
              goto LABEL_197;
            limitCountUpObject = this->fields.limitCountUpObject;
            v89 = -20.0;
            v90 = -20.0;
            goto LABEL_195;
          }
          if ( v70 )
          {
            switch ( v68 )
            {
              case 3:
                v86 = this->fields.reinforceObject;
                v91 = -20.0;
LABEL_191:
                GameObjectExtensions__SetLocalPositionX(v86, v91, 0LL);
                break;
              case 2:
                v86 = this->fields.reinforceObject;
                v87 = 1120403456;
                goto LABEL_190;
              case 1:
                v86 = this->fields.reinforceObject;
                v87 = 1130102784;
LABEL_190:
                v91 = *(float *)&v87;
                goto LABEL_191;
            }
          }
          if ( v69 )
          {
            p_levelExceedObject = &this->fields.levelExceedObject;
            v90 = 1130102784;
LABEL_196:
            GameObjectExtensions__SetLocalPositionX(*p_levelExceedObject, *(float *)&v90, 0LL);
LABEL_197:
            svtEntity = (System_String_o *)this->fields.bondLimitUpObject;
            if ( !svtEntity )
              goto LABEL_220;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v66, 0LL);
            svtEntity = (System_String_o *)this->fields.limitCountUpObject;
            if ( !svtEntity )
              goto LABEL_220;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v67, 0LL);
            svtEntity = (System_String_o *)this->fields.levelExceedObject;
            if ( !svtEntity )
              goto LABEL_220;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v69, 0LL);
            svtEntity = (System_String_o *)this->fields.reinforceObject;
            if ( !svtEntity )
              goto LABEL_220;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v70, 0LL);
            svtEntity = (System_String_o *)this->fields.unSealedQuestTransitionObject;
            if ( !svtEntity )
              goto LABEL_220;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, v83, 0LL);
            if ( v66 || v69 || v67 || v70 || v83 )
            {
              svtEntity = (System_String_o *)this->fields.reinforceMaskSprite;
              if ( !svtEntity )
                goto LABEL_220;
              svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)svtEntity,
                                               0LL);
              if ( !svtEntity )
                goto LABEL_220;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 1, 0LL);
              svtEntity = (System_String_o *)this->fields.baseSprite;
              if ( !svtEntity )
                goto LABEL_220;
              UIWidget__set_height((UIWidget_o *)svtEntity, 362, 0LL);
              svtEntity = (System_String_o *)this->fields.baseCollider;
              if ( !svtEntity )
                goto LABEL_220;
              *(UnityEngine_Vector3_o *)&v93 = UnityEngine_BoxCollider__get_size(
                                                 (UnityEngine_BoxCollider_o *)svtEntity,
                                                 0LL);
              svtEntity = (System_String_o *)this->fields.baseCollider;
              if ( !svtEntity )
                goto LABEL_220;
              v95 = 1135935488;
              UnityEngine_BoxCollider__set_size(
                (UnityEngine_BoxCollider_o *)svtEntity,
                *(UnityEngine_Vector3_o *)&v93,
                0LL);
              GameObjectExtensions__SetLocalPositionY(this->fields.baseUi, 23.0, 0LL);
            }
            goto LABEL_209;
          }
          limitCountUpObject = this->fields.limitCountUpObject;
          v90 = 1130102784;
          v89 = 220.0;
LABEL_195:
          GameObjectExtensions__SetLocalPositionX(limitCountUpObject, v89, 0LL);
          p_levelExceedObject = &this->fields.unSealedQuestTransitionObject;
          goto LABEL_196;
        }
      }
LABEL_220:
      sub_1B86614(svtEntity, v17);
    }
  }
LABEL_209:
  svtEntity = (System_String_o *)this->fields.transformNameSprite;
  if ( !svtEntity )
    goto LABEL_220;
  IsTransformServant_k__BackingField = item->fields._IsTransformServant_k__BackingField;
  svtEntity = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)svtEntity, 0LL);
  if ( !svtEntity )
    goto LABEL_220;
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
        v98 = this->fields.transformNameAddHeight + HIDWORD(svtEntity[7].klass);
        UIWidget__set_height((UIWidget_o *)svtEntity, v98, 0LL);
        svtEntity = (System_String_o *)this->fields.baseCollider;
        if ( svtEntity )
        {
          *(UnityEngine_Vector3_o *)&v99 = UnityEngine_BoxCollider__get_size(
                                             (UnityEngine_BoxCollider_o *)svtEntity,
                                             0LL);
          svtEntity = (System_String_o *)this->fields.baseCollider;
          if ( svtEntity )
          {
            v101 = (float)v98;
            UnityEngine_BoxCollider__set_size(
              (UnityEngine_BoxCollider_o *)svtEntity,
              *(UnityEngine_Vector3_o *)&v99,
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
    goto LABEL_220;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)svtEntity, 0, 0LL);
}