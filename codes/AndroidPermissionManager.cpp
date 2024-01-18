void __fastcall AndroidPermissionManager___ctor(AndroidPermissionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AndroidPermissionManager__CheckPermission(System_String_o *permissionName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_AndroidJavaClass_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_Int32_array **Static_string; // x20
  UnityEngine_AndroidJavaClass_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Object_array *v24; // x23
  __int64 v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w0
  __int64 v35; // x3
  int v36; // w8
  _BOOL4 v37; // w24
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 v41; // x0
  __int64 v42; // x3
  System_Int32_array *v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  bool v47; // w21
  UnityEngine_AndroidJavaClass_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x0
  __int64 v56; // x0
  int v57; // [xsp+0h] [xbp-40h]

  if ( (byte_418A651 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_AndroidJavaObject_CallStatic_int___, v3);
    sub_B2C35C(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&object___TypeInfo, v6);
    sub_B2C35C(&StringLiteral_17561/*"com.unity3d.player.UnityPlayer"*/, v7);
    sub_B2C35C(&StringLiteral_16338/*"androidx.core.content.ContextCompat"*/, v8);
    sub_B2C35C(&StringLiteral_17407/*"checkSelfPermission"*/, v9);
    sub_B2C35C(&StringLiteral_17831/*"currentActivity"*/, v10);
    byte_418A651 = 1;
  }
  v11 = (UnityEngine_AndroidJavaClass_o *)sub_B2C42C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v11, (System_String_o *)StringLiteral_17561/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  Static_string = (System_Int32_array **)UnityEngine_AndroidJavaObject__GetStatic_string_(
                                           (UnityEngine_AndroidJavaObject_o *)v11,
                                           (System_String_o *)StringLiteral_17831/*"currentActivity"*/,
                                           (const MethodInfo_2D67144 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v15 = (UnityEngine_AndroidJavaClass_o *)sub_B2C42C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v15, (System_String_o *)StringLiteral_16338/*"androidx.core.content.ContextCompat"*/, 0LL);
  v16 = sub_B2C374(object___TypeInfo, 2LL);
  v24 = (System_Object_array *)v16;
  if ( !v16 )
    sub_B2C434(0LL, v17);
  if ( Static_string )
  {
    v16 = sub_B2C41C(Static_string, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
    if ( !v16 )
    {
      v55 = sub_B2C454(0LL);
      sub_B2C400(v55, 0LL);
    }
  }
  if ( !v24->max_length )
  {
    v53 = sub_B2C460(v16);
    sub_B2C400(v53, 0LL);
  }
  v24->m_Items[0] = (Il2CppObject *)Static_string;
  sub_B2C2F8((BattleServantConfConponent_o *)v24->m_Items, Static_string, v18, v19, v20, v21, v22, v23);
  if ( permissionName )
  {
    v25 = sub_B2C41C(permissionName, v24->obj.klass->_1.element_class);
    if ( !v25 )
    {
      v56 = sub_B2C454(0LL);
      sub_B2C400(v56, 0LL);
    }
  }
  if ( v24->max_length <= 1 )
  {
    v54 = sub_B2C460(v25);
    sub_B2C400(v54, 0LL);
  }
  v24->m_Items[1] = (Il2CppObject *)permissionName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v24->m_Items[1],
    (System_Int32_array **)permissionName,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !v15 )
    sub_B2C434(v32, v33);
  v34 = UnityEngine_AndroidJavaObject__CallStatic_int_(
          (UnityEngine_AndroidJavaObject_o *)v15,
          (System_String_o *)StringLiteral_17407/*"checkSelfPermission"*/,
          v24,
          (const MethodInfo_2D663C0 *)Method_UnityEngine_AndroidJavaObject_CallStatic_int___);
  if ( v34 )
    v36 = 97;
  else
    v36 = 99;
  v37 = v34 == 0;
  v57 = v36;
  klass = v15->klass;
  if ( *(_WORD *)&v15->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      p_offset += 4;
      if ( v39 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
        goto LABEL_19;
    }
    v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v41 = sub_AC5258(v15, System_IDisposable_TypeInfo, 0LL, v35);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v41)(v15, *(_QWORD *)(v41 + 8));
  if ( Static_string )
  {
    v43 = *Static_string;
    if ( HIWORD((*Static_string)->m_Items[67]) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)&v43->m_Items[37] + 8LL);
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= HIWORD((*Static_string)->m_Items[67]) )
          goto LABEL_26;
      }
      v46 = (__int64)&v43->m_Items[4 * *v45 + 71];
    }
    else
    {
LABEL_26:
      v46 = sub_AC5258(Static_string, System_IDisposable_TypeInfo, 0LL, v42);
    }
    (*(void (__fastcall **)(System_Int32_array **, _QWORD))v46)(Static_string, *(_QWORD *)(v46 + 8));
  }
  v47 = v37;
  v48 = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v49 = 0LL;
    v50 = &v48->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      ++v49;
      v50 += 4;
      if ( v49 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_33;
    }
    v51 = (__int64)(&v48->vtable._0_Equals.method + 2 * *v50);
  }
  else
  {
LABEL_33:
    v51 = sub_AC5258(v11, System_IDisposable_TypeInfo, 0LL, v42);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v51)(v11, *(_QWORD *)(v51 + 8));
  if ( v57 == 97 )
    return 0;
  return v47;
}


bool __fastcall AndroidPermissionManager__EnabledRuntimePermission(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_AndroidJavaClass_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  _QWORD **v10; // x21
  __int64 v11; // x20
  __int16 v12; // w8
  __int64 v13; // x20
  __int64 v14; // x20
  __int64 v15; // x20
  bool v16; // w0
  __int64 v17; // x3
  int v18; // w8
  bool v19; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0
  int v25; // [xsp+0h] [xbp-30h]

  if ( (byte_418A650 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AndroidJavaClass_TypeInfo, v1);
    sub_B2C35C(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v2);
    sub_B2C35C(&Method_System_Array_Empty_object___, v3);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_20074/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v5);
    sub_B2C35C(&StringLiteral_18335/*"enabledRuntimePermission"*/, v6);
    byte_418A650 = 1;
  }
  v7 = (UnityEngine_AndroidJavaClass_o *)sub_B2C42C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v7, (System_String_o *)StringLiteral_20074/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v10 = (_QWORD **)Method_System_Array_Empty_object___;
  v11 = **((_QWORD **)Method_System_Array_Empty_object___ + 6);
  v12 = *(_WORD *)(v11 + 306);
  if ( (v12 & 1) == 0 )
  {
    v8 = sub_AC505C(**((_QWORD **)Method_System_Array_Empty_object___ + 6));
    v12 = *(_WORD *)(v11 + 306);
  }
  if ( (v12 & 0x400) != 0 )
  {
    v13 = *v10[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      v8 = sub_AC505C(*v10[6]);
    if ( !*(_DWORD *)(v13 + 224) )
    {
      v14 = *v10[6];
      if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
        sub_AC505C(*v10[6]);
      j_il2cpp_runtime_class_init_0(v14);
    }
  }
  v15 = *v10[6];
  if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
    v8 = sub_AC505C(*v10[6]);
  if ( !v7 )
    sub_B2C434(v8, v9);
  v16 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v7,
          (System_String_o *)StringLiteral_18335/*"enabledRuntimePermission"*/,
          **(System_Object_array ***)(v15 + 184),
          (const MethodInfo_2D663A0 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v16 )
    v18 = 47;
  else
    v18 = 45;
  v19 = v16;
  v25 = v18;
  klass = v7->klass;
  if ( *(_WORD *)&v7->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      p_offset += 4;
      if ( v21 >= *(unsigned __int16 *)&v7->klass->_2.bitflags1 )
        goto LABEL_22;
    }
    v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_22:
    v23 = sub_AC5258(v7, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v23)(v7, *(_QWORD *)(v23 + 8));
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_AndroidJavaClass_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Object_array *v20; // x22
  __int64 v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x0

  if ( (byte_418A653 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AndroidJavaClass_TypeInfo, receiverName);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&object___TypeInfo, v8);
    sub_B2C35C(&StringLiteral_20074/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v9);
    sub_B2C35C(&StringLiteral_21966/*"sendPermissionRequest"*/, v10);
    byte_418A653 = 1;
  }
  v11 = (UnityEngine_AndroidJavaClass_o *)sub_B2C42C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v11, (System_String_o *)StringLiteral_20074/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v12 = sub_B2C374(object___TypeInfo, 3LL);
  v20 = (System_Object_array *)v12;
  if ( !v12 )
    sub_B2C434(0LL, v13);
  if ( permissionName )
  {
    v12 = sub_B2C41C(permissionName, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
    if ( !v12 )
    {
      v45 = sub_B2C454(0LL);
      sub_B2C400(v45, 0LL);
    }
  }
  if ( !v20->max_length )
  {
    v42 = sub_B2C460(v12);
    sub_B2C400(v42, 0LL);
  }
  v20->m_Items[0] = (Il2CppObject *)permissionName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)v20->m_Items,
    (System_Int32_array **)permissionName,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( receiverName )
  {
    v21 = sub_B2C41C(receiverName, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
      v46 = sub_B2C454(0LL);
      sub_B2C400(v46, 0LL);
    }
  }
  if ( v20->max_length <= 1 )
  {
    v43 = sub_B2C460(v21);
    sub_B2C400(v43, 0LL);
  }
  v20->m_Items[1] = (Il2CppObject *)receiverName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v20->m_Items[1],
    (System_Int32_array **)receiverName,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( receiverFunctionName )
  {
    v28 = sub_B2C41C(receiverFunctionName, v20->obj.klass->_1.element_class);
    if ( !v28 )
    {
      v47 = sub_B2C454(0LL);
      sub_B2C400(v47, 0LL);
    }
  }
  if ( v20->max_length <= 2 )
  {
    v44 = sub_B2C460(v28);
    sub_B2C400(v44, 0LL);
  }
  v20->m_Items[2] = (Il2CppObject *)receiverFunctionName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v20->m_Items[2],
    (System_Int32_array **)receiverFunctionName,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( !v11 )
    sub_B2C434(v35, v36);
  UnityEngine_AndroidJavaObject__CallStatic(
    (UnityEngine_AndroidJavaObject_o *)v11,
    (System_String_o *)StringLiteral_21966/*"sendPermissionRequest"*/,
    v20,
    0LL);
  klass = v11->klass;
  if ( *(_WORD *)&v11->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      p_offset += 4;
      if ( v39 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_18:
    v41 = sub_AC5258(v11, System_IDisposable_TypeInfo, 0LL, v37);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v41)(v11, *(_QWORD *)(v41 + 8));
}


bool __fastcall AndroidPermissionManager__ShouldShowRequestPermissionRationale(
        System_String_o *permissionName,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_AndroidJavaClass_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  bool v20; // w0
  __int64 v21; // x3
  int v22; // w8
  bool v23; // w20
  UnityEngine_AndroidJavaClass_c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 v27; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  int v31; // [xsp+0h] [xbp-30h]

  if ( (byte_418A652 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v3);
    sub_B2C35C(&System_IDisposable_TypeInfo, v4);
    sub_B2C35C(&object___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_22116/*"shouldShowRequestPermissionRationale"*/, v6);
    sub_B2C35C(&StringLiteral_20074/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v7);
    byte_418A652 = 1;
  }
  v8 = (UnityEngine_AndroidJavaClass_o *)sub_B2C42C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v8, (System_String_o *)StringLiteral_20074/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v9 = sub_B2C374(object___TypeInfo, 1LL);
  v17 = v9;
  if ( !v9 )
    sub_B2C434(0LL, v10);
  if ( permissionName )
  {
    v9 = sub_B2C41C(permissionName, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
    {
      v30 = sub_B2C454(0LL);
      sub_B2C400(v30, 0LL);
    }
  }
  if ( !*(_DWORD *)(v17 + 24) )
  {
    v29 = sub_B2C460(v9);
    sub_B2C400(v29, 0LL);
  }
  *(_QWORD *)(v17 + 32) = permissionName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v17 + 32),
    (System_Int32_array **)permissionName,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !v8 )
    sub_B2C434(v18, v19);
  v20 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v8,
          (System_String_o *)StringLiteral_22116/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v17,
          (const MethodInfo_2D663A0 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v20 )
    v22 = 52;
  else
    v22 = 50;
  v23 = v20;
  v31 = v22;
  klass = v8->klass;
  if ( *(_WORD *)&v8->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      p_offset += 4;
      if ( v25 >= *(unsigned __int16 *)&v8->klass->_2.bitflags1 )
        goto LABEL_15;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v27 = sub_AC5258(v8, System_IDisposable_TypeInfo, 0LL, v21);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v27)(v8, *(_QWORD *)(v27 + 8));
  if ( v31 == 50 )
    return 0;
  return v23;
}