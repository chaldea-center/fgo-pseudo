void __fastcall AndroidPermissionManager___ctor(AndroidPermissionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AndroidPermissionManager__CheckPermission(System_String_o *permissionName, const MethodInfo *method)
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
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  UnityEngine_AndroidJavaClass_o *v29; // x19
  __int64 v30; // x0
  __int64 v31; // x1
  System_Int32_array **Static_string; // x20
  UnityEngine_AndroidJavaClass_o *v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Object_array *v42; // x23
  __int64 v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w0
  __int64 v53; // x3
  int v54; // w8
  _BOOL4 v55; // w24
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v57; // x10
  int32_t *p_offset; // x11
  __int64 v59; // x0
  __int64 v60; // x3
  System_Int32_array *v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  bool v65; // w21
  UnityEngine_AndroidJavaClass_c *v66; // x8
  unsigned __int64 v67; // x10
  int32_t *v68; // x11
  __int64 v69; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  __int64 v74; // x0
  int v75; // [xsp+0h] [xbp-40h]

  if ( (byte_42EB70F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AndroidJavaClass_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_AndroidJavaObject_CallStatic_int___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&object___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_17780/*"com.unity3d.player.UnityPlayer"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16536/*"androidx.core.content.ContextCompat"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17625/*"checkSelfPermission"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_18050/*"currentActivity"*/, v26, v27, v28);
    byte_42EB70F = 1;
  }
  v29 = (UnityEngine_AndroidJavaClass_o *)sub_B5D694(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v29, (System_String_o *)StringLiteral_17780/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v29 )
    sub_B5D69C(v30, v31);
  Static_string = (System_Int32_array **)UnityEngine_AndroidJavaObject__GetStatic_string_(
                                           (UnityEngine_AndroidJavaObject_o *)v29,
                                           (System_String_o *)StringLiteral_18050/*"currentActivity"*/,
                                           (const MethodInfo_2CEE38C *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v33 = (UnityEngine_AndroidJavaClass_o *)sub_B5D694(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v33, (System_String_o *)StringLiteral_16536/*"androidx.core.content.ContextCompat"*/, 0LL);
  v34 = sub_B5D5DC(object___TypeInfo, 2LL);
  v42 = (System_Object_array *)v34;
  if ( !v34 )
    sub_B5D69C(0LL, v35);
  if ( Static_string )
  {
    v34 = sub_B5D684(Static_string, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !v34 )
    {
      v73 = sub_B5D6BC(0LL);
      sub_B5D668(v73, 0LL);
    }
  }
  if ( !v42->max_length )
  {
    v71 = sub_B5D6C8(v34);
    sub_B5D668(v71, 0LL);
  }
  v42->m_Items[0] = (Il2CppObject *)Static_string;
  sub_B5D560((BattleServantConfConponent_o *)v42->m_Items, Static_string, v36, v37, v38, v39, v40, v41);
  if ( permissionName )
  {
    v43 = sub_B5D684(permissionName, v42->obj.klass->_1.element_class);
    if ( !v43 )
    {
      v74 = sub_B5D6BC(0LL);
      sub_B5D668(v74, 0LL);
    }
  }
  if ( v42->max_length <= 1 )
  {
    v72 = sub_B5D6C8(v43);
    sub_B5D668(v72, 0LL);
  }
  v42->m_Items[1] = (Il2CppObject *)permissionName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v42->m_Items[1],
    (System_Int32_array **)permissionName,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !v33 )
    sub_B5D69C(v50, v51);
  v52 = UnityEngine_AndroidJavaObject__CallStatic_int_(
          (UnityEngine_AndroidJavaObject_o *)v33,
          (System_String_o *)StringLiteral_17625/*"checkSelfPermission"*/,
          v42,
          (const MethodInfo_2CED608 *)Method_UnityEngine_AndroidJavaObject_CallStatic_int___);
  if ( v52 )
    v54 = 97;
  else
    v54 = 99;
  v55 = v52 == 0;
  v75 = v54;
  klass = v33->klass;
  if ( *(_WORD *)&v33->klass->_2.bitflags1 )
  {
    v57 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v57;
      p_offset += 4;
      if ( v57 >= *(unsigned __int16 *)&v33->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v59 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v59 = sub_AF54C0(v33, System_IDisposable_TypeInfo, 0LL, v53);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v59)(v33, *(_QWORD *)(v59 + 8));
  if ( Static_string )
  {
    v61 = *Static_string;
    if ( HIWORD((*Static_string)->m_Items[67]) )
    {
      v62 = 0LL;
      v63 = (int *)(*(_QWORD *)&v61->m_Items[37] + 8LL);
      while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
      {
        ++v62;
        v63 += 4;
        if ( v62 >= HIWORD((*Static_string)->m_Items[67]) )
          goto LABEL_26;
      }
      v64 = (__int64)&v61->m_Items[4 * *v63 + 71];
    }
    else
    {
LABEL_26:
      v64 = sub_AF54C0(Static_string, System_IDisposable_TypeInfo, 0LL, v60);
    }
    (*(void (__fastcall **)(System_Int32_array **, _QWORD))v64)(Static_string, *(_QWORD *)(v64 + 8));
  }
  v65 = v55;
  v66 = v29->klass;
  if ( *(_WORD *)&v29->klass->_2.bitflags1 )
  {
    v67 = 0LL;
    v68 = &v66->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      ++v67;
      v68 += 4;
      if ( v67 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v69 = (__int64)(&v66->vtable._0_Equals.method + 2 * *v68);
  }
  else
  {
LABEL_33:
    v69 = sub_AF54C0(v29, System_IDisposable_TypeInfo, 0LL, v60);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v69)(v29, *(_QWORD *)(v69 + 8));
  if ( v75 == 97 )
    return 0;
  return v65;
}


bool __fastcall AndroidPermissionManager__EnabledRuntimePermission(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_AndroidJavaClass_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  _QWORD **v22; // x21
  __int64 v23; // x20
  __int16 v24; // w8
  __int64 v25; // x20
  __int64 v26; // x20
  __int64 v27; // x20
  bool v28; // w0
  __int64 v29; // x3
  int v30; // w8
  bool v31; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 v35; // x0
  int v37; // [xsp+0h] [xbp-30h]

  if ( (byte_42EB70E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AndroidJavaClass_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v4, v5, v6);
    sub_B5D5C4(&Method_System_Array_Empty_object___, v7, v8, v9);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_20328/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_18564/*"enabledRuntimePermission"*/, v16, v17, v18);
    byte_42EB70E = 1;
  }
  v19 = (UnityEngine_AndroidJavaClass_o *)sub_B5D694(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v19, (System_String_o *)StringLiteral_20328/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v22 = (_QWORD **)Method_System_Array_Empty_object___;
  v23 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v24 = *(_WORD *)(v23 + 306);
  if ( (v24 & 1) == 0 )
  {
    v20 = sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v24 = *(_WORD *)(v23 + 306);
  }
  if ( (v24 & 0x400) != 0 )
  {
    v25 = *v22[6];
    if ( (*(_BYTE *)(v25 + 306) & 1) == 0 )
      v20 = sub_AF52C4(*v22[6]);
    if ( !*(_DWORD *)(v25 + 224) )
    {
      v26 = *v22[6];
      if ( (*(_BYTE *)(v26 + 306) & 1) == 0 )
        sub_AF52C4(*v22[6]);
      j_il2cpp_runtime_class_init_0(v26);
    }
  }
  v27 = *v22[6];
  if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
    v20 = sub_AF52C4(*v22[6]);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v28 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v19,
          (System_String_o *)StringLiteral_18564/*"enabledRuntimePermission"*/,
          **(System_Object_array ***)(v27 + 184),
          (const MethodInfo_2CED5E8 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v28 )
    v30 = 47;
  else
    v30 = 45;
  v31 = v28;
  v37 = v30;
  klass = v19->klass;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v35 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_22:
    v35 = sub_AF54C0(v19, System_IDisposable_TypeInfo, 0LL, v29);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v35)(v19, *(_QWORD *)(v35 + 8));
  if ( v37 == 45 )
    return 0;
  return v31;
}


void __fastcall AndroidPermissionManager__RequestPermission(
        System_String_o *permissionName,
        System_String_o *receiverName,
        System_String_o *receiverFunctionName,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_AndroidJavaClass_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Object_array *v28; // x22
  __int64 v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x3
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x0

  if ( (byte_42EB711 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AndroidJavaClass_TypeInfo, (_DWORD)receiverName, (_DWORD)receiverFunctionName, method);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&object___TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_20328/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_22265/*"sendPermissionRequest"*/, v16, v17, v18);
    byte_42EB711 = 1;
  }
  v19 = (UnityEngine_AndroidJavaClass_o *)sub_B5D694(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v19, (System_String_o *)StringLiteral_20328/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v20 = sub_B5D5DC(object___TypeInfo, 3LL);
  v28 = (System_Object_array *)v20;
  if ( !v20 )
    sub_B5D69C(0LL, v21);
  if ( permissionName )
  {
    v20 = sub_B5D684(permissionName, *(_QWORD *)(*(_QWORD *)v20 + 64LL));
    if ( !v20 )
    {
      v53 = sub_B5D6BC(0LL);
      sub_B5D668(v53, 0LL);
    }
  }
  if ( !v28->max_length )
  {
    v50 = sub_B5D6C8(v20);
    sub_B5D668(v50, 0LL);
  }
  v28->m_Items[0] = (Il2CppObject *)permissionName;
  sub_B5D560(
    (BattleServantConfConponent_o *)v28->m_Items,
    (System_Int32_array **)permissionName,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( receiverName )
  {
    v29 = sub_B5D684(receiverName, v28->obj.klass->_1.element_class);
    if ( !v29 )
    {
      v54 = sub_B5D6BC(0LL);
      sub_B5D668(v54, 0LL);
    }
  }
  if ( v28->max_length <= 1 )
  {
    v51 = sub_B5D6C8(v29);
    sub_B5D668(v51, 0LL);
  }
  v28->m_Items[1] = (Il2CppObject *)receiverName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v28->m_Items[1],
    (System_Int32_array **)receiverName,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( receiverFunctionName )
  {
    v36 = sub_B5D684(receiverFunctionName, v28->obj.klass->_1.element_class);
    if ( !v36 )
    {
      v55 = sub_B5D6BC(0LL);
      sub_B5D668(v55, 0LL);
    }
  }
  if ( v28->max_length <= 2 )
  {
    v52 = sub_B5D6C8(v36);
    sub_B5D668(v52, 0LL);
  }
  v28->m_Items[2] = (Il2CppObject *)receiverFunctionName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v28->m_Items[2],
    (System_Int32_array **)receiverFunctionName,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !v19 )
    sub_B5D69C(v43, v44);
  UnityEngine_AndroidJavaObject__CallStatic(
    (UnityEngine_AndroidJavaObject_o *)v19,
    (System_String_o *)StringLiteral_22265/*"sendPermissionRequest"*/,
    v28,
    0LL);
  klass = v19->klass;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v47 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v47;
      p_offset += 4;
      if ( v47 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v49 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_18:
    v49 = sub_AF54C0(v19, System_IDisposable_TypeInfo, 0LL, v45);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v49)(v19, *(_QWORD *)(v49 + 8));
}


bool __fastcall AndroidPermissionManager__ShouldShowRequestPermissionRationale(
        System_String_o *permissionName,
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
  UnityEngine_AndroidJavaClass_o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  bool v32; // w0
  __int64 v33; // x3
  int v34; // w8
  bool v35; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 v39; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  int v43; // [xsp+0h] [xbp-30h]

  if ( (byte_42EB710 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AndroidJavaClass_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v5, v6, v7);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&object___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_22418/*"shouldShowRequestPermissionRationale"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_20328/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v17, v18, v19);
    byte_42EB710 = 1;
  }
  v20 = (UnityEngine_AndroidJavaClass_o *)sub_B5D694(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v20, (System_String_o *)StringLiteral_20328/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v21 = sub_B5D5DC(object___TypeInfo, 1LL);
  v29 = v21;
  if ( !v21 )
    sub_B5D69C(0LL, v22);
  if ( permissionName )
  {
    v21 = sub_B5D684(permissionName, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
    if ( !v21 )
    {
      v42 = sub_B5D6BC(0LL);
      sub_B5D668(v42, 0LL);
    }
  }
  if ( !*(_DWORD *)(v29 + 24) )
  {
    v41 = sub_B5D6C8(v21);
    sub_B5D668(v41, 0LL);
  }
  *(_QWORD *)(v29 + 32) = permissionName;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v29 + 32),
    (System_Int32_array **)permissionName,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( !v20 )
    sub_B5D69C(v30, v31);
  v32 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v20,
          (System_String_o *)StringLiteral_22418/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v29,
          (const MethodInfo_2CED5E8 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v32 )
    v34 = 52;
  else
    v34 = 50;
  v35 = v32;
  v43 = v34;
  klass = v20->klass;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      p_offset += 4;
      if ( v37 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v39 = sub_AF54C0(v20, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v39)(v20, *(_QWORD *)(v39 + 8));
  if ( v43 == 50 )
    return 0;
  return v35;
}