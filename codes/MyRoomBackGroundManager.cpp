void MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  this->fields.DISP_RECT = (struct UnityEngine_Rect_o)xmmword_D00110;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomBackGroundManager__ClearBackObject(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct MyRoomBackGroundManager_BackObject_o *v9; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x20
  System_String_o *assetName; // x20

  if ( (byte_4D27590 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D27590 = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v9 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v9->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__op_Inequality(instanceObject, 0, 0);
    if ( v13 )
    {
      if ( !*p_backObject )
        goto LABEL_15;
      v15 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_72111160(v15, 0);
      if ( !*p_backObject )
LABEL_15:
        sub_1C942F0(v13, v14);
      assetName = (*p_backObject)->fields.assetName;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage(assetName, 0);
    }
  }
  *p_backObject = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_backObject, 0, v2, v3, v4, v5, v6, v7);
}


int32_t MyRoomBackGroundManager__GetBackObjectAnimationNum(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4D27595 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C94098(&MyRoomControl_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D27595 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_8:
    sub_1C942F0(Instance, v3);
  return MyRoomAddMaster__GetBackObjAnimationNum((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0);
}


int32_t MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19
  int32_t v5; // w0

  if ( (byte_4D27592 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C94098(&MyRoomControl_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D27592 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_8:
    sub_1C942F0(Instance, v3);
  v5 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0);
  return v5 & ~(v5 >> 31);
}


System_String_o *MyRoomBackGroundManager__GetBgImgName(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19
  int32_t v5; // w0
  int v6; // w9
  Il2CppObject *v7; // x0
  int v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D27591 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&MyRoomControl_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_3033/*"Back/back{0}"*/);
    byte_4D27591 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_11:
    sub_1C942F0(Instance, v3);
  v5 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 1, 0);
  if ( v5 >= 1 )
    v6 = v5;
  else
    v6 = 10400;
  v9 = v6;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format((System_String_o *)StringLiteral_3033/*"Back/back{0}"*/, v7, 0);
}


int64_t MyRoomBackGroundManager__GetScheduleUpdateAt(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  int64_t v4; // x0

  if ( (byte_4D27594 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D27594 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v3);
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
    sub_1C942F0(0, v3);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D27598 & 1) == 0 )
  {
    sub_1C94098(&MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
    byte_4D27598 = 1;
  }
  v5 = sub_1C942E4(MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D27597 & 1) == 0 )
  {
    sub_1C94098(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
    byte_4D27597 = 1;
  }
  v5 = sub_1C942E4(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D27599 & 1) == 0 )
  {
    sub_1C94098(&MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
    byte_4D27599 = 1;
  }
  v5 = sub_1C942E4(MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
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
  UnityEngine_GameObject_o *ComponentsInChildren_object__52384692; // x0
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

  if ( (byte_4D27596 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_9246/*"MyRoomBackObj_loop"*/);
    byte_4D27596 = 1;
  }
  BackObjectAnimationNum = 0;
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    ComponentsInChildren_object__52384692 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          instanceObject,
                                                                          0,
                                                                          0);
    if ( ((unsigned __int8)ComponentsInChildren_object__52384692 & 1) != 0 )
    {
      v7 = this->fields.backObject;
      if ( !v7 )
        goto LABEL_29;
      ComponentsInChildren_object__52384692 = v7->fields.instanceObject;
      if ( !ComponentsInChildren_object__52384692 )
        goto LABEL_29;
      ComponentsInChildren_object__52384692 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                                                                            ComponentsInChildren_object__52384692,
                                                                            (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !ComponentsInChildren_object__52384692 )
        goto LABEL_29;
      klass = (int)ComponentsInChildren_object__52384692[1].klass;
      v9 = ComponentsInChildren_object__52384692;
      if ( klass >= 1 )
      {
        v10 = 0;
        while ( v10 < klass )
        {
          v11 = &v9->klass + (int)v10;
          v12 = (SimpleAnimation_o *)v11[4];
          if ( !v12 )
            goto LABEL_29;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v11[4], 0);
          ComponentsInChildren_object__52384692 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v12, 0);
          klass = (int)v9[1].klass;
          if ( (int)++v10 >= klass )
            goto LABEL_15;
        }
LABEL_30:
        sub_1C942F8(ComponentsInChildren_object__52384692);
      }
LABEL_15:
      v13 = this->fields.backObject;
      if ( !v13
        || (ComponentsInChildren_object__52384692 = v13->fields.instanceObject) == 0
        || (ComponentsInChildren_object__52384692 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                                                                                  ComponentsInChildren_object__52384692,
                                                                                  (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0 )
      {
LABEL_29:
        sub_1C942F0(ComponentsInChildren_object__52384692, v6);
      }
      v14 = (int)ComponentsInChildren_object__52384692[1].klass;
      v15 = ComponentsInChildren_object__52384692;
      if ( v14 >= 1 )
      {
        v16 = 0;
        while ( v16 < v14 )
        {
          v17 = &v15->klass + (int)v16;
          v18 = (UnityEngine_Animation_o *)v17[4];
          if ( !v18 )
            goto LABEL_29;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v17[4], 0);
          ScheduleUpdateAt = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(v19, v20);
          if ( (__int64)ScheduleUpdateAt < 1 )
          {
            ComponentsInChildren_object__52384692 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v18, 0);
          }
          else
          {
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(ScheduleUpdateAt, v22);
            ClipCount = UnityEngine_Animation__GetClipCount(v18, 0);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v18, 0);
            v24 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0);
            v25 = System_String__Concat_64417744((System_String_o *)StringLiteral_9246/*"MyRoomBackObj_loop"*/, v24, 0);
            ComponentsInChildren_object__52384692 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_71854448(
                                                                                  v18,
                                                                                  v25,
                                                                                  0);
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


void MyRoomBackGroundManager__QuitBackGround(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  MyRoomBackGroundManager__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void MyRoomBackGroundManager__ScheduleUpdate(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  Il2CppObject *MasterData_object; // x19

  if ( (byte_4D27593 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C94098(&MyRoomControl_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D27593 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId(0);
  if ( !MasterData_object )
LABEL_8:
    sub_1C942F0(Instance, v3);
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
    sub_1C942F0(0, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0);
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
  UnityEngine_GameObject_o *ComponentsInChildren_object__52384692; // x0
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

  if ( (byte_4D2758E & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_9246/*"MyRoomBackObj_loop"*/);
    byte_4D2758E = 1;
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
        ComponentsInChildren_object__52384692 = v15->fields.instanceObject;
        if ( !ComponentsInChildren_object__52384692 )
          goto LABEL_23;
        ComponentsInChildren_object__52384692 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52384692(
                                                                              ComponentsInChildren_object__52384692,
                                                                              (const MethodInfo_31F53B4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
        if ( !ComponentsInChildren_object__52384692 )
          goto LABEL_23;
        klass = (int)ComponentsInChildren_object__52384692[1].klass;
        v17 = ComponentsInChildren_object__52384692;
        if ( klass >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            if ( v18 >= klass )
              sub_1C942F8(ComponentsInChildren_object__52384692);
            v19 = &v17->klass + (int)v18;
            v20 = (UnityEngine_Animation_o *)v19[4];
            if ( !v20 )
              break;
            UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v19[4], 0);
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(v21, v22);
            ClipCount = UnityEngine_Animation__GetClipCount(v20, 0);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v20, 0);
            v24 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0);
            v25 = System_String__Concat_64417744((System_String_o *)StringLiteral_9246/*"MyRoomBackObj_loop"*/, v24, 0);
            ComponentsInChildren_object__52384692 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_71854448(
                                                                                  v20,
                                                                                  v25,
                                                                                  0);
            klass = (int)v17[1].klass;
            if ( (int)++v18 >= klass )
              return;
          }
LABEL_23:
          sub_1C942F0(ComponentsInChildren_object__52384692, v14);
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
  if ( (byte_4D2758F & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_23375/*"root/numD"*/);
    sub_1C94098(&StringLiteral_22547/*"num"*/);
    sub_1C94098(&StringLiteral_17768/*"c"*/);
    sub_1C94098(&StringLiteral_23371/*"root/line"*/);
    sub_1C94098(&StringLiteral_23373/*"root/numB"*/);
    sub_1C94098(&StringLiteral_18941/*"ef_clock_num"*/);
    sub_1C94098(&StringLiteral_23372/*"root/numA"*/);
    this = (MyRoomBackGroundManager_o *)sub_1C94098(&StringLiteral_23374/*"root/numC"*/);
    byte_4D2758F = 1;
  }
  v31 = 0;
  backObject = v2->fields.backObject;
  if ( !backObject )
    goto LABEL_89;
  v4 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                 backObject->fields.instanceObject,
                                 (System_String_o *)StringLiteral_23372/*"root/numA"*/,
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
                                   (System_String_o *)StringLiteral_23371/*"root/line"*/,
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
                                    (System_String_o *)StringLiteral_23372/*"root/numA"*/,
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
                                        (System_String_o *)StringLiteral_22547/*"num"*/,
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
                               (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(
                                                (UnityEngine_Object_o *)Component_object,
                                                0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v8 / 600;
            v14 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_64456008(
                                                  (System_String_o *)StringLiteral_18941/*"ef_clock_num"*/,
                                                  v14,
                                                  (System_String_o *)StringLiteral_17768/*"c"*/,
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
                                    (System_String_o *)StringLiteral_23373/*"root/numB"*/,
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
                                        (System_String_o *)StringLiteral_22547/*"num"*/,
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
                  (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v18, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v8 / 60 % 10;
            v19 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_64456008(
                                                  (System_String_o *)StringLiteral_18941/*"ef_clock_num"*/,
                                                  v19,
                                                  (System_String_o *)StringLiteral_17768/*"c"*/,
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
                                    (System_String_o *)StringLiteral_23374/*"root/numC"*/,
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
                                        (System_String_o *)StringLiteral_22547/*"num"*/,
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
                  (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v24, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v31 = v21 / 10;
            v25 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_64456008(
                                                  (System_String_o *)StringLiteral_18941/*"ef_clock_num"*/,
                                                  v25,
                                                  (System_String_o *)StringLiteral_17768/*"c"*/,
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
                                    (System_String_o *)StringLiteral_23375/*"root/numD"*/,
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
                                        (System_String_o *)StringLiteral_22547/*"num"*/,
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
                  (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v29, 0) )
          {
            v31 = (char)(v21 - 10 * (((1717986919LL * v21) >> 34) + (1717986919LL * v21 < 0)));
            v30 = System_Int64__ToString((int64_t)&v31, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_64456008(
                                                  (System_String_o *)StringLiteral_18941/*"ef_clock_num"*/,
                                                  v30,
                                                  (System_String_o *)StringLiteral_17768/*"c"*/,
                                                  0);
            if ( v29 )
            {
              UISprite__set_spriteName((UISprite_o *)v29, (System_String_o *)this, 0);
              return;
            }
LABEL_89:
            sub_1C942F0(this, method);
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
  Il2CppObject *v5; // x0
  struct System_String_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2759A & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_9237/*"MyRoom/BackObject/{0}"*/);
    byte_4D2759A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.assetId = id;
  v19 = id;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v6 = System_String__Format((System_String_o *)StringLiteral_9237/*"MyRoom/BackObject/{0}"*/, v5, 0);
  this->fields.assetName = v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.assetName, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  this->fields.instanceObject = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.instanceObject, 0, v13, v14, v15, v16, v17, v18);
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4D2759E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__);
    sub_1C94098(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__);
    sub_1C94098(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__);
    sub_1C94098(&MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
    sub_1C94098(&UnityEngine_WaitWhile_TypeInfo);
    byte_4D2759E = 1;
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
  v5 = sub_1C942E4(MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_DWORD *)(v5 + 16) = 0,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
    || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0), !_4__this) )
  {
    sub_1C942F0(Instance, v7);
  }
  loadType = _4__this->fields.loadType;
  if ( (loadType & 1) != 0 )
  {
    ++*(_DWORD *)(v5 + 16);
    v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v9,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__,
      0);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v9, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0);
    loadType = _4__this->fields.loadType;
  }
  if ( (loadType & 2) != 0 )
  {
    ++*(_DWORD *)(v5 + 16);
    v12 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)v5,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__,
      0);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v12, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0);
  }
  v15 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__,
    0);
  v16 = (UnityEngine_WaitWhile_o *)sub_1C942E4(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v16, v15, 0);
  this->fields.__2__current = (Il2CppObject *)v16;
  p__2__current = &this->fields.__2__current;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v16, v18, v19, v20, v21, v22, v23);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct MyRoomBackGroundManager_o *v14; // x1
  System_Action_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  MyRoomBackGroundManager_o *v22; // x0
  const MethodInfo *v23; // x1
  System_String_o *BgImgName; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Action_o *v31; // x21
  System_Func_bool__o *v32; // x21
  UnityEngine_WaitWhile_o *v33; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  bool result; // w0
  struct System_Action_o *callback; // x8

  if ( (byte_4D2759D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__);
    sub_1C94098(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__);
    sub_1C94098(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__);
    sub_1C94098(&MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
    sub_1C94098(&UnityEngine_WaitWhile_TypeInfo);
    byte_4D2759D = 1;
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
  v5 = sub_1C942E4(MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  v14 = this->fields.__4__this;
  *(_QWORD *)(v5 + 24) = v14;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)v14, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 16) = 1;
  v15 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__,
    0);
  *(_QWORD *)(v5 + 40) = v15;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)v15, v16, v17, v18, v19, v20, v21);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0),
        BgImgName = MyRoomBackGroundManager__GetBgImgName(v22, v23),
        *(_QWORD *)(v5 + 32) = BgImgName,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)BgImgName, v25, v26, v27, v28, v29, v30),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0) )
  {
LABEL_16:
    sub_1C942F0(backTexture, v7);
  }
  UITexture__set_uvRect((UITexture_o *)backTexture, _4__this->fields.DISP_RECT, 0);
  v31 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__,
    0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v31, 0);
  v32 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v32,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__,
    0);
  v33 = (UnityEngine_WaitWhile_o *)sub_1C942E4(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v33, v32, 0);
  this->fields.__2__current = (Il2CppObject *)v33;
  p__2__current = &this->fields.__2__current;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v33, v35, v36, v37, v38, v39, v40);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_MyRoomBackGroundManager__LoadBackGround_d__28_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct MyRoomBackGroundManager_o *v12; // x1
  int32_t BackObjectId; // w0
  int32_t v14; // w22
  MyRoomBackGroundManager_BackObject_o *v15; // x23
  const MethodInfo *v16; // x2
  GrandQuestFolderBoardItem_o *p_backObject; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_String_o *namespaze; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_String_o *v31; // x21
  AssetLoader_LoadEndDataHandler_o *v32; // x22
  struct System_Action_o *callback; // x8
  bool result; // w0
  System_Func_bool__o *v35; // x21
  UnityEngine_WaitWhile_o *v36; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7

  v2 = this;
  if ( (byte_4D2759F & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&MyRoomBackGroundManager_BackObject_TypeInfo);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__);
    sub_1C94098(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__);
    sub_1C94098(&MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_1C94098(&UnityEngine_WaitWhile_TypeInfo);
    byte_4D2759F = 1;
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
  v5 = sub_1C942E4(MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  v12 = v2->fields.__4__this;
  *(_QWORD *)(v5 + 16) = v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v12, v6, v7, v8, v9, v10, v11);
  *(_BYTE *)(v5 + 24) = 0;
  if ( !_4__this )
    goto LABEL_22;
  BackObjectId = MyRoomBackGroundManager__GetBackObjectId((MyRoomBackGroundManager_o *)this, method);
  if ( BackObjectId >= 1 )
  {
    v14 = BackObjectId;
    v15 = (MyRoomBackGroundManager_BackObject_o *)sub_1C942E4(MyRoomBackGroundManager_BackObject_TypeInfo);
    MyRoomBackGroundManager_BackObject___ctor(v15, v14, v16);
    _4__this->fields.backObject = v15;
    p_backObject = (GrandQuestFolderBoardItem_o *)&_4__this->fields.backObject;
    sub_1C9403C(p_backObject, (int32_t)v15, v18, v19, v20, v21, v22, v23);
    if ( !p_backObject->klass )
      goto LABEL_22;
    namespaze = (System_String_o *)p_backObject->klass->_1.namespaze;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)AssetManager__isExistAssetStorage(namespaze, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      *(_BYTE *)(v5 + 24) = 1;
      if ( p_backObject->klass )
      {
        v31 = (System_String_o *)p_backObject->klass->_1.namespaze;
        v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v32,
          (Il2CppObject *)v5,
          Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__,
          0);
        if ( !AssetManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        AssetManager__loadAssetStorage(v31, v32, 1, 0);
        goto LABEL_21;
      }
LABEL_22:
      sub_1C942F0(this, method);
    }
    p_backObject->klass = 0;
    sub_1C9403C(p_backObject, 0, v25, v26, v27, v28, v29, v30);
  }
LABEL_21:
  v35 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v35,
    (Il2CppObject *)v5,
    Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__,
    0);
  v36 = (UnityEngine_WaitWhile_o *)sub_1C942E4(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v36, v35, 0);
  v2->fields.__2__current = (Il2CppObject *)v36;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C9403C(p__2__current, (int32_t)v36, v38, v39, v40, v41, v42, v43);
  result = 1;
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_MyRoomBackGroundManager__LoadBackObject_d__29_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct MyRoomBackGroundManager_o *v13; // x8
  struct MyRoomBackGroundManager_o *v14; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v16; // x20
  int v17; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4D2759B & 1) == 0 )
  {
    sub_1C94098(&FSUtility_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)sub_1C94098(&StringLiteral_3033/*"Back/back{0}"*/);
    byte_4D2759B = 1;
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
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v6 = System_String__Format((System_String_o *)StringLiteral_3033/*"Back/back{0}"*/, v5, 0);
  v2->fields.imgName = v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.imgName, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = v2->fields.__4__this;
  if ( !v13 || (this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)v13->fields.backTexture) == 0 )
LABEL_13:
    sub_1C942F0(this, method);
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
  Il2CppObject *Object_object__51893132; // x20
  __int64 v6; // x1
  char *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  char *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct MyRoomBackGroundManager_o *v16; // x8

  if ( (byte_4D2759C & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_9245/*"MyRoomBackObj"*/);
    byte_4D2759C = 1;
  }
  if ( assetData )
  {
    Object_object__51893132 = AssetData__GetObject_object__51893132(
                                assetData,
                                (System_String_o *)StringLiteral_9245/*"MyRoomBackObj"*/,
                                (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51893132, 0, 0) )
    {
      _4__this = (char *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_15;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)_4__this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      _4__this = (char *)UnityEngine_Object__Instantiate_object__52598436(
                           Object_object__51893132,
                           transform,
                           (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
      if ( !_4__this
        || (v9 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
            (v16 = this->fields.__4__this) == 0)
        || (_4__this = (char *)v16->fields.backObject) == 0 )
      {
LABEL_15:
        sub_1C942F0(_4__this, v6);
      }
      *((_QWORD *)_4__this + 4) = v9;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(_4__this + 32), (int32_t)v9, v10, v11, v12, v13, v14, v15);
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