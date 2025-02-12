void __fastcall BillBoardGroupManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v3; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v5; // x8
  struct BillBoardGroupManager_StaticFields *v6; // x9
  float v7; // s1

  if ( (byte_4BC6ED0 & 1) == 0 )
  {
    sub_1C1ABD4(&BillBoardGroupManager_TypeInfo, v1);
    byte_4BC6ED0 = 1;
  }
  static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  static_fields->targetFov = 40.0;
  if ( !byte_4BC2141 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v1);
    byte_4BC2141 = 1;
    static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  }
  v3 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v3->zeroVector.fields.z;
  *(_QWORD *)&static_fields->VecZero.fields.x = *(_QWORD *)&v3->zeroVector.fields.x;
  static_fields->VecZero.fields.z = z;
  if ( !byte_4BC4520 )
  {
    sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v1);
    byte_4BC4520 = 1;
  }
  v5 = UnityEngine_Vector3_TypeInfo->static_fields;
  v6 = BillBoardGroupManager_TypeInfo->static_fields;
  v7 = v5->backVector.fields.z;
  *(_QWORD *)&v6->VecBack.fields.x = *(_QWORD *)&v5->backVector.fields.x;
  v6->VecBack.fields.z = v7;
}


void __fastcall BillBoardGroupManager___ctor(BillBoardGroupManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BC6ECF & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__, method);
    byte_4BC6ECF = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_387ACC0 *)Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
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
  System_Collections_Generic_Dictionary_int__object__o **p_datas; // x23
  System_Collections_Generic_Dictionary_int__object__o *v20; // x24
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_Dictionary_int__object__o *Values; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x2
  System_Collections_Generic_Dictionary_int__object__o *v30; // x22
  const MethodInfo *v31; // x2
  BillBoardGroupManager_GroupData_o *v32; // x20
  const MethodInfo *v33; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BC6ECC & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__,
      *(_QWORD *)&groupId);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__, v12);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo, v13);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__,
      v14);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__,
      v15);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__get_Current__,
      v16);
    sub_1C1ABD4(&BillBoardGroupManager_GroupData_TypeInfo, v17);
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__,
      v18);
    byte_4BC6ECC = 1;
  }
  memset(&i, 0, sizeof(i));
  p_datas = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.datas;
  if ( !this->fields.datas )
  {
    v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v20,
      (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    *p_datas = v20;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.datas, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  }
  if ( this->fields.phaseNow != 1 )
  {
    Values = *p_datas;
    if ( !*p_datas )
      goto LABEL_22;
    Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                       Values,
                                                                       (const MethodInfo_32A210C *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    if ( !Values )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v34,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Values,
      (const MethodInfo_396B37C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    for ( i = v34;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &i,
            (const MethodInfo_33F2710 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
          BillBoardGroupManager_GroupData__Reset((BillBoardGroupManager_GroupData_o *)i.fields._currentValue, cam, v29) )
    {
      if ( !i.fields._currentValue )
        sub_1C1AE30(0LL, v28);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &i,
      (const MethodInfo_33F270C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    this->fields.phaseNow = 1;
  }
  Values = *p_datas;
  if ( !*p_datas )
    goto LABEL_22;
  Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                     Values,
                                                                     groupId,
                                                                     (const MethodInfo_32A24F0 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
  v30 = *p_datas;
  if ( ((unsigned __int8)Values & 1) != 0 )
  {
    if ( v30 )
    {
      Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         *p_datas,
                                                                         groupId,
                                                                         (const MethodInfo_32A225C *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
      if ( Values )
      {
        BillBoardGroupManager_GroupData__AddObj((BillBoardGroupManager_GroupData_o *)Values, obj, v31);
        return;
      }
    }
LABEL_22:
    sub_1C1AE30(Values, *(_QWORD *)&groupId);
  }
  v32 = (BillBoardGroupManager_GroupData_o *)sub_1C1AE20(BillBoardGroupManager_GroupData_TypeInfo);
  BillBoardGroupManager_GroupData___ctor(v32, cam, v33);
  if ( !v30 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__object___Add(
    v30,
    groupId,
    (Il2CppObject *)v32,
    (const MethodInfo_32A22FC *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
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
  const MethodInfo *v9; // x1
  float v10; // s0
  float v11; // s1
  float v12; // s2
  BillBoardGroupManager_c *v13; // x0
  float *p_targetFov; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BC6ECD & 1) == 0 )
  {
    sub_1C1ABD4(&BillBoardGroupManager_TypeInfo, *(_QWORD *)&groupId);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__, v7);
    byte_4BC6ECD = 1;
  }
  value = 0LL;
  datas = this->fields.datas;
  this->fields.phaseNow = 2;
  if ( datas
    && System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)datas,
         groupId,
         &value,
         (const MethodInfo_32A3A88 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__) )
  {
    if ( !value )
      sub_1C1AE30(0LL, v9);
    *(UnityEngine_Vector3_o *)&v10 = BillBoardGroupManager_GroupData__GetLookVec(
                                       (BillBoardGroupManager_GroupData_o *)value,
                                       v9);
    if ( disableZRot )
      v11 = 0.0;
  }
  else
  {
    v13 = BillBoardGroupManager_TypeInfo;
    if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v13 = BillBoardGroupManager_TypeInfo;
    }
    p_targetFov = &v13->static_fields->targetFov;
    v10 = p_targetFov[1];
    v11 = p_targetFov[2];
    v12 = p_targetFov[3];
  }
  result.fields.z = v12;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


float __fastcall BillBoardGroupManager__GetMagnifier(float angleRad, const MethodInfo *method)
{
  __int64 v2; // x1
  BillBoardGroupManager_c *v4; // x0
  float v5; // s0
  float v6; // s8
  float targetFov; // s0

  if ( (byte_4BC6ECE & 1) == 0 )
  {
    sub_1C1ABD4(&BillBoardGroupManager_TypeInfo, v2);
    byte_4BC6ECE = 1;
  }
  v4 = BillBoardGroupManager_TypeInfo;
  v5 = angleRad + -6.2832;
  if ( angleRad < 3.1416 )
    v5 = angleRad;
  if ( v5 >= 0.0 )
    v6 = v5;
  else
    v6 = -v5;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v4 = BillBoardGroupManager_TypeInfo;
  }
  targetFov = v4->static_fields->targetFov;
  if ( v6 >= (float)(targetFov * 0.017453) )
    return 0.00001;
  if ( !v4->_2.cctor_finished )
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
  __int64 v3; // x1
  float z; // s8
  float y; // s9
  float x; // s11
  float v7; // s10
  float v8; // s12
  float v9; // s13
  float v10; // s11
  float v11; // s9
  float v12; // s8
  float v13; // s2
  float v14; // s0
  float v15; // s1
  float v16; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = toPos.fields.z;
  y = toPos.fields.y;
  x = toPos.fields.x;
  v7 = fromPos.fields.z;
  v8 = fromPos.fields.y;
  v9 = fromPos.fields.x;
  if ( !byte_4BC2144 )
  {
    sub_1C1ABD4(&System_Math_TypeInfo, v3);
    byte_4BC2144 = 1;
  }
  v10 = x - v9;
  v11 = y - v8;
  v12 = z - v7;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = sqrtf((float)(v12 * v12) + (float)((float)(v10 * v10) + (float)(v11 * v11)));
  if ( v13 <= 0.00001 )
  {
    if ( !byte_4BC2141 )
    {
      sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v3);
      byte_4BC2141 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v14 = static_fields->zeroVector.fields.x;
    v15 = static_fields->zeroVector.fields.y;
    v16 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v14 = v10 / v13;
    v15 = v11 / v13;
    v16 = v12 / v13;
  }
  result.fields.z = v16;
  result.fields.y = v15;
  result.fields.x = v14;
  return result;
}


void __fastcall BillBoardGroupManager_GroupData___ctor(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  BillBoardGroupManager_c *v13; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v16; // x8
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BC6ED1 & 1) == 0 )
  {
    sub_1C1ABD4(&BillBoardGroupManager_TypeInfo, pCam);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1C1ABD4(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_4BC6ED1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.cam = pCam;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)pCam, v7, v8, v9, v10, v11, v12);
  v13 = BillBoardGroupManager_TypeInfo;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v13 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  z = static_fields->VecZero.fields.z;
  v16 = *(_QWORD *)&static_fields->VecZero.fields.x;
  this->fields.resVec.fields.z = z;
  *(_QWORD *)&this->fields.resVec.fields.x = v16;
  v17 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objs = (struct System_Collections_Generic_List_GameObject__o *)v17;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.objs, (int64_t)v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall BillBoardGroupManager_GroupData__AddObj(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *objs; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4BC6ED3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    byte_4BC6ED3 = 1;
  }
  objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
  if ( !objs
    || (items = objs->fields._items,
        v12 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++objs->fields._version,
        !items) )
  {
    sub_1C1AE30(objs, obj);
  }
  size = objs->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      objs,
      (Il2CppObject *)obj,
      *(const MethodInfo_363C890 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    objs->fields._size = size + 1;
    v14[4] = (Il2CppClass *)obj;
    sub_1C1AB78((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)obj, (int64_t)method, v3, v4, v5, v6, v7);
  }
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
  __int64 v11; // x1
  float x; // s8
  float32x2_t v13; // d9
  BillBoardGroupManager_c *v14; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v16; // d1
  unsigned __int64 v17; // d1
  System_Collections_Generic_List_object__o *objs; // x0
  Il2CppObject *current; // x21
  _BOOL8 v20; // x0
  __int64 v21; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  float v25; // s0
  float v26; // s1
  float v27; // s2
  UnityEngine_Component_o *v28; // x0
  float v29; // s8
  float v30; // s9
  float v31; // s10
  UnityEngine_Transform_o *v32; // x0
  __int64 v33; // x1
  BillBoardGroupManager_c *v34; // x0
  float v35; // s11
  float y; // s12
  float z; // s13
  __int64 v38; // x1
  float v39; // s2
  float v40; // s0
  float v41; // s1
  UnityEngine_Component_o *v42; // x0
  float v43; // s8
  UnityEngine_Transform_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  float v47; // s11
  float v48; // s9
  float v49; // s10
  System_Math_c *v50; // x0
  float v51; // s0
  float v52; // s1
  float v53; // s0
  float v54; // s1
  float v55; // s9
  float v56; // s0
  float Magnifier; // s0
  float v58; // s1
  struct System_Collections_Generic_List_GameObject__o *v59; // x8
  int32_t size; // w2
  int v61; // w9
  float v62; // s0
  float v63; // s1
  float v64; // s2
  float v65; // [xsp+0h] [xbp-F0h]
  float v66; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+40h] [xbp-B0h] BYREF
  float v69; // [xsp+ACh] [xbp-44h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BC6ED4 & 1) == 0 )
  {
    sub_1C1ABD4(&BillBoardGroupManager_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    byte_4BC6ED4 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  cam = (UnityEngine_Object_o *)this->fields.cam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cam, 0LL, 0LL) )
  {
    x = this->fields.resVec.fields.x;
    v13.n64_u64[0] = *(unsigned __int64 *)&this->fields.resVec.fields.y;
    v14 = BillBoardGroupManager_TypeInfo;
    if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v14 = BillBoardGroupManager_TypeInfo;
    }
    static_fields = (float32x2_t *)v14->static_fields;
    v16.n64_u64[0] = vsub_f32(v13, static_fields[1]).n64_u64[0];
    v17 = vmul_f32(v16, v16).n64_u64[0];
    if ( (float)(*((float *)&v17 + 1)
               + (float)((float)((float)(x - static_fields->n64_f32[1]) * (float)(x - static_fields->n64_f32[1]))
                       + *(float *)&v17)) < 1.0e-10 )
    {
      objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
      if ( !objs )
        goto LABEL_46;
      if ( objs->fields._size < 1 )
        goto LABEL_39;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v67,
        objs,
        (const MethodInfo_363D388 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v69 = 57.296;
      v68 = v67;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v68,
                (const MethodInfo_33CE4F8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v68.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
        if ( !v20 )
        {
          if ( !current )
            sub_1C1AE30(v20, v21);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0LL);
          if ( !transform )
            sub_1C1AE30(0LL, v23);
          *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_position(transform, 0LL);
          v28 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v28 )
            sub_1C1AE30(0LL, v24);
          v29 = v25;
          v30 = v26;
          v31 = v27;
          v32 = UnityEngine_Component__get_transform(v28, 0LL);
          if ( !v32 )
            sub_1C1AE30(0LL, v33);
          position = UnityEngine_Transform__get_position(v32, 0LL);
          v34 = BillBoardGroupManager_TypeInfo;
          v35 = position.fields.x;
          y = position.fields.y;
          z = position.fields.z;
          if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
          v71.fields.x = v29;
          v71.fields.y = v30;
          v71.fields.z = v31;
          v74.fields.x = v35;
          v74.fields.y = y;
          v74.fields.z = z;
          *(UnityEngine_Vector3_o *)(&v39 - 2) = BillBoardGroupManager__GetNormalizedLookAt(
                                                   v71,
                                                   v74,
                                                   (const MethodInfo *)v34);
          v66 = v40;
          v65 = v41;
          v42 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v42 )
            sub_1C1AE30(0LL, v38);
          v43 = v39;
          v44 = UnityEngine_Component__get_transform(v42, 0LL);
          if ( !v44 )
            sub_1C1AE30(0LL, v45);
          forward = UnityEngine_Transform__get_forward(v44, 0LL);
          v47 = forward.fields.x;
          v48 = forward.fields.y;
          v49 = forward.fields.z;
          if ( !byte_4BC4528 )
          {
            sub_1C1ABD4(&System_Math_TypeInfo, v46);
            byte_4BC4528 = 1;
          }
          v50 = System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v51 = sqrtf(
                  (float)((float)(v43 * v43) + (float)((float)(v66 * v66) + (float)(v65 * v65)))
                * (float)((float)(v49 * v49) + (float)((float)(v47 * v47) + (float)(v48 * v48))));
          v52 = 0.0;
          if ( v51 >= 1.0e-15 )
          {
            v53 = (float)((float)((float)(v48 * (float)-v65) - (float)(v66 * v47)) - (float)(v43 * v49)) / v51;
            v54 = fminf(v53, 1.0);
            if ( v53 < -1.0 )
              v55 = -1.0;
            else
              v55 = v54;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v56 = acos(v55);
            v52 = v56 * v69;
          }
          Magnifier = BillBoardGroupManager__GetMagnifier(v52 * 0.017453, (const MethodInfo *)v50);
          v58 = (float)(v43 * Magnifier) + this->fields.resVec.fields.z;
          *(float32x2_t *)&this->fields.resVec.fields.x = vadd_f32(
                                                            vmul_n_f32(
                                                              (float32x2_t)__PAIR64__(LODWORD(v65), LODWORD(v66)),
                                                              Magnifier),
                                                            *(float32x2_t *)&this->fields.resVec.fields.x);
          this->fields.resVec.fields.z = v58;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v68,
        (const MethodInfo_33CE4F4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      v59 = this->fields.objs;
      if ( !v59 )
LABEL_46:
        sub_1C1AE30(objs, v11);
      size = v59->fields._size;
      v61 = v59->fields._version + 1;
      v59->fields._size = 0;
      v59->fields._version = v61;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v59->fields._items, 0, size, 0LL);
    }
  }
LABEL_39:
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BillBoardGroupManager_c *v10; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v13; // x8

  if ( (byte_4BC6ED2 & 1) == 0 )
  {
    sub_1C1ABD4(&BillBoardGroupManager_TypeInfo, pCam);
    byte_4BC6ED2 = 1;
  }
  this->fields.cam = pCam;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)pCam, (int64_t)method, v3, v4, v5, v6, v7);
  v10 = BillBoardGroupManager_TypeInfo;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v10 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v10->static_fields;
  z = static_fields->VecZero.fields.z;
  v13 = *(_QWORD *)&static_fields->VecZero.fields.x;
  this->fields.resVec.fields.z = z;
  *(_QWORD *)&this->fields.resVec.fields.x = v13;
}