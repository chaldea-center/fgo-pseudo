void __fastcall MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  this->fields.DISP_RECT = (struct UnityEngine_Rect_o)xmmword_BA4210;
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

  if ( (byte_49F7974 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F7974 = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v4 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v4->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( v8 )
    {
      if ( !*p_backObject )
        goto LABEL_15;
      v9 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69127924(v9, 0LL);
      if ( !*p_backObject )
LABEL_15:
        sub_1B64324(v8);
      assetName = (*p_backObject)->fields.assetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(assetName, 0LL);
    }
  }
  *p_backObject = 0LL;
  sub_1B6406C(p_backObject);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  int32_t v4; // w0

  if ( (byte_49F7976 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_49F7976 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  v4 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)Instance, 0LL);
  return v4 & ~(v4 >> 31);
}


System_String_o *__fastcall MyRoomBackGroundManager__GetBgImgName(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  int32_t v6; // w0
  int v7; // w9
  Il2CppObject *v8; // x0
  int v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_49F7975 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B640C8(&int_TypeInfo, v2);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_3114/*"Back/back{0}"*/, v4);
    byte_49F7975 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  v6 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v6 >= 1 )
    v7 = v6;
  else
    v7 = 10400;
  v10 = v7;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format((System_String_o *)StringLiteral_3114/*"Back/back{0}"*/, v8, 0LL);
}


void __fastcall MyRoomBackGroundManager__Init(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  ExUITexture_o *backTexture; // x0
  const MethodInfo *v4; // x1

  this->fields.loadType = 0;
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)this, 0LL);
  backTexture = this->fields.backTexture;
  if ( !backTexture )
    sub_1B64324(0LL);
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
  __int64 v5; // x21

  if ( (byte_49F7979 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo, callback);
    byte_49F7979 = 1;
  }
  v5 = sub_1B64314(MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C(v5 + 32);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B6406C(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_49F7978 & 1) == 0 )
  {
    sub_1B640C8(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo, callback);
    byte_49F7978 = 1;
  }
  v5 = sub_1B64314(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C(v5 + 32);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B6406C(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_49F797A & 1) == 0 )
  {
    sub_1B640C8(&MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo, callback);
    byte_49F797A = 1;
  }
  v5 = sub_1B64314(MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo, callback, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C(v5 + 32);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B6406C(v5 + 40);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__48794364; // x0
  struct MyRoomBackGroundManager_BackObject_o *v8; // x8
  __int64 v9; // x1
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

  if ( (byte_49F7977 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49F7977 = 1;
  }
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__48794364 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          instanceObject,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__48794364 & 1) != 0 )
    {
      v8 = this->fields.backObject;
      if ( !v8 )
        goto LABEL_24;
      ComponentsInChildren_object__48794364 = v8->fields.instanceObject;
      if ( !ComponentsInChildren_object__48794364 )
        goto LABEL_24;
      ComponentsInChildren_object__48794364 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                                            ComponentsInChildren_object__48794364,
                                                                            (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !ComponentsInChildren_object__48794364 )
        goto LABEL_24;
      klass = (int)ComponentsInChildren_object__48794364[1].klass;
      v11 = ComponentsInChildren_object__48794364;
      if ( klass >= 1 )
      {
        v12 = 0;
        while ( v12 < klass )
        {
          v13 = &v11->klass + (int)v12;
          v14 = (SimpleAnimation_o *)v13[4];
          if ( !v14 )
            goto LABEL_24;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v13[4], 0LL);
          ComponentsInChildren_object__48794364 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v14, 0LL);
          klass = (int)v11[1].klass;
          if ( (int)++v12 >= klass )
            goto LABEL_15;
        }
LABEL_25:
        sub_1B6432C(ComponentsInChildren_object__48794364, v9);
      }
LABEL_15:
      v15 = this->fields.backObject;
      if ( !v15
        || (ComponentsInChildren_object__48794364 = v15->fields.instanceObject) == 0LL
        || (ComponentsInChildren_object__48794364 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                                                                  ComponentsInChildren_object__48794364,
                                                                                  (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_24:
        sub_1B64324(ComponentsInChildren_object__48794364);
      }
      v16 = (int)ComponentsInChildren_object__48794364[1].klass;
      v17 = ComponentsInChildren_object__48794364;
      if ( v16 >= 1 )
      {
        v18 = 0;
        while ( v18 < v16 )
        {
          v19 = &v17->klass + (int)v18;
          v20 = (UnityEngine_Animation_o *)v19[4];
          if ( !v20 )
            goto LABEL_24;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v19[4], 0LL);
          ComponentsInChildren_object__48794364 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v20, 0LL);
          v16 = (int)v17[1].klass;
          if ( (int)++v18 >= v16 )
            return;
        }
        goto LABEL_25;
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomBackGroundManager_BackObject___ctor(
        MyRoomBackGroundManager_BackObject_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F797B & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&id);
    sub_1B640C8(&StringLiteral_9153/*"MyRoom/BackObject/{0}"*/, v5);
    byte_49F797B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v7 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  this->fields.assetName = System_String__Format((System_String_o *)StringLiteral_9153/*"MyRoom/BackObject/{0}"*/, v6, 0LL);
  sub_1B6406C(&this->fields.assetName);
  this->fields.instanceObject = 0LL;
  sub_1B6406C(&this->fields.instanceObject);
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
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v13; // x20
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t loadType; // w8
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x2
  System_Collections_IEnumerator_o *BackGround; // x0
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x2
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_WaitWhile_o *v27; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_49F797F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&System_Func_bool__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B640C8(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__, v6);
    sub_1B640C8(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__, v7);
    sub_1B640C8(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__, v8);
    sub_1B640C8(&MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_WaitWhile_TypeInfo, v10);
    byte_49F797F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( callback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v13 = sub_1B64314(MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13
    || (*(_DWORD *)(v13 + 16) = 0,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL), !_4__this) )
  {
    sub_1B64324(Instance);
  }
  loadType = _4__this->fields.loadType;
  if ( (loadType & 1) != 0 )
  {
    ++*(_DWORD *)(v13 + 16);
    v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(
      v18,
      (Il2CppObject *)v13,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v18, v19);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
    loadType = _4__this->fields.loadType;
  }
  if ( (loadType & 2) != 0 )
  {
    ++*(_DWORD *)(v13 + 16);
    v21 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(
      v21,
      (Il2CppObject *)v13,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v21, v22);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v24 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v15, v16);
  System_Func_bool____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__,
    0LL);
  v27 = (UnityEngine_WaitWhile_o *)sub_1B64314(UnityEngine_WaitWhile_TypeInfo, v25, v26);
  UnityEngine_WaitWhile___ctor(v27, v24, 0LL);
  this->fields.__2__current = (Il2CppObject *)v27;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x22
  __int64 v13; // x20
  UnityEngine_Component_o *backTexture; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Action_o *v17; // x21
  MyRoomBackGroundManager_o *v18; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_o *v22; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Func_bool__o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_WaitWhile_o *v28; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_49F797E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AtlasManager_TypeInfo, v4);
    sub_1B640C8(&System_Func_bool__TypeInfo, v5);
    sub_1B640C8(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__, v6);
    sub_1B640C8(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__, v7);
    sub_1B640C8(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__, v8);
    sub_1B640C8(&MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_WaitWhile_TypeInfo, v10);
    byte_49F797E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( callback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v13 = sub_1B64314(MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_16;
  *(_QWORD *)(v13 + 24) = this->fields.__4__this;
  sub_1B6406C(v13 + 24);
  *(_BYTE *)(v13 + 16) = 1;
  v17 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v13,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v13 + 40) = v17;
  backTexture = (UnityEngine_Component_o *)sub_1B6406C(v13 + 40);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0LL),
        *(_QWORD *)(v13 + 32) = MyRoomBackGroundManager__GetBgImgName(v18, v19),
        sub_1B6406C(v13 + 32),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_16:
    sub_1B64324(backTexture);
  }
  UITexture__set_uvRect((UITexture_o *)backTexture, _4__this->fields.DISP_RECT, 0LL);
  v22 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v20, v21);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v13,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v22, 0LL);
  v25 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v23, v24);
  System_Func_bool____ctor(
    v25,
    (Il2CppObject *)v13,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__,
    0LL);
  v28 = (UnityEngine_WaitWhile_o *)sub_1B64314(UnityEngine_WaitWhile_TypeInfo, v26, v27);
  UnityEngine_WaitWhile___ctor(v28, v25, 0LL);
  this->fields.__2__current = (Il2CppObject *)v28;
  p__2__current = &this->fields.__2__current;
  sub_1B6406C(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MyRoomBackGroundManager__LoadBackGround_d__21_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v13; // x20
  const MethodInfo *v14; // x1
  int32_t BackObjectId; // w0
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t v18; // w22
  MyRoomBackGroundManager_BackObject_o *v19; // x23
  const MethodInfo *v20; // x2
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x21
  System_String_o *assetName; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *v25; // x21
  AssetLoader_LoadEndDataHandler_o *v26; // x22
  struct System_Action_o *callback; // x8
  bool result; // w0
  System_Func_bool__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_WaitWhile_o *v32; // x20
  Il2CppObject **p__2__current; // x19

  v3 = this;
  if ( (byte_49F7980 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&MyRoomBackGroundManager_BackObject_TypeInfo, v4);
    sub_1B640C8(&System_Func_bool__TypeInfo, v5);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1B640C8(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__, v7);
    sub_1B640C8(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__, v8);
    sub_1B640C8(&MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, v9);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_1B640C8(&UnityEngine_WaitWhile_TypeInfo, v10);
    byte_49F7980 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    MyRoomBackGroundManager__PlayForceBackObjectAnimation(_4__this, method);
    callback = v3->fields.callback;
    if ( callback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  v13 = sub_1B64314(MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_22;
  *(_QWORD *)(v13 + 16) = v3->fields.__4__this;
  this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_1B6406C(v13 + 16);
  *(_BYTE *)(v13 + 24) = 0;
  if ( !_4__this )
    goto LABEL_22;
  BackObjectId = MyRoomBackGroundManager__GetBackObjectId((MyRoomBackGroundManager_o *)this, v14);
  if ( BackObjectId >= 1 )
  {
    v18 = BackObjectId;
    v19 = (MyRoomBackGroundManager_BackObject_o *)sub_1B64314(MyRoomBackGroundManager_BackObject_TypeInfo, v16, v17);
    MyRoomBackGroundManager_BackObject___ctor(v19, v18, v20);
    _4__this->fields.backObject = v19;
    p_backObject = &_4__this->fields.backObject;
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_1B6406C(p_backObject);
    if ( !*p_backObject )
      goto LABEL_22;
    assetName = (*p_backObject)->fields.assetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)AssetManager__isExistAssetStorage(assetName, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      *(_BYTE *)(v13 + 24) = 1;
      if ( *p_backObject )
      {
        v25 = (*p_backObject)->fields.assetName;
        v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24);
        AssetLoader_LoadEndDataHandler___ctor(
          v26,
          (Il2CppObject *)v13,
          Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v25, v26, 1, 0LL);
        goto LABEL_21;
      }
LABEL_22:
      sub_1B64324(this);
    }
    *p_backObject = 0LL;
    sub_1B6406C(p_backObject);
  }
LABEL_21:
  v29 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v16, v17);
  System_Func_bool____ctor(
    v29,
    (Il2CppObject *)v13,
    Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__,
    0LL);
  v32 = (UnityEngine_WaitWhile_o *)sub_1B64314(UnityEngine_WaitWhile_TypeInfo, v30, v31);
  UnityEngine_WaitWhile___ctor(v32, v29, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v32;
  p__2__current = &v3->fields.__2__current;
  sub_1B6406C(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_MyRoomBackGroundManager__LoadBackObject_d__22_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  struct MyRoomBackGroundManager_o *v8; // x8
  struct MyRoomBackGroundManager_o *v9; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v11; // x20
  int v12; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_49F797C & 1) == 0 )
  {
    sub_1B640C8(&FSUtility_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_1B640C8(&StringLiteral_3114/*"Back/back{0}"*/, v4);
    byte_49F797C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)_4__this->fields.backTexture;
  if ( !this )
    goto LABEL_13;
  p_imgName = &v2->fields.imgName;
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_9;
  v12 = 10400;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v2->fields.imgName = System_String__Format((System_String_o *)StringLiteral_3114/*"Back/back{0}"*/, v7, 0LL);
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_1B6406C(&v2->fields.imgName);
  v8 = v2->fields.__4__this;
  if ( !v8 || (this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)v8->fields.backTexture) == 0LL )
LABEL_13:
    sub_1B64324(this);
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0LL);
LABEL_9:
  v9 = v2->fields.__4__this;
  if ( !v9 )
    goto LABEL_13;
  backTexture = v9->fields.backTexture;
  v11 = *p_imgName;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(backTexture, v11, 0LL);
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
  Il2CppObject *Object_object__48347676; // x20
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v11; // x20
  struct MyRoomBackGroundManager_o *v12; // x8

  if ( (byte_49F797D & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, assetData);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_9157/*"MyRoomBackObj"*/, v7);
    byte_49F797D = 1;
  }
  if ( assetData )
  {
    Object_object__48347676 = AssetData__GetObject_object__48347676(
                                assetData,
                                (System_String_o *)StringLiteral_9157/*"MyRoomBackObj"*/,
                                (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48347676, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_15;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49003980(
                                              Object_object__48347676,
                                              transform,
                                              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
      if ( !_4__this
        || (v11 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
            (v12 = this->fields.__4__this) == 0LL)
        || (_4__this = (UnityEngine_Component_o *)v12->fields.backObject) == 0LL )
      {
LABEL_15:
        sub_1B64324(_4__this);
      }
      _4__this[1].monitor = v11;
      sub_1B6406C(&_4__this[1].monitor);
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