// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardSetupRequest__beginRequest(
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  WarBoardSetupRequest___c_c *v33; // x0
  System_String_o *v34; // x26
  System_String_o *v35; // x25
  System_Func_T__TResult__o *_9__1_0; // x27
  System_String_o *v37; // x24
  Il2CppObject *v38; // x28
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_String_array *v43; // x0
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x3
  WarBoardSetupRequest___c_c *v48; // x0
  System_String_o *v49; // x25
  System_String_o *v50; // x24
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v52; // x23
  Il2CppObject *v53; // x27
  struct WarBoardSetupRequest___c_StaticFields *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_String_array *v58; // x0
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  const MethodInfo *v61; // x3
  WarBoardSetupRequest___c_c *v62; // x0
  System_String_o *v63; // x23
  System_String_o *v64; // x24
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v66; // x22
  Il2CppObject *v67; // x26
  struct WarBoardSetupRequest___c_StaticFields *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_String_array *v72; // x0
  Il2CppObject *v73; // x0
  System_String_o *v74; // x0
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x1
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_4A0A620 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_int__string___, *(_QWORD *)&stageId);
    sub_1B686D4(&Method_System_Linq_Enumerable_Select_long__string___, v14);
    sub_1B686D4(&Method_System_Linq_Enumerable_ToArray_string___, v15);
    sub_1B686D4(&System_Func_long__string__TypeInfo, v16);
    sub_1B686D4(&System_Func_int__string__TypeInfo, v17);
    sub_1B686D4(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, v18);
    sub_1B686D4(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, v19);
    sub_1B686D4(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, v20);
    sub_1B686D4(&WarBoardSetupRequest___c_TypeInfo, v21);
    sub_1B686D4(&StringLiteral_23396/*"stageId"*/, v22);
    sub_1B686D4(&StringLiteral_23376/*"squareIndexes"*/, v23);
    sub_1B686D4(&StringLiteral_24304/*"userEquipId"*/, v24);
    sub_1B686D4(&StringLiteral_24369/*"userSvtEquips"*/, v25);
    sub_1B686D4(&StringLiteral_22615/*"questPhase"*/, v26);
    sub_1B686D4(&StringLiteral_24371/*"userSvtIds"*/, v27);
    sub_1B686D4(&StringLiteral_22613/*"questId"*/, v28);
    sub_1B686D4(&StringLiteral_868/*","*/, v29);
    sub_1B686D4(&StringLiteral_15958/*"[{0}]"*/, v30);
    byte_4A0A620 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23396/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22613/*"questId"*/, questId, v31);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22615/*"questPhase"*/, questPhase, v32);
  v33 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v33 = WarBoardSetupRequest___c_TypeInfo;
  }
  v34 = (System_String_o *)StringLiteral_868/*","*/;
  v35 = (System_String_o *)StringLiteral_15958/*"[{0}]"*/;
  _9__1_0 = (System_Func_T__TResult__o *)v33->static_fields->__9__1_0;
  v37 = (System_String_o *)StringLiteral_23376/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = WarBoardSetupRequest___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v33->static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_1B68920(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__1_0, v38, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v40, v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2E77C5C *)Method_System_Linq_Enumerable_Select_int__string___);
  v43 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v42,
                                 (const MethodInfo_2E81E3C *)Method_System_Linq_Enumerable_ToArray_string___);
  v44 = (Il2CppObject *)System_String__Join(v34, v43, 0LL);
  v45 = System_String__Format(v35, v44, 0LL);
  if ( !this )
    sub_1B68930(v45, v46);
  RequestBase__addField_40920848((RequestBase_o *)this, v37, v45, v47);
  v48 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v48 = WarBoardSetupRequest___c_TypeInfo;
  }
  v49 = (System_String_o *)StringLiteral_868/*","*/;
  v50 = (System_String_o *)StringLiteral_15958/*"[{0}]"*/;
  _9__1_1 = (System_Func_T__TResult__o *)v48->static_fields->__9__1_1;
  v52 = (System_String_o *)StringLiteral_24371/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = WarBoardSetupRequest___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v48->static_fields->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_1B68920(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_1, v53, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0LL);
    v54 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v54->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v54->__9__1_1, (int32_t)_9__1_1, v55, v56);
  }
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_2E78B20 *)Method_System_Linq_Enumerable_Select_long__string___);
  v58 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v57,
                                 (const MethodInfo_2E81E3C *)Method_System_Linq_Enumerable_ToArray_string___);
  v59 = (Il2CppObject *)System_String__Join(v49, v58, 0LL);
  v60 = System_String__Format(v50, v59, 0LL);
  RequestBase__addField_40920848((RequestBase_o *)this, v52, v60, v61);
  v62 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v62 = WarBoardSetupRequest___c_TypeInfo;
  }
  v63 = (System_String_o *)StringLiteral_15958/*"[{0}]"*/;
  v64 = (System_String_o *)StringLiteral_868/*","*/;
  _9__1_2 = (System_Func_T__TResult__o *)v62->static_fields->__9__1_2;
  v66 = (System_String_o *)StringLiteral_24369/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = WarBoardSetupRequest___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v62->static_fields->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_1B68920(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_2, v67, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0LL);
    v68 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v68->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&v68->__9__1_2, (int32_t)_9__1_2, v69, v70);
  }
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_2E78B20 *)Method_System_Linq_Enumerable_Select_long__string___);
  v72 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v71,
                                 (const MethodInfo_2E81E3C *)Method_System_Linq_Enumerable_ToArray_string___);
  v73 = (Il2CppObject *)System_String__Join(v64, v72, 0LL);
  v74 = System_String__Format(v63, v73, 0LL);
  RequestBase__addField_40920848((RequestBase_o *)this, v66, v74, v75);
  RequestBase__addField_40919284((RequestBase_o *)this, (System_String_o *)StringLiteral_24304/*"userEquipId"*/, userEquipId, v76);
  RequestBase__beginRequest((RequestBase_o *)this, v77);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A0A61F & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    sub_1B686D4(&StringLiteral_24537/*"warBoard/setup"*/, v2);
    byte_4A0A61F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61419468(BaseUrl, (System_String_o *)StringLiteral_24537/*"warBoard/setup"*/, 0LL);
}


void __fastcall WarBoardSetupRequest__requestCompleted(
        WarBoardSetupRequest_o *this,
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

  if ( (byte_4A0A621 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B686D4(&JsonManager_TypeInfo, v6);
    sub_1B686D4(&ResponseCommandKind_TypeInfo, v7);
    sub_1B686D4(&StringLiteral_21981/*"ng"*/, v8);
    sub_1B686D4(&StringLiteral_24543/*"warBoardData"*/, v9);
    byte_4A0A621 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(91, responseList, 0LL);
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


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0A622 & 1) == 0 )
  {
    sub_1B686D4(&WarBoardSetupRequest___c_TypeInfo, v1);
    byte_4A0A622 = 1;
  }
  v2 = (Il2CppObject *)sub_1B68920(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v2;
  sub_1B68678(
    (ServantStatusBattleListViewItem_o *)WarBoardSetupRequest___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall WarBoardSetupRequest___c___ctor(WarBoardSetupRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest___c___beginRequest_b__1_0(
        WarBoardSetupRequest___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest___c___beginRequest_b__1_1(
        WarBoardSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest___c___beginRequest_b__1_2(
        WarBoardSetupRequest___c_o *this,
        int64_t x,
        const MethodInfo *method)
{
  int64_t v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = x;
  return System_Int64__ToString((int64_t)&v4, 0LL);
}