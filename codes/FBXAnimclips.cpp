void FBXAnimclips___cctor(const MethodInfo *method)
{
  if ( (byte_4E76A9E & 1) == 0 )
  {
    sub_1D0F0B4(&FBXAnimclips_TypeInfo);
    byte_4E76A9E = 1;
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
  System_String_o *v9; // x0
  Il2CppType *v10; // x20
  System_String_o *v11; // x19
  System_RuntimeTypeHandle_o v12; // x0
  System_Type_o *TypeFromHandle; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  v14 = svtId;
  if ( (byte_4E76A9D & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1D0F0B4(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&UnityEngine_TextAsset_var);
    sub_1D0F0B4(&UnityEngine_TextAsset_TypeInfo);
    sub_1D0F0B4(&System_Type_TypeInfo);
    sub_1D0F0B4(&StringLiteral_1097/*"/fbxevent"*/);
    sub_1D0F0B4(&StringLiteral_12940/*"Servants/"*/);
    sub_1D0F0B4(&StringLiteral_1091/*"/chr"*/);
    byte_4E76A9D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1D0F30C(0, v5);
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v6 = System_Int32__ToString((int32_t)&v14, 0);
  v7 = System_String__Concat_65601036(
         (System_String_o *)StringLiteral_12940/*"Servants/"*/,
         v6,
         (System_String_o *)StringLiteral_1091/*"/chr"*/,
         0);
  UnityEngine_Resources__Load_object_(v7, (const MethodInfo_32ED880 *)Method_UnityEngine_Resources_Load_GameObject___);
  v8 = System_Int32__ToString((int32_t)&v14, 0);
  v9 = System_String__Concat_65601036(
         (System_String_o *)StringLiteral_12940/*"Servants/"*/,
         v8,
         (System_String_o *)StringLiteral_1097/*"/fbxevent"*/,
         0);
  v10 = UnityEngine_TextAsset_var;
  v11 = v9;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v12.fields.value = (intptr_t)v10;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0);
  UnityEngine_Resources__Load_73319384(v11, TypeFromHandle, 0);
}