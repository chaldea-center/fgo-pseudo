void __fastcall FBXAnimclips___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1568A & 1) == 0 )
  {
    sub_1BCA7E0(&FBXAnimclips_TypeInfo, v1, v2);
    byte_4B1568A = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall FBXAnimclips__loadAnimationEvents(
        FBXAnimclips_o *this,
        int32_t svtId,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  __int64 v26; // x1
  intptr_t v27; // w20
  System_String_o *v28; // x19
  System_Type_o *TypeFromHandle; // x0
  int32_t v30; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v31; // 0:w0.4

  v30 = svtId;
  if ( (byte_4B15689 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId, *(_QWORD *)&level);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&UnityEngine_TextAsset_var, v8, v9);
    sub_1BCA7E0(&UnityEngine_TextAsset_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Type_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1176/*"/fbxevent"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_12811/*"Servants/"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1169/*"/chr"*/, v18, v19);
    byte_4B15689 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v21);
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  v22 = System_Int32__ToString((int32_t)&v30, 0LL);
  v23 = System_String__Concat_62412480(
          (System_String_o *)StringLiteral_12811/*"Servants/"*/,
          v22,
          (System_String_o *)StringLiteral_1169/*"/chr"*/,
          0LL);
  UnityEngine_Resources__Load_object_(v23, (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
  v24 = System_Int32__ToString((int32_t)&v30, 0LL);
  v25 = System_String__Concat_62412480(
          (System_String_o *)StringLiteral_12811/*"Servants/"*/,
          v24,
          (System_String_o *)StringLiteral_1176/*"/fbxevent"*/,
          0LL);
  v27 = (int)UnityEngine_TextAsset_var;
  v28 = v25;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v26);
  v31.fields.value = v27;
  TypeFromHandle = System_Type__GetTypeFromHandle(v31, 0LL);
  UnityEngine_Resources__Load_70114172(v28, TypeFromHandle, 0LL);
}