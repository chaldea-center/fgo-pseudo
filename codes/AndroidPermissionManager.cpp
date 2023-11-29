void __fastcall AndroidPermissionManager___ctor(AndroidPermissionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AndroidPermissionManager__CheckPermission(System_String_o *permissionName, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_AndroidJavaClass_o *v14; // x19
  System_Int32_array **Static_string; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  UnityEngine_AndroidJavaClass_o *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Object_array *v30; // x23
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t v39; // w0
  int v40; // w8
  _BOOL4 v41; // w24
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 v45; // x0
  System_Int32_array *v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  bool v50; // w21
  UnityEngine_AndroidJavaClass_c *v51; // x8
  unsigned __int64 v52; // x10
  int32_t *v53; // x11
  __int64 v54; // x0
  int v56; // [xsp+0h] [xbp-40h]

  if ( (byte_40FC98A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_AndroidJavaObject_CallStatic_int___, v6);
    sub_B16FFC(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&object___TypeInfo, v9);
    sub_B16FFC(&StringLiteral_17494, v10);
    sub_B16FFC(&StringLiteral_16273, v11);
    sub_B16FFC(&StringLiteral_17341, v12);
    sub_B16FFC(&StringLiteral_17763, v13);
    byte_40FC98A = 1;
  }
  v14 = (UnityEngine_AndroidJavaClass_o *)sub_B170CC(UnityEngine_AndroidJavaClass_TypeInfo, method, v2, v3, v4);
  UnityEngine_AndroidJavaClass___ctor(v14, (System_String_o *)StringLiteral_17494, 0LL);
  if ( !v14 )
    sub_B170D4();
  Static_string = (System_Int32_array **)UnityEngine_AndroidJavaObject__GetStatic_string_(
                                           (UnityEngine_AndroidJavaObject_o *)v14,
                                           (System_String_o *)StringLiteral_17763,
                                           (const MethodInfo_2D3B540 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v20 = (UnityEngine_AndroidJavaClass_o *)sub_B170CC(UnityEngine_AndroidJavaClass_TypeInfo, v16, v17, v18, v19);
  UnityEngine_AndroidJavaClass___ctor(v20, (System_String_o *)StringLiteral_16273, 0LL);
  v22 = sub_B17014(object___TypeInfo, 2LL, v21);
  v30 = (System_Object_array *)v22;
  if ( !v22 )
    sub_B170D4();
  if ( Static_string )
  {
    v22 = sub_B170BC(Static_string, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
    if ( !v22 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v30->max_length )
  {
    sub_B17100(v22, v23, v24);
    sub_B170A0();
  }
  v30->m_Items[0] = (Il2CppObject *)Static_string;
  sub_B16F98((BattleServantConfConponent_o *)v30->m_Items, Static_string, v24, v25, v26, v27, v28, v29);
  if ( permissionName )
  {
    v31 = sub_B170BC(permissionName, v30->obj.klass->_1.element_class);
    if ( !v31 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( v30->max_length <= 1 )
  {
    sub_B17100(v31, v32, v33);
    sub_B170A0();
  }
  v30->m_Items[1] = (Il2CppObject *)permissionName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v30->m_Items[1],
    (System_Int32_array **)permissionName,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !v20 )
    sub_B170D4();
  v39 = UnityEngine_AndroidJavaObject__CallStatic_int_(
          (UnityEngine_AndroidJavaObject_o *)v20,
          (System_String_o *)StringLiteral_17341,
          v30,
          (const MethodInfo_2D3A7BC *)Method_UnityEngine_AndroidJavaObject_CallStatic_int___);
  if ( v39 )
    v40 = 97;
  else
    v40 = 99;
  v41 = v39 == 0;
  v56 = v40;
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v43 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v43;
      p_offset += 4;
      if ( v43 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v45 = sub_AAFEF8(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v45)(v20, *(_QWORD *)(v45 + 8));
  if ( Static_string )
  {
    v46 = *Static_string;
    if ( HIWORD((*Static_string)->m_Items[67]) )
    {
      v47 = 0LL;
      v48 = (int *)(*(_QWORD *)&v46->m_Items[37] + 8LL);
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= HIWORD((*Static_string)->m_Items[67]) )
          goto LABEL_26;
      }
      v49 = (__int64)&v46->m_Items[4 * *v48 + 71];
    }
    else
    {
LABEL_26:
      v49 = sub_AAFEF8(Static_string, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Int32_array **, _QWORD))v49)(Static_string, *(_QWORD *)(v49 + 8));
  }
  v50 = v41;
  v51 = v14->klass;
  if ( *(_WORD *)&v14->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    v53 = &v51->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      ++v52;
      v53 += 4;
      if ( v52 >= *(unsigned __int16 *)&v14->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v54 = (__int64)(&v51->vtable._0_Equals.method + 2 * *v53);
  }
  else
  {
LABEL_33:
    v54 = sub_AAFEF8(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v54)(v14, *(_QWORD *)(v54 + 8));
  if ( v56 == 97 )
    return 0;
  return v50;
}


bool __fastcall AndroidPermissionManager__EnabledRuntimePermission(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_AndroidJavaClass_o *v10; // x19
  _QWORD **v11; // x21
  __int64 v12; // x20
  __int16 v13; // w8
  __int64 v14; // x20
  __int64 v15; // x20
  __int64 v16; // x20
  bool v17; // w0
  int v18; // w8
  bool v19; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0
  int v25; // [xsp+0h] [xbp-30h]

  if ( (byte_40FC989 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AndroidJavaClass_TypeInfo, v1);
    sub_B16FFC(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v5);
    sub_B16FFC(&Method_System_Array_Empty_object___, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_19991, v8);
    sub_B16FFC(&StringLiteral_18266, v9);
    byte_40FC989 = 1;
  }
  v10 = (UnityEngine_AndroidJavaClass_o *)sub_B170CC(UnityEngine_AndroidJavaClass_TypeInfo, v1, v2, v3, v4);
  UnityEngine_AndroidJavaClass___ctor(v10, (System_String_o *)StringLiteral_19991, 0LL);
  v11 = (_QWORD **)Method_System_Array_Empty_object___;
  v12 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v13 = *(_WORD *)(v12 + 306);
  if ( (v13 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v13 = *(_WORD *)(v12 + 306);
  }
  if ( (v13 & 0x400) != 0 )
  {
    v14 = *v11[6];
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AAFCFC(*v11[6]);
    if ( !*(_DWORD *)(v14 + 224) )
    {
      v15 = *v11[6];
      if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
        sub_AAFCFC(*v11[6]);
      j_il2cpp_runtime_class_init_0(v15);
    }
  }
  v16 = *v11[6];
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AAFCFC(*v11[6]);
  if ( !v10 )
    sub_B170D4();
  v17 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v10,
          (System_String_o *)StringLiteral_18266,
          **(System_Object_array ***)(v16 + 184),
          (const MethodInfo_2D3A79C *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v17 )
    v18 = 47;
  else
    v18 = 45;
  v19 = v17;
  v25 = v18;
  klass = v10->klass;
  if ( *(_WORD *)&v10->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&v10->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_22:
    v23 = sub_AAFEF8(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v23)(v10, *(_QWORD *)(v23 + 8));
  if ( v25 == 45 )
    return 0;
  return v19;
}


void __fastcall AndroidPermissionManager__RequestPermission(
        System_String_o *permissionName,
        System_String_o *receiverName,
        System_String_o *receiverFunctionName,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_AndroidJavaClass_o *v12; // x19
  __int64 v13; // x2
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Object_array *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 v42; // x0

  if ( (byte_40FC98C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AndroidJavaClass_TypeInfo, receiverName);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&object___TypeInfo, v9);
    sub_B16FFC(&StringLiteral_19991, v10);
    sub_B16FFC(&StringLiteral_21874, v11);
    byte_40FC98C = 1;
  }
  v12 = (UnityEngine_AndroidJavaClass_o *)sub_B170CC(
                                            UnityEngine_AndroidJavaClass_TypeInfo,
                                            receiverName,
                                            receiverFunctionName,
                                            method,
                                            v4);
  UnityEngine_AndroidJavaClass___ctor(v12, (System_String_o *)StringLiteral_19991, 0LL);
  v14 = sub_B17014(object___TypeInfo, 3LL, v13);
  v22 = (System_Object_array *)v14;
  if ( !v14 )
    sub_B170D4();
  if ( permissionName )
  {
    v14 = sub_B170BC(permissionName, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
    if ( !v14 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v22->max_length )
  {
    sub_B17100(v14, v15, v16);
    sub_B170A0();
  }
  v22->m_Items[0] = (Il2CppObject *)permissionName;
  sub_B16F98(
    (BattleServantConfConponent_o *)v22->m_Items,
    (System_Int32_array **)permissionName,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( receiverName )
  {
    v23 = sub_B170BC(receiverName, v22->obj.klass->_1.element_class);
    if ( !v23 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( v22->max_length <= 1 )
  {
    sub_B17100(v23, v24, v25);
    sub_B170A0();
  }
  v22->m_Items[1] = (Il2CppObject *)receiverName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v22->m_Items[1],
    (System_Int32_array **)receiverName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( receiverFunctionName )
  {
    v31 = sub_B170BC(receiverFunctionName, v22->obj.klass->_1.element_class);
    if ( !v31 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( v22->max_length <= 2 )
  {
    sub_B17100(v31, v32, v33);
    sub_B170A0();
  }
  v22->m_Items[2] = (Il2CppObject *)receiverFunctionName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v22->m_Items[2],
    (System_Int32_array **)receiverFunctionName,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !v12 )
    sub_B170D4();
  UnityEngine_AndroidJavaObject__CallStatic(
    (UnityEngine_AndroidJavaObject_o *)v12,
    (System_String_o *)StringLiteral_21874,
    v22,
    0LL);
  klass = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v40 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      p_offset += 4;
      if ( v40 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v42 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_18:
    v42 = sub_AAFEF8(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v42)(v12, *(_QWORD *)(v42 + 8));
}


bool __fastcall AndroidPermissionManager__ShouldShowRequestPermissionRationale(
        System_String_o *permissionName,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_AndroidJavaClass_o *v11; // x19
  __int64 v12; // x2
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x21
  bool v22; // w0
  int v23; // w8
  bool v24; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 v28; // x0
  int v30; // [xsp+0h] [xbp-30h]

  if ( (byte_40FC98B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&object___TypeInfo, v8);
    sub_B16FFC(&StringLiteral_22024, v9);
    sub_B16FFC(&StringLiteral_19991, v10);
    byte_40FC98B = 1;
  }
  v11 = (UnityEngine_AndroidJavaClass_o *)sub_B170CC(UnityEngine_AndroidJavaClass_TypeInfo, method, v2, v3, v4);
  UnityEngine_AndroidJavaClass___ctor(v11, (System_String_o *)StringLiteral_19991, 0LL);
  v13 = sub_B17014(object___TypeInfo, 1LL, v12);
  v21 = v13;
  if ( !v13 )
    sub_B170D4();
  if ( permissionName )
  {
    v13 = sub_B170BC(permissionName, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !v13 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !*(_DWORD *)(v21 + 24) )
  {
    sub_B17100(v13, v14, v15);
    sub_B170A0();
  }
  *(_QWORD *)(v21 + 32) = permissionName;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v21 + 32),
    (System_Int32_array **)permissionName,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( !v11 )
    sub_B170D4();
  v22 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v11,
          (System_String_o *)StringLiteral_22024,
          (System_Object_array *)v21,
          (const MethodInfo_2D3A79C *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v22 )
    v23 = 52;
  else
    v23 = 50;
  v24 = v22;
  v30 = v23;
  klass = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v26 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v26;
      p_offset += 4;
      if ( v26 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v28 = sub_AAFEF8(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v28)(v11, *(_QWORD *)(v28 + 8));
  if ( v30 == 50 )
    return 0;
  return v24;
}