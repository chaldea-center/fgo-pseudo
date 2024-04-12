void __fastcall FBXAnimclips___cctor(const MethodInfo *method)
{
  if ( (byte_42AF05B & 1) == 0 )
  {
    sub_B52984(&FBXAnimclips_TypeInfo);
    byte_42AF05B = 1;
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
  if ( (byte_42AF05A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UnityEngine_TextAsset_var);
    sub_B52984(&UnityEngine_TextAsset_TypeInfo);
    sub_B52984(&System_Type_TypeInfo);
    sub_B52984(&StringLiteral_937/*"/fbxevent"*/);
    sub_B52984(&StringLiteral_12829/*"Servants/"*/);
    sub_B52984(&StringLiteral_930/*"/chr"*/);
    byte_42AF05A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v5);
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  v6 = System_Int32__ToString((int32_t)&v12, 0LL);
  v7 = System_String__Concat_44570600(
         (System_String_o *)StringLiteral_12829/*"Servants/"*/,
         v6,
         (System_String_o *)StringLiteral_930/*"/chr"*/,
         0LL);
  UnityEngine_Resources__Load_UIAtlas_(v7, (const MethodInfo_1F7452C *)Method_UnityEngine_Resources_Load_GameObject___);
  v8 = System_Int32__ToString((int32_t)&v12, 0LL);
  v9 = System_String__Concat_44570600(
         (System_String_o *)StringLiteral_12829/*"Servants/"*/,
         v8,
         (System_String_o *)StringLiteral_937/*"/fbxevent"*/,
         0LL);
  v10 = (int)UnityEngine_TextAsset_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v13.fields.value = v10;
  TypeFromHandle = System_Type__GetTypeFromHandle(v13, 0LL);
  UnityEngine_Resources__Load_35680496(v9, TypeFromHandle, 0LL);
}