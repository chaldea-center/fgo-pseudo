void __fastcall BattleActionCamera___ctor(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_int__int__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_List_int__o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_49FE4AE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo, v10);
    byte_49FE4AE = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo,
                                                                  method,
                                                                  v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v11,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
  this->fields.cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cameraFsmDictionary, (int32_t)v11, v12, v13);
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v14,
                                                               v15);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cameraTargetDictionary, (int32_t)v16, v17, v18);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_PlayMakerFSM__TypeInfo,
                                                       v19,
                                                       v20);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
  this->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fieldCameraFsmList, (int32_t)v21, v22, v23);
  v26 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v24, v25);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields._FieldCameraIdList_k__BackingField = v26;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._FieldCameraIdList_k__BackingField,
    (int32_t)v26,
    v27,
    v28);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActionCamera__InitFieldCameraList(BattleActionCamera_o *this, const MethodInfo *method)
{
  BattleActionCamera_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_PlayMakerFSM__o *fieldCameraFsmList; // x8
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  BattleActionCamera___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Action_object__o *_9__26_0; // x22
  Il2CppObject *v17; // x23
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Collections_Generic_List_int__o *FieldCameraIdList_k__BackingField; // x8
  int v27; // w9

  v2 = this;
  if ( (byte_49FE49A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_PlayMakerFSM__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_PlayMakerFSM___, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_PlayMakerFSM__get_Count__, v6);
    sub_1B640C8(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo, v7);
    sub_1B640C8(&Method_BattleActionCamera___c__InitFieldCameraList_b__26_0__, v8);
    this = (BattleActionCamera_o *)sub_1B640C8(&BattleActionCamera___c_TypeInfo, v9);
    byte_49FE49A = 1;
  }
  fieldCameraFsmList = v2->fields.fieldCameraFsmList;
  if ( !fieldCameraFsmList )
    goto LABEL_14;
  if ( fieldCameraFsmList->fields._size < 1 )
    return;
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(v2, method);
  v14 = BattleActionCamera___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)NotNullFieldCameraFsmEnumerable;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v14 = BattleActionCamera___c_TypeInfo;
  }
  _9__26_0 = (System_Action_object__o *)v14->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleActionCamera___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__26_0 = (System_Action_object__o *)sub_1B64314(System_Action_PlayMakerFSM__TypeInfo, v12, v13);
    System_Action_object____ctor(_9__26_0, v17, Method_BattleActionCamera___c__InitFieldCameraList_b__26_0__, 0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Action_PlayMakerFSM__o *)_9__26_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v19, v20);
  }
  BasicHelper__ForEach_object_(
    v15,
    (System_Action_T__o *)_9__26_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_PlayMakerFSM__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
  v2->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.fieldCameraFsmList, (int32_t)v23, v24, v25);
  FieldCameraIdList_k__BackingField = v2->fields._FieldCameraIdList_k__BackingField;
  if ( !FieldCameraIdList_k__BackingField )
LABEL_14:
    sub_1B64324(this);
  v27 = FieldCameraIdList_k__BackingField->fields._version + 1;
  FieldCameraIdList_k__BackingField->fields._size = 0;
  FieldCameraIdList_k__BackingField->fields._version = v27;
}


void __fastcall BattleActionCamera__Initialize(
        BattleActionCamera_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_int__object__o *cameraFsmDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o **p_cameraFsmDictionary; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *gameObject; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_Dictionary_int__object__o *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_Dictionary_int__int__o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *Component_object; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Single_array *actorCameraDefaultClipRange_k__BackingField; // x21
  __int64 v40; // x1
  float v41; // s0
  float farClipPlane; // s0
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Single_array *middleCameraDefaultClipRange_k__BackingField; // x21
  float v46; // s0
  float v47; // s0
  const MethodInfo *v48; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FE499 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, inPerf);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__, v9);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__, v16);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B640C8(&float___TypeInfo, v18);
    byte_49FE499 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  p_cameraFsmDictionary = &this->fields.cameraFsmDictionary;
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         cameraFsmDictionary,
         (const MethodInfo_3123634 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__) >= 1 )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)*p_cameraFsmDictionary;
    if ( !*p_cameraFsmDictionary )
      goto LABEL_31;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v49,
      cameraFsmDictionary,
      (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    v50 = v49;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v50,
              (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
    {
      if ( LODWORD(v50.fields._current.fields.key) )
      {
        if ( !v50.fields._current.fields.value )
          sub_1B64324(0LL);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v50.fields._current.fields.value,
                                               0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v50,
      (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    v26 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo,
                                                                    v24,
                                                                    v25);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v26,
      (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    *p_cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v26;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cameraFsmDictionary, (int32_t)v26, v27, v28);
  }
  v29 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v21,
                                                               v22);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v29,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cameraTargetDictionary, (int32_t)v29, v30, v31);
  this->fields.perf = inPerf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.perf, (int32_t)inPerf, v32, v33);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.mainFsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mainFsm, (int32_t)Component_object, v35, v36);
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
LABEL_31:
    sub_1B64324(cameraFsmDictionary);
  System_Collections_Generic_Dictionary_int__object___Add(
    cameraFsmDictionary,
    0,
    (Il2CppObject *)this->fields.mainFsm,
    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
  actorCameraDefaultClipRange_k__BackingField = this->fields._actorCameraDefaultClipRange_k__BackingField;
  if ( !actorCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64170(float___TypeInfo, 2LL);
    if ( !this->fields.actorcamera )
      goto LABEL_31;
    actorCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
    v41 = UnityEngine_Camera__get_nearClipPlane(this->fields.actorcamera, 0LL);
    if ( !actorCameraDefaultClipRange_k__BackingField )
      goto LABEL_31;
    if ( !actorCameraDefaultClipRange_k__BackingField->max_length )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField->m_Items[1] = v41;
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.actorcamera;
    if ( !cameraFsmDictionary )
      goto LABEL_31;
    farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
    if ( actorCameraDefaultClipRange_k__BackingField->max_length <= 1 )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField->m_Items[2] = farClipPlane;
  }
  this->fields._actorCameraDefaultClipRange_k__BackingField = actorCameraDefaultClipRange_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (int32_t)actorCameraDefaultClipRange_k__BackingField,
    v37,
    v38);
  middleCameraDefaultClipRange_k__BackingField = this->fields._middleCameraDefaultClipRange_k__BackingField;
  if ( !middleCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64170(float___TypeInfo, 2LL);
    if ( this->fields.middleCamera )
    {
      middleCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
      v46 = UnityEngine_Camera__get_nearClipPlane(this->fields.middleCamera, 0LL);
      if ( middleCameraDefaultClipRange_k__BackingField )
      {
        if ( !middleCameraDefaultClipRange_k__BackingField->max_length )
          goto LABEL_32;
        middleCameraDefaultClipRange_k__BackingField->m_Items[1] = v46;
        cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.middleCamera;
        if ( cameraFsmDictionary )
        {
          v47 = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
          if ( middleCameraDefaultClipRange_k__BackingField->max_length > 1 )
          {
            middleCameraDefaultClipRange_k__BackingField->m_Items[2] = v47;
            goto LABEL_29;
          }
LABEL_32:
          sub_1B6432C(cameraFsmDictionary, v40);
        }
      }
    }
    goto LABEL_31;
  }
LABEL_29:
  this->fields._middleCameraDefaultClipRange_k__BackingField = middleCameraDefaultClipRange_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (int32_t)middleCameraDefaultClipRange_k__BackingField,
    v43,
    v44);
  BattleActionCamera__InitFieldCameraList(this, v48);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__RegisterFieldCameraFsm(
        BattleActionCamera_o *this,
        int32_t cameraId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x21
  BaseMonoBehaviour_o *perf; // x21
  Il2CppObject *v14; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *v19; // x1
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 klass_low; // x10
  __int64 v23; // x8
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  PlayMakerFSM_o *targetFsm; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FE4AA & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetManager_TryGetAssetObject_GameObject___, *(_QWORD *)&cameraId);
    sub_1B640C8(&AssetManager_TypeInfo, v5);
    sub_1B640C8(&BattleDataDefine_TypeInfo, v6);
    sub_1B640C8(&Method_GameObjectExtensions_HasComponent_PlayMakerFSM___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_PlayMakerFSM__Add__, v10);
    sub_1B640C8(&StringLiteral_14977/*"UniqueCameraPrefab"*/, v11);
    byte_49FE4AA = 1;
  }
  targetFsm = 0LL;
  data = 0LL;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  v12 = BattleDataDefine__AddUniqueCameraPath(cameraId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__TryGetAssetObject_object_(
         &data,
         v12,
         (System_String_o *)StringLiteral_14977/*"UniqueCameraPrefab"*/,
         (const MethodInfo_2E1BDBC *)Method_AssetManager_TryGetAssetObject_GameObject___)
    && GameObjectExtensions__HasComponent_object_(
         (UnityEngine_GameObject_o *)data,
         (const MethodInfo_2E897F8 *)Method_GameObjectExtensions_HasComponent_PlayMakerFSM___) )
  {
    perf = (BaseMonoBehaviour_o *)this->fields.perf;
    v14 = data;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !perf )
      goto LABEL_24;
    gameObject = BaseMonoBehaviour__createObject(
                   perf,
                   (UnityEngine_GameObject_o *)v14,
                   (UnityEngine_Transform_o *)gameObject,
                   0LL,
                   0LL);
    if ( !gameObject )
      goto LABEL_24;
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            gameObject,
            (Il2CppObject **)&targetFsm,
            (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___) )
      return;
    BattleActionCamera__initializeRegisterFsm(this, targetFsm, v16);
    gameObject = (UnityEngine_GameObject_o *)this->fields.fieldCameraFsmList;
    if ( !gameObject )
      goto LABEL_24;
    v19 = (Il2CppObject *)targetFsm;
    v20 = *(_QWORD *)&gameObject->fields.m_CachedPtr;
    v21 = Method_System_Collections_Generic_List_PlayMakerFSM__Add__;
    ++HIDWORD(gameObject[1].klass);
    if ( !v20 )
      goto LABEL_24;
    klass_low = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(v20 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        v19,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = v20 + 8 * klass_low;
      LODWORD(gameObject[1].klass) = klass_low + 1;
      *(_QWORD *)(v23 + 32) = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v19, v17, v18);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields._FieldCameraIdList_k__BackingField;
    if ( !gameObject
      || (v24 = *(_QWORD *)&gameObject->fields.m_CachedPtr,
          v25 = Method_System_Collections_Generic_List_int__Add__,
          ++HIDWORD(gameObject[1].klass),
          !v24) )
    {
LABEL_24:
      sub_1B64324(gameObject);
    }
    v26 = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)gameObject,
        cameraId,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(gameObject[1].klass) = v26 + 1;
      *(_DWORD *)(v24 + 4 * v26 + 32) = cameraId;
    }
  }
}


void __fastcall BattleActionCamera__ResetAllCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BattleActionCamera___c_c *v10; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x20
  System_Func_T__TResult__o *_9__41_0; // x21
  Il2CppObject *v13; // x22
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  BattleActionCamera___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x20
  System_Action_T__o *_9__41_1; // x21
  Il2CppObject *v23; // x22
  struct BattleActionCamera___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x1

  if ( (byte_49FE4A2 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____, v5);
    sub_1B640C8(&System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo, v6);
    sub_1B640C8(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_0__, v7);
    sub_1B640C8(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_1__, v8);
    sub_1B640C8(&BattleActionCamera___c_TypeInfo, v9);
    byte_49FE4A2 = 1;
  }
  v10 = BattleActionCamera___c_TypeInfo;
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v10 = BattleActionCamera___c_TypeInfo;
  }
  _9__41_0 = (System_Func_T__TResult__o *)v10->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleActionCamera___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__41_0 = (System_Func_T__TResult__o *)sub_1B64314(
                                              System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo,
                                              method,
                                              v2);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__41_0,
      v13,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_0__,
      0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_KeyValuePair_int__PlayMakerFSM___bool__o *)_9__41_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)cameraFsmDictionary,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_2E759FC *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____);
  v20 = BattleActionCamera___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_T__o *)v17;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v20 = BattleActionCamera___c_TypeInfo;
  }
  _9__41_1 = (System_Action_T__o *)v20->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleActionCamera___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__41_1 = (System_Action_T__o *)sub_1B64314(System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo, v18, v19);
    System_Action_KeyValuePair_int__object_____ctor(
      _9__41_1,
      v23,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_1__,
      0LL);
    v24 = BattleActionCamera___c_TypeInfo->static_fields;
    v24->__9__41_1 = (struct System_Action_KeyValuePair_int__PlayMakerFSM___o *)_9__41_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->__9__41_1, (int32_t)_9__41_1, v25, v26);
  }
  BasicHelper__ForEach_KeyValuePair_int__object__(
    v21,
    _9__41_1,
    (const MethodInfo_2E25624 *)Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____);
  BattleActionCamera__ResetFieldCameraEvent(this, v27);
}


void __fastcall BattleActionCamera__ResetFieldCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  BattleActionCamera___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_T__o *v10; // x19
  System_Action_object__o *_9__42_0; // x20
  Il2CppObject *v12; // x21
  struct BattleActionCamera___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FE4A3 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_PlayMakerFSM__TypeInfo, method);
    sub_1B640C8(&Method_BasicHelper_ForEach_PlayMakerFSM___, v3);
    sub_1B640C8(&Method_BattleActionCamera___c__ResetFieldCameraEvent_b__42_0__, v4);
    sub_1B640C8(&BattleActionCamera___c_TypeInfo, v5);
    byte_49FE4A3 = 1;
  }
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(this, method);
  v9 = BattleActionCamera___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_T__o *)NotNullFieldCameraFsmEnumerable;
  if ( !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v9 = BattleActionCamera___c_TypeInfo;
  }
  _9__42_0 = (System_Action_object__o *)v9->static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleActionCamera___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__42_0 = (System_Action_object__o *)sub_1B64314(System_Action_PlayMakerFSM__TypeInfo, v7, v8);
    System_Action_object____ctor(_9__42_0, v12, Method_BattleActionCamera___c__ResetFieldCameraEvent_b__42_0__, 0LL);
    static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    static_fields->__9__42_0 = (struct System_Action_PlayMakerFSM__o *)_9__42_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__42_0, (int32_t)_9__42_0, v14, v15);
  }
  BasicHelper__ForEach_object_(
    v10,
    (System_Action_T__o *)_9__42_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
}


bool __fastcall BattleActionCamera__SendFieldEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o **v13; // x20
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_object__bool__o *v18; // x23
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x1
  bool v21; // w22

  if ( (byte_49FE4A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___, eventName);
    sub_1B640C8(&System_Func_PlayMakerFSM__bool__TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&Method_BattleActionCamera___c__DisplayClass40_0__SendFieldEvent_b__0__, v7);
    sub_1B640C8(&BattleActionCamera___c__DisplayClass40_0_TypeInfo, v8);
    byte_49FE4A1 = 1;
  }
  v9 = sub_1B64314(BattleActionCamera___c__DisplayClass40_0_TypeInfo, eventName, method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = eventName;
  v13 = (System_String_o **)(v9 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)eventName, v11, v12);
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(this, v14);
  v18 = (System_Func_object__bool__o *)sub_1B64314(System_Func_PlayMakerFSM__bool__TypeInfo, v16, v17);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_BattleActionCamera___c__DisplayClass40_0__SendFieldEvent_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          (System_Collections_Generic_IEnumerable_TSource__o *)NotNullFieldCameraFsmEnumerable,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL);
  if ( !v21 )
  {
    BattleActionCamera__ResetAllCameraEvent(this, v20);
    if ( v19 )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)v19, *v13, 0LL);
      return !v21;
    }
LABEL_10:
    sub_1B64324(v10);
  }
  return !v21;
}


void __fastcall BattleActionCamera__SetGameObjectToField(
        BattleActionCamera_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *varName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *v17; // x21
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  System_Action_object__o *v22; // x22

  if ( (byte_49FE4A5 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_PlayMakerFSM__TypeInfo, obj);
    sub_1B640C8(&Method_BasicHelper_ForEach_PlayMakerFSM___, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_BattleActionCamera___c__DisplayClass44_0__SetGameObjectToField_b__0__, v9);
    sub_1B640C8(&BattleActionCamera___c__DisplayClass44_0_TypeInfo, v10);
    byte_49FE4A5 = 1;
  }
  v11 = sub_1B64314(BattleActionCamera___c__DisplayClass44_0_TypeInfo, obj, varName);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_QWORD *)(v11 + 16) = varName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)varName, v13, v14);
  *(_QWORD *)(v11 + 24) = obj;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)obj, v15, v16);
  v17 = *(UnityEngine_Object_o **)(v11 + 24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v17, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(*(System_String_o **)(v11 + 16), 0LL) )
  {
    NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                       this,
                                                                                       v18);
    v22 = (System_Action_object__o *)sub_1B64314(System_Action_PlayMakerFSM__TypeInfo, v20, v21);
    System_Action_object____ctor(
      v22,
      (Il2CppObject *)v11,
      Method_BattleActionCamera___c__DisplayClass44_0__SetGameObjectToField_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      NotNullFieldCameraFsmEnumerable,
      (System_Action_T__o *)v22,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
    HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(
      this->fields.mainFsm,
      *(System_String_o **)(v11 + 16),
      *(UnityEngine_GameObject_o **)(v11 + 24),
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
  __int64 v3; // x1
  float ShakeTime; // s8
  float v5; // s0
  float v6; // s9
  float v7; // s1
  float Epsilon; // s3
  int v9; // w8
  int v10; // w21
  float v11; // s0
  int v12; // w8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Object_o *perf; // x20
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE4AB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_11921/*"SHAKE"*/, v3);
    byte_49FE4AB = 1;
  }
  if ( this->fields.Shaking )
  {
    ShakeTime = this->fields.ShakeTime;
    if ( !byte_49F7115 )
    {
      sub_1B640C8(&UnityEngine_Mathf_TypeInfo, method);
      byte_49F7115 = 1;
    }
    v5 = fmaxf(fabsf(ShakeTime), 0.0) * 0.000001;
    v6 = this->fields.ShakeTime;
    v7 = vabds_f32(0.0, ShakeTime);
    Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
    if ( v5 <= (float)(Epsilon * 8.0) )
      v5 = Epsilon * 8.0;
    v9 = (int)(float)(v6 * 30.0);
    if ( (float)(v6 * 30.0) == INFINITY )
      v9 = 0x80000000;
    if ( v7 < v5 )
      v10 = -1;
    else
      v10 = v9;
    v11 = v6 + UnityEngine_Time__get_deltaTime(0LL);
    v12 = (int)(float)(v11 * 30.0);
    if ( (float)(v11 * 30.0) == INFINITY )
      v12 = 0x80000000;
    this->fields.ShakeTime = v11;
    if ( v10 < v12 )
    {
      v13 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.x * -0.5,
              this->fields.ShakeRange.fields.x * 0.5,
              0LL);
      v14 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.y * -0.5,
              this->fields.ShakeRange.fields.y * 0.5,
              0LL);
      v15 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.z * -0.5,
              this->fields.ShakeRange.fields.z * 0.5,
              0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_28;
      v20.fields.x = v13;
      v20.fields.y = v14;
      v20.fields.z = v15;
      UnityEngine_Transform__set_localPosition(transform, v20, 0LL);
      if ( this->fields.ShakeTime >= this->fields.ShakeTargetTime )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        v18 = transform;
        if ( !byte_49F7111 )
        {
          transform = (UnityEngine_Transform_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
          byte_49F7111 = 1;
        }
        if ( !v18 )
          goto LABEL_28;
        UnityEngine_Transform__set_localPosition(v18, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
            (System_String_o *)StringLiteral_11921/*"SHAKE"*/,
            0LL);
          return;
        }
LABEL_28:
        sub_1B64324(transform);
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
  System_Collections_Generic_IEnumerable_T__o *v5; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  System_Action_int__o *v17; // x20

  v5 = (System_Collections_Generic_IEnumerable_T__o *)cameraIds;
  if ( (byte_49FE4A9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, cameraIds);
    sub_1B640C8(&Method_System_Array_Empty_int___, v7);
    sub_1B640C8(&Method_BasicHelper_ForEach_int___, v8);
    sub_1B640C8(&Method_BattleActionCamera_RegisterFieldCameraFsm__, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_SequenceEqual_int___, v10);
    byte_49FE4A9 = 1;
  }
  if ( !v5 )
  {
    v11 = Method_System_Array_Empty_int___;
    v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v12 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1BB5FA4(v13);
    if ( !*(_DWORD *)(v13 + 224) )
      j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1BB5FA4(v14);
    v5 = **(System_Collections_Generic_IEnumerable_T__o ***)(v14 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FieldCameraIdList_k__BackingField,
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_2E6BD68 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    if ( isInitFieldCamera )
      BattleActionCamera__InitFieldCameraList(this, v15);
    v17 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v15, v16);
    System_Action_int____ctor(v17, (Il2CppObject *)this, Method_BattleActionCamera_RegisterFieldCameraFsm__, 0LL);
    BasicHelper__ForEach_int_(
      v5,
      (System_Action_T__o *)v17,
      (const MethodInfo_2E25F48 *)Method_BasicHelper_ForEach_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__deleteCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  char v18; // w23
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x8
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int128 v22[2]; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FE4A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    byte_49FE4A8 = 1;
  }
  memset(&v23, 0, 32);
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           cameraTargetDictionary,
           uniqueId,
           (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_25;
      System_Collections_Generic_Dictionary_int__int___Remove(
        cameraTargetDictionary,
        uniqueId,
        (const MethodInfo_311C26C *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    }
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v22,
      cameraTargetDictionary,
      (const MethodInfo_311B28C *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    v18 = 1;
    *(_OWORD *)&v23.fields._dictionary = v22[0];
    v23.fields._current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v22[1];
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v23,
              (const MethodInfo_32682F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
      v18 &= HIDWORD(v23.fields._current.fields.key) != cameraId;
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v23,
      (const MethodInfo_32683F8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    if ( (v18 & 1) == 0 )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
            cameraId,
            (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary
      || (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
                                                                                          cameraId,
                                                                                          (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__),
          (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0LL) )
    {
LABEL_25:
      sub_1B64324(cameraTargetDictionary);
    }
    v20 = (UnityEngine_Object_o *)cameraTargetDictionary;
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
      cameraId,
      (const MethodInfo_3124E0C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Object__op_Inequality(
                                                                                    v20,
                                                                                    0LL,
                                                                                    0LL);
    if ( ((unsigned __int8)cameraTargetDictionary & 1) != 0 )
    {
      if ( v20 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
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
  return BattleActionCamera__getUniqueFsm_41893024(this, uniqueId, &cameraId, v3);
}


// local variable allocation has failed, the output may be wrong!
PlayMakerFSM_o *__fastcall BattleActionCamera__getUniqueFsm_41893024(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t *cameraId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  int32_t Item; // w0
  int32_t v12; // w1
  Il2CppObject *v13; // x19

  if ( (byte_49FE4A6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FE4A6 = 1;
  }
  *cameraId = 0;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          cameraTargetDictionary,
          uniqueId,
          (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0LL;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary
    || (Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 cameraTargetDictionary,
                 uniqueId,
                 (const MethodInfo_311AE18 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        *cameraId = Item,
        v12 = Item,
        (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary) == 0LL) )
  {
LABEL_12:
    sub_1B64324(cameraTargetDictionary);
  }
  v13 = System_Collections_Generic_Dictionary_int__object___get_Item(
          (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
          v12,
          (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
    return 0LL;
  return (PlayMakerFSM_o *)v13;
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
  if ( (byte_49FE498 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_PlayMakerFSM___, method);
    byte_49FE498 = 1;
  }
  return (System_Collections_Generic_IEnumerable_PlayMakerFSM__o *)BasicHelper__ExcludeNull_object_(
                                                                     (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldCameraFsmList,
                                                                     (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_PlayMakerFSM___);
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
  BattleActionCamera_o *v4; // x19
  __int64 v5; // x1
  BattleActionCamera_o *v6; // x21
  PlayMakerFSM_o *mainFsm; // x8
  BattleActionCamera_o *v8; // x19

  v4 = this;
  if ( (byte_49FE49E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3955/*"Camera"*/, targetFsm);
    this = (BattleActionCamera_o *)sub_1B640C8(&StringLiteral_3964/*"Camera_obj"*/, v5);
    byte_49FE49E = 1;
  }
  if ( !targetFsm )
    goto LABEL_15;
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                   (HutongGames_PlayMaker_Fsm_o *)this,
                                   (System_String_o *)StringLiteral_3955/*"Camera"*/,
                                   0LL);
  if ( !v4->fields.mainFsm )
    goto LABEL_15;
  v6 = this;
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(v4->fields.mainFsm, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                   (HutongGames_PlayMaker_Fsm_o *)this,
                                   (System_String_o *)StringLiteral_3955/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v6 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v6,
    (UnityEngine_GameObject_o *)this,
    0LL);
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !this
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         (HutongGames_PlayMaker_Fsm_o *)this,
                                         (System_String_o *)StringLiteral_3964/*"Camera_obj"*/,
                                         0LL),
        (mainFsm = v4->fields.mainFsm) == 0LL)
    || (v8 = this, (this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(mainFsm, 0LL)) == 0LL)
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         (HutongGames_PlayMaker_Fsm_o *)this,
                                         (System_String_o *)StringLiteral_3964/*"Camera_obj"*/,
                                         0LL)) == 0LL
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                         (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                         0LL),
        !v8) )
  {
LABEL_15:
    sub_1B64324(this);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v8,
    (UnityEngine_GameObject_o *)this,
    0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1

  if ( (byte_49FE49D & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleActionCamera_loadEffectStatus_Bloom___, targetCamera);
    sub_1B640C8(&Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___, v7);
    sub_1B640C8(&Method_BattleActionCamera_loadEffectStatus_MotionBlur___, v8);
    sub_1B640C8(&Method_BattleActionCamera_loadEffectStatus_Vignetting___, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FE49D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2E299B4 *)Method_BattleActionCamera_loadEffectStatus_Bloom___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2E299B4 *)Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2E299B4 *)Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_2E299B4 *)Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
  }
}


void __fastcall BattleActionCamera__loadEffectStatus_object_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_2E299B4 *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v10; // x0
  bool Item; // w1

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__, cam);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__bool__get_Item__, v7);
    this = (BattleActionCamera_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    if ( !method->rgctx_data )
      this = (BattleActionCamera_o *)sub_1BB6000(method);
  }
  if ( !cam )
    goto LABEL_15;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cam,
                       (const MethodInfo_2E2FE90 *)method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_);
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
           (const MethodInfo_3167824 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0LL);
      if ( this )
      {
        v10 = (Il2CppObject *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                this,
                                this->klass[1]._1.declaringType);
        Item = System_Collections_Generic_Dictionary_object__bool___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
                 v10,
                 (const MethodInfo_3167590 *)Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, Item, 0LL);
        return;
      }
LABEL_15:
      sub_1B64324(this);
    }
  }
}


void __fastcall BattleActionCamera__playCameraAnimation(
        BattleActionCamera_o *this,
        System_String_o *animName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v10; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v12; // x21
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  UnityEngine_TrackedReference_o *Item; // x0

  if ( (byte_49FE4AC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, animName);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v7);
    byte_49FE4AC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_26;
  v10 = UnityEngine_GameObject__GetComponent_object_(
          gameObject,
          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v10 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v10,
                                                 animName,
                                                 0LL);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
        return;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v10,
                                                 animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v10, 0LL);
        UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)v10, animName, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1B64324(gameObject);
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
  v12 = gameObject;
  v13 = *(unsigned __int16 *)(&gameObject->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&gameObject->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v13;
      p_offset += 2;
      if ( !v13 )
        goto LABEL_15;
    }
    v15 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_15:
    v15 = sub_1BB60A8(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v15)(v12, *(_QWORD *)(v15 + 8), 0.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0LL);
  SimpleAnimation__Play_63513060((SimpleAnimation_o *)Component_object, animName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__registerCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Object_o *Manager__loadCameraAction; // x20
  System_String_o *v17; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v19; // x2
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF

  key = cameraId;
  if ( (byte_49FE4A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&uniqueId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__, v9);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FE4A7 = 1;
  }
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            cameraTargetDictionary,
            uniqueId,
            (const MethodInfo_311B0A0 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_26;
      System_Collections_Generic_Dictionary_int__int___Add(
        cameraTargetDictionary,
        uniqueId,
        cameraId,
        (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_26;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
           cameraId,
           (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
    {
      return;
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0LL);
    if ( !cameraTargetDictionary )
LABEL_26:
      sub_1B64324(cameraTargetDictionary);
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
      v17 = cameraTargetDictionary ? (System_String_o *)cameraTargetDictionary : (System_String_o *)StringLiteral_1/*""*/;
      UnityEngine_Object__set_name(Manager__loadCameraAction, v17, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Manager__loadCameraAction,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
      {
        BattleActionCamera__initializeRegisterFsm(this, (PlayMakerFSM_o *)Component_object, v19);
        cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
        if ( cameraTargetDictionary )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
            key,
            Component_object,
            (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.frontCameraEffectsStatus, (int32_t)v4, v5, v6);
  v8 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.middleCamera, v7);
  this->fields.middleCameraEffectsStatus = v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.middleCameraEffectsStatus, (int32_t)v8, v9, v10);
}


System_Collections_Generic_Dictionary_string__bool__o *__fastcall BattleActionCamera__saveEffectStatusCamera(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *targetCamera,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v13; // x21

  if ( (byte_49FE49C & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleActionCamera_saveEffectStatus_Bloom___, targetCamera);
    sub_1B640C8(&Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___, v5);
    sub_1B640C8(&Method_BattleActionCamera_saveEffectStatus_MotionBlur___, v6);
    sub_1B640C8(&Method_BattleActionCamera_saveEffectStatus_Vignetting___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__bool__TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    byte_49FE49C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__bool__TypeInfo,
                                                                     v11,
                                                                     v12);
    System_Collections_Generic_Dictionary_object__bool____ctor(
      v13,
      (const MethodInfo_3166C5C *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v13,
      (const MethodInfo_2E29AE8 *)Method_BattleActionCamera_saveEffectStatus_Bloom___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v13,
      (const MethodInfo_2E29AE8 *)Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v13,
      (const MethodInfo_2E29AE8 *)Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v13,
      (const MethodInfo_2E29AE8 *)Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
  }
  return (System_Collections_Generic_Dictionary_string__bool__o *)v13;
}


void __fastcall BattleActionCamera__saveEffectStatus_object_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_2E29AE8 *method)
{
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v9; // x21

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__bool__set_Item__, cam);
    this = (BattleActionCamera_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    if ( !method->rgctx_data )
      this = (BattleActionCamera_o *)sub_1BB6000(method);
  }
  if ( !cam )
    goto LABEL_13;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cam,
                       (const MethodInfo_2E2FE90 *)method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_);
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
        v9 = (Il2CppObject *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                               this,
                               this->klass[1]._1.declaringType);
        this = (BattleActionCamera_o *)UnityEngine_Behaviour__get_enabled(
                                         (UnityEngine_Behaviour_o *)Component_object,
                                         0LL);
        if ( stat )
        {
          System_Collections_Generic_Dictionary_object__bool___set_Item(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
            v9,
            (unsigned __int8)this & 1,
            (const MethodInfo_3167604 *)Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
          return;
        }
      }
    }
LABEL_13:
    sub_1B64324(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__sendCameraEvent(
        BattleActionCamera_o *this,
        int32_t cameraId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  int key; // w27
  Il2CppObject *value; // x22
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v20; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_49FE49F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__, *(_QWORD *)&cameraId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_3371/*"CAMERA_END"*/, v13);
    byte_49FE49F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
    (const MethodInfo_3123DBC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v20,
            (const MethodInfo_3269C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
  {
    key = (int)v20.fields._current.fields.key;
    value = v20.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v17 )
    {
      if ( key == cameraId )
      {
        if ( !value )
          sub_1B64324(v17);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, eventName, 0LL);
      }
      else
      {
        if ( !value )
          sub_1B64324(v17);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, (System_String_o *)StringLiteral_3371/*"CAMERA_END"*/, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v20,
    (const MethodInfo_3269D98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
  BattleActionCamera__ResetFieldCameraEvent(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__sendEvent(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  PlayMakerFSM_o *UniqueFsm_41893024; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t cameraId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FE4A0 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_49FE4A0 = 1;
  }
  cameraId = 0;
  UniqueFsm_41893024 = BattleActionCamera__getUniqueFsm_41893024(this, uniqueId, &cameraId, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)UniqueFsm_41893024, 0LL, 0LL) )
  {
    if ( HutongGames_PlayMaker_PlayMakerFSMHelper__checkFsmGlobalTransitions(UniqueFsm_41893024, eventName, 0LL) )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__setGameObject(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        UnityEngine_GameObject_o *obj,
        System_String_o *nameStr,
        const MethodInfo *method)
{
  UnityEngine_Object_o *UniqueFsm_41893024; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FE4A4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_49FE4A4 = 1;
  }
  cameraId = 0;
  UniqueFsm_41893024 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_41893024(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 (const MethodInfo *)nameStr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Inequality(UniqueFsm_41893024, 0LL, 0LL);
  if ( ((unsigned __int8)FsmVariables & 1) != 0 )
  {
    if ( !UniqueFsm_41893024 )
      goto LABEL_18;
    FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)UniqueFsm_41893024, 0LL);
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
    sub_1B64324(FsmVariables);
  }
}


void __fastcall BattleActionCamera__setNormalMode(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActionCamera__setSpecialCamera(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__setSpecialCamera(BattleActionCamera_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Object_o *frontcamera; // x21
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *middleCamera; // x21

  if ( (byte_49FE49B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, active);
    byte_49FE49B = 1;
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
    sub_1B64324(gameObject);
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
  sub_1B6406C(
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActionCamera__stopCameraAnimation(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 gameObject; // x0
  Il2CppObject *Component_object; // x20
  Il2CppObject *v7; // x21
  __int64 v8; // x1
  UnityEngine_Transform_o *v9; // x20
  __int64 v10; // x1
  UnityEngine_Transform_o *v11; // x20
  __int64 v12; // x1
  UnityEngine_Transform_o *v13; // x19

  if ( (byte_49FE4AD & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FE4AD = 1;
  }
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)gameObject,
         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_25;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0LL);
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0LL, 0LL);
    if ( (gameObject & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_25;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v7, 0LL);
    }
  }
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v9 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F7111 )
  {
    gameObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v8);
    byte_49F7111 = 1;
  }
  if ( !v9 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v11 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F7116 )
  {
    gameObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v10);
    byte_49F7116 = 1;
  }
  if ( !v11 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v13 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F7111 )
  {
    gameObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
    byte_49F7111 = 1;
  }
  if ( !v13 )
LABEL_25:
    sub_1B64324(gameObject);
  UnityEngine_Transform__set_eulerAngles(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
}


void __fastcall BattleActionCamera___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE4AF & 1) == 0 )
  {
    sub_1B640C8(&BattleActionCamera___c_TypeInfo, v1);
    byte_49FE4AF = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleActionCamera___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleActionCamera___c_TypeInfo->static_fields->__9 = (struct BattleActionCamera___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleActionCamera___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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

  if ( (byte_49FE4B0 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, x);
    byte_49FE4B0 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
}


bool __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__41_0(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19
  __int64 v4; // x1

  value = (UnityEngine_Object_o *)pair.fields.value;
  if ( (byte_49FE4B1 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__,
      *(_QWORD *)&pair.fields.key);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49FE4B1 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(value, 0LL, 0LL);
}


void __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__41_1(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  PlayMakerFSM_o *value; // x19
  __int64 v4; // x1

  value = pair.fields.value;
  if ( (byte_49FE4B2 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__,
      *(_QWORD *)&pair.fields.key);
    this = (BattleActionCamera___c_o *)sub_1B640C8(&StringLiteral_3371/*"CAMERA_END"*/, v4);
    byte_49FE4B2 = 1;
  }
  if ( !value )
    sub_1B64324(this);
  PlayMakerFSM__SendEvent(value, (System_String_o *)StringLiteral_3371/*"CAMERA_END"*/, 0LL);
}


void __fastcall BattleActionCamera___c___ResetFieldCameraEvent_b__42_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  if ( (byte_49FE4B3 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_1B640C8(&StringLiteral_3371/*"CAMERA_END"*/, fsm);
    byte_49FE4B3 = 1;
  }
  if ( !fsm )
    sub_1B64324(this);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3371/*"CAMERA_END"*/, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass40_0___ctor(
        BattleActionCamera___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActionCamera___c__DisplayClass40_0___SendFieldEvent_b__0(
        BattleActionCamera___c__DisplayClass40_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  return HutongGames_PlayMaker_PlayMakerFSMHelper__checkFsmGlobalTransitions(fsm, this->fields.eventName, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass44_0___ctor(
        BattleActionCamera___c__DisplayClass44_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActionCamera___c__DisplayClass44_0___SetGameObjectToField_b__0(
        BattleActionCamera___c__DisplayClass44_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(fsm, this->fields.varName, this->fields.obj, 0LL);
}