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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  WarBoardBuffSaveRequest___c_c *v24; // x0
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x24
  System_String_o *v27; // x23
  System_String_o *v28; // x22
  Il2CppObject *v29; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_String_array *v38; // x0
  Il2CppObject *v39; // x0
  Il2CppObject *v40; // x0
  System_Byte_array *v41; // x21
  System_Byte_array *v42; // x21
  System_String_o *v43; // x0
  Il2CppObject *v44; // x0
  System_Byte_array *v45; // x0
  System_Byte_array *v46; // x0
  System_String_o *v47; // x0

  if ( (byte_4213398 & 1) == 0 )
  {
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId);
    sub_B0D8A4(&System_Convert_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_string___, v11);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__string___ctor__, v12);
    sub_B0D8A4(&System_Func_WarBoardPieceData__string__TypeInfo, v13);
    sub_B0D8A4(&JsonManager_TypeInfo, v14);
    sub_B0D8A4(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, v15);
    sub_B0D8A4(&WarBoardBuffSaveRequest___c_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_22338/*"stageId"*/, v17);
    sub_B0D8A4(&StringLiteral_22545/*"svtInfo"*/, v18);
    sub_B0D8A4(&StringLiteral_22317/*"squareIndexInfo"*/, v19);
    sub_B0D8A4(&StringLiteral_705/*","*/, v20);
    sub_B0D8A4(&StringLiteral_15874/*"[{0}]"*/, v21);
    byte_4213398 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22338/*"stageId"*/, stageId, 0LL);
  v24 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBuffSaveRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v24 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  v27 = (System_String_o *)StringLiteral_705/*","*/;
  v28 = (System_String_o *)StringLiteral_15874/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_WarBoardPieceData__string__TypeInfo,
                                                                                                v22,
                                                                                                v23);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v29,
      Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__,
      (const MethodInfo_261A104 *)Method_System_Func_WarBoardPieceData__string___ctor__);
    v30 = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    v30->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v30->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v38 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v37,
                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
  v39 = (Il2CppObject *)System_String__Join(v27, v38, 0LL);
  v40 = (Il2CppObject *)System_String__Format(v28, v39, 0LL);
  v41 = RequestBase__PackToMessagePack((RequestBase_o *)this, v40, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v42 = CatAndMouseGame__CatGame5Bytes(v41, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v43 = System_Convert__ToBase64String(v42, 0LL);
  RequestBase__addField_30435648((RequestBase_o *)this, (System_String_o *)StringLiteral_22545/*"svtInfo"*/, v43, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v44 = (Il2CppObject *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0LL);
  v45 = RequestBase__PackToMessagePack((RequestBase_o *)this, v44, 0LL);
  v46 = CatAndMouseGame__CatGame5Bytes(v45, 0LL);
  v47 = System_Convert__ToBase64String(v46, 0LL);
  RequestBase__addField_30435648((RequestBase_o *)this, (System_String_o *)StringLiteral_22317/*"squareIndexInfo"*/, v47, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4213397 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_23280/*"warBoard/buffSave"*/, v2);
    byte_4213397 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_23280/*"warBoard/buffSave"*/, 0LL);
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
  ResponseData_o *v11; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x1

  if ( (byte_4213399 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_B0D8A4(&JsonManager_TypeInfo, v6);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v8);
    sub_B0D8A4(&StringLiteral_23293/*"warBoardData"*/, v9);
    byte_4213399 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v10 = ResponseCommandKind__SearchData(91, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_30403444(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23293/*"warBoardData"*/,
                             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23293/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v14,
      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21137/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}


void __fastcall WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x0

  if ( (byte_421269B & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardBuffSaveRequest___c_TypeInfo, v1);
    byte_421269B = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardBuffSaveRequest___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardBuffSaveRequest___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return WarBoardPieceData__ToJson(x, 0LL);
}