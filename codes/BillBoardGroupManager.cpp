void __fastcall BillBoardGroupManager___cctor(const MethodInfo *method)
{
  if ( (byte_42AFCF5 & 1) == 0 )
  {
    sub_B52984(&BillBoardGroupManager_TypeInfo);
    byte_42AFCF5 = 1;
  }
  BillBoardGroupManager_TypeInfo->static_fields->targetFov = 40.0;
  BillBoardGroupManager_TypeInfo->static_fields->VecZero = UnityEngine_Vector3__get_zero(0LL);
  BillBoardGroupManager_TypeInfo->static_fields->VecBack = UnityEngine_Vector3__get_back(0LL);
}


void __fastcall BillBoardGroupManager___ctor(BillBoardGroupManager_o *this, const MethodInfo *method)
{
  if ( (byte_42AFCF4 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
    byte_42AFCF4 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BillBoardGroupManager__AddData(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        UnityEngine_Camera_o *cam,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_datas; // x23
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x24
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *Values; // x0
  __int64 v18; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v19; // x22
  BillBoardGroupManager_GroupData_o *v20; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42AFCF1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__get_Current__);
    sub_B52984(&BillBoardGroupManager_GroupData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    byte_42AFCF1 = 1;
  }
  memset(&i, 0, sizeof(i));
  p_datas = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.datas;
  if ( !this->fields.datas )
  {
    v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v10,
      (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    *p_datas = v10;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.datas,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( this->fields.phaseNow != 1 )
  {
    Values = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)*p_datas;
    if ( !*p_datas )
      goto LABEL_22;
    Values = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                                                                           Values,
                                                                                           (const MethodInfo_2F27AAC *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    if ( !Values )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      &v21,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Values,
      (const MethodInfo_2411CCC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    for ( i = v21;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &i,
            (const MethodInfo_288A750 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
          BillBoardGroupManager_GroupData__Reset((BillBoardGroupManager_GroupData_o *)i.fields.currentValue, cam, 0LL) )
    {
      if ( !i.fields.currentValue )
        sub_B52A5C(0LL, v18);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &i,
      (const MethodInfo_288A74C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    this->fields.phaseNow = 1;
  }
  Values = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)*p_datas;
  if ( !*p_datas )
    goto LABEL_22;
  Values = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                                         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Values,
                                                                                         groupId,
                                                                                         (const MethodInfo_2F27F7C *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
  v19 = *p_datas;
  if ( ((unsigned __int8)Values & 1) != 0 )
  {
    if ( v19 )
    {
      Values = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                             *p_datas,
                                                                                             groupId,
                                                                                             (const MethodInfo_2F27C44 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
      if ( Values )
      {
        BillBoardGroupManager_GroupData__AddObj((BillBoardGroupManager_GroupData_o *)Values, obj, 0LL);
        return;
      }
    }
LABEL_22:
    sub_B52A5C(Values, *(_QWORD *)&groupId);
  }
  v20 = (BillBoardGroupManager_GroupData_o *)sub_B52A54(BillBoardGroupManager_GroupData_TypeInfo);
  BillBoardGroupManager_GroupData___ctor(v20, cam, 0LL);
  if ( !v19 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v19,
    groupId,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v20,
    (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGroupManager__GetLookVec(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        bool disableZRot,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__o *datas; // x0
  __int64 v8; // x1
  float v9; // s0
  float v10; // s1
  float v11; // s2
  BillBoardGroupManager_c *v12; // x0
  float *p_targetFov; // x8
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AFCF2 & 1) == 0 )
  {
    sub_B52984(&BillBoardGroupManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__);
    byte_42AFCF2 = 1;
  }
  value = 0LL;
  datas = this->fields.datas;
  this->fields.phaseNow = 2;
  if ( datas
    && System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)datas,
         groupId,
         &value,
         (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__) )
  {
    if ( !value )
      sub_B52A5C(0LL, v8);
    *(UnityEngine_Vector3_o *)&v9 = BillBoardGroupManager_GroupData__GetLookVec(
                                      (BillBoardGroupManager_GroupData_o *)value,
                                      0LL);
    if ( disableZRot )
      v10 = 0.0;
  }
  else
  {
    v12 = BillBoardGroupManager_TypeInfo;
    if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v12 = BillBoardGroupManager_TypeInfo;
    }
    p_targetFov = &v12->static_fields->targetFov;
    v9 = p_targetFov[1];
    v10 = p_targetFov[2];
    v11 = p_targetFov[3];
  }
  result.fields.z = v11;
  result.fields.y = v10;
  result.fields.x = v9;
  return result;
}


float __fastcall BillBoardGroupManager__GetMagnifier(float angleRad, const MethodInfo *method)
{
  BillBoardGroupManager_c *v3; // x0
  float v4; // s0
  float v5; // s8
  float targetFov; // s0

  if ( (byte_42AFCF3 & 1) == 0 )
  {
    sub_B52984(&BillBoardGroupManager_TypeInfo);
    byte_42AFCF3 = 1;
  }
  v3 = BillBoardGroupManager_TypeInfo;
  v4 = angleRad + -6.2832;
  if ( angleRad < 3.1416 )
    v4 = angleRad;
  if ( v4 >= 0.0 )
    v5 = v4;
  else
    v5 = -v4;
  if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v3 = BillBoardGroupManager_TypeInfo;
  }
  targetFov = v3->static_fields->targetFov;
  if ( v5 >= (float)(targetFov * 0.017453) )
    return 0.00001;
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    targetFov = BillBoardGroupManager_TypeInfo->static_fields->targetFov;
  }
  return cosf(v5 * (float)(90.0 / targetFov));
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGroupManager__GetNormalizedLookAt(
        UnityEngine_Vector3_o fromPos,
        UnityEngine_Vector3_o toPos,
        const MethodInfo *method)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  UnityEngine_Vector3_o v6; // [xsp+0h] [xbp-10h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  fromPos.fields.x = toPos.fields.x - fromPos.fields.x;
  fromPos.fields.y = toPos.fields.y - fromPos.fields.y;
  fromPos.fields.z = toPos.fields.z - fromPos.fields.z;
  v6 = fromPos;
  *(UnityEngine_Vector3_o *)&v3 = UnityEngine_Vector3__get_normalized(fromPos, (const MethodInfo *)&v6);
  result.fields.z = v5;
  result.fields.y = v4;
  result.fields.x = v3;
  return result;
}


void __fastcall BillBoardGroupManager_GroupData___ctor(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  BillBoardGroupManager_c *v5; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  __int64 v7; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20

  if ( (byte_42AD649 & 1) == 0 )
  {
    sub_B52984(&BillBoardGroupManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_42AD649 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.cam = pCam;
  sub_B52920(&this->fields);
  v5 = BillBoardGroupManager_TypeInfo;
  if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v5 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  v7 = *(_QWORD *)&static_fields->VecZero.fields.x;
  *(float *)&static_fields = static_fields->VecZero.fields.z;
  *(_QWORD *)&this->fields.resVec.fields.x = v7;
  LODWORD(this->fields.resVec.fields.z) = (_DWORD)static_fields;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objs = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B52920(&this->fields.objs);
}


void __fastcall BillBoardGroupManager_GroupData__AddObj(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objs; // x0

  if ( (byte_42AD64B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_42AD64B = 1;
  }
  objs = this->fields.objs;
  if ( !objs )
    sub_B52A5C(0LL, obj);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objs,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGroupManager_GroupData__GetLookVec(
        BillBoardGroupManager_GroupData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cam; // x20
  float y; // s8
  float x; // s9
  float z; // s10
  BillBoardGroupManager_c *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objs; // x0
  Il2CppObject *current; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  float v16; // s0
  float v17; // s1
  float v18; // s2
  UnityEngine_Component_o *v19; // x0
  float v20; // s8
  float v21; // s9
  float v22; // s10
  UnityEngine_Transform_o *v23; // x0
  __int64 v24; // x1
  float v25; // s11
  float v26; // s12
  float v27; // s13
  __int64 v28; // x1
  float v29; // s2
  float v30; // s0
  float v31; // s1
  UnityEngine_Component_o *v32; // x0
  float v33; // s8
  UnityEngine_Transform_o *v34; // x0
  __int64 v35; // x1
  float v36; // s0
  float Magnifier; // s0
  float v38; // s1
  float v39; // s0
  float v40; // s1
  float v41; // s2
  float v42; // [xsp+0h] [xbp-C0h]
  float v43; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v52; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42AD64C & 1) == 0 )
  {
    sub_B52984(&BillBoardGroupManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD64C = 1;
  }
  memset(&v45, 0, sizeof(v45));
  cam = (UnityEngine_Object_o *)this->fields.cam;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(cam, 0LL, 0LL) )
  {
    x = this->fields.resVec.fields.x;
    y = this->fields.resVec.fields.y;
    z = this->fields.resVec.fields.z;
    v7 = BillBoardGroupManager_TypeInfo;
    if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v7 = BillBoardGroupManager_TypeInfo;
    }
    v46.fields.x = x;
    v46.fields.y = y;
    v46.fields.z = z;
    if ( UnityEngine_Vector3__op_Equality(v46, v7->static_fields->VecZero, 0LL) )
    {
      objs = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objs;
      if ( !objs )
        goto LABEL_38;
      if ( objs->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v44,
          objs,
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v45 = v44;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v45,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v45.fields.current;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
          if ( !v11 )
          {
            if ( !current )
              sub_B52A5C(v11, v12);
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0LL);
            if ( !transform )
              sub_B52A5C(0LL, v14);
            *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position(transform, 0LL);
            v19 = (UnityEngine_Component_o *)this->fields.cam;
            if ( !v19 )
              sub_B52A5C(0LL, v15);
            v20 = v16;
            v21 = v17;
            v22 = v18;
            v23 = UnityEngine_Component__get_transform(v19, 0LL);
            if ( !v23 )
              sub_B52A5C(0LL, v24);
            position = UnityEngine_Transform__get_position(v23, 0LL);
            v25 = position.fields.x;
            v26 = position.fields.y;
            v27 = position.fields.z;
            if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
            }
            v48.fields.x = v20;
            v48.fields.y = v21;
            v48.fields.z = v22;
            v51.fields.x = v25;
            v51.fields.y = v26;
            v51.fields.z = v27;
            *(UnityEngine_Vector3_o *)(&v29 - 2) = BillBoardGroupManager__GetNormalizedLookAt(v48, v51, 0LL);
            v43 = v30;
            v42 = v31;
            v32 = (UnityEngine_Component_o *)this->fields.cam;
            if ( !v32 )
              sub_B52A5C(0LL, v28);
            v33 = v29;
            v34 = UnityEngine_Component__get_transform(v32, 0LL);
            if ( !v34 )
              sub_B52A5C(0LL, v35);
            forward = UnityEngine_Transform__get_forward(v34, 0LL);
            v52.fields.z = -v33;
            v52.fields.x = -v43;
            v52.fields.y = -v42;
            v36 = UnityEngine_Vector3__Angle(forward, v52, 0LL) * 0.017453;
            Magnifier = BillBoardGroupManager__GetMagnifier(v36, 0LL);
            v38 = (float)(v33 * Magnifier) + this->fields.resVec.fields.z;
            *(float32x2_t *)&this->fields.resVec.fields.x = vadd_f32(
                                                              vmul_n_f32(
                                                                (float32x2_t)__PAIR64__(LODWORD(v42), LODWORD(v43)),
                                                                Magnifier),
                                                              *(float32x2_t *)&this->fields.resVec.fields.x);
            this->fields.resVec.fields.z = v38;
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v45,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        objs = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objs;
        if ( objs )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)objs,
            (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
          goto LABEL_31;
        }
LABEL_38:
        sub_B52A5C(objs, v8);
      }
    }
  }
LABEL_31:
  v39 = this->fields.resVec.fields.x;
  v40 = this->fields.resVec.fields.y;
  v41 = this->fields.resVec.fields.z;
  result.fields.z = v41;
  result.fields.y = v40;
  result.fields.x = v39;
  return result;
}


void __fastcall BillBoardGroupManager_GroupData__Reset(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  BillBoardGroupManager_c *v5; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  __int64 v7; // x9

  if ( (byte_42AD64A & 1) == 0 )
  {
    sub_B52984(&BillBoardGroupManager_TypeInfo);
    byte_42AD64A = 1;
  }
  this->fields.cam = pCam;
  sub_B52920(&this->fields);
  v5 = BillBoardGroupManager_TypeInfo;
  if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v5 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  v7 = *(_QWORD *)&static_fields->VecZero.fields.x;
  *(float *)&static_fields = static_fields->VecZero.fields.z;
  *(_QWORD *)&this->fields.resVec.fields.x = v7;
  LODWORD(this->fields.resVec.fields.z) = (_DWORD)static_fields;
}