void __fastcall ScriptFilePlayerMenu___ctor(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptFilePlayerMenu__Callback(ScriptFilePlayerMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ScriptFilePlayerMenu_CallbackFunc_o *v9; // x20
  struct ScriptFilePlayerMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BE4A70(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall ScriptFilePlayerMenu__Close(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *serverSettingRootObject; // x0

  ScriptFilePlayerMenu__EndInput(this, method);
  serverSettingRootObject = this->fields.serverSettingRootObject;
  this->fields.state = 0;
  if ( !serverSettingRootObject )
    sub_1BE4D28(0LL, v3);
  UnityEngine_GameObject__SetActive(serverSettingRootObject, 0, 0LL);
}


void __fastcall ScriptFilePlayerMenu__EndInput(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *dataScriptPathInput; // x0
  UIInput_o *v5; // x20
  UIInput_o *v6; // x21

  if ( (byte_4B6433C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIInput___, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v3);
    byte_4B6433C = 1;
  }
  if ( this->fields.state )
  {
    dataScriptPathInput = (UnityEngine_Component_o *)this->fields.dataScriptPathInput;
    if ( !dataScriptPathInput )
      goto LABEL_19;
    dataScriptPathInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       dataScriptPathInput,
                                                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.dataScriptObjectInput )
      goto LABEL_19;
    v5 = (UIInput_o *)dataScriptPathInput;
    dataScriptPathInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this->fields.dataScriptObjectInput,
                                                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v5 )
      goto LABEL_19;
    v6 = (UIInput_o *)dataScriptPathInput;
    UIInput__set_value(v5, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v6 )
      goto LABEL_19;
    UIInput__set_value(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
      sub_1BE4D28(dataScriptPathInput, method);
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 0, 0LL);
    UnityEngine_Input__set_imeCompositionMode(0, 0LL);
  }
}


void __fastcall ScriptFilePlayerMenu__EndPlayScript(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 1;
}


void __fastcall ScriptFilePlayerMenu__EndPlayScriptSelectObject(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILineInput_o *jumpLineObjectInput; // x0
  ScriptPlayListViewMenu_o *scriptPlayListViewMenu; // x20
  System_String_o *selectPlayerFilePath; // x21
  System_String_o *Text; // x22
  ScriptPlayListViewMenu_CallbackFunc_o *v8; // x23
  const MethodInfo *v9; // x3
  System_String_o *v10; // x2
  const MethodInfo *v11; // x5

  if ( (byte_4B64340 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptPlayListViewMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Method_ScriptFilePlayerMenu_OnEndSelectObject__, v3);
    byte_4B64340 = 1;
  }
  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  this->fields.state = 2;
  if ( !jumpLineObjectInput
    || (scriptPlayListViewMenu = this->fields.scriptPlayListViewMenu,
        selectPlayerFilePath = this->fields.selectPlayerFilePath,
        Text = UILineInput__GetText(jumpLineObjectInput, 0LL),
        v8 = (ScriptPlayListViewMenu_CallbackFunc_o *)sub_1BE4D18(ScriptPlayListViewMenu_CallbackFunc_TypeInfo),
        ScriptPlayListViewMenu_CallbackFunc___ctor(
          v8,
          (Il2CppObject *)this,
          Method_ScriptFilePlayerMenu_OnEndSelectObject__,
          v9),
        !scriptPlayListViewMenu) )
  {
    sub_1BE4D28(jumpLineObjectInput, method);
  }
  ScriptPlayListViewMenu__Open(scriptPlayListViewMenu, selectPlayerFilePath, v10, Text, v8, v11);
}


int32_t __fastcall ScriptFilePlayerMenu__GetJumpLine(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0
  System_String_o *Text; // x19

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1BE4D28(0LL, method);
  Text = UILineInput__GetText(jumpLineObjectInput, 0LL);
  if ( System_String__IsNullOrEmpty(Text, 0LL) )
    return -1;
  else
    return System_Int32__Parse(Text, 0LL);
}


System_String_o *__fastcall ScriptFilePlayerMenu__GetJumpLineString(
        ScriptFilePlayerMenu_o *this,
        const MethodInfo *method)
{
  UILineInput_o *jumpLineObjectInput; // x0

  jumpLineObjectInput = this->fields.jumpLineObjectInput;
  if ( !jumpLineObjectInput )
    sub_1BE4D28(0LL, method);
  return UILineInput__GetText(jumpLineObjectInput, 0LL);
}


void __fastcall ScriptFilePlayerMenu__OnChangeServerInput(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ScriptFilePlayerMenu__OnClickCancel(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( this->fields.state == 1 )
  {
    ScriptFilePlayerMenu__EndInput(this, method);
    this->fields.state = 3;
    ScriptFilePlayerMenu__Callback(this, 0, v3);
  }
}


void __fastcall ScriptFilePlayerMenu__OnClickDecide(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UILineInput_o *dataScriptPathInput; // x0
  struct System_String_o *Text; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_String_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v31; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectPlayerFilePath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_String_o *v38; // x21
  System_String_o *v39; // x22
  System_Action_o *v40; // x23
  System_Action_o *v41; // x24
  const MethodInfo *v42; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v44; // x7
  ScriptConnectData_o v45; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v46; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B64341 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Gender_TypeInfo, v3);
    sub_1BE4ACC(&Method_ScriptFilePlayerMenu_EndPlayScript__, v4);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v6);
    byte_4B64341 = 1;
  }
  if ( this->fields.state == 1 )
  {
    dataScriptPathInput = this->fields.dataScriptPathInput;
    if ( dataScriptPathInput )
    {
      Text = UILineInput__GetText(dataScriptPathInput, 0LL);
      this->fields.selectPlayerFilePath = Text;
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&this->fields.selectPlayerFilePath,
        (int64_t)Text,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      dataScriptPathInput = this->fields.dataScriptObjectInput;
      if ( dataScriptPathInput )
      {
        v15 = UILineInput__GetText(dataScriptPathInput, 0LL);
        this->fields.selectObjectPath = v15;
        sub_1BE4A70(
          (PartyOrganizationUtility_o *)&this->fields.selectObjectPath,
          (int64_t)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
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
            v31 = startModeInput->fields.mSelectedItem;
            this->fields.selectStartModeName = v31;
            sub_1BE4A70(
              (PartyOrganizationUtility_o *)&this->fields.selectStartModeName,
              (int64_t)v31,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            dataScriptPathInput = (UILineInput_o *)this->fields.hiddenTruthSprite;
            if ( dataScriptPathInput )
            {
              enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)dataScriptPathInput, 0LL);
              this->fields.selectIsHiddenTruthSetting = enabled;
              selectPlayerFilePath = this->fields.selectPlayerFilePath;
              selectObjectPath = this->fields.selectObjectPath;
              selectGenderIndex = this->fields.selectGenderIndex;
              selectStartModeName = this->fields.selectStartModeName;
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
                dataScriptPathInput = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                if ( !dataScriptPathInput )
                  goto LABEL_19;
                ScriptManager__WriteSetting((ScriptManager_o *)dataScriptPathInput, 0LL);
              }
              this->fields.state = 5;
              debugTestRootComponent = this->fields.debugTestRootComponent;
              v38 = this->fields.selectPlayerFilePath;
              v39 = this->fields.selectObjectPath;
              v40 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
              System_Action___ctor(v40, (Il2CppObject *)this, Method_ScriptFilePlayerMenu_EndPlayScript__, 0LL);
              v41 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
              System_Action___ctor(v41, (Il2CppObject *)this, Method_ScriptFilePlayerMenu_EndPlayScript__, 0LL);
              JumpLine = ScriptFilePlayerMenu__GetJumpLine(this, v42);
              memset(&v46, 0, sizeof(v46));
              ScriptConnectData___ctor(&v46, v38, v39, v40, v41, JumpLine, 0, v44);
              if ( debugTestRootComponent )
              {
                v45 = v46;
                DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v45, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_1BE4D28(dataScriptPathInput, method);
  }
}


void __fastcall ScriptFilePlayerMenu__OnClickForceCheckOn(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *forceCheckOnSprite; // x0
  __int64 v4; // x1
  bool enabled; // w19
  ScriptManager_c *v6; // x0

  if ( (byte_4B6433D & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptManager_TypeInfo, method);
    byte_4B6433D = 1;
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
    sub_1BE4D28(forceCheckOnSprite, method);
  }
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)forceCheckOnSprite, 0LL);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  if ( !byte_4B643CB )
  {
    sub_1BE4ACC(&ScriptManager_TypeInfo, v4);
    byte_4B643CB = 1;
  }
  v6 = ScriptManager_TypeInfo;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    v6 = ScriptManager_TypeInfo;
  }
  v6->static_fields->debugIsForceCheckOn = enabled;
}


void __fastcall ScriptFilePlayerMenu__OnClickHiddenTruth(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  struct UISprite_o *hiddenTruthSprite; // x0

  hiddenTruthSprite = this->fields.hiddenTruthSprite;
  if ( !hiddenTruthSprite
    || (hiddenTruthSprite = (struct UISprite_o *)UnityEngine_Behaviour__get_enabled(
                                                   (UnityEngine_Behaviour_o *)hiddenTruthSprite,
                                                   0LL),
        !this->fields.hiddenTruthSprite) )
  {
    sub_1BE4D28(hiddenTruthSprite, method);
  }
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)this->fields.hiddenTruthSprite,
    ((unsigned __int8)hiddenTruthSprite & 1) == 0,
    0LL);
}


void __fastcall ScriptFilePlayerMenu__OnClickSelect(ScriptFilePlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILineInput_o *dataScriptPathInput; // x0
  struct System_String_o *Text; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UIPopupList_o *startModeInput; // x8
  struct System_String_o *v22; // x1
  ScriptPlayListViewMenu_o *scriptPlayListViewMenu; // x20
  System_String_o *selectPlayerFilePath; // x21
  System_String_o *v25; // x22
  ScriptPlayListViewMenu_CallbackFunc_o *v26; // x23
  const MethodInfo *v27; // x3
  System_String_o *v28; // x2
  const MethodInfo *v29; // x5

  if ( (byte_4B6433E & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptPlayListViewMenu_CallbackFunc_TypeInfo, method);
    sub_1BE4ACC(&Gender_TypeInfo, v3);
    sub_1BE4ACC(&Method_ScriptFilePlayerMenu_OnEndSelectObject__, v4);
    byte_4B6433E = 1;
  }
  if ( this->fields.state == 1 )
  {
    dataScriptPathInput = this->fields.dataScriptPathInput;
    if ( !dataScriptPathInput )
      goto LABEL_13;
    Text = UILineInput__GetText(dataScriptPathInput, 0LL);
    this->fields.selectPlayerFilePath = Text;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.selectPlayerFilePath,
      (int64_t)Text,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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
    v22 = startModeInput->fields.mSelectedItem;
    this->fields.selectStartModeName = v22;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.selectStartModeName,
      (int64_t)v22,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    dataScriptPathInput = this->fields.jumpLineObjectInput;
    this->fields.state = 2;
    if ( !dataScriptPathInput
      || (scriptPlayListViewMenu = this->fields.scriptPlayListViewMenu,
          selectPlayerFilePath = this->fields.selectPlayerFilePath,
          v25 = UILineInput__GetText(dataScriptPathInput, 0LL),
          v26 = (ScriptPlayListViewMenu_CallbackFunc_o *)sub_1BE4D18(ScriptPlayListViewMenu_CallbackFunc_TypeInfo),
          ScriptPlayListViewMenu_CallbackFunc___ctor(
            v26,
            (Il2CppObject *)this,
            Method_ScriptFilePlayerMenu_OnEndSelectObject__,
            v27),
          !scriptPlayListViewMenu) )
    {
LABEL_13:
      sub_1BE4D28(dataScriptPathInput, method);
    }
    ScriptPlayListViewMenu__Open(scriptPlayListViewMenu, selectPlayerFilePath, v28, v25, v26, v29);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptFilePlayerMenu__OnEndSelectObject(
        ScriptFilePlayerMenu_o *this,
        int32_t result,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Component_o *dataScriptObjectInput; // x0
  UIInput_o *v16; // x22
  UIInput_o *v17; // x21
  struct ScriptPlayListViewMenu_o *scriptPlayListViewMenu; // x8
  System_String_o *selectObjectPath; // x23
  System_String_o *selectPlayerFilePath; // x24
  int32_t selectGenderIndex; // w22
  System_String_o *selectStartModeName; // x21
  _BOOL4 selectIsHiddenTruthSetting; // w25
  DebugTestRootComponent_o *debugTestRootComponent; // x21
  System_String_o *v25; // x22
  System_String_o *v26; // x23
  System_Action_o *v27; // x24
  System_Action_o *v28; // x25
  const MethodInfo *v29; // x1
  int32_t JumpLine; // w5
  const MethodInfo *v31; // x7
  ScriptConnectData_o v32; // [xsp+0h] [xbp-B0h] BYREF
  ScriptConnectData_o v33; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B6433F & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIInput___, v11);
    sub_1BE4ACC(&Method_ScriptFilePlayerMenu_EndPlayScriptSelectObject__, v12);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v14);
    byte_4B6433F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (result & 0xFFFFFFFE) == 2 )
    {
      this->fields.selectObjectPath = path;
      sub_1BE4A70(
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
                                                             (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
        if ( this->fields.jumpLineObjectInput )
        {
          v16 = (UIInput_o *)dataScriptObjectInput;
          dataScriptObjectInput = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                               (UnityEngine_Component_o *)this->fields.jumpLineObjectInput,
                                                               (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
          if ( v16 )
          {
            v17 = (UIInput_o *)dataScriptObjectInput;
            UIInput__set_value(v16, this->fields.selectObjectPath, 0LL);
            scriptPlayListViewMenu = this->fields.scriptPlayListViewMenu;
            if ( scriptPlayListViewMenu )
            {
              dataScriptObjectInput = (UnityEngine_Component_o *)scriptPlayListViewMenu->fields.jumpLineObjectInput;
              if ( dataScriptObjectInput )
              {
                dataScriptObjectInput = (UnityEngine_Component_o *)UILineInput__GetText(
                                                                     (UILineInput_o *)dataScriptObjectInput,
                                                                     0LL);
                if ( v17 )
                {
                  UIInput__set_value(v17, (System_String_o *)dataScriptObjectInput, 0LL);
                  selectPlayerFilePath = this->fields.selectPlayerFilePath;
                  selectObjectPath = this->fields.selectObjectPath;
                  selectGenderIndex = this->fields.selectGenderIndex;
                  selectStartModeName = this->fields.selectStartModeName;
                  selectIsHiddenTruthSetting = this->fields.selectIsHiddenTruthSetting;
                  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
                  if ( ScriptManager__SetScriptPlayerSetting(
                         selectPlayerFilePath,
                         selectObjectPath,
                         selectGenderIndex,
                         selectStartModeName,
                         selectIsHiddenTruthSetting,
                         0LL) )
                  {
                    dataScriptObjectInput = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
                    if ( !dataScriptObjectInput )
                      goto LABEL_24;
                    ScriptManager__WriteSetting((ScriptManager_o *)dataScriptObjectInput, 0LL);
                  }
                  this->fields.state = 5;
                  debugTestRootComponent = this->fields.debugTestRootComponent;
                  v25 = this->fields.selectPlayerFilePath;
                  v26 = this->fields.selectObjectPath;
                  v27 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                  System_Action___ctor(
                    v27,
                    (Il2CppObject *)this,
                    Method_ScriptFilePlayerMenu_EndPlayScriptSelectObject__,
                    0LL);
                  v28 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                  System_Action___ctor(
                    v28,
                    (Il2CppObject *)this,
                    Method_ScriptFilePlayerMenu_EndPlayScriptSelectObject__,
                    0LL);
                  JumpLine = ScriptFilePlayerMenu__GetJumpLine(this, v29);
                  memset(&v33, 0, sizeof(v33));
                  ScriptConnectData___ctor(&v33, v25, v26, v27, v28, JumpLine, result == 3, v31);
                  if ( debugTestRootComponent )
                  {
                    v32 = v33;
                    DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v32, 0LL);
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
      dataScriptObjectInput = (UnityEngine_Component_o *)this->fields.scriptPlayListViewMenu;
      if ( dataScriptObjectInput )
      {
        ScriptPlayListViewMenu__Close((ScriptPlayListViewMenu_o *)dataScriptObjectInput, *(const MethodInfo **)&result);
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
    sub_1BE4D28(dataScriptObjectInput, *(_QWORD *)&result);
  }
}


void __fastcall ScriptFilePlayerMenu__Open(
        ScriptFilePlayerMenu_o *this,
        ScriptFilePlayerMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ScriptManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  ScriptManager_c *v22; // x0
  struct System_String_o *scriptPlayerPathSettingAddress; // x1
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  ScriptManager_c *v31; // x0
  struct System_String_o *scriptPlayerObjectSettingAddress; // x1
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  ScriptManager_c *v40; // x0
  struct System_String_o *scriptStartModeSettingName; // x1
  ScriptManager_c *v42; // x0
  struct ScriptManager_StaticFields *static_fields; // x8
  UIInput_o *v44; // x22
  UIInput_o *v45; // x23
  UIPopupList_o *genderInput; // x21
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x21
  System_Enum_o v48; // [xsp+8h] [xbp-48h] BYREF
  int32_t selectGenderIndex; // [xsp+18h] [xbp-38h]

  if ( (byte_4B6433B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_UIInput___, callback);
    sub_1BE4ACC(&ScriptManager_TypeInfo, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v11);
    sub_1BE4ACC(&Gender_Type_TypeInfo, v12);
    byte_4B6433B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    Instance = (ScriptManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( !Instance )
      goto LABEL_51;
    ScriptManager__ReadSetting(Instance, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    if ( !byte_4B642D5 )
    {
      sub_1BE4ACC(&ScriptManager_TypeInfo, v15);
      byte_4B642D5 = 1;
    }
    v22 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v22 = ScriptManager_TypeInfo;
    }
    scriptPlayerPathSettingAddress = v22->static_fields->scriptPlayerPathSettingAddress;
    this->fields.selectPlayerFilePath = scriptPlayerPathSettingAddress;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.selectPlayerFilePath,
      (int64_t)scriptPlayerPathSettingAddress,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( !byte_4B642D6 )
    {
      sub_1BE4ACC(&ScriptManager_TypeInfo, v24);
      byte_4B642D6 = 1;
    }
    v31 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v31 = ScriptManager_TypeInfo;
    }
    scriptPlayerObjectSettingAddress = v31->static_fields->scriptPlayerObjectSettingAddress;
    this->fields.selectObjectPath = scriptPlayerObjectSettingAddress;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.selectObjectPath,
      (int64_t)scriptPlayerObjectSettingAddress,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    if ( !byte_4B642D8 )
    {
      sub_1BE4ACC(&ScriptManager_TypeInfo, v33);
      byte_4B642D8 = 1;
    }
    v40 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v40 = ScriptManager_TypeInfo;
    }
    this->fields.selectGenderIndex = v40->static_fields->scriptGenderSettingIndex;
    if ( !byte_4B642D7 )
    {
      sub_1BE4ACC(&ScriptManager_TypeInfo, v33);
      v40 = ScriptManager_TypeInfo;
      byte_4B642D7 = 1;
    }
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = ScriptManager_TypeInfo;
    }
    scriptStartModeSettingName = v40->static_fields->scriptStartModeSettingName;
    this->fields.selectStartModeName = scriptStartModeSettingName;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.selectStartModeName,
      (int64_t)scriptStartModeSettingName,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    if ( !byte_4B643C9 )
    {
      sub_1BE4ACC(&ScriptManager_TypeInfo, v14);
      byte_4B643C9 = 1;
    }
    v42 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      v42 = ScriptManager_TypeInfo;
    }
    static_fields = v42->static_fields;
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
                                    (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !this->fields.dataScriptObjectInput )
      goto LABEL_51;
    v44 = (UIInput_o *)Instance;
    Instance = (ScriptManager_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this->fields.dataScriptObjectInput,
                                    (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    if ( !v44 )
      goto LABEL_51;
    v45 = (UIInput_o *)Instance;
    UIInput__set_value(v44, this->fields.selectPlayerFilePath, 0LL);
    if ( !v45 )
      goto LABEL_51;
    UIInput__set_value(v45, this->fields.selectObjectPath, 0LL);
    genderInput = this->fields.genderInput;
    selectGenderIndex = this->fields.selectGenderIndex;
    v48.klass = (System_Enum_c *)Gender_Type_TypeInfo;
    v48.monitor = (void *)-1LL;
    Instance = (ScriptManager_o *)System_Enum__ToString(&v48, 0LL);
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
    if ( !byte_4B643CA )
    {
      sub_1BE4ACC(&ScriptManager_TypeInfo, v14);
      byte_4B643CA = 1;
    }
    Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    }
    if ( !forceCheckOnSprite )
LABEL_51:
      sub_1BE4D28(Instance, v14);
    UnityEngine_Behaviour__set_enabled(
      forceCheckOnSprite,
      BYTE1(Instance->fields.equipViewSeed[3].fields.m_CachedPtr),
      0LL);
    this->fields.state = 1;
  }
}


void __fastcall ScriptFilePlayerMenu__add_callbackFunc(
        ScriptFilePlayerMenu_o *this,
        ScriptFilePlayerMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptFilePlayerMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptFilePlayerMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptFilePlayerMenu_o *v11; // x0
  ScriptFilePlayerMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B64339 & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptFilePlayerMenu_CallbackFunc_TypeInfo, value);
    byte_4B64339 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptFilePlayerMenu_CallbackFunc_c *)v8->klass != ScriptFilePlayerMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  ScriptFilePlayerMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall ScriptFilePlayerMenu__remove_callbackFunc(
        ScriptFilePlayerMenu_o *this,
        ScriptFilePlayerMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ScriptFilePlayerMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ScriptFilePlayerMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ScriptFilePlayerMenu_o *v11; // x0
  ScriptFilePlayerMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B6433A & 1) == 0 )
  {
    sub_1BE4ACC(&ScriptFilePlayerMenu_CallbackFunc_TypeInfo, value);
    byte_4B6433A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ScriptFilePlayerMenu_CallbackFunc_c *)v8->klass != ScriptFilePlayerMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C1FFBC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BE4FE8(v8);
  ScriptFilePlayerMenu__Open(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptFilePlayerMenu_CallbackFunc___ctor(
        ScriptFilePlayerMenu_CallbackFunc_o *this,
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
  sub_1BE4A70(
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
  if ( (sub_1BE4B8C(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BE4D44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BE4BF4(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A24170;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A24128;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ScriptFilePlayerMenu_CallbackFunc__BeginInvoke(
        ScriptFilePlayerMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B64342 & 1) == 0 )
  {
    sub_1BE4ACC(&bool_TypeInfo, result);
    byte_4B64342 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BE4A80(this, v9, callback, object);
}


void __fastcall ScriptFilePlayerMenu_CallbackFunc__EndInvoke(
        ScriptFilePlayerMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BE4A84(result, 0LL, method);
}


void __fastcall ScriptFilePlayerMenu_CallbackFunc__Invoke(
        ScriptFilePlayerMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}