void MyRoomFrontObjectManager___ctor(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  int HEIGHT; // s0

  if ( (byte_4C22293 & 1) == 0 )
  {
    sub_1C2D490(&ManagerConfig_TypeInfo);
    byte_4C22293 = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  HEIGHT = v3->static_fields->HEIGHT;
  this->fields.BasePosition.fields.x = 0.0;
  this->fields.BasePosition.fields.z = 0.0;
  this->fields.BasePosition.fields.y = (float)HEIGHT * -0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void MyRoomFrontObjectManager__FrameIn(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  int v6; // s0 OVERLAPPED

  if ( (byte_4C2228F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2228F = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  if ( v4 )
  {
    if ( !this->fields.dispObject )
      sub_1C2D6EC(v4, v5);
    MyRoomFrontObjectManager__MoveDispObject(this, *(UnityEngine_Vector3_o *)&v6, this->fields.BasePosition, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void MyRoomFrontObjectManager__FrameOut(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  struct MyRoomFrontObject_o *v6; // x8
  float32x2_t v7; // d1 OVERLAPPED
  float32x2_t v8; // d2
  float z; // s0
  unsigned __int64 v10; // d3 OVERLAPPED
  float v11; // s5
  int v12; // s4

  if ( (byte_4C2228E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2228E = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.dispObject;
    if ( !v6 )
      sub_1C2D6EC(v4, v5);
    v7.n64_u64[0] = *(unsigned __int64 *)&this->fields.BasePosition.fields.x;
    v8.n64_u64[0] = *(unsigned __int64 *)&v6->fields.frameOutMoveValue.fields.x;
    z = this->fields.BasePosition.fields.z;
    v10 = vadd_f32(v7, v8).n64_u64[0];
    v11 = z + v6->fields.frameOutMoveValue.fields.z;
    v12 = HIDWORD(v10);
    MyRoomFrontObjectManager__MoveDispObject(
      this,
      *(UnityEngine_Vector3_o *)((char *)&v7 - 4),
      *(UnityEngine_Vector3_o *)&v10,
      v5);
  }
}


bool MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MyRoomFrontObject_o *v8; // x8

  if ( (byte_4C22292 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22292 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  if ( !v6 )
    return 0;
  v8 = this->fields.dispObject;
  if ( !v8 )
    sub_1C2D6EC(v6, v7);
  return v8->fields._Id_k__BackingField != id;
}


bool MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MyRoomFrontObject_o *v8; // x8

  if ( (byte_4C22291 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22291 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  if ( !v6 )
    return 0;
  v8 = this->fields.dispObject;
  if ( !v8 )
    sub_1C2D6EC(v6, v7);
  return v8->fields._Id_k__BackingField == id;
}


void MyRoomFrontObjectManager__MoveDispObject(
        MyRoomFrontObjectManager_o *this,
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *dispObject; // x20
  __int64 v9; // x1
  struct MyRoomFrontObject_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float frameInOutDuration; // s11
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4

  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  if ( (byte_4C22290 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22290 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v10 = this->fields.dispObject;
    if ( !v10 )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
    if ( (float)((float)((float)(LocalPosition.fields.z - z) * (float)(LocalPosition.fields.z - z))
               + (float)((float)((float)(LocalPosition.fields.x - x) * (float)(LocalPosition.fields.x - x))
                       + (float)((float)(LocalPosition.fields.y - y) * (float)(LocalPosition.fields.y - y)))) >= 1.0e-10 )
    {
      v10 = this->fields.dispObject;
      if ( v10 )
      {
        frameInOutDuration = v10->fields.frameInOutDuration;
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
        v15.fields.y = y;
        v15.fields.z = z;
        v15.fields.x = x;
        TweenPosition__Begin(v13, frameInOutDuration, v15, 0);
        return;
      }
LABEL_11:
      sub_1C2D6EC(v10, v9);
    }
  }
}


void MyRoomFrontObjectManager__ReleaseAll(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o **p_dispObject; // x19
  UnityEngine_Object_o *v4; // x20
  struct MyRoomFrontObject_o *dispObject; // t1
  System_String_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  UnityEngine_Object_o *gameObject; // x21
  int klass; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2228D & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_9211/*"MyRoom/FrontObject/{0}"*/);
    byte_4C2228D = 1;
  }
  dispObject = this->fields.dispObject;
  p_dispObject = (UnityEngine_Component_o **)&this->fields.dispObject;
  v4 = (UnityEngine_Object_o *)dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (System_String_o *)UnityEngine_Object__op_Inequality(v4, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !*p_dispObject
      || (klass = (int)(*p_dispObject)[2].klass,
          v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v8, v9, v10),
          v6 = System_String__Format((System_String_o *)StringLiteral_9211/*"MyRoom/FrontObject/{0}"*/, v11, 0),
          !*p_dispObject) )
    {
      sub_1C2D6EC(v6, v7);
    }
    v12 = v6;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dispObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71163892(gameObject, 0);
    *p_dispObject = 0;
    sub_1C2D434(p_dispObject);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v12, 0);
  }
}


void MyRoomFrontObjectManager__Setup(MyRoomFrontObjectManager_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x19
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  int v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2228C & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__);
    sub_1C2D490(&MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo);
    sub_1C2D490(&StringLiteral_9211/*"MyRoom/FrontObject/{0}"*/);
    byte_4C2228C = 1;
  }
  v5 = sub_1C2D6DC(MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434(v5 + 16);
  *(_DWORD *)(v5 + 24) = id;
  if ( !MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(this, id, v8) )
  {
    if ( MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(this, *(_DWORD *)(v5 + 24), v9) )
      MyRoomFrontObjectManager__ReleaseAll(this, v10);
    v17 = *(_DWORD *)(v5 + 24);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v11, v12, v13);
    v15 = System_String__Format((System_String_o *)StringLiteral_9211/*"MyRoom/FrontObject/{0}"*/, v14, 0);
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v16,
      (Il2CppObject *)v5,
      Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v15, v16, 1, 0);
  }
}


int32_t MyRoomFrontObjectManager__get_currentDispId(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct MyRoomFrontObject_o *v6; // x8

  if ( (byte_4C2228B & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2228B = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  if ( !v4 )
    return -1;
  v6 = this->fields.dispObject;
  if ( !v6 )
    sub_1C2D6EC(v4, v5);
  return v6->fields._Id_k__BackingField;
}


void MyRoomFrontObjectManager___c__DisplayClass6_0___ctor(
        MyRoomFrontObjectManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomFrontObjectManager___c__DisplayClass6_0___Setup_b__0(
        MyRoomFrontObjectManager___c__DisplayClass6_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51051712; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  struct MyRoomFrontObjectManager_o *v9; // x20
  struct MyRoomFrontObjectManager_o *v10; // x8
  const MethodInfo *v11; // x2
  struct MyRoomFrontObjectManager_o *v12; // x8

  if ( (byte_4C22294 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_9219/*"MyRoomFrontObj"*/);
    byte_4C22294 = 1;
  }
  if ( assetData )
  {
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                assetData,
                                (System_String_o *)StringLiteral_9219/*"MyRoomFrontObj"*/,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_18;
      transform = UnityEngine_Component__get_transform(_4__this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__51752420(
                                              Object_object__51051712,
                                              transform,
                                              (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
      if ( !_4__this )
        goto LABEL_18;
      v9 = this->fields.__4__this;
      _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)_4__this,
                                              (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___);
      if ( !v9 )
        goto LABEL_18;
      v9->fields.dispObject = (struct MyRoomFrontObject_o *)_4__this;
      _4__this = (UnityEngine_Component_o *)sub_1C2D434(&v9->fields.dispObject);
      v10 = this->fields.__4__this;
      if ( !v10 )
        goto LABEL_18;
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)v10->fields.dispObject,
                                              0,
                                              0);
      if ( ((unsigned __int8)_4__this & 1) != 0 )
      {
        v12 = this->fields.__4__this;
        if ( v12 )
        {
          _4__this = (UnityEngine_Component_o *)v12->fields.dispObject;
          if ( _4__this )
          {
            MyRoomFrontObject__Setup((MyRoomFrontObject_o *)_4__this, this->fields.id, v12->fields.BasePosition, v11);
            return;
          }
        }
LABEL_18:
        sub_1C2D6EC(_4__this, v6);
      }
    }
  }
}