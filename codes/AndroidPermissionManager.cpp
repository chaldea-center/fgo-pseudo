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
  __int64 v27; // x3
  int v28; // w8
  _BOOL4 v29; // w24
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 v33; // x0
  __int64 v34; // x3
  System_Int32_array *v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  bool v39; // w21
  UnityEngine_AndroidJavaClass_c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x0
  int v49; // [xsp+0h] [xbp-40h]

  if ( (byte_42B2D2D & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_B52984(&Method_UnityEngine_AndroidJavaObject_CallStatic_int___);
    sub_B52984(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&StringLiteral_17686/*"com.unity3d.player.UnityPlayer"*/);
    sub_B52984(&StringLiteral_16450/*"androidx.core.content.ContextCompat"*/);
    sub_B52984(&StringLiteral_17531/*"checkSelfPermission"*/);
    sub_B52984(&StringLiteral_17956/*"currentActivity"*/);
    byte_42B2D2D = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_B52A54(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_17686/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  Static_string = (System_Int32_array **)UnityEngine_AndroidJavaObject__GetStatic_string_(
                                           (UnityEngine_AndroidJavaObject_o *)v3,
                                           (System_String_o *)StringLiteral_17956/*"currentActivity"*/,
                                           (const MethodInfo_2D62CA8 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v7 = (UnityEngine_AndroidJavaClass_o *)sub_B52A54(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v7, (System_String_o *)StringLiteral_16450/*"androidx.core.content.ContextCompat"*/, 0LL);
  v8 = sub_B5299C(object___TypeInfo, 2LL);
  v16 = (System_Object_array *)v8;
  if ( !v8 )
    sub_B52A5C(0LL, v9);
  if ( Static_string )
  {
    v8 = sub_B52A44(Static_string, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
    {
      v47 = sub_B52A7C(0LL);
      sub_B52A28(v47, 0LL);
    }
  }
  if ( !v16->max_length )
  {
    v45 = sub_B52A88(v8);
    sub_B52A28(v45, 0LL);
  }
  v16->m_Items[0] = (Il2CppObject *)Static_string;
  sub_B52920((BattleServantConfConponent_o *)v16->m_Items, Static_string, v10, v11, v12, v13, v14, v15);
  if ( permissionName )
  {
    v17 = sub_B52A44(permissionName, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v48 = sub_B52A7C(0LL);
      sub_B52A28(v48, 0LL);
    }
  }
  if ( v16->max_length <= 1 )
  {
    v46 = sub_B52A88(v17);
    sub_B52A28(v46, 0LL);
  }
  v16->m_Items[1] = (Il2CppObject *)permissionName;
  sub_B52920(
    (BattleServantConfConponent_o *)&v16->m_Items[1],
    (System_Int32_array **)permissionName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !v7 )
    sub_B52A5C(v24, v25);
  v26 = UnityEngine_AndroidJavaObject__CallStatic_int_(
          (UnityEngine_AndroidJavaObject_o *)v7,
          (System_String_o *)StringLiteral_17531/*"checkSelfPermission"*/,
          v16,
          (const MethodInfo_2D61F24 *)Method_UnityEngine_AndroidJavaObject_CallStatic_int___);
  if ( v26 )
    v28 = 97;
  else
    v28 = 99;
  v29 = v26 == 0;
  v49 = v28;
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v31 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v31;
      p_offset += 4;
      if ( v31 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v33 = sub_AEB880(v7, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v33)(v7, *(_QWORD *)(v33 + 8));
  if ( Static_string )
  {
    v35 = *Static_string;
    if ( HIWORD((*Static_string)->m_Items[67]) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)&v35->m_Items[37] + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= HIWORD((*Static_string)->m_Items[67]) )
          goto LABEL_26;
      }
      v38 = (__int64)&v35->m_Items[4 * *v37 + 71];
    }
    else
    {
LABEL_26:
      v38 = sub_AEB880(Static_string, System_IDisposable_TypeInfo, 0LL, v34);
    }
    (*(void (__fastcall **)(System_Int32_array **, _QWORD))v38)(Static_string, *(_QWORD *)(v38 + 8));
  }
  v39 = v29;
  v40 = v3->klass;
  if ( *(_WORD *)&v3->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)&v3->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v42);
  }
  else
  {
LABEL_33:
    v43 = sub_AEB880(v3, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v43)(v3, *(_QWORD *)(v43 + 8));
  if ( v49 == 97 )
    return 0;
  return v39;
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
  __int64 v11; // x3
  int v12; // w8
  bool v13; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 v17; // x0
  int v19; // [xsp+0h] [xbp-30h]

  if ( (byte_42B2D2C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_B52984(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
    sub_B52984(&Method_System_Array_Empty_object___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&StringLiteral_20225/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/);
    sub_B52984(&StringLiteral_18469/*"enabledRuntimePermission"*/);
    byte_42B2D2C = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_B52A54(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_20225/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v4 = (_QWORD **)Method_System_Array_Empty_object___;
  v5 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v6 = *(_WORD *)(v5 + 306);
  if ( (v6 & 1) == 0 )
  {
    v2 = sub_AEB684(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v6 = *(_WORD *)(v5 + 306);
  }
  if ( (v6 & 0x400) != 0 )
  {
    v7 = *v4[6];
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      v2 = sub_AEB684(*v4[6]);
    if ( !*(_DWORD *)(v7 + 224) )
    {
      v8 = *v4[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AEB684(*v4[6]);
      j_il2cpp_runtime_class_init_0(v8);
    }
  }
  v9 = *v4[6];
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    v2 = sub_AEB684(*v4[6]);
  if ( !v1 )
    sub_B52A5C(v2, v3);
  v10 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v1,
          (System_String_o *)StringLiteral_18469/*"enabledRuntimePermission"*/,
          **(System_Object_array ***)(v9 + 184),
          (const MethodInfo_2D61F04 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v10 )
    v12 = 47;
  else
    v12 = 45;
  v13 = v10;
  v19 = v12;
  klass = v1->klass;
  if ( *(_WORD *)&v1->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&v1->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_22:
    v17 = sub_AEB880(v1, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v17)(v1, *(_QWORD *)(v17 + 8));
  if ( v19 == 45 )
    return 0;
  return v13;
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
  __int64 v33; // x3
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_42B2D2F & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&StringLiteral_20225/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/);
    sub_B52984(&StringLiteral_22151/*"sendPermissionRequest"*/);
    byte_42B2D2F = 1;
  }
  v7 = (UnityEngine_AndroidJavaClass_o *)sub_B52A54(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v7, (System_String_o *)StringLiteral_20225/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v8 = sub_B5299C(object___TypeInfo, 3LL);
  v16 = (System_Object_array *)v8;
  if ( !v8 )
    sub_B52A5C(0LL, v9);
  if ( permissionName )
  {
    v8 = sub_B52A44(permissionName, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
    {
      v41 = sub_B52A7C(0LL);
      sub_B52A28(v41, 0LL);
    }
  }
  if ( !v16->max_length )
  {
    v38 = sub_B52A88(v8);
    sub_B52A28(v38, 0LL);
  }
  v16->m_Items[0] = (Il2CppObject *)permissionName;
  sub_B52920(
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
    v17 = sub_B52A44(receiverName, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v42 = sub_B52A7C(0LL);
      sub_B52A28(v42, 0LL);
    }
  }
  if ( v16->max_length <= 1 )
  {
    v39 = sub_B52A88(v17);
    sub_B52A28(v39, 0LL);
  }
  v16->m_Items[1] = (Il2CppObject *)receiverName;
  sub_B52920(
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
    v24 = sub_B52A44(receiverFunctionName, v16->obj.klass->_1.element_class);
    if ( !v24 )
    {
      v43 = sub_B52A7C(0LL);
      sub_B52A28(v43, 0LL);
    }
  }
  if ( v16->max_length <= 2 )
  {
    v40 = sub_B52A88(v24);
    sub_B52A28(v40, 0LL);
  }
  v16->m_Items[2] = (Il2CppObject *)receiverFunctionName;
  sub_B52920(
    (BattleServantConfConponent_o *)&v16->m_Items[2],
    (System_Int32_array **)receiverFunctionName,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  if ( !v7 )
    sub_B52A5C(v31, v32);
  UnityEngine_AndroidJavaObject__CallStatic(
    (UnityEngine_AndroidJavaObject_o *)v7,
    (System_String_o *)StringLiteral_22151/*"sendPermissionRequest"*/,
    v16,
    0LL);
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      p_offset += 4;
      if ( v35 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v37 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_18:
    v37 = sub_AEB880(v7, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v37)(v7, *(_QWORD *)(v37 + 8));
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
  __int64 v16; // x3
  int v17; // w8
  bool v18; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  int v26; // [xsp+0h] [xbp-30h]

  if ( (byte_42B2D2E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_B52984(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&StringLiteral_22303/*"shouldShowRequestPermissionRationale"*/);
    sub_B52984(&StringLiteral_20225/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/);
    byte_42B2D2E = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_B52A54(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_20225/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v4 = sub_B5299C(object___TypeInfo, 1LL);
  v12 = v4;
  if ( !v4 )
    sub_B52A5C(0LL, v5);
  if ( permissionName )
  {
    v4 = sub_B52A44(permissionName, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
      v25 = sub_B52A7C(0LL);
      sub_B52A28(v25, 0LL);
    }
  }
  if ( !*(_DWORD *)(v12 + 24) )
  {
    v24 = sub_B52A88(v4);
    sub_B52A28(v24, 0LL);
  }
  *(_QWORD *)(v12 + 32) = permissionName;
  sub_B52920(
    (BattleServantConfConponent_o *)(v12 + 32),
    (System_Int32_array **)permissionName,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !v3 )
    sub_B52A5C(v13, v14);
  v15 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v3,
          (System_String_o *)StringLiteral_22303/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v12,
          (const MethodInfo_2D61F04 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v15 )
    v17 = 52;
  else
    v17 = 50;
  v18 = v15;
  v26 = v17;
  klass = v3->klass;
  if ( *(_WORD *)&v3->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      p_offset += 4;
      if ( v20 >= *(unsigned __int16 *)&v3->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v22 = sub_AEB880(v3, System_IDisposable_TypeInfo, 0LL, v16);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v22)(v3, *(_QWORD *)(v22 + 8));
  if ( v26 == 50 )
    return 0;
  return v18;
}