void __fastcall BattleActionCamera___ctor(BattleActionCamera_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_Collections_Generic_Dictionary_int__int__o *v4; // x20

  if ( (byte_42ACF48 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    byte_42ACF48 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
  this->fields.cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v3;
  sub_B52920(&this->fields.cameraFsmDictionary);
  v4 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v4,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v4;
  sub_B52920(&this->fields.cameraTargetDictionary);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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
  System_Collections_Generic_Dictionary_int__int__o *v10; // x21
  struct System_Single_array *actorCameraDefaultClipRange_k__BackingField; // x21
  float v12; // s0
  float farClipPlane; // s0
  struct System_Single_array *middleCameraDefaultClipRange_k__BackingField; // x21
  float v15; // s0
  float v16; // s0
  __int64 v17; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v18; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v19; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_42ACF3A & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&float___TypeInfo);
    byte_42ACF3A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  p_cameraFsmDictionary = &this->fields.cameraFsmDictionary;
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraFsmDictionary,
         (const MethodInfo_2F27904 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Count__) >= 1 )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)*p_cameraFsmDictionary;
    if ( !*p_cameraFsmDictionary )
      goto LABEL_32;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
      &v18,
      cameraFsmDictionary,
      (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
              &v19,
              (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
    {
      if ( LODWORD(v19.fields.current.fields.key) )
      {
        if ( !v19.fields.current.fields.value )
          sub_B52A5C(0LL, v7);
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v19.fields.current.fields.value,
                                               0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
      &v19,
      (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    v9 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__PlayMakerFSM__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v9,
      (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM___ctor__);
    *p_cameraFsmDictionary = (struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *)v9;
    sub_B52920(&this->fields.cameraFsmDictionary);
  }
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.cameraTargetDictionary = v10;
  sub_B52920(&this->fields.cameraTargetDictionary);
  this->fields.perf = inPerf;
  sub_B52920(&this->fields.perf);
  this->fields.mainFsm = (struct PlayMakerFSM_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    (UnityEngine_Component_o *)this,
                                                    (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  sub_B52920(&this->fields.mainFsm);
  cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
LABEL_32:
    sub_B52A5C(cameraFsmDictionary, inPerf);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraFsmDictionary,
    0,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)this->fields.mainFsm,
    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
  actorCameraDefaultClipRange_k__BackingField = this->fields._actorCameraDefaultClipRange_k__BackingField;
  if ( !actorCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)sub_B5299C(float___TypeInfo, 2LL);
    if ( !this->fields.actorcamera )
      goto LABEL_32;
    actorCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
    v12 = UnityEngine_Camera__get_nearClipPlane(this->fields.actorcamera, 0LL);
    if ( !actorCameraDefaultClipRange_k__BackingField )
      goto LABEL_32;
    if ( !actorCameraDefaultClipRange_k__BackingField->max_length )
      goto LABEL_33;
    actorCameraDefaultClipRange_k__BackingField->m_Items[1] = v12;
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.actorcamera;
    if ( !cameraFsmDictionary )
      goto LABEL_32;
    farClipPlane = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
    if ( actorCameraDefaultClipRange_k__BackingField->max_length <= 1 )
      goto LABEL_33;
    actorCameraDefaultClipRange_k__BackingField->m_Items[2] = farClipPlane;
  }
  this->fields._actorCameraDefaultClipRange_k__BackingField = actorCameraDefaultClipRange_k__BackingField;
  sub_B52920(&this->fields._actorCameraDefaultClipRange_k__BackingField);
  middleCameraDefaultClipRange_k__BackingField = this->fields._middleCameraDefaultClipRange_k__BackingField;
  if ( !middleCameraDefaultClipRange_k__BackingField )
  {
    cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)sub_B5299C(float___TypeInfo, 2LL);
    if ( this->fields.middleCamera )
    {
      middleCameraDefaultClipRange_k__BackingField = (struct System_Single_array *)cameraFsmDictionary;
      v15 = UnityEngine_Camera__get_nearClipPlane(this->fields.middleCamera, 0LL);
      if ( middleCameraDefaultClipRange_k__BackingField )
      {
        if ( !middleCameraDefaultClipRange_k__BackingField->max_length )
          goto LABEL_33;
        middleCameraDefaultClipRange_k__BackingField->m_Items[1] = v15;
        cameraFsmDictionary = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)this->fields.middleCamera;
        if ( cameraFsmDictionary )
        {
          v16 = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)cameraFsmDictionary, 0LL);
          if ( middleCameraDefaultClipRange_k__BackingField->max_length > 1 )
          {
            middleCameraDefaultClipRange_k__BackingField->m_Items[2] = v16;
            goto LABEL_30;
          }
LABEL_33:
          v17 = sub_B52A88(cameraFsmDictionary);
          sub_B52A28(v17, 0LL);
        }
      }
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields._middleCameraDefaultClipRange_k__BackingField = middleCameraDefaultClipRange_k__BackingField;
  sub_B52920(&this->fields._middleCameraDefaultClipRange_k__BackingField);
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

  if ( (byte_42ACF45 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_12170/*"SHAKE"*/);
    byte_42ACF45 = 1;
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
            (System_String_o *)StringLiteral_12170/*"SHAKE"*/,
            0LL);
          return;
        }
LABEL_25:
        sub_B52A5C(transform, v13);
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
  System_Collections_Generic_Dictionary_int__int__o *cameraTargetDictionary; // x0
  char v8; // w22
  struct System_Collections_Generic_Dictionary_int__PlayMakerFSM__o *cameraFsmDictionary; // x8
  UnityEngine_Object_o *v10; // x20
  UnityEngine_Object_o *gameObject; // x19
  __int128 v12[2]; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42ACF44 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__int__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACF44 = 1;
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
           (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_27;
      System_Collections_Generic_Dictionary_int__int___Remove(
        cameraTargetDictionary,
        uniqueId,
        (const MethodInfo_2F01394 *)Method_System_Collections_Generic_Dictionary_int__int__Remove__);
    }
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_27;
    System_Collections_Generic_Dictionary_int__int___GetEnumerator(
      (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v12,
      cameraTargetDictionary,
      (const MethodInfo_2F00010 *)Method_System_Collections_Generic_Dictionary_int__int__GetEnumerator__);
    v8 = 1;
    *(_OWORD *)&v13.fields.dictionary = v12[0];
    v13.fields.current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)v12[1];
    while ( System_Collections_Generic_Dictionary_Enumerator_int__int___MoveNext(
              &v13,
              (const MethodInfo_2886FC0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__MoveNext__) )
      v8 &= HIDWORD(v13.fields.current.fields.key) != cameraId;
    System_Collections_Generic_Dictionary_Enumerator_int__int___Dispose(
      &v13,
      (const MethodInfo_2887108 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__int__Dispose__);
    if ( (v8 & 1) == 0 )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_27;
    if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
            (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)cameraTargetDictionary,
            cameraId,
            (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
      return;
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary
      || (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraTargetDictionary,
                                                                                          cameraId,
                                                                                          (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__),
          (cameraFsmDictionary = this->fields.cameraFsmDictionary) == 0LL) )
    {
LABEL_27:
      sub_B52A5C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
    }
    v10 = (UnityEngine_Object_o *)cameraTargetDictionary;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)cameraFsmDictionary,
      cameraId,
      (const MethodInfo_2F296E4 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Remove__);
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
        UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
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
  return BattleActionCamera__getUniqueFsm_19354404(this, uniqueId, &cameraId, v3);
}


// local variable allocation has failed, the output may be wrong!
PlayMakerFSM_o *__fastcall BattleActionCamera__getUniqueFsm_19354404(
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
  if ( (byte_42ACF42 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACF42 = 1;
  }
  *cameraId = 0;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary )
    goto LABEL_13;
  if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
          cameraTargetDictionary,
          v5,
          (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    return 0LL;
  cameraTargetDictionary = this->fields.cameraTargetDictionary;
  if ( !cameraTargetDictionary
    || (Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                 cameraTargetDictionary,
                 v5,
                 (const MethodInfo_2EFF9DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__),
        *cameraId = Item,
        *(_QWORD *)&uniqueId = Item,
        (cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary) == 0LL) )
  {
LABEL_13:
    sub_B52A5C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
  }
  v9 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cameraTargetDictionary,
                                 uniqueId,
                                 (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__get_Item__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    return 0LL;
  return (PlayMakerFSM_o *)v9;
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
  if ( (byte_42ACF3E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3505/*"Camera"*/);
    this = (BattleActionCamera_o *)sub_B52984(&StringLiteral_3514/*"Camera_obj"*/);
    byte_42ACF3E = 1;
  }
  if ( !targetFsm )
    goto LABEL_15;
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(targetFsm, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                   (HutongGames_PlayMaker_Fsm_o *)this,
                                   (System_String_o *)StringLiteral_3505/*"Camera"*/,
                                   0LL);
  if ( !v4->fields.mainFsm )
    goto LABEL_15;
  v5 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(v4->fields.mainFsm, 0LL);
  if ( !this )
    goto LABEL_15;
  this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                   (HutongGames_PlayMaker_Fsm_o *)this,
                                   (System_String_o *)StringLiteral_3505/*"Camera"*/,
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
                                         (System_String_o *)StringLiteral_3514/*"Camera_obj"*/,
                                         0LL),
        (mainFsm = v4->fields.mainFsm) == 0LL)
    || (v7 = (HutongGames_PlayMaker_FsmGameObject_o *)this,
        (this = (BattleActionCamera_o *)PlayMakerFSM__get_Fsm(mainFsm, 0LL)) == 0LL)
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                                         (HutongGames_PlayMaker_Fsm_o *)this,
                                         (System_String_o *)StringLiteral_3514/*"Camera_obj"*/,
                                         0LL)) == 0LL
    || (this = (BattleActionCamera_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                         (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                         0LL),
        !v7) )
  {
LABEL_15:
    sub_B52A5C(this, targetFsm);
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
  if ( (byte_42ACF3D & 1) == 0 )
  {
    sub_B52984(&Method_BattleActionCamera_loadEffectStatus_Bloom___);
    sub_B52984(&Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
    sub_B52984(&Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    sub_B52984(&Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACF3D = 1;
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
      (const MethodInfo_1A44C54 *)Method_BattleActionCamera_loadEffectStatus_Bloom___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_1A44C54 *)Method_BattleActionCamera_loadEffectStatus_MotionBlur___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_1A44C54 *)Method_BattleActionCamera_loadEffectStatus_Vignetting___);
    BattleActionCamera__loadEffectStatus_Vignetting_(
      this,
      targetCamera,
      stat,
      (const MethodInfo_1A44C54 *)Method_BattleActionCamera_loadEffectStatus_GrayscaleEffect___);
  }
}


void __fastcall BattleActionCamera__loadEffectStatus_Vignetting_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_1A44C54 *method)
{
  UnityEngine_Object_o *v7; // x20
  System_String_o *v8; // x0
  bool Item; // w1

  if ( (byte_42B15C2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
    this = (BattleActionCamera_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B15C2 = 1;
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
           (const MethodInfo_2F08520 *)Method_System_Collections_Generic_Dictionary_string__bool__ContainsKey__) )
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
                 (const MethodInfo_2F081D0 *)Method_System_Collections_Generic_Dictionary_string__bool__get_Item__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v7, Item, 0LL);
        return;
      }
LABEL_15:
      sub_B52A5C(this, cam);
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
  __int64 v9; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x21
  unsigned __int64 v12; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v14; // x0
  UnityEngine_TrackedReference_o *Item; // x0

  if ( (byte_42ACF46 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42ACF46 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  v8 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        UnityEngine_Animation__Play_51067744((UnityEngine_Animation_o *)v8, animName, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B52A5C(gameObject, v6);
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
  v11 = gameObject;
  if ( *(_WORD *)&gameObject->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&gameObject->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v14 = (__int64)(&klass[1]._1.gc_desc + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_16:
    v14 = sub_AEB880(gameObject, SimpleAnimation_State_TypeInfo, 4LL, v9);
  }
  (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 0.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_srcLineSprite, 0LL);
  SimpleAnimation__Play_16625408((SimpleAnimation_o *)Component_srcLineSprite, animName, 0LL);
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
  if ( (byte_42ACF43 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42ACF43 = 1;
  }
  if ( cameraId )
  {
    cameraTargetDictionary = this->fields.cameraTargetDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_29;
    if ( !System_Collections_Generic_Dictionary_int__int___ContainsKey(
            cameraTargetDictionary,
            uniqueId,
            (const MethodInfo_2EFFD00 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
    {
      cameraTargetDictionary = this->fields.cameraTargetDictionary;
      if ( !cameraTargetDictionary )
        goto LABEL_29;
      System_Collections_Generic_Dictionary_int__int___Add(
        cameraTargetDictionary,
        uniqueId,
        cameraId,
        (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)this->fields.cameraFsmDictionary;
    if ( !cameraTargetDictionary )
      goto LABEL_29;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)cameraTargetDictionary,
           cameraId,
           (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__ContainsKey__) )
    {
      return;
    }
    cameraTargetDictionary = (System_Collections_Generic_Dictionary_int__int__o *)UnityEngine_Component__get_gameObject(
                                                                                    (UnityEngine_Component_o *)this,
                                                                                    0LL);
    if ( !cameraTargetDictionary )
LABEL_29:
      sub_B52A5C(cameraTargetDictionary, *(_QWORD *)&uniqueId);
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
                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
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
            (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__Add__);
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
  const MethodInfo *v4; // x2

  this->fields.frontCameraEffectsStatus = BattleActionCamera__saveEffectStatusCamera(this, this->fields.frontcamera, v2);
  sub_B52920(&this->fields.frontCameraEffectsStatus);
  this->fields.middleCameraEffectsStatus = BattleActionCamera__saveEffectStatusCamera(
                                             this,
                                             this->fields.middleCamera,
                                             v4);
  sub_B52920(&this->fields.middleCameraEffectsStatus);
}


System_Collections_Generic_Dictionary_string__bool__o *__fastcall BattleActionCamera__saveEffectStatusCamera(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *targetCamera,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__bool__o *v5; // x21

  if ( (byte_42ACF3C & 1) == 0 )
  {
    sub_B52984(&Method_BattleActionCamera_saveEffectStatus_Bloom___);
    sub_B52984(&Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
    sub_B52984(&Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    sub_B52984(&Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACF3C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = 0LL;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetCamera, 0LL, 0LL) )
  {
    v5 = (System_Collections_Generic_Dictionary_string__bool__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__bool__TypeInfo);
    System_Collections_Generic_Dictionary_string__bool____ctor(
      v5,
      (const MethodInfo_2F076E0 *)Method_System_Collections_Generic_Dictionary_string__bool___ctor__);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v5,
      (const MethodInfo_1A44DA0 *)Method_BattleActionCamera_saveEffectStatus_Bloom___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v5,
      (const MethodInfo_1A44DA0 *)Method_BattleActionCamera_saveEffectStatus_MotionBlur___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v5,
      (const MethodInfo_1A44DA0 *)Method_BattleActionCamera_saveEffectStatus_Vignetting___);
    BattleActionCamera__saveEffectStatus_Vignetting_(
      this,
      targetCamera,
      v5,
      (const MethodInfo_1A44DA0 *)Method_BattleActionCamera_saveEffectStatus_GrayscaleEffect___);
  }
  return v5;
}


void __fastcall BattleActionCamera__saveEffectStatus_Vignetting_(
        BattleActionCamera_o *this,
        UnityEngine_Camera_o *cam,
        System_Collections_Generic_Dictionary_string__bool__o *stat,
        const MethodInfo_1A44DA0 *method)
{
  UnityEngine_Object_o *v7; // x20
  System_String_o *v8; // x21

  if ( (byte_42B15C3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
    this = (BattleActionCamera_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B15C3 = 1;
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
            (const MethodInfo_2F0826C *)Method_System_Collections_Generic_Dictionary_string__bool__set_Item__);
          return;
        }
      }
    }
LABEL_13:
    sub_B52A5C(this, cam);
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
  int key; // w25
  Il2CppObject *value; // x21
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_42ACF3F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_int__PlayMakerFSM__get_Value__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2947/*"CAMERA_END"*/);
    byte_42ACF3F = 1;
  }
  memset(&v13, 0, sizeof(v13));
  cameraFsmDictionary = this->fields.cameraFsmDictionary;
  if ( !cameraFsmDictionary )
    sub_B52A5C(0LL, *(_QWORD *)&cameraId);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)cameraFsmDictionary,
    (const MethodInfo_2F282EC *)Method_System_Collections_Generic_Dictionary_int__PlayMakerFSM__GetEnumerator__);
  v13 = v12;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v13,
            (const MethodInfo_28895A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__MoveNext__) )
  {
    key = (int)v13.fields.current.fields.key;
    value = v13.fields.current.fields.value;
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
          sub_B52A5C(v10, v11);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, eventName, 0LL);
      }
      else
      {
        if ( !value )
          sub_B52A5C(v10, v11);
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)value, (System_String_o *)StringLiteral_2947/*"CAMERA_END"*/, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v13,
    (const MethodInfo_288970C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__PlayMakerFSM__Dispose__);
}


void __fastcall BattleActionCamera__sendEvent(
        BattleActionCamera_o *this,
        int32_t uniqueId,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *UniqueFsm_19354404; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  BattleActionCamera_o *v10; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42ACF40 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACF40 = 1;
  }
  cameraId = 0;
  UniqueFsm_19354404 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_19354404(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(UniqueFsm_19354404, 0LL, 0LL)
    && PlayMakerFSMHelper__checkFsmGlobalTransitions((PlayMakerFSM_o *)UniqueFsm_19354404, eventName, 0LL) )
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
  UnityEngine_Object_o *UniqueFsm_19354404; // x22
  HutongGames_PlayMaker_FsmVariables_o *FsmVariables; // x0
  __int64 v11; // x1
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  int32_t cameraId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42ACF41 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACF41 = 1;
  }
  cameraId = 0;
  UniqueFsm_19354404 = (UnityEngine_Object_o *)BattleActionCamera__getUniqueFsm_19354404(
                                                 this,
                                                 uniqueId,
                                                 &cameraId,
                                                 (const MethodInfo *)nameStr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  FsmVariables = (HutongGames_PlayMaker_FsmVariables_o *)UnityEngine_Object__op_Inequality(UniqueFsm_19354404, 0LL, 0LL);
  if ( ((unsigned __int8)FsmVariables & 1) != 0 )
  {
    if ( !UniqueFsm_19354404 )
      goto LABEL_19;
    FsmVariables = PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)UniqueFsm_19354404, 0LL);
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
    sub_B52A5C(FsmVariables, v11);
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

  if ( (byte_42ACF3B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACF3B = 1;
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
    sub_B52A5C(gameObject, v6);
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
  sub_B52920(&this->fields._actorCameraDefaultClipRange_k__BackingField);
}


void __fastcall BattleActionCamera__set_middleCameraDefaultClipRange(
        BattleActionCamera_o *this,
        System_Single_array *value,
        const MethodInfo *method)
{
  this->fields._middleCameraDefaultClipRange_k__BackingField = value;
  sub_B52920(&this->fields._middleCameraDefaultClipRange_k__BackingField);
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

  if ( (byte_42ACF47 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACF47 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_21;
  v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 gameObject,
                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
    sub_B52A5C(gameObject, v4);
  }
  UnityEngine_Transform__set_eulerAngles(v15, *(UnityEngine_Vector3_o *)&v16, 0LL);
}