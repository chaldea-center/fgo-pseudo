void __fastcall FBXAnimclips___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B43EC0 & 1) == 0 )
  {
    sub_1BDB878(&FBXAnimclips_TypeInfo, v1);
    byte_4B43EC0 = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  intptr_t v18; // w20
  System_String_o *v19; // x19
  System_Type_o *TypeFromHandle; // x0
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v22; // 0:w0.4

  v21 = svtId;
  if ( (byte_4B43EBF & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BDB878(&UnityEngine_TextAsset_var, v6);
    sub_1BDB878(&UnityEngine_TextAsset_TypeInfo, v7);
    sub_1BDB878(&System_Type_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_1114/*"/fbxevent"*/, v9);
    sub_1BDB878(&StringLiteral_12718/*"Servants/"*/, v10);
    sub_1BDB878(&StringLiteral_1108/*"/chr"*/, v11);
    byte_4B43EBF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v13);
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = System_Int32__ToString((int32_t)&v21, 0LL);
  v15 = System_String__Concat_62610508(
          (System_String_o *)StringLiteral_12718/*"Servants/"*/,
          v14,
          (System_String_o *)StringLiteral_1108/*"/chr"*/,
          0LL);
  UnityEngine_Resources__Load_object_(v15, (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_GameObject___);
  v16 = System_Int32__ToString((int32_t)&v21, 0LL);
  v17 = System_String__Concat_62610508(
          (System_String_o *)StringLiteral_12718/*"Servants/"*/,
          v16,
          (System_String_o *)StringLiteral_1114/*"/fbxevent"*/,
          0LL);
  v18 = (int)UnityEngine_TextAsset_var;
  v19 = v17;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v22.fields.value = v18;
  TypeFromHandle = System_Type__GetTypeFromHandle(v22, 0LL);
  UnityEngine_Resources__Load_70244548(v19, TypeFromHandle, 0LL);
}