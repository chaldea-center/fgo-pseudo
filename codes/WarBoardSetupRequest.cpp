// local variable allocation has failed, the output may be wrong!
void WarBoardSetupRequest__beginRequest(
        WarBoardSetupRequest_o *this,
        int32_t stageId,
        int32_t questId,
        int32_t questPhase,
        System_Int32_array *squareIndexes,
        System_Int64_array *userSvtIds,
        System_Int64_array *userSvtEquips,
        int64_t userEquipId,
        const MethodInfo *method)
{
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  WarBoardSetupRequest___c_c *v16; // x0
  System_String_o *v17; // x26
  System_String_o *v18; // x25
  System_Func_T__TResult__o *_9__1_0; // x27
  System_String_o *v20; // x24
  Il2CppObject *v21; // x28
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_String_array *v26; // x0
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  const MethodInfo *v29; // x3
  WarBoardSetupRequest___c_c *v30; // x0
  System_String_o *v31; // x25
  System_String_o *v32; // x24
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v34; // x23
  Il2CppObject *v35; // x27
  struct WarBoardSetupRequest___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_String_array *v40; // x0
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  const MethodInfo *v43; // x3
  WarBoardSetupRequest___c_c *v44; // x0
  System_String_o *v45; // x23
  System_String_o *v46; // x24
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v48; // x22
  Il2CppObject *v49; // x26
  struct WarBoardSetupRequest___c_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_String_array *v54; // x0
  Il2CppObject *v55; // x0
  System_String_o *v56; // x0
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x1
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_4C44C25 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C37058(&System_Func_long__string__TypeInfo);
    sub_1C37058(&System_Func_int__string__TypeInfo);
    sub_1C37058(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__);
    sub_1C37058(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__);
    sub_1C37058(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__);
    sub_1C37058(&WarBoardSetupRequest___c_TypeInfo);
    sub_1C37058(&StringLiteral_23648/*"stageId"*/);
    sub_1C37058(&StringLiteral_23629/*"squareIndexes"*/);
    sub_1C37058(&StringLiteral_24516/*"userEquipId"*/);
    sub_1C37058(&StringLiteral_24584/*"userSvtEquips"*/);
    sub_1C37058(&StringLiteral_22865/*"questPhase"*/);
    sub_1C37058(&StringLiteral_24588/*"userSvtIds"*/);
    sub_1C37058(&StringLiteral_22861/*"questId"*/);
    sub_1C37058(&StringLiteral_811/*","*/);
    sub_1C37058(&StringLiteral_16016/*"[{0}]"*/);
    byte_4C44C25 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23648/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22861/*"questId"*/, questId, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22865/*"questPhase"*/, questPhase, v15);
  v16 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v16 = WarBoardSetupRequest___c_TypeInfo;
  }
  v17 = (System_String_o *)StringLiteral_811/*","*/;
  v18 = (System_String_o *)StringLiteral_16016/*"[{0}]"*/;
  _9__1_0 = (System_Func_T__TResult__o *)v16->static_fields->__9__1_0;
  v20 = (System_String_o *)StringLiteral_23629/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = WarBoardSetupRequest___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v16->static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__1_0, v21, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0);
    static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_311B668 *)Method_System_Linq_Enumerable_Select_int__string___);
  v26 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v25,
                                 (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v27 = (Il2CppObject *)System_String__Join(v17, v26, 0);
  v28 = System_String__Format(v18, v27, 0);
  if ( !this )
    sub_1C372B4(v28);
  RequestBase__addField_44247300((RequestBase_o *)this, v20, v28, v29);
  v30 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v30 = WarBoardSetupRequest___c_TypeInfo;
  }
  v31 = (System_String_o *)StringLiteral_811/*","*/;
  v32 = (System_String_o *)StringLiteral_16016/*"[{0}]"*/;
  _9__1_1 = (System_Func_T__TResult__o *)v30->static_fields->__9__1_1;
  v34 = (System_String_o *)StringLiteral_24588/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = WarBoardSetupRequest___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v30->static_fields->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_1, v35, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0);
    v36 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v36->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v36->__9__1_1, (int32_t)_9__1_1, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_311CE08 *)Method_System_Linq_Enumerable_Select_long__string___);
  v40 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v39,
                                 (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v41 = (Il2CppObject *)System_String__Join(v31, v40, 0);
  v42 = System_String__Format(v32, v41, 0);
  RequestBase__addField_44247300((RequestBase_o *)this, v34, v42, v43);
  v44 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v44 = WarBoardSetupRequest___c_TypeInfo;
  }
  v45 = (System_String_o *)StringLiteral_16016/*"[{0}]"*/;
  v46 = (System_String_o *)StringLiteral_811/*","*/;
  _9__1_2 = (System_Func_T__TResult__o *)v44->static_fields->__9__1_2;
  v48 = (System_String_o *)StringLiteral_24584/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = WarBoardSetupRequest___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v44->static_fields->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_2, v49, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0);
    v50 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v50->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v50->__9__1_2, (int32_t)_9__1_2, v51, v52);
  }
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_311CE08 *)Method_System_Linq_Enumerable_Select_long__string___);
  v54 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v53,
                                 (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v55 = (Il2CppObject *)System_String__Join(v46, v54, 0);
  v56 = System_String__Format(v45, v55, 0);
  RequestBase__addField_44247300((RequestBase_o *)this, v48, v56, v57);
  RequestBase__addField_44246844((RequestBase_o *)this, (System_String_o *)StringLiteral_24516/*"userEquipId"*/, userEquipId, v58);
  RequestBase__beginRequest((RequestBase_o *)this, v59);
}


System_String_o *WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C44C24 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_24739/*"warBoard/setup"*/);
    byte_4C44C24 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63561656(BaseUrl, (System_String_o *)StringLiteral_24739/*"warBoard/setup"*/, 0);
}


void WarBoardSetupRequest__requestCompleted(
        WarBoardSetupRequest_o *this,
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

  if ( (byte_4C44C26 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&ResponseCommandKind_TypeInfo);
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    sub_1C37058(&StringLiteral_24745/*"warBoardData"*/);
    byte_4C44C26 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(91, responseList, 0);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v7->fields.success) != 0 )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24745/*"warBoardData"*/,
             (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = RequestBase__UnpackToMessagePack((RequestBase_o *)Item, Item, v10);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24745/*"warBoardData"*/,
      v11,
      (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
        StringLiteral_22215/*"ng"*/,
        v14->fields.method);
  }
}


void WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C44C27 & 1) == 0 )
  {
    sub_1C37058(&WarBoardSetupRequest___c_TypeInfo);
    byte_4C44C27 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarBoardSetupRequest___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardSetupRequest___c___ctor(WarBoardSetupRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *WarBoardSetupRequest___c___beginRequest_b__1_0(
        WarBoardSetupRequest___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


System_String_o *WarBoardSetupRequest___c___beginRequest_b__1_1(
        WarBoardSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0);
}


System_String_o *WarBoardSetupRequest___c___beginRequest_b__1_2(
        WarBoardSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0);
}