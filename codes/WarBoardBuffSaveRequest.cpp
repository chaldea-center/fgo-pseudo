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
  __int64 v22; // x2
  WarBoardBuffSaveRequest___c_c *v23; // x0
  System_Func_object__object__o *_9__1_0; // x24
  System_String_o *v25; // x23
  System_String_o *v26; // x22
  Il2CppObject *v27; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_String_array *v32; // x0
  Il2CppObject *v33; // x0
  RequestBase_o *v34; // x0
  const MethodInfo *v35; // x2
  System_Byte_array *v36; // x21
  System_Byte_array *v37; // x21
  System_String_o *v38; // x0
  const MethodInfo *v39; // x3
  RequestBase_o *v40; // x0
  const MethodInfo *v41; // x2
  System_Byte_array *v42; // x0
  System_Byte_array *v43; // x0
  System_String_o *v44; // x0
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x1

  if ( (byte_49FDD9C & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId);
    sub_1B640C8(&System_Convert_TypeInfo, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_string___, v11);
    sub_1B640C8(&System_Func_WarBoardPieceData__string__TypeInfo, v12);
    sub_1B640C8(&JsonManager_TypeInfo, v13);
    sub_1B640C8(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, v14);
    sub_1B640C8(&WarBoardBuffSaveRequest___c_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_23380/*"stageId"*/, v16);
    sub_1B640C8(&StringLiteral_23612/*"svtInfo"*/, v17);
    sub_1B640C8(&StringLiteral_23358/*"squareIndexInfo"*/, v18);
    sub_1B640C8(&StringLiteral_869/*","*/, v19);
    sub_1B640C8(&StringLiteral_15956/*"[{0}]"*/, v20);
    byte_49FDD9C = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23380/*"stageId"*/,
    stageId,
    (const MethodInfo *)squareIndexInfo);
  v23 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v23 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v23->static_fields->__9__1_0;
  v25 = (System_String_o *)StringLiteral_869/*","*/;
  v26 = (System_String_o *)StringLiteral_15956/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = WarBoardBuffSaveRequest___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v23->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1B64314(System_Func_WarBoardPieceData__string__TypeInfo, v21, v22);
    System_Func_object__object____ctor(_9__1_0, v27, Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v32 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v31,
                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v33 = (Il2CppObject *)System_String__Join(v25, v32, 0LL);
  v34 = (RequestBase_o *)System_String__Format(v26, v33, 0LL);
  v36 = RequestBase__PackToMessagePack(v34, (Il2CppObject *)v34, v35);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v37 = CatAndMouseGame__CatGame5Bytes(v36, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v38 = System_Convert__ToBase64String(v37, 0LL);
  RequestBase__addField_40850936((RequestBase_o *)this, (System_String_o *)StringLiteral_23612/*"svtInfo"*/, v38, v39);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v40 = (RequestBase_o *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0LL);
  v42 = RequestBase__PackToMessagePack(v40, (Il2CppObject *)v40, v41);
  v43 = CatAndMouseGame__CatGame5Bytes(v42, 0LL);
  v44 = System_Convert__ToBase64String(v43, 0LL);
  RequestBase__addField_40850936((RequestBase_o *)this, (System_String_o *)StringLiteral_23358/*"squareIndexInfo"*/, v44, v45);
  RequestBase__beginRequest((RequestBase_o *)this, v46);
}


System_String_o *__fastcall WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDD9B & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_24514/*"warBoard/buffSave"*/, v2);
    byte_49FDD9B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_24514/*"warBoard/buffSave"*/, 0LL);
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
  const MethodInfo *v15; // x2
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v19; // x8

  if ( (byte_49FDD9D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B640C8(&JsonManager_TypeInfo, v6);
    sub_1B640C8(&ResponseCommandKind_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v8);
    sub_1B640C8(&StringLiteral_24527/*"warBoardData"*/, v9);
    byte_49FDD9D = 1;
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
             (Il2CppObject *)StringLiteral_24527/*"warBoardData"*/,
             (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v16 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v15);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24527/*"warBoardData"*/,
      v16,
      (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v17,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v19 = this->fields.CallBack;
    if ( v19 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v19->fields.m_target)(
        v19->fields.original_method_info,
        StringLiteral_21968/*"ng"*/,
        *(_QWORD *)&v19->fields.extra_arg);
  }
}


void __fastcall WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FDD9E & 1) == 0 )
  {
    sub_1B640C8(&WarBoardBuffSaveRequest___c_TypeInfo, v1);
    byte_49FDD9E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardBuffSaveRequest___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardBuffSaveRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBuffSaveRequest___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return WarBoardPieceData__ToJson(x, 0LL);
}