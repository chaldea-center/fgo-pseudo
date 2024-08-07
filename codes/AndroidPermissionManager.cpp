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
  Il2CppObject *Static_object; // x20
  UnityEngine_AndroidJavaClass_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_Object_array *v20; // x23
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w0
  _BOOL4 v28; // w26
  int v29; // w23
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  Il2CppClass *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 p_method; // x0
  UnityEngine_AndroidJavaClass_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0

  if ( (byte_49FE12B & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_1B64A00(&Method_UnityEngine_AndroidJavaObject_CallStatic_int____75712352, v3);
    sub_1B64A00(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___, v4);
    sub_1B64A00(&System_IDisposable_TypeInfo, v5);
    sub_1B64A00(&object___TypeInfo, v6);
    sub_1B64A00(&StringLiteral_18049/*"com.unity3d.player.UnityPlayer"*/, v7);
    sub_1B64A00(&StringLiteral_16707/*"androidx.core.content.ContextCompat"*/, v8);
    sub_1B64A00(&StringLiteral_17881/*"checkSelfPermission"*/, v9);
    sub_1B64A00(&StringLiteral_18330/*"currentActivity"*/, v10);
    byte_49FE12B = 1;
  }
  v11 = (UnityEngine_AndroidJavaClass_o *)sub_1B64C4C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v11, (System_String_o *)StringLiteral_18049/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v11 )
    sub_1B64C5C(v12, v13);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v11,
                    (System_String_o *)StringLiteral_18330/*"currentActivity"*/,
                    (const MethodInfo_2D98C50 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v15 = (UnityEngine_AndroidJavaClass_o *)sub_1B64C4C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v15, (System_String_o *)StringLiteral_16707/*"androidx.core.content.ContextCompat"*/, 0LL);
  v16 = sub_1B64AA8(object___TypeInfo, 2LL);
  v20 = (System_Object_array *)v16;
  if ( !v16 )
    sub_1B64C5C(0LL, v17);
  if ( Static_object )
  {
    v16 = sub_1B64B3C(Static_object, *(_QWORD *)(*(_QWORD *)v16 + 64LL));
    if ( !v16 )
    {
      v34 = sub_1B64C80(0LL);
      sub_1B64B28(v34, 0LL);
    }
  }
  if ( !v20->max_length )
    sub_1B64C64(v16, v17);
  v20->m_Items[0] = Static_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v20->m_Items, (int32_t)Static_object, v18, v19);
  if ( permissionName )
  {
    v21 = sub_1B64B3C(permissionName, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
      v35 = sub_1B64C80(0LL);
      sub_1B64B28(v35, 0LL);
    }
  }
  if ( v20->max_length <= 1 )
    sub_1B64C64(v21, v22);
  v20->m_Items[1] = (Il2CppObject *)permissionName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v20->m_Items[1], (int32_t)permissionName, v23, v24);
  if ( !v15 )
    sub_1B64C5C(v25, v26);
  v27 = UnityEngine_AndroidJavaObject__CallStatic_int_(
          (UnityEngine_AndroidJavaObject_o *)v15,
          (System_String_o *)StringLiteral_17881/*"checkSelfPermission"*/,
          v20,
          (const MethodInfo_2D97310 *)Method_UnityEngine_AndroidJavaObject_CallStatic_int____75712352);
  v28 = v27 == 0;
  if ( v27 )
    v29 = 4;
  else
    v29 = 3;
  klass = v15->klass;
  v31 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_19;
    }
    v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v33 = sub_1BB69E0(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v33)(v15, *(_QWORD *)(v33 + 8));
  if ( Static_object )
  {
    v36 = Static_object->klass;
    v37 = *(unsigned __int16 *)(&Static_object->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Static_object->klass->_2.bitflags2 + 3) )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_34;
      }
      p_method = (__int64)&v36->vtable[*v38].method;
    }
    else
    {
LABEL_34:
      p_method = sub_1BB69E0(Static_object, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))p_method)(Static_object, *(_QWORD *)(p_method + 8));
  }
  v40 = v11->klass;
  v41 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_41;
    }
    v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v42);
  }
  else
  {
LABEL_41:
    v43 = sub_1BB69E0(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v43)(v11, *(_QWORD *)(v43 + 8));
  return v29 == 3 && v28;
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
  __int64 v8; // x1
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  bool v13; // w21
  int v14; // w23
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0

  if ( (byte_49FE12A & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_AndroidJavaClass_TypeInfo, v1);
    sub_1B64A00(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v2);
    sub_1B64A00(&Method_System_Array_Empty_object___, v3);
    sub_1B64A00(&System_IDisposable_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_20874/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v5);
    sub_1B64A00(&StringLiteral_18922/*"enabledRuntimePermission"*/, v6);
    byte_49FE12A = 1;
  }
  v7 = (UnityEngine_AndroidJavaClass_o *)sub_1B64C4C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v7, (System_String_o *)StringLiteral_20874/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v9 = Method_System_Array_Empty_object___;
  v10 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v10 )
  {
    sub_1BB6938(Method_System_Array_Empty_object___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB68DC(v11);
  if ( !*(_DWORD *)(v11 + 224) )
    j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB68DC(v12);
  if ( !v7 )
    sub_1B64C5C(v12, v8);
  v13 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v7,
          (System_String_o *)StringLiteral_18922/*"enabledRuntimePermission"*/,
          **(System_Object_array ***)(v12 + 184),
          (const MethodInfo_2D97270 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v13 )
    v14 = 3;
  else
    v14 = 4;
  klass = v7->klass;
  v16 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_19;
    }
    v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v18 = sub_1BB69E0(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v18)(v7, *(_QWORD *)(v18 + 8));
  return v14 == 3 && v13;
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_Object_array *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x0
  __int64 v26; // x1
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0

  if ( (byte_49FE12D & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_AndroidJavaClass_TypeInfo, receiverName);
    sub_1B64A00(&System_IDisposable_TypeInfo, v7);
    sub_1B64A00(&object___TypeInfo, v8);
    sub_1B64A00(&StringLiteral_20874/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v9);
    sub_1B64A00(&StringLiteral_23008/*"sendPermissionRequest"*/, v10);
    byte_49FE12D = 1;
  }
  v11 = (UnityEngine_AndroidJavaClass_o *)sub_1B64C4C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v11, (System_String_o *)StringLiteral_20874/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v12 = sub_1B64AA8(object___TypeInfo, 3LL);
  v16 = (System_Object_array *)v12;
  if ( !v12 )
    sub_1B64C5C(0LL, v13);
  if ( permissionName )
  {
    v12 = sub_1B64B3C(permissionName, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
    if ( !v12 )
    {
      v31 = sub_1B64C80(0LL);
      sub_1B64B28(v31, 0LL);
    }
  }
  if ( !v16->max_length )
    sub_1B64C64(v12, v13);
  v16->m_Items[0] = (Il2CppObject *)permissionName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v16->m_Items, (int32_t)permissionName, v14, v15);
  if ( receiverName )
  {
    v17 = sub_1B64B3C(receiverName, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v32 = sub_1B64C80(0LL);
      sub_1B64B28(v32, 0LL);
    }
  }
  if ( v16->max_length <= 1 )
    sub_1B64C64(v17, v18);
  v16->m_Items[1] = (Il2CppObject *)receiverName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v16->m_Items[1], (int32_t)receiverName, v19, v20);
  if ( receiverFunctionName )
  {
    v21 = sub_1B64B3C(receiverFunctionName, v16->obj.klass->_1.element_class);
    if ( !v21 )
    {
      v33 = sub_1B64C80(0LL);
      sub_1B64B28(v33, 0LL);
    }
  }
  if ( v16->max_length <= 2 )
    sub_1B64C64(v21, v22);
  v16->m_Items[2] = (Il2CppObject *)receiverFunctionName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v16->m_Items[2], (int32_t)receiverFunctionName, v23, v24);
  if ( !v11 )
    sub_1B64C5C(v25, v26);
  UnityEngine_AndroidJavaObject__CallStatic(
    (UnityEngine_AndroidJavaObject_o *)v11,
    (System_String_o *)StringLiteral_23008/*"sendPermissionRequest"*/,
    v16,
    0LL);
  klass = v11->klass;
  v28 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_18;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_18:
    v30 = sub_1BB69E0(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v30)(v11, *(_QWORD *)(v30 + 8));
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  bool v16; // w21
  int v17; // w23
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v23; // x0

  if ( (byte_49FE12C & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_1B64A00(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v3);
    sub_1B64A00(&System_IDisposable_TypeInfo, v4);
    sub_1B64A00(&object___TypeInfo, v5);
    sub_1B64A00(&StringLiteral_23209/*"shouldShowRequestPermissionRationale"*/, v6);
    sub_1B64A00(&StringLiteral_20874/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v7);
    byte_49FE12C = 1;
  }
  v8 = (UnityEngine_AndroidJavaClass_o *)sub_1B64C4C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v8, (System_String_o *)StringLiteral_20874/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v9 = sub_1B64AA8(object___TypeInfo, 1LL);
  v13 = v9;
  if ( !v9 )
    sub_1B64C5C(0LL, v10);
  if ( permissionName )
  {
    v9 = sub_1B64B3C(permissionName, *(_QWORD *)(*(_QWORD *)v9 + 64LL));
    if ( !v9 )
    {
      v23 = sub_1B64C80(0LL);
      sub_1B64B28(v23, 0LL);
    }
  }
  if ( !*(_DWORD *)(v13 + 24) )
    sub_1B64C64(v9, v10);
  *(_QWORD *)(v13 + 32) = permissionName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)permissionName, v11, v12);
  if ( !v8 )
    sub_1B64C5C(v14, v15);
  v16 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v8,
          (System_String_o *)StringLiteral_23209/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v13,
          (const MethodInfo_2D97270 *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v16 )
    v17 = 3;
  else
    v17 = 4;
  klass = v8->klass;
  v19 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_15;
    }
    v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v21 = sub_1BB69E0(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v21)(v8, *(_QWORD *)(v21 + 8));
  return v17 == 3 && v16;
}