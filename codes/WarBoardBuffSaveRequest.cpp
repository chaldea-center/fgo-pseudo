void __fastcall WarBoardBuffSaveRequest___ctor(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBuffSaveRequest__beginRequest(
        WarBoardBuffSaveRequest_o *this,
        int32_t stageId,
        WarBoardPieceData_array *pieces,
        WarBoardSquareIndexData_array *squareIndexInfo,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  WarBoardBuffSaveRequest___c_c *v21; // x0
  System_Func_object__object__o *_9__1_0; // x24
  System_String_o *v23; // x23
  System_String_o *v24; // x22
  Il2CppObject *v25; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_String_array *v34; // x0
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x0
  System_Byte_array *v37; // x21
  System_Byte_array *v38; // x21
  System_String_o *v39; // x0
  Il2CppObject *v40; // x0
  System_Byte_array *v41; // x0
  System_Byte_array *v42; // x0
  System_String_o *v43; // x0

  if ( (byte_4BFF211 & 1) == 0 )
  {
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId);
    sub_1C2E12C(&System_Convert_TypeInfo, v9);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___, v10);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_string___, v11);
    sub_1C2E12C(&System_Func_WarBoardPieceData__string__TypeInfo, v12);
    sub_1C2E12C(&JsonManager_TypeInfo, v13);
    sub_1C2E12C(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, v14);
    sub_1C2E12C(&WarBoardBuffSaveRequest___c_TypeInfo, v15);
    sub_1C2E12C(&StringLiteral_23927/*"stageId"*/, v16);
    sub_1C2E12C(&StringLiteral_24160/*"svtInfo"*/, v17);
    sub_1C2E12C(&StringLiteral_23906/*"squareIndexInfo"*/, v18);
    sub_1C2E12C(&StringLiteral_845/*","*/, v19);
    sub_1C2E12C(&StringLiteral_16312/*"[{0}]"*/, v20);
    byte_4BFF211 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23927/*"stageId"*/, stageId, 0LL);
  v21 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v21 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v21->static_fields->__9__1_0;
  v23 = (System_String_o *)StringLiteral_845/*","*/;
  v24 = (System_String_o *)StringLiteral_16312/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = WarBoardBuffSaveRequest___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v21->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1C2E378(System_Func_WarBoardPieceData__string__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v25, Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v27, v28, v29, v30, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_3003B90 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v34 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v33,
                                 (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_string___);
  v35 = (Il2CppObject *)System_String__Join(v23, v34, 0LL);
  v36 = (Il2CppObject *)System_String__Format(v24, v35, 0LL);
  v37 = RequestBase__PackToMessagePack((RequestBase_o *)this, v36, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v38 = CatAndMouseGame__CatGame5Bytes(v37, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v39 = System_Convert__ToBase64String(v38, 0LL);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_24160/*"svtInfo"*/, v39, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v40 = (Il2CppObject *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0LL);
  v41 = RequestBase__PackToMessagePack((RequestBase_o *)this, v40, 0LL);
  v42 = CatAndMouseGame__CatGame5Bytes(v41, 0LL);
  v43 = System_Convert__ToBase64String(v42, 0LL);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_23906/*"squareIndexInfo"*/, v43, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BFF210 & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_25079/*"warBoard/buffSave"*/, v2);
    byte_4BFF210 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63235584(BaseUrl, (System_String_o *)StringLiteral_25079/*"warBoard/buffSave"*/, 0LL);
}


void __fastcall WarBoardBuffSaveRequest__requestCompleted(
        WarBoardBuffSaveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x1

  if ( (byte_4BFF212 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1C2E12C(&JsonManager_TypeInfo, v6);
    sub_1C2E12C(&ResponseCommandKind_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_22468/*"ng"*/, v8);
    sub_1C2E12C(&StringLiteral_25092/*"warBoardData"*/, v9);
    byte_4BFF212 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(92, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_25092/*"warBoardData"*/,
             (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25092/*"warBoardData"*/,
      v15,
      (const MethodInfo_3335B60 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_22468/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}


void __fastcall WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFF213 & 1) == 0 )
  {
    sub_1C2E12C(&WarBoardBuffSaveRequest___c_TypeInfo, v1);
    byte_4BFF213 = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(WarBoardBuffSaveRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardBuffSaveRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBuffSaveRequest___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall WarBoardBuffSaveRequest___c___ctor(WarBoardBuffSaveRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall WarBoardBuffSaveRequest___c___beginRequest_b__1_0(
        WarBoardBuffSaveRequest___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return WarBoardPieceData__ToJson(x, 0LL);
}