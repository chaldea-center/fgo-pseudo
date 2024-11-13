void __fastcall MyRoomRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B11A6A & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomRootComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_8287/*"JumpNewMaterial"*/, v3, v4);
    byte_4B11A6A = 1;
  }
  MyRoomRootComponent_TypeInfo->static_fields->MYROOM_STATE_NEW_MATERIAL = (struct System_String_o *)StringLiteral_8287/*"JumpNewMaterial"*/;
  sub_1BCA784(MyRoomRootComponent_TypeInfo->static_fields, StringLiteral_8287/*"JumpNewMaterial"*/);
}


void __fastcall MyRoomRootComponent___ctor(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MyRoomRootComponent__beginFinish(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *myRoomControl; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  MyRoomControl_o *v9; // x19

  if ( (byte_4B11A69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MyRoomControl___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11A69 = 1;
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v9 = this->fields.myRoomControl;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MyRoomControl___);
    v9 = (MyRoomControl_o *)gameObject;
  }
  if ( !v9 )
LABEL_11:
    sub_1BCAA3C(gameObject, v8);
  MyRoomControl__quit(v9, 0LL);
  MyRoomControl__hideSerialCode(v9, 0LL);
  MyRoomControl__hideContinueDevice(v9, 0LL);
  MyRoomControl__hideMaterialCollection(v9, 0LL);
  MyRoomControl__hideSoundPlayerMenu(v9, 0LL);
  MyRoomControl__HideExchangeSvtCoinMenu(v9, 0LL);
}


void __fastcall MyRoomRootComponent__beginInitialize(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B11A66 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B11A66 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 35, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MyRoomRootComponent__beginResume(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  SceneRootComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  SceneRootComponent_c *klass; // x8
  Il2CppClass *v8; // x9
  __int64 methodPtr_low; // x10
  Il2CppObject *v10; // x11
  Il2CppObject *v11; // x1
  uint16_t *p_interfaces_count; // x0
  SceneRootComponent_c *v13; // x8
  Il2CppClass *parent; // x8

  v4 = (SceneRootComponent_o *)this;
  if ( (byte_4B11A68 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, data, method);
    this = (MyRoomRootComponent_o *)sub_1BCA7E0(&StringLiteral_11249/*"RETURN_BLACKLIST"*/, v5, v6);
    byte_4B11A68 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_24;
  if ( data )
  {
    v8 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    methodPtr_low = LOBYTE(BattleSetupInfo_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      v10 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleSetupInfo_TypeInfo
          ? data
          : 0LL;
    else
      v10 = 0LL;
    *(_QWORD *)&klass->_2.interfaces_count = v10;
    p_interfaces_count = &klass->_2.interfaces_count;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      v11 = data->klass->_2.typeHierarchy[methodPtr_low - 1] == v8 ? data : 0LL;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
    p_interfaces_count = &klass->_2.interfaces_count;
    *(_QWORD *)&klass->_2.interfaces_count = 0LL;
  }
  this = (MyRoomRootComponent_o *)sub_1BCA784(p_interfaces_count, v11);
  v13 = v4[1].klass;
  if ( !v13 )
    goto LABEL_24;
  if ( *(_QWORD *)&v13->_2.interfaces_count )
  {
    SceneRootComponent__beginFinish(v4, 0LL);
    SceneRootComponent__sendMessageStartUp(v4, 0LL);
LABEL_22:
    SceneRootComponent__resumeMainMenuBar(v4, 0LL);
    return;
  }
  parent = v13->_1.parent;
  if ( !parent )
LABEL_24:
    sub_1BCAA3C(this, data);
  if ( parent->_2.thread_static_fields_offset == 1 )
  {
    SceneRootComponent__beginFinish(v4, 0LL);
    SceneRootComponent__sendMessage(v4, (System_String_o *)StringLiteral_11249/*"RETURN_BLACKLIST"*/, 0LL);
    goto LABEL_22;
  }
  SceneRootComponent__beginResume_39383112(v4, 0LL);
}


void __fastcall MyRoomRootComponent__beginStartUp(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *myRoomControl; // x21
  MyRoomControl_o *v10; // x0
  __int64 v11; // x1
  struct MyRoomControl_o *v12; // x8

  v3 = data;
  if ( (byte_4B11A67 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, data, method);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v5, v6);
    byte_4B11A67 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v10 = (MyRoomControl_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) != 0 )
  {
    v12 = this->fields.myRoomControl;
    if ( !v12
      || (v12->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v3,
          sub_1BCA784(&v12->fields.sceneJumpInfo, v3),
          (v10 = this->fields.myRoomControl) == 0LL) )
    {
      sub_1BCAA3C(v10, v11);
    }
    MyRoomControl__startUp(v10, 0LL);
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}