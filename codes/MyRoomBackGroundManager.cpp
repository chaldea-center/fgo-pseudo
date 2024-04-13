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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct MyRoomBackGroundManager_BackObject_o *v12; // x8
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x19
  struct MyRoomBackGroundManager_BackObject_o *backObject; // t1
  UnityEngine_Object_o *instanceObject; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x20
  System_String_o *assetName; // x20

  if ( (byte_42E9D8B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E9D8B = 1;
  }
  backObject = this->fields.backObject;
  p_backObject = &this->fields.backObject;
  v12 = backObject;
  if ( backObject )
  {
    instanceObject = (UnityEngine_Object_o *)v12->fields.instanceObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( v16 )
    {
      if ( !*p_backObject )
        goto LABEL_18;
      v18 = (UnityEngine_Object_o *)(*p_backObject)->fields.instanceObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35620448(v18, 0LL);
      if ( !*p_backObject )
LABEL_18:
        sub_B5D69C(v16, v17);
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
  sub_B5D560((BattleServantConfConponent_o *)p_backObject, 0LL, v2, v3, v4, v5, v6, v7);
}


int32_t __fastcall MyRoomBackGroundManager__GetBackObjectId(MyRoomBackGroundManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w0

  if ( (byte_42E9D8D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MyRoomAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E9D8D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v8);
  }
  v9 = MyRoomAddMaster__GetChangeMyRoomBackObjId((MyRoomAddMaster_o *)Instance, v8);
  return v9 & ~(v9 >> 31);
}


System_String_o *__fastcall MyRoomBackGroundManager__GetBgImgName(
        MyRoomBackGroundManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w0
  int v16; // w9
  Il2CppObject *v17; // x0
  int v19; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_42E9D8C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MyRoomAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_2708/*"Back/back{0}"*/, v10, v11, v12);
    byte_42E9D8C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MyRoomAddMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v14);
  }
  v15 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId((MyRoomAddMaster_o *)Instance, v14);
  if ( v15 >= 1 )
    v16 = v15;
  else
    v16 = 10400;
  v19 = v16;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  return System_String__Format((System_String_o *)StringLiteral_2708/*"Back/back{0}"*/, v17, 0LL);
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
    sub_B5D69C(0LL, v3);
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
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E9D90 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E9D90 = 1;
  }
  v6 = sub_B5D694(MyRoomBackGroundManager__LoadBackGround_d__21_TypeInfo);
  MyRoomBackGroundManager__LoadBackGround_d__21___ctor((MyRoomBackGroundManager__LoadBackGround_d__21_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackGroundByLoadType(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E9D8F & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E9D8F = 1;
  }
  v6 = sub_B5D694(MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_TypeInfo);
  MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20___ctor(
    (MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall MyRoomBackGroundManager__LoadBackObject(
        MyRoomBackGroundManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E9D91 & 1) == 0 )
  {
    sub_B5D5C4(&MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E9D91 = 1;
  }
  v6 = sub_B5D694(MyRoomBackGroundManager__LoadBackObject_d__22_TypeInfo);
  MyRoomBackGroundManager__LoadBackObject_d__22___ctor((MyRoomBackGroundManager__LoadBackObject_d__22_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct MyRoomBackGroundManager_BackObject_o *backObject; // x8
  UnityEngine_Object_o *instanceObject; // x20
  UnityEngine_GameObject_o *v13; // x0
  __int64 v14; // x1
  struct MyRoomBackGroundManager_BackObject_o *v15; // x8
  int klass; // w8
  UnityEngine_GameObject_o *v17; // x20
  unsigned int v18; // w22
  UnityEngine_GameObject_c **v19; // x8
  SimpleAnimation_o *v20; // x21
  struct MyRoomBackGroundManager_BackObject_o *v21; // x8
  int v22; // w8
  UnityEngine_GameObject_o *v23; // x19
  unsigned int v24; // w21
  UnityEngine_GameObject_c **v25; // x8
  UnityEngine_Animation_o *v26; // x20
  __int64 v27; // x0

  if ( (byte_42E9D8E & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E9D8E = 1;
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
    v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(instanceObject, 0LL, 0LL);
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      v15 = this->fields.backObject;
      if ( !v15 )
        goto LABEL_25;
      v13 = v15->fields.instanceObject;
      if ( !v13 )
        goto LABEL_25;
      v13 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                          v13,
                                          (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SimpleAnimation___);
      if ( !v13 )
        goto LABEL_25;
      klass = (int)v13[1].klass;
      v17 = v13;
      if ( klass >= 1 )
      {
        v18 = 0;
        while ( v18 < klass )
        {
          v19 = &v17->klass + (int)v18;
          v20 = (SimpleAnimation_o *)v19[4];
          if ( !v20 )
            goto LABEL_25;
          SimpleAnimation__Rewind((SimpleAnimation_o *)v19[4], 0LL);
          v13 = (UnityEngine_GameObject_o *)SimpleAnimation__Play(v20, 0LL);
          klass = (int)v17[1].klass;
          if ( (int)++v18 >= klass )
            goto LABEL_16;
        }
LABEL_26:
        v27 = sub_B5D6C8(v13);
        sub_B5D668(v27, 0LL);
      }
LABEL_16:
      v21 = this->fields.backObject;
      if ( !v21
        || (v13 = v21->fields.instanceObject) == 0LL
        || (v13 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                v13,
                                                (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Animation___)) == 0LL )
      {
LABEL_25:
        sub_B5D69C(v13, v14);
      }
      v22 = (int)v13[1].klass;
      v23 = v13;
      if ( v22 >= 1 )
      {
        v24 = 0;
        while ( v24 < v22 )
        {
          v25 = &v23->klass + (int)v24;
          v26 = (UnityEngine_Animation_o *)v25[4];
          if ( !v26 )
            goto LABEL_25;
          UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)v25[4], 0LL);
          v13 = (UnityEngine_GameObject_o *)UnityEngine_Animation__Play(v26, 0LL);
          v22 = (int)v23[1].klass;
          if ( (int)++v24 >= v22 )
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
  __int64 v4; // x1

  MyRoomBackGroundManager__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(0LL, v8);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  BackGroundByLoadType = MyRoomBackGroundManager__LoadBackGroundByLoadType(this, callback, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, BackGroundByLoadType, 0LL);
}


void __fastcall MyRoomBackGroundManager_BackObject___ctor(
        MyRoomBackGroundManager_BackObject_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5F87 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, id, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_9350/*"MyRoom/BackObject/{0}"*/, v6, v7, v8);
    byte_42E5F87 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.assetId = id;
  v10 = id;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  this->fields.assetName = System_String__Format((System_String_o *)StringLiteral_9350/*"MyRoom/BackObject/{0}"*/, v9, 0LL);
  sub_B5D560(&this->fields.assetName);
  this->fields.instanceObject = 0LL;
  sub_B5D560(&this->fields.instanceObject);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v31; // x20
  CommonUI_o *Instance; // x0
  __int64 v33; // x1
  System_Action_o *v34; // x22
  System_Collections_IEnumerator_o *BackGround; // x0
  System_Action_o *v36; // x22
  System_Collections_IEnumerator_o *BackObject; // x0
  System_Func_bool__o *v38; // x21
  UnityEngine_WaitWhile_o *v39; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callback; // x0

  if ( (byte_42E5F85 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__, v14, v15, v16);
    sub_B5D5C4(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__, v17, v18, v19);
    sub_B5D5C4(&Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__, v20, v21, v22);
    sub_B5D5C4(&MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v26, v27, v28);
    byte_42E5F85 = 1;
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
  v31 = sub_B5D694(MyRoomBackGroundManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31
    || (*(_DWORD *)(v31 + 16) = 0,
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL)
    || (CommonUI__SetLoadMode(Instance, 1, 0LL), !_4__this) )
  {
    sub_B5D69C(Instance, v33);
  }
  if ( MyRoomBackGroundManager__IsIncludeLoadType(_4__this, 1, 0LL) )
  {
    ++*(_DWORD *)(v31 + 16);
    v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v31,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__0__,
      0LL);
    BackGround = MyRoomBackGroundManager__LoadBackGround(_4__this, v34, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, BackGround, 0LL);
  }
  if ( MyRoomBackGroundManager__IsIncludeLoadType(_4__this, 2, 0LL) )
  {
    ++*(_DWORD *)(v31 + 16);
    v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      (Il2CppObject *)v31,
      Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__1__,
      0LL);
    BackObject = MyRoomBackGroundManager__LoadBackObject(_4__this, v36, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)_4__this, BackObject, 0LL);
  }
  v38 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v38,
    (Il2CppObject *)v31,
    Method_MyRoomBackGroundManager___c__DisplayClass20_0__LoadBackGroundByLoadType_b__2__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v39 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v39, v38, 0LL);
  this->fields.__2__current = (Il2CppObject *)v39;
  p__2__current = &this->fields.__2__current;
  sub_B5D560(p__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomBackGroundManager__LoadBackGroundByLoadType_d__20_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int32_t _1__state; // w8
  struct MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v31; // x20
  UnityEngine_Component_o *backTexture; // x0
  __int64 v33; // x1
  System_Action_o *v34; // x22
  System_Action_o *v35; // x21
  System_Func_bool__o *v36; // x21
  UnityEngine_WaitWhile_o *v37; // x20
  Il2CppObject **p__2__current; // x19
  System_Action_o *callback; // x0

  if ( (byte_42E5F84 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__, v14, v15, v16);
    sub_B5D5C4(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__, v17, v18, v19);
    sub_B5D5C4(&Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__, v20, v21, v22);
    sub_B5D5C4(&MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v26, v27, v28);
    byte_42E5F84 = 1;
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
  v31 = sub_B5D694(MyRoomBackGroundManager___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_18;
  *(_QWORD *)(v31 + 24) = this->fields.__4__this;
  sub_B5D560(v31 + 24);
  *(_BYTE *)(v31 + 16) = 1;
  v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v31,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__0__,
    0LL);
  *(_QWORD *)(v31 + 40) = v34;
  sub_B5D560(v31 + 40);
  if ( !_4__this
    || (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL
    || (backTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backTexture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backTexture, 1, 0LL),
        *(_QWORD *)(v31 + 32) = MyRoomBackGroundManager__GetBgImgName(_4__this, 0LL),
        sub_B5D560(v31 + 32),
        (backTexture = (UnityEngine_Component_o *)_4__this->fields.backTexture) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(backTexture, v33);
  }
  UITexture__set_uvRect(
    (UITexture_o *)backTexture,
    *(UnityEngine_Rect_o *)&_4__this->fields.DISP_RECT.fields.m_YMin,
    0LL);
  v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v31,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__1__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadOutGameAtlas(v35, 0LL);
  v36 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v36,
    (Il2CppObject *)v31,
    Method_MyRoomBackGroundManager___c__DisplayClass21_0__LoadBackGround_b__2__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v37 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v37, v36, 0LL);
  this->fields.__2__current = (Il2CppObject *)v37;
  p__2__current = &this->fields.__2__current;
  sub_B5D560(p__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomBackGroundManager__LoadBackGround_d__21_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomBackGroundManager__LoadBackObject_d__22_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int32_t _1__state; // w8
  MyRoomBackGroundManager_o *_4__this; // x21
  __int64 v31; // x20
  int32_t BackObjectId; // w0
  int32_t v33; // w22
  MyRoomBackGroundManager_BackObject_o *v34; // x23
  const MethodInfo *v35; // x2
  struct MyRoomBackGroundManager_BackObject_o **p_backObject; // x21
  System_String_o *assetName; // x22
  System_String_o *v38; // x21
  AssetLoader_LoadEndDataHandler_o *v39; // x22
  System_Action_o *callback; // x0
  System_Func_bool__o *v41; // x21
  UnityEngine_WaitWhile_o *v42; // x20
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E5F86 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&MyRoomBackGroundManager_BackObject_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__, v17, v18, v19);
    sub_B5D5C4(&Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__, v20, v21, v22);
    sub_B5D5C4(&MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo, v23, v24, v25);
    this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)sub_B5D5C4(&UnityEngine_WaitWhile_TypeInfo, v26, v27, v28);
    byte_42E5F86 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      v31 = sub_B5D694(MyRoomBackGroundManager___c__DisplayClass22_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v31, 0LL);
      if ( !v31 )
        goto LABEL_25;
      *(_QWORD *)(v31 + 16) = v4->fields.__4__this;
      sub_B5D560(v31 + 16);
      *(_BYTE *)(v31 + 24) = 0;
      if ( !_4__this )
        goto LABEL_25;
      BackObjectId = MyRoomBackGroundManager__GetBackObjectId(_4__this, 0LL);
      if ( BackObjectId >= 1 )
      {
        v33 = BackObjectId;
        v34 = (MyRoomBackGroundManager_BackObject_o *)sub_B5D694(MyRoomBackGroundManager_BackObject_TypeInfo);
        MyRoomBackGroundManager_BackObject___ctor(v34, v33, v35);
        _4__this->fields.backObject = v34;
        p_backObject = &_4__this->fields.backObject;
        sub_B5D560(p_backObject);
        if ( !*p_backObject )
          goto LABEL_25;
        assetName = (*p_backObject)->fields.assetName;
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        this = (MyRoomBackGroundManager__LoadBackObject_d__22_o *)AssetManager__isExistAssetStorage(assetName, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          *(_BYTE *)(v31 + 24) = 1;
          if ( *p_backObject )
          {
            v38 = (*p_backObject)->fields.assetName;
            v39 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v39,
              (Il2CppObject *)v31,
              Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__0__,
              0LL);
            if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AssetManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
            }
            AssetManager__loadAssetStorage(v38, v39, 1, 0LL);
            goto LABEL_23;
          }
LABEL_25:
          sub_B5D69C(this, method);
        }
        *p_backObject = 0LL;
        sub_B5D560(p_backObject);
      }
LABEL_23:
      v41 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v41,
        (Il2CppObject *)v31,
        Method_MyRoomBackGroundManager___c__DisplayClass22_0__LoadBackObject_b__1__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v42 = (UnityEngine_WaitWhile_o *)sub_B5D694(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v42, v41, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v42;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      LOBYTE(callback) = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return (char)callback;
    }
    goto LABEL_21;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  MyRoomBackGroundManager__PlayForceBackObjectAnimation(_4__this, 0LL);
  callback = v4->fields.callback;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_MyRoomBackGroundManager__LoadBackObject_d__22_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  MyRoomBackGroundManager___c__DisplayClass21_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct MyRoomBackGroundManager_o *_4__this; // x8
  System_String_o **p_imgName; // x20
  Il2CppObject *v13; // x0
  struct MyRoomBackGroundManager_o *v14; // x8
  struct MyRoomBackGroundManager_o *v15; // x8
  ExUITexture_o *backTexture; // x19
  System_String_o *v17; // x20
  int v18; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E5F82 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)sub_B5D5C4(&StringLiteral_2708/*"Back/back{0}"*/, v8, v9, v10);
    byte_42E5F82 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)_4__this->fields.backTexture;
  if ( !this )
    goto LABEL_14;
  p_imgName = &v4->fields.imgName;
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v4->fields.imgName,
                                                              v4->fields.callbackEndWait,
                                                              0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_9;
  v18 = 10400;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v4->fields.imgName = System_String__Format((System_String_o *)StringLiteral_2708/*"Back/back{0}"*/, v13, 0LL);
  sub_B5D560(&v4->fields.imgName);
  v14 = v4->fields.__4__this;
  if ( !v14 || (this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)v14->fields.backTexture) == 0LL )
LABEL_14:
    sub_B5D69C(this, method);
  this = (MyRoomBackGroundManager___c__DisplayClass21_0_o *)ExUITexture__SetAssetImage(
                                                              (ExUITexture_o *)this,
                                                              v4->fields.imgName,
                                                              v4->fields.callbackEndWait,
                                                              0LL);
LABEL_9:
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_14;
  backTexture = v15->fields.backTexture;
  v17 = *p_imgName;
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UILabel_o *Object_WarBoardWaitTimeSetting; // x20
  __int64 v16; // x1
  UnityEngine_Component_o *_4__this; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Component_o *v19; // x20
  struct MyRoomBackGroundManager_o *v20; // x8

  if ( (byte_42E5F83 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_9354/*"MyRoomBackObj"*/, v12, v13, v14);
    byte_42E5F83 = 1;
  }
  if ( assetData )
  {
    Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                    assetData,
                                                    (System_String_o *)StringLiteral_9354/*"MyRoomBackObj"*/,
                                                    (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
      _4__this = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              Object_WarBoardWaitTimeSetting,
                                              transform,
                                              (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      if ( !_4__this
        || (v19 = _4__this,
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_4__this, 1, 0LL),
            (v20 = this->fields.__4__this) == 0LL)
        || (_4__this = (UnityEngine_Component_o *)v20->fields.backObject) == 0LL )
      {
LABEL_17:
        sub_B5D69C(_4__this, v16);
      }
      _4__this[1].monitor = v19;
      sub_B5D560(&_4__this[1].monitor);
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