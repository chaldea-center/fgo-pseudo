void ScriptDefaultFilePlayerMenu___ctor(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptDefaultFilePlayerMenu__Callback(ScriptDefaultFilePlayerMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o *v9; // x20
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void ScriptDefaultFilePlayerMenu__Close(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *serverSettingRootObject; // x0

  ScriptDefaultFilePlayerMenu__EndInput(this, method);
  serverSettingRootObject = this->fields.serverSettingRootObject;
  this->fields.state = 0;
  if ( !serverSettingRootObject )
    sub_1C93D2C(0, v3);
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
      sub_1C93D2C(jumpLineObjectInput, method);
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
    sub_1C93D2C(0, method);
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
    sub_1C93D2C(0, method);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v12; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectPlayerFilePath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v19; // x21
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v23; // x7
  ScriptConnectData_o v24; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v25; // [xsp+30h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4D2DF9B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Gender_TypeInfo);
    sub_1C93AD4(&Method_ScriptDefaultFilePlayerMenu_EndPlayScript__);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_5228/*"DefaultScript.txt"*/);
    this = (ScriptDefaultFilePlayerMenu_o *)sub_1C93AD4(&StringLiteral_3283/*"C:/Avalon/Temporary/ScriptData"*/);
    byte_4D2DF9B = 1;
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
        v12 = startModeInput->fields.mSelectedItem;
        v2->fields.selectStartModeName = v12;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v2->fields.selectStartModeName,
          (int32_t)v12,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10);
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
            this = (ScriptDefaultFilePlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( !this )
              goto LABEL_17;
            ScriptManager__WriteSetting((ScriptManager_o *)this, 0);
          }
          v2->fields.state = 5;
          debugTestRootComponent = v2->fields.debugTestRootComponent;
          v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v20, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          JumpLine = ScriptDefaultFilePlayerMenu__GetJumpLine(v2, v21);
          memset(&v25, 0, sizeof(v25));
          ScriptConnectData___ctor(
            &v25,
            (System_String_o *)StringLiteral_3283/*"C:/Avalon/Temporary/ScriptData"*/,
            (System_String_o *)StringLiteral_5228/*"DefaultScript.txt"*/,
            v19,
            v20,
            JumpLine,
            0,
            v23);
          if ( debugTestRootComponent )
          {
            v24 = v25;
            DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v24, 0);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1C93D2C(this, method);
  }
}


void ScriptDefaultFilePlayerMenu__OnClickForceCheckOn(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *forceCheckOnSprite; // x0
  bool enabled; // w19
  ScriptManager_c *v5; // x0

  if ( (byte_4D2DF99 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptManager_TypeInfo);
    byte_4D2DF99 = 1;
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
    sub_1C93D2C(forceCheckOnSprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceCheckOnSprite, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4D2E02E )
  {
    sub_1C93AD4(&ScriptManager_TypeInfo);
    byte_4D2E02E = 1;
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
    sub_1C93D2C(hiddenTruthSprite, method);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v12; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectPlayerFilePath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v19; // x21
  System_Action_o *v20; // x22
  const MethodInfo *v21; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v23; // x7
  ScriptConnectData_o v24; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v25; // [xsp+30h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4D2DF9A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Gender_TypeInfo);
    sub_1C93AD4(&Method_ScriptDefaultFilePlayerMenu_EndPlayScript__);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_5228/*"DefaultScript.txt"*/);
    this = (ScriptDefaultFilePlayerMenu_o *)sub_1C93AD4(&StringLiteral_3283/*"C:/Avalon/Temporary/ScriptData"*/);
    byte_4D2DF9A = 1;
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
        v12 = startModeInput->fields.mSelectedItem;
        v2->fields.selectStartModeName = v12;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v2->fields.selectStartModeName,
          (int32_t)v12,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10);
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
            this = (ScriptDefaultFilePlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( !this )
              goto LABEL_17;
            ScriptManager__WriteSetting((ScriptManager_o *)this, 0);
          }
          v2->fields.state = 5;
          debugTestRootComponent = v2->fields.debugTestRootComponent;
          v19 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v20, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          JumpLine = ScriptDefaultFilePlayerMenu__GetJumpLine(v2, v21);
          memset(&v25, 0, sizeof(v25));
          ScriptConnectData___ctor(
            &v25,
            (System_String_o *)StringLiteral_3283/*"C:/Avalon/Temporary/ScriptData"*/,
            (System_String_o *)StringLiteral_5228/*"DefaultScript.txt"*/,
            v19,
            v20,
            JumpLine,
            1,
            v23);
          if ( debugTestRootComponent )
          {
            v24 = v25;
            DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v24, 0);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1C93D2C(this, method);
  }
}


void ScriptDefaultFilePlayerMenu__Open(
        ScriptDefaultFilePlayerMenu_o *this,
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ScriptManager_o *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  ScriptManager_c *v18; // x0
  struct System_String_o *scriptPlayerPathSettingAddress; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  ScriptManager_c *v26; // x0
  struct System_String_o *scriptPlayerObjectSettingAddress; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  ScriptManager_c *v34; // x0
  struct System_String_o *scriptStartModeSettingName; // x1
  ScriptManager_c *v36; // x0
  struct ScriptManager_StaticFields *static_fields; // x8
  UIPopupList_o *genderInput; // x21
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x21
  System_Enum_o v40; // [xsp+8h] [xbp-48h] BYREF
  int32_t selectGenderIndex; // [xsp+18h] [xbp-38h]

  if ( (byte_4D2DF98 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C93AD4(&Gender_Type_TypeInfo);
    byte_4D2DF98 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    ScriptManager__ReadSetting(Instance, 0);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    if ( !byte_4D2DF35 )
    {
      sub_1C93AD4(&ScriptManager_TypeInfo);
      byte_4D2DF35 = 1;
    }
    v18 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v18 = ScriptManager_TypeInfo;
    }
    scriptPlayerPathSettingAddress = v18->static_fields->scriptPlayerPathSettingAddress;
    this->fields.selectPlayerFilePath = scriptPlayerPathSettingAddress;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectPlayerFilePath,
      (int32_t)scriptPlayerPathSettingAddress,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( !byte_4D2DF36 )
    {
      sub_1C93AD4(&ScriptManager_TypeInfo);
      byte_4D2DF36 = 1;
    }
    v26 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v26 = ScriptManager_TypeInfo;
    }
    scriptPlayerObjectSettingAddress = v26->static_fields->scriptPlayerObjectSettingAddress;
    this->fields.selectObjectPath = scriptPlayerObjectSettingAddress;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectObjectPath,
      (int32_t)scriptPlayerObjectSettingAddress,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    if ( !byte_4D2DF37 )
    {
      sub_1C93AD4(&ScriptManager_TypeInfo);
      byte_4D2DF37 = 1;
    }
    v34 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v34 = ScriptManager_TypeInfo;
    }
    this->fields.selectGenderIndex = v34->static_fields->scriptGenderSettingIndex;
    if ( !byte_4D2DF34 )
    {
      sub_1C93AD4(&ScriptManager_TypeInfo);
      v34 = ScriptManager_TypeInfo;
      byte_4D2DF34 = 1;
    }
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ScriptManager_TypeInfo;
    }
    scriptStartModeSettingName = v34->static_fields->scriptStartModeSettingName;
    this->fields.selectStartModeName = scriptStartModeSettingName;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectStartModeName,
      (int32_t)scriptStartModeSettingName,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    if ( !byte_4D2E02C )
    {
      sub_1C93AD4(&ScriptManager_TypeInfo);
      byte_4D2E02C = 1;
    }
    v36 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v36 = ScriptManager_TypeInfo;
    }
    static_fields = v36->static_fields;
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
    v40.klass = (System_Enum_c *)Gender_Type_TypeInfo;
    v40.monitor = (void *)-1LL;
    Instance = (ScriptManager_o *)System_Enum__ToString(&v40, 0);
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
    if ( !byte_4D2E02D )
    {
      sub_1C93AD4(&ScriptManager_TypeInfo);
      byte_4D2E02D = 1;
    }
    Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    }
    if ( !forceCheckOnSprite )
LABEL_45:
      sub_1C93D2C(Instance, v11);
    UnityEngine_Behaviour__set_enabled(forceCheckOnSprite, BYTE1(Instance->fields.equipViewSeed[3].fields.parent), 0);
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

  if ( (byte_4D2DF96 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
    byte_4D2DF96 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
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

  if ( (byte_4D2DF97 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
    byte_4D2DF97 = 1;
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
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  ScriptDefaultFilePlayerMenu__Open(v11, v12, v13);
}


void ScriptDefaultFilePlayerMenu_CallbackFunc___ctor(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AC5EE8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC5EA0;
}


System_IAsyncResult_o *ScriptDefaultFilePlayerMenu_CallbackFunc__BeginInvoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D2DF9C & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2DF9C = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void ScriptDefaultFilePlayerMenu_CallbackFunc__EndInvoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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