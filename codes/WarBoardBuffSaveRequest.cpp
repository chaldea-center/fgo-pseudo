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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  WarBoardBuffSaveRequest___c_c *v48; // x0
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x24
  System_String_o *v51; // x23
  System_String_o *v52; // x22
  Il2CppObject *v53; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  System_String_array *v62; // x0
  Il2CppObject *v63; // x0
  Il2CppObject *v64; // x0
  System_Byte_array *v65; // x21
  System_Byte_array *v66; // x21
  System_String_o *v67; // x0
  Il2CppObject *v68; // x0
  System_Byte_array *v69; // x0
  System_Byte_array *v70; // x0
  System_String_o *v71; // x0

  if ( (byte_42E76E8 & 1) == 0 )
  {
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, stageId, (_DWORD)pieces, squareIndexInfo);
    sub_B5D5C4(&System_Convert_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__string___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_WarBoardPieceData__string__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&JsonManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, v27, v28, v29);
    sub_B5D5C4(&WarBoardBuffSaveRequest___c_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_22565/*"stageId"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_22774/*"svtInfo"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_22544/*"squareIndexInfo"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_707/*","*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_16018/*"[{0}]"*/, v45, v46, v47);
    byte_42E76E8 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22565/*"stageId"*/, stageId, 0LL);
  v48 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBuffSaveRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v48 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  static_fields = v48->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  v51 = (System_String_o *)StringLiteral_707/*","*/;
  v52 = (System_String_o *)StringLiteral_16018/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_WarBoardPieceData__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v53,
      Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_WarBoardPieceData__string___ctor__);
    v54 = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    v54->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v54->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v62 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v61,
                                 (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
  v63 = (Il2CppObject *)System_String__Join(v51, v62, 0LL);
  v64 = (Il2CppObject *)System_String__Format(v52, v63, 0LL);
  v65 = RequestBase__PackToMessagePack((RequestBase_o *)this, v64, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v66 = CatAndMouseGame__CatGame5Bytes(v65, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v67 = System_Convert__ToBase64String(v66, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_22774/*"svtInfo"*/, v67, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v68 = (Il2CppObject *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0LL);
  v69 = RequestBase__PackToMessagePack((RequestBase_o *)this, v68, 0LL);
  v70 = CatAndMouseGame__CatGame5Bytes(v69, 0LL);
  v71 = System_Convert__ToBase64String(v70, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_22544/*"squareIndexInfo"*/, v71, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E76E7 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23511/*"warBoard/buffSave"*/, v4, v5, v6);
    byte_42E76E7 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_23511/*"warBoard/buffSave"*/, 0LL);
}


void __fastcall WarBoardBuffSaveRequest__requestCompleted(
        WarBoardBuffSaveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  ResponseData_o *v21; // x0
  ResponseData_o *v22; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x0
  System_String_o *v26; // x1

  if ( (byte_42E76E9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      (_DWORD)responseList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v6, v7, v8);
    sub_B5D5C4(&JsonManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23524/*"warBoardData"*/, v18, v19, v20);
    byte_42E76E9 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v21 = ResponseCommandKind__SearchData(92, responseList, 0LL);
  if ( v21
    && (v22 = v21, ResponseData__checkError_29500464(v21, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v22->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23524/*"warBoardData"*/,
                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v25 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23524/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v25,
      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v26 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v26 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v26, 0LL);
}


void __fastcall WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7077 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardBuffSaveRequest___c_TypeInfo, v1, v2, v3);
    byte_42E7077 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardBuffSaveRequest___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return WarBoardPieceData__ToJson(x, 0LL);
}