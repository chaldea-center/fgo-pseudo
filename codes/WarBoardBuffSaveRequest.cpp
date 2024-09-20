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
  System_Func_object__object__o *_9__1_0; // x24
  System_String_o *v11; // x23
  System_String_o *v12; // x22
  Il2CppObject *v13; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_String_array *v18; // x0
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x0
  System_Byte_array *v21; // x21
  System_Byte_array *v22; // x21
  System_String_o *v23; // x0
  Il2CppObject *v24; // x0
  System_Byte_array *v25; // x0
  System_Byte_array *v26; // x0
  System_String_o *v27; // x0

  if ( (byte_4A5CB24 & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1B885B0(&System_Func_WarBoardPieceData__string__TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__);
    sub_1B885B0(&WarBoardBuffSaveRequest___c_TypeInfo);
    sub_1B885B0(&StringLiteral_23477/*"stageId"*/);
    sub_1B885B0(&StringLiteral_23709/*"svtInfo"*/);
    sub_1B885B0(&StringLiteral_23456/*"squareIndexInfo"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_16024/*"[{0}]"*/);
    byte_4A5CB24 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23477/*"stageId"*/, stageId, 0LL);
  v9 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v9 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v9->static_fields->__9__1_0;
  v11 = (System_String_o *)StringLiteral_868/*","*/;
  v12 = (System_String_o *)StringLiteral_16024/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = WarBoardBuffSaveRequest___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v9->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_WarBoardPieceData__string__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v13, Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v18 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v17,
                                 (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v19 = (Il2CppObject *)System_String__Join(v11, v18, 0LL);
  v20 = (Il2CppObject *)System_String__Format(v12, v19, 0LL);
  v21 = RequestBase__PackToMessagePack((RequestBase_o *)this, v20, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v22 = CatAndMouseGame__CatGame5Bytes(v21, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v23 = System_Convert__ToBase64String(v22, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_23709/*"svtInfo"*/, v23, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v24 = (Il2CppObject *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0LL);
  v25 = RequestBase__PackToMessagePack((RequestBase_o *)this, v24, 0LL);
  v26 = CatAndMouseGame__CatGame5Bytes(v25, 0LL);
  v27 = System_Convert__ToBase64String(v26, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_23456/*"squareIndexInfo"*/, v27, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB23 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24613/*"warBoard/buffSave"*/);
    byte_4A5CB23 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24613/*"warBoard/buffSave"*/, 0LL);
}


void __fastcall WarBoardBuffSaveRequest__requestCompleted(
        WarBoardBuffSaveRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_String_o *v10; // x1

  if ( (byte_4A5CB25 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_24626/*"warBoardData"*/);
    byte_4A5CB25 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(92, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_41126424(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v9 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
      v9,
      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}


void __fastcall WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5CB26 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardBuffSaveRequest___c_TypeInfo);
    byte_4A5CB26 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardBuffSaveRequest___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardBuffSaveRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBuffSaveRequest___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return WarBoardPieceData__ToJson(x, 0LL);
}