void __fastcall AndroidPermissionManager___ctor(AndroidPermissionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AndroidPermissionManager__CheckPermission(System_String_o *permissionName, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_AndroidJavaClass_o *v12; // x19
  __int64 v13; // x0
  System_Int32_array **Static_string; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_AndroidJavaClass_o *v17; // x21
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Object_array *v25; // x23
  __int64 v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  int32_t v34; // w0
  int v35; // w8
  _BOOL4 v36; // w24
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 v40; // x0
  System_Int32_array *v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  bool v45; // w21
  UnityEngine_AndroidJavaClass_c *v46; // x8
  unsigned __int64 v47; // x10
  int32_t *v48; // x11
  __int64 v49; // x0
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  int v55; // [xsp+0h] [xbp-40h]

  if ( (byte_4217379 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_AndroidJavaObject_CallStatic_int___, v4);
    sub_B0D8A4(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___, v5);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v6);
    sub_B0D8A4(&object___TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_17617/*"com.unity3d.player.UnityPlayer"*/, v8);
    sub_B0D8A4(&StringLiteral_16387/*"androidx.core.content.ContextCompat"*/, v9);
    sub_B0D8A4(&StringLiteral_17462/*"checkSelfPermission"*/, v10);
    sub_B0D8A4(&StringLiteral_17887/*"currentActivity"*/, v11);
    byte_4217379 = 1;
  }
  v12 = (UnityEngine_AndroidJavaClass_o *)sub_B0D974(UnityEngine_AndroidJavaClass_TypeInfo, method, v2);
  UnityEngine_AndroidJavaClass___ctor(v12, (System_String_o *)StringLiteral_17617/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  Static_string = (System_Int32_array **)UnityEngine_AndroidJavaObject__GetStatic_string_(
                                           (UnityEngine_AndroidJavaObject_o *)v12,
                                           (System_String_o *)StringLiteral_17887/*"currentActivity"*/,
                                           (const MethodInfo_2D97CCC *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v17 = (UnityEngine_AndroidJavaClass_o *)sub_B0D974(UnityEngine_AndroidJavaClass_TypeInfo, v15, v16);
  UnityEngine_AndroidJavaClass___ctor(v17, (System_String_o *)StringLiteral_16387/*"androidx.core.content.ContextCompat"*/, 0LL);
  v18 = sub_B0D8BC(object___TypeInfo, 2LL);
  v25 = (System_Object_array *)v18;
  if ( !v18 )
    sub_B0D97C(0LL);
  if ( Static_string )
  {
    v18 = sub_B0D964(Static_string, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v18 )
    {
      v53 = sub_B0D99C(0LL);
      sub_B0D948(v53, 0LL);
    }
  }
  if ( !v25->max_length )
  {
    v51 = sub_B0D9A8(v18);
    sub_B0D948(v51, 0LL);
  }
  v25->m_Items[0] = (Il2CppObject *)Static_string;
  sub_B0D840((BattleServantConfConponent_o *)v25->m_Items, Static_string, v19, v20, v21, v22, v23, v24);
  if ( permissionName )
  {
    v26 = sub_B0D964(permissionName, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
      v54 = sub_B0D99C(0LL);
      sub_B0D948(v54, 0LL);
    }
  }
  if ( v25->max_length <= 1 )
  {
    v52 = sub_B0D9A8(v26);
    sub_B0D948(v52, 0LL);
  }
  v25->m_Items[1] = (Il2CppObject *)permissionName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v25->m_Items[1],
    (System_Int32_array **)permissionName,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !v17 )
    sub_B0D97C(v33);
  v34 = UnityEngine_AndroidJavaObject__CallStatic_int_(
          (UnityEngine_AndroidJavaObject_o *)v17,
          (System_String_o *)StringLiteral_17462/*"checkSelfPermission"*/,
          v25,
          (const MethodInfo_2D96F48 *)Method_UnityEngine_AndroidJavaObject_CallStatic_int___);
  if ( v34 )
    v35 = 97;
  else
    v35 = 99;
  v36 = v34 == 0;
  v55 = v35;
  klass = v17->klass;
  if ( *(_WORD *)&v17->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      p_offset += 4;
      if ( v38 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v40 = sub_AA67A0(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v40)(v17, *(_QWORD *)(v40 + 8));
  if ( Static_string )
  {
    v41 = *Static_string;
    if ( HIWORD((*Static_string)->m_Items[67]) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)&v41->m_Items[37] + 8LL);
      while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= HIWORD((*Static_string)->m_Items[67]) )
          goto LABEL_26;
      }
      v44 = (__int64)&v41->m_Items[4 * *v43 + 71];
    }
    else
    {
LABEL_26:
      v44 = sub_AA67A0(Static_string, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Int32_array **, _QWORD))v44)(Static_string, *(_QWORD *)(v44 + 8));
  }
  v45 = v36;
  v46 = v12->klass;
  if ( *(_WORD *)&v12->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      v48 += 4;
      if ( v47 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v49 = (__int64)(&v46->vtable._0_Equals.method + 2 * *v48);
  }
  else
  {
LABEL_33:
    v49 = sub_AA67A0(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v49)(v12, *(_QWORD *)(v49 + 8));
  if ( v55 == 97 )
    return 0;
  return v45;
}


bool __fastcall AndroidPermissionManager__EnabledRuntimePermission(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_AndroidJavaClass_o *v8; // x19
  __int64 v9; // x0
  _QWORD **v10; // x21
  __int64 v11; // x20
  __int16 v12; // w8
  __int64 v13; // x20
  __int64 v14; // x20
  __int64 v15; // x20
  bool v16; // w0
  int v17; // w8
  bool v18; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0
  int v24; // [xsp+0h] [xbp-30h]

  if ( (byte_4217378 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AndroidJavaClass_TypeInfo, v1);
    sub_B0D8A4(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v3);
    sub_B0D8A4(&Method_System_Array_Empty_object___, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_20137/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v6);
    sub_B0D8A4(&StringLiteral_18392/*"enabledRuntimePermission"*/, v7);
    byte_4217378 = 1;
  }
  v8 = (UnityEngine_AndroidJavaClass_o *)sub_B0D974(UnityEngine_AndroidJavaClass_TypeInfo, v1, v2);
  UnityEngine_AndroidJavaClass___ctor(v8, (System_String_o *)StringLiteral_20137/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v10 = (_QWORD **)Method_System_Array_Empty_object___;
  v11 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v12 = *(_WORD *)(v11 + 306);
  if ( (v12 & 1) == 0 )
  {
    v9 = sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v12 = *(_WORD *)(v11 + 306);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = *v10[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      v9 = sub_AA65A4(*v10[6]);
    if ( !*(_DWORD *)(v13 + 224) )
    {
      v14 = *v10[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_AA65A4(*v10[6]);
      j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = *v10[6];
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    v9 = sub_AA65A4(*v10[6]);
  if ( !v8 )
    sub_B0D97C(v9);
  v16 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v8,
          (System_String_o *)StringLiteral_18392/*"enabledRuntimePermission"*/,
          **(System_Object_array ***)(v15 + 184),
          (const MethodInfo_2D96F28 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v16 )
    v17 = 47;
  else
    v17 = 45;
  v18 = v16;
  v24 = v17;
  klass = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_22:
    v22 = sub_AA67A0(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v22)(v8, *(_QWORD *)(v22 + 8));
  if ( v24 == 45 )
    return 0;
  return v18;
}


void __fastcall AndroidPermissionManager__RequestPermission(
        System_String_o *permissionName,
        System_String_o *receiverName,
        System_String_o *receiverFunctionName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_AndroidJavaClass_o *v11; // x19
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Object_array *v19; // x22
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x0
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v36; // x10
  int32_t *p_offset; // x11
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0

  if ( (byte_421737B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AndroidJavaClass_TypeInfo, receiverName);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&object___TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_20137/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v9);
    sub_B0D8A4(&StringLiteral_22039/*"sendPermissionRequest"*/, v10);
    byte_421737B = 1;
  }
  v11 = (UnityEngine_AndroidJavaClass_o *)sub_B0D974(
                                            UnityEngine_AndroidJavaClass_TypeInfo,
                                            receiverName,
                                            receiverFunctionName);
  UnityEngine_AndroidJavaClass___ctor(v11, (System_String_o *)StringLiteral_20137/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v12 = sub_B0D8BC(object___TypeInfo, 3LL);
  v19 = (System_Object_array *)v12;
  if ( !v12 )
    sub_B0D97C(0LL);
  if ( permissionName )
  {
    v12 = sub_B0D964(permissionName, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
    if ( !v12 )
    {
      v42 = sub_B0D99C(0LL);
      sub_B0D948(v42, 0LL);
    }
  }
  if ( !v19->max_length )
  {
    v39 = sub_B0D9A8(v12);
    sub_B0D948(v39, 0LL);
  }
  v19->m_Items[0] = (Il2CppObject *)permissionName;
  sub_B0D840(
    (BattleServantConfConponent_o *)v19->m_Items,
    (System_Int32_array **)permissionName,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( receiverName )
  {
    v20 = sub_B0D964(receiverName, v19->obj.klass->_1.element_class);
    if ( !v20 )
    {
      v43 = sub_B0D99C(0LL);
      sub_B0D948(v43, 0LL);
    }
  }
  if ( v19->max_length <= 1 )
  {
    v40 = sub_B0D9A8(v20);
    sub_B0D948(v40, 0LL);
  }
  v19->m_Items[1] = (Il2CppObject *)receiverName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v19->m_Items[1],
    (System_Int32_array **)receiverName,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( receiverFunctionName )
  {
    v27 = sub_B0D964(receiverFunctionName, v19->obj.klass->_1.element_class);
    if ( !v27 )
    {
      v44 = sub_B0D99C(0LL);
      sub_B0D948(v44, 0LL);
    }
  }
  if ( v19->max_length <= 2 )
  {
    v41 = sub_B0D9A8(v27);
    sub_B0D948(v41, 0LL);
  }
  v19->m_Items[2] = (Il2CppObject *)receiverFunctionName;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v19->m_Items[2],
    (System_Int32_array **)receiverFunctionName,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( !v11 )
    sub_B0D97C(v34);
  UnityEngine_AndroidJavaObject__CallStatic(
    (UnityEngine_AndroidJavaObject_o *)v11,
    (System_String_o *)StringLiteral_22039/*"sendPermissionRequest"*/,
    v19,
    0LL);
  klass = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v36 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v36;
      p_offset += 4;
      if ( v36 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v38 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_18:
    v38 = sub_AA67A0(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v38)(v11, *(_QWORD *)(v38 + 8));
}


bool __fastcall AndroidPermissionManager__ShouldShowRequestPermissionRationale(
        System_String_o *permissionName,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_AndroidJavaClass_o *v9; // x19
  __int64 v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x21
  __int64 v18; // x0
  bool v19; // w0
  int v20; // w8
  bool v21; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  int v29; // [xsp+0h] [xbp-30h]

  if ( (byte_421737A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&object___TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_22191/*"shouldShowRequestPermissionRationale"*/, v7);
    sub_B0D8A4(&StringLiteral_20137/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v8);
    byte_421737A = 1;
  }
  v9 = (UnityEngine_AndroidJavaClass_o *)sub_B0D974(UnityEngine_AndroidJavaClass_TypeInfo, method, v2);
  UnityEngine_AndroidJavaClass___ctor(v9, (System_String_o *)StringLiteral_20137/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v10 = sub_B0D8BC(object___TypeInfo, 1LL);
  v17 = v10;
  if ( !v10 )
    sub_B0D97C(0LL);
  if ( permissionName )
  {
    v10 = sub_B0D964(permissionName, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
    if ( !v10 )
    {
      v28 = sub_B0D99C(0LL);
      sub_B0D948(v28, 0LL);
    }
  }
  if ( !*(_DWORD *)(v17 + 24) )
  {
    v27 = sub_B0D9A8(v10);
    sub_B0D948(v27, 0LL);
  }
  *(_QWORD *)(v17 + 32) = permissionName;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v17 + 32),
    (System_Int32_array **)permissionName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !v9 )
    sub_B0D97C(v18);
  v19 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v9,
          (System_String_o *)StringLiteral_22191/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v17,
          (const MethodInfo_2D96F28 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v19 )
    v20 = 52;
  else
    v20 = 50;
  v21 = v19;
  v29 = v20;
  klass = v9->klass;
  if ( *(_WORD *)&v9->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v25 = sub_AA67A0(v9, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v25)(v9, *(_QWORD *)(v25 + 8));
  if ( v29 == 50 )
    return 0;
  return v21;
}