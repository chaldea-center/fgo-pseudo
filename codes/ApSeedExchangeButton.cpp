void ApSeedExchangeButton___cctor(const MethodInfo *method)
{
  if ( (byte_5969E3B & 1) == 0 )
  {
    sub_2213A60(&ApSeedExchangeButton_TypeInfo);
    byte_5969E3B = 1;
  }
  ApSeedExchangeButton_TypeInfo->static_fields->EXCHENGE_DISP_LIMIT = 99;
}


void ApSeedExchangeButton___ctor(ApSeedExchangeButton_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ApSeedExchangeButton__OnClickButton(ApSeedExchangeButton_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_5969E3A & 1) == 0 )
  {
    sub_2213A60(&Method_ApSeedExchangeButton_OnClickButton__);
    byte_5969E3A = 1;
  }
  v3 = Method_ApSeedExchangeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_ApSeedExchangeButton_OnClickButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78();
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onClickCallback, 0);
}


void ApSeedExchangeButton__SetupBtn(
        ApSeedExchangeButton_o *this,
        ShopEntity_o *shopEntity,
        System_Action_o *onClickCallback,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *userEnt; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  struct CommonConsumeEntity_array *CommonConsumeEntities; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  UISprite_o *buttonSprite; // x20
  const MethodInfo *v15; // x1

  if ( (byte_5969E38 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_18247/*"btn_event_fruit"*/);
    byte_5969E38 = 1;
  }
  if ( !shopEntity )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      return;
    }
LABEL_12:
    sub_2213CDC(gameObject, v10);
  }
  this->fields.shopEntity = shopEntity;
  sub_2213A04(&this->fields.shopEntity, shopEntity);
  this->fields.onClickCallback = onClickCallback;
  sub_2213A04(&this->fields.onClickCallback, onClickCallback);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userEnt = SelfUserGame;
  sub_2213A04(&this->fields.userEnt, SelfUserGame);
  userEnt = this->fields.userEnt;
  if ( userEnt )
    this->fields.currentAp = UserGameEntity__getAct(userEnt, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  CommonConsumeEntities = ShopEntity__GetCommonConsumeEntities(shopEntity, 0);
  this->fields.commonConsumeEntities = CommonConsumeEntities;
  sub_2213A04(&this->fields.commonConsumeEntities, CommonConsumeEntities);
  buttonSprite = this->fields.buttonSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
  AtlasManager__SetEventSprite(buttonSprite, (System_String_o *)StringLiteral_18247/*"btn_event_fruit"*/, 0);
  AtlasManager__SetItem(this->fields.icon, 104, 0);
  ApSeedExchangeButton__UpdateExchangeCount(this, v15);
}


void ApSeedExchangeButton__Update(ApSeedExchangeButton_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  UserGameEntity_o *userEnt; // x0
  int32_t Act; // w0
  const MethodInfo *v6; // x1

  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userEnt = SelfUserGame;
  sub_2213A04(&this->fields.userEnt, SelfUserGame);
  userEnt = this->fields.userEnt;
  if ( userEnt )
  {
    Act = UserGameEntity__getAct(userEnt, 0);
    if ( this->fields.currentAp != Act )
    {
      this->fields.currentAp = Act;
      ApSeedExchangeButton__UpdateExchangeCount(this, v6);
    }
  }
}


void ApSeedExchangeButton__UpdateExchangeCount(ApSeedExchangeButton_o *this, const MethodInfo *method)
{
  ShopEntity_o *shopEntity; // x0
  int32_t CommonConsumeBuyableCount; // w0
  __int64 v5; // x1
  __int64 v6; // x2
  ApSeedExchangeButton_c *v7; // x8
  int32_t v8; // w21
  UILabel_o *convertCount; // x20
  int32_t EXCHENGE_DISP_LIMIT; // w9
  System_String_o *convertLimit; // x0
  __int64 v12; // x1
  bool v13; // w1
  __int64 v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5969E39 & 1) == 0 )
  {
    sub_2213A60(&ApSeedExchangeButton_TypeInfo);
    byte_5969E39 = 1;
  }
  shopEntity = this->fields.shopEntity;
  v14 = 0;
  if ( shopEntity )
  {
    CommonConsumeBuyableCount = ShopEntity__GetCommonConsumeBuyableCount(shopEntity, 0);
    v7 = ApSeedExchangeButton_TypeInfo;
    v8 = CommonConsumeBuyableCount;
    HIDWORD(v14) = CommonConsumeBuyableCount;
    if ( !*(&ApSeedExchangeButton_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ApSeedExchangeButton_TypeInfo, v5, v6);
      v7 = ApSeedExchangeButton_TypeInfo;
    }
    convertCount = this->fields.convertCount;
    EXCHENGE_DISP_LIMIT = v7->static_fields->EXCHENGE_DISP_LIMIT;
    if ( v8 <= EXCHENGE_DISP_LIMIT )
    {
      convertLimit = System_Int32__ToString((int32_t)&v14 + 4, 0);
      if ( convertCount )
      {
        UILabel__set_text(convertCount, convertLimit, 0);
        convertLimit = (System_String_o *)this->fields.convertLimit;
        if ( convertLimit )
        {
          convertLimit = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)convertLimit,
                                              0);
          if ( convertLimit )
          {
            v13 = 0;
            goto LABEL_17;
          }
        }
      }
    }
    else
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v5, v6);
        EXCHENGE_DISP_LIMIT = ApSeedExchangeButton_TypeInfo->static_fields->EXCHENGE_DISP_LIMIT;
      }
      LODWORD(v14) = EXCHENGE_DISP_LIMIT;
      convertLimit = System_Int32__ToString((int32_t)&v14, 0);
      if ( convertCount )
      {
        UILabel__set_text(convertCount, convertLimit, 0);
        convertLimit = (System_String_o *)this->fields.convertLimit;
        if ( convertLimit )
        {
          convertLimit = (System_String_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)convertLimit,
                                              0);
          if ( convertLimit )
          {
            v13 = 1;
LABEL_17:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)convertLimit, v13, 0);
            return;
          }
        }
      }
    }
    sub_2213CDC(convertLimit, v12);
  }
}