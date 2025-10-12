void AndroidPermissionManager___ctor(AndroidPermissionManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AndroidPermissionManager__CheckPermission(System_String_o *permissionName, const MethodInfo *method)
{
  return UnityEngine_Android_Permission__HasUserAuthorizedPermission(permissionName, 0);
}


bool AndroidPermissionManager__EnabledRuntimePermission(const MethodInfo *method)
{
  if ( (byte_4C36F9C & 1) == 0 )
  {
    sub_1C32C20(&AndroidUtil_TypeInfo);
    byte_4C36F9C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  return AndroidUtil__get_apiLevel(0) > 22;
}


void AndroidPermissionManager__RequestPermission(
        System_String_o *permissionName,
        System_Action_string__o *grantedCallback,
        System_Action_string__o *deniedCallback,
        System_Action_string__o *dontAskCallback,
        const MethodInfo *method)
{
  UnityEngine_Android_PermissionCallbacks_o *v9; // x23
  __int64 v10; // x0
  System_Action_string__o *v11; // x1

  if ( (byte_4C36F9E & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Android_PermissionCallbacks_TypeInfo);
    byte_4C36F9E = 1;
  }
  v9 = (UnityEngine_Android_PermissionCallbacks_o *)sub_1C32E6C(UnityEngine_Android_PermissionCallbacks_TypeInfo);
  UnityEngine_Android_PermissionCallbacks___ctor(v9, 0);
  if ( !v9 )
    sub_1C32E7C(v10);
  UnityEngine_Android_PermissionCallbacks__add_PermissionGranted(v9, grantedCallback, 0);
  UnityEngine_Android_PermissionCallbacks__add_PermissionDenied(v9, deniedCallback, 0);
  if ( dontAskCallback )
    v11 = dontAskCallback;
  else
    v11 = deniedCallback;
  UnityEngine_Android_PermissionCallbacks__add_PermissionDeniedAndDontAskAgain(v9, v11, 0);
  UnityEngine_Android_Permission__RequestUserPermission(permissionName, v9, 0);
}


bool AndroidPermissionManager__ShouldShowRequestPermissionRationale(
        System_String_o *permissionName,
        const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v3; // x19
  __int64 v4; // x0
  Il2CppObject *Static_object; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x22
  __int64 v10; // x0
  _BOOL4 v11; // w25
  Il2CppClass *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  UnityEngine_AndroidJavaClass_c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v21; // x0

  if ( (byte_4C36F9D & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_AndroidJavaObject_Call_bool____78055920);
    sub_1C32C20(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&StringLiteral_23472/*"shouldShowRequestPermissionRationale"*/);
    sub_1C32C20(&StringLiteral_18117/*"com.unity3d.player.UnityPlayer"*/);
    sub_1C32C20(&StringLiteral_18401/*"currentActivity"*/);
    byte_4C36F9D = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_1C32E6C(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_18117/*"com.unity3d.player.UnityPlayer"*/, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v3,
                    (System_String_o *)StringLiteral_18401/*"currentActivity"*/,
                    (const MethodInfo_302F74C *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v6 = sub_1C32CC8(object___TypeInfo, 1);
  v9 = v6;
  if ( !v6 )
    sub_1C32E7C(0);
  if ( permissionName )
  {
    v6 = sub_1C32D5C(permissionName, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
    if ( !v6 )
    {
      v21 = sub_1C32EA0(0);
      sub_1C32D48(v21, 0);
    }
  }
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C32E84(v6);
  *(_QWORD *)(v9 + 32) = permissionName;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), (int32_t)permissionName, v7, v8);
  if ( !Static_object )
    sub_1C32E7C(v10);
  v11 = UnityEngine_AndroidJavaObject__Call_bool_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_23472/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v9,
          (const MethodInfo_302D2F4 *)Method_UnityEngine_AndroidJavaObject_Call_bool____78055920);
  klass = Static_object->klass;
  v13 = *(unsigned __int16 *)&Static_object->klass->_2.rank;
  if ( *(_WORD *)&Static_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_13;
    }
    v15 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_13:
    v15 = sub_1C83438(Static_object, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(Il2CppObject *, _QWORD))v15)(Static_object, *(_QWORD *)(v15 + 8));
  v16 = v3->klass;
  v17 = *(unsigned __int16 *)&v3->klass->_2.rank;
  if ( *(_WORD *)&v3->klass->_2.rank )
  {
    v18 = &v16->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v18 - 1) != System_IDisposable_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_19;
    }
    v19 = (__int64)&v16->vtable + 16 * *v18;
  }
  else
  {
LABEL_19:
    v19 = sub_1C83438(v3, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v19)(v3, *(_QWORD *)(v19 + 8));
  return v11;
}