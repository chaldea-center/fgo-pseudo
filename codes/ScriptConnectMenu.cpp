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
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(serverSettingRootObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptConnectMenu__CloseAction(ScriptConnectMenu_o *this, bool result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  DebugTestRootComponent_o *parentComponent_k__BackingField; // x19
  ScriptManager_c *v11; // x0
  System_String_o *scriptServerSettingAddress; // x21
  System_String_o *scriptObjectSettingAddress; // x22
  System_Action_o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x24
  const MethodInfo *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1
  ScriptConnectData_o v22; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v23; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B13995 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v5, v6);
    byte_4B13995 = 1;
  }
  ScriptConnectMenu__Close(this, (const MethodInfo *)result);
  if ( result )
  {
    parentComponent_k__BackingField = this->fields._parentComponent_k__BackingField;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7);
    if ( !byte_4B13951 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
      byte_4B13951 = 1;
    }
    v11 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v7);
      v11 = ScriptManager_TypeInfo;
    }
    scriptServerSettingAddress = v11->static_fields->scriptServerSettingAddress;
    if ( !byte_4B13952 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v7, v8);
      v11 = ScriptManager_TypeInfo;
      byte_4B13952 = 1;
    }
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, v7);
      v11 = ScriptManager_TypeInfo;
    }
    scriptObjectSettingAddress = v11->static_fields->scriptObjectSettingAddress;
    v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
    System_Action___ctor(v14, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
    v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
    System_Action___ctor(v18, (Il2CppObject *)this, (intptr_t)this->klass[1]._1.image, 0LL);
    memset(&v23, 0, sizeof(v23));
    ScriptConnectData___ctor(&v23, scriptServerSettingAddress, scriptObjectSettingAddress, v14, v18, -1, 0, v19);
    if ( !parentComponent_k__BackingField )
      sub_1BCAA3C(v20, v21);
    v22 = v23;
    DebugTestRootComponent__StartConnectScript(parentComponent_k__BackingField, &v22, 0LL);
  }
}


void __fastcall ScriptConnectMenu__EndConnectScriptPlay(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILineInput_o *jumpLineObjectInput; // x0
  ScriptConnectListViewMenu_o *scriptConnectListViewMenu; // x20
  System_String_o *selectConnectPath; // x21
  System_String_o *Text; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  ScriptConnectListViewMenu_CallbackFunc_o *v13; // x23
  const MethodInfo *v14; // x3
  System_String_o *v15; // x2
  const MethodInfo *v16; // x5

  if ( (byte_4B1399B & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScriptConnectMenu_OnEndSelectObject__, v4, v5);
    byte_4B1399B = 1;
  }
  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  this->fields.state = 2;
  if ( !jumpLineObjectInput
    || (scriptConnectListViewMenu = this->fields.scriptConnectListViewMenu,
        selectConnectPath = this->fields.selectConnectPath,
        Text = UILineInput__GetText(jumpLineObjectInput, 0LL),
        v13 = (ScriptConnectListViewMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                            ScriptConnectListViewMenu_CallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12),
        ScriptConnectListViewMenu_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_ScriptConnectMenu_OnEndSelectObject__,
          v14),
        !scriptConnectListViewMenu) )
  {
    sub_1BCAA3C(jumpLineObjectInput, method);
  }
  ScriptConnectListViewMenu__Open(scriptConnectListViewMenu, selectConnectPath, v15, Text, v13, v16);
}


void __fastcall ScriptConnectMenu__EndInput(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *dataScriptPathInput; // x0
  UIInput_o *v7; // x20
  UIInput_o *v8; // x21

  if ( (byte_4B13997 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B13997 = 1;
  }
  if ( this->fields.state )
  {
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.dataScriptPathInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    dataScriptPathInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       dataScriptPathInput,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.dataScriptObjectInput )
      goto LABEL_19;
    v7 = (UIInput_o *)dataScriptPathInput;
    dataScriptPathInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this->fields.dataScriptObjectInput,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v7 )
      goto LABEL_19;
    v8 = (UIInput_o *)dataScriptPathInput;
    UIInput__set_value(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v8 )
      goto LABEL_19;
    UIInput__set_value(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
      sub_1BCAA3C(dataScriptPathInput, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UILineInput_o *dataScriptPathInput; // x0
  struct System_String_o *Text; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_String_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v36; // x1
  __int64 v37; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectConnectPath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  __int64 v43; // x1
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_String_o *v45; // x21
  System_String_o *v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x23
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x24
  const MethodInfo *v55; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v57; // x7
  ScriptConnectData_o v58; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v59; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B1399C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Gender_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScriptConnectMenu_EndPlayScript__, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v10, v11);
    byte_4B1399C = 1;
  }
  if ( this->fields.state == 1 )
  {
    dataScriptPathInput = this->fields.dataScriptPathInput;
    if ( dataScriptPathInput )
    {
      Text = UILineInput__GetText(dataScriptPathInput, 0LL);
      this->fields.selectConnectPath = Text;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.selectConnectPath,
        (int64_t)Text,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      dataScriptPathInput = this->fields.dataScriptObjectInput;
      if ( dataScriptPathInput )
      {
        v20 = UILineInput__GetText(dataScriptPathInput, 0LL);
        this->fields.selectObjectPath = v20;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.selectObjectPath,
          (int64_t)v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26);
        genderInput = this->fields.genderInput;
        if ( genderInput )
        {
          mSelectedItem = genderInput->fields.mSelectedItem;
          if ( !Gender_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method);
          dataScriptPathInput = (UILineInput_o *)Gender__ToData(mSelectedItem, 0LL);
          startModeInput = this->fields.startModeInput;
          this->fields.selectGenderIndex = (int)dataScriptPathInput;
          if ( startModeInput )
          {
            v36 = startModeInput->fields.mSelectedItem;
            this->fields.selectStartModeName = v36;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.selectStartModeName,
              (int64_t)v36,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
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
                j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v37);
              if ( ScriptManager__SetScriptServerSetting(
                     selectConnectPath,
                     selectObjectPath,
                     selectGenderIndex,
                     selectStartModeName,
                     enabled,
                     0LL) )
              {
                dataScriptPathInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                if ( !dataScriptPathInput )
                  goto LABEL_21;
                ScriptManager__WriteSetting((ScriptManager_o *)dataScriptPathInput, 0LL);
              }
              if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v43);
              ScriptManager__ClearSelectRouteArray(0LL);
              this->fields.state = 5;
              debugTestRootComponent = this->fields.debugTestRootComponent;
              v45 = this->fields.selectConnectPath;
              v46 = this->fields.selectObjectPath;
              v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
              System_Action___ctor(v50, (Il2CppObject *)this, Method_ScriptConnectMenu_EndPlayScript__, 0LL);
              v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
              System_Action___ctor(v54, (Il2CppObject *)this, Method_ScriptConnectMenu_EndPlayScript__, 0LL);
              JumpLine = ScriptConnectMenu__GetJumpLine(this, v55);
              memset(&v59, 0, sizeof(v59));
              ScriptConnectData___ctor(&v59, v45, v46, v50, v54, JumpLine, 0, v57);
              if ( debugTestRootComponent )
              {
                v58 = v59;
                DebugTestRootComponent__StartConnectScript(debugTestRootComponent, &v58, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(dataScriptPathInput, method);
  }
}


void __fastcall ScriptConnectMenu__OnClickForceCheckOn(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_o *forceCheckOnSprite; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  bool enabled; // w19
  ScriptManager_c *v8; // x0

  if ( (byte_4B13998 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
    byte_4B13998 = 1;
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
    sub_1BCAA3C(forceCheckOnSprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceCheckOnSprite, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v5);
  if ( !byte_4B13A41 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, v5, v6);
    byte_4B13A41 = 1;
  }
  v8 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v5);
    v8 = ScriptManager_TypeInfo;
  }
  v8->static_fields->debugIsForceCheckOn = enabled;
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
    sub_1BCAA3C(hiddenTruthSprite, method);
  }
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)this->fields.hiddenTruthSprite,
    ((unsigned __int8)hiddenTruthSprite & 1) == 0,
    0LL);
}


void __fastcall ScriptConnectMenu__OnClickSelect(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILineInput_o *dataScriptPathInput; // x0
  struct System_String_o *Text; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v25; // x1
  ScriptConnectListViewMenu_o *scriptConnectListViewMenu; // x20
  System_String_o *selectConnectPath; // x21
  System_String_o *v28; // x22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  ScriptConnectListViewMenu_CallbackFunc_o *v32; // x23
  const MethodInfo *v33; // x3
  System_String_o *v34; // x2
  const MethodInfo *v35; // x5

  if ( (byte_4B13999 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptConnectListViewMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Gender_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScriptConnectMenu_OnEndSelectObject__, v6, v7);
    byte_4B13999 = 1;
  }
  if ( this->fields.state == 1 )
  {
    dataScriptPathInput = this->fields.dataScriptPathInput;
    if ( !dataScriptPathInput )
      goto LABEL_13;
    Text = UILineInput__GetText(dataScriptPathInput, 0LL);
    this->fields.selectConnectPath = Text;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectConnectPath,
      (int64_t)Text,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    genderInput = this->fields.genderInput;
    if ( !genderInput )
      goto LABEL_13;
    mSelectedItem = genderInput->fields.mSelectedItem;
    if ( !Gender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method);
    dataScriptPathInput = (UILineInput_o *)Gender__ToData(mSelectedItem, 0LL);
    startModeInput = this->fields.startModeInput;
    this->fields.selectGenderIndex = (int)dataScriptPathInput;
    if ( !startModeInput )
      goto LABEL_13;
    v25 = startModeInput->fields.mSelectedItem;
    this->fields.selectStartModeName = v25;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectStartModeName,
      (int64_t)v25,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    dataScriptPathInput = this->fields.jumpLineObjectInput;
    this->fields.state = 2;
    if ( !dataScriptPathInput
      || (scriptConnectListViewMenu = this->fields.scriptConnectListViewMenu,
          selectConnectPath = this->fields.selectConnectPath,
          v28 = UILineInput__GetText(dataScriptPathInput, 0LL),
          v32 = (ScriptConnectListViewMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                              ScriptConnectListViewMenu_CallbackFunc_TypeInfo,
                                                              v29,
                                                              v30,
                                                              v31),
          ScriptConnectListViewMenu_CallbackFunc___ctor(
            v32,
            (Il2CppObject *)this,
            Method_ScriptConnectMenu_OnEndSelectObject__,
            v33),
          !scriptConnectListViewMenu) )
    {
LABEL_13:
      sub_1BCAA3C(dataScriptPathInput, method);
    }
    ScriptConnectListViewMenu__Open(scriptConnectListViewMenu, selectConnectPath, v34, v28, v32, v35);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Component_o *dataScriptObjectInput; // x0
  UIInput_o *v20; // x22
  UIInput_o *v21; // x21
  struct ScriptConnectListViewMenu_o *scriptConnectListViewMenu; // x8
  __int64 v23; // x1
  System_String_o *selectObjectPath; // x23
  System_String_o *selectConnectPath; // x24
  int32_t selectGenderIndex; // w22
  System_String_o *selectStartModeName; // x21
  _BOOL4 selectIsHiddenTruthSetting; // w25
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  DebugTestRootComponent_o *debugTestRootComponent; // x21
  System_String_o *v33; // x22
  System_String_o *v34; // x23
  System_Action_o *v35; // x24
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x25
  const MethodInfo *v40; // x1
  int32_t JumpLine; // w5
  const MethodInfo *v42; // x7
  ScriptConnectData_o v43; // [xsp+0h] [xbp-B0h] BYREF
  ScriptConnectData_o v44; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B1399A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, path);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, v11, v12);
    sub_1BCA7E0(&Method_ScriptConnectMenu_EndConnectScriptPlay__, v13, v14);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v17, v18);
    byte_4B1399A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (result & 0xFFFFFFFE) == 2 )
    {
      this->fields.selectObjectPath = path;
      sub_1BCA784(
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
                                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
        if ( this->fields.jumpLineObjectInput )
        {
          v20 = (UIInput_o *)dataScriptObjectInput;
          dataScriptObjectInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                               (UnityEngine_Component_o *)this->fields.jumpLineObjectInput,
                                                               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
          if ( v20 )
          {
            v21 = (UIInput_o *)dataScriptObjectInput;
            UIInput__set_value(v20, this->fields.selectObjectPath, 0LL);
            scriptConnectListViewMenu = this->fields.scriptConnectListViewMenu;
            if ( scriptConnectListViewMenu )
            {
              dataScriptObjectInput = (UnityEngine_Component_o *)scriptConnectListViewMenu->fields.jumpLineObjectInput;
              if ( dataScriptObjectInput )
              {
                dataScriptObjectInput = (UnityEngine_Component_o *)UILineInput__GetText(
                                                                     (UILineInput_o *)dataScriptObjectInput,
                                                                     0LL);
                if ( v21 )
                {
                  UIInput__set_value(v21, (System_String_o *)dataScriptObjectInput, 0LL);
                  selectConnectPath = this->fields.selectConnectPath;
                  selectObjectPath = this->fields.selectObjectPath;
                  selectGenderIndex = this->fields.selectGenderIndex;
                  selectStartModeName = this->fields.selectStartModeName;
                  selectIsHiddenTruthSetting = this->fields.selectIsHiddenTruthSetting;
                  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v23);
                  if ( ScriptManager__SetScriptServerSetting(
                         selectConnectPath,
                         selectObjectPath,
                         selectGenderIndex,
                         selectStartModeName,
                         selectIsHiddenTruthSetting,
                         0LL) )
                  {
                    dataScriptObjectInput = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( !dataScriptObjectInput )
                      goto LABEL_24;
                    ScriptManager__WriteSetting((ScriptManager_o *)dataScriptObjectInput, 0LL);
                  }
                  this->fields.state = 5;
                  debugTestRootComponent = this->fields.debugTestRootComponent;
                  v33 = this->fields.selectConnectPath;
                  v34 = this->fields.selectObjectPath;
                  v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
                  System_Action___ctor(v35, (Il2CppObject *)this, Method_ScriptConnectMenu_EndConnectScriptPlay__, 0LL);
                  v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
                  System_Action___ctor(v39, (Il2CppObject *)this, Method_ScriptConnectMenu_EndConnectScriptPlay__, 0LL);
                  JumpLine = ScriptConnectMenu__GetJumpLine(this, v40);
                  memset(&v44, 0, sizeof(v44));
                  ScriptConnectData___ctor(&v44, v33, v34, v35, v39, JumpLine, result == 3, v42);
                  if ( debugTestRootComponent )
                  {
                    v43 = v44;
                    DebugTestRootComponent__StartConnectScript(debugTestRootComponent, &v43, 0LL);
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
    sub_1BCAA3C(dataScriptObjectInput, *(_QWORD *)&result);
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  ScriptManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  ScriptManager_c *v25; // x0
  struct System_String_o *scriptServerSettingAddress; // x1
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  ScriptManager_c *v34; // x0
  struct System_String_o *scriptObjectSettingAddress; // x1
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  ScriptManager_c *v43; // x0
  struct System_String_o *scriptStartModeSettingName; // x1
  __int64 v45; // x2
  ScriptManager_c *v46; // x0
  struct ScriptManager_StaticFields *static_fields; // x8
  UIInput_o *v48; // x22
  UIInput_o *v49; // x23
  UIPopupList_o *genderInput; // x21
  __int64 v51; // x2
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x21
  System_Enum_o v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t selectGenderIndex; // [xsp+18h] [xbp-38h]

  if ( (byte_4B13996 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIInput___, callback, method);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Gender_Type_TypeInfo, v14, v15);
    byte_4B13996 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    ScriptManager__ReadSetting(Instance, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v18);
    if ( !byte_4B13951 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v18, v19);
      byte_4B13951 = 1;
    }
    v25 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v18);
      v25 = ScriptManager_TypeInfo;
    }
    scriptServerSettingAddress = v25->static_fields->scriptServerSettingAddress;
    this->fields.selectConnectPath = scriptServerSettingAddress;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectConnectPath,
      (int64_t)scriptServerSettingAddress,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    if ( !byte_4B13952 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v27, v28);
      byte_4B13952 = 1;
    }
    v34 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v27);
      v34 = ScriptManager_TypeInfo;
    }
    scriptObjectSettingAddress = v34->static_fields->scriptObjectSettingAddress;
    this->fields.selectObjectPath = scriptObjectSettingAddress;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectObjectPath,
      (int64_t)scriptObjectSettingAddress,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    if ( !byte_4B13956 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v36, v37);
      byte_4B13956 = 1;
    }
    v43 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v36);
      v43 = ScriptManager_TypeInfo;
    }
    this->fields.selectGenderIndex = v43->static_fields->scriptGenderSettingIndex;
    if ( !byte_4B13955 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v36, v37);
      v43 = ScriptManager_TypeInfo;
      byte_4B13955 = 1;
    }
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43, v36);
      v43 = ScriptManager_TypeInfo;
    }
    scriptStartModeSettingName = v43->static_fields->scriptStartModeSettingName;
    this->fields.selectStartModeName = scriptStartModeSettingName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectStartModeName,
      (int64_t)scriptStartModeSettingName,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    if ( !byte_4B13959 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v17, v45);
      byte_4B13959 = 1;
    }
    v46 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v17);
      v46 = ScriptManager_TypeInfo;
    }
    static_fields = v46->static_fields;
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
                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.dataScriptObjectInput )
      goto LABEL_51;
    v48 = (UIInput_o *)Instance;
    Instance = (ScriptManager_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this->fields.dataScriptObjectInput,
                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v48 )
      goto LABEL_51;
    v49 = (UIInput_o *)Instance;
    UIInput__set_value(v48, this->fields.selectConnectPath, 0LL);
    if ( !v49 )
      goto LABEL_51;
    UIInput__set_value(v49, this->fields.selectObjectPath, 0LL);
    genderInput = this->fields.genderInput;
    selectGenderIndex = this->fields.selectGenderIndex;
    v53.klass = (System_Enum_c *)Gender_Type_TypeInfo;
    v53.monitor = (void *)-1LL;
    Instance = (ScriptManager_o *)System_Enum__ToString(&v53, 0LL);
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
    if ( !byte_4B13A40 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v17, v51);
      byte_4B13A40 = 1;
    }
    Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v17);
      Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    }
    if ( !forceCheckOnSprite )
LABEL_51:
      sub_1BCAA3C(Instance, v17);
    UnityEngine_Behaviour__set_enabled(
      forceCheckOnSprite,
      BYTE1(Instance->fields.equipViewSeed[3].fields.m_CachedPtr),
      0LL);
    this->fields.state = 1;
  }
}


void __fastcall ScriptConnectMenu__StartMenu(ScriptConnectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  ScriptConnectMenu_CallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4B13994 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptConnectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ScriptConnectMenu_CloseAction__, v4, v5);
    byte_4B13994 = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0LL);
  v9 = (ScriptConnectMenu_CallbackFunc_o *)sub_1BCAA2C(ScriptConnectMenu_CallbackFunc_TypeInfo, v6, v7, v8);
  ScriptConnectMenu_CallbackFunc___ctor(v9, (Il2CppObject *)this, Method_ScriptConnectMenu_CloseAction__, v10);
  ScriptConnectMenu__Open(this, v9, v11);
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

  if ( (byte_4B13992 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptConnectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13992 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B13993 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptConnectMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B13993 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0A114;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0A0CC;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B1399D & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B1399D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ScriptConnectMenu_CallbackFunc__EndInvoke(
        ScriptConnectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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