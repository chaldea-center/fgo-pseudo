void FBXAnimclips___cctor(const MethodInfo *method)
{
  if ( (byte_5937ADA & 1) == 0 )
  {
    sub_21FFC50(&FBXAnimclips_TypeInfo);
    byte_5937ADA = 1;
  }
  LODWORD(FBXAnimclips_TypeInfo->static_fields->animFps) = (struct FBXAnimclips_StaticFields)1106247680;
}


void FBXAnimclips___ctor(FBXAnimclips_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FBXAnimclips__inAttachAnimationEvents(
        FBXAnimclips_o *this,
        UnityEngine_GameObject_o *gameObject,
        UnityEngine_TextAsset_o *data,
        int32_t level,
        const MethodInfo *method)
{
  ;
}


void FBXAnimclips__loadAnimationEvents(FBXAnimclips_o *this, int32_t svtId, int32_t level, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x19
  Il2CppType *v11; // x20
  System_RuntimeTypeHandle_o v12; // x0
  System_Type_o *TypeFromHandle; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = svtId;
  if ( (byte_5937AD9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&UnityEngine_TextAsset_var);
    sub_21FFC50(&UnityEngine_TextAsset_TypeInfo);
    sub_21FFC50(&StringLiteral_1177/*"/fbxevent"*/);
    sub_21FFC50(&StringLiteral_13267/*"Servants/"*/);
    sub_21FFC50(&StringLiteral_1171/*"/chr"*/);
    byte_5937AD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v5);
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v6 = System_Int32__ToString((int32_t)&v14, 0);
  v7 = System_String__Concat_75481624(
         (System_String_o *)StringLiteral_13267/*"Servants/"*/,
         v6,
         (System_String_o *)StringLiteral_1171/*"/chr"*/,
         0);
  UnityEngine_Resources__Load_object_(v7, (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_GameObject___);
  v8 = System_Int32__ToString((int32_t)&v14, 0);
  v10 = System_String__Concat_75481624(
          (System_String_o *)StringLiteral_13267/*"Servants/"*/,
          v8,
          (System_String_o *)StringLiteral_1177/*"/fbxevent"*/,
          0);
  v11 = UnityEngine_TextAsset_var;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v9);
  v12.fields.value = (intptr_t)v11;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0);
  UnityEngine_Resources__Load_83187564(v10, TypeFromHandle, 0);
}