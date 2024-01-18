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
  WarBoardBuffSaveRequest___c_c *v22; // x0
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x24
  System_String_o *v25; // x23
  System_String_o *v26; // x22
  Il2CppObject *v27; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_String_array *v36; // x0
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  System_Byte_array *v39; // x21
  System_Byte_array *v40; // x21
  System_String_o *v41; // x0
  Il2CppObject *v42; // x0
  System_Byte_array *v43; // x0
  System_Byte_array *v44; // x0
  System_String_o *v45; // x0

  if ( (byte_41865E6 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId);
    sub_B2C35C(&System_Convert_TypeInfo, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, v11);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__string___ctor__, v12);
    sub_B2C35C(&System_Func_WarBoardPieceData__string__TypeInfo, v13);
    sub_B2C35C(&JsonManager_TypeInfo, v14);
    sub_B2C35C(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, v15);
    sub_B2C35C(&WarBoardBuffSaveRequest___c_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_22263/*"stageId"*/, v17);
    sub_B2C35C(&StringLiteral_22469/*"svtInfo"*/, v18);
    sub_B2C35C(&StringLiteral_22242/*"squareIndexInfo"*/, v19);
    sub_B2C35C(&StringLiteral_699/*","*/, v20);
    sub_B2C35C(&StringLiteral_15827/*"[{0}]"*/, v21);
    byte_41865E6 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22263/*"stageId"*/, stageId, 0LL);
  v22 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBuffSaveRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v22 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  v25 = (System_String_o *)StringLiteral_699/*","*/;
  v26 = (System_String_o *)StringLiteral_15827/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_WarBoardPieceData__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v27,
      Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__,
      (const MethodInfo_2713350 *)Method_System_Func_WarBoardPieceData__string___ctor__);
    v28 = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    v28->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v36 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v35,
                                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
  v37 = (Il2CppObject *)System_String__Join(v25, v36, 0LL);
  v38 = (Il2CppObject *)System_String__Format(v26, v37, 0LL);
  v39 = RequestBase__PackToMessagePack((RequestBase_o *)this, v38, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v40 = CatAndMouseGame__CatGame5Bytes(v39, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v41 = System_Convert__ToBase64String(v40, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_22469/*"svtInfo"*/, v41, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v42 = (Il2CppObject *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0LL);
  v43 = RequestBase__PackToMessagePack((RequestBase_o *)this, v42, 0LL);
  v44 = CatAndMouseGame__CatGame5Bytes(v43, 0LL);
  v45 = System_Convert__ToBase64String(v44, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_22242/*"squareIndexInfo"*/, v45, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_41865E5 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23202/*"warBoard/buffSave"*/, v2);
    byte_41865E5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_23202/*"warBoard/buffSave"*/, 0LL);
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

  if ( (byte_41865E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_B2C35C(&JsonManager_TypeInfo, v6);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    sub_B2C35C(&StringLiteral_23215/*"warBoardData"*/, v9);
    byte_41865E7 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v10 = ResponseCommandKind__SearchData(91, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_31019724(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23215/*"warBoardData"*/,
                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23215/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v14,
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}


void __fastcall WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x0

  if ( (byte_4185724 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardBuffSaveRequest___c_TypeInfo, v1);
    byte_4185724 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardBuffSaveRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardBuffSaveRequest___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__ToJson(x, 0LL);
}