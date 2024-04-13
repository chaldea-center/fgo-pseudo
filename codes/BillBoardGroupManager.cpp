void __fastcall BillBoardGroupManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7E5F & 1) == 0 )
  {
    sub_B5D5C4(&BillBoardGroupManager_TypeInfo, v1, v2, v3);
    byte_42E7E5F = 1;
  }
  BillBoardGroupManager_TypeInfo->static_fields->targetFov = 40.0;
  BillBoardGroupManager_TypeInfo->static_fields->VecZero = UnityEngine_Vector3__get_zero(0LL);
  BillBoardGroupManager_TypeInfo->static_fields->VecBack = UnityEngine_Vector3__get_back(0LL);
}


void __fastcall BillBoardGroupManager___ctor(BillBoardGroupManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7E5E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E7E5E = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BillBoardGroupManager__AddData(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        UnityEngine_Camera_o *cam,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **p_datas; // x23
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v40; // x24
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *Values; // x0
  __int64 v48; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v49; // x22
  BillBoardGroupManager_GroupData_o *v50; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v51; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E7E5B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__,
      groupId,
      (_DWORD)cam,
      obj);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__,
      v12,
      v13,
      v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__,
      v15,
      v16,
      v17);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__,
      v18,
      v19,
      v20);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo, v21, v22, v23);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__,
      v24,
      v25,
      v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__,
      v27,
      v28,
      v29);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__get_Current__,
      v30,
      v31,
      v32);
    sub_B5D5C4(&BillBoardGroupManager_GroupData_TypeInfo, v33, v34, v35);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__,
      v36,
      v37,
      v38);
    byte_42E7E5B = 1;
  }
  memset(&i, 0, sizeof(i));
  p_datas = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)&this->fields.datas;
  if ( !this->fields.datas )
  {
    v40 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v40,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    *p_datas = v40;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.datas,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( this->fields.phaseNow != 1 )
  {
    Values = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)*p_datas;
    if ( !*p_datas )
      goto LABEL_22;
    Values = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                                                                                           Values,
                                                                                           (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    if ( !Values )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
      &v51,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Values,
      (const MethodInfo_23B95BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    for ( i = v51;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &i,
            (const MethodInfo_28A2E24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
          BillBoardGroupManager_GroupData__Reset((BillBoardGroupManager_GroupData_o *)i.fields.currentValue, cam, 0LL) )
    {
      if ( !i.fields.currentValue )
        sub_B5D69C(0LL, v48);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
      &i,
      (const MethodInfo_28A2E20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    this->fields.phaseNow = 1;
  }
  Values = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)*p_datas;
  if ( !*p_datas )
    goto LABEL_22;
  Values = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                                                                         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)Values,
                                                                                         groupId,
                                                                                         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
  v49 = *p_datas;
  if ( ((unsigned __int8)Values & 1) != 0 )
  {
    if ( v49 )
    {
      Values = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                                             *p_datas,
                                                                                             groupId,
                                                                                             (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
      if ( Values )
      {
        BillBoardGroupManager_GroupData__AddObj((BillBoardGroupManager_GroupData_o *)Values, obj, 0LL);
        return;
      }
    }
LABEL_22:
    sub_B5D69C(Values, *(_QWORD *)&groupId);
  }
  v50 = (BillBoardGroupManager_GroupData_o *)sub_B5D694(BillBoardGroupManager_GroupData_TypeInfo);
  BillBoardGroupManager_GroupData___ctor(v50, cam, 0LL);
  if ( !v49 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
    v49,
    groupId,
    (WarBoardEvalValueSquare_EvalValueSquare_o *)v50,
    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGroupManager__GetLookVec(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        bool disableZRot,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__o *datas; // x0
  __int64 v11; // x1
  float v12; // s0
  float v13; // s1
  float v14; // s2
  BillBoardGroupManager_c *v15; // x0
  float *p_targetFov; // x8
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7E5C & 1) == 0 )
  {
    sub_B5D5C4(&BillBoardGroupManager_TypeInfo, groupId, disableZRot, method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__,
      v7,
      v8,
      v9);
    byte_42E7E5C = 1;
  }
  value = 0LL;
  datas = this->fields.datas;
  this->fields.phaseNow = 2;
  if ( datas
    && System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)datas,
         groupId,
         &value,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__) )
  {
    if ( !value )
      sub_B5D69C(0LL, v11);
    *(UnityEngine_Vector3_o *)&v12 = BillBoardGroupManager_GroupData__GetLookVec(
                                       (BillBoardGroupManager_GroupData_o *)value,
                                       0LL);
    if ( disableZRot )
      v13 = 0.0;
  }
  else
  {
    v15 = BillBoardGroupManager_TypeInfo;
    if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v15 = BillBoardGroupManager_TypeInfo;
    }
    p_targetFov = &v15->static_fields->targetFov;
    v12 = p_targetFov[1];
    v13 = p_targetFov[2];
    v14 = p_targetFov[3];
  }
  result.fields.z = v14;
  result.fields.y = v13;
  result.fields.x = v12;
  return result;
}


float __fastcall BillBoardGroupManager__GetMagnifier(float angleRad, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  BillBoardGroupManager_c *v6; // x0
  float v7; // s0
  float v8; // s8
  float targetFov; // s0

  if ( (byte_42E7E5D & 1) == 0 )
  {
    sub_B5D5C4(&BillBoardGroupManager_TypeInfo, v2, v3, v4);
    byte_42E7E5D = 1;
  }
  v6 = BillBoardGroupManager_TypeInfo;
  v7 = angleRad + -6.2832;
  if ( angleRad < 3.1416 )
    v7 = angleRad;
  if ( v7 >= 0.0 )
    v8 = v7;
  else
    v8 = -v7;
  if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v6 = BillBoardGroupManager_TypeInfo;
  }
  targetFov = v6->static_fields->targetFov;
  if ( v8 >= (float)(targetFov * 0.017453) )
    return 0.00001;
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    targetFov = BillBoardGroupManager_TypeInfo->static_fields->targetFov;
  }
  return cosf(v8 * (float)(90.0 / targetFov));
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  BillBoardGroupManager_c *v12; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  __int64 v14; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20

  if ( (byte_42E5E00 & 1) == 0 )
  {
    sub_B5D5C4(&BillBoardGroupManager_TypeInfo, (_DWORD)pCam, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v9, v10, v11);
    byte_42E5E00 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.cam = pCam;
  sub_B5D560(&this->fields);
  v12 = BillBoardGroupManager_TypeInfo;
  if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v12 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  v14 = *(_QWORD *)&static_fields->VecZero.fields.x;
  *(float *)&static_fields = static_fields->VecZero.fields.z;
  *(_QWORD *)&this->fields.resVec.fields.x = v14;
  LODWORD(this->fields.resVec.fields.z) = (_DWORD)static_fields;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objs = (struct System_Collections_Generic_List_GameObject__o *)v15;
  sub_B5D560(&this->fields.objs);
}


void __fastcall BillBoardGroupManager_GroupData__AddObj(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_GameObject__o *objs; // x0

  if ( (byte_42E5E02 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, (_DWORD)obj, (_DWORD)method, v3);
    byte_42E5E02 = 1;
  }
  objs = this->fields.objs;
  if ( !objs )
    sub_B5D69C(0LL, obj);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objs,
    (EventMissionProgressRequest_Argument_ProgressData_o *)obj,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BillBoardGroupManager_GroupData__GetLookVec(
        BillBoardGroupManager_GroupData_o *this,
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
  UnityEngine_Object_o *cam; // x20
  float y; // s8
  float x; // s9
  float z; // s10
  BillBoardGroupManager_c *v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *objs; // x0
  Il2CppObject *current; // x20
  _BOOL8 v34; // x0
  __int64 v35; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v37; // x1
  __int64 v38; // x1
  float v39; // s0
  float v40; // s1
  float v41; // s2
  UnityEngine_Component_o *v42; // x0
  float v43; // s8
  float v44; // s9
  float v45; // s10
  UnityEngine_Transform_o *v46; // x0
  __int64 v47; // x1
  float v48; // s11
  float v49; // s12
  float v50; // s13
  __int64 v51; // x1
  float v52; // s2
  float v53; // s0
  float v54; // s1
  UnityEngine_Component_o *v55; // x0
  float v56; // s8
  UnityEngine_Transform_o *v57; // x0
  __int64 v58; // x1
  float v59; // s0
  float Magnifier; // s0
  float v61; // s1
  float v62; // s0
  float v63; // s1
  float v64; // s2
  float v65; // [xsp+0h] [xbp-C0h]
  float v66; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+40h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v75; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E5E03 & 1) == 0 )
  {
    sub_B5D5C4(&BillBoardGroupManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    byte_42E5E03 = 1;
  }
  memset(&v68, 0, sizeof(v68));
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
    v30 = BillBoardGroupManager_TypeInfo;
    if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v30 = BillBoardGroupManager_TypeInfo;
    }
    v69.fields.x = x;
    v69.fields.y = y;
    v69.fields.z = z;
    if ( UnityEngine_Vector3__op_Equality(v69, v30->static_fields->VecZero, 0LL) )
    {
      objs = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objs;
      if ( !objs )
        goto LABEL_38;
      if ( objs->fields._size >= 1 )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v67,
          objs,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        v68 = v67;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v68,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          current = v68.fields.current;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v34 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
          if ( !v34 )
          {
            if ( !current )
              sub_B5D69C(v34, v35);
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0LL);
            if ( !transform )
              sub_B5D69C(0LL, v37);
            *(UnityEngine_Vector3_o *)&v39 = UnityEngine_Transform__get_position(transform, 0LL);
            v42 = (UnityEngine_Component_o *)this->fields.cam;
            if ( !v42 )
              sub_B5D69C(0LL, v38);
            v43 = v39;
            v44 = v40;
            v45 = v41;
            v46 = UnityEngine_Component__get_transform(v42, 0LL);
            if ( !v46 )
              sub_B5D69C(0LL, v47);
            position = UnityEngine_Transform__get_position(v46, 0LL);
            v48 = position.fields.x;
            v49 = position.fields.y;
            v50 = position.fields.z;
            if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
            }
            v71.fields.x = v43;
            v71.fields.y = v44;
            v71.fields.z = v45;
            v74.fields.x = v48;
            v74.fields.y = v49;
            v74.fields.z = v50;
            *(UnityEngine_Vector3_o *)(&v52 - 2) = BillBoardGroupManager__GetNormalizedLookAt(v71, v74, 0LL);
            v66 = v53;
            v65 = v54;
            v55 = (UnityEngine_Component_o *)this->fields.cam;
            if ( !v55 )
              sub_B5D69C(0LL, v51);
            v56 = v52;
            v57 = UnityEngine_Component__get_transform(v55, 0LL);
            if ( !v57 )
              sub_B5D69C(0LL, v58);
            forward = UnityEngine_Transform__get_forward(v57, 0LL);
            v75.fields.z = -v56;
            v75.fields.x = -v66;
            v75.fields.y = -v65;
            v59 = UnityEngine_Vector3__Angle(forward, v75, 0LL) * 0.017453;
            Magnifier = BillBoardGroupManager__GetMagnifier(v59, 0LL);
            v61 = (float)(v56 * Magnifier) + this->fields.resVec.fields.z;
            *(float32x2_t *)&this->fields.resVec.fields.x = vadd_f32(
                                                              vmul_n_f32(
                                                                (float32x2_t)__PAIR64__(LODWORD(v65), LODWORD(v66)),
                                                                Magnifier),
                                                              *(float32x2_t *)&this->fields.resVec.fields.x);
            this->fields.resVec.fields.z = v61;
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v68,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        objs = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.objs;
        if ( objs )
        {
          System_Collections_Generic_List_XWeaponTrail_Element___Clear(
            (System_Collections_Generic_List_XWeaponTrail_Element__o *)objs,
            (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
          goto LABEL_31;
        }
LABEL_38:
        sub_B5D69C(objs, v31);
      }
    }
  }
LABEL_31:
  v62 = this->fields.resVec.fields.x;
  v63 = this->fields.resVec.fields.y;
  v64 = this->fields.resVec.fields.z;
  result.fields.z = v64;
  result.fields.y = v63;
  result.fields.x = v62;
  return result;
}


void __fastcall BillBoardGroupManager_GroupData__Reset(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BillBoardGroupManager_c *v6; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  __int64 v8; // x9

  if ( (byte_42E5E01 & 1) == 0 )
  {
    sub_B5D5C4(&BillBoardGroupManager_TypeInfo, (_DWORD)pCam, (_DWORD)method, v3);
    byte_42E5E01 = 1;
  }
  this->fields.cam = pCam;
  sub_B5D560(&this->fields);
  v6 = BillBoardGroupManager_TypeInfo;
  if ( (BYTE3(BillBoardGroupManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v6 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  v8 = *(_QWORD *)&static_fields->VecZero.fields.x;
  *(float *)&static_fields = static_fields->VecZero.fields.z;
  *(_QWORD *)&this->fields.resVec.fields.x = v8;
  LODWORD(this->fields.resVec.fields.z) = (_DWORD)static_fields;
}