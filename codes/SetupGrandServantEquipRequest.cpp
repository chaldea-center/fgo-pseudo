// local variable allocation has failed, the output may be wrong!
void __fastcall SetupGrandServantEquipRequest__BeginRequest(
        SetupGrandServantEquipRequest_o *this,
        int32_t grandGraphId,
        System_Int64_array *userSvtEquipIds,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_object__object__o *v18; // x22
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  const MethodInfo *v32; // x3
  System_String_o *v33; // x0
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1
  __int64 v36; // x0
  int32_t v37; // [xsp+8h] [xbp-58h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B03B89 & 1) == 0 )
  {
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__object____TypeInfo, *(_QWORD *)&grandGraphId);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_1BC3008(&int_TypeInfo, v12);
    sub_1BC3008(&JsonManager_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_18882/*"equipTarget2SkillChange"*/, v14);
    sub_1BC3008(&StringLiteral_24344/*"userSvtEquipIds"*/, v15);
    sub_1BC3008(&StringLiteral_19702/*"grandGraphId"*/, v16);
    sub_1BC3008(&StringLiteral_19705/*"grandSvtEquipInfos"*/, v17);
    byte_4B03B89 = 1;
  }
  v18 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v18,
    (const MethodInfo_336C638 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v38 = grandGraphId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v19, v20, v21);
  if ( !v18
    || (System_Collections_Generic_Dictionary_object__object___Add(
          v18,
          (Il2CppObject *)StringLiteral_19702/*"grandGraphId"*/,
          v22,
          (const MethodInfo_336CFE8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        System_Collections_Generic_Dictionary_object__object___Add(
          v18,
          (Il2CppObject *)StringLiteral_24344/*"userSvtEquipIds"*/,
          &userSvtEquipIds->obj,
          (const MethodInfo_336CFE8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        v37 = equipBondSkillChange,
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v24, v25, v26),
        System_Collections_Generic_Dictionary_object__object___Add(
          v18,
          (Il2CppObject *)StringLiteral_18882/*"equipTarget2SkillChange"*/,
          v27,
          (const MethodInfo_336CFE8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        (v22 = (Il2CppObject *)sub_1BC30B0(System_Collections_Generic_Dictionary_string__object____TypeInfo, 1LL)) == 0LL) )
  {
    sub_1BC3264(v22, v23);
  }
  v28 = v22;
  v29 = sub_1BC3144(v18, v22->klass->_1.element_class);
  if ( !v29 )
  {
    v36 = sub_1BC3288(0LL);
    sub_1BC3130(v36, 0LL);
  }
  if ( !LODWORD(v28[1].monitor) )
    sub_1BC326C(v29, v30, v31);
  v28[2].klass = (Il2CppClass *)v18;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v28[2], (int32_t)v18, v31, v32);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v33 = JsonManager__toJson(v28, 0, 0, 0LL);
  RequestBase__addField_43185568((RequestBase_o *)this, (System_String_o *)StringLiteral_19705/*"grandSvtEquipInfos"*/, v33, v34);
  RequestBase__beginRequest((RequestBase_o *)this, v35);
}


System_String_o *__fastcall SetupGrandServantEquipRequest__getURL(
        SetupGrandServantEquipRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B03B88 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_19699/*"grand/SetupSvtEquip"*/, v2);
    byte_4B03B88 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_19699/*"grand/SetupSvtEquip"*/, 0LL);
}


void __fastcall SetupGrandServantEquipRequest__requestCompleted(
        SetupGrandServantEquipRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_4B03B8A & 1) == 0 )
  {
    sub_1BC3008(&JsonManager_TypeInfo, responseList);
    sub_1BC3008(&ResponseCommandKind_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, v6);
    byte_4B03B8A = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(137, responseList, 0LL);
  if ( v7 && (v9 = v7, ResponseData__checkError(v7, v7->fields.resCode, v8)) )
  {
    success = (Il2CppObject *)v9->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_21997/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}