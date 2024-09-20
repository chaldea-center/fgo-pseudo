void __fastcall MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  this->fields.DISP_RECT = (struct UnityEngine_Rect_o)xmmword_BB5A40;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager__ClearBackObject(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  struct MyRoomBackGroundManager_BackObject_o *v3; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  System_String_o *assetName; // x20

  if ( (byte_4A56631 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56631 = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v3 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v3->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( v7 )
    {
      if ( !*p_backObject )
        goto LABEL_15;
      v9 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69459568(v9, 0LL);
      if ( !*p_backObject )
LABEL_15:
        sub_1B8880C(v7, v8);
      assetName = (*p_backObject)->fields.assetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(assetName, 0LL);
    }
  }
  *p_backObject = 0LL;
  sub_1B88554(p_backObject, 0LL);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  int32_t v4; // w0

  if ( (byte_4A56633 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A56633 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v3);
  }
  v4 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)Instance, 0LL);
  return v4 & ~(v4 >> 31);
}


System_String_o *__fastcall MyRoomBackGroundManager__GetBgImgName(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  int32_t v4; // w0
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  int v8; // w9
  Il2CppObject *v9; // x0
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A56632 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3133/*"Back/back{0}"*/);
    byte_4A56632 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v3);
  }
  v4 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v4 >= 1 )
    v8 = v4;
  else
    v8 = 10400;
  v11 = v8;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_3133/*"Back/back{0}"*/, v9, 0LL);
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
    sub_1B8880C(0LL, v3);
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

  if ( (byte_4A56636 & 1) == 0 )
  {
    sub_1B885B0(&MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo);
    byte_4A56636 = 1;
  }
  v5 = sub_1B887FC(MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B88554(v5 + 40, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4A56635 & 1) == 0 )
  {
    sub_1B885B0(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo);
    byte_4A56635 = 1;
  }
  v5 = sub_1B887FC(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B88554(v5 + 40, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4A56637 & 1) == 0 )
  {
    sub_1B885B0(&MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo);
    byte_4A56637 = 1;
  }
  v5 = sub_1B887FC(MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B88554(v5 + 40, callback);
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
  UnityEngine_GameObject_o *ComponentsInChildren_object__49085148; // x0
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

  if ( (byte_4A56634 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56634 = 1;
  }
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__49085148 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          instanceObject,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__49085148 & 1) != 0 )
    {
      v7 = this->fields.backObject;
      if ( !v7 )
        goto LABEL_24;
      ComponentsInChildren_object__49085148 = v7->fields.instanceObject;
      if ( !ComponentsInChildren_object__49085148 )
        goto LABEL_24;
      ComponentsInChildren_object__49085148 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                            ComponentsInChildren_object__49085148,
                                                                            (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !ComponentsInChildren_object__49085148 )
        goto LABEL_24;
      klass = (int)ComponentsInChildren_object__49085148[1].klass;
      v9 = ComponentsInChildren_object__49085148;
      if ( klass >= 1 )
      {
        v10 = 0;
        while ( v10 < klass )
        {
          v11 = &v9->klass + (int)v10;
          v12 = (SimpleAnimation_o *)v11[4];
          if ( !v12 )
            goto LABEL_24;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v11[4], 0LL);
          ComponentsInChildren_object__49085148 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v12, 0LL);
          klass = (int)v9[1].klass;
          if ( (int)++v10 >= klass )
            goto LABEL_15;
        }
LABEL_25:
        sub_1B88814(ComponentsInChildren_object__49085148, v6);
      }
LABEL_15:
      v13 = this->fields.backObject;
      if ( !v13
        || (ComponentsInChildren_object__49085148 = v13->fields.instanceObject) == 0LL
        || (ComponentsInChildren_object__49085148 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                                  ComponentsInChildren_object__49085148,
                                                                                  (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_24:
        sub_1B8880C(ComponentsInChildren_object__49085148, v6);
      }
      v14 = (int)ComponentsInChildren_object__49085148[1].klass;
      v15 = ComponentsInChildren_object__49085148;
      if ( v14 >= 1 )
      {
        v16 = 0;
        while ( v16 < v14 )
        {
          v17 = &v15->klass + (int)v16;
          v18 = (UnityEngine_Animation_o *)v17[4];
          if ( !v18 )
            goto LABEL_24;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v17[4], 0LL);
          ComponentsInChildren_object__49085148 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v18, 0LL);
          v14 = (int)v15[1].klass;
          if ( (int)++v16 >= v14 )
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
    sub_1B8880C(0LL, v4);
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
    sub_1B8880C(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
}


void __fastcall MyRoomBackGroundManager_BackObject___ctor(
        MyRoomBackGroundManager_BackObject_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x0
  struct System_String_o *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A56638 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_9195/*"MyRoom/BackObject/{0}"*/);
    byte_4A56638 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v10 = id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v5, v6, v7);
  v9 = System_String__Format((System_String_o *)StringLiteral_9195/*"MyRoom/BackObject/{0}"*/, v8, 0LL);
  this->fields.assetName = v9;
  sub_1B88554(&this->fields.assetName, v9);
  this->fields.instanceObject = 0LL;
  sub_1B88554(&this->fields.instanceObject, 0LL);
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
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t loadType; // w8
  System_Action_o *v9; // x22
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *BackGround; // x0
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x2
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v15; // x21
  UnityEngine_WaitWhile_o *v16; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4A5663C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__);
    sub_1B885B0(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__);
    sub_1B885B0(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__);
    sub_1B885B0(&MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitWhile_TypeInfo);
    byte_4A5663C = 1;
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
  v5 = sub_1B887FC(MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = 0,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL), !_4__this) )
  {
    sub_1B8880C(Instance, v7);
  }
  loadType = _4__this->fields.loadType;
  if ( (loadType & 1) != 0 )
  {
    ++*(_DWORD *)(v5 + 16);
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
    loadType = _4__this->fields.loadType;
  }
  if ( (loadType & 2) != 0 )
  {
    ++*(_DWORD *)(v5 + 16);
    v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v12, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v15 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__,
    0LL);
  v16 = (UnityEngine_WaitWhile_o *)sub_1B887FC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v16, v15, 0LL);
  this->fields.__2__current = (Il2CppObject *)v16;
  p__2__current = &this->fields.__2__current;
  sub_1B88554(p__2__current, v16);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  struct MyRoomBackGroundManager_o *_4__this; // x22
  __int64 v5; // x20
  UnityEngine_Component_o *backTexture; // x0
  __int64 v7; // x1
  struct MyRoomBackGroundManager_o *v8; // x1
  System_Action_o *v9; // x21
  MyRoomBackGroundManager_o *v10; // x0
  const MethodInfo *v11; // x1
  System_String_o *BgImgName; // x0
  System_Action_o *v13; // x21
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitWhile_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4A5663B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__);
    sub_1B885B0(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__);
    sub_1B885B0(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__);
    sub_1B885B0(&MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitWhile_TypeInfo);
    byte_4A5663B = 1;
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
  v5 = sub_1B887FC(MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  v8 = this->fields.__4__this;
  *(_QWORD *)(v5 + 24) = v8;
  sub_1B88554(v5 + 24, v8);
  *(_BYTE *)(v5 + 16) = 1;
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v5 + 40) = v9;
  backTexture = (UnityEngine_Component_o *)sub_1B88554(v5 + 40, v9);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0LL),
        BgImgName = MyRoomBackGroundManager__GetBgImgName(v10, v11),
        *(_QWORD *)(v5 + 32) = BgImgName,
        sub_1B88554(v5 + 32, BgImgName),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_16:
    sub_1B8880C(backTexture, v7);
  }
  UITexture__set_uvRect((UITexture_o *)backTexture, _4__this->fields.DISP_RECT, 0LL);
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v13, 0LL);
  v14 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__,
    0LL);
  v15 = (UnityEngine_WaitWhile_o *)sub_1B887FC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v15, v14, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1B88554(p__2__current, v15);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_MyRoomBackGroundManager__LoadBackGround_d__21_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  struct MyRoomBackGroundManager_o *v6; // x1
  int32_t BackObjectId; // w0
  int32_t v8; // w22
  MyRoomBackGroundManager_BackObject_o *v9; // x23
  const MethodInfo *v10; // x2
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x21
  System_String_o *assetName; // x22
  System_String_o *v13; // x21
  AssetLoader_LoadEndDataHandler_o *v14; // x22
  struct System_Action_o *callback; // x8
  bool result; // w0
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitWhile_o *v18; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4A5663D & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&MyRoomBackGroundManager_BackObject_TypeInfo);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__);
    sub_1B885B0(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__);
    sub_1B885B0(&MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_1B885B0(&UnityEngine_WaitWhile_TypeInfo);
    byte_4A5663D = 1;
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
  v5 = sub_1B887FC(MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  v6 = v2->fields.__4__this;
  *(_QWORD *)(v5 + 16) = v6;
  this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_1B88554(v5 + 16, v6);
  *(_BYTE *)(v5 + 24) = 0;
  if ( !_4__this )
    goto LABEL_22;
  BackObjectId = MyRoomBackGroundManager__GetBackObjectId((MyRoomBackGroundManager_o *)this, method);
  if ( BackObjectId >= 1 )
  {
    v8 = BackObjectId;
    v9 = (MyRoomBackGroundManager_BackObject_o *)sub_1B887FC(MyRoomBackGroundManager_BackObject_TypeInfo);
    MyRoomBackGroundManager_BackObject___ctor(v9, v8, v10);
    _4__this->fields.backObject = v9;
    p_backObject = &_4__this->fields.backObject;
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_1B88554(p_backObject, v9);
    if ( !*p_backObject )
      goto LABEL_22;
    assetName = (*p_backObject)->fields.assetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)AssetManager__isExistAssetStorage(assetName, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      *(_BYTE *)(v5 + 24) = 1;
      if ( *p_backObject )
      {
        v13 = (*p_backObject)->fields.assetName;
        v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v14,
          (Il2CppObject *)v5,
          Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v13, v14, 1, 0LL);
        goto LABEL_21;
      }
LABEL_22:
      sub_1B8880C(this, method);
    }
    *p_backObject = 0LL;
    sub_1B88554(p_backObject, 0LL);
  }
LABEL_21:
  v17 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__,
    0LL);
  v18 = (UnityEngine_WaitWhile_o *)sub_1B887FC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v18, v17, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v18;
  p__2__current = &v2->fields.__2__current;
  sub_1B88554(p__2__current, v18);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_MyRoomBackGroundManager__LoadBackObject_d__22_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  __int64 v6; // x3
  __int64 v7; // x4
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  struct MyRoomBackGroundManager_o *v10; // x8
  struct MyRoomBackGroundManager_o *v11; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v13; // x20
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4A56639 & 1) == 0 )
  {
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_1B885B0(&StringLiteral_3133/*"Back/back{0}"*/);
    byte_4A56639 = 1;
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
  v14 = 10400;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v5, v6, v7);
  v9 = System_String__Format((System_String_o *)StringLiteral_3133/*"Back/back{0}"*/, v8, 0LL);
  v2->fields.imgName = v9;
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_1B88554(&v2->fields.imgName, v9);
  v10 = v2->fields.__4__this;
  if ( !v10 || (this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)v10->fields.backTexture) == 0LL )
LABEL_13:
    sub_1B8880C(this, method);
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0LL);
LABEL_9:
  v11 = v2->fields.__4__this;
  if ( !v11 )
    goto LABEL_13;
  backTexture = v11->fields.backTexture;
  v13 = *p_imgName;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(backTexture, v13, 0LL);
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
  Il2CppObject *Object_object__48635516; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v9; // x20
  struct MyRoomBackGroundManager_o *v10; // x8

  if ( (byte_4A5663A & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_9199/*"MyRoomBackObj"*/);
    byte_4A5663A = 1;
  }
  if ( assetData )
  {
    Object_object__48635516 = AssetData__GetObject_object__48635516(
                                assetData,
                                (System_String_o *)StringLiteral_9199/*"MyRoomBackObj"*/,
                                (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__48635516, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_15;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__49297800(
                                              Object_object__48635516,
                                              transform,
                                              (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
      if ( !_4__this
        || (v9 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
            (v10 = this->fields.__4__this) == 0LL)
        || (_4__this = (UnityEngine_Component_o *)v10->fields.backObject) == 0LL )
      {
LABEL_15:
        sub_1B8880C(_4__this, v6);
      }
      _4__this[1].monitor = v9;
      sub_1B88554(&_4__this[1].monitor, v9);
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