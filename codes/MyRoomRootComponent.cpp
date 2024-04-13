void __fastcall MyRoomRootComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E8580 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomRootComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_8396/*"JumpNewMaterial"*/, v8, v9, v10);
    byte_42E8580 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MyRoomRootComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_8396/*"JumpNewMaterial"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8396/*"JumpNewMaterial"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall MyRoomRootComponent___ctor(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MyRoomRootComponent__beginFinish(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *myRoomControl; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  MyRoomControl_o *v11; // x19

  if ( (byte_42E857F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MyRoomControl___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E857F = 1;
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
    v11 = this->fields.myRoomControl;
    if ( !v11 )
      goto LABEL_12;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     gameObject,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MyRoomControl___),
          (v11 = (MyRoomControl_o *)gameObject) == 0LL) )
    {
LABEL_12:
      sub_B5D69C(gameObject, v10);
    }
  }
  MyRoomControl__quit(v11, 0LL);
  MyRoomControl__hideSerialCode(v11, 0LL);
  MyRoomControl__hideContinueDevice(v11, 0LL);
  MyRoomControl__hideMaterialCollection(v11, 0LL);
  MyRoomControl__hideSoundPlayerMenu(v11, 0LL);
}


void __fastcall MyRoomRootComponent__beginInitialize(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E857C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E857C = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 35, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  SceneRootComponent_c *klass; // x8
  __int64 v14; // x11
  System_Int32_array **v15; // x1
  SceneRootComponent_c *v16; // x8
  Il2CppClass *declaringType; // x8

  v9 = (SceneRootComponent_o *)this;
  if ( (byte_42E857E & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    this = (MyRoomRootComponent_o *)sub_B5D5C4(&StringLiteral_11264/*"RETURN_BLACKLIST"*/, v10, v11, v12);
    byte_42E857E = 1;
  }
  klass = v9[1].klass;
  if ( !klass )
    goto LABEL_18;
  if ( data
    && (v14 = *(&BattleSetupInfo_TypeInfo->_2.bitflags2 + 1), *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
  {
    v15 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[v14 - 1] == BattleSetupInfo_TypeInfo
        ? (System_Int32_array **)data
        : 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  *(_QWORD *)&klass->_2.thread_static_fields_offset = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&klass->_2.thread_static_fields_offset,
    v15,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = v9[1].klass;
  if ( !v16 )
    goto LABEL_18;
  if ( *(_QWORD *)&v16->_2.thread_static_fields_offset )
  {
    SceneRootComponent__beginFinish(v9, 0LL);
    SceneRootComponent__sendMessageStartUp(v9, 0LL);
LABEL_16:
    SceneRootComponent__resumeMainMenuBar(v9, 0LL);
    return;
  }
  declaringType = v16->_1.declaringType;
  if ( !declaringType )
LABEL_18:
    sub_B5D69C(this, data);
  if ( declaringType->_2.element_size == 1 )
  {
    SceneRootComponent__beginFinish(v9, 0LL);
    SceneRootComponent__sendMessage(v9, (System_String_o *)StringLiteral_11264/*"RETURN_BLACKLIST"*/, 0LL);
    goto LABEL_16;
  }
  SceneRootComponent__beginResume_17513312(v9, 0LL);
}


void __fastcall MyRoomRootComponent__beginStartUp(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array **v4; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x10
  UnityEngine_Object_o *myRoomControl; // x21
  MyRoomControl_o *v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct MyRoomControl_o *v19; // x8

  v4 = (System_Int32_array **)data;
  if ( (byte_42E857D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v6, v7, v8);
    byte_42E857D = 1;
  }
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  if ( v4 )
  {
    v9 = *(&SceneJumpInfo_TypeInfo->_2.bitflags2 + 1);
    if ( LOBYTE((*v4)->m_Items[68]) >= (unsigned int)v9 )
    {
      if ( *(SceneJumpInfo_c **)(*(_QWORD *)&(*v4)->m_Items[43] + 8 * v9 - 8) != SceneJumpInfo_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = (MyRoomControl_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
  {
    v19 = this->fields.myRoomControl;
    if ( !v19
      || (v19->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v4,
          sub_B5D560((BattleServantConfConponent_o *)&v19->fields.sceneJumpInfo, v4, v13, v14, v15, v16, v17, v18),
          (v11 = this->fields.myRoomControl) == 0LL) )
    {
      sub_B5D69C(v11, v12);
    }
    MyRoomControl__startUp(v11, 0LL);
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}