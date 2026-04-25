void ServantStatusListViewItemDrawRandomLimitCountSetting___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_POS_ALL.fields.y = 0.0;
  this->fields.MASK_LABEL_POS_ALL.fields.x = 0.0;
  this->fields.MASK_LABEL_POS_ALL.fields.y = -11.0;
  *(_OWORD *)&this->fields.MASK_LABEL_MAX_WIDTH = xmmword_D25E40;
  this->fields.transformNameAddHeight = 20;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusListViewItemDrawRandomLimitCountSetting__Awake(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  UnityEngine_BoxCollider_o *baseCollider; // x0
  struct UISprite_o *baseSprite; // x8
  UnityEngine_GameObject_o *titleBase; // x0
  float LocalPositionY; // s0
  UnityEngine_GameObject_o *buttonBase; // x0
  float v8; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  baseCollider = this->fields.baseCollider;
  if ( !baseCollider )
    goto LABEL_5;
  size = UnityEngine_BoxCollider__get_size(baseCollider, 0);
  baseSprite = this->fields.baseSprite;
  this->fields.baseColliderHeightBase = size.fields.y;
  if ( !baseSprite )
    goto LABEL_5;
  titleBase = this->fields.titleBase;
  this->fields.baseSpriteHeightBase = baseSprite->fields.mHeight;
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(titleBase, 0);
  buttonBase = this->fields.buttonBase;
  this->fields.titleRootPosYBase = LocalPositionY;
  v8 = GameObjectExtensions__GetLocalPositionY(buttonBase, 0);
  baseCollider = (UnityEngine_BoxCollider_o *)this->fields.lineSprite;
  this->fields.buttonBasePosYBase = v8;
  if ( !baseCollider )
LABEL_5:
    sub_1CE6958(baseCollider, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)baseCollider, 0);
  this->fields.lineSpritePosYBase = GameObjectExtensions__GetLocalPositionY(gameObject, 0);
}


int32_t ServantStatusListViewItemDrawRandomLimitCountSetting__GetKind(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  return 19;
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        UICommonButton_o *targetButton,
        System_String_o *text,
        bool isSelectedButton,
        const MethodInfo *method)
{
  void *Component_object; // x0
  __int64 v9; // x1
  __int64 *v10; // x8
  Il2CppObject *ComponentInChildren_object__52407772; // x21
  float *v12; // x8
  float v13; // s10
  float v14; // s11
  float v15; // s8
  float v16; // s9
  float *v17; // x8
  float v18; // s12
  float v19; // s13
  float v20; // s14
  float v21; // s15
  float v22; // s0 OVERLAPPED
  float v23; // s1
  float v24; // s2
  float v25; // s3

  if ( (byte_4E01ABA & 1) == 0 )
  {
    sub_1CE6700(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1CE6700(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_17633/*"btn_bg_20"*/);
    sub_1CE6700(&StringLiteral_17635/*"btn_bg_21"*/);
    byte_4E01ABA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_38;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)targetButton,
                         (const MethodInfo_31FAB78 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v10 = &StringLiteral_17635/*"btn_bg_21"*/;
    if ( !isSelectedButton )
      v10 = &StringLiteral_17633/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v10, 0);
    ComponentInChildren_object__52407772 = UnityEngine_Component__GetComponentInChildren_object__52407772(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_31FADDC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__52407772, 0, 0) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4DFF120 )
      {
        sub_1CE6700(&LocalizationManager_TypeInfo);
        byte_4DFF120 = 1;
      }
      Component_object = LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
      }
      v12 = (float *)*((_QWORD *)Component_object + 23);
      v14 = v12[20];
      v13 = v12[21];
      v16 = v12[22];
      v15 = v12[23];
      if ( !byte_4DFF121 )
      {
        sub_1CE6700(&LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
        byte_4DFF121 = 1;
      }
      if ( !*((_DWORD *)Component_object + 56) )
      {
        j_il2cpp_runtime_class_init_0(Component_object);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__52407772 )
      {
        v17 = (float *)*((_QWORD *)Component_object + 23);
        v18 = v17[24];
        v19 = v17[25];
        v20 = v17[26];
        v21 = v17[27];
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__52407772, text, 0);
        if ( isSelectedButton )
          v22 = v18;
        else
          v22 = v14;
        if ( isSelectedButton )
          v23 = v19;
        else
          v23 = v13;
        if ( isSelectedButton )
          v24 = v20;
        else
          v24 = v16;
        if ( isSelectedButton )
          v25 = v21;
        else
          v25 = v15;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__52407772, *(UnityEngine_Color_o *)&v22, 0);
        return;
      }
LABEL_38:
      sub_1CE6958(Component_object, v9);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSetting__SetItem(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  this->fields.dispMode = mode;
  if ( item )
  {
    if ( mode )
      ServantStatusListViewItemDrawRandomLimitCountSetting__Setup(this, item, *(const MethodInfo **)&mode);
  }
}


void ServantStatusListViewItemDrawRandomLimitCountSetting__Setup(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *myServantInfo; // x21
  int32_t RandomLimitCount; // w22
  System_String_o *v7; // x23
  System_String_o *v8; // x0
  ServantStatusListViewItem_o *v9; // x2
  const MethodInfo *v10; // x6
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *supportServantInfo; // x21
  int32_t RandomLimitCountSupport; // w22
  System_String_o *v13; // x23
  System_String_o *v14; // x0
  ServantStatusListViewItem_o *v15; // x2
  const MethodInfo *v16; // x6
  UIWidget_o *transformNameLabel; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v19; // x1
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v21; // x21
  float baseColliderHeightBase; // s8
  int32_t transformNameAddHeight; // s9
  UnityEngine_Object_o *baseCollider; // x21
  float v25; // s1
  UnityEngine_GameObject_o *v26; // x0
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *v28; // x21
  float v29; // s1
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E01AB8 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&StringLiteral_12094/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/);
    sub_1CE6700(&StringLiteral_12095/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/);
    sub_1CE6700(&StringLiteral_12098/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/);
    sub_1CE6700(&StringLiteral_12099/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/);
    byte_4E01AB8 = 1;
  }
  if ( item )
  {
    myServantInfo = this->fields.myServantInfo;
    RandomLimitCount = ServantStatusListViewItem__GetRandomLimitCount(item, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_12094/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, 0);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_12095/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, 0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      myServantInfo,
      v9,
      RandomLimitCount,
      v7,
      v8,
      v10);
    supportServantInfo = this->fields.supportServantInfo;
    RandomLimitCountSupport = ServantStatusListViewItem__GetRandomLimitCountSupport(item, 0);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_12098/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, 0);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12099/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, 0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      supportServantInfo,
      v15,
      RandomLimitCountSupport,
      v13,
      v14,
      v16);
    if ( ServantStatusListViewItem__get_IsSaveTransformServant(item, 0) )
    {
      transformNameLabel = (UIWidget_o *)this->fields.transformNameLabel;
      TransformNameLabelColor = ServantStatusListViewItem__get_TransformNameLabelColor(item, 0);
      if ( transformNameLabel )
      {
        UIWidget__set_color(transformNameLabel, TransformNameLabelColor, 0);
        transformNameSprite = (UIWidget_o *)this->fields.transformNameSprite;
        TransformNameSpriteColor = ServantStatusListViewItem__get_TransformNameSpriteColor(item, 0);
        if ( transformNameSprite )
        {
          UIWidget__set_color(transformNameSprite, TransformNameSpriteColor, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.transformNameSprite;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              v21 = this->fields.transformNameLabel;
              gameObject = (UnityEngine_Component_o *)ServantStatusListViewItem__GetTransformName(item, 0);
              if ( v21 )
              {
                UILabel__set_text(v21, (System_String_o *)gameObject, 0);
                transformNameAddHeight = this->fields.transformNameAddHeight;
                baseColliderHeightBase = this->fields.baseColliderHeightBase;
                baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
                {
                  gameObject = (UnityEngine_Component_o *)this->fields.baseCollider;
                  if ( !gameObject )
                    goto LABEL_34;
                  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0);
                  gameObject = (UnityEngine_Component_o *)this->fields.baseCollider;
                  if ( !gameObject )
                    goto LABEL_34;
                  v25 = baseColliderHeightBase + (float)transformNameAddHeight;
                  UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, size, 0);
                }
                gameObject = (UnityEngine_Component_o *)this->fields.baseSprite;
                if ( gameObject )
                {
                  UIWidget__set_height(
                    (UIWidget_o *)gameObject,
                    this->fields.baseSpriteHeightBase + this->fields.transformNameAddHeight,
                    0);
                  GameObjectExtensions__SetLocalPositionY(
                    this->fields.titleBase,
                    this->fields.titleRootPosYBase + (float)(this->fields.transformNameAddHeight / 2),
                    0);
                  GameObjectExtensions__SetLocalPositionY(
                    this->fields.buttonBase,
                    this->fields.buttonBasePosYBase - (float)(this->fields.transformNameAddHeight / 2),
                    0);
                  gameObject = (UnityEngine_Component_o *)this->fields.lineSprite;
                  if ( gameObject )
                  {
                    v26 = UnityEngine_Component__get_gameObject(gameObject, 0);
                    GameObjectExtensions__SetLocalPositionY(
                      v26,
                      this->fields.lineSpritePosYBase - (float)(this->fields.transformNameAddHeight / 2),
                      0);
LABEL_33:
                    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(this, item, v27);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v28 = (UnityEngine_Object_o *)this->fields.baseCollider;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.baseCollider;
        if ( !gameObject )
          goto LABEL_34;
        v32 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.baseCollider;
        if ( !gameObject )
          goto LABEL_34;
        v29 = this->fields.baseColliderHeightBase;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v32, 0);
      }
      gameObject = (UnityEngine_Component_o *)this->fields.baseSprite;
      if ( gameObject )
      {
        UIWidget__set_height((UIWidget_o *)gameObject, this->fields.baseSpriteHeightBase, 0);
        GameObjectExtensions__SetLocalPositionY(this->fields.titleBase, this->fields.titleRootPosYBase, 0);
        GameObjectExtensions__SetLocalPositionY(this->fields.buttonBase, this->fields.buttonBasePosYBase, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.lineSprite;
        if ( gameObject )
        {
          v30 = UnityEngine_Component__get_gameObject(gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v30, this->fields.lineSpritePosYBase, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.transformNameSprite;
          if ( gameObject )
          {
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
              goto LABEL_33;
            }
          }
        }
      }
    }
LABEL_34:
    sub_1CE6958(gameObject, v19);
  }
}


void ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *target,
        ServantStatusListViewItem_o *item,
        int32_t selectedButtonIndex,
        System_String_o *buttonText,
        System_String_o *explanationText,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v11; // x22
  UnityEngine_Object_o *NameTxt; // x24
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v13; // x0
  const MethodInfo *v14; // x4
  System_String_o *v15; // x2
  bool RandomLimitCountOwn; // w23
  System_String_o **v17; // x8
  bool RandomLimitCountFriend; // w22
  System_String_o **v19; // x8
  UICommonButton_o *SettingRandomOn; // x22
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v21; // x0
  const MethodInfo *v22; // x4
  UICommonButton_o *SettingRandomOff; // x22
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v24; // x0
  const MethodInfo *v25; // x4
  UnityEngine_Object_o *explanationLabel; // x21

  v11 = this;
  if ( (byte_4E01AB9 & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&OptionManager_TypeInfo);
    sub_1CE6700(&StringLiteral_12097/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/);
    sub_1CE6700(&StringLiteral_12092/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/);
    sub_1CE6700(&StringLiteral_12096/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1CE6700(&StringLiteral_12091/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/);
    byte_4E01AB9 = 1;
  }
  if ( !target )
    goto LABEL_35;
  NameTxt = (UnityEngine_Object_o *)target->fields.NameTxt;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(NameTxt, 0, 0) )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.NameTxt;
    if ( !this )
      goto LABEL_35;
    UILabel__set_text((UILabel_o *)this, buttonText, 0);
    if ( target == v11->fields.myServantInfo )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v17 = (System_String_o **)&StringLiteral_12092/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      if ( !RandomLimitCountOwn )
        v17 = (System_String_o **)&StringLiteral_12091/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      v13 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(*v17, 0);
      v15 = (System_String_o *)v13;
    }
    else
    {
      v15 = (System_String_o *)StringLiteral_1/*""*/;
    }
    if ( target == v11->fields.supportServantInfo )
    {
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend(0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = (System_String_o **)&StringLiteral_12092/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      if ( !RandomLimitCountFriend )
        v19 = (System_String_o **)&StringLiteral_12091/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      v13 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(*v19, 0);
      v15 = (System_String_o *)v13;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v13,
      target->fields.SettingAll,
      v15,
      selectedButtonIndex == 0,
      v14);
    SettingRandomOn = target->fields.SettingRandomOn;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_12097/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/,
                                                                      0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v21,
      SettingRandomOn,
      (System_String_o *)v21,
      selectedButtonIndex == 1,
      v22);
    SettingRandomOff = target->fields.SettingRandomOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_12096/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/,
                                                                      0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v24,
      SettingRandomOff,
      (System_String_o *)v24,
      selectedButtonIndex == 2,
      v25);
    explanationLabel = (UnityEngine_Object_o *)target->fields.explanationLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(explanationLabel, 0, 0) )
    {
      this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.explanationLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, explanationText, 0);
        return;
      }
LABEL_35:
      sub_1CE6958(this, target);
    }
  }
}


void ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  struct UserServantEntity_o *userSvtEntity; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w21
  bool IsSaveTransformServant; // w2
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_4E01ABB & 1) == 0 )
  {
    sub_1CE6700(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E01ABB = 1;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v11.fields.currentCryptoKey = v7;
      *(_QWORD *)&v11.fields.fakeValue = v6;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50038008(v11, 0) == 0;
    }
    else
    {
      v8 = 1;
    }
    IsSaveTransformServant = ServantStatusListViewItem__get_IsSaveTransformServant(item, 0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_38134116(this, v8, IsSaveTransformServant, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_38134116(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        int32_t maskType,
        bool isSaveTransformServant,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v6; // x19
  struct UISprite_o *baseSprite; // x8
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v8; // x22
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v10; // x22
  struct UnityEngine_Vector2_StaticFields *v11; // x8
  float y; // s8
  float x; // s13
  float v14; // s9
  float v15; // s12
  System_String_o *Empty; // x22
  float v17; // s10
  float v18; // s11
  int32_t v19; // w1
  int32_t v20; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Vector2_o v23; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v24; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4E01ABC & 1) == 0 )
  {
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&string_TypeInfo);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1CE6700(&StringLiteral_12093/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/);
    byte_4E01ABC = 1;
  }
  baseSprite = v6->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_42;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_42;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_42;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  v8 = this;
  if ( !byte_4DFDF89 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1CE6700(&UnityEngine_Vector2_TypeInfo);
    byte_4DFDF89 = 1;
  }
  if ( !v8 )
    goto LABEL_42;
  v25.fields.z = 0.0;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v25.fields.x = static_fields->zeroVector.fields.x;
  v25.fields.y = static_fields->zeroVector.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v8, v25, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.informationLabel;
  if ( !this )
    goto LABEL_42;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  v10 = this;
  if ( !byte_4DFE0A9 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
    byte_4DFE0A9 = 1;
  }
  if ( !v10 )
    goto LABEL_42;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v10,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskBase;
  if ( !this )
    goto LABEL_42;
  if ( !maskType )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.lineSprite;
  if ( !this )
    goto LABEL_42;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  if ( !this )
    goto LABEL_42;
  UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  if ( !byte_4DFDF89 )
  {
    sub_1CE6700(&UnityEngine_Vector2_TypeInfo);
    byte_4DFDF89 = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.informationLabel;
  if ( !this )
LABEL_42:
    sub_1CE6958(this, *(_QWORD *)&maskType);
  v11 = UnityEngine_Vector2_TypeInfo->static_fields;
  x = v11->zeroVector.fields.x;
  y = v11->zeroVector.fields.y;
  v14 = v11->zeroVector.fields.x;
  v15 = y;
  Empty = string_TypeInfo->static_fields->Empty;
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
  if ( maskType != 1 )
  {
    v17 = y;
    v18 = x;
    if ( !isSaveTransformServant )
      goto LABEL_28;
LABEL_27:
    v15 = v15 + (float)v6->fields.transformNameAddHeight;
    goto LABEL_28;
  }
  x = v6->fields.MASK_SIZE_ALL.fields.x;
  v15 = v6->fields.MASK_SIZE_ALL.fields.y;
  v18 = v6->fields.MASK_POS_ALL.fields.x;
  v17 = v6->fields.MASK_POS_ALL.fields.y;
  v14 = v6->fields.MASK_LABEL_POS_ALL.fields.x;
  y = v6->fields.MASK_LABEL_POS_ALL.fields.y;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Empty = LocalizationManager__Get((System_String_o *)StringLiteral_12093/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, 0);
  if ( isSaveTransformServant )
    goto LABEL_27;
LABEL_28:
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_42;
  v19 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)this, v19, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_42;
  v20 = v15 == INFINITY ? 0x80000000 : (int)v15;
  UIWidget__set_height((UIWidget_o *)this, v20, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_42;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v23.fields.x = v18;
  v23.fields.y = v17;
  GameObjectExtensions__SetLocalPosition_37161064(gameObject, v23, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.informationLabel;
  if ( !this )
    goto LABEL_42;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v24.fields.x = v14;
  v24.fields.y = y;
  GameObjectExtensions__SetLocalPosition_37161064(v22, v24, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.informationLabel;
  if ( !this )
    goto LABEL_42;
  UILabel__set_text((UILabel_o *)this, Empty, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.informationLabel;
  if ( !this )
    goto LABEL_42;
  UILabel__SetCondensedScale((UILabel_o *)this, v6->fields.MASK_LABEL_MAX_WIDTH, 0, 0);
}


void ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}