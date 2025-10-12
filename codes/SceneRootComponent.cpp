void SceneRootComponent___ctor(SceneRootComponent_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  struct ManagerConfig_StaticFields *static_fields; // x8

  if ( (byte_4C37326 & 1) == 0 )
  {
    sub_1C32C20(&ManagerConfig_TypeInfo);
    byte_4C37326 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  static_fields = v3->static_fields;
  this->fields.manualWidth = static_fields->WIDTH;
  this->fields.manualHeight = static_fields->HEIGHT;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SceneRootComponent__OnApplicationPause(SceneRootComponent_o *this, bool pauseStatus, const MethodInfo *method)
{
  if ( !pauseStatus && this->fields.manualWidth >= 1 && this->fields.manualHeight >= 1 )
    CommonFunction__ReScaleUiFunc(this->fields.uiRoot, 0);
}


void SceneRootComponent__ReScaleUpdate(SceneRootComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.manualWidth >= 1 && this->fields.manualHeight >= 1 )
    CommonFunction__ReScaleUiFunc(this->fields.uiRoot, 0);
}


bool SceneRootComponent__SetSceneActive(SceneRootComponent_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *uiRoot; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C37321 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C37321 = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.uiRoot;
    if ( !gameObject )
      goto LABEL_13;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_13;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) != flag )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.uiRoot;
      if ( gameObject )
      {
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, flag, 0);
          return 1;
        }
      }
LABEL_13:
      sub_1C32E7C(gameObject);
    }
  }
  return 0;
}


void SceneRootComponent__Start(SceneRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *ComponentInChildren_object__51199524; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C37320 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_UIRoot___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_4C37320 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.myFSM = (struct PlayMakerFSM_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.myFSM, (int32_t)Component_object, v4, v5);
  ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_UIRoot___);
  this->fields.uiRoot = (struct UIRoot_o *)ComponentInChildren_object__51199524;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.uiRoot, (int32_t)ComponentInChildren_object__51199524, v7, v8);
  if ( this->fields.manualWidth >= 1 && this->fields.manualHeight >= 1 )
    CommonFunction__ReScaleUiFunc(this->fields.uiRoot, 0);
}


void SceneRootComponent__beginFinish(SceneRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void SceneRootComponent__beginInitialize(SceneRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o v3; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3.fields.r = 1.0;
  v3.fields.g = 1.0;
  v3.fields.b = 1.0;
  v3.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v3, 0);
  *(_QWORD *)&this->fields.kind = 0x100000000LL;
  MainMenuBar__setActiveScene_41187584(this, 0, 1, 0, 0);
}


void SceneRootComponent__beginPause(SceneRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void SceneRootComponent__beginResume(SceneRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  ((void (__fastcall *)(SceneRootComponent_o *, const MethodInfo *))this->klass->vtable._10_beginResume.methodPtr)(
    this,
    this->klass->vtable._10_beginResume.method);
}


void SceneRootComponent__beginResume_41381892(SceneRootComponent_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(SceneRootComponent_o *, const MethodInfo *))this->klass->vtable._7_beginFinish.methodPtr)(
    this,
    this->klass->vtable._7_beginFinish.method);
  ((void (__fastcall *)(SceneRootComponent_o *, const MethodInfo *))this->klass->vtable._6_beginStartUp.methodPtr)(
    this,
    this->klass->vtable._6_beginStartUp.method);
  MainMenuBar__resumeMenuBar(this, this->fields.kind, this->fields.depth, 0);
}


void SceneRootComponent__beginStartUp(SceneRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  ((void (__fastcall *)(SceneRootComponent_o *, const MethodInfo *))this->klass->vtable._6_beginStartUp.methodPtr)(
    this,
    this->klass->vtable._6_beginStartUp.method);
}


void SceneRootComponent__beginStartUp_41381708(SceneRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4C37325 & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C37325 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v4 )
    sub_1C32E7C(Instance);
  CommonUI__maskFadein(v4, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  SceneRootComponent__sendMessageStartUp(this, v5);
}


void SceneRootComponent__changeScene(SceneRootComponent_o *this, int32_t type, const MethodInfo *method)
{
  ;
}


bool SceneRootComponent__checkSceneName(SceneRootComponent_o *this, System_String_o *name, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0

  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject || (gameObject = (UnityEngine_Object_o *)UnityEngine_Object__get_name(gameObject, 0)) == 0 )
    sub_1C32E7C(gameObject);
  return System_String__Equals_63553848((System_String_o *)gameObject, name, 0);
}


System_String_o *SceneRootComponent__getSceneName(SceneRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x0

  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  return UnityEngine_Object__get_name(gameObject, 0);
}


void SceneRootComponent__initRenderSetting(SceneRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Color_o v2; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2.fields.r = 1.0;
  v2.fields.g = 1.0;
  v2.fields.b = 1.0;
  v2.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v2, 0);
}


void SceneRootComponent__resumeMainMenuBar(SceneRootComponent_o *this, const MethodInfo *method)
{
  MainMenuBar__resumeMenuBar(this, this->fields.kind, this->fields.depth, 0);
}


void SceneRootComponent__sendMessage(SceneRootComponent_o *this, System_String_o *message, const MethodInfo *method)
{
  UnityEngine_Object_o *myFSM; // x21
  PlayMakerFSM_o *v6; // x0

  if ( (byte_4C37324 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C37324 = 1;
  }
  myFSM = (UnityEngine_Object_o *)this->fields.myFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myFSM, 0, 0) )
  {
    v6 = this->fields.myFSM;
    if ( !v6 )
      sub_1C32E7C(0);
    PlayMakerFSM__SendEvent(v6, message, 0);
  }
}


void SceneRootComponent__sendMessageResume(SceneRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myFSM; // x20
  PlayMakerFSM_o *Instance; // x0

  if ( (byte_4C37323 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C32C20(&StringLiteral_11132/*"RESUME"*/);
    byte_4C37323 = 1;
  }
  myFSM = (UnityEngine_Object_o *)this->fields.myFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myFSM, 0, 0) )
  {
    Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    if ( NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, 0) )
    {
      Instance = this->fields.myFSM;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_11132/*"RESUME"*/, 0);
        return;
      }
LABEL_11:
      sub_1C32E7C(Instance);
    }
  }
}


void SceneRootComponent__sendMessageStartUp(SceneRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myFSM; // x20
  PlayMakerFSM_o *Instance; // x0

  if ( (byte_4C37322 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    sub_1C32C20(&StringLiteral_12307/*"STARTUP"*/);
    byte_4C37322 = 1;
  }
  myFSM = (UnityEngine_Object_o *)this->fields.myFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(myFSM, 0, 0) )
  {
    Instance = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_NetworkManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    if ( NetworkManager__CheckServerLimitTime((NetworkManager_o *)Instance, 0) )
    {
      Instance = this->fields.myFSM;
      if ( Instance )
      {
        PlayMakerFSM__SendEvent(Instance, (System_String_o *)StringLiteral_12307/*"STARTUP"*/, 0);
        return;
      }
LABEL_11:
      sub_1C32E7C(Instance);
    }
  }
}


void SceneRootComponent__setMainMenuBar(
        SceneRootComponent_o *this,
        int32_t kind,
        int32_t depth,
        const MethodInfo *method)
{
  this->fields.kind = kind;
  this->fields.depth = depth;
  MainMenuBar__setActiveScene_41187584(this, kind, depth, 0, 0);
}