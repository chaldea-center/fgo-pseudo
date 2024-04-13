void __fastcall MyRoomFrontObjectManager___ctor(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ManagerConfig_c *v5; // x0
  int HEIGHT; // s0

  if ( (byte_42E853A & 1) == 0 )
  {
    sub_B5D5C4(&ManagerConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E853A = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  HEIGHT = v5->static_fields->HEIGHT;
  this->fields.BasePosition.fields.y = 0.0;
  LODWORD(this->fields.dispObject) = 0;
  this->fields.BasePosition.fields.z = (float)HEIGHT * -0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__FrameIn(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *klass; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  int v8; // s0

  if ( (byte_42E8536 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8536 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( v6 )
  {
    if ( !this[1].klass )
      sub_B5D69C(v6, v7);
    MyRoomFrontObjectManager__MoveDispObject(
      this,
      *(UnityEngine_Vector3_o *)&v8,
      *(UnityEngine_Vector3_o *)&this->fields.BasePosition.fields.y,
      v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__FrameOut(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *klass; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  MyRoomFrontObjectManager_c *v8; // x8
  float32x2_t v9; // d0 OVERLAPPED
  float32x2_t v10; // d2
  float v11; // s1
  unsigned __int64 v12; // d3 OVERLAPPED
  float v13; // s5
  int v14; // s4

  if ( (byte_42E8535 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8535 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this[1].klass;
    if ( !v8 )
      sub_B5D69C(v6, v7);
    v9.n64_u64[0] = *(unsigned __int64 *)&this->fields.BasePosition.fields.y;
    v10.n64_u64[0] = (unsigned __int64)v8->_1.namespaze;
    v11 = *(float *)&this->fields.dispObject;
    v12 = vadd_f32(v9, v10).n64_u64[0];
    v13 = v11 + *(float *)&v8->_1.byval_arg.data;
    v14 = HIDWORD(v12);
    MyRoomFrontObjectManager__MoveDispObject(
      this,
      *(UnityEngine_Vector3_o *)v9.n64_u64,
      *(UnityEngine_Vector3_o *)&v12,
      v7);
  }
}


bool __fastcall MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *klass; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  MyRoomFrontObjectManager_c *v9; // x8

  if ( (byte_42E8539 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, id, (_DWORD)method, v3);
    byte_42E8539 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( !v7 )
    return 0;
  v9 = this[1].klass;
  if ( !v9 )
    sub_B5D69C(v7, v8);
  return v9->_1.byval_arg.bits != id;
}


bool __fastcall MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *klass; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  MyRoomFrontObjectManager_c *v9; // x8

  if ( (byte_42E8538 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, id, (_DWORD)method, v3);
    byte_42E8538 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( !v7 )
    return 0;
  v9 = this[1].klass;
  if ( !v9 )
    sub_B5D69C(v7, v8);
  return v9->_1.byval_arg.bits == id;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__MoveDispObject(
        MyRoomFrontObjectManager_o *this,
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        const MethodInfo *method)
{
  int v4; // w2
  __int64 v5; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *klass; // x20
  __int64 v11; // x1
  MyRoomFrontObjectManager_c *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float v14; // s11
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v18; // 0:s3.4,4:s4.4,8:s5.4

  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  if ( (byte_42E8537 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v4, v5);
    byte_42E8537 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    v12 = this[1].klass;
    if ( !v12 )
      goto LABEL_12;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    v18.fields.x = x;
    v18.fields.y = y;
    v18.fields.z = z;
    if ( UnityEngine_Vector3__op_Inequality(LocalPosition, v18, 0LL) )
    {
      v12 = this[1].klass;
      if ( v12 )
      {
        v14 = *((float *)&v12->_1.byval_arg.data + 1);
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
        v17.fields.y = y;
        v17.fields.z = z;
        v17.fields.x = x;
        TweenPosition__Begin(v15, v14, v17, 0LL);
        return;
      }
LABEL_12:
      sub_B5D69C(v12, v11);
    }
  }
}


void __fastcall MyRoomFrontObjectManager__ReleaseAll(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Component_o **v14; // x19
  UnityEngine_Object_o *v15; // x20
  MyRoomFrontObjectManager_c *klass; // t1
  System_String_o *v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x0
  System_String_o *v20; // x20
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  intptr_t m_CachedPtr; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8534 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_9352/*"MyRoom/FrontObject/{0}"*/, v11, v12, v13);
    byte_42E8534 = 1;
  }
  klass = this[1].klass;
  v14 = (UnityEngine_Component_o **)&this[1];
  v15 = (UnityEngine_Object_o *)klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (System_String_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    if ( !*v14
      || (m_CachedPtr = (*v14)[1].fields.m_CachedPtr,
          v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &m_CachedPtr),
          v17 = System_String__Format((System_String_o *)StringLiteral_9352/*"MyRoom/FrontObject/{0}"*/, v19, 0LL),
          !*v14) )
    {
      sub_B5D69C(v17, v18);
    }
    v20 = v17;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*v14, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
    *v14 = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)v14, 0LL, v22, v23, v24, v25, v26, v27);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage(v20, 0LL);
  }
}


void __fastcall MyRoomFrontObjectManager__Setup(MyRoomFrontObjectManager_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  Il2CppObject *v33; // x0
  System_String_o *v34; // x19
  AssetLoader_LoadEndDataHandler_o *v35; // x21
  int v36; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8533 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, id, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__, v12, v13, v14);
    sub_B5D5C4(&MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9352/*"MyRoom/FrontObject/{0}"*/, v18, v19, v20);
    byte_42E8533 = 1;
  }
  v21 = sub_B5D694(MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo);
  MyRoomFrontObjectManager___c__DisplayClass6_0___ctor((MyRoomFrontObjectManager___c__DisplayClass6_0_o *)v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v21 + 24) = id;
  if ( !MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(this, id, v30) )
  {
    if ( MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(this, *(_DWORD *)(v21 + 24), v31) )
      MyRoomFrontObjectManager__ReleaseAll(this, v32);
    v36 = *(_DWORD *)(v21 + 24);
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
    v34 = System_String__Format((System_String_o *)StringLiteral_9352/*"MyRoom/FrontObject/{0}"*/, v33, 0LL);
    v35 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v35,
      (Il2CppObject *)v21,
      Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__loadAssetStorage(v34, v35, 1, 0LL);
  }
}


int32_t __fastcall MyRoomFrontObjectManager__get_currentDispId(
        MyRoomFrontObjectManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *klass; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  MyRoomFrontObjectManager_c *v8; // x8

  if ( (byte_42E8532 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8532 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( !v6 )
    return -1;
  v8 = this[1].klass;
  if ( !v8 )
    sub_B5D69C(v6, v7);
  return v8->_1.byval_arg.bits;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UILabel_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v19; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  struct MyRoomFrontObjectManager_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct MyRoomFrontObjectManager_o *v29; // x8
  struct MyRoomFrontObjectManager_o *v30; // x8

  if ( (byte_42EAE78 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_9355/*"MyRoomFrontObj"*/, v15, v16, v17);
    byte_42EAE78 = 1;
  }
  if ( assetData )
  {
    Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                    assetData,
                                                    (System_String_o *)StringLiteral_9355/*"MyRoomFrontObj"*/,
                                                    (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
                                              (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      if ( !_4__this )
        goto LABEL_20;
      v22 = this->fields.__4__this;
      _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)_4__this,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___);
      if ( !v22 )
        goto LABEL_20;
      v22[1].klass = (MyRoomFrontObjectManager_c *)_4__this;
      sub_B5D560((BattleServantConfConponent_o *)&v22[1], (System_Int32_array **)_4__this, v23, v24, v25, v26, v27, v28);
      v29 = this->fields.__4__this;
      if ( !v29 )
        goto LABEL_20;
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)v29[1].klass,
                                              0LL,
                                              0LL);
      if ( ((unsigned __int8)_4__this & 1) != 0 )
      {
        v30 = this->fields.__4__this;
        if ( v30 )
        {
          _4__this = (UnityEngine_Component_o *)v30[1].klass;
          if ( _4__this )
          {
            MyRoomFrontObject__Setup(
              (MyRoomFrontObject_o *)_4__this,
              this->fields.id,
              *(UnityEngine_Vector3_o *)&v30->fields.BasePosition.fields.y,
              0LL);
            return;
          }
        }
LABEL_20:
        sub_B5D69C(_4__this, v19);
      }
    }
  }
}