void __fastcall MyRoomRootComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_42AFAE1 & 1) == 0 )
  {
    sub_B52984(&MyRoomRootComponent_TypeInfo);
    sub_B52984(&StringLiteral_8359/*"JumpNewMaterial"*/);
    byte_42AFAE1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MyRoomRootComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_8359/*"JumpNewMaterial"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8359/*"JumpNewMaterial"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
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

  if ( (byte_42AFAE0 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_MyRoomControl___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFAE0 = 1;
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v6 = this->fields.myRoomControl;
    if ( !v6 )
      goto LABEL_12;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gameObject,
                                                     (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_MyRoomControl___),
          (v6 = (MyRoomControl_o *)gameObject) == 0LL) )
    {
LABEL_12:
      sub_B52A5C(gameObject, v5);
    }
  }
  MyRoomControl__quit(v6, 0LL);
  MyRoomControl__hideSerialCode(v6, 0LL);
  MyRoomControl__hideContinueDevice(v6, 0LL);
  MyRoomControl__hideMaterialCollection(v6, 0LL);
  MyRoomControl__hideSoundPlayerMenu(v6, 0LL);
}


void __fastcall MyRoomRootComponent__beginInitialize(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AFADD & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AFADD = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 35, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MyRoomRootComponent__beginResume(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  SceneRootComponent_o *v9; // x19
  SceneRootComponent_c *klass; // x8
  __int64 v11; // x11
  System_Int32_array **v12; // x1
  SceneRootComponent_c *v13; // x8
  Il2CppClass *declaringType; // x8

  v9 = (SceneRootComponent_o *)this;
  if ( (byte_42AFADF & 1) == 0 )
  {
    sub_B52984(&BattleSetupInfo_TypeInfo);
    this = (MyRoomRootComponent_o *)sub_B52984(&StringLiteral_11218/*"RETURN_BLACKLIST"*/);
    byte_42AFADF = 1;
  }
  klass = v9[1].klass;
  if ( !klass )
    goto LABEL_18;
  if ( data
    && (v11 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v11) )
  {
    v12 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v11 - 1] == BattleSetupInfo_TypeInfo
        ? (System_Int32_array **)data
        : 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  *(_QWORD *)&klass->_2.thread_static_fields_offset = v12;
  sub_B52920(
    (BattleServantConfConponent_o *)&klass->_2.thread_static_fields_offset,
    v12,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v13 = v9[1].klass;
  if ( !v13 )
    goto LABEL_18;
  if ( *(_QWORD *)&v13->_2.thread_static_fields_offset )
  {
    SceneRootComponent__beginFinish(v9, 0LL);
    SceneRootComponent__sendMessageStartUp(v9, 0LL);
LABEL_16:
    SceneRootComponent__resumeMainMenuBar(v9, 0LL);
    return;
  }
  declaringType = v13->_1.declaringType;
  if ( !declaringType )
LABEL_18:
    sub_B52A5C(this, data);
  if ( declaringType->_2.element_size == 1 )
  {
    SceneRootComponent__beginFinish(v9, 0LL);
    SceneRootComponent__sendMessage(v9, (System_String_o *)StringLiteral_11218/*"RETURN_BLACKLIST"*/, 0LL);
    goto LABEL_16;
  }
  SceneRootComponent__beginResume_17470456(v9, 0LL);
}


void __fastcall MyRoomRootComponent__beginStartUp(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x10
  UnityEngine_Object_o *myRoomControl; // x21
  MyRoomControl_o *v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct MyRoomControl_o *v15; // x8

  if ( (byte_42AFADE & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SceneJumpInfo_TypeInfo);
    byte_42AFADE = 1;
  }
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  if ( data )
  {
    v5 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[v5 - 1] != SceneJumpInfo_TypeInfo )
        data = 0LL;
    }
    else
    {
      data = 0LL;
    }
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (MyRoomControl_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v15 = this->fields.myRoomControl;
    if ( !v15
      || (v15->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)data,
          sub_B52920(
            (BattleServantConfConponent_o *)&v15->fields.sceneJumpInfo,
            (System_Int32_array **)data,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14),
          (v7 = this->fields.myRoomControl) == 0LL) )
    {
      sub_B52A5C(v7, v8);
    }
    MyRoomControl__startUp(v7, 0LL);
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}