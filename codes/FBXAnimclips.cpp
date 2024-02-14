void __fastcall FBXAnimclips___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_421412A & 1) == 0 )
  {
    sub_B0D8A4(&FBXAnimclips_TypeInfo, v1);
    byte_421412A = 1;
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
  WebViewManager_o *Instance; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x19
  intptr_t v17; // w20
  System_Type_o *TypeFromHandle; // x0
  int32_t v19; // [xsp+Ch] [xbp-14h] BYREF
  System_RuntimeTypeHandle_o v20; // 0:w0.4

  v19 = svtId;
  if ( (byte_4214129 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&UnityEngine_TextAsset_var, v6);
    sub_B0D8A4(&UnityEngine_TextAsset_TypeInfo, v7);
    sub_B0D8A4(&System_Type_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_928/*"/fbxevent"*/, v9);
    sub_B0D8A4(&StringLiteral_12776/*"Servants/"*/, v10);
    sub_B0D8A4(&StringLiteral_921/*"/chr"*/, v11);
    byte_4214129 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = System_Int32__ToString((int32_t)&v19, 0LL);
  v14 = System_String__Concat_43852188(
          (System_String_o *)StringLiteral_12776/*"Servants/"*/,
          v13,
          (System_String_o *)StringLiteral_921/*"/chr"*/,
          0LL);
  UnityEngine_Resources__Load_UIAtlas_(v14, (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_GameObject___);
  v15 = System_Int32__ToString((int32_t)&v19, 0LL);
  v16 = System_String__Concat_43852188(
          (System_String_o *)StringLiteral_12776/*"Servants/"*/,
          v15,
          (System_String_o *)StringLiteral_928/*"/fbxevent"*/,
          0LL);
  v17 = (int)UnityEngine_TextAsset_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v20.fields.value = v17;
  TypeFromHandle = System_Type__GetTypeFromHandle(v20, 0LL);
  UnityEngine_Resources__Load_34998816(v16, TypeFromHandle, 0LL);
}