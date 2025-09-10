void MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  this->fields.DISP_RECT = (struct UnityEngine_Rect_o)xmmword_C0ABB0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomBackGroundManager__ClearBackObject(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  struct MyRoomBackGroundManager_BackObject_o *v3; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  System_String_o *assetName; // x20

  if ( (byte_4C221B5 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C221B5 = 1;
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
      v9 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_71163892(v9, 0);
      if ( !*p_backObject )
LABEL_15:
        sub_1C2D6EC(v7, v8);
      assetName = (*p_backObject)->fields.assetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(assetName, 0);
    }
  }
  *p_backObject = 0;
  sub_1C2D434(p_backObject);
}


int32_t MyRoomBackGroundManager__GetBackObjectAnimationNum(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4C221BA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C2D490(&MyRoomControl_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C221BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_8:
    sub_1C2D6EC(Instance, v3);
  return MyRoomAddMaster__GetBackObjAnimationNum((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0);
}


int32_t MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19
  int32_t v5; // w0

  if ( (byte_4C221B7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C2D490(&MyRoomControl_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C221B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_8:
    sub_1C2D6EC(Instance, v3);
  v5 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0);
  return v5 & ~(v5 >> 31);
}


System_String_o *MyRoomBackGroundManager__GetBgImgName(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19
  int32_t v5; // w0
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  int v9; // w9
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C221B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&MyRoomControl_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_3029/*"Back/back{0}"*/);
    byte_4C221B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_11:
    sub_1C2D6EC(Instance, v3);
  v5 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0);
  if ( v5 >= 1 )
    v9 = v5;
  else
    v9 = 10400;
  v12 = v9;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v6, v7, v8);
  return System_String__Format((System_String_o *)StringLiteral_3029/*"Back/back{0}"*/, v10, 0);
}


int64_t MyRoomBackGroundManager__GetScheduleUpdateAt(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  int64_t v4; // x0

  if ( (byte_4C221B9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C221B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v3);
  }
  v4 = MyRoomAddMaster__GetChangeMyRoomGetScheduleUpdateAt((MyRoomAddMaster_o *)Instance, 0);
  return v4 & ~(v4 >> 63);
}


void MyRoomBackGroundManager__Init(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ExUITexture_o *backTexture; // x0
  const MethodInfo *v5; // x1

  this->fields.loadType = 0;
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)this, 0);
  backTexture = this->fields.backTexture;
  if ( !backTexture )
    sub_1C2D6EC(0, v3);
  ExUITexture__ClearImage(backTexture, 0);
  MyRoomBackGroundManager__ClearBackObject(this, v5);
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

  if ( (byte_4C221BD & 1) == 0 )
  {
    sub_1C2D490(&MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
    byte_4C221BD = 1;
  }
  v5 = sub_1C2D6DC(MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434(v5 + 32);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C2D434(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C221BC & 1) == 0 )
  {
    sub_1C2D490(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
    byte_4C221BC = 1;
  }
  v5 = sub_1C2D6DC(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434(v5 + 32);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C2D434(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4C221BE & 1) == 0 )
  {
    sub_1C2D490(&MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
    byte_4C221BE = 1;
  }
  v5 = sub_1C2D6DC(MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434(v5 + 32);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C2D434(v5 + 40);
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
  UnityEngine_GameObject_o *ComponentsInChildren_object__51538676; // x0
  __int64 v6; // x1
  struct MyRoomBackGroundManager_BackObject_o *v7; // x8
  __int64 v8; // x2
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
  MyRoomBackGroundManager_o *v20; // x0
  const MethodInfo *v21; // x1
  MyRoomBackGroundManager_o *ScheduleUpdateAt; // x0
  const MethodInfo *v23; // x1
  int32_t ClipCount; // w0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  int32_t BackObjectAnimationNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C221BB & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_9218/*"MyRoomBackObj_loop"*/);
    byte_4C221BB = 1;
  }
  BackObjectAnimationNum = 0;
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__51538676 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          instanceObject,
                                                                          0,
                                                                          0);
    if ( ((unsigned __int8)ComponentsInChildren_object__51538676 & 1) != 0 )
    {
      v7 = this->fields.backObject;
      if ( !v7 )
        goto LABEL_29;
      ComponentsInChildren_object__51538676 = v7->fields.instanceObject;
      if ( !ComponentsInChildren_object__51538676 )
        goto LABEL_29;
      ComponentsInChildren_object__51538676 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                                                            ComponentsInChildren_object__51538676,
                                                                            (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !ComponentsInChildren_object__51538676 )
        goto LABEL_29;
      klass = (int)ComponentsInChildren_object__51538676[1].klass;
      v10 = ComponentsInChildren_object__51538676;
      if ( klass >= 1 )
      {
        v11 = 0;
        while ( v11 < klass )
        {
          v12 = &v10->klass + (int)v11;
          v13 = (SimpleAnimation_o *)v12[4];
          if ( !v13 )
            goto LABEL_29;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v12[4], 0);
          ComponentsInChildren_object__51538676 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v13, 0);
          klass = (int)v10[1].klass;
          if ( (int)++v11 >= klass )
            goto LABEL_15;
        }
LABEL_30:
        sub_1C2D6F4(ComponentsInChildren_object__51538676, v6, v8);
      }
LABEL_15:
      v14 = this->fields.backObject;
      if ( !v14
        || (ComponentsInChildren_object__51538676 = v14->fields.instanceObject) == 0
        || (ComponentsInChildren_object__51538676 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                                                                  ComponentsInChildren_object__51538676,
                                                                                  (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0 )
      {
LABEL_29:
        sub_1C2D6EC(ComponentsInChildren_object__51538676, v6);
      }
      v15 = (int)ComponentsInChildren_object__51538676[1].klass;
      v16 = ComponentsInChildren_object__51538676;
      if ( v15 >= 1 )
      {
        v17 = 0;
        while ( v17 < v15 )
        {
          v18 = &v16->klass + (int)v17;
          v19 = (UnityEngine_Animation_o *)v18[4];
          if ( !v19 )
            goto LABEL_29;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v18[4], 0);
          ScheduleUpdateAt = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(v20, v21);
          if ( (__int64)ScheduleUpdateAt < 1 )
          {
            ComponentsInChildren_object__51538676 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v19, 0);
          }
          else
          {
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(ScheduleUpdateAt, v23);
            ClipCount = UnityEngine_Animation__GetClipCount(v19, 0);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v19, 0);
            v25 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0);
            v26 = System_String__Concat_63457864((System_String_o *)StringLiteral_9218/*"MyRoomBackObj_loop"*/, v25, 0);
            ComponentsInChildren_object__51538676 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_70908988(
                                                                                  v19,
                                                                                  v26,
                                                                                  0);
          }
          v15 = (int)v16[1].klass;
          if ( (int)++v17 >= v15 )
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
  __int64 v4; // x1

  MyRoomBackGroundManager__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void MyRoomBackGroundManager__ScheduleUpdate(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4C221B8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C2D490(&MyRoomControl_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C221B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_8:
    sub_1C2D6EC(Instance, v3);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *BackGroundByLoadType; // x1

  MyRoomBackGroundManager__Init(this, *(const MethodInfo **)&type);
  this->fields.loadType = type;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0);
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
  UnityEngine_GameObject_o *ComponentsInChildren_object__51538676; // x0
  __int64 v14; // x1
  struct MyRoomBackGroundManager_BackObject_o *v15; // x8
  __int64 v16; // x2
  int klass; // w8
  UnityEngine_GameObject_o *v18; // x19
  unsigned int v19; // w21
  UnityEngine_GameObject_c **v20; // x8
  UnityEngine_Animation_o *v21; // x20
  MyRoomBackGroundManager_o *v22; // x0
  const MethodInfo *v23; // x1
  int32_t ClipCount; // w0
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  int32_t BackObjectAnimationNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C221B3 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_9218/*"MyRoomBackObj_loop"*/);
    byte_4C221B3 = 1;
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
        v15 = this->fields.backObject;
        if ( !v15 )
          goto LABEL_23;
        ComponentsInChildren_object__51538676 = v15->fields.instanceObject;
        if ( !ComponentsInChildren_object__51538676 )
          goto LABEL_23;
        ComponentsInChildren_object__51538676 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                                                              ComponentsInChildren_object__51538676,
                                                                              (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
        if ( !ComponentsInChildren_object__51538676 )
          goto LABEL_23;
        klass = (int)ComponentsInChildren_object__51538676[1].klass;
        v18 = ComponentsInChildren_object__51538676;
        if ( klass >= 1 )
        {
          v19 = 0;
          while ( 1 )
          {
            if ( v19 >= klass )
              sub_1C2D6F4(ComponentsInChildren_object__51538676, v14, v16);
            v20 = &v18->klass + (int)v19;
            v21 = (UnityEngine_Animation_o *)v20[4];
            if ( !v21 )
              break;
            UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v20[4], 0);
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(v22, v23);
            ClipCount = UnityEngine_Animation__GetClipCount(v21, 0);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v21, 0);
            v25 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0);
            v26 = System_String__Concat_63457864((System_String_o *)StringLiteral_9218/*"MyRoomBackObj_loop"*/, v25, 0);
            ComponentsInChildren_object__51538676 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_70908988(
                                                                                  v21,
                                                                                  v26,
                                                                                  0);
            klass = (int)v18[1].klass;
            if ( (int)++v19 >= klass )
              return;
          }
LABEL_23:
          sub_1C2D6EC(ComponentsInChildren_object__51538676, v14);
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
  if ( (byte_4C221B4 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23124/*"root/numD"*/);
    sub_1C2D490(&StringLiteral_22318/*"num"*/);
    sub_1C2D490(&StringLiteral_17673/*"c"*/);
    sub_1C2D490(&StringLiteral_23120/*"root/line"*/);
    sub_1C2D490(&StringLiteral_23122/*"root/numB"*/);
    sub_1C2D490(&StringLiteral_18808/*"ef_clock_num"*/);
    sub_1C2D490(&StringLiteral_23121/*"root/numA"*/);
    this = (MyRoomBackGroundManager_o *)sub_1C2D490(&StringLiteral_23123/*"root/numC"*/);
    byte_4C221B4 = 1;
  }
  v31 = 0;
  backObject = v2->fields.backObject;
  if ( !backObject )
    goto LABEL_89;
  v4 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                 backObject->fields.instanceObject,
                                 (System_String_o *)StringLiteral_23121/*"root/numA"*/,
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
                                   (System_String_o *)StringLiteral_23120/*"root/line"*/,
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
                                    (System_String_o *)StringLiteral_23121/*"root/numA"*/,
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
                                        (System_String_o *)StringLiteral_22318/*"num"*/,
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
                               (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(
                                                (UnityEngine_Object_o *)Component_object,
                                                0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v8 / 600;
            v14 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63496112(
                                                  (System_String_o *)StringLiteral_18808/*"ef_clock_num"*/,
                                                  v14,
                                                  (System_String_o *)StringLiteral_17673/*"c"*/,
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
                                    (System_String_o *)StringLiteral_23122/*"root/numB"*/,
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
                                        (System_String_o *)StringLiteral_22318/*"num"*/,
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
                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v18, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v8 / 60 % 10;
            v19 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63496112(
                                                  (System_String_o *)StringLiteral_18808/*"ef_clock_num"*/,
                                                  v19,
                                                  (System_String_o *)StringLiteral_17673/*"c"*/,
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
                                    (System_String_o *)StringLiteral_23123/*"root/numC"*/,
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
                                        (System_String_o *)StringLiteral_22318/*"num"*/,
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
                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v24, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v21 / 10;
            v25 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63496112(
                                                  (System_String_o *)StringLiteral_18808/*"ef_clock_num"*/,
                                                  v25,
                                                  (System_String_o *)StringLiteral_17673/*"c"*/,
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
                                    (System_String_o *)StringLiteral_23124/*"root/numD"*/,
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
                                        (System_String_o *)StringLiteral_22318/*"num"*/,
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
                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v29, 0) )
          {
            v31 = (char)(v21 - 10 * (((1717986919LL * v21) >> 34) + (1717986919LL * v21 < 0)));
            v30 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_63496112(
                                                  (System_String_o *)StringLiteral_18808/*"ef_clock_num"*/,
                                                  v30,
                                                  (System_String_o *)StringLiteral_17673/*"c"*/,
                                                  0);
            if ( v29 )
            {
              UISprite__set_spriteName((UISprite_o *)v29, (System_String_o *)this, 0);
              return;
            }
LABEL_89:
            sub_1C2D6EC(this, method);
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
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C221BF & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_9209/*"MyRoom/BackObject/{0}"*/);
    byte_4C221BF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.assetId = id;
  v9 = id;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v5, v6, v7);
  this->fields.assetName = System_String__Format((System_String_o *)StringLiteral_9209/*"MyRoom/BackObject/{0}"*/, v8, 0);
  sub_1C2D434(&this->fields.assetName);
  this->fields.instanceObject = 0;
  sub_1C2D434(&this->fields.instanceObject);
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

  if ( (byte_4C221C3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__);
    sub_1C2D490(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__);
    sub_1C2D490(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__);
    sub_1C2D490(&MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C221C3 = 1;
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
  v5 = sub_1C2D6DC(MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = 0,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0), !_4__this) )
  {
    sub_1C2D6EC(Instance, v7);
  }
  loadType = _4__this->fields.loadType;
  if ( (loadType & 1) != 0 )
  {
    ++*(_DWORD *)(v5 + 16);
    v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__,
      0);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0);
    loadType = _4__this->fields.loadType;
  }
  if ( (loadType & 2) != 0 )
  {
    ++*(_DWORD *)(v5 + 16);
    v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__,
      0);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v12, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0);
  }
  v15 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__,
    0);
  v16 = (UnityEngine_WaitWhile_o *)sub_1C2D6DC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v16, v15, 0);
  this->fields.__2__current = (Il2CppObject *)v16;
  p__2__current = &this->fields.__2__current;
  sub_1C2D434(p__2__current);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  __int64 v7; // x1
  System_Action_o *v8; // x21
  MyRoomBackGroundManager_o *v9; // x0
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x21
  System_Func_bool__o *v12; // x21
  UnityEngine_WaitWhile_o *v13; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4C221C2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__);
    sub_1C2D490(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__);
    sub_1C2D490(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__);
    sub_1C2D490(&MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C221C2 = 1;
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
  v5 = sub_1C2D6DC(MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 24) = this->fields.__4__this;
  sub_1C2D434(v5 + 24);
  *(_BYTE *)(v5 + 16) = 1;
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__,
    0);
  *(_QWORD *)(v5 + 40) = v8;
  backTexture = (UnityEngine_Component_o *)sub_1C2D434(v5 + 40);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0),
        *(_QWORD *)(v5 + 32) = MyRoomBackGroundManager__GetBgImgName(v9, v10),
        sub_1C2D434(v5 + 32),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0) )
  {
LABEL_16:
    sub_1C2D6EC(backTexture, v7);
  }
  UITexture__set_uvRect((UITexture_o *)backTexture, _4__this->fields.DISP_RECT, 0);
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v11, 0);
  v12 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__,
    0);
  v13 = (UnityEngine_WaitWhile_o *)sub_1C2D6DC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v13, v12, 0);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_1C2D434(p__2__current);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_MyRoomBackGroundManager__LoadBackGround_d__28_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  int32_t BackObjectId; // w0
  int32_t v7; // w22
  MyRoomBackGroundManager_BackObject_o *v8; // x23
  const MethodInfo *v9; // x2
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x21
  System_String_o *assetName; // x22
  System_String_o *v12; // x21
  AssetLoader_LoadEndDataHandler_o *v13; // x22
  struct System_Action_o *callback; // x8
  bool result; // w0
  System_Func_bool__o *v16; // x21
  UnityEngine_WaitWhile_o *v17; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4C221C4 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&MyRoomBackGroundManager_BackObject_TypeInfo);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__);
    sub_1C2D490(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__);
    sub_1C2D490(&MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1C2D490(&UnityEngine_WaitWhile_TypeInfo);
    byte_4C221C4 = 1;
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
  v5 = sub_1C2D6DC(MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = v2->fields.__4__this;
  this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1C2D434(v5 + 16);
  *(_BYTE *)(v5 + 24) = 0;
  if ( !_4__this )
    goto LABEL_22;
  BackObjectId = MyRoomBackGroundManager__GetBackObjectId((MyRoomBackGroundManager_o *)this, method);
  if ( BackObjectId >= 1 )
  {
    v7 = BackObjectId;
    v8 = (MyRoomBackGroundManager_BackObject_o *)sub_1C2D6DC(MyRoomBackGroundManager_BackObject_TypeInfo);
    MyRoomBackGroundManager_BackObject___ctor(v8, v7, v9);
    _4__this->fields.backObject = v8;
    p_backObject = &_4__this->fields.backObject;
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1C2D434(p_backObject);
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
        v12 = (*p_backObject)->fields.assetName;
        v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v12, v13, 1, 0);
        goto LABEL_21;
      }
LABEL_22:
      sub_1C2D6EC(this, method);
    }
    *p_backObject = 0;
    sub_1C2D434(p_backObject);
  }
LABEL_21:
  v16 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__,
    0);
  v17 = (UnityEngine_WaitWhile_o *)sub_1C2D6DC(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v17, v16, 0);
  v2->fields.__2__current = (Il2CppObject *)v17;
  p__2__current = &v2->fields.__2__current;
  sub_1C2D434(p__2__current);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_MyRoomBackGroundManager__LoadBackObject_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  Il2CppObject *v8; // x0
  struct MyRoomBackGroundManager_o *v9; // x8
  struct MyRoomBackGroundManager_o *v10; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v12; // x20
  int v13; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4C221C0 & 1) == 0 )
  {
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)sub_1C2D490(&StringLiteral_3029/*"Back/back{0}"*/);
    byte_4C221C0 = 1;
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
  v13 = 10400;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v5, v6, v7);
  v2->fields.imgName = System_String__Format((System_String_o *)StringLiteral_3029/*"Back/back{0}"*/, v8, 0);
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)sub_1C2D434(&v2->fields.imgName);
  v9 = v2->fields.__4__this;
  if ( !v9 || (this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)v9->fields.backTexture) == 0 )
LABEL_13:
    sub_1C2D6EC(this, method);
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0);
LABEL_9:
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_13;
  backTexture = v10->fields.backTexture;
  v12 = *p_imgName;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(backTexture, v12, 0);
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
  Il2CppObject *Object_object__51051712; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v9; // x20
  struct MyRoomBackGroundManager_o *v10; // x8

  if ( (byte_4C221C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_9217/*"MyRoomBackObj"*/);
    byte_4C221C1 = 1;
  }
  if ( assetData )
  {
    Object_object__51051712 = AssetData__GetObject_object__51051712(
                                assetData,
                                (System_String_o *)StringLiteral_9217/*"MyRoomBackObj"*/,
                                (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51051712, 0, 0) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_15;
      transform = UnityEngine_Component__get_transform(_4__this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__51752420(
                                              Object_object__51051712,
                                              transform,
                                              (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
      if ( !_4__this
        || (v9 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
            (v10 = this->fields.__4__this) == 0)
        || (_4__this = (UnityEngine_Component_o *)v10->fields.backObject) == 0 )
      {
LABEL_15:
        sub_1C2D6EC(_4__this, v6);
      }
      _4__this[1].monitor = v9;
      sub_1C2D434(&_4__this[1].monitor);
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