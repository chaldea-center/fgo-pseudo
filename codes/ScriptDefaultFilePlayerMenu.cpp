void __fastcall ScriptDefaultFilePlayerMenu___ctor(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ScriptDefaultFilePlayerMenu__Callback(
        ScriptDefaultFilePlayerMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o *v9; // x20
  struct ScriptDefaultFilePlayerMenu_CallbackFunc_o *callbackFunc; // t1

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


void __fastcall ScriptDefaultFilePlayerMenu__Close(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *serverSettingRootObject; // x0

  ScriptDefaultFilePlayerMenu__EndInput(this, method);
  serverSettingRootObject = this->fields.serverSettingRootObject;
  this->fields.state = 0;
  if ( !serverSettingRootObject )
    sub_1BCAA3C(0LL, v3);
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
      sub_1BCAA3C(jumpLineObjectInput, method);
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
    sub_1BCAA3C(0LL, method);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  ScriptDefaultFilePlayerMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UIPopupList_o *startModeInput; // x8
  int64_t v25; // x1
  __int64 v26; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectPlayerFilePath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v43; // x7
  ScriptConnectData_o v44; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v45; // [xsp+30h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_4B139A4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Gender_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_5319/*"DefaultScript.txt"*/, v12, v13);
    this = (ScriptDefaultFilePlayerMenu_o *)sub_1BCA7E0(&StringLiteral_3412/*"C:/Avalon/Temporary/ScriptData"*/, v14, v15);
    byte_4B139A4 = 1;
  }
  if ( v3->fields.state == 1 )
  {
    genderInput = v3->fields.genderInput;
    if ( genderInput )
    {
      mSelectedItem = genderInput->fields.mSelectedItem;
      if ( !Gender_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method);
      this = (ScriptDefaultFilePlayerMenu_o *)Gender__ToData(mSelectedItem, 0LL);
      startModeInput = v3->fields.startModeInput;
      v3->fields.selectGenderIndex = (int)this;
      if ( startModeInput )
      {
        v25 = (int64_t)startModeInput->fields.mSelectedItem;
        v3->fields.selectStartModeName = (struct System_String_o *)v25;
        sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.selectStartModeName, v25, v18, v19, v20, v21, v22, v23);
        this = (ScriptDefaultFilePlayerMenu_o *)v3->fields.hiddenTruthSprite;
        if ( this )
        {
          enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL);
          v3->fields.selectIsHiddenTruthSetting = enabled;
          selectPlayerFilePath = v3->fields.selectPlayerFilePath;
          selectObjectPath = v3->fields.selectObjectPath;
          selectGenderIndex = v3->fields.selectGenderIndex;
          selectStartModeName = v3->fields.selectStartModeName;
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v26);
          if ( ScriptManager__SetScriptPlayerSetting(
                 selectPlayerFilePath,
                 selectObjectPath,
                 selectGenderIndex,
                 selectStartModeName,
                 enabled,
                 0LL) )
          {
            this = (ScriptDefaultFilePlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( !this )
              goto LABEL_17;
            ScriptManager__WriteSetting((ScriptManager_o *)this, 0LL);
          }
          v3->fields.state = 5;
          debugTestRootComponent = v3->fields.debugTestRootComponent;
          v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
          System_Action___ctor(v36, (Il2CppObject *)v3, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0LL);
          v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
          System_Action___ctor(v40, (Il2CppObject *)v3, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0LL);
          JumpLine = ScriptDefaultFilePlayerMenu__GetJumpLine(v3, v41);
          memset(&v45, 0, sizeof(v45));
          ScriptConnectData___ctor(
            &v45,
            (System_String_o *)StringLiteral_3412/*"C:/Avalon/Temporary/ScriptData"*/,
            (System_String_o *)StringLiteral_5319/*"DefaultScript.txt"*/,
            v36,
            v40,
            JumpLine,
            0,
            v43);
          if ( debugTestRootComponent )
          {
            v44 = v45;
            DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v44, 0LL);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall ScriptDefaultFilePlayerMenu__OnClickForceCheckOn(
        ScriptDefaultFilePlayerMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UISprite_o *forceCheckOnSprite; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  bool enabled; // w19
  ScriptManager_c *v8; // x0

  if ( (byte_4B139A2 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, method, v2);
    byte_4B139A2 = 1;
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
    sub_1BCAA3C(hiddenTruthSprite, method);
  }
  UnityEngine_Behaviour__set_enabled(
    (UnityEngine_Behaviour_o *)this->fields.hiddenTruthSprite,
    ((unsigned __int8)hiddenTruthSprite & 1) == 0,
    0LL);
}


void __fastcall ScriptDefaultFilePlayerMenu__OnClickView(ScriptDefaultFilePlayerMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ScriptDefaultFilePlayerMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct UIPopupList_o *genderInput; // x8
  System_String_o *mSelectedItem; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct UIPopupList_o *startModeInput; // x8
  int64_t v25; // x1
  __int64 v26; // x1
  bool enabled; // w20
  System_String_o *selectObjectPath; // x23
  System_String_o *selectPlayerFilePath; // x24
  int32_t selectGenderIndex; // w21
  System_String_o *selectStartModeName; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  DebugTestRootComponent_o *debugTestRootComponent; // x20
  System_Action_o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x1
  int32_t JumpLine; // w0
  const MethodInfo *v43; // x7
  ScriptConnectData_o v44; // [xsp+0h] [xbp-A0h] BYREF
  ScriptConnectData_o v45; // [xsp+30h] [xbp-70h] BYREF

  v3 = this;
  if ( (byte_4B139A3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Gender_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, v6, v7);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&StringLiteral_5319/*"DefaultScript.txt"*/, v12, v13);
    this = (ScriptDefaultFilePlayerMenu_o *)sub_1BCA7E0(&StringLiteral_3412/*"C:/Avalon/Temporary/ScriptData"*/, v14, v15);
    byte_4B139A3 = 1;
  }
  if ( v3->fields.state == 1 )
  {
    genderInput = v3->fields.genderInput;
    if ( genderInput )
    {
      mSelectedItem = genderInput->fields.mSelectedItem;
      if ( !Gender_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method);
      this = (ScriptDefaultFilePlayerMenu_o *)Gender__ToData(mSelectedItem, 0LL);
      startModeInput = v3->fields.startModeInput;
      v3->fields.selectGenderIndex = (int)this;
      if ( startModeInput )
      {
        v25 = (int64_t)startModeInput->fields.mSelectedItem;
        v3->fields.selectStartModeName = (struct System_String_o *)v25;
        sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.selectStartModeName, v25, v18, v19, v20, v21, v22, v23);
        this = (ScriptDefaultFilePlayerMenu_o *)v3->fields.hiddenTruthSprite;
        if ( this )
        {
          enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0LL);
          v3->fields.selectIsHiddenTruthSetting = enabled;
          selectPlayerFilePath = v3->fields.selectPlayerFilePath;
          selectObjectPath = v3->fields.selectObjectPath;
          selectGenderIndex = v3->fields.selectGenderIndex;
          selectStartModeName = v3->fields.selectStartModeName;
          if ( !ScriptManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v26);
          if ( ScriptManager__SetScriptPlayerSetting(
                 selectPlayerFilePath,
                 selectObjectPath,
                 selectGenderIndex,
                 selectStartModeName,
                 enabled,
                 0LL) )
          {
            this = (ScriptDefaultFilePlayerMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( !this )
              goto LABEL_17;
            ScriptManager__WriteSetting((ScriptManager_o *)this, 0LL);
          }
          v3->fields.state = 5;
          debugTestRootComponent = v3->fields.debugTestRootComponent;
          v36 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
          System_Action___ctor(v36, (Il2CppObject *)v3, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0LL);
          v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
          System_Action___ctor(v40, (Il2CppObject *)v3, Method_ScriptDefaultFilePlayerMenu_EndPlayScript__, 0LL);
          JumpLine = ScriptDefaultFilePlayerMenu__GetJumpLine(v3, v41);
          memset(&v45, 0, sizeof(v45));
          ScriptConnectData___ctor(
            &v45,
            (System_String_o *)StringLiteral_3412/*"C:/Avalon/Temporary/ScriptData"*/,
            (System_String_o *)StringLiteral_5319/*"DefaultScript.txt"*/,
            v36,
            v40,
            JumpLine,
            1,
            v43);
          if ( debugTestRootComponent )
          {
            v44 = v45;
            DebugTestRootComponent__StartFileScript(debugTestRootComponent, &v44, 0LL);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall ScriptDefaultFilePlayerMenu__Open(
        ScriptDefaultFilePlayerMenu_o *this,
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *callback,
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
  ScriptManager_o *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  ScriptManager_c *v23; // x0
  struct System_String_o *scriptPlayerPathSettingAddress; // x1
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  ScriptManager_c *v32; // x0
  struct System_String_o *scriptPlayerObjectSettingAddress; // x1
  __int64 v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  ScriptManager_c *v41; // x0
  struct System_String_o *scriptStartModeSettingName; // x1
  __int64 v43; // x2
  ScriptManager_c *v44; // x0
  struct ScriptManager_StaticFields *static_fields; // x8
  UIPopupList_o *genderInput; // x21
  __int64 v47; // x2
  UnityEngine_Behaviour_o *forceCheckOnSprite; // x21
  System_Enum_o v49; // [xsp+8h] [xbp-48h] BYREF
  int32_t selectGenderIndex; // [xsp+18h] [xbp-38h]

  if ( (byte_4B139A1 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptManager_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Gender_Type_TypeInfo, v12, v13);
    byte_4B139A1 = 1;
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
      goto LABEL_45;
    ScriptManager__ReadSetting(Instance, 0LL);
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v16);
    if ( !byte_4B13953 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v16, v17);
      byte_4B13953 = 1;
    }
    v23 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v16);
      v23 = ScriptManager_TypeInfo;
    }
    scriptPlayerPathSettingAddress = v23->static_fields->scriptPlayerPathSettingAddress;
    this->fields.selectPlayerFilePath = scriptPlayerPathSettingAddress;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectPlayerFilePath,
      (int64_t)scriptPlayerPathSettingAddress,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    if ( !byte_4B13954 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v25, v26);
      byte_4B13954 = 1;
    }
    v32 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v25);
      v32 = ScriptManager_TypeInfo;
    }
    scriptPlayerObjectSettingAddress = v32->static_fields->scriptPlayerObjectSettingAddress;
    this->fields.selectObjectPath = scriptPlayerObjectSettingAddress;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectObjectPath,
      (int64_t)scriptPlayerObjectSettingAddress,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    if ( !byte_4B13956 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v34, v35);
      byte_4B13956 = 1;
    }
    v41 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v34);
      v41 = ScriptManager_TypeInfo;
    }
    this->fields.selectGenderIndex = v41->static_fields->scriptGenderSettingIndex;
    if ( !byte_4B13955 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v34, v35);
      v41 = ScriptManager_TypeInfo;
      byte_4B13955 = 1;
    }
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41, v34);
      v41 = ScriptManager_TypeInfo;
    }
    scriptStartModeSettingName = v41->static_fields->scriptStartModeSettingName;
    this->fields.selectStartModeName = scriptStartModeSettingName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectStartModeName,
      (int64_t)scriptStartModeSettingName,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
    if ( !byte_4B13959 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v15, v43);
      byte_4B13959 = 1;
    }
    v44 = ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v15);
      v44 = ScriptManager_TypeInfo;
    }
    static_fields = v44->static_fields;
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
    v49.klass = (System_Enum_c *)Gender_Type_TypeInfo;
    v49.monitor = (void *)-1LL;
    Instance = (ScriptManager_o *)System_Enum__ToString(&v49, 0LL);
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
    if ( !byte_4B13A40 )
    {
      sub_1BCA7E0(&ScriptManager_TypeInfo, v15, v47);
      byte_4B13A40 = 1;
    }
    Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v15);
      Instance = (ScriptManager_o *)ScriptManager_TypeInfo;
    }
    if ( !forceCheckOnSprite )
LABEL_45:
      sub_1BCAA3C(Instance, v15);
    UnityEngine_Behaviour__set_enabled(
      forceCheckOnSprite,
      BYTE1(Instance->fields.equipViewSeed[3].fields.m_CachedPtr),
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

  if ( (byte_4B1399F & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1399F = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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

  if ( (byte_4B139A0 & 1) == 0 )
  {
    sub_1BCA7E0(&ScriptDefaultFilePlayerMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B139A0 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  ScriptDefaultFilePlayerMenu__Open(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ScriptDefaultFilePlayerMenu_CallbackFunc___ctor(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A0A31C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0A2D4;
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
  if ( (byte_4B139A5 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B139A5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ScriptDefaultFilePlayerMenu_CallbackFunc__EndInvoke(
        ScriptDefaultFilePlayerMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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