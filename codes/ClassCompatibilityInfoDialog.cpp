void ClassCompatibilityInfoDialog___cctor(const MethodInfo *method)
{
  struct ClassCompatibilityInfoDialog_StaticFields *static_fields; // x8

  if ( (byte_5969ED1 & 1) == 0 )
  {
    sub_2213A60(&ClassCompatibilityInfoDialog_TypeInfo);
    byte_5969ED1 = 1;
  }
  static_fields = ClassCompatibilityInfoDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CLOSE_BUTTON_DEFAULT_POSITION_X = 0xC302000000000000LL;
  *(_QWORD *)&static_fields->CLOSE_BUTTON_DEFAULT_FONT_SIZE = 0x160000001ELL;
}


void ClassCompatibilityInfoDialog___ctor(ClassCompatibilityInfoDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5969ED0 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5969ED0 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void ClassCompatibilityInfoDialog__Close(ClassCompatibilityInfoDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassCompatibilityInfoDialog__Close_37340200(this, 0, v2);
}


void ClassCompatibilityInfoDialog__Close_37340200(
        ClassCompatibilityInfoDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_5969ECB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassCompatibilityInfoDialog_EndClose__);
    byte_5969ECB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(&this->fields.closeCallbackFunc, callback);
  v5 = System_Action_TypeInfo;
  this->fields.state = 5;
  v6 = (System_Action_o *)sub_2213CCC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassCompatibilityInfoDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
}


void ClassCompatibilityInfoDialog__EndClose(ClassCompatibilityInfoDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ClassCompatibilityInfoDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_2213A04(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void ClassCompatibilityInfoDialog__EndCloseClassBoardEffectListDialog(
        ClassCompatibilityInfoDialog_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5969ECE & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5969ECE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0, 0);
  this->fields.state = 2;
}


void ClassCompatibilityInfoDialog__EndOpen(ClassCompatibilityInfoDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ClassCompatibilityInfoDialog__Init(ClassCompatibilityInfoDialog_o *this, const MethodInfo *method)
{
  UILabel_o *closeLabel; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5969EC9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5969EC9 = 1;
  }
  closeLabel = this->fields.closeLabel;
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (closeLabel = this->fields.classBoardLabel) == 0)
    || (UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (closeLabel = (UILabel_o *)this->fields.compatibilitySprite) == 0) )
  {
    sub_2213CDC(closeLabel, method);
  }
  UISprite__set_atlas((UISprite_o *)closeLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void ClassCompatibilityInfoDialog__OnClickClassBoard(ClassCompatibilityInfoDialog_o *this, const MethodInfo *method)
{
  _BYTE *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  ClassStatisticsInfo_array *classStatisticsInfos; // x0
  __int64 v10; // x1

  if ( (byte_5969ECD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ClassCompatibilityInfoDialog_EndCloseClassBoardEffectListDialog__);
    sub_2213A60(&Method_ClassCompatibilityInfoDialog_OnClickClassBoard__);
    sub_2213A60(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5969ECD = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_ClassCompatibilityInfoDialog_OnClickClassBoard__;
    this->fields.state = 4;
    if ( (v3[83] & 2) != 0 )
      v3 = (_BYTE *)sub_2213A78(v3);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, *((_QWORD *)v3 + 4));
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ClassCompatibilityInfoDialog_EndCloseClassBoardEffectListDialog__,
      0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v8);
    classStatisticsInfos = (ClassStatisticsInfo_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    if ( classStatisticsInfos )
      classStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                               (UserClassStatisticsMaster_o *)classStatisticsInfos,
                               0);
    if ( !Instance )
      sub_2213CDC(classStatisticsInfos, v10);
    CommonUI__OpenClassBoardEffectListDialog(
      (CommonUI_o *)Instance,
      1,
      0,
      0,
      v6,
      0,
      0,
      0,
      1,
      classStatisticsInfos,
      0,
      0);
  }
}


void ClassCompatibilityInfoDialog__OnClickClose(ClassCompatibilityInfoDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *classBoardButton; // x0
  bool isActiveAndEnabled; // w20
  _QWORD *v5; // x8
  System_Reflection_MethodBase_o *v6; // x0
  struct System_Action_o **p_callbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_5969ECC & 1) == 0 )
  {
    sub_2213A60(&Method_ClassCompatibilityInfoDialog_OnClickClose__);
    byte_5969ECC = 1;
  }
  if ( this->fields.state == 2 )
  {
    classBoardButton = (UnityEngine_Behaviour_o *)this->fields.classBoardButton;
    this->fields.state = 3;
    if ( !classBoardButton )
      sub_2213CDC(0, method);
    isActiveAndEnabled = UnityEngine_Behaviour__get_isActiveAndEnabled(classBoardButton, 0);
    v5 = Method_ClassCompatibilityInfoDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassCompatibilityInfoDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ClassCompatibilityInfoDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, isActiveAndEnabled, 0, 0);
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    v8 = callbackFunc;
    if ( callbackFunc )
    {
      *p_callbackFunc = 0;
      sub_2213A04(p_callbackFunc, 0);
      ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
    }
  }
}


void ClassCompatibilityInfoDialog__Open(
        ClassCompatibilityInfoDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *closeLabel; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  UISprite_o *compatibilitySprite; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  BalanceConfig_c *v15; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  bool IsQuestClear_47284152; // w8
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_GameObject_o *v20; // x20
  ClassCompatibilityInfoDialog_c *v21; // x8
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *classBoardLabel; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_GameObject_o *v27; // x20
  ClassCompatibilityInfoDialog_c *v28; // x8
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x4

  if ( (byte_5969ECA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_ClassCompatibilityInfoDialog_EndOpen__);
    sub_2213A60(&ClassCompatibilityInfoDialog_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3526/*"CLASS_BOARD_EFFECT_DISP_BUTTON"*/);
    sub_2213A60(&StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/);
    byte_5969ECA = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      closeLabel = this->fields.closeLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"COMMON_CONFIRM_CLOSE"*/, 0);
      if ( closeLabel )
      {
        UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
        compatibilitySprite = this->fields.compatibilitySprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10, v11);
        AtlasManager__SetClassChart_47562520(compatibilitySprite, 0);
        v15 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13, v14);
          v15 = BalanceConfig_TypeInfo;
        }
        ClassBoardReleaseQuestId = v15->static_fields->ClassBoardReleaseQuestId;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13, v14);
        IsQuestClear_47284152 = CondType__IsQuestClear_47284152(ClassBoardReleaseQuestId, -1, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( IsQuestClear_47284152 )
        {
          if ( gameObject )
          {
            v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            v21 = ClassCompatibilityInfoDialog_TypeInfo;
            if ( !*(&ClassCompatibilityInfoDialog_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ClassCompatibilityInfoDialog_TypeInfo, v18, v19);
              v21 = ClassCompatibilityInfoDialog_TypeInfo;
            }
            GameObjectExtensions__SetLocalPositionX(v20, v21->static_fields->CLOSE_BUTTON_CLASS_BOARD_POSITION_X, 0);
            gameObject = (UnityEngine_GameObject_o *)this->fields.closeLabel;
            if ( gameObject )
            {
              UILabel__set_fontSize(
                (UILabel_o *)gameObject,
                ClassCompatibilityInfoDialog_TypeInfo->static_fields->CLOSE_BUTTON_CLASS_BOARD_FONT_SIZE,
                0);
              gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardButton;
              if ( gameObject )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                  classBoardLabel = this->fields.classBoardLabel;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3526/*"CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                             0);
                  if ( classBoardLabel )
                  {
                    UILabel__set_text(classBoardLabel, (System_String_o *)gameObject, 0);
LABEL_32:
                    this->fields.state = 1;
                    v29 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                    System_Action___ctor(v29, (Il2CppObject *)this, Method_ClassCompatibilityInfoDialog_EndOpen__, 0);
                    BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0, v30);
                    return;
                  }
                }
              }
            }
          }
        }
        else if ( gameObject )
        {
          v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          v28 = ClassCompatibilityInfoDialog_TypeInfo;
          if ( !*(&ClassCompatibilityInfoDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ClassCompatibilityInfoDialog_TypeInfo, v25, v26);
            v28 = ClassCompatibilityInfoDialog_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(v27, v28->static_fields->CLOSE_BUTTON_DEFAULT_POSITION_X, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.closeLabel;
          if ( gameObject )
          {
            UILabel__set_fontSize(
              (UILabel_o *)gameObject,
              ClassCompatibilityInfoDialog_TypeInfo->static_fields->CLOSE_BUTTON_DEFAULT_FONT_SIZE,
              0);
            gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardButton;
            if ( gameObject )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
              if ( gameObject )
              {
                UnityEngine_GameObject__SetActive(gameObject, 0, 0);
                goto LABEL_32;
              }
            }
          }
        }
      }
    }
    sub_2213CDC(gameObject, v6);
  }
}


System_String_o *ClassCompatibilityInfoDialog__get_closeBtnPath(
        ClassCompatibilityInfoDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_5969ECF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7974/*"InfoDialog/CloseButton"*/);
    byte_5969ECF = 1;
  }
  return (System_String_o *)StringLiteral_7974/*"InfoDialog/CloseButton"*/;
}