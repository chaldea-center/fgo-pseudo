void ClassCompatibilityInfoDialog___cctor(const MethodInfo *method)
{
  struct ClassCompatibilityInfoDialog_StaticFields *static_fields; // x8

  if ( (byte_4CB0009 & 1) == 0 )
  {
    sub_1C6BA08(&ClassCompatibilityInfoDialog_TypeInfo);
    byte_4CB0009 = 1;
  }
  static_fields = ClassCompatibilityInfoDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CLOSE_BUTTON_DEFAULT_POSITION_X = 0xC302000000000000LL;
  *(_QWORD *)&static_fields->CLOSE_BUTTON_DEFAULT_FONT_SIZE = 0x160000001ELL;
}


void ClassCompatibilityInfoDialog___ctor(ClassCompatibilityInfoDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CB0008 & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB0008 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void ClassCompatibilityInfoDialog__Close(ClassCompatibilityInfoDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassCompatibilityInfoDialog__Close_31382976(this, 0, v2);
}


void ClassCompatibilityInfoDialog__Close_31382976(
        ClassCompatibilityInfoDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CB0003 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassCompatibilityInfoDialog_EndClose__);
    byte_4CB0003 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C6B9AC(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 5;
  v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassCompatibilityInfoDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
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
    sub_1C6B9AC(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v4->fields.invoke_impl)(v4->fields.method_code, v4->fields.method);
  }
}


void ClassCompatibilityInfoDialog__EndCloseClassBoardEffectListDialog(
        ClassCompatibilityInfoDialog_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB0006 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB0006 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
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

  if ( (byte_4CB0001 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB0001 = 1;
  }
  closeLabel = this->fields.closeLabel;
  if ( !closeLabel
    || (UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (closeLabel = this->fields.classBoardLabel) == 0)
    || (UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (closeLabel = (UILabel_o *)this->fields.compatibilitySprite) == 0) )
  {
    sub_1C6BC60(closeLabel, method);
  }
  UISprite__set_atlas((UISprite_o *)closeLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void ClassCompatibilityInfoDialog__OnClickClassBoard(ClassCompatibilityInfoDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v6; // x21
  ClassStatisticsInfo_array *classStatisticsInfos; // x0
  __int64 v8; // x1

  if ( (byte_4CB0005 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassCompatibilityInfoDialog_EndCloseClassBoardEffectListDialog__);
    sub_1C6BA08(&Method_ClassCompatibilityInfoDialog_OnClickClassBoard__);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB0005 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 4;
    v3 = Method_ClassCompatibilityInfoDialog_OnClickClassBoard__;
    if ( (*((_BYTE *)Method_ClassCompatibilityInfoDialog_OnClickClassBoard__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ClassCompatibilityInfoDialog_OnClickClassBoard__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ClassCompatibilityInfoDialog_EndCloseClassBoardEffectListDialog__,
      0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classStatisticsInfos = (ClassStatisticsInfo_array *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    if ( classStatisticsInfos )
      classStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                               (UserClassStatisticsMaster_o *)classStatisticsInfos,
                               0);
    if ( !Instance )
      sub_1C6BC60(classStatisticsInfos, v8);
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
  int32_t isActiveAndEnabled; // w20
  _QWORD *v5; // x8
  System_Reflection_MethodBase_o *v6; // x0
  struct System_Action_o **p_callbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4CB0004 & 1) == 0 )
  {
    sub_1C6BA08(&Method_ClassCompatibilityInfoDialog_OnClickClose__);
    byte_4CB0004 = 1;
  }
  if ( this->fields.state == 2 )
  {
    classBoardButton = (UnityEngine_Behaviour_o *)this->fields.classBoardButton;
    this->fields.state = 3;
    if ( !classBoardButton )
      sub_1C6BC60(0, method);
    isActiveAndEnabled = UnityEngine_Behaviour__get_isActiveAndEnabled(classBoardButton, 0);
    v5 = Method_ClassCompatibilityInfoDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassCompatibilityInfoDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C6BA20(Method_ClassCompatibilityInfoDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, isActiveAndEnabled, 0, 0);
    callbackFunc = this->fields.callbackFunc;
    p_callbackFunc = &this->fields.callbackFunc;
    v8 = callbackFunc;
    if ( callbackFunc )
    {
      *p_callbackFunc = 0;
      sub_1C6B9AC(p_callbackFunc, 0);
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
  UILabel_o *closeLabel; // x20
  UISprite_o *compatibilitySprite; // x20
  BalanceConfig_c *v9; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  char v11; // w20
  UnityEngine_GameObject_o *v12; // x21
  ClassCompatibilityInfoDialog_c *v13; // x8
  float *p_CLOSE_BUTTON_DEFAULT_POSITION_X; // x8
  UILabel_o *classBoardLabel; // x20
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x4

  if ( (byte_4CB0002 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&Method_ClassCompatibilityInfoDialog_EndOpen__);
    sub_1C6BA08(&ClassCompatibilityInfoDialog_TypeInfo);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3379/*"CLASS_BOARD_EFFECT_DISP_BUTTON"*/);
    sub_1C6BA08(&StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4CB0002 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C6B9AC(&this->fields.callbackFunc, callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      closeLabel = this->fields.closeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CLOSE"*/, 0);
      if ( closeLabel )
      {
        UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
        compatibilitySprite = this->fields.compatibilitySprite;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetClassChart_40830916(compatibilitySprite, 0);
        v9 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v9 = BalanceConfig_TypeInfo;
        }
        ClassBoardReleaseQuestId = v9->static_fields->ClassBoardReleaseQuestId;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)CondType__IsQuestClear_40554260(ClassBoardReleaseQuestId, -1, 0, 0);
        if ( this->fields.closeButton )
        {
          v11 = (char)gameObject;
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.closeButton, 0);
          v13 = ClassCompatibilityInfoDialog_TypeInfo;
          if ( !ClassCompatibilityInfoDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ClassCompatibilityInfoDialog_TypeInfo);
            v13 = ClassCompatibilityInfoDialog_TypeInfo;
          }
          p_CLOSE_BUTTON_DEFAULT_POSITION_X = &v13->static_fields->CLOSE_BUTTON_DEFAULT_POSITION_X;
          if ( (v11 & 1) != 0 )
          {
            GameObjectExtensions__SetLocalPositionX(v12, p_CLOSE_BUTTON_DEFAULT_POSITION_X[1], 0);
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
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3379/*"CLASS_BOARD_EFFECT_DISP_BUTTON"*/,
                                                             0);
                  if ( classBoardLabel )
                  {
                    UILabel__set_text(classBoardLabel, (System_String_o *)gameObject, 0);
LABEL_29:
                    this->fields.state = 1;
                    v16 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                    System_Action___ctor(v16, (Il2CppObject *)this, Method_ClassCompatibilityInfoDialog_EndOpen__, 0);
                    BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0, v17);
                    return;
                  }
                }
              }
            }
          }
          else
          {
            GameObjectExtensions__SetLocalPositionX(v12, *p_CLOSE_BUTTON_DEFAULT_POSITION_X, 0);
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
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
    }
    sub_1C6BC60(gameObject, v6);
  }
}


System_String_o *ClassCompatibilityInfoDialog__get_closeBtnPath(
        ClassCompatibilityInfoDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB0007 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_7641/*"InfoDialog/CloseButton"*/);
    byte_4CB0007 = 1;
  }
  return (System_String_o *)StringLiteral_7641/*"InfoDialog/CloseButton"*/;
}