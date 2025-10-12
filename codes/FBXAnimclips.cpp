void FBXAnimclips___cctor(const MethodInfo *method)
{
  if ( (byte_4C36DBF & 1) == 0 )
  {
    sub_1C32C20(&FBXAnimclips_TypeInfo);
    byte_4C36DBF = 1;
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
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  Il2CppType *v9; // x20
  System_String_o *v10; // x19
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *TypeFromHandle; // x0
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = svtId;
  if ( (byte_4C36DBE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C32C20(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&UnityEngine_TextAsset_var);
    sub_1C32C20(&UnityEngine_TextAsset_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    sub_1C32C20(&StringLiteral_1101/*"/fbxevent"*/);
    sub_1C32C20(&StringLiteral_12753/*"Servants/"*/);
    sub_1C32C20(&StringLiteral_1095/*"/chr"*/);
    byte_4C36DBE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v5 = System_Int32__ToString((int32_t)&v13, 0);
  v6 = System_String__Concat_63556792(
         (System_String_o *)StringLiteral_12753/*"Servants/"*/,
         v5,
         (System_String_o *)StringLiteral_1095/*"/chr"*/,
         0);
  UnityEngine_Resources__Load_object_(v6, (const MethodInfo_31799A8 *)Method_UnityEngine_Resources_Load_GameObject___);
  v7 = System_Int32__ToString((int32_t)&v13, 0);
  v8 = System_String__Concat_63556792(
         (System_String_o *)StringLiteral_12753/*"Servants/"*/,
         v7,
         (System_String_o *)StringLiteral_1101/*"/fbxevent"*/,
         0);
  v9 = UnityEngine_TextAsset_var;
  v10 = v8;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v11.fields.value = (intptr_t)v9;
  TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0);
  UnityEngine_Resources__Load_71184048(v10, TypeFromHandle, 0);
}