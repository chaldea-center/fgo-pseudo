void __fastcall MyRoomRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_41874D0 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomRootComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_8312/*"JumpNewMaterial"*/, v8);
    byte_41874D0 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MyRoomRootComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_8312/*"JumpNewMaterial"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8312/*"JumpNewMaterial"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_41874CF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MyRoomControl___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41874CF = 1;
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
    v7 = this->fields.myRoomControl;
    if ( !v7 )
      goto LABEL_12;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gameObject,
                                                     (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MyRoomControl___),
          (v7 = (MyRoomControl_o *)gameObject) == 0LL) )
    {
LABEL_12:
      sub_B2C434(gameObject, v6);
    }
  }
  MyRoomControl__quit(v7, 0LL);
  MyRoomControl__hideSerialCode(v7, 0LL);
  MyRoomControl__hideContinueDevice(v7, 0LL);
  MyRoomControl__hideMaterialCollection(v7, 0LL);
  MyRoomControl__hideSoundPlayerMenu(v7, 0LL);
}


void __fastcall MyRoomRootComponent__beginInitialize(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41874CC & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_41874CC = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 35, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  __int64 v10; // x1
  SceneRootComponent_c *klass; // x8
  __int64 v12; // x11
  System_Int32_array **v13; // x1
  SceneRootComponent_c *v14; // x8
  Il2CppClass *declaringType; // x8

  v9 = (SceneRootComponent_o *)this;
  if ( (byte_41874CE & 1) == 0 )
  {
    sub_B2C35C(&BattleSetupInfo_TypeInfo, data);
    this = (MyRoomRootComponent_o *)sub_B2C35C(&StringLiteral_11131/*"RETURN_BLACKLIST"*/, v10);
    byte_41874CE = 1;
  }
  klass = v9[1].klass;
  if ( !klass )
    goto LABEL_18;
  if ( data
    && (v12 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    v13 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v12 - 1] == BattleSetupInfo_TypeInfo
        ? (System_Int32_array **)data
        : 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)&klass->_2.thread_static_fields_offset = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&klass->_2.thread_static_fields_offset,
    v13,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = v9[1].klass;
  if ( !v14 )
    goto LABEL_18;
  if ( *(_QWORD *)&v14->_2.thread_static_fields_offset )
  {
    SceneRootComponent__beginFinish(v9, 0LL);
    SceneRootComponent__sendMessageStartUp(v9, 0LL);
LABEL_16:
    SceneRootComponent__resumeMainMenuBar(v9, 0LL);
    return;
  }
  declaringType = v14->_1.declaringType;
  if ( !declaringType )
LABEL_18:
    sub_B2C434(this, data);
  if ( declaringType->_2.instance_size == 1 )
  {
    SceneRootComponent__beginFinish(v9, 0LL);
    SceneRootComponent__sendMessage(v9, (System_String_o *)StringLiteral_11131/*"RETURN_BLACKLIST"*/, 0LL);
    goto LABEL_16;
  }
  SceneRootComponent__beginResume_17297200(v9, 0LL);
}


void __fastcall MyRoomRootComponent__beginStartUp(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  System_Int32_array **v3; // x20
  __int64 v5; // x1
  __int64 v6; // x10
  UnityEngine_Object_o *myRoomControl; // x21
  MyRoomControl_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct MyRoomControl_o *v16; // x8

  v3 = (System_Int32_array **)data;
  if ( (byte_41874CD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, data);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v5);
    byte_41874CD = 1;
  }
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  if ( v3 )
  {
    v6 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
    if ( LOBYTE((*v3)->m_Items[68]) >= (unsigned int)v6 )
    {
      if ( *(SceneJumpInfo_c **)(*(_QWORD *)&(*v3)->m_Items[43] + 8 * v6 - 8) != SceneJumpInfo_TypeInfo )
        v3 = 0LL;
    }
    else
    {
      v3 = 0LL;
    }
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (MyRoomControl_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v16 = this->fields.myRoomControl;
    if ( !v16
      || (v16->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v3,
          sub_B2C2F8((BattleServantConfConponent_o *)&v16->fields.sceneJumpInfo, v3, v10, v11, v12, v13, v14, v15),
          (v8 = this->fields.myRoomControl) == 0LL) )
    {
      sub_B2C434(v8, v9);
    }
    MyRoomControl__startUp(v8, 0LL);
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}