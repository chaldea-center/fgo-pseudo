void __fastcall AndroidPermissionManager___ctor(AndroidPermissionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AndroidPermissionManager__CheckPermission(System_String_o *permissionName, const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_Int32_array **Static_string; // x20
  UnityEngine_AndroidJavaClass_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Object_array *v16; // x23
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w0
  int v27; // w8
  _BOOL4 v28; // w24
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 v32; // x0
  System_Int32_array *v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  bool v37; // w21
  UnityEngine_AndroidJavaClass_c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x0
  int v47; // [xsp+0h] [xbp-40h]

  if ( (byte_4354EC4 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_B70694(&Method_UnityEngine_AndroidJavaObject_CallStatic_int___);
    sub_B70694(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&StringLiteral_17827/*"com.unity3d.player.UnityPlayer"*/);
    sub_B70694(&StringLiteral_16580/*"androidx.core.content.ContextCompat"*/);
    sub_B70694(&StringLiteral_17672/*"checkSelfPermission"*/);
    sub_B70694(&StringLiteral_18097/*"currentActivity"*/);
    byte_4354EC4 = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_B70764(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_17827/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  Static_string = (System_Int32_array **)UnityEngine_AndroidJavaObject__GetStatic_string_(
                                           (UnityEngine_AndroidJavaObject_o *)v3,
                                           (System_String_o *)StringLiteral_18097/*"currentActivity"*/,
                                           (const MethodInfo_2BFD8BC *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v7 = (UnityEngine_AndroidJavaClass_o *)sub_B70764(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v7, (System_String_o *)StringLiteral_16580/*"androidx.core.content.ContextCompat"*/, 0LL);
  v8 = sub_B706AC(object___TypeInfo, 2LL);
  v16 = (System_Object_array *)v8;
  if ( !v8 )
    sub_B7076C(0LL, v9);
  if ( Static_string )
  {
    v8 = sub_B70754(Static_string, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
    {
      v45 = sub_B7078C(0LL);
      sub_B70738(v45, 0LL);
    }
  }
  if ( !v16->max_length )
  {
    v43 = sub_B70798(v8);
    sub_B70738(v43, 0LL);
  }
  v16->m_Items[0] = (Il2CppObject *)Static_string;
  sub_B70630((BattleServantConfConponent_o *)v16->m_Items, Static_string, v10, v11, v12, v13, v14, v15);
  if ( permissionName )
  {
    v17 = sub_B70754(permissionName, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v46 = sub_B7078C(0LL);
      sub_B70738(v46, 0LL);
    }
  }
  if ( v16->max_length <= 1 )
  {
    v44 = sub_B70798(v17);
    sub_B70738(v44, 0LL);
  }
  v16->m_Items[1] = (Il2CppObject *)permissionName;
  sub_B70630(
    (BattleServantConfConponent_o *)&v16->m_Items[1],
    (System_Int32_array **)permissionName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !v7 )
    sub_B7076C(v24, v25);
  v26 = UnityEngine_AndroidJavaObject__CallStatic_int_(
          (UnityEngine_AndroidJavaObject_o *)v7,
          (System_String_o *)StringLiteral_17672/*"checkSelfPermission"*/,
          v16,
          (const MethodInfo_2BFCB38 *)Method_UnityEngine_AndroidJavaObject_CallStatic_int___);
  if ( v26 )
    v27 = 97;
  else
    v27 = 99;
  v28 = v26 == 0;
  v47 = v27;
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v32 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v32 = sub_B08590(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v32)(v7, *(_QWORD *)(v32 + 8));
  if ( Static_string )
  {
    v33 = *Static_string;
    if ( HIWORD((*Static_string)->m_Items[67]) )
    {
      v34 = 0LL;
      v35 = (int *)(*(_QWORD *)&v33->m_Items[37] + 8LL);
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        ++v34;
        v35 += 4;
        if ( v34 >= HIWORD((*Static_string)->m_Items[67]) )
          goto LABEL_26;
      }
      v36 = (__int64)&v33->m_Items[4 * *v35 + 71];
    }
    else
    {
LABEL_26:
      v36 = sub_B08590(Static_string, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_Int32_array **, _QWORD))v36)(Static_string, *(_QWORD *)(v36 + 8));
  }
  v37 = v28;
  v38 = v3->klass;
  if ( *(_WORD *)&v3->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&v3->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v41 = (__int64)(&v38->vtable._0_Equals.method + 2 * *v40);
  }
  else
  {
LABEL_33:
    v41 = sub_B08590(v3, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v41)(v3, *(_QWORD *)(v41 + 8));
  if ( v47 == 97 )
    return 0;
  return v37;
}


bool __fastcall AndroidPermissionManager__EnabledRuntimePermission(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  _QWORD **v4; // x21
  __int64 v5; // x20
  __int16 v6; // w8
  __int64 v7; // x20
  __int64 v8; // x20
  __int64 v9; // x20
  bool v10; // w0
  int v11; // w8
  bool v12; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0
  int v18; // [xsp+0h] [xbp-30h]

  if ( (byte_4354EC3 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_B70694(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
    sub_B70694(&Method_System_Array_Empty_object___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&StringLiteral_20388/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/);
    sub_B70694(&StringLiteral_18614/*"enabledRuntimePermission"*/);
    byte_4354EC3 = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_B70764(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_20388/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v4 = (_QWORD **)Method_System_Array_Empty_object___;
  v5 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v6 = *(_WORD *)(v5 + 306);
  if ( (v6 & 1) == 0 )
  {
    v2 = sub_B08394(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v6 = *(_WORD *)(v5 + 306);
  }
  if ( (v6 & 0x400) != 0 )
  {
    v7 = *v4[6];
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      v2 = sub_B08394(*v4[6]);
    if ( !*(_DWORD *)(v7 + 224) )
    {
      v8 = *v4[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_B08394(*v4[6]);
      j_il2cpp_runtime_class_init_0(v8);
    }
  }
  v9 = *v4[6];
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    v2 = sub_B08394(*v4[6]);
  if ( !v1 )
    sub_B7076C(v2, v3);
  v10 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v1,
          (System_String_o *)StringLiteral_18614/*"enabledRuntimePermission"*/,
          **(System_Object_array ***)(v9 + 184),
          (const MethodInfo_2BFCB18 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v10 )
    v11 = 47;
  else
    v11 = 45;
  v12 = v10;
  v18 = v11;
  klass = v1->klass;
  if ( *(_WORD *)&v1->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&v1->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_22:
    v16 = sub_B08590(v1, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v16)(v1, *(_QWORD *)(v16 + 8));
  if ( v18 == 45 )
    return 0;
  return v12;
}


void __fastcall AndroidPermissionManager__RequestPermission(
        System_String_o *permissionName,
        System_String_o *receiverName,
        System_String_o *receiverFunctionName,
        const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Object_array *v16; // x22
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0
  __int64 v32; // x1
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0

  if ( (byte_4354EC6 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&StringLiteral_20388/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/);
    sub_B70694(&StringLiteral_22333/*"sendPermissionRequest"*/);
    byte_4354EC6 = 1;
  }
  v7 = (UnityEngine_AndroidJavaClass_o *)sub_B70764(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v7, (System_String_o *)StringLiteral_20388/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v8 = sub_B706AC(object___TypeInfo, 3LL);
  v16 = (System_Object_array *)v8;
  if ( !v8 )
    sub_B7076C(0LL, v9);
  if ( permissionName )
  {
    v8 = sub_B70754(permissionName, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
    {
      v40 = sub_B7078C(0LL);
      sub_B70738(v40, 0LL);
    }
  }
  if ( !v16->max_length )
  {
    v37 = sub_B70798(v8);
    sub_B70738(v37, 0LL);
  }
  v16->m_Items[0] = (Il2CppObject *)permissionName;
  sub_B70630(
    (BattleServantConfConponent_o *)v16->m_Items,
    (System_Int32_array **)permissionName,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( receiverName )
  {
    v17 = sub_B70754(receiverName, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v41 = sub_B7078C(0LL);
      sub_B70738(v41, 0LL);
    }
  }
  if ( v16->max_length <= 1 )
  {
    v38 = sub_B70798(v17);
    sub_B70738(v38, 0LL);
  }
  v16->m_Items[1] = (Il2CppObject *)receiverName;
  sub_B70630(
    (BattleServantConfConponent_o *)&v16->m_Items[1],
    (System_Int32_array **)receiverName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( receiverFunctionName )
  {
    v24 = sub_B70754(receiverFunctionName, v16->obj.klass->_1.element_class);
    if ( !v24 )
    {
      v42 = sub_B7078C(0LL);
      sub_B70738(v42, 0LL);
    }
  }
  if ( v16->max_length <= 2 )
  {
    v39 = sub_B70798(v24);
    sub_B70738(v39, 0LL);
  }
  v16->m_Items[2] = (Il2CppObject *)receiverFunctionName;
  sub_B70630(
    (BattleServantConfConponent_o *)&v16->m_Items[2],
    (System_Int32_array **)receiverFunctionName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !v7 )
    sub_B7076C(v31, v32);
  UnityEngine_AndroidJavaObject__CallStatic(
    (UnityEngine_AndroidJavaObject_o *)v7,
    (System_String_o *)StringLiteral_22333/*"sendPermissionRequest"*/,
    v16,
    0LL);
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v34 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v34;
      p_offset += 4;
      if ( v34 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_18:
    v36 = sub_B08590(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v36)(v7, *(_QWORD *)(v36 + 8));
}


bool __fastcall AndroidPermissionManager__ShouldShowRequestPermissionRationale(
        System_String_o *permissionName,
        const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  bool v15; // w0
  int v16; // w8
  bool v17; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  int v25; // [xsp+0h] [xbp-30h]

  if ( (byte_4354EC5 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_B70694(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&StringLiteral_22488/*"shouldShowRequestPermissionRationale"*/);
    sub_B70694(&StringLiteral_20388/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/);
    byte_4354EC5 = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_B70764(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_20388/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v4 = sub_B706AC(object___TypeInfo, 1LL);
  v12 = v4;
  if ( !v4 )
    sub_B7076C(0LL, v5);
  if ( permissionName )
  {
    v4 = sub_B70754(permissionName, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
      v24 = sub_B7078C(0LL);
      sub_B70738(v24, 0LL);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
  {
    v23 = sub_B70798(v4);
    sub_B70738(v23, 0LL);
  }
  *(_QWORD *)(v12 + 32) = permissionName;
  sub_B70630(
    (BattleServantConfConponent_o *)(v12 + 32),
    (System_Int32_array **)permissionName,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !v3 )
    sub_B7076C(v13, v14);
  v15 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v3,
          (System_String_o *)StringLiteral_22488/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v12,
          (const MethodInfo_2BFCB18 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v15 )
    v16 = 52;
  else
    v16 = 50;
  v17 = v15;
  v25 = v16;
  klass = v3->klass;
  if ( *(_WORD *)&v3->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&v3->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v21 = sub_B08590(v3, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v21)(v3, *(_QWORD *)(v21 + 8));
  if ( v25 == 50 )
    return 0;
  return v17;
}