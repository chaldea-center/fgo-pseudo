void ScriptDefaultFilePlayerMenu___ctor(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptDefaultFilePlayerMenu__Callback(ScriptDefaultFilePlayerMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o *v9; // x20
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
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
    sub_2213CDC(0, v3);
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
      sub_2213CDC(jumpLineObjectInput, method);
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
    sub_2213CDC(0, method);
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
    sub_2213CDC(0, method);
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
  __int64 v2; // x2
  ScriptDefaultFilePlayerMenu_o *v3; // x19
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  bool enabled; // w20
  System_String_o *selectPlayerFilePath; // x21
  System_String_o *selectObjectPath; // x22
  int32_t selectGenderIndex; // w23
  System_String_o *selectStartModeName; // x24
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v22; // x21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v26; // x7
  ScriptConnectData_o v27; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v28; // [xsp+30h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_596DD17 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Gender_TypeInfo);
    sub_2213A60(&Method_ScriptDefaultFilePlayerMenu_EndPlayScript__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_2213A60(&StringLiteral_5398/*"DefaultScript.txt"*/);
    this = (ScriptDefaultFilePlayerMenu_o *)sub_2213A60(&StringLiteral_3397/*"C:/Avalon/Temporary/ScriptData"*/);
    byte_596DD17 = 1;
  }
  if ( v3->fields.state == 1 )
  {
    genderInput = v3->fields.genderInput;
    if ( genderInput )
    {
      mSelectedItem = genderInput->fields.mSelectedItem;
      if ( !*(&Gender_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method, v2);
      this = (ScriptDefaultFilePlayerMenu_o *)Gender__ToData(mSelectedItem, 0);
      startModeInput = v3->fields.startModeInput;
      v3->fields.selectGenderIndex = (int)this;
      if ( startModeInput )
      {
        v13 = startModeInput->fields.mSelectedItem;
        v3->fields.selectStartModeName = v13;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v3->fields.selectStartModeName,
          (int32_t)v13,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        this = (ScriptDefaultFilePlayerMenu_o *)v3->fields.hiddenTruthSprite;
        if ( this )
        {
          enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
          selectPlayerFilePath = v3->fields.selectPlayerFilePath;
          selectObjectPath = v3->fields.selectObjectPath;
          selectGenderIndex = v3->fields.selectGenderIndex;
          selectStartModeName = v3->fields.selectStartModeName;
          v3->fields.selectIsHiddenTruthSetting = enabled;
          if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v14, v15);
          if ( ScriptManager__SetScriptPlayerSetting(
                 selectPlayerFilePath,
                 selectObjectPath,
                 selectGenderIndex,
                 selectStartModeName,
                 enabled,
                 0) )
          {
            this = (ScriptDefaultFilePlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( !this )
              goto LABEL_17;
            ScriptManager__WriteSetting((ScriptManager_o *)this, 0);
          }
          debugTestRootComponent = v3->fields.debugTestRootComponent;
          v3->fields.state = 5;
          v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)v3, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v23, (Il2CppObject *)v3, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          JumpLine = ScriptDefaultFilePlayerMenu__GetJumpLine(v3, v24);
          memset(&v28, 0, sizeof(v28));
          ScriptConnectData___ctor(
            &v28,
            (System_String_o *)StringLiteral_3397/*"C:/Avalon/Temporary/ScriptData"*/,
            (System_String_o *)StringLiteral_5398/*"DefaultScript.txt"*/,
            v22,
            v23,
            JumpLine,
            0,
            v26);
          if ( debugTestRootComponent )
          {
            v27 = v28;
            DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v27, 0);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_2213CDC(this, method);
  }
}


void ScriptDefaultFilePlayerMenu__OnClickForceCheckOn(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *forceCheckOnSprite; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  bool enabled; // w19
  ScriptManager_c *v7; // x0

  if ( (byte_596DD15 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DD15 = 1;
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
    sub_2213CDC(forceCheckOnSprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceCheckOnSprite, 0);
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v4, v5);
  if ( !byte_596DD85 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DD85 = 1;
  }
  v7 = ScriptManager_TypeInfo;
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v4, v5);
    v7 = ScriptManager_TypeInfo;
  }
  v7->static_fields->debugIsForceCheckOn = enabled;
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
    sub_2213CDC(hiddenTruthSprite, method);
  }
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)this->fields.hiddenTruthSprite,
    ((unsigned __int8)hiddenTruthSprite & 1) == 0,
    0);
}


void ScriptDefaultFilePlayerMenu__OnClickView(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptDefaultFilePlayerMenu_o *v3; // x19
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  bool enabled; // w20
  System_String_o *selectPlayerFilePath; // x21
  System_String_o *selectObjectPath; // x22
  int32_t selectGenderIndex; // w23
  System_String_o *selectStartModeName; // x24
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v22; // x21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v26; // x7
  ScriptConnectData_o v27; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v28; // [xsp+30h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_596DD16 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Gender_TypeInfo);
    sub_2213A60(&Method_ScriptDefaultFilePlayerMenu_EndPlayScript__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_2213A60(&StringLiteral_5398/*"DefaultScript.txt"*/);
    this = (ScriptDefaultFilePlayerMenu_o *)sub_2213A60(&StringLiteral_3397/*"C:/Avalon/Temporary/ScriptData"*/);
    byte_596DD16 = 1;
  }
  if ( v3->fields.state == 1 )
  {
    genderInput = v3->fields.genderInput;
    if ( genderInput )
    {
      mSelectedItem = genderInput->fields.mSelectedItem;
      if ( !*(&Gender_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method, v2);
      this = (ScriptDefaultFilePlayerMenu_o *)Gender__ToData(mSelectedItem, 0);
      startModeInput = v3->fields.startModeInput;
      v3->fields.selectGenderIndex = (int)this;
      if ( startModeInput )
      {
        v13 = startModeInput->fields.mSelectedItem;
        v3->fields.selectStartModeName = v13;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v3->fields.selectStartModeName,
          (int32_t)v13,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        this = (ScriptDefaultFilePlayerMenu_o *)v3->fields.hiddenTruthSprite;
        if ( this )
        {
          enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0);
          selectPlayerFilePath = v3->fields.selectPlayerFilePath;
          selectObjectPath = v3->fields.selectObjectPath;
          selectGenderIndex = v3->fields.selectGenderIndex;
          selectStartModeName = v3->fields.selectStartModeName;
          v3->fields.selectIsHiddenTruthSetting = enabled;
          if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v14, v15);
          if ( ScriptManager__SetScriptPlayerSetting(
                 selectPlayerFilePath,
                 selectObjectPath,
                 selectGenderIndex,
                 selectStartModeName,
                 enabled,
                 0) )
          {
            this = (ScriptDefaultFilePlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( !this )
              goto LABEL_17;
            ScriptManager__WriteSetting((ScriptManager_o *)this, 0);
          }
          debugTestRootComponent = v3->fields.debugTestRootComponent;
          v3->fields.state = 5;
          v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)v3, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          v23 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(v23, (Il2CppObject *)v3, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0);
          JumpLine = ScriptDefaultFilePlayerMenu__GetJumpLine(v3, v24);
          memset(&v28, 0, sizeof(v28));
          ScriptConnectData___ctor(
            &v28,
            (System_String_o *)StringLiteral_3397/*"C:/Avalon/Temporary/ScriptData"*/,
            (System_String_o *)StringLiteral_5398/*"DefaultScript.txt"*/,
            v22,
            v23,
            JumpLine,
            1,
            v26);
          if ( debugTestRootComponent )
          {
            v27 = v28;
            DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v27, 0);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_2213CDC(this, method);
  }
}


void ScriptDefaultFilePlayerMenu__Open(
        ScriptDefaultFilePlayerMenu_o *this,
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ScriptManager_o *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  ScriptManager_c *v19; // x0
  struct System_String_o *scriptPlayerPathSettingAddress; // x1
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  ScriptManager_c *v28; // x0
  struct System_String_o *scriptPlayerObjectSettingAddress; // x1
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  ScriptManager_c *v37; // x0
  int v38; // w9
  struct System_String_o *scriptStartModeSettingName; // x1
  __int64 v40; // x2
  ScriptManager_c *v41; // x0
  struct ScriptManager_StaticFields *static_fields; // x8
  UIPopupList_o *genderInput; // x21
  __int64 v44; // x2
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x21
  System_Enum_o v46; // [xsp+8h] [xbp-48h] BYREF
  int32_t selectGenderIndex; // [xsp+18h] [xbp-38h]

  if ( (byte_596DD14 & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_2213A60(&Gender_Type_TypeInfo);
    byte_596DD14 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_45;
    ScriptManager__ReadSetting(Instance, 0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v12, v13);
    if ( !byte_596DC8C )
    {
      sub_2213A60(&ScriptManager_TypeInfo);
      byte_596DC8C = 1;
    }
    v19 = ScriptManager_TypeInfo;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v12, v13);
      v19 = ScriptManager_TypeInfo;
    }
    scriptPlayerPathSettingAddress = v19->static_fields->scriptPlayerPathSettingAddress;
    this->fields.selectPlayerFilePath = scriptPlayerPathSettingAddress;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectPlayerFilePath,
      (int32_t)scriptPlayerPathSettingAddress,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( !byte_596DC8D )
    {
      sub_2213A60(&ScriptManager_TypeInfo);
      byte_596DC8D = 1;
    }
    v28 = ScriptManager_TypeInfo;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v21, v22);
      v28 = ScriptManager_TypeInfo;
    }
    scriptPlayerObjectSettingAddress = v28->static_fields->scriptPlayerObjectSettingAddress;
    this->fields.selectObjectPath = scriptPlayerObjectSettingAddress;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectObjectPath,
      (int32_t)scriptPlayerObjectSettingAddress,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    if ( !byte_596DC8E )
    {
      sub_2213A60(&ScriptManager_TypeInfo);
      byte_596DC8E = 1;
    }
    v37 = ScriptManager_TypeInfo;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v30, v31);
      v37 = ScriptManager_TypeInfo;
    }
    v38 = (unsigned __int8)byte_596DC8B;
    this->fields.selectGenderIndex = v37->static_fields->scriptGenderSettingIndex;
    if ( !v38 )
    {
      sub_2213A60(&ScriptManager_TypeInfo);
      v37 = ScriptManager_TypeInfo;
      byte_596DC8B = 1;
    }
    if ( !*(&v37->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v37, v30, v31);
      v37 = ScriptManager_TypeInfo;
    }
    scriptStartModeSettingName = v37->static_fields->scriptStartModeSettingName;
    this->fields.selectStartModeName = scriptStartModeSettingName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectStartModeName,
      (int32_t)scriptStartModeSettingName,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    if ( !byte_596DD83 )
    {
      sub_2213A60(&ScriptManager_TypeInfo);
      byte_596DD83 = 1;
    }
    v41 = ScriptManager_TypeInfo;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v11, v40);
      v41 = ScriptManager_TypeInfo;
    }
    static_fields = v41->static_fields;
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
    v46.klass = (System_Enum_c *)Gender_Type_TypeInfo;
    v46.monitor = (void *)-1LL;
    Instance = (ScriptManager_o *)System_Enum__ToString(&v46, 0);
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
    if ( !byte_596DD84 )
    {
      sub_2213A60(&ScriptManager_TypeInfo);
      byte_596DD84 = 1;
    }
    Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v11, v44);
      Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    }
    if ( !forceCheckOnSprite )
LABEL_45:
      sub_2213CDC(Instance, v11);
    UnityEngine_Behaviour__set_enabled(forceCheckOnSprite, BYTE1(Instance->fields.equipViewSeed[3].fields.prefab), 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptDefaultFilePlayerMenu_o *v13; // x0
  ScriptDefaultFilePlayerMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DD12 & 1) == 0 )
  {
    sub_2213A60(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
    byte_596DD12 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptDefaultFilePlayerMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptDefaultFilePlayerMenu_o *v13; // x0
  ScriptDefaultFilePlayerMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DD13 & 1) == 0 )
  {
    sub_2213A60(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo);
    byte_596DD13 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptDefaultFilePlayerMenu__Open(v13, v14, v15);
}


void ScriptDefaultFilePlayerMenu_CallbackFunc___ctor(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2008978;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2008930;
}


System_IAsyncResult_o *ScriptDefaultFilePlayerMenu_CallbackFunc__BeginInvoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ScriptDefaultFilePlayerMenu_CallbackFunc__EndInvoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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