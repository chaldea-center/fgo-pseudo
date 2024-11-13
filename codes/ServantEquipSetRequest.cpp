void __fastcall ServantEquipSetRequest___ctor(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantEquipSetRequest__beginRequest(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_o *svtEquip,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x0
  System_String_o *v12; // x0

  if ( (byte_4B17B75 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, svtEquip, method);
    sub_1BCA7E0(&StringLiteral_19244/*"equipInfo"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v9, v10);
    byte_4B17B75 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, svtEquip);
  v11 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0LL);
  v12 = System_String__Concat_62412480(
          (System_String_o *)StringLiteral_15978/*"["*/,
          v11,
          (System_String_o *)StringLiteral_16236/*"]"*/,
          0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_19244/*"equipInfo"*/, v12, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall ServantEquipSetRequest__beginRequest_41957708(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *v7; // x0

  if ( (byte_4B17B76 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, svtEquipList, method);
    sub_1BCA7E0(&StringLiteral_19244/*"equipInfo"*/, v5, v6);
    byte_4B17B76 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, svtEquipList);
  v7 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_19244/*"equipInfo"*/, v7, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17B74 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23954/*"svtEquip/set"*/, v3, v4);
    byte_4B17B74 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_23954/*"svtEquip/set"*/, 0LL);
}


void __fastcall ServantEquipSetRequest__requestCompleted(
        ServantEquipSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 *v11; // x8

  if ( (byte_4B17B77 & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17B77 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(40, responseList, 0LL);
  if ( v9 && ResponseData__checkError(v9, v9->fields.resCode, v10) )
    v11 = &StringLiteral_22465/*"ok"*/;
  else
    v11 = &StringLiteral_22292/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v11, 0LL);
}