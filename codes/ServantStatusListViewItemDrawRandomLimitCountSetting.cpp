void ServantStatusListViewItemDrawRandomLimitCountSetting___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_o *this,
        const MethodInfo *method)
{
  this->fields.MASK_POS_ALL.fields.y = 0.0;
  this->fields.MASK_LABEL_POS_ALL.fields.x = 0.0;
  this->fields.MASK_LABEL_POS_ALL.fields.y = -11.0;
  *(_OWORD *)&this->fields.MASK_LABEL_MAX_WIDTH = xmmword_E9DBB0;
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
    sub_2213CDC(baseCollider, method);
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
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *ComponentInChildren_object__58855044; // x21
  __int64 v14; // x2
  float *v15; // x8
  float v16; // s8
  float v17; // s9
  float v18; // s10
  float v19; // s11
  float *v20; // x8
  float v21; // s12
  float v22; // s13
  float v23; // s14
  float v24; // s15
  float v25; // s0 OVERLAPPED
  float v26; // s1
  float v27; // s2
  float v28; // s3

  if ( (byte_596D363 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_596D363 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetButton, text);
  Component_object = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)targetButton, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    if ( !targetButton )
      goto LABEL_38;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)targetButton,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !Component_object )
      goto LABEL_38;
    v10 = &StringLiteral_18211/*"btn_bg_21"*/;
    if ( !isSelectedButton )
      v10 = &StringLiteral_18209/*"btn_bg_20"*/;
    UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)*v10, 0);
    ComponentInChildren_object__58855044 = UnityEngine_Component__GetComponentInChildren_object__58855044(
                                             (UnityEngine_Component_o *)targetButton,
                                             (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_object__58855044, 0, 0) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v14);
      if ( !byte_596ABD5 )
      {
        sub_2213A60(&LocalizationManager_TypeInfo);
        byte_596ABD5 = 1;
      }
      Component_object = LocalizationManager_TypeInfo;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v14);
        Component_object = LocalizationManager_TypeInfo;
      }
      v15 = (float *)*((_QWORD *)Component_object + 23);
      v16 = v15[20];
      v17 = v15[21];
      v18 = v15[22];
      v19 = v15[23];
      if ( !byte_596ABD6 )
      {
        sub_2213A60(&LocalizationManager_TypeInfo);
        Component_object = LocalizationManager_TypeInfo;
        byte_596ABD6 = 1;
      }
      if ( !*((_DWORD *)Component_object + 57) )
      {
        j_il2cpp_runtime_class_init_0(Component_object, v9, v14);
        Component_object = LocalizationManager_TypeInfo;
      }
      if ( ComponentInChildren_object__58855044 )
      {
        v20 = (float *)*((_QWORD *)Component_object + 23);
        v21 = v20[24];
        v22 = v20[25];
        v23 = v20[26];
        v24 = v20[27];
        UILabel__set_text((UILabel_o *)ComponentInChildren_object__58855044, text, 0);
        if ( isSelectedButton )
          v25 = v21;
        else
          v25 = v16;
        if ( isSelectedButton )
          v26 = v22;
        else
          v26 = v17;
        if ( isSelectedButton )
          v27 = v23;
        else
          v27 = v18;
        if ( isSelectedButton )
          v28 = v24;
        else
          v28 = v19;
        UILabel__set_effectColor((UILabel_o *)ComponentInChildren_object__58855044, *(UnityEngine_Color_o *)&v25, 0);
        return;
      }
LABEL_38:
      sub_2213CDC(Component_object, v9);
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
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t RandomLimitCount; // w22
  System_String_o *v9; // x23
  System_String_o *v10; // x0
  ServantStatusListViewItem_o *v11; // x2
  const MethodInfo *v12; // x6
  ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *supportServantInfo; // x21
  int32_t RandomLimitCountSupport; // w22
  System_String_o *v15; // x23
  System_String_o *v16; // x0
  ServantStatusListViewItem_o *v17; // x2
  const MethodInfo *v18; // x6
  __int64 v19; // x1
  __int64 v20; // x2
  UIWidget_o *transformNameLabel; // x21
  UnityEngine_Component_o *gameObject; // x0
  __int64 v23; // x1
  UIWidget_o *transformNameSprite; // x21
  UILabel_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  float baseColliderHeightBase; // s8
  int32_t transformNameAddHeight; // s9
  UnityEngine_Object_o *baseCollider; // x21
  float v31; // s1
  UnityEngine_GameObject_o *v32; // x0
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *v34; // x21
  float v35; // s1
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o TransformNameLabelColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TransformNameSpriteColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596D361 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12484/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/);
    sub_2213A60(&StringLiteral_12485/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_12488/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/);
    sub_2213A60(&StringLiteral_12489/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/);
    byte_596D361 = 1;
  }
  if ( item )
  {
    myServantInfo = this->fields.myServantInfo;
    RandomLimitCount = ServantStatusListViewItem__GetRandomLimitCount(item, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12484/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN"*/, 0);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12485/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_OWN_EXPLANATION"*/, 0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      myServantInfo,
      v11,
      RandomLimitCount,
      v9,
      v10,
      v12);
    supportServantInfo = this->fields.supportServantInfo;
    RandomLimitCountSupport = ServantStatusListViewItem__GetRandomLimitCountSupport(item, 0);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_12488/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT"*/, 0);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_SUPPORT_EXPLANATION"*/, 0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupCategoryInfo(
      this,
      supportServantInfo,
      v17,
      RandomLimitCountSupport,
      v15,
      v16,
      v18);
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
              v25 = this->fields.transformNameLabel;
              gameObject = (UnityEngine_Component_o *)ServantStatusListViewItem__GetTransformName(item, 0);
              if ( v25 )
              {
                UILabel__set_text(v25, (System_String_o *)gameObject, 0);
                transformNameAddHeight = this->fields.transformNameAddHeight;
                baseColliderHeightBase = this->fields.baseColliderHeightBase;
                baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
                if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
                if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
                {
                  gameObject = (UnityEngine_Component_o *)this->fields.baseCollider;
                  if ( !gameObject )
                    goto LABEL_34;
                  size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0);
                  gameObject = (UnityEngine_Component_o *)this->fields.baseCollider;
                  if ( !gameObject )
                    goto LABEL_34;
                  v31 = baseColliderHeightBase + (float)transformNameAddHeight;
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
                    v32 = UnityEngine_Component__get_gameObject(gameObject, 0);
                    GameObjectExtensions__SetLocalPositionY(
                      v32,
                      this->fields.lineSpritePosYBase - (float)(this->fields.transformNameAddHeight / 2),
                      0);
LABEL_33:
                    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask(this, item, v33);
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
      v34 = (UnityEngine_Object_o *)this->fields.baseCollider;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
      if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.baseCollider;
        if ( !gameObject )
          goto LABEL_34;
        v38 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.baseCollider;
        if ( !gameObject )
          goto LABEL_34;
        v35 = this->fields.baseColliderHeightBase;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)gameObject, v38, 0);
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
          v36 = UnityEngine_Component__get_gameObject(gameObject, 0);
          GameObjectExtensions__SetLocalPositionY(v36, this->fields.lineSpritePosYBase, 0);
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
    sub_2213CDC(gameObject, v23);
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
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x4
  System_String_o *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  bool RandomLimitCountOwn; // w23
  System_String_o **v21; // x8
  __int64 v22; // x1
  __int64 v23; // x2
  bool RandomLimitCountFriend; // w22
  System_String_o **v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  UICommonButton_o *SettingRandomOn; // x22
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v29; // x0
  const MethodInfo *v30; // x4
  __int64 v31; // x1
  __int64 v32; // x2
  UICommonButton_o *SettingRandomOff; // x22
  ServantStatusListViewItemDrawRandomLimitCountSetting_o *v34; // x0
  const MethodInfo *v35; // x4
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Object_o *explanationLabel; // x21

  v11 = this;
  if ( (byte_596D362 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&StringLiteral_12487/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/);
    sub_2213A60(&StringLiteral_12482/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/);
    sub_2213A60(&StringLiteral_12486/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_2213A60(&StringLiteral_12481/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/);
    byte_596D362 = 1;
  }
  if ( !target )
    goto LABEL_35;
  NameTxt = (UnityEngine_Object_o *)target->fields.NameTxt;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, target, item);
  if ( !UnityEngine_Object__op_Equality(NameTxt, 0, 0) )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.NameTxt;
    if ( !this )
      goto LABEL_35;
    UILabel__set_text((UILabel_o *)this, buttonText, 0);
    if ( v11->fields.myServantInfo == target )
    {
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v14, v15);
      RandomLimitCountOwn = OptionManager__GetRandomLimitCountOwn(0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
      v21 = (System_String_o **)&StringLiteral_12482/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      if ( !RandomLimitCountOwn )
        v21 = (System_String_o **)&StringLiteral_12481/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      v13 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(*v21, 0);
      v17 = (System_String_o *)v13;
    }
    else
    {
      v17 = (System_String_o *)StringLiteral_1/*""*/;
    }
    if ( v11->fields.supportServantInfo == target )
    {
      if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v14, v17);
      RandomLimitCountFriend = OptionManager__GetRandomLimitCountFriend(0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
      v25 = (System_String_o **)&StringLiteral_12482/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_ON_BUTTON"*/;
      if ( !RandomLimitCountFriend )
        v25 = (System_String_o **)&StringLiteral_12481/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_All_OFF_BUTTON"*/;
      v13 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(*v25, 0);
      v17 = (System_String_o *)v13;
    }
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v13,
      target->fields.SettingAll,
      v17,
      selectedButtonIndex == 0,
      v16);
    SettingRandomOn = target->fields.SettingRandomOn;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
    v29 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_12487/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_ON_BUTTON"*/,
                                                                      0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v29,
      SettingRandomOn,
      (System_String_o *)v29,
      selectedButtonIndex == 1,
      v30);
    SettingRandomOff = target->fields.SettingRandomOff;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
    v34 = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)LocalizationManager__Get(
                                                                      (System_String_o *)StringLiteral_12486/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_RANDOM_OFF_BUTTON"*/,
                                                                      0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetButtonText(
      v34,
      SettingRandomOff,
      (System_String_o *)v34,
      selectedButtonIndex == 2,
      v35);
    explanationLabel = (UnityEngine_Object_o *)target->fields.explanationLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36, v37);
    if ( UnityEngine_Object__op_Inequality(explanationLabel, 0, 0) )
    {
      this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)target->fields.explanationLabel;
      if ( this )
      {
        UILabel__set_text((UILabel_o *)this, explanationText, 0);
        return;
      }
LABEL_35:
      sub_2213CDC(this, target);
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
  bool IsSaveTransformServant; // w8
  const MethodInfo *v10; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_596D364 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596D364 = 1;
  }
  if ( item )
  {
    userSvtEntity = item->fields.userSvtEntity;
    if ( userSvtEntity )
    {
      v6 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.currentCryptoKey;
      v7 = *(_QWORD *)&userSvtEntity->fields.limitCount.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, item, method);
      *(_QWORD *)&v11.fields.currentCryptoKey = v6;
      *(_QWORD *)&v11.fields.fakeValue = v7;
      v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v11, 0) == 0;
    }
    else
    {
      v8 = 1;
    }
    IsSaveTransformServant = ServantStatusListViewItem__get_IsSaveTransformServant(item, 0);
    ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_43342128(this, v8, IsSaveTransformServant, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusListViewItemDrawRandomLimitCountSetting__SetupMask_43342128(
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
  struct UnityEngine_Vector2_StaticFields *v11; // x9
  float y; // s12
  float x; // s13
  System_String_o *v14; // x22
  __int64 v15; // x2
  float v16; // s10
  float v17; // s11
  float v18; // s8
  float v19; // s9
  int32_t v20; // w1
  int32_t v21; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_Vector2_o v24; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_596D365 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_2213A60(&StringLiteral_12483/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/);
    byte_596D365 = 1;
  }
  baseSprite = v6->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_43;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_43;
  UIWidget__set_height((UIWidget_o *)this, baseSprite->fields.mHeight, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_43;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  v8 = this;
  if ( !byte_59699C0 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  if ( !v8 )
    goto LABEL_43;
  v26.fields.z = 0.0;
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  v26.fields.x = static_fields->zeroVector.fields.x;
  v26.fields.y = static_fields->zeroVector.fields.y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v8, v26, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.informationLabel;
  if ( !this )
    goto LABEL_43;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  v10 = this;
  if ( !byte_5969AE0 )
  {
    this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v10 )
    goto LABEL_43;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v10,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskBase;
  if ( !maskType )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
LABEL_43:
    sub_2213CDC(this, *(_QWORD *)&maskType);
  }
  if ( !this )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.lineSprite;
  if ( !this )
    goto LABEL_43;
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)UnityEngine_Component__get_transform(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0);
  if ( !this )
    goto LABEL_43;
  UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.informationLabel;
  if ( !this )
    goto LABEL_43;
  v11 = UnityEngine_Vector2_TypeInfo->static_fields;
  x = v11->zeroVector.fields.x;
  y = v11->zeroVector.fields.y;
  v14 = **(System_String_o ***)(qword_5984390 + 184);
  UILabel__set_overflowMethod((UILabel_o *)this, 2, 0);
  if ( maskType != 1 )
  {
    v18 = y;
    v19 = x;
    v16 = y;
    v17 = x;
    if ( !isSaveTransformServant )
      goto LABEL_29;
LABEL_28:
    y = y + (float)v6->fields.transformNameAddHeight;
    goto LABEL_29;
  }
  x = v6->fields.MASK_SIZE_ALL.fields.x;
  y = v6->fields.MASK_SIZE_ALL.fields.y;
  v17 = v6->fields.MASK_POS_ALL.fields.x;
  v16 = v6->fields.MASK_POS_ALL.fields.y;
  v19 = v6->fields.MASK_LABEL_POS_ALL.fields.x;
  v18 = v6->fields.MASK_LABEL_POS_ALL.fields.y;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&maskType, v15);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SERVANT_STATUS_RANDOM_LIMIT_COUNT_SETTING_INFO_COMBINE"*/, 0);
  if ( isSaveTransformServant )
    goto LABEL_28;
LABEL_29:
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_43;
  v20 = x == INFINITY ? 0x80000000 : (int)x;
  UIWidget__set_width((UIWidget_o *)this, v20, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_43;
  v21 = y == INFINITY ? 0x80000000 : (int)y;
  UIWidget__set_height((UIWidget_o *)this, v21, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_43;
  UIWidget__ResizeCollider((UIWidget_o *)this, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.maskSprite;
  if ( !this )
    goto LABEL_43;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v24.fields.x = v17;
  v24.fields.y = v16;
  GameObjectExtensions__SetLocalPosition_42891412(gameObject, v24, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.informationLabel;
  if ( !this )
    goto LABEL_43;
  v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v25.fields.x = v19;
  v25.fields.y = v18;
  GameObjectExtensions__SetLocalPosition_42891412(v23, v25, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.informationLabel;
  if ( !this )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)this, v14, 0);
  this = (ServantStatusListViewItemDrawRandomLimitCountSetting_o *)v6->fields.informationLabel;
  if ( !this )
    goto LABEL_43;
  UILabel__SetCondensedScale((UILabel_o *)this, v6->fields.MASK_LABEL_MAX_WIDTH, 0, 0);
}


void ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo___ctor(
        ServantStatusListViewItemDrawRandomLimitCountSetting_CategoryInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}