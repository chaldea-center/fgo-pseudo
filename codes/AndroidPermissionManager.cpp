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
  __int64 v1; // x1

  if ( (byte_5937C35 & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    byte_5937C35 = 1;
  }
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
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
  __int64 v11; // x1
  System_Action_string__o *v12; // x1

  if ( (byte_5937C37 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Android_PermissionCallbacks_TypeInfo);
    byte_5937C37 = 1;
  }
  v9 = (UnityEngine_Android_PermissionCallbacks_o *)sub_21FFEBC(UnityEngine_Android_PermissionCallbacks_TypeInfo);
  UnityEngine_Android_PermissionCallbacks___ctor(v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  UnityEngine_Android_PermissionCallbacks__add_PermissionGranted(v9, grantedCallback, 0);
  UnityEngine_Android_PermissionCallbacks__add_PermissionDenied(v9, deniedCallback, 0);
  if ( dontAskCallback )
    v12 = dontAskCallback;
  else
    v12 = deniedCallback;
  UnityEngine_Android_PermissionCallbacks__add_PermissionDeniedAndDontAskAgain(v9, v12, 0);
  UnityEngine_Android_Permission__RequestUserPermission(permissionName, v9, 0);
}


bool AndroidPermissionManager__ShouldShowRequestPermissionRationale(
        System_String_o *permissionName,
        const MethodInfo *method)
{
  UnityEngine_AndroidJavaClass_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  Il2CppObject *Static_object; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x21
  __int64 v16; // x1
  bool v17; // w19
  Il2CppClass *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  UnityEngine_AndroidJavaClass_c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v27; // x0
  UnityEngine_AndroidJavaClass_o *v28; // [xsp+38h] [xbp-28h]

  if ( (byte_5937C36 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_Call_bool____91478528);
    sub_21FFC50(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_24658/*"shouldShowRequestPermissionRationale"*/);
    sub_21FFC50(&StringLiteral_18888/*"com.unity3d.player.UnityPlayer"*/);
    sub_21FFC50(&StringLiteral_19193/*"currentActivity"*/);
    byte_5937C36 = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_21FFEBC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_18888/*"com.unity3d.player.UnityPlayer"*/, 0);
  v28 = v3;
  if ( !v3 )
    sub_21FFECC(v4, v5);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v3,
                    (System_String_o *)StringLiteral_19193/*"currentActivity"*/,
                    (const MethodInfo_36D7798 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v7 = sub_21FFD10(object___TypeInfo, 1);
  v15 = v7;
  if ( !v7 )
    goto LABEL_24;
  if ( permissionName )
  {
    v7 = sub_21FFDA4(permissionName, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v27 = sub_21FFEF0(0, v16);
      sub_21FFD90(v27, 0);
    }
  }
  if ( !*(_DWORD *)(v15 + 24) )
    sub_21FFED4(v7);
  *(_QWORD *)(v15 + 32) = permissionName;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)permissionName, v9, v10, v11, v12, v13, v14);
  if ( !Static_object )
LABEL_24:
    sub_21FFECC(v7, v8);
  v17 = UnityEngine_AndroidJavaObject__Call_bool_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_24658/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v15,
          (const MethodInfo_36D5468 *)Method_UnityEngine_AndroidJavaObject_Call_bool____91478528);
  klass = Static_object->klass;
  v19 = *(unsigned __int16 *)&Static_object->klass->_2.rank;
  if ( *(_WORD *)&Static_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_13;
    }
    v21 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_13:
    v21 = sub_2237E2C(Static_object, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(Il2CppObject *, _QWORD))v21)(Static_object, *(_QWORD *)(v21 + 8));
  if ( v28 )
  {
    v22 = v28->klass;
    v23 = *(unsigned __int16 *)&v28->klass->_2.rank;
    if ( *(_WORD *)&v28->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_20;
      }
      v25 = (__int64)&v22->vtable + 16 * *v24;
    }
    else
    {
LABEL_20:
      v25 = sub_2237E2C(v28, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v25)(v28, *(_QWORD *)(v25 + 8));
  }
  return v17;
}