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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_String_o *v21; // x0
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  __int64 v24; // x0
  int32_t v25; // [xsp+8h] [xbp-58h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CC901A & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&StringLiteral_19124/*"equipTarget2SkillChange"*/);
    sub_1C713B0(&StringLiteral_24706/*"userSvtEquipIds"*/);
    sub_1C713B0(&StringLiteral_19967/*"grandGraphId"*/);
    sub_1C713B0(&StringLiteral_19972/*"grandSvtEquipInfos"*/);
    byte_4CC901A = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v26 = grandGraphId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  if ( !v9
    || (System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_19967/*"grandGraphId"*/,
          v10,
          (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_24706/*"userSvtEquipIds"*/,
          &userSvtEquipIds->obj,
          (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        v25 = equipBondSkillChange,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25),
        System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_19124/*"equipTarget2SkillChange"*/,
          v12,
          (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        (v10 = (Il2CppObject *)sub_1C71458(System_Collections_Generic_Dictionary_string__object____TypeInfo, 1)) == 0) )
  {
    sub_1C71608(v10, v11);
  }
  v13 = v10;
  v14 = sub_1C714EC(v9, v10->klass->_1.element_class);
  if ( !v14 )
  {
    v24 = sub_1C7162C(0);
    sub_1C714D8(v24, 0);
  }
  if ( !LODWORD(v13[1].monitor) )
    sub_1C71610(v14);
  v13[2].klass = (Il2CppClass *)v9;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v13[2], (int32_t)v9, v15, v16, v17, v18, v19, v20);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v21 = JsonManager__toJson(v13, 0, 0, 0);
  RequestBase__addField_44518324((RequestBase_o *)this, (System_String_o *)StringLiteral_19972/*"grandSvtEquipInfos"*/, v21, v22);
  RequestBase__beginRequest((RequestBase_o *)this, v23);
}


System_String_o *SetupGrandServantEquipRequest__getURL(SetupGrandServantEquipRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC9019 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_19961/*"grand/SetupSvtEquip"*/);
    byte_4CC9019 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_19961/*"grand/SetupSvtEquip"*/, 0);
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

  if ( (byte_4CC901B & 1) == 0 )
  {
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    byte_4CC901B = 1;
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
        StringLiteral_22316/*"ng"*/,
        v11->fields.method);
  }
}