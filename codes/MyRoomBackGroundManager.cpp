void __fastcall MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  this->fields.DISP_RECT = (struct UnityEngine_Rect_o)xmmword_BFF560;
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

  if ( (byte_4BD7790 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD7790 = 1;
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
      UnityEngine_Object__DestroyImmediate_70869800(v9, 0LL);
      if ( !*p_backObject )
LABEL_15:
        sub_1C22094(v7, v8);
      assetName = (*p_backObject)->fields.assetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(assetName, 0LL);
    }
  }
  *p_backObject = 0LL;
  sub_1C21DDC(p_backObject, 0LL);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectAnimationNum(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD7795 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7795 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v3);
  }
  return MyRoomAddMaster__GetBackObjAnimationNum((MyRoomAddMaster_o *)Instance, 0LL);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  int32_t v4; // w0

  if ( (byte_4BD7792 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7792 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v3);
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

  if ( (byte_4BD7791 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_3179/*"Back/back{0}"*/);
    byte_4BD7791 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v3);
  }
  v4 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)Instance, 0LL);
  if ( v4 >= 1 )
    v8 = v4;
  else
    v8 = 10400;
  v11 = v8;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_3179/*"Back/back{0}"*/, v9, 0LL);
}


int64_t __fastcall MyRoomBackGroundManager__GetScheduleUpdateAt(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  int64_t v4; // x0

  if ( (byte_4BD7794 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7794 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v3);
  }
  v4 = MyRoomAddMaster__GetChangeMyRoomGetScheduleUpdateAt((MyRoomAddMaster_o *)Instance, 0LL);
  return v4 & ~(v4 >> 63);
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
    sub_1C22094(0LL, v3);
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

  if ( (byte_4BD7798 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
    byte_4BD7798 = 1;
  }
  v5 = sub_1C22084(MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C21DDC(v5 + 40, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4BD7797 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
    byte_4BD7797 = 1;
  }
  v5 = sub_1C22084(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C21DDC(v5 + 40, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4BD7799 & 1) == 0 )
  {
    sub_1C21E38(&MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
    byte_4BD7799 = 1;
  }
  v5 = sub_1C22084(MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C21DDC(v5 + 40, callback);
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
  UnityEngine_GameObject_o *ComponentsInChildren_object__50336088; // x0
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
  MyRoomBackGroundManager_o *v19; // x0
  const MethodInfo *v20; // x1
  MyRoomBackGroundManager_o *ScheduleUpdateAt; // x0
  const MethodInfo *v22; // x1
  int32_t ClipCount; // w0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t BackObjectAnimationNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD7796 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_9392/*"MyRoomBackObj_loop"*/);
    byte_4BD7796 = 1;
  }
  BackObjectAnimationNum = 0;
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__50336088 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          instanceObject,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__50336088 & 1) != 0 )
    {
      v7 = this->fields.backObject;
      if ( !v7 )
        goto LABEL_29;
      ComponentsInChildren_object__50336088 = v7->fields.instanceObject;
      if ( !ComponentsInChildren_object__50336088 )
        goto LABEL_29;
      ComponentsInChildren_object__50336088 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                                            ComponentsInChildren_object__50336088,
                                                                            (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !ComponentsInChildren_object__50336088 )
        goto LABEL_29;
      klass = (int)ComponentsInChildren_object__50336088[1].klass;
      v9 = ComponentsInChildren_object__50336088;
      if ( klass >= 1 )
      {
        v10 = 0;
        while ( v10 < klass )
        {
          v11 = &v9->klass + (int)v10;
          v12 = (SimpleAnimation_o *)v11[4];
          if ( !v12 )
            goto LABEL_29;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v11[4], 0LL);
          ComponentsInChildren_object__50336088 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v12, 0LL);
          klass = (int)v9[1].klass;
          if ( (int)++v10 >= klass )
            goto LABEL_15;
        }
LABEL_30:
        sub_1C2209C(ComponentsInChildren_object__50336088, v6);
      }
LABEL_15:
      v13 = this->fields.backObject;
      if ( !v13
        || (ComponentsInChildren_object__50336088 = v13->fields.instanceObject) == 0LL
        || (ComponentsInChildren_object__50336088 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                                                  ComponentsInChildren_object__50336088,
                                                                                  (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_29:
        sub_1C22094(ComponentsInChildren_object__50336088, v6);
      }
      v14 = (int)ComponentsInChildren_object__50336088[1].klass;
      v15 = ComponentsInChildren_object__50336088;
      if ( v14 >= 1 )
      {
        v16 = 0;
        while ( v16 < v14 )
        {
          v17 = &v15->klass + (int)v16;
          v18 = (UnityEngine_Animation_o *)v17[4];
          if ( !v18 )
            goto LABEL_29;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v17[4], 0LL);
          ScheduleUpdateAt = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(v19, v20);
          if ( (__int64)ScheduleUpdateAt < 1 )
          {
            ComponentsInChildren_object__50336088 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v18, 0LL);
          }
          else
          {
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(ScheduleUpdateAt, v22);
            ClipCount = UnityEngine_Animation__GetClipCount(v18, 0LL);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v18, 0LL);
            v24 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0LL);
            v25 = System_String__Concat_63115476((System_String_o *)StringLiteral_9392/*"MyRoomBackObj_loop"*/, v24, 0LL);
            ComponentsInChildren_object__50336088 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_70614020(
                                                                                  v18,
                                                                                  v25,
                                                                                  0LL);
          }
          v14 = (int)v15[1].klass;
          if ( (int)++v16 >= v14 )
            return;
        }
        goto LABEL_30;
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
    sub_1C22094(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall MyRoomBackGroundManager__ScheduleUpdate(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD7793 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD7793 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v3);
  }
  MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)Instance, 0LL);
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
    sub_1C22094(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
}


void __fastcall MyRoomBackGroundManager__Update(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  int64_t Time; // x20
  const MethodInfo *v8; // x1
  MyRoomBackGroundManager_o *v9; // x0
  const MethodInfo *v10; // x1
  MyRoomBackGroundManager_o *ScheduleUpdateAt; // x0
  const MethodInfo *v12; // x1
  UnityEngine_GameObject_o *ComponentsInChildren_object__50336088; // x0
  __int64 v14; // x1
  struct MyRoomBackGroundManager_BackObject_o *v15; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v17; // x19
  unsigned int v18; // w21
  UnityEngine_GameObject_c **v19; // x8
  UnityEngine_Animation_o *v20; // x20
  MyRoomBackGroundManager_o *v21; // x0
  const MethodInfo *v22; // x1
  int32_t ClipCount; // w0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t BackObjectAnimationNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BD778E & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_9392/*"MyRoomBackObj_loop"*/);
    byte_4BD778E = 1;
  }
  BackObjectAnimationNum = 0;
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Equality(instanceObject, 0LL, 0LL);
    if ( !v5
      && (this->fields.loadType & 2) != 0
      && MyRoomBackGroundManager__GetScheduleUpdateAt((MyRoomBackGroundManager_o *)v5, v6) >= 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      MyRoomBackGroundManager__UpdateTimer(this, v8);
      ScheduleUpdateAt = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(v9, v10);
      if ( Time >= (__int64)ScheduleUpdateAt )
      {
        MyRoomBackGroundManager__ScheduleUpdate(ScheduleUpdateAt, v12);
        v15 = this->fields.backObject;
        if ( !v15 )
          goto LABEL_23;
        ComponentsInChildren_object__50336088 = v15->fields.instanceObject;
        if ( !ComponentsInChildren_object__50336088 )
          goto LABEL_23;
        ComponentsInChildren_object__50336088 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                                              ComponentsInChildren_object__50336088,
                                                                              (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
        if ( !ComponentsInChildren_object__50336088 )
          goto LABEL_23;
        klass = (int)ComponentsInChildren_object__50336088[1].klass;
        v17 = ComponentsInChildren_object__50336088;
        if ( klass >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            if ( v18 >= klass )
              sub_1C2209C(ComponentsInChildren_object__50336088, v14);
            v19 = &v17->klass + (int)v18;
            v20 = (UnityEngine_Animation_o *)v19[4];
            if ( !v20 )
              break;
            UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v19[4], 0LL);
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(v21, v22);
            ClipCount = UnityEngine_Animation__GetClipCount(v20, 0LL);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v20, 0LL);
            v24 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0LL);
            v25 = System_String__Concat_63115476((System_String_o *)StringLiteral_9392/*"MyRoomBackObj_loop"*/, v24, 0LL);
            ComponentsInChildren_object__50336088 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_70614020(
                                                                                  v20,
                                                                                  v25,
                                                                                  0LL);
            klass = (int)v17[1].klass;
            if ( (int)++v18 >= klass )
              return;
          }
LABEL_23:
          sub_1C22094(ComponentsInChildren_object__50336088, v14);
        }
      }
    }
  }
}


void __fastcall MyRoomBackGroundManager__UpdateTimer(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  MyRoomBackGroundManager_o *v2; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *v4; // x20
  MyRoomBackGroundManager_o *Time; // x20
  const MethodInfo *v6; // x1
  struct MyRoomBackGroundManager_BackObject_o *v7; // x8
  __int64 v8; // x23
  UnityEngine_Object_o *v9; // x20
  struct MyRoomBackGroundManager_BackObject_o *v10; // x8
  UnityEngine_Object_o *v11; // x20
  UnityEngine_Object_o *v12; // x20
  Il2CppObject *Component_object; // x20
  System_String_o *v14; // x0
  struct MyRoomBackGroundManager_BackObject_o *v15; // x8
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Object_o *v17; // x20
  Il2CppObject *v18; // x20
  System_String_o *v19; // x0
  struct MyRoomBackGroundManager_BackObject_o *v20; // x8
  char v21; // w22
  UnityEngine_Object_o *v22; // x20
  UnityEngine_Object_o *v23; // x20
  Il2CppObject *v24; // x20
  System_String_o *v25; // x0
  struct MyRoomBackGroundManager_BackObject_o *v26; // x8
  UnityEngine_Object_o *v27; // x19
  UnityEngine_Object_o *v28; // x19
  Il2CppObject *v29; // x19
  System_String_o *v30; // x0
  __int64 v31; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4BD778F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_23386/*"root/numD"*/);
    sub_1C21E38(&StringLiteral_22585/*"num"*/);
    sub_1C21E38(&StringLiteral_17983/*"c"*/);
    sub_1C21E38(&StringLiteral_23382/*"root/line"*/);
    sub_1C21E38(&StringLiteral_23384/*"root/numB"*/);
    sub_1C21E38(&StringLiteral_19142/*"ef_clock_num"*/);
    sub_1C21E38(&StringLiteral_23383/*"root/numA"*/);
    this = (MyRoomBackGroundManager_o *)sub_1C21E38(&StringLiteral_23385/*"root/numC"*/);
    byte_4BD778F = 1;
  }
  v31 = 0LL;
  backObject = v2->fields.backObject;
  if ( !backObject )
    goto LABEL_89;
  v4 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                 backObject->fields.instanceObject,
                                 (System_String_o *)StringLiteral_23383/*"root/numA"*/,
                                 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v4, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_89;
    this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
    if ( !this )
      goto LABEL_89;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      return;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = (MyRoomBackGroundManager_o *)NetworkManager__getTime(0LL);
    this = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(Time, v6);
    v7 = v2->fields.backObject;
    v8 = ((char *)this - (char *)Time) % 60 <= 0
       ? ((char *)this - (char *)Time) / 60
       : ((char *)this - (char *)Time) / 60 + 1;
    if ( !v7 )
      goto LABEL_89;
    v9 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                   v7->fields.instanceObject,
                                   (System_String_o *)StringLiteral_23382/*"root/line"*/,
                                   0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v9, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
        if ( !this )
          goto LABEL_89;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
    }
    v10 = v2->fields.backObject;
    if ( !v10 )
      goto LABEL_89;
    v11 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v10->fields.instanceObject,
                                    (System_String_o *)StringLiteral_23383/*"root/numA"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v11, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v11,
                                        (System_String_o *)StringLiteral_22585/*"num"*/,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v12, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_89;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)v12,
                               (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(
                                                (UnityEngine_Object_o *)Component_object,
                                                0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v8 / 600;
            v14 = System_Int64__ToString((int64_t)&v31, 0LL);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63126736(
                                                  (System_String_o *)StringLiteral_19142/*"ef_clock_num"*/,
                                                  v14,
                                                  (System_String_o *)StringLiteral_17983/*"c"*/,
                                                  0LL);
            if ( !Component_object )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
          }
        }
      }
    }
    v15 = v2->fields.backObject;
    if ( !v15 )
      goto LABEL_89;
    v16 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v15->fields.instanceObject,
                                    (System_String_o *)StringLiteral_23384/*"root/numB"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v16, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0LL);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v17 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v16,
                                        (System_String_o *)StringLiteral_22585/*"num"*/,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v17, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v17 )
            goto LABEL_89;
          v18 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v17,
                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v18, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v8 / 60 % 10;
            v19 = System_Int64__ToString((int64_t)&v31, 0LL);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63126736(
                                                  (System_String_o *)StringLiteral_19142/*"ef_clock_num"*/,
                                                  v19,
                                                  (System_String_o *)StringLiteral_17983/*"c"*/,
                                                  0LL);
            if ( !v18 )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)v18, (System_String_o *)this, 0LL);
          }
        }
      }
    }
    v20 = v2->fields.backObject;
    if ( !v20 )
      goto LABEL_89;
    v21 = v8 % 60;
    v22 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v20->fields.instanceObject,
                                    (System_String_o *)StringLiteral_23385/*"root/numC"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v22, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v23 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v22,
                                        (System_String_o *)StringLiteral_22585/*"num"*/,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v23, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_89;
          v24 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v23,
                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v24, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v21 / 10;
            v25 = System_Int64__ToString((int64_t)&v31, 0LL);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63126736(
                                                  (System_String_o *)StringLiteral_19142/*"ef_clock_num"*/,
                                                  v25,
                                                  (System_String_o *)StringLiteral_17983/*"c"*/,
                                                  0LL);
            if ( !v24 )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)v24, (System_String_o *)this, 0LL);
          }
        }
      }
    }
    v26 = v2->fields.backObject;
    if ( !v26 )
      goto LABEL_89;
    v27 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v26->fields.instanceObject,
                                    (System_String_o *)StringLiteral_23386/*"root/numD"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v27, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v27 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0LL);
      if ( !this )
        goto LABEL_89;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        v28 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v27,
                                        (System_String_o *)StringLiteral_22585/*"num"*/,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v28, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_89;
          v29 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v28,
                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v29, 0LL) )
          {
            v31 = (char)(v21 - 10 * (((1717986919LL * v21) >> 34) + (1717986919LL * v21 < 0)));
            v30 = System_Int64__ToString((int64_t)&v31, 0LL);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63126736(
                                                  (System_String_o *)StringLiteral_19142/*"ef_clock_num"*/,
                                                  v30,
                                                  (System_String_o *)StringLiteral_17983/*"c"*/,
                                                  0LL);
            if ( v29 )
            {
              UISprite__set_spriteName((UISprite_o *)v29, (System_String_o *)this, 0LL);
              return;
            }
LABEL_89:
            sub_1C22094(this, method);
          }
        }
      }
    }
  }
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

  if ( (byte_4BD779A & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_9386/*"MyRoom/BackObject/{0}"*/);
    byte_4BD779A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v10 = id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v5, v6, v7);
  v9 = System_String__Format((System_String_o *)StringLiteral_9386/*"MyRoom/BackObject/{0}"*/, v8, 0LL);
  this->fields.assetName = v9;
  sub_1C21DDC(&this->fields.assetName, v9);
  this->fields.instanceObject = 0LL;
  sub_1C21DDC(&this->fields.instanceObject, 0LL);
}


void __fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27___ctor(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27__MoveNext(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
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

  if ( (byte_4BD779E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__);
    sub_1C21E38(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__);
    sub_1C21E38(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__);
    sub_1C21E38(&MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitWhile_TypeInfo);
    byte_4BD779E = 1;
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
  v5 = sub_1C22084(MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = 0,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL), !_4__this) )
  {
    sub_1C22094(Instance, v7);
  }
  loadType = _4__this->fields.loadType;
  if ( (loadType & 1) != 0 )
  {
    ++*(_DWORD *)(v5 + 16);
    v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
    loadType = _4__this->fields.loadType;
  }
  if ( (loadType & 2) != 0 )
  {
    ++*(_DWORD *)(v5 + 16);
    v12 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v12, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v15 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__,
    0LL);
  v16 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v16, v15, 0LL);
  this->fields.__2__current = (Il2CppObject *)v16;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC(p__2__current, v16);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27__System_Collections_IEnumerator_Reset(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27__System_Collections_IEnumerator_get_Current(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27__System_IDisposable_Dispose(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomBackGroundManager__LoadBackGround_d__28___ctor(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomBackGroundManager__LoadBackGround_d__28__MoveNext(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
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

  if ( (byte_4BD779D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__);
    sub_1C21E38(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__);
    sub_1C21E38(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__);
    sub_1C21E38(&MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitWhile_TypeInfo);
    byte_4BD779D = 1;
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
  v5 = sub_1C22084(MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  v8 = this->fields.__4__this;
  *(_QWORD *)(v5 + 24) = v8;
  sub_1C21DDC(v5 + 24, v8);
  *(_BYTE *)(v5 + 16) = 1;
  v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v5 + 40) = v9;
  backTexture = (UnityEngine_Component_o *)sub_1C21DDC(v5 + 40, v9);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0LL),
        BgImgName = MyRoomBackGroundManager__GetBgImgName(v10, v11),
        *(_QWORD *)(v5 + 32) = BgImgName,
        sub_1C21DDC(v5 + 32, BgImgName),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_16:
    sub_1C22094(backTexture, v7);
  }
  UITexture__set_uvRect((UITexture_o *)backTexture, _4__this->fields.DISP_RECT, 0LL);
  v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v13, 0LL);
  v14 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__,
    0LL);
  v15 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v15, v14, 0LL);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1C21DDC(p__2__current, v15);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackGround_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomBackGroundManager__LoadBackGround_d__28__System_Collections_IEnumerator_Reset(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomBackGroundManager__LoadBackGround_d__28_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackGround_d__28__System_Collections_IEnumerator_get_Current(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomBackGroundManager__LoadBackGround_d__28__System_IDisposable_Dispose(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomBackGroundManager__LoadBackObject_d__29___ctor(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomBackGroundManager__LoadBackObject_d__29__MoveNext(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        const MethodInfo *method)
{
  MyRoomBackGroundManager__LoadBackObject_d__29_o *v2; // x19
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
  if ( (byte_4BD779F & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&MyRoomBackGroundManager_BackObject_TypeInfo);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__);
    sub_1C21E38(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__);
    sub_1C21E38(&MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1C21E38(&UnityEngine_WaitWhile_TypeInfo);
    byte_4BD779F = 1;
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
  v5 = sub_1C22084(MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_22;
  v6 = v2->fields.__4__this;
  *(_QWORD *)(v5 + 16) = v6;
  this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1C21DDC(v5 + 16, v6);
  *(_BYTE *)(v5 + 24) = 0;
  if ( !_4__this )
    goto LABEL_22;
  BackObjectId = MyRoomBackGroundManager__GetBackObjectId((MyRoomBackGroundManager_o *)this, method);
  if ( BackObjectId >= 1 )
  {
    v8 = BackObjectId;
    v9 = (MyRoomBackGroundManager_BackObject_o *)sub_1C22084(MyRoomBackGroundManager_BackObject_TypeInfo);
    MyRoomBackGroundManager_BackObject___ctor(v9, v8, v10);
    _4__this->fields.backObject = v9;
    p_backObject = &_4__this->fields.backObject;
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1C21DDC(p_backObject, v9);
    if ( !*p_backObject )
      goto LABEL_22;
    assetName = (*p_backObject)->fields.assetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)AssetManager__isExistAssetStorage(assetName, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      *(_BYTE *)(v5 + 24) = 1;
      if ( *p_backObject )
      {
        v13 = (*p_backObject)->fields.assetName;
        v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v14,
          (Il2CppObject *)v5,
          Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v13, v14, 1, 0LL);
        goto LABEL_21;
      }
LABEL_22:
      sub_1C22094(this, method);
    }
    *p_backObject = 0LL;
    sub_1C21DDC(p_backObject, 0LL);
  }
LABEL_21:
  v17 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__,
    0LL);
  v18 = (UnityEngine_WaitWhile_o *)sub_1C22084(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v18, v17, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v18;
  p__2__current = &v2->fields.__2__current;
  sub_1C21DDC(p__2__current, v18);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackObject_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomBackGroundManager__LoadBackObject_d__29__System_Collections_IEnumerator_Reset(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_MyRoomBackGroundManager__LoadBackObject_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall MyRoomBackGroundManager__LoadBackObject_d__29__System_Collections_IEnumerator_get_Current(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomBackGroundManager__LoadBackObject_d__29__System_IDisposable_Dispose(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass27_0___ctor(
        MyRoomBackGroundManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass27_0___LoadBackGroundByLoadType_b__0(
        MyRoomBackGroundManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  --this->fields.waitLoadCount;
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass27_0___LoadBackGroundByLoadType_b__1(
        MyRoomBackGroundManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  --this->fields.waitLoadCount;
}


bool __fastcall MyRoomBackGroundManager___c__DisplayClass27_0___LoadBackGroundByLoadType_b__2(
        MyRoomBackGroundManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  return this->fields.waitLoadCount > 0;
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass28_0___ctor(
        MyRoomBackGroundManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass28_0___LoadBackGround_b__0(
        MyRoomBackGroundManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass28_0___LoadBackGround_b__1(
        MyRoomBackGroundManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  MyRoomBackGroundManager___c__DisplayClass28_0_o *v2; // x19
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
  if ( (byte_4BD779B & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)sub_1C21E38(&StringLiteral_3179/*"Back/back{0}"*/);
    byte_4BD779B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)_4__this->fields.backTexture;
  if ( !this )
    goto LABEL_13;
  p_imgName = &v2->fields.imgName;
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_9;
  v14 = 10400;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v5, v6, v7);
  v9 = System_String__Format((System_String_o *)StringLiteral_3179/*"Back/back{0}"*/, v8, 0LL);
  v2->fields.imgName = v9;
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)sub_1C21DDC(&v2->fields.imgName, v9);
  v10 = v2->fields.__4__this;
  if ( !v10 || (this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)v10->fields.backTexture) == 0LL )
LABEL_13:
    sub_1C22094(this, method);
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)ExUITexture__SetAssetImage(
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


bool __fastcall MyRoomBackGroundManager___c__DisplayClass28_0___LoadBackGround_b__2(
        MyRoomBackGroundManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass29_0___ctor(
        MyRoomBackGroundManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager___c__DisplayClass29_0___LoadBackObject_b__0(
        MyRoomBackGroundManager___c__DisplayClass29_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__49880776; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v9; // x20
  struct MyRoomBackGroundManager_o *v10; // x8

  if ( (byte_4BD779C & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_9391/*"MyRoomBackObj"*/);
    byte_4BD779C = 1;
  }
  if ( assetData )
  {
    Object_object__49880776 = AssetData__GetObject_object__49880776(
                                assetData,
                                (System_String_o *)StringLiteral_9391/*"MyRoomBackObj"*/,
                                (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49880776, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_15;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__50551272(
                                              Object_object__49880776,
                                              transform,
                                              (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
      if ( !_4__this
        || (v9 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
            (v10 = this->fields.__4__this) == 0LL)
        || (_4__this = (UnityEngine_Component_o *)v10->fields.backObject) == 0LL )
      {
LABEL_15:
        sub_1C22094(_4__this, v6);
      }
      _4__this[1].monitor = v9;
      sub_1C21DDC(&_4__this[1].monitor, v9);
    }
  }
  this->fields.wait = 0;
}


bool __fastcall MyRoomBackGroundManager___c__DisplayClass29_0___LoadBackObject_b__1(
        MyRoomBackGroundManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}