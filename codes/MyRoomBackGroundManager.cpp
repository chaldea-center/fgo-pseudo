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
  struct MyRoomBackGroundManager_BackObject_o *v9; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x20
  System_String_o *assetName; // x20

  if ( (byte_438C2DE & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C2DE = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v9 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v9->fields.instanceObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( v13 )
    {
      if ( !*p_backObject )
        goto LABEL_18;
      v15 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_36310192(v15, 0LL);
      if ( !*p_backObject )
LABEL_18:
        sub_B7769C(v13, v14);
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
  sub_B77560((BattleServantConfConponent_o *)p_backObject, 0LL, v2, v3, v4, v5, v6, v7);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  int32_t v4; // w0

  if ( (byte_438C2E0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C2E0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v3);
  }
  v4 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)Instance, v3);
  return v4 & ~(v4 >> 31);
}


System_String_o *__fastcall MyRoomBackGroundManager__GetBgImgName(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  const MethodInfo *v3; // x1
  int32_t v4; // w0
  __int64 v5; // x2
  int v6; // w9
  Il2CppObject *v7; // x0
  int v9; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_438C2DF & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_2762/*"Back/back{0}"*/);
    byte_438C2DF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v3);
  }
  v4 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)Instance, v3);
  if ( v4 >= 1 )
    v6 = v4;
  else
    v6 = 10400;
  v9 = v6;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v5);
  return System_String__Format((System_String_o *)StringLiteral_2762/*"Back/back{0}"*/, v7, 0LL);
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
    sub_B7769C(0LL, v3);
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

  if ( (byte_438C2E3 & 1) == 0 )
  {
    sub_B775C4(&MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo);
    byte_438C2E3 = 1;
  }
  v5 = sub_B77694(MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo);
  MyRoomBackGroundManager__LoadBackGround_d__21___ctor((MyRoomBackGroundManager__LoadBackGround_d__21_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_438C2E2 & 1) == 0 )
  {
    sub_B775C4(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo);
    byte_438C2E2 = 1;
  }
  v5 = sub_B77694(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo);
  MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20___ctor(
    (MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_438C2E4 & 1) == 0 )
  {
    sub_B775C4(&MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo);
    byte_438C2E4 = 1;
  }
  v5 = sub_B77694(MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo);
  MyRoomBackGroundManager__LoadBackObject_d__22___ctor((MyRoomBackGroundManager__LoadBackObject_d__22_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


// attributes: thunk
void __fastcall MyRoomBackGroundManager__OnDestroy(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  MyRoomBackGroundManager__QuitBackGround(this, method);
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
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  UnityEngine_GameObject_o *v5; // x0
  __int64 v6; // x1
  struct MyRoomBackGroundManager_BackObject_o *v7; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v9; // x20
  unsigned int v10; // w22
  UnityEngine_GameObject_c **v11; // x8
  SimpleAnimation_o *v12; // x21
  struct MyRoomBackGroundManager_BackObject_o *v13; // x8
  int v14; // w8
  UnityEngine_GameObject_o *v15; // x19
  unsigned int v16; // w21
  UnityEngine_GameObject_c **v17; // x8
  UnityEngine_Animation_o *v18; // x20
  __int64 v19; // x0

  if ( (byte_438C2E1 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C2E1 = 1;
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
    v5 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      v7 = this->fields.backObject;
      if ( !v7 )
        goto LABEL_25;
      v5 = v7->fields.instanceObject;
      if ( !v5 )
        goto LABEL_25;
      v5 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                         v5,
                                         (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !v5 )
        goto LABEL_25;
      klass = (int)v5[1].klass;
      v9 = v5;
      if ( klass >= 1 )
      {
        v10 = 0;
        while ( v10 < klass )
        {
          v11 = &v9->klass + (int)v10;
          v12 = (SimpleAnimation_o *)v11[4];
          if ( !v12 )
            goto LABEL_25;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v11[4], 0LL);
          v5 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v12, 0LL);
          klass = (int)v9[1].klass;
          if ( (int)++v10 >= klass )
            goto LABEL_16;
        }
LABEL_26:
        v19 = sub_B776C8(v5);
        sub_B77668(v19, 0LL);
      }
LABEL_16:
      v13 = this->fields.backObject;
      if ( !v13
        || (v5 = v13->fields.instanceObject) == 0LL
        || (v5 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                               v5,
                                               (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_25:
        sub_B7769C(v5, v6);
      }
      v14 = (int)v5[1].klass;
      v15 = v5;
      if ( v14 >= 1 )
      {
        v16 = 0;
        while ( v16 < v14 )
        {
          v17 = &v15->klass + (int)v16;
          v18 = (UnityEngine_Animation_o *)v17[4];
          if ( !v18 )
            goto LABEL_25;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v17[4], 0LL);
          v5 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v18, 0LL);
          v14 = (int)v15[1].klass;
          if ( (int)++v16 >= v14 )
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
    sub_B7769C(0LL, v4);
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
    sub_B7769C(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
}


void __fastcall MyRoomBackGroundManager_BackObject___ctor(
        MyRoomBackGroundManager_BackObject_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x2
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

  if ( (byte_438C159 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_9423/*"MyRoom/BackObject/{0}"*/);
    byte_438C159 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v20 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v5);
  v7 = System_String__Format((System_String_o *)StringLiteral_9423/*"MyRoom/BackObject/{0}"*/, v6, 0LL);
  this->fields.assetName = v7;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.assetName,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.instanceObject = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.instanceObject, 0LL, v14, v15, v16, v17, v18, v19);
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
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v5; // x20
  CommonUI_o *Instance; // x0
  __int64 v7; // x1
  System_Action_o *v8; // x22
  System_Collections_IEnumerator_o *BackGround; // x0
  System_Action_o *v10; // x22
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v12; // x21
  UnityEngine_WaitWhile_o *v13; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o *callback; // x0

  if ( (byte_438C157 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__);
    sub_B775C4(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__);
    sub_B775C4(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__);
    sub_B775C4(&MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo);
    sub_B775C4(&UnityEngine_WaitWhile_TypeInfo);
    byte_438C157 = 1;
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
  v5 = sub_B77694(MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = 0,
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode(Instance, 1, 0LL), !_4__this) )
  {
    sub_B7769C(Instance, v7);
  }
  if ( MyRoomBackGroundManager__IsIncludeLoadType(_4__this, 1, 0LL) )
  {
    ++*(_DWORD *)(v5 + 16);
    v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v8, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
  }
  if ( MyRoomBackGroundManager__IsIncludeLoadType(_4__this, 2, 0LL) )
  {
    ++*(_DWORD *)(v5 + 16);
    v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v10, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v12 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__,
    (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
  v13 = (UnityEngine_WaitWhile_o *)sub_B77694(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v13, v12, 0LL);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_B77560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v5; // x20
  UnityEngine_Component_o *backTexture; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x1
  System_Action_o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **BgImgName; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_o *v29; // x21
  System_Func_bool__o *v30; // x21
  UnityEngine_WaitWhile_o *v31; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Action_o *callback; // x0

  if ( (byte_438C156 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__);
    sub_B775C4(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__);
    sub_B775C4(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__);
    sub_B775C4(&MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo);
    sub_B775C4(&UnityEngine_WaitWhile_TypeInfo);
    byte_438C156 = 1;
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
  v5 = sub_B77694(MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  v14 = (System_Int32_array **)this->fields.__4__this;
  *(_QWORD *)(v5 + 24) = v14;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), v14, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 16) = 1;
  v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v5 + 40) = v15;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0LL),
        BgImgName = (System_Int32_array **)MyRoomBackGroundManager__GetBgImgName(_4__this, 0LL),
        *(_QWORD *)(v5 + 32) = BgImgName,
        sub_B77560((BattleServantConfConponent_o *)(v5 + 32), BgImgName, v23, v24, v25, v26, v27, v28),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_18:
    sub_B7769C(backTexture, v7);
  }
  UITexture__set_uvRect(
    (UITexture_o *)backTexture,
    *(UnityEngine_Rect_o *)&_4__this->fields.DISP_RECT.fields.m_YMin,
    0LL);
  v29 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v29, 0LL);
  v30 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v30,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__,
    (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
  v31 = (UnityEngine_WaitWhile_o *)sub_B77694(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v31, v30, 0LL);
  this->fields.__2__current = (Il2CppObject *)v31;
  p__2__current = &this->fields.__2__current;
  sub_B77560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v31, v33, v34, v35, v36, v37, v38);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_MyRoomBackGroundManager__LoadBackGround_d__21_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1
  int32_t BackObjectId; // w0
  int32_t v14; // w22
  MyRoomBackGroundManager_BackObject_o *v15; // x23
  const MethodInfo *v16; // x2
  BattleServantConfConponent_o *p_backObject; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *namespaze; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_o *v31; // x21
  AssetLoader_LoadEndDataHandler_o *v32; // x22
  System_Action_o *callback; // x0
  System_Func_bool__o *v34; // x21
  UnityEngine_WaitWhile_o *v35; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  v2 = this;
  if ( (byte_438C158 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&MyRoomBackGroundManager_BackObject_TypeInfo);
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B775C4(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__);
    sub_B775C4(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__);
    sub_B775C4(&MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_B775C4(&UnityEngine_WaitWhile_TypeInfo);
    byte_438C158 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      v5 = sub_B77694(MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0LL);
      if ( !v5 )
        goto LABEL_25;
      v12 = (System_Int32_array **)v2->fields.__4__this;
      *(_QWORD *)(v5 + 16) = v12;
      sub_B77560((BattleServantConfConponent_o *)(v5 + 16), v12, v6, v7, v8, v9, v10, v11);
      *(_BYTE *)(v5 + 24) = 0;
      if ( !_4__this )
        goto LABEL_25;
      BackObjectId = MyRoomBackGroundManager__GetBackObjectId(_4__this, 0LL);
      if ( BackObjectId >= 1 )
      {
        v14 = BackObjectId;
        v15 = (MyRoomBackGroundManager_BackObject_o *)sub_B77694(MyRoomBackGroundManager_BackObject_TypeInfo);
        MyRoomBackGroundManager_BackObject___ctor(v15, v14, v16);
        _4__this->fields.backObject = v15;
        p_backObject = (BattleServantConfConponent_o *)&_4__this->fields.backObject;
        sub_B77560(p_backObject, (System_Int32_array **)v15, v18, v19, v20, v21, v22, v23);
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
          *(_BYTE *)(v5 + 24) = 1;
          if ( p_backObject->klass )
          {
            v31 = (System_String_o *)p_backObject->klass->_1.namespaze;
            v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B77694(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v32,
              (Il2CppObject *)v5,
              Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__,
              0LL);
            if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AssetManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            }
            AssetManager__loadAssetStorage(v31, v32, 1, 0LL);
            goto LABEL_23;
          }
LABEL_25:
          sub_B7769C(this, method);
        }
        p_backObject->klass = 0LL;
        sub_B77560(p_backObject, 0LL, v25, v26, v27, v28, v29, v30);
      }
LABEL_23:
      v34 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v34,
        (Il2CppObject *)v5,
        Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__,
        (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
      v35 = (UnityEngine_WaitWhile_o *)sub_B77694(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v35, v34, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v35;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(p__2__current, (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
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

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_MyRoomBackGroundManager__LoadBackObject_d__22_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
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
  struct MyRoomBackGroundManager_o *_4__this; // x8
  System_String_o **p_imgName; // x20
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct MyRoomBackGroundManager_o *v14; // x8
  struct MyRoomBackGroundManager_o *v15; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v17; // x20
  int v18; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_438C154 & 1) == 0 )
  {
    sub_B775C4(&FSUtility_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_B775C4(&StringLiteral_2762/*"Back/back{0}"*/);
    byte_438C154 = 1;
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
  v18 = 10400;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v5);
  v7 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_2762/*"Back/back{0}"*/, v6, 0LL);
  v2->fields.imgName = (struct System_String_o *)v7;
  sub_B77560((BattleServantConfConponent_o *)&v2->fields.imgName, v7, v8, v9, v10, v11, v12, v13);
  v14 = v2->fields.__4__this;
  if ( !v14 || (this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)v14->fields.backTexture) == 0LL )
LABEL_14:
    sub_B7769C(this, method);
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0LL);
LABEL_9:
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_14;
  backTexture = v15->fields.backTexture;
  v17 = *p_imgName;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(backTexture, v17, 0LL);
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
  UILabel_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v6; // x1
  char *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct MyRoomBackGroundManager_o *v16; // x8

  if ( (byte_438C155 & 1) == 0 )
  {
    sub_B775C4(&Method_AssetData_GetObject_GameObject____69465408);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_9427/*"MyRoomBackObj"*/);
    byte_438C155 = 1;
  }
  if ( assetData )
  {
    Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                    assetData,
                                                    (System_String_o *)StringLiteral_9427/*"MyRoomBackObj"*/,
                                                    (const MethodInfo_1C5FDDC *)Method_AssetData_GetObject_GameObject____69465408);
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
                           (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
      if ( !_4__this
        || (v9 = (System_Int32_array **)_4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
            (v16 = this->fields.__4__this) == 0LL)
        || (_4__this = (char *)v16->fields.backObject) == 0LL )
      {
LABEL_17:
        sub_B7769C(_4__this, v6);
      }
      *((_QWORD *)_4__this + 4) = v9;
      sub_B77560((BattleServantConfConponent_o *)(_4__this + 32), v9, v10, v11, v12, v13, v14, v15);
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