void BattleActionCamera___ctor(BattleActionCamera_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Dictionary_int__int__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_int__o *v24; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  long double v38; // q0
  _QWORD *v39; // x20
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  struct System_String_array **v43; // x8
  struct System_String_array *v44; // x1

  if ( (byte_5972E5D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_string___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
    byte_5972E5D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
  this->fields.cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cameraFsmDictionary,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cameraTargetDictionary,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
  this->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fieldCameraFsmList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields._FieldCameraIdList_k__BackingField = v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FieldCameraIdList_k__BackingField,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v39 = Method_System_Array_Empty_string___;
  v40 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v40 )
  {
    sub_224B964(Method_System_Array_Empty_string___);
    v40 = v39[7];
  }
  v41 = *(_QWORD *)(v40 + 16);
  if ( (*(_WORD *)(v41 + 309) & 1) == 0 )
    v41 = sub_224B908(v38);
  if ( !*(_DWORD *)(v41 + 228) )
    *(__n128 *)&v38 = j_il2cpp_runtime_class_init_0(v41, v31);
  v42 = *(_QWORD *)(v39[7] + 16LL);
  if ( (*(_WORD *)(v42 + 309) & 1) == 0 )
    v42 = sub_224B908(v38);
  v43 = *(struct System_String_array ***)(v42 + 184);
  v44 = *v43;
  this->fields.sharedObjectNameArray = *v43;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sharedObjectNameArray,
    (int32_t)v44,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleActionCamera__InitCommonRegisterFsm(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *targetFsm,
        const MethodInfo *method)
{
  UnityEngine_Object_o *perf; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x2

  if ( (byte_5972E4D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11044/*"Performance"*/);
    byte_5972E4D = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetFsm);
  if ( UnityEngine_Object__op_Inequality(perf, 0, 0) )
  {
    v7 = (UnityEngine_Component_o *)this->fields.perf;
    if ( !v7 )
      sub_2213CDC(0, v6);
    gameObject = UnityEngine_Component__get_gameObject(v7, 0);
    HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(
      targetFsm,
      (System_String_o *)StringLiteral_11044/*"Performance"*/,
      gameObject,
      0);
  }
}


void BattleActionCamera__InitFieldCameraList(BattleActionCamera_o *this, const MethodInfo *method)
{
  BattleActionCamera_o *v2; // x19
  struct System_Collections_Generic_List_PlayMakerFSM__o *fieldCameraFsmList; // x8
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x0
  __int64 v5; // x1
  BattleActionCamera___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_T__o *v7; // x21
  struct BattleActionCamera___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__28_0; // x22
  Il2CppObject *v10; // x23
  struct BattleActionCamera___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *v18; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Collections_Generic_List_int__o *FieldCameraIdList_k__BackingField; // x8
  int v26; // w9

  v2 = this;
  if ( (byte_5972E46 & 1) == 0 )
  {
    sub_2213A60(&System_Action_PlayMakerFSM__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_PlayMakerFSM___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_PlayMakerFSM__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
    sub_2213A60(&Method_BattleActionCamera___c__InitFieldCameraList_b__28_0__);
    this = (BattleActionCamera_o *)sub_2213A60(&BattleActionCamera___c_TypeInfo);
    byte_5972E46 = 1;
  }
  fieldCameraFsmList = v2->fields.fieldCameraFsmList;
  if ( !fieldCameraFsmList )
    goto LABEL_14;
  if ( fieldCameraFsmList->fields._size < 1 )
    return;
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(v2, method);
  v6 = BattleActionCamera___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_T__o *)NotNullFieldCameraFsmEnumerable;
  if ( !*(&BattleActionCamera___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo, v5);
    v6 = BattleActionCamera___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__28_0 = (System_Action_object__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Action_object__o *)sub_2213CCC(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_object____ctor(_9__28_0, v10, Method_BattleActionCamera___c__InitFieldCameraList_b__28_0__, 0);
    v11 = BattleActionCamera___c_TypeInfo->static_fields;
    v11->__9__28_0 = (struct System_Action_PlayMakerFSM__o *)_9__28_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__28_0, (int32_t)_9__28_0, v12, v13, v14, v15, v16, v17);
  }
  BasicHelper__ForEach_object_(
    v7,
    (System_Action_T__o *)_9__28_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_PlayMakerFSM___);
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor__);
  v2->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.fieldCameraFsmList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  FieldCameraIdList_k__BackingField = v2->fields._FieldCameraIdList_k__BackingField;
  if ( !FieldCameraIdList_k__BackingField )
LABEL_14:
    sub_2213CDC(this, method);
  v26 = FieldCameraIdList_k__BackingField->fields._version + 1;
  FieldCameraIdList_k__BackingField->fields._size = 0;
  FieldCameraIdList_k__BackingField->fields._version = v26;
}


void BattleActionCamera__Initialize(BattleActionCamera_o *this, BattlePerformance_o *inPerf, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *cameraFsmDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o **p_cameraFsmDictionary; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x22
  System_Collections_Generic_Dictionary_int__object__o *v10; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_Dictionary_int__int__o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  const MethodInfo *v37; // x2
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_Single_array *actorCameraDefaultClipRange_k__BackingField; // x21
  float v45; // s0
  float farClipPlane; // s0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct System_Single_array *middleCameraDefaultClipRange_k__BackingField; // x21
  float v54; // s0
  float v55; // s0
  const MethodInfo *v56; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v58; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_5972E45 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&float___TypeInfo);
    byte_5972E45 = 1;
  }
  p_cameraFsmDictionary = &this->fields.cameraFsmDictionary;
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.cameraFsmDictionary;
  memset(&v58, 0, sizeof(v58));
  if ( !cameraFsmDictionary )
    goto LABEL_31;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         cameraFsmDictionary,
         (const MethodInfo_3F9C148 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__) >= 1 )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)*p_cameraFsmDictionary;
    if ( !*p_cameraFsmDictionary )
      goto LABEL_31;
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v57,
      cameraFsmDictionary,
      (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    v58 = v57;
    v57.fields._dictionary = 0;
    *(_QWORD *)&v57.fields._version = &v58;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              &v58,
              (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
    {
      if ( LODWORD(v58.fields._current.fields.key) )
      {
        if ( !v58.fields._current.fields.value )
          sub_2213CDC(0, v7);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v58.fields._current.fields.value,
                                               0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        UnityEngine_Object__Destroy_83459800(gameObject, 0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
      &v58,
      (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v10,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    *p_cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v10;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cameraFsmDictionary,
      (int32_t)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v17,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cameraTargetDictionary,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.perf = inPerf;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.perf, (int32_t)inPerf, v24, v25, v26, v27, v28, v29);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.mainFsm = (struct PlayMakerFSM_o *)Component_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mainFsm,
    (int32_t)Component_object,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  BattleActionCamera__InitCommonRegisterFsm(this, this->fields.mainFsm, v37);
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
LABEL_31:
    sub_2213CDC(cameraFsmDictionary, inPerf);
  System_Collections_Generic_Dictionary_int__object___Add(
    cameraFsmDictionary,
    0,
    (Il2CppObject *)this->fields.mainFsm,
    (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
  actorCameraDefaultClipRange_k__BackingField = this->fields._actorCameraDefaultClipRange_k__BackingField;
  if ( !actorCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213B20(float___TypeInfo, 2);
    if ( !this->fields.actorcamera )
      goto LABEL_31;
    actorCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
    v45 = UnityEngine_Camera__get_nearClipPlane(this->fields.actorcamera, 0);
    if ( !actorCameraDefaultClipRange_k__BackingField )
      goto LABEL_31;
    if ( !LODWORD(actorCameraDefaultClipRange_k__BackingField->max_length) )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField->m_Items[0] = v45;
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.actorcamera;
    if ( !cameraFsmDictionary )
      goto LABEL_31;
    farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0);
    if ( (actorCameraDefaultClipRange_k__BackingField->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField->m_Items[1] = farClipPlane;
  }
  this->fields._actorCameraDefaultClipRange_k__BackingField = actorCameraDefaultClipRange_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (int32_t)actorCameraDefaultClipRange_k__BackingField,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  middleCameraDefaultClipRange_k__BackingField = this->fields._middleCameraDefaultClipRange_k__BackingField;
  if ( !middleCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213B20(float___TypeInfo, 2);
    if ( this->fields.middleCamera )
    {
      middleCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
      v54 = UnityEngine_Camera__get_nearClipPlane(this->fields.middleCamera, 0);
      if ( middleCameraDefaultClipRange_k__BackingField )
      {
        if ( !LODWORD(middleCameraDefaultClipRange_k__BackingField->max_length) )
          goto LABEL_32;
        middleCameraDefaultClipRange_k__BackingField->m_Items[0] = v54;
        cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.middleCamera;
        if ( cameraFsmDictionary )
        {
          v55 = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0);
          if ( (middleCameraDefaultClipRange_k__BackingField->max_length & 0xFFFFFFFE) != 0 )
          {
            middleCameraDefaultClipRange_k__BackingField->m_Items[1] = v55;
            goto LABEL_29;
          }
LABEL_32:
          sub_2213CE4(cameraFsmDictionary);
        }
      }
    }
    goto LABEL_31;
  }
LABEL_29:
  this->fields._middleCameraDefaultClipRange_k__BackingField = middleCameraDefaultClipRange_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (int32_t)middleCameraDefaultClipRange_k__BackingField,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  BattleActionCamera__InitFieldCameraList(this, v56);
}


// local variable allocation has failed, the output may be wrong!
void BattleActionCamera__RegisterFieldCameraFsm(BattleActionCamera_o *this, int32_t cameraId, const MethodInfo *method)
{
  int v5; // w8
  __int64 v6; // x1
  System_String_o *v7; // x21
  BaseMonoBehaviour_o *perf; // x21
  Il2CppObject *v9; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v11; // x1
  UnityEngine_Object_o *Object; // x21
  Il2CppObject *v13; // x0
  const MethodInfo *v14; // x2
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v22; // x9
  __int64 klass_low; // x10
  intptr_t v24; // x8
  intptr_t v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *component; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *data; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5972E59 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetManager_TryGetAssetObject_GameObject___);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_GameObjectExtensions_HasComponent_PlayMakerFSM___);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_PlayMakerFSM__Add__);
    sub_2213A60(&StringLiteral_15656/*"UniqueCameraPrefab"*/);
    sub_2213A60(&StringLiteral_2260/*"AddUniqueCameraPrefab{0}"*/);
    byte_5972E59 = 1;
  }
  v5 = *(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1);
  component = 0;
  data = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, *(_QWORD *)&cameraId);
  v7 = BattleDataDefine__AddUniqueCameraPath(cameraId, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
  if ( AssetManager__TryGetAssetObject_object_(
         &data,
         v7,
         (System_String_o *)StringLiteral_15656/*"UniqueCameraPrefab"*/,
         (const MethodInfo_37D27C0 *)Method_AssetManager_TryGetAssetObject_GameObject___)
    && GameObjectExtensions__HasComponent_object_(
         (UnityEngine_GameObject_o *)data,
         (const MethodInfo_38B85A8 *)Method_GameObjectExtensions_HasComponent_PlayMakerFSM___) )
  {
    perf = (BaseMonoBehaviour_o *)this->fields.perf;
    v9 = data;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_24;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
    if ( !perf )
      goto LABEL_24;
    Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                       perf,
                                       (UnityEngine_GameObject_o *)v9,
                                       (UnityEngine_Transform_o *)gameObject,
                                       0,
                                       0);
    v28 = cameraId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v28);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format((System_String_o *)StringLiteral_2260/*"AddUniqueCameraPrefab{0}"*/, v13, 0);
    if ( !Object )
      goto LABEL_24;
    UnityEngine_Object__set_name(Object, (System_String_o *)gameObject, 0);
    if ( !UnityEngine_GameObject__TryGetComponent_object_(
            (UnityEngine_GameObject_o *)Object,
            &component,
            (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___) )
      return;
    BattleActionCamera__initializeRegisterFsm(this, (PlayMakerFSM_o *)component, v14);
    gameObject = (UnityEngine_GameObject_o *)this->fields.fieldCameraFsmList;
    if ( !gameObject )
      goto LABEL_24;
    m_CachedPtr = gameObject->fields.m_CachedPtr;
    v11 = component;
    v22 = Method_System_Collections_Generic_List_PlayMakerFSM__Add__;
    ++HIDWORD(gameObject[1].klass);
    if ( !m_CachedPtr )
      goto LABEL_24;
    klass_low = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)gameObject,
        v11,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = m_CachedPtr + 8 * klass_low;
      LODWORD(gameObject[1].klass) = klass_low + 1;
      *(_QWORD *)(v24 + 32) = v11;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 32), (int32_t)v11, v15, v16, v17, v18, v19, v20);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields._FieldCameraIdList_k__BackingField;
    if ( !gameObject
      || (v25 = gameObject->fields.m_CachedPtr,
          v26 = Method_System_Collections_Generic_List_int__Add__,
          ++HIDWORD(gameObject[1].klass),
          !v25) )
    {
LABEL_24:
      sub_2213CDC(gameObject, v11);
    }
    v27 = SLODWORD(gameObject[1].klass);
    if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        (System_Collections_Generic_List_int__o *)gameObject,
        cameraId,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
    }
    else
    {
      LODWORD(gameObject[1].klass) = v27 + 1;
      *(_DWORD *)(v25 + 4 * v27 + 32) = cameraId;
    }
  }
}


void BattleActionCamera__ResetAllCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  BattleActionCamera___c_c *v3; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x20
  struct BattleActionCamera___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__46_0; // x21
  Il2CppObject *v7; // x22
  struct BattleActionCamera___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  BattleActionCamera___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  struct BattleActionCamera___c_StaticFields *v19; // x9
  System_Action_T__o *_9__46_1; // x21
  Il2CppObject *v21; // x22
  struct BattleActionCamera___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x1

  if ( (byte_5972E51 & 1) == 0 )
  {
    sub_2213A60(&System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____);
    sub_2213A60(&System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo);
    sub_2213A60(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__46_0__);
    sub_2213A60(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__46_1__);
    sub_2213A60(&BattleActionCamera___c_TypeInfo);
    byte_5972E51 = 1;
  }
  v3 = BattleActionCamera___c_TypeInfo;
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !*(&BattleActionCamera___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo, method);
    v3 = BattleActionCamera___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__46_0 = (System_Func_T__TResult__o *)static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__46_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__46_0,
      v7,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__46_0__,
      0);
    v8 = BattleActionCamera___c_TypeInfo->static_fields;
    v8->__9__46_0 = (struct System_Func_KeyValuePair_int__PlayMakerFSM___bool__o *)_9__46_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__46_0, (int32_t)_9__46_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)cameraFsmDictionary,
          (System_Func_TSource__bool__o *)_9__46_0,
          (const MethodInfo_38A1954 *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____);
  v17 = BattleActionCamera___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)v15;
  if ( !*(&BattleActionCamera___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo, v16);
    v17 = BattleActionCamera___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__46_1 = (System_Action_T__o *)v19->__9__46_1;
  if ( !_9__46_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      v19 = BattleActionCamera___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__46_1 = (System_Action_T__o *)sub_2213CCC(System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo);
    System_Action_KeyValuePair_int__object_____ctor(
      _9__46_1,
      v21,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__46_1__,
      0);
    v22 = BattleActionCamera___c_TypeInfo->static_fields;
    v22->__9__46_1 = (struct System_Action_KeyValuePair_int__PlayMakerFSM___o *)_9__46_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__46_1, (int32_t)_9__46_1, v23, v24, v25, v26, v27, v28);
  }
  BasicHelper__ForEach_KeyValuePair_int__object__(
    v18,
    _9__46_1,
    (const MethodInfo_3810EC8 *)Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____);
  BattleActionCamera__ResetFieldCameraEvent(this, v29);
}


void BattleActionCamera__ResetFieldCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x0
  __int64 v4; // x1
  BattleActionCamera___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_T__o *v6; // x19
  struct BattleActionCamera___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__47_0; // x20
  Il2CppObject *v9; // x21
  struct BattleActionCamera___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5972E52 & 1) == 0 )
  {
    sub_2213A60(&System_Action_PlayMakerFSM__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_PlayMakerFSM___);
    sub_2213A60(&Method_BattleActionCamera___c__ResetFieldCameraEvent_b__47_0__);
    sub_2213A60(&BattleActionCamera___c_TypeInfo);
    byte_5972E52 = 1;
  }
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(this, method);
  v5 = BattleActionCamera___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_T__o *)NotNullFieldCameraFsmEnumerable;
  if ( !*(&BattleActionCamera___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo, v4);
    v5 = BattleActionCamera___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__47_0 = (System_Action_object__o *)static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__47_0 = (System_Action_object__o *)sub_2213CCC(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_object____ctor(_9__47_0, v9, Method_BattleActionCamera___c__ResetFieldCameraEvent_b__47_0__, 0);
    v10 = BattleActionCamera___c_TypeInfo->static_fields;
    v10->__9__47_0 = (struct System_Action_PlayMakerFSM__o *)_9__47_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__47_0, (int32_t)_9__47_0, v11, v12, v13, v14, v15, v16);
  }
  BasicHelper__ForEach_object_(
    v6,
    (System_Action_T__o *)_9__47_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_PlayMakerFSM___);
}


bool BattleActionCamera__SendFieldEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o **v14; // x20
  const MethodInfo *v15; // x1
  System_Collections_Generic_IEnumerable_PlayMakerFSM__o *NotNullFieldCameraFsmEnumerable; // x21
  System_Func_object__bool__o *v17; // x23
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  const MethodInfo *v20; // x1
  bool v21; // w22
  const MethodInfo *v22; // x2

  if ( (byte_5972E50 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___);
    sub_2213A60(&System_Func_PlayMakerFSM__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleActionCamera___c__DisplayClass45_0__SendFieldEvent_b__0__);
    sub_2213A60(&BattleActionCamera___c__DisplayClass45_0_TypeInfo);
    byte_5972E50 = 1;
  }
  v5 = sub_2213CCC(BattleActionCamera___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_10;
  *(_QWORD *)(v5 + 16) = eventName;
  v14 = (System_String_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)eventName, v8, v9, v10, v11, v12, v13);
  NotNullFieldCameraFsmEnumerable = BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(this, v15);
  v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleActionCamera___c__DisplayClass45_0__SendFieldEvent_b__0__,
    0);
  v19 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
          (System_Collections_Generic_IEnumerable_TSource__o *)NotNullFieldCameraFsmEnumerable,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  v21 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0, 0);
  if ( !v21 )
  {
    BattleActionCamera__ResetAllCameraEvent(this, v20);
    BattleActionCamera__SetSharedObjectCommonToTarget(this, (PlayMakerFSM_o *)v19, v22);
    if ( v19 )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)v19, *v14, 0);
      return !v21;
    }
LABEL_10:
    sub_2213CDC(v6, v7);
  }
  return !v21;
}


void BattleActionCamera__SetGameObjectToField(
        BattleActionCamera_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *varName,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  UnityEngine_Object_o *v23; // x21
  const MethodInfo *v24; // x1
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x21
  System_Action_object__o *v26; // x22

  if ( (byte_5972E54 & 1) == 0 )
  {
    sub_2213A60(&System_Action_PlayMakerFSM__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_PlayMakerFSM___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleActionCamera___c__DisplayClass49_0__SetGameObjectToField_b__0__);
    sub_2213A60(&BattleActionCamera___c__DisplayClass49_0_TypeInfo);
    byte_5972E54 = 1;
  }
  v7 = sub_2213CCC(BattleActionCamera___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = varName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)varName, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = obj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)obj, v16, v17, v18, v19, v20, v21);
  v23 = *(UnityEngine_Object_o **)(v7 + 24);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( !UnityEngine_Object__op_Equality(v23, 0, 0) && !System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0) )
  {
    NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                       this,
                                                                                       v24);
    v26 = (System_Action_object__o *)sub_2213CCC(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_object____ctor(
      v26,
      (Il2CppObject *)v7,
      Method_BattleActionCamera___c__DisplayClass49_0__SetGameObjectToField_b__0__,
      0);
    BasicHelper__ForEach_object_(
      NotNullFieldCameraFsmEnumerable,
      (System_Action_T__o *)v26,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_PlayMakerFSM___);
    HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(
      this->fields.mainFsm,
      *(System_String_o **)(v7 + 16),
      *(UnityEngine_GameObject_o **)(v7 + 24),
      0);
  }
}


void BattleActionCamera__SetSharedObjectCommonToTarget(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *targetFsm,
        const MethodInfo *method)
{
  __int64 v5; // x21
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_IEnumerable_T__o *sharedObjectNameArray; // x19
  System_Action_object__o *v15; // x20

  if ( (byte_5972E48 & 1) == 0 )
  {
    sub_2213A60(&System_Action_string__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_string___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__TryGetValue__);
    sub_2213A60(&Method_BattleActionCamera___c__DisplayClass30_0__SetSharedObjectCommonToTarget_b__0__);
    sub_2213A60(&BattleActionCamera___c__DisplayClass30_0_TypeInfo);
    byte_5972E48 = 1;
  }
  v5 = sub_2213CCC(BattleActionCamera___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = targetFsm,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)targetFsm, v8, v9, v10, v11, v12, v13),
        (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0) )
  {
    sub_2213CDC(cameraFsmDictionary, v7);
  }
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
         0,
         (Il2CppObject **)(v5 + 24),
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__TryGetValue__) )
  {
    sharedObjectNameArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.sharedObjectNameArray;
    v15 = (System_Action_object__o *)sub_2213CCC(System_Action_string__TypeInfo);
    System_Action_object____ctor(
      v15,
      (Il2CppObject *)v5,
      Method_BattleActionCamera___c__DisplayClass30_0__SetSharedObjectCommonToTarget_b__0__,
      0);
    BasicHelper__ForEach_object_(
      sharedObjectNameArray,
      (System_Action_T__o *)v15,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_string___);
  }
}


void BattleActionCamera__SetSharedVariableNameInfo(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *rootCameraFsm,
        const MethodInfo *method)
{
  System_String_array *FsmStringArray; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  long double v12; // q0
  struct System_String_array *klass; // x1
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x0

  if ( (byte_5972E47 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_string___);
    sub_2213A60(&StringLiteral_13383/*"SharedObjectNameArray"*/);
    byte_5972E47 = 1;
  }
  FsmStringArray = HutongGames_PlayMaker_PlayMakerFSMHelper__GetFsmStringArray(
                     rootCameraFsm,
                     (System_String_o *)StringLiteral_13383/*"SharedObjectNameArray"*/,
                     0);
  klass = FsmStringArray;
  if ( !FsmStringArray )
  {
    v14 = Method_System_Array_Empty_string___;
    v15 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
    if ( !v15 )
    {
      sub_224B964(Method_System_Array_Empty_string___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
      v16 = sub_224B908(v12);
    if ( !*(_DWORD *)(v16 + 228) )
      *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(v16, klass);
    FsmStringArray = *(System_String_array **)(v14[7] + 16LL);
    if ( (*(_WORD *)((_BYTE *)&FsmStringArray->m_Items[34] + 5) & 1) == 0 )
      FsmStringArray = (System_String_array *)sub_224B908(v12);
    klass = (struct System_String_array *)FsmStringArray->m_Items[19]->klass;
  }
  if ( !this )
    sub_2213CDC(FsmStringArray, klass);
  this->fields.sharedObjectNameArray = klass;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.sharedObjectNameArray,
    (int32_t)klass,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void BattleActionCamera__ShakePosition(
        BattleActionCamera_o *this,
        UnityEngine_Vector3_o range,
        float tm,
        const MethodInfo *method)
{
  this->fields.ShakeRange.fields.y = range.fields.y;
  this->fields.ShakeRange.fields.z = range.fields.z;
  this->fields.Shaking = 1;
  this->fields.ShakeTargetTime = tm;
  this->fields.ShakeRange.fields.x = range.fields.x;
  this->fields.ShakeTime = 0.0;
}


void BattleActionCamera__Update(BattleActionCamera_o *this, const MethodInfo *method)
{
  float ShakeTime; // s9
  float v4; // s8
  float v5; // s1
  float Epsilon; // s4
  float v7; // s0
  unsigned int v8; // w8
  int v9; // w20
  float v10; // s1
  float v11; // s8
  float v12; // s9
  float v13; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Transform_o *v17; // x20
  UnityEngine_Object_o *perf; // x20
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5972E5A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12550/*"SHAKE"*/);
    byte_5972E5A = 1;
  }
  if ( this->fields.Shaking )
  {
    ShakeTime = this->fields.ShakeTime;
    v4 = ShakeTime;
    if ( !byte_5969AE4 )
    {
      sub_2213A60(&UnityEngine_Mathf_TypeInfo);
      v4 = this->fields.ShakeTime;
      byte_5969AE4 = 1;
    }
    v5 = vabds_f32(0.0, ShakeTime);
    Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
    v7 = fmaxf(fabsf(ShakeTime), 0.0) * 0.000001;
    if ( v7 <= (float)(Epsilon * 8.0) )
      v7 = Epsilon * 8.0;
    v8 = (float)(v4 * 30.0) == INFINITY ? 0x80000000 : (int)(float)(v4 * 30.0);
    v9 = v5 < v7 ? -1 : v8;
    v10 = v4 + UnityEngine_Time__get_deltaTime(0);
    this->fields.ShakeTime = v10;
    if ( (float)(v10 * 30.0) != INFINITY && v9 < (int)(float)(v10 * 30.0) )
    {
      v11 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.x * -0.5,
              this->fields.ShakeRange.fields.x * 0.5,
              0);
      v12 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.y * -0.5,
              this->fields.ShakeRange.fields.y * 0.5,
              0);
      v13 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.z * -0.5,
              this->fields.ShakeRange.fields.z * 0.5,
              0);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_28;
      v19.fields.x = v11;
      v19.fields.y = v12;
      v19.fields.z = v13;
      UnityEngine_Transform__set_localPosition(transform, v19, 0);
      if ( this->fields.ShakeTime >= this->fields.ShakeTargetTime )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        v17 = transform;
        if ( !byte_5969AE0 )
        {
          transform = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( !v17 )
          goto LABEL_28;
        UnityEngine_Transform__set_localPosition(v17, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        this->fields.Shaking = 0;
      }
      perf = (UnityEngine_Object_o *)this->fields.perf;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
      if ( UnityEngine_Object__op_Inequality(perf, 0, 0) )
      {
        transform = (UnityEngine_Transform_o *)this->fields.perf;
        if ( transform )
        {
          BattlePerformance__sendLocalEventFieldMotion(
            (BattlePerformance_o *)transform,
            (System_String_o *)StringLiteral_12550/*"SHAKE"*/,
            0);
          return;
        }
LABEL_28:
        sub_2213CDC(transform, v15);
      }
    }
  }
}


void BattleActionCamera__UpdateFieldUniqueCameraFsm(
        BattleActionCamera_o *this,
        System_Int32_array *cameraIds,
        bool isInitFieldCamera,
        const MethodInfo *method)
{
  long double v4; // q0
  System_Collections_Generic_IEnumerable_T__o *v6; // x21
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  System_Action_int__o *v13; // x20

  v6 = (System_Collections_Generic_IEnumerable_T__o *)cameraIds;
  if ( (byte_5972E58 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_BasicHelper_ForEach_int___);
    sub_2213A60(&Method_BattleActionCamera_RegisterFieldCameraFsm__);
    sub_2213A60(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_5972E58 = 1;
  }
  if ( !v6 )
  {
    v8 = Method_System_Array_Empty_int___;
    v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v9 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v4);
    if ( !*(_DWORD *)(v10 + 228) )
      *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v10, cameraIds);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_224B908(v4);
    v6 = **(System_Collections_Generic_IEnumerable_T__o ***)(v11 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FieldCameraIdList_k__BackingField,
          (System_Collections_Generic_IEnumerable_TSource__o *)v6,
          (const MethodInfo_389444C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    if ( isInitFieldCamera )
      BattleActionCamera__InitFieldCameraList(this, v12);
    v13 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v13, (Il2CppObject *)this, Method_BattleActionCamera_RegisterFieldCameraFsm__, 0);
    BasicHelper__ForEach_int_(
      v6,
      (System_Action_T__o *)v13,
      (const MethodInfo_3811CEC *)Method_BasicHelper_ForEach_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionCamera__deleteCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  char v8; // w22
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x8
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+10h] [xbp-60h] BYREF

  if ( (byte_5972E57 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E57 = 1;
  }
  memset(&v14, 0, 32);
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           cameraTargetDictionary,
           uniqueId,
           (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_25;
      System_Collections_Generic_Dictionary_int__int___Remove(
        cameraTargetDictionary,
        uniqueId,
        (const MethodInfo_3F93FF4 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    }
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      &v14,
      cameraTargetDictionary,
      (const MethodInfo_3F92FF8 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    v8 = 1;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v14,
              (const MethodInfo_4156B68 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
      v8 &= HIDWORD(v14.fields._current.fields.key) != cameraId;
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v14,
      (const MethodInfo_4156C70 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    if ( (v8 & 1) == 0 )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
            (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
            cameraId,
            (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary
      || (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
                                                                                          cameraId,
                                                                                          (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__),
          (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0) )
    {
LABEL_25:
      sub_2213CDC(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    }
    v10 = (UnityEngine_Object_o *)cameraTargetDictionary;
    System_Collections_Generic_Dictionary_int__object___Remove(
      (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
      cameraId,
      (const MethodInfo_3F9D958 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Object__op_Inequality(
                                                                                    v10,
                                                                                    0,
                                                                                    0);
    if ( ((unsigned __int8)cameraTargetDictionary & 1) != 0 )
    {
      if ( v10 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
        UnityEngine_Object__Destroy_83459800(gameObject, 0);
        return;
      }
      goto LABEL_25;
    }
  }
}


PlayMakerFSM_o *BattleActionCamera__getUniqueFsm(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t cameraId; // [xsp+Ch] [xbp-4h] BYREF

  cameraId = 0;
  return BattleActionCamera__getUniqueFsm_52539028(this, uniqueId, &cameraId, v3);
}


// local variable allocation has failed, the output may be wrong!
PlayMakerFSM_o *BattleActionCamera__getUniqueFsm_52539028(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t *cameraId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x8
  __int64 v9; // x1
  Il2CppObject *Item; // x19

  if ( (byte_5972E55 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E55 = 1;
  }
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  *cameraId = 0;
  if ( !cameraTargetDictionary )
    goto LABEL_12;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          cameraTargetDictionary,
          uniqueId,
          (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary
    || (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__int___get_Item(
                                                                                        cameraTargetDictionary,
                                                                                        uniqueId,
                                                                                        (const MethodInfo_3F92B84 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        cameraFsmDictionary = this->fields.cameraFsmDictionary,
        *cameraId = (int)cameraTargetDictionary,
        !cameraFsmDictionary) )
  {
LABEL_12:
    sub_2213CDC(cameraTargetDictionary, *(_QWORD *)&uniqueId);
  }
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
           (int32_t)cameraTargetDictionary,
           (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
    return 0;
  return (PlayMakerFSM_o *)Item;
}


System_Collections_Generic_List_int__o *BattleActionCamera__get_FieldCameraIdList(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  return this->fields._FieldCameraIdList_k__BackingField;
}


System_Collections_Generic_IEnumerable_PlayMakerFSM__o *BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  if ( (byte_5972E44 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_PlayMakerFSM___);
    byte_5972E44 = 1;
  }
  return (System_Collections_Generic_IEnumerable_PlayMakerFSM__o *)BasicHelper__ExcludeNull_object_(
                                                                     (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldCameraFsmList,
                                                                     (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_PlayMakerFSM___);
}


System_Single_array *BattleActionCamera__get_actorCameraDefaultClipRange(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  return this->fields._actorCameraDefaultClipRange_k__BackingField;
}


System_Single_array *BattleActionCamera__get_middleCameraDefaultClipRange(
        BattleActionCamera_o *this,
        const MethodInfo *method)
{
  return this->fields._middleCameraDefaultClipRange_k__BackingField;
}


void BattleActionCamera__initializeRegisterFsm(
        BattleActionCamera_o *this,
        PlayMakerFSM_o *targetFsm,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v6; // x1
  HutongGames_PlayMaker_FsmGameObject_o *v7; // x21
  PlayMakerFSM_o *mainFsm; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v9; // x19

  if ( (byte_5972E4C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4108/*"Camera"*/);
    sub_2213A60(&StringLiteral_4118/*"Camera_obj"*/);
    byte_5972E4C = 1;
  }
  BattleActionCamera__InitCommonRegisterFsm(this, targetFsm, method);
  if ( !targetFsm )
    goto LABEL_15;
  Fsm = PlayMakerFSM__get_Fsm(targetFsm, 0);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         Fsm,
                                         (System_String_o *)StringLiteral_4108/*"Camera"*/,
                                         0);
  if ( !this->fields.mainFsm )
    goto LABEL_15;
  v7 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm;
  Fsm = PlayMakerFSM__get_Fsm(this->fields.mainFsm, 0);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         Fsm,
                                         (System_String_o *)StringLiteral_4108/*"Camera"*/,
                                         0);
  if ( !Fsm )
    goto LABEL_15;
  Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                         (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                                         0);
  if ( !v7 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v7, (UnityEngine_GameObject_o *)Fsm, 0);
  Fsm = PlayMakerFSM__get_Fsm(targetFsm, 0);
  if ( !Fsm
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                               Fsm,
                                               (System_String_o *)StringLiteral_4118/*"Camera_obj"*/,
                                               0),
        (mainFsm = this->fields.mainFsm) == 0)
    || (v9 = (HutongGames_PlayMaker_FsmGameObject_o *)Fsm, (Fsm = PlayMakerFSM__get_Fsm(mainFsm, 0)) == 0)
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                               Fsm,
                                               (System_String_o *)StringLiteral_4118/*"Camera_obj"*/,
                                               0)) == 0
    || (Fsm = (HutongGames_PlayMaker_Fsm_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                               (HutongGames_PlayMaker_FsmGameObject_o *)Fsm,
                                               0),
        !v9) )
  {
LABEL_15:
    sub_2213CDC(Fsm, v6);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v9, (UnityEngine_GameObject_o *)Fsm, 0);
}


void BattleActionCamera__loadEffectStatus(BattleActionCamera_o *this, const MethodInfo *method)
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


void BattleActionCamera__loadEffectStatusCamera(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *targetCamera,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo *method)
{
  if ( (byte_5972E4B & 1) == 0 )
  {
    sub_2213A60(&Method_BattleActionCamera_loadEffectStatus_Bloom___);
    sub_2213A60(&Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
    sub_2213A60(&Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    sub_2213A60(&Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E4B = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetCamera);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0, 0) )
  {
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_3816620 *)Method_BattleActionCamera_loadEffectStatus_Bloom___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_3816620 *)Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_3816620 *)Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    BattleActionCamera__loadEffectStatus_object_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_3816620 *)Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
  }
}


void BattleActionCamera__loadEffectStatus_object_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_3816620 *method)
{
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v9; // x0
  bool Item; // w8

  if ( !method->rgctx_data )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
    this = (BattleActionCamera_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (BattleActionCamera_o *)sub_224B964(method);
  }
  if ( !cam )
    goto LABEL_15;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cam,
                       (const MethodInfo_3820CA8 *)method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_15;
    this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0);
    if ( !this )
      goto LABEL_15;
    this = (BattleActionCamera_o *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.element_class)(
                                     this,
                                     this->klass[1]._1.castClass);
    if ( !stat )
      goto LABEL_15;
    if ( System_Collections_Generic_Dictionary_object__bool___ContainsKey(
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
           (Il2CppObject *)this,
           (const MethodInfo_3FE39E8 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0);
      if ( this )
      {
        v9 = (Il2CppObject *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.element_class)(
                               this,
                               this->klass[1]._1.castClass);
        Item = System_Collections_Generic_Dictionary_object__bool___get_Item(
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
                 v9,
                 (const MethodInfo_3FE375C *)Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, Item, 0);
        return;
      }
LABEL_15:
      sub_2213CDC(this, cam);
    }
  }
}


void BattleActionCamera__playCameraAnimation(
        BattleActionCamera_o *this,
        System_String_o *animName,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x21
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v14; // x0
  UnityEngine_TrackedReference_o *Item; // x0

  if ( (byte_5972E5B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_5972E5B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_26;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v9 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v9,
                                                 animName,
                                                 0);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
        return;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v9,
                                                 animName,
                                                 0);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, 0.0, 0);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v9, 0);
        UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)v9, animName, 0);
        return;
      }
    }
LABEL_26:
    sub_2213CDC(gameObject, v6);
  }
  if ( !Component_object )
    goto LABEL_26;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, animName, 0) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)Component_object, animName, 0);
  if ( !gameObject )
    goto LABEL_26;
  klass = gameObject->klass;
  v11 = gameObject;
  v12 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
  if ( *(_WORD *)&gameObject->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_15;
    }
    v14 = (__int64)&klass[1] + 16 * *(_DWORD *)p_offset;
  }
  else
  {
LABEL_15:
    v14 = sub_224BC3C(gameObject, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, double))v14)(v11, *(_QWORD *)(v14 + 8), 0.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0);
  SimpleAnimation__Play_78552168((SimpleAnimation_o *)Component_object, animName, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleActionCamera__registerCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *Manager__loadCameraAction; // x20
  System_String_o *v12; // x1
  __int64 v13; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v15; // x2
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF

  key = cameraId;
  if ( (byte_5972E56 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5972E56 = 1;
  }
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_26;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            cameraTargetDictionary,
            uniqueId,
            (const MethodInfo_3F92E0C *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_26;
      System_Collections_Generic_Dictionary_int__int___Add(
        cameraTargetDictionary,
        uniqueId,
        cameraId,
        (const MethodInfo_3F92C20 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_26;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
           cameraId,
           (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
    {
      return;
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0);
    if ( !cameraTargetDictionary )
LABEL_26:
      sub_2213CDC(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)cameraTargetDictionary, 0);
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v8);
    Manager__loadCameraAction = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCameraAction(
                                                          cameraId,
                                                          transform,
                                                          0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(Manager__loadCameraAction, 0, 0) )
    {
      cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Int32__ToString(
                                                                                      (int32_t)&key,
                                                                                      0);
      if ( !Manager__loadCameraAction )
        goto LABEL_26;
      v12 = cameraTargetDictionary ? (System_String_o *)cameraTargetDictionary : (System_String_o *)StringLiteral_1/*""*/;
      UnityEngine_Object__set_name(Manager__loadCameraAction, v12, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Manager__loadCameraAction,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
      {
        BattleActionCamera__initializeRegisterFsm(this, (PlayMakerFSM_o *)Component_object, v15);
        cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
        if ( cameraTargetDictionary )
        {
          System_Collections_Generic_Dictionary_int__object___Add(
            (System_Collections_Generic_Dictionary_int__object__o *)cameraTargetDictionary,
            key,
            Component_object,
            (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
          return;
        }
        goto LABEL_26;
      }
    }
  }
}


void BattleActionCamera__saveEffectStatus(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_Dictionary_string__bool__o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_Dictionary_string__bool__o *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v4 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.frontcamera, v2);
  this->fields.frontCameraEffectsStatus = v4;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.frontCameraEffectsStatus,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.middleCamera, v11);
  this->fields.middleCameraEffectsStatus = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.middleCameraEffectsStatus,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


System_Collections_Generic_Dictionary_string__bool__o *BattleActionCamera__saveEffectStatusCamera(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *targetCamera,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x21

  if ( (byte_5972E4A & 1) == 0 )
  {
    sub_2213A60(&Method_BattleActionCamera_saveEffectStatus_Bloom___);
    sub_2213A60(&Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
    sub_2213A60(&Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    sub_2213A60(&Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E4A = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, targetCamera);
  v5 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0, 0) )
  {
    v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    System_Collections_Generic_Dictionary_object__bool____ctor(
      v5,
      (const MethodInfo_3FE2E48 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v5,
      (const MethodInfo_3816758 *)Method_BattleActionCamera_saveEffectStatus_Bloom___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v5,
      (const MethodInfo_3816758 *)Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v5,
      (const MethodInfo_3816758 *)Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    BattleActionCamera__saveEffectStatus_object_(
      this,
      targetCamera,
      (System_Collections_Generic_Dictionary_string__bool__o *)v5,
      (const MethodInfo_3816758 *)Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
  }
  return (System_Collections_Generic_Dictionary_string__bool__o *)v5;
}


void BattleActionCamera__saveEffectStatus_object_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_3816758 *method)
{
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *v9; // x21

  if ( !method->rgctx_data )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
    this = (BattleActionCamera_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      this = (BattleActionCamera_o *)sub_224B964(method);
  }
  if ( !cam )
    goto LABEL_13;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)cam,
                       (const MethodInfo_3820CA8 *)method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      this = (BattleActionCamera_o *)System_Object__GetType(Component_object, 0);
      if ( this )
      {
        v9 = (Il2CppObject *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.element_class)(
                               this,
                               this->klass[1]._1.castClass);
        this = (BattleActionCamera_o *)UnityEngine_Behaviour__get_enabled(
                                         (UnityEngine_Behaviour_o *)Component_object,
                                         0);
        if ( stat )
        {
          System_Collections_Generic_Dictionary_object__bool___set_Item(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)stat,
            v9,
            (unsigned __int8)this & 1,
            (const MethodInfo_3FE37D0 *)Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
          return;
        }
      }
    }
LABEL_13:
    sub_2213CDC(this, cam);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActionCamera__sendCameraEvent(
        BattleActionCamera_o *this,
        int32_t cameraId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  __int64 v8; // x1
  int key; // w27
  Il2CppObject *value; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_5972E4E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3405/*"CAMERA_END"*/);
    byte_5972E4E = 1;
  }
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  memset(&v15, 0, sizeof(v15));
  if ( !cameraFsmDictionary )
    sub_2213CDC(0, *(_QWORD *)&cameraId);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v14,
    (System_Collections_Generic_Dictionary_int__object__o *)cameraFsmDictionary,
    (const MethodInfo_3F9C8EC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
  v15 = v14;
  v14.fields._dictionary = 0;
  *(_QWORD *)&v14.fields._version = &v15;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v15,
            (const MethodInfo_4158548 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
  {
    key = (int)v15.fields._current.fields.key;
    value = v15.fields._current.fields.value;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0, 0);
    if ( !v11 )
    {
      if ( key == cameraId )
      {
        if ( !value )
          sub_2213CDC(v11, v12);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, eventName, 0);
      }
      else
      {
        if ( !value )
          sub_2213CDC(v11, v12);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, (System_String_o *)StringLiteral_3405/*"CAMERA_END"*/, 0);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v15,
    (const MethodInfo_415866C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
  BattleActionCamera__ResetFieldCameraEvent(this, v13);
}


void BattleActionCamera__sendEvent(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *UniqueFsm_52539028; // x21
  const MethodInfo *v9; // x3
  int32_t cameraId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5972E4F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E4F = 1;
  }
  cameraId = 0;
  UniqueFsm_52539028 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_52539028(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(UniqueFsm_52539028, 0, 0)
    && HutongGames_PlayMaker_PlayMakerFSMHelper__checkFsmGlobalTransitions(
         (PlayMakerFSM_o *)UniqueFsm_52539028,
         eventName,
         0) )
  {
    BattleActionCamera__sendCameraEvent(this, cameraId, eventName, v9);
  }
  else
  {
    BattleActionCamera__sendMainEvent(this, eventName, 0, v9);
  }
}


void BattleActionCamera__sendMainEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
        System_String_o *stateName,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  const MethodInfo *v7; // x3

  perf = this->fields.perf;
  if ( (!perf || !BattlePerformance__IsSkipCameraResetEventAction(perf, eventName, stateName, 0))
    && !BattleActionCamera__SendFieldEvent(this, eventName, (const MethodInfo *)stateName) )
  {
    BattleActionCamera__sendCameraEvent(this, 0, eventName, v7);
  }
}


void BattleActionCamera__setGameObject(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        UnityEngine_GameObject_o *obj,
        System_String_o *nameStr,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_Object_o *UniqueFsm_52539028; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v12; // x1
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5972E53 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E53 = 1;
  }
  cameraId = 0;
  UniqueFsm_52539028 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_52539028(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 (const MethodInfo *)nameStr);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Inequality(UniqueFsm_52539028, 0, 0);
  if ( ((unsigned __int8)FsmVariables & 1) != 0 )
  {
    if ( !UniqueFsm_52539028 )
      goto LABEL_18;
    FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)UniqueFsm_52539028, 0);
    if ( !FsmVariables )
      goto LABEL_18;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(FsmVariables, nameStr, 0);
    if ( FsmGameObject )
      HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, obj, 0);
  }
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.mainFsm;
  if ( !FsmVariables )
    goto LABEL_18;
  FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)FsmVariables, 0);
  if ( !FsmVariables )
    goto LABEL_18;
  if ( HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(FsmVariables, nameStr, 0) )
  {
    FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.mainFsm;
    if ( FsmVariables )
    {
      FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)FsmVariables, 0);
      if ( FsmVariables )
      {
        FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                                                 (HutongGames_PlayMaker_Fsm_o *)FsmVariables,
                                                                 nameStr,
                                                                 0);
        if ( FsmVariables )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)FsmVariables, obj, 0);
          return;
        }
      }
    }
LABEL_18:
    sub_2213CDC(FsmVariables, v12);
  }
}


void BattleActionCamera__setNormalMode(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActionCamera__setSpecialCamera(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void BattleActionCamera__setSpecialCamera(BattleActionCamera_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Object_o *frontcamera; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *middleCamera; // x21

  if ( (byte_5972E49 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E49 = 1;
  }
  frontcamera = (UnityEngine_Object_o *)this->fields.frontcamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, active);
  if ( UnityEngine_Object__op_Inequality(frontcamera, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frontcamera;
    if ( !gameObject )
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0);
  }
  middleCamera = (UnityEngine_Object_o *)this->fields.middleCamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(middleCamera, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.middleCamera;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0);
        return;
      }
    }
LABEL_16:
    sub_2213CDC(gameObject, v6);
  }
}


void BattleActionCamera__setSpecialMode(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActionCamera__setSpecialCamera(this, 1, v2);
}


void BattleActionCamera__set_actorCameraDefaultClipRange(
        BattleActionCamera_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._actorCameraDefaultClipRange_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionCamera__set_middleCameraDefaultClipRange(
        BattleActionCamera_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._middleCameraDefaultClipRange_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionCamera__stopCameraAnimation(BattleActionCamera_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Transform_o *v9; // x20
  UnityEngine_Transform_o *v10; // x19

  if ( (byte_5972E5C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E5C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_25;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_25;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_25;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0);
  }
  else
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_25;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v7, 0);
    }
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v8 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5969AE0 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v8 )
    goto LABEL_25;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v9 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5969AE5 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  if ( !v9 )
    goto LABEL_25;
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v10 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5969AE0 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  if ( !v10 )
LABEL_25:
    sub_2213CDC(gameObject, v4);
  UnityEngine_Transform__set_eulerAngles(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
}


void BattleActionCamera___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972E5E & 1) == 0 )
  {
    sub_2213A60(&BattleActionCamera___c_TypeInfo);
    byte_5972E5E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleActionCamera___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleActionCamera___c_TypeInfo->static_fields->__9 = (struct BattleActionCamera___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleActionCamera___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleActionCamera___c___ctor(BattleActionCamera___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionCamera___c___InitFieldCameraList_b__28_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_5972E5F & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E5F = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


bool BattleActionCamera___c___ResetAllCameraEvent_b__46_0(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19

  value = (UnityEngine_Object_o *)pair.fields.value;
  if ( (byte_5972E60 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972E60 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&pair.fields.key);
  return UnityEngine_Object__op_Inequality(value, 0, 0);
}


void BattleActionCamera___c___ResetAllCameraEvent_b__46_1(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  PlayMakerFSM_o *value; // x19

  value = pair.fields.value;
  if ( (byte_5972E61 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    this = (BattleActionCamera___c_o *)sub_2213A60(&StringLiteral_3405/*"CAMERA_END"*/);
    byte_5972E61 = 1;
  }
  if ( !value )
    sub_2213CDC(this, *(_QWORD *)&pair.fields.key);
  PlayMakerFSM__SendEvent(value, (System_String_o *)StringLiteral_3405/*"CAMERA_END"*/, 0);
}


void BattleActionCamera___c___ResetFieldCameraEvent_b__47_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  if ( (byte_5972E62 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_2213A60(&StringLiteral_3405/*"CAMERA_END"*/);
    byte_5972E62 = 1;
  }
  if ( !fsm )
    sub_2213CDC(this, fsm);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3405/*"CAMERA_END"*/, 0);
}


void BattleActionCamera___c__DisplayClass30_0___ctor(
        BattleActionCamera___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionCamera___c__DisplayClass30_0___SetSharedObjectCommonToTarget_b__0(
        BattleActionCamera___c__DisplayClass30_0_o *this,
        System_String_o *varName,
        const MethodInfo *method)
{
  PlayMakerFSM_o *commonFsm; // x0
  PlayMakerFSM_o *targetFsm; // x20
  UnityEngine_GameObject_o *Value; // x2

  commonFsm = this->fields.commonFsm;
  if ( !commonFsm
    || (targetFsm = this->fields.targetFsm,
        (commonFsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(commonFsm, 0)) == 0)
    || (commonFsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmGameObject(
                                        (HutongGames_PlayMaker_FsmVariables_o *)commonFsm,
                                        varName,
                                        0)) == 0 )
  {
    sub_2213CDC(commonFsm, varName);
  }
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value((HutongGames_PlayMaker_FsmGameObject_o *)commonFsm, 0);
  HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(targetFsm, varName, Value, 0);
}


void BattleActionCamera___c__DisplayClass45_0___ctor(
        BattleActionCamera___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActionCamera___c__DisplayClass45_0___SendFieldEvent_b__0(
        BattleActionCamera___c__DisplayClass45_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  return HutongGames_PlayMaker_PlayMakerFSMHelper__checkFsmGlobalTransitions(fsm, this->fields.eventName, 0);
}


void BattleActionCamera___c__DisplayClass49_0___ctor(
        BattleActionCamera___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActionCamera___c__DisplayClass49_0___SetGameObjectToField_b__0(
        BattleActionCamera___c__DisplayClass49_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_PlayMakerFSMHelper__SetFsmGameObject(fsm, this->fields.varName, this->fields.obj, 0);
}