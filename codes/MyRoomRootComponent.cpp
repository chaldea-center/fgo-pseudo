void __fastcall MyRoomRootComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A56A77 & 1) == 0 )
  {
    sub_1B885B0(&MyRoomRootComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_8161/*"JumpNewMaterial"*/);
    byte_4A56A77 = 1;
  }
  MyRoomRootComponent_TypeInfo->static_fields->MYROOM_STATE_NEW_MATERIAL = (struct System_String_o *)StringLiteral_8161/*"JumpNewMaterial"*/;
  sub_1B88554(MyRoomRootComponent_TypeInfo->static_fields, StringLiteral_8161/*"JumpNewMaterial"*/);
}


void __fastcall MyRoomRootComponent___ctor(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MyRoomRootComponent__beginFinish(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomControl; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  MyRoomControl_o *v6; // x19

  if ( (byte_4A56A76 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MyRoomControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56A76 = 1;
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v6 = this->fields.myRoomControl;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MyRoomControl___);
    v6 = (MyRoomControl_o *)gameObject;
  }
  if ( !v6 )
LABEL_11:
    sub_1B8880C(gameObject, v5);
  MyRoomControl__quit(v6, 0LL);
  MyRoomControl__hideSerialCode(v6, 0LL);
  MyRoomControl__hideContinueDevice(v6, 0LL);
  MyRoomControl__hideMaterialCollection(v6, 0LL);
  MyRoomControl__hideSoundPlayerMenu(v6, 0LL);
}


void __fastcall MyRoomRootComponent__beginInitialize(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A56A73 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A56A73 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 35, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MyRoomRootComponent__beginResume(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  SceneRootComponent_o *v4; // x19
  SceneRootComponent_c *klass; // x8
  Il2CppClass *v6; // x9
  __int64 methodPtr_low; // x10
  Il2CppObject *v8; // x11
  Il2CppObject *v9; // x1
  uint16_t *p_field_count; // x0
  SceneRootComponent_c *v11; // x8
  Il2CppClass *parent; // x8

  v4 = (SceneRootComponent_o *)this;
  if ( (byte_4A56A75 & 1) == 0 )
  {
    sub_1B885B0(&BattleSetupInfo_TypeInfo);
    this = (MyRoomRootComponent_o *)sub_1B885B0(&StringLiteral_11112/*"RETURN_BLACKLIST"*/);
    byte_4A56A75 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_24;
  if ( data )
  {
    v6 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      v8 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo
         ? data
         : 0LL;
    else
      v8 = 0LL;
    *(_QWORD *)&klass->_2.field_count = v8;
    p_field_count = &klass->_2.field_count;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      v9 = data->klass->_2.typeHierarchy[methodPtr_low - 1] == v6 ? data : 0LL;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
    p_field_count = &klass->_2.field_count;
    *(_QWORD *)&klass->_2.field_count = 0LL;
  }
  this = (MyRoomRootComponent_o *)sub_1B88554(p_field_count, v9);
  v11 = v4[1].klass;
  if ( !v11 )
    goto LABEL_24;
  if ( *(_QWORD *)&v11->_2.field_count )
  {
    SceneRootComponent__beginFinish(v4, 0LL);
    SceneRootComponent__sendMessageStartUp(v4, 0LL);
LABEL_22:
    SceneRootComponent__resumeMainMenuBar(v4, 0LL);
    return;
  }
  parent = v11->_1.parent;
  if ( !parent )
LABEL_24:
    sub_1B8880C(this, data);
  if ( parent->_2.thread_static_fields_offset == 1 )
  {
    SceneRootComponent__beginFinish(v4, 0LL);
    SceneRootComponent__sendMessage(v4, (System_String_o *)StringLiteral_11112/*"RETURN_BLACKLIST"*/, 0LL);
    goto LABEL_22;
  }
  SceneRootComponent__beginResume_38666660(v4, 0LL);
}


void __fastcall MyRoomRootComponent__beginStartUp(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *myRoomControl; // x21
  MyRoomControl_o *v7; // x0
  __int64 v8; // x1
  struct MyRoomControl_o *v9; // x8

  if ( (byte_4A56A74 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    byte_4A56A74 = 1;
  }
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  if ( data )
  {
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] != SceneJumpInfo_TypeInfo )
        data = 0LL;
    }
    else
    {
      data = 0LL;
    }
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (MyRoomControl_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v9 = this->fields.myRoomControl;
    if ( !v9
      || (v9->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)data,
          sub_1B88554(&v9->fields.sceneJumpInfo, data),
          (v7 = this->fields.myRoomControl) == 0LL) )
    {
      sub_1B8880C(v7, v8);
    }
    MyRoomControl__startUp(v7, 0LL);
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}