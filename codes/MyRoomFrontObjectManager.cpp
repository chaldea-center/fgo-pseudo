void __fastcall MyRoomFrontObjectManager___ctor(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  int HEIGHT; // s0

  if ( (byte_40F9AEE & 1) == 0 )
  {
    sub_B16FFC(&ManagerConfig_TypeInfo, method);
    byte_40F9AEE = 1;
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
  const MethodInfo *v4; // x1
  int v5; // s0

  if ( (byte_40F9AEA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9AEA = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    if ( !this[1].klass )
      sub_B170D4();
    MyRoomFrontObjectManager__MoveDispObject(
      this,
      *(UnityEngine_Vector3_o *)&v5,
      *(UnityEngine_Vector3_o *)&this->fields.BasePosition.fields.y,
      v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__FrameOut(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  const MethodInfo *v4; // x1
  MyRoomFrontObjectManager_c *v5; // x8
  float32x2_t v6; // d0 OVERLAPPED
  float32x2_t v7; // d2
  float v8; // s1
  unsigned __int64 v9; // d3 OVERLAPPED
  float v10; // s5
  int v11; // s4

  if ( (byte_40F9AE9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9AE9 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    v5 = this[1].klass;
    if ( !v5 )
      sub_B170D4();
    v6.n64_u64[0] = *(unsigned __int64 *)&this->fields.BasePosition.fields.y;
    v7.n64_u64[0] = (unsigned __int64)v5->_1.namespaze;
    v8 = *(float *)&this->fields.dispObject;
    v9 = vadd_f32(v6, v7).n64_u64[0];
    v10 = v8 + *(float *)&v5->_1.byval_arg.data;
    v11 = HIDWORD(v9);
    MyRoomFrontObjectManager__MoveDispObject(
      this,
      *(UnityEngine_Vector3_o *)v6.n64_u64,
      *(UnityEngine_Vector3_o *)&v9,
      v4);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  MyRoomFrontObjectManager_c *v6; // x8

  if ( (byte_40F9AED & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_40F9AED = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    return 0;
  v6 = this[1].klass;
  if ( !v6 )
    sub_B170D4();
  return v6->_1.byval_arg.bits != id;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x21
  MyRoomFrontObjectManager_c *v6; // x8

  if ( (byte_40F9AEC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_40F9AEC = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    return 0;
  v6 = this[1].klass;
  if ( !v6 )
    sub_B170D4();
  return v6->_1.byval_arg.bits == id;
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
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  MyRoomFrontObjectManager_c *v11; // x0
  float v12; // s11
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v16; // 0:s3.4,4:s4.4,8:s5.4

  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  if ( (byte_40F9AEB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9AEB = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this[1].klass;
    if ( !v9 )
      goto LABEL_12;
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    v16.fields.x = x;
    v16.fields.y = y;
    v16.fields.z = z;
    if ( UnityEngine_Vector3__op_Inequality(LocalPosition, v16, 0LL) )
    {
      v11 = this[1].klass;
      if ( v11 )
      {
        v12 = *((float *)&v11->_1.byval_arg.data + 1);
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
        v15.fields.y = y;
        v15.fields.z = z;
        v15.fields.x = x;
        TweenPosition__Begin(v13, v12, v15, 0LL);
        return;
      }
LABEL_12:
      sub_B170D4();
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
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  intptr_t m_CachedPtr; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F9AE8 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_9228/*"MyRoom/FrontObject/{0}"*/, v5);
    byte_40F9AE8 = 1;
  }
  klass = this[1].klass;
  v6 = (UnityEngine_Component_o **)&this[1];
  v7 = (UnityEngine_Object_o *)klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    if ( !*v6
      || (m_CachedPtr = (*v6)[1].fields.m_CachedPtr,
          v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr),
          v10 = System_String__Format((System_String_o *)StringLiteral_9228/*"MyRoom/FrontObject/{0}"*/, v9, 0LL),
          !*v6) )
    {
      sub_B170D4();
    }
    v11 = v10;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v6, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
    *v6 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)v6, 0LL, v13, v14, v15, v16, v17, v18);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__Setup(MyRoomFrontObjectManager_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
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
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  int v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9AE7 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_B16FFC(&Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__, v9);
    sub_B16FFC(&MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_9228/*"MyRoom/FrontObject/{0}"*/, v11);
    byte_40F9AE7 = 1;
  }
  v12 = sub_B170CC(MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo, *(_QWORD *)&id, method, v3, v4);
  MyRoomFrontObjectManager___c__DisplayClass6_0___ctor((MyRoomFrontObjectManager___c__DisplayClass6_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v12 + 24) = id;
  if ( !MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(this, id, v19) )
  {
    if ( MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(this, *(_DWORD *)(v12 + 24), v20) )
      MyRoomFrontObjectManager__ReleaseAll(this, v21);
    v29 = *(_DWORD *)(v12 + 24);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v23 = System_String__Format((System_String_o *)StringLiteral_9228/*"MyRoom/FrontObject/{0}"*/, v22, 0LL);
    v28 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26, v27);
    AssetLoader_LoadEndDataHandler___ctor(
      v28,
      (Il2CppObject *)v12,
      Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v23, v28, 1, 0LL);
  }
}


int32_t __fastcall MyRoomFrontObjectManager__get_currentDispId(
        MyRoomFrontObjectManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *klass; // x20
  MyRoomFrontObjectManager_c *v4; // x8

  if ( (byte_40F9AE6 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9AE6 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    return -1;
  v4 = this[1].klass;
  if ( !v4 )
    sub_B170D4();
  return v4->_1.byval_arg.bits;
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
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v12; // x0
  struct MyRoomFrontObjectManager_o *v13; // x20
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct MyRoomFrontObjectManager_o *v21; // x8
  struct MyRoomFrontObjectManager_o *v22; // x8
  MyRoomFrontObject_o *klass; // x0

  if ( (byte_40F8668 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, assetData);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_9230/*"MyRoomFrontObj"*/, v8);
    byte_40F8668 = 1;
  }
  if ( assetData )
  {
    Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                    assetData,
                                                    (System_String_o *)StringLiteral_9230/*"MyRoomFrontObj"*/,
                                                    (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
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
      v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                          Object_WarBoardWaitTimeSetting,
                                          transform,
                                          (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      if ( !v12 )
        goto LABEL_20;
      v13 = this->fields.__4__this;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         v12,
                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___);
      if ( !v13 )
        goto LABEL_20;
      v13[1].klass = (MyRoomFrontObjectManager_c *)Component_srcLineSprite;
      sub_B16F98((BattleServantConfConponent_o *)&v13[1], Component_srcLineSprite, v15, v16, v17, v18, v19, v20);
      v21 = this->fields.__4__this;
      if ( !v21 )
        goto LABEL_20;
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21[1].klass, 0LL, 0LL) )
      {
        v22 = this->fields.__4__this;
        if ( v22 )
        {
          klass = (MyRoomFrontObject_o *)v22[1].klass;
          if ( klass )
          {
            MyRoomFrontObject__Setup(
              klass,
              this->fields.id,
              *(UnityEngine_Vector3_o *)&v22->fields.BasePosition.fields.y,
              0LL);
            return;
          }
        }
LABEL_20:
        sub_B170D4();
      }
    }
  }
}