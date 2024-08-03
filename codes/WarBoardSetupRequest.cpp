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
  __int64 v33; // x1
  __int64 v34; // x2
  WarBoardSetupRequest___c_c *v35; // x0
  System_String_o *v36; // x26
  System_String_o *v37; // x25
  System_Func_T__TResult__o *_9__1_0; // x27
  System_String_o *v39; // x24
  Il2CppObject *v40; // x28
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_String_array *v45; // x0
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  const MethodInfo *v48; // x3
  __int64 v49; // x1
  __int64 v50; // x2
  WarBoardSetupRequest___c_c *v51; // x0
  System_String_o *v52; // x25
  System_String_o *v53; // x24
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v55; // x23
  Il2CppObject *v56; // x27
  struct WarBoardSetupRequest___c_StaticFields *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_String_array *v61; // x0
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  const MethodInfo *v64; // x3
  __int64 v65; // x1
  __int64 v66; // x2
  WarBoardSetupRequest___c_c *v67; // x0
  System_String_o *v68; // x23
  System_String_o *v69; // x24
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v71; // x22
  Il2CppObject *v72; // x26
  struct WarBoardSetupRequest___c_StaticFields *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_String_array *v77; // x0
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  const MethodInfo *v80; // x3
  const MethodInfo *v81; // x3
  const MethodInfo *v82; // x1
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_49FDDB4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_int__string___, *(_QWORD *)&stageId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_long__string___, v14);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_string___, v15);
    sub_1B640C8(&System_Func_long__string__TypeInfo, v16);
    sub_1B640C8(&System_Func_int__string__TypeInfo, v17);
    sub_1B640C8(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, v18);
    sub_1B640C8(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, v19);
    sub_1B640C8(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, v20);
    sub_1B640C8(&WarBoardSetupRequest___c_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_23380/*"stageId"*/, v22);
    sub_1B640C8(&StringLiteral_23359/*"squareIndexes"*/, v23);
    sub_1B640C8(&StringLiteral_24288/*"userEquipId"*/, v24);
    sub_1B640C8(&StringLiteral_24353/*"userSvtEquips"*/, v25);
    sub_1B640C8(&StringLiteral_22600/*"questPhase"*/, v26);
    sub_1B640C8(&StringLiteral_24355/*"userSvtIds"*/, v27);
    sub_1B640C8(&StringLiteral_22598/*"questId"*/, v28);
    sub_1B640C8(&StringLiteral_869/*","*/, v29);
    sub_1B640C8(&StringLiteral_15956/*"[{0}]"*/, v30);
    byte_49FDDB4 = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_23380/*"stageId"*/,
    stageId,
    *(const MethodInfo **)&questPhase);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22598/*"questId"*/, questId, v31);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22600/*"questPhase"*/, questPhase, v32);
  v35 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v35 = WarBoardSetupRequest___c_TypeInfo;
  }
  v36 = (System_String_o *)StringLiteral_869/*","*/;
  v37 = (System_String_o *)StringLiteral_15956/*"[{0}]"*/;
  _9__1_0 = (System_Func_T__TResult__o *)v35->static_fields->__9__1_0;
  v39 = (System_String_o *)StringLiteral_23359/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = WarBoardSetupRequest___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v35->static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_int__string__TypeInfo, v33, v34);
    System_Func_int__object____ctor(_9__1_0, v40, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2E66FCC *)Method_System_Linq_Enumerable_Select_int__string___);
  v45 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v44,
                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v46 = (Il2CppObject *)System_String__Join(v36, v45, 0LL);
  v47 = System_String__Format(v37, v46, 0LL);
  if ( !this )
    sub_1B64324(v47);
  RequestBase__addField_40850936((RequestBase_o *)this, v39, v47, v48);
  v51 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v51 = WarBoardSetupRequest___c_TypeInfo;
  }
  v52 = (System_String_o *)StringLiteral_869/*","*/;
  v53 = (System_String_o *)StringLiteral_15956/*"[{0}]"*/;
  _9__1_1 = (System_Func_T__TResult__o *)v51->static_fields->__9__1_1;
  v55 = (System_String_o *)StringLiteral_24355/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = WarBoardSetupRequest___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v51->static_fields->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_long__string__TypeInfo, v49, v50);
    System_Func_long__object____ctor(_9__1_1, v56, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0LL);
    v57 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v57->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v57->__9__1_1, (int32_t)_9__1_1, v58, v59);
  }
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_2E67E90 *)Method_System_Linq_Enumerable_Select_long__string___);
  v61 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v60,
                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v62 = (Il2CppObject *)System_String__Join(v52, v61, 0LL);
  v63 = System_String__Format(v53, v62, 0LL);
  RequestBase__addField_40850936((RequestBase_o *)this, v55, v63, v64);
  v67 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v67 = WarBoardSetupRequest___c_TypeInfo;
  }
  v68 = (System_String_o *)StringLiteral_15956/*"[{0}]"*/;
  v69 = (System_String_o *)StringLiteral_869/*","*/;
  _9__1_2 = (System_Func_T__TResult__o *)v67->static_fields->__9__1_2;
  v71 = (System_String_o *)StringLiteral_24353/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67);
      v67 = WarBoardSetupRequest___c_TypeInfo;
    }
    v72 = (Il2CppObject *)v67->static_fields->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_long__string__TypeInfo, v65, v66);
    System_Func_long__object____ctor(_9__1_2, v72, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0LL);
    v73 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v73->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v73->__9__1_2, (int32_t)_9__1_2, v74, v75);
  }
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_2E67E90 *)Method_System_Linq_Enumerable_Select_long__string___);
  v77 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v76,
                                 (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v78 = (Il2CppObject *)System_String__Join(v69, v77, 0LL);
  v79 = System_String__Format(v68, v78, 0LL);
  RequestBase__addField_40850936((RequestBase_o *)this, v71, v79, v80);
  RequestBase__addField_40849372((RequestBase_o *)this, (System_String_o *)StringLiteral_24288/*"userEquipId"*/, userEquipId, v81);
  RequestBase__beginRequest((RequestBase_o *)this, v82);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDDB3 & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_24521/*"warBoard/setup"*/, v2);
    byte_49FDDB3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_24521/*"warBoard/setup"*/, 0LL);
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

  if ( (byte_49FDDB5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B640C8(&JsonManager_TypeInfo, v6);
    sub_1B640C8(&ResponseCommandKind_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v8);
    sub_1B640C8(&StringLiteral_24527/*"warBoardData"*/, v9);
    byte_49FDDB5 = 1;
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


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FDDB6 & 1) == 0 )
  {
    sub_1B640C8(&WarBoardSetupRequest___c_TypeInfo, v1);
    byte_49FDDB6 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardSetupRequest___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardSetupRequest___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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