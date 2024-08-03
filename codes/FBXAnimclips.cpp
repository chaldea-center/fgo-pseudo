void __fastcall FBXAnimclips___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FB8E8 & 1) == 0 )
  {
    sub_1B640C8(&FBXAnimclips_TypeInfo, v1);
    byte_49FB8E8 = 1;
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
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  intptr_t v17; // w20
  System_String_o *v18; // x19
  System_Type_o *TypeFromHandle; // x0
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v21; // 0:w0.4

  v20 = svtId;
  if ( (byte_49FB8E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B640C8(&UnityEngine_TextAsset_var, v6);
    sub_1B640C8(&UnityEngine_TextAsset_TypeInfo, v7);
    sub_1B640C8(&System_Type_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_1180/*"/fbxevent"*/, v9);
    sub_1B640C8(&StringLiteral_12592/*"Servants/"*/, v10);
    sub_1B640C8(&StringLiteral_1173/*"/chr"*/, v11);
    byte_49FB8E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = System_Int32__ToString((int32_t)&v20, 0LL);
  v14 = System_String__Concat_61386656(
          (System_String_o *)StringLiteral_12592/*"Servants/"*/,
          v13,
          (System_String_o *)StringLiteral_1173/*"/chr"*/,
          0LL);
  UnityEngine_Resources__Load_object_(v14, (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_GameObject___);
  v15 = System_Int32__ToString((int32_t)&v20, 0LL);
  v16 = System_String__Concat_61386656(
          (System_String_o *)StringLiteral_12592/*"Servants/"*/,
          v15,
          (System_String_o *)StringLiteral_1180/*"/fbxevent"*/,
          0LL);
  v17 = (int)UnityEngine_TextAsset_var;
  v18 = v16;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v21.fields.value = v17;
  TypeFromHandle = System_Type__GetTypeFromHandle(v21, 0LL);
  UnityEngine_Resources__Load_69087664(v18, TypeFromHandle, 0LL);
}