void __fastcall MyRoomRootComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_48DE4E6 & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomRootComponent_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_8070/*"JumpNewMaterial"*/, v4);
    byte_48DE4E6 = 1;
  }
  MyRoomRootComponent_TypeInfo->static_fields->MYROOM_STATE_NEW_MATERIAL = (struct System_String_o *)StringLiteral_8070/*"JumpNewMaterial"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)MyRoomRootComponent_TypeInfo->static_fields,
    StringLiteral_8070/*"JumpNewMaterial"*/,
    v2,
    v3);
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

  if ( (byte_48DE4E5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_MyRoomControl___, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v3);
    byte_48DE4E5 = 1;
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
                                               (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_MyRoomControl___);
    v7 = (MyRoomControl_o *)gameObject;
  }
  if ( !v7 )
LABEL_11:
    sub_1B00F28(gameObject, v6);
  MyRoomControl__quit(v7, 0LL);
  MyRoomControl__hideSerialCode(v7, 0LL);
  MyRoomControl__hideContinueDevice(v7, 0LL);
  MyRoomControl__hideMaterialCollection(v7, 0LL);
  MyRoomControl__hideSoundPlayerMenu(v7, 0LL);
}


void __fastcall MyRoomRootComponent__beginInitialize(MyRoomRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_48DE4E2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_48DE4E2 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  SceneRootComponent__setMainMenuBar((SceneRootComponent_o *)this, 8, 35, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B00F28(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall MyRoomRootComponent__beginResume(
        MyRoomRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  SceneRootComponent_o *v5; // x19
  __int64 v6; // x1
  SceneRootComponent_c *klass; // x8
  Il2CppClass *v8; // x9
  __int64 methodPtr_low; // x10
  Il2CppObject *v10; // x11
  int32_t v11; // w1
  ServantStatusBattleListViewItem_o *p_field_count; // x0
  SceneRootComponent_c *v13; // x8
  Il2CppClass *parent; // x8

  v5 = (SceneRootComponent_o *)this;
  if ( (byte_48DE4E4 & 1) == 0 )
  {
    sub_1B00CCC(&BattleSetupInfo_TypeInfo, data);
    this = (MyRoomRootComponent_o *)sub_1B00CCC(&StringLiteral_10937/*"RETURN_BLACKLIST"*/, v6);
    byte_48DE4E4 = 1;
  }
  klass = v5[1].klass;
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
    *(_QWORD *)&klass->_2.field_count = v10;
    p_field_count = (ServantStatusBattleListViewItem_o *)&klass->_2.field_count;
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
      v11 = data->klass->_2.typeHierarchy[methodPtr_low - 1] == v8 ? (int)data : 0;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
    p_field_count = (ServantStatusBattleListViewItem_o *)&klass->_2.field_count;
    *(_QWORD *)&klass->_2.field_count = 0LL;
  }
  sub_1B00C70(p_field_count, v11, (int32_t)method, v3);
  v13 = v5[1].klass;
  if ( !v13 )
    goto LABEL_24;
  if ( *(_QWORD *)&v13->_2.field_count )
  {
    SceneRootComponent__beginFinish(v5, 0LL);
    SceneRootComponent__sendMessageStartUp(v5, 0LL);
LABEL_22:
    SceneRootComponent__resumeMainMenuBar(v5, 0LL);
    return;
  }
  parent = v13->_1.parent;
  if ( !parent )
LABEL_24:
    sub_1B00F28(this, data);
  if ( parent->_2.static_fields_size == 1 )
  {
    SceneRootComponent__beginFinish(v5, 0LL);
    SceneRootComponent__sendMessage(v5, (System_String_o *)StringLiteral_10937/*"RETURN_BLACKLIST"*/, 0LL);
    goto LABEL_22;
  }
  SceneRootComponent__beginResume_37369944(v5, 0LL);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct MyRoomControl_o *v12; // x8

  v3 = data;
  if ( (byte_48DE4E3 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, data);
    sub_1B00CCC(&SceneJumpInfo_TypeInfo, v5);
    byte_48DE4E3 = 1;
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
    v12 = this->fields.myRoomControl;
    if ( !v12
      || (v12->fields.sceneJumpInfo = (struct SceneJumpInfo_o *)v3,
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v12->fields.sceneJumpInfo, (int32_t)v3, v10, v11),
          (v8 = this->fields.myRoomControl) == 0LL) )
    {
      sub_1B00F28(v8, v9);
    }
    MyRoomControl__startUp(v8, 0LL);
  }
  SceneRootComponent__sendMessageStartUp((SceneRootComponent_o *)this, 0LL);
}