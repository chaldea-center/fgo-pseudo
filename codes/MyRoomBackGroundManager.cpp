void __fastcall MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  this->fields.DISP_RECT = (struct UnityEngine_Rect_o)xmmword_B71DC0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager__ClearBackObject(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  struct MyRoomBackGroundManager_BackObject_o *v6; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *v12; // x20
  System_String_o *assetName; // x20

  if ( (byte_48DE0A7 & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v5);
    byte_48DE0A7 = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v6 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v6->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( v10 )
    {
      if ( !*p_backObject )
        goto LABEL_15;
      v12 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_68077844(v12, 0LL);
      if ( !*p_backObject )
LABEL_15:
        sub_1B00F28(v10, v11);
      assetName = (*p_backObject)->fields.assetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(assetName, 0LL);
    }
  }
  *p_backObject = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_backObject, 0, v2, v3);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w0

  if ( (byte_48DE0A9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_48DE0A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v4);
  }
  v5 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)Instance, 0LL);
  return v5 & ~(v5 >> 31);
}


System_String_o *__fastcall MyRoomBackGroundManager__GetBgImgName(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int32_t v7; // w0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  int v11; // w9
  Il2CppObject *v12; // x0
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_48DE0A8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B00CCC(&int_TypeInfo, v2);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1B00CCC(&StringLiteral_3098/*"Back/back{0}"*/, v4);
    byte_48DE0A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1B00F28(Instance, v6);
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v7 >= 1 )
    v11 = v7;
  else
    v11 = 10400;
  v14 = v11;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v8, v9, v10);
  return System_String__Format((System_String_o *)StringLiteral_3098/*"Back/back{0}"*/, v12, 0LL);
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
    sub_1B00F28(0LL, v3);
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
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48DE0AC & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo, callback);
    byte_48DE0AC = 1;
  }
  v5 = sub_1B00F18(MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48DE0AB & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo, callback);
    byte_48DE0AB = 1;
  }
  v5 = sub_1B00F18(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48DE0AD & 1) == 0 )
  {
    sub_1B00CCC(&MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo, callback);
    byte_48DE0AD = 1;
  }
  v5 = sub_1B00F18(MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
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
  UnityEngine_GameObject_o *ComponentsInChildren_object__47901228; // x0
  __int64 v8; // x1
  struct MyRoomBackGroundManager_BackObject_o *v9; // x8
  __int64 v10; // x2
  __int64 v11; // x3
  int klass; // w8
  UnityEngine_GameObject_o *v13; // x20
  unsigned int v14; // w22
  UnityEngine_GameObject_c **v15; // x8
  SimpleAnimation_o *v16; // x21
  struct MyRoomBackGroundManager_BackObject_o *v17; // x8
  int v18; // w8
  UnityEngine_GameObject_o *v19; // x19
  unsigned int v20; // w21
  UnityEngine_GameObject_c **v21; // x8
  UnityEngine_Animation_o *v22; // x20

  if ( (byte_48DE0AA & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___, method);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    byte_48DE0AA = 1;
  }
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__47901228 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          instanceObject,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__47901228 & 1) != 0 )
    {
      v9 = this->fields.backObject;
      if ( !v9 )
        goto LABEL_24;
      ComponentsInChildren_object__47901228 = v9->fields.instanceObject;
      if ( !ComponentsInChildren_object__47901228 )
        goto LABEL_24;
      ComponentsInChildren_object__47901228 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__47901228(
                                                                            ComponentsInChildren_object__47901228,
                                                                            (const MethodInfo_2DAEA2C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !ComponentsInChildren_object__47901228 )
        goto LABEL_24;
      klass = (int)ComponentsInChildren_object__47901228[1].klass;
      v13 = ComponentsInChildren_object__47901228;
      if ( klass >= 1 )
      {
        v14 = 0;
        while ( v14 < klass )
        {
          v15 = &v13->klass + (int)v14;
          v16 = (SimpleAnimation_o *)v15[4];
          if ( !v16 )
            goto LABEL_24;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v15[4], 0LL);
          ComponentsInChildren_object__47901228 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v16, 0LL);
          klass = (int)v13[1].klass;
          if ( (int)++v14 >= klass )
            goto LABEL_15;
        }
LABEL_25:
        sub_1B00F30(ComponentsInChildren_object__47901228, v8, v10, v11);
      }
LABEL_15:
      v17 = this->fields.backObject;
      if ( !v17
        || (ComponentsInChildren_object__47901228 = v17->fields.instanceObject) == 0LL
        || (ComponentsInChildren_object__47901228 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__47901228(
                                                                                  ComponentsInChildren_object__47901228,
                                                                                  (const MethodInfo_2DAEA2C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_24:
        sub_1B00F28(ComponentsInChildren_object__47901228, v8);
      }
      v18 = (int)ComponentsInChildren_object__47901228[1].klass;
      v19 = ComponentsInChildren_object__47901228;
      if ( v18 >= 1 )
      {
        v20 = 0;
        while ( v20 < v18 )
        {
          v21 = &v19->klass + (int)v20;
          v22 = (UnityEngine_Animation_o *)v21[4];
          if ( !v22 )
            goto LABEL_24;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v21[4], 0LL);
          ComponentsInChildren_object__47901228 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v22, 0LL);
          v18 = (int)v19[1].klass;
          if ( (int)++v20 >= v18 )
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
    sub_1B00F28(0LL, v4);
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
    sub_1B00F28(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomBackGroundManager_BackObject___ctor(
        MyRoomBackGroundManager_BackObject_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  struct System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_48DE0AE & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&id);
    sub_1B00CCC(&StringLiteral_9092/*"MyRoom/BackObject/{0}"*/, v5);
    byte_48DE0AE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v15 = id;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v6, v7, v8);
  v10 = System_String__Format((System_String_o *)StringLiteral_9092/*"MyRoom/BackObject/{0}"*/, v9, 0LL);
  this->fields.assetName = v10;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.assetName, (int32_t)v10, v11, v12);
  this->fields.instanceObject = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.instanceObject, 0, v13, v14);
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
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v12; // x20
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t loadType; // w8
  System_Action_o *v16; // x22
  const MethodInfo *v17; // x2
  System_Collections_IEnumerator_o *BackGround; // x0
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x2
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v22; // x21
  UnityEngine_WaitWhile_o *v23; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_48DE0B2 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&System_Func_bool__TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__, v5);
    sub_1B00CCC(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__, v6);
    sub_1B00CCC(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__, v7);
    sub_1B00CCC(&MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, v8);
    sub_1B00CCC(&UnityEngine_WaitWhile_TypeInfo, v9);
    byte_48DE0B2 = 1;
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
  v12 = sub_1B00F18(MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = 0,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL), !_4__this) )
  {
    sub_1B00F28(Instance, v14);
  }
  loadType = _4__this->fields.loadType;
  if ( (loadType & 1) != 0 )
  {
    ++*(_DWORD *)(v12 + 16);
    v16 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v12,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v16, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
    loadType = _4__this->fields.loadType;
  }
  if ( (loadType & 2) != 0 )
  {
    ++*(_DWORD *)(v12 + 16);
    v19 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v12,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v19, v20);
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v22 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v22,
    (Il2CppObject *)v12,
    Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__,
    0LL);
  v23 = (UnityEngine_WaitWhile_o *)sub_1B00F18(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v23, v22, 0LL);
  this->fields.__2__current = (Il2CppObject *)v23;
  p__2__current = &this->fields.__2__current;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v23, v25, v26);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x22
  __int64 v12; // x20
  UnityEngine_Component_o *backTexture; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct MyRoomBackGroundManager_o *v17; // x1
  System_Action_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  MyRoomBackGroundManager_o *v21; // x0
  const MethodInfo *v22; // x1
  System_String_o *BgImgName; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Action_o *v26; // x21
  System_Func_bool__o *v27; // x21
  UnityEngine_WaitWhile_o *v28; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v30; // w2
  int32_t v31; // w3
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_48DE0B1 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AtlasManager_TypeInfo, v3);
    sub_1B00CCC(&System_Func_bool__TypeInfo, v4);
    sub_1B00CCC(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__, v5);
    sub_1B00CCC(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__, v6);
    sub_1B00CCC(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__, v7);
    sub_1B00CCC(&MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, v8);
    sub_1B00CCC(&UnityEngine_WaitWhile_TypeInfo, v9);
    byte_48DE0B1 = 1;
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
  v12 = sub_1B00F18(MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_16;
  v17 = this->fields.__4__this;
  *(_QWORD *)(v12 + 24) = v17;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)v17, v15, v16);
  *(_BYTE *)(v12 + 16) = 1;
  v18 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v12,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v12 + 40) = v18;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 40), (int32_t)v18, v19, v20);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0LL),
        BgImgName = MyRoomBackGroundManager__GetBgImgName(v21, v22),
        *(_QWORD *)(v12 + 32) = BgImgName,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)BgImgName, v24, v25),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_16:
    sub_1B00F28(backTexture, v14);
  }
  UITexture__set_uvRect((UITexture_o *)backTexture, _4__this->fields.DISP_RECT, 0LL);
  v26 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v12,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v26, 0LL);
  v27 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v27,
    (Il2CppObject *)v12,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__,
    0LL);
  v28 = (UnityEngine_WaitWhile_o *)sub_1B00F18(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v28, v27, 0LL);
  this->fields.__2__current = (Il2CppObject *)v28;
  p__2__current = &this->fields.__2__current;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v28, v30, v31);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomBackGroundManager__LoadBackGround_d__21_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct MyRoomBackGroundManager_o *v15; // x1
  int32_t BackObjectId; // w0
  int32_t v17; // w22
  MyRoomBackGroundManager_BackObject_o *v18; // x23
  const MethodInfo *v19; // x2
  ServantStatusBattleListViewItem_o *p_backObject; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *namespaze; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x21
  AssetLoader_LoadEndDataHandler_o *v27; // x22
  struct System_Action_o *callback; // x8
  bool result; // w0
  System_Func_bool__o *v30; // x21
  UnityEngine_WaitWhile_o *v31; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v33; // w2
  int32_t v34; // w3

  v2 = this;
  if ( (byte_48DE0B3 & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    sub_1B00CCC(&MyRoomBackGroundManager_BackObject_TypeInfo, v3);
    sub_1B00CCC(&System_Func_bool__TypeInfo, v4);
    sub_1B00CCC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B00CCC(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__, v6);
    sub_1B00CCC(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__, v7);
    sub_1B00CCC(&MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, v8);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_1B00CCC(&UnityEngine_WaitWhile_TypeInfo, v9);
    byte_48DE0B3 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_22;
    MyRoomBackGroundManager__PlayForceBackObjectAnimation(_4__this, method);
    callback = v2->fields.callback;
    if ( callback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v12 = sub_1B00F18(MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_22;
  v15 = v2->fields.__4__this;
  *(_QWORD *)(v12 + 16) = v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v15, v13, v14);
  *(_BYTE *)(v12 + 24) = 0;
  if ( !_4__this )
    goto LABEL_22;
  BackObjectId = MyRoomBackGroundManager__GetBackObjectId((MyRoomBackGroundManager_o *)this, method);
  if ( BackObjectId >= 1 )
  {
    v17 = BackObjectId;
    v18 = (MyRoomBackGroundManager_BackObject_o *)sub_1B00F18(MyRoomBackGroundManager_BackObject_TypeInfo);
    MyRoomBackGroundManager_BackObject___ctor(v18, v17, v19);
    _4__this->fields.backObject = v18;
    p_backObject = (ServantStatusBattleListViewItem_o *)&_4__this->fields.backObject;
    sub_1B00C70(p_backObject, (int32_t)v18, v21, v22);
    if ( !p_backObject->klass )
      goto LABEL_22;
    namespaze = (System_String_o *)p_backObject->klass->_1.namespaze;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)AssetManager__isExistAssetStorage(namespaze, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      *(_BYTE *)(v12 + 24) = 1;
      if ( p_backObject->klass )
      {
        v26 = (System_String_o *)p_backObject->klass->_1.namespaze;
        v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1B00F18(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v27,
          (Il2CppObject *)v12,
          Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v26, v27, 1, 0LL);
        goto LABEL_21;
      }
LABEL_22:
      sub_1B00F28(this, method);
    }
    p_backObject->klass = 0LL;
    sub_1B00C70(p_backObject, 0, v24, v25);
  }
LABEL_21:
  v30 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v30,
    (Il2CppObject *)v12,
    Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__,
    0LL);
  v31 = (UnityEngine_WaitWhile_o *)sub_1B00F18(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v31, v30, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v31;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B00C70(p__2__current, (int32_t)v31, v33, v34);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_MyRoomBackGroundManager__LoadBackObject_d__22_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct MyRoomBackGroundManager_o *v14; // x8
  struct MyRoomBackGroundManager_o *v15; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v17; // x20
  int v18; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_48DE0AF & 1) == 0 )
  {
    sub_1B00CCC(&FSUtility_TypeInfo, method);
    sub_1B00CCC(&int_TypeInfo, v3);
    this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_1B00CCC(&StringLiteral_3098/*"Back/back{0}"*/, v4);
    byte_48DE0AF = 1;
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
  v18 = 10400;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v7, v8, v9);
  v11 = System_String__Format((System_String_o *)StringLiteral_3098/*"Back/back{0}"*/, v10, 0LL);
  v2->fields.imgName = v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.imgName, (int32_t)v11, v12, v13);
  v14 = v2->fields.__4__this;
  if ( !v14 || (this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)v14->fields.backTexture) == 0LL )
LABEL_13:
    sub_1B00F28(this, method);
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0LL);
LABEL_9:
  v15 = v2->fields.__4__this;
  if ( !v15 )
    goto LABEL_13;
  backTexture = v15->fields.backTexture;
  v17 = *p_imgName;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Object_object__47470892; // x20
  __int64 v9; // x1
  char *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  char *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct MyRoomBackGroundManager_o *v15; // x8

  if ( (byte_48DE0B0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_AssetData_GetObject_GameObject____74577936, assetData);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_9096/*"MyRoomBackObj"*/, v7);
    byte_48DE0B0 = 1;
  }
  if ( assetData )
  {
    Object_object__47470892 = AssetData__GetObject_object__47470892(
                                assetData,
                                (System_String_o *)StringLiteral_9096/*"MyRoomBackObj"*/,
                                (const MethodInfo_2D4592C *)Method_AssetData_GetObject_GameObject____74577936);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__47470892, 0LL, 0LL) )
    {
      _4__this = (char *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_15;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)_4__this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (char *)UnityEngine_Object__Instantiate_object__48061460(
                           Object_object__47470892,
                           transform,
                           (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
      if ( !_4__this
        || (v12 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
            (v15 = this->fields.__4__this) == 0LL)
        || (_4__this = (char *)v15->fields.backObject) == 0LL )
      {
LABEL_15:
        sub_1B00F28(_4__this, v9);
      }
      *((_QWORD *)_4__this + 4) = v12;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(_4__this + 32), (int32_t)v12, v13, v14);
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