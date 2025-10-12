void MyRoomRootComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C32E85 & 1) == 0 )
  {
    sub_1C32C20(&MyRoomRootComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_8186/*"JumpNewMaterial"*/);
    byte_4C32E85 = 1;
  }
  MyRoomRootComponent_TypeInfo->static_fields->MYROOM_STATE_NEW_MATERIAL = (struct System_String_o *)StringLiteral_8186/*"JumpNewMaterial"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)MyRoomRootComponent_TypeInfo->static_fields, StringLiteral_8186/*"JumpNewMaterial"*/, v1, v2);
}


void MyRoomRootComponent___ctor(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void MyRoomRootComponent__beginFinish(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myRoomControl; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  MyRoomControl_o *v5; // x19

  if ( (byte_4C32E84 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MyRoomControl___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32E84 = 1;
  }
  myRoomControl = (UnityEngine_Object_o *)this->fields.myRoomControl;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    v5 = this->fields.myRoomControl;
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_11;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                               gameObject,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MyRoomControl___);
    v5 = (MyRoomControl_o *)gameObject;
  }
  if ( !v5 )
LABEL_11:
    sub_1C32E7C(gameObject);
  MyRoomControl__quit(v5, 0);
  MyRoomControl__hideSerialCode(v5, 0);
  MyRoomControl__hideContinueDevice(v5, 0);
  MyRoomControl__hideMaterialCollection(v5, 0);
  MyRoomControl__hideSoundPlayerMenu(v5, 0);
  MyRoomControl__HideExchangeSvtCoinMenu(v5, 0);
}


void MyRoomRootComponent__beginInitialize(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C32E81 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C32E81 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 35, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void MyRoomRootComponent__beginResume(MyRoomRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SceneRootComponent_o *v5; // x19
  CGThumbnailListItem_o *klass; // x8
  Il2CppClass *v7; // x9
  __int64 naturalAligment; // x10
  Il2CppObject *v9; // x11
  int32_t v10; // w1
  CGThumbnailListItem_o *v11; // x0
  SceneRootComponent_c *v12; // x8
  Il2CppClass *parent; // x8

  v5 = (SceneRootComponent_o *)this;
  if ( (byte_4C32E83 & 1) == 0 )
  {
    sub_1C32C20(&BattleSetupInfo_TypeInfo);
    this = (MyRoomRootComponent_o *)sub_1C32C20(&StringLiteral_11139/*"RETURN_BLACKLIST"*/);
    byte_4C32E83 = 1;
  }
  klass = (CGThumbnailListItem_o *)v5[1].klass;
  if ( !klass )
    goto LABEL_24;
  if ( data )
  {
    v7 = (Il2CppClass *)BattleSetupInfo_TypeInfo;
    naturalAligment = BattleSetupInfo_TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v9 = (BattleSetupInfo_c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == BattleSetupInfo_TypeInfo
         ? data
         : 0LL;
    else
      v9 = 0;
    klass[2].klass = (CGThumbnailListItem_c *)v9;
    v11 = klass + 2;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      v10 = data->klass->_2.typeHierarchy[naturalAligment - 1] == v7 ? (int)data : 0;
    else
      v10 = 0;
  }
  else
  {
    v10 = 0;
    v11 = klass + 2;
    klass[2].klass = 0;
  }
  sub_1C32BC4(v11, v10, (int32_t)method, v3);
  v12 = v5[1].klass;
  if ( !v12 )
    goto LABEL_24;
  if ( *(_QWORD *)&v12->_2.field_count )
  {
    SceneRootComponent__beginFinish(v5, 0);
    SceneRootComponent__sendMessageStartUp(v5, 0);
LABEL_22:
    SceneRootComponent__resumeMainMenuBar(v5, 0);
    return;
  }
  parent = v12->_1.parent;
  if ( !parent )
LABEL_24:
    sub_1C32E7C(this);
  if ( parent->_2.static_fields_size == 1 )
  {
    SceneRootComponent__beginFinish(v5, 0);
    SceneRootComponent__sendMessage(v5, (System_String_o *)StringLiteral_11139/*"RETURN_BLACKLIST"*/, 0);
    goto LABEL_22;
  }
  SceneRootComponent__beginResume_41381892(v5, 0);
}


void MyRoomRootComponent__beginStartUp(MyRoomRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *myRoomControl; // x21
  MyRoomControl_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MyRoomControl_o *v10; // x8

  if ( (byte_4C32E82 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    byte_4C32E82 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (MyRoomControl_o *)UnityEngine_Object__op_Inequality(myRoomControl, 0, 0);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    v10 = this->fields.myRoomControl;
    if ( !v10
      || (v10->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)data,
          sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.sceneJumpInfo, (int32_t)data, v8, v9),
          (v7 = this->fields.myRoomControl) == 0) )
    {
      sub_1C32E7C(v7);
    }
    MyRoomControl__startUp(v7, 0);
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0);
}