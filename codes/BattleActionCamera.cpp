void __fastcall BattleActionCamera___ctor(BattleActionCamera_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_Dictionary_int__int__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5D334 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
    byte_4A5D334 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
  this->fields.cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cameraFsmDictionary, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v6,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cameraTargetDictionary, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
  this->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fieldCameraFsmList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields._FieldCameraIdList_k__BackingField = v12;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FieldCameraIdList_k__BackingField,
    (int32_t)v12,
    v13,
    v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActionCamera__InitCommonRegisterFsm(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *targetFsm,
        const MethodInfo *method)
{
  UnityEngine_Object_o *perf; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x2

  if ( (byte_4A5D324 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_10601/*"Performance"*/);
    byte_4A5D324 = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(perf, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.perf;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
    HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(
      targetFsm,
      (System_String_o *)StringLiteral_10601/*"Performance"*/,
      gameObject,
      0LL);
  }
}


void __fastcall BattleActionCamera__InitFieldCameraList(BattleActionCamera_o *this, const MethodInfo *method)
{
  BattleActionCamera_o *v2; // x19
  struct System_Collections_Generic_List_PlayMakerFSM__o *fieldCameraFsmList; // x8
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x0
  BattleActionCamera___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_T__o *v6; // x21
  System_Action_object__o *_9__26_0; // x22
  Il2CppObject *v8; // x23
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Collections_Generic_List_int__o *FieldCameraIdList_k__BackingField; // x8
  int v16; // w9

  v2 = this;
  if ( (byte_4A5D31F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_PlayMakerFSM__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_PlayMakerFSM___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PlayMakerFSM__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
    sub_1B885B0(&Method_BattleActionCamera___c__InitFieldCameraList_b__26_0__);
    this = (BattleActionCamera_o *)sub_1B885B0(&BattleActionCamera___c_TypeInfo);
    byte_4A5D31F = 1;
  }
  fieldCameraFsmList = v2->fields.fieldCameraFsmList;
  if ( !fieldCameraFsmList )
    goto LABEL_14;
  if ( fieldCameraFsmList->fields._size < 1 )
    return;
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(v2, method);
  v5 = BattleActionCamera___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_T__o *)NotNullFieldCameraFsmEnumerable;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v5 = BattleActionCamera___c_TypeInfo;
  }
  _9__26_0 = (System_Action_object__o *)v5->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleActionCamera___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__26_0 = (System_Action_object__o *)sub_1B887FC(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_object____ctor(_9__26_0, v8, Method_BattleActionCamera___c__InitFieldCameraList_b__26_0__, 0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Action_PlayMakerFSM__o *)_9__26_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v10, v11);
  }
  BasicHelper__ForEach_object_(
    v6,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
  v2->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.fieldCameraFsmList, (int32_t)v12, v13, v14);
  FieldCameraIdList_k__BackingField = v2->fields._FieldCameraIdList_k__BackingField;
  if ( !FieldCameraIdList_k__BackingField )
LABEL_14:
    sub_1B8880C(this, method);
  v16 = FieldCameraIdList_k__BackingField->fields._version + 1;
  FieldCameraIdList_k__BackingField->fields._size = 0;
  FieldCameraIdList_k__BackingField->fields._version = v16;
}


void __fastcall BattleActionCamera__Initialize(
        BattleActionCamera_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *cameraFsmDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o **p_cameraFsmDictionary; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x22
  System_Collections_Generic_Dictionary_int__object__o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_Dictionary_int__int__o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x2
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Single_array *actorCameraDefaultClipRange_k__BackingField; // x21
  float v24; // s0
  float farClipPlane; // s0
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Single_array *middleCameraDefaultClipRange_k__BackingField; // x21
  float v29; // s0
  float v30; // s0
  const MethodInfo *v31; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5D31E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&float___TypeInfo);
    byte_4A5D31E = 1;
  }
  memset(&v33, 0, sizeof(v33));
  p_cameraFsmDictionary = &this->fields.cameraFsmDictionary;
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         cameraFsmDictionary,
         (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__) >= 1 )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)*p_cameraFsmDictionary;
    if ( !*p_cameraFsmDictionary )
      goto LABEL_31;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v32,
      cameraFsmDictionary,
      (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    v33 = v32;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v33,
              (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
    {
      if ( LODWORD(v33.fields._current.fields.key) )
      {
        if ( !v33.fields._current.fields.value )
          sub_1B8880C(0LL, v7);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v33.fields._current.fields.value,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v33,
      (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v9,
      (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    *p_cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cameraFsmDictionary, (int32_t)v9, v10, v11);
  }
  v12 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v12,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cameraTargetDictionary, (int32_t)v12, v13, v14);
  this->fields.perf = inPerf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)inPerf, v15, v16);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.mainFsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mainFsm, (int32_t)Component_object, v18, v19);
  BattleActionCamera__InitCommonRegisterFsm(this, this->fields.mainFsm, v20);
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
LABEL_31:
    sub_1B8880C(cameraFsmDictionary, inPerf);
  System_Collections_Generic_Dictionary_int__object___Add(
    cameraFsmDictionary,
    0,
    (Il2CppObject *)this->fields.mainFsm,
    (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
  actorCameraDefaultClipRange_k__BackingField = this->fields._actorCameraDefaultClipRange_k__BackingField;
  if ( !actorCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B88658(float___TypeInfo, 2LL);
    if ( !this->fields.actorcamera )
      goto LABEL_31;
    actorCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
    v24 = UnityEngine_Camera__get_nearClipPlane(this->fields.actorcamera, 0LL);
    if ( !actorCameraDefaultClipRange_k__BackingField )
      goto LABEL_31;
    if ( !actorCameraDefaultClipRange_k__BackingField->max_length )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField->m_Items[1] = v24;
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.actorcamera;
    if ( !cameraFsmDictionary )
      goto LABEL_31;
    farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
    if ( actorCameraDefaultClipRange_k__BackingField->max_length <= 1 )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField->m_Items[2] = farClipPlane;
  }
  this->fields._actorCameraDefaultClipRange_k__BackingField = actorCameraDefaultClipRange_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (int32_t)actorCameraDefaultClipRange_k__BackingField,
    v21,
    v22);
  middleCameraDefaultClipRange_k__BackingField = this->fields._middleCameraDefaultClipRange_k__BackingField;
  if ( !middleCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B88658(float___TypeInfo, 2LL);
    if ( this->fields.middleCamera )
    {
      middleCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
      v29 = UnityEngine_Camera__get_nearClipPlane(this->fields.middleCamera, 0LL);
      if ( middleCameraDefaultClipRange_k__BackingField )
      {
        if ( !middleCameraDefaultClipRange_k__BackingField->max_length )
          goto LABEL_32;
        middleCameraDefaultClipRange_k__BackingField->m_Items[1] = v29;
        cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.middleCamera;
        if ( cameraFsmDictionary )
        {
          v30 = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
          if ( middleCameraDefaultClipRange_k__BackingField->max_length > 1 )
          {
            middleCameraDefaultClipRange_k__BackingField->m_Items[2] = v30;
            goto LABEL_29;
          }
LABEL_32:
          sub_1B88814(cameraFsmDictionary, inPerf);
        }
      }
    }
    goto LABEL_31;
  }
LABEL_29:
  this->fields._middleCameraDefaultClipRange_k__BackingField = middleCameraDefaultClipRange_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (int32_t)middleCameraDefaultClipRange_k__BackingField,
    v26,
    v27);
  BattleActionCamera__InitFieldCameraList(this, v31);
}


void __fastcall BattleActionCamera__RegisterFieldCameraFsm(
        BattleActionCamera_o *this,
        int32_t cameraId,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  BaseMonoBehaviour_o *perf; // x21
  Il2CppObject *v7; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  PlayMakerFSM_o *targetFsm; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5D330 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetManager_TryGetAssetObject_GameObject___);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_HasComponent_PlayMakerFSM___);
    sub_1B885B0(&Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_PlayMakerFSM__Add__);
    sub_1B885B0(&StringLiteral_15048/*"UniqueCameraPrefab"*/);
    byte_4A5D330 = 1;
  }
  targetFsm = 0LL;
  data = 0LL;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  v5 = BattleDataDefine__AddUniqueCameraPath(cameraId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__TryGetAssetObject_object_(
         &data,
         v5,
         (System_String_o *)StringLiteral_15048/*"UniqueCameraPrefab"*/,
         (const MethodInfo_2E6221C *)Method_AssetManager_TryGetAssetObject_GameObject___)
    && GameObjectExtensions__HasComponent_object_(
         (UnityEngine_GameObject_o *)data,
         (const MethodInfo_2ED07D8 *)Method_GameObjectExtensions_HasComponent_PlayMakerFSM___) )
  {
    perf = (BaseMonoBehaviour_o *)this->fields.perf;
    v7 = data;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !perf )
      goto LABEL_24;
    gameObject = BaseMonoBehaviour__createObject(
                   perf,
                   (UnityEngine_GameObject_o *)v7,
                   (UnityEngine_Transform_o *)gameObject,
                   0LL,
                   0LL);
    if ( !gameObject )
      goto LABEL_24;
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            gameObject,
            (Il2CppObject **)&targetFsm,
            (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___) )
      return;
    BattleActionCamera__initializeRegisterFsm(this, targetFsm, v10);
    gameObject = (UnityEngine_GameObject_o *)this->fields.fieldCameraFsmList;
    if ( !gameObject )
      goto LABEL_24;
    v9 = (Il2CppObject *)targetFsm;
    v13 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
    v14 = Method_System_Collections_Generic_List_PlayMakerFSM__Add__;
    ++HIDWORD(gameObject[1].klass);
    if ( !v13 )
      goto LABEL_24;
    klass_low = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(v13 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        v9,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = v13 + 8 * klass_low;
      LODWORD(gameObject[1].klass) = klass_low + 1;
      *(_QWORD *)(v16 + 32) = v9;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)v9, v11, v12);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields._FieldCameraIdList_k__BackingField;
    if ( !gameObject
      || (v17 = *(_QWORD *)&gameObject->fields.m_CachedPtr,
          v18 = Method_System_Collections_Generic_List_int__Add__,
          ++HIDWORD(gameObject[1].klass),
          !v17) )
    {
LABEL_24:
      sub_1B8880C(gameObject, v9);
    }
    v19 = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 24) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)gameObject,
        cameraId,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(gameObject[1].klass) = v19 + 1;
      *(_DWORD *)(v17 + 4 * v19 + 32) = cameraId;
    }
  }
}


void __fastcall BattleActionCamera__ResetAllCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  BattleActionCamera___c_c *v3; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x20
  System_Func_T__TResult__o *_9__42_0; // x21
  Il2CppObject *v6; // x22
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  BattleActionCamera___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  System_Action_T__o *_9__42_1; // x21
  Il2CppObject *v14; // x22
  struct BattleActionCamera___c_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x1

  if ( (byte_4A5D328 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____);
    sub_1B885B0(&System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo);
    sub_1B885B0(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__42_0__);
    sub_1B885B0(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__42_1__);
    sub_1B885B0(&BattleActionCamera___c_TypeInfo);
    byte_4A5D328 = 1;
  }
  v3 = BattleActionCamera___c_TypeInfo;
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v3 = BattleActionCamera___c_TypeInfo;
  }
  _9__42_0 = (System_Func_T__TResult__o *)v3->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleActionCamera___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__42_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__42_0,
      v6,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__42_0__,
      0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Func_KeyValuePair_int__PlayMakerFSM___bool__o *)_9__42_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)cameraFsmDictionary,
          (System_Func_TSource__bool__o *)_9__42_0,
          (const MethodInfo_2EBC9DC *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____);
  v11 = BattleActionCamera___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)v10;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v11 = BattleActionCamera___c_TypeInfo;
  }
  _9__42_1 = (System_Action_T__o *)v11->static_fields->__9__42_1;
  if ( !_9__42_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleActionCamera___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__42_1 = (System_Action_T__o *)sub_1B887FC(System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo);
    System_Action_KeyValuePair_int__object_____ctor(
      _9__42_1,
      v14,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__42_1__,
      0LL);
    v15 = BattleActionCamera___c_TypeInfo->static_fields;
    v15->__9__42_1 = (struct System_Action_KeyValuePair_int__PlayMakerFSM___o *)_9__42_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->__9__42_1, (int32_t)_9__42_1, v16, v17);
  }
  BasicHelper__ForEach_KeyValuePair_int__object__(
    v12,
    _9__42_1,
    (const MethodInfo_2E6BA84 *)Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____);
  BattleActionCamera__ResetFieldCameraEvent(this, v18);
}


void __fastcall BattleActionCamera__ResetFieldCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x0
  BattleActionCamera___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x19
  System_Action_object__o *_9__43_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D329 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_PlayMakerFSM__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_PlayMakerFSM___);
    sub_1B885B0(&Method_BattleActionCamera___c__ResetFieldCameraEvent_b__43_0__);
    sub_1B885B0(&BattleActionCamera___c_TypeInfo);
    byte_4A5D329 = 1;
  }
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(this, method);
  v4 = BattleActionCamera___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_T__o *)NotNullFieldCameraFsmEnumerable;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v4 = BattleActionCamera___c_TypeInfo;
  }
  _9__43_0 = (System_Action_object__o *)v4->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleActionCamera___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__43_0 = (System_Action_object__o *)sub_1B887FC(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_object____ctor(_9__43_0, v7, Method_BattleActionCamera___c__ResetFieldCameraEvent_b__43_0__, 0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Action_PlayMakerFSM__o *)_9__43_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v9, v10);
  }
  BasicHelper__ForEach_object_(
    v5,
    (System_Action_T__o *)_9__43_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
}


bool __fastcall BattleActionCamera__SendFieldEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o **v10; // x20
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x21
  System_Func_object__bool__o *v13; // x23
  Il2CppObject *v14; // x21
  const MethodInfo *v15; // x1
  bool v16; // w22

  if ( (byte_4A5D327 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___);
    sub_1B885B0(&System_Func_PlayMakerFSM__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleActionCamera___c__DisplayClass41_0__SendFieldEvent_b__0__);
    sub_1B885B0(&BattleActionCamera___c__DisplayClass41_0_TypeInfo);
    byte_4A5D327 = 1;
  }
  v5 = sub_1B887FC(BattleActionCamera___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = eventName;
  v10 = (System_String_o **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)eventName, v8, v9);
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(this, v11);
  v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleActionCamera___c__DisplayClass41_0__SendFieldEvent_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          (System_Collections_Generic_IEnumerable_TSource__o *)NotNullFieldCameraFsmEnumerable,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( !v16 )
  {
    BattleActionCamera__ResetAllCameraEvent(this, v15);
    if ( v14 )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)v14, *v10, 0LL);
      return !v16;
    }
LABEL_10:
    sub_1B8880C(v6, v7);
  }
  return !v16;
}


void __fastcall BattleActionCamera__SetGameObjectToField(
        BattleActionCamera_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *varName,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *v14; // x21
  const MethodInfo *v15; // x1
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x21
  System_Action_object__o *v17; // x22

  if ( (byte_4A5D32B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_PlayMakerFSM__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_PlayMakerFSM___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleActionCamera___c__DisplayClass45_0__SetGameObjectToField_b__0__);
    sub_1B885B0(&BattleActionCamera___c__DisplayClass45_0_TypeInfo);
    byte_4A5D32B = 1;
  }
  v7 = sub_1B887FC(BattleActionCamera___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = varName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)varName, v10, v11);
  *(_QWORD *)(v7 + 24) = obj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)obj, v12, v13);
  v14 = *(UnityEngine_Object_o **)(v7 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0LL) )
  {
    NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                       this,
                                                                                       v15);
    v17 = (System_Action_object__o *)sub_1B887FC(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_object____ctor(
      v17,
      (Il2CppObject *)v7,
      Method_BattleActionCamera___c__DisplayClass45_0__SetGameObjectToField_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      NotNullFieldCameraFsmEnumerable,
      (System_Action_T__o *)v17,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
    HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(
      this->fields.mainFsm,
      *(System_String_o **)(v7 + 16),
      *(UnityEngine_GameObject_o **)(v7 + 24),
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__ShakePosition(
        BattleActionCamera_o *this,
        UnityEngine_Vector3_o range,
        float tm,
        const MethodInfo *method)
{
  this->fields.ShakeRange.fields.y = range.fields.y;
  this->fields.ShakeRange.fields.z = range.fields.z;
  this->fields.ShakeTargetTime = tm;
  this->fields.ShakeRange.fields.x = range.fields.x;
  this->fields.Shaking = 1;
  this->fields.ShakeTime = 0.0;
}


void __fastcall BattleActionCamera__Update(BattleActionCamera_o *this, const MethodInfo *method)
{
  float ShakeTime; // s8
  float v4; // s0
  float v5; // s9
  float v6; // s1
  float Epsilon; // s3
  int v8; // w8
  int v9; // w21
  float v10; // s0
  int v11; // w8
  float v12; // s8
  float v13; // s9
  float v14; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Object_o *perf; // x20
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5D331 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11976/*"SHAKE"*/);
    byte_4A5D331 = 1;
  }
  if ( this->fields.Shaking )
  {
    ShakeTime = this->fields.ShakeTime;
    if ( !byte_4A55CE5 )
    {
      sub_1B885B0(&UnityEngine_Mathf_TypeInfo);
      byte_4A55CE5 = 1;
    }
    v4 = fmaxf(fabsf(ShakeTime), 0.0) * 0.000001;
    v5 = this->fields.ShakeTime;
    v6 = vabds_f32(0.0, ShakeTime);
    Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
    if ( v4 <= (float)(Epsilon * 8.0) )
      v4 = Epsilon * 8.0;
    v8 = (int)(float)(v5 * 30.0);
    if ( (float)(v5 * 30.0) == INFINITY )
      v8 = 0x80000000;
    if ( v6 < v4 )
      v9 = -1;
    else
      v9 = v8;
    v10 = v5 + UnityEngine_Time__get_deltaTime(0LL);
    v11 = (int)(float)(v10 * 30.0);
    if ( (float)(v10 * 30.0) == INFINITY )
      v11 = 0x80000000;
    this->fields.ShakeTime = v10;
    if ( v9 < v11 )
    {
      v12 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.x * -0.5,
              this->fields.ShakeRange.fields.x * 0.5,
              0LL);
      v13 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.y * -0.5,
              this->fields.ShakeRange.fields.y * 0.5,
              0LL);
      v14 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.z * -0.5,
              this->fields.ShakeRange.fields.z * 0.5,
              0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_28;
      v19.fields.x = v12;
      v19.fields.y = v13;
      v19.fields.z = v14;
      UnityEngine_Transform__set_localPosition(transform, v19, 0LL);
      if ( this->fields.ShakeTime >= this->fields.ShakeTargetTime )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        v17 = transform;
        if ( !byte_4A55CE1 )
        {
          transform = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( !v17 )
          goto LABEL_28;
        UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        this->fields.Shaking = 0;
      }
      perf = (UnityEngine_Object_o *)this->fields.perf;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(perf, 0LL, 0LL) )
      {
        transform = (UnityEngine_Transform_o *)this->fields.perf;
        if ( transform )
        {
          BattlePerformance__sendLocalEventFieldMotion(
            (BattlePerformance_o *)transform,
            (System_String_o *)StringLiteral_11976/*"SHAKE"*/,
            0LL);
          return;
        }
LABEL_28:
        sub_1B8880C(transform, v16);
      }
    }
  }
}


void __fastcall BattleActionCamera__UpdateFieldUniqueCameraFsm(
        BattleActionCamera_o *this,
        System_Int32_array *cameraIds,
        bool isInitFieldCamera,
        const MethodInfo *method)
{
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  System_Action_int__o *v12; // x20

  if ( (byte_4A5D32F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_BasicHelper_ForEach_int___);
    sub_1B885B0(&Method_BattleActionCamera_RegisterFieldCameraFsm__);
    sub_1B885B0(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_4A5D32F = 1;
  }
  if ( !cameraIds )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BDA48C(v9);
    if ( !*(_DWORD *)(v9 + 224) )
      j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BDA48C(v10);
    cameraIds = **(System_Int32_array ***)(v10 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FieldCameraIdList_k__BackingField,
          (System_Collections_Generic_IEnumerable_TSource__o *)cameraIds,
          (const MethodInfo_2EB2DC8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    if ( isInitFieldCamera )
      BattleActionCamera__InitFieldCameraList(this, v11);
    v12 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v12, (Il2CppObject *)this, Method_BattleActionCamera_RegisterFieldCameraFsm__, 0LL);
    BasicHelper__ForEach_int_(
      (System_Collections_Generic_IEnumerable_T__o *)cameraIds,
      (System_Action_T__o *)v12,
      (const MethodInfo_2E6C3A8 *)Method_BasicHelper_ForEach_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__deleteCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  char v8; // w23
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x8
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int128 v12[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5D32E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D32E = 1;
  }
  memset(&v13, 0, 32);
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           cameraTargetDictionary,
           uniqueId,
           (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_25;
      System_Collections_Generic_Dictionary_int__int___Remove(
        cameraTargetDictionary,
        uniqueId,
        (const MethodInfo_3166240 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    }
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v12,
      cameraTargetDictionary,
      (const MethodInfo_3165260 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    v8 = 1;
    *(_OWORD *)&v13.fields._dictionary = v12[0];
    v13.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v12[1];
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v13,
              (const MethodInfo_32B5A9C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
      v8 &= HIDWORD(v13.fields._current.fields.key) != cameraId;
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v13,
      (const MethodInfo_32B5B9C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    if ( (v8 & 1) == 0 )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
            cameraId,
            (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary
      || (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
                                                                                          cameraId,
                                                                                          (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__),
          (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0LL) )
    {
LABEL_25:
      sub_1B8880C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    }
    v10 = (UnityEngine_Object_o *)cameraTargetDictionary;
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
      cameraId,
      (const MethodInfo_316EDE0 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Object__op_Inequality(
                                                                                    v10,
                                                                                    0LL,
                                                                                    0LL);
    if ( ((unsigned __int8)cameraTargetDictionary & 1) != 0 )
    {
      if ( v10 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
        return;
      }
      goto LABEL_25;
    }
  }
}


PlayMakerFSM_o *__fastcall BattleActionCamera__getUniqueFsm(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t cameraId; // [xsp+Ch] [xbp-4h] BYREF

  cameraId = 0;
  return BattleActionCamera__getUniqueFsm_42325460(this, uniqueId, &cameraId, v3);
}


// local variable allocation has failed, the output may be wrong!
PlayMakerFSM_o *__fastcall BattleActionCamera__getUniqueFsm_42325460(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t *cameraId,
        const MethodInfo *method)
{
  int32_t v5; // w21
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  unsigned int Item; // w0
  Il2CppObject *v9; // x19

  v5 = uniqueId;
  if ( (byte_4A5D32C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D32C = 1;
  }
  *cameraId = 0;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          cameraTargetDictionary,
          v5,
          (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0LL;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary
    || (Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 cameraTargetDictionary,
                 v5,
                 (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        *cameraId = Item,
        *(_QWORD *)&uniqueId = Item,
        (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
  }
  v9 = System_Collections_Generic_Dictionary_int__object___get_Item(
         (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
         uniqueId,
         (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
    return 0LL;
  return (PlayMakerFSM_o *)v9;
}


System_Collections_Generic_List_int__o *__fastcall BattleActionCamera__get_FieldCameraIdList(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  return this->fields._FieldCameraIdList_k__BackingField;
}


System_Collections_Generic_IEnumerable_PlayMakerFSM__o *__fastcall BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5D31D & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_PlayMakerFSM___);
    byte_4A5D31D = 1;
  }
  return (System_Collections_Generic_IEnumerable_PlayMakerFSM__o *)BasicHelper__ExcludeNull_object_(
                                                                     (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldCameraFsmList,
                                                                     (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_PlayMakerFSM___);
}


System_Single_array *__fastcall BattleActionCamera__get_actorCameraDefaultClipRange(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  return this->fields._actorCameraDefaultClipRange_k__BackingField;
}


System_Single_array *__fastcall BattleActionCamera__get_middleCameraDefaultClipRange(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  return this->fields._middleCameraDefaultClipRange_k__BackingField;
}


void __fastcall BattleActionCamera__initializeRegisterFsm(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *targetFsm,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v6; // x1
  HutongGames_PlayMaker_FsmGameObject_o *v7; // x21
  PlayMakerFSM_o *mainFsm; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v9; // x19

  if ( (byte_4A5D323 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3978/*"Camera"*/);
    sub_1B885B0(&StringLiteral_3987/*"Camera_obj"*/);
    byte_4A5D323 = 1;
  }
  BattleActionCamera__InitCommonRegisterFsm(this, targetFsm, method);
  if ( !targetFsm )
    goto LABEL_15;
  Fsm = PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         Fsm,
                                         (System_String_o *)StringLiteral_3978/*"Camera"*/,
                                         0LL);
  if ( !this->fields.mainFsm )
    goto LABEL_15;
  v7 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
  Fsm = PlayMakerFSM__get_Fsm(this->fields.mainFsm, 0LL);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         Fsm,
                                         (System_String_o *)StringLiteral_3978/*"Camera"*/,
                                         0LL);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                         (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                                         0LL);
  if ( !v7 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v7, (UnityEngine_GameObject_o *)Fsm, 0LL);
  Fsm = PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !Fsm
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                               Fsm,
                                               (System_String_o *)StringLiteral_3987/*"Camera_obj"*/,
                                               0LL),
        (mainFsm = this->fields.mainFsm) == 0LL)
    || (v9 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm, (Fsm = PlayMakerFSM__get_Fsm(mainFsm, 0LL)) == 0LL)
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                               Fsm,
                                               (System_String_o *)StringLiteral_3987/*"Camera_obj"*/,
                                               0LL)) == 0LL
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                               (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                                               0LL),
        !v9) )
  {
LABEL_15:
    sub_1B8880C(Fsm, v6);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v9, (UnityEngine_GameObject_o *)Fsm, 0LL);
}


void __fastcall BattleActionCamera__loadEffectStatus(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  const MethodInfo *v4; // x3

  BattleActionCamera__loadEffectStatusCamera(this, this->fields.frontcamera, this->fields.frontCameraEffectsStatus, v2);
  BattleActionCamera__loadEffectStatusCamera(
    this,
    this->fields.middleCamera,
    this->fields.middleCameraEffectsStatus,
    v4);
}


void __fastcall BattleActionCamera__loadEffectStatusCamera(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *targetCamera,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo *method)
{
  if ( (byte_4A5D322 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActionCamera_loadEffectStatus_Bloom___);
    sub_1B885B0(&Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
    sub_1B885B0(&Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    sub_1B885B0(&Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D322 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2E6FED0 *)Method_BattleActionCamera_loadEffectStatus_Bloom___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2E6FED0 *)Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2E6FED0 *)Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2E6FED0 *)Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
  }
}


void __fastcall BattleActionCamera__loadEffectStatus_object_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_2E6FED0 *method)
{
  Il2CppObject *Component_object; // x20
  Il2CppObject *v8; // x0
  bool Item; // w1

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
    this = (BattleActionCamera_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (BattleActionCamera_o *)sub_1BDA4E8(method);
  }
  if ( !cam )
    goto LABEL_15;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cam,
                       (const MethodInfo_2E763AC *)method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_15;
    this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0LL);
    if ( !this )
      goto LABEL_15;
    this = (BattleActionCamera_o *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                     this,
                                     this->klass[1]._1.declaringType);
    if ( !stat )
      goto LABEL_15;
    if ( System_Collections_Generic_Dictionary_object__bool___ContainsKey(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
           (Il2CppObject *)this,
           (const MethodInfo_31B5454 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0LL);
      if ( this )
      {
        v8 = (Il2CppObject *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                               this,
                               this->klass[1]._1.declaringType);
        Item = System_Collections_Generic_Dictionary_object__bool___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
                 v8,
                 (const MethodInfo_31B51C0 *)Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, Item, 0LL);
        return;
      }
LABEL_15:
      sub_1B8880C(this, cam);
    }
  }
}


void __fastcall BattleActionCamera__playCameraAnimation(
        BattleActionCamera_o *this,
        System_String_o *animName,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v8; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v10; // x21
  __int64 v11; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v13; // x0
  UnityEngine_TrackedReference_o *Item; // x0

  if ( (byte_4A5D332 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    byte_4A5D332 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  v8 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v8 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v8,
                                                 animName,
                                                 0LL);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
        return;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v8,
                                                 animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v8, 0LL);
        UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)v8, animName, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1B8880C(gameObject, v6);
  }
  if ( !Component_object )
    goto LABEL_26;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, animName, 0LL) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)Component_object,
                                             animName,
                                             0LL);
  if ( !gameObject )
    goto LABEL_26;
  klass = gameObject->klass;
  v10 = gameObject;
  v11 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_15;
    }
    v13 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v13 = sub_1BDA590(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v13)(v10, *(_QWORD *)(v13 + 8), 0.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_63844704((SimpleAnimation_o *)Component_object, animName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__registerCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Object_o *Manager__loadCameraAction; // x20
  System_String_o *v10; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v12; // x2
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF

  key = cameraId;
  if ( (byte_4A5D32D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D32D = 1;
  }
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            cameraTargetDictionary,
            uniqueId,
            (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_26;
      System_Collections_Generic_Dictionary_int__int___Add(
        cameraTargetDictionary,
        uniqueId,
        cameraId,
        (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_26;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
           cameraId,
           (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
    {
      return;
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0LL);
    if ( !cameraTargetDictionary )
LABEL_26:
      sub_1B8880C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)cameraTargetDictionary, 0LL);
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    Manager__loadCameraAction = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCameraAction(
                                                          cameraId,
                                                          transform,
                                                          0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(Manager__loadCameraAction, 0LL, 0LL) )
    {
      cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Int32__ToString(
                                                                                      (int32_t)&key,
                                                                                      0LL);
      if ( !Manager__loadCameraAction )
        goto LABEL_26;
      v10 = cameraTargetDictionary ? (System_String_o *)cameraTargetDictionary : (System_String_o *)StringLiteral_1/*""*/;
      UnityEngine_Object__set_name(Manager__loadCameraAction, v10, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Manager__loadCameraAction,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        BattleActionCamera__initializeRegisterFsm(this, (PlayMakerFSM_o *)Component_object, v12);
        cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
        if ( cameraTargetDictionary )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
            key,
            Component_object,
            (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
          return;
        }
        goto LABEL_26;
      }
    }
  }
}


void __fastcall BattleActionCamera__saveEffectStatus(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_Dictionary_string__bool__o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_Dictionary_string__bool__o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  v4 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.frontcamera, v2);
  this->fields.frontCameraEffectsStatus = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.frontCameraEffectsStatus, (int32_t)v4, v5, v6);
  v8 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.middleCamera, v7);
  this->fields.middleCameraEffectsStatus = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.middleCameraEffectsStatus, (int32_t)v8, v9, v10);
}


System_Collections_Generic_Dictionary_string__bool__o *__fastcall BattleActionCamera__saveEffectStatusCamera(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *targetCamera,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x21

  if ( (byte_4A5D321 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActionCamera_saveEffectStatus_Bloom___);
    sub_1B885B0(&Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
    sub_1B885B0(&Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    sub_1B885B0(&Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D321 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    System_Collections_Generic_Dictionary_object__bool____ctor(
      v5,
      (const MethodInfo_31B488C *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v5,
      (const MethodInfo_2E70004 *)Method_BattleActionCamera_saveEffectStatus_Bloom___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v5,
      (const MethodInfo_2E70004 *)Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v5,
      (const MethodInfo_2E70004 *)Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v5,
      (const MethodInfo_2E70004 *)Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
  }
  return (System_Collections_Generic_Dictionary_string__bool__o *)v5;
}


void __fastcall BattleActionCamera__saveEffectStatus_object_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_2E70004 *method)
{
  Il2CppObject *Component_object; // x20
  Il2CppObject *v8; // x21

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
    this = (BattleActionCamera_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (BattleActionCamera_o *)sub_1BDA4E8(method);
  }
  if ( !cam )
    goto LABEL_13;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cam,
                       (const MethodInfo_2E763AC *)method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0LL);
      if ( this )
      {
        v8 = (Il2CppObject *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                               this,
                               this->klass[1]._1.declaringType);
        this = (BattleActionCamera_o *)UnityEngine_Behaviour__get_enabled(
                                         (UnityEngine_Behaviour_o *)Component_object,
                                         0LL);
        if ( stat )
        {
          System_Collections_Generic_Dictionary_object__bool___set_Item(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
            v8,
            (unsigned __int8)this & 1,
            (const MethodInfo_31B5234 *)Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
          return;
        }
      }
    }
LABEL_13:
    sub_1B8880C(this, cam);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__sendCameraEvent(
        BattleActionCamera_o *this,
        int32_t cameraId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  int key; // w27
  Il2CppObject *value; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A5D325 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3393/*"CAMERA_END"*/);
    byte_4A5D325 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    sub_1B8880C(0LL, *(_QWORD *)&cameraId);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v14,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
  {
    key = (int)v14.fields._current.fields.key;
    value = v14.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v10 )
    {
      if ( key == cameraId )
      {
        if ( !value )
          sub_1B8880C(v10, v11);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, eventName, 0LL);
      }
      else
      {
        if ( !value )
          sub_1B8880C(v10, v11);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, (System_String_o *)StringLiteral_3393/*"CAMERA_END"*/, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v14,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
  BattleActionCamera__ResetFieldCameraEvent(this, v12);
}


void __fastcall BattleActionCamera__sendEvent(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  PlayMakerFSM_o *UniqueFsm_42325460; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t cameraId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5D326 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D326 = 1;
  }
  cameraId = 0;
  UniqueFsm_42325460 = BattleActionCamera__getUniqueFsm_42325460(this, uniqueId, &cameraId, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)UniqueFsm_42325460, 0LL, 0LL) )
  {
    if ( HutongGames_PlayMaker_PlayMakerFSMHelper__checkFsmGlobalTransitions(UniqueFsm_42325460, eventName, 0LL) )
      v9 = cameraId;
    else
      v9 = 0;
  }
  else
  {
    v9 = 0;
  }
  BattleActionCamera__sendCameraEvent(this, v9, eventName, v8);
}


void __fastcall BattleActionCamera__sendMainEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActionCamera__sendCameraEvent(this, 0, eventName, v3);
}


void __fastcall BattleActionCamera__setGameObject(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        UnityEngine_GameObject_o *obj,
        System_String_o *nameStr,
        const MethodInfo *method)
{
  UnityEngine_Object_o *UniqueFsm_42325460; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v11; // x1
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5D32A & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D32A = 1;
  }
  cameraId = 0;
  UniqueFsm_42325460 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_42325460(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 (const MethodInfo *)nameStr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Inequality(UniqueFsm_42325460, 0LL, 0LL);
  if ( ((unsigned __int8)FsmVariables & 1) != 0 )
  {
    if ( !UniqueFsm_42325460 )
      goto LABEL_18;
    FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)UniqueFsm_42325460, 0LL);
    if ( !FsmVariables )
      goto LABEL_18;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(FsmVariables, nameStr, 0LL);
    if ( FsmGameObject )
      HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, obj, 0LL);
  }
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.mainFsm;
  if ( !FsmVariables )
    goto LABEL_18;
  FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)FsmVariables, 0LL);
  if ( !FsmVariables )
    goto LABEL_18;
  if ( HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(FsmVariables, nameStr, 0LL) )
  {
    FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.mainFsm;
    if ( FsmVariables )
    {
      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)FsmVariables, 0LL);
      if ( FsmVariables )
      {
        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                                                 (HutongGames_PlayMaker_Fsm_o *)FsmVariables,
                                                                 nameStr,
                                                                 0LL);
        if ( FsmVariables )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(
            (HutongGames_PlayMaker_FsmGameObject_o *)FsmVariables,
            obj,
            0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1B8880C(FsmVariables, v11);
  }
}


void __fastcall BattleActionCamera__setNormalMode(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActionCamera__setSpecialCamera(this, 0, v2);
}


void __fastcall BattleActionCamera__setSpecialCamera(BattleActionCamera_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Object_o *frontcamera; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *middleCamera; // x21

  if ( (byte_4A5D320 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D320 = 1;
  }
  frontcamera = (UnityEngine_Object_o *)this->fields.frontcamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(frontcamera, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frontcamera;
    if ( !gameObject )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
  }
  middleCamera = (UnityEngine_Object_o *)this->fields.middleCamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(middleCamera, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.middleCamera;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
        return;
      }
    }
LABEL_16:
    sub_1B8880C(gameObject, v6);
  }
}


void __fastcall BattleActionCamera__setSpecialMode(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActionCamera__setSpecialCamera(this, 1, v2);
}


void __fastcall BattleActionCamera__set_actorCameraDefaultClipRange(
        BattleActionCamera_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._actorCameraDefaultClipRange_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionCamera__set_middleCameraDefaultClipRange(
        BattleActionCamera_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._middleCameraDefaultClipRange_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionCamera__stopCameraAnimation(BattleActionCamera_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v6; // x21
  UnityEngine_Transform_o *v7; // x20
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x19

  if ( (byte_4A5D333 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D333 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  v6 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_25;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_25;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v6, 0LL);
    }
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v7 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4A55CE1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v7 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v8 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4A55CE6 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v8 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v9 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4A55CE1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v9 )
LABEL_25:
    sub_1B8880C(gameObject, v4);
  UnityEngine_Transform__set_eulerAngles(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
}


void __fastcall BattleActionCamera___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D335 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionCamera___c_TypeInfo);
    byte_4A5D335 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleActionCamera___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleActionCamera___c_TypeInfo->static_fields->__9 = (struct BattleActionCamera___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleActionCamera___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall BattleActionCamera___c___ctor(BattleActionCamera___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionCamera___c___InitFieldCameraList_b__26_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5D336 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D336 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
}


bool __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__42_0(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19

  value = (UnityEngine_Object_o *)pair.fields.value;
  if ( (byte_4A5D337 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D337 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(value, 0LL, 0LL);
}


void __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__42_1(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  PlayMakerFSM_o *value; // x19

  value = pair.fields.value;
  if ( (byte_4A5D338 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    this = (BattleActionCamera___c_o *)sub_1B885B0(&StringLiteral_3393/*"CAMERA_END"*/);
    byte_4A5D338 = 1;
  }
  if ( !value )
    sub_1B8880C(this, *(_QWORD *)&pair.fields.key);
  PlayMakerFSM__SendEvent(value, (System_String_o *)StringLiteral_3393/*"CAMERA_END"*/, 0LL);
}


void __fastcall BattleActionCamera___c___ResetFieldCameraEvent_b__43_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  if ( (byte_4A5D339 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_1B885B0(&StringLiteral_3393/*"CAMERA_END"*/);
    byte_4A5D339 = 1;
  }
  if ( !fsm )
    sub_1B8880C(this, fsm);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3393/*"CAMERA_END"*/, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass41_0___ctor(
        BattleActionCamera___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionCamera___c__DisplayClass41_0___SendFieldEvent_b__0(
        BattleActionCamera___c__DisplayClass41_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  return HutongGames_PlayMaker_PlayMakerFSMHelper__checkFsmGlobalTransitions(fsm, this->fields.eventName, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass45_0___ctor(
        BattleActionCamera___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass45_0___SetGameObjectToField_b__0(
        BattleActionCamera___c__DisplayClass45_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(fsm, this->fields.varName, this->fields.obj, 0LL);
}