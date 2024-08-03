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
  Il2CppObject *Static_object; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_AndroidJavaClass_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_Object_array *v22; // x23
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x0
  int32_t v28; // w0
  _BOOL4 v29; // w26
  int v30; // w23
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  Il2CppClass *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 p_method; // x0
  UnityEngine_AndroidJavaClass_c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_49FBA13 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_AndroidJavaObject_CallStatic_int____75702320, v4);
    sub_1B640C8(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&object___TypeInfo, v7);
    sub_1B640C8(&StringLiteral_18046/*"com.unity3d.player.UnityPlayer"*/, v8);
    sub_1B640C8(&StringLiteral_16704/*"androidx.core.content.ContextCompat"*/, v9);
    sub_1B640C8(&StringLiteral_17878/*"checkSelfPermission"*/, v10);
    sub_1B640C8(&StringLiteral_18327/*"currentActivity"*/, v11);
    byte_49FBA13 = 1;
  }
  v12 = (UnityEngine_AndroidJavaClass_o *)sub_1B64314(UnityEngine_AndroidJavaClass_TypeInfo, method, v2);
  UnityEngine_AndroidJavaClass___ctor(v12, (System_String_o *)StringLiteral_18046/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v12,
                    (System_String_o *)StringLiteral_18327/*"currentActivity"*/,
                    (const MethodInfo_2D9635C *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v17 = (UnityEngine_AndroidJavaClass_o *)sub_1B64314(UnityEngine_AndroidJavaClass_TypeInfo, v15, v16);
  UnityEngine_AndroidJavaClass___ctor(v17, (System_String_o *)StringLiteral_16704/*"androidx.core.content.ContextCompat"*/, 0LL);
  v18 = sub_1B64170(object___TypeInfo, 2LL);
  v22 = (System_Object_array *)v18;
  if ( !v18 )
    sub_1B64324(0LL);
  if ( Static_object )
  {
    v18 = sub_1B64204(Static_object, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v18 )
    {
      v35 = sub_1B64348(0LL);
      sub_1B641F0(v35, 0LL);
    }
  }
  if ( !v22->max_length )
    sub_1B6432C(v18, v19);
  v22->m_Items[0] = Static_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v22->m_Items, (int32_t)Static_object, v20, v21);
  if ( permissionName )
  {
    v23 = sub_1B64204(permissionName, v22->obj.klass->_1.element_class);
    if ( !v23 )
    {
      v36 = sub_1B64348(0LL);
      sub_1B641F0(v36, 0LL);
    }
  }
  if ( v22->max_length <= 1 )
    sub_1B6432C(v23, v24);
  v22->m_Items[1] = (Il2CppObject *)permissionName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->m_Items[1], (int32_t)permissionName, v25, v26);
  if ( !v17 )
    sub_1B64324(v27);
  v28 = UnityEngine_AndroidJavaObject__CallStatic_int_(
          (UnityEngine_AndroidJavaObject_o *)v17,
          (System_String_o *)StringLiteral_17878/*"checkSelfPermission"*/,
          v22,
          (const MethodInfo_2D94A1C *)Method_UnityEngine_AndroidJavaObject_CallStatic_int____75702320);
  v29 = v28 == 0;
  if ( v28 )
    v30 = 4;
  else
    v30 = 3;
  klass = v17->klass;
  v32 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_19;
    }
    v34 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v34 = sub_1BB60A8(v17, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v34)(v17, *(_QWORD *)(v34 + 8));
  if ( Static_object )
  {
    v37 = Static_object->klass;
    v38 = *(unsigned __int16 *)(&Static_object->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Static_object->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_34;
      }
      p_method = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_34:
      p_method = sub_1BB60A8(Static_object, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))p_method)(Static_object, *(_QWORD *)(p_method + 8));
  }
  v41 = v12->klass;
  v42 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_41;
    }
    v44 = (__int64)(&v41->vtable._0_Equals.method + 2 * *v43);
  }
  else
  {
LABEL_41:
    v44 = sub_1BB60A8(v12, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v44)(v12, *(_QWORD *)(v44 + 8));
  return v30 == 3 && v29;
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

  if ( (byte_49FBA12 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AndroidJavaClass_TypeInfo, v1);
    sub_1B640C8(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v3);
    sub_1B640C8(&Method_System_Array_Empty_object___, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_20871/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v6);
    sub_1B640C8(&StringLiteral_18919/*"enabledRuntimePermission"*/, v7);
    byte_49FBA12 = 1;
  }
  v8 = (UnityEngine_AndroidJavaClass_o *)sub_1B64314(UnityEngine_AndroidJavaClass_TypeInfo, v1, v2);
  UnityEngine_AndroidJavaClass___ctor(v8, (System_String_o *)StringLiteral_20871/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v9 = Method_System_Array_Empty_object___;
  v10 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v10 )
  {
    sub_1BB6000(Method_System_Array_Empty_object___);
    v10 = v9[7];
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BB5FA4(v11);
  if ( !*(_DWORD *)(v11 + 224) )
    j_il2cpp_runtime_class_init_0(v11);
  v12 = *(_QWORD *)(v9[7] + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  if ( !v8 )
    sub_1B64324(v12);
  v13 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v8,
          (System_String_o *)StringLiteral_18919/*"enabledRuntimePermission"*/,
          **(System_Object_array ***)(v12 + 184),
          (const MethodInfo_2D9497C *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v13 )
    v14 = 3;
  else
    v14 = 4;
  klass = v8->klass;
  v16 = *(unsigned __int16 *)(&v8->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v8->klass->_2.bitflags2 + 3) )
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
    v18 = sub_1BB60A8(v8, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v18)(v8, *(_QWORD *)(v18 + 8));
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
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_49FBA15 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AndroidJavaClass_TypeInfo, receiverName);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&object___TypeInfo, v8);
    sub_1B640C8(&StringLiteral_20871/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v9);
    sub_1B640C8(&StringLiteral_23005/*"sendPermissionRequest"*/, v10);
    byte_49FBA15 = 1;
  }
  v11 = (UnityEngine_AndroidJavaClass_o *)sub_1B64314(
                                            UnityEngine_AndroidJavaClass_TypeInfo,
                                            receiverName,
                                            receiverFunctionName);
  UnityEngine_AndroidJavaClass___ctor(v11, (System_String_o *)StringLiteral_20871/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v12 = sub_1B64170(object___TypeInfo, 3LL);
  v16 = (System_Object_array *)v12;
  if ( !v12 )
    sub_1B64324(0LL);
  if ( permissionName )
  {
    v12 = sub_1B64204(permissionName, *(_QWORD *)(*(_QWORD *)v12 + 64LL));
    if ( !v12 )
    {
      v30 = sub_1B64348(0LL);
      sub_1B641F0(v30, 0LL);
    }
  }
  if ( !v16->max_length )
    sub_1B6432C(v12, v13);
  v16->m_Items[0] = (Il2CppObject *)permissionName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v16->m_Items, (int32_t)permissionName, v14, v15);
  if ( receiverName )
  {
    v17 = sub_1B64204(receiverName, v16->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v31 = sub_1B64348(0LL);
      sub_1B641F0(v31, 0LL);
    }
  }
  if ( v16->max_length <= 1 )
    sub_1B6432C(v17, v18);
  v16->m_Items[1] = (Il2CppObject *)receiverName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[1], (int32_t)receiverName, v19, v20);
  if ( receiverFunctionName )
  {
    v21 = sub_1B64204(receiverFunctionName, v16->obj.klass->_1.element_class);
    if ( !v21 )
    {
      v32 = sub_1B64348(0LL);
      sub_1B641F0(v32, 0LL);
    }
  }
  if ( v16->max_length <= 2 )
    sub_1B6432C(v21, v22);
  v16->m_Items[2] = (Il2CppObject *)receiverFunctionName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->m_Items[2], (int32_t)receiverFunctionName, v23, v24);
  if ( !v11 )
    sub_1B64324(v25);
  UnityEngine_AndroidJavaObject__CallStatic(
    (UnityEngine_AndroidJavaObject_o *)v11,
    (System_String_o *)StringLiteral_23005/*"sendPermissionRequest"*/,
    v16,
    0LL);
  klass = v11->klass;
  v27 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_18;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_18:
    v29 = sub_1BB60A8(v11, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v29)(v11, *(_QWORD *)(v29 + 8));
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x21
  __int64 v15; // x0
  bool v16; // w21
  int v17; // w23
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v23; // x0

  if ( (byte_49FBA14 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&object___TypeInfo, v6);
    sub_1B640C8(&StringLiteral_23205/*"shouldShowRequestPermissionRationale"*/, v7);
    sub_1B640C8(&StringLiteral_20871/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, v8);
    byte_49FBA14 = 1;
  }
  v9 = (UnityEngine_AndroidJavaClass_o *)sub_1B64314(UnityEngine_AndroidJavaClass_TypeInfo, method, v2);
  UnityEngine_AndroidJavaClass___ctor(v9, (System_String_o *)StringLiteral_20871/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v10 = sub_1B64170(object___TypeInfo, 1LL);
  v14 = v10;
  if ( !v10 )
    sub_1B64324(0LL);
  if ( permissionName )
  {
    v10 = sub_1B64204(permissionName, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
    if ( !v10 )
    {
      v23 = sub_1B64348(0LL);
      sub_1B641F0(v23, 0LL);
    }
  }
  if ( !*(_DWORD *)(v14 + 24) )
    sub_1B6432C(v10, v11);
  *(_QWORD *)(v14 + 32) = permissionName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)permissionName, v12, v13);
  if ( !v9 )
    sub_1B64324(v15);
  v16 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v9,
          (System_String_o *)StringLiteral_23205/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v14,
          (const MethodInfo_2D9497C *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v16 )
    v17 = 3;
  else
    v17 = 4;
  klass = v9->klass;
  v19 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
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
    v21 = sub_1BB60A8(v9, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v21)(v9, *(_QWORD *)(v21 + 8));
  return v17 == 3 && v16;
}