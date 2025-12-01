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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_String_array *v22; // x0
  Il2CppObject *v23; // x0
  RequestBase_o *v24; // x0
  const MethodInfo *v25; // x2
  System_Byte_array *v26; // x21
  System_Byte_array *v27; // x21
  System_String_o *v28; // x0
  const MethodInfo *v29; // x3
  RequestBase_o *v30; // x0
  const MethodInfo *v31; // x2
  System_Byte_array *v32; // x0
  System_Byte_array *v33; // x0
  System_String_o *v34; // x0
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x1

  if ( (byte_4CC907E & 1) == 0 )
  {
    sub_1C713B0(&CatAndMouseGame_TypeInfo);
    sub_1C713B0(&System_Convert_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C713B0(&System_Func_WarBoardPieceData__string__TypeInfo);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__);
    sub_1C713B0(&WarBoardBuffSaveRequest___c_TypeInfo);
    sub_1C713B0(&StringLiteral_23762/*"stageId"*/);
    sub_1C713B0(&StringLiteral_23984/*"svtInfo"*/);
    sub_1C713B0(&StringLiteral_23742/*"squareIndexInfo"*/);
    sub_1C713B0(&StringLiteral_808/*","*/);
    sub_1C713B0(&StringLiteral_16016/*"[{0}]"*/);
    byte_4CC907E = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23762/*"stageId"*/,
    stageId,
    (const MethodInfo *)squareIndexInfo);
  v9 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v9 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v9->static_fields->__9__1_0;
  v11 = (System_String_o *)StringLiteral_808/*","*/;
  v12 = (System_String_o *)StringLiteral_16016/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = WarBoardBuffSaveRequest___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v9->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_WarBoardPieceData__string__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v13, Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, 0);
    static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v22 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v21,
                                 (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_string___);
  v23 = (Il2CppObject *)System_String__Join(v11, v22, 0);
  v24 = (RequestBase_o *)System_String__Format(v12, v23, 0);
  v26 = RequestBase__PackToMessagePack(v24, (Il2CppObject *)v24, v25);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v27 = CatAndMouseGame__CatGame5Bytes(v26, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v28 = System_Convert__ToBase64String(v27, 0);
  RequestBase__addField_44518324((RequestBase_o *)this, (System_String_o *)StringLiteral_23984/*"svtInfo"*/, v28, v29);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v30 = (RequestBase_o *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0);
  v32 = RequestBase__PackToMessagePack(v30, (Il2CppObject *)v30, v31);
  v33 = CatAndMouseGame__CatGame5Bytes(v32, 0);
  v34 = System_Convert__ToBase64String(v33, 0);
  RequestBase__addField_44518324((RequestBase_o *)this, (System_String_o *)StringLiteral_23742/*"squareIndexInfo"*/, v34, v35);
  RequestBase__beginRequest((RequestBase_o *)this, v36);
}


System_String_o *WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC907D & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_24862/*"warBoard/buffSave"*/);
    byte_4CC907D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_24862/*"warBoard/buffSave"*/, 0);
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

  if ( (byte_4CC907F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    sub_1C713B0(&StringLiteral_24875/*"warBoardData"*/);
    byte_4CC907F = 1;
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
             (Il2CppObject *)StringLiteral_24875/*"warBoardData"*/,
             (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24875/*"warBoardData"*/,
      v11,
      (const MethodInfo_34CB6CC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
        StringLiteral_22316/*"ng"*/,
        v14->fields.method);
  }
}


void WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC9080 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardBuffSaveRequest___c_TypeInfo);
    byte_4CC9080 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(WarBoardBuffSaveRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardBuffSaveRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBuffSaveRequest___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C71608(this, 0);
  return WarBoardPieceData__ToJson(x, 0);
}