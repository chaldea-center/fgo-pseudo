void __fastcall FBXAnimclips___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7A25 & 1) == 0 )
  {
    sub_B5D5C4(&FBXAnimclips_TypeInfo, v1, v2, v3);
    byte_42E7A25 = 1;
  }
  LODWORD(FBXAnimclips_TypeInfo->static_fields->animFps) = (struct FBXAnimclips_StaticFields)1106247680;
}


void __fastcall FBXAnimclips___ctor(FBXAnimclips_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FBXAnimclips__inAttachAnimationEvents(
        FBXAnimclips_o *this,
        UnityEngine_GameObject_o *gameObject,
        UnityEngine_TextAsset_o *data,
        int32_t level,
        const MethodInfo *method)
{
  ;
}


void __fastcall FBXAnimclips__loadAnimationEvents(
        FBXAnimclips_o *this,
        int32_t svtId,
        int32_t level,
        const MethodInfo *method)
{
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  WebViewManager_o *Instance; // x0
  __int64 v29; // x1
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x19
  intptr_t v34; // w20
  System_Type_o *TypeFromHandle; // x0
  int32_t v36; // [xsp+Ch] [xbp-14h] BYREF
  System_RuntimeTypeHandle_o v37; // 0:w0.4

  v36 = svtId;
  if ( (byte_42E7A24 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, svtId, level, method);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_TextAsset_var, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_TextAsset_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_Type_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_941/*"/fbxevent"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_12888/*"Servants/"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_934/*"/chr"*/, v25, v26, v27);
    byte_42E7A24 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v29);
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v30 = System_Int32__ToString((int32_t)&v36, 0LL);
  v31 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_12888/*"Servants/"*/,
          v30,
          (System_String_o *)StringLiteral_934/*"/chr"*/,
          0LL);
  UnityEngine_Resources__Load_UIAtlas_(v31, (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
  v32 = System_Int32__ToString((int32_t)&v36, 0LL);
  v33 = System_String__Concat_44580072(
          (System_String_o *)StringLiteral_12888/*"Servants/"*/,
          v32,
          (System_String_o *)StringLiteral_941/*"/fbxevent"*/,
          0LL);
  v34 = (int)UnityEngine_TextAsset_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v37.fields.value = v34;
  TypeFromHandle = System_Type__GetTypeFromHandle(v37, 0LL);
  UnityEngine_Resources__Load_35683776(v33, TypeFromHandle, 0LL);
}