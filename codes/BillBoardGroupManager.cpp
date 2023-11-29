void __fastcall BillBoardGroupManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F9084 & 1) == 0 )
  {
    sub_B16FFC(&BillBoardGroupManager_TypeInfo, v1);
    byte_40F9084 = 1;
  }
  BillBoardGroupManager_TypeInfo->static_fields->targetFov = 40.0;
  BillBoardGroupManager_TypeInfo->static_fields->VecZero = UnityEngine_Vector3__get_zero(0LL);
  BillBoardGroupManager_TypeInfo->static_fields->VecBack = UnityEngine_Vector3__get_back(0LL);
}


void __fastcall BillBoardGroupManager___ctor(BillBoardGroupManager_o *this, const MethodInfo *method)
{
  if ( (byte_40F9083 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__, method);
    byte_40F9083 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BillBoardGroupManager__AddData(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        UnityEngine_Camera_o *cam,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o **p_datas; // x23
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  bool v28; // w0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *v33; // x22
  BillBoardGroupManager_GroupData_o *Item; // x0
  BillBoardGroupManager_GroupData_o *v35; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F9080 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__,
      *(_QWORD *)&groupId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__, v12);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo, v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__,
      v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__get_Current__,
      v16);
    sub_B16FFC(&BillBoardGroupManager_GroupData_TypeInfo, v17);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__,
      v18);
    byte_40F9080 = 1;
  }
  memset(&i, 0, sizeof(i));
  p_datas = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o **)&this->fields.datas;
  if ( !this->fields.datas )
  {
    v20 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo,
                                                                                                     *(_QWORD *)&groupId,
                                                                                                     cam,
                                                                                                     obj,
                                                                                                     method);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v20,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    *p_datas = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v20;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.datas,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( this->fields.phaseNow != 1 )
  {
    if ( !*p_datas )
      goto LABEL_22;
    Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
               *p_datas,
               (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    if ( !Values )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      &v36,
      Values,
      (const MethodInfo_227BDC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    for ( i = v36;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &i,
            (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
          BillBoardGroupManager_GroupData__Reset((BillBoardGroupManager_GroupData_o *)i.fields.currentValue, cam, 0LL) )
    {
      if ( !i.fields.currentValue )
        sub_B170D4();
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &i,
      (const MethodInfo_27297E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    this->fields.phaseNow = 1;
  }
  if ( !*p_datas )
    goto LABEL_22;
  v28 = System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)*p_datas,
          groupId,
          (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
  v33 = *p_datas;
  if ( v28 )
  {
    if ( v33 )
    {
      Item = (BillBoardGroupManager_GroupData_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)*p_datas,
                                                    groupId,
                                                    (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
      if ( Item )
      {
        BillBoardGroupManager_GroupData__AddObj(Item, obj, 0LL);
        return;
      }
    }
LABEL_22:
    sub_B170D4();
  }
  v35 = (BillBoardGroupManager_GroupData_o *)sub_B170CC(BillBoardGroupManager_GroupData_TypeInfo, v29, v30, v31, v32);
  BillBoardGroupManager_GroupData___ctor(v35, cam, 0LL);
  if ( !v33 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v33,
    groupId,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v35,
    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGroupManager__GetLookVec(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        bool disableZRot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__o *datas; // x0
  float v9; // s0
  float v10; // s1
  float v11; // s2
  BillBoardGroupManager_c *v12; // x0
  float *p_targetFov; // x8
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9081 & 1) == 0 )
  {
    sub_B16FFC(&BillBoardGroupManager_TypeInfo, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__, v7);
    byte_40F9081 = 1;
  }
  value = 0LL;
  datas = this->fields.datas;
  this->fields.phaseNow = 2;
  if ( datas
    && System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)datas,
         groupId,
         &value,
         (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__) )
  {
    if ( !value )
      sub_B170D4();
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
  __int64 v2; // x1
  BillBoardGroupManager_c *v4; // x0
  float v5; // s0
  float v6; // s8
  float targetFov; // s0

  if ( (byte_40F9082 & 1) == 0 )
  {
    sub_B16FFC(&BillBoardGroupManager_TypeInfo, v2);
    byte_40F9082 = 1;
  }
  v4 = BillBoardGroupManager_TypeInfo;
  v5 = angleRad + -6.2832;
  if ( angleRad < 3.1416 )
    v5 = angleRad;
  if ( v5 >= 0.0 )
    v6 = v5;
  else
    v6 = -v5;
  if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v4 = BillBoardGroupManager_TypeInfo;
  }
  targetFov = v4->static_fields->targetFov;
  if ( v6 >= (float)(targetFov * 0.017453) )
    return 0.00001;
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    targetFov = BillBoardGroupManager_TypeInfo->static_fields->targetFov;
  }
  return cosf(v6 * (float)(90.0 / targetFov));
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  BillBoardGroupManager_c *v17; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  __int64 v19; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40F71DD & 1) == 0 )
  {
    sub_B16FFC(&BillBoardGroupManager_TypeInfo, pCam);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40F71DD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.cam = pCam;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)pCam, v7, v8, v9, v10, v11, v12);
  v17 = BillBoardGroupManager_TypeInfo;
  if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v17 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  v19 = *(_QWORD *)&static_fields->VecZero.fields.x;
  *(float *)&static_fields = static_fields->VecZero.fields.z;
  *(_QWORD *)&this->fields.resVec.fields.x = v19;
  LODWORD(this->fields.resVec.fields.z) = (_DWORD)static_fields;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objs = (struct System_Collections_Generic_List_GameObject__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objs,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


void __fastcall BillBoardGroupManager_GroupData__AddObj(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objs; // x0

  if ( (byte_40F71DF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    byte_40F71DF = 1;
  }
  objs = this->fields.objs;
  if ( !objs )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objs,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGroupManager_GroupData__GetLookVec(
        BillBoardGroupManager_GroupData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *cam; // x20
  float y; // s8
  float x; // s9
  float z; // s10
  BillBoardGroupManager_c *v14; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objs; // x0
  Il2CppObject *current; // x20
  UnityEngine_Transform_o *transform; // x0
  float v18; // s0
  float v19; // s1
  float v20; // s2
  UnityEngine_Component_o *v21; // x0
  float v22; // s8
  float v23; // s9
  float v24; // s10
  UnityEngine_Transform_o *v25; // x0
  float v26; // s11
  float v27; // s12
  float v28; // s13
  float v29; // s2
  float v30; // s0
  float v31; // s1
  UnityEngine_Component_o *v32; // x0
  float v33; // s8
  UnityEngine_Transform_o *v34; // x0
  float v35; // s0
  float Magnifier; // s0
  float v37; // s1
  struct System_Collections_Generic_List_GameObject__o *v38; // x0
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

  if ( (byte_40F71E0 & 1) == 0 )
  {
    sub_B16FFC(&BillBoardGroupManager_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F71E0 = 1;
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
    v14 = BillBoardGroupManager_TypeInfo;
    if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v14 = BillBoardGroupManager_TypeInfo;
    }
    v46.fields.x = x;
    v46.fields.y = y;
    v46.fields.z = z;
    if ( UnityEngine_Vector3__op_Equality(v46, v14->static_fields->VecZero, 0LL) )
    {
      objs = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objs;
      if ( !objs )
        goto LABEL_38;
      if ( objs->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v44,
          objs,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v45 = v44;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v45,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v45.fields.current;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL) )
          {
            if ( !current )
              sub_B170D4();
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0LL);
            if ( !transform )
              sub_B170D4();
            *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Transform__get_position(transform, 0LL);
            v21 = (UnityEngine_Component_o *)this->fields.cam;
            if ( !v21 )
              sub_B170D4();
            v22 = v18;
            v23 = v19;
            v24 = v20;
            v25 = UnityEngine_Component__get_transform(v21, 0LL);
            if ( !v25 )
              sub_B170D4();
            position = UnityEngine_Transform__get_position(v25, 0LL);
            v26 = position.fields.x;
            v27 = position.fields.y;
            v28 = position.fields.z;
            if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
            }
            v48.fields.x = v22;
            v48.fields.y = v23;
            v48.fields.z = v24;
            v51.fields.x = v26;
            v51.fields.y = v27;
            v51.fields.z = v28;
            *(UnityEngine_Vector3_o *)(&v29 - 2) = BillBoardGroupManager__GetNormalizedLookAt(v48, v51, 0LL);
            v43 = v30;
            v42 = v31;
            v32 = (UnityEngine_Component_o *)this->fields.cam;
            if ( !v32 )
              sub_B170D4();
            v33 = v29;
            v34 = UnityEngine_Component__get_transform(v32, 0LL);
            if ( !v34 )
              sub_B170D4();
            forward = UnityEngine_Transform__get_forward(v34, 0LL);
            v52.fields.z = -v33;
            v52.fields.x = -v43;
            v52.fields.y = -v42;
            v35 = UnityEngine_Vector3__Angle(forward, v52, 0LL) * 0.017453;
            Magnifier = BillBoardGroupManager__GetMagnifier(v35, 0LL);
            v37 = (float)(v33 * Magnifier) + this->fields.resVec.fields.z;
            *(float32x2_t *)&this->fields.resVec.fields.x = vadd_f32(
                                                              vmul_n_f32(
                                                                (float32x2_t)__PAIR64__(LODWORD(v42), LODWORD(v43)),
                                                                Magnifier),
                                                              *(float32x2_t *)&this->fields.resVec.fields.x);
            this->fields.resVec.fields.z = v37;
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v45,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        v38 = this->fields.objs;
        if ( v38 )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)v38,
            (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
          goto LABEL_31;
        }
LABEL_38:
        sub_B170D4();
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BillBoardGroupManager_c *v10; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  __int64 v12; // x9

  if ( (byte_40F71DE & 1) == 0 )
  {
    sub_B16FFC(&BillBoardGroupManager_TypeInfo, pCam);
    byte_40F71DE = 1;
  }
  this->fields.cam = pCam;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)pCam,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = BillBoardGroupManager_TypeInfo;
  if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v10 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  v12 = *(_QWORD *)&static_fields->VecZero.fields.x;
  *(float *)&static_fields = static_fields->VecZero.fields.z;
  *(_QWORD *)&this->fields.resVec.fields.x = v12;
  LODWORD(this->fields.resVec.fields.z) = (_DWORD)static_fields;
}