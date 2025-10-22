void SetupGrandServantEquipRequest__BeginRequest(
        SetupGrandServantEquipRequest_o *this,
        int32_t grandGraphId,
        System_Int64_array *userSvtEquipIds,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v9; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  __int64 v33; // x0
  int32_t v34; // [xsp+8h] [xbp-58h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C58975 & 1) == 0 )
  {
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&StringLiteral_19083/*"equipTarget2SkillChange"*/);
    sub_1C3E564(&StringLiteral_24603/*"userSvtEquipIds"*/);
    sub_1C3E564(&StringLiteral_19911/*"grandGraphId"*/);
    sub_1C3E564(&StringLiteral_19916/*"grandSvtEquipInfos"*/);
    byte_4C58975 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_3474E30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v35 = grandGraphId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v10, v11, v12, v13, v14, v15);
  if ( !v9
    || (System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_19911/*"grandGraphId"*/,
          v16,
          (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_24603/*"userSvtEquipIds"*/,
          &userSvtEquipIds->obj,
          (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        v34 = equipBondSkillChange,
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v18, v19, v20, v21, v22, v23),
        System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_19083/*"equipTarget2SkillChange"*/,
          v24,
          (const MethodInfo_34757E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        (v16 = (Il2CppObject *)sub_1C3E60C(System_Collections_Generic_Dictionary_string__object____TypeInfo, 1)) == 0) )
  {
    sub_1C3E7C0(v16, v17);
  }
  v25 = v16;
  v26 = sub_1C3E6A0(v9, v16->klass->_1.element_class);
  if ( !v26 )
  {
    v33 = sub_1C3E7E4(0);
    sub_1C3E68C(v33, 0);
  }
  if ( !LODWORD(v25[1].monitor) )
    sub_1C3E7C8(v26, v27);
  v25[2].klass = (Il2CppClass *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&v25[2], (int32_t)v9, v28, v29);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v30 = JsonManager__toJson(v25, 0, 0, 0);
  RequestBase__addField_44302832((RequestBase_o *)this, (System_String_o *)StringLiteral_19916/*"grandSvtEquipInfos"*/, v30, v31);
  RequestBase__beginRequest((RequestBase_o *)this, v32);
}


System_String_o *SetupGrandServantEquipRequest__getURL(SetupGrandServantEquipRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C58974 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_19905/*"grand/SetupSvtEquip"*/);
    byte_4C58974 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63636468(BaseUrl, (System_String_o *)StringLiteral_19905/*"grand/SetupSvtEquip"*/, 0);
}


void SetupGrandServantEquipRequest__requestCompleted(
        SetupGrandServantEquipRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4C58976 & 1) == 0 )
  {
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&ResponseCommandKind_TypeInfo);
    sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    byte_4C58976 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(137, responseList, 0);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v9,
        CallBack->fields.method);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        StringLiteral_22233/*"ng"*/,
        v11->fields.method);
  }
}