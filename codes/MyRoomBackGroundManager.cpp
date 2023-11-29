void __fastcall MyRoomBackGroundManager___ctor(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  __int128 v7; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Rect_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8.fields.m_YMin = 0.41;
  v8.fields.m_Height = 0.5869;
  v8.fields.m_Width = 1.0;
  v8.fields.m_XMin = 0.0;
  *(_QWORD *)&v7 = 0LL;
  UnityEngine_Rect___ctor(v8, v2, v3, v4, v5, (const MethodInfo *)&v7);
  *(_OWORD *)&this->fields.DISP_RECT.fields.m_YMin = v7;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomBackGroundManager__ClearBackObject(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  struct MyRoomBackGroundManager_BackObject_o *v10; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  UnityEngine_Object_o *v14; // x20
  System_String_o *assetName; // x20

  if ( (byte_40FC052 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40FC052 = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v10 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v10->fields.instanceObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL) )
    {
      if ( !*p_backObject )
        goto LABEL_18;
      v14 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(v14, 0LL);
      if ( !*p_backObject )
LABEL_18:
        sub_B170D4();
      assetName = (*p_backObject)->fields.assetName;
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage(assetName, 0LL);
    }
  }
  *p_backObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p_backObject, 0LL, v2, v3, v4, v5, v6, v7);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  WebViewManager_o *Instance; // x0
  MyRoomAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v5; // x1
  int32_t v6; // w0

  if ( (byte_40FC054 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v2);
    byte_40FC054 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (MyRoomAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v6 = MyRoomAddMaster__GetChangeMyRoomBackObjId(MasterData_WarQuestSelectionMaster, v5);
  return v6 & ~(v6 >> 31);
}


System_String_o *__fastcall MyRoomBackGroundManager__GetBgImgName(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  MyRoomAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w0
  int v9; // w9
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_40FC053 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_B16FFC(&int_TypeInfo, v2);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_2643, v4);
    byte_40FC053 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (MyRoomAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  v8 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(MasterData_WarQuestSelectionMaster, v7);
  if ( v8 >= 1 )
    v9 = v8;
  else
    v9 = 10400;
  v12 = v9;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format((System_String_o *)StringLiteral_2643, v10, 0LL);
}


void __fastcall MyRoomBackGroundManager__Init(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  ExUITexture_o *backTexture; // x0
  const MethodInfo *v4; // x1

  this->fields.loadType = 0;
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)this, 0LL);
  backTexture = this->fields.backTexture;
  if ( !backTexture )
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FC057 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo, callback);
    byte_40FC057 = 1;
  }
  v7 = sub_B170CC(MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo, callback, method, v3, v4);
  MyRoomBackGroundManager__LoadBackGround_d__21___ctor((MyRoomBackGroundManager__LoadBackGround_d__21_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FC056 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo, callback);
    byte_40FC056 = 1;
  }
  v7 = sub_B170CC(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo, callback, method, v3, v4);
  MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20___ctor(
    (MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FC058 & 1) == 0 )
  {
    sub_B16FFC(&MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo, callback);
    byte_40FC058 = 1;
  }
  v7 = sub_B170CC(MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo, callback, method, v3, v4);
  MyRoomBackGroundManager__LoadBackObject_d__22___ctor((MyRoomBackGroundManager__LoadBackObject_d__22_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
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
  struct MyRoomBackGroundManager_BackObject_o *v7; // x8
  UnityEngine_GameObject_o *v8; // x0
  changeVColor_array *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  changeVColor_array *v13; // x20
  unsigned int v14; // w22
  Il2CppClass **v15; // x8
  SimpleAnimation_o *v16; // x21
  struct MyRoomBackGroundManager_BackObject_o *v17; // x8
  UnityEngine_GameObject_o *v18; // x0
  int v19; // w8
  changeVColor_array *v20; // x19
  unsigned int v21; // w21
  Il2CppClass **v22; // x8
  UnityEngine_Animation_o *v23; // x20

  if ( (byte_40FC055 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FC055 = 1;
  }
  backObject = this->fields.backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)backObject->fields.instanceObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL) )
    {
      v7 = this->fields.backObject;
      if ( !v7 )
        goto LABEL_25;
      v8 = v7->fields.instanceObject;
      if ( !v8 )
        goto LABEL_25;
      v9 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
             v8,
             (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !v9 )
        goto LABEL_25;
      max_length = v9->max_length;
      v13 = v9;
      if ( max_length >= 1 )
      {
        v14 = 0;
        while ( v14 < max_length )
        {
          v15 = &v13->obj.klass + (int)v14;
          v16 = (SimpleAnimation_o *)v15[4];
          if ( !v16 )
            goto LABEL_25;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v15[4], 0LL);
          v9 = (changeVColor_array *)SimpleAnimation__Play(v16, 0LL);
          max_length = v13->max_length;
          if ( (int)++v14 >= max_length )
            goto LABEL_16;
        }
LABEL_26:
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
LABEL_16:
      v17 = this->fields.backObject;
      if ( !v17
        || (v18 = v17->fields.instanceObject) == 0LL
        || (v9 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                   v18,
                   (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_25:
        sub_B170D4();
      }
      v19 = v9->max_length;
      v20 = v9;
      if ( v19 >= 1 )
      {
        v21 = 0;
        while ( v21 < v19 )
        {
          v22 = &v20->obj.klass + (int)v21;
          v23 = (UnityEngine_Animation_o *)v22[4];
          if ( !v23 )
            goto LABEL_25;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v22[4], 0LL);
          v9 = (changeVColor_array *)UnityEngine_Animation__Play(v23, 0LL);
          v19 = v20->max_length;
          if ( (int)++v21 >= v19 )
            return;
        }
        goto LABEL_26;
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
    sub_B170D4();
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomBackGroundManager_BackObject___ctor(
        MyRoomBackGroundManager_BackObject_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  struct System_String_o *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t v20; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F8653 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&id);
    sub_B16FFC(&StringLiteral_9226, v5);
    byte_40F8653 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v20 = id;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v7 = System_String__Format((System_String_o *)StringLiteral_9226, v6, 0LL);
  this->fields.assetName = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.assetName,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.instanceObject = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.instanceObject, 0LL, v14, v15, v16, v17, v18, v19);
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v16; // x20
  CommonUI_o *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Action_o *v22; // x22
  System_Collections_IEnumerator_o *BackGround; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x22
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  UnityEngine_WaitWhile_o *v35; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Action_o *callback; // x0

  if ( (byte_40F8651 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v6);
    sub_B16FFC(&System_Func_bool__TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__, v9);
    sub_B16FFC(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__, v10);
    sub_B16FFC(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__, v11);
    sub_B16FFC(&MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v13);
    byte_40F8651 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      return (char)callback;
    System_Action__Invoke(callback, 0LL);
LABEL_15:
    LOBYTE(callback) = 0;
    return (char)callback;
  }
  if ( _1__state )
    goto LABEL_15;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v16 = sub_B170CC(MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16
    || (*(_DWORD *)(v16 + 16) = 0,
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode(Instance, 1, 0LL), !_4__this) )
  {
    sub_B170D4();
  }
  if ( MyRoomBackGroundManager__IsIncludeLoadType(_4__this, 1, 0LL) )
  {
    ++*(_DWORD *)(v16 + 16);
    v22 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v18, v19, v20, v21);
    System_Action___ctor(
      v22,
      (Il2CppObject *)v16,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v22, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
  }
  if ( MyRoomBackGroundManager__IsIncludeLoadType(_4__this, 2, 0LL) )
  {
    ++*(_DWORD *)(v16 + 16);
    v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
    System_Action___ctor(
      v28,
      (Il2CppObject *)v16,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v28, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v30 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v24, v25, v26, v27);
  System_Func_bool____ctor(
    v30,
    (Il2CppObject *)v16,
    Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v35 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v31, v32, v33, v34);
  UnityEngine_WaitWhile___ctor(v35, v30, 0LL);
  this->fields.__2__current = (Il2CppObject *)v35;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
  LOBYTE(callback) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)callback;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_Component_o *backTexture; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **BgImgName; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  UITexture_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Action_o *v49; // x21
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  System_Func_bool__o *v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  UnityEngine_WaitWhile_o *v59; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Action_o *callback; // x0

  if ( (byte_40F8650 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v7);
    sub_B16FFC(&System_Func_bool__TypeInfo, v8);
    sub_B16FFC(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__, v9);
    sub_B16FFC(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__, v10);
    sub_B16FFC(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__, v11);
    sub_B16FFC(&MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v13);
    byte_40F8650 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      return (char)callback;
    System_Action__Invoke(callback, 0LL);
LABEL_16:
    LOBYTE(callback) = 0;
    return (char)callback;
  }
  if ( _1__state )
    goto LABEL_16;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v16 = sub_B170CC(MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_18;
  v23 = (System_Int32_array **)this->fields.__4__this;
  *(_QWORD *)(v16 + 24) = v23;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), v23, v17, v18, v19, v20, v21, v22);
  *(_BYTE *)(v16 + 16) = 1;
  v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v16,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v16 + 40) = v28;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 40), (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        BgImgName = (System_Int32_array **)MyRoomBackGroundManager__GetBgImgName(_4__this, 0LL),
        *(_QWORD *)(v16 + 32) = BgImgName,
        sub_B16F98((BattleServantConfConponent_o *)(v16 + 32), BgImgName, v38, v39, v40, v41, v42, v43),
        (v44 = (UITexture_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  UITexture__set_uvRect(v44, *(UnityEngine_Rect_o *)&_4__this->fields.DISP_RECT.fields.m_YMin, 0LL);
  v49 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v45, v46, v47, v48);
  System_Action___ctor(
    v49,
    (Il2CppObject *)v16,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v49, 0LL);
  v54 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v50, v51, v52, v53);
  System_Func_bool____ctor(
    v54,
    (Il2CppObject *)v16,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__,
    (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
  v59 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v55, v56, v57, v58);
  UnityEngine_WaitWhile___ctor(v59, v54, 0LL);
  this->fields.__2__current = (Il2CppObject *)v59;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v59, v61, v62, v63, v64, v65, v66);
  LOBYTE(callback) = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return (char)callback;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomBackGroundManager__LoadBackGround_d__21_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  int32_t BackObjectId; // w0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int32_t v29; // w22
  MyRoomBackGroundManager_BackObject_o *v30; // x23
  const MethodInfo *v31; // x2
  BattleServantConfConponent_o *p_backObject; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_o *namespaze; // x22
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_o *v47; // x21
  AssetLoader_LoadEndDataHandler_o *v48; // x22
  System_Action_o *callback; // x0
  System_Func_bool__o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  UnityEngine_WaitWhile_o *v55; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7

  if ( (byte_40F8652 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&MyRoomBackGroundManager_BackObject_TypeInfo, v6);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v7);
    sub_B16FFC(&System_Func_bool__TypeInfo, v8);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_B16FFC(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__, v10);
    sub_B16FFC(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__, v11);
    sub_B16FFC(&MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_WaitWhile_TypeInfo, v13);
    byte_40F8652 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      v16 = sub_B170CC(MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, method, v2, v3, v4);
      System_Object___ctor((Il2CppObject *)v16, 0LL);
      if ( !v16 )
        goto LABEL_25;
      v23 = (System_Int32_array **)this->fields.__4__this;
      *(_QWORD *)(v16 + 16) = v23;
      sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), v23, v17, v18, v19, v20, v21, v22);
      *(_BYTE *)(v16 + 24) = 0;
      if ( !_4__this )
        goto LABEL_25;
      BackObjectId = MyRoomBackGroundManager__GetBackObjectId(_4__this, 0LL);
      if ( BackObjectId >= 1 )
      {
        v29 = BackObjectId;
        v30 = (MyRoomBackGroundManager_BackObject_o *)sub_B170CC(
                                                        MyRoomBackGroundManager_BackObject_TypeInfo,
                                                        v25,
                                                        v26,
                                                        v27,
                                                        v28);
        MyRoomBackGroundManager_BackObject___ctor(v30, v29, v31);
        _4__this->fields.backObject = v30;
        p_backObject = (BattleServantConfConponent_o *)&_4__this->fields.backObject;
        sub_B16F98(p_backObject, (System_Int32_array **)v30, v33, v34, v35, v36, v37, v38);
        if ( !p_backObject->klass )
          goto LABEL_25;
        namespaze = (System_String_o *)p_backObject->klass->_1.namespaze;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__isExistAssetStorage(namespaze, 0LL) )
        {
          *(_BYTE *)(v16 + 24) = 1;
          if ( p_backObject->klass )
          {
            v47 = (System_String_o *)p_backObject->klass->_1.namespaze;
            v48 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(
                                                        AssetLoader_LoadEndDataHandler_TypeInfo,
                                                        v40,
                                                        v41,
                                                        v42,
                                                        v43);
            AssetLoader_LoadEndDataHandler___ctor(
              v48,
              (Il2CppObject *)v16,
              Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__,
              0LL);
            if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AssetManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            }
            AssetManager__loadAssetStorage(v47, v48, 1, 0LL);
            goto LABEL_23;
          }
LABEL_25:
          sub_B170D4();
        }
        p_backObject->klass = 0LL;
        sub_B16F98(p_backObject, 0LL, v41, v42, v43, v44, v45, v46);
      }
LABEL_23:
      v50 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v25, v26, v27, v28);
      System_Func_bool____ctor(
        v50,
        (Il2CppObject *)v16,
        Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__,
        (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
      v55 = (UnityEngine_WaitWhile_o *)sub_B170CC(UnityEngine_WaitWhile_TypeInfo, v51, v52, v53, v54);
      UnityEngine_WaitWhile___ctor(v55, v50, 0LL);
      this->fields.__2__current = (Il2CppObject *)v55;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v55,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
      LOBYTE(callback) = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return (char)callback;
    }
    goto LABEL_21;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  MyRoomBackGroundManager__PlayForceBackObjectAnimation(_4__this, 0LL);
  callback = this->fields.callback;
  if ( callback )
  {
    System_Action__Invoke(callback, 0LL);
LABEL_21:
    LOBYTE(callback) = 0;
  }
  return (char)callback;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_MyRoomBackGroundManager__LoadBackObject_d__22_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct MyRoomBackGroundManager_o *_4__this; // x8
  ExUITexture_o *backTexture; // x0
  struct System_String_o **p_imgName; // x20
  Il2CppObject *v8; // x0
  struct System_String_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct MyRoomBackGroundManager_o *v16; // x8
  ExUITexture_o *v17; // x0
  struct MyRoomBackGroundManager_o *v18; // x8
  ExUITexture_o *v19; // x19
  System_String_o *v20; // x20
  int v21; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F864E & 1) == 0 )
  {
    sub_B16FFC(&FSUtility_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_2643, v4);
    byte_40F864E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  backTexture = _4__this->fields.backTexture;
  if ( !backTexture )
    goto LABEL_14;
  p_imgName = &this->fields.imgName;
  if ( ExUITexture__SetAssetImage(backTexture, this->fields.imgName, this->fields.callbackEndWait, 0LL) )
    goto LABEL_9;
  v21 = 10400;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  v9 = System_String__Format((System_String_o *)StringLiteral_2643, v8, 0LL);
  this->fields.imgName = v9;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.imgName,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = this->fields.__4__this;
  if ( !v16 || (v17 = v16->fields.backTexture) == 0LL )
LABEL_14:
    sub_B170D4();
  ExUITexture__SetAssetImage(v17, this->fields.imgName, this->fields.callbackEndWait, 0LL);
LABEL_9:
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_14;
  v19 = v18->fields.backTexture;
  v20 = *p_imgName;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  FSUtility__SetUpBackTextureSize(v19, v20, 0LL);
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
  UILabel_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v11; // x0
  System_Int32_array **v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct MyRoomBackGroundManager_o *v19; // x8
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x0

  if ( (byte_40F864F & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, assetData);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_9229, v7);
    byte_40F864F = 1;
  }
  if ( assetData )
  {
    Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                    assetData,
                                                    (System_String_o *)StringLiteral_9229,
                                                    (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      _4__this = (UnityEngine_Component_o *)this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_17;
      transform = UnityEngine_Component__get_transform(_4__this, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v11 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                          Object_WarBoardWaitTimeSetting,
                                          transform,
                                          (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      if ( !v11
        || (v12 = (System_Int32_array **)v11,
            UnityEngine_GameObject__SetActive(v11, 1, 0LL),
            (v19 = this->fields.__4__this) == 0LL)
        || (backObject = v19->fields.backObject) == 0LL )
      {
LABEL_17:
        sub_B170D4();
      }
      backObject->fields.instanceObject = (struct UnityEngine_GameObject_o *)v12;
      sub_B16F98((BattleServantConfConponent_o *)&backObject->fields.instanceObject, v12, v13, v14, v15, v16, v17, v18);
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