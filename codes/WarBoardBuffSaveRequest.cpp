void WarBoardBuffSaveRequest__beginRequest(
        WarBoardBuffSaveRequest_o *this,
        int32_t stageId,
        WarBoardPieceData_array *pieces,
        WarBoardSquareIndexData_array *squareIndexInfo,
        const MethodInfo *method)
{
  WarBoardBuffSaveRequest___c_c *v9; // x0
  System_Func_object__object__o *_9__1_0; // x24
  System_String_o *v11; // x23
  System_String_o *v12; // x22
  Il2CppObject *v13; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_String_array *v18; // x0
  Il2CppObject *v19; // x0
  RequestBase_o *v20; // x0
  const MethodInfo *v21; // x2
  System_Byte_array *v22; // x21
  System_Byte_array *v23; // x21
  System_String_o *v24; // x0
  const MethodInfo *v25; // x3
  RequestBase_o *v26; // x0
  const MethodInfo *v27; // x2
  System_Byte_array *v28; // x0
  System_Byte_array *v29; // x0
  System_String_o *v30; // x0
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1

  if ( (byte_4C589D9 & 1) == 0 )
  {
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&System_Convert_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C3E564(&System_Func_WarBoardPieceData__string__TypeInfo);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__);
    sub_1C3E564(&WarBoardBuffSaveRequest___c_TypeInfo);
    sub_1C3E564(&StringLiteral_23668/*"stageId"*/);
    sub_1C3E564(&StringLiteral_23890/*"svtInfo"*/);
    sub_1C3E564(&StringLiteral_23648/*"squareIndexInfo"*/);
    sub_1C3E564(&StringLiteral_811/*","*/);
    sub_1C3E564(&StringLiteral_16026/*"[{0}]"*/);
    byte_4C589D9 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23668/*"stageId"*/,
    stageId,
    (const MethodInfo *)squareIndexInfo);
  v9 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v9 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v9->static_fields->__9__1_0;
  v11 = (System_String_o *)StringLiteral_811/*","*/;
  v12 = (System_String_o *)StringLiteral_16026/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = WarBoardBuffSaveRequest___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v9->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1C3E7B0(System_Func_WarBoardPieceData__string__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v13, Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, 0);
    static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_3130218 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v18 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v17,
                                 (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_string___);
  v19 = (Il2CppObject *)System_String__Join(v11, v18, 0);
  v20 = (RequestBase_o *)System_String__Format(v12, v19, 0);
  v22 = RequestBase__PackToMessagePack(v20, (Il2CppObject *)v20, v21);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v23 = CatAndMouseGame__CatGame5Bytes(v22, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v24 = System_Convert__ToBase64String(v23, 0);
  RequestBase__addField_44302832((RequestBase_o *)this, (System_String_o *)StringLiteral_23890/*"svtInfo"*/, v24, v25);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v26 = (RequestBase_o *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0);
  v28 = RequestBase__PackToMessagePack(v26, (Il2CppObject *)v26, v27);
  v29 = CatAndMouseGame__CatGame5Bytes(v28, 0);
  v30 = System_Convert__ToBase64String(v29, 0);
  RequestBase__addField_44302832((RequestBase_o *)this, (System_String_o *)StringLiteral_23648/*"squareIndexInfo"*/, v30, v31);
  RequestBase__beginRequest((RequestBase_o *)this, v32);
}


System_String_o *WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C589D8 & 1) == 0 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&StringLiteral_24752/*"warBoard/buffSave"*/);
    byte_4C589D8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63636468(BaseUrl, (System_String_o *)StringLiteral_24752/*"warBoard/buffSave"*/, 0);
}


void WarBoardBuffSaveRequest__requestCompleted(
        WarBoardBuffSaveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v14; // x8

  if ( (byte_4C589DA & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&ResponseCommandKind_TypeInfo);
    sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    sub_1C3E564(&StringLiteral_24765/*"warBoardData"*/);
    byte_4C589DA = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(92, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24765/*"warBoardData"*/,
             (const MethodInfo_3475760 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24765/*"warBoardData"*/,
      v11,
      (const MethodInfo_34757CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v12,
        CallBack->fields.method);
  }
  else
  {
    v14 = this->fields.CallBack;
    if ( v14 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v14->fields.invoke_impl)(
        v14->fields.method_code,
        StringLiteral_22233/*"ng"*/,
        v14->fields.method);
  }
}


void WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C589DB & 1) == 0 )
  {
    sub_1C3E564(&WarBoardBuffSaveRequest___c_TypeInfo);
    byte_4C589DB = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(WarBoardBuffSaveRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardBuffSaveRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBuffSaveRequest___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardBuffSaveRequest___c___ctor(WarBoardBuffSaveRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *WarBoardBuffSaveRequest___c___beginRequest_b__1_0(
        WarBoardBuffSaveRequest___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return WarBoardPieceData__ToJson(x, 0);
}