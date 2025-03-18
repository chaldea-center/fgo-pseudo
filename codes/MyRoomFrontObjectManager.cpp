void __fastcall MyRoomFrontObjectManager___ctor(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  int HEIGHT; // s0

  if ( (byte_4C1D1CE & 1) == 0 )
  {
    sub_1C3B764(&ManagerConfig_TypeInfo, method);
    byte_4C1D1CE = 1;
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
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__FrameIn(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x1
  int v6; // s0

  if ( (byte_4C1D1CA & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1D1CA = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( v4 )
  {
    if ( !this->fields.dispObject )
      sub_1C3B9C0(v4, v5);
    MyRoomFrontObjectManager__MoveDispObject(this, *(UnityEngine_Vector3_o *)&v6, this->fields.BasePosition, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__FrameOut(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
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

  if ( (byte_4C1D1C9 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1D1C9 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.dispObject;
    if ( !v6 )
      sub_1C3B9C0(v4, v5);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MyRoomFrontObject_o *v8; // x8

  if ( (byte_4C1D1CD & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_4C1D1CD = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( !v6 )
    return 0;
  v8 = this->fields.dispObject;
  if ( !v8 )
    sub_1C3B9C0(v6, v7);
  return v8->fields._Id_k__BackingField != id;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MyRoomFrontObject_o *v8; // x8

  if ( (byte_4C1D1CC & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_4C1D1CC = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( !v6 )
    return 0;
  v8 = this->fields.dispObject;
  if ( !v8 )
    sub_1C3B9C0(v6, v7);
  return v8->fields._Id_k__BackingField == id;
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
  if ( (byte_4C1D1CB & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1D1CB = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v10 = this->fields.dispObject;
    if ( !v10 )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( (float)((float)((float)(LocalPosition.fields.z - z) * (float)(LocalPosition.fields.z - z))
               + (float)((float)((float)(LocalPosition.fields.x - x) * (float)(LocalPosition.fields.x - x))
                       + (float)((float)(LocalPosition.fields.y - y) * (float)(LocalPosition.fields.y - y)))) >= 1.0e-10 )
    {
      v10 = this->fields.dispObject;
      if ( v10 )
      {
        frameInOutDuration = v10->fields.frameInOutDuration;
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
        v15.fields.y = y;
        v15.fields.z = z;
        v15.fields.x = x;
        TweenPosition__Begin(v13, frameInOutDuration, v15, 0LL);
        return;
      }
LABEL_11:
      sub_1C3B9C0(v10, v9);
    }
  }
}


void __fastcall MyRoomFrontObjectManager__ReleaseAll(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o **p_dispObject; // x19
  UnityEngine_Object_o *v7; // x20
  struct MyRoomFrontObject_o *dispObject; // t1
  System_String_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  UnityEngine_Object_o *gameObject; // x21
  int klass; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C1D1C8 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, method);
    sub_1C3B764(&int_TypeInfo, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_9384/*"OBERON_CHOCO_SVT_ID"*/, v5);
    byte_4C1D1C8 = 1;
  }
  dispObject = this->fields.dispObject;
  p_dispObject = (UnityEngine_Component_o **)&this->fields.dispObject;
  v7 = (UnityEngine_Object_o *)dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (System_String_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( !*p_dispObject
      || (klass = (int)(*p_dispObject)[2].klass,
          v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass, v11, v12, v13),
          v9 = System_String__Format((System_String_o *)StringLiteral_9384/*"OBERON_CHOCO_SVT_ID"*/, v14, 0LL),
          !*p_dispObject) )
    {
      sub_1C3B9C0(v9, v10);
    }
    v15 = v9;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dispObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71122936(gameObject, 0LL);
    *p_dispObject = 0LL;
    sub_1C3B708(p_dispObject);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v15, 0LL);
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
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  System_String_o *v20; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C1D1C7 & 1) == 0 )
  {
    sub_1C3B764(&AssetManager_TypeInfo, *(_QWORD *)&id);
    sub_1C3B764(&int_TypeInfo, v5);
    sub_1C3B764(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1C3B764(&Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__, v7);
    sub_1C3B764(&MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_9384/*"OBERON_CHOCO_SVT_ID"*/, v9);
    byte_4C1D1C7 = 1;
  }
  v10 = sub_1C3B9B0(MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1C3B9C0(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1C3B708(v10 + 16);
  *(_DWORD *)(v10 + 24) = id;
  if ( !MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(this, id, v13) )
  {
    if ( MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(this, *(_DWORD *)(v10 + 24), v14) )
      MyRoomFrontObjectManager__ReleaseAll(this, v15);
    v22 = *(_DWORD *)(v10 + 24);
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v16, v17, v18);
    v20 = System_String__Format((System_String_o *)StringLiteral_9384/*"OBERON_CHOCO_SVT_ID"*/, v19, 0LL);
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3B9B0(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v21,
      (Il2CppObject *)v10,
      Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v20, v21, 1, 0LL);
  }
}


int32_t __fastcall MyRoomFrontObjectManager__get_currentDispId(
        MyRoomFrontObjectManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct MyRoomFrontObject_o *v6; // x8

  if ( (byte_4C1D1C6 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1D1C6 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this->fields.dispObject;
  if ( !v6 )
    sub_1C3B9C0(v4, v5);
  return v6->fields._Id_k__BackingField;
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
  Il2CppObject *Object_object__50142412; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  struct MyRoomFrontObjectManager_o *v13; // x20
  struct MyRoomFrontObjectManager_o *v14; // x8
  const MethodInfo *v15; // x2
  struct MyRoomFrontObjectManager_o *v16; // x8

  if ( (byte_4C1D1CF & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, assetData);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___, v5);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v6);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_9389/*"OID > 127 bytes"*/, v8);
    byte_4C1D1CF = 1;
  }
  if ( assetData )
  {
    Object_object__50142412 = AssetData__GetObject_object__50142412(
                                assetData,
                                (System_String_o *)StringLiteral_9389/*"OID > 127 bytes"*/,
                                (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__50142412, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_18;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__50818788(
                                              Object_object__50142412,
                                              transform,
                                              (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
      if ( !_4__this )
        goto LABEL_18;
      v13 = this->fields.__4__this;
      _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)_4__this,
                                              (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___);
      if ( !v13 )
        goto LABEL_18;
      v13->fields.dispObject = (struct MyRoomFrontObject_o *)_4__this;
      _4__this = (UnityEngine_Component_o *)sub_1C3B708(&v13->fields.dispObject);
      v14 = this->fields.__4__this;
      if ( !v14 )
        goto LABEL_18;
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)v14->fields.dispObject,
                                              0LL,
                                              0LL);
      if ( ((unsigned __int8)_4__this & 1) != 0 )
      {
        v16 = this->fields.__4__this;
        if ( v16 )
        {
          _4__this = (UnityEngine_Component_o *)v16->fields.dispObject;
          if ( _4__this )
          {
            MyRoomFrontObject__Setup((MyRoomFrontObject_o *)_4__this, this->fields.id, v16->fields.BasePosition, v15);
            return;
          }
        }
LABEL_18:
        sub_1C3B9C0(_4__this, v10);
      }
    }
  }
}