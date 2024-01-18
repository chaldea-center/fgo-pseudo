void __fastcall MyRoomFrontObjectManager___ctor(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  int HEIGHT; // s0

  if ( (byte_418748A & 1) == 0 )
  {
    sub_B2C35C(&ManagerConfig_TypeInfo, method);
    byte_418748A = 1;
  }
  v3 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v3 = ManagerConfig_TypeInfo;
  }
  HEIGHT = v3->static_fields->HEIGHT;
  this->fields.BasePosition.fields.y = 0.0;
  LODWORD(this->fields.dispObject) = 0;
  this->fields.BasePosition.fields.z = (float)HEIGHT * -0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__FrameIn(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  int v6; // s0

  if ( (byte_4187486 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187486 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( v4 )
  {
    if ( !this[1].klass )
      sub_B2C434(v4, v5);
    MyRoomFrontObjectManager__MoveDispObject(
      this,
      *(UnityEngine_Vector3_o *)&v6,
      *(UnityEngine_Vector3_o *)&this->fields.BasePosition.fields.y,
      v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__FrameOut(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  MyRoomFrontObjectManager_c *v6; // x8
  float32x2_t v7; // d0 OVERLAPPED
  float32x2_t v8; // d2
  float v9; // s1
  unsigned __int64 v10; // d3 OVERLAPPED
  float v11; // s5
  int v12; // s4

  if ( (byte_4187485 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187485 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this[1].klass;
    if ( !v6 )
      sub_B2C434(v4, v5);
    v7.n64_u64[0] = *(unsigned __int64 *)&this->fields.BasePosition.fields.y;
    v8.n64_u64[0] = (unsigned __int64)v6->_1.namespaze;
    v9 = *(float *)&this->fields.dispObject;
    v10 = vadd_f32(v7, v8).n64_u64[0];
    v11 = v9 + *(float *)&v6->_1.byval_arg.data;
    v12 = HIDWORD(v10);
    MyRoomFrontObjectManager__MoveDispObject(
      this,
      *(UnityEngine_Vector3_o *)v7.n64_u64,
      *(UnityEngine_Vector3_o *)&v10,
      v5);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  MyRoomFrontObjectManager_c *v8; // x8

  if ( (byte_4187489 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_4187489 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( !v6 )
    return 0;
  v8 = this[1].klass;
  if ( !v8 )
    sub_B2C434(v6, v7);
  return v8->_1.byval_arg.bits != id;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  MyRoomFrontObjectManager_c *v8; // x8

  if ( (byte_4187488 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_4187488 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( !v6 )
    return 0;
  v8 = this[1].klass;
  if ( !v8 )
    sub_B2C434(v6, v7);
  return v8->_1.byval_arg.bits == id;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__MoveDispObject(
        MyRoomFrontObjectManager_o *this,
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *klass; // x20
  __int64 v9; // x1
  MyRoomFrontObjectManager_c *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v12; // s11
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v16; // 0:s3.4,4:s4.4,8:s5.4

  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  if ( (byte_4187487 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187487 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    v10 = this[1].klass;
    if ( !v10 )
      goto LABEL_12;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    v16.fields.x = x;
    v16.fields.y = y;
    v16.fields.z = z;
    if ( UnityEngine_Vector3__op_Inequality(LocalPosition, v16, 0LL) )
    {
      v10 = this[1].klass;
      if ( v10 )
      {
        v12 = *((float *)&v10->_1.byval_arg.data + 1);
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
        v15.fields.y = y;
        v15.fields.z = z;
        v15.fields.x = x;
        TweenPosition__Begin(v13, v12, v15, 0LL);
        return;
      }
LABEL_12:
      sub_B2C434(v10, v9);
    }
  }
}


void __fastcall MyRoomFrontObjectManager__ReleaseAll(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o **v6; // x19
  UnityEngine_Object_o *v7; // x20
  MyRoomFrontObjectManager_c *klass; // t1
  System_String_o *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  intptr_t m_CachedPtr; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4187484 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_9258/*"MyRoom/FrontObject/{0}"*/, v5);
    byte_4187484 = 1;
  }
  klass = this[1].klass;
  v6 = (UnityEngine_Component_o **)&this[1];
  v7 = (UnityEngine_Object_o *)klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (System_String_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( !*v6
      || (m_CachedPtr = (*v6)[1].fields.m_CachedPtr,
          v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr),
          v9 = System_String__Format((System_String_o *)StringLiteral_9258/*"MyRoom/FrontObject/{0}"*/, v11, 0LL),
          !*v6) )
    {
      sub_B2C434(v9, v10);
    }
    v12 = v9;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v6, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
    *v6 = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)v6, 0LL, v14, v15, v16, v17, v18, v19);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v12, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__Setup(MyRoomFrontObjectManager_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  Il2CppObject *v22; // x0
  System_String_o *v23; // x19
  AssetLoader_LoadEndDataHandler_o *v24; // x21
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4187483 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B2C35C(&Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__, v7);
    sub_B2C35C(&MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_9258/*"MyRoom/FrontObject/{0}"*/, v9);
    byte_4187483 = 1;
  }
  v10 = sub_B2C42C(MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo);
  MyRoomFrontObjectManager___c__DisplayClass6_0___ctor((MyRoomFrontObjectManager___c__DisplayClass6_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = id;
  if ( !MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(this, id, v19) )
  {
    if ( MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(this, *(_DWORD *)(v10 + 24), v20) )
      MyRoomFrontObjectManager__ReleaseAll(this, v21);
    v25 = *(_DWORD *)(v10 + 24);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    v23 = System_String__Format((System_String_o *)StringLiteral_9258/*"MyRoom/FrontObject/{0}"*/, v22, 0LL);
    v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v24,
      (Il2CppObject *)v10,
      Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v23, v24, 1, 0LL);
  }
}


int32_t __fastcall MyRoomFrontObjectManager__get_currentDispId(
        MyRoomFrontObjectManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  MyRoomFrontObjectManager_c *v6; // x8

  if ( (byte_4187482 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187482 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this[1].klass;
  if ( !v6 )
    sub_B2C434(v4, v5);
  return v6->_1.byval_arg.bits;
}


void __fastcall MyRoomFrontObjectManager___c__DisplayClass6_0___ctor(
        MyRoomFrontObjectManager___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomFrontObjectManager___c__DisplayClass6_0___Setup_b__0(
        MyRoomFrontObjectManager___c__DisplayClass6_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  struct MyRoomFrontObjectManager_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct MyRoomFrontObjectManager_o *v20; // x8
  struct MyRoomFrontObjectManager_o *v21; // x8

  if ( (byte_4185D72 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, assetData);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_9260/*"MyRoomFrontObj"*/, v8);
    byte_4185D72 = 1;
  }
  if ( assetData )
  {
    Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                    assetData,
                                                    (System_String_o *)StringLiteral_9260/*"MyRoomFrontObj"*/,
                                                    (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_20;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              Object_WarBoardWaitTimeSetting,
                                              transform,
                                              (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
      if ( !_4__this )
        goto LABEL_20;
      v13 = this->fields.__4__this;
      _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)_4__this,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___);
      if ( !v13 )
        goto LABEL_20;
      v13[1].klass = (MyRoomFrontObjectManager_c *)_4__this;
      sub_B2C2F8((BattleServantConfConponent_o *)&v13[1], (System_Int32_array **)_4__this, v14, v15, v16, v17, v18, v19);
      v20 = this->fields.__4__this;
      if ( !v20 )
        goto LABEL_20;
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)v20[1].klass,
                                              0LL,
                                              0LL);
      if ( ((unsigned __int8)_4__this & 1) != 0 )
      {
        v21 = this->fields.__4__this;
        if ( v21 )
        {
          _4__this = (UnityEngine_Component_o *)v21[1].klass;
          if ( _4__this )
          {
            MyRoomFrontObject__Setup(
              (MyRoomFrontObject_o *)_4__this,
              this->fields.id,
              *(UnityEngine_Vector3_o *)&v21->fields.BasePosition.fields.y,
              0LL);
            return;
          }
        }
LABEL_20:
        sub_B2C434(_4__this, v10);
      }
    }
  }
}