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
  __int64 v3; // x1
  struct MyRoomBackGroundManager_BackObject_o *v4; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v8; // x0
  UnityEngine_Object_o *v9; // x20
  System_String_o *assetName; // x20

  if ( (byte_421244C & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421244C = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v4 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v4->fields.instanceObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( v8 )
    {
      if ( !*p_backObject )
        goto LABEL_18;
      v9 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34935488(v9, 0LL);
      if ( !*p_backObject )
LABEL_18:
        sub_B0D97C(v8);
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
  sub_B0D840(p_backObject, 0LL);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  int32_t v5; // w0

  if ( (byte_421244E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_421244E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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

  if ( (byte_421244D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_B0D8A4(&int_TypeInfo, v2);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_2665/*"Back/back{0}"*/, v4);
    byte_421244D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)Instance, v6);
  if ( v7 >= 1 )
    v8 = v7;
  else
    v8 = 10400;
  v11 = v8;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format((System_String_o *)StringLiteral_2665/*"Back/back{0}"*/, v9, 0LL);
}


void __fastcall MyRoomBackGroundManager__Init(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  ExUITexture_o *backTexture; // x0
  const MethodInfo *v4; // x1

  this->fields.loadType = 0;
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)this, 0LL);
  backTexture = this->fields.backTexture;
  if ( !backTexture )
    sub_B0D97C(0LL);
  ExUITexture__ClearImage(backTexture, 0LL);
  MyRoomBackGroundManager__ClearBackObject(this, v4);
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
  MyRoomBackGroundManager__LoadBackGround_d__21_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4212451 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo, callback);
    byte_4212451 = 1;
  }
  v5 = (MyRoomBackGroundManager__LoadBackGround_d__21_o *)sub_B0D974(
                                                            MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo,
                                                            callback,
                                                            method);
  MyRoomBackGroundManager__LoadBackGround_d__21___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.__4__this = this;
  sub_B0D840(&v5->fields.__4__this, this);
  v5->fields.callback = callback;
  sub_B0D840(&v5->fields.callback, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4212450 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo, callback);
    byte_4212450 = 1;
  }
  v5 = (MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *)sub_B0D974(
                                                                      MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo,
                                                                      callback,
                                                                      method);
  MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.__4__this = this;
  sub_B0D840(&v5->fields.__4__this, this);
  v5->fields.callback = callback;
  sub_B0D840(&v5->fields.callback, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  MyRoomBackGroundManager__LoadBackObject_d__22_o *v5; // x21
  __int64 v6; // x0

  if ( (byte_4212452 & 1) == 0 )
  {
    sub_B0D8A4(&MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo, callback);
    byte_4212452 = 1;
  }
  v5 = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_B0D974(
                                                            MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo,
                                                            callback,
                                                            method);
  MyRoomBackGroundManager__LoadBackObject_d__22___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  v5->fields.__4__this = this;
  sub_B0D840(&v5->fields.__4__this, this);
  v5->fields.callback = callback;
  sub_B0D840(&v5->fields.callback, callback);
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
  struct MyRoomBackGroundManager_BackObject_o *v8; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v10; // x20
  unsigned int v11; // w22
  UnityEngine_GameObject_c **v12; // x8
  SimpleAnimation_o *v13; // x21
  struct MyRoomBackGroundManager_BackObject_o *v14; // x8
  int v15; // w8
  UnityEngine_GameObject_o *v16; // x19
  unsigned int v17; // w21
  UnityEngine_GameObject_c **v18; // x8
  UnityEngine_Animation_o *v19; // x20
  __int64 v20; // x0

  if ( (byte_421244F & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_421244F = 1;
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
      v8 = this->fields.backObject;
      if ( !v8 )
        goto LABEL_25;
      v7 = v8->fields.instanceObject;
      if ( !v7 )
        goto LABEL_25;
      v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                         v7,
                                         (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !v7 )
        goto LABEL_25;
      klass = (int)v7[1].klass;
      v10 = v7;
      if ( klass >= 1 )
      {
        v11 = 0;
        while ( v11 < klass )
        {
          v12 = &v10->klass + (int)v11;
          v13 = (SimpleAnimation_o *)v12[4];
          if ( !v13 )
            goto LABEL_25;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v12[4], 0LL);
          v7 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v13, 0LL);
          klass = (int)v10[1].klass;
          if ( (int)++v11 >= klass )
            goto LABEL_16;
        }
LABEL_26:
        v20 = sub_B0D9A8(v7);
        sub_B0D948(v20, 0LL);
      }
LABEL_16:
      v14 = this->fields.backObject;
      if ( !v14
        || (v7 = v14->fields.instanceObject) == 0LL
        || (v7 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                               v7,
                                               (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_25:
        sub_B0D97C(v7);
      }
      v15 = (int)v7[1].klass;
      v16 = v7;
      if ( v15 >= 1 )
      {
        v17 = 0;
        while ( v17 < v15 )
        {
          v18 = &v16->klass + (int)v17;
          v19 = (UnityEngine_Animation_o *)v18[4];
          if ( !v19 )
            goto LABEL_25;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v18[4], 0LL);
          v7 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v19, 0LL);
          v15 = (int)v16[1].klass;
          if ( (int)++v17 >= v15 )
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

  MyRoomBackGroundManager__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
  const MethodInfo *v8; // x2
  System_Collections_IEnumerator_o *BackGroundByLoadType; // x1

  MyRoomBackGroundManager__Init(this, *(const MethodInfo **)&type);
  this->fields.loadType = type;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
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
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_421275E & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&id);
    sub_B0D8A4(&StringLiteral_9279/*"MyRoom/BackObject/{0}"*/, v5);
    byte_421275E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v8 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  v7 = System_String__Format((System_String_o *)StringLiteral_9279/*"MyRoom/BackObject/{0}"*/, v6, 0LL);
  this->fields.assetName = v7;
  sub_B0D840(&this->fields.assetName, v7);
  this->fields.instanceObject = 0LL;
  sub_B0D840(&this->fields.instanceObject, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v14; // x20
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x22
  System_Collections_IEnumerator_o *BackGround; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x22
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_WaitWhile_o *v27; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callback; // x0

  if ( (byte_421275C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v4);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__, v7);
    sub_B0D8A4(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__, v8);
    sub_B0D8A4(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__, v9);
    sub_B0D8A4(&MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_WaitWhile_TypeInfo, v11);
    byte_421275C = 1;
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
  v14 = sub_B0D974(MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_DWORD *)(v14 + 16) = 0,
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode(Instance, 1, 0LL), !_4__this) )
  {
    sub_B0D97C(Instance);
  }
  if ( MyRoomBackGroundManager__IsIncludeLoadType(_4__this, 1, 0LL) )
  {
    ++*(_DWORD *)(v14 + 16);
    v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v14,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v18, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
  }
  if ( MyRoomBackGroundManager__IsIncludeLoadType(_4__this, 2, 0LL) )
  {
    ++*(_DWORD *)(v14 + 16);
    v22 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v20, v21);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v14,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v22, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v24 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v20, v21);
  System_Func_bool____ctor(
    v24,
    (Il2CppObject *)v14,
    Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v27 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, v25, v26);
  UnityEngine_WaitWhile___ctor(v27, v24, 0LL);
  this->fields.__2__current = (Il2CppObject *)v27;
  p__2__current = &this->fields.__2__current;
  sub_B0D840(p__2__current, v27);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v14; // x20
  UnityEngine_Component_o *backTexture; // x0
  struct MyRoomBackGroundManager_o *v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x22
  System_String_o *BgImgName; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_bool__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_WaitWhile_o *v29; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callback; // x0

  if ( (byte_421275B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v5);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v6);
    sub_B0D8A4(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__, v7);
    sub_B0D8A4(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__, v8);
    sub_B0D8A4(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__, v9);
    sub_B0D8A4(&MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_WaitWhile_TypeInfo, v11);
    byte_421275B = 1;
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
  v14 = sub_B0D974(MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_18;
  v16 = this->fields.__4__this;
  *(_QWORD *)(v14 + 24) = v16;
  sub_B0D840(v14 + 24, v16);
  *(_BYTE *)(v14 + 16) = 1;
  v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v14,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v14 + 40) = v19;
  sub_B0D840(v14 + 40, v19);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0LL),
        BgImgName = MyRoomBackGroundManager__GetBgImgName(_4__this, 0LL),
        *(_QWORD *)(v14 + 32) = BgImgName,
        sub_B0D840(v14 + 32, BgImgName),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(backTexture);
  }
  UITexture__set_uvRect(
    (UITexture_o *)backTexture,
    *(UnityEngine_Rect_o *)&_4__this->fields.DISP_RECT.fields.m_YMin,
    0LL);
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v14,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v23, 0LL);
  v26 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v24, v25);
  System_Func_bool____ctor(
    v26,
    (Il2CppObject *)v14,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v29 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, v27, v28);
  UnityEngine_WaitWhile___ctor(v29, v26, 0LL);
  this->fields.__2__current = (Il2CppObject *)v29;
  p__2__current = &this->fields.__2__current;
  sub_B0D840(p__2__current, v29);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomBackGroundManager__LoadBackGround_d__21_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v2; // x2
  MyRoomBackGroundManager__LoadBackObject_d__22_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v14; // x20
  struct MyRoomBackGroundManager_o *v15; // x1
  int32_t BackObjectId; // w0
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t v19; // w22
  MyRoomBackGroundManager_BackObject_o *v20; // x23
  const MethodInfo *v21; // x2
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x21
  System_String_o *assetName; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_String_o *v26; // x21
  AssetLoader_LoadEndDataHandler_o *v27; // x22
  System_Action_o *callback; // x0
  System_Func_bool__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_WaitWhile_o *v32; // x20
  Il2CppObject **p__2__current; // x19

  v3 = this;
  if ( (byte_421275D & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&MyRoomBackGroundManager_BackObject_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v5);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v6);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B0D8A4(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__, v8);
    sub_B0D8A4(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__, v9);
    sub_B0D8A4(&MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, v10);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_B0D8A4(&UnityEngine_WaitWhile_TypeInfo, v11);
    byte_421275D = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v3->fields.__1__state = -1;
      v14 = sub_B0D974(MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, method, v2);
      System_Object___ctor((Il2CppObject *)v14, 0LL);
      if ( !v14 )
        goto LABEL_25;
      v15 = v3->fields.__4__this;
      *(_QWORD *)(v14 + 16) = v15;
      sub_B0D840(v14 + 16, v15);
      *(_BYTE *)(v14 + 24) = 0;
      if ( !_4__this )
        goto LABEL_25;
      BackObjectId = MyRoomBackGroundManager__GetBackObjectId(_4__this, 0LL);
      if ( BackObjectId >= 1 )
      {
        v19 = BackObjectId;
        v20 = (MyRoomBackGroundManager_BackObject_o *)sub_B0D974(MyRoomBackGroundManager_BackObject_TypeInfo, v17, v18);
        MyRoomBackGroundManager_BackObject___ctor(v20, v19, v21);
        _4__this->fields.backObject = v20;
        p_backObject = &_4__this->fields.backObject;
        sub_B0D840(p_backObject, v20);
        if ( !*p_backObject )
          goto LABEL_25;
        assetName = (*p_backObject)->fields.assetName;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)AssetManager__isExistAssetStorage(assetName, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          *(_BYTE *)(v14 + 24) = 1;
          if ( *p_backObject )
          {
            v26 = (*p_backObject)->fields.assetName;
            v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25);
            AssetLoader_LoadEndDataHandler___ctor(
              v27,
              (Il2CppObject *)v14,
              Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__,
              0LL);
            if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AssetManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            }
            AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
            goto LABEL_23;
          }
LABEL_25:
          sub_B0D97C(this);
        }
        *p_backObject = 0LL;
        sub_B0D840(p_backObject, 0LL);
      }
LABEL_23:
      v29 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v17, v18);
      System_Func_bool____ctor(
        v29,
        (Il2CppObject *)v14,
        Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__,
        (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
      v32 = (UnityEngine_WaitWhile_o *)sub_B0D974(UnityEngine_WaitWhile_TypeInfo, v30, v31);
      UnityEngine_WaitWhile___ctor(v32, v29, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v32;
      p__2__current = &v3->fields.__2__current;
      sub_B0D840(p__2__current, v32);
      LOBYTE(callback) = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return (char)callback;
    }
    goto LABEL_21;
  }
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  MyRoomBackGroundManager__PlayForceBackObjectAnimation(_4__this, 0LL);
  callback = v3->fields.callback;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_MyRoomBackGroundManager__LoadBackObject_d__22_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  System_String_o *v8; // x0
  struct MyRoomBackGroundManager_o *v9; // x8
  struct MyRoomBackGroundManager_o *v10; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v12; // x20
  int v13; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4212759 & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    sub_B0D8A4(&int_TypeInfo, v3);
    this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_B0D8A4(&StringLiteral_2665/*"Back/back{0}"*/, v4);
    byte_4212759 = 1;
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
  v13 = 10400;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v8 = System_String__Format((System_String_o *)StringLiteral_2665/*"Back/back{0}"*/, v7, 0LL);
  v2->fields.imgName = v8;
  sub_B0D840(&v2->fields.imgName, v8);
  v9 = v2->fields.__4__this;
  if ( !v9 || (this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)v9->fields.backTexture) == 0LL )
LABEL_14:
    sub_B0D97C(this);
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0LL);
LABEL_9:
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_14;
  backTexture = v10->fields.backTexture;
  v12 = *p_imgName;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(backTexture, v12, 0LL);
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
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v11; // x20
  struct MyRoomBackGroundManager_o *v12; // x8

  if ( (byte_421275A & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, assetData);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_9282/*"MyRoomBackObj"*/, v7);
    byte_421275A = 1;
  }
  if ( assetData )
  {
    Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                    assetData,
                                                    (System_String_o *)StringLiteral_9282/*"MyRoomBackObj"*/,
                                                    (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_17;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              Object_WarBoardWaitTimeSetting,
                                              transform,
                                              (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
      if ( !_4__this
        || (v11 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
            (v12 = this->fields.__4__this) == 0LL)
        || (_4__this = (UnityEngine_Component_o *)v12->fields.backObject) == 0LL )
      {
LABEL_17:
        sub_B0D97C(_4__this);
      }
      _4__this[1].monitor = v11;
      sub_B0D840(&_4__this[1].monitor, v11);
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