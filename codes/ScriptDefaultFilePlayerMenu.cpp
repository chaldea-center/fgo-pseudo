void __fastcall ScriptDefaultFilePlayerMenu___ctor(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptDefaultFilePlayerMenu__Callback(
        ScriptDefaultFilePlayerMenu_o *this,
        bool result,
        const MethodInfo *method)
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
    p_callbackFunc->klass = 0LL;
    sub_1B8635C(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ScriptDefaultFilePlayerMenu__Close(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *serverSettingRootObject; // x0

  ScriptDefaultFilePlayerMenu__EndInput(this, method);
  serverSettingRootObject = this->fields.serverSettingRootObject;
  this->fields.state = 0;
  if ( !serverSettingRootObject )
    sub_1B86614(0LL, v3);
  UnityEngine_GameObject__SetActive(serverSettingRootObject, 0, 0LL);
}


void __fastcall ScriptDefaultFilePlayerMenu__EndInput(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  if ( this->fields.state )
  {
    jumpLineObjectInput = this->fields.jumpLineObjectInput;
    if ( !jumpLineObjectInput )
      goto LABEL_11;
    UILineInput__SetInputEnable(jumpLineObjectInput, 0, 0LL);
    jumpLineObjectInput = (UILineInput_o *)this->fields.genderInput;
    if ( !jumpLineObjectInput )
      goto LABEL_11;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)jumpLineObjectInput, 0, 0LL);
    jumpLineObjectInput = (UILineInput_o *)this->fields.startModeInput;
    if ( !jumpLineObjectInput )
      goto LABEL_11;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)jumpLineObjectInput, 1, 0LL);
    jumpLineObjectInput = (UILineInput_o *)this->fields.hiddenTruthButton;
    if ( !jumpLineObjectInput
      || (((void (__fastcall *)(UILineInput_o *, _QWORD, void *))jumpLineObjectInput->klass[1]._1.namespaze)(
            jumpLineObjectInput,
            0LL,
            jumpLineObjectInput->klass[1]._1.byval_arg.data),
          (jumpLineObjectInput = (UILineInput_o *)this->fields.forceCheckOnButton) == 0LL)
      || (((void (__fastcall *)(UILineInput_o *, _QWORD, void *))jumpLineObjectInput->klass[1]._1.namespaze)(
            jumpLineObjectInput,
            0LL,
            jumpLineObjectInput->klass[1]._1.byval_arg.data),
          (jumpLineObjectInput = (UILineInput_o *)this->fields.serverDecideButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)jumpLineObjectInput, 0, 0LL),
          (jumpLineObjectInput = (UILineInput_o *)this->fields.serverCancelButton) == 0LL) )
    {
LABEL_11:
      sub_1B86614(jumpLineObjectInput, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)jumpLineObjectInput, 0, 0LL);
    UnityEngine_Input__set_imeCompositionMode(0, 0LL);
  }
}


void __fastcall ScriptDefaultFilePlayerMenu__EndPlayScript(
        ScriptDefaultFilePlayerMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 1;
}


int32_t __fastcall ScriptDefaultFilePlayerMenu__GetJumpLine(
        ScriptDefaultFilePlayerMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1B86614(0LL, method);
  Text = UILineInput__GetText(jumpLineObjectInput, 0LL);
  if ( System_String__IsNullOrEmpty(Text, 0LL) )
    return -1;
  else
    return System_Int32__Parse(Text, 0LL);
}


System_String_o *__fastcall ScriptDefaultFilePlayerMenu__GetJumpLineString(
        ScriptDefaultFilePlayerMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1B86614(0LL, method);
  return UILineInput__GetText(jumpLineObjectInput, 0LL);
}


void __fastcall ScriptDefaultFilePlayerMenu__OnClickCancel(
        ScriptDefaultFilePlayerMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 1 )
  {
    ScriptDefaultFilePlayerMenu__EndInput(this, method);
    this->fields.state = 3;
    ScriptDefaultFilePlayerMenu__Callback(this, 0, v3);
  }
}


void __fastcall ScriptDefaultFilePlayerMenu__OnClickDecide(
        ScriptDefaultFilePlayerMenu_o *this,
        const MethodInfo *method)
{
  ScriptDefaultFilePlayerMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v14; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectPlayerFilePath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v25; // x7
  ScriptConnectData_o v26; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v27; // [xsp+30h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4A4BB47 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Gender_TypeInfo, v3);
    sub_1B863B8(&Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, v4);
    sub_1B863B8(&ScriptManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v6);
    sub_1B863B8(&StringLiteral_5176/*"DefaultScript.txt"*/, v7);
    this = (ScriptDefaultFilePlayerMenu_o *)sub_1B863B8(&StringLiteral_3294/*"C:/Avalon/Temporary/ScriptData"*/, v8);
    byte_4A4BB47 = 1;
  }
  if ( v2->fields.state == 1 )
  {
    genderInput = v2->fields.genderInput;
    if ( genderInput )
    {
      mSelectedItem = genderInput->fields.mSelectedItem;
      if ( !Gender_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      this = (ScriptDefaultFilePlayerMenu_o *)Gender__ToData(mSelectedItem, 0LL);
      startModeInput = v2->fields.startModeInput;
      v2->fields.selectGenderIndex = (int)this;
      if ( startModeInput )
      {
        v14 = startModeInput->fields.mSelectedItem;
        v2->fields.selectStartModeName = v14;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.selectStartModeName, (int32_t)v14, v11, v12);
        this = (ScriptDefaultFilePlayerMenu_o *)v2->fields.hiddenTruthSprite;
        if ( this )
        {
          enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL);
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
                 0LL) )
          {
            this = (ScriptDefaultFilePlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( !this )
              goto LABEL_17;
            ScriptManager__WriteSetting((ScriptManager_o *)this, 0LL);
          }
          v2->fields.state = 5;
          debugTestRootComponent = v2->fields.debugTestRootComponent;
          v21 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0LL);
          v22 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0LL);
          JumpLine = ScriptDefaultFilePlayerMenu__GetJumpLine(v2, v23);
          memset(&v27, 0, sizeof(v27));
          ScriptConnectData___ctor(
            &v27,
            (System_String_o *)StringLiteral_3294/*"C:/Avalon/Temporary/ScriptData"*/,
            (System_String_o *)StringLiteral_5176/*"DefaultScript.txt"*/,
            v21,
            v22,
            JumpLine,
            0,
            v25);
          if ( debugTestRootComponent )
          {
            v26 = v27;
            DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v26, 0LL);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1B86614(this, method);
  }
}


void __fastcall ScriptDefaultFilePlayerMenu__OnClickForceCheckOn(
        ScriptDefaultFilePlayerMenu_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *forceCheckOnSprite; // x0
  __int64 v4; // x1
  bool enabled; // w19
  ScriptManager_c *v6; // x0

  if ( (byte_4A4BB45 & 1) == 0 )
  {
    sub_1B863B8(&ScriptManager_TypeInfo, method);
    byte_4A4BB45 = 1;
  }
  forceCheckOnSprite = this->fields.forceCheckOnSprite;
  if ( !forceCheckOnSprite
    || (forceCheckOnSprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                    (UnityEngine_Behaviour_o *)forceCheckOnSprite,
                                                    0LL),
        !this->fields.forceCheckOnSprite)
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)this->fields.forceCheckOnSprite,
          ((unsigned __int8)forceCheckOnSprite & 1) == 0,
          0LL),
        (forceCheckOnSprite = this->fields.forceCheckOnSprite) == 0LL) )
  {
    sub_1B86614(forceCheckOnSprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceCheckOnSprite, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4A4BBDA )
  {
    sub_1B863B8(&ScriptManager_TypeInfo, v4);
    byte_4A4BBDA = 1;
  }
  v6 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v6 = ScriptManager_TypeInfo;
  }
  v6->static_fields->debugIsForceCheckOn = enabled;
}


void __fastcall ScriptDefaultFilePlayerMenu__OnClickHiddenTruth(
        ScriptDefaultFilePlayerMenu_o *this,
        const MethodInfo *method)
{
  struct UISprite_o *hiddenTruthSprite; // x0

  hiddenTruthSprite = this->fields.hiddenTruthSprite;
  if ( !hiddenTruthSprite
    || (hiddenTruthSprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                   (UnityEngine_Behaviour_o *)hiddenTruthSprite,
                                                   0LL),
        !this->fields.hiddenTruthSprite) )
  {
    sub_1B86614(hiddenTruthSprite, method);
  }
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)this->fields.hiddenTruthSprite,
    ((unsigned __int8)hiddenTruthSprite & 1) == 0,
    0LL);
}


void __fastcall ScriptDefaultFilePlayerMenu__OnClickView(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  ScriptDefaultFilePlayerMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v14; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectPlayerFilePath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v25; // x7
  ScriptConnectData_o v26; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v27; // [xsp+30h] [xbp-70h] BYREF

  v2 = this;
  if ( (byte_4A4BB46 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Gender_TypeInfo, v3);
    sub_1B863B8(&Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, v4);
    sub_1B863B8(&ScriptManager_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v6);
    sub_1B863B8(&StringLiteral_5176/*"DefaultScript.txt"*/, v7);
    this = (ScriptDefaultFilePlayerMenu_o *)sub_1B863B8(&StringLiteral_3294/*"C:/Avalon/Temporary/ScriptData"*/, v8);
    byte_4A4BB46 = 1;
  }
  if ( v2->fields.state == 1 )
  {
    genderInput = v2->fields.genderInput;
    if ( genderInput )
    {
      mSelectedItem = genderInput->fields.mSelectedItem;
      if ( !Gender_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      this = (ScriptDefaultFilePlayerMenu_o *)Gender__ToData(mSelectedItem, 0LL);
      startModeInput = v2->fields.startModeInput;
      v2->fields.selectGenderIndex = (int)this;
      if ( startModeInput )
      {
        v14 = startModeInput->fields.mSelectedItem;
        v2->fields.selectStartModeName = v14;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.selectStartModeName, (int32_t)v14, v11, v12);
        this = (ScriptDefaultFilePlayerMenu_o *)v2->fields.hiddenTruthSprite;
        if ( this )
        {
          enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL);
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
                 0LL) )
          {
            this = (ScriptDefaultFilePlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( !this )
              goto LABEL_17;
            ScriptManager__WriteSetting((ScriptManager_o *)this, 0LL);
          }
          v2->fields.state = 5;
          debugTestRootComponent = v2->fields.debugTestRootComponent;
          v21 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0LL);
          v22 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)v2, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0LL);
          JumpLine = ScriptDefaultFilePlayerMenu__GetJumpLine(v2, v23);
          memset(&v27, 0, sizeof(v27));
          ScriptConnectData___ctor(
            &v27,
            (System_String_o *)StringLiteral_3294/*"C:/Avalon/Temporary/ScriptData"*/,
            (System_String_o *)StringLiteral_5176/*"DefaultScript.txt"*/,
            v21,
            v22,
            JumpLine,
            1,
            v25);
          if ( debugTestRootComponent )
          {
            v26 = v27;
            DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v26, 0LL);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1B86614(this, method);
  }
}


void __fastcall ScriptDefaultFilePlayerMenu__Open(
        ScriptDefaultFilePlayerMenu_o *this,
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  ScriptManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ScriptManager_c *v13; // x0
  struct System_String_o *scriptPlayerPathSettingAddress; // x1
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  ScriptManager_c *v18; // x0
  struct System_String_o *scriptPlayerObjectSettingAddress; // x1
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ScriptManager_c *v23; // x0
  struct System_String_o *scriptStartModeSettingName; // x1
  ScriptManager_c *v25; // x0
  struct ScriptManager_StaticFields *static_fields; // x8
  UIPopupList_o *genderInput; // x21
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x21
  System_Enum_o v29; // [xsp+8h] [xbp-48h] BYREF
  int32_t selectGenderIndex; // [xsp+18h] [xbp-38h]

  if ( (byte_4A4BB44 & 1) == 0 )
  {
    sub_1B863B8(&ScriptManager_TypeInfo, callback);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v6);
    sub_1B863B8(&Gender_Type_TypeInfo, v7);
    byte_4A4BB44 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    ScriptManager__ReadSetting(Instance, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    if ( !byte_4A4BAE0 )
    {
      sub_1B863B8(&ScriptManager_TypeInfo, v10);
      byte_4A4BAE0 = 1;
    }
    v13 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v13 = ScriptManager_TypeInfo;
    }
    scriptPlayerPathSettingAddress = v13->static_fields->scriptPlayerPathSettingAddress;
    this->fields.selectPlayerFilePath = scriptPlayerPathSettingAddress;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&this->fields.selectPlayerFilePath,
      (int32_t)scriptPlayerPathSettingAddress,
      v11,
      v12);
    if ( !byte_4A4BAE1 )
    {
      sub_1B863B8(&ScriptManager_TypeInfo, v15);
      byte_4A4BAE1 = 1;
    }
    v18 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v18 = ScriptManager_TypeInfo;
    }
    scriptPlayerObjectSettingAddress = v18->static_fields->scriptPlayerObjectSettingAddress;
    this->fields.selectObjectPath = scriptPlayerObjectSettingAddress;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&this->fields.selectObjectPath,
      (int32_t)scriptPlayerObjectSettingAddress,
      v16,
      v17);
    if ( !byte_4A4BAE2 )
    {
      sub_1B863B8(&ScriptManager_TypeInfo, v20);
      byte_4A4BAE2 = 1;
    }
    v23 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v23 = ScriptManager_TypeInfo;
    }
    this->fields.selectGenderIndex = v23->static_fields->scriptGenderSettingIndex;
    if ( !byte_4A4BADF )
    {
      sub_1B863B8(&ScriptManager_TypeInfo, v20);
      v23 = ScriptManager_TypeInfo;
      byte_4A4BADF = 1;
    }
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ScriptManager_TypeInfo;
    }
    scriptStartModeSettingName = v23->static_fields->scriptStartModeSettingName;
    this->fields.selectStartModeName = scriptStartModeSettingName;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&this->fields.selectStartModeName,
      (int32_t)scriptStartModeSettingName,
      v21,
      v22);
    if ( !byte_4A4BBD8 )
    {
      sub_1B863B8(&ScriptManager_TypeInfo, v9);
      byte_4A4BBD8 = 1;
    }
    v25 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v25 = ScriptManager_TypeInfo;
    }
    static_fields = v25->static_fields;
    Instance = (ScriptManager_o *)this->fields.serverSettingRootObject;
    this->fields.selectIsHiddenTruthSetting = static_fields->isHiddenTruthSetting;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.jumpLineObjectInput;
    if ( !Instance )
      goto LABEL_45;
    UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.genderInput;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.startModeInput;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.serverDecideButton;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.serverCancelButton;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    genderInput = this->fields.genderInput;
    selectGenderIndex = this->fields.selectGenderIndex;
    v29.klass = (System_Enum_c *)Gender_Type_TypeInfo;
    v29.monitor = (void *)-1LL;
    Instance = (ScriptManager_o *)System_Enum__ToString(&v29, 0LL);
    if ( !genderInput )
      goto LABEL_45;
    UIPopupList__set_value(genderInput, (System_String_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)this->fields.startModeInput;
    if ( !Instance )
      goto LABEL_45;
    UIPopupList__set_value((UIPopupList_o *)Instance, this->fields.selectStartModeName, 0LL);
    Instance = (ScriptManager_o *)this->fields.hiddenTruthButton;
    if ( !Instance )
      goto LABEL_45;
    ((void (__fastcall *)(ScriptManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
      Instance,
      1LL,
      Instance->klass[1]._1.byval_arg.data);
    Instance = (ScriptManager_o *)this->fields.hiddenTruthSprite;
    if ( !Instance )
      goto LABEL_45;
    UnityEngine_Behaviour__set_enabled(
      (UnityEngine_Behaviour_o *)Instance,
      this->fields.selectIsHiddenTruthSetting,
      0LL);
    Instance = (ScriptManager_o *)this->fields.forceCheckOnButton;
    if ( !Instance )
      goto LABEL_45;
    ((void (__fastcall *)(ScriptManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
      Instance,
      1LL,
      Instance->klass[1]._1.byval_arg.data);
    forceCheckOnSprite = (UnityEngine_Behaviour_o *)this->fields.forceCheckOnSprite;
    if ( !byte_4A4BBD9 )
    {
      sub_1B863B8(&ScriptManager_TypeInfo, v9);
      byte_4A4BBD9 = 1;
    }
    Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    }
    if ( !forceCheckOnSprite )
LABEL_45:
      sub_1B86614(Instance, v9);
    UnityEngine_Behaviour__set_enabled(
      forceCheckOnSprite,
      BYTE1(Instance->fields.equipViewSeed[3].fields.m_CancellationTokenSource),
      0LL);
    this->fields.state = 1;
  }
}


void __fastcall ScriptDefaultFilePlayerMenu__add_callbackFunc(
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

  if ( (byte_4A4BB42 & 1) == 0 )
  {
    sub_1B863B8(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo, value);
    byte_4A4BB42 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptDefaultFilePlayerMenu_CallbackFunc_c *)v8->klass != ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B868D4(v8);
  ScriptDefaultFilePlayerMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptDefaultFilePlayerMenu__remove_callbackFunc(
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

  if ( (byte_4A4BB43 & 1) == 0 )
  {
    sub_1B863B8(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo, value);
    byte_4A4BB43 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptDefaultFilePlayerMenu_CallbackFunc_c *)v8->klass != ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC0674(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B868D4(v8);
  ScriptDefaultFilePlayerMenu__Open(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptDefaultFilePlayerMenu_CallbackFunc___ctor(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D0008;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CFFC0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptDefaultFilePlayerMenu_CallbackFunc__BeginInvoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A4BB48 & 1) == 0 )
  {
    sub_1B863B8(&bool_TypeInfo, result);
    byte_4A4BB48 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v9, callback, object);
}


void __fastcall ScriptDefaultFilePlayerMenu_CallbackFunc__EndInvoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
}


void __fastcall ScriptDefaultFilePlayerMenu_CallbackFunc__Invoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}