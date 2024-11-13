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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  WarBoardBuffSaveRequest___c_c *v36; // x0
  System_Func_object__object__o *_9__1_0; // x24
  System_String_o *v38; // x23
  System_String_o *v39; // x22
  Il2CppObject *v40; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_String_array *v49; // x0
  Il2CppObject *v50; // x0
  Il2CppObject *v51; // x0
  __int64 v52; // x1
  System_Byte_array *v53; // x21
  __int64 v54; // x1
  System_Byte_array *v55; // x21
  System_String_o *v56; // x0
  __int64 v57; // x1
  Il2CppObject *v58; // x0
  System_Byte_array *v59; // x0
  System_Byte_array *v60; // x0
  System_String_o *v61; // x0

  if ( (byte_4B17BE9 & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId, pieces);
    sub_1BCA7E0(&System_Convert_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, v13, v14);
    sub_1BCA7E0(&System_Func_WarBoardPieceData__string__TypeInfo, v15, v16);
    sub_1BCA7E0(&JsonManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, v19, v20);
    sub_1BCA7E0(&WarBoardBuffSaveRequest___c_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_23725/*"stageId"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_23957/*"svtInfo"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_23704/*"squareIndexInfo"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_16191/*"[{0}]"*/, v31, v32);
    byte_4B17BE9 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23725/*"stageId"*/, stageId, 0LL);
  v36 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo, v33);
    v36 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v36->static_fields->__9__1_0;
  v38 = (System_String_o *)StringLiteral_863/*","*/;
  v39 = (System_String_o *)StringLiteral_16191/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36, v33);
      v36 = WarBoardBuffSaveRequest___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v36->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_WarBoardPieceData__string__TypeInfo,
                                                 v33,
                                                 v34,
                                                 v35);
    System_Func_object__object____ctor(_9__1_0, v40, Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v42, v43, v44, v45, v46, v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v49 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v48,
                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
  v50 = (Il2CppObject *)System_String__Join(v38, v49, 0LL);
  v51 = (Il2CppObject *)System_String__Format(v39, v50, 0LL);
  v53 = RequestBase__PackToMessagePack((RequestBase_o *)this, v51, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v52);
  v55 = CatAndMouseGame__CatGame5Bytes(v53, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v54);
  v56 = System_Convert__ToBase64String(v55, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_23957/*"svtInfo"*/, v56, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v57);
  v58 = (Il2CppObject *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0LL);
  v59 = RequestBase__PackToMessagePack((RequestBase_o *)this, v58, 0LL);
  v60 = CatAndMouseGame__CatGame5Bytes(v59, 0LL);
  v61 = System_Convert__ToBase64String(v60, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_23704/*"squareIndexInfo"*/, v61, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17BE8 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24867/*"warBoard/buffSave"*/, v3, v4);
    byte_4B17BE8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_24867/*"warBoard/buffSave"*/, 0LL);
}


void __fastcall WarBoardBuffSaveRequest__requestCompleted(
        WarBoardBuffSaveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ResponseData_o *v15; // x0
  const MethodInfo *v16; // x2
  ResponseData_o *v17; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x1

  if ( (byte_4B17BEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5, v6);
    sub_1BCA7E0(&JsonManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_24880/*"warBoardData"*/, v13, v14);
    byte_4B17BEA = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v15 = ResponseCommandKind__SearchData(92, responseList, 0LL);
  if ( v15
    && (v17 = v15, ResponseData__checkError(v15, v15->fields.resCode, v16))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v17->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24880/*"warBoardData"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v20 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24880/*"warBoardData"*/,
      v20,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v21);
    v22 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v22 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v22, 0LL);
}


void __fastcall WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17BEB & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardBuffSaveRequest___c_TypeInfo, v1, v2);
    byte_4B17BEB = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardBuffSaveRequest___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardBuffSaveRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBuffSaveRequest___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return WarBoardPieceData__ToJson(x, 0LL);
}