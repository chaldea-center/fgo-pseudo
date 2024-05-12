void __fastcall FBXAnimclips___cctor(const MethodInfo *method)
{
  if ( (byte_4389FE8 & 1) == 0 )
  {
    sub_B775C4(&FBXAnimclips_TypeInfo);
    byte_4389FE8 = 1;
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
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  intptr_t v10; // w20
  System_Type_o *TypeFromHandle; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF
  System_RuntimeTypeHandle_o v13; // 0:w0.4

  v12 = svtId;
  if ( (byte_4389FE7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&UnityEngine_TextAsset_var);
    sub_B775C4(&UnityEngine_TextAsset_TypeInfo);
    sub_B775C4(&System_Type_TypeInfo);
    sub_B775C4(&StringLiteral_948/*"/fbxevent"*/);
    sub_B775C4(&StringLiteral_12973/*"Servants/"*/);
    sub_B775C4(&StringLiteral_941/*"/chr"*/);
    byte_4389FE7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v5);
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v6 = System_Int32__ToString((int32_t)&v12, 0LL);
  v7 = System_String__Concat_44904220(
         (System_String_o *)StringLiteral_12973/*"Servants/"*/,
         v6,
         (System_String_o *)StringLiteral_941/*"/chr"*/,
         0LL);
  UnityEngine_Resources__Load_UIAtlas_(v7, (const MethodInfo_1DFCC74 *)Method_UnityEngine_Resources_Load_GameObject___);
  v8 = System_Int32__ToString((int32_t)&v12, 0LL);
  v9 = System_String__Concat_44904220(
         (System_String_o *)StringLiteral_12973/*"Servants/"*/,
         v8,
         (System_String_o *)StringLiteral_948/*"/fbxevent"*/,
         0LL);
  v10 = (int)UnityEngine_TextAsset_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v13.fields.value = v10;
  TypeFromHandle = System_Type__GetTypeFromHandle(v13, 0LL);
  UnityEngine_Resources__Load_36373520(v9, TypeFromHandle, 0LL);
}