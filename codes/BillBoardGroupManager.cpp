void BillBoardGroupManager___cctor(const MethodInfo *method)
{
  int v1; // w9
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  int v3; // w10
  struct UnityEngine_Vector3_StaticFields *v4; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  struct BillBoardGroupManager_StaticFields *v7; // x9
  float v8; // s1

  if ( (byte_596FB4C & 1) == 0 )
  {
    sub_2213A60(&BillBoardGroupManager_TypeInfo);
    byte_596FB4C = 1;
  }
  v1 = (unsigned __int8)byte_5969AE0;
  static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  static_fields->targetFov = 40.0;
  if ( !v1 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
    static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  }
  v3 = (unsigned __int8)byte_596CDEB;
  v4 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v4->zeroVector.fields.z;
  *(_QWORD *)&static_fields->VecZero.fields.x = *(_QWORD *)&v4->zeroVector.fields.x;
  static_fields->VecZero.fields.z = z;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_596CDEB = 1;
  }
  v6 = UnityEngine_Vector3_TypeInfo->static_fields;
  v7 = BillBoardGroupManager_TypeInfo->static_fields;
  v8 = v6->backVector.fields.z;
  *(_QWORD *)&v7->VecBack.fields.x = *(_QWORD *)&v6->backVector.fields.x;
  v7->VecBack.fields.z = v8;
}


void BillBoardGroupManager___ctor(BillBoardGroupManager_o *this, const MethodInfo *method)
{
  if ( (byte_596FB4B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
    byte_596FB4B = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void BillBoardGroupManager__AddData(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        UnityEngine_Camera_o *cam,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *datas; // x0
  System_Collections_Generic_Dictionary_int__object__o **p_datas; // x23
  System_Collections_Generic_Dictionary_int__object__o *v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_Dictionary_int__object__o *v20; // x22
  const MethodInfo *v21; // x2
  BillBoardGroupManager_GroupData_o *v22; // x20
  const MethodInfo *v23; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v24; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596FB48 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__get_Current__);
    sub_2213A60(&BillBoardGroupManager_GroupData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    byte_596FB48 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  p_datas = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.datas;
  datas = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.datas;
  if ( !datas )
  {
    v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v11,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    *p_datas = v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.datas, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    datas = *p_datas;
  }
  if ( this->fields.phaseNow != 1 )
  {
    if ( !datas )
      goto LABEL_22;
    datas = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                      datas,
                                                                      (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    if ( !datas )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v24,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)datas,
      (const MethodInfo_3CC3590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              &v24,
              (const MethodInfo_41591F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__) )
    {
      if ( !v24.fields._currentValue )
        sub_2213CDC(0, v18);
      BillBoardGroupManager_GroupData__Reset((BillBoardGroupManager_GroupData_o *)v24.fields._currentValue, cam, v19);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &v24,
      (const MethodInfo_41591F4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    datas = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.datas;
    this->fields.phaseNow = 1;
  }
  if ( !datas )
    goto LABEL_22;
  datas = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                    datas,
                                                                    groupId,
                                                                    (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
  v20 = *p_datas;
  if ( ((unsigned __int8)datas & 1) != 0 )
  {
    if ( v20 )
    {
      datas = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                        *p_datas,
                                                                        groupId,
                                                                        (const MethodInfo_3F9C410 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
      if ( datas )
      {
        BillBoardGroupManager_GroupData__AddObj((BillBoardGroupManager_GroupData_o *)datas, obj, v21);
        return;
      }
    }
LABEL_22:
    sub_2213CDC(datas, *(_QWORD *)&groupId);
  }
  v22 = (BillBoardGroupManager_GroupData_o *)sub_2213CCC(BillBoardGroupManager_GroupData_TypeInfo);
  BillBoardGroupManager_GroupData___ctor(v22, cam, v23);
  if ( !v20 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__object___Add(
    v20,
    groupId,
    (Il2CppObject *)v22,
    (const MethodInfo_3F9C4B0 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o BillBoardGroupManager__GetLookVec(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        bool disableZRot,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__o *datas; // x0
  BillBoardGroupManager_c *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596FB49 & 1) == 0 )
  {
    sub_2213A60(&BillBoardGroupManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__);
    byte_596FB49 = 1;
  }
  datas = this->fields.datas;
  value = 0;
  this->fields.phaseNow = 2;
  if ( datas
    && System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)datas,
         groupId,
         &value,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__) )
  {
    if ( !value )
      sub_2213CDC(0, *(_QWORD *)&groupId);
    result = BillBoardGroupManager_GroupData__GetLookVec(
               (BillBoardGroupManager_GroupData_o *)value,
               *(const MethodInfo **)&groupId);
    if ( disableZRot )
      result.fields.y = 0.0;
  }
  else
  {
    v8 = BillBoardGroupManager_TypeInfo;
    if ( !*(&BillBoardGroupManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, *(_QWORD *)&groupId, disableZRot);
      v8 = BillBoardGroupManager_TypeInfo;
    }
    return v8->static_fields->VecZero;
  }
  return result;
}


float BillBoardGroupManager__GetMagnifier(float angleRad, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  BillBoardGroupManager_c *v5; // x0
  float v6; // s0
  float v7; // s8
  float targetFov; // s0

  if ( (byte_596FB4A & 1) == 0 )
  {
    sub_2213A60(&BillBoardGroupManager_TypeInfo);
    byte_596FB4A = 1;
  }
  v5 = BillBoardGroupManager_TypeInfo;
  v6 = angleRad + -6.2832;
  if ( angleRad < 3.1416 )
    v6 = angleRad;
  if ( v6 >= 0.0 )
    v7 = v6;
  else
    v7 = -v6;
  if ( !*(&BillBoardGroupManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, v2, v3);
    v5 = BillBoardGroupManager_TypeInfo;
  }
  targetFov = v5->static_fields->targetFov;
  if ( v7 >= (float)(targetFov * 0.017453) )
    return 0.00001;
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v2, v3);
    targetFov = BillBoardGroupManager_TypeInfo->static_fields->targetFov;
  }
  return cosf(v7 * (float)(90.0 / targetFov));
}


UnityEngine_Vector3_o BillBoardGroupManager__GetNormalizedLookAt(
        UnityEngine_Vector3_o fromPos,
        UnityEngine_Vector3_o toPos,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  float z; // s8
  float y; // s9
  float x; // s11
  float v8; // s10
  float v9; // s12
  float v10; // s13
  float v11; // s11
  float v12; // s9
  float v13; // s8
  float v14; // s2
  float v15; // s0
  float v16; // s1
  float v17; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = toPos.fields.z;
  y = toPos.fields.y;
  x = toPos.fields.x;
  v8 = fromPos.fields.z;
  v9 = fromPos.fields.y;
  v10 = fromPos.fields.x;
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  v11 = x - v10;
  v12 = y - v9;
  v13 = z - v8;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3, v4);
  v14 = sqrtf((float)(v13 * v13) + (float)((float)(v11 * v11) + (float)(v12 * v12)));
  if ( v14 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v15 = static_fields->zeroVector.fields.x;
    v16 = static_fields->zeroVector.fields.y;
    v17 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v15 = v11 / v14;
    v16 = v12 / v14;
    v17 = v13 / v14;
  }
  result.fields.z = v17;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}


void BillBoardGroupManager_GroupData___ctor(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  BillBoardGroupManager_c *v13; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_GameObject__c *v15; // x0
  float z; // w9
  __int64 v17; // x8
  System_Collections_Generic_List_object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596FB4D & 1) == 0 )
  {
    sub_2213A60(&BillBoardGroupManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_596FB4D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.cam = pCam;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)pCam, v5, v6, v7, v8, v9, v10);
  v13 = BillBoardGroupManager_TypeInfo;
  if ( !*(&BillBoardGroupManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, v11, v12);
    v13 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  v15 = System_Collections_Generic_List_GameObject__TypeInfo;
  z = static_fields->VecZero.fields.z;
  v17 = *(_QWORD *)&static_fields->VecZero.fields.x;
  this->fields.resVec.fields.z = z;
  *(_QWORD *)&this->fields.resVec.fields.x = v17;
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v15);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objs = (struct System_Collections_Generic_List_GameObject__o *)v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objs, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


void BillBoardGroupManager_GroupData__AddObj(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BillBoardGroupManager_GroupData_o *v9; // x20
  System_Collections_Generic_List_object__o *objs; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_596FB4F & 1) == 0 )
  {
    this = (BillBoardGroupManager_GroupData_o *)sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_596FB4F = 1;
  }
  objs = (System_Collections_Generic_List_object__o *)v9->fields.objs;
  if ( !objs
    || (items = objs->fields._items,
        v12 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++objs->fields._version,
        !items) )
  {
    sub_2213CDC(this, obj);
  }
  size = objs->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      objs,
      (Il2CppObject *)obj,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    objs->fields._size = size + 1;
    v14[4] = (Il2CppClass *)obj;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)obj,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


UnityEngine_Vector3_o BillBoardGroupManager_GroupData__GetLookVec(
        BillBoardGroupManager_GroupData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cam; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  float32x2_t v7; // d9
  float z; // s8
  BillBoardGroupManager_c *v9; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float32x2_t v11; // d0
  System_Collections_Generic_List_object__o *objs; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *current; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Component_o *v21; // x0
  float x; // s8
  float y; // s9
  float v24; // s10
  UnityEngine_Transform_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  float v29; // s11
  float v30; // s12
  BillBoardGroupManager_c *v31; // x0
  float v32; // s13
  __int64 v33; // x1
  UnityEngine_Component_o *v34; // x0
  float v35; // s8
  UnityEngine_Transform_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x2
  float v40; // s9
  float v41; // s11
  float v42; // s10
  System_Math_c *v43; // x0
  float v44; // s1
  float v45; // s0
  float v46; // s0
  float v47; // s1
  float v48; // s9
  float v49; // s0
  float Magnifier; // s0
  unsigned __int64 v51; // d1
  float v52; // s0
  struct System_Collections_Generic_List_GameObject__o *v53; // x8
  int32_t size; // w2
  int v55; // w9
  float v56; // s0
  float v57; // s1
  float v58; // s2
  float v59; // [xsp+0h] [xbp-F0h]
  float v60; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+40h] [xbp-B0h] BYREF
  float v63; // [xsp+ACh] [xbp-44h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o NormalizedLookAt; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_596FB50 & 1) == 0 )
  {
    sub_2213A60(&BillBoardGroupManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FB50 = 1;
  }
  cam = (UnityEngine_Object_o *)this->fields.cam;
  memset(&v62, 0, sizeof(v62));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(cam, 0, 0) )
  {
    v7.n64_u64[0] = *(unsigned __int64 *)&this->fields.resVec.fields.x;
    z = this->fields.resVec.fields.z;
    v9 = BillBoardGroupManager_TypeInfo;
    if ( !*(&BillBoardGroupManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, v5, v6);
      v9 = BillBoardGroupManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    v11.n64_u64[0] = vsub_f32(v7, *(float32x2_t *)&static_fields->VecZero.fields.x).n64_u64[0];
    if ( (float)((float)((float)(z - static_fields->VecZero.fields.z) * (float)(z - static_fields->VecZero.fields.z))
               + vaddv_f32(vmul_f32(v11, v11))) < 1.0e-10 )
    {
      objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
      if ( !objs )
        goto LABEL_48;
      if ( objs->fields._size < 1 )
        goto LABEL_41;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v61,
        objs,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v62 = v61;
      v63 = 57.296;
      v61.fields._list = 0;
      *(_QWORD *)&v61.fields._index = &v62;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v62,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v62.fields._current;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
        v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
        if ( !v16 )
        {
          if ( !current )
            sub_2213CDC(v16, v17);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0);
          if ( !transform )
            sub_2213CDC(0, v19);
          position = UnityEngine_Transform__get_position(transform, 0);
          v21 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v21 )
            sub_2213CDC(0, v20);
          x = position.fields.x;
          y = position.fields.y;
          v24 = position.fields.z;
          v25 = UnityEngine_Component__get_transform(v21, 0);
          if ( !v25 )
            sub_2213CDC(0, v26);
          v65 = UnityEngine_Transform__get_position(v25, 0);
          v29 = v65.fields.x;
          v30 = v65.fields.y;
          v31 = BillBoardGroupManager_TypeInfo;
          v32 = v65.fields.z;
          if ( !*(&BillBoardGroupManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, v27, v28);
          v66.fields.x = x;
          v66.fields.y = y;
          v66.fields.z = v24;
          v70.fields.x = v29;
          v70.fields.y = v30;
          v70.fields.z = v32;
          NormalizedLookAt = BillBoardGroupManager__GetNormalizedLookAt(v66, v70, (const MethodInfo *)v31);
          v59 = NormalizedLookAt.fields.y;
          v60 = NormalizedLookAt.fields.x;
          v34 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v34 )
            sub_2213CDC(0, v33);
          v35 = NormalizedLookAt.fields.z;
          v36 = UnityEngine_Component__get_transform(v34, 0);
          if ( !v36 )
            sub_2213CDC(0, v37);
          forward = UnityEngine_Transform__get_forward(v36, 0);
          v40 = forward.fields.x;
          v41 = forward.fields.y;
          v42 = forward.fields.z;
          if ( !byte_596CEAC )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_596CEAC = 1;
          }
          v43 = System_Math_TypeInfo;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v38, v39);
          v44 = 0.0;
          v45 = sqrtf(
                  (float)((float)(v35 * v35) + (float)((float)(v60 * v60) + (float)(v59 * v59)))
                * (float)((float)(v42 * v42) + (float)((float)(v40 * v40) + (float)(v41 * v41))));
          if ( v45 >= 1.0e-15 )
          {
            v46 = (float)((float)((float)(v41 * (float)-v59) - (float)(v60 * v40)) - (float)(v35 * v42)) / v45;
            v47 = 1.0;
            if ( v46 <= 1.0 )
              v47 = v46;
            if ( v46 >= -1.0 )
              v48 = v47;
            else
              v48 = -1.0;
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v38, v39);
            v49 = acos(v48);
            v44 = v49 * v63;
          }
          Magnifier = BillBoardGroupManager__GetMagnifier(v44 * 0.017453, (const MethodInfo *)v43);
          v51 = vadd_f32(
                  vmul_n_f32((float32x2_t)__PAIR64__(LODWORD(v59), LODWORD(v60)), Magnifier),
                  *(float32x2_t *)&this->fields.resVec.fields.x).n64_u64[0];
          v52 = (float)(v35 * Magnifier) + this->fields.resVec.fields.z;
          *(_QWORD *)&this->fields.resVec.fields.x = v51;
          this->fields.resVec.fields.z = v52;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v62,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      v53 = this->fields.objs;
      if ( !v53 )
LABEL_48:
        sub_2213CDC(objs, v5);
      size = v53->fields._size;
      v55 = v53->fields._version + 1;
      v53->fields._size = 0;
      v53->fields._version = v55;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v53->fields._items, 0, size, 0);
    }
  }
LABEL_41:
  v56 = this->fields.resVec.fields.x;
  v57 = this->fields.resVec.fields.y;
  v58 = this->fields.resVec.fields.z;
  result.fields.z = v58;
  result.fields.y = v57;
  result.fields.x = v56;
  return result;
}


void BillBoardGroupManager_GroupData__Reset(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  BillBoardGroupManager_c *v12; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v15; // x8

  if ( (byte_596FB4E & 1) == 0 )
  {
    sub_2213A60(&BillBoardGroupManager_TypeInfo);
    byte_596FB4E = 1;
  }
  this->fields.cam = pCam;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)pCam,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = BillBoardGroupManager_TypeInfo;
  if ( !*(&BillBoardGroupManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo, v10, v11);
    v12 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  z = static_fields->VecZero.fields.z;
  v15 = *(_QWORD *)&static_fields->VecZero.fields.x;
  this->fields.resVec.fields.z = z;
  *(_QWORD *)&this->fields.resVec.fields.x = v15;
}