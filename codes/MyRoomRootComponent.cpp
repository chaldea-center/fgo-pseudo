void MyRoomRootComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_5933870 & 1) == 0 )
  {
    sub_21FFC50(&MyRoomRootComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_8521/*"JumpNewMaterial"*/);
    byte_5933870 = 1;
  }
  v7 = StringLiteral_8521/*"JumpNewMaterial"*/;
  MyRoomRootComponent_TypeInfo->static_fields->MYROOM_STATE_NEW_MATERIAL = (struct System_String_o *)StringLiteral_8521/*"JumpNewMaterial"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MyRoomRootComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void MyRoomRootComponent___ctor(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void MyRoomRootComponent__beginFinish(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *myRoomControl; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  MyRoomControl_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_593386F & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MyRoomControl___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593386F = 1;
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v7 = this->fields.myRoomControl;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_13;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MyRoomControl___);
    v7 = (MyRoomControl_o *)gameObject;
  }
  if ( !v7 )
LABEL_13:
    sub_21FFECC(gameObject, v6);
  MyRoomControl__quit(v7, 0);
  MyRoomControl__hideSerialCode(v7, 0);
  MyRoomControl__hideContinueDevice(v7, 0);
  MyRoomControl__hideMaterialCollection(v7, 0);
  MyRoomControl__hideSoundPlayerMenu(v7, 0);
  MyRoomControl__HideExchangeSvtCoinMenu(v7, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v9);
  AtlasManager__ReleaseMyRoomGalleryTitleAtlas(0);
  AtlasManager__ReleaseMainStoryPartTitleNameAtlas(0);
}


void MyRoomRootComponent__beginInitialize(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593386C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593386C = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 9, 35, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void MyRoomRootComponent__beginResume(MyRoomRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SceneRootComponent_o *v9; // x19
  SceneRootComponent_c *klass; // x8
  Il2CppClass *v11; // x9
  __int64 naturalAligment; // x10
  Il2CppObject *v13; // x11
  int32_t v14; // w1
  MissionNaviTransitionBoardItem_o *p_field_count; // x0
  SceneRootComponent_c *v16; // x8
  Il2CppClass *parent; // x8

  v9 = (SceneRootComponent_o *)this;
  if ( (byte_593386E & 1) == 0 )
  {
    sub_21FFC50(&BattleSetupInfo_TypeInfo);
    this = (MyRoomRootComponent_o *)sub_21FFC50(&StringLiteral_11606/*"RETURN_BLACKLIST"*/);
    byte_593386E = 1;
  }
  klass = v9[1].klass;
  if ( !klass )
    goto LABEL_24;
  if ( data )
  {
    v11 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    naturalAligment = BattleSetupInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v13 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == BattleSetupInfo_TypeInfo
          ? data
          : 0LL;
    else
      v13 = 0;
    *(_QWORD *)&klass->_2.field_count = v13;
    p_field_count = (MissionNaviTransitionBoardItem_o *)&klass->_2.field_count;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v14 = data->klass->_2.typeHierarchy[naturalAligment - 1] == v11 ? (int)data : 0;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
    p_field_count = (MissionNaviTransitionBoardItem_o *)&klass->_2.field_count;
    *(_QWORD *)&klass->_2.field_count = 0;
  }
  sub_21FFBF4(p_field_count, v14, (System_String_o *)method, v3, v4, v5, v6, v7);
  v16 = v9[1].klass;
  if ( !v16 )
    goto LABEL_24;
  if ( *(_QWORD *)&v16->_2.field_count )
  {
    SceneRootComponent__beginFinish(v9, 0);
    SceneRootComponent__sendMessageStartUp(v9, 0);
LABEL_22:
    SceneRootComponent__resumeMainMenuBar(v9, 0);
    return;
  }
  parent = v16->_1.parent;
  if ( !parent )
LABEL_24:
    sub_21FFECC(this, data);
  if ( parent->_2.token == 1 )
  {
    SceneRootComponent__beginFinish(v9, 0);
    SceneRootComponent__sendMessage(v9, (System_String_o *)StringLiteral_11606/*"RETURN_BLACKLIST"*/, 0);
    goto LABEL_22;
  }
  SceneRootComponent__beginResume_48429424(v9, 0);
}


void MyRoomRootComponent__beginStartUp(MyRoomRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *myRoomControl; // x21
  MyRoomControl_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct MyRoomControl_o *v17; // x8

  if ( (byte_593386D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    byte_593386D = 1;
  }
  MainMenuBar__setMenuActive(1, 0, 0);
  if ( data )
  {
    naturalAligment = SceneJumpInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (SceneJumpInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] != SceneJumpInfo_TypeInfo )
        data = 0;
    }
    else
    {
      data = 0;
    }
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  v9 = (MyRoomControl_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0, 0);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v17 = this->fields.myRoomControl;
    if ( !v17
      || (v17->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)data,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v17->fields.sceneJumpInfo,
            (int32_t)data,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          (v9 = this->fields.myRoomControl) == 0) )
    {
      sub_21FFECC(v9, v10);
    }
    MyRoomControl__startUp(v9, 0);
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
}