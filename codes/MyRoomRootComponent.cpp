void __fastcall MyRoomRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4B623C7 & 1) == 0 )
  {
    sub_1BE4ACC(&MyRoomRootComponent_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_8306/*"JumpNewMaterial"*/, v2);
    byte_4B623C7 = 1;
  }
  MyRoomRootComponent_TypeInfo->static_fields->MYROOM_STATE_NEW_MATERIAL = (struct System_String_o *)StringLiteral_8306/*"JumpNewMaterial"*/;
  sub_1BE4A70(MyRoomRootComponent_TypeInfo->static_fields);
}


void __fastcall MyRoomRootComponent___ctor(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MyRoomRootComponent__beginFinish(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *myRoomControl; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  MyRoomControl_o *v7; // x19

  if ( (byte_4B623C6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_MyRoomControl___, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v3);
    byte_4B623C6 = 1;
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v7 = this->fields.myRoomControl;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_MyRoomControl___);
    v7 = (MyRoomControl_o *)gameObject;
  }
  if ( !v7 )
LABEL_11:
    sub_1BE4D28(gameObject, v6);
  MyRoomControl__quit(v7, 0LL);
  MyRoomControl__hideSerialCode(v7, 0LL);
  MyRoomControl__hideContinueDevice(v7, 0LL);
  MyRoomControl__hideMaterialCollection(v7, 0LL);
  MyRoomControl__hideSoundPlayerMenu(v7, 0LL);
  MyRoomControl__HideExchangeSvtCoinMenu(v7, 0LL);
}


void __fastcall MyRoomRootComponent__beginInitialize(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B623C3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4B623C3 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 35, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BE4D28(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MyRoomRootComponent__beginResume(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  SceneRootComponent_o *v4; // x19
  __int64 v5; // x1
  SceneRootComponent_c *klass; // x8
  __int64 methodPtr_low; // x10
  Il2CppObject *v8; // x11
  uint16_t *p_interfaces_count; // x0
  SceneRootComponent_c *v10; // x8
  Il2CppClass *parent; // x8

  v4 = (SceneRootComponent_o *)this;
  if ( (byte_4B623C5 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleSetupInfo_TypeInfo, data);
    this = (MyRoomRootComponent_o *)sub_1BE4ACC(&StringLiteral_11280/*"RETURN_BLACKLIST"*/, v5);
    byte_4B623C5 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_20;
  if ( data )
  {
    methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      v8 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo
         ? data
         : 0LL;
    else
      v8 = 0LL;
    *(_QWORD *)&klass->_2.interfaces_count = v8;
    p_interfaces_count = &klass->_2.interfaces_count;
  }
  else
  {
    p_interfaces_count = &klass->_2.interfaces_count;
    *(_QWORD *)&klass->_2.interfaces_count = 0LL;
  }
  this = (MyRoomRootComponent_o *)sub_1BE4A70(p_interfaces_count);
  v10 = v4[1].klass;
  if ( !v10 )
    goto LABEL_20;
  if ( *(_QWORD *)&v10->_2.interfaces_count )
  {
    SceneRootComponent__beginFinish(v4, 0LL);
    SceneRootComponent__sendMessageStartUp(v4, 0LL);
LABEL_18:
    SceneRootComponent__resumeMainMenuBar(v4, 0LL);
    return;
  }
  parent = v10->_1.parent;
  if ( !parent )
LABEL_20:
    sub_1BE4D28(this, data);
  if ( parent->_2.thread_static_fields_offset == 1 )
  {
    SceneRootComponent__beginFinish(v4, 0LL);
    SceneRootComponent__sendMessage(v4, (System_String_o *)StringLiteral_11280/*"RETURN_BLACKLIST"*/, 0LL);
    goto LABEL_18;
  }
  SceneRootComponent__beginResume_39579084(v4, 0LL);
}


void __fastcall MyRoomRootComponent__beginStartUp(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v5; // x1
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *myRoomControl; // x21
  MyRoomControl_o *v8; // x0
  __int64 v9; // x1
  struct MyRoomControl_o *v10; // x8

  v3 = data;
  if ( (byte_4B623C4 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, data);
    sub_1BE4ACC(&SceneJumpInfo_TypeInfo, v5);
    byte_4B623C4 = 1;
  }
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  if ( v3 )
  {
    methodPtr_low = LOBYTE(SceneJumpInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v3->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (SceneJumpInfo_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] != SceneJumpInfo_TypeInfo )
        v3 = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (MyRoomControl_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v10 = this->fields.myRoomControl;
    if ( !v10
      || (v10->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v3,
          sub_1BE4A70(&v10->fields.sceneJumpInfo),
          (v8 = this->fields.myRoomControl) == 0LL) )
    {
      sub_1BE4D28(v8, v9);
    }
    MyRoomControl__startUp(v8, 0LL);
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}