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

  if ( (byte_40F9B34 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomRootComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_8283/*"JumpNewMaterial"*/, v8);
    byte_40F9B34 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)MyRoomRootComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_8283/*"JumpNewMaterial"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_8283/*"JumpNewMaterial"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall MyRoomRootComponent___ctor(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


void __fastcall MyRoomRootComponent__beginFinish(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *myRoomControl; // x20
  MyRoomControl_o *Component_srcLineSprite; // x19
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F9B33 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MyRoomControl___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9B33 = 1;
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL) )
  {
    Component_srcLineSprite = this->fields.myRoomControl;
    if ( !Component_srcLineSprite )
      goto LABEL_12;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (Component_srcLineSprite = (MyRoomControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         gameObject,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MyRoomControl___)) == 0LL )
    {
LABEL_12:
      sub_B170D4();
    }
  }
  MyRoomControl__quit(Component_srcLineSprite, 0LL);
  MyRoomControl__hideSerialCode(Component_srcLineSprite, 0LL);
  MyRoomControl__hideContinueDevice(Component_srcLineSprite, 0LL);
  MyRoomControl__hideMaterialCollection(Component_srcLineSprite, 0LL);
  MyRoomControl__hideSoundPlayerMenu(Component_srcLineSprite, 0LL);
}


void __fastcall MyRoomRootComponent__beginInitialize(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F9B30 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_40F9B30 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 35, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
  __int64 v10; // x1
  struct MyRoomControl_o *myRoomControl; // x8
  __int64 v12; // x11
  System_Int32_array **v13; // x1
  struct MyRoomControl_o *v14; // x8
  struct SetGameOptionComponent_o *optionComp; // x8

  if ( (byte_40F9B32 & 1) == 0 )
  {
    sub_B16FFC(&BattleSetupInfo_TypeInfo, data);
    sub_B16FFC(&StringLiteral_11095/*"RETURN_BLACKLIST"*/, v10);
    byte_40F9B32 = 1;
  }
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
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
  myRoomControl->fields.mBattleSetupInfo = (struct BattleSetupInfo_o *)v13;
  sub_B16F98(
    (BattleServantConfConponent_o *)&myRoomControl->fields.mBattleSetupInfo,
    v13,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = this->fields.myRoomControl;
  if ( !v14 )
    goto LABEL_18;
  if ( v14->fields.mBattleSetupInfo )
  {
    SceneRootComponent__beginFinish((SceneRootComponent_o *)this, 0LL);
    SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
LABEL_16:
    SceneRootComponent__resumeMainMenuBar((SceneRootComponent_o *)this, 0LL);
    return;
  }
  optionComp = v14->fields.optionComp;
  if ( !optionComp )
LABEL_18:
    sub_B170D4();
  if ( optionComp->fields._optionSceneType_k__BackingField == 1 )
  {
    SceneRootComponent__beginFinish((SceneRootComponent_o *)this, 0LL);
    SceneRootComponent__sendMessage((SceneRootComponent_o *)this, (System_String_o *)StringLiteral_11095/*"RETURN_BLACKLIST"*/, 0LL);
    goto LABEL_16;
  }
  SceneRootComponent__beginResume_29752260((SceneRootComponent_o *)this, 0LL);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct MyRoomControl_o *v14; // x8
  MyRoomControl_o *v15; // x0

  v3 = (System_Int32_array **)data;
  if ( (byte_40F9B31 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, data);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v5);
    byte_40F9B31 = 1;
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
  if ( UnityEngine_Object__op_Inequality(myRoomControl, 0LL, 0LL) )
  {
    v14 = this->fields.myRoomControl;
    if ( !v14
      || (v14->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v3,
          sub_B16F98((BattleServantConfConponent_o *)&v14->fields.sceneJumpInfo, v3, v8, v9, v10, v11, v12, v13),
          (v15 = this->fields.myRoomControl) == 0LL) )
    {
      sub_B170D4();
    }
    MyRoomControl__startUp(v15, 0LL);
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}