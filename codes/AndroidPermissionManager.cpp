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
  __int64 v2; // x2

  if ( (byte_4B157B5 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, v1, v2);
    byte_4B157B5 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v1);
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

  if ( (byte_4B157B7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Android_PermissionCallbacks_TypeInfo, grantedCallback, deniedCallback);
    byte_4B157B7 = 1;
  }
  v9 = (UnityEngine_Android_PermissionCallbacks_o *)sub_1BCAA2C(
                                                      UnityEngine_Android_PermissionCallbacks_TypeInfo,
                                                      grantedCallback,
                                                      deniedCallback,
                                                      dontAskCallback);
  UnityEngine_Android_PermissionCallbacks___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BCAA3C(v10, v11);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_AndroidJavaClass_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  Il2CppObject *Static_object; // x20
  __int64 v23; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  _BOOL4 v34; // w25
  Il2CppClass *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_AndroidJavaClass_c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v44; // x0

  if ( (byte_4B157B6 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AndroidJavaClass_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_AndroidJavaObject_Call_bool____76832800, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&object___TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_23550/*"shouldShowRequestPermissionRationale"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_18300/*"com.unity3d.player.UnityPlayer"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_18584/*"currentActivity"*/, v17, v18);
    byte_4B157B6 = 1;
  }
  v19 = (UnityEngine_AndroidJavaClass_o *)sub_1BCAA2C(UnityEngine_AndroidJavaClass_TypeInfo, method, v2, v3);
  UnityEngine_AndroidJavaClass___ctor(v19, (System_String_o *)StringLiteral_18300/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v19,
                    (System_String_o *)StringLiteral_18584/*"currentActivity"*/,
                    (const MethodInfo_2E6AED8 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v23 = sub_1BCA888(object___TypeInfo, 1LL);
  v31 = v23;
  if ( !v23 )
    sub_1BCAA3C(0LL, v24);
  if ( permissionName )
  {
    v23 = sub_1BCA91C(permissionName, *(_QWORD *)(*(_QWORD *)v23 + 64LL));
    if ( !v23 )
    {
      v44 = sub_1BCAA60(0LL);
      sub_1BCA908(v44, 0LL);
    }
  }
  if ( !*(_DWORD *)(v31 + 24) )
    sub_1BCAA44(v23, v24);
  *(_QWORD *)(v31 + 32) = permissionName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)permissionName, v25, v26, v27, v28, v29, v30);
  if ( !Static_object )
    sub_1BCAA3C(v32, v33);
  v34 = UnityEngine_AndroidJavaObject__Call_bool_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_23550/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v31,
          (const MethodInfo_2E68A80 *)Method_UnityEngine_AndroidJavaObject_Call_bool____76832800);
  klass = Static_object->klass;
  v36 = *(unsigned __int16 *)(&Static_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Static_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      p_offset += 4;
      if ( !v36 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1C1C7C0(Static_object, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(Il2CppObject *, _QWORD))p_method)(Static_object, *(_QWORD *)(p_method + 8));
  v39 = v19->klass;
  v40 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    v41 = &v39->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_19;
    }
    v42 = (__int64)(&v39->vtable._0_Equals.method + 2 * *v41);
  }
  else
  {
LABEL_19:
    v42 = sub_1C1C7C0(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v42)(v19, *(_QWORD *)(v42 + 8));
  return v34;
}