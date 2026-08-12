void MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  this->fields.DISP_RECT = (struct UnityEngine_Rect_o)xmmword_E9C700;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomBackGroundManager__ClearBackObject(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct MyRoomBackGroundManager_BackObject_o *v9; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *v15; // x20
  __int64 v16; // x2
  System_String_o *assetName; // x20

  if ( (byte_596B407 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596B407 = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v9 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v9->fields.instanceObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    v13 = UnityEngine_Object__op_Inequality(instanceObject, 0, 0);
    if ( v13 )
    {
      if ( !*p_backObject )
        goto LABEL_15;
      v15 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v2);
      UnityEngine_Object__DestroyImmediate_83460132(v15, 0);
      if ( !*p_backObject )
LABEL_15:
        sub_2213CDC(v13, v14);
      assetName = (*p_backObject)->fields.assetName;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14, v16);
      AssetManager__releaseAssetStorage(assetName, 0);
    }
  }
  *p_backObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_backObject, 0, v2, v3, v4, v5, v6, v7);
}


int32_t MyRoomBackGroundManager__GetBackObjectAnimationNum(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *MasterData_object; // x19
  int32_t v7; // w20

  if ( (byte_596B40C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_2213A60(&MyRoomControl_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B40C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v3, v4);
  if ( !byte_596B4D9 )
  {
    sub_2213A60(&MyRoomControl_TypeInfo);
    byte_596B4D9 = 1;
  }
  Instance = (DataManager_o *)MyRoomControl_TypeInfo;
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v3, v4);
    Instance = (DataManager_o *)MyRoomControl_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)&Instance[1].fields._DispLog + 72LL) )
  {
    if ( MasterData_object )
      return MyRoomAddMaster__GetBackObjAnimationNumForLeftServant((MyRoomAddMaster_o *)MasterData_object, 0);
LABEL_17:
    sub_2213CDC(Instance, v3);
  }
  if ( !HIDWORD(Instance[1].fields.saveDataMapList) )
    j_il2cpp_runtime_class_init_0(Instance, v3, v4);
  v7 = MyRoomControl__DisplayGroupId(0);
  Instance = (DataManager_o *)MyRoomControl__DisplayWarId(0);
  if ( !MasterData_object )
    goto LABEL_17;
  return MyRoomAddMaster__GetBackObjAnimationNum((MyRoomAddMaster_o *)MasterData_object, v7, (int32_t)Instance, 0);
}


int32_t MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  MyRoomAddMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  int v7; // w20
  MyRoomControl_c *v8; // x0
  int32_t v10; // w20
  int32_t v11; // w0
  int32_t v12; // w0

  if ( (byte_596B409 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_2213A60(&MyRoomControl_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B409 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v3);
  }
  v4 = (MyRoomAddMaster_o *)Instance;
  v7 = MyRoomAddMaster__GetChangeMyRoomBackObjIdForLeftServant((MyRoomAddMaster_o *)Instance, 0);
  v8 = MyRoomControl_TypeInfo;
  if ( v7 >= 1 )
  {
    if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v5, v6);
    if ( !byte_596B4D9 )
    {
      sub_2213A60(&MyRoomControl_TypeInfo);
      byte_596B4D9 = 1;
    }
    v8 = MyRoomControl_TypeInfo;
    if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v5, v6);
      v8 = MyRoomControl_TypeInfo;
    }
    if ( v8->static_fields->isSpecialServantBackground )
      return v7;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v8, v5, v6);
  v10 = MyRoomControl__DisplayGroupId(0);
  v11 = MyRoomControl__DisplayWarId(0);
  v12 = MyRoomAddMaster__GetChangeMyRoomBackObjId(v4, v10, v11, 0);
  return v12 & ~(v12 >> 31);
}


System_String_o *MyRoomBackGroundManager__GetBgImgName(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  MyRoomAddMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t v7; // w20
  MyRoomControl_c *v8; // x0
  int32_t *v9; // x1
  int32_t v10; // w20
  int32_t v11; // w0
  int32_t v12; // w0
  int v13; // w9
  Il2CppObject *v14; // x0
  int v16; // [xsp+8h] [xbp-38h] BYREF
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596B408 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_2213A60(&MyRoomControl_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3154/*"Back/back{0}"*/);
    byte_596B408 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v3);
  }
  v4 = (MyRoomAddMaster_o *)Instance;
  v7 = MyRoomAddMaster__ResolveMyRoomBgIdForLeftServant((MyRoomAddMaster_o *)Instance, 1, 0);
  v8 = MyRoomControl_TypeInfo;
  if ( v7 < 1 )
    goto LABEL_24;
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v5, v6);
  if ( !byte_596B4D9 )
  {
    sub_2213A60(&MyRoomControl_TypeInfo);
    byte_596B4D9 = 1;
  }
  v8 = MyRoomControl_TypeInfo;
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v5, v6);
    v8 = MyRoomControl_TypeInfo;
  }
  if ( v8->static_fields->isSpecialServantBackground )
  {
    v9 = &v17;
    v17 = v7;
  }
  else
  {
LABEL_24:
    if ( !*(&v8->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v8, v5, v6);
    v10 = MyRoomControl__DisplayGroupId(0);
    v11 = MyRoomControl__DisplayWarId(0);
    v12 = MyRoomAddMaster__ResolveMyRoomBackgroundId(v4, v10, 1, v11, 0);
    if ( v12 >= 1 )
      v13 = v12;
    else
      v13 = 10400;
    v9 = &v16;
    v16 = v13;
  }
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, v9);
  return System_String__Format((System_String_o *)StringLiteral_3154/*"Back/back{0}"*/, v14, 0);
}


int64_t MyRoomBackGroundManager__GetScheduleUpdateAt(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  int64_t v4; // x0

  if ( (byte_596B40B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B40B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v3);
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
    sub_2213CDC(0, v3);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596B40F & 1) == 0 )
  {
    sub_2213A60(&MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
    byte_596B40F = 1;
  }
  v5 = sub_2213CCC(MyRoomBackGroundManager__LoadBackGround_d__28_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596B40E & 1) == 0 )
  {
    sub_2213A60(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
    byte_596B40E = 1;
  }
  v5 = sub_2213CCC(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_596B410 & 1) == 0 )
  {
    sub_2213A60(&MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
    byte_596B410 = 1;
  }
  v5 = sub_2213CCC(MyRoomBackGroundManager__LoadBackObject_d__29_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v12, v13, v14, v15, v16, v17);
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
  __int64 v2; // x2
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  UnityEngine_GameObject_o *ComponentsInChildren_object__59472212; // x0
  __int64 v7; // x1
  struct MyRoomBackGroundManager_BackObject_o *v8; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v10; // x20
  __int64 v11; // x22
  SimpleAnimation_o *v12; // x21
  struct MyRoomBackGroundManager_BackObject_o *v13; // x8
  int v14; // w8
  UnityEngine_GameObject_o *v15; // x19
  unsigned int v16; // w22
  UnityEngine_GameObject_c **v17; // x8
  UnityEngine_Animation_o *v18; // x20
  MyRoomBackGroundManager_o *v19; // x0
  const MethodInfo *v20; // x1
  MyRoomBackGroundManager_o *ScheduleUpdateAt; // x0
  const MethodInfo *v22; // x1
  int32_t ClipCount; // w0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t BackObjectAnimationNum; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596B40D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9610/*"MyRoomBackObj_loop"*/);
    byte_596B40D = 1;
  }
  backObject = this->fields.backObject;
  BackObjectAnimationNum = 0;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    ComponentsInChildren_object__59472212 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                                          instanceObject,
                                                                          0,
                                                                          0);
    if ( ((unsigned __int8)ComponentsInChildren_object__59472212 & 1) != 0 )
    {
      v8 = this->fields.backObject;
      if ( !v8 )
        goto LABEL_29;
      ComponentsInChildren_object__59472212 = v8->fields.instanceObject;
      if ( !ComponentsInChildren_object__59472212 )
        goto LABEL_29;
      ComponentsInChildren_object__59472212 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                                            ComponentsInChildren_object__59472212,
                                                                            (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !ComponentsInChildren_object__59472212 )
        goto LABEL_29;
      klass = (int)ComponentsInChildren_object__59472212[1].klass;
      v10 = ComponentsInChildren_object__59472212;
      if ( klass >= 1 )
      {
        v11 = 0;
        while ( (unsigned int)v11 < klass )
        {
          v12 = (SimpleAnimation_o *)*((_QWORD *)&v10[1].monitor + v11);
          if ( !v12 )
            goto LABEL_29;
          SimpleAnimation__Rewind(*((SimpleAnimation_o **)&v10[1].monitor + v11), 0);
          ComponentsInChildren_object__59472212 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v12, 0);
          klass = (int)v10[1].klass;
          if ( (int)++v11 >= klass )
            goto LABEL_15;
        }
LABEL_30:
        sub_2213CE4(ComponentsInChildren_object__59472212);
      }
LABEL_15:
      v13 = this->fields.backObject;
      if ( !v13
        || (ComponentsInChildren_object__59472212 = v13->fields.instanceObject) == 0
        || (ComponentsInChildren_object__59472212 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                                                  ComponentsInChildren_object__59472212,
                                                                                  (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0 )
      {
LABEL_29:
        sub_2213CDC(ComponentsInChildren_object__59472212, v7);
      }
      v14 = (int)ComponentsInChildren_object__59472212[1].klass;
      v15 = ComponentsInChildren_object__59472212;
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
            ComponentsInChildren_object__59472212 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v18, 0);
          }
          else
          {
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(ScheduleUpdateAt, v22);
            ClipCount = UnityEngine_Animation__GetClipCount(v18, 0);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v18, 0);
            v24 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0);
            v25 = System_String__Concat_75651716((System_String_o *)StringLiteral_9610/*"MyRoomBackObj_loop"*/, v24, 0);
            ComponentsInChildren_object__59472212 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_83078544(
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
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void MyRoomBackGroundManager__ScheduleUpdate(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x19
  int32_t v7; // w20

  if ( (byte_596B40A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_2213A60(&MyRoomControl_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B40A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  if ( !*(&MyRoomControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo, v4, v5);
  v7 = MyRoomControl__DisplayGroupId(0);
  Instance = (Il2CppObject *)MyRoomControl__DisplayWarId(0);
  if ( !MasterData_object )
LABEL_8:
    sub_2213CDC(Instance, v3);
  MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)MasterData_object, v7, (int32_t)Instance, 0);
  MyRoomAddMaster__GetChangeMyRoomBackObjIdForLeftServant((MyRoomAddMaster_o *)MasterData_object, 0);
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
    sub_2213CDC(0, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0);
}


void MyRoomBackGroundManager__Update(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  int64_t Time; // x20
  const MethodInfo *v11; // x1
  MyRoomBackGroundManager_o *v12; // x0
  const MethodInfo *v13; // x1
  MyRoomBackGroundManager_o *ScheduleUpdateAt; // x0
  const MethodInfo *v15; // x1
  UnityEngine_GameObject_o *ComponentsInChildren_object__59472212; // x0
  __int64 v17; // x1
  struct MyRoomBackGroundManager_BackObject_o *v18; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v20; // x19
  unsigned int v21; // w22
  UnityEngine_GameObject_c **v22; // x8
  UnityEngine_Animation_o *v23; // x20
  MyRoomBackGroundManager_o *v24; // x0
  const MethodInfo *v25; // x1
  int32_t ClipCount; // w0
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int32_t BackObjectAnimationNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596B405 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9610/*"MyRoomBackObj_loop"*/);
    byte_596B405 = 1;
  }
  backObject = this->fields.backObject;
  BackObjectAnimationNum = 0;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    v6 = UnityEngine_Object__op_Equality(instanceObject, 0, 0);
    if ( !v6
      && (this->fields.loadType & 2) != 0
      && MyRoomBackGroundManager__GetScheduleUpdateAt((MyRoomBackGroundManager_o *)v6, v7) >= 1 )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
      Time = NetworkManager__getTime(0);
      MyRoomBackGroundManager__UpdateTimer(this, v11);
      ScheduleUpdateAt = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(v12, v13);
      if ( Time >= (__int64)ScheduleUpdateAt )
      {
        MyRoomBackGroundManager__ScheduleUpdate(ScheduleUpdateAt, v15);
        v18 = this->fields.backObject;
        if ( !v18 )
          goto LABEL_23;
        ComponentsInChildren_object__59472212 = v18->fields.instanceObject;
        if ( !ComponentsInChildren_object__59472212 )
          goto LABEL_23;
        ComponentsInChildren_object__59472212 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                                                              ComponentsInChildren_object__59472212,
                                                                              (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___);
        if ( !ComponentsInChildren_object__59472212 )
          goto LABEL_23;
        klass = (int)ComponentsInChildren_object__59472212[1].klass;
        v20 = ComponentsInChildren_object__59472212;
        if ( klass >= 1 )
        {
          v21 = 0;
          while ( 1 )
          {
            if ( v21 >= klass )
              sub_2213CE4(ComponentsInChildren_object__59472212);
            v22 = &v20->klass + (int)v21;
            v23 = (UnityEngine_Animation_o *)v22[4];
            if ( !v23 )
              break;
            UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v22[4], 0);
            BackObjectAnimationNum = MyRoomBackGroundManager__GetBackObjectAnimationNum(v24, v25);
            ClipCount = UnityEngine_Animation__GetClipCount(v23, 0);
            if ( ClipCount < BackObjectAnimationNum )
              BackObjectAnimationNum = UnityEngine_Animation__GetClipCount(v23, 0);
            v27 = System_Int32__ToString((int32_t)&BackObjectAnimationNum, 0);
            v28 = System_String__Concat_75651716((System_String_o *)StringLiteral_9610/*"MyRoomBackObj_loop"*/, v27, 0);
            ComponentsInChildren_object__59472212 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play_83078544(
                                                                                  v23,
                                                                                  v28,
                                                                                  0);
            klass = (int)v20[1].klass;
            if ( (int)++v21 >= klass )
              return;
          }
LABEL_23:
          sub_2213CDC(ComponentsInChildren_object__59472212, v17);
        }
      }
    }
  }
}


void MyRoomBackGroundManager__UpdateTimer(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  MyRoomBackGroundManager_o *v2; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  MyRoomBackGroundManager_o *Time; // x20
  const MethodInfo *v10; // x1
  struct MyRoomBackGroundManager_BackObject_o *v11; // x8
  __int64 v12; // x23
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *v15; // x20
  struct MyRoomBackGroundManager_BackObject_o *v16; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *Component_object; // x20
  System_String_o *v26; // x0
  struct MyRoomBackGroundManager_BackObject_o *v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  Il2CppObject *v36; // x20
  System_String_o *v37; // x0
  struct MyRoomBackGroundManager_BackObject_o *v38; // x8
  char v39; // w22
  __int64 v40; // x1
  __int64 v41; // x2
  UnityEngine_Object_o *v42; // x20
  __int64 v43; // x1
  __int64 v44; // x2
  UnityEngine_Object_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  Il2CppObject *v48; // x20
  System_String_o *v49; // x0
  struct MyRoomBackGroundManager_BackObject_o *v50; // x8
  __int64 v51; // x1
  __int64 v52; // x2
  UnityEngine_Object_o *v53; // x19
  __int64 v54; // x1
  __int64 v55; // x2
  UnityEngine_Object_o *v56; // x19
  __int64 v57; // x1
  __int64 v58; // x2
  Il2CppObject *v59; // x19
  System_String_o *v60; // x0
  __int64 v61; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_596B406 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_24354/*"root/numD"*/);
    sub_2213A60(&StringLiteral_23468/*"num"*/);
    sub_2213A60(&StringLiteral_18457/*"c"*/);
    sub_2213A60(&StringLiteral_24350/*"root/line"*/);
    sub_2213A60(&StringLiteral_24352/*"root/numB"*/);
    sub_2213A60(&StringLiteral_19684/*"ef_clock_num"*/);
    sub_2213A60(&StringLiteral_24351/*"root/numA"*/);
    this = (MyRoomBackGroundManager_o *)sub_2213A60(&StringLiteral_24353/*"root/numC"*/);
    byte_596B406 = 1;
  }
  backObject = v2->fields.backObject;
  v61 = 0;
  if ( !backObject )
    goto LABEL_89;
  v6 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                 backObject->fields.instanceObject,
                                 (System_String_o *)StringLiteral_24351/*"root/numA"*/,
                                 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v6, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v6 )
      goto LABEL_89;
    this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
    if ( !this )
      goto LABEL_89;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
      return;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    Time = (MyRoomBackGroundManager_o *)NetworkManager__getTime(0);
    this = (MyRoomBackGroundManager_o *)MyRoomBackGroundManager__GetScheduleUpdateAt(Time, v10);
    v11 = v2->fields.backObject;
    v12 = ((char *)this - (char *)Time) % 60 <= 0
        ? ((char *)this - (char *)Time) / 60
        : ((char *)this - (char *)Time) / 60 + 1;
    if ( !v11 )
      goto LABEL_89;
    v15 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v11->fields.instanceObject,
                                    (System_String_o *)StringLiteral_24350/*"root/line"*/,
                                    0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v15, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
        if ( !this )
          goto LABEL_89;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      }
    }
    v16 = v2->fields.backObject;
    if ( !v16 )
      goto LABEL_89;
    v19 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v16->fields.instanceObject,
                                    (System_String_o *)StringLiteral_24351/*"root/numA"*/,
                                    0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v19, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v22 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v19,
                                        (System_String_o *)StringLiteral_23468/*"num"*/,
                                        0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v22, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v22 )
            goto LABEL_89;
          Component_object = UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)v22,
                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(
                                                (UnityEngine_Object_o *)Component_object,
                                                0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v61 = v12 / 600;
            v26 = System_Int64__ToString((int64_t)&v61, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_75694928(
                                                  (System_String_o *)StringLiteral_19684/*"ef_clock_num"*/,
                                                  v26,
                                                  (System_String_o *)StringLiteral_18457/*"c"*/,
                                                  0);
            if ( !Component_object )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)Component_object, (System_String_o *)this, 0);
          }
        }
      }
    }
    v27 = v2->fields.backObject;
    if ( !v27 )
      goto LABEL_89;
    v30 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v27->fields.instanceObject,
                                    (System_String_o *)StringLiteral_24352/*"root/numB"*/,
                                    0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v30, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v33 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v30,
                                        (System_String_o *)StringLiteral_23468/*"num"*/,
                                        0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v33, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_89;
          v36 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v33,
                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v36, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v61 = v12 / 60 % 10;
            v37 = System_Int64__ToString((int64_t)&v61, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_75694928(
                                                  (System_String_o *)StringLiteral_19684/*"ef_clock_num"*/,
                                                  v37,
                                                  (System_String_o *)StringLiteral_18457/*"c"*/,
                                                  0);
            if ( !v36 )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)v36, (System_String_o *)this, 0);
          }
        }
      }
    }
    v38 = v2->fields.backObject;
    if ( !v38 )
      goto LABEL_89;
    v39 = v12 % 60;
    v42 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v38->fields.instanceObject,
                                    (System_String_o *)StringLiteral_24353/*"root/numC"*/,
                                    0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v42, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v42 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v42, 0);
      if ( !this )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v45 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v42,
                                        (System_String_o *)StringLiteral_23468/*"num"*/,
                                        0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v45, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v45 )
            goto LABEL_89;
          v48 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v45,
                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
          this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v48, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v61 = (int)((((unsigned int)(103 * v39) >> 15) & 1) + ((103 * v39) >> 10));
            v49 = System_Int64__ToString((int64_t)&v61, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_75694928(
                                                  (System_String_o *)StringLiteral_19684/*"ef_clock_num"*/,
                                                  v49,
                                                  (System_String_o *)StringLiteral_18457/*"c"*/,
                                                  0);
            if ( !v48 )
              goto LABEL_89;
            UISprite__set_spriteName((UISprite_o *)v48, (System_String_o *)this, 0);
          }
        }
      }
    }
    v50 = v2->fields.backObject;
    if ( !v50 )
      goto LABEL_89;
    v53 = (UnityEngine_Object_o *)GameObjectExtensions__Find(
                                    v50->fields.instanceObject,
                                    (System_String_o *)StringLiteral_24354/*"root/numD"*/,
                                    0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51, v52);
    this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v53, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v53 )
        goto LABEL_89;
      this = (MyRoomBackGroundManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v53, 0);
      if ( !this )
        goto LABEL_89;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
      {
        v56 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                        (UnityEngine_Transform_o *)v53,
                                        (System_String_o *)StringLiteral_23468/*"num"*/,
                                        0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
        this = (MyRoomBackGroundManager_o *)UnityEngine_Object__op_Implicit(v56, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v56 )
            goto LABEL_89;
          v59 = UnityEngine_Component__GetComponent_object_(
                  (UnityEngine_Component_o *)v56,
                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57, v58);
          if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v59, 0) )
          {
            v61 = (char)(v39 - 10 * ((((103 * v39) & 0x8000) != 0) + ((unsigned int)((103 * v39) >> 8) >> 2)));
            v60 = System_Int64__ToString((int64_t)&v61, 0);
            this = (MyRoomBackGroundManager_o *)System_String__Concat_75694928(
                                                  (System_String_o *)StringLiteral_19684/*"ef_clock_num"*/,
                                                  v60,
                                                  (System_String_o *)StringLiteral_18457/*"c"*/,
                                                  0);
            if ( v59 )
            {
              UISprite__set_spriteName((UISprite_o *)v59, (System_String_o *)this, 0);
              return;
            }
LABEL_89:
            sub_2213CDC(this, method);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596B411 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9598/*"MyRoom/BackObject/{0}"*/);
    byte_596B411 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.assetId = id;
  v19 = id;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
  v6 = System_String__Format((System_String_o *)StringLiteral_9598/*"MyRoom/BackObject/{0}"*/, v5, 0);
  this->fields.assetName = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetName, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  this->fields.instanceObject = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.instanceObject, 0, v13, v14, v15, v16, v17, v18);
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
  int32_t _1__state; // w23
  struct System_Action_o *callback; // x8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v6; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int32_t loadType; // w8
  System_Action_c *v10; // x0
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x2
  System_Collections_IEnumerator_o *BackGround; // x0
  System_Action_c *v14; // x0
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v18; // x21
  UnityEngine_WaitWhile_o *v19; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_596B415 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__);
    sub_2213A60(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__);
    sub_2213A60(&Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__);
    sub_2213A60(&MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596B415 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      callback = this->fields.callback;
      this->fields.__1__state = -1;
      if ( callback )
        ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method);
    }
  }
  else
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = sub_2213CCC(MyRoomBackGroundManager___c__DisplayClass27_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( !v6
      || (*(_DWORD *)(v6 + 16) = 0,
          (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0)
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0), !_4__this) )
    {
      sub_2213CDC(Instance, v8);
    }
    loadType = _4__this->fields.loadType;
    if ( (loadType & 1) != 0 )
    {
      v10 = System_Action_TypeInfo;
      ++*(_DWORD *)(v6 + 16);
      v11 = (System_Action_o *)sub_2213CCC(v10);
      System_Action___ctor(
        v11,
        (Il2CppObject *)v6,
        Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__0__,
        0);
      BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v11, v12);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0);
      loadType = _4__this->fields.loadType;
    }
    if ( (loadType & 2) != 0 )
    {
      v14 = System_Action_TypeInfo;
      ++*(_DWORD *)(v6 + 16);
      v15 = (System_Action_o *)sub_2213CCC(v14);
      System_Action___ctor(
        v15,
        (Il2CppObject *)v6,
        Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__1__,
        0);
      BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v15, v16);
      UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0);
    }
    v18 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v18,
      (Il2CppObject *)v6,
      Method_MyRoomBackGroundManager___c__DisplayClass27_0__LoadBackGroundByLoadType_b__2__,
      0);
    v19 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v19, v18, 0);
    this->fields.__2__current = (Il2CppObject *)v19;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v19, v21, v22, v23, v24, v25, v26);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__27_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  int32_t _1__state; // w22
  struct System_Action_o *callback; // x8
  struct MyRoomBackGroundManager_o *_4__this; // x23
  __int64 v6; // x20
  UnityEngine_Component_o *backTexture; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct MyRoomBackGroundManager_o *v15; // x1
  System_Action_o *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  MyRoomBackGroundManager_o *v23; // x0
  const MethodInfo *v24; // x1
  System_String_o *BgImgName; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Action_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_bool__o *v35; // x21
  UnityEngine_WaitWhile_o *v36; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  if ( (byte_596B414 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__);
    sub_2213A60(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__);
    sub_2213A60(&Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__);
    sub_2213A60(&MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
    sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596B414 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      callback = this->fields.callback;
      this->fields.__1__state = -1;
      if ( callback )
        ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
          callback->fields.method_code,
          callback->fields.method);
    }
  }
  else
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = sub_2213CCC(MyRoomBackGroundManager___c__DisplayClass28_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( !v6 )
      goto LABEL_16;
    v15 = this->fields.__4__this;
    *(_QWORD *)(v6 + 24) = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 24), (int32_t)v15, v9, v10, v11, v12, v13, v14);
    *(_BYTE *)(v6 + 16) = 1;
    v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v16,
      (Il2CppObject *)v6,
      Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__0__,
      0);
    *(_QWORD *)(v6 + 40) = v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)v16, v17, v18, v19, v20, v21, v22);
    if ( !_4__this
      || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0
      || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0),
          BgImgName = MyRoomBackGroundManager__GetBgImgName(v23, v24),
          *(_QWORD *)(v6 + 32) = BgImgName,
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)BgImgName, v26, v27, v28, v29, v30, v31),
          (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0) )
    {
LABEL_16:
      sub_2213CDC(backTexture, v8);
    }
    UITexture__set_uvRect((UITexture_o *)backTexture, _4__this->fields.DISP_RECT, 0);
    v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v32,
      (Il2CppObject *)v6,
      Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__1__,
      0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v33, v34);
    AtlasManager__LoadOutGameAtlas(v32, 0);
    v35 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v35,
      (Il2CppObject *)v6,
      Method_MyRoomBackGroundManager___c__DisplayClass28_0__LoadBackGround_b__2__,
      0);
    v36 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
    UnityEngine_WaitWhile___ctor(v36, v35, 0);
    this->fields.__2__current = (Il2CppObject *)v36;
    p__2__current = &this->fields.__2__current;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v36, v38, v39, v40, v41, v42, v43);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_MyRoomBackGroundManager__LoadBackGround_d__28_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  int32_t _1__state; // w24
  MyRoomBackGroundManager_o *_4__this; // x21
  struct System_Action_o *callback; // x8
  __int64 v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct MyRoomBackGroundManager_o *v13; // x1
  int32_t BackObjectId; // w0
  int32_t v15; // w22
  MyRoomBackGroundManager_BackObject_o *v16; // x23
  const MethodInfo *v17; // x2
  MissionNaviTransitionBoardItem_o *p_backObject; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x2
  System_String_o *namespaze; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  MissionNaviTransitionBoardItem_c *klass; // x8
  System_String_o *v34; // x21
  AssetLoader_LoadEndDataHandler_o *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  System_Func_bool__o *v38; // x21
  UnityEngine_WaitWhile_o *v39; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  v2 = this;
  if ( (byte_596B416 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&MyRoomBackGroundManager_BackObject_TypeInfo);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__);
    sub_2213A60(&Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__);
    sub_2213A60(&MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
    this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)sub_2213A60(&UnityEngine_WaitWhile_TypeInfo);
    byte_596B416 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    v6 = sub_2213CCC(MyRoomBackGroundManager___c__DisplayClass29_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( v6 )
    {
      v13 = v2->fields.__4__this;
      *(_QWORD *)(v6 + 16) = v13;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)v13, v7, v8, v9, v10, v11, v12);
      *(_BYTE *)(v6 + 24) = 0;
      if ( _4__this )
      {
        BackObjectId = MyRoomBackGroundManager__GetBackObjectId((MyRoomBackGroundManager_o *)this, method);
        if ( BackObjectId >= 1 )
        {
          v15 = BackObjectId;
          v16 = (MyRoomBackGroundManager_BackObject_o *)sub_2213CCC(MyRoomBackGroundManager_BackObject_TypeInfo);
          MyRoomBackGroundManager_BackObject___ctor(v16, v15, v17);
          _4__this->fields.backObject = v16;
          p_backObject = (MissionNaviTransitionBoardItem_o *)&_4__this->fields.backObject;
          sub_2213A04(p_backObject, (int32_t)v16, v19, v20, v21, v22, v23, v24);
          if ( !p_backObject->klass )
            goto LABEL_22;
          namespaze = (System_String_o *)p_backObject->klass->_1.namespaze;
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v25);
          this = (MyRoomBackGroundManager__LoadBackObject_d__29_o *)AssetManager__isExistAssetStorage(namespaze, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            klass = p_backObject->klass;
            *(_BYTE *)(v6 + 24) = 1;
            if ( !klass )
              goto LABEL_22;
            v34 = (System_String_o *)klass->_1.namespaze;
            v35 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v35,
              (Il2CppObject *)v6,
              Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__0__,
              0);
            if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36, v37);
            AssetManager__loadAssetStorage(v34, v35, 1, 0, 0);
          }
          else
          {
            p_backObject->klass = 0;
            sub_2213A04(p_backObject, 0, v27, v28, v29, v30, v31, v32);
          }
        }
        v38 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v38,
          (Il2CppObject *)v6,
          Method_MyRoomBackGroundManager___c__DisplayClass29_0__LoadBackObject_b__1__,
          0);
        v39 = (UnityEngine_WaitWhile_o *)sub_2213CCC(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v39, v38, 0);
        v2->fields.__2__current = (Il2CppObject *)v39;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v39, v41, v42, v43, v44, v45, v46);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return _1__state == 0;
      }
    }
LABEL_22:
    sub_2213CDC(this, method);
  }
  if ( _1__state != 1 )
    return _1__state == 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_22;
  MyRoomBackGroundManager__PlayForceBackObjectAnimation(_4__this, method);
  callback = v2->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_MyRoomBackGroundManager__LoadBackObject_d__29_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  __int64 v4; // x2
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct MyRoomBackGroundManager_o *v13; // x8
  struct MyRoomBackGroundManager_o *v14; // x8
  ExUITexture_o *backTexture; // x20
  System_String_o *imgName; // x19
  int v17; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_596B412 & 1) == 0 )
  {
    sub_2213A60(&FSUtility_TypeInfo);
    this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)sub_2213A60(&StringLiteral_3154/*"Back/back{0}"*/);
    byte_596B412 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)_4__this->fields.backTexture;
  if ( !this )
    goto LABEL_13;
  this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v2->fields.imgName,
                                                              v2->fields.callbackEndWait,
                                                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_9;
  v17 = 10400;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
  v6 = System_String__Format((System_String_o *)StringLiteral_3154/*"Back/back{0}"*/, v5, 0);
  v2->fields.imgName = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.imgName, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = v2->fields.__4__this;
  if ( !v13 || (this = (MyRoomBackGroundManager___c__DisplayClass28_0_o *)v13->fields.backTexture) == 0 )
LABEL_13:
    sub_2213CDC(this, method);
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
  imgName = v2->fields.imgName;
  if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method, v4);
  FSUtility__SetUpBackTextureSize(backTexture, imgName, 0);
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
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Object_object__58532980; // x20
  __int64 v8; // x1
  char *_4__this; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Transform_o *transform; // x21
  char *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct MyRoomBackGroundManager_o *v20; // x8

  if ( (byte_596B413 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_9609/*"MyRoomBackObj"*/);
    byte_596B413 = 1;
  }
  if ( assetData )
  {
    Object_object__58532980 = AssetData__GetObject_object__58532980(
                                assetData,
                                (System_String_o *)StringLiteral_9609/*"MyRoomBackObj"*/,
                                (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
    {
      _4__this = (char *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_15;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)_4__this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      _4__this = (char *)UnityEngine_Object__Instantiate_object__59717116(
                           Object_object__58532980,
                           transform,
                           (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
      if ( !_4__this
        || (v13 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0),
            (v20 = this->fields.__4__this) == 0)
        || (_4__this = (char *)v20->fields.backObject) == 0 )
      {
LABEL_15:
        sub_2213CDC(_4__this, v8);
      }
      *((_QWORD *)_4__this + 4) = v13;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(_4__this + 32), (int32_t)v13, v14, v15, v16, v17, v18, v19);
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