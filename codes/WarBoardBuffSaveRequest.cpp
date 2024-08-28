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
  WarBoardBuffSaveRequest___c_c *v21; // x0
  System_Func_object__object__o *_9__1_0; // x24
  System_String_o *v23; // x23
  System_String_o *v24; // x22
  Il2CppObject *v25; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_String_array *v30; // x0
  Il2CppObject *v31; // x0
  RequestBase_o *v32; // x0
  const MethodInfo *v33; // x2
  System_Byte_array *v34; // x21
  System_Byte_array *v35; // x21
  System_String_o *v36; // x0
  const MethodInfo *v37; // x3
  RequestBase_o *v38; // x0
  const MethodInfo *v39; // x2
  System_Byte_array *v40; // x0
  System_Byte_array *v41; // x0
  System_String_o *v42; // x0
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x1

  if ( (byte_4A0A608 & 1) == 0 )
  {
    sub_1B686D4(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId);
    sub_1B686D4(&System_Convert_TypeInfo, v9);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___, v10);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_string___, v11);
    sub_1B686D4(&System_Func_WarBoardPieceData__string__TypeInfo, v12);
    sub_1B686D4(&JsonManager_TypeInfo, v13);
    sub_1B686D4(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, v14);
    sub_1B686D4(&WarBoardBuffSaveRequest___c_TypeInfo, v15);
    sub_1B686D4(&StringLiteral_23396/*"stageId"*/, v16);
    sub_1B686D4(&StringLiteral_23628/*"svtInfo"*/, v17);
    sub_1B686D4(&StringLiteral_23375/*"squareIndexInfo"*/, v18);
    sub_1B686D4(&StringLiteral_868/*","*/, v19);
    sub_1B686D4(&StringLiteral_15958/*"[{0}]"*/, v20);
    byte_4A0A608 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23396/*"stageId"*/,
    stageId,
    (const MethodInfo *)squareIndexInfo);
  v21 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v21 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__object__o *)v21->static_fields->__9__1_0;
  v23 = (System_String_o *)StringLiteral_868/*","*/;
  v24 = (System_String_o *)StringLiteral_15958/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = WarBoardBuffSaveRequest___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v21->static_fields->__9;
    _9__1_0 = (System_Func_object__object__o *)sub_1B68920(System_Func_WarBoardPieceData__string__TypeInfo);
    System_Func_object__object____ctor(_9__1_0, v25, Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2E7A03C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v30 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v29,
                                 (const MethodInfo_2E81E3C *)Method_System_Linq_Enumerable_ToArray_string___);
  v31 = (Il2CppObject *)System_String__Join(v23, v30, 0LL);
  v32 = (RequestBase_o *)System_String__Format(v24, v31, 0LL);
  v34 = RequestBase__PackToMessagePack(v32, (Il2CppObject *)v32, v33);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v35 = CatAndMouseGame__CatGame5Bytes(v34, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v36 = System_Convert__ToBase64String(v35, 0LL);
  RequestBase__addField_40920848((RequestBase_o *)this, (System_String_o *)StringLiteral_23628/*"svtInfo"*/, v36, v37);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v38 = (RequestBase_o *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0LL);
  v40 = RequestBase__PackToMessagePack(v38, (Il2CppObject *)v38, v39);
  v41 = CatAndMouseGame__CatGame5Bytes(v40, 0LL);
  v42 = System_Convert__ToBase64String(v41, 0LL);
  RequestBase__addField_40920848((RequestBase_o *)this, (System_String_o *)StringLiteral_23375/*"squareIndexInfo"*/, v42, v43);
  RequestBase__beginRequest((RequestBase_o *)this, v44);
}


System_String_o *__fastcall WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A607 & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_24530/*"warBoard/buffSave"*/, v2);
    byte_4A0A607 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_24530/*"warBoard/buffSave"*/, 0LL);
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

  if ( (byte_4A0A609 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B686D4(&JsonManager_TypeInfo, v6);
    sub_1B686D4(&ResponseCommandKind_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v8);
    sub_1B686D4(&StringLiteral_24543/*"warBoardData"*/, v9);
    byte_4A0A609 = 1;
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
             (Il2CppObject *)StringLiteral_24543/*"warBoardData"*/,
             (const MethodInfo_3189AE8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v16 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v15);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24543/*"warBoardData"*/,
      v16,
      (const MethodInfo_3189B54 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
        StringLiteral_21981/*"ng"*/,
        *(_QWORD *)&v19->fields.extra_arg);
  }
}


void __fastcall WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0A60A & 1) == 0 )
  {
    sub_1B686D4(&WarBoardBuffSaveRequest___c_TypeInfo, v1);
    byte_4A0A60A = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(WarBoardBuffSaveRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardBuffSaveRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardBuffSaveRequest___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B68930(this, 0LL);
  return WarBoardPieceData__ToJson(x, 0LL);
}