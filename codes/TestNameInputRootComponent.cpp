void TestNameInputRootComponent___ctor(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TestNameInputRootComponent__beginInitialize(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEBDBF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEBDBF = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestNameInputRootComponent__beginStartUp(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_42059656((SceneRootComponent_o *)this, 0);
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
    sub_1C7BD40(signupLineInput1, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)signupLineInput1, 0, 0);
  return 1;
}


void TestNameInputRootComponent__onChangeInput(TestNameInputRootComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CEBDC0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBDC0 = 1;
  }
  signupLineInput1 = this->fields.signupLineInput1;
  if ( !signupLineInput1 )
    sub_1C7BD40(0, method);
  Text = UILineInput__GetText(signupLineInput1, 0);
  signupIntegerInput1 = this->fields.signupIntegerInput1;
  if ( !signupIntegerInput1 )
    sub_1C7BD40(0, v4);
  v7 = UILineInput__GetText(signupIntegerInput1, 0);
  v9 = System_Int32__Parse(v7, 0);
  signupIntegerInput2 = this->fields.signupIntegerInput2;
  if ( !signupIntegerInput2 )
    sub_1C7BD40(0, v8);
  v11 = UILineInput__GetText(signupIntegerInput2, 0);
  v12 = System_Int32__Parse(v11, 0);
  v19 = 0;
  v13.fields._dateData = (uint64_t)&v19;
  System_DateTime___ctor_65561084(v13, 2000, v9, v12, 0);
  v15 = System_String__op_Inequality(Text, (System_String_o *)StringLiteral_1/*""*/, 0);
  signupDecideButton = (UnityEngine_Behaviour_o *)this->fields.signupDecideButton;
  if ( !signupDecideButton )
    sub_1C7BD40(0, v14);
  UnityEngine_Behaviour__set_enabled(signupDecideButton, v15, 0);
  v18 = this->fields.signupDecideButton;
  if ( !v18 )
    sub_1C7BD40(0, v17);
  ((void (__fastcall *)(struct UIButton_o *, bool, const MethodInfo *))v18->klass->vtable._5_set_isEnabled.methodPtr)(
    v18,
    v15,
    v18->klass->vtable._5_set_isEnabled.method);
}


void TestNameInputRootComponent__onClickInput(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *signupRootObject; // x0

  if ( (byte_4CEBDC1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_12270/*"SIGNUP_INPUT_OK"*/);
    byte_4CEBDC1 = 1;
  }
  TestNameInputRootComponent__closeSignupInput(this, method);
  signupRootObject = this->fields.signupRootObject;
  if ( !signupRootObject
    || (UnityEngine_GameObject__SetActive(signupRootObject, 1, 0),
        UnityEngine_Input__set_imeCompositionMode(0, 0),
        (signupRootObject = (UnityEngine_GameObject_o *)this->fields.myFSM) == 0) )
  {
    sub_1C7BD40(signupRootObject, v3);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)signupRootObject, (System_String_o *)StringLiteral_12270/*"SIGNUP_INPUT_OK"*/, 0);
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
    sub_1C7BD40(signupRootObject, method);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)signupRootObject, 1, 0);
  TestNameInputRootComponent__onChangeInput(this, v4);
  return 1;
}


void TestNameInputRootComponent__requestSignup(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myFSM; // x0

  if ( (byte_4CEBDC2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_11127/*"REQUEST_OK"*/);
    byte_4CEBDC2 = 1;
  }
  myFSM = this->fields.myFSM;
  if ( !myFSM )
    sub_1C7BD40(0, method);
  PlayMakerFSM__SendEvent(myFSM, (System_String_o *)StringLiteral_11127/*"REQUEST_OK"*/, 0);
}


bool TestNameInputRootComponent__startSignupInput(TestNameInputRootComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  UnityEngine_Input__set_imeCompositionMode(1, 0);
  TestNameInputRootComponent__openSignupInput(this, v3);
  return 1;
}