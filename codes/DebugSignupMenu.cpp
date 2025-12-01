void DebugSignupMenu___ctor(DebugSignupMenu_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool DebugSignupMenu__CloseSignupInput(DebugSignupMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *signupLineInput1; // x0

  signupLineInput1 = this->fields.signupLineInput1;
  if ( !signupLineInput1 )
    goto LABEL_11;
  UILineInput__SetInputEnable(signupLineInput1, 0, 0);
  signupLineInput1 = this->fields.signupIntegerInput1;
  if ( !signupLineInput1 )
    goto LABEL_11;
  UILineInput__SetInputEnable(signupLineInput1, 0, 0);
  signupLineInput1 = this->fields.signupIntegerInput2;
  if ( !signupLineInput1 )
    goto LABEL_11;
  UILineInput__SetInputEnable(signupLineInput1, 0, 0);
  signupLineInput1 = (UILineInput_o *)this->fields.signupGenderInput;
  if ( !signupLineInput1 )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)signupLineInput1, 0, 0);
  signupLineInput1 = (UILineInput_o *)this->fields.signupDecideButton;
  if ( !signupLineInput1 )
    goto LABEL_11;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)signupLineInput1, 0, 0);
  signupLineInput1 = (UILineInput_o *)this->fields.signupDecideButton;
  if ( !signupLineInput1
    || (((void (__fastcall *)(UILineInput_o *, _QWORD, const char *))signupLineInput1->klass[1]._1.name)(
          signupLineInput1,
          0,
          signupLineInput1->klass[1]._1.namespaze),
        (signupLineInput1 = (UILineInput_o *)this->fields.signupModeButton) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)signupLineInput1, 0, 0),
        (signupLineInput1 = (UILineInput_o *)this->fields.signupModeButton) == 0)
    || (((void (__fastcall *)(UILineInput_o *, _QWORD, const char *))signupLineInput1->klass[1]._1.name)(
          signupLineInput1,
          0,
          signupLineInput1->klass[1]._1.namespaze),
        (signupLineInput1 = (UILineInput_o *)this->fields.signupRootObject) == 0) )
  {
LABEL_11:
    sub_1C71608(signupLineInput1, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)signupLineInput1, 0, 0);
  return 1;
}


bool DebugSignupMenu__CloseTakeoverInput(DebugSignupMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *takeoverLineInput1; // x0

  takeoverLineInput1 = this->fields.takeoverLineInput1;
  if ( !takeoverLineInput1 )
    goto LABEL_10;
  UILineInput__SetInputEnable(takeoverLineInput1, 0, 0);
  takeoverLineInput1 = this->fields.takeoverLineInput2;
  if ( !takeoverLineInput1 )
    goto LABEL_10;
  UILineInput__SetInputEnable(takeoverLineInput1, 0, 0);
  takeoverLineInput1 = this->fields.takeoverLineInput3;
  if ( !takeoverLineInput1 )
    goto LABEL_10;
  UILineInput__SetInputEnable(takeoverLineInput1, 0, 0);
  takeoverLineInput1 = (UILineInput_o *)this->fields.takeoverDecideButton;
  if ( !takeoverLineInput1 )
    goto LABEL_10;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)takeoverLineInput1, 0, 0);
  takeoverLineInput1 = (UILineInput_o *)this->fields.takeoverDecideButton;
  if ( !takeoverLineInput1
    || (((void (__fastcall *)(UILineInput_o *, _QWORD, const char *))takeoverLineInput1->klass[1]._1.name)(
          takeoverLineInput1,
          0,
          takeoverLineInput1->klass[1]._1.namespaze),
        (takeoverLineInput1 = (UILineInput_o *)this->fields.takeoverModeButton) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)takeoverLineInput1, 0, 0),
        (takeoverLineInput1 = (UILineInput_o *)this->fields.takeoverModeButton) == 0)
    || (((void (__fastcall *)(UILineInput_o *, _QWORD, const char *))takeoverLineInput1->klass[1]._1.name)(
          takeoverLineInput1,
          0,
          takeoverLineInput1->klass[1]._1.namespaze),
        (takeoverLineInput1 = (UILineInput_o *)this->fields.takeoverRootObject) == 0) )
  {
LABEL_10:
    sub_1C71608(takeoverLineInput1, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)takeoverLineInput1, 0, 0);
  return 1;
}


void DebugSignupMenu__OnChangeInputSignup(DebugSignupMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *signupLineInput1; // x0
  __int64 v4; // x1
  System_String_o *Text; // x20
  UILineInput_o *signupIntegerInput1; // x0
  System_String_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  UILineInput_o *signupIntegerInput2; // x0
  System_String_o *v11; // x0
  int32_t v12; // w3
  System_DateTime_o v13; // x0
  __int64 v14; // x1
  bool v15; // w20
  UnityEngine_Behaviour_o *signupDecideButton; // x0
  __int64 v17; // x1
  struct UIButton_o *v18; // x0
  __int64 v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC486B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC486B = 1;
  }
  signupLineInput1 = this->fields.signupLineInput1;
  if ( !signupLineInput1 )
    sub_1C71608(0, method);
  Text = UILineInput__GetText(signupLineInput1, 0);
  signupIntegerInput1 = this->fields.signupIntegerInput1;
  if ( !signupIntegerInput1 )
    sub_1C71608(0, v4);
  v7 = UILineInput__GetText(signupIntegerInput1, 0);
  v9 = System_Int32__Parse(v7, 0);
  signupIntegerInput2 = this->fields.signupIntegerInput2;
  if ( !signupIntegerInput2 )
    sub_1C71608(0, v8);
  v11 = UILineInput__GetText(signupIntegerInput2, 0);
  v12 = System_Int32__Parse(v11, 0);
  v19 = 0;
  v13.fields._dateData = (uint64_t)&v19;
  System_DateTime___ctor_65415888(v13, 2000, v9, v12, 0);
  v15 = System_String__op_Inequality(Text, (System_String_o *)StringLiteral_1/*""*/, 0);
  signupDecideButton = (UnityEngine_Behaviour_o *)this->fields.signupDecideButton;
  if ( !signupDecideButton )
    sub_1C71608(0, v14);
  UnityEngine_Behaviour__set_enabled(signupDecideButton, v15, 0);
  v18 = this->fields.signupDecideButton;
  if ( !v18 )
    sub_1C71608(0, v17);
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))v18->klass->vtable._5_set_isEnabled.methodPtr)(
    v18,
    v15,
    v18->klass->vtable._5_set_isEnabled.method);
}


void DebugSignupMenu__OnChangeInputTakeover(DebugSignupMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *takeoverLineInput1; // x0
  __int64 v4; // x1
  System_String_o *Text; // x22
  UILineInput_o *takeoverLineInput2; // x0
  __int64 v7; // x1
  System_String_o *v8; // x21
  UILineInput_o *takeoverLineInput3; // x0
  System_String_o *v10; // x20
  __int64 v11; // x1
  System_String_o *name; // x1
  bool v13; // w20
  UnityEngine_Behaviour_o *takeoverDecideButton; // x0
  __int64 v15; // x1
  struct UIButton_o *v16; // x0

  if ( (byte_4CC486E & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC486E = 1;
  }
  takeoverLineInput1 = this->fields.takeoverLineInput1;
  if ( !takeoverLineInput1 )
    sub_1C71608(0, method);
  Text = UILineInput__GetText(takeoverLineInput1, 0);
  takeoverLineInput2 = this->fields.takeoverLineInput2;
  if ( !takeoverLineInput2 )
    sub_1C71608(0, v4);
  v8 = UILineInput__GetText(takeoverLineInput2, 0);
  takeoverLineInput3 = this->fields.takeoverLineInput3;
  if ( !takeoverLineInput3 )
    sub_1C71608(0, v7);
  v10 = UILineInput__GetText(takeoverLineInput3, 0);
  if ( System_String__op_Inequality(Text, (System_String_o *)StringLiteral_1/*""*/, 0)
    && System_String__op_Inequality(v8, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
    v13 = System_String__op_Inequality(v10, name, 0);
  }
  else
  {
    v13 = 0;
  }
  takeoverDecideButton = (UnityEngine_Behaviour_o *)this->fields.takeoverDecideButton;
  if ( !takeoverDecideButton )
    sub_1C71608(0, v11);
  UnityEngine_Behaviour__set_enabled(takeoverDecideButton, v13, 0);
  v16 = this->fields.takeoverDecideButton;
  if ( !v16 )
    sub_1C71608(0, v15);
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))v16->klass->vtable._5_set_isEnabled.methodPtr)(
    v16,
    v13,
    v16->klass->vtable._5_set_isEnabled.method);
}


void DebugSignupMenu__OnClickInputSignup(DebugSignupMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC486C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_12225/*"SIGNUP_INPUT_OK"*/);
    byte_4CC486C = 1;
  }
  UnityEngine_Input__set_imeCompositionMode(0, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_12225/*"SIGNUP_INPUT_OK"*/, 0);
}


void DebugSignupMenu__OnClickInputTakeover(DebugSignupMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC486F & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_13340/*"TAKEOVER_INPUT_OK"*/);
    byte_4CC486F = 1;
  }
  UnityEngine_Input__set_imeCompositionMode(0, 0);
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, v3);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_13340/*"TAKEOVER_INPUT_OK"*/, 0);
}


void DebugSignupMenu__OnClickModeSignup(DebugSignupMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  DebugSignupMenu__CloseSignupInput(this, method);
  DebugSignupMenu__OpenTakeoverInput(this, v3);
}


void DebugSignupMenu__OnClickModeTakeover(DebugSignupMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  DebugSignupMenu__CloseTakeoverInput(this, method);
  DebugSignupMenu__OpenSignupInput(this, v3);
}


bool DebugSignupMenu__Open(DebugSignupMenu_o *this, PlayMakerFSM_o *fsm, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PlayMakerFSM_o **p_myFSM; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v12; // x1

  this->fields.myFSM = fsm;
  p_myFSM = &this->fields.myFSM;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.myFSM, (int32_t)fsm, (int32_t)method, v3, v4, v5, v6, v7);
  UnityEngine_Input__set_imeCompositionMode(1, 0);
  gameObject = (UnityEngine_Component_o *)*(p_myFSM - 14);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0),
        (gameObject = (UnityEngine_Component_o *)this->fields.takeoverModeButton) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_1C71608(gameObject, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  DebugSignupMenu__OpenTakeoverInput(this, v12);
  return 1;
}


bool DebugSignupMenu__OpenSignupInput(DebugSignupMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *signupRootObject; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4CC486A & 1) == 0 )
  {
    sub_1C713B0(&ManagerConfig_TypeInfo);
    byte_4CC486A = 1;
  }
  signupRootObject = this->fields.signupRootObject;
  if ( !signupRootObject )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(signupRootObject, 1, 0);
  signupRootObject = (UnityEngine_GameObject_o *)this->fields.signupLineInput1;
  if ( !signupRootObject )
    goto LABEL_13;
  UILineInput__SetInputEnable((UILineInput_o *)signupRootObject, 1, 0);
  signupRootObject = (UnityEngine_GameObject_o *)this->fields.signupIntegerInput1;
  if ( !signupRootObject )
    goto LABEL_13;
  UILineInput__SetInputEnable((UILineInput_o *)signupRootObject, 1, 0);
  signupRootObject = (UnityEngine_GameObject_o *)this->fields.signupIntegerInput2;
  if ( !signupRootObject )
    goto LABEL_13;
  UILineInput__SetInputEnable((UILineInput_o *)signupRootObject, 1, 0);
  signupRootObject = (UnityEngine_GameObject_o *)this->fields.signupGenderInput;
  if ( !signupRootObject )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)signupRootObject, 1, 0);
  DebugSignupMenu__OnChangeInputSignup(this, v4);
  signupRootObject = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    signupRootObject = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
  }
  if ( !this->fields.signupModeButton
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)this->fields.signupModeButton,
          *(_BYTE *)(signupRootObject[7].fields.m_CachedPtr + 731) == 0,
          0),
        (signupRootObject = (UnityEngine_GameObject_o *)this->fields.signupModeButton) == 0) )
  {
LABEL_13:
    sub_1C71608(signupRootObject, method);
  }
  ((void (*)(void))signupRootObject->klass[1]._1.name)();
  return 1;
}


bool DebugSignupMenu__OpenTakeoverInput(DebugSignupMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *takeoverRootObject; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4CC486D & 1) == 0 )
  {
    sub_1C713B0(&ManagerConfig_TypeInfo);
    byte_4CC486D = 1;
  }
  takeoverRootObject = this->fields.takeoverRootObject;
  if ( !takeoverRootObject )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(takeoverRootObject, 1, 0);
  takeoverRootObject = (UnityEngine_GameObject_o *)this->fields.takeoverLineInput1;
  if ( !takeoverRootObject )
    goto LABEL_12;
  UILineInput__SetInputEnable((UILineInput_o *)takeoverRootObject, 1, 0);
  takeoverRootObject = (UnityEngine_GameObject_o *)this->fields.takeoverLineInput2;
  if ( !takeoverRootObject )
    goto LABEL_12;
  UILineInput__SetInputEnable((UILineInput_o *)takeoverRootObject, 1, 0);
  takeoverRootObject = (UnityEngine_GameObject_o *)this->fields.takeoverLineInput3;
  if ( !takeoverRootObject )
    goto LABEL_12;
  UILineInput__SetInputEnable((UILineInput_o *)takeoverRootObject, 1, 0);
  DebugSignupMenu__OnChangeInputTakeover(this, v4);
  takeoverRootObject = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    takeoverRootObject = (UnityEngine_GameObject_o *)ManagerConfig_TypeInfo;
  }
  if ( !this->fields.takeoverModeButton
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)this->fields.takeoverModeButton,
          *(_BYTE *)(takeoverRootObject[7].fields.m_CachedPtr + 731) == 0,
          0),
        (takeoverRootObject = (UnityEngine_GameObject_o *)this->fields.takeoverModeButton) == 0) )
  {
LABEL_12:
    sub_1C71608(takeoverRootObject, method);
  }
  ((void (*)(void))takeoverRootObject->klass[1]._1.name)();
  return 1;
}


void DebugSignupMenu__RequestSignup(DebugSignupMenu_o *this, PlayMakerFSM_o *fsm, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  Il2CppObject *Request_object; // x0
  __int64 v12; // x1
  RequestBase_o *v13; // x19

  if ( (byte_4CC4870 & 1) == 0 )
  {
    sub_1C713B0(&Method_DebugSignupMenu_callbackTopSignup__);
    sub_1C713B0(&ManagerConfig_TypeInfo);
    sub_1C713B0(&Method_NetworkManager_getRequest_TopSignupRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CC4870 = 1;
  }
  this->fields.myFSM = fsm;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.myFSM, (int32_t)fsm, (int32_t)method, v3, v4, v5, v6, v7);
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_DebugSignupMenu_callbackTopSignup__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_TopSignupRequest___);
  v13 = (RequestBase_o *)Request_object;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
  if ( !v13 )
    sub_1C71608(Request_object, v12);
  RequestBase__beginRequest(v13, 0);
}


void DebugSignupMenu__SetupTakeover(DebugSignupMenu_o *this, PlayMakerFSM_o *fsm, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct PlayMakerFSM_o **p_myFSM; // x19
  __int64 v11; // x1
  UILineInput_o *takeoverLineInput1; // x0
  System_String_o *v13; // x20
  UILineInput_o *takeoverLineInput3; // x8
  System_String_o *v15; // x21
  System_String_o *Text; // x22
  DataManager_c *v17; // x0
  int32_t dataVersion; // w23
  DataManager_c *v19; // x0
  int64_t dateVersion; // x24

  if ( (byte_4CC4872 & 1) == 0 )
  {
    sub_1C713B0(&OptionManager_TypeInfo);
    sub_1C713B0(&OtherUserNewManager_TypeInfo);
    sub_1C713B0(&ServantCommentManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C713B0(&UserCommandCodeCollectionManager_TypeInfo);
    sub_1C713B0(&UserCommandCodeNewManager_TypeInfo);
    sub_1C713B0(&UserEquipNewManager_TypeInfo);
    sub_1C713B0(&UserServantCollectionManager_TypeInfo);
    sub_1C713B0(&UserServantNewManager_TypeInfo);
    sub_1C713B0(&StringLiteral_12022/*"SETUP_OK"*/);
    byte_4CC4872 = 1;
  }
  this->fields.myFSM = fsm;
  p_myFSM = &this->fields.myFSM;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.myFSM, (int32_t)fsm, (int32_t)method, v3, v4, v5, v6, v7);
  takeoverLineInput1 = this->fields.takeoverLineInput1;
  if ( !takeoverLineInput1 )
    goto LABEL_37;
  takeoverLineInput1 = (UILineInput_o *)UILineInput__GetText(takeoverLineInput1, 0);
  if ( !this->fields.takeoverLineInput2 )
    goto LABEL_37;
  v13 = (System_String_o *)takeoverLineInput1;
  takeoverLineInput1 = (UILineInput_o *)UILineInput__GetText(this->fields.takeoverLineInput2, 0);
  takeoverLineInput3 = this->fields.takeoverLineInput3;
  if ( !takeoverLineInput3 )
    goto LABEL_37;
  v15 = (System_String_o *)takeoverLineInput1;
  Text = UILineInput__GetText(takeoverLineInput3, 0);
  takeoverLineInput1 = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !takeoverLineInput1 )
    goto LABEL_37;
  if ( !byte_4CC4934 )
  {
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC4934 = 1;
  }
  v17 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v17 = DataManager_TypeInfo;
  }
  dataVersion = v17->static_fields->dataVersion;
  takeoverLineInput1 = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !takeoverLineInput1 )
    goto LABEL_37;
  if ( !byte_4CC4935 )
  {
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC4935 = 1;
  }
  v19 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v19 = DataManager_TypeInfo;
  }
  dateVersion = v19->static_fields->dateVersion;
  UserSaveData__DeleteSaveData(1, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__Initialize(0);
  takeoverLineInput1 = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !takeoverLineInput1 )
    goto LABEL_37;
  DataManager__setMasterDataVersion((DataManager_o *)takeoverLineInput1, dataVersion, dateVersion, 0);
  takeoverLineInput1 = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !takeoverLineInput1 )
    goto LABEL_37;
  NetworkManager__SetAuth((NetworkManager_o *)takeoverLineInput1, v13, v15, Text, 0);
  takeoverLineInput1 = (UILineInput_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
  if ( !takeoverLineInput1 )
    goto LABEL_37;
  NetworkManager__WriteAuth((NetworkManager_o *)takeoverLineInput1, 0);
  if ( !UserServantNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantNewManager_TypeInfo);
  UserServantNewManager__CreateContinueDeviceSaveData(0);
  if ( !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  UserServantCollectionManager__CreateContinueDeviceSaveData(0);
  if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
  ServantCommentManager__CreateContinueDeviceSaveData(0);
  if ( !UserEquipNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserEquipNewManager_TypeInfo);
  UserEquipNewManager__CreateContinueDeviceSaveData(0);
  if ( !OtherUserNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OtherUserNewManager_TypeInfo);
  OtherUserNewManager__CreateContinueDeviceSaveData(0);
  if ( !UserCommandCodeNewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeNewManager_TypeInfo);
  UserCommandCodeNewManager__CreateContinueDeviceSaveData(0);
  if ( !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  UserCommandCodeCollectionManager__CreateContinueDeviceSaveData(0);
  SoundPlayerComponent__CreateContinueDeviceSaveData(0);
  takeoverLineInput1 = (UILineInput_o *)*p_myFSM;
  if ( !*p_myFSM )
LABEL_37:
    sub_1C71608(takeoverLineInput1, v11);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)takeoverLineInput1, (System_String_o *)StringLiteral_12022/*"SETUP_OK"*/, 0);
}


void DebugSignupMenu__callbackTopSignup(DebugSignupMenu_o *this, System_String_o *result, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CC4871 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_11088/*"REQUEST_OK"*/);
    byte_4CC4871 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C71608(0, result);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11088/*"REQUEST_OK"*/, 0);
}