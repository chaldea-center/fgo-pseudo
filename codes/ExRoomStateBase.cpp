void ExRoomStateBase___ctor(ExRoomStateBase_o *this, ExRoomRootComponent_o *exRoom, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  *(_QWORD *)&this->fields.titleBackKind = 0x6400000002LL;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.root = exRoom;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)exRoom, v5, v6, v7, v8, v9, v10);
}


void ExRoomStateBase__OnClickBack(ExRoomStateBase_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  AvalonSceneManager_c *v6; // x8
  CommonUI_o *v7; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_5932D90 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_ExRoomStateBase__OnClickBack_b__21_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932D90 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = AvalonSceneManager_TypeInfo;
  v7 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    v6 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ExRoomStateBase__OnClickBack_b__21_0__, 0);
  if ( !v7 )
    sub_21FFECC(v10, v11);
  CommonUI__maskFadeout(v7, 1, DEFAULT_FADE_TIME, v9, 0);
}


void ExRoomStateBase__OnEnter(ExRoomStateBase_o *this, const MethodInfo *method)
{
  this->fields._OnEndEnter_k__BackingField = 1;
}


void ExRoomStateBase__OnEnterPlayVoice(ExRoomStateBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct ExRoomRootComponent_o *root; // x8

  root = this->fields.root;
  if ( !root || (this = (ExRoomStateBase_o *)root->fields.servant) == 0 )
    sub_21FFECC(this, method);
  ExRoomServant__PlayVoice_39137616((ExRoomServant_o *)this, root->fields.currentState, root->fields.prevState, 1, v2);
}


void ExRoomStateBase__OnEnterSequence(ExRoomStateBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ExRoomRootComponent_o *root; // x8
  ExRoomServant_o *servant; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2

  if ( (byte_5932D8F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExRoomStateBase__OnEnterSequence_b__16_0__);
    byte_5932D8F = 1;
  }
  this->fields._OnEndEnter_k__BackingField = 0;
  ExRoomStateBase__SetHeaderTitle(this, method);
  root = this->fields.root;
  if ( !root || (servant = root->fields.servant) == 0 )
    sub_21FFECC(v3, v4);
  servant->fields.isReservePlayVoice = 1;
  v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_ExRoomStateBase__OnEnterSequence_b__16_0__, 0);
  ExRoomServant__FadeIn(servant, v7, v8);
  ((void (__fastcall *)(ExRoomStateBase_o *, const MethodInfo *))this->klass->vtable._5_OnEnter.methodPtr)(
    this,
    this->klass->vtable._5_OnEnter.method);
}


void ExRoomStateBase__OnExit(ExRoomStateBase_o *this, const MethodInfo *method)
{
  this->fields._OnEndExit_k__BackingField = 1;
}


void ExRoomStateBase__OnExitSequence(ExRoomStateBase_o *this, const MethodInfo *method)
{
  ExRoomStateBase_c *klass; // x8

  klass = this->klass;
  this->fields._OnEndExit_k__BackingField = 0;
  ((void (__fastcall *)(ExRoomStateBase_o *, const MethodInfo *))klass->vtable._6_OnExit.methodPtr)(
    this,
    klass->vtable._6_OnExit.method);
}


void ExRoomStateBase__SetHeaderTitle(ExRoomStateBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.root )
    sub_21FFECC(this, method);
  ExRoomRootComponent__SetHeaderTitle(
    (ExRoomRootComponent_o *)this,
    this->fields.titleBackKind,
    this->fields.titleKind,
    v2);
}


void ExRoomStateBase___OnClickBack_b__21_0(ExRoomStateBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ExRoomStateBase___c_c *v4; // x0
  ExRoomRootComponent_o *root; // x19
  struct ExRoomStateBase___c_StaticFields *static_fields; // x8
  System_Action_o *_9__21_1; // x20
  Il2CppObject *v8; // x21
  struct ExRoomStateBase___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5932D91 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ExRoomStateBase___c__OnClickBack_b__21_1__);
    sub_21FFC50(&ExRoomStateBase___c_TypeInfo);
    byte_5932D91 = 1;
  }
  v4 = ExRoomStateBase___c_TypeInfo;
  root = this->fields.root;
  if ( !*(&ExRoomStateBase___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExRoomStateBase___c_TypeInfo, method, v2);
    v4 = ExRoomStateBase___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__21_1 = static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = ExRoomStateBase___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(_9__21_1, v8, Method_ExRoomStateBase___c__OnClickBack_b__21_1__, 0);
    v9 = ExRoomStateBase___c_TypeInfo->static_fields;
    v9->__9__21_1 = _9__21_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__21_1, (int32_t)_9__21_1, v10, v11, v12, v13, v14, v15);
  }
  if ( !root )
    sub_21FFECC(v4, method);
  ExRoomRootComponent__Quit(root, _9__21_1, v2);
}


void ExRoomStateBase___OnEnterSequence_b__16_0(ExRoomStateBase_o *this, const MethodInfo *method)
{
  struct ExRoomRootComponent_o *root; // x8
  struct ExRoomServant_o *servant; // x8

  root = this->fields.root;
  if ( !root || (servant = root->fields.servant) == 0 )
    sub_21FFECC(this, method);
  servant->fields.isReservePlayVoice = 0;
  ((void (__fastcall *)(ExRoomStateBase_o *, const MethodInfo *))this->klass->vtable._4_OnEnterPlayVoice.methodPtr)(
    this,
    this->klass->vtable._4_OnEnterPlayVoice.method);
}


bool ExRoomStateBase__get_OnEndEnter(ExRoomStateBase_o *this, const MethodInfo *method)
{
  return this->fields._OnEndEnter_k__BackingField;
}


bool ExRoomStateBase__get_OnEndExit(ExRoomStateBase_o *this, const MethodInfo *method)
{
  return this->fields._OnEndExit_k__BackingField;
}


int32_t ExRoomStateBase__get_TutorialOpenType(ExRoomStateBase_o *this, const MethodInfo *method)
{
  return this->fields.tutorialOpenType;
}


void ExRoomStateBase__set_OnEndEnter(ExRoomStateBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._OnEndEnter_k__BackingField = value;
}


void ExRoomStateBase__set_OnEndExit(ExRoomStateBase_o *this, bool value, const MethodInfo *method)
{
  this->fields._OnEndExit_k__BackingField = value;
}


void ExRoomStateBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932D92 & 1) == 0 )
  {
    sub_21FFC50(&ExRoomStateBase___c_TypeInfo);
    byte_5932D92 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ExRoomStateBase___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExRoomStateBase___c_TypeInfo->static_fields->__9 = (struct ExRoomStateBase___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExRoomStateBase___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExRoomStateBase___c___ctor(ExRoomStateBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExRoomStateBase___c___OnClickBack_b__21_1(ExRoomStateBase___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5932D93 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5932D93 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}