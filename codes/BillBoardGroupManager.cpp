void BillBoardGroupManager___cctor(const MethodInfo *method)
{
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_StaticFields *v2; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v4; // x8
  struct BillBoardGroupManager_StaticFields *v5; // x9
  float v6; // s1

  if ( (byte_4C4234D & 1) == 0 )
  {
    sub_1C37058(&BillBoardGroupManager_TypeInfo);
    byte_4C4234D = 1;
  }
  static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  static_fields->targetFov = 40.0;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
    static_fields = BillBoardGroupManager_TypeInfo->static_fields;
  }
  v2 = UnityEngine_Vector3_TypeInfo->static_fields;
  z = v2->zeroVector.fields.z;
  *(_QWORD *)&static_fields->VecZero.fields.x = *(_QWORD *)&v2->zeroVector.fields.x;
  static_fields->VecZero.fields.z = z;
  if ( !byte_4C3F7D9 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3F7D9 = 1;
  }
  v4 = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = BillBoardGroupManager_TypeInfo->static_fields;
  v6 = v4->backVector.fields.z;
  *(_QWORD *)&v5->VecBack.fields.x = *(_QWORD *)&v4->backVector.fields.x;
  v5->VecBack.fields.z = v6;
}


void BillBoardGroupManager___ctor(BillBoardGroupManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C4234C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
    byte_4C4234C = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_BillBoardGroupManager___ctor__);
}


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
  const MethodInfo *v12; // x3
  System_Collections_Generic_Dictionary_int__object__o *Values; // x0
  const MethodInfo *v14; // x2
  System_Collections_Generic_Dictionary_int__object__o *v15; // x22
  const MethodInfo *v16; // x2
  BillBoardGroupManager_GroupData_o *v17; // x20
  const MethodInfo *v18; // x2
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C42349 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__get_Current__);
    sub_1C37058(&BillBoardGroupManager_GroupData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    byte_4C42349 = 1;
  }
  memset(&i, 0, sizeof(i));
  p_datas = (System_Collections_Generic_Dictionary_int__object__o **)&this->fields.datas;
  if ( !this->fields.datas )
  {
    v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v10,
      (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData___ctor__);
    *p_datas = v10;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.datas, (int32_t)v10, v11, v12);
  }
  if ( this->fields.phaseNow != 1 )
  {
    Values = *p_datas;
    if ( !*p_datas )
      goto LABEL_22;
    Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                       Values,
                                                                       (const MethodInfo_33FA394 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Values__);
    if ( !Values )
      goto LABEL_22;
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      &v19,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Values,
      (const MethodInfo_3AD998C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData__GetEnumerator__);
    for ( i = v19;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &i,
            (const MethodInfo_355206C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__MoveNext__);
          BillBoardGroupManager_GroupData__Reset((BillBoardGroupManager_GroupData_o *)i.fields._currentValue, cam, v14) )
    {
      if ( !i.fields._currentValue )
        sub_1C372B4(0);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      &i,
      (const MethodInfo_3552068 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData__Dispose__);
    this->fields.phaseNow = 1;
  }
  Values = *p_datas;
  if ( !*p_datas )
    goto LABEL_22;
  Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___ContainsKey(
                                                                     Values,
                                                                     groupId,
                                                                     (const MethodInfo_33FA778 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__ContainsKey__);
  v15 = *p_datas;
  if ( ((unsigned __int8)Values & 1) != 0 )
  {
    if ( v15 )
    {
      Values = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         *p_datas,
                                                                         groupId,
                                                                         (const MethodInfo_33FA4E4 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__get_Item__);
      if ( Values )
      {
        BillBoardGroupManager_GroupData__AddObj((BillBoardGroupManager_GroupData_o *)Values, obj, v16);
        return;
      }
    }
LABEL_22:
    sub_1C372B4(Values);
  }
  v17 = (BillBoardGroupManager_GroupData_o *)sub_1C372A4(BillBoardGroupManager_GroupData_TypeInfo);
  BillBoardGroupManager_GroupData___ctor(v17, cam, v18);
  if ( !v15 )
    goto LABEL_22;
  System_Collections_Generic_Dictionary_int__object___Add(
    v15,
    groupId,
    (Il2CppObject *)v17,
    (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__Add__);
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

  if ( (byte_4C4234A & 1) == 0 )
  {
    sub_1C37058(&BillBoardGroupManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__);
    byte_4C4234A = 1;
  }
  value = 0;
  datas = this->fields.datas;
  this->fields.phaseNow = 2;
  if ( datas
    && System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)datas,
         groupId,
         &value,
         (const MethodInfo_33FBD10 *)Method_System_Collections_Generic_Dictionary_int__BillBoardGroupManager_GroupData__TryGetValue__) )
  {
    if ( !value )
      sub_1C372B4(0);
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

  if ( (byte_4C4234B & 1) == 0 )
  {
    sub_1C37058(&BillBoardGroupManager_TypeInfo);
    byte_4C4234B = 1;
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
  if ( !byte_4C3C924 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C924 = 1;
  }
  v9 = x - v8;
  v10 = y - v7;
  v11 = z - v6;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = sqrtf((float)(v11 * v11) + (float)((float)(v9 * v9) + (float)(v10 * v10)));
  if ( v12 <= 0.00001 )
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
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
  const MethodInfo *v6; // x3
  BillBoardGroupManager_c *v7; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v10; // x8
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C4234E & 1) == 0 )
  {
    sub_1C37058(&BillBoardGroupManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C4234E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.cam = pCam;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)pCam, v5, v6);
  v7 = BillBoardGroupManager_TypeInfo;
  if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
    v7 = BillBoardGroupManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  z = static_fields->VecZero.fields.z;
  v10 = *(_QWORD *)&static_fields->VecZero.fields.x;
  this->fields.resVec.fields.z = z;
  *(_QWORD *)&this->fields.resVec.fields.x = v10;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objs = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.objs, (int32_t)v11, v12, v13);
}


void BillBoardGroupManager_GroupData__AddObj(
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

  if ( (byte_4C42350 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4C42350 = 1;
  }
  objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
  if ( !objs
    || (items = objs->fields._items,
        v8 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++objs->fields._version,
        !items) )
  {
    sub_1C372B4(objs);
  }
  size = objs->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      objs,
      (Il2CppObject *)obj,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    objs->fields._size = size + 1;
    v10[4] = (Il2CppClass *)obj;
    sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)obj, (int32_t)method, v3);
  }
}


UnityEngine_Vector3_o BillBoardGroupManager_GroupData__GetLookVec(
        BillBoardGroupManager_GroupData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cam; // x20
  float x; // s8
  float32x2_t v5; // d9
  BillBoardGroupManager_c *v6; // x0
  float32x2_t *static_fields; // x8
  float32x2_t v8; // d1
  unsigned __int64 v9; // d1
  System_Collections_Generic_List_object__o *objs; // x0
  Il2CppObject *current; // x21
  _BOOL8 v12; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v14; // x0
  float v15; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *v18; // x0
  BillBoardGroupManager_c *v19; // x0
  float v20; // s11
  float v21; // s12
  float v22; // s13
  UnityEngine_Component_o *v23; // x0
  float v24; // s8
  UnityEngine_Transform_o *v25; // x0
  float v26; // s11
  float v27; // s9
  float v28; // s10
  System_Math_c *v29; // x0
  float v30; // s0
  float v31; // s1
  float v32; // s0
  float v33; // s1
  float v34; // s9
  float v35; // s0
  float Magnifier; // s0
  float v37; // s1
  struct System_Collections_Generic_List_GameObject__o *v38; // x8
  int32_t size; // w2
  int v40; // w9
  float v41; // s0
  float v42; // s1
  float v43; // s2
  float v44; // [xsp+0h] [xbp-F0h]
  float v45; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+28h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+40h] [xbp-B0h] BYREF
  float v48; // [xsp+ACh] [xbp-44h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o NormalizedLookAt; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o forward; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C42351 & 1) == 0 )
  {
    sub_1C37058(&BillBoardGroupManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42351 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  cam = (UnityEngine_Object_o *)this->fields.cam;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cam, 0, 0) )
  {
    x = this->fields.resVec.fields.x;
    v5.n64_u64[0] = *(unsigned __int64 *)&this->fields.resVec.fields.y;
    v6 = BillBoardGroupManager_TypeInfo;
    if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
      v6 = BillBoardGroupManager_TypeInfo;
    }
    static_fields = (float32x2_t *)v6->static_fields;
    v8.n64_u64[0] = vsub_f32(v5, static_fields[1]).n64_u64[0];
    v9 = vmul_f32(v8, v8).n64_u64[0];
    if ( (float)(*((float *)&v9 + 1)
               + (float)((float)((float)(x - static_fields->n64_f32[1]) * (float)(x - static_fields->n64_f32[1]))
                       + *(float *)&v9)) < 1.0e-10 )
    {
      objs = (System_Collections_Generic_List_object__o *)this->fields.objs;
      if ( !objs )
        goto LABEL_46;
      if ( objs->fields._size < 1 )
        goto LABEL_39;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v46,
        objs,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v48 = 57.296;
      v47 = v46;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v47,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        current = v47.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
        if ( !v12 )
        {
          if ( !current )
            sub_1C372B4(v12);
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current, 0);
          if ( !transform )
            sub_1C372B4(0);
          position = UnityEngine_Transform__get_position(transform, 0);
          v14 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v14 )
            sub_1C372B4(0);
          v15 = position.fields.x;
          y = position.fields.y;
          z = position.fields.z;
          v18 = UnityEngine_Component__get_transform(v14, 0);
          if ( !v18 )
            sub_1C372B4(0);
          v50 = UnityEngine_Transform__get_position(v18, 0);
          v19 = BillBoardGroupManager_TypeInfo;
          v20 = v50.fields.x;
          v21 = v50.fields.y;
          v22 = v50.fields.z;
          if ( !BillBoardGroupManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BillBoardGroupManager_TypeInfo);
          v51.fields.x = v15;
          v51.fields.y = y;
          v51.fields.z = z;
          v55.fields.x = v20;
          v55.fields.y = v21;
          v55.fields.z = v22;
          NormalizedLookAt = BillBoardGroupManager__GetNormalizedLookAt(v51, v55, (const MethodInfo *)v19);
          v45 = NormalizedLookAt.fields.x;
          v44 = NormalizedLookAt.fields.y;
          v23 = (UnityEngine_Component_o *)this->fields.cam;
          if ( !v23 )
            sub_1C372B4(0);
          v24 = NormalizedLookAt.fields.z;
          v25 = UnityEngine_Component__get_transform(v23, 0);
          if ( !v25 )
            sub_1C372B4(0);
          forward = UnityEngine_Transform__get_forward(v25, 0);
          v26 = forward.fields.x;
          v27 = forward.fields.y;
          v28 = forward.fields.z;
          if ( !byte_4C3F88E )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3F88E = 1;
          }
          v29 = System_Math_TypeInfo;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          v30 = sqrtf(
                  (float)((float)(v24 * v24) + (float)((float)(v45 * v45) + (float)(v44 * v44)))
                * (float)((float)(v28 * v28) + (float)((float)(v26 * v26) + (float)(v27 * v27))));
          v31 = 0.0;
          if ( v30 >= 1.0e-15 )
          {
            v32 = (float)((float)((float)(v27 * (float)-v44) - (float)(v45 * v26)) - (float)(v24 * v28)) / v30;
            v33 = fminf(v32, 1.0);
            if ( v32 < -1.0 )
              v34 = -1.0;
            else
              v34 = v33;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v35 = acos(v34);
            v31 = v35 * v48;
          }
          Magnifier = BillBoardGroupManager__GetMagnifier(v31 * 0.017453, (const MethodInfo *)v29);
          v37 = (float)(v24 * Magnifier) + this->fields.resVec.fields.z;
          *(float32x2_t *)&this->fields.resVec.fields.x = vadd_f32(
                                                            vmul_n_f32(
                                                              (float32x2_t)__PAIR64__(LODWORD(v44), LODWORD(v45)),
                                                              Magnifier),
                                                            *(float32x2_t *)&this->fields.resVec.fields.x);
          this->fields.resVec.fields.z = v37;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v47,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      v38 = this->fields.objs;
      if ( !v38 )
LABEL_46:
        sub_1C372B4(objs);
      size = v38->fields._size;
      v40 = v38->fields._version + 1;
      v38->fields._size = 0;
      v38->fields._version = v40;
      if ( size >= 1 )
        System_Array__Clear((System_Array_o *)v38->fields._items, 0, size, 0);
    }
  }
LABEL_39:
  v41 = this->fields.resVec.fields.x;
  v42 = this->fields.resVec.fields.y;
  v43 = this->fields.resVec.fields.z;
  result.fields.z = v43;
  result.fields.y = v42;
  result.fields.x = v41;
  return result;
}


void BillBoardGroupManager_GroupData__Reset(
        BillBoardGroupManager_GroupData_o *this,
        UnityEngine_Camera_o *pCam,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BillBoardGroupManager_c *v6; // x0
  struct BillBoardGroupManager_StaticFields *static_fields; // x8
  float z; // w9
  __int64 v9; // x8

  if ( (byte_4C4234F & 1) == 0 )
  {
    sub_1C37058(&BillBoardGroupManager_TypeInfo);
    byte_4C4234F = 1;
  }
  this->fields.cam = pCam;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)pCam, (int32_t)method, v3);
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