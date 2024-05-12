void __fastcall BattleActionCamera___ctor(BattleActionCamera_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_int__int__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_int__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_43897CE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor___69400808);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
    byte_43897CE = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
  this->fields.cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.cameraFsmDictionary,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.cameraTargetDictionary,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor___69400808);
  this->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.fieldCameraFsmList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields._FieldCameraIdList_k__BackingField = v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._FieldCameraIdList_k__BackingField,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActionCamera__InitFieldCameraList(BattleActionCamera_o *this, const MethodInfo *method)
{
  BattleActionCamera_o *v2; // x19
  struct System_Collections_Generic_List_PlayMakerFSM__o *fieldCameraFsmList; // x8
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x21
  BattleActionCamera___c_c *v5; // x8
  struct BattleActionCamera___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_0; // x22
  Il2CppObject *v8; // x23
  struct BattleActionCamera___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v2 = this;
  if ( (byte_43897BA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_PlayMakerFSM___ctor__);
    sub_B775C4(&System_Action_PlayMakerFSM__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_PlayMakerFSM___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor___69400808);
    sub_B775C4(&Method_System_Collections_Generic_List_PlayMakerFSM__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
    sub_B775C4(&Method_BattleActionCamera___c__InitFieldCameraList_b__26_0__);
    this = (BattleActionCamera_o *)sub_B775C4(&BattleActionCamera___c_TypeInfo);
    byte_43897BA = 1;
  }
  fieldCameraFsmList = v2->fields.fieldCameraFsmList;
  if ( !fieldCameraFsmList )
    goto LABEL_16;
  if ( fieldCameraFsmList->fields._size >= 1 )
  {
    NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                       v2,
                                                                                       method);
    v5 = BattleActionCamera___c_TypeInfo;
    if ( (BYTE3(BattleActionCamera___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
      v5 = BattleActionCamera___c_TypeInfo;
    }
    static_fields = v5->static_fields;
    _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v5);
        static_fields = BattleActionCamera___c_TypeInfo->static_fields;
      }
      v8 = (Il2CppObject *)static_fields->__9;
      _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_PlayMakerFSM__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__26_0,
        v8,
        Method_BattleActionCamera___c__InitFieldCameraList_b__26_0__,
        (const MethodInfo_26A0868 *)Method_System_Action_PlayMakerFSM___ctor__);
      v9 = BattleActionCamera___c_TypeInfo->static_fields;
      v9->__9__26_0 = (struct System_Action_PlayMakerFSM__o *)_9__26_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v9->__9__26_0,
        (System_Int32_array **)_9__26_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      NotNullFieldCameraFsmEnumerable,
      (System_Action_T__o *)_9__26_0,
      (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v16,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor___69400808);
    v2->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v16;
    sub_B77560(
      (BattleServantConfConponent_o *)&v2->fields.fieldCameraFsmList,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    this = (BattleActionCamera_o *)v2->fields._FieldCameraIdList_k__BackingField;
    if ( this )
    {
      System_Collections_Generic_List_int___Clear(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_30E61F4 *)Method_System_Collections_Generic_List_int__Clear__);
      return;
    }
LABEL_16:
    sub_B7769C(this, method);
  }
}


void __fastcall BattleActionCamera__Initialize(
        BattleActionCamera_o *this,
        BattlePerformance_o *inPerf,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *cameraFsmDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o **p_cameraFsmDictionary; // x21
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v9; // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_Dictionary_int__int__o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Single_array *actorCameraDefaultClipRange_k__BackingField; // x21
  float v43; // s0
  float farClipPlane; // s0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct System_Single_array *middleCameraDefaultClipRange_k__BackingField; // x21
  float v52; // s0
  float v53; // s0
  const MethodInfo *v54; // x1
  __int64 v55; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v56; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v57; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_43897B9 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&float___TypeInfo);
    byte_43897B9 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  p_cameraFsmDictionary = &this->fields.cameraFsmDictionary;
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraFsmDictionary,
         (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__) >= 1 )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)*p_cameraFsmDictionary;
    if ( !*p_cameraFsmDictionary )
      goto LABEL_32;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v56,
      cameraFsmDictionary,
      (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    v57 = v56;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v57,
              (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
    {
      if ( LODWORD(v57.fields.current.fields.key) )
      {
        if ( !v57.fields.current.fields.value )
          sub_B7769C(0LL, v7);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v57.fields.current.fields.value,
                                               0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v57,
      (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v9,
      (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    *p_cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v9;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.cameraFsmDictionary,
      (System_Int32_array **)v9,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v16,
    (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v16;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.cameraTargetDictionary,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.perf = inPerf;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inPerf,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.mainFsm = Component_WebViewObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.mainFsm,
    (System_Int32_array **)Component_WebViewObject,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
LABEL_32:
    sub_B7769C(cameraFsmDictionary, inPerf);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraFsmDictionary,
    0,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)this->fields.mainFsm,
    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
  actorCameraDefaultClipRange_k__BackingField = this->fields._actorCameraDefaultClipRange_k__BackingField;
  if ( !actorCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)sub_B775DC(float___TypeInfo, 2LL);
    if ( !this->fields.actorcamera )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
    v43 = UnityEngine_Camera__get_nearClipPlane(this->fields.actorcamera, 0LL);
    if ( !actorCameraDefaultClipRange_k__BackingField )
      goto LABEL_32;
    if ( !actorCameraDefaultClipRange_k__BackingField->max_length )
      goto LABEL_33;
    actorCameraDefaultClipRange_k__BackingField->m_Items[1] = v43;
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.actorcamera;
    if ( !cameraFsmDictionary )
      goto LABEL_32;
    farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
    if ( actorCameraDefaultClipRange_k__BackingField->max_length <= 1 )
      goto LABEL_33;
    actorCameraDefaultClipRange_k__BackingField->m_Items[2] = farClipPlane;
  }
  this->fields._actorCameraDefaultClipRange_k__BackingField = actorCameraDefaultClipRange_k__BackingField;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (System_Int32_array **)actorCameraDefaultClipRange_k__BackingField,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  middleCameraDefaultClipRange_k__BackingField = this->fields._middleCameraDefaultClipRange_k__BackingField;
  if ( !middleCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)sub_B775DC(float___TypeInfo, 2LL);
    if ( this->fields.middleCamera )
    {
      middleCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
      v52 = UnityEngine_Camera__get_nearClipPlane(this->fields.middleCamera, 0LL);
      if ( middleCameraDefaultClipRange_k__BackingField )
      {
        if ( !middleCameraDefaultClipRange_k__BackingField->max_length )
          goto LABEL_33;
        middleCameraDefaultClipRange_k__BackingField->m_Items[1] = v52;
        cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.middleCamera;
        if ( cameraFsmDictionary )
        {
          v53 = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
          if ( middleCameraDefaultClipRange_k__BackingField->max_length > 1 )
          {
            middleCameraDefaultClipRange_k__BackingField->m_Items[2] = v53;
            goto LABEL_30;
          }
LABEL_33:
          v55 = sub_B776C8(cameraFsmDictionary);
          sub_B77668(v55, 0LL);
        }
      }
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields._middleCameraDefaultClipRange_k__BackingField = middleCameraDefaultClipRange_k__BackingField;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (System_Int32_array **)middleCameraDefaultClipRange_k__BackingField,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  BattleActionCamera__InitFieldCameraList(this, v54);
}


void __fastcall BattleActionCamera__RegisterFieldCameraFsm(
        BattleActionCamera_o *this,
        int32_t cameraId,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  struct BattlePerformance_o *perf; // x22
  Il2CppObject *v7; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  const MethodInfo *v11; // x2
  PlayMakerFSM_o *targetFsm; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_43897CA & 1) == 0 )
  {
    sub_B775C4(&Method_AssetManager_TryGetAssetObject_GameObject___);
    sub_B775C4(&AssetManager_TypeInfo);
    sub_B775C4(&BattleDataDefine_TypeInfo);
    sub_B775C4(&Method_GameObjectExtensions_HasComponent_PlayMakerFSM___);
    sub_B775C4(&Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___);
    sub_B775C4(&Method_System_Collections_Generic_List_PlayMakerFSM__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&StringLiteral_15188/*"UniqueCameraPrefab"*/);
    byte_43897CA = 1;
  }
  targetFsm = 0LL;
  data = 0LL;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  }
  v5 = BattleDataDefine__AddUniqueCameraPath(cameraId, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__TryGetAssetObject_object_(
         &data,
         v5,
         (System_String_o *)StringLiteral_15188/*"UniqueCameraPrefab"*/,
         (const MethodInfo_1C60178 *)Method_AssetManager_TryGetAssetObject_GameObject___)
    && GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
         (UnityEngine_GameObject_o *)data,
         (const MethodInfo_1DECB3C *)Method_GameObjectExtensions_HasComponent_PlayMakerFSM___) )
  {
    perf = this->fields.perf;
    v7 = data;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !perf )
      goto LABEL_19;
    gameObject = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)gameObject,
                   (UnityEngine_GameObject_o *)v7,
                   (UnityEngine_Transform_o *)gameObject,
                   0LL,
                   v10);
    if ( !gameObject )
      goto LABEL_19;
    if ( !UnityEngine_GameObject__TryGetComponent_UITexture_(
            gameObject,
            (UITexture_o **)&targetFsm,
            (const MethodInfo_1DEC764 *)Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___) )
      return;
    BattleActionCamera__initializeRegisterFsm(this, targetFsm, v11);
    gameObject = (UnityEngine_GameObject_o *)this->fields.fieldCameraFsmList;
    if ( !gameObject
      || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
            (EventMissionProgressRequest_Argument_ProgressData_o *)targetFsm,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PlayMakerFSM__Add__),
          (gameObject = (UnityEngine_GameObject_o *)this->fields._FieldCameraIdList_k__BackingField) == 0LL) )
    {
LABEL_19:
      sub_B7769C(gameObject, v9);
    }
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)gameObject,
      cameraId,
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  }
}


void __fastcall BattleActionCamera__ResetAllCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x20
  BattleActionCamera___c_c *v4; // x0
  struct BattleActionCamera___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *_9__41_0; // x21
  Il2CppObject *v7; // x22
  struct BattleActionCamera___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  BattleActionCamera___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  struct BattleActionCamera___c_StaticFields *v18; // x9
  System_Action_KeyValuePair_int__PlayMakerFSM___o *_9__41_1; // x21
  Il2CppObject *v20; // x22
  struct BattleActionCamera___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1

  if ( (byte_43897C2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_KeyValuePair_int__PlayMakerFSM____ctor__);
    sub_B775C4(&System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____);
    sub_B775C4(&Method_System_Func_KeyValuePair_int__PlayMakerFSM___bool___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo);
    sub_B775C4(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_0__);
    sub_B775C4(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_1__);
    sub_B775C4(&BattleActionCamera___c_TypeInfo);
    byte_43897C2 = 1;
  }
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  v4 = BattleActionCamera___c_TypeInfo;
  if ( (BYTE3(BattleActionCamera___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v4 = BattleActionCamera___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__41_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B77694(System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo);
    System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
      _9__41_0,
      v7,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_0__,
      (const MethodInfo_29D5D98 *)Method_System_Func_KeyValuePair_int__PlayMakerFSM___bool___ctor__);
    v8 = BattleActionCamera___c_TypeInfo->static_fields;
    v8->__9__41_0 = (struct System_Func_KeyValuePair_int__PlayMakerFSM___bool__o *)_9__41_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__41_0,
      (System_Int32_array **)_9__41_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_KeyValuePair_int__PlayMakerFSM__(
          (System_Collections_Generic_IEnumerable_TSource__o *)cameraFsmDictionary,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_1D40D1C *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____);
  v16 = BattleActionCamera___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_T__o *)v15;
  if ( (BYTE3(BattleActionCamera___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v16 = BattleActionCamera___c_TypeInfo;
  }
  v18 = v16->static_fields;
  _9__41_1 = v18->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v18 = BattleActionCamera___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__41_1 = (System_Action_KeyValuePair_int__PlayMakerFSM___o *)sub_B77694(System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo);
    System_Action_KeyValuePair_int__PlayMakerFSM_____ctor(
      _9__41_1,
      v20,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_1__,
      (const MethodInfo_269A3AC *)Method_System_Action_KeyValuePair_int__PlayMakerFSM____ctor__);
    v21 = BattleActionCamera___c_TypeInfo->static_fields;
    v21->__9__41_1 = _9__41_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v21->__9__41_1,
      (System_Int32_array **)_9__41_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  BasicHelper__ForEach_KeyValuePair_int__PlayMakerFSM__(
    v17,
    (System_Action_T__o *)_9__41_1,
    (const MethodInfo_1C66894 *)Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____);
  BattleActionCamera__ResetFieldCameraEvent(this, v28);
}


void __fastcall BattleActionCamera__ResetFieldCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x19
  BattleActionCamera___c_c *v4; // x8
  struct BattleActionCamera___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__42_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActionCamera___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_43897C3 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_PlayMakerFSM___ctor__);
    sub_B775C4(&System_Action_PlayMakerFSM__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_PlayMakerFSM___);
    sub_B775C4(&Method_BattleActionCamera___c__ResetFieldCameraEvent_b__42_0__);
    sub_B775C4(&BattleActionCamera___c_TypeInfo);
    byte_43897C3 = 1;
  }
  NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                     this,
                                                                                     method);
  v4 = BattleActionCamera___c_TypeInfo;
  if ( (BYTE3(BattleActionCamera___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v4 = BattleActionCamera___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__42_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__42_0,
      v7,
      Method_BattleActionCamera___c__ResetFieldCameraEvent_b__42_0__,
      (const MethodInfo_26A0868 *)Method_System_Action_PlayMakerFSM___ctor__);
    v8 = BattleActionCamera___c_TypeInfo->static_fields;
    v8->__9__42_0 = (struct System_Action_PlayMakerFSM__o *)_9__42_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__42_0,
      (System_Int32_array **)_9__42_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    NotNullFieldCameraFsmEnumerable,
    (System_Action_T__o *)_9__42_0,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
}


bool __fastcall BattleActionCamera__SendFieldEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *NotNullFieldCameraFsmEnumerable; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x23
  UnityEngine_Object_o *v17; // x21
  const MethodInfo *v18; // x1

  if ( (byte_43897C1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___);
    sub_B775C4(&Method_System_Func_PlayMakerFSM__bool___ctor__);
    sub_B775C4(&System_Func_PlayMakerFSM__bool__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_BattleActionCamera___c__DisplayClass40_0__SendFieldEvent_b__0__);
    sub_B775C4(&BattleActionCamera___c__DisplayClass40_0_TypeInfo);
    byte_43897C1 = 1;
  }
  v5 = sub_B77694(BattleActionCamera___c__DisplayClass40_0_TypeInfo);
  BattleActionCamera___c__DisplayClass40_0___ctor((BattleActionCamera___c__DisplayClass40_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = eventName;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)eventName, v8, v9, v10, v11, v12, v13);
  NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                           this,
                                                                                           v14);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattleActionCamera___c__DisplayClass40_0__SendFieldEvent_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_PlayMakerFSM__bool___ctor__);
  v17 = (UnityEngine_Object_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  NotNullFieldCameraFsmEnumerable,
                                  (System_Func_TSource__bool__o *)v16,
                                  (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v17, 0LL, 0LL) )
    return 0;
  BattleActionCamera__ResetAllCameraEvent(this, v18);
  if ( !v17 )
LABEL_11:
    sub_B7769C(v6, v7);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)v17, *(System_String_o **)(v5 + 16), 0LL);
  return 1;
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *v22; // x21
  const MethodInfo *v23; // x1
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x22

  if ( (byte_43897C5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_PlayMakerFSM___ctor__);
    sub_B775C4(&System_Action_PlayMakerFSM__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_PlayMakerFSM___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_BattleActionCamera___c__DisplayClass44_0__SetGameObjectToField_b__0__);
    sub_B775C4(&BattleActionCamera___c__DisplayClass44_0_TypeInfo);
    byte_43897C5 = 1;
  }
  v7 = sub_B77694(BattleActionCamera___c__DisplayClass44_0_TypeInfo);
  BattleActionCamera___c__DisplayClass44_0___ctor((BattleActionCamera___c__DisplayClass44_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 16) = varName;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)varName, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = obj;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)obj, v16, v17, v18, v19, v20, v21);
  v22 = *(UnityEngine_Object_o **)(v7 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v22, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(*(System_String_o **)(v7 + 16), 0LL) )
  {
    NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                       this,
                                                                                       v23);
    v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v25,
      (Il2CppObject *)v7,
      Method_BattleActionCamera___c__DisplayClass44_0__SetGameObjectToField_b__0__,
      (const MethodInfo_26A0868 *)Method_System_Action_PlayMakerFSM___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      NotNullFieldCameraFsmEnumerable,
      (System_Action_T__o *)v25,
      (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
    PlayMakerFSMHelper__SetFsmGameObject(
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
  this->fields.ShakeTargetTime = tm;
  this->fields.ShakeRange = range;
  this->fields.Shaking = 1;
  this->fields.ShakeTime = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__Update(BattleActionCamera_o *this, const MethodInfo *method)
{
  bool v3; // w0
  float ShakeTime; // s8
  int v5; // w20
  double v6; // d0
  float v7; // s0
  double v8; // d1
  float v9; // s8
  float v10; // s9
  float v11; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  UnityEngine_Object_o *perf; // x20
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43897CB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_12313/*"SHAKE"*/);
    byte_43897CB = 1;
  }
  if ( this->fields.Shaking )
  {
    v3 = UnityEngine_Mathf__Approximately(this->fields.ShakeTime, 0.0, 0LL);
    ShakeTime = this->fields.ShakeTime;
    if ( v3 )
    {
      v5 = -1;
    }
    else
    {
      v6 = (float)(ShakeTime * 30.0) == INFINITY ? -(float)(ShakeTime * 30.0) : (float)(ShakeTime * 30.0);
      v5 = (int)v6;
    }
    v7 = ShakeTime + UnityEngine_Time__get_deltaTime(0LL);
    v8 = (float)(v7 * 30.0) == INFINITY ? -(float)(v7 * 30.0) : (float)(v7 * 30.0);
    this->fields.ShakeTime = v7;
    if ( v5 < (int)v8 )
    {
      v9 = UnityEngine_Random__Range(
             this->fields.ShakeRange.fields.x * -0.5,
             this->fields.ShakeRange.fields.x * 0.5,
             0LL);
      v10 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.y * -0.5,
              this->fields.ShakeRange.fields.y * 0.5,
              0LL);
      v11 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.z * -0.5,
              this->fields.ShakeRange.fields.z * 0.5,
              0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_25;
      v19.fields.x = v9;
      v19.fields.y = v10;
      v19.fields.z = v11;
      UnityEngine_Transform__set_localPosition(transform, v19, 0LL);
      if ( this->fields.ShakeTime >= this->fields.ShakeTargetTime )
      {
        v14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v14 )
          goto LABEL_25;
        UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
        this->fields.Shaking = 0;
      }
      perf = (UnityEngine_Object_o *)this->fields.perf;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(perf, 0LL, 0LL) )
      {
        transform = (UnityEngine_Transform_o *)this->fields.perf;
        if ( transform )
        {
          BattlePerformance__sendLocalEventFieldMotion(
            (BattlePerformance_o *)transform,
            (System_String_o *)StringLiteral_12313/*"SHAKE"*/,
            0LL);
          return;
        }
LABEL_25:
        sub_B7769C(transform, v13);
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
  _QWORD **v7; // x22
  __int64 v8; // x21
  __int16 v9; // w8
  __int64 v10; // x21
  __int64 v11; // x21
  __int64 v12; // x21
  const MethodInfo *v13; // x1
  System_Action_int__o *v14; // x20

  if ( (byte_43897C9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int___ctor__);
    sub_B775C4(&System_Action_int__TypeInfo);
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&Method_BasicHelper_ForEach_int___);
    sub_B775C4(&Method_BattleActionCamera_RegisterFieldCameraFsm__);
    sub_B775C4(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_43897C9 = 1;
  }
  if ( !cameraIds )
  {
    v7 = (_QWORD **)Method_System_Array_Empty_int___;
    v8 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v9 = *(_WORD *)(v8 + 306);
    if ( (v9 & 1) == 0 )
    {
      sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v9 = *(_WORD *)(v8 + 306);
    }
    if ( (v9 & 0x400) != 0 )
    {
      v10 = *v7[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_B0F2C4(*v7[6]);
      if ( !*(_DWORD *)(v10 + 224) )
      {
        v11 = *v7[6];
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          sub_B0F2C4(*v7[6]);
        j_il2cpp_runtime_class_init_0(v11);
      }
    }
    v12 = *v7[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_B0F2C4(*v7[6]);
    cameraIds = **(System_Int32_array ***)(v12 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FieldCameraIdList_k__BackingField,
          (System_Collections_Generic_IEnumerable_TSource__o *)cameraIds,
          (const MethodInfo_1D3A97C *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    if ( isInitFieldCamera )
      BattleActionCamera__InitFieldCameraList(this, v13);
    v14 = (System_Action_int__o *)sub_B77694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v14,
      (Il2CppObject *)this,
      Method_BattleActionCamera_RegisterFieldCameraFsm__,
      (const MethodInfo_269F2D8 *)Method_System_Action_int___ctor__);
    BasicHelper__ForEach_int_(
      (System_Collections_Generic_IEnumerable_T__o *)cameraIds,
      (System_Action_T__o *)v14,
      (const MethodInfo_1C66E54 *)Method_BasicHelper_ForEach_int___);
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
  char v8; // w22
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x8
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int128 v12[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_43897C8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43897C8 = 1;
  }
  memset(&v13, 0, 32);
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_27;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           cameraTargetDictionary,
           uniqueId,
           (const MethodInfo_2FE8FD4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_27;
      System_Collections_Generic_Dictionary_int__int___Remove(
        cameraTargetDictionary,
        uniqueId,
        (const MethodInfo_2FEA668 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    }
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_27;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v12,
      cameraTargetDictionary,
      (const MethodInfo_2FE92E4 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    v8 = 1;
    *(_OWORD *)&v13.fields.dictionary = v12[0];
    v13.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v12[1];
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v13,
              (const MethodInfo_2885E04 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
      v8 &= HIDWORD(v13.fields.current.fields.key) != cameraId;
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v13,
      (const MethodInfo_2885F4C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    if ( (v8 & 1) == 0 )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_27;
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)cameraTargetDictionary,
            cameraId,
            (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary
      || (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraTargetDictionary,
                                                                                          cameraId,
                                                                                          (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__),
          (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0LL) )
    {
LABEL_27:
      sub_B7769C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    }
    v10 = (UnityEngine_Object_o *)cameraTargetDictionary;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)cameraFsmDictionary,
      cameraId,
      (const MethodInfo_2FF5B54 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Object__op_Inequality(
                                                                                    v10,
                                                                                    0LL,
                                                                                    0LL);
    if ( ((unsigned __int8)cameraTargetDictionary & 1) != 0 )
    {
      if ( v10 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
        return;
      }
      goto LABEL_27;
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
  return BattleActionCamera__getUniqueFsm_22423512(this, uniqueId, &cameraId, v3);
}


// local variable allocation has failed, the output may be wrong!
PlayMakerFSM_o *__fastcall BattleActionCamera__getUniqueFsm_22423512(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t *cameraId,
        const MethodInfo *method)
{
  int32_t v5; // w21
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  unsigned int Item; // w0
  UnityEngine_Object_o *v9; // x19

  v5 = uniqueId;
  if ( (byte_43897C6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43897C6 = 1;
  }
  *cameraId = 0;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          cameraTargetDictionary,
          v5,
          (const MethodInfo_2FE8FD4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0LL;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary
    || (Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 cameraTargetDictionary,
                 v5,
                 (const MethodInfo_2FE8CB0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        *cameraId = Item,
        *(_QWORD *)&uniqueId = Item,
        (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary) == 0LL) )
  {
LABEL_13:
    sub_B7769C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
  }
  v9 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraTargetDictionary,
                                 uniqueId,
                                 (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
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
  if ( (byte_43897B8 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_ExcludeNull_PlayMakerFSM___);
    byte_43897B8 = 1;
  }
  return (System_Collections_Generic_IEnumerable_PlayMakerFSM__o *)BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                                                                     (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldCameraFsmList,
                                                                     (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_PlayMakerFSM___);
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
  HutongGames_PlayMaker_FsmGameObject_o *v5; // x21
  PlayMakerFSM_o *mainFsm; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v7; // x19

  v4 = this;
  if ( (byte_43897BE & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_3598/*"Camera"*/);
    this = (BattleActionCamera_o *)sub_B775C4(&StringLiteral_3607/*"Camera_obj"*/);
    byte_43897BE = 1;
  }
  if ( !targetFsm )
    goto LABEL_15;
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                   (HutongGames_PlayMaker_Fsm_o *)this,
                                   (System_String_o *)StringLiteral_3598/*"Camera"*/,
                                   0LL);
  if ( !v4->fields.mainFsm )
    goto LABEL_15;
  v5 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(v4->fields.mainFsm, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                   (HutongGames_PlayMaker_Fsm_o *)this,
                                   (System_String_o *)StringLiteral_3598/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v5 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v5, (UnityEngine_GameObject_o *)this, 0LL);
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !this
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         (HutongGames_PlayMaker_Fsm_o *)this,
                                         (System_String_o *)StringLiteral_3607/*"Camera_obj"*/,
                                         0LL),
        (mainFsm = v4->fields.mainFsm) == 0LL)
    || (v7 = (HutongGames_PlayMaker_FsmGameObject_o *)this,
        (this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(mainFsm, 0LL)) == 0LL)
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         (HutongGames_PlayMaker_Fsm_o *)this,
                                         (System_String_o *)StringLiteral_3607/*"Camera_obj"*/,
                                         0LL)) == 0LL
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                         (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                         0LL),
        !v7) )
  {
LABEL_15:
    sub_B7769C(this, targetFsm);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v7, (UnityEngine_GameObject_o *)this, 0LL);
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
  if ( (byte_43897BD & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActionCamera_loadEffectStatus_Bloom___);
    sub_B775C4(&Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
    sub_B775C4(&Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    sub_B775C4(&Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43897BD = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_1C6912C *)Method_BattleActionCamera_loadEffectStatus_Bloom___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_1C6912C *)Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_1C6912C *)Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_1C6912C *)Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
  }
}


void __fastcall BattleActionCamera__loadEffectStatus_Vignetting_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_1C6912C *method)
{
  UnityEngine_Object_o *v7; // x20
  System_String_o *v8; // x0
  bool Item; // w1

  if ( (byte_438D97F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
    this = (BattleActionCamera_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D97F = 1;
  }
  if ( !cam )
    goto LABEL_15;
  v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Camera_o *))method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_->methodPointer)(cam);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v7 )
      goto LABEL_15;
    this = (BattleActionCamera_o *)System_Object__GetType((Il2CppObject *)v7, 0LL);
    if ( !this )
      goto LABEL_15;
    this = (BattleActionCamera_o *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                     this,
                                     this->klass[1]._1.declaringType);
    if ( !stat )
      goto LABEL_15;
    if ( System_Collections_Generic_Dictionary_string__bool___ContainsKey(
           stat,
           (System_String_o *)this,
           (const MethodInfo_2FD5A60 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      this = (BattleActionCamera_o *)System_Object__GetType((Il2CppObject *)v7, 0LL);
      if ( this )
      {
        v8 = (System_String_o *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                  this,
                                  this->klass[1]._1.declaringType);
        Item = System_Collections_Generic_Dictionary_string__bool___get_Item(
                 stat,
                 v8,
                 (const MethodInfo_2FD5710 *)Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, Item, 0LL);
        return;
      }
LABEL_15:
      sub_B7769C(this, cam);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v8; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v10; // x21
  unsigned __int64 v11; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v13; // x0
  UnityEngine_TrackedReference_o *Item; // x0

  if ( (byte_43897CC & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_43897CC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  v8 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
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
        UnityEngine_Animation__Play_51745976((UnityEngine_Animation_o *)v8, animName, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B7769C(gameObject, v6);
  }
  if ( !Component_srcLineSprite )
    goto LABEL_28;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL) )
    return;
  gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_Item(
                                             (SimpleAnimation_o *)Component_srcLineSprite,
                                             animName,
                                             0LL);
  if ( !gameObject )
    goto LABEL_28;
  klass = gameObject->klass;
  v10 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v13 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v13 = sub_B0F4C0(gameObject, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v13)(v10, *(_QWORD *)(v13 + 8), 0.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16815192((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
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
  PlayMakerFSM_o *Component_srcLineSprite; // x20
  const MethodInfo *v12; // x2
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF

  key = cameraId;
  if ( (byte_43897C7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43897C7 = 1;
  }
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_29;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            cameraTargetDictionary,
            uniqueId,
            (const MethodInfo_2FE8FD4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_29;
      System_Collections_Generic_Dictionary_int__int___Add(
        cameraTargetDictionary,
        uniqueId,
        cameraId,
        (const MethodInfo_2FE8D70 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_29;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)cameraTargetDictionary,
           cameraId,
           (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
    {
      return;
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0LL);
    if ( !cameraTargetDictionary )
LABEL_29:
      sub_B7769C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)cameraTargetDictionary, 0LL);
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    Manager__loadCameraAction = (UnityEngine_Object_o *)ServantAssetLoadManager__loadCameraAction(
                                                          cameraId,
                                                          transform,
                                                          0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(Manager__loadCameraAction, 0LL, 0LL) )
    {
      cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Int32__ToString(
                                                                                      (int32_t)&key,
                                                                                      0LL);
      if ( !Manager__loadCameraAction )
        goto LABEL_29;
      v10 = cameraTargetDictionary ? (System_String_o *)cameraTargetDictionary : (System_String_o *)StringLiteral_1/*""*/;
      UnityEngine_Object__set_name(Manager__loadCameraAction, v10, 0LL);
      Component_srcLineSprite = (PlayMakerFSM_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    (UnityEngine_GameObject_o *)Manager__loadCameraAction,
                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        BattleActionCamera__initializeRegisterFsm(this, Component_srcLineSprite, v12);
        cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
        if ( cameraTargetDictionary )
        {
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraTargetDictionary,
            key,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)Component_srcLineSprite,
            (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
          return;
        }
        goto LABEL_29;
      }
    }
  }
}


void __fastcall BattleActionCamera__saveEffectStatus(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Collections_Generic_Dictionary_string__bool__o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x2
  struct System_Collections_Generic_Dictionary_string__bool__o *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v4 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.frontcamera, v2);
  this->fields.frontCameraEffectsStatus = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.frontCameraEffectsStatus,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.middleCamera, v11);
  this->fields.middleCameraEffectsStatus = v12;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.middleCameraEffectsStatus,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


System_Collections_Generic_Dictionary_string__bool__o *__fastcall BattleActionCamera__saveEffectStatusCamera(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *targetCamera,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__bool__o *v5; // x21

  if ( (byte_43897BC & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActionCamera_saveEffectStatus_Bloom___);
    sub_B775C4(&Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
    sub_B775C4(&Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    sub_B775C4(&Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43897BC = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    v5 = (System_Collections_Generic_Dictionary_string__bool__o *)sub_B77694(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    System_Collections_Generic_Dictionary_string__bool____ctor(
      v5,
      (const MethodInfo_2FD4C20 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v5,
      (const MethodInfo_1C69278 *)Method_BattleActionCamera_saveEffectStatus_Bloom___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v5,
      (const MethodInfo_1C69278 *)Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v5,
      (const MethodInfo_1C69278 *)Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v5,
      (const MethodInfo_1C69278 *)Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
  }
  return v5;
}


void __fastcall BattleActionCamera__saveEffectStatus_Vignetting_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_1C69278 *method)
{
  UnityEngine_Object_o *v7; // x20
  System_String_o *v8; // x21

  if ( (byte_438D980 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
    this = (BattleActionCamera_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D980 = 1;
  }
  if ( !cam )
    goto LABEL_13;
  v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Camera_o *))method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_->methodPointer)(cam);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality(v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v7 )
    {
      this = (BattleActionCamera_o *)System_Object__GetType((Il2CppObject *)v7, 0LL);
      if ( this )
      {
        v8 = (System_String_o *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                  this,
                                  this->klass[1]._1.declaringType);
        this = (BattleActionCamera_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v7, 0LL);
        if ( stat )
        {
          System_Collections_Generic_Dictionary_string__bool___set_Item(
            stat,
            v8,
            (unsigned __int8)this & 1,
            (const MethodInfo_2FD57AC *)Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
          return;
        }
      }
    }
LABEL_13:
    sub_B7769C(this, cam);
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
  int key; // w26
  Il2CppObject *value; // x22
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v14; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_43897BF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_3027/*"CAMERA_END"*/);
    byte_43897BF = 1;
  }
  memset(&v14, 0, sizeof(v14));
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    sub_B7769C(0LL, *(_QWORD *)&cameraId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)cameraFsmDictionary,
    (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
  v14 = v13;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v14,
            (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
  {
    key = (int)v14.fields.current.fields.key;
    value = v14.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v10 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v10 )
    {
      if ( key == cameraId )
      {
        if ( !value )
          sub_B7769C(v10, v11);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, eventName, 0LL);
      }
      else
      {
        if ( !value )
          sub_B7769C(v10, v11);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, (System_String_o *)StringLiteral_3027/*"CAMERA_END"*/, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v14,
    (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
  BattleActionCamera__ResetFieldCameraEvent(this, v12);
}


void __fastcall BattleActionCamera__sendEvent(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *UniqueFsm_22423512; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  BattleActionCamera_o *v10; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43897C0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43897C0 = 1;
  }
  cameraId = 0;
  UniqueFsm_22423512 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_22423512(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(UniqueFsm_22423512, 0LL, 0LL)
    && PlayMakerFSMHelper__checkFsmGlobalTransitions((PlayMakerFSM_o *)UniqueFsm_22423512, eventName, 0LL) )
  {
    v9 = cameraId;
    v10 = this;
  }
  else
  {
    v10 = this;
    v9 = 0;
  }
  BattleActionCamera__sendCameraEvent(v10, v9, eventName, v8);
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
  UnityEngine_Object_o *UniqueFsm_22423512; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v11; // x1
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43897C4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43897C4 = 1;
  }
  cameraId = 0;
  UniqueFsm_22423512 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_22423512(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 (const MethodInfo *)nameStr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Inequality(UniqueFsm_22423512, 0LL, 0LL);
  if ( ((unsigned __int8)FsmVariables & 1) != 0 )
  {
    if ( !UniqueFsm_22423512 )
      goto LABEL_19;
    FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)UniqueFsm_22423512, 0LL);
    if ( !FsmVariables )
      goto LABEL_19;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(FsmVariables, nameStr, 0LL);
    if ( FsmGameObject )
      HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, obj, 0LL);
  }
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)this->fields.mainFsm;
  if ( !FsmVariables )
    goto LABEL_19;
  FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)FsmVariables, 0LL);
  if ( !FsmVariables )
    goto LABEL_19;
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
LABEL_19:
    sub_B7769C(FsmVariables, v11);
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

  if ( (byte_43897BB & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43897BB = 1;
  }
  frontcamera = (UnityEngine_Object_o *)this->fields.frontcamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontcamera, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.frontcamera;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, active, 0LL);
  }
  middleCamera = (UnityEngine_Object_o *)this->fields.middleCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
LABEL_18:
    sub_B7769C(gameObject, v6);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._actorCameraDefaultClipRange_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActionCamera__set_middleCameraDefaultClipRange(
        BattleActionCamera_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._middleCameraDefaultClipRange_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__stopCameraAnimation(BattleActionCamera_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Transform_o *transform; // x20
  int v8; // s0
  UnityEngine_Transform_o *v11; // x20
  int v12; // s0
  UnityEngine_Transform_o *v15; // x19
  int v16; // s0

  if ( (byte_43897CD & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43897CD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_21;
    SimpleAnimation__Stop((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v6 )
        goto LABEL_21;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v6, 0LL);
    }
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v8, 0LL),
        v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_one(0LL),
        !v11)
    || (UnityEngine_Transform__set_localScale(v11, *(UnityEngine_Vector3_o *)&v12, 0LL),
        v15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL),
        !v15) )
  {
LABEL_21:
    sub_B7769C(gameObject, v4);
  }
  UnityEngine_Transform__set_eulerAngles(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
}


void __fastcall BattleActionCamera___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389F70 & 1) == 0 )
  {
    sub_B775C4(&BattleActionCamera___c_TypeInfo);
    byte_4389F70 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleActionCamera___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleActionCamera___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4389F71 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389F71 = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
}


bool __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__41_0(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19

  value = (UnityEngine_Object_o *)pair.fields.value;
  if ( (byte_4389F72 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389F72 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(value, 0LL, 0LL);
}


void __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__41_1(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  PlayMakerFSM_o *value; // x19

  value = pair.fields.value;
  if ( (byte_4389F73 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    this = (BattleActionCamera___c_o *)sub_B775C4(&StringLiteral_3027/*"CAMERA_END"*/);
    byte_4389F73 = 1;
  }
  if ( !value )
    sub_B7769C(this, *(_QWORD *)&pair.fields.key);
  PlayMakerFSM__SendEvent(value, (System_String_o *)StringLiteral_3027/*"CAMERA_END"*/, 0LL);
}


void __fastcall BattleActionCamera___c___ResetFieldCameraEvent_b__42_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  if ( (byte_4389F74 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_B775C4(&StringLiteral_3027/*"CAMERA_END"*/);
    byte_4389F74 = 1;
  }
  if ( !fsm )
    sub_B7769C(this, fsm);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_3027/*"CAMERA_END"*/, 0LL);
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
  return PlayMakerFSMHelper__checkFsmGlobalTransitions(fsm, this->fields.eventName, 0LL);
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
  PlayMakerFSMHelper__SetFsmGameObject(fsm, this->fields.varName, this->fields.obj, 0LL);
}