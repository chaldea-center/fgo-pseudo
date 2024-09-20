void __fastcall FBXAnimclips___cctor(const MethodInfo *method)
{
  if ( (byte_4A5A620 & 1) == 0 )
  {
    sub_1B885B0(&FBXAnimclips_TypeInfo);
    byte_4A5A620 = 1;
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
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  intptr_t v10; // w20
  System_String_o *v11; // x19
  System_Type_o *TypeFromHandle; // x0
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v14; // 0:w0.4

  v13 = svtId;
  if ( (byte_4A5A61F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UnityEngine_TextAsset_var);
    sub_1B885B0(&UnityEngine_TextAsset_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    sub_1B885B0(&StringLiteral_1179/*"/fbxevent"*/);
    sub_1B885B0(&StringLiteral_12653/*"Servants/"*/);
    sub_1B885B0(&StringLiteral_1172/*"/chr"*/);
    byte_4A5A61F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v5);
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v6 = System_Int32__ToString((int32_t)&v13, 0LL);
  v7 = System_String__Concat_61718292(
         (System_String_o *)StringLiteral_12653/*"Servants/"*/,
         v6,
         (System_String_o *)StringLiteral_1172/*"/chr"*/,
         0LL);
  UnityEngine_Resources__Load_object_(v7, (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_GameObject___);
  v8 = System_Int32__ToString((int32_t)&v13, 0LL);
  v9 = System_String__Concat_61718292(
         (System_String_o *)StringLiteral_12653/*"Servants/"*/,
         v8,
         (System_String_o *)StringLiteral_1179/*"/fbxevent"*/,
         0LL);
  v10 = (int)UnityEngine_TextAsset_var;
  v11 = v9;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v14.fields.value = v10;
  TypeFromHandle = System_Type__GetTypeFromHandle(v14, 0LL);
  UnityEngine_Resources__Load_69419308(v11, TypeFromHandle, 0LL);
}