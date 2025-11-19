void SetupGrandServantEquipRequest__BeginRequest(
        SetupGrandServantEquipRequest_o *this,
        int32_t grandGraphId,
        System_Int64_array *userSvtEquipIds,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v9; // x22
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x20
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  __int64 v20; // x0
  int32_t v21; // [xsp+8h] [xbp-58h] BYREF
  int32_t v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB7EF1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19114/*"equipTarget2SkillChange"*/);
    sub_1C6BA08(&StringLiteral_24686/*"userSvtEquipIds"*/);
    sub_1C6BA08(&StringLiteral_19956/*"grandGraphId"*/);
    sub_1C6BA08(&StringLiteral_19961/*"grandSvtEquipInfos"*/);
    byte_4CB7EF1 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v22 = grandGraphId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  if ( !v9
    || (System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_19956/*"grandGraphId"*/,
          v10,
          (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_24686/*"userSvtEquipIds"*/,
          &userSvtEquipIds->obj,
          (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        v21 = equipBondSkillChange,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21),
        System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_19114/*"equipTarget2SkillChange"*/,
          v12,
          (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        (v10 = (Il2CppObject *)sub_1C6BAB0(System_Collections_Generic_Dictionary_string__object____TypeInfo, 1)) == 0) )
  {
    sub_1C6BC60(v10, v11);
  }
  v13 = v10;
  v14 = sub_1C6BB44(v9, v10->klass->_1.element_class);
  if ( !v14 )
  {
    v20 = sub_1C6BC84(0);
    sub_1C6BB30(v20, 0);
  }
  if ( !LODWORD(v13[1].monitor) )
    sub_1C6BC68(v14);
  v13[2].klass = (Il2CppClass *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v13[2], (int32_t)v9, v15, v16);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v17 = JsonManager__toJson(v13, 0, 0, 0);
  RequestBase__addField_44471996((RequestBase_o *)this, (System_String_o *)StringLiteral_19961/*"grandSvtEquipInfos"*/, v17, v18);
  RequestBase__beginRequest((RequestBase_o *)this, v19);
}


System_String_o *SetupGrandServantEquipRequest__getURL(SetupGrandServantEquipRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7EF0 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19950/*"grand/SetupSvtEquip"*/);
    byte_4CB7EF0 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_19950/*"grand/SetupSvtEquip"*/, 0);
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

  if ( (byte_4CB7EF2 & 1) == 0 )
  {
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7EF2 = 1;
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
        StringLiteral_22301/*"ng"*/,
        v11->fields.method);
  }
}