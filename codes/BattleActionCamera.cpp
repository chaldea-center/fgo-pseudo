void __fastcall BattleActionCamera___ctor(BattleActionCamera_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_Dictionary_int__int__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_List_int__o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_42E7F7E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor___68743688, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo, v23, v24, v25);
    byte_42E7F7E = 1;
  }
  v26 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v26,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
  this->fields.cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v26;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cameraFsmDictionary,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v33,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v33;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cameraTargetDictionary,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor___68743688);
  this->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.fieldCameraFsmList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v47,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields._FieldCameraIdList_k__BackingField = v47;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._FieldCameraIdList_k__BackingField,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActionCamera__InitFieldCameraList(BattleActionCamera_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActionCamera_o *v4; // x19
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
  struct System_Collections_Generic_List_PlayMakerFSM__o *fieldCameraFsmList; // x8
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x21
  BattleActionCamera___c_c *v31; // x8
  struct BattleActionCamera___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__26_0; // x22
  Il2CppObject *v34; // x23
  struct BattleActionCamera___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  v4 = this;
  if ( (byte_42E7F6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_PlayMakerFSM___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_PlayMakerFSM__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_PlayMakerFSM___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PlayMakerFSM___ctor___68743688, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PlayMakerFSM__get_Count__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_PlayMakerFSM__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_BattleActionCamera___c__InitFieldCameraList_b__26_0__, v23, v24, v25);
    this = (BattleActionCamera_o *)sub_B5D5C4(&BattleActionCamera___c_TypeInfo, v26, v27, v28);
    byte_42E7F6A = 1;
  }
  fieldCameraFsmList = v4->fields.fieldCameraFsmList;
  if ( !fieldCameraFsmList )
    goto LABEL_16;
  if ( fieldCameraFsmList->fields._size >= 1 )
  {
    NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                       v4,
                                                                                       method);
    v31 = BattleActionCamera___c_TypeInfo;
    if ( (BYTE3(BattleActionCamera___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
      v31 = BattleActionCamera___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = BattleActionCamera___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__26_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_PlayMakerFSM__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        _9__26_0,
        v34,
        Method_BattleActionCamera___c__InitFieldCameraList_b__26_0__,
        (const MethodInfo_258B320 *)Method_System_Action_PlayMakerFSM___ctor__);
      v35 = BattleActionCamera___c_TypeInfo->static_fields;
      v35->__9__26_0 = (struct System_Action_PlayMakerFSM__o *)_9__26_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v35->__9__26_0,
        (System_Int32_array **)_9__26_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      NotNullFieldCameraFsmEnumerable,
      (System_Action_T__o *)_9__26_0,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
    v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PlayMakerFSM__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v42,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PlayMakerFSM___ctor___68743688);
    v4->fields.fieldCameraFsmList = (struct System_Collections_Generic_List_PlayMakerFSM__o *)v42;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.fieldCameraFsmList,
      (System_Int32_array **)v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    this = (BattleActionCamera_o *)v4->fields._FieldCameraIdList_k__BackingField;
    if ( this )
    {
      System_Collections_Generic_List_int___Clear(
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
      return;
    }
LABEL_16:
    sub_B5D69C(this, method);
  }
}


void __fastcall BattleActionCamera__Initialize(
        BattleActionCamera_o *this,
        BattlePerformance_o *inPerf,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *cameraFsmDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o **p_cameraFsmDictionary; // x21
  __int64 v50; // x1
  UnityEngine_Object_o *gameObject; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v52; // x22
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_Dictionary_int__int__o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct PlayMakerFSM_o *Component_WebViewObject; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct System_Single_array *actorCameraDefaultClipRange_k__BackingField; // x21
  float v86; // s0
  float farClipPlane; // s0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct System_Single_array *middleCameraDefaultClipRange_k__BackingField; // x21
  float v95; // s0
  float v96; // s0
  const MethodInfo *v97; // x1
  __int64 v98; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v99; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v100; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_42E7F69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, (_DWORD)inPerf, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__, v39, v40, v41);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&float___TypeInfo, v45, v46, v47);
    byte_42E7F69 = 1;
  }
  memset(&v100, 0, sizeof(v100));
  p_cameraFsmDictionary = &this->fields.cameraFsmDictionary;
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraFsmDictionary,
         (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__) >= 1 )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)*p_cameraFsmDictionary;
    if ( !*p_cameraFsmDictionary )
      goto LABEL_32;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v99,
      cameraFsmDictionary,
      (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    v100 = v99;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v100,
              (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
    {
      if ( LODWORD(v100.fields.current.fields.key) )
      {
        if ( !v100.fields.current.fields.value )
          sub_B5D69C(0LL, v50);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v100.fields.current.fields.value,
                                               0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v100,
      (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    v52 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v52,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    *p_cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v52;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.cameraFsmDictionary,
      (System_Int32_array **)v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  v59 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v59,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v59;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cameraTargetDictionary,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  this->fields.perf = inPerf;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.perf,
    (System_Int32_array **)inPerf,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.mainFsm = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.mainFsm,
    (System_Int32_array **)Component_WebViewObject,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
LABEL_32:
    sub_B5D69C(cameraFsmDictionary, inPerf);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraFsmDictionary,
    0,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)this->fields.mainFsm,
    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
  actorCameraDefaultClipRange_k__BackingField = this->fields._actorCameraDefaultClipRange_k__BackingField;
  if ( !actorCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)sub_B5D5DC(float___TypeInfo, 2LL);
    if ( !this->fields.actorcamera )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
    v86 = UnityEngine_Camera__get_nearClipPlane(this->fields.actorcamera, 0LL);
    if ( !actorCameraDefaultClipRange_k__BackingField )
      goto LABEL_32;
    if ( !actorCameraDefaultClipRange_k__BackingField->max_length )
      goto LABEL_33;
    actorCameraDefaultClipRange_k__BackingField->m_Items[1] = v86;
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.actorcamera;
    if ( !cameraFsmDictionary )
      goto LABEL_32;
    farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
    if ( actorCameraDefaultClipRange_k__BackingField->max_length <= 1 )
      goto LABEL_33;
    actorCameraDefaultClipRange_k__BackingField->m_Items[2] = farClipPlane;
  }
  this->fields._actorCameraDefaultClipRange_k__BackingField = actorCameraDefaultClipRange_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._actorCameraDefaultClipRange_k__BackingField,
    (System_Int32_array **)actorCameraDefaultClipRange_k__BackingField,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  middleCameraDefaultClipRange_k__BackingField = this->fields._middleCameraDefaultClipRange_k__BackingField;
  if ( !middleCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)sub_B5D5DC(float___TypeInfo, 2LL);
    if ( this->fields.middleCamera )
    {
      middleCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
      v95 = UnityEngine_Camera__get_nearClipPlane(this->fields.middleCamera, 0LL);
      if ( middleCameraDefaultClipRange_k__BackingField )
      {
        if ( !middleCameraDefaultClipRange_k__BackingField->max_length )
          goto LABEL_33;
        middleCameraDefaultClipRange_k__BackingField->m_Items[1] = v95;
        cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.middleCamera;
        if ( cameraFsmDictionary )
        {
          v96 = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
          if ( middleCameraDefaultClipRange_k__BackingField->max_length > 1 )
          {
            middleCameraDefaultClipRange_k__BackingField->m_Items[2] = v96;
            goto LABEL_30;
          }
LABEL_33:
          v98 = sub_B5D6C8(cameraFsmDictionary);
          sub_B5D668(v98, 0LL);
        }
      }
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields._middleCameraDefaultClipRange_k__BackingField = middleCameraDefaultClipRange_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._middleCameraDefaultClipRange_k__BackingField,
    (System_Int32_array **)middleCameraDefaultClipRange_k__BackingField,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  BattleActionCamera__InitFieldCameraList(this, v97);
}


void __fastcall BattleActionCamera__RegisterFieldCameraFsm(
        BattleActionCamera_o *this,
        int32_t cameraId,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_String_o *v27; // x21
  BaseMonoBehaviour_o *perf; // x21
  Il2CppObject *v29; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  PlayMakerFSM_o *targetFsm; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *data; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7F7A & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetManager_TryGetAssetObject_GameObject___, cameraId, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_GameObjectExtensions_HasComponent_PlayMakerFSM___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PlayMakerFSM__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_15090/*"UniqueCameraPrefab"*/, v24, v25, v26);
    byte_42E7F7A = 1;
  }
  targetFsm = 0LL;
  data = 0LL;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  }
  v27 = BattleDataDefine__AddUniqueCameraPath(cameraId, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( AssetManager__TryGetAssetObject_object_(
         &data,
         v27,
         (System_String_o *)StringLiteral_15090/*"UniqueCameraPrefab"*/,
         (const MethodInfo_1AD0D68 *)Method_AssetManager_TryGetAssetObject_GameObject___)
    && GameObjectExtensions__HasComponent_StoneCountRefreshComponent_(
         (UnityEngine_GameObject_o *)data,
         (const MethodInfo_1CC4F14 *)Method_GameObjectExtensions_HasComponent_PlayMakerFSM___) )
  {
    perf = (BaseMonoBehaviour_o *)this->fields.perf;
    v29 = data;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( !perf )
      goto LABEL_19;
    gameObject = BaseMonoBehaviour__createObject(
                   perf,
                   (UnityEngine_GameObject_o *)v29,
                   (UnityEngine_Transform_o *)gameObject,
                   0LL,
                   0LL);
    if ( !gameObject )
      goto LABEL_19;
    if ( !UnityEngine_GameObject__TryGetComponent_UISprite_(
            gameObject,
            (UISprite_o **)&targetFsm,
            (const MethodInfo_1CC4B3C *)Method_UnityEngine_GameObject_TryGetComponent_PlayMakerFSM___) )
      return;
    BattleActionCamera__initializeRegisterFsm(this, targetFsm, v32);
    gameObject = (UnityEngine_GameObject_o *)this->fields.fieldCameraFsmList;
    if ( !gameObject
      || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)gameObject,
            (EventMissionProgressRequest_Argument_ProgressData_o *)targetFsm,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PlayMakerFSM__Add__),
          (gameObject = (UnityEngine_GameObject_o *)this->fields._FieldCameraIdList_k__BackingField) == 0LL) )
    {
LABEL_19:
      sub_B5D69C(gameObject, v31);
    }
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)gameObject,
      cameraId,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
}


void __fastcall BattleActionCamera__ResetAllCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x20
  BattleActionCamera___c_c *v30; // x0
  struct BattleActionCamera___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *_9__41_0; // x21
  Il2CppObject *v33; // x22
  struct BattleActionCamera___c_StaticFields *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  BattleActionCamera___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_T__o *v43; // x20
  struct BattleActionCamera___c_StaticFields *v44; // x9
  System_Action_KeyValuePair_int__PlayMakerFSM___o *_9__41_1; // x21
  Il2CppObject *v46; // x22
  struct BattleActionCamera___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  const MethodInfo *v54; // x1

  if ( (byte_42E7F72 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_KeyValuePair_int__PlayMakerFSM____ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__PlayMakerFSM___bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_0__, v20, v21, v22);
    sub_B5D5C4(&Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_1__, v23, v24, v25);
    sub_B5D5C4(&BattleActionCamera___c_TypeInfo, v26, v27, v28);
    byte_42E7F72 = 1;
  }
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  v30 = BattleActionCamera___c_TypeInfo;
  if ( (BYTE3(BattleActionCamera___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v30 = BattleActionCamera___c_TypeInfo;
  }
  static_fields = v30->static_fields;
  _9__41_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    }
    v33 = (Il2CppObject *)static_fields->__9;
    _9__41_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B5D694(System_Func_KeyValuePair_int__PlayMakerFSM___bool__TypeInfo);
    System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
      _9__41_0,
      v33,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_0__,
      (const MethodInfo_27926E4 *)Method_System_Func_KeyValuePair_int__PlayMakerFSM___bool___ctor__);
    v34 = BattleActionCamera___c_TypeInfo->static_fields;
    v34->__9__41_0 = (struct System_Func_KeyValuePair_int__PlayMakerFSM___bool__o *)_9__41_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v34->__9__41_0,
      (System_Int32_array **)_9__41_0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40);
  }
  v41 = System_Linq_Enumerable__Where_KeyValuePair_int__PlayMakerFSM__(
          (System_Collections_Generic_IEnumerable_TSource__o *)cameraFsmDictionary,
          (System_Func_TSource__bool__o *)_9__41_0,
          (const MethodInfo_1CBAF98 *)Method_System_Linq_Enumerable_Where_KeyValuePair_int__PlayMakerFSM____);
  v42 = BattleActionCamera___c_TypeInfo;
  v43 = (System_Collections_Generic_IEnumerable_T__o *)v41;
  if ( (BYTE3(BattleActionCamera___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v42 = BattleActionCamera___c_TypeInfo;
  }
  v44 = v42->static_fields;
  _9__41_1 = v44->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v44 = BattleActionCamera___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)v44->__9;
    _9__41_1 = (System_Action_KeyValuePair_int__PlayMakerFSM___o *)sub_B5D694(System_Action_KeyValuePair_int__PlayMakerFSM___TypeInfo);
    System_Action_KeyValuePair_int__PlayMakerFSM_____ctor(
      _9__41_1,
      v46,
      Method_BattleActionCamera___c__ResetAllCameraEvent_b__41_1__,
      (const MethodInfo_2585170 *)Method_System_Action_KeyValuePair_int__PlayMakerFSM____ctor__);
    v47 = BattleActionCamera___c_TypeInfo->static_fields;
    v47->__9__41_1 = _9__41_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v47->__9__41_1,
      (System_Int32_array **)_9__41_1,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  BasicHelper__ForEach_KeyValuePair_int__PlayMakerFSM__(
    v43,
    (System_Action_T__o *)_9__41_1,
    (const MethodInfo_1AD7484 *)Method_BasicHelper_ForEach_KeyValuePair_int__PlayMakerFSM____);
  BattleActionCamera__ResetFieldCameraEvent(this, v54);
}


void __fastcall BattleActionCamera__ResetFieldCameraEvent(BattleActionCamera_o *this, const MethodInfo *method)
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
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x19
  BattleActionCamera___c_c *v18; // x8
  struct BattleActionCamera___c_StaticFields *static_fields; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__42_0; // x20
  Il2CppObject *v21; // x21
  struct BattleActionCamera___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7F73 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_PlayMakerFSM___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_PlayMakerFSM__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_PlayMakerFSM___, v8, v9, v10);
    sub_B5D5C4(&Method_BattleActionCamera___c__ResetFieldCameraEvent_b__42_0__, v11, v12, v13);
    sub_B5D5C4(&BattleActionCamera___c_TypeInfo, v14, v15, v16);
    byte_42E7F73 = 1;
  }
  NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                     this,
                                                                                     method);
  v18 = BattleActionCamera___c_TypeInfo;
  if ( (BYTE3(BattleActionCamera___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionCamera___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionCamera___c_TypeInfo);
    v18 = BattleActionCamera___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__42_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__42_0;
  if ( !_9__42_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = BattleActionCamera___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__42_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__42_0,
      v21,
      Method_BattleActionCamera___c__ResetFieldCameraEvent_b__42_0__,
      (const MethodInfo_258B320 *)Method_System_Action_PlayMakerFSM___ctor__);
    v22 = BattleActionCamera___c_TypeInfo->static_fields;
    v22->__9__42_0 = (struct System_Action_PlayMakerFSM__o *)_9__42_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v22->__9__42_0,
      (System_Int32_array **)_9__42_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    NotNullFieldCameraFsmEnumerable,
    (System_Action_T__o *)_9__42_0,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
}


bool __fastcall BattleActionCamera__SendFieldEvent(
        BattleActionCamera_o *this,
        System_String_o *eventName,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x1
  System_Collections_Generic_IEnumerable_TSource__o *NotNullFieldCameraFsmEnumerable; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x23
  UnityEngine_Object_o *v33; // x21
  const MethodInfo *v34; // x1

  if ( (byte_42E7F71 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___, (_DWORD)eventName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_PlayMakerFSM__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_PlayMakerFSM__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleActionCamera___c__DisplayClass40_0__SendFieldEvent_b__0__, v15, v16, v17);
    sub_B5D5C4(&BattleActionCamera___c__DisplayClass40_0_TypeInfo, v18, v19, v20);
    byte_42E7F71 = 1;
  }
  v21 = sub_B5D694(BattleActionCamera___c__DisplayClass40_0_TypeInfo);
  BattleActionCamera___c__DisplayClass40_0___ctor((BattleActionCamera___c__DisplayClass40_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_11;
  *(_QWORD *)(v21 + 16) = eventName;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)eventName, v24, v25, v26, v27, v28, v29);
  NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                           this,
                                                                                           v30);
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)v21,
    Method_BattleActionCamera___c__DisplayClass40_0__SendFieldEvent_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_PlayMakerFSM__bool___ctor__);
  v33 = (UnityEngine_Object_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  NotNullFieldCameraFsmEnumerable,
                                  (System_Func_TSource__bool__o *)v32,
                                  (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_PlayMakerFSM___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v33, 0LL, 0LL) )
    return 0;
  BattleActionCamera__ResetAllCameraEvent(this, v34);
  if ( !v33 )
LABEL_11:
    sub_B5D69C(v22, v23);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)v33, *(System_String_o **)(v21 + 16), 0LL);
  return 1;
}


void __fastcall BattleActionCamera__SetGameObjectToField(
        BattleActionCamera_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *varName,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Object_o *v37; // x21
  const MethodInfo *v38; // x1
  System_Collections_Generic_IEnumerable_T__o *NotNullFieldCameraFsmEnumerable; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x22

  if ( (byte_42E7F75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_PlayMakerFSM___ctor__, (_DWORD)obj, (_DWORD)varName, method);
    sub_B5D5C4(&System_Action_PlayMakerFSM__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_PlayMakerFSM___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BattleActionCamera___c__DisplayClass44_0__SetGameObjectToField_b__0__, v16, v17, v18);
    sub_B5D5C4(&BattleActionCamera___c__DisplayClass44_0_TypeInfo, v19, v20, v21);
    byte_42E7F75 = 1;
  }
  v22 = sub_B5D694(BattleActionCamera___c__DisplayClass44_0_TypeInfo);
  BattleActionCamera___c__DisplayClass44_0___ctor((BattleActionCamera___c__DisplayClass44_0_o *)v22, 0LL);
  if ( !v22 )
    sub_B5D69C(v23, v24);
  *(_QWORD *)(v22 + 16) = varName;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)varName, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = obj;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)obj, v31, v32, v33, v34, v35, v36);
  v37 = *(UnityEngine_Object_o **)(v22 + 24);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(v37, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(*(System_String_o **)(v22 + 16), 0LL) )
  {
    NotNullFieldCameraFsmEnumerable = (System_Collections_Generic_IEnumerable_T__o *)BattleActionCamera__get_NotNullFieldCameraFsmEnumerable(
                                                                                       this,
                                                                                       v38);
    v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_PlayMakerFSM__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v40,
      (Il2CppObject *)v22,
      Method_BattleActionCamera___c__DisplayClass44_0__SetGameObjectToField_b__0__,
      (const MethodInfo_258B320 *)Method_System_Action_PlayMakerFSM___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      NotNullFieldCameraFsmEnumerable,
      (System_Action_T__o *)v40,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_PlayMakerFSM___);
    PlayMakerFSMHelper__SetFsmGameObject(
      this->fields.mainFsm,
      *(System_String_o **)(v22 + 16),
      *(UnityEngine_GameObject_o **)(v22 + 24),
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  bool v8; // w0
  float ShakeTime; // s8
  int v10; // w20
  double v11; // d0
  float v12; // s0
  double v13; // d1
  float v14; // s8
  float v15; // s9
  float v16; // s10
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0
  UnityEngine_Object_o *perf; // x20
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7F7B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12228/*"SHAKE"*/, v5, v6, v7);
    byte_42E7F7B = 1;
  }
  if ( this->fields.Shaking )
  {
    v8 = UnityEngine_Mathf__Approximately(this->fields.ShakeTime, 0.0, 0LL);
    ShakeTime = this->fields.ShakeTime;
    if ( v8 )
    {
      v10 = -1;
    }
    else
    {
      v11 = (float)(ShakeTime * 30.0) == INFINITY ? -(float)(ShakeTime * 30.0) : (float)(ShakeTime * 30.0);
      v10 = (int)v11;
    }
    v12 = ShakeTime + UnityEngine_Time__get_deltaTime(0LL);
    v13 = (float)(v12 * 30.0) == INFINITY ? -(float)(v12 * 30.0) : (float)(v12 * 30.0);
    this->fields.ShakeTime = v12;
    if ( v10 < (int)v13 )
    {
      v14 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.x * -0.5,
              this->fields.ShakeRange.fields.x * 0.5,
              0LL);
      v15 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.y * -0.5,
              this->fields.ShakeRange.fields.y * 0.5,
              0LL);
      v16 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.z * -0.5,
              this->fields.ShakeRange.fields.z * 0.5,
              0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_25;
      v24.fields.x = v14;
      v24.fields.y = v15;
      v24.fields.z = v16;
      UnityEngine_Transform__set_localPosition(transform, v24, 0LL);
      if ( this->fields.ShakeTime >= this->fields.ShakeTargetTime )
      {
        v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
        if ( !v19 )
          goto LABEL_25;
        UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
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
            (System_String_o *)StringLiteral_12228/*"SHAKE"*/,
            0LL);
          return;
        }
LABEL_25:
        sub_B5D69C(transform, v18);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  _QWORD **v22; // x22
  __int64 v23; // x21
  __int16 v24; // w8
  __int64 v25; // x21
  __int64 v26; // x21
  __int64 v27; // x21
  const MethodInfo *v28; // x1
  System_Action_int__o *v29; // x20

  v5 = (System_Collections_Generic_IEnumerable_T__o *)cameraIds;
  if ( (byte_42E7F79 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)cameraIds, isInitFieldCamera, method);
    sub_B5D5C4(&System_Action_int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Array_Empty_int___, v10, v11, v12);
    sub_B5D5C4(&Method_BasicHelper_ForEach_int___, v13, v14, v15);
    sub_B5D5C4(&Method_BattleActionCamera_RegisterFieldCameraFsm__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SequenceEqual_int___, v19, v20, v21);
    byte_42E7F79 = 1;
  }
  if ( !v5 )
  {
    v22 = (_QWORD **)Method_System_Array_Empty_int___;
    v23 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v24 = *(_WORD *)(v23 + 306);
    if ( (v24 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v24 = *(_WORD *)(v23 + 306);
    }
    if ( (v24 & 0x400) != 0 )
    {
      v25 = *v22[6];
      if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
        sub_AF52C4(*v22[6]);
      if ( !*(_DWORD *)(v25 + 224) )
      {
        v26 = *v22[6];
        if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
          sub_AF52C4(*v22[6]);
        j_il2cpp_runtime_class_init_0(v26);
      }
    }
    v27 = *v22[6];
    if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
      sub_AF52C4(*v22[6]);
    v5 = **(System_Collections_Generic_IEnumerable_T__o ***)(v27 + 184);
  }
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._FieldCameraIdList_k__BackingField,
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (const MethodInfo_1CB4CD8 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    if ( isInitFieldCamera )
      BattleActionCamera__InitFieldCameraList(this, v28);
    v29 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v29,
      (Il2CppObject *)this,
      Method_BattleActionCamera_RegisterFieldCameraFsm__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    BasicHelper__ForEach_int_(
      v5,
      (System_Action_T__o *)v29,
      (const MethodInfo_1AD7A44 *)Method_BasicHelper_ForEach_int___);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__deleteCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  char v38; // w22
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x8
  UnityEngine_Object_o *v40; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int128 v42[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E7F78 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, uniqueId, cameraId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v31, v32, v33);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v34, v35, v36);
    byte_42E7F78 = 1;
  }
  memset(&v43, 0, 32);
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_27;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           cameraTargetDictionary,
           uniqueId,
           (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_27;
      System_Collections_Generic_Dictionary_int__int___Remove(
        cameraTargetDictionary,
        uniqueId,
        (const MethodInfo_2F0C750 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    }
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_27;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v42,
      cameraTargetDictionary,
      (const MethodInfo_2F0B3CC *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    v38 = 1;
    *(_OWORD *)&v43.fields.dictionary = v42[0];
    v43.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v42[1];
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v43,
              (const MethodInfo_289F694 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
      v38 &= HIDWORD(v43.fields.current.fields.key) != cameraId;
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v43,
      (const MethodInfo_289F7DC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    if ( (v38 & 1) == 0 )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_27;
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)cameraTargetDictionary,
            cameraId,
            (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary
      || (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraTargetDictionary,
                                                                                          cameraId,
                                                                                          (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__),
          (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0LL) )
    {
LABEL_27:
      sub_B5D69C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    }
    v40 = (UnityEngine_Object_o *)cameraTargetDictionary;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)cameraFsmDictionary,
      cameraId,
      (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Object__op_Inequality(
                                                                                    v40,
                                                                                    0LL,
                                                                                    0LL);
    if ( ((unsigned __int8)cameraTargetDictionary & 1) != 0 )
    {
      if ( v40 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v40, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
  return BattleActionCamera__getUniqueFsm_24120556(this, uniqueId, &cameraId, v3);
}


// local variable allocation has failed, the output may be wrong!
PlayMakerFSM_o *__fastcall BattleActionCamera__getUniqueFsm_24120556(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t *cameraId,
        const MethodInfo *method)
{
  int32_t v5; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  unsigned int Item; // w0
  UnityEngine_Object_o *v18; // x19

  v5 = uniqueId;
  if ( (byte_42E7F76 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__,
      uniqueId,
      (_DWORD)cameraId,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42E7F76 = 1;
  }
  *cameraId = 0;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          cameraTargetDictionary,
          v5,
          (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0LL;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary
    || (Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 cameraTargetDictionary,
                 v5,
                 (const MethodInfo_2F0AD98 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        *cameraId = Item,
        *(_QWORD *)&uniqueId = Item,
        (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
  }
  v18 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraTargetDictionary,
                                  uniqueId,
                                  (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
    return 0LL;
  return (PlayMakerFSM_o *)v18;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7F68 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_PlayMakerFSM___, (_DWORD)method, v2, v3);
    byte_42E7F68 = 1;
  }
  return (System_Collections_Generic_IEnumerable_PlayMakerFSM__o *)BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                                                                     (System_Collections_Generic_IEnumerable_T__o *)this->fields.fieldCameraFsmList,
                                                                     (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_PlayMakerFSM___);
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
  __int64 v3; // x3
  BattleActionCamera_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  HutongGames_PlayMaker_FsmGameObject_o *v9; // x21
  PlayMakerFSM_o *mainFsm; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v11; // x19

  v5 = this;
  if ( (byte_42E7F6E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3538/*"Camera"*/, (_DWORD)targetFsm, (_DWORD)method, v3);
    this = (BattleActionCamera_o *)sub_B5D5C4(&StringLiteral_3547/*"Camera_obj"*/, v6, v7, v8);
    byte_42E7F6E = 1;
  }
  if ( !targetFsm )
    goto LABEL_15;
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                   (HutongGames_PlayMaker_Fsm_o *)this,
                                   (System_String_o *)StringLiteral_3538/*"Camera"*/,
                                   0LL);
  if ( !v5->fields.mainFsm )
    goto LABEL_15;
  v9 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(v5->fields.mainFsm, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                   (HutongGames_PlayMaker_Fsm_o *)this,
                                   (System_String_o *)StringLiteral_3538/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v9 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v9, (UnityEngine_GameObject_o *)this, 0LL);
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !this
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         (HutongGames_PlayMaker_Fsm_o *)this,
                                         (System_String_o *)StringLiteral_3547/*"Camera_obj"*/,
                                         0LL),
        (mainFsm = v5->fields.mainFsm) == 0LL)
    || (v11 = (HutongGames_PlayMaker_FsmGameObject_o *)this,
        (this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(mainFsm, 0LL)) == 0LL)
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         (HutongGames_PlayMaker_Fsm_o *)this,
                                         (System_String_o *)StringLiteral_3547/*"Camera_obj"*/,
                                         0LL)) == 0LL
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                         (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                         0LL),
        !v11) )
  {
LABEL_15:
    sub_B5D69C(this, targetFsm);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v11, (UnityEngine_GameObject_o *)this, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3

  if ( (byte_42E7F6D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActionCamera_loadEffectStatus_Bloom___, (_DWORD)targetCamera, (_DWORD)stat, method);
    sub_B5D5C4(&Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___, v7, v8, v9);
    sub_B5D5C4(&Method_BattleActionCamera_loadEffectStatus_MotionBlur___, v10, v11, v12);
    sub_B5D5C4(&Method_BattleActionCamera_loadEffectStatus_Vignetting___, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    byte_42E7F6D = 1;
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
      (const MethodInfo_1AD9D1C *)Method_BattleActionCamera_loadEffectStatus_Bloom___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_1AD9D1C *)Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_1AD9D1C *)Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_1AD9D1C *)Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
  }
}


void __fastcall BattleActionCamera__loadEffectStatus_Vignetting_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_1AD9D1C *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Object_o *v13; // x20
  System_String_o *v14; // x0
  bool Item; // w1

  if ( (byte_42EA27C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__,
      (_DWORD)cam,
      (_DWORD)stat,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__bool__get_Item__, v7, v8, v9);
    this = (BattleActionCamera_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    byte_42EA27C = 1;
  }
  if ( !cam )
    goto LABEL_15;
  v13 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Camera_o *))method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_->methodPointer)(cam);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_15;
    this = (BattleActionCamera_o *)System_Object__GetType((Il2CppObject *)v13, 0LL);
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
           (const MethodInfo_2F138DC *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      this = (BattleActionCamera_o *)System_Object__GetType((Il2CppObject *)v13, 0LL);
      if ( this )
      {
        v14 = (System_String_o *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                   this,
                                   this->klass[1]._1.declaringType);
        Item = System_Collections_Generic_Dictionary_string__bool___get_Item(
                 stat,
                 v14,
                 (const MethodInfo_2F1358C *)Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, Item, 0LL);
        return;
      }
LABEL_15:
      sub_B5D69C(this, cam);
    }
  }
}


void __fastcall BattleActionCamera__playCameraAnimation(
        BattleActionCamera_o *this,
        System_String_o *animName,
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v21; // x21
  unsigned __int64 v22; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v24; // x0
  UnityEngine_TrackedReference_o *Item; // x0

  if ( (byte_42E7F7C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)animName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v12, v13, v14);
    byte_42E7F7C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  v18 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      return;
    if ( v18 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v18,
                                                 animName,
                                                 0LL);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
        return;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v18,
                                                 animName,
                                                 0LL);
      if ( gameObject )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)gameObject, 0.0, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v18, 0LL);
        UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)v18, animName, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B5D69C(gameObject, v16);
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
  v21 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v22;
      p_offset += 2;
      if ( v22 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v24 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v24 = sub_AF54C0(gameObject, SimpleAnimation_State_TypeInfo, 4LL, v19);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v24)(v21, *(_QWORD *)(v24 + 8), 0.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16676044((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__registerCamera(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t cameraId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Object_o *Manager__loadCameraAction; // x20
  System_String_o *v31; // x1
  PlayMakerFSM_o *Component_srcLineSprite; // x20
  const MethodInfo *v33; // x2
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF

  key = cameraId;
  if ( (byte_42E7F77 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, uniqueId, cameraId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__, v13, v14, v15);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    byte_42E7F77 = 1;
  }
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_29;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            cameraTargetDictionary,
            uniqueId,
            (const MethodInfo_2F0B0BC *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_29;
      System_Collections_Generic_Dictionary_int__int___Add(
        cameraTargetDictionary,
        uniqueId,
        cameraId,
        (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_29;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)cameraTargetDictionary,
           cameraId,
           (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
    {
      return;
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0LL);
    if ( !cameraTargetDictionary )
LABEL_29:
      sub_B5D69C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
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
      v31 = cameraTargetDictionary ? (System_String_o *)cameraTargetDictionary : (System_String_o *)StringLiteral_1/*""*/;
      UnityEngine_Object__set_name(Manager__loadCameraAction, v31, 0LL);
      Component_srcLineSprite = (PlayMakerFSM_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    (UnityEngine_GameObject_o *)Manager__loadCameraAction,
                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        BattleActionCamera__initializeRegisterFsm(this, Component_srcLineSprite, v33);
        cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
        if ( cameraTargetDictionary )
        {
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraTargetDictionary,
            key,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)Component_srcLineSprite,
            (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_Dictionary_string__bool__o *v24; // x21

  if ( (byte_42E7F6C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActionCamera_saveEffectStatus_Bloom___, (_DWORD)targetCamera, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___, v6, v7, v8);
    sub_B5D5C4(&Method_BattleActionCamera_saveEffectStatus_MotionBlur___, v9, v10, v11);
    sub_B5D5C4(&Method_BattleActionCamera_saveEffectStatus_Vignetting___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    byte_42E7F6C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v24 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    v24 = (System_Collections_Generic_Dictionary_string__bool__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    System_Collections_Generic_Dictionary_string__bool____ctor(
      v24,
      (const MethodInfo_2F12A9C *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v24,
      (const MethodInfo_1AD9E68 *)Method_BattleActionCamera_saveEffectStatus_Bloom___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v24,
      (const MethodInfo_1AD9E68 *)Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v24,
      (const MethodInfo_1AD9E68 *)Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v24,
      (const MethodInfo_1AD9E68 *)Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
  }
  return v24;
}


void __fastcall BattleActionCamera__saveEffectStatus_Vignetting_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_1AD9E68 *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *v10; // x20
  System_String_o *v11; // x21

  if ( (byte_42EA27D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__bool__set_Item__,
      (_DWORD)cam,
      (_DWORD)stat,
      method);
    this = (BattleActionCamera_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42EA27D = 1;
  }
  if ( !cam )
    goto LABEL_13;
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Camera_o *))method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_->methodPointer)(cam);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleActionCamera_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v10 )
    {
      this = (BattleActionCamera_o *)System_Object__GetType((Il2CppObject *)v10, 0LL);
      if ( this )
      {
        v11 = (System_String_o *)((__int64 (__fastcall *)(BattleActionCamera_o *, Il2CppClass *))this->klass[1]._1.castClass)(
                                   this,
                                   this->klass[1]._1.declaringType);
        this = (BattleActionCamera_o *)UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v10, 0LL);
        if ( stat )
        {
          System_Collections_Generic_Dictionary_string__bool___set_Item(
            stat,
            v11,
            (unsigned __int8)this & 1,
            (const MethodInfo_2F13628 *)Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
          return;
        }
      }
    }
LABEL_13:
    sub_B5D69C(this, cam);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__sendCameraEvent(
        BattleActionCamera_o *this,
        int32_t cameraId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  int key; // w26
  Il2CppObject *value; // x22
  _BOOL8 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42E7F6F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__,
      cameraId,
      (_DWORD)eventName,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_2972/*"CAMERA_END"*/, v25, v26, v27);
    byte_42E7F6F = 1;
  }
  memset(&v35, 0, sizeof(v35));
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    sub_B5D69C(0LL, *(_QWORD *)&cameraId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)cameraFsmDictionary,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v35,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
  {
    key = (int)v35.fields.current.fields.key;
    value = v35.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v31 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v31 )
    {
      if ( key == cameraId )
      {
        if ( !value )
          sub_B5D69C(v31, v32);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, eventName, 0LL);
      }
      else
      {
        if ( !value )
          sub_B5D69C(v31, v32);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, (System_String_o *)StringLiteral_2972/*"CAMERA_END"*/, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v35,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
  BattleActionCamera__ResetFieldCameraEvent(this, v33);
}


void __fastcall BattleActionCamera__sendEvent(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *UniqueFsm_24120556; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  BattleActionCamera_o *v10; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E7F70 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, uniqueId, (_DWORD)eventName, method);
    byte_42E7F70 = 1;
  }
  cameraId = 0;
  UniqueFsm_24120556 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_24120556(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(UniqueFsm_24120556, 0LL, 0LL)
    && PlayMakerFSMHelper__checkFsmGlobalTransitions((PlayMakerFSM_o *)UniqueFsm_24120556, eventName, 0LL) )
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
  UnityEngine_Object_o *UniqueFsm_24120556; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v11; // x1
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E7F74 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, uniqueId, (_DWORD)obj, nameStr);
    byte_42E7F74 = 1;
  }
  cameraId = 0;
  UniqueFsm_24120556 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_24120556(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 (const MethodInfo *)nameStr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Inequality(UniqueFsm_24120556, 0LL, 0LL);
  if ( ((unsigned __int8)FsmVariables & 1) != 0 )
  {
    if ( !UniqueFsm_24120556 )
      goto LABEL_19;
    FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)UniqueFsm_24120556, 0LL);
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
    sub_B5D69C(FsmVariables, v11);
  }
}


void __fastcall BattleActionCamera__setNormalMode(BattleActionCamera_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActionCamera__setSpecialCamera(this, 0, v2);
}


void __fastcall BattleActionCamera__setSpecialCamera(BattleActionCamera_o *this, bool active, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *frontcamera; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *middleCamera; // x21

  if ( (byte_42E7F6B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, active, (_DWORD)method, v3);
    byte_42E7F6B = 1;
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
    sub_B5D69C(gameObject, v7);
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v14; // x20
  UnityEngine_Transform_o *transform; // x20
  int v16; // s0
  UnityEngine_Transform_o *v19; // x20
  int v20; // s0
  UnityEngine_Transform_o *v23; // x19
  int v24; // s0

  if ( (byte_42E7F7D & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E7F7D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  v14 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  gameObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v14 )
        goto LABEL_21;
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v14, 0LL);
    }
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v16, 0LL),
        v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_one(0LL),
        !v19)
    || (UnityEngine_Transform__set_localScale(v19, *(UnityEngine_Vector3_o *)&v20, 0LL),
        v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL),
        !v23) )
  {
LABEL_21:
    sub_B5D69C(gameObject, v12);
  }
  UnityEngine_Transform__set_eulerAngles(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
}


void __fastcall BattleActionCamera___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7552 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionCamera___c_TypeInfo, v1, v2, v3);
    byte_42E7552 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleActionCamera___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleActionCamera___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E7553 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7553 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}


bool __fastcall BattleActionCamera___c___ResetAllCameraEvent_b__41_0(
        BattleActionCamera___c_o *this,
        System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__o pair,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  value = (UnityEngine_Object_o *)pair.fields.value;
  if ( (byte_42E7554 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__,
      pair.fields.key,
      pair.fields.value,
      method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    byte_42E7554 = 1;
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
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  value = pair.fields.value;
  if ( (byte_42E7555 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__,
      pair.fields.key,
      pair.fields.value,
      method);
    this = (BattleActionCamera___c_o *)sub_B5D5C4(&StringLiteral_2972/*"CAMERA_END"*/, v4, v5, v6);
    byte_42E7555 = 1;
  }
  if ( !value )
    sub_B5D69C(this, *(_QWORD *)&pair.fields.key);
  PlayMakerFSM__SendEvent(value, (System_String_o *)StringLiteral_2972/*"CAMERA_END"*/, 0LL);
}


void __fastcall BattleActionCamera___c___ResetFieldCameraEvent_b__42_0(
        BattleActionCamera___c_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E7556 & 1) == 0 )
  {
    this = (BattleActionCamera___c_o *)sub_B5D5C4(&StringLiteral_2972/*"CAMERA_END"*/, (_DWORD)fsm, (_DWORD)method, v3);
    byte_42E7556 = 1;
  }
  if ( !fsm )
    sub_B5D69C(this, fsm);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_2972/*"CAMERA_END"*/, 0LL);
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