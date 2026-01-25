void BillBoardGroupManager___cctor(const MethodInfo *method)
{
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v2; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v4; // x8
  struct BillBoardGroupManager_StaticFields *v5; // x9
  float v6; // s1

  if ( (byte_4CEDA30 & 1) == 0 )
  {
    sub_1C7BAE8(&BillBoardGroupManager_TypeInfo);
    byte_4CEDA30 = 1;
  }
  static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  static_fields->targetFov = 40.0;
  if ( !byte_4CE7E59 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E59 = 1;
    static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  }
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->zeroVector.fields.z;
  *(_QWORD *)&static_fields->VecZero.fields.x = *(_QWORD *)&v2->zeroVector.fields.x;
  static_fields->VecZero.fields.z = z;
  if ( !byte_4CEAD77 )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CEAD77 = 1;
  }
  v4 = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = BillBoardGroupManager_TypeInfo->static_fields;
  v6 = v4->backVector.fields.z;
  *(_QWORD *)&v5->VecBack.fields.x = *(_QWORD *)&v4->backVector.fields.x;
  v5->VecBack.fields.z = v6;
}


void BillBoardGroupManager___ctor(BillBoardGroupManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CEDA2F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
    byte_4CEDA2F = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void BillBoardGroupManager__AddData(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        UnityEngine_Camera_o *cam,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o **p_datas; // x23
  System_Collections_Generic_Dictionary_int__object__o *v10; // x24
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_Dictionary_int__object__o *Values; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_Dictionary_int__object__o *v20; // x22
  const MethodInfo *v21; // x2
  BillBoardGroupManager_GroupData_o *v22; // x20
  const MethodInfo *v23; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CEDA2C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__get_Current__);
    sub_1C7BAE8(&BillBoardGroupManager_GroupData_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    byte_4CEDA2C = 1;
  }
  memset(&i, 0, sizeof(i));
  p_datas = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.datas;
  if ( !this->fields.datas )
  {
    v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v10,
      (const MethodInfo_3486D3C *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    *p_datas = v10;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.datas, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  }
  if ( this->fields.phaseNow != 1 )
  {
    Values = *p_datas;
    if ( !*p_datas )
      goto LABEL_22;
    Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                       Values,
                                                                       (const MethodInfo_3487520 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    if ( !Values )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v24,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Values,
      (const MethodInfo_3B79D54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    for ( i = v24;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &i,
            (const MethodInfo_35E2804 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
          BillBoardGroupManager_GroupData__Reset((BillBoardGroupManager_GroupData_o *)i.fields._currentValue, cam, v19) )
    {
      if ( !i.fields._currentValue )
        sub_1C7BD40(0, v18);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &i,
      (const MethodInfo_35E2800 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    this->fields.phaseNow = 1;
  }
  Values = *p_datas;
  if ( !*p_datas )
    goto LABEL_22;
  Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                     Values,
                                                                     groupId,
                                                                     (const MethodInfo_3487904 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
  v20 = *p_datas;
  if ( ((unsigned __int8)Values & 1) != 0 )
  {
    if ( v20 )
    {
      Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         *p_datas,
                                                                         groupId,
                                                                         (const MethodInfo_3487670 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
      if ( Values )
      {
        BillBoardGroupManager_GroupData__AddObj((BillBoardGroupManager_GroupData_o *)Values, obj, v21);
        return;
      }
    }
LABEL_22:
    sub_1C7BD40(Values, *(_QWORD *)&groupId);
  }
  v22 = (BillBoardGroupManager_GroupData_o *)sub_1C7BD34(BillBoardGroupManager_GroupData_TypeInfo);
  BillBoardGroupManager_GroupData___ctor(v22, cam, v23);
  if ( !v20 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__object___Add(
    v20,
    groupId,
    (Il2CppObject *)v22,
    (const MethodInfo_3487710 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
}


UnityEngine_Vector3_o BillBoardGroupManager__GetLookVec(
        BillBoardGroupManager_o *this,
        int32_t groupId,
        bool disableZRot,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__o *datas; // x0
  const MethodInfo *v8; // x1
  BillBoardGroupManager_c *v9; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CEDA2D & 1) == 0 )
  {
    sub_1C7BAE8(&BillBoardGroupManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__);
    byte_4CEDA2D = 1;
  }
  value = 0;
  datas = this->fields.datas;
  this->fields.phaseNow = 2;
  if ( datas
    && System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)datas,
         groupId,
         &value,
         (const MethodInfo_3488E9C *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__) )
  {
    if ( !value )
      sub_1C7BD40(0, v8);
    result = BillBoardGroupManager_GroupData__GetLookVec((BillBoardGroupManager_GroupData_o *)value, v8);
    if ( disableZRot )
      result.fields.y = 0.0;
  }
  else
  {
    v9 = BillBoardGroupManager_TypeInfo;
    if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v9 = BillBoardGroupManager_TypeInfo;
    }
    return v9->static_fields->VecZero;
  }
  return result;
}


float BillBoardGroupManager__GetMagnifier(float angleRad, const MethodInfo *method)
{
  BillBoardGroupManager_c *v3; // x0
  float v4; // s0
  float v5; // s8
  float targetFov; // s0

  if ( (byte_4CEDA2E & 1) == 0 )
  {
    sub_1C7BAE8(&BillBoardGroupManager_TypeInfo);
    byte_4CEDA2E = 1;
  }
  v3 = BillBoardGroupManager_TypeInfo;
  v4 = angleRad + -6.2832;
  if ( angleRad < 3.1416 )
    v4 = angleRad;
  if ( v4 >= 0.0 )
    v5 = v4;
  else
    v5 = -v4;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v3 = BillBoardGroupManager_TypeInfo;
  }
  targetFov = v3->static_fields->targetFov;
  if ( v5 >= (float)(targetFov * 0.017453) )
    return 0.00001;
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    targetFov = BillBoardGroupManager_TypeInfo->static_fields->targetFov;
  }
  return cosf(v5 * (float)(90.0 / targetFov));
}


UnityEngine_Vector3_o BillBoardGroupManager__GetNormalizedLookAt(
        UnityEngine_Vector3_o fromPos,
        UnityEngine_Vector3_o toPos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s11
  float v6; // s10
  float v7; // s12
  float v8; // s13
  float v9; // s11
  float v10; // s9
  float v11; // s8
  float v12; // s2
  float v13; // s0
  float v14; // s1
  float v15; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  z = toPos.fields.z;
  y = toPos.fields.y;
  x = toPos.fields.x;
  v6 = fromPos.fields.z;
  v7 = fromPos.fields.y;
  v8 = fromPos.fields.x;
  if ( !byte_4CE7E5C )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E5C = 1;
  }
  v9 = x - v8;
  v10 = y - v7;
  v11 = z - v6;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = sqrtf((float)(v11 * v11) + (float)((float)(v9 * v9) + (float)(v10 * v10)));
  if ( v12 <= 0.00001 )
  {
    if ( !byte_4CE7E59 )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E59 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v13 = static_fields->zeroVector.fields.x;
    v14 = static_fields->zeroVector.fields.y;
    v15 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v13 = v9 / v12;
    v14 = v10 / v12;
    v15 = v11 / v12;
  }
  result.fields.z = v15;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


void BillBoardGroupManager_GroupData___ctor(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  BillBoardGroupManager_c *v11; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v14; // x8
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CEDA31 & 1) == 0 )
  {
    sub_1C7BAE8(&BillBoardGroupManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CEDA31 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.cam = pCam;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)pCam, v5, v6, v7, v8, v9, v10);
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
  v15 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objs = (struct System_Collections_Generic_List_GameObject__o *)v15;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.objs, (int32_t)v15, v16, v17, v18, v19, v20, v21);
}


void BillBoardGroupManager_GroupData__AddObj(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *objs; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4CEDA33 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4CEDA33 = 1;
  }
  objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
  if ( !objs
    || (items = objs->fields._items,
        v12 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++objs->fields._version,
        !items) )
  {
    sub_1C7BD40(objs, obj);
  }
  size = objs->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      objs,
      (Il2CppObject *)obj,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    objs->fields._size = size + 1;
    v14[4] = (Il2CppClass *)obj;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)obj, (int32_t)method, v3, v4, v5, v6, v7);
  }
}


UnityEngine_Vector3_o BillBoardGroupManager_GroupData__GetLookVec(
        BillBoardGroupManager_GroupData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cam; // x20
  __int64 v4; // x1
  float x; // s8
  float32x2_t v6; // d9
  BillBoardGroupManager_c *v7; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v9; // d1
  unsigned __int64 v10; // d1
  System_Collections_Generic_List_object__o *objs; // x0
  Il2CppObject *current; // x21
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Component_o *v18; // x0
  float v19; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *v22; // x0
  __int64 v23; // x1
  BillBoardGroupManager_c *v24; // x0
  float v25; // s11
  float v26; // s12
  float v27; // s13
  __int64 v28; // x1
  UnityEngine_Component_o *v29; // x0
  float v30; // s8
  UnityEngine_Transform_o *v31; // x0
  __int64 v32; // x1
  float v33; // s11
  float v34; // s9
  float v35; // s10
  System_Math_c *v36; // x0
  float v37; // s0
  float v38; // s1
  float v39; // s0
  float v40; // s1
  float v41; // s9
  float v42; // s0
  float Magnifier; // s0
  float v44; // s1
  struct System_Collections_Generic_List_GameObject__o *v45; // x8
  int32_t size; // w2
  int v47; // w9
  float v48; // s0
  float v49; // s1
  float v50; // s2
  float v51; // [xsp+0h] [xbp-F0h]
  float v52; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+40h] [xbp-B0h] BYREF
  float v55; // [xsp+ACh] [xbp-44h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o NormalizedLookAt; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4CEDA34 & 1) == 0 )
  {
    sub_1C7BAE8(&BillBoardGroupManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEDA34 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  cam = (UnityEngine_Object_o *)this->fields.cam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cam, 0, 0) )
  {
    x = this->fields.resVec.fields.x;
    v6.n64_u64[0] = *(unsigned __int64 *)&this->fields.resVec.fields.y;
    v7 = BillBoardGroupManager_TypeInfo;
    if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v7 = BillBoardGroupManager_TypeInfo;
    }
    static_fields = (float32x2_t *)v7->static_fields;
    v9.n64_u64[0] = vsub_f32(v6, static_fields[1]).n64_u64[0];
    v10 = vmul_f32(v9, v9).n64_u64[0];
    if ( (float)(*((float *)&v10 + 1)
               + (float)((float)((float)(x - static_fields->n64_f32[1]) * (float)(x - static_fields->n64_f32[1]))
                       + *(float *)&v10)) < 1.0e-10 )
    {
      objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
      if ( !objs )
        goto LABEL_46;
      if ( objs->fields._size < 1 )
        goto LABEL_39;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v53,
        objs,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v55 = 57.296;
      v54 = v53;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v54,
                (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v54.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
        if ( !v13 )
        {
          if ( !current )
            sub_1C7BD40(v13, v14);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0);
          if ( !transform )
            sub_1C7BD40(0, v16);
          position = UnityEngine_Transform__get_position(transform, 0);
          v18 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v18 )
            sub_1C7BD40(0, v17);
          v19 = position.fields.x;
          y = position.fields.y;
          z = position.fields.z;
          v22 = UnityEngine_Component__get_transform(v18, 0);
          if ( !v22 )
            sub_1C7BD40(0, v23);
          v57 = UnityEngine_Transform__get_position(v22, 0);
          v24 = BillBoardGroupManager_TypeInfo;
          v25 = v57.fields.x;
          v26 = v57.fields.y;
          v27 = v57.fields.z;
          if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
          v58.fields.x = v19;
          v58.fields.y = y;
          v58.fields.z = z;
          v62.fields.x = v25;
          v62.fields.y = v26;
          v62.fields.z = v27;
          NormalizedLookAt = BillBoardGroupManager__GetNormalizedLookAt(v58, v62, (const MethodInfo *)v24);
          v52 = NormalizedLookAt.fields.x;
          v51 = NormalizedLookAt.fields.y;
          v29 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v29 )
            sub_1C7BD40(0, v28);
          v30 = NormalizedLookAt.fields.z;
          v31 = UnityEngine_Component__get_transform(v29, 0);
          if ( !v31 )
            sub_1C7BD40(0, v32);
          forward = UnityEngine_Transform__get_forward(v31, 0);
          v33 = forward.fields.x;
          v34 = forward.fields.y;
          v35 = forward.fields.z;
          if ( !byte_4CEAE30 )
          {
            sub_1C7BAE8(&System_Math_TypeInfo);
            byte_4CEAE30 = 1;
          }
          v36 = System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v37 = sqrtf(
                  (float)((float)(v30 * v30) + (float)((float)(v52 * v52) + (float)(v51 * v51)))
                * (float)((float)(v35 * v35) + (float)((float)(v33 * v33) + (float)(v34 * v34))));
          v38 = 0.0;
          if ( v37 >= 1.0e-15 )
          {
            v39 = (float)((float)((float)(v34 * (float)-v51) - (float)(v52 * v33)) - (float)(v30 * v35)) / v37;
            v40 = fminf(v39, 1.0);
            if ( v39 < -1.0 )
              v41 = -1.0;
            else
              v41 = v40;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v42 = acos(v41);
            v38 = v42 * v55;
          }
          Magnifier = BillBoardGroupManager__GetMagnifier(v38 * 0.017453, (const MethodInfo *)v36);
          v44 = (float)(v30 * Magnifier) + this->fields.resVec.fields.z;
          *(float32x2_t *)&this->fields.resVec.fields.x = vadd_f32(
                                                            vmul_n_f32(
                                                              (float32x2_t)__PAIR64__(LODWORD(v51), LODWORD(v52)),
                                                              Magnifier),
                                                            *(float32x2_t *)&this->fields.resVec.fields.x);
          this->fields.resVec.fields.z = v44;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v54,
        (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      v45 = this->fields.objs;
      if ( !v45 )
LABEL_46:
        sub_1C7BD40(objs, v4);
      size = v45->fields._size;
      v47 = v45->fields._version + 1;
      v45->fields._size = 0;
      v45->fields._version = v47;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v45->fields._items, 0, size, 0);
    }
  }
LABEL_39:
  v48 = this->fields.resVec.fields.x;
  v49 = this->fields.resVec.fields.y;
  v50 = this->fields.resVec.fields.z;
  result.fields.z = v50;
  result.fields.y = v49;
  result.fields.x = v48;
  return result;
}


void BillBoardGroupManager_GroupData__Reset(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BillBoardGroupManager_c *v10; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v13; // x8

  if ( (byte_4CEDA32 & 1) == 0 )
  {
    sub_1C7BAE8(&BillBoardGroupManager_TypeInfo);
    byte_4CEDA32 = 1;
  }
  this->fields.cam = pCam;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)pCam, (int32_t)method, v3, v4, v5, v6, v7);
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