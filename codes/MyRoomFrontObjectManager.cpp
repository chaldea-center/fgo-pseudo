void __fastcall MyRoomFrontObjectManager___ctor(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v3; // x0
  int HEIGHT; // s0

  if ( (byte_49F7A1A & 1) == 0 )
  {
    sub_1B640C8(&ManagerConfig_TypeInfo, method);
    byte_49F7A1A = 1;
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

  if ( (byte_49F7A16 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F7A16 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( v4 )
  {
    if ( !this->fields.dispObject )
      sub_1B64324(v4);
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

  if ( (byte_49F7A15 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F7A15 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( v4 )
  {
    v6 = this->fields.dispObject;
    if ( !v6 )
      sub_1B64324(v4);
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
  struct MyRoomFrontObject_o *v7; // x8

  if ( (byte_49F7A19 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_49F7A19 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( !v6 )
    return 0;
  v7 = this->fields.dispObject;
  if ( !v7 )
    sub_1B64324(v6);
  return v7->fields._Id_k__BackingField != id;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  _BOOL8 v6; // x0
  struct MyRoomFrontObject_o *v7; // x8

  if ( (byte_49F7A18 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
    byte_49F7A18 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( !v6 )
    return 0;
  v7 = this->fields.dispObject;
  if ( !v7 )
    sub_1B64324(v6);
  return v7->fields._Id_k__BackingField == id;
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
  struct MyRoomFrontObject_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float frameInOutDuration; // s11
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s1.4,4:s2.4,8:s3.4

  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  if ( (byte_49F7A17 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F7A17 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v9 = this->fields.dispObject;
    if ( !v9 )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( (float)((float)((float)(LocalPosition.fields.z - z) * (float)(LocalPosition.fields.z - z))
               + (float)((float)((float)(LocalPosition.fields.x - x) * (float)(LocalPosition.fields.x - x))
                       + (float)((float)(LocalPosition.fields.y - y) * (float)(LocalPosition.fields.y - y)))) >= 1.0e-10 )
    {
      v9 = this->fields.dispObject;
      if ( v9 )
      {
        frameInOutDuration = v9->fields.frameInOutDuration;
        v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
        v14.fields.y = y;
        v14.fields.z = z;
        v14.fields.x = x;
        TweenPosition__Begin(v12, frameInOutDuration, v14, 0LL);
        return;
      }
LABEL_11:
      sub_1B64324(v9);
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
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  UnityEngine_Object_o *gameObject; // x21
  int klass; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F7A14 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_9155/*"MyRoom/FrontObject/{0}"*/, v5);
    byte_49F7A14 = 1;
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
          v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass),
          v9 = System_String__Format((System_String_o *)StringLiteral_9155/*"MyRoom/FrontObject/{0}"*/, v10, 0LL),
          !*p_dispObject) )
    {
      sub_1B64324(v9);
    }
    v11 = v9;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dispObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
    *p_dispObject = 0LL;
    sub_1B6406C(p_dispObject);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAssetStorage(v11, 0LL);
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
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  Il2CppObject *v15; // x0
  System_String_o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  AssetLoader_LoadEndDataHandler_o *v19; // x21
  int v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F7A13 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&id);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B640C8(&Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__, v7);
    sub_1B640C8(&MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_9155/*"MyRoom/FrontObject/{0}"*/, v9);
    byte_49F7A13 = 1;
  }
  v10 = sub_1B64314(MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo, *(_QWORD *)&id, method);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B64324(v11);
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C(v10 + 16);
  *(_DWORD *)(v10 + 24) = id;
  if ( !MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(this, id, v12) )
  {
    if ( MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(this, *(_DWORD *)(v10 + 24), v13) )
      MyRoomFrontObjectManager__ReleaseAll(this, v14);
    v20 = *(_DWORD *)(v10 + 24);
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v16 = System_String__Format((System_String_o *)StringLiteral_9155/*"MyRoom/FrontObject/{0}"*/, v15, 0LL);
    v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18);
    AssetLoader_LoadEndDataHandler___ctor(
      v19,
      (Il2CppObject *)v10,
      Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(v16, v19, 1, 0LL);
  }
}


int32_t __fastcall MyRoomFrontObjectManager__get_currentDispId(
        MyRoomFrontObjectManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v4; // x0
  struct MyRoomFrontObject_o *v5; // x8

  if ( (byte_49F7A12 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F7A12 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v5 = this->fields.dispObject;
  if ( !v5 )
    sub_1B64324(v4);
  return v5->fields._Id_k__BackingField;
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
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  struct MyRoomFrontObjectManager_o *v12; // x20
  struct MyRoomFrontObjectManager_o *v13; // x8
  const MethodInfo *v14; // x2
  struct MyRoomFrontObjectManager_o *v15; // x8

  if ( (byte_49F7A1B & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, assetData);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_9158/*"MyRoomFrontObj"*/, v8);
    byte_49F7A1B = 1;
  }
  if ( assetData )
  {
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                assetData,
                                (System_String_o *)StringLiteral_9158/*"MyRoomFrontObj"*/,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_18;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49003980(
                                              Object_object__48347676,
                                              transform,
                                              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
      if ( !_4__this )
        goto LABEL_18;
      v12 = this->fields.__4__this;
      _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)_4__this,
                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___);
      if ( !v12 )
        goto LABEL_18;
      v12->fields.dispObject = (struct MyRoomFrontObject_o *)_4__this;
      _4__this = (UnityEngine_Component_o *)sub_1B6406C(&v12->fields.dispObject);
      v13 = this->fields.__4__this;
      if ( !v13 )
        goto LABEL_18;
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)v13->fields.dispObject,
                                              0LL,
                                              0LL);
      if ( ((unsigned __int8)_4__this & 1) != 0 )
      {
        v15 = this->fields.__4__this;
        if ( v15 )
        {
          _4__this = (UnityEngine_Component_o *)v15->fields.dispObject;
          if ( _4__this )
          {
            MyRoomFrontObject__Setup((MyRoomFrontObject_o *)_4__this, this->fields.id, v15->fields.BasePosition, v14);
            return;
          }
        }
LABEL_18:
        sub_1B64324(_4__this);
      }
    }
  }
}