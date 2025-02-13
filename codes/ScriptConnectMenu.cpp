void __fastcall ScriptConnectMenu___ctor(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
}


void __fastcall ScriptConnectMenu__Callback(ScriptConnectMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ScriptConnectMenu_CallbackFunc_o *v9; // x20
  struct ScriptConnectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C21DDC(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ScriptConnectMenu__Close(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *serverSettingRootObject; // x0

  ScriptConnectMenu__EndInput(this, method);
  serverSettingRootObject = this->fields.serverSettingRootObject;
  this->fields.state = 0;
  if ( !serverSettingRootObject )
    sub_1C22094(0LL, v3);
  UnityEngine_GameObject__SetActive(serverSettingRootObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectMenu__CloseAction(ScriptConnectMenu_o *this, bool result, const MethodInfo *method)
{
  DebugTestRootComponent_o *parentComponent_k__BackingField; // x19
  ScriptManager_c *v6; // x0
  System_String_o *scriptServerSettingAddress; // x21
  System_String_o *scriptObjectSettingAddress; // x22
  System_Action_o *v9; // x23
  System_Action_o *v10; // x24
  const MethodInfo *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  ScriptConnectData_o v14; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v15; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4BD9C90 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    byte_4BD9C90 = 1;
  }
  ScriptConnectMenu__Close(this, (const MethodInfo *)result);
  if ( result )
  {
    parentComponent_k__BackingField = this->fields._parentComponent_k__BackingField;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    if ( !byte_4BD9C35 )
    {
      sub_1C21E38(&ScriptManager_TypeInfo);
      byte_4BD9C35 = 1;
    }
    v6 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v6 = ScriptManager_TypeInfo;
    }
    scriptServerSettingAddress = v6->static_fields->scriptServerSettingAddress;
    if ( !byte_4BD9C36 )
    {
      sub_1C21E38(&ScriptManager_TypeInfo);
      v6 = ScriptManager_TypeInfo;
      byte_4BD9C36 = 1;
    }
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ScriptManager_TypeInfo;
    }
    scriptObjectSettingAddress = v6->static_fields->scriptObjectSettingAddress;
    v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
    v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
    memset(&v15, 0, sizeof(v15));
    ScriptConnectData___ctor(&v15, scriptServerSettingAddress, scriptObjectSettingAddress, v9, v10, -1, 0, v11);
    if ( !parentComponent_k__BackingField )
      sub_1C22094(v12, v13);
    v14 = v15;
    DebugTestRootComponent__StartConnectScript(parentComponent_k__BackingField, &v14, 0LL);
  }
}


void __fastcall ScriptConnectMenu__EndConnectScriptPlay(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  ScriptConnectListViewMenu_o *scriptConnectListViewMenu; // x20
  System_String_o *selectConnectPath; // x21
  System_String_o *Text; // x22
  ScriptConnectListViewMenu_CallbackFunc_o *v7; // x23
  const MethodInfo *v8; // x3
  System_String_o *v9; // x2
  const MethodInfo *v10; // x5

  if ( (byte_4BD9C96 & 1) == 0 )
  {
    sub_1C21E38(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ScriptConnectMenu_OnEndSelectObject__);
    byte_4BD9C96 = 1;
  }
  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  this->fields.state = 2;
  if ( !jumpLineObjectInput
    || (scriptConnectListViewMenu = this->fields.scriptConnectListViewMenu,
        selectConnectPath = this->fields.selectConnectPath,
        Text = UILineInput__GetText(jumpLineObjectInput, 0LL),
        v7 = (ScriptConnectListViewMenu_CallbackFunc_o *)sub_1C22084(ScriptConnectListViewMenu_CallbackFunc_TypeInfo),
        ScriptConnectListViewMenu_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_ScriptConnectMenu_OnEndSelectObject__,
          v8),
        !scriptConnectListViewMenu) )
  {
    sub_1C22094(jumpLineObjectInput, method);
  }
  ScriptConnectListViewMenu__Open(scriptConnectListViewMenu, selectConnectPath, v9, Text, v7, v10);
}


void __fastcall ScriptConnectMenu__EndInput(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *dataScriptPathInput; // x0
  UIInput_o *v4; // x20
  UIInput_o *v5; // x21

  if ( (byte_4BD9C92 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD9C92 = 1;
  }
  if ( this->fields.state )
  {
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.dataScriptPathInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    dataScriptPathInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       dataScriptPathInput,
                                                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.dataScriptObjectInput )
      goto LABEL_19;
    v4 = (UIInput_o *)dataScriptPathInput;
    dataScriptPathInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this->fields.dataScriptObjectInput,
                                                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v4 )
      goto LABEL_19;
    v5 = (UIInput_o *)dataScriptPathInput;
    UIInput__set_value(v4, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v5 )
      goto LABEL_19;
    UIInput__set_value(v5, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.dataScriptPathInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    UILineInput__SetInputEnable((UILineInput_o *)dataScriptPathInput, 0, 0LL);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.dataScriptObjectInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    UILineInput__SetInputEnable((UILineInput_o *)dataScriptPathInput, 0, 0LL);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.jumpLineObjectInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    UILineInput__SetInputEnable((UILineInput_o *)dataScriptPathInput, 0, 0LL);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.genderInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 0, 0LL);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.startModeInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 1, 0LL);
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.hiddenTruthButton;
    if ( !dataScriptPathInput
      || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))dataScriptPathInput->klass[1]._1.namespaze)(
            dataScriptPathInput,
            0LL,
            dataScriptPathInput->klass[1]._1.byval_arg.data),
          (dataScriptPathInput = (UnityEngine_Component_o *)this->fields.forceCheckOnButton) == 0LL)
      || (((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))dataScriptPathInput->klass[1]._1.namespaze)(
            dataScriptPathInput,
            0LL,
            dataScriptPathInput->klass[1]._1.byval_arg.data),
          (dataScriptPathInput = (UnityEngine_Component_o *)this->fields.serverDecideButton) == 0LL)
      || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 0, 0LL),
          (dataScriptPathInput = (UnityEngine_Component_o *)this->fields.serverCancelButton) == 0LL) )
    {
LABEL_19:
      sub_1C22094(dataScriptPathInput, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 0, 0LL);
    UnityEngine_Input__set_imeCompositionMode(0, 0LL);
  }
}


void __fastcall ScriptConnectMenu__EndPlayScript(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


int32_t __fastcall ScriptConnectMenu__GetJumpLine(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C22094(0LL, method);
  Text = UILineInput__GetText(jumpLineObjectInput, 0LL);
  if ( System_String__IsNullOrEmpty(Text, 0LL) )
    return -1;
  else
    return System_Int32__Parse(Text, 0LL);
}


System_String_o *__fastcall ScriptConnectMenu__GetJumpLineString(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1C22094(0LL, method);
  return UILineInput__GetText(jumpLineObjectInput, 0LL);
}


void __fastcall ScriptConnectMenu__OnChangeServerInput(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ScriptConnectMenu__OnClickCancel(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 1 )
  {
    ScriptConnectMenu__EndInput(this, method);
    this->fields.state = 3;
    ScriptConnectMenu__Callback(this, 0, v3);
  }
}


void __fastcall ScriptConnectMenu__OnClickDecide(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *dataScriptPathInput; // x0
  struct System_String_o *Text; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_String_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v27; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectConnectPath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_String_o *v34; // x21
  System_String_o *v35; // x22
  System_Action_o *v36; // x23
  System_Action_o *v37; // x24
  const MethodInfo *v38; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v40; // x7
  ScriptConnectData_o v41; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v42; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4BD9C97 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Gender_TypeInfo);
    sub_1C21E38(&Method_ScriptConnectMenu_EndPlayScript__);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4BD9C97 = 1;
  }
  if ( this->fields.state == 1 )
  {
    dataScriptPathInput = this->fields.dataScriptPathInput;
    if ( dataScriptPathInput )
    {
      Text = UILineInput__GetText(dataScriptPathInput, 0LL);
      this->fields.selectConnectPath = Text;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectConnectPath, (int64_t)Text, v5, v6, v7, v8, v9, v10);
      dataScriptPathInput = this->fields.dataScriptObjectInput;
      if ( dataScriptPathInput )
      {
        v11 = UILineInput__GetText(dataScriptPathInput, 0LL);
        this->fields.selectObjectPath = v11;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.selectObjectPath,
          (int64_t)v11,
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
          if ( !Gender_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
          dataScriptPathInput = (UILineInput_o *)Gender__ToData(mSelectedItem, 0LL);
          startModeInput = this->fields.startModeInput;
          this->fields.selectGenderIndex = (int)dataScriptPathInput;
          if ( startModeInput )
          {
            v27 = startModeInput->fields.mSelectedItem;
            this->fields.selectStartModeName = v27;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&this->fields.selectStartModeName,
              (int64_t)v27,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
            dataScriptPathInput = (UILineInput_o *)this->fields.hiddenTruthSprite;
            if ( dataScriptPathInput )
            {
              enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 0LL);
              this->fields.selectIsHiddenTruthSetting = enabled;
              selectConnectPath = this->fields.selectConnectPath;
              selectObjectPath = this->fields.selectObjectPath;
              selectGenderIndex = this->fields.selectGenderIndex;
              selectStartModeName = this->fields.selectStartModeName;
              if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
              if ( ScriptManager__SetScriptServerSetting(
                     selectConnectPath,
                     selectObjectPath,
                     selectGenderIndex,
                     selectStartModeName,
                     enabled,
                     0LL) )
              {
                dataScriptPathInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                if ( !dataScriptPathInput )
                  goto LABEL_21;
                ScriptManager__WriteSetting((ScriptManager_o *)dataScriptPathInput, 0LL);
              }
              if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
              ScriptManager__ClearSelectRouteArray(0LL);
              this->fields.state = 5;
              debugTestRootComponent = this->fields.debugTestRootComponent;
              v34 = this->fields.selectConnectPath;
              v35 = this->fields.selectObjectPath;
              v36 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
              System_Action___ctor(v36, (Il2CppObject *)this, Method_ScriptConnectMenu_EndPlayScript__, 0LL);
              v37 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
              System_Action___ctor(v37, (Il2CppObject *)this, Method_ScriptConnectMenu_EndPlayScript__, 0LL);
              JumpLine = ScriptConnectMenu__GetJumpLine(this, v38);
              memset(&v42, 0, sizeof(v42));
              ScriptConnectData___ctor(&v42, v34, v35, v36, v37, JumpLine, 0, v40);
              if ( debugTestRootComponent )
              {
                v41 = v42;
                DebugTestRootComponent__StartConnectScript(debugTestRootComponent, &v41, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1C22094(dataScriptPathInput, method);
  }
}


void __fastcall ScriptConnectMenu__OnClickForceCheckOn(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *forceCheckOnSprite; // x0
  bool enabled; // w19
  ScriptManager_c *v5; // x0

  if ( (byte_4BD9C93 & 1) == 0 )
  {
    sub_1C21E38(&ScriptManager_TypeInfo);
    byte_4BD9C93 = 1;
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
    sub_1C22094(forceCheckOnSprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceCheckOnSprite, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4BD9D32 )
  {
    sub_1C21E38(&ScriptManager_TypeInfo);
    byte_4BD9D32 = 1;
  }
  v5 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v5 = ScriptManager_TypeInfo;
  }
  v5->static_fields->debugIsForceCheckOn = enabled;
}


void __fastcall ScriptConnectMenu__OnClickHiddenTruth(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *hiddenTruthSprite; // x0

  hiddenTruthSprite = this->fields.hiddenTruthSprite;
  if ( !hiddenTruthSprite
    || (hiddenTruthSprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                   (UnityEngine_Behaviour_o *)hiddenTruthSprite,
                                                   0LL),
        !this->fields.hiddenTruthSprite) )
  {
    sub_1C22094(hiddenTruthSprite, method);
  }
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)this->fields.hiddenTruthSprite,
    ((unsigned __int8)hiddenTruthSprite & 1) == 0,
    0LL);
}


void __fastcall ScriptConnectMenu__OnClickSelect(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *dataScriptPathInput; // x0
  struct System_String_o *Text; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v20; // x1
  ScriptConnectListViewMenu_o *scriptConnectListViewMenu; // x20
  System_String_o *selectConnectPath; // x21
  System_String_o *v23; // x22
  ScriptConnectListViewMenu_CallbackFunc_o *v24; // x23
  const MethodInfo *v25; // x3
  System_String_o *v26; // x2
  const MethodInfo *v27; // x5

  if ( (byte_4BD9C94 & 1) == 0 )
  {
    sub_1C21E38(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Gender_TypeInfo);
    sub_1C21E38(&Method_ScriptConnectMenu_OnEndSelectObject__);
    byte_4BD9C94 = 1;
  }
  if ( this->fields.state == 1 )
  {
    dataScriptPathInput = this->fields.dataScriptPathInput;
    if ( !dataScriptPathInput )
      goto LABEL_13;
    Text = UILineInput__GetText(dataScriptPathInput, 0LL);
    this->fields.selectConnectPath = Text;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectConnectPath, (int64_t)Text, v5, v6, v7, v8, v9, v10);
    genderInput = this->fields.genderInput;
    if ( !genderInput )
      goto LABEL_13;
    mSelectedItem = genderInput->fields.mSelectedItem;
    if ( !Gender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    dataScriptPathInput = (UILineInput_o *)Gender__ToData(mSelectedItem, 0LL);
    startModeInput = this->fields.startModeInput;
    this->fields.selectGenderIndex = (int)dataScriptPathInput;
    if ( !startModeInput )
      goto LABEL_13;
    v20 = startModeInput->fields.mSelectedItem;
    this->fields.selectStartModeName = v20;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.selectStartModeName,
      (int64_t)v20,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    dataScriptPathInput = this->fields.jumpLineObjectInput;
    this->fields.state = 2;
    if ( !dataScriptPathInput
      || (scriptConnectListViewMenu = this->fields.scriptConnectListViewMenu,
          selectConnectPath = this->fields.selectConnectPath,
          v23 = UILineInput__GetText(dataScriptPathInput, 0LL),
          v24 = (ScriptConnectListViewMenu_CallbackFunc_o *)sub_1C22084(ScriptConnectListViewMenu_CallbackFunc_TypeInfo),
          ScriptConnectListViewMenu_CallbackFunc___ctor(
            v24,
            (Il2CppObject *)this,
            Method_ScriptConnectMenu_OnEndSelectObject__,
            v25),
          !scriptConnectListViewMenu) )
    {
LABEL_13:
      sub_1C22094(dataScriptPathInput, method);
    }
    ScriptConnectListViewMenu__Open(scriptConnectListViewMenu, selectConnectPath, v26, v23, v24, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectMenu__OnEndSelectObject(
        ScriptConnectMenu_o *this,
        int32_t result,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  UnityEngine_Component_o *dataScriptObjectInput; // x0
  UIInput_o *v12; // x22
  UIInput_o *v13; // x21
  struct ScriptConnectListViewMenu_o *scriptConnectListViewMenu; // x8
  System_String_o *selectObjectPath; // x23
  System_String_o *selectConnectPath; // x24
  int32_t selectGenderIndex; // w22
  System_String_o *selectStartModeName; // x21
  _BOOL4 selectIsHiddenTruthSetting; // w25
  DebugTestRootComponent_o *debugTestRootComponent; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  System_Action_o *v23; // x24
  System_Action_o *v24; // x25
  const MethodInfo *v25; // x1
  int32_t JumpLine; // w5
  const MethodInfo *v27; // x7
  ScriptConnectData_o v28; // [xsp+0h] [xbp-B0h] BYREF
  ScriptConnectData_o v29; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4BD9C95 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C21E38(&Method_ScriptConnectMenu_EndConnectScriptPlay__);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    byte_4BD9C95 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (result & 0xFFFFFFFE) == 2 )
    {
      this->fields.selectObjectPath = path;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.selectObjectPath,
        (int64_t)path,
        (int64_t)path,
        (int32_t)method,
        v4,
        v5,
        v6,
        v7);
      dataScriptObjectInput = (UnityEngine_Component_o *)this->fields.dataScriptObjectInput;
      if ( dataScriptObjectInput )
      {
        dataScriptObjectInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                             dataScriptObjectInput,
                                                             (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
        if ( this->fields.jumpLineObjectInput )
        {
          v12 = (UIInput_o *)dataScriptObjectInput;
          dataScriptObjectInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                               (UnityEngine_Component_o *)this->fields.jumpLineObjectInput,
                                                               (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
          if ( v12 )
          {
            v13 = (UIInput_o *)dataScriptObjectInput;
            UIInput__set_value(v12, this->fields.selectObjectPath, 0LL);
            scriptConnectListViewMenu = this->fields.scriptConnectListViewMenu;
            if ( scriptConnectListViewMenu )
            {
              dataScriptObjectInput = (UnityEngine_Component_o *)scriptConnectListViewMenu->fields.jumpLineObjectInput;
              if ( dataScriptObjectInput )
              {
                dataScriptObjectInput = (UnityEngine_Component_o *)UILineInput__GetText(
                                                                     (UILineInput_o *)dataScriptObjectInput,
                                                                     0LL);
                if ( v13 )
                {
                  UIInput__set_value(v13, (System_String_o *)dataScriptObjectInput, 0LL);
                  selectConnectPath = this->fields.selectConnectPath;
                  selectObjectPath = this->fields.selectObjectPath;
                  selectGenderIndex = this->fields.selectGenderIndex;
                  selectStartModeName = this->fields.selectStartModeName;
                  selectIsHiddenTruthSetting = this->fields.selectIsHiddenTruthSetting;
                  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
                  if ( ScriptManager__SetScriptServerSetting(
                         selectConnectPath,
                         selectObjectPath,
                         selectGenderIndex,
                         selectStartModeName,
                         selectIsHiddenTruthSetting,
                         0LL) )
                  {
                    dataScriptObjectInput = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( !dataScriptObjectInput )
                      goto LABEL_24;
                    ScriptManager__WriteSetting((ScriptManager_o *)dataScriptObjectInput, 0LL);
                  }
                  this->fields.state = 5;
                  debugTestRootComponent = this->fields.debugTestRootComponent;
                  v21 = this->fields.selectConnectPath;
                  v22 = this->fields.selectObjectPath;
                  v23 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                  System_Action___ctor(v23, (Il2CppObject *)this, Method_ScriptConnectMenu_EndConnectScriptPlay__, 0LL);
                  v24 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                  System_Action___ctor(v24, (Il2CppObject *)this, Method_ScriptConnectMenu_EndConnectScriptPlay__, 0LL);
                  JumpLine = ScriptConnectMenu__GetJumpLine(this, v25);
                  memset(&v29, 0, sizeof(v29));
                  ScriptConnectData___ctor(&v29, v21, v22, v23, v24, JumpLine, result == 3, v27);
                  if ( debugTestRootComponent )
                  {
                    v28 = v29;
                    DebugTestRootComponent__StartConnectScript(debugTestRootComponent, &v28, 0LL);
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
          UILineInput__SetInputEnable((UILineInput_o *)dataScriptObjectInput, 1, 0LL);
          dataScriptObjectInput = (UnityEngine_Component_o *)this->fields.serverDecideButton;
          if ( dataScriptObjectInput )
          {
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptObjectInput, 1, 0LL);
            dataScriptObjectInput = (UnityEngine_Component_o *)this->fields.serverCancelButton;
            if ( dataScriptObjectInput )
            {
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptObjectInput, 1, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_24:
    sub_1C22094(dataScriptObjectInput, *(_QWORD *)&result);
  }
}


void __fastcall ScriptConnectMenu__Open(
        ScriptConnectMenu_o *this,
        ScriptConnectMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  ScriptManager_o *Instance; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  ScriptManager_c *v18; // x0
  struct System_String_o *scriptServerSettingAddress; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  ScriptManager_c *v26; // x0
  struct System_String_o *scriptObjectSettingAddress; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  ScriptManager_c *v34; // x0
  struct System_String_o *scriptStartModeSettingName; // x1
  ScriptManager_c *v36; // x0
  struct ScriptManager_StaticFields *static_fields; // x8
  UIInput_o *v38; // x22
  UIInput_o *v39; // x23
  UIPopupList_o *genderInput; // x21
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x21
  System_Enum_o v42; // [xsp+8h] [xbp-48h] BYREF
  int32_t selectGenderIndex; // [xsp+18h] [xbp-38h]

  if ( (byte_4BD9C91 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C21E38(&Gender_Type_TypeInfo);
    byte_4BD9C91 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    ScriptManager__ReadSetting(Instance, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    if ( !byte_4BD9C35 )
    {
      sub_1C21E38(&ScriptManager_TypeInfo);
      byte_4BD9C35 = 1;
    }
    v18 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v18 = ScriptManager_TypeInfo;
    }
    scriptServerSettingAddress = v18->static_fields->scriptServerSettingAddress;
    this->fields.selectConnectPath = scriptServerSettingAddress;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.selectConnectPath,
      (int64_t)scriptServerSettingAddress,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( !byte_4BD9C36 )
    {
      sub_1C21E38(&ScriptManager_TypeInfo);
      byte_4BD9C36 = 1;
    }
    v26 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v26 = ScriptManager_TypeInfo;
    }
    scriptObjectSettingAddress = v26->static_fields->scriptObjectSettingAddress;
    this->fields.selectObjectPath = scriptObjectSettingAddress;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.selectObjectPath,
      (int64_t)scriptObjectSettingAddress,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    if ( !byte_4BD9C3A )
    {
      sub_1C21E38(&ScriptManager_TypeInfo);
      byte_4BD9C3A = 1;
    }
    v34 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v34 = ScriptManager_TypeInfo;
    }
    this->fields.selectGenderIndex = v34->static_fields->scriptGenderSettingIndex;
    if ( !byte_4BD9C39 )
    {
      sub_1C21E38(&ScriptManager_TypeInfo);
      v34 = ScriptManager_TypeInfo;
      byte_4BD9C39 = 1;
    }
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ScriptManager_TypeInfo;
    }
    scriptStartModeSettingName = v34->static_fields->scriptStartModeSettingName;
    this->fields.selectStartModeName = scriptStartModeSettingName;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.selectStartModeName,
      (int64_t)scriptStartModeSettingName,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    if ( !byte_4BD9D30 )
    {
      sub_1C21E38(&ScriptManager_TypeInfo);
      byte_4BD9D30 = 1;
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
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.dataScriptPathInput;
    if ( !Instance )
      goto LABEL_51;
    UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.dataScriptObjectInput;
    if ( !Instance )
      goto LABEL_51;
    UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.jumpLineObjectInput;
    if ( !Instance )
      goto LABEL_51;
    UILineInput__SetInputEnable((UILineInput_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.genderInput;
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.startModeInput;
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.serverDecideButton;
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.serverCancelButton;
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 1, 0LL);
    Instance = (ScriptManager_o *)this->fields.dataScriptPathInput;
    if ( !Instance )
      goto LABEL_51;
    Instance = (ScriptManager_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)Instance,
                                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.dataScriptObjectInput )
      goto LABEL_51;
    v38 = (UIInput_o *)Instance;
    Instance = (ScriptManager_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this->fields.dataScriptObjectInput,
                                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v38 )
      goto LABEL_51;
    v39 = (UIInput_o *)Instance;
    UIInput__set_value(v38, this->fields.selectConnectPath, 0LL);
    if ( !v39 )
      goto LABEL_51;
    UIInput__set_value(v39, this->fields.selectObjectPath, 0LL);
    genderInput = this->fields.genderInput;
    selectGenderIndex = this->fields.selectGenderIndex;
    v42.klass = (System_Enum_c *)Gender_Type_TypeInfo;
    v42.monitor = (void *)-1LL;
    Instance = (ScriptManager_o *)System_Enum__ToString(&v42, 0LL);
    if ( !genderInput )
      goto LABEL_51;
    UIPopupList__set_value(genderInput, (System_String_o *)Instance, 0LL);
    Instance = (ScriptManager_o *)this->fields.startModeInput;
    if ( !Instance )
      goto LABEL_51;
    UIPopupList__set_value((UIPopupList_o *)Instance, this->fields.selectStartModeName, 0LL);
    Instance = (ScriptManager_o *)this->fields.hiddenTruthButton;
    if ( !Instance )
      goto LABEL_51;
    ((void (__fastcall *)(ScriptManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
      Instance,
      1LL,
      Instance->klass[1]._1.byval_arg.data);
    Instance = (ScriptManager_o *)this->fields.hiddenTruthSprite;
    if ( !Instance )
      goto LABEL_51;
    UnityEngine_Behaviour__set_enabled(
      (UnityEngine_Behaviour_o *)Instance,
      this->fields.selectIsHiddenTruthSetting,
      0LL);
    Instance = (ScriptManager_o *)this->fields.forceCheckOnButton;
    if ( !Instance )
      goto LABEL_51;
    ((void (__fastcall *)(ScriptManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
      Instance,
      1LL,
      Instance->klass[1]._1.byval_arg.data);
    forceCheckOnSprite = (UnityEngine_Behaviour_o *)this->fields.forceCheckOnSprite;
    if ( !byte_4BD9D31 )
    {
      sub_1C21E38(&ScriptManager_TypeInfo);
      byte_4BD9D31 = 1;
    }
    Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    }
    if ( !forceCheckOnSprite )
LABEL_51:
      sub_1C22094(Instance, v11);
    UnityEngine_Behaviour__set_enabled(
      forceCheckOnSprite,
      BYTE1(Instance->fields.equipViewSeed[3].fields.m_CachedPtr),
      0LL);
    this->fields.state = 1;
  }
}


void __fastcall ScriptConnectMenu__StartMenu(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  ScriptConnectMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4BD9C8F & 1) == 0 )
  {
    sub_1C21E38(&ScriptConnectMenu_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_ScriptConnectMenu_CloseAction__);
    byte_4BD9C8F = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v3 = (ScriptConnectMenu_CallbackFunc_o *)sub_1C22084(ScriptConnectMenu_CallbackFunc_TypeInfo);
  ScriptConnectMenu_CallbackFunc___ctor(v3, (Il2CppObject *)this, Method_ScriptConnectMenu_CloseAction__, v4);
  ScriptConnectMenu__Open(this, v3, v5);
}


void __fastcall ScriptConnectMenu__add_callbackFunc(
        ScriptConnectMenu_o *this,
        ScriptConnectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptConnectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptConnectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptConnectMenu_o *v11; // x0
  ScriptConnectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BD9C8D & 1) == 0 )
  {
    sub_1C21E38(&ScriptConnectMenu_CallbackFunc_TypeInfo);
    byte_4BD9C8D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptConnectMenu_CallbackFunc_c *)v8->klass != ScriptConnectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  ScriptConnectMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptConnectMenu__remove_callbackFunc(
        ScriptConnectMenu_o *this,
        ScriptConnectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptConnectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptConnectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptConnectMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BD9C8E & 1) == 0 )
  {
    sub_1C21E38(&ScriptConnectMenu_CallbackFunc_TypeInfo);
    byte_4BD9C8E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptConnectMenu_CallbackFunc_c *)v8->klass != ScriptConnectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C5D328(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C22354(v8);
  ScriptConnectMenu__StartMenu(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectMenu_CallbackFunc___ctor(
        ScriptConnectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A60508;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A604C0;
}


System_IAsyncResult_o *__fastcall ScriptConnectMenu_CallbackFunc__BeginInvoke(
        ScriptConnectMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4BD9C98 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BD9C98 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall ScriptConnectMenu_CallbackFunc__EndInvoke(
        ScriptConnectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
}


void __fastcall ScriptConnectMenu_CallbackFunc__Invoke(
        ScriptConnectMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}