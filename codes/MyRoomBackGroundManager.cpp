void MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  this->fields.DISP_RECT = (struct UnityEngine_Rect_o)xmmword_C0DFA0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomBackGroundManager__ClearBackObject(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  struct MyRoomBackGroundManager_BackObject_o *v3; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v7; // x0
  UnityEngine_Object_o *v8; // x20
  System_String_o *assetName; // x20

  if ( (byte_4C32884 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C32884 = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v3 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v3->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality(instanceObject, 0, 0);
    if ( v7 )
    {
      if ( !*p_backObject )
        goto LABEL_15;
      v8 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71223828(v8, 0);
      if ( !*p_backObject )
LABEL_15:
        sub_1C32E7C(v7);
      assetName = (*p_backObject)->fields.assetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(assetName, 0);
    }
  }
  *p_backObject = 0;
  sub_1C32BC4(p_backObject, 0);
}


int32_t MyRoomBackGroundManager__GetBackObjectAnimationNum(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4C32889 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C32C20(&MyRoomControl_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32889 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_8:
    sub_1C32E7C(Instance);
  return MyRoomAddMaster__GetBackObjAnimationNum((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0);
}


int32_t MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x19
  int32_t v4; // w0

  if ( (byte_4C32886 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C32C20(&MyRoomControl_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32886 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_8:
    sub_1C32E7C(Instance);
  v4 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0);
  return v4 & ~(v4 >> 31);
}


System_String_o *MyRoomBackGroundManager__GetBgImgName(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x19
  int32_t v4; // w0
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  int v11; // w9
  Il2CppObject *v12; // x0
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C32885 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&MyRoomControl_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_3032/*"Back/back{0}"*/);
    byte_4C32885 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_11:
    sub_1C32E7C(Instance);
  v4 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 1, 0);
  if ( v4 >= 1 )
    v11 = v4;
  else
    v11 = 10400;
  v14 = v11;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v5, v6, v7, v8, v9, v10);
  return System_String__Format((System_String_o *)StringLiteral_3032/*"Back/back{0}"*/, v12, 0);
}


int64_t MyRoomBackGroundManager__GetScheduleUpdateAt(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int64_t v3; // x0

  if ( (byte_4C32888 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32888 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  v3 = MyRoomAddMaster__GetChangeMyRoomGetScheduleUpdateAt((MyRoomAddMaster_o *)Instance, 0);
  return v3 & ~(v3 >> 63);
}


void MyRoomBackGroundManager__Init(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  ExUITexture_o *backTexture; // x0
  const MethodInfo *v4; // x1

  this->fields.loadType = 0;
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)this, 0);
  backTexture = this->fields.backTexture;
  if ( !backTexture )
    sub_1C32E7C(0);
  ExUITexture__ClearImage(backTexture, 0);
  MyRoomBackGroundManager__ClearBackObject(this, v4);
}


bool MyRoomBackGroundManager__IsIncludeLoadType(
        MyRoomBackGroundManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  return (this->fields.loadType & type) != 0;
}


System_Collections_IEnumerator_o *MyRoomBackGroundManager__LoadBackGround(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C3288C & 1) == 0 )
  {
    sub_1C32C20(&MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
    byte_4C3288C = 1;
  }
  v5 = sub_1C32E6C(MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C32BC4(v5 + 40, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C3288B & 1) == 0 )
  {
    sub_1C32C20(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
    byte_4C3288B = 1;
  }
  v5 = sub_1C32E6C(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C32BC4(v5 + 40, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C3288D & 1) == 0 )
  {
    sub_1C32C20(&MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
    byte_4C3288D = 1;
  }
  v5 = sub_1C32E6C(MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C32BC4(v5 + 32, this);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C32BC4(v5 + 40, callback);
  return (System_Collections_IEnumerator_o *)v5;
}


// attributes: thunk
void MyRoomBackGroundManager__OnDestroy(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  MyRoomBackGroundManager__QuitBackGround(this, method);
}


void MyRoomBackGroundManager__OnEnable(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  if ( (this->fields.loadType & 2) != 0 )
    MyRoomBackGroundManager__PlayForceBackObjectAnimation(this, method);
}


void MyRoomBackGroundManager__PlayForceBackObjectAnimation(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__51598740; // x0
  struct MyRoomBackGroundManager_BackObject_o *v6; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v8; // x20
  unsigned int v9; // w22
  UnityEngine_GameObject_c **v10; // x8
  SimpleAnimation_o *v11; // x21
  struct MyRoomBackGroundManager_BackObject_o *v12; // x8
  int v13; // w8
  UnityEngine_GameObject_o *v14; // x19
  unsigned int v15; // w21
  UnityEngine_GameObject_c **v16; // x8
  UnityEngine_Animation_o *v17; // x20
  MyRoomBackGroundManager_o *v18; // x0
  const MethodInfo *v19; // x1
  MyRoomBackGroundManager_o *ScheduleUpdateAt; // x0
  const MethodInfo *v21; // x1
  int32_t ClipCount; // w0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int32_t BackObjectAnimationNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3288A & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9224/*"MyRoomBackObj_loop"*/);
    byte_4C3288A = 1;
  }
  BackObjectAnimationNum = 0;
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__51598740 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          instanceObject,
                                                                          0,
                                                                          0);
    if ( ((unsigned __int8)ComponentsInChildren_object__51598740 & 1) != 0 )
    {
      v6 = this->fields.backObject;
      if ( !v6 )
        goto LABEL_29;
      ComponentsInChildren_object__51598740 = v6->fields.instanceObject;
      if ( !ComponentsInChildren_object__51598740 )
        goto LABEL_29;
      ComponentsInChildren_object__51598740 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                                                            ComponentsInChildren_object__51598740,
                                                                            (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !ComponentsInChildren_object__51598740 )
        goto LABEL_29;
      klass = (int)ComponentsInChildren_object__51598740[1].klass;
      v8 = ComponentsInChildren_object__51598740;
      if ( klass >= 1 )
      {
        v9 = 0;
        while ( v9 < klass )
        {
          v10 = &v8->klass + (int)v9;
          v11 = (SimpleAnimation_o *)v10[4];
          if ( !v11 )
            goto LABEL_29;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v10[4], 0);
          ComponentsInChildren_object__51598740 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v11, 0);
          klass = (int)v8[1].klass;
          if ( (int)++v9 >= klass )
            goto LABEL_15;
        }
LABEL_30:
        sub_1C32E84(ComponentsInChildren_object__51598740);
      }
LABEL_15:
      v12 = this->fields.backObject;
      if ( !v12
        || (ComponentsInChildren_object__51598740 = v12->fields.instanceObject) == 0
        || (ComponentsInChildren_object__51598740 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                                                                  ComponentsInChildren_object__51598740,
                                                                                  (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0 )
      {
LABEL_29:
        sub_1C32E7C(ComponentsInChildren_object__51598740);
      }
      v13 = (int)ComponentsInChildren_object__51598740[1].klass;
      v14 = ComponentsInChildren_object__51598740;
      if ( v13 >= 1 )
      {
        v15 = 0;
        while ( v15 < v13 )
        {
          v16 = &v14->klass + (int)v15;
          v17 = (UnityEngine_Animation_o *)v16[4];
          if ( !v17 )
            goto LABEL_29;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v16[4], 0);
          ScheduleUpdateAt = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(v18, v19);
          if ( (__int64)ScheduleUpdateAt < 1 )
          {
            ComponentsInChildren_object__51598740 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v17, 0);
          }
          else
          {
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(ScheduleUpdateAt, v21);
            ClipCount = UnityEngine_Animation__GetClipCount(v17, 0);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v17, 0);
            v23 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0);
            v24 = System_String__Concat_63518544((System_String_o *)StringLiteral_9224/*"MyRoomBackObj_loop"*/, v23, 0);
            ComponentsInChildren_object__51598740 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_70968924(
                                                                                  v17,
                                                                                  v24,
                                                                                  0);
          }
          v13 = (int)v14[1].klass;
          if ( (int)++v15 >= v13 )
            return;
        }
        goto LABEL_30;
      }
    }
  }
}


void MyRoomBackGroundManager__QuitBackGround(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  MyRoomBackGroundManager__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void MyRoomBackGroundManager__ScheduleUpdate(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4C32887 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C32C20(&MyRoomControl_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C32887 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_8:
    sub_1C32E7C(Instance);
  MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void MyRoomBackGroundManager__SetBackGround(
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0);
}


void MyRoomBackGroundManager__Update(MyRoomBackGroundManager_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *ComponentsInChildren_object__51598740; // x0
  struct MyRoomBackGroundManager_BackObject_o *v14; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v16; // x19
  unsigned int v17; // w21
  UnityEngine_GameObject_c **v18; // x8
  UnityEngine_Animation_o *v19; // x20
  MyRoomBackGroundManager_o *v20; // x0
  const MethodInfo *v21; // x1
  int32_t ClipCount; // w0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int32_t BackObjectAnimationNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C32882 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9224/*"MyRoomBackObj_loop"*/);
    byte_4C32882 = 1;
  }
  BackObjectAnimationNum = 0;
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__op_Equality(instanceObject, 0, 0);
    if ( !v5
      && (this->fields.loadType & 2) != 0
      && MyRoomBackGroundManager__GetScheduleUpdateAt((MyRoomBackGroundManager_o *)v5, v6) >= 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      MyRoomBackGroundManager__UpdateTimer(this, v8);
      ScheduleUpdateAt = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(v9, v10);
      if ( Time >= (__int64)ScheduleUpdateAt )
      {
        MyRoomBackGroundManager__ScheduleUpdate(ScheduleUpdateAt, v12);
        v14 = this->fields.backObject;
        if ( !v14 )
          goto LABEL_23;
        ComponentsInChildren_object__51598740 = v14->fields.instanceObject;
        if ( !ComponentsInChildren_object__51598740 )
          goto LABEL_23;
        ComponentsInChildren_object__51598740 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51598740(
                                                                              ComponentsInChildren_object__51598740,
                                                                              (const MethodInfo_3135594 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
        if ( !ComponentsInChildren_object__51598740 )
          goto LABEL_23;
        klass = (int)ComponentsInChildren_object__51598740[1].klass;
        v16 = ComponentsInChildren_object__51598740;
        if ( klass >= 1 )
        {
          v17 = 0;
          while ( 1 )
          {
            if ( v17 >= klass )
              sub_1C32E84(ComponentsInChildren_object__51598740);
            v18 = &v16->klass + (int)v17;
            v19 = (UnityEngine_Animation_o *)v18[4];
            if ( !v19 )
              break;
            UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v18[4], 0);
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(v20, v21);
            ClipCount = UnityEngine_Animation__GetClipCount(v19, 0);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v19, 0);
            v23 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0);
            v24 = System_String__Concat_63518544((System_String_o *)StringLiteral_9224/*"MyRoomBackObj_loop"*/, v23, 0);
            ComponentsInChildren_object__51598740 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_70968924(
                                                                                  v19,
                                                                                  v24,
                                                                                  0);
            klass = (int)v16[1].klass;
            if ( (int)++v17 >= klass )
              return;
          }
LABEL_23:
          sub_1C32E7C(ComponentsInChildren_object__51598740);
        }
      }
    }
  }
}


void MyRoomBackGroundManager__UpdateTimer(MyRoomBackGroundManager_o *this, const MethodInfo *method)
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
  if ( (byte_4C32883 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_23142/*"root/numD"*/);
    sub_1C32C20(&StringLiteral_22335/*"num"*/);
    sub_1C32C20(&StringLiteral_17677/*"c"*/);
    sub_1C32C20(&StringLiteral_23138/*"root/line"*/);
    sub_1C32C20(&StringLiteral_23140/*"root/numB"*/);
    sub_1C32C20(&StringLiteral_18817/*"ef_clock_num"*/);
    sub_1C32C20(&StringLiteral_23139/*"root/numA"*/);
    this = (MyRoomBackGroundManager_o *)sub_1C32C20(&StringLiteral_23141/*"root/numC"*/);
    byte_4C32883 = 1;
  }
  v31 = 0;
  backObject = v2->fields.backObject;
  if ( !backObject )
    goto LABEL_89;
  v4 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                 backObject->fields.instanceObject,
                                 (System_String_o *)StringLiteral_23139/*"root/numA"*/,
                                 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v4, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v4 )
      goto LABEL_89;
    this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
    if ( !this )
      goto LABEL_89;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
      return;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = (MyRoomBackGroundManager_o *)NetworkManager__getTime(0);
    this = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(Time, v6);
    v7 = v2->fields.backObject;
    v8 = ((char *)this - (char *)Time) % 60 <= 0
       ? ((char *)this - (char *)Time) / 60
       : ((char *)this - (char *)Time) / 60 + 1;
    if ( !v7 )
      goto LABEL_89;
    v9 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                   v7->fields.instanceObject,
                                   (System_String_o *)StringLiteral_23138/*"root/line"*/,
                                   0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v9, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
        if ( !this )
          goto LABEL_89;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
    }
    v10 = v2->fields.backObject;
    if ( !v10 )
      goto LABEL_89;
    v11 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v10->fields.instanceObject,
                                    (System_String_o *)StringLiteral_23139/*"root/numA"*/,
                                    0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v11, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v12 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v11,
                                        (System_String_o *)StringLiteral_22335/*"num"*/,
                                        0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v12, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_89;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)v12,
                               (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(
                                                (UnityEngine_Object_o *)Component_object,
                                                0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v8 / 600;
            v14 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63556792(
                                                  (System_String_o *)StringLiteral_18817/*"ef_clock_num"*/,
                                                  v14,
                                                  (System_String_o *)StringLiteral_17677/*"c"*/,
                                                  0);
            if ( !Component_object )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0);
          }
        }
      }
    }
    v15 = v2->fields.backObject;
    if ( !v15 )
      goto LABEL_89;
    v16 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v15->fields.instanceObject,
                                    (System_String_o *)StringLiteral_23140/*"root/numB"*/,
                                    0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v16, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v16 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v17 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v16,
                                        (System_String_o *)StringLiteral_22335/*"num"*/,
                                        0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v17, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v17 )
            goto LABEL_89;
          v18 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v17,
                  (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v18, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v8 / 60 % 10;
            v19 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63556792(
                                                  (System_String_o *)StringLiteral_18817/*"ef_clock_num"*/,
                                                  v19,
                                                  (System_String_o *)StringLiteral_17677/*"c"*/,
                                                  0);
            if ( !v18 )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)v18, (System_String_o *)this, 0);
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
                                    (System_String_o *)StringLiteral_23141/*"root/numC"*/,
                                    0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v22, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v22 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v23 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v22,
                                        (System_String_o *)StringLiteral_22335/*"num"*/,
                                        0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v23, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v23 )
            goto LABEL_89;
          v24 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v23,
                  (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v24, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v21 / 10;
            v25 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63556792(
                                                  (System_String_o *)StringLiteral_18817/*"ef_clock_num"*/,
                                                  v25,
                                                  (System_String_o *)StringLiteral_17677/*"c"*/,
                                                  0);
            if ( !v24 )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)v24, (System_String_o *)this, 0);
          }
        }
      }
    }
    v26 = v2->fields.backObject;
    if ( !v26 )
      goto LABEL_89;
    v27 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v26->fields.instanceObject,
                                    (System_String_o *)StringLiteral_23142/*"root/numD"*/,
                                    0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v27, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v27 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v27, 0);
      if ( !this )
        goto LABEL_89;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
      {
        v28 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v27,
                                        (System_String_o *)StringLiteral_22335/*"num"*/,
                                        0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v28, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v28 )
            goto LABEL_89;
          v29 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v28,
                  (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v29, 0) )
          {
            v31 = (char)(v21 - 10 * (((1717986919LL * v21) >> 34) + (1717986919LL * v21 < 0)));
            v30 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63556792(
                                                  (System_String_o *)StringLiteral_18817/*"ef_clock_num"*/,
                                                  v30,
                                                  (System_String_o *)StringLiteral_17677/*"c"*/,
                                                  0);
            if ( v29 )
            {
              UISprite__set_spriteName((UISprite_o *)v29, (System_String_o *)this, 0);
              return;
            }
LABEL_89:
            sub_1C32E7C(this);
          }
        }
      }
    }
  }
}


void MyRoomBackGroundManager_BackObject___ctor(
        MyRoomBackGroundManager_BackObject_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  Il2CppObject *v11; // x0
  struct System_String_o *v12; // x0
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3288E & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_9215/*"MyRoom/BackObject/{0}"*/);
    byte_4C3288E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.assetId = id;
  v13 = id;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v5, v6, v7, v8, v9, v10);
  v12 = System_String__Format((System_String_o *)StringLiteral_9215/*"MyRoom/BackObject/{0}"*/, v11, 0);
  this->fields.assetName = v12;
  sub_1C32BC4(&this->fields.assetName, v12);
  this->fields.instanceObject = 0;
  sub_1C32BC4(&this->fields.instanceObject, 0);
}


void MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27___ctor(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27__MoveNext(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  int32_t loadType; // w8
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *BackGround; // x0
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x2
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v14; // x21
  UnityEngine_WaitWhile_o *v15; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4C32892 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__);
    sub_1C32C20(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__);
    sub_1C32C20(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__);
    sub_1C32C20(&MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C32892 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( callback )
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v5 = sub_1C32E6C(MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = 0,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0), !_4__this) )
  {
    sub_1C32E7C(Instance);
  }
  loadType = _4__this->fields.loadType;
  if ( (loadType & 1) != 0 )
  {
    ++*(_DWORD *)(v5 + 16);
    v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__,
      0);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v8, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0);
    loadType = _4__this->fields.loadType;
  }
  if ( (loadType & 2) != 0 )
  {
    ++*(_DWORD *)(v5 + 16);
    v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__,
      0);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v11, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0);
  }
  v14 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__,
    0);
  v15 = (UnityEngine_WaitWhile_o *)sub_1C32E6C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v15, v14, 0);
  this->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &this->fields.__2__current;
  sub_1C32BC4(p__2__current, v15);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27__System_Collections_IEnumerator_Reset(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27__System_Collections_IEnumerator_get_Current(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27__System_IDisposable_Dispose(
        MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomBackGroundManager__LoadBackGround_d__28___ctor(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomBackGroundManager__LoadBackGround_d__28__MoveNext(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x22
  __int64 v5; // x20
  UnityEngine_Component_o *backTexture; // x0
  struct MyRoomBackGroundManager_o *v7; // x1
  System_Action_o *v8; // x21
  MyRoomBackGroundManager_o *v9; // x0
  const MethodInfo *v10; // x1
  System_String_o *BgImgName; // x0
  System_Action_o *v12; // x21
  System_Func_bool__o *v13; // x21
  UnityEngine_WaitWhile_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4C32891 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__);
    sub_1C32C20(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__);
    sub_1C32C20(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__);
    sub_1C32C20(&MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
    sub_1C32C20(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C32891 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( callback )
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v5 = sub_1C32E6C(MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  v7 = this->fields.__4__this;
  *(_QWORD *)(v5 + 24) = v7;
  sub_1C32BC4(v5 + 24, v7);
  *(_BYTE *)(v5 + 16) = 1;
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__,
    0);
  *(_QWORD *)(v5 + 40) = v8;
  backTexture = (UnityEngine_Component_o *)sub_1C32BC4(v5 + 40, v8);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0),
        BgImgName = MyRoomBackGroundManager__GetBgImgName(v9, v10),
        *(_QWORD *)(v5 + 32) = BgImgName,
        sub_1C32BC4(v5 + 32, BgImgName),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0) )
  {
LABEL_16:
    sub_1C32E7C(backTexture);
  }
  UITexture__set_uvRect((UITexture_o *)backTexture, _4__this->fields.DISP_RECT, 0);
  v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v12, 0);
  v13 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__,
    0);
  v14 = (UnityEngine_WaitWhile_o *)sub_1C32E6C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v14, v13, 0);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1C32BC4(p__2__current, v14);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *MyRoomBackGroundManager__LoadBackGround_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomBackGroundManager__LoadBackGround_d__28__System_Collections_IEnumerator_Reset(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_MyRoomBackGroundManager__LoadBackGround_d__28_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *MyRoomBackGroundManager__LoadBackGround_d__28__System_Collections_IEnumerator_get_Current(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomBackGroundManager__LoadBackGround_d__28__System_IDisposable_Dispose(
        MyRoomBackGroundManager__LoadBackGround_d__28_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomBackGroundManager__LoadBackObject_d__29___ctor(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomBackGroundManager__LoadBackObject_d__29__MoveNext(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        const MethodInfo *method)
{
  MyRoomBackGroundManager__LoadBackObject_d__29_o *v2; // x19
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v5; // x20
  struct MyRoomBackGroundManager_o *v6; // x1
  const MethodInfo *v7; // x1
  int32_t BackObjectId; // w0
  int32_t v9; // w22
  MyRoomBackGroundManager_BackObject_o *v10; // x23
  const MethodInfo *v11; // x2
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x21
  System_String_o *assetName; // x22
  System_String_o *v14; // x21
  AssetLoader_LoadEndDataHandler_o *v15; // x22
  struct System_Action_o *callback; // x8
  bool result; // w0
  System_Func_bool__o *v18; // x21
  UnityEngine_WaitWhile_o *v19; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4C32893 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&MyRoomBackGroundManager_BackObject_TypeInfo);
    sub_1C32C20(&System_Func_bool__TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__);
    sub_1C32C20(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__);
    sub_1C32C20(&MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1C32C20(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C32893 = 1;
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
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  v5 = sub_1C32E6C(MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  v6 = v2->fields.__4__this;
  *(_QWORD *)(v5 + 16) = v6;
  this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1C32BC4(v5 + 16, v6);
  *(_BYTE *)(v5 + 24) = 0;
  if ( !_4__this )
    goto LABEL_22;
  BackObjectId = MyRoomBackGroundManager__GetBackObjectId((MyRoomBackGroundManager_o *)this, v7);
  if ( BackObjectId >= 1 )
  {
    v9 = BackObjectId;
    v10 = (MyRoomBackGroundManager_BackObject_o *)sub_1C32E6C(MyRoomBackGroundManager_BackObject_TypeInfo);
    MyRoomBackGroundManager_BackObject___ctor(v10, v9, v11);
    _4__this->fields.backObject = v10;
    p_backObject = &_4__this->fields.backObject;
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1C32BC4(p_backObject, v10);
    if ( !*p_backObject )
      goto LABEL_22;
    assetName = (*p_backObject)->fields.assetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)AssetManager__isExistAssetStorage(assetName, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      *(_BYTE *)(v5 + 24) = 1;
      if ( *p_backObject )
      {
        v14 = (*p_backObject)->fields.assetName;
        v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v15,
          (Il2CppObject *)v5,
          Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v14, v15, 1, 0);
        goto LABEL_21;
      }
LABEL_22:
      sub_1C32E7C(this);
    }
    *p_backObject = 0;
    sub_1C32BC4(p_backObject, 0);
  }
LABEL_21:
  v18 = (System_Func_bool__o *)sub_1C32E6C(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v18,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__,
    0);
  v19 = (UnityEngine_WaitWhile_o *)sub_1C32E6C(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v19, v18, 0);
  v2->fields.__2__current = (Il2CppObject *)v19;
  p__2__current = &v2->fields.__2__current;
  sub_1C32BC4(p__2__current, v19);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *MyRoomBackGroundManager__LoadBackObject_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomBackGroundManager__LoadBackObject_d__29__System_Collections_IEnumerator_Reset(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_MyRoomBackGroundManager__LoadBackObject_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *MyRoomBackGroundManager__LoadBackObject_d__29__System_Collections_IEnumerator_get_Current(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomBackGroundManager__LoadBackObject_d__29__System_IDisposable_Dispose(
        MyRoomBackGroundManager__LoadBackObject_d__29_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomBackGroundManager___c__DisplayClass27_0___ctor(
        MyRoomBackGroundManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomBackGroundManager___c__DisplayClass27_0___LoadBackGroundByLoadType_b__0(
        MyRoomBackGroundManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  --this->fields.waitLoadCount;
}


void MyRoomBackGroundManager___c__DisplayClass27_0___LoadBackGroundByLoadType_b__1(
        MyRoomBackGroundManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  --this->fields.waitLoadCount;
}


bool MyRoomBackGroundManager___c__DisplayClass27_0___LoadBackGroundByLoadType_b__2(
        MyRoomBackGroundManager___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  return this->fields.waitLoadCount > 0;
}


void MyRoomBackGroundManager___c__DisplayClass28_0___ctor(
        MyRoomBackGroundManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomBackGroundManager___c__DisplayClass28_0___LoadBackGround_b__0(
        MyRoomBackGroundManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


void MyRoomBackGroundManager___c__DisplayClass28_0___LoadBackGround_b__1(
        MyRoomBackGroundManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  MyRoomBackGroundManager___c__DisplayClass28_0_o *v2; // x19
  struct MyRoomBackGroundManager_o *_4__this; // x8
  System_String_o **p_imgName; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  struct MyRoomBackGroundManager_o *v13; // x8
  struct MyRoomBackGroundManager_o *v14; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v16; // x20
  int v17; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4C3288F & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)sub_1C32C20(&StringLiteral_3032/*"Back/back{0}"*/);
    byte_4C3288F = 1;
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
                                                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_9;
  v17 = 10400;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v5, v6, v7, v8, v9, v10);
  v12 = System_String__Format((System_String_o *)StringLiteral_3032/*"Back/back{0}"*/, v11, 0);
  v2->fields.imgName = v12;
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)sub_1C32BC4(&v2->fields.imgName, v12);
  v13 = v2->fields.__4__this;
  if ( !v13 || (this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)v13->fields.backTexture) == 0 )
LABEL_13:
    sub_1C32E7C(this);
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0);
LABEL_9:
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_13;
  backTexture = v14->fields.backTexture;
  v16 = *p_imgName;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(backTexture, v16, 0);
}


bool MyRoomBackGroundManager___c__DisplayClass28_0___LoadBackGround_b__2(
        MyRoomBackGroundManager___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void MyRoomBackGroundManager___c__DisplayClass29_0___ctor(
        MyRoomBackGroundManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomBackGroundManager___c__DisplayClass29_0___LoadBackObject_b__0(
        MyRoomBackGroundManager___c__DisplayClass29_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  Il2CppObject *Object_object__51111776; // x20
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v8; // x20
  struct MyRoomBackGroundManager_o *v9; // x8

  if ( (byte_4C32890 & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_9223/*"MyRoomBackObj"*/);
    byte_4C32890 = 1;
  }
  if ( assetData )
  {
    Object_object__51111776 = AssetData__GetObject_object__51111776(
                                assetData,
                                (System_String_o *)StringLiteral_9223/*"MyRoomBackObj"*/,
                                (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51111776, 0, 0) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_15;
      transform = UnityEngine_Component__get_transform(_4__this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__51812484(
                                              Object_object__51111776,
                                              transform,
                                              (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
      if ( !_4__this
        || (v8 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
            (v9 = this->fields.__4__this) == 0)
        || (_4__this = (UnityEngine_Component_o *)v9->fields.backObject) == 0 )
      {
LABEL_15:
        sub_1C32E7C(_4__this);
      }
      _4__this[1].monitor = v8;
      sub_1C32BC4(&_4__this[1].monitor, v8);
    }
  }
  this->fields.wait = 0;
}


bool MyRoomBackGroundManager___c__DisplayClass29_0___LoadBackObject_b__1(
        MyRoomBackGroundManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}