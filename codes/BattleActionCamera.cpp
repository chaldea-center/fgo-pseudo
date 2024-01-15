void __fastcall BattleActionCamera___ctor(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_Dictionary_int__int__o *v14; // x20

  if ( (byte_40F6F31 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo, v8);
    byte_40F6F31 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v9,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
  this->fields.cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v9;
  sub_B16F98(&this->fields.cameraFsmDictionary, v9);
  v14 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v10,
                                                               v11,
                                                               v12,
                                                               v13);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v14,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v14;
  sub_B16F98(&this->fields.cameraTargetDictionary, v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **p_cameraFsmDictionary; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_Object_o *gameObject; // x22
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v30; // x22
  System_Collections_Generic_Dictionary_int__int__o *v31; // x21
  struct PlayMakerFSM_o *Component_WebViewObject; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *v33; // x0
  __int64 v34; // x2
  struct System_Single_array *actorCameraDefaultClipRange_k__BackingField; // x21
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  float v40; // s0
  UnityEngine_Camera_o *actorcamera; // x0
  float farClipPlane; // s0
  __int64 v43; // x2
  struct System_Single_array *middleCameraDefaultClipRange_k__BackingField; // x21
  __int64 v45; // x0
  float v46; // s0
  UnityEngine_Camera_o *middleCamera; // x0
  float v48; // s0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_40F6F23 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___, inPerf);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&float___TypeInfo, v18);
    byte_40F6F23 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  p_cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o **)&this->fields.cameraFsmDictionary;
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraFsmDictionary,
         (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__) >= 1 )
  {
    if ( !*p_cameraFsmDictionary )
      goto LABEL_32;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v49,
      *p_cameraFsmDictionary,
      (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    v50 = v49;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v50,
              (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
    {
      if ( LODWORD(v50.fields.current.fields.key) )
      {
        if ( !v50.fields.current.fields.value )
          sub_B170D4();
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v50.fields.current.fields.value,
                                               0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v50,
      (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    v30 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo,
                                                                                                     v26,
                                                                                                     v27,
                                                                                                     v28,
                                                                                                     v29);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v30,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    *p_cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v30;
    sub_B16F98(&this->fields.cameraFsmDictionary, v30);
  }
  v31 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v21,
                                                               v22,
                                                               v23,
                                                               v24);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v31,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v31;
  sub_B16F98(&this->fields.cameraTargetDictionary, v31);
  this->fields.perf = inPerf;
  sub_B16F98(&this->fields.perf, inPerf);
  Component_WebViewObject = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.mainFsm = Component_WebViewObject;
  sub_B16F98(&this->fields.mainFsm, Component_WebViewObject);
  v33 = this->fields.cameraFsmDictionary;
  if ( !v33 )
LABEL_32:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v33,
    0,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)this->fields.mainFsm,
    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
  actorCameraDefaultClipRange_k__BackingField = this->fields._actorCameraDefaultClipRange_k__BackingField;
  if ( !actorCameraDefaultClipRange_k__BackingField )
  {
    v36 = sub_B17014(float___TypeInfo, 2LL, v34);
    if ( !this->fields.actorcamera )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)v36;
    v40 = UnityEngine_Camera__get_nearClipPlane(this->fields.actorcamera, 0LL);
    if ( !actorCameraDefaultClipRange_k__BackingField )
      goto LABEL_32;
    if ( !actorCameraDefaultClipRange_k__BackingField->max_length )
      goto LABEL_33;
    actorCameraDefaultClipRange_k__BackingField->m_Items[1] = v40;
    actorcamera = this->fields.actorcamera;
    if ( !actorcamera )
      goto LABEL_32;
    farClipPlane = UnityEngine_Camera__get_farClipPlane(actorcamera, 0LL);
    if ( actorCameraDefaultClipRange_k__BackingField->max_length <= 1 )
      goto LABEL_33;
    actorCameraDefaultClipRange_k__BackingField->m_Items[2] = farClipPlane;
  }
  this->fields._actorCameraDefaultClipRange_k__BackingField = actorCameraDefaultClipRange_k__BackingField;
  sub_B16F98(&this->fields._actorCameraDefaultClipRange_k__BackingField, actorCameraDefaultClipRange_k__BackingField);
  middleCameraDefaultClipRange_k__BackingField = this->fields._middleCameraDefaultClipRange_k__BackingField;
  if ( !middleCameraDefaultClipRange_k__BackingField )
  {
    v45 = sub_B17014(float___TypeInfo, 2LL, v43);
    if ( this->fields.middleCamera )
    {
      middleCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)v45;
      v46 = UnityEngine_Camera__get_nearClipPlane(this->fields.middleCamera, 0LL);
      if ( middleCameraDefaultClipRange_k__BackingField )
      {
        if ( !middleCameraDefaultClipRange_k__BackingField->max_length )
          goto LABEL_33;
        middleCameraDefaultClipRange_k__BackingField->m_Items[1] = v46;
        middleCamera = this->fields.middleCamera;
        if ( middleCamera )
        {
          v48 = UnityEngine_Camera__get_farClipPlane(middleCamera, 0LL);
          if ( middleCameraDefaultClipRange_k__BackingField->max_length > 1 )
          {
            middleCameraDefaultClipRange_k__BackingField->m_Items[2] = v48;
            goto LABEL_30;
          }
LABEL_33:
          sub_B17100(v37, v38, v39);
          sub_B170A0();
        }
      }
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields._middleCameraDefaultClipRange_k__BackingField = middleCameraDefaultClipRange_k__BackingField;
  sub_B16F98(&this->fields._middleCameraDefaultClipRange_k__BackingField, middleCameraDefaultClipRange_k__BackingField);
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
  __int64 v3; // x1
  bool v4; // w0
  float ShakeTime; // s8
  int v6; // w20
  double v7; // d0
  float v8; // s0
  double v9; // d1
  float v10; // s8
  float v11; // s9
  float v12; // s10
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  UnityEngine_Object_o *perf; // x20
  BattlePerformance_o *v19; // x0
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F6F2E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12030/*"SHAKE"*/, v3);
    byte_40F6F2E = 1;
  }
  if ( this->fields.Shaking )
  {
    v4 = UnityEngine_Mathf__Approximately(this->fields.ShakeTime, 0.0, 0LL);
    ShakeTime = this->fields.ShakeTime;
    if ( v4 )
    {
      v6 = -1;
    }
    else
    {
      v7 = (float)(ShakeTime * 30.0) == INFINITY ? -(float)(ShakeTime * 30.0) : (float)(ShakeTime * 30.0);
      v6 = (int)v7;
    }
    v8 = ShakeTime + UnityEngine_Time__get_deltaTime(0LL);
    v9 = (float)(v8 * 30.0) == INFINITY ? -(float)(v8 * 30.0) : (float)(v8 * 30.0);
    this->fields.ShakeTime = v8;
    if ( v6 < (int)v9 )
    {
      v10 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.x * -0.5,
              this->fields.ShakeRange.fields.x * 0.5,
              0LL);
      v11 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.y * -0.5,
              this->fields.ShakeRange.fields.y * 0.5,
              0LL);
      v12 = UnityEngine_Random__Range(
              this->fields.ShakeRange.fields.z * -0.5,
              this->fields.ShakeRange.fields.z * 0.5,
              0LL);
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_25;
      v20.fields.x = v10;
      v20.fields.y = v11;
      v20.fields.z = v12;
      UnityEngine_Transform__set_localPosition(transform, v20, 0LL);
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
        v19 = this->fields.perf;
        if ( v19 )
        {
          BattlePerformance__sendLocalEventFieldMotion(v19, (System_String_o *)StringLiteral_12030/*"SHAKE"*/, 0LL);
          return;
        }
LABEL_25:
        sub_B170D4();
      }
    }
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
  System_Collections_Generic_Dictionary_int__int__o *v18; // x0
  System_Collections_Generic_Dictionary_int__int__o *v19; // x0
  char v20; // w22
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *v22; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *v24; // x8
  UnityEngine_Component_o *v25; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int128 v27[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F6F2D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Remove__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    byte_40F6F2D = 1;
  }
  memset(&v28, 0, 32);
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_27;
    if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
           cameraTargetDictionary,
           uniqueId,
           (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      v18 = this->fields.cameraTargetDictionary;
      if ( !v18 )
        goto LABEL_27;
      System_Collections_Generic_Dictionary_int__int___Remove(
        v18,
        uniqueId,
        (const MethodInfo_2DDE8AC *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    }
    v19 = this->fields.cameraTargetDictionary;
    if ( !v19 )
      goto LABEL_27;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v27,
      v19,
      (const MethodInfo_2DDD528 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    v20 = 1;
    *(_OWORD *)&v28.fields.dictionary = v27[0];
    v28.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v27[1];
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v28,
              (const MethodInfo_272605C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
      v20 &= HIDWORD(v28.fields.current.fields.key) != cameraId;
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v28,
      (const MethodInfo_27261A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    if ( (v20 & 1) == 0 )
      return;
    cameraFsmDictionary = this->fields.cameraFsmDictionary;
    if ( !cameraFsmDictionary )
      goto LABEL_27;
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)cameraFsmDictionary,
            cameraId,
            (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
      return;
    v22 = this->fields.cameraFsmDictionary;
    if ( !v22
      || (Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v22,
                   cameraId,
                   (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__),
          (v24 = this->fields.cameraFsmDictionary) == 0LL) )
    {
LABEL_27:
      sub_B170D4();
    }
    v25 = (UnityEngine_Component_o *)Item;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v24,
      cameraId,
      (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
    {
      if ( v25 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v25, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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
  return BattleActionCamera__getUniqueFsm_19266132(this, uniqueId, &cameraId, v3);
}


// local variable allocation has failed, the output may be wrong!
PlayMakerFSM_o *__fastcall BattleActionCamera__getUniqueFsm_19266132(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        int32_t *cameraId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  System_Collections_Generic_Dictionary_int__int__o *v11; // x0
  int32_t Item; // w0
  int32_t v13; // w1
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  UnityEngine_Object_o *v15; // x19

  if ( (byte_40F6F2B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F6F2B = 1;
  }
  *cameraId = 0;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          cameraTargetDictionary,
          uniqueId,
          (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0LL;
  v11 = this->fields.cameraTargetDictionary;
  if ( !v11
    || (Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 v11,
                 uniqueId,
                 (const MethodInfo_2DDCEF4 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        *cameraId = Item,
        v13 = Item,
        (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  v15 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                  (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraFsmDictionary,
                                  v13,
                                  (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    return 0LL;
  return (PlayMakerFSM_o *)v15;
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
  __int64 v5; // x1
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v8; // x21
  HutongGames_PlayMaker_Fsm_o *v9; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v10; // x0
  UnityEngine_GameObject_o *Value; // x0
  HutongGames_PlayMaker_Fsm_o *v12; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v13; // x0
  PlayMakerFSM_o *mainFsm; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v15; // x19
  HutongGames_PlayMaker_Fsm_o *v16; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0

  if ( (byte_40F6F27 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3458/*"Camera"*/, targetFsm);
    sub_B16FFC(&StringLiteral_3467/*"Camera_obj"*/, v5);
    byte_40F6F27 = 1;
  }
  if ( !targetFsm )
    goto LABEL_15;
  Fsm = PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !Fsm )
    goto LABEL_15;
  FsmGameObject = HutongGames_PlayMaker_Fsm__GetFsmGameObject(Fsm, (System_String_o *)StringLiteral_3458/*"Camera"*/, 0LL);
  if ( !this->fields.mainFsm )
    goto LABEL_15;
  v8 = FsmGameObject;
  v9 = PlayMakerFSM__get_Fsm(this->fields.mainFsm, 0LL);
  if ( !v9 )
    goto LABEL_15;
  v10 = HutongGames_PlayMaker_Fsm__GetFsmGameObject(v9, (System_String_o *)StringLiteral_3458/*"Camera"*/, 0LL);
  if ( !v10 )
    goto LABEL_15;
  Value = HutongGames_PlayMaker_FsmGameObject__get_Value(v10, 0LL);
  if ( !v8 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v8, Value, 0LL);
  v12 = PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !v12
    || (v13 = HutongGames_PlayMaker_Fsm__GetFsmGameObject(v12, (System_String_o *)StringLiteral_3467/*"Camera_obj"*/, 0LL),
        (mainFsm = this->fields.mainFsm) == 0LL)
    || (v15 = v13, (v16 = PlayMakerFSM__get_Fsm(mainFsm, 0LL)) == 0LL)
    || (v17 = HutongGames_PlayMaker_Fsm__GetFsmGameObject(v16, (System_String_o *)StringLiteral_3467/*"Camera_obj"*/, 0LL)) == 0LL
    || (v18 = HutongGames_PlayMaker_FsmGameObject__get_Value(v17, 0LL), !v15) )
  {
LABEL_15:
    sub_B170D4();
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value(v15, v18, 0LL);
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

  if ( (byte_40F6F26 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActionCamera_loadEffectStatus_Bloom___, targetCamera);
    sub_B16FFC(&Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___, v7);
    sub_B16FFC(&Method_BattleActionCamera_loadEffectStatus_MotionBlur___, v8);
    sub_B16FFC(&Method_BattleActionCamera_loadEffectStatus_Vignetting___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40F6F26 = 1;
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
      (const MethodInfo_18B8F0C *)Method_BattleActionCamera_loadEffectStatus_Bloom___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_18B8F0C *)Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_18B8F0C *)Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_18B8F0C *)Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
  }
}


void __fastcall BattleActionCamera__loadEffectStatus_Vignetting_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_18B8F0C *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  System_Type_o *Type; // x0
  System_String_o *v11; // x0
  System_Type_o *v12; // x0
  System_String_o *v13; // x0
  bool Item; // w1

  if ( (byte_40FA645 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__, cam);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__bool__get_Item__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FA645 = 1;
  }
  if ( !cam )
    goto LABEL_15;
  v9 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Camera_o *))method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_->methodPointer)(cam);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL) )
  {
    if ( !v9 )
      goto LABEL_15;
    Type = System_Object__GetType(v9, 0LL);
    if ( !Type )
      goto LABEL_15;
    v11 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))Type->klass->vtable._8_unknown.method)(
                               Type,
                               Type->klass->vtable._9_get_DeclaringType.methodPtr);
    if ( !stat )
      goto LABEL_15;
    if ( System_Collections_Generic_Dictionary_string__bool___ContainsKey(
           stat,
           v11,
           (const MethodInfo_2E1A610 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
    {
      v12 = System_Object__GetType(v9, 0LL);
      if ( v12 )
      {
        v13 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))v12->klass->vtable._8_unknown.method)(
                                   v12,
                                   v12->klass->vtable._9_get_DeclaringType.methodPtr);
        Item = System_Collections_Generic_Dictionary_string__bool___get_Item(
                 stat,
                 v13,
                 (const MethodInfo_2E1A2C0 *)Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9, Item, 0LL);
        return;
      }
LABEL_15:
      sub_B170D4();
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
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Object_o *v11; // x21
  SimpleAnimation_State_o *v12; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x21
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_TrackedReference_o *Item; // x0
  UnityEngine_AnimationState_o *v19; // x0

  if ( (byte_40F6F2F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, animName);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v7);
    byte_40F6F2F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v10 )
    goto LABEL_28;
  v11 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v10,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v11, 0LL, 0LL) )
      return;
    if ( v11 )
    {
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)v11,
                                                 animName,
                                                 0LL);
      if ( !UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
        return;
      v19 = UnityEngine_Animation__get_Item((UnityEngine_Animation_o *)v11, animName, 0LL);
      if ( v19 )
      {
        UnityEngine_AnimationState__set_time(v19, 0.0, 0LL);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v11, 0LL);
        UnityEngine_Animation__Play_49744236((UnityEngine_Animation_o *)v11, animName, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B170D4();
  }
  if ( !Component_srcLineSprite )
    goto LABEL_28;
  if ( !SimpleAnimation__get_Item((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL) )
    return;
  v12 = SimpleAnimation__get_Item((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
  if ( !v12 )
    goto LABEL_28;
  klass = v12->klass;
  v14 = v12;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v15;
      p_offset += 2;
      if ( v15 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AAFEF8(v12, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, float))p_method)(v14, *(_QWORD *)(p_method + 8), 0.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16380456((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
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
  System_Collections_Generic_Dictionary_int__int__o *v15; // x0
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Object_o *Manager__loadCameraAction; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x1
  PlayMakerFSM_o *Component_srcLineSprite; // x20
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *v24; // x0
  int32_t key; // [xsp+Ch] [xbp-24h] BYREF

  key = cameraId;
  if ( (byte_40F6F2C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_1/*""*/, v13);
    byte_40F6F2C = 1;
  }
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_29;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            cameraTargetDictionary,
            uniqueId,
            (const MethodInfo_2DDD218 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      v15 = this->fields.cameraTargetDictionary;
      if ( !v15 )
        goto LABEL_29;
      System_Collections_Generic_Dictionary_int__int___Add(
        v15,
        uniqueId,
        cameraId,
        (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    cameraFsmDictionary = this->fields.cameraFsmDictionary;
    if ( !cameraFsmDictionary )
      goto LABEL_29;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)cameraFsmDictionary,
           cameraId,
           (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
    {
      return;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
LABEL_29:
      sub_B170D4();
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
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
      v20 = System_Int32__ToString((int32_t)&key, 0LL);
      if ( !Manager__loadCameraAction )
        goto LABEL_29;
      v21 = v20 ? v20 : (System_String_o *)StringLiteral_1/*""*/;
      UnityEngine_Object__set_name(Manager__loadCameraAction, v21, 0LL);
      Component_srcLineSprite = (PlayMakerFSM_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                    (UnityEngine_GameObject_o *)Manager__loadCameraAction,
                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        BattleActionCamera__initializeRegisterFsm(this, Component_srcLineSprite, v23);
        v24 = this->fields.cameraFsmDictionary;
        if ( v24 )
        {
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v24,
            key,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)Component_srcLineSprite,
            (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
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
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_Dictionary_string__bool__o *v6; // x1

  v4 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.frontcamera, v2);
  this->fields.frontCameraEffectsStatus = v4;
  sub_B16F98(&this->fields.frontCameraEffectsStatus, v4);
  v6 = BattleActionCamera__saveEffectStatusCamera(this, this->fields.middleCamera, v5);
  this->fields.middleCameraEffectsStatus = v6;
  sub_B16F98(&this->fields.middleCameraEffectsStatus, v6);
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_Dictionary_string__bool__o *v15; // x21

  if ( (byte_40F6F25 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActionCamera_saveEffectStatus_Bloom___, targetCamera);
    sub_B16FFC(&Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___, v5);
    sub_B16FFC(&Method_BattleActionCamera_saveEffectStatus_MotionBlur___, v6);
    sub_B16FFC(&Method_BattleActionCamera_saveEffectStatus_Vignetting___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__bool__TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40F6F25 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    v15 = (System_Collections_Generic_Dictionary_string__bool__o *)sub_B170CC(
                                                                     System_Collections_Generic_Dictionary_string__bool__TypeInfo,
                                                                     v11,
                                                                     v12,
                                                                     v13,
                                                                     v14);
    System_Collections_Generic_Dictionary_string__bool____ctor(
      v15,
      (const MethodInfo_2E197D0 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v15,
      (const MethodInfo_18B9058 *)Method_BattleActionCamera_saveEffectStatus_Bloom___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v15,
      (const MethodInfo_18B9058 *)Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v15,
      (const MethodInfo_18B9058 *)Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v15,
      (const MethodInfo_18B9058 *)Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
  }
  return v15;
}


void __fastcall BattleActionCamera__saveEffectStatus_Vignetting_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_18B9058 *method)
{
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  System_Type_o *Type; // x0
  System_String_o *v10; // x21
  bool enabled; // w0

  if ( (byte_40FA646 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__bool__set_Item__, cam);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FA646 = 1;
  }
  if ( !cam )
    goto LABEL_13;
  v8 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Camera_o *))method->rgctx_data->_0_UnityEngine_Component_GetComponent_T_->methodPointer)(cam);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
  {
    if ( v8 )
    {
      Type = System_Object__GetType(v8, 0LL);
      if ( Type )
      {
        v10 = (System_String_o *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))Type->klass->vtable._8_unknown.method)(
                                   Type,
                                   Type->klass->vtable._9_get_DeclaringType.methodPtr);
        enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v8, 0LL);
        if ( stat )
        {
          System_Collections_Generic_Dictionary_string__bool___set_Item(
            stat,
            v10,
            enabled,
            (const MethodInfo_2E1A35C *)Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
          return;
        }
      }
    }
LABEL_13:
    sub_B170D4();
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
  int key; // w25
  Il2CppObject *value; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_40F6F28 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__, *(_QWORD *)&cameraId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_2908/*"CAMERA_END"*/, v13);
    byte_40F6F28 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)cameraFsmDictionary,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v18,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
  {
    key = (int)v18.fields.current.fields.key;
    value = v18.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      if ( key == cameraId )
      {
        if ( !value )
          sub_B170D4();
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, eventName, 0LL);
      }
      else
      {
        if ( !value )
          sub_B170D4();
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, (System_String_o *)StringLiteral_2908/*"CAMERA_END"*/, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v18,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__sendEvent(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *UniqueFsm_19266132; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  BattleActionCamera_o *v10; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F6F29 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_40F6F29 = 1;
  }
  cameraId = 0;
  UniqueFsm_19266132 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_19266132(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(UniqueFsm_19266132, 0LL, 0LL)
    && PlayMakerFSMHelper__checkFsmGlobalTransitions((PlayMakerFSM_o *)UniqueFsm_19266132, eventName, 0LL) )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__setGameObject(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        UnityEngine_GameObject_o *obj,
        System_String_o *nameStr,
        const MethodInfo *method)
{
  PlayMakerFSM_o *UniqueFsm_19266132; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  PlayMakerFSM_o *mainFsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *v13; // x0
  PlayMakerFSM_o *v14; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v16; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F6F2A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&uniqueId);
    byte_40F6F2A = 1;
  }
  cameraId = 0;
  UniqueFsm_19266132 = BattleActionCamera__getUniqueFsm_19266132(this, uniqueId, &cameraId, (const MethodInfo *)nameStr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)UniqueFsm_19266132, 0LL, 0LL) )
  {
    if ( !UniqueFsm_19266132 )
      goto LABEL_19;
    FsmVariables = PlayMakerFSM__get_FsmVariables(UniqueFsm_19266132, 0LL);
    if ( !FsmVariables )
      goto LABEL_19;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(FsmVariables, nameStr, 0LL);
    if ( FsmGameObject )
      HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, obj, 0LL);
  }
  mainFsm = this->fields.mainFsm;
  if ( !mainFsm )
    goto LABEL_19;
  v13 = PlayMakerFSM__get_FsmVariables(mainFsm, 0LL);
  if ( !v13 )
    goto LABEL_19;
  if ( HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v13, nameStr, 0LL) )
  {
    v14 = this->fields.mainFsm;
    if ( v14 )
    {
      Fsm = PlayMakerFSM__get_Fsm(v14, 0LL);
      if ( Fsm )
      {
        v16 = HutongGames_PlayMaker_Fsm__GetFsmGameObject(Fsm, nameStr, 0LL);
        if ( v16 )
        {
          HutongGames_PlayMaker_FsmGameObject__set_Value(v16, obj, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_B170D4();
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
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *middleCamera; // x21
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_40F6F24 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, active);
    byte_40F6F24 = 1;
  }
  frontcamera = (UnityEngine_Object_o *)this->fields.frontcamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontcamera, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.frontcamera;
    if ( !v6 )
      goto LABEL_18;
    gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, active, 0LL);
  }
  middleCamera = (UnityEngine_Object_o *)this->fields.middleCamera;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(middleCamera, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.middleCamera;
    if ( v9 )
    {
      v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( v10 )
      {
        UnityEngine_GameObject__SetActive(v10, active, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B170D4();
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
  this->fields._actorCameraDefaultClipRange_k__BackingField = value;
  sub_B16F98(&this->fields._actorCameraDefaultClipRange_k__BackingField, value);
}


void __fastcall BattleActionCamera__set_middleCameraDefaultClipRange(
        BattleActionCamera_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  this->fields._middleCameraDefaultClipRange_k__BackingField = value;
  sub_B16F98(&this->fields._middleCameraDefaultClipRange_k__BackingField, value);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActionCamera__stopCameraAnimation(BattleActionCamera_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SimpleAnimation_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Animation_o *v8; // x20
  UnityEngine_Transform_o *transform; // x20
  int v10; // s0
  UnityEngine_Transform_o *v13; // x20
  int v14; // s0
  UnityEngine_Transform_o *v17; // x19
  int v18; // s0

  if ( (byte_40F6F30 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F6F30 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   gameObject,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_21;
  v8 = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v7,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !Component_srcLineSprite )
      goto LABEL_21;
    SimpleAnimation__Stop(Component_srcLineSprite, 0LL);
  }
  else
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
    {
      if ( !v8 )
        goto LABEL_21;
      UnityEngine_Animation__Stop(v8, 0LL);
    }
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v10 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform
    || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v10, 0LL),
        v13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_one(0LL),
        !v13)
    || (UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&v14, 0LL),
        v17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL),
        *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL),
        !v17) )
  {
LABEL_21:
    sub_B170D4();
  }
  UnityEngine_Transform__set_eulerAngles(v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
}