void __fastcall MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  __int128 v7; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8.fields.m_YMin = 0.41;
  v8.fields.m_Height = 0.5869;
  v8.fields.m_Width = 1.0;
  v8.fields.m_XMin = 0.0;
  *(_QWORD *)&v7 = 0LL;
  UnityEngine_Rect___ctor(v8, v2, v3, v4, v5, (const MethodInfo *)&v7);
  *(_OWORD *)&this->fields.DISP_RECT.fields.m_YMin = v7;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager__ClearBackObject(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  struct MyRoomBackGroundManager_BackObject_o *v10; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v14; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x20
  System_String_o *assetName; // x20

  if ( (byte_4185C63 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4185C63 = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v10 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v10->fields.instanceObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( v14 )
    {
      if ( !*p_backObject )
        goto LABEL_18;
      v16 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35315108(v16, 0LL);
      if ( !*p_backObject )
LABEL_18:
        sub_B2C434(v14, v15);
      assetName = (*p_backObject)->fields.assetName;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(assetName, 0LL);
    }
  }
  *p_backObject = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)p_backObject, 0LL, v2, v3, v4, v5, v6, v7);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w0

  if ( (byte_4185C65 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4185C65 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v4);
  }
  v5 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)Instance, v4);
  return v5 & ~(v5 >> 31);
}


System_String_o *__fastcall MyRoomBackGroundManager__GetBgImgName(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v6; // x1
  int32_t v7; // w0
  int v8; // w9
  Il2CppObject *v9; // x0
  int v11; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_4185C64 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_B2C35C(&int_TypeInfo, v2);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B2C35C(&StringLiteral_2654/*"Back/back{0}"*/, v4);
    byte_4185C64 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)Instance, v6);
  if ( v7 >= 1 )
    v8 = v7;
  else
    v8 = 10400;
  v11 = v8;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format((System_String_o *)StringLiteral_2654/*"Back/back{0}"*/, v9, 0LL);
}


void __fastcall MyRoomBackGroundManager__Init(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ExUITexture_o *backTexture; // x0
  const MethodInfo *v5; // x1

  this->fields.loadType = 0;
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)this, 0LL);
  backTexture = this->fields.backTexture;
  if ( !backTexture )
    sub_B2C434(0LL, v3);
  ExUITexture__ClearImage(backTexture, 0LL);
  MyRoomBackGroundManager__ClearBackObject(this, v5);
}


bool __fastcall MyRoomBackGroundManager__IsIncludeLoadType(
        MyRoomBackGroundManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  return (this->fields.loadType & type) != 0;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGround(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4185C68 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo, callback);
    byte_4185C68 = 1;
  }
  v5 = sub_B2C42C(MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo);
  MyRoomBackGroundManager__LoadBackGround_d__21___ctor((MyRoomBackGroundManager__LoadBackGround_d__21_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4185C67 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo, callback);
    byte_4185C67 = 1;
  }
  v5 = sub_B2C42C(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo);
  MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20___ctor(
    (MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4185C69 & 1) == 0 )
  {
    sub_B2C35C(&MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo, callback);
    byte_4185C69 = 1;
  }
  v5 = sub_B2C42C(MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo);
  MyRoomBackGroundManager__LoadBackObject_d__22___ctor((MyRoomBackGroundManager__LoadBackObject_d__22_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomBackGroundManager__OnEnable(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  if ( (this->fields.loadType & 2) != 0 )
    MyRoomBackGroundManager__PlayForceBackObjectAnimation(this, method);
}


void __fastcall MyRoomBackGroundManager__PlayForceBackObjectAnimation(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1
  struct MyRoomBackGroundManager_BackObject_o *v9; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v11; // x20
  unsigned int v12; // w22
  UnityEngine_GameObject_c **v13; // x8
  SimpleAnimation_o *v14; // x21
  struct MyRoomBackGroundManager_BackObject_o *v15; // x8
  int v16; // w8
  UnityEngine_GameObject_o *v17; // x19
  unsigned int v18; // w21
  UnityEngine_GameObject_c **v19; // x8
  UnityEngine_Animation_o *v20; // x20
  __int64 v21; // x0

  if ( (byte_4185C66 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4185C66 = 1;
  }
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      v9 = this->fields.backObject;
      if ( !v9 )
        goto LABEL_25;
      v7 = v9->fields.instanceObject;
      if ( !v7 )
        goto LABEL_25;
      v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                         v7,
                                         (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !v7 )
        goto LABEL_25;
      klass = (int)v7[1].klass;
      v11 = v7;
      if ( klass >= 1 )
      {
        v12 = 0;
        while ( v12 < klass )
        {
          v13 = &v11->klass + (int)v12;
          v14 = (SimpleAnimation_o *)v13[4];
          if ( !v14 )
            goto LABEL_25;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v13[4], 0LL);
          v7 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v14, 0LL);
          klass = (int)v11[1].klass;
          if ( (int)++v12 >= klass )
            goto LABEL_16;
        }
LABEL_26:
        v21 = sub_B2C460(v7);
        sub_B2C400(v21, 0LL);
      }
LABEL_16:
      v15 = this->fields.backObject;
      if ( !v15
        || (v7 = v15->fields.instanceObject) == 0LL
        || (v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                               v7,
                                               (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_25:
        sub_B2C434(v7, v8);
      }
      v16 = (int)v7[1].klass;
      v17 = v7;
      if ( v16 >= 1 )
      {
        v18 = 0;
        while ( v18 < v16 )
        {
          v19 = &v17->klass + (int)v18;
          v20 = (UnityEngine_Animation_o *)v19[4];
          if ( !v20 )
            goto LABEL_25;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v19[4], 0LL);
          v7 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v20, 0LL);
          v16 = (int)v17[1].klass;
          if ( (int)++v18 >= v16 )
            return;
        }
        goto LABEL_26;
      }
    }
  }
}


void __fastcall MyRoomBackGroundManager__QuitBackGround(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  MyRoomBackGroundManager__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomBackGroundManager__SetBackGround(
        MyRoomBackGroundManager_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *BackGroundByLoadType; // x1

  MyRoomBackGroundManager__Init(this, *(const MethodInfo **)&type);
  this->fields.loadType = type;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomBackGroundManager_BackObject___ctor(
        MyRoomBackGroundManager_BackObject_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  struct System_String_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4185D5D & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&id);
    sub_B2C35C(&StringLiteral_9256/*"MyRoom/BackObject/{0}"*/, v5);
    byte_4185D5D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v20 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v7 = System_String__Format((System_String_o *)StringLiteral_9256/*"MyRoom/BackObject/{0}"*/, v6, 0LL);
  this->fields.assetName = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.assetName,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.instanceObject = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.instanceObject, 0LL, v14, v15, v16, v17, v18, v19);
}


void __fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20___ctor(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20__MoveNext(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v13; // x20
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  System_Action_o *v16; // x22
  System_Collections_IEnumerator_o *BackGround; // x0
  System_Action_o *v18; // x22
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v20; // x21
  UnityEngine_WaitWhile_o *v21; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_o *callback; // x0

  if ( (byte_4185D5B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v3);
    sub_B2C35C(&System_Func_bool__TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__, v6);
    sub_B2C35C(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__, v7);
    sub_B2C35C(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__, v8);
    sub_B2C35C(&MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v10);
    byte_4185D5B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      return (char)callback;
    System_Action__Invoke(callback, 0LL);
LABEL_15:
    LOBYTE(callback) = 0;
    return (char)callback;
  }
  if ( _1__state )
    goto LABEL_15;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v13 = sub_B2C42C(MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_DWORD *)(v13 + 16) = 0,
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode(Instance, 1, 0LL), !_4__this) )
  {
    sub_B2C434(Instance, v15);
  }
  if ( MyRoomBackGroundManager__IsIncludeLoadType(_4__this, 1, 0LL) )
  {
    ++*(_DWORD *)(v13 + 16);
    v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v13,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v16, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
  }
  if ( MyRoomBackGroundManager__IsIncludeLoadType(_4__this, 2, 0LL) )
  {
    ++*(_DWORD *)(v13 + 16);
    v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v13,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v18, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v20 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v21 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v21, v20, 0LL);
  this->fields.__2__current = (Il2CppObject *)v21;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v21, v23, v24, v25, v26, v27, v28);
  LOBYTE(callback) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)callback;
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20__System_Collections_IEnumerator_Reset(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20__System_Collections_IEnumerator_get_Current(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20__System_IDisposable_Dispose(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomBackGroundManager__LoadBackGround_d__21___ctor(
        MyRoomBackGroundManager__LoadBackGround_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomBackGroundManager__LoadBackGround_d__21__MoveNext(
        MyRoomBackGroundManager__LoadBackGround_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v13; // x20
  UnityEngine_Component_o *backTexture; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_Action_o *v23; // x22
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **BgImgName; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Action_o *v37; // x21
  System_Func_bool__o *v38; // x21
  UnityEngine_WaitWhile_o *v39; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Action_o *callback; // x0

  if ( (byte_4185D5A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v4);
    sub_B2C35C(&System_Func_bool__TypeInfo, v5);
    sub_B2C35C(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__, v6);
    sub_B2C35C(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__, v7);
    sub_B2C35C(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__, v8);
    sub_B2C35C(&MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v10);
    byte_4185D5A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      return (char)callback;
    System_Action__Invoke(callback, 0LL);
LABEL_16:
    LOBYTE(callback) = 0;
    return (char)callback;
  }
  if ( _1__state )
    goto LABEL_16;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v13 = sub_B2C42C(MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_18;
  v22 = (System_Int32_array **)this->fields.__4__this;
  *(_QWORD *)(v13 + 24) = v22;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), v22, v16, v17, v18, v19, v20, v21);
  *(_BYTE *)(v13 + 16) = 1;
  v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v13,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v13 + 40) = v23;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0LL),
        BgImgName = (System_Int32_array **)MyRoomBackGroundManager__GetBgImgName(_4__this, 0LL),
        *(_QWORD *)(v13 + 32) = BgImgName,
        sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 32), BgImgName, v31, v32, v33, v34, v35, v36),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_18:
    sub_B2C434(backTexture, v15);
  }
  UITexture__set_uvRect(
    (UITexture_o *)backTexture,
    *(UnityEngine_Rect_o *)&_4__this->fields.DISP_RECT.fields.m_YMin,
    0LL);
  v37 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v13,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v37, 0LL);
  v38 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v38,
    (Il2CppObject *)v13,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__,
    (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
  v39 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v39, v38, 0LL);
  this->fields.__2__current = (Il2CppObject *)v39;
  p__2__current = &this->fields.__2__current;
  sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v39, v41, v42, v43, v44, v45, v46);
  LOBYTE(callback) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)callback;
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackGround_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomBackGroundManager__LoadBackGround_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomBackGroundManager__LoadBackGround_d__21__System_Collections_IEnumerator_Reset(
        MyRoomBackGroundManager__LoadBackGround_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomBackGroundManager__LoadBackGround_d__21_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackGround_d__21__System_Collections_IEnumerator_get_Current(
        MyRoomBackGroundManager__LoadBackGround_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomBackGroundManager__LoadBackGround_d__21__System_IDisposable_Dispose(
        MyRoomBackGroundManager__LoadBackGround_d__21_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomBackGroundManager__LoadBackObject_d__22___ctor(
        MyRoomBackGroundManager__LoadBackObject_d__22_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomBackGroundManager__LoadBackObject_d__22__MoveNext(
        MyRoomBackGroundManager__LoadBackObject_d__22_o *this,
        const MethodInfo *method)
{
  MyRoomBackGroundManager__LoadBackObject_d__22_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  int32_t BackObjectId; // w0
  int32_t v22; // w22
  MyRoomBackGroundManager_BackObject_o *v23; // x23
  const MethodInfo *v24; // x2
  BattleServantConfConponent_o *p_backObject; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_o *namespaze; // x22
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_o *v39; // x21
  AssetLoader_LoadEndDataHandler_o *v40; // x22
  System_Action_o *callback; // x0
  System_Func_bool__o *v42; // x21
  UnityEngine_WaitWhile_o *v43; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  v2 = this;
  if ( (byte_4185D5C & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&MyRoomBackGroundManager_BackObject_TypeInfo, v3);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v4);
    sub_B2C35C(&System_Func_bool__TypeInfo, v5);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_B2C35C(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__, v7);
    sub_B2C35C(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__, v8);
    sub_B2C35C(&MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, v9);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_B2C35C(&UnityEngine_WaitWhile_TypeInfo, v10);
    byte_4185D5C = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v13 = sub_B2C42C(MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v13, 0LL);
      if ( !v13 )
        goto LABEL_25;
      v20 = (System_Int32_array **)v2->fields.__4__this;
      *(_QWORD *)(v13 + 16) = v20;
      sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), v20, v14, v15, v16, v17, v18, v19);
      *(_BYTE *)(v13 + 24) = 0;
      if ( !_4__this )
        goto LABEL_25;
      BackObjectId = MyRoomBackGroundManager__GetBackObjectId(_4__this, 0LL);
      if ( BackObjectId >= 1 )
      {
        v22 = BackObjectId;
        v23 = (MyRoomBackGroundManager_BackObject_o *)sub_B2C42C(MyRoomBackGroundManager_BackObject_TypeInfo);
        MyRoomBackGroundManager_BackObject___ctor(v23, v22, v24);
        _4__this->fields.backObject = v23;
        p_backObject = (BattleServantConfConponent_o *)&_4__this->fields.backObject;
        sub_B2C2F8(p_backObject, (System_Int32_array **)v23, v26, v27, v28, v29, v30, v31);
        if ( !p_backObject->klass )
          goto LABEL_25;
        namespaze = (System_String_o *)p_backObject->klass->_1.namespaze;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)AssetManager__isExistAssetStorage(namespaze, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          *(_BYTE *)(v13 + 24) = 1;
          if ( p_backObject->klass )
          {
            v39 = (System_String_o *)p_backObject->klass->_1.namespaze;
            v40 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v40,
              (Il2CppObject *)v13,
              Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__,
              0LL);
            if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AssetManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            }
            AssetManager__loadAssetStorage(v39, v40, 1, 0LL);
            goto LABEL_23;
          }
LABEL_25:
          sub_B2C434(this, method);
        }
        p_backObject->klass = 0LL;
        sub_B2C2F8(p_backObject, 0LL, v33, v34, v35, v36, v37, v38);
      }
LABEL_23:
      v42 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v42,
        (Il2CppObject *)v13,
        Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__,
        (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
      v43 = (UnityEngine_WaitWhile_o *)sub_B2C42C(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v43, v42, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v43;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, (System_Int32_array **)v43, v45, v46, v47, v48, v49, v50);
      LOBYTE(callback) = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return (char)callback;
    }
    goto LABEL_21;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  MyRoomBackGroundManager__PlayForceBackObjectAnimation(_4__this, 0LL);
  callback = v2->fields.callback;
  if ( callback )
  {
    System_Action__Invoke(callback, 0LL);
LABEL_21:
    LOBYTE(callback) = 0;
  }
  return (char)callback;
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackObject_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomBackGroundManager__LoadBackObject_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomBackGroundManager__LoadBackObject_d__22__System_Collections_IEnumerator_Reset(
        MyRoomBackGroundManager__LoadBackObject_d__22_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_MyRoomBackGroundManager__LoadBackObject_d__22_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackObject_d__22__System_Collections_IEnumerator_get_Current(
        MyRoomBackGroundManager__LoadBackObject_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomBackGroundManager__LoadBackObject_d__22__System_IDisposable_Dispose(
        MyRoomBackGroundManager__LoadBackObject_d__22_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass20_0___ctor(
        MyRoomBackGroundManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass20_0___LoadBackGroundByLoadType_b__0(
        MyRoomBackGroundManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  --this->fields.waitLoadCount;
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass20_0___LoadBackGroundByLoadType_b__1(
        MyRoomBackGroundManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  --this->fields.waitLoadCount;
}


bool __fastcall MyRoomBackGroundManager___c__DisplayClass20_0___LoadBackGroundByLoadType_b__2(
        MyRoomBackGroundManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  return this->fields.waitLoadCount > 0;
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass21_0___ctor(
        MyRoomBackGroundManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass21_0___LoadBackGround_b__0(
        MyRoomBackGroundManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass21_0___LoadBackGround_b__1(
        MyRoomBackGroundManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  MyRoomBackGroundManager___c__DisplayClass21_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct MyRoomBackGroundManager_o *_4__this; // x8
  System_String_o **p_imgName; // x20
  Il2CppObject *v7; // x0
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct MyRoomBackGroundManager_o *v15; // x8
  struct MyRoomBackGroundManager_o *v16; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v18; // x20
  int v19; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4185D58 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_B2C35C(&StringLiteral_2654/*"Back/back{0}"*/, v4);
    byte_4185D58 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)_4__this->fields.backTexture;
  if ( !this )
    goto LABEL_14;
  p_imgName = &v2->fields.imgName;
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_9;
  v19 = 10400;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v8 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_2654/*"Back/back{0}"*/, v7, 0LL);
  v2->fields.imgName = (struct System_String_o *)v8;
  sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.imgName, v8, v9, v10, v11, v12, v13, v14);
  v15 = v2->fields.__4__this;
  if ( !v15 || (this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)v15->fields.backTexture) == 0LL )
LABEL_14:
    sub_B2C434(this, method);
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0LL);
LABEL_9:
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_14;
  backTexture = v16->fields.backTexture;
  v18 = *p_imgName;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(backTexture, v18, 0LL);
}


bool __fastcall MyRoomBackGroundManager___c__DisplayClass21_0___LoadBackGround_b__2(
        MyRoomBackGroundManager___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass22_0___ctor(
        MyRoomBackGroundManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass22_0___LoadBackObject_b__0(
        MyRoomBackGroundManager___c__DisplayClass22_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v9; // x1
  char *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct MyRoomBackGroundManager_o *v19; // x8

  if ( (byte_4185D59 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, assetData);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_9259/*"MyRoomBackObj"*/, v7);
    byte_4185D59 = 1;
  }
  if ( assetData )
  {
    Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                    assetData,
                                                    (System_String_o *)StringLiteral_9259/*"MyRoomBackObj"*/,
                                                    (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      _4__this = (char *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_17;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)_4__this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      _4__this = (char *)UnityEngine_Object__Instantiate_UILabel_(
                           Object_WarBoardWaitTimeSetting,
                           transform,
                           (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
      if ( !_4__this
        || (v12 = (System_Int32_array **)_4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
            (v19 = this->fields.__4__this) == 0LL)
        || (_4__this = (char *)v19->fields.backObject) == 0LL )
      {
LABEL_17:
        sub_B2C434(_4__this, v9);
      }
      *((_QWORD *)_4__this + 4) = v12;
      sub_B2C2F8((BattleServantConfConponent_o *)(_4__this + 32), v12, v13, v14, v15, v16, v17, v18);
    }
  }
  this->fields.wait = 0;
}


bool __fastcall MyRoomBackGroundManager___c__DisplayClass22_0___LoadBackObject_b__1(
        MyRoomBackGroundManager___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}