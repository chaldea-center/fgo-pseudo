void __fastcall AndroidPermissionManager___ctor(AndroidPermissionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AndroidPermissionManager__CheckPermission(System_String_o *permissionName, const MethodInfo *method)
{
  return UnityEngine_Android_Permission__HasUserAuthorizedPermission(permissionName, 0LL);
}


bool __fastcall AndroidPermissionManager__EnabledRuntimePermission(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49BA419 & 1) == 0 )
  {
    sub_1B4CF90(&AndroidUtil_TypeInfo, v1);
    byte_49BA419 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__get_apiLevel(0LL) > 22;
}


void __fastcall AndroidPermissionManager__RequestPermission(
        System_String_o *permissionName,
        System_Action_string__o *grantedCallback,
        System_Action_string__o *deniedCallback,
        System_Action_string__o *dontAskCallback,
        const MethodInfo *method)
{
  UnityEngine_Android_PermissionCallbacks_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Action_string__o *v12; // x1

  if ( (byte_49BA41B & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Android_PermissionCallbacks_TypeInfo, grantedCallback);
    byte_49BA41B = 1;
  }
  v9 = (UnityEngine_Android_PermissionCallbacks_o *)sub_1B4D1DC(UnityEngine_Android_PermissionCallbacks_TypeInfo);
  UnityEngine_Android_PermissionCallbacks___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B4D1EC(v10, v11);
  UnityEngine_Android_PermissionCallbacks__add_PermissionGranted(v9, grantedCallback, 0LL);
  UnityEngine_Android_PermissionCallbacks__add_PermissionDenied(v9, deniedCallback, 0LL);
  if ( dontAskCallback )
    v12 = dontAskCallback;
  else
    v12 = deniedCallback;
  UnityEngine_Android_PermissionCallbacks__add_PermissionDeniedAndDontAskAgain(v9, v12, 0LL);
  UnityEngine_Android_Permission__RequestUserPermission(permissionName, v9, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_AndroidJavaClass_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  Il2CppObject *Static_object; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  _BOOL4 v21; // w25
  Il2CppClass *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_AndroidJavaClass_c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v31; // x0

  if ( (byte_49BA41A & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_AndroidJavaClass_TypeInfo, method);
    sub_1B4CF90(&Method_UnityEngine_AndroidJavaObject_Call_bool____75488680, v3);
    sub_1B4CF90(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___, v4);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v5);
    sub_1B4CF90(&object___TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_23030/*"shouldShowRequestPermissionRationale"*/, v7);
    sub_1B4CF90(&StringLiteral_17811/*"com.unity3d.player.UnityPlayer"*/, v8);
    sub_1B4CF90(&StringLiteral_18092/*"currentActivity"*/, v9);
    byte_49BA41A = 1;
  }
  v10 = (UnityEngine_AndroidJavaClass_o *)sub_1B4D1DC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v10, (System_String_o *)StringLiteral_17811/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v10 )
    sub_1B4D1EC(v11, v12);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v10,
                    (System_String_o *)StringLiteral_18092/*"currentActivity"*/,
                    (const MethodInfo_2E5D748 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v14 = sub_1B4D038(object___TypeInfo, 1LL);
  v18 = v14;
  if ( !v14 )
    sub_1B4D1EC(0LL, v15);
  if ( permissionName )
  {
    v14 = sub_1B4D0CC(permissionName, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
    if ( !v14 )
    {
      v31 = sub_1B4D210(0LL);
      sub_1B4D0B8(v31, 0LL);
    }
  }
  if ( !*(_DWORD *)(v18 + 24) )
    sub_1B4D1F4(v14, v15);
  *(_QWORD *)(v18 + 32) = permissionName;
  sub_1B4CF34((CGThumbnailListItem_o *)(v18 + 32), (int32_t)permissionName, v16, v17);
  if ( !Static_object )
    sub_1B4D1EC(v19, v20);
  v21 = UnityEngine_AndroidJavaObject__Call_bool_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_23030/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v18,
          (const MethodInfo_2E5B2F0 *)Method_UnityEngine_AndroidJavaObject_Call_bool____75488680);
  klass = Static_object->klass;
  v23 = *(unsigned __int16 *)(&Static_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Static_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1B9D724(Static_object, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(Il2CppObject *, _QWORD))p_method)(Static_object, *(_QWORD *)(p_method + 8));
  v26 = v10->klass;
  v27 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_19;
    }
    v29 = (__int64)(&v26->vtable._0_Equals.method + 2 * *v28);
  }
  else
  {
LABEL_19:
    v29 = sub_1B9D724(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v29)(v10, *(_QWORD *)(v29 + 8));
  return v21;
}