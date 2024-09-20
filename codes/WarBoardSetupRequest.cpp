void __fastcall WarBoardSetupRequest___ctor(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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
  WarBoardSetupRequest___c_c *v14; // x0
  System_String_o *v15; // x26
  System_String_o *v16; // x25
  System_Func_T__TResult__o *_9__1_0; // x27
  System_String_o *v18; // x24
  Il2CppObject *v19; // x28
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_String_array *v24; // x0
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x1
  WarBoardSetupRequest___c_c *v28; // x0
  System_String_o *v29; // x25
  System_String_o *v30; // x24
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v32; // x23
  Il2CppObject *v33; // x27
  struct WarBoardSetupRequest___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_String_array *v38; // x0
  Il2CppObject *v39; // x0
  System_String_o *v40; // x0
  WarBoardSetupRequest___c_c *v41; // x0
  System_String_o *v42; // x23
  System_String_o *v43; // x24
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v45; // x22
  Il2CppObject *v46; // x26
  struct WarBoardSetupRequest___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_String_array *v51; // x0
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_4A5CB3C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1B885B0(&System_Func_long__string__TypeInfo);
    sub_1B885B0(&System_Func_int__string__TypeInfo);
    sub_1B885B0(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__);
    sub_1B885B0(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__);
    sub_1B885B0(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__);
    sub_1B885B0(&WarBoardSetupRequest___c_TypeInfo);
    sub_1B885B0(&StringLiteral_23477/*"stageId"*/);
    sub_1B885B0(&StringLiteral_23457/*"squareIndexes"*/);
    sub_1B885B0(&StringLiteral_24387/*"userEquipId"*/);
    sub_1B885B0(&StringLiteral_24452/*"userSvtEquips"*/);
    sub_1B885B0(&StringLiteral_22692/*"questPhase"*/);
    sub_1B885B0(&StringLiteral_24454/*"userSvtIds"*/);
    sub_1B885B0(&StringLiteral_22690/*"questId"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_16024/*"[{0}]"*/);
    byte_4A5CB3C = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23477/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22690/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22692/*"questPhase"*/, questPhase, 0LL);
  v14 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v14 = WarBoardSetupRequest___c_TypeInfo;
  }
  v15 = (System_String_o *)StringLiteral_868/*","*/;
  v16 = (System_String_o *)StringLiteral_16024/*"[{0}]"*/;
  _9__1_0 = (System_Func_T__TResult__o *)v14->static_fields->__9__1_0;
  v18 = (System_String_o *)StringLiteral_23457/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = WarBoardSetupRequest___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v14->static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__1_0, v19, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__string___);
  v24 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v23,
                                 (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v25 = (Il2CppObject *)System_String__Join(v15, v24, 0LL);
  v26 = System_String__Format(v16, v25, 0LL);
  if ( !this )
    sub_1B8880C(v26, v27);
  RequestBase__addField_41126952((RequestBase_o *)this, v18, v26, 0LL);
  v28 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v28 = WarBoardSetupRequest___c_TypeInfo;
  }
  v29 = (System_String_o *)StringLiteral_868/*","*/;
  v30 = (System_String_o *)StringLiteral_16024/*"[{0}]"*/;
  _9__1_1 = (System_Func_T__TResult__o *)v28->static_fields->__9__1_1;
  v32 = (System_String_o *)StringLiteral_24454/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = WarBoardSetupRequest___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v28->static_fields->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_1, v33, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0LL);
    v34 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v34->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->__9__1_1, (int32_t)_9__1_1, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_2EAEEF0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v38 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v37,
                                 (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v39 = (Il2CppObject *)System_String__Join(v29, v38, 0LL);
  v40 = System_String__Format(v30, v39, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, v32, v40, 0LL);
  v41 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v41 = WarBoardSetupRequest___c_TypeInfo;
  }
  v42 = (System_String_o *)StringLiteral_16024/*"[{0}]"*/;
  v43 = (System_String_o *)StringLiteral_868/*","*/;
  _9__1_2 = (System_Func_T__TResult__o *)v41->static_fields->__9__1_2;
  v45 = (System_String_o *)StringLiteral_24452/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = WarBoardSetupRequest___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v41->static_fields->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_2, v46, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0LL);
    v47 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v47->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v47->__9__1_2, (int32_t)_9__1_2, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_2EAEEF0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v51 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v50,
                                 (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v52 = (Il2CppObject *)System_String__Join(v43, v51, 0LL);
  v53 = System_String__Format(v42, v52, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, v45, v53, 0LL);
  RequestBase__addField_41133280((RequestBase_o *)this, (System_String_o *)StringLiteral_24387/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB3B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24620/*"warBoard/setup"*/);
    byte_4A5CB3B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24620/*"warBoard/setup"*/, 0LL);
}


void __fastcall WarBoardSetupRequest__requestCompleted(
        WarBoardSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_String_o *v10; // x1

  if ( (byte_4A5CB3D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_24626/*"warBoardData"*/);
    byte_4A5CB3D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(91, responseList, 0LL);
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


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5CB3E & 1) == 0 )
  {
    sub_1B885B0(&WarBoardSetupRequest___c_TypeInfo);
    byte_4A5CB3E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarBoardSetupRequest___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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