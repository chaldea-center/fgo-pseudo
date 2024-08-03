void __fastcall BillBoardGroupManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v3; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v5; // x8
  struct BillBoardGroupManager_StaticFields *v6; // x9
  float v7; // s1

  if ( (byte_49FB88A & 1) == 0 )
  {
    sub_1B640C8(&BillBoardGroupManager_TypeInfo, v1);
    byte_49FB88A = 1;
  }
  static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  static_fields->targetFov = 40.0;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v1);
    byte_49F7111 = 1;
    static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  }
  v3 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v3->zeroVector.fields.z;
  *(_QWORD *)&static_fields->VecZero.fields.x = *(_QWORD *)&v3->zeroVector.fields.x;
  static_fields->VecZero.fields.z = z;
  if ( !byte_49F9038 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v1);
    byte_49F9038 = 1;
  }
  v5 = UnityEngine_Vector3_TypeInfo->static_fields;
  v6 = BillBoardGroupManager_TypeInfo->static_fields;
  v7 = v5->backVector.fields.z;
  *(_QWORD *)&v6->VecBack.fields.x = *(_QWORD *)&v5->backVector.fields.x;
  v6->VecBack.fields.z = v7;
}


void __fastcall BillBoardGroupManager___ctor(BillBoardGroupManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FB889 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__, method);
    byte_49FB889 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
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
  int32_t v22; // w3
  System_Collections_Generic_Dictionary_int__object__o *Values; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_Dictionary_int__object__o *v27; // x22
  const MethodInfo *v28; // x2
  BillBoardGroupManager_GroupData_o *v29; // x20
  const MethodInfo *v30; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FB886 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__,
      *(_QWORD *)&groupId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__, v12);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo, v13);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__,
      v14);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__,
      v15);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__get_Current__,
      v16);
    sub_1B640C8(&BillBoardGroupManager_GroupData_TypeInfo, v17);
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__,
      v18);
    byte_49FB886 = 1;
  }
  memset(&i, 0, sizeof(i));
  p_datas = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.datas;
  if ( !this->fields.datas )
  {
    v20 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo,
                                                                    *(_QWORD *)&groupId,
                                                                    cam);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v20,
      (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    *p_datas = v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.datas, (int32_t)v20, v21, v22);
  }
  if ( this->fields.phaseNow != 1 )
  {
    Values = *p_datas;
    if ( !*p_datas )
      goto LABEL_22;
    Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                       Values,
                                                                       (const MethodInfo_3123794 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    if ( !Values )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v31,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Values,
      (const MethodInfo_37B55F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    for ( i = v31;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &i,
            (const MethodInfo_326A8E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
          BillBoardGroupManager_GroupData__Reset((BillBoardGroupManager_GroupData_o *)i.fields._currentValue, cam, v24) )
    {
      if ( !i.fields._currentValue )
        sub_1B64324(0LL);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &i,
      (const MethodInfo_326A8E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    this->fields.phaseNow = 1;
  }
  Values = *p_datas;
  if ( !*p_datas )
    goto LABEL_22;
  Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                     Values,
                                                                     groupId,
                                                                     (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
  v27 = *p_datas;
  if ( ((unsigned __int8)Values & 1) != 0 )
  {
    if ( v27 )
    {
      Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         *p_datas,
                                                                         groupId,
                                                                         (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
      if ( Values )
      {
        BillBoardGroupManager_GroupData__AddObj((BillBoardGroupManager_GroupData_o *)Values, obj, v28);
        return;
      }
    }
LABEL_22:
    sub_1B64324(Values);
  }
  v29 = (BillBoardGroupManager_GroupData_o *)sub_1B64314(BillBoardGroupManager_GroupData_TypeInfo, v25, v26);
  BillBoardGroupManager_GroupData___ctor(v29, cam, v30);
  if ( !v27 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__object___Add(
    v27,
    groupId,
    (Il2CppObject *)v29,
    (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
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

  if ( (byte_49FB887 & 1) == 0 )
  {
    sub_1B640C8(&BillBoardGroupManager_TypeInfo, *(_QWORD *)&groupId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__, v7);
    byte_49FB887 = 1;
  }
  value = 0LL;
  datas = this->fields.datas;
  this->fields.phaseNow = 2;
  if ( datas
    && System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)datas,
         groupId,
         &value,
         (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__) )
  {
    if ( !value )
      sub_1B64324(0LL);
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

  if ( (byte_49FB888 & 1) == 0 )
  {
    sub_1B640C8(&BillBoardGroupManager_TypeInfo, v2);
    byte_49FB888 = 1;
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
  if ( !byte_49F7114 )
  {
    sub_1B640C8(&System_Math_TypeInfo, v3);
    byte_49F7114 = 1;
  }
  v10 = x - v9;
  v11 = y - v8;
  v12 = z - v7;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v13 = sqrtf((float)(v12 * v12) + (float)((float)(v10 * v10) + (float)(v11 * v11)));
  if ( v13 <= 0.00001 )
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v3);
      byte_49F7111 = 1;
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
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  BillBoardGroupManager_c *v11; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v14; // x8
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FB88B & 1) == 0 )
  {
    sub_1B640C8(&BillBoardGroupManager_TypeInfo, pCam);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_49FB88B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.cam = pCam;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)pCam, v7, v8);
  v11 = BillBoardGroupManager_TypeInfo;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v11 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v11->static_fields;
  z = static_fields->VecZero.fields.z;
  v14 = *(_QWORD *)&static_fields->VecZero.fields.x;
  this->fields.resVec.fields.z = z;
  *(_QWORD *)&this->fields.resVec.fields.x = v14;
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objs = (struct System_Collections_Generic_List_GameObject__o *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objs, (int32_t)v15, v16, v17);
}


void __fastcall BillBoardGroupManager_GroupData__AddObj(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *objs; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_49FB88D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    byte_49FB88D = 1;
  }
  objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
  if ( !objs
    || (items = objs->fields._items,
        v8 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++objs->fields._version,
        !items) )
  {
    sub_1B64324(objs);
  }
  size = objs->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      objs,
      (Il2CppObject *)obj,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    objs->fields._size = size + 1;
    v10[4] = (Il2CppClass *)obj;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)obj, (int32_t)method, v3);
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
  float x; // s8
  float32x2_t v12; // d9
  BillBoardGroupManager_c *v13; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v15; // d1
  unsigned __int64 v16; // d1
  System_Collections_Generic_List_object__o *objs; // x0
  Il2CppObject *current; // x21
  _BOOL8 v19; // x0
  UnityEngine_Transform_o *transform; // x0
  float v21; // s0
  float v22; // s1
  float v23; // s2
  UnityEngine_Component_o *v24; // x0
  float v25; // s8
  float v26; // s9
  float v27; // s10
  UnityEngine_Transform_o *v28; // x0
  BillBoardGroupManager_c *v29; // x0
  float v30; // s11
  float y; // s12
  float z; // s13
  float v33; // s2
  float v34; // s0
  float v35; // s1
  UnityEngine_Component_o *v36; // x0
  float v37; // s8
  UnityEngine_Transform_o *v38; // x0
  __int64 v39; // x1
  float v40; // s11
  float v41; // s9
  float v42; // s10
  System_Math_c *v43; // x0
  float v44; // s0
  float v45; // s1
  float v46; // s0
  float v47; // s1
  float v48; // s9
  float v49; // s0
  float Magnifier; // s0
  float v51; // s1
  struct System_Collections_Generic_List_GameObject__o *v52; // x8
  int32_t size; // w2
  int v54; // w9
  float v55; // s0
  float v56; // s1
  float v57; // s2
  float v58; // [xsp+0h] [xbp-F0h]
  float v59; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+40h] [xbp-B0h] BYREF
  float v62; // [xsp+ACh] [xbp-44h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49FB88E & 1) == 0 )
  {
    sub_1B640C8(&BillBoardGroupManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FB88E = 1;
  }
  memset(&v61, 0, sizeof(v61));
  cam = (UnityEngine_Object_o *)this->fields.cam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cam, 0LL, 0LL) )
  {
    x = this->fields.resVec.fields.x;
    v12.n64_u64[0] = *(unsigned __int64 *)&this->fields.resVec.fields.y;
    v13 = BillBoardGroupManager_TypeInfo;
    if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v13 = BillBoardGroupManager_TypeInfo;
    }
    static_fields = (float32x2_t *)v13->static_fields;
    v15.n64_u64[0] = vsub_f32(v12, static_fields[1]).n64_u64[0];
    v16 = vmul_f32(v15, v15).n64_u64[0];
    if ( (float)(*((float *)&v16 + 1)
               + (float)((float)((float)(x - static_fields->n64_f32[1]) * (float)(x - static_fields->n64_f32[1]))
                       + *(float *)&v16)) < 1.0e-10 )
    {
      objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
      if ( !objs )
        goto LABEL_46;
      if ( objs->fields._size < 1 )
        goto LABEL_39;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v60,
        objs,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v62 = 57.296;
      v61 = v60;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v61,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v61.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v19 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
        if ( !v19 )
        {
          if ( !current )
            sub_1B64324(v19);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0LL);
          if ( !transform )
            sub_1B64324(0LL);
          *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(transform, 0LL);
          v24 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v24 )
            sub_1B64324(0LL);
          v25 = v21;
          v26 = v22;
          v27 = v23;
          v28 = UnityEngine_Component__get_transform(v24, 0LL);
          if ( !v28 )
            sub_1B64324(0LL);
          position = UnityEngine_Transform__get_position(v28, 0LL);
          v29 = BillBoardGroupManager_TypeInfo;
          v30 = position.fields.x;
          y = position.fields.y;
          z = position.fields.z;
          if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
          v64.fields.x = v25;
          v64.fields.y = v26;
          v64.fields.z = v27;
          v67.fields.x = v30;
          v67.fields.y = y;
          v67.fields.z = z;
          *(UnityEngine_Vector3_o *)(&v33 - 2) = BillBoardGroupManager__GetNormalizedLookAt(
                                                   v64,
                                                   v67,
                                                   (const MethodInfo *)v29);
          v59 = v34;
          v58 = v35;
          v36 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v36 )
            sub_1B64324(0LL);
          v37 = v33;
          v38 = UnityEngine_Component__get_transform(v36, 0LL);
          if ( !v38 )
            sub_1B64324(0LL);
          forward = UnityEngine_Transform__get_forward(v38, 0LL);
          v40 = forward.fields.x;
          v41 = forward.fields.y;
          v42 = forward.fields.z;
          if ( !byte_49F9040 )
          {
            sub_1B640C8(&System_Math_TypeInfo, v39);
            byte_49F9040 = 1;
          }
          v43 = System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v44 = sqrtf(
                  (float)((float)(v37 * v37) + (float)((float)(v59 * v59) + (float)(v58 * v58)))
                * (float)((float)(v42 * v42) + (float)((float)(v40 * v40) + (float)(v41 * v41))));
          v45 = 0.0;
          if ( v44 >= 1.0e-15 )
          {
            v46 = (float)((float)((float)(v41 * (float)-v58) - (float)(v59 * v40)) - (float)(v37 * v42)) / v44;
            v47 = fminf(v46, 1.0);
            if ( v46 < -1.0 )
              v48 = -1.0;
            else
              v48 = v47;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v49 = acos(v48);
            v45 = v49 * v62;
          }
          Magnifier = BillBoardGroupManager__GetMagnifier(v45 * 0.017453, (const MethodInfo *)v43);
          v51 = (float)(v37 * Magnifier) + this->fields.resVec.fields.z;
          *(float32x2_t *)&this->fields.resVec.fields.x = vadd_f32(
                                                            vmul_n_f32(
                                                              (float32x2_t)__PAIR64__(LODWORD(v58), LODWORD(v59)),
                                                              Magnifier),
                                                            *(float32x2_t *)&this->fields.resVec.fields.x);
          this->fields.resVec.fields.z = v51;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v61,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      v52 = this->fields.objs;
      if ( !v52 )
LABEL_46:
        sub_1B64324(objs);
      size = v52->fields._size;
      v54 = v52->fields._version + 1;
      v52->fields._size = 0;
      v52->fields._version = v54;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v52->fields._items, 0, size, 0LL);
    }
  }
LABEL_39:
  v55 = this->fields.resVec.fields.x;
  v56 = this->fields.resVec.fields.y;
  v57 = this->fields.resVec.fields.z;
  result.fields.z = v57;
  result.fields.y = v56;
  result.fields.x = v55;
  return result;
}


void __fastcall BillBoardGroupManager_GroupData__Reset(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  int32_t v3; // w3
  BillBoardGroupManager_c *v6; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v9; // x8

  if ( (byte_49FB88C & 1) == 0 )
  {
    sub_1B640C8(&BillBoardGroupManager_TypeInfo, pCam);
    byte_49FB88C = 1;
  }
  this->fields.cam = pCam;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)pCam, (int32_t)method, v3);
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