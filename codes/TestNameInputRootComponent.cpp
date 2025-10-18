void TestNameInputRootComponent___ctor(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TestNameInputRootComponent__beginInitialize(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C407A9 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C407A9 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestNameInputRootComponent__beginStartUp(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_41481188((SceneRootComponent_o *)this, 0);
}


bool TestNameInputRootComponent__closeSignupInput(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *signupLineInput1; // x0

  signupLineInput1 = this->fields.signupLineInput1;
  if ( !signupLineInput1 )
    goto LABEL_9;
  UILineInput__SetInputEnable(signupLineInput1, 0, 0);
  signupLineInput1 = this->fields.signupIntegerInput1;
  if ( !signupLineInput1 )
    goto LABEL_9;
  UILineInput__SetInputEnable(signupLineInput1, 0, 0);
  signupLineInput1 = this->fields.signupIntegerInput2;
  if ( !signupLineInput1 )
    goto LABEL_9;
  UILineInput__SetInputEnable(signupLineInput1, 0, 0);
  signupLineInput1 = (UILineInput_o *)this->fields.signupGenderInput;
  if ( !signupLineInput1
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)signupLineInput1, 0, 0),
        (signupLineInput1 = (UILineInput_o *)this->fields.signupDecideButton) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)signupLineInput1, 0, 0),
        (signupLineInput1 = (UILineInput_o *)this->fields.signupDecideButton) == 0)
    || (((void (__fastcall *)(UILineInput_o *, _QWORD, const char *))signupLineInput1->klass[1]._1.name)(
          signupLineInput1,
          0,
          signupLineInput1->klass[1]._1.namespaze),
        (signupLineInput1 = (UILineInput_o *)this->fields.signupRootObject) == 0) )
  {
LABEL_9:
    sub_1C372B4(signupLineInput1);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)signupLineInput1, 0, 0);
  return 1;
}


void TestNameInputRootComponent__onChangeInput(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  UILineInput_o *signupLineInput1; // x0
  System_String_o *Text; // x20
  UILineInput_o *signupIntegerInput1; // x0
  System_String_o *v6; // x0
  int32_t v7; // w21
  UILineInput_o *signupIntegerInput2; // x0
  System_String_o *v9; // x0
  int32_t v10; // w3
  System_DateTime_o v11; // x0
  bool v12; // w20
  UnityEngine_Behaviour_o *signupDecideButton; // x0
  struct UIButton_o *v14; // x0
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C407AA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C407AA = 1;
  }
  signupLineInput1 = this->fields.signupLineInput1;
  if ( !signupLineInput1 )
    sub_1C372B4(0);
  Text = UILineInput__GetText(signupLineInput1, 0);
  signupIntegerInput1 = this->fields.signupIntegerInput1;
  if ( !signupIntegerInput1 )
    sub_1C372B4(0);
  v6 = UILineInput__GetText(signupIntegerInput1, 0);
  v7 = System_Int32__Parse(v6, 0);
  signupIntegerInput2 = this->fields.signupIntegerInput2;
  if ( !signupIntegerInput2 )
    sub_1C372B4(0);
  v9 = UILineInput__GetText(signupIntegerInput2, 0);
  v10 = System_Int32__Parse(v9, 0);
  v15 = 0;
  v11.fields._dateData = (uint64_t)&v15;
  System_DateTime___ctor_64947432(v11, 2000, v7, v10, 0);
  v12 = System_String__op_Inequality(Text, (System_String_o *)StringLiteral_1/*""*/, 0);
  signupDecideButton = (UnityEngine_Behaviour_o *)this->fields.signupDecideButton;
  if ( !signupDecideButton )
    sub_1C372B4(0);
  UnityEngine_Behaviour__set_enabled(signupDecideButton, v12, 0);
  v14 = this->fields.signupDecideButton;
  if ( !v14 )
    sub_1C372B4(0);
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))v14->klass->vtable._5_set_isEnabled.methodPtr)(
    v14,
    v12,
    v14->klass->vtable._5_set_isEnabled.method);
}


void TestNameInputRootComponent__onClickInput(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *signupRootObject; // x0

  if ( (byte_4C407AB & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12220/*"SIGNUP_INPUT_OK"*/);
    byte_4C407AB = 1;
  }
  TestNameInputRootComponent__closeSignupInput(this, method);
  signupRootObject = this->fields.signupRootObject;
  if ( !signupRootObject
    || (UnityEngine_GameObject__SetActive(signupRootObject, 1, 0),
        UnityEngine_Input__set_imeCompositionMode(0, 0),
        (signupRootObject = (UnityEngine_GameObject_o *)this->fields.myFSM) == 0) )
  {
    sub_1C372B4(signupRootObject);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)signupRootObject, (System_String_o *)StringLiteral_12220/*"SIGNUP_INPUT_OK"*/, 0);
}


bool TestNameInputRootComponent__openSignupInput(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *signupRootObject; // x0
  const MethodInfo *v4; // x1

  signupRootObject = this->fields.signupRootObject;
  if ( !signupRootObject )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(signupRootObject, 1, 0);
  signupRootObject = (UnityEngine_GameObject_o *)this->fields.signupLineInput1;
  if ( !signupRootObject
    || (UILineInput__SetInputEnable((UILineInput_o *)signupRootObject, 1, 0),
        (signupRootObject = (UnityEngine_GameObject_o *)this->fields.signupIntegerInput1) == 0)
    || (UILineInput__SetInputEnable((UILineInput_o *)signupRootObject, 1, 0),
        (signupRootObject = (UnityEngine_GameObject_o *)this->fields.signupIntegerInput2) == 0)
    || (UILineInput__SetInputEnable((UILineInput_o *)signupRootObject, 1, 0),
        (signupRootObject = (UnityEngine_GameObject_o *)this->fields.signupGenderInput) == 0) )
  {
LABEL_7:
    sub_1C372B4(signupRootObject);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)signupRootObject, 1, 0);
  TestNameInputRootComponent__onChangeInput(this, v4);
  return 1;
}


void TestNameInputRootComponent__requestSignup(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4C407AC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    byte_4C407AC = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11084/*"REQUEST_OK"*/, 0);
}


bool TestNameInputRootComponent__startSignupInput(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UnityEngine_Input__set_imeCompositionMode(1, 0);
  TestNameInputRootComponent__openSignupInput(this, v3);
  return 1;
}