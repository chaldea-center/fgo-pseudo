void WarBoardBuffSaveRequest__beginRequest(
        WarBoardBuffSaveRequest_o *this,
        int32_t stageId,
        WarBoardPieceData_array *pieces,
        WarBoardSquareIndexData_array *squareIndexInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  WarBoardBuffSaveRequest___c_c *v9; // x0
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x8
  System_String_o *v11; // x23
  System_String_o *v12; // x22
  System_Func_object__object__o *_9__1_0; // x24
  Il2CppObject *v14; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_String_array *v23; // x0
  Il2CppObject *v24; // x0
  RequestBase_o *v25; // x0
  const MethodInfo *v26; // x2
  __int64 v27; // x1
  System_Byte_array *v28; // x21
  __int64 v29; // x1
  System_Byte_array *v30; // x21
  System_String_o *v31; // x0
  const MethodInfo *v32; // x3
  __int64 v33; // x1
  RequestBase_o *v34; // x0
  const MethodInfo *v35; // x2
  System_Byte_array *v36; // x0
  System_Byte_array *v37; // x0
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x1

  if ( (byte_597253F & 1) == 0 )
  {
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_2213A60(&System_Func_WarBoardPieceData__string__TypeInfo);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__);
    sub_2213A60(&WarBoardBuffSaveRequest___c_TypeInfo);
    sub_2213A60(&StringLiteral_24904/*"stageId"*/);
    sub_2213A60(&StringLiteral_25141/*"svtInfo"*/);
    sub_2213A60(&StringLiteral_24883/*"squareIndexInfo"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_16648/*"[{0}]"*/);
    byte_597253F = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24904/*"stageId"*/,
    stageId,
    (const MethodInfo *)squareIndexInfo);
  v9 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( !*(&WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo, v8);
    v9 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  v11 = (System_String_o *)StringLiteral_869/*","*/;
  v12 = (System_String_o *)StringLiteral_16648/*"[{0}]"*/;
  _9__1_0 = (System_Func_object__object__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_WarBoardPieceData__string__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v14, Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, 0);
    v15 = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    v15->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__1_0, (int32_t)_9__1_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v23 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v22,
                                 (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
  v24 = (Il2CppObject *)System_String__Join(v11, v23, 0);
  v25 = (RequestBase_o *)System_String__Format(v12, v24, 0);
  v28 = RequestBase__PackToMessagePack(v25, (Il2CppObject *)v25, v26);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v27);
  v30 = CatAndMouseGame__CatGame5Bytes(v28, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v29);
  v31 = System_Convert__ToBase64String(v30, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_25141/*"svtInfo"*/, v31, v32);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v33);
  v34 = (RequestBase_o *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0);
  v36 = RequestBase__PackToMessagePack(v34, (Il2CppObject *)v34, v35);
  v37 = CatAndMouseGame__CatGame5Bytes(v36, 0);
  v38 = System_Convert__ToBase64String(v37, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, (System_String_o *)StringLiteral_24883/*"squareIndexInfo"*/, v38, v39);
  RequestBase__beginRequest((RequestBase_o *)this, v40);
}


System_String_o *WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_597253E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_26104/*"warBoard/buffSave"*/);
    byte_597253E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_26104/*"warBoard/buffSave"*/, 0);
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
  __int64 v12; // x1
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v15; // x1

  if ( (byte_5972540 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_26117/*"warBoardData"*/);
    byte_5972540 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(92, responseList, 0);
  if ( !v5
    || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6))
    || (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) == 0 )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v15 = StringLiteral_23336/*"ng"*/;
    goto LABEL_14;
  }
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           success,
           (Il2CppObject *)StringLiteral_26117/*"warBoardData"*/,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    success,
    (Il2CppObject *)StringLiteral_26117/*"warBoardData"*/,
    v11,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v12);
  v13 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v15 = (__int64)v13;
LABEL_14:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v15,
      CallBack->fields.method);
  }
}


void WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972541 & 1) == 0 )
  {
    sub_2213A60(&WarBoardBuffSaveRequest___c_TypeInfo);
    byte_5972541 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardBuffSaveRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardBuffSaveRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBuffSaveRequest___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return WarBoardPieceData__ToJson(x, 0);
}