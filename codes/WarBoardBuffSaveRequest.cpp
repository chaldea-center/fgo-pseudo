void __fastcall WarBoardBuffSaveRequest___ctor(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardBuffSaveRequest__beginRequest(
        WarBoardBuffSaveRequest_o *this,
        int32_t stageId,
        WarBoardPieceData_array *pieces,
        WarBoardSquareIndexData_array *squareIndexInfo,
        const MethodInfo *method)
{
  WarBoardBuffSaveRequest___c_c *v9; // x0
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x24
  System_String_o *v12; // x23
  System_String_o *v13; // x22
  Il2CppObject *v14; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_String_array *v23; // x0
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x0
  System_Byte_array *v26; // x21
  System_Byte_array *v27; // x21
  System_String_o *v28; // x0
  Il2CppObject *v29; // x0
  System_Byte_array *v30; // x0
  System_Byte_array *v31; // x0
  System_String_o *v32; // x0

  if ( (byte_42AEB14 & 1) == 0 )
  {
    sub_B52984(&CatAndMouseGame_TypeInfo);
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B52984(&Method_System_Func_WarBoardPieceData__string___ctor__);
    sub_B52984(&System_Func_WarBoardPieceData__string__TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__);
    sub_B52984(&WarBoardBuffSaveRequest___c_TypeInfo);
    sub_B52984(&StringLiteral_22450/*"stageId"*/);
    sub_B52984(&StringLiteral_22659/*"svtInfo"*/);
    sub_B52984(&StringLiteral_22429/*"squareIndexInfo"*/);
    sub_B52984(&StringLiteral_709/*","*/);
    sub_B52984(&StringLiteral_15933/*"[{0}]"*/);
    byte_42AEB14 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22450/*"stageId"*/, stageId, 0LL);
  v9 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBuffSaveRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v9 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  v12 = (System_String_o *)StringLiteral_709/*","*/;
  v13 = (System_String_o *)StringLiteral_15933/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_WarBoardPieceData__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v14,
      Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_WarBoardPieceData__string___ctor__);
    v15 = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    v15->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v15->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v23 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v22,
                                 (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_string___);
  v24 = (Il2CppObject *)System_String__Join(v12, v23, 0LL);
  v25 = (Il2CppObject *)System_String__Format(v13, v24, 0LL);
  v26 = RequestBase__PackToMessagePack((RequestBase_o *)this, v25, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v27 = CatAndMouseGame__CatGame5Bytes(v26, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v28 = System_Convert__ToBase64String(v27, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_22659/*"svtInfo"*/, v28, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v29 = (Il2CppObject *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0LL);
  v30 = RequestBase__PackToMessagePack((RequestBase_o *)this, v29, 0LL);
  v31 = CatAndMouseGame__CatGame5Bytes(v30, 0LL);
  v32 = System_Convert__ToBase64String(v31, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_22429/*"squareIndexInfo"*/, v32, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42AEB13 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_23394/*"warBoard/buffSave"*/);
    byte_42AEB13 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_23394/*"warBoard/buffSave"*/, 0LL);
}


void __fastcall WarBoardBuffSaveRequest__requestCompleted(
        WarBoardBuffSaveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_String_o *v10; // x1

  if ( (byte_42AEB15 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    sub_B52984(&StringLiteral_23407/*"warBoardData"*/);
    byte_42AEB15 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(92, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23407/*"warBoardData"*/,
                             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v9 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23407/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v9,
      (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}


void __fastcall WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AE603 & 1) == 0 )
  {
    sub_B52984(&WarBoardBuffSaveRequest___c_TypeInfo);
    byte_42AE603 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardBuffSaveRequest___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
  return WarBoardPieceData__ToJson(x, 0LL);
}