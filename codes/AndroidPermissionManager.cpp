void __fastcall AndroidPermissionManager___ctor(AndroidPermissionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AndroidPermissionManager__CheckPermission(System_String_o *permissionName, const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  Il2CppObject *Static_object; // x20
  UnityEngine_AndroidJavaClass_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Object_array *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w0
  _BOOL4 v20; // w26
  int v21; // w23
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  Il2CppClass *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 p_method; // x0
  UnityEngine_AndroidJavaClass_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4A5A74C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_AndroidJavaObject_CallStatic_int____76081696);
    sub_1B885B0(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_18116/*"com.unity3d.player.UnityPlayer"*/);
    sub_1B885B0(&StringLiteral_16773/*"androidx.core.content.ContextCompat"*/);
    sub_1B885B0(&StringLiteral_17948/*"checkSelfPermission"*/);
    sub_1B885B0(&StringLiteral_18398/*"currentActivity"*/);
    byte_4A5A74C = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_1B887FC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_18116/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v3,
                    (System_String_o *)StringLiteral_18398/*"currentActivity"*/,
                    (const MethodInfo_2DDB13C *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v7 = (UnityEngine_AndroidJavaClass_o *)sub_1B887FC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v7, (System_String_o *)StringLiteral_16773/*"androidx.core.content.ContextCompat"*/, 0LL);
  v8 = sub_1B88658(object___TypeInfo, 2LL);
  v12 = (System_Object_array *)v8;
  if ( !v8 )
    sub_1B8880C(0LL, v9);
  if ( Static_object )
  {
    v8 = sub_1B886EC(Static_object, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
    {
      v26 = sub_1B88830(0LL);
      sub_1B886D8(v26, 0LL);
    }
  }
  if ( !v12->max_length )
    sub_1B88814(v8, v9);
  v12->m_Items[0] = Static_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v12->m_Items, (int32_t)Static_object, v10, v11);
  if ( permissionName )
  {
    v13 = sub_1B886EC(permissionName, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      v27 = sub_1B88830(0LL);
      sub_1B886D8(v27, 0LL);
    }
  }
  if ( v12->max_length <= 1 )
    sub_1B88814(v13, v14);
  v12->m_Items[1] = (Il2CppObject *)permissionName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->m_Items[1], (int32_t)permissionName, v15, v16);
  if ( !v7 )
    sub_1B8880C(v17, v18);
  v19 = UnityEngine_AndroidJavaObject__CallStatic_int_(
          (UnityEngine_AndroidJavaObject_o *)v7,
          (System_String_o *)StringLiteral_17948/*"checkSelfPermission"*/,
          v12,
          (const MethodInfo_2DD97FC *)Method_UnityEngine_AndroidJavaObject_CallStatic_int____76081696);
  v20 = v19 == 0;
  if ( v19 )
    v21 = 4;
  else
    v21 = 3;
  klass = v7->klass;
  v23 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_19;
    }
    v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v25 = sub_1BDA590(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v25)(v7, *(_QWORD *)(v25 + 8));
  if ( Static_object )
  {
    v28 = Static_object->klass;
    v29 = *(unsigned __int16 *)(&Static_object->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Static_object->klass->_2.bitflags2 + 3) )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_34;
      }
      p_method = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_34:
      p_method = sub_1BDA590(Static_object, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(Il2CppObject *, _QWORD))p_method)(Static_object, *(_QWORD *)(p_method + 8));
  }
  v32 = v3->klass;
  v33 = *(unsigned __int16 *)(&v3->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v3->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_41;
    }
    v35 = (__int64)(&v32->vtable._0_Equals.method + 2 * *v34);
  }
  else
  {
LABEL_41:
    v35 = sub_1BDA590(v3, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v35)(v3, *(_QWORD *)(v35 + 8));
  return v21 == 3 && v20;
}


bool __fastcall AndroidPermissionManager__EnabledRuntimePermission(const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v1; // x19
  __int64 v2; // x1
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x0
  __int64 v6; // x0
  bool v7; // w21
  int v8; // w23
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0

  if ( (byte_4A5A74B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
    sub_1B885B0(&Method_System_Array_Empty_object___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&StringLiteral_20953/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/);
    sub_1B885B0(&StringLiteral_18992/*"enabledRuntimePermission"*/);
    byte_4A5A74B = 1;
  }
  v1 = (UnityEngine_AndroidJavaClass_o *)sub_1B887FC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v1, (System_String_o *)StringLiteral_20953/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v3 = Method_System_Array_Empty_object___;
  v4 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
  if ( !v4 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_object___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  if ( !*(_DWORD *)(v5 + 224) )
    j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  if ( !v1 )
    sub_1B8880C(v6, v2);
  v7 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
         (UnityEngine_AndroidJavaObject_o *)v1,
         (System_String_o *)StringLiteral_18992/*"enabledRuntimePermission"*/,
         **(System_Object_array ***)(v6 + 184),
         (const MethodInfo_2DD975C *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v7 )
    v8 = 3;
  else
    v8 = 4;
  klass = v1->klass;
  v10 = *(unsigned __int16 *)(&v1->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v1->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_19;
    }
    v12 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_19:
    v12 = sub_1BDA590(v1, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v12)(v1, *(_QWORD *)(v12 + 8));
  return v8 == 3 && v7;
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_Object_array *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x0
  __int64 v22; // x1
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0

  if ( (byte_4A5A74E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_20953/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/);
    sub_1B885B0(&StringLiteral_23101/*"sendPermissionRequest"*/);
    byte_4A5A74E = 1;
  }
  v7 = (UnityEngine_AndroidJavaClass_o *)sub_1B887FC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v7, (System_String_o *)StringLiteral_20953/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v8 = sub_1B88658(object___TypeInfo, 3LL);
  v12 = (System_Object_array *)v8;
  if ( !v8 )
    sub_1B8880C(0LL, v9);
  if ( permissionName )
  {
    v8 = sub_1B886EC(permissionName, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
    if ( !v8 )
    {
      v27 = sub_1B88830(0LL);
      sub_1B886D8(v27, 0LL);
    }
  }
  if ( !v12->max_length )
    sub_1B88814(v8, v9);
  v12->m_Items[0] = (Il2CppObject *)permissionName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v12->m_Items, (int32_t)permissionName, v10, v11);
  if ( receiverName )
  {
    v13 = sub_1B886EC(receiverName, v12->obj.klass->_1.element_class);
    if ( !v13 )
    {
      v28 = sub_1B88830(0LL);
      sub_1B886D8(v28, 0LL);
    }
  }
  if ( v12->max_length <= 1 )
    sub_1B88814(v13, v14);
  v12->m_Items[1] = (Il2CppObject *)receiverName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->m_Items[1], (int32_t)receiverName, v15, v16);
  if ( receiverFunctionName )
  {
    v17 = sub_1B886EC(receiverFunctionName, v12->obj.klass->_1.element_class);
    if ( !v17 )
    {
      v29 = sub_1B88830(0LL);
      sub_1B886D8(v29, 0LL);
    }
  }
  if ( v12->max_length <= 2 )
    sub_1B88814(v17, v18);
  v12->m_Items[2] = (Il2CppObject *)receiverFunctionName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->m_Items[2], (int32_t)receiverFunctionName, v19, v20);
  if ( !v7 )
    sub_1B8880C(v21, v22);
  UnityEngine_AndroidJavaObject__CallStatic(
    (UnityEngine_AndroidJavaObject_o *)v7,
    (System_String_o *)StringLiteral_23101/*"sendPermissionRequest"*/,
    v12,
    0LL);
  klass = v7->klass;
  v24 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_18;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_18:
    v26 = sub_1BDA590(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v26)(v7, *(_QWORD *)(v26 + 8));
}


bool __fastcall AndroidPermissionManager__ShouldShowRequestPermissionRationale(
        System_String_o *permissionName,
        const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  bool v11; // w21
  int v12; // w23
  UnityEngine_AndroidJavaClass_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  __int64 v18; // x0

  if ( (byte_4A5A74D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_23302/*"shouldShowRequestPermissionRationale"*/);
    sub_1B885B0(&StringLiteral_20953/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/);
    byte_4A5A74D = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_1B887FC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_20953/*"jp.delightworks.unityplugin.permission.PermissionRequestPlugin"*/, 0LL);
  v4 = sub_1B88658(object___TypeInfo, 1LL);
  v8 = v4;
  if ( !v4 )
    sub_1B8880C(0LL, v5);
  if ( permissionName )
  {
    v4 = sub_1B886EC(permissionName, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
      v18 = sub_1B88830(0LL);
      sub_1B886D8(v18, 0LL);
    }
  }
  if ( !*(_DWORD *)(v8 + 24) )
    sub_1B88814(v4, v5);
  *(_QWORD *)(v8 + 32) = permissionName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v8 + 32), (int32_t)permissionName, v6, v7);
  if ( !v3 )
    sub_1B8880C(v9, v10);
  v11 = UnityEngine_AndroidJavaObject__CallStatic_bool_(
          (UnityEngine_AndroidJavaObject_o *)v3,
          (System_String_o *)StringLiteral_23302/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v8,
          (const MethodInfo_2DD975C *)Method_UnityEngine_AndroidJavaObject_CallStatic_bool___);
  if ( v11 )
    v12 = 3;
  else
    v12 = 4;
  klass = v3->klass;
  v14 = *(unsigned __int16 *)(&v3->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v3->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_15;
    }
    v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v16 = sub_1BDA590(v3, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v16)(v3, *(_QWORD *)(v16 + 8));
  return v12 == 3 && v11;
}