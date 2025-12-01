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
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_String_array *v30; // x0
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  WarBoardSetupRequest___c_c *v35; // x0
  System_String_o *v36; // x25
  System_String_o *v37; // x24
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v39; // x23
  Il2CppObject *v40; // x27
  struct WarBoardSetupRequest___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_String_array *v49; // x0
  Il2CppObject *v50; // x0
  System_String_o *v51; // x0
  const MethodInfo *v52; // x3
  WarBoardSetupRequest___c_c *v53; // x0
  System_String_o *v54; // x23
  System_String_o *v55; // x24
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v57; // x22
  Il2CppObject *v58; // x26
  struct WarBoardSetupRequest___c_StaticFields *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_String_array *v67; // x0
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x3
  const MethodInfo *v72; // x1
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_4CC9096 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C713B0(&System_Func_long__string__TypeInfo);
    sub_1C713B0(&System_Func_int__string__TypeInfo);
    sub_1C713B0(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__);
    sub_1C713B0(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__);
    sub_1C713B0(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__);
    sub_1C713B0(&WarBoardSetupRequest___c_TypeInfo);
    sub_1C713B0(&StringLiteral_23762/*"stageId"*/);
    sub_1C713B0(&StringLiteral_23743/*"squareIndexes"*/);
    sub_1C713B0(&StringLiteral_24639/*"userEquipId"*/);
    sub_1C713B0(&StringLiteral_24707/*"userSvtEquips"*/);
    sub_1C713B0(&StringLiteral_22976/*"questPhase"*/);
    sub_1C713B0(&StringLiteral_24711/*"userSvtIds"*/);
    sub_1C713B0(&StringLiteral_22972/*"questId"*/);
    sub_1C713B0(&StringLiteral_808/*","*/);
    sub_1C713B0(&StringLiteral_16016/*"[{0}]"*/);
    byte_4CC9096 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23762/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22972/*"questId"*/, questId, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22976/*"questPhase"*/, questPhase, v15);
  v16 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v16 = WarBoardSetupRequest___c_TypeInfo;
  }
  v17 = (System_String_o *)StringLiteral_808/*","*/;
  v18 = (System_String_o *)StringLiteral_16016/*"[{0}]"*/;
  _9__1_0 = (System_Func_T__TResult__o *)v16->static_fields->__9__1_0;
  v20 = (System_String_o *)StringLiteral_23743/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = WarBoardSetupRequest___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v16->static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__1_0, v21, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0);
    static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v23, v24, v25, v26, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_317EBF8 *)Method_System_Linq_Enumerable_Select_int__string___);
  v30 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v29,
                                 (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_string___);
  v31 = (Il2CppObject *)System_String__Join(v17, v30, 0);
  v32 = System_String__Format(v18, v31, 0);
  if ( !this )
    sub_1C71608(v32, v33);
  RequestBase__addField_44518324((RequestBase_o *)this, v20, v32, v34);
  v35 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v35 = WarBoardSetupRequest___c_TypeInfo;
  }
  v36 = (System_String_o *)StringLiteral_808/*","*/;
  v37 = (System_String_o *)StringLiteral_16016/*"[{0}]"*/;
  _9__1_1 = (System_Func_T__TResult__o *)v35->static_fields->__9__1_1;
  v39 = (System_String_o *)StringLiteral_24711/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = WarBoardSetupRequest___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v35->static_fields->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_1, v40, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0);
    v41 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v41->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v41->__9__1_1, (int32_t)_9__1_1, v42, v43, v44, v45, v46, v47);
  }
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_3180398 *)Method_System_Linq_Enumerable_Select_long__string___);
  v49 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v48,
                                 (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_string___);
  v50 = (Il2CppObject *)System_String__Join(v36, v49, 0);
  v51 = System_String__Format(v37, v50, 0);
  RequestBase__addField_44518324((RequestBase_o *)this, v39, v51, v52);
  v53 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v53 = WarBoardSetupRequest___c_TypeInfo;
  }
  v54 = (System_String_o *)StringLiteral_16016/*"[{0}]"*/;
  v55 = (System_String_o *)StringLiteral_808/*","*/;
  _9__1_2 = (System_Func_T__TResult__o *)v53->static_fields->__9__1_2;
  v57 = (System_String_o *)StringLiteral_24707/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      v53 = WarBoardSetupRequest___c_TypeInfo;
    }
    v58 = (Il2CppObject *)v53->static_fields->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_2, v58, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0);
    v59 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v59->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v59->__9__1_2, (int32_t)_9__1_2, v60, v61, v62, v63, v64, v65);
  }
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_3180398 *)Method_System_Linq_Enumerable_Select_long__string___);
  v67 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v66,
                                 (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_string___);
  v68 = (Il2CppObject *)System_String__Join(v55, v67, 0);
  v69 = System_String__Format(v54, v68, 0);
  RequestBase__addField_44518324((RequestBase_o *)this, v57, v69, v70);
  RequestBase__addField_44514616((RequestBase_o *)this, (System_String_o *)StringLiteral_24639/*"userEquipId"*/, userEquipId, v71);
  RequestBase__beginRequest((RequestBase_o *)this, v72);
}


System_String_o *WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC9095 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_24869/*"warBoard/setup"*/);
    byte_4CC9095 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_24869/*"warBoard/setup"*/, 0);
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

  if ( (byte_4CC9097 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&ResponseCommandKind_TypeInfo);
    sub_1C713B0(&StringLiteral_22316/*"ng"*/);
    sub_1C713B0(&StringLiteral_24875/*"warBoardData"*/);
    byte_4CC9097 = 1;
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


void WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC9098 & 1) == 0 )
  {
    sub_1C713B0(&WarBoardSetupRequest___c_TypeInfo);
    byte_4CC9098 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)WarBoardSetupRequest___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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