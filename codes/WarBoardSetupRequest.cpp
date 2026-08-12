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
  __int64 v16; // x1
  WarBoardSetupRequest___c_c *v17; // x0
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__1_0; // x27
  System_String_o *v20; // x26
  System_String_o *v21; // x24
  System_String_o *v22; // x25
  Il2CppObject *v23; // x28
  struct WarBoardSetupRequest___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_String_array *v32; // x0
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  WarBoardSetupRequest___c_c *v38; // x0
  struct WarBoardSetupRequest___c_StaticFields *v39; // x8
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v41; // x25
  System_String_o *v42; // x23
  System_String_o *v43; // x24
  Il2CppObject *v44; // x27
  struct WarBoardSetupRequest___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_String_array *v53; // x0
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  const MethodInfo *v56; // x3
  __int64 v57; // x1
  WarBoardSetupRequest___c_c *v58; // x0
  struct WarBoardSetupRequest___c_StaticFields *v59; // x8
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v61; // x24
  System_String_o *v62; // x22
  System_String_o *v63; // x23
  Il2CppObject *v64; // x26
  struct WarBoardSetupRequest___c_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_String_array *v73; // x0
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x1
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_5972557 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_2213A60(&System_Func_long__string__TypeInfo);
    sub_2213A60(&System_Func_int__string__TypeInfo);
    sub_2213A60(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__);
    sub_2213A60(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__);
    sub_2213A60(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__);
    sub_2213A60(&WarBoardSetupRequest___c_TypeInfo);
    sub_2213A60(&StringLiteral_24904/*"stageId"*/);
    sub_2213A60(&StringLiteral_24884/*"squareIndexes"*/);
    sub_2213A60(&StringLiteral_25867/*"userEquipId"*/);
    sub_2213A60(&StringLiteral_25938/*"userSvtEquips"*/);
    sub_2213A60(&StringLiteral_24055/*"questPhase"*/);
    sub_2213A60(&StringLiteral_25942/*"userSvtIds"*/);
    sub_2213A60(&StringLiteral_24051/*"questId"*/);
    sub_2213A60(&StringLiteral_869/*","*/);
    sub_2213A60(&StringLiteral_16648/*"[{0}]"*/);
    byte_5972557 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24904/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24051/*"questId"*/, questId, v14);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24055/*"questPhase"*/, questPhase, v15);
  v17 = WarBoardSetupRequest___c_TypeInfo;
  if ( !*(&WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo, v16);
    v17 = WarBoardSetupRequest___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__1_0 = (System_Func_T__TResult__o *)static_fields->__9__1_0;
  v20 = (System_String_o *)StringLiteral_869/*","*/;
  v21 = (System_String_o *)StringLiteral_24884/*"squareIndexes"*/;
  v22 = (System_String_o *)StringLiteral_16648/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__1_0, v23, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0);
    v24 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v24->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->__9__1_0, (int32_t)_9__1_0, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__string___);
  v32 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v31,
                                 (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
  v33 = (Il2CppObject *)System_String__Join(v20, v32, 0);
  v34 = System_String__Format(v22, v33, 0);
  if ( !this )
    sub_2213CDC(v34, v35);
  RequestBase__addField_51259256((RequestBase_o *)this, v21, v34, v36);
  v38 = WarBoardSetupRequest___c_TypeInfo;
  if ( !*(&WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo, v37);
    v38 = WarBoardSetupRequest___c_TypeInfo;
  }
  v39 = v38->static_fields;
  _9__1_1 = (System_Func_T__TResult__o *)v39->__9__1_1;
  v41 = (System_String_o *)StringLiteral_869/*","*/;
  v42 = (System_String_o *)StringLiteral_25942/*"userSvtIds"*/;
  v43 = (System_String_o *)StringLiteral_16648/*"[{0}]"*/;
  if ( !_9__1_1 )
  {
    if ( !*(&v38->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v38, v37);
      v39 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)v39->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_1, v44, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0);
    v45 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v45->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v45->__9__1_1, (int32_t)_9__1_1, v46, v47, v48, v49, v50, v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_388F838 *)Method_System_Linq_Enumerable_Select_long__string___);
  v53 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v52,
                                 (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
  v54 = (Il2CppObject *)System_String__Join(v41, v53, 0);
  v55 = System_String__Format(v43, v54, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, v42, v55, v56);
  v58 = WarBoardSetupRequest___c_TypeInfo;
  if ( !*(&WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo, v57);
    v58 = WarBoardSetupRequest___c_TypeInfo;
  }
  v59 = v58->static_fields;
  _9__1_2 = (System_Func_T__TResult__o *)v59->__9__1_2;
  v61 = (System_String_o *)StringLiteral_869/*","*/;
  v62 = (System_String_o *)StringLiteral_25938/*"userSvtEquips"*/;
  v63 = (System_String_o *)StringLiteral_16648/*"[{0}]"*/;
  if ( !_9__1_2 )
  {
    if ( !*(&v58->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v58, v57);
      v59 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v64 = (Il2CppObject *)v59->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_2, v64, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0);
    v65 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v65->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->__9__1_2, (int32_t)_9__1_2, v66, v67, v68, v69, v70, v71);
  }
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_388F838 *)Method_System_Linq_Enumerable_Select_long__string___);
  v73 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v72,
                                 (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___);
  v74 = (Il2CppObject *)System_String__Join(v61, v73, 0);
  v75 = System_String__Format(v63, v74, 0);
  RequestBase__addField_51259256((RequestBase_o *)this, v62, v75, v76);
  RequestBase__addField_51256716((RequestBase_o *)this, (System_String_o *)StringLiteral_25867/*"userEquipId"*/, userEquipId, v77);
  RequestBase__beginRequest((RequestBase_o *)this, v78);
}


System_String_o *WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972556 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_26111/*"warBoard/setup"*/);
    byte_5972556 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_26111/*"warBoard/setup"*/, 0);
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
  __int64 v12; // x1
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v15; // x1

  if ( (byte_5972558 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_26117/*"warBoardData"*/);
    byte_5972558 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(91, responseList, 0);
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


void WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972559 & 1) == 0 )
  {
    sub_2213A60(&WarBoardSetupRequest___c_TypeInfo);
    byte_5972559 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarBoardSetupRequest___c_TypeInfo->static_fields,
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