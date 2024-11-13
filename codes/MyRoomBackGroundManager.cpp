void __fastcall MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  this->fields.DISP_RECT = (struct UnityEngine_Rect_o)xmmword_BD3C40;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager__ClearBackObject(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct MyRoomBackGroundManager_BackObject_o *v6; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  System_String_o *assetName; // x20

  if ( (byte_4B11553 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B11553 = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v6 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v6->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    v10 = UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( v10 )
    {
      if ( !*p_backObject )
        goto LABEL_15;
      v12 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      UnityEngine_Object__DestroyImmediate_70154432(v12, 0LL);
      if ( !*p_backObject )
LABEL_15:
        sub_1BCAA3C(v10, v11);
      assetName = (*p_backObject)->fields.assetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v11);
      AssetManager__releaseAssetStorage(assetName, 0LL);
    }
  }
  *p_backObject = 0LL;
  sub_1BCA784(p_backObject, 0LL);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w0

  if ( (byte_4B11555 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3, v4);
    byte_4B11555 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v6);
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)Instance, 0LL);
  return v7 & ~(v7 >> 31);
}


System_String_o *__fastcall MyRoomBackGroundManager__GetBgImgName(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  int32_t v11; // w0
  int v12; // w9
  Il2CppObject *v13; // x0
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B11554 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    sub_1BCA7E0(&StringLiteral_3156/*"Back/back{0}"*/, v7, v8);
    byte_4B11554 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v10);
  }
  v11 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v11 >= 1 )
    v12 = v11;
  else
    v12 = 10400;
  v15 = v12;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return System_String__Format((System_String_o *)StringLiteral_3156/*"Back/back{0}"*/, v13, 0LL);
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
    sub_1BCAA3C(0LL, v3);
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
  __int64 v3; // x3
  __int64 v6; // x21

  if ( (byte_4B11558 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo, callback, method);
    byte_4B11558 = 1;
  }
  v6 = sub_1BCAA2C(MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784(v6 + 32, this);
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCA784(v6 + 40, callback);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21

  if ( (byte_4B11557 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo, callback, method);
    byte_4B11557 = 1;
  }
  v6 = sub_1BCAA2C(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784(v6 + 32, this);
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCA784(v6 + 40, callback);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21

  if ( (byte_4B11559 & 1) == 0 )
  {
    sub_1BCA7E0(&MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo, callback, method);
    byte_4B11559 = 1;
  }
  v6 = sub_1BCAA2C(MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784(v6 + 32, this);
  *(_QWORD *)(v6 + 40) = callback;
  sub_1BCA784(v6 + 40, callback);
  return (System_Collections_IEnumerator_o *)v6;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__49689332; // x0
  __int64 v11; // x1
  struct MyRoomBackGroundManager_BackObject_o *v12; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v14; // x20
  unsigned int v15; // w22
  UnityEngine_GameObject_c **v16; // x8
  SimpleAnimation_o *v17; // x21
  struct MyRoomBackGroundManager_BackObject_o *v18; // x8
  int v19; // w8
  UnityEngine_GameObject_o *v20; // x19
  unsigned int v21; // w21
  UnityEngine_GameObject_c **v22; // x8
  UnityEngine_Animation_o *v23; // x20

  if ( (byte_4B11556 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B11556 = 1;
  }
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    ComponentsInChildren_object__49689332 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          instanceObject,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__49689332 & 1) != 0 )
    {
      v12 = this->fields.backObject;
      if ( !v12 )
        goto LABEL_24;
      ComponentsInChildren_object__49689332 = v12->fields.instanceObject;
      if ( !ComponentsInChildren_object__49689332 )
        goto LABEL_24;
      ComponentsInChildren_object__49689332 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                            ComponentsInChildren_object__49689332,
                                                                            (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !ComponentsInChildren_object__49689332 )
        goto LABEL_24;
      klass = (int)ComponentsInChildren_object__49689332[1].klass;
      v14 = ComponentsInChildren_object__49689332;
      if ( klass >= 1 )
      {
        v15 = 0;
        while ( v15 < klass )
        {
          v16 = &v14->klass + (int)v15;
          v17 = (SimpleAnimation_o *)v16[4];
          if ( !v17 )
            goto LABEL_24;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v16[4], 0LL);
          ComponentsInChildren_object__49689332 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v17, 0LL);
          klass = (int)v14[1].klass;
          if ( (int)++v15 >= klass )
            goto LABEL_15;
        }
LABEL_25:
        sub_1BCAA44(ComponentsInChildren_object__49689332, v11);
      }
LABEL_15:
      v18 = this->fields.backObject;
      if ( !v18
        || (ComponentsInChildren_object__49689332 = v18->fields.instanceObject) == 0LL
        || (ComponentsInChildren_object__49689332 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                                                                  ComponentsInChildren_object__49689332,
                                                                                  (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_24:
        sub_1BCAA3C(ComponentsInChildren_object__49689332, v11);
      }
      v19 = (int)ComponentsInChildren_object__49689332[1].klass;
      v20 = ComponentsInChildren_object__49689332;
      if ( v19 >= 1 )
      {
        v21 = 0;
        while ( v21 < v19 )
        {
          v22 = &v20->klass + (int)v21;
          v23 = (UnityEngine_Animation_o *)v22[4];
          if ( !v23 )
            goto LABEL_24;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v22[4], 0LL);
          ComponentsInChildren_object__49689332 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v23, 0LL);
          v19 = (int)v20[1].klass;
          if ( (int)++v21 >= v19 )
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
  __int64 v4; // x1

  MyRoomBackGroundManager__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomBackGroundManager_BackObject___ctor(
        MyRoomBackGroundManager_BackObject_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x0
  struct System_String_o *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1155A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&id, method);
    sub_1BCA7E0(&StringLiteral_9325/*"MyRoom/BackObject/{0}"*/, v5, v6);
    byte_4B1155A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v9 = id;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v8 = System_String__Format((System_String_o *)StringLiteral_9325/*"MyRoom/BackObject/{0}"*/, v7, 0LL);
  this->fields.assetName = v8;
  sub_1BCA784(&this->fields.assetName, v8);
  this->fields.instanceObject = 0LL;
  sub_1BCA784(&this->fields.instanceObject, 0LL);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v21; // x20
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  int32_t loadType; // w8
  System_Action_o *v27; // x22
  const MethodInfo *v28; // x2
  System_Collections_IEnumerator_o *BackGround; // x0
  System_Action_o *v30; // x22
  const MethodInfo *v31; // x2
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  UnityEngine_WaitWhile_o *v37; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4B1155E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__, v9, v10);
    sub_1BCA7E0(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__, v11, v12);
    sub_1BCA7E0(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__, v13, v14);
    sub_1BCA7E0(&MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v17, v18);
    byte_4B1155E = 1;
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
  v21 = sub_1BCAA2C(MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21
    || (*(_DWORD *)(v21 + 16) = 0,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL), !_4__this) )
  {
    sub_1BCAA3C(Instance, v23);
  }
  loadType = _4__this->fields.loadType;
  if ( (loadType & 1) != 0 )
  {
    ++*(_DWORD *)(v21 + 16);
    v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
    System_Action___ctor(
      v27,
      (Il2CppObject *)v21,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v27, v28);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
    loadType = _4__this->fields.loadType;
  }
  if ( (loadType & 2) != 0 )
  {
    ++*(_DWORD *)(v21 + 16);
    v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v24, v25);
    System_Action___ctor(
      v30,
      (Il2CppObject *)v21,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v30, v31);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v33 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v23, v24, v25);
  System_Func_bool____ctor(
    v33,
    (Il2CppObject *)v21,
    Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__,
    0LL);
  v37 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v34, v35, v36);
  UnityEngine_WaitWhile___ctor(v37, v33, 0LL);
  this->fields.__2__current = (Il2CppObject *)v37;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784(p__2__current, v37);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x22
  __int64 v21; // x20
  UnityEngine_Component_o *backTexture; // x0
  __int64 v23; // x1
  struct MyRoomBackGroundManager_o *v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x21
  MyRoomBackGroundManager_o *v29; // x0
  const MethodInfo *v30; // x1
  System_String_o *BgImgName; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Action_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Func_bool__o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  UnityEngine_WaitWhile_o *v44; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4B1155D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__, v9, v10);
    sub_1BCA7E0(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__, v11, v12);
    sub_1BCA7E0(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__, v13, v14);
    sub_1BCA7E0(&MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v17, v18);
    byte_4B1155D = 1;
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
  v21 = sub_1BCAA2C(MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_16;
  v24 = this->fields.__4__this;
  *(_QWORD *)(v21 + 24) = v24;
  sub_1BCA784(v21 + 24, v24);
  *(_BYTE *)(v21 + 16) = 1;
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v21,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v21 + 40) = v28;
  backTexture = (UnityEngine_Component_o *)sub_1BCA784(v21 + 40, v28);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0LL),
        BgImgName = MyRoomBackGroundManager__GetBgImgName(v29, v30),
        *(_QWORD *)(v21 + 32) = BgImgName,
        sub_1BCA784(v21 + 32, BgImgName),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(backTexture, v23);
  }
  UITexture__set_uvRect((UITexture_o *)backTexture, _4__this->fields.DISP_RECT, 0LL);
  v35 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v21,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v36);
  AtlasManager__LoadOutGameAtlas(v35, 0LL);
  v40 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v37, v38, v39);
  System_Func_bool____ctor(
    v40,
    (Il2CppObject *)v21,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__,
    0LL);
  v44 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v41, v42, v43);
  UnityEngine_WaitWhile___ctor(v44, v40, 0LL);
  this->fields.__2__current = (Il2CppObject *)v44;
  p__2__current = &this->fields.__2__current;
  sub_1BCA784(p__2__current, v44);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MyRoomBackGroundManager__LoadBackGround_d__21_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  MyRoomBackGroundManager__LoadBackObject_d__22_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v21; // x20
  struct MyRoomBackGroundManager_o *v22; // x1
  int32_t BackObjectId; // w0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  int32_t v27; // w22
  MyRoomBackGroundManager_BackObject_o *v28; // x23
  const MethodInfo *v29; // x2
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x21
  System_String_o *assetName; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  System_String_o *v34; // x21
  AssetLoader_LoadEndDataHandler_o *v35; // x22
  __int64 v36; // x1
  struct System_Action_o *callback; // x8
  bool result; // w0
  System_Func_bool__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  UnityEngine_WaitWhile_o *v43; // x20
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_4B1155F & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&MyRoomBackGroundManager_BackObject_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__, v11, v12);
    sub_1BCA7E0(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__, v13, v14);
    sub_1BCA7E0(&MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, v15, v16);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_1BCA7E0(&UnityEngine_WaitWhile_TypeInfo, v17, v18);
    byte_4B1155F = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    MyRoomBackGroundManager__PlayForceBackObjectAnimation(_4__this, method);
    callback = v4->fields.callback;
    if ( callback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  v21 = sub_1BCAA2C(MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_22;
  v22 = v4->fields.__4__this;
  *(_QWORD *)(v21 + 16) = v22;
  this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_1BCA784(v21 + 16, v22);
  *(_BYTE *)(v21 + 24) = 0;
  if ( !_4__this )
    goto LABEL_22;
  BackObjectId = MyRoomBackGroundManager__GetBackObjectId((MyRoomBackGroundManager_o *)this, method);
  if ( BackObjectId >= 1 )
  {
    v27 = BackObjectId;
    v28 = (MyRoomBackGroundManager_BackObject_o *)sub_1BCAA2C(
                                                    MyRoomBackGroundManager_BackObject_TypeInfo,
                                                    v24,
                                                    v25,
                                                    v26);
    MyRoomBackGroundManager_BackObject___ctor(v28, v27, v29);
    _4__this->fields.backObject = v28;
    p_backObject = &_4__this->fields.backObject;
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_1BCA784(p_backObject, v28);
    if ( !*p_backObject )
      goto LABEL_22;
    assetName = (*p_backObject)->fields.assetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)AssetManager__isExistAssetStorage(assetName, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      *(_BYTE *)(v21 + 24) = 1;
      if ( *p_backObject )
      {
        v34 = (*p_backObject)->fields.assetName;
        v35 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, method, v32, v33);
        AssetLoader_LoadEndDataHandler___ctor(
          v35,
          (Il2CppObject *)v21,
          Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36);
        AssetManager__loadAssetStorage(v34, v35, 1, 0LL);
        goto LABEL_21;
      }
LABEL_22:
      sub_1BCAA3C(this, method);
    }
    *p_backObject = 0LL;
    sub_1BCA784(p_backObject, 0LL);
  }
LABEL_21:
  v39 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v24, v25, v26);
  System_Func_bool____ctor(
    v39,
    (Il2CppObject *)v21,
    Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__,
    0LL);
  v43 = (UnityEngine_WaitWhile_o *)sub_1BCAA2C(UnityEngine_WaitWhile_TypeInfo, v40, v41, v42);
  UnityEngine_WaitWhile___ctor(v43, v39, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v43;
  p__2__current = &v4->fields.__2__current;
  sub_1BCA784(p__2__current, v43);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_MyRoomBackGroundManager__LoadBackObject_d__22_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  MyRoomBackGroundManager___c__DisplayClass21_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct MyRoomBackGroundManager_o *_4__this; // x8
  System_String_o **p_imgName; // x20
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  struct MyRoomBackGroundManager_o *v12; // x8
  struct MyRoomBackGroundManager_o *v13; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v15; // x20
  int v16; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_4B1155B & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_1BCA7E0(&StringLiteral_3156/*"Back/back{0}"*/, v6, v7);
    byte_4B1155B = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)_4__this->fields.backTexture;
  if ( !this )
    goto LABEL_13;
  p_imgName = &v3->fields.imgName;
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v3->fields.imgName,
                                                              v3->fields.callbackEndWait,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_9;
  v16 = 10400;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v11 = System_String__Format((System_String_o *)StringLiteral_3156/*"Back/back{0}"*/, v10, 0LL);
  v3->fields.imgName = v11;
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_1BCA784(&v3->fields.imgName, v11);
  v12 = v3->fields.__4__this;
  if ( !v12 || (this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)v12->fields.backTexture) == 0LL )
LABEL_13:
    sub_1BCAA3C(this, method);
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v3->fields.imgName,
                                                              v3->fields.callbackEndWait,
                                                              0LL);
LABEL_9:
  v13 = v3->fields.__4__this;
  if ( !v13 )
    goto LABEL_13;
  backTexture = v13->fields.backTexture;
  v15 = *p_imgName;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  FSUtility__SetUpBackTextureSize(backTexture, v15, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  Il2CppObject *Object_object__49237568; // x20
  __int64 v13; // x1
  UnityEngine_Component_o *_4__this; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v17; // x20
  struct MyRoomBackGroundManager_o *v18; // x8

  if ( (byte_4B1155C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_9330/*"MyRoomBackObj"*/, v9, v10);
    byte_4B1155C = 1;
  }
  if ( assetData )
  {
    Object_object__49237568 = AssetData__GetObject_object__49237568(
                                assetData,
                                (System_String_o *)StringLiteral_9330/*"MyRoomBackObj"*/,
                                (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49237568, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_15;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49903816(
                                              Object_object__49237568,
                                              transform,
                                              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      if ( !_4__this
        || (v17 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
            (v18 = this->fields.__4__this) == 0LL)
        || (_4__this = (UnityEngine_Component_o *)v18->fields.backObject) == 0LL )
      {
LABEL_15:
        sub_1BCAA3C(_4__this, v13);
      }
      _4__this[1].monitor = v17;
      sub_1BCA784(&_4__this[1].monitor, v17);
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