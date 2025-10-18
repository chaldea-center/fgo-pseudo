void ScriptDefaultFilePlayerMenu___ctor(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptDefaultFilePlayerMenu__Callback(ScriptDefaultFilePlayerMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o *v5; // x20
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void ScriptDefaultFilePlayerMenu__Close(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *serverSettingRootObject; // x0

  ScriptDefaultFilePlayerMenu__EndInput(this, method);
  serverSettingRootObject = this->fields.serverSettingRootObject;
  this->fields.state = 0;
  if ( !serverSettingRootObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(serverSettingRootObject, 0, 0);
}


void ScriptDefaultFilePlayerMenu__EndInput(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  if ( this->fields.state )
  {
    jumpLineObjectInput = this->fields.jumpLineObjectInput;
    if ( !jumpLineObjectInput )
      goto LABEL_11;
    UILineInput__SetInputEnable(jumpLineObjectInput, 0, 0);
    jumpLineObjectInput = (UILineInput_o *)this->fields.genderInput;
    if ( !jumpLineObjectInput )
      goto LABEL_11;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)jumpLineObjectInput, 0, 0);
    jumpLineObjectInput = (UILineInput_o *)this->fields.startModeInput;
    if ( !jumpLineObjectInput )
      goto LABEL_11;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)jumpLineObjectInput, 1, 0);
    jumpLineObjectInput = (UILineInput_o *)this->fields.hiddenTruthButton;
    if ( !jumpLineObjectInput
      || (((void (__fastcall *)(UILineInput_o *, _QWORD, const char *))jumpLineObjectInput->klass[1]._1.name)(
            jumpLineObjectInput,
            0,
            jumpLineObjectInput->klass[1]._1.namespaze),
          (jumpLineObjectInput = (UILineInput_o *)this->fields.forceCheckOnButton) == 0)
      || (((void (__fastcall *)(UILineInput_o *, _QWORD, const char *))jumpLineObjectInput->klass[1]._1.name)(
            jumpLineObjectInput,
            0,
            jumpLineObjectInput->klass[1]._1.namespaze),
          (jumpLineObjectInput = (UILineInput_o *)this->fields.serverDecideButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)jumpLineObjectInput, 0, 0),
          (jumpLineObjectInput = (UILineInput_o *)this->fields.serverCancelButton) == 0) )
    {
LABEL_11:
      sub_1C372B4(jumpLineObjectInput);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)jumpLineObjectInput, 0, 0);
    UnityEngine_Input__set_imeCompositionMode(0, 0);
  }
}


void ScriptDefaultFilePlayerMenu__EndPlayScript(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


int32_t ScriptDefaultFilePlayerMenu__GetJumpLine(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C372B4(0);
  Text = UILineInput__GetText(jumpLineObjectInput, 0);
  if ( System_String__IsNullOrEmpty(Text, 0) )
    return -1;
  else
    return System_Int32__Parse(Text, 0);
}


System_String_o *ScriptDefaultFilePlayerMenu__GetJumpLineString(
        ScriptDefaultFilePlayerMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C372B4(0);
  return UILineInput__GetText(jumpLineObjectInput, 0);
}


void ScriptDefaultFilePlayerMenu__OnClickCancel(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 1 )
  {
    ScriptDefaultFilePlayerMenu__EndInput(this, method);
    this->fields.state = 3;
    ScriptDefaultFilePlayerMenu__Callback(this, 0, v3);
  }
}


void ScriptDefaultFilePlayerMenu__OnClickDecide(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  ScriptDefaultFilePlayerMenu_o *v2; // x19
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v8; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectPlayerFilePath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v15; // x21
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v19; // x7
  ScriptConnectData_o v20; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v21; // [xsp+30h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4C4059D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Gender_TypeInfo);
    sub_1C37058(&Method_ScriptDefaultFilePlayerMenu_EndPlayScript__);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C37058(&StringLiteral_5210/*"DefaultScript.txt"*/);
    this = (ScriptDefaultFilePlayerMenu_o *)sub_1C37058(&StringLiteral_3268/*"C:/Avalon/Temporary/ScriptData"*/);
    byte_4C4059D = 1;
  }
  if ( v2->fields.state == 1 )
  {
    genderInput = v2->fields.genderInput;
    if ( genderInput )
    {
      mSelectedItem = genderInput->fields.mSelectedItem;
      if ( !Gender_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      this = (ScriptDefaultFilePlayerMenu_o *)Gender__ToData(mSelectedItem, 0);
      startModeInput = v2->fields.startModeInput;
      v2->fields.selectGenderIndex = (int)this;
      if ( startModeInput )
      {
        v8 = startModeInput->fields.mSelectedItem;
        v2->fields.selectStartModeName = v8;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.selectStartModeName, (int32_t)v8, v5, v6);
        this = (ScriptDefaultFilePlayerMenu_o *)v2->fields.hiddenTruthSprite;
        if ( this )
        {
          enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
          v2->fields.selectIsHiddenTruthSetting = enabled;
          selectPlayerFilePath = v2->fields.selectPlayerFilePath;
          selectObjectPath = v2->fields.selectObjectPath;
          selectGenderIndex = v2->fields.selectGenderIndex;
          selectStartModeName = v2->fields.selectStartModeName;
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          if ( ScriptManager__SetScriptPlayerSetting(
                 selectPlayerFilePath,
                 selectObjectPath,
                 selectGenderIndex,
                 selectStartModeName,
                 enabled,
                 0) )
          {
            this = (ScriptDefaultFilePlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( !this )
              goto LABEL_17;
            ScriptManager__WriteSetting((ScriptManager_o *)this, 0);
          }
          v2->fields.state = 5;
          debugTestRootComponent = v2->fields.debugTestRootComponent;
          v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v16, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          JumpLine = ScriptDefaultFilePlayerMenu__GetJumpLine(v2, v17);
          memset(&v21, 0, sizeof(v21));
          ScriptConnectData___ctor(
            &v21,
            (System_String_o *)StringLiteral_3268/*"C:/Avalon/Temporary/ScriptData"*/,
            (System_String_o *)StringLiteral_5210/*"DefaultScript.txt"*/,
            v15,
            v16,
            JumpLine,
            0,
            v19);
          if ( debugTestRootComponent )
          {
            v20 = v21;
            DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v20, 0);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1C372B4(this);
  }
}


void ScriptDefaultFilePlayerMenu__OnClickForceCheckOn(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *forceCheckOnSprite; // x0
  bool enabled; // w19
  ScriptManager_c *v5; // x0

  if ( (byte_4C4059B & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C4059B = 1;
  }
  forceCheckOnSprite = this->fields.forceCheckOnSprite;
  if ( !forceCheckOnSprite
    || (forceCheckOnSprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                    (UnityEngine_Behaviour_o *)forceCheckOnSprite,
                                                    0),
        !this->fields.forceCheckOnSprite)
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)this->fields.forceCheckOnSprite,
          ((unsigned __int8)forceCheckOnSprite & 1) == 0,
          0),
        (forceCheckOnSprite = this->fields.forceCheckOnSprite) == 0) )
  {
    sub_1C372B4(forceCheckOnSprite);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceCheckOnSprite, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4C40630 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    byte_4C40630 = 1;
  }
  v5 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v5 = ScriptManager_TypeInfo;
  }
  v5->static_fields->debugIsForceCheckOn = enabled;
}


void ScriptDefaultFilePlayerMenu__OnClickHiddenTruth(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *hiddenTruthSprite; // x0

  hiddenTruthSprite = this->fields.hiddenTruthSprite;
  if ( !hiddenTruthSprite
    || (hiddenTruthSprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                   (UnityEngine_Behaviour_o *)hiddenTruthSprite,
                                                   0),
        !this->fields.hiddenTruthSprite) )
  {
    sub_1C372B4(hiddenTruthSprite);
  }
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)this->fields.hiddenTruthSprite,
    ((unsigned __int8)hiddenTruthSprite & 1) == 0,
    0);
}


void ScriptDefaultFilePlayerMenu__OnClickView(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  ScriptDefaultFilePlayerMenu_o *v2; // x19
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v8; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectPlayerFilePath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v15; // x21
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v19; // x7
  ScriptConnectData_o v20; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v21; // [xsp+30h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4C4059C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Gender_TypeInfo);
    sub_1C37058(&Method_ScriptDefaultFilePlayerMenu_EndPlayScript__);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C37058(&StringLiteral_5210/*"DefaultScript.txt"*/);
    this = (ScriptDefaultFilePlayerMenu_o *)sub_1C37058(&StringLiteral_3268/*"C:/Avalon/Temporary/ScriptData"*/);
    byte_4C4059C = 1;
  }
  if ( v2->fields.state == 1 )
  {
    genderInput = v2->fields.genderInput;
    if ( genderInput )
    {
      mSelectedItem = genderInput->fields.mSelectedItem;
      if ( !Gender_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      this = (ScriptDefaultFilePlayerMenu_o *)Gender__ToData(mSelectedItem, 0);
      startModeInput = v2->fields.startModeInput;
      v2->fields.selectGenderIndex = (int)this;
      if ( startModeInput )
      {
        v8 = startModeInput->fields.mSelectedItem;
        v2->fields.selectStartModeName = v8;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.selectStartModeName, (int32_t)v8, v5, v6);
        this = (ScriptDefaultFilePlayerMenu_o *)v2->fields.hiddenTruthSprite;
        if ( this )
        {
          enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
          v2->fields.selectIsHiddenTruthSetting = enabled;
          selectPlayerFilePath = v2->fields.selectPlayerFilePath;
          selectObjectPath = v2->fields.selectObjectPath;
          selectGenderIndex = v2->fields.selectGenderIndex;
          selectStartModeName = v2->fields.selectStartModeName;
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          if ( ScriptManager__SetScriptPlayerSetting(
                 selectPlayerFilePath,
                 selectObjectPath,
                 selectGenderIndex,
                 selectStartModeName,
                 enabled,
                 0) )
          {
            this = (ScriptDefaultFilePlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( !this )
              goto LABEL_17;
            ScriptManager__WriteSetting((ScriptManager_o *)this, 0);
          }
          v2->fields.state = 5;
          debugTestRootComponent = v2->fields.debugTestRootComponent;
          v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v15, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(v16, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          JumpLine = ScriptDefaultFilePlayerMenu__GetJumpLine(v2, v17);
          memset(&v21, 0, sizeof(v21));
          ScriptConnectData___ctor(
            &v21,
            (System_String_o *)StringLiteral_3268/*"C:/Avalon/Temporary/ScriptData"*/,
            (System_String_o *)StringLiteral_5210/*"DefaultScript.txt"*/,
            v15,
            v16,
            JumpLine,
            1,
            v19);
          if ( debugTestRootComponent )
          {
            v20 = v21;
            DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v20, 0);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1C372B4(this);
  }
}


void ScriptDefaultFilePlayerMenu__Open(
        ScriptDefaultFilePlayerMenu_o *this,
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ScriptManager_o *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ScriptManager_c *v9; // x0
  struct System_String_o *scriptPlayerPathSettingAddress; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ScriptManager_c *v13; // x0
  struct System_String_o *scriptPlayerObjectSettingAddress; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  ScriptManager_c *v17; // x0
  struct System_String_o *scriptStartModeSettingName; // x1
  ScriptManager_c *v19; // x0
  struct ScriptManager_StaticFields *static_fields; // x8
  UIPopupList_o *genderInput; // x21
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x21
  System_Enum_o v23; // [xsp+8h] [xbp-48h] BYREF
  int32_t selectGenderIndex; // [xsp+18h] [xbp-38h]

  if ( (byte_4C4059A & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C37058(&Gender_Type_TypeInfo);
    byte_4C4059A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    ScriptManager__ReadSetting(Instance, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    if ( !byte_4C40537 )
    {
      sub_1C37058(&ScriptManager_TypeInfo);
      byte_4C40537 = 1;
    }
    v9 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v9 = ScriptManager_TypeInfo;
    }
    scriptPlayerPathSettingAddress = v9->static_fields->scriptPlayerPathSettingAddress;
    this->fields.selectPlayerFilePath = scriptPlayerPathSettingAddress;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.selectPlayerFilePath,
      (int32_t)scriptPlayerPathSettingAddress,
      v7,
      v8);
    if ( !byte_4C40538 )
    {
      sub_1C37058(&ScriptManager_TypeInfo);
      byte_4C40538 = 1;
    }
    v13 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v13 = ScriptManager_TypeInfo;
    }
    scriptPlayerObjectSettingAddress = v13->static_fields->scriptPlayerObjectSettingAddress;
    this->fields.selectObjectPath = scriptPlayerObjectSettingAddress;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.selectObjectPath,
      (int32_t)scriptPlayerObjectSettingAddress,
      v11,
      v12);
    if ( !byte_4C40539 )
    {
      sub_1C37058(&ScriptManager_TypeInfo);
      byte_4C40539 = 1;
    }
    v17 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v17 = ScriptManager_TypeInfo;
    }
    this->fields.selectGenderIndex = v17->static_fields->scriptGenderSettingIndex;
    if ( !byte_4C40536 )
    {
      sub_1C37058(&ScriptManager_TypeInfo);
      v17 = ScriptManager_TypeInfo;
      byte_4C40536 = 1;
    }
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = ScriptManager_TypeInfo;
    }
    scriptStartModeSettingName = v17->static_fields->scriptStartModeSettingName;
    this->fields.selectStartModeName = scriptStartModeSettingName;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.selectStartModeName,
      (int32_t)scriptStartModeSettingName,
      v15,
      v16);
    if ( !byte_4C4062E )
    {
      sub_1C37058(&ScriptManager_TypeInfo);
      byte_4C4062E = 1;
    }
    v19 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v19 = ScriptManager_TypeInfo;
    }
    static_fields = v19->static_fields;
    Instance = (ScriptManager_o *)this->fields.serverSettingRootObject;
    this->fields.selectIsHiddenTruthSetting = static_fields->isHiddenTruthSetting;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.jumpLineObjectInput;
    if ( !Instance )
      goto LABEL_45;
    UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.genderInput;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.startModeInput;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.serverDecideButton;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.serverCancelButton;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    genderInput = this->fields.genderInput;
    selectGenderIndex = this->fields.selectGenderIndex;
    v23.klass = (System_Enum_c *)Gender_Type_TypeInfo;
    v23.monitor = (void *)-1LL;
    Instance = (ScriptManager_o *)System_Enum__ToString(&v23, 0);
    if ( !genderInput )
      goto LABEL_45;
    UIPopupList__set_value(genderInput, (System_String_o *)Instance, 0);
    Instance = (ScriptManager_o *)this->fields.startModeInput;
    if ( !Instance )
      goto LABEL_45;
    UIPopupList__set_value((UIPopupList_o *)Instance, this->fields.selectStartModeName, 0);
    Instance = (ScriptManager_o *)this->fields.hiddenTruthButton;
    if ( !Instance )
      goto LABEL_45;
    ((void (__fastcall *)(ScriptManager_o *, __int64, const char *))Instance->klass[1]._1.name)(
      Instance,
      1,
      Instance->klass[1]._1.namespaze);
    Instance = (ScriptManager_o *)this->fields.hiddenTruthSprite;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, this->fields.selectIsHiddenTruthSetting, 0);
    Instance = (ScriptManager_o *)this->fields.forceCheckOnButton;
    if ( !Instance )
      goto LABEL_45;
    ((void (__fastcall *)(ScriptManager_o *, __int64, const char *))Instance->klass[1]._1.name)(
      Instance,
      1,
      Instance->klass[1]._1.namespaze);
    forceCheckOnSprite = (UnityEngine_Behaviour_o *)this->fields.forceCheckOnSprite;
    if ( !byte_4C4062F )
    {
      sub_1C37058(&ScriptManager_TypeInfo);
      byte_4C4062F = 1;
    }
    Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    }
    if ( !forceCheckOnSprite )
LABEL_45:
      sub_1C372B4(Instance);
    UnityEngine_Behaviour__set_enabled(
      forceCheckOnSprite,
      BYTE1(Instance->fields.equipViewSeed[3].fields.m_CancellationTokenSource),
      0);
    this->fields.state = 1;
  }
}


void ScriptDefaultFilePlayerMenu__add_callbackFunc(
        ScriptDefaultFilePlayerMenu_o *this,
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptDefaultFilePlayerMenu_o *v11; // x0
  ScriptDefaultFilePlayerMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C40598 & 1) == 0 )
  {
    sub_1C37058(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
    byte_4C40598 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptDefaultFilePlayerMenu_CallbackFunc_c *)v8->klass != ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  ScriptDefaultFilePlayerMenu__remove_callbackFunc(v11, v12, v13);
}


void ScriptDefaultFilePlayerMenu__remove_callbackFunc(
        ScriptDefaultFilePlayerMenu_o *this,
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptDefaultFilePlayerMenu_o *v11; // x0
  ScriptDefaultFilePlayerMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C40599 & 1) == 0 )
  {
    sub_1C37058(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
    byte_4C40599 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptDefaultFilePlayerMenu_CallbackFunc_c *)v8->klass != ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C37574(v8);
  ScriptDefaultFilePlayerMenu__Open(v11, v12, v13);
}


void ScriptDefaultFilePlayerMenu_CallbackFunc___ctor(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A78DB0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A78D68;
}


System_IAsyncResult_o *ScriptDefaultFilePlayerMenu_CallbackFunc__BeginInvoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C4059E & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C4059E = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void ScriptDefaultFilePlayerMenu_CallbackFunc__EndInvoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void ScriptDefaultFilePlayerMenu_CallbackFunc__Invoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}