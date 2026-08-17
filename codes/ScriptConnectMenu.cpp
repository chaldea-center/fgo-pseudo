void ScriptConnectMenu___ctor(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void ScriptConnectMenu__Callback(ScriptConnectMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ScriptConnectMenu_CallbackFunc_o *v9; // x20
  struct ScriptConnectMenu_CallbackFunc_o *callbackFunc; // t1

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


void ScriptConnectMenu__Close(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *serverSettingRootObject; // x0

  ScriptConnectMenu__EndInput(this, method);
  serverSettingRootObject = this->fields.serverSettingRootObject;
  this->fields.state = 0;
  if ( !serverSettingRootObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(serverSettingRootObject, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ScriptConnectMenu__CloseAction(ScriptConnectMenu_o *this, bool result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  DebugTestRootComponent_o *parentComponent_k__BackingField; // x19
  ScriptManager_c *v8; // x0
  System_String_o *scriptServerSettingAddress; // x21
  System_String_o *scriptObjectSettingAddress; // x22
  System_Action_o *v11; // x23
  System_Action_o *v12; // x24
  const MethodInfo *v13; // x7
  __int64 v14; // x0
  __int64 v15; // x1
  ScriptConnectData_o v16; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v17; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_596DD09 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DD09 = 1;
  }
  ScriptConnectMenu__Close(this, (const MethodInfo *)result);
  if ( result )
  {
    parentComponent_k__BackingField = this->fields._parentComponent_k__BackingField;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v5, v6);
    if ( !byte_596DC89 )
    {
      sub_2213A60(&ScriptManager_TypeInfo);
      byte_596DC89 = 1;
    }
    v8 = ScriptManager_TypeInfo;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v5, v6);
      v8 = ScriptManager_TypeInfo;
    }
    scriptServerSettingAddress = v8->static_fields->scriptServerSettingAddress;
    if ( !byte_596DC8A )
    {
      sub_2213A60(&ScriptManager_TypeInfo);
      v8 = ScriptManager_TypeInfo;
      byte_596DC8A = 1;
    }
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v5, v6);
      v8 = ScriptManager_TypeInfo;
    }
    scriptObjectSettingAddress = v8->static_fields->scriptObjectSettingAddress;
    v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, (intptr_t)this->klass->vtable._4_StartMenu.method, 0);
    v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, (intptr_t)this->klass->vtable._4_StartMenu.method, 0);
    memset(&v17, 0, sizeof(v17));
    ScriptConnectData___ctor(&v17, scriptServerSettingAddress, scriptObjectSettingAddress, v11, v12, -1, 0, v13);
    if ( !parentComponent_k__BackingField )
      sub_2213CDC(v14, v15);
    v16 = v17;
    DebugTestRootComponent__StartConnectScript(parentComponent_k__BackingField, &v16, 0);
  }
}


void ScriptConnectMenu__EndConnectScriptPlay(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  ScriptConnectListViewMenu_o *scriptConnectListViewMenu; // x20
  System_String_o *selectConnectPath; // x21
  System_String_o *Text; // x22
  ScriptConnectListViewMenu_CallbackFunc_o *v7; // x23
  const MethodInfo *v8; // x3
  System_String_o *v9; // x2
  const MethodInfo *v10; // x5

  if ( (byte_596DD0F & 1) == 0 )
  {
    sub_2213A60(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ScriptConnectMenu_OnEndSelectObject__);
    byte_596DD0F = 1;
  }
  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  this->fields.state = 2;
  if ( !jumpLineObjectInput
    || (scriptConnectListViewMenu = this->fields.scriptConnectListViewMenu,
        selectConnectPath = this->fields.selectConnectPath,
        Text = UILineInput__GetText(jumpLineObjectInput, 0),
        v7 = (ScriptConnectListViewMenu_CallbackFunc_o *)sub_2213CCC(ScriptConnectListViewMenu_CallbackFunc_TypeInfo),
        ScriptConnectListViewMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ScriptConnectMenu_OnEndSelectObject__,
          v8),
        !scriptConnectListViewMenu) )
  {
    sub_2213CDC(jumpLineObjectInput, method);
  }
  ScriptConnectListViewMenu__Open(scriptConnectListViewMenu, selectConnectPath, v9, Text, v7, v10);
}


void ScriptConnectMenu__EndInput(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *dataScriptPathInput; // x0
  UIInput_o *v4; // x20
  UIInput_o *v5; // x21

  if ( (byte_596DD0B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DD0B = 1;
  }
  if ( this->fields.state )
  {
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.dataScriptPathInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    dataScriptPathInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       dataScriptPathInput,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.dataScriptObjectInput )
      goto LABEL_19;
    v4 = (UIInput_o *)dataScriptPathInput;
    dataScriptPathInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this->fields.dataScriptObjectInput,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v4 )
      goto LABEL_19;
    v5 = (UIInput_o *)dataScriptPathInput;
    UIInput__set_value(v4, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !v5 )
      goto LABEL_19;
    UIInput__set_value(v5, (System_String_o *)StringLiteral_1/*""*/, 0);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.dataScriptPathInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    UILineInput__SetInputEnable((UILineInput_o *)dataScriptPathInput, 0, 0);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.dataScriptObjectInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    UILineInput__SetInputEnable((UILineInput_o *)dataScriptPathInput, 0, 0);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.jumpLineObjectInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    UILineInput__SetInputEnable((UILineInput_o *)dataScriptPathInput, 0, 0);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.genderInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 0, 0);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.startModeInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 1, 0);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.hiddenTruthButton;
    if ( !dataScriptPathInput
      || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, const char *))dataScriptPathInput->klass[1]._1.name)(
            dataScriptPathInput,
            0,
            dataScriptPathInput->klass[1]._1.namespaze),
          (dataScriptPathInput = (UnityEngine_Component_o *)this->fields.forceCheckOnButton) == 0)
      || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, const char *))dataScriptPathInput->klass[1]._1.name)(
            dataScriptPathInput,
            0,
            dataScriptPathInput->klass[1]._1.namespaze),
          (dataScriptPathInput = (UnityEngine_Component_o *)this->fields.serverDecideButton) == 0)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 0, 0),
          (dataScriptPathInput = (UnityEngine_Component_o *)this->fields.serverCancelButton) == 0) )
    {
LABEL_19:
      sub_2213CDC(dataScriptPathInput, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 0, 0);
    UnityEngine_Input__set_imeCompositionMode(0, 0);
  }
}


void ScriptConnectMenu__EndPlayScript(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


int32_t ScriptConnectMenu__GetJumpLine(ScriptConnectMenu_o *this, const MethodInfo *method)
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


System_String_o *ScriptConnectMenu__GetJumpLineString(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_2213CDC(0, method);
  return UILineInput__GetText(jumpLineObjectInput, 0);
}


void ScriptConnectMenu__OnChangeServerInput(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  ;
}


void ScriptConnectMenu__OnClickCancel(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 1 )
  {
    ScriptConnectMenu__EndInput(this, method);
    this->fields.state = 3;
    ScriptConnectMenu__Callback(this, 0, v3);
  }
}


void ScriptConnectMenu__OnClickDecide(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *dataScriptPathInput; // x0
  struct System_String_o *Text; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_String_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x2
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  bool enabled; // w20
  System_String_o *selectConnectPath; // x21
  System_String_o *selectObjectPath; // x22
  int32_t selectGenderIndex; // w23
  System_String_o *selectStartModeName; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  System_String_o *v38; // x21
  System_String_o *v39; // x22
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v41; // x23
  System_Action_o *v42; // x24
  const MethodInfo *v43; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v45; // x7
  ScriptConnectData_o v46; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v47; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_596DD10 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Gender_TypeInfo);
    sub_2213A60(&Method_ScriptConnectMenu_EndPlayScript__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_596DD10 = 1;
  }
  if ( this->fields.state == 1 )
  {
    dataScriptPathInput = this->fields.dataScriptPathInput;
    if ( dataScriptPathInput )
    {
      Text = UILineInput__GetText(dataScriptPathInput, 0);
      this->fields.selectConnectPath = Text;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.selectConnectPath,
        (int32_t)Text,
        v5,
        v6,
        v7,
        v8,
        v9,
        v10);
      dataScriptPathInput = this->fields.dataScriptObjectInput;
      if ( dataScriptPathInput )
      {
        v11 = UILineInput__GetText(dataScriptPathInput, 0);
        this->fields.selectObjectPath = v11;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.selectObjectPath,
          (int32_t)v11,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17);
        genderInput = this->fields.genderInput;
        if ( genderInput )
        {
          mSelectedItem = genderInput->fields.mSelectedItem;
          if ( !*(&Gender_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method, v18);
          dataScriptPathInput = (UILineInput_o *)Gender__ToData(mSelectedItem, 0);
          startModeInput = this->fields.startModeInput;
          this->fields.selectGenderIndex = (int)dataScriptPathInput;
          if ( startModeInput )
          {
            v28 = startModeInput->fields.mSelectedItem;
            this->fields.selectStartModeName = v28;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.selectStartModeName,
              (int32_t)v28,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26);
            dataScriptPathInput = (UILineInput_o *)this->fields.hiddenTruthSprite;
            if ( dataScriptPathInput )
            {
              enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 0);
              selectConnectPath = this->fields.selectConnectPath;
              selectObjectPath = this->fields.selectObjectPath;
              selectGenderIndex = this->fields.selectGenderIndex;
              selectStartModeName = this->fields.selectStartModeName;
              this->fields.selectIsHiddenTruthSetting = enabled;
              if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v29, v30);
              if ( ScriptManager__SetScriptServerSetting(
                     selectConnectPath,
                     selectObjectPath,
                     selectGenderIndex,
                     selectStartModeName,
                     enabled,
                     0) )
              {
                dataScriptPathInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                if ( !dataScriptPathInput )
                  goto LABEL_21;
                ScriptManager__WriteSetting((ScriptManager_o *)dataScriptPathInput, 0);
              }
              if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v36, v37);
              ScriptManager__ClearSelectRouteArray(0);
              v38 = this->fields.selectConnectPath;
              v39 = this->fields.selectObjectPath;
              debugTestRootComponent = this->fields.debugTestRootComponent;
              this->fields.state = 5;
              v41 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(v41, (Il2CppObject *)this, Method_ScriptConnectMenu_EndPlayScript__, 0);
              v42 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(v42, (Il2CppObject *)this, Method_ScriptConnectMenu_EndPlayScript__, 0);
              JumpLine = ScriptConnectMenu__GetJumpLine(this, v43);
              memset(&v47, 0, sizeof(v47));
              ScriptConnectData___ctor(&v47, v38, v39, v41, v42, JumpLine, 0, v45);
              if ( debugTestRootComponent )
              {
                v46 = v47;
                DebugTestRootComponent__StartConnectScript(debugTestRootComponent, &v46, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_2213CDC(dataScriptPathInput, method);
  }
}


void ScriptConnectMenu__OnClickForceCheckOn(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *forceCheckOnSprite; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  bool enabled; // w19
  ScriptManager_c *v7; // x0

  if ( (byte_596DD0C & 1) == 0 )
  {
    sub_2213A60(&ScriptManager_TypeInfo);
    byte_596DD0C = 1;
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


void ScriptConnectMenu__OnClickHiddenTruth(ScriptConnectMenu_o *this, const MethodInfo *method)
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


void ScriptConnectMenu__OnClickSelect(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *dataScriptPathInput; // x0
  struct System_String_o *Text; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x2
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v21; // x1
  ScriptConnectListViewMenu_o *scriptConnectListViewMenu; // x20
  System_String_o *selectConnectPath; // x21
  System_String_o *v24; // x22
  ScriptConnectListViewMenu_CallbackFunc_o *v25; // x23
  const MethodInfo *v26; // x3
  System_String_o *v27; // x2
  const MethodInfo *v28; // x5

  if ( (byte_596DD0D & 1) == 0 )
  {
    sub_2213A60(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Gender_TypeInfo);
    sub_2213A60(&Method_ScriptConnectMenu_OnEndSelectObject__);
    byte_596DD0D = 1;
  }
  if ( this->fields.state == 1 )
  {
    dataScriptPathInput = this->fields.dataScriptPathInput;
    if ( !dataScriptPathInput )
      goto LABEL_13;
    Text = UILineInput__GetText(dataScriptPathInput, 0);
    this->fields.selectConnectPath = Text;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectConnectPath,
      (int32_t)Text,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    genderInput = this->fields.genderInput;
    if ( !genderInput )
      goto LABEL_13;
    mSelectedItem = genderInput->fields.mSelectedItem;
    if ( !*(&Gender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method, v11);
    dataScriptPathInput = (UILineInput_o *)Gender__ToData(mSelectedItem, 0);
    startModeInput = this->fields.startModeInput;
    this->fields.selectGenderIndex = (int)dataScriptPathInput;
    if ( !startModeInput )
      goto LABEL_13;
    v21 = startModeInput->fields.mSelectedItem;
    this->fields.selectStartModeName = v21;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectStartModeName,
      (int32_t)v21,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    dataScriptPathInput = this->fields.jumpLineObjectInput;
    this->fields.state = 2;
    if ( !dataScriptPathInput
      || (scriptConnectListViewMenu = this->fields.scriptConnectListViewMenu,
          selectConnectPath = this->fields.selectConnectPath,
          v24 = UILineInput__GetText(dataScriptPathInput, 0),
          v25 = (ScriptConnectListViewMenu_CallbackFunc_o *)sub_2213CCC(ScriptConnectListViewMenu_CallbackFunc_TypeInfo),
          ScriptConnectListViewMenu_CallbackFunc___ctor(
            v25,
            (Il2CppObject *)this,
            Method_ScriptConnectMenu_OnEndSelectObject__,
            v26),
          !scriptConnectListViewMenu) )
    {
LABEL_13:
      sub_2213CDC(dataScriptPathInput, method);
    }
    ScriptConnectListViewMenu__Open(scriptConnectListViewMenu, selectConnectPath, v27, v24, v25, v28);
  }
}


// local variable allocation has failed, the output may be wrong!
void ScriptConnectMenu__OnEndSelectObject(
        ScriptConnectMenu_o *this,
        int32_t result,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Component_o *dataScriptObjectInput; // x0
  UIInput_o *v12; // x22
  UIInput_o *v13; // x21
  struct ScriptConnectListViewMenu_o *scriptConnectListViewMenu; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *selectConnectPath; // x21
  System_String_o *selectObjectPath; // x22
  int32_t selectGenderIndex; // w23
  System_String_o *selectStartModeName; // x24
  _BOOL4 selectIsHiddenTruthSetting; // w25
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  DebugTestRootComponent_o *debugTestRootComponent; // x21
  System_Action_o *v25; // x24
  System_Action_o *v26; // x25
  const MethodInfo *v27; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v29; // x7
  ScriptConnectData_o v30; // [xsp+0h] [xbp-B0h] BYREF
  ScriptConnectData_o v31; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_596DD0E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&Method_ScriptConnectMenu_EndConnectScriptPlay__);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_596DD0E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (result & 0xFFFFFFFE) == 2 )
    {
      this->fields.selectObjectPath = path;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.selectObjectPath,
        (int32_t)path,
        path,
        (System_String_o *)method,
        v4,
        v5,
        v6,
        v7);
      dataScriptObjectInput = (UnityEngine_Component_o *)this->fields.dataScriptObjectInput;
      if ( dataScriptObjectInput )
      {
        dataScriptObjectInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                             dataScriptObjectInput,
                                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
        if ( this->fields.jumpLineObjectInput )
        {
          v12 = (UIInput_o *)dataScriptObjectInput;
          dataScriptObjectInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                               (UnityEngine_Component_o *)this->fields.jumpLineObjectInput,
                                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
          if ( v12 )
          {
            v13 = (UIInput_o *)dataScriptObjectInput;
            UIInput__set_value(v12, this->fields.selectObjectPath, 0);
            scriptConnectListViewMenu = this->fields.scriptConnectListViewMenu;
            if ( scriptConnectListViewMenu )
            {
              dataScriptObjectInput = (UnityEngine_Component_o *)scriptConnectListViewMenu->fields.jumpLineObjectInput;
              if ( dataScriptObjectInput )
              {
                dataScriptObjectInput = (UnityEngine_Component_o *)UILineInput__GetText(
                                                                     (UILineInput_o *)dataScriptObjectInput,
                                                                     0);
                if ( v13 )
                {
                  UIInput__set_value(v13, (System_String_o *)dataScriptObjectInput, 0);
                  selectConnectPath = this->fields.selectConnectPath;
                  selectObjectPath = this->fields.selectObjectPath;
                  selectGenderIndex = this->fields.selectGenderIndex;
                  selectStartModeName = this->fields.selectStartModeName;
                  selectIsHiddenTruthSetting = this->fields.selectIsHiddenTruthSetting;
                  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v15, v16);
                  if ( ScriptManager__SetScriptServerSetting(
                         selectConnectPath,
                         selectObjectPath,
                         selectGenderIndex,
                         selectStartModeName,
                         selectIsHiddenTruthSetting,
                         0) )
                  {
                    dataScriptObjectInput = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( !dataScriptObjectInput )
                      goto LABEL_24;
                    ScriptManager__WriteSetting((ScriptManager_o *)dataScriptObjectInput, 0);
                  }
                  v22 = this->fields.selectConnectPath;
                  v23 = this->fields.selectObjectPath;
                  debugTestRootComponent = this->fields.debugTestRootComponent;
                  this->fields.state = 5;
                  v25 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(v25, (Il2CppObject *)this, Method_ScriptConnectMenu_EndConnectScriptPlay__, 0);
                  v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(v26, (Il2CppObject *)this, Method_ScriptConnectMenu_EndConnectScriptPlay__, 0);
                  JumpLine = ScriptConnectMenu__GetJumpLine(this, v27);
                  memset(&v31, 0, sizeof(v31));
                  ScriptConnectData___ctor(&v31, v22, v23, v25, v26, JumpLine, result == 3, v29);
                  if ( debugTestRootComponent )
                  {
                    v30 = v31;
                    DebugTestRootComponent__StartConnectScript(debugTestRootComponent, &v30, 0);
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
      dataScriptObjectInput = (UnityEngine_Component_o *)this->fields.scriptConnectListViewMenu;
      if ( dataScriptObjectInput )
      {
        ScriptConnectListViewMenu__Close(
          (ScriptConnectListViewMenu_o *)dataScriptObjectInput,
          *(const MethodInfo **)&result);
        dataScriptObjectInput = (UnityEngine_Component_o *)this->fields.dataScriptPathInput;
        this->fields.state = 1;
        if ( dataScriptObjectInput )
        {
          UILineInput__SetInputEnable((UILineInput_o *)dataScriptObjectInput, 1, 0);
          dataScriptObjectInput = (UnityEngine_Component_o *)this->fields.serverDecideButton;
          if ( dataScriptObjectInput )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptObjectInput, 1, 0);
            dataScriptObjectInput = (UnityEngine_Component_o *)this->fields.serverCancelButton;
            if ( dataScriptObjectInput )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptObjectInput, 1, 0);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_2213CDC(dataScriptObjectInput, *(_QWORD *)&result);
  }
}


void ScriptConnectMenu__Open(
        ScriptConnectMenu_o *this,
        ScriptConnectMenu_CallbackFunc_o *callback,
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
  struct System_String_o *scriptServerSettingAddress; // x1
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  ScriptManager_c *v28; // x0
  struct System_String_o *scriptObjectSettingAddress; // x1
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
  UIInput_o *v43; // x22
  UIInput_o *v44; // x23
  UIPopupList_o *genderInput; // x21
  __int64 v46; // x2
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x21
  System_Enum_o v48; // [xsp+8h] [xbp-48h] BYREF
  int32_t selectGenderIndex; // [xsp+18h] [xbp-38h]

  if ( (byte_596DD0A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&ScriptManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_2213A60(&Gender_Type_TypeInfo);
    byte_596DD0A = 1;
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
      goto LABEL_51;
    ScriptManager__ReadSetting(Instance, 0);
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v12, v13);
    if ( !byte_596DC89 )
    {
      sub_2213A60(&ScriptManager_TypeInfo);
      byte_596DC89 = 1;
    }
    v19 = ScriptManager_TypeInfo;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v12, v13);
      v19 = ScriptManager_TypeInfo;
    }
    scriptServerSettingAddress = v19->static_fields->scriptServerSettingAddress;
    this->fields.selectConnectPath = scriptServerSettingAddress;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectConnectPath,
      (int32_t)scriptServerSettingAddress,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( !byte_596DC8A )
    {
      sub_2213A60(&ScriptManager_TypeInfo);
      byte_596DC8A = 1;
    }
    v28 = ScriptManager_TypeInfo;
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v21, v22);
      v28 = ScriptManager_TypeInfo;
    }
    scriptObjectSettingAddress = v28->static_fields->scriptObjectSettingAddress;
    this->fields.selectObjectPath = scriptObjectSettingAddress;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectObjectPath,
      (int32_t)scriptObjectSettingAddress,
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
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.dataScriptPathInput;
    if ( !Instance )
      goto LABEL_51;
    UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.dataScriptObjectInput;
    if ( !Instance )
      goto LABEL_51;
    UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.jumpLineObjectInput;
    if ( !Instance )
      goto LABEL_51;
    UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.genderInput;
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.startModeInput;
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.serverDecideButton;
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.serverCancelButton;
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0);
    Instance = (ScriptManager_o *)this->fields.dataScriptPathInput;
    if ( !Instance )
      goto LABEL_51;
    Instance = (ScriptManager_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.dataScriptObjectInput )
      goto LABEL_51;
    v43 = (UIInput_o *)Instance;
    Instance = (ScriptManager_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this->fields.dataScriptObjectInput,
                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v43 )
      goto LABEL_51;
    v44 = (UIInput_o *)Instance;
    UIInput__set_value(v43, this->fields.selectConnectPath, 0);
    if ( !v44 )
      goto LABEL_51;
    UIInput__set_value(v44, this->fields.selectObjectPath, 0);
    genderInput = this->fields.genderInput;
    selectGenderIndex = this->fields.selectGenderIndex;
    v48.klass = (System_Enum_c *)Gender_Type_TypeInfo;
    v48.monitor = (void *)-1LL;
    Instance = (ScriptManager_o *)System_Enum__ToString(&v48, 0);
    if ( !genderInput )
      goto LABEL_51;
    UIPopupList__set_value(genderInput, (System_String_o *)Instance, 0);
    Instance = (ScriptManager_o *)this->fields.startModeInput;
    if ( !Instance )
      goto LABEL_51;
    UIPopupList__set_value((UIPopupList_o *)Instance, this->fields.selectStartModeName, 0);
    Instance = (ScriptManager_o *)this->fields.hiddenTruthButton;
    if ( !Instance )
      goto LABEL_51;
    ((void (__fastcall *)(ScriptManager_o *, __int64, const char *))Instance->klass[1]._1.name)(
      Instance,
      1,
      Instance->klass[1]._1.namespaze);
    Instance = (ScriptManager_o *)this->fields.hiddenTruthSprite;
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, this->fields.selectIsHiddenTruthSetting, 0);
    Instance = (ScriptManager_o *)this->fields.forceCheckOnButton;
    if ( !Instance )
      goto LABEL_51;
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
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v11, v46);
      Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    }
    if ( !forceCheckOnSprite )
LABEL_51:
      sub_2213CDC(Instance, v11);
    UnityEngine_Behaviour__set_enabled(forceCheckOnSprite, BYTE1(Instance->fields.equipViewSeed[3].fields.prefab), 0);
    this->fields.state = 1;
  }
}


void ScriptConnectMenu__StartMenu(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  ScriptConnectMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_596DD08 & 1) == 0 )
  {
    sub_2213A60(&ScriptConnectMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ScriptConnectMenu_CloseAction__);
    byte_596DD08 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (ScriptConnectMenu_CallbackFunc_o *)sub_2213CCC(ScriptConnectMenu_CallbackFunc_TypeInfo);
  ScriptConnectMenu_CallbackFunc___ctor(v3, (Il2CppObject *)this, Method_ScriptConnectMenu_CloseAction__, v4);
  ScriptConnectMenu__Open(this, v3, v5);
}


void ScriptConnectMenu__add_callbackFunc(
        ScriptConnectMenu_o *this,
        ScriptConnectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptConnectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptConnectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptConnectMenu_o *v13; // x0
  ScriptConnectMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596DD06 & 1) == 0 )
  {
    sub_2213A60(&ScriptConnectMenu_CallbackFunc_TypeInfo);
    byte_596DD06 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptConnectMenu_CallbackFunc_c *)v8->klass != ScriptConnectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, ScriptConnectMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptConnectMenu__remove_callbackFunc(v13, v14, v15);
}


void ScriptConnectMenu__remove_callbackFunc(
        ScriptConnectMenu_o *this,
        ScriptConnectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptConnectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptConnectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ScriptConnectMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596DD07 & 1) == 0 )
  {
    sub_2213A60(&ScriptConnectMenu_CallbackFunc_TypeInfo);
    byte_596DD07 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ScriptConnectMenu_CallbackFunc_c *)v8->klass != ScriptConnectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, ScriptConnectMenu_CallbackFunc_TypeInfo, v9, v10);
  ScriptConnectMenu__StartMenu(v13, v14);
}


void ScriptConnectMenu_CallbackFunc___ctor(
        ScriptConnectMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_2008760;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2008718;
}


System_IAsyncResult_o *ScriptConnectMenu_CallbackFunc__BeginInvoke(
        ScriptConnectMenu_CallbackFunc_o *this,
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


void ScriptConnectMenu_CallbackFunc__EndInvoke(
        ScriptConnectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ScriptConnectMenu_CallbackFunc__Invoke(
        ScriptConnectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}