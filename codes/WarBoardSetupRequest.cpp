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
  WarBoardSetupRequest___c_c *v17; // x0
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__1_0; // x27
  System_String_o *v20; // x26
  System_String_o *v21; // x25
  System_String_o *v22; // x24
  Il2CppObject *v23; // x28
  struct WarBoardSetupRequest___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_String_array *v32; // x0
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  __int64 v35; // x1
  WarBoardSetupRequest___c_c *v36; // x0
  struct WarBoardSetupRequest___c_StaticFields *v37; // x8
  System_String_o *v38; // x24
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__1_1; // x26
  System_String_o *v40; // x25
  System_String_o *v41; // x23
  Il2CppObject *v42; // x27
  struct WarBoardSetupRequest___c_StaticFields *v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_String_array *v51; // x0
  Il2CppObject *v52; // x0
  System_String_o *v53; // x0
  WarBoardSetupRequest___c_c *v54; // x0
  struct WarBoardSetupRequest___c_StaticFields *v55; // x8
  System_String_o *v56; // x23
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__1_2; // x25
  System_String_o *v58; // x24
  System_String_o *v59; // x22
  Il2CppObject *v60; // x26
  struct WarBoardSetupRequest___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_String_array *v69; // x0
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  int64_t data; // [xsp+8h] [xbp-58h]

  if ( (byte_42B221A & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_int__string___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_long__string___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B52984(&Method_System_Func_long__string___ctor__);
    sub_B52984(&Method_System_Func_int__string___ctor__);
    sub_B52984(&System_Func_int__string__TypeInfo);
    sub_B52984(&System_Func_long__string__TypeInfo);
    sub_B52984(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__);
    sub_B52984(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__);
    sub_B52984(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__);
    sub_B52984(&WarBoardSetupRequest___c_TypeInfo);
    sub_B52984(&StringLiteral_22450/*"stageId"*/);
    sub_B52984(&StringLiteral_22430/*"squareIndexes"*/);
    sub_B52984(&StringLiteral_23198/*"userEquipId"*/);
    sub_B52984(&StringLiteral_23256/*"userSvtEquips"*/);
    sub_B52984(&StringLiteral_21792/*"questPhase"*/);
    sub_B52984(&StringLiteral_23258/*"userSvtIds"*/);
    sub_B52984(&StringLiteral_21790/*"questId"*/);
    sub_B52984(&StringLiteral_709/*","*/);
    sub_B52984(&StringLiteral_15933/*"[{0}]"*/);
    byte_42B221A = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22450/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21790/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21792/*"questPhase"*/, questPhase, 0LL);
  v17 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v17 = WarBoardSetupRequest___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__1_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__1_0;
  v20 = (System_String_o *)StringLiteral_709/*","*/;
  v21 = (System_String_o *)StringLiteral_15933/*"[{0}]"*/;
  data = userEquipId;
  v22 = (System_String_o *)StringLiteral_22430/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B52A54(System_Func_int__string__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__1_0,
      v23,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_0__,
      (const MethodInfo_2BC49BC *)Method_System_Func_int__string___ctor__);
    v24 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v24->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v24->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1B68D9C *)Method_System_Linq_Enumerable_Select_int__string___);
  v32 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v31,
                                 (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_string___);
  v33 = (Il2CppObject *)System_String__Join(v20, v32, 0LL);
  v34 = System_String__Format(v21, v33, 0LL);
  if ( !this )
    sub_B52A5C(v34, v35);
  RequestBase__addField_32020920((RequestBase_o *)this, v22, v34, 0LL);
  v36 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v36 = WarBoardSetupRequest___c_TypeInfo;
  }
  v37 = v36->static_fields;
  v38 = (System_String_o *)StringLiteral_15933/*"[{0}]"*/;
  _9__1_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v37->__9__1_1;
  v40 = (System_String_o *)StringLiteral_709/*","*/;
  v41 = (System_String_o *)StringLiteral_23258/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v37 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)v37->__9;
    _9__1_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B52A54(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__1_1,
      v42,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_1__,
      (const MethodInfo_2BC7428 *)Method_System_Func_long__string___ctor__);
    v43 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v43->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v43->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_1B695A0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v51 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v50,
                                 (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_string___);
  v52 = (Il2CppObject *)System_String__Join(v40, v51, 0LL);
  v53 = System_String__Format(v38, v52, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, v41, v53, 0LL);
  v54 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v54 = WarBoardSetupRequest___c_TypeInfo;
  }
  v55 = v54->static_fields;
  v56 = (System_String_o *)StringLiteral_15933/*"[{0}]"*/;
  _9__1_2 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v55->__9__1_2;
  v58 = (System_String_o *)StringLiteral_709/*","*/;
  v59 = (System_String_o *)StringLiteral_23256/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54);
      v55 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v60 = (Il2CppObject *)v55->__9;
    _9__1_2 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B52A54(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__1_2,
      v60,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_2__,
      (const MethodInfo_2BC7428 *)Method_System_Func_long__string___ctor__);
    v61 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v61->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_B52920(
      (BattleServantConfConponent_o *)&v61->__9__1_2,
      (System_Int32_array **)_9__1_2,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_1B695A0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v69 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v68,
                                 (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_string___);
  v70 = (Il2CppObject *)System_String__Join(v58, v69, 0LL);
  v71 = System_String__Format(v56, v70, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, v59, v71, 0LL);
  RequestBase__addField_32020452((RequestBase_o *)this, (System_String_o *)StringLiteral_23198/*"userEquipId"*/, data, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B2219 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_23401/*"warBoard/setup"*/);
    byte_42B2219 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_23401/*"warBoard/setup"*/, 0LL);
}


void __fastcall WarBoardSetupRequest__requestCompleted(
        WarBoardSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_String_o *v10; // x1

  if ( (byte_42B221B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    sub_B52984(&StringLiteral_23407/*"warBoardData"*/);
    byte_42B221B = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(91, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23407/*"warBoardData"*/,
                             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v9 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23407/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v9,
      (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0

  if ( (byte_42AD755 & 1) == 0 )
  {
    sub_B52984(&WarBoardSetupRequest___c_TypeInfo);
    byte_42AD755 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v1;
  sub_B52920(static_fields);
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