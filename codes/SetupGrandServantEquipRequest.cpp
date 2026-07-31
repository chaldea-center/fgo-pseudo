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
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  System_String_o *v23; // x0
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  __int64 v26; // x0
  int32_t v27; // [xsp+8h] [xbp-58h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_593A2FE & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object____TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19911/*"equipTarget2SkillChange"*/);
    sub_21FFC50(&StringLiteral_25889/*"userSvtEquipIds"*/);
    sub_21FFC50(&StringLiteral_20791/*"grandGraphId"*/);
    sub_21FFC50(&StringLiteral_20796/*"grandSvtEquipInfos"*/);
    byte_593A2FE = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v28 = grandGraphId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v28);
  if ( !v9
    || (System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_20791/*"grandGraphId"*/,
          v10,
          (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_25889/*"userSvtEquipIds"*/,
          &userSvtEquipIds->obj,
          (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        v27 = equipBondSkillChange,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v27),
        System_Collections_Generic_Dictionary_object__object___Add(
          v9,
          (Il2CppObject *)StringLiteral_19911/*"equipTarget2SkillChange"*/,
          v12,
          (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__),
        (v10 = (Il2CppObject *)sub_21FFD10(System_Collections_Generic_Dictionary_string__object____TypeInfo, 1)) == 0) )
  {
    sub_21FFECC(v10, v11);
  }
  v13 = v10;
  v14 = sub_21FFDA4(v9, v10->klass->_1.element_class);
  if ( !v14 )
  {
    v26 = sub_21FFEF0(0, v15);
    sub_21FFD90(v26, 0);
  }
  if ( !LODWORD(v13[1].monitor) )
    sub_21FFED4(v14);
  v13[2].klass = (Il2CppClass *)v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[2], (int32_t)v9, v16, v17, v18, v19, v20, v21);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v22);
  v23 = JsonManager__toJson(v13, 0, 0, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_20796/*"grandSvtEquipInfos"*/, v23, v24);
  RequestBase__beginRequest((RequestBase_o *)this, v25);
}


System_String_o *SetupGrandServantEquipRequest__getURL(SetupGrandServantEquipRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A2FD & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20785/*"grand/SetupSvtEquip"*/);
    byte_593A2FD = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_20785/*"grand/SetupSvtEquip"*/, 0);
}


void SetupGrandServantEquipRequest__requestCompleted(
        SetupGrandServantEquipRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_593A2FF & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A2FF = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(137, responseList, 0);
  if ( !v5 || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23290/*"ng"*/;
    goto LABEL_13;
  }
  success = (Il2CppObject *)v7->fields.success;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_13:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}