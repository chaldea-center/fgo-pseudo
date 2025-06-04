void __fastcall BillBoardGroupManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v3; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v5; // x8
  struct BillBoardGroupManager_StaticFields *v6; // x9
  float v7; // s1

  if ( (byte_4B013ED & 1) == 0 )
  {
    sub_1BC3008(&BillBoardGroupManager_TypeInfo, v1);
    byte_4B013ED = 1;
  }
  static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  static_fields->targetFov = 40.0;
  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v1);
    byte_4AFBDB1 = 1;
    static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  }
  v3 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v3->zeroVector.fields.z;
  *(_QWORD *)&static_fields->VecZero.fields.x = *(_QWORD *)&v3->zeroVector.fields.x;
  static_fields->VecZero.fields.z = z;
  if ( !byte_4AFE8DB )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v1);
    byte_4AFE8DB = 1;
  }
  v5 = UnityEngine_Vector3_TypeInfo->static_fields;
  v6 = BillBoardGroupManager_TypeInfo->static_fields;
  v7 = v5->backVector.fields.z;
  *(_QWORD *)&v6->VecBack.fields.x = *(_QWORD *)&v5->backVector.fields.x;
  v6->VecBack.fields.z = v7;
}


void __fastcall BillBoardGroupManager___ctor(BillBoardGroupManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B013EC & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__, method);
    byte_4B013EC = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38E0160 *)Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_Dictionary_int__object__o *Values; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  System_Collections_Generic_Dictionary_int__object__o *v26; // x22
  const MethodInfo *v27; // x2
  BillBoardGroupManager_GroupData_o *v28; // x20
  const MethodInfo *v29; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B013E9 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__,
      *(_QWORD *)&groupId);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__, v12);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo, v13);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__,
      v14);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__,
      v15);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__get_Current__,
      v16);
    sub_1BC3008(&BillBoardGroupManager_GroupData_TypeInfo, v17);
    sub_1BC3008(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__,
      v18);
    byte_4B013E9 = 1;
  }
  memset(&i, 0, sizeof(i));
  p_datas = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.datas;
  if ( !this->fields.datas )
  {
    v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v20,
      (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    *p_datas = v20;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.datas, (int32_t)v20, v21, v22);
  }
  if ( this->fields.phaseNow != 1 )
  {
    Values = *p_datas;
    if ( !*p_datas )
      goto LABEL_22;
    Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                       Values,
                                                                       (const MethodInfo_3308364 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    if ( !Values )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v30,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Values,
      (const MethodInfo_39C96D4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    for ( i = v30;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &i,
            (const MethodInfo_345ABF4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
          BillBoardGroupManager_GroupData__Reset((BillBoardGroupManager_GroupData_o *)i.fields._currentValue, cam, v25) )
    {
      if ( !i.fields._currentValue )
        sub_1BC3264(0LL, v24);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &i,
      (const MethodInfo_345ABF0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    this->fields.phaseNow = 1;
  }
  Values = *p_datas;
  if ( !*p_datas )
    goto LABEL_22;
  Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                     Values,
                                                                     groupId,
                                                                     (const MethodInfo_3308748 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
  v26 = *p_datas;
  if ( ((unsigned __int8)Values & 1) != 0 )
  {
    if ( v26 )
    {
      Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         *p_datas,
                                                                         groupId,
                                                                         (const MethodInfo_33084B4 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
      if ( Values )
      {
        BillBoardGroupManager_GroupData__AddObj((BillBoardGroupManager_GroupData_o *)Values, obj, v27);
        return;
      }
    }
LABEL_22:
    sub_1BC3264(Values, *(_QWORD *)&groupId);
  }
  v28 = (BillBoardGroupManager_GroupData_o *)sub_1BC3254(BillBoardGroupManager_GroupData_TypeInfo);
  BillBoardGroupManager_GroupData___ctor(v28, cam, v29);
  if ( !v26 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__object___Add(
    v26,
    groupId,
    (Il2CppObject *)v28,
    (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
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

  if ( (byte_4B013EA & 1) == 0 )
  {
    sub_1BC3008(&BillBoardGroupManager_TypeInfo, *(_QWORD *)&groupId);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__, v7);
    byte_4B013EA = 1;
  }
  value = 0LL;
  datas = this->fields.datas;
  this->fields.phaseNow = 2;
  if ( datas
    && System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)datas,
         groupId,
         &value,
         (const MethodInfo_3309CE0 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__) )
  {
    if ( !value )
      sub_1BC3264(0LL, v9);
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

  if ( (byte_4B013EB & 1) == 0 )
  {
    sub_1BC3008(&BillBoardGroupManager_TypeInfo, v2);
    byte_4B013EB = 1;
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
  if ( !byte_4AFBDB4 )
  {
    sub_1BC3008(&System_Math_TypeInfo, v3);
    byte_4AFBDB4 = 1;
  }
  v10 = x - v9;
  v11 = y - v8;
  v12 = z - v7;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = sqrtf((float)(v12 * v12) + (float)((float)(v10 * v10) + (float)(v11 * v11)));
  if ( v13 <= 0.00001 )
  {
    if ( !byte_4AFBDB1 )
    {
      sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v3);
      byte_4AFBDB1 = 1;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BillBoardGroupManager_c *v9; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v12; // x8
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B013EE & 1) == 0 )
  {
    sub_1BC3008(&BillBoardGroupManager_TypeInfo, pCam);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_4B013EE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.cam = pCam;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)pCam, v7, v8);
  v9 = BillBoardGroupManager_TypeInfo;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v9 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  z = static_fields->VecZero.fields.z;
  v12 = *(_QWORD *)&static_fields->VecZero.fields.x;
  this->fields.resVec.fields.z = z;
  *(_QWORD *)&this->fields.resVec.fields.x = v12;
  v13 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objs = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.objs, (int32_t)v13, v14, v15);
}


void __fastcall BillBoardGroupManager_GroupData__AddObj(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *objs; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4B013F0 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    byte_4B013F0 = 1;
  }
  objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
  if ( !objs
    || (items = objs->fields._items,
        v8 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++objs->fields._version,
        !items) )
  {
    sub_1BC3264(objs, obj);
  }
  size = objs->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      objs,
      (Il2CppObject *)obj,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    objs->fields._size = size + 1;
    v10[4] = (Il2CppClass *)obj;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)obj, (int32_t)method, v3);
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

  if ( (byte_4B013F1 & 1) == 0 )
  {
    sub_1BC3008(&BillBoardGroupManager_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4B013F1 = 1;
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
        (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v69 = 57.296;
      v68 = v67;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v68,
                (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v68.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
        if ( !v20 )
        {
          if ( !current )
            sub_1BC3264(v20, v21);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0LL);
          if ( !transform )
            sub_1BC3264(0LL, v23);
          *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_position(transform, 0LL);
          v28 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v28 )
            sub_1BC3264(0LL, v24);
          v29 = v25;
          v30 = v26;
          v31 = v27;
          v32 = UnityEngine_Component__get_transform(v28, 0LL);
          if ( !v32 )
            sub_1BC3264(0LL, v33);
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
            sub_1BC3264(0LL, v38);
          v43 = v39;
          v44 = UnityEngine_Component__get_transform(v42, 0LL);
          if ( !v44 )
            sub_1BC3264(0LL, v45);
          forward = UnityEngine_Transform__get_forward(v44, 0LL);
          v47 = forward.fields.x;
          v48 = forward.fields.y;
          v49 = forward.fields.z;
          if ( !byte_4AFE8E3 )
          {
            sub_1BC3008(&System_Math_TypeInfo, v46);
            byte_4AFE8E3 = 1;
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
        (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      v59 = this->fields.objs;
      if ( !v59 )
LABEL_46:
        sub_1BC3264(objs, v11);
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
  const MethodInfo *v3; // x3
  BillBoardGroupManager_c *v6; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v9; // x8

  if ( (byte_4B013EF & 1) == 0 )
  {
    sub_1BC3008(&BillBoardGroupManager_TypeInfo, pCam);
    byte_4B013EF = 1;
  }
  this->fields.cam = pCam;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)pCam, (int32_t)method, v3);
  v6 = BillBoardGroupManager_TypeInfo;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v6 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  z = static_fields->VecZero.fields.z;
  v9 = *(_QWORD *)&static_fields->VecZero.fields.x;
  this->fields.resVec.fields.z = z;
  *(_QWORD *)&this->fields.resVec.fields.x = v9;
}