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
  if ( (byte_4CC69BD & 1) == 0 )
  {
    sub_1C713B0(&AndroidUtil_TypeInfo);
    byte_4CC69BD = 1;
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
  __int64 v11; // x1
  System_Action_string__o *v12; // x1

  if ( (byte_4CC69BF & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Android_PermissionCallbacks_TypeInfo);
    byte_4CC69BF = 1;
  }
  v9 = (UnityEngine_Android_PermissionCallbacks_o *)sub_1C715FC(UnityEngine_Android_PermissionCallbacks_TypeInfo);
  UnityEngine_Android_PermissionCallbacks___ctor(v9, 0);
  if ( !v9 )
    sub_1C71608(v10, v11);
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
  UnityEngine_AndroidJavaClass_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  Il2CppObject *Static_object; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  _BOOL4 v18; // w25
  Il2CppClass *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  UnityEngine_AndroidJavaClass_c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v28; // x0

  if ( (byte_4CC69BE & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_AndroidJavaClass_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_AndroidJavaObject_Call_bool____78633496);
    sub_1C713B0(&Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&StringLiteral_23585/*"shouldShowRequestPermissionRationale"*/);
    sub_1C713B0(&StringLiteral_18151/*"com.unity3d.player.UnityPlayer"*/);
    sub_1C713B0(&StringLiteral_18445/*"currentActivity"*/);
    byte_4CC69BE = 1;
  }
  v3 = (UnityEngine_AndroidJavaClass_o *)sub_1C715FC(UnityEngine_AndroidJavaClass_TypeInfo);
  UnityEngine_AndroidJavaClass___ctor(v3, (System_String_o *)StringLiteral_18151/*"com.unity3d.player.UnityPlayer"*/, 0);
  if ( !v3 )
    sub_1C71608(v4, v5);
  Static_object = UnityEngine_AndroidJavaObject__GetStatic_object_(
                    (UnityEngine_AndroidJavaObject_o *)v3,
                    (System_String_o *)StringLiteral_18445/*"currentActivity"*/,
                    (const MethodInfo_309B774 *)Method_UnityEngine_AndroidJavaObject_GetStatic_AndroidJavaObject___);
  v7 = sub_1C71458(object___TypeInfo, 1);
  v15 = v7;
  if ( !v7 )
    sub_1C71608(0, v8);
  if ( permissionName )
  {
    v7 = sub_1C714EC(permissionName, *(_QWORD *)(*(_QWORD *)v7 + 64LL));
    if ( !v7 )
    {
      v28 = sub_1C7162C(0);
      sub_1C714D8(v28, 0);
    }
  }
  if ( !*(_DWORD *)(v15 + 24) )
    sub_1C71610(v7);
  *(_QWORD *)(v15 + 32) = permissionName;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v15 + 32), (int32_t)permissionName, v9, v10, v11, v12, v13, v14);
  if ( !Static_object )
    sub_1C71608(v16, v17);
  v18 = UnityEngine_AndroidJavaObject__Call_bool_(
          (UnityEngine_AndroidJavaObject_o *)Static_object,
          (System_String_o *)StringLiteral_23585/*"shouldShowRequestPermissionRationale"*/,
          (System_Object_array *)v15,
          (const MethodInfo_309931C *)Method_UnityEngine_AndroidJavaObject_Call_bool____78633496);
  klass = Static_object->klass;
  v20 = *(unsigned __int16 *)&Static_object->klass->_2.rank;
  if ( *(_WORD *)&Static_object->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_13;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_13:
    v22 = sub_1C47738(Static_object, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(Il2CppObject *, _QWORD))v22)(Static_object, *(_QWORD *)(v22 + 8));
  v23 = v3->klass;
  v24 = *(unsigned __int16 *)&v3->klass->_2.rank;
  if ( *(_WORD *)&v3->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_19;
    }
    v26 = (__int64)&v23->vtable + 16 * *v25;
  }
  else
  {
LABEL_19:
    v26 = sub_1C47738(v3, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(UnityEngine_AndroidJavaClass_o *, _QWORD))v26)(v3, *(_QWORD *)(v26 + 8));
  return v18;
}