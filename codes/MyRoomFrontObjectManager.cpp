void __fastcall MyRoomFrontObjectManager___ctor(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v4; // x0
  int HEIGHT; // s0

  if ( (byte_4B115F9 & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, method, v2);
    byte_4B115F9 = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method);
    v4 = ManagerConfig_TypeInfo;
  }
  HEIGHT = v4->static_fields->HEIGHT;
  this->fields.BasePosition.fields.x = 0.0;
  this->fields.BasePosition.fields.z = 0.0;
  this->fields.BasePosition.fields.y = (float)HEIGHT * -0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__FrameIn(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  int v7; // s0

  if ( (byte_4B115F5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B115F5 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( v5 )
  {
    if ( !this->fields.dispObject )
      sub_1BCAA3C(v5, v6);
    MyRoomFrontObjectManager__MoveDispObject(this, *(UnityEngine_Vector3_o *)&v7, this->fields.BasePosition, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__FrameOut(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  struct MyRoomFrontObject_o *v7; // x8
  float32x2_t v8; // d1 OVERLAPPED
  float32x2_t v9; // d2
  float z; // s0
  unsigned __int64 v11; // d3 OVERLAPPED
  float v12; // s5
  int v13; // s4

  if ( (byte_4B115F4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B115F4 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( v5 )
  {
    v7 = this->fields.dispObject;
    if ( !v7 )
      sub_1BCAA3C(v5, v6);
    v8.n64_u64[0] = *(unsigned __int64 *)&this->fields.BasePosition.fields.x;
    v9.n64_u64[0] = *(unsigned __int64 *)&v7->fields.frameOutMoveValue.fields.x;
    z = this->fields.BasePosition.fields.z;
    v11 = vadd_f32(v8, v9).n64_u64[0];
    v12 = z + v7->fields.frameOutMoveValue.fields.z;
    v13 = HIDWORD(v11);
    MyRoomFrontObjectManager__MoveDispObject(
      this,
      *(UnityEngine_Vector3_o *)((char *)&v8 - 4),
      *(UnityEngine_Vector3_o *)&v11,
      v6);
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

  if ( (byte_4B115F8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id, method);
    byte_4B115F8 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
  v6 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( !v6 )
    return 0;
  v8 = this->fields.dispObject;
  if ( !v8 )
    sub_1BCAA3C(v6, v7);
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

  if ( (byte_4B115F7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&id, method);
    byte_4B115F7 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&id);
  v6 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( !v6 )
    return 0;
  v8 = this->fields.dispObject;
  if ( !v8 )
    sub_1BCAA3C(v6, v7);
  return v8->fields._Id_k__BackingField == id;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__MoveDispObject(
        MyRoomFrontObjectManager_o *this,
        UnityEngine_Vector3_o from,
        UnityEngine_Vector3_o to,
        const MethodInfo *method)
{
  __int64 v4; // x2
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_Object_o *dispObject; // x20
  __int64 v10; // x1
  struct MyRoomFrontObject_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float frameInOutDuration; // s11
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s1.4,4:s2.4,8:s3.4

  z = to.fields.z;
  y = to.fields.y;
  x = to.fields.x;
  if ( (byte_4B115F6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v4);
    byte_4B115F6 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL) )
  {
    v11 = this->fields.dispObject;
    if ( !v11 )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
    if ( (float)((float)((float)(LocalPosition.fields.z - z) * (float)(LocalPosition.fields.z - z))
               + (float)((float)((float)(LocalPosition.fields.x - x) * (float)(LocalPosition.fields.x - x))
                       + (float)((float)(LocalPosition.fields.y - y) * (float)(LocalPosition.fields.y - y)))) >= 1.0e-10 )
    {
      v11 = this->fields.dispObject;
      if ( v11 )
      {
        frameInOutDuration = v11->fields.frameInOutDuration;
        v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
        v16.fields.y = y;
        v16.fields.z = z;
        v16.fields.x = x;
        TweenPosition__Begin(v14, frameInOutDuration, v16, 0LL);
        return;
      }
LABEL_11:
      sub_1BCAA3C(v11, v10);
    }
  }
}


void __fastcall MyRoomFrontObjectManager__ReleaseAll(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Component_o **p_dispObject; // x19
  UnityEngine_Object_o *v11; // x20
  struct MyRoomFrontObject_o *dispObject; // t1
  System_String_o *v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *gameObject; // x21
  __int64 v19; // x1
  int klass; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B115F3 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_9327/*"MyRoom/FrontObject/{0}"*/, v8, v9);
    byte_4B115F3 = 1;
  }
  dispObject = this->fields.dispObject;
  p_dispObject = (UnityEngine_Component_o **)&this->fields.dispObject;
  v11 = (UnityEngine_Object_o *)dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v13 = (System_String_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    if ( !*p_dispObject
      || (klass = (int)(*p_dispObject)[2].klass,
          v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &klass),
          v13 = System_String__Format((System_String_o *)StringLiteral_9327/*"MyRoom/FrontObject/{0}"*/, v15, 0LL),
          !*p_dispObject) )
    {
      sub_1BCAA3C(v13, v14);
    }
    v16 = v13;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dispObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
    *p_dispObject = 0LL;
    sub_1BCA784(p_dispObject, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19);
    AssetManager__releaseAssetStorage(v16, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomFrontObjectManager__Setup(MyRoomFrontObjectManager_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  Il2CppObject *v22; // x0
  System_String_o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  __int64 v28; // x1
  int v29; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B115F2 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&id, method);
    sub_1BCA7E0(&int_TypeInfo, v6, v7);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__, v10, v11);
    sub_1BCA7E0(&MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_9327/*"MyRoom/FrontObject/{0}"*/, v14, v15);
    byte_4B115F2 = 1;
  }
  v16 = sub_1BCAA2C(MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo, *(_QWORD *)&id, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1BCAA3C(v17, v18);
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784(v16 + 16, this);
  *(_DWORD *)(v16 + 24) = id;
  if ( !MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(this, id, v19) )
  {
    if ( MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(this, *(_DWORD *)(v16 + 24), v20) )
      MyRoomFrontObjectManager__ReleaseAll(this, v21);
    v29 = *(_DWORD *)(v16 + 24);
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v23 = System_String__Format((System_String_o *)StringLiteral_9327/*"MyRoom/FrontObject/{0}"*/, v22, 0LL);
    v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26);
    AssetLoader_LoadEndDataHandler___ctor(
      v27,
      (Il2CppObject *)v16,
      Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28);
    AssetManager__loadAssetStorage(v23, v27, 1, 0LL);
  }
}


int32_t __fastcall MyRoomFrontObjectManager__get_currentDispId(
        MyRoomFrontObjectManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct MyRoomFrontObject_o *v7; // x8

  if ( (byte_4B115F1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B115F1 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(dispObject, 0LL, 0LL);
  if ( !v5 )
    return -1;
  v7 = this->fields.dispObject;
  if ( !v7 )
    sub_1BCAA3C(v5, v6);
  return v7->fields._Id_k__BackingField;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  Il2CppObject *Object_object__49237568; // x20
  __int64 v15; // x1
  UnityEngine_Component_o *_4__this; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *transform; // x21
  struct MyRoomFrontObjectManager_o *v19; // x20
  struct MyRoomFrontObjectManager_o *v20; // x8
  const MethodInfo *v21; // x2
  struct MyRoomFrontObjectManager_o *v22; // x8

  if ( (byte_4B115FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_9331/*"MyRoomFrontObj"*/, v11, v12);
    byte_4B115FA = 1;
  }
  if ( assetData )
  {
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                assetData,
                                (System_String_o *)StringLiteral_9331/*"MyRoomFrontObj"*/,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_18;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49903816(
                                              Object_object__49237568,
                                              transform,
                                              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      if ( !_4__this )
        goto LABEL_18;
      v19 = this->fields.__4__this;
      _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)_4__this,
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___);
      if ( !v19 )
        goto LABEL_18;
      v19->fields.dispObject = (struct MyRoomFrontObject_o *)_4__this;
      _4__this = (UnityEngine_Component_o *)sub_1BCA784(&v19->fields.dispObject, _4__this);
      v20 = this->fields.__4__this;
      if ( !v20 )
        goto LABEL_18;
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)v20->fields.dispObject,
                                              0LL,
                                              0LL);
      if ( ((unsigned __int8)_4__this & 1) != 0 )
      {
        v22 = this->fields.__4__this;
        if ( v22 )
        {
          _4__this = (UnityEngine_Component_o *)v22->fields.dispObject;
          if ( _4__this )
          {
            MyRoomFrontObject__Setup((MyRoomFrontObject_o *)_4__this, this->fields.id, v22->fields.BasePosition, v21);
            return;
          }
        }
LABEL_18:
        sub_1BCAA3C(_4__this, v15);
      }
    }
  }
}