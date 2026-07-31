void MyRoomFrontObjectManager___ctor(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ManagerConfig_c *v4; // x0
  int HEIGHT; // s0

  if ( (byte_59333DA & 1) == 0 )
  {
    sub_21FFC50(&ManagerConfig_TypeInfo);
    byte_59333DA = 1;
  }
  v4 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, method, v2);
    v4 = ManagerConfig_TypeInfo;
  }
  HEIGHT = v4->static_fields->HEIGHT;
  this->fields.BasePosition.fields.x = 0.0;
  this->fields.BasePosition.fields.z = 0.0;
  this->fields.BasePosition.fields.y = (float)HEIGHT * -0.5;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void MyRoomFrontObjectManager__FrameIn(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  int v7; // s0 OVERLAPPED

  if ( (byte_59333D6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59333D6 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  if ( v5 )
  {
    if ( !this->fields.dispObject )
      sub_21FFECC(v5, v6);
    MyRoomFrontObjectManager__MoveDispObject(this, *(UnityEngine_Vector3_o *)&v7, this->fields.BasePosition, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void MyRoomFrontObjectManager__FrameOut(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  int v7; // s2 OVERLAPPED
  float32x2_t *v8; // x8
  unsigned __int64 v9; // d3 OVERLAPPED
  float z; // s0
  float v11; // s1
  float v12; // s5
  int v13; // s4

  if ( (byte_59333D5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59333D5 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  if ( v5 )
  {
    v8 = (float32x2_t *)this->fields.dispObject;
    if ( !v8 )
      sub_21FFECC(v5, v6);
    v9 = vadd_f32(*(float32x2_t *)&this->fields.BasePosition.fields.x, v8[4]).n64_u64[0];
    z = this->fields.BasePosition.fields.z;
    v11 = v8[5].n64_f32[0];
    v12 = z + v11;
    v13 = HIDWORD(v9);
    MyRoomFrontObjectManager__MoveDispObject(
      this,
      *(UnityEngine_Vector3_o *)(&v7 - 2),
      *(UnityEngine_Vector3_o *)&v9,
      v6);
  }
}


// local variable allocation has failed, the output may be wrong!
bool MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MyRoomFrontObject_o *v8; // x8

  if ( (byte_59333D9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59333D9 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&id, method);
  v6 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  if ( !v6 )
    return 0;
  v8 = this->fields.dispObject;
  if ( !v8 )
    sub_21FFECC(v6, v7);
  return v8->fields._Id_k__BackingField != id;
}


// local variable allocation has failed, the output may be wrong!
bool MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(
        MyRoomFrontObjectManager_o *this,
        int32_t id,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dispObject; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct MyRoomFrontObject_o *v8; // x8

  if ( (byte_59333D8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59333D8 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&id, method);
  v6 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  if ( !v6 )
    return 0;
  v8 = this->fields.dispObject;
  if ( !v8 )
    sub_21FFECC(v6, v7);
  return v8->fields._Id_k__BackingField == id;
}


void MyRoomFrontObjectManager__MoveDispObject(
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
  if ( (byte_59333D7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59333D7 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v4);
  if ( UnityEngine_Object__op_Inequality(dispObject, 0, 0) )
  {
    v11 = this->fields.dispObject;
    if ( !v11 )
      goto LABEL_11;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
    if ( (float)((float)((float)(LocalPosition.fields.z - z) * (float)(LocalPosition.fields.z - z))
               + (float)((float)((float)(LocalPosition.fields.x - x) * (float)(LocalPosition.fields.x - x))
                       + (float)((float)(LocalPosition.fields.y - y) * (float)(LocalPosition.fields.y - y)))) >= 1.0e-10 )
    {
      v11 = this->fields.dispObject;
      if ( v11 )
      {
        frameInOutDuration = v11->fields.frameInOutDuration;
        v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
        v16.fields.y = y;
        v16.fields.z = z;
        v16.fields.x = x;
        TweenPosition__Begin(v14, frameInOutDuration, v16, 0);
        return;
      }
LABEL_11:
      sub_21FFECC(v11, v10);
    }
  }
}


void MyRoomFrontObjectManager__ReleaseAll(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o **p_dispObject; // x19
  UnityEngine_Object_o *v5; // x20
  struct MyRoomFrontObject_o *dispObject; // t1
  System_String_o *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x0
  System_String_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  __int64 v21; // x2
  int klass; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59333D4 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_9588/*"MyRoom/FrontObject/{0}"*/);
    byte_59333D4 = 1;
  }
  dispObject = this->fields.dispObject;
  p_dispObject = (UnityEngine_Component_o **)&this->fields.dispObject;
  v5 = (UnityEngine_Object_o *)dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v7 = (System_String_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( !*p_dispObject
      || (klass = (int)(*p_dispObject)[2].klass,
          v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &klass),
          v7 = System_String__Format((System_String_o *)StringLiteral_9588/*"MyRoom/FrontObject/{0}"*/, v9, 0),
          !*p_dispObject) )
    {
      sub_21FFECC(v7, v8);
    }
    v10 = v7;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_dispObject, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    UnityEngine_Object__DestroyImmediate_83246828(gameObject, 0);
    *p_dispObject = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_dispObject, 0, v14, v15, v16, v17, v18, v19);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20, v21);
    AssetManager__releaseAssetStorage(v10, 0);
  }
}


void MyRoomFrontObjectManager__Setup(MyRoomFrontObjectManager_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x1
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59333D3 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__);
    sub_21FFC50(&MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo);
    sub_21FFC50(&StringLiteral_9588/*"MyRoom/FrontObject/{0}"*/);
    byte_59333D3 = 1;
  }
  v5 = sub_21FFEBC(MyRoomFrontObjectManager___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = id;
  if ( !MyRoomFrontObjectManager__IsSameObjectAlreadyDisplayed(this, id, v14) )
  {
    if ( MyRoomFrontObjectManager__IsDefferentObjectAlreadyDisplayed(this, *(_DWORD *)(v5 + 24), v15) )
      MyRoomFrontObjectManager__ReleaseAll(this, v16);
    v22 = *(_DWORD *)(v5 + 24);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v22);
    v18 = System_String__Format((System_String_o *)StringLiteral_9588/*"MyRoom/FrontObject/{0}"*/, v17, 0);
    v19 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v19,
      (Il2CppObject *)v5,
      Method_MyRoomFrontObjectManager___c__DisplayClass6_0__Setup_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v20, v21);
    AssetManager__loadAssetStorage(v18, v19, 1, 0, 0);
  }
}


int32_t MyRoomFrontObjectManager__get_currentDispId(MyRoomFrontObjectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dispObject; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct MyRoomFrontObject_o *v7; // x8

  if ( (byte_59333D2 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59333D2 = 1;
  }
  dispObject = (UnityEngine_Object_o *)this->fields.dispObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(dispObject, 0, 0);
  if ( !v5 )
    return -1;
  v7 = this->fields.dispObject;
  if ( !v7 )
    sub_21FFECC(v5, v6);
  return v7->fields._Id_k__BackingField;
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Object_object__58323140; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *_4__this; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Transform_o *transform; // x21
  struct MyRoomFrontObjectManager_o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct MyRoomFrontObjectManager_o *v20; // x8
  struct MyRoomFrontObjectManager_o *v21; // x8

  if ( (byte_59333DB & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_9598/*"MyRoomFrontObj"*/);
    byte_59333DB = 1;
  }
  if ( assetData )
  {
    Object_object__58323140 = AssetData__GetObject_object__58323140(
                                assetData,
                                (System_String_o *)StringLiteral_9598/*"MyRoomFrontObj"*/,
                                (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_18;
      transform = UnityEngine_Component__get_transform(_4__this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__59506996(
                                              Object_object__58323140,
                                              transform,
                                              (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
      if ( !_4__this )
        goto LABEL_18;
      v13 = this->fields.__4__this;
      _4__this = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)_4__this,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_MyRoomFrontObject___);
      if ( !v13 )
        goto LABEL_18;
      v13->fields.dispObject = (struct MyRoomFrontObject_o *)_4__this;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v13->fields.dispObject,
        (int32_t)_4__this,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      v20 = this->fields.__4__this;
      if ( !v20 )
        goto LABEL_18;
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)v20->fields.dispObject,
                                              0,
                                              0);
      if ( ((unsigned __int8)_4__this & 1) != 0 )
      {
        v21 = this->fields.__4__this;
        if ( v21 )
        {
          _4__this = (UnityEngine_Component_o *)v21->fields.dispObject;
          if ( _4__this )
          {
            MyRoomFrontObject__Setup((MyRoomFrontObject_o *)_4__this, this->fields.id, v21->fields.BasePosition, 0);
            return;
          }
        }
LABEL_18:
        sub_21FFECC(_4__this, v8);
      }
    }
  }
}