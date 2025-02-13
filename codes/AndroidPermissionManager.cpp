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
  if ( (byte_4BDBAF1 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    byte_4BDBAF1 = 1;
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

  if ( (byte_4BDBAF3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Android_PermissionCallbacks_TypeInfo);
    byte_4BDBAF3 = 1;
  }
  v9 = (UnityEngine_Android_PermissionCallbacks_o *)sub_1C22084(UnityEngine_Android_PermissionCallbacks_TypeInfo);
  UnityEngine_Android_PermissionCallbacks___ctor(v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
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
  UnityEngine_AndroidJavaClass_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  Il2CppObject *Static_object; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  _BOOL4 v18; // w25
  Il2CppClass *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  UnityEngine_AndroidJavaClass_c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v28; // x0

  if ( (byte_4BDBAF2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_AndroidJavaObject_Call_bool____77622344);
    sub_1C21E38(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&StringLiteral_23729/*"shouldShowRequestPermissionRationale"*/);
    sub_1C21E38(&StringLiteral_18424/*"com.unity3d.player.UnityPlayer"*/);
    sub_1C21E38(&StringLiteral_18709/*"currentActivity"*/);
    byte_4BDBAF2 = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_1C22084(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_18424/*"com.unity3d.player.UnityPlayer"*/, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v3,
                    (System_String_o *)StringLiteral_18709/*"currentActivity"*/,
                    (const MethodInfo_2F07F60 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v7 = sub_1C21EE0(object___TypeInfo, 1LL);
  v15 = v7;
  if ( !v7 )
    sub_1C22094(0LL, v8);
  if ( permissionName )
  {
    v7 = sub_1C21F74(permissionName, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v28 = sub_1C220B8(0LL);
      sub_1C21F60(v28, 0LL);
    }
  }
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1C2209C(v7, v8);
  *(_QWORD *)(v15 + 32) = permissionName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)permissionName, v9, v10, v11, v12, v13, v14);
  if ( !Static_object )
    sub_1C22094(v16, v17);
  v18 = UnityEngine_AndroidJavaObject__Call_bool_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_23729/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v15,
          (const MethodInfo_2F05B08 *)Method_UnityEngine_AndroidJavaObject_Call_bool____77622344);
  klass = Static_object->klass;
  v20 = *(unsigned __int16 *)(&Static_object->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Static_object->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_13;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_13:
    p_method = sub_1C73E18(Static_object, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(Il2CppObject *, _QWORD))p_method)(Static_object, *(_QWORD *)(p_method + 8));
  v23 = v3->klass;
  v24 = *(unsigned __int16 *)(&v3->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v3->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_19;
    }
    v26 = (__int64)(&v23->vtable._0_Equals.method + 2 * *v25);
  }
  else
  {
LABEL_19:
    v26 = sub_1C73E18(v3, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v26)(v3, *(_QWORD *)(v26 + 8));
  return v18;
}