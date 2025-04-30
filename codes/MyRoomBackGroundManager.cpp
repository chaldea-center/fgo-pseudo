void __fastcall MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  this->fields.DISP_RECT = (struct UnityEngine_Rect_o)xmmword_BC3F80;
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
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  System_String_o *assetName; // x20

  if ( (byte_4A494BD & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A494BD = 1;
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
      v10 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_69356480(v10, 0LL);
      if ( !*p_backObject )
LABEL_15:
        sub_1B86614(v8, v9);
      assetName = (*p_backObject)->fields.assetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(assetName, 0LL);
    }
  }
  *p_backObject = 0LL;
  sub_1B8635C(p_backObject);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectAnimationNum(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4A494C2 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B863B8(&MyRoomControl_TypeInfo, v2);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A494C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B86614(Instance, v5);
  return MyRoomAddMaster__GetBackObjAnimationNum((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x19
  int32_t v7; // w0

  if ( (byte_4A494BF & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B863B8(&MyRoomControl_TypeInfo, v2);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A494BF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B86614(Instance, v5);
  v7 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  return v7 & ~(v7 >> 31);
}


System_String_o *__fastcall MyRoomBackGroundManager__GetBgImgName(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x19
  int32_t v9; // w0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  int v13; // w9
  Il2CppObject *v14; // x0
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A494BE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B863B8(&int_TypeInfo, v2);
    sub_1B863B8(&MyRoomControl_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B863B8(&StringLiteral_3041/*"Back/back{0}"*/, v5);
    byte_4A494BE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0LL);
  if ( !MasterData_object )
LABEL_11:
    sub_1B86614(Instance, v7);
  v9 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  if ( v9 >= 1 )
    v13 = v9;
  else
    v13 = 10400;
  v16 = v13;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v10, v11, v12);
  return System_String__Format((System_String_o *)StringLiteral_3041/*"Back/back{0}"*/, v14, 0LL);
}


int64_t __fastcall MyRoomBackGroundManager__GetScheduleUpdateAt(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int64_t v5; // x0

  if ( (byte_4A494C1 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_4A494C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v4);
  }
  v5 = MyRoomAddMaster__GetChangeMyRoomGetScheduleUpdateAt((MyRoomAddMaster_o *)Instance, 0LL);
  return v5 & ~(v5 >> 63);
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
    sub_1B86614(0LL, v3);
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

  if ( (byte_4A494C5 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo, callback);
    byte_4A494C5 = 1;
  }
  v5 = sub_1B86604(MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C(v5 + 32);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B8635C(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4A494C4 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo, callback);
    byte_4A494C4 = 1;
  }
  v5 = sub_1B86604(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C(v5 + 32);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B8635C(v5 + 40);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21

  if ( (byte_4A494C6 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo, callback);
    byte_4A494C6 = 1;
  }
  v5 = sub_1B86604(MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C(v5 + 32);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B8635C(v5 + 40);
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
  __int64 v5; // x1
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__50076180; // x0
  __int64 v9; // x1
  struct MyRoomBackGroundManager_BackObject_o *v10; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v12; // x20
  unsigned int v13; // w22
  UnityEngine_GameObject_c **v14; // x8
  SimpleAnimation_o *v15; // x21
  struct MyRoomBackGroundManager_BackObject_o *v16; // x8
  int v17; // w8
  UnityEngine_GameObject_o *v18; // x19
  unsigned int v19; // w21
  UnityEngine_GameObject_c **v20; // x8
  UnityEngine_Animation_o *v21; // x20
  MyRoomBackGroundManager_o *v22; // x0
  const MethodInfo *v23; // x1
  MyRoomBackGroundManager_o *ScheduleUpdateAt; // x0
  const MethodInfo *v25; // x1
  int32_t ClipCount; // w0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int32_t BackObjectAnimationNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A494C3 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___, method);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_9077/*"MyRoomBackObj_loop"*/, v5);
    byte_4A494C3 = 1;
  }
  BackObjectAnimationNum = 0;
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__50076180 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          instanceObject,
                                                                          0LL,
                                                                          0LL);
    if ( ((unsigned __int8)ComponentsInChildren_object__50076180 & 1) != 0 )
    {
      v10 = this->fields.backObject;
      if ( !v10 )
        goto LABEL_29;
      ComponentsInChildren_object__50076180 = v10->fields.instanceObject;
      if ( !ComponentsInChildren_object__50076180 )
        goto LABEL_29;
      ComponentsInChildren_object__50076180 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                                                            ComponentsInChildren_object__50076180,
                                                                            (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !ComponentsInChildren_object__50076180 )
        goto LABEL_29;
      klass = (int)ComponentsInChildren_object__50076180[1].klass;
      v12 = ComponentsInChildren_object__50076180;
      if ( klass >= 1 )
      {
        v13 = 0;
        while ( v13 < klass )
        {
          v14 = &v12->klass + (int)v13;
          v15 = (SimpleAnimation_o *)v14[4];
          if ( !v15 )
            goto LABEL_29;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v14[4], 0LL);
          ComponentsInChildren_object__50076180 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v15, 0LL);
          klass = (int)v12[1].klass;
          if ( (int)++v13 >= klass )
            goto LABEL_15;
        }
LABEL_30:
        sub_1B8661C(ComponentsInChildren_object__50076180, v9);
      }
LABEL_15:
      v16 = this->fields.backObject;
      if ( !v16
        || (ComponentsInChildren_object__50076180 = v16->fields.instanceObject) == 0LL
        || (ComponentsInChildren_object__50076180 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                                                                  ComponentsInChildren_object__50076180,
                                                                                  (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_29:
        sub_1B86614(ComponentsInChildren_object__50076180, v9);
      }
      v17 = (int)ComponentsInChildren_object__50076180[1].klass;
      v18 = ComponentsInChildren_object__50076180;
      if ( v17 >= 1 )
      {
        v19 = 0;
        while ( v19 < v17 )
        {
          v20 = &v18->klass + (int)v19;
          v21 = (UnityEngine_Animation_o *)v20[4];
          if ( !v21 )
            goto LABEL_29;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v20[4], 0LL);
          ScheduleUpdateAt = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(v22, v23);
          if ( (__int64)ScheduleUpdateAt < 1 )
          {
            ComponentsInChildren_object__50076180 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v21, 0LL);
          }
          else
          {
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(ScheduleUpdateAt, v25);
            ClipCount = UnityEngine_Animation__GetClipCount(v21, 0LL);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v21, 0LL);
            v27 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0LL);
            v28 = System_String__Concat_61645176((System_String_o *)StringLiteral_9077/*"MyRoomBackObj_loop"*/, v27, 0LL);
            ComponentsInChildren_object__50076180 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_69099832(
                                                                                  v21,
                                                                                  v28,
                                                                                  0LL);
          }
          v17 = (int)v18[1].klass;
          if ( (int)++v19 >= v17 )
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
    sub_1B86614(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall MyRoomBackGroundManager__ScheduleUpdate(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4A494C0 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B863B8(&MyRoomControl_TypeInfo, v2);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4A494C0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B86614(Instance, v5);
  MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
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
    sub_1B86614(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
}


void __fastcall MyRoomBackGroundManager__Update(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x1
  int64_t Time; // x20
  const MethodInfo *v11; // x1
  MyRoomBackGroundManager_o *v12; // x0
  const MethodInfo *v13; // x1
  MyRoomBackGroundManager_o *ScheduleUpdateAt; // x0
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *ComponentsInChildren_object__50076180; // x0
  __int64 v17; // x1
  struct MyRoomBackGroundManager_BackObject_o *v18; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v20; // x19
  unsigned int v21; // w21
  UnityEngine_GameObject_c **v22; // x8
  UnityEngine_Animation_o *v23; // x20
  MyRoomBackGroundManager_o *v24; // x0
  const MethodInfo *v25; // x1
  int32_t ClipCount; // w0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int32_t BackObjectAnimationNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A494BB & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_9077/*"MyRoomBackObj_loop"*/, v5);
    byte_4A494BB = 1;
  }
  BackObjectAnimationNum = 0;
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Equality(instanceObject, 0LL, 0LL);
    if ( !v8
      && (this->fields.loadType & 2) != 0
      && MyRoomBackGroundManager__GetScheduleUpdateAt((MyRoomBackGroundManager_o *)v8, v9) >= 1 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      MyRoomBackGroundManager__UpdateTimer(this, v11);
      ScheduleUpdateAt = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(v12, v13);
      if ( Time >= (__int64)ScheduleUpdateAt )
      {
        MyRoomBackGroundManager__ScheduleUpdate(ScheduleUpdateAt, v15);
        v18 = this->fields.backObject;
        if ( !v18 )
          goto LABEL_23;
        ComponentsInChildren_object__50076180 = v18->fields.instanceObject;
        if ( !ComponentsInChildren_object__50076180 )
          goto LABEL_23;
        ComponentsInChildren_object__50076180 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50076180(
                                                                              ComponentsInChildren_object__50076180,
                                                                              (const MethodInfo_2FC1A14 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
        if ( !ComponentsInChildren_object__50076180 )
          goto LABEL_23;
        klass = (int)ComponentsInChildren_object__50076180[1].klass;
        v20 = ComponentsInChildren_object__50076180;
        if ( klass >= 1 )
        {
          v21 = 0;
          while ( 1 )
          {
            if ( v21 >= klass )
              sub_1B8661C(ComponentsInChildren_object__50076180, v17);
            v22 = &v20->klass + (int)v21;
            v23 = (UnityEngine_Animation_o *)v22[4];
            if ( !v23 )
              break;
            UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v22[4], 0LL);
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(v24, v25);
            ClipCount = UnityEngine_Animation__GetClipCount(v23, 0LL);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v23, 0LL);
            v27 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0LL);
            v28 = System_String__Concat_61645176((System_String_o *)StringLiteral_9077/*"MyRoomBackObj_loop"*/, v27, 0LL);
            ComponentsInChildren_object__50076180 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_69099832(
                                                                                  v23,
                                                                                  v28,
                                                                                  0LL);
            klass = (int)v20[1].klass;
            if ( (int)++v21 >= klass )
              return;
          }
LABEL_23:
          sub_1B86614(ComponentsInChildren_object__50076180, v17);
        }
      }
    }
  }
}


void __fastcall MyRoomBackGroundManager__UpdateTimer(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  MyRoomBackGroundManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *v14; // x20
  MyRoomBackGroundManager_o *Time; // x20
  const MethodInfo *v16; // x1
  struct MyRoomBackGroundManager_BackObject_o *v17; // x8
  __int64 v18; // x23
  UnityEngine_Object_o *v19; // x20
  struct MyRoomBackGroundManager_BackObject_o *v20; // x8
  UnityEngine_Object_o *v21; // x20
  UnityEngine_Object_o *v22; // x20
  Il2CppObject *Component_object; // x20
  System_String_o *v24; // x0
  struct MyRoomBackGroundManager_BackObject_o *v25; // x8
  UnityEngine_Object_o *v26; // x20
  UnityEngine_Object_o *v27; // x20
  Il2CppObject *v28; // x20
  System_String_o *v29; // x0
  struct MyRoomBackGroundManager_BackObject_o *v30; // x8
  char v31; // w22
  UnityEngine_Object_o *v32; // x20
  UnityEngine_Object_o *v33; // x20
  Il2CppObject *v34; // x20
  System_String_o *v35; // x0
  struct MyRoomBackGroundManager_BackObject_o *v36; // x8
  UnityEngine_Object_o *v37; // x19
  UnityEngine_Object_o *v38; // x19
  Il2CppObject *v39; // x19
  System_String_o *v40; // x0
  __int64 v41; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4A494BC & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_22815/*"root/numD"*/, v5);
    sub_1B863B8(&StringLiteral_22017/*"num"*/, v6);
    sub_1B863B8(&StringLiteral_17452/*"c"*/, v7);
    sub_1B863B8(&StringLiteral_22811/*"root/line"*/, v8);
    sub_1B863B8(&StringLiteral_22813/*"root/numB"*/, v9);
    sub_1B863B8(&StringLiteral_18588/*"ef_clock_num"*/, v10);
    sub_1B863B8(&StringLiteral_22812/*"root/numA"*/, v11);
    this = (MyRoomBackGroundManager_o *)sub_1B863B8(&StringLiteral_22814/*"root/numC"*/, v12);
    byte_4A494BC = 1;
  }
  v41 = 0LL;
  backObject = v2->fields.backObject;
  if ( !backObject )
    goto LABEL_89;
  v14 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                  backObject->fields.instanceObject,
                                  (System_String_o *)StringLiteral_22812/*"root/numA"*/,
                                  0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v14, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v14 )
      goto LABEL_89;
    this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
    if ( !this )
      goto LABEL_89;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      return;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = (MyRoomBackGroundManager_o *)NetworkManager__getTime(0LL);
    this = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(Time, v16);
    v17 = v2->fields.backObject;
    v18 = ((char *)this - (char *)Time) % 60 <= 0
        ? ((char *)this - (char *)Time) / 60
        : ((char *)this - (char *)Time) / 60 + 1;
    if ( !v17 )
      goto LABEL_89;
    v19 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v17->fields.instanceObject,
                                    (System_String_o *)StringLiteral_22811/*"root/line"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v19, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
        if ( !this )
          goto LABEL_89;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      }
    }
    v20 = v2->fields.backObject;
    if ( !v20 )
      goto LABEL_89;
    v21 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v20->fields.instanceObject,
                                    (System_String_o *)StringLiteral_22812/*"root/numA"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v21, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v22 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v21,
                                        (System_String_o *)StringLiteral_22017/*"num"*/,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v22, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_89;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)v22,
                               (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(
                                                (UnityEngine_Object_o *)Component_object,
                                                0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v41 = v18 / 600;
            v24 = System_Int64__ToString((int64_t)&v41, 0LL);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_61683424(
                                                  (System_String_o *)StringLiteral_18588/*"ef_clock_num"*/,
                                                  v24,
                                                  (System_String_o *)StringLiteral_17452/*"c"*/,
                                                  0LL);
            if ( !Component_object )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0LL);
          }
        }
      }
    }
    v25 = v2->fields.backObject;
    if ( !v25 )
      goto LABEL_89;
    v26 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v25->fields.instanceObject,
                                    (System_String_o *)StringLiteral_22813/*"root/numB"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v26, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v26 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0LL);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v27 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v26,
                                        (System_String_o *)StringLiteral_22017/*"num"*/,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v27, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v27 )
            goto LABEL_89;
          v28 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v27,
                  (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v28, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v41 = v18 / 60 % 10;
            v29 = System_Int64__ToString((int64_t)&v41, 0LL);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_61683424(
                                                  (System_String_o *)StringLiteral_18588/*"ef_clock_num"*/,
                                                  v29,
                                                  (System_String_o *)StringLiteral_17452/*"c"*/,
                                                  0LL);
            if ( !v28 )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)v28, (System_String_o *)this, 0LL);
          }
        }
      }
    }
    v30 = v2->fields.backObject;
    if ( !v30 )
      goto LABEL_89;
    v31 = v18 % 60;
    v32 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v30->fields.instanceObject,
                                    (System_String_o *)StringLiteral_22814/*"root/numC"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v32, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v32 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v32, 0LL);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v33 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v32,
                                        (System_String_o *)StringLiteral_22017/*"num"*/,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v33, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_89;
          v34 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v33,
                  (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v34, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v41 = v31 / 10;
            v35 = System_Int64__ToString((int64_t)&v41, 0LL);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_61683424(
                                                  (System_String_o *)StringLiteral_18588/*"ef_clock_num"*/,
                                                  v35,
                                                  (System_String_o *)StringLiteral_17452/*"c"*/,
                                                  0LL);
            if ( !v34 )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)v34, (System_String_o *)this, 0LL);
          }
        }
      }
    }
    v36 = v2->fields.backObject;
    if ( !v36 )
      goto LABEL_89;
    v37 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v36->fields.instanceObject,
                                    (System_String_o *)StringLiteral_22815/*"root/numD"*/,
                                    0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v37, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v37 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v37, 0LL);
      if ( !this )
        goto LABEL_89;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        v38 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v37,
                                        (System_String_o *)StringLiteral_22017/*"num"*/,
                                        0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v38, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v38 )
            goto LABEL_89;
          v39 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v38,
                  (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v39, 0LL) )
          {
            v41 = (char)(v31 - 10 * (((1717986919LL * v31) >> 34) + (1717986919LL * v31 < 0)));
            v40 = System_Int64__ToString((int64_t)&v41, 0LL);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_61683424(
                                                  (System_String_o *)StringLiteral_18588/*"ef_clock_num"*/,
                                                  v40,
                                                  (System_String_o *)StringLiteral_17452/*"c"*/,
                                                  0LL);
            if ( v39 )
            {
              UISprite__set_spriteName((UISprite_o *)v39, (System_String_o *)this, 0LL);
              return;
            }
LABEL_89:
            sub_1B86614(this, method);
          }
        }
      }
    }
  }
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
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A494C7 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&id);
    sub_1B863B8(&StringLiteral_9068/*"MyRoom/BackObject/{0}"*/, v5);
    byte_4A494C7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v10 = id;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v6, v7, v8);
  this->fields.assetName = System_String__Format((System_String_o *)StringLiteral_9068/*"MyRoom/BackObject/{0}"*/, v9, 0LL);
  sub_1B8635C(&this->fields.assetName);
  this->fields.instanceObject = 0LL;
  sub_1B8635C(&this->fields.instanceObject);
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
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4A494CB & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&System_Func_bool__TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B863B8(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__, v5);
    sub_1B863B8(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__, v6);
    sub_1B863B8(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__, v7);
    sub_1B863B8(&MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo, v8);
    sub_1B863B8(&UnityEngine_WaitWhile_TypeInfo, v9);
    byte_4A494CB = 1;
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
  v12 = sub_1B86604(MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_DWORD *)(v12 + 16) = 0,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL), !_4__this) )
  {
    sub_1B86614(Instance, v14);
  }
  loadType = _4__this->fields.loadType;
  if ( (loadType & 1) != 0 )
  {
    ++*(_DWORD *)(v12 + 16);
    v16 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v12,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v16, v17);
    UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
    loadType = _4__this->fields.loadType;
  }
  if ( (loadType & 2) != 0 )
  {
    ++*(_DWORD *)(v12 + 16);
    v19 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v12,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v19, v20);
    UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v22 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v22,
    (Il2CppObject *)v12,
    Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__,
    0LL);
  v23 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v23, v22, 0LL);
  this->fields.__2__current = (Il2CppObject *)v23;
  p__2__current = &this->fields.__2__current;
  sub_1B8635C(p__2__current);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  System_Action_o *v15; // x21
  MyRoomBackGroundManager_o *v16; // x0
  const MethodInfo *v17; // x1
  System_Action_o *v18; // x21
  System_Func_bool__o *v19; // x21
  UnityEngine_WaitWhile_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4A494CA & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AtlasManager_TypeInfo, v3);
    sub_1B863B8(&System_Func_bool__TypeInfo, v4);
    sub_1B863B8(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__, v5);
    sub_1B863B8(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__, v6);
    sub_1B863B8(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__, v7);
    sub_1B863B8(&MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo, v8);
    sub_1B863B8(&UnityEngine_WaitWhile_TypeInfo, v9);
    byte_4A494CA = 1;
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
  v12 = sub_1B86604(MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_16;
  *(_QWORD *)(v12 + 24) = this->fields.__4__this;
  sub_1B8635C(v12 + 24);
  *(_BYTE *)(v12 + 16) = 1;
  v15 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v12,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v12 + 40) = v15;
  backTexture = (UnityEngine_Component_o *)sub_1B8635C(v12 + 40);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0LL),
        *(_QWORD *)(v12 + 32) = MyRoomBackGroundManager__GetBgImgName(v16, v17),
        sub_1B8635C(v12 + 32),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_16:
    sub_1B86614(backTexture, v14);
  }
  UITexture__set_uvRect((UITexture_o *)backTexture, _4__this->fields.DISP_RECT, 0LL);
  v18 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v12,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v18, 0LL);
  v19 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v19,
    (Il2CppObject *)v12,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__,
    0LL);
  v20 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v20, v19, 0LL);
  this->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = &this->fields.__2__current;
  sub_1B8635C(p__2__current);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomBackGroundManager__LoadBackGround_d__28_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  int32_t BackObjectId; // w0
  int32_t v14; // w22
  MyRoomBackGroundManager_BackObject_o *v15; // x23
  const MethodInfo *v16; // x2
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x21
  System_String_o *assetName; // x22
  System_String_o *v19; // x21
  AssetLoader_LoadEndDataHandler_o *v20; // x22
  struct System_Action_o *callback; // x8
  bool result; // w0
  System_Func_bool__o *v23; // x21
  UnityEngine_WaitWhile_o *v24; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4A494CC & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&MyRoomBackGroundManager_BackObject_TypeInfo, v3);
    sub_1B863B8(&System_Func_bool__TypeInfo, v4);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B863B8(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__, v6);
    sub_1B863B8(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__, v7);
    sub_1B863B8(&MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo, v8);
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1B863B8(&UnityEngine_WaitWhile_TypeInfo, v9);
    byte_4A494CC = 1;
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
  v12 = sub_1B86604(MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_22;
  *(_QWORD *)(v12 + 16) = v2->fields.__4__this;
  this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1B8635C(v12 + 16);
  *(_BYTE *)(v12 + 24) = 0;
  if ( !_4__this )
    goto LABEL_22;
  BackObjectId = MyRoomBackGroundManager__GetBackObjectId((MyRoomBackGroundManager_o *)this, method);
  if ( BackObjectId >= 1 )
  {
    v14 = BackObjectId;
    v15 = (MyRoomBackGroundManager_BackObject_o *)sub_1B86604(MyRoomBackGroundManager_BackObject_TypeInfo);
    MyRoomBackGroundManager_BackObject___ctor(v15, v14, v16);
    _4__this->fields.backObject = v15;
    p_backObject = &_4__this->fields.backObject;
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1B8635C(p_backObject);
    if ( !*p_backObject )
      goto LABEL_22;
    assetName = (*p_backObject)->fields.assetName;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)AssetManager__isExistAssetStorage(assetName, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      *(_BYTE *)(v12 + 24) = 1;
      if ( *p_backObject )
      {
        v19 = (*p_backObject)->fields.assetName;
        v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v20,
          (Il2CppObject *)v12,
          Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__,
          0LL);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v19, v20, 1, 0LL);
        goto LABEL_21;
      }
LABEL_22:
      sub_1B86614(this, method);
    }
    *p_backObject = 0LL;
    sub_1B8635C(p_backObject);
  }
LABEL_21:
  v23 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__,
    0LL);
  v24 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v24, v23, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v24;
  p__2__current = &v2->fields.__2__current;
  sub_1B8635C(p__2__current);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomBackGroundManager__LoadBackObject_d__29_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct MyRoomBackGroundManager_o *_4__this; // x8
  System_String_o **p_imgName; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  struct MyRoomBackGroundManager_o *v11; // x8
  struct MyRoomBackGroundManager_o *v12; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v14; // x20
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4A494C8 & 1) == 0 )
  {
    sub_1B863B8(&FSUtility_TypeInfo, method);
    sub_1B863B8(&int_TypeInfo, v3);
    this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)sub_1B863B8(&StringLiteral_3041/*"Back/back{0}"*/, v4);
    byte_4A494C8 = 1;
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
  v15 = 10400;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v7, v8, v9);
  v2->fields.imgName = System_String__Format((System_String_o *)StringLiteral_3041/*"Back/back{0}"*/, v10, 0LL);
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)sub_1B8635C(&v2->fields.imgName);
  v11 = v2->fields.__4__this;
  if ( !v11 || (this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)v11->fields.backTexture) == 0LL )
LABEL_13:
    sub_1B86614(this, method);
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0LL);
LABEL_9:
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_13;
  backTexture = v12->fields.backTexture;
  v14 = *p_imgName;
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(backTexture, v14, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Object_object__49610244; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v12; // x20
  struct MyRoomBackGroundManager_o *v13; // x8

  if ( (byte_4A494C9 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, assetData);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_9076/*"MyRoomBackObj"*/, v7);
    byte_4A494C9 = 1;
  }
  if ( assetData )
  {
    Object_object__49610244 = AssetData__GetObject_object__49610244(
                                assetData,
                                (System_String_o *)StringLiteral_9076/*"MyRoomBackObj"*/,
                                (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__49610244, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_15;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_object__50290416(
                                              Object_object__49610244,
                                              transform,
                                              (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
      if ( !_4__this
        || (v12 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
            (v13 = this->fields.__4__this) == 0LL)
        || (_4__this = (UnityEngine_Component_o *)v13->fields.backObject) == 0LL )
      {
LABEL_15:
        sub_1B86614(_4__this, v9);
      }
      _4__this[1].monitor = v12;
      sub_1B8635C(&_4__this[1].monitor);
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