void __fastcall WarBoardSetupRequest___ctor(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  WarBoardSetupRequest___c_c *v36; // x0
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__1_0; // x27
  System_String_o *v39; // x26
  System_String_o *v40; // x25
  System_String_o *v41; // x24
  Il2CppObject *v42; // x28
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
  __int64 v54; // x1
  WarBoardSetupRequest___c_c *v55; // x0
  struct WarBoardSetupRequest___c_StaticFields *v56; // x8
  System_String_o *v57; // x24
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__1_1; // x26
  System_String_o *v59; // x25
  System_String_o *v60; // x23
  Il2CppObject *v61; // x27
  struct WarBoardSetupRequest___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  System_String_array *v70; // x0
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  WarBoardSetupRequest___c_c *v73; // x0
  struct WarBoardSetupRequest___c_StaticFields *v74; // x8
  System_String_o *v75; // x23
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__1_2; // x25
  System_String_o *v77; // x24
  System_String_o *v78; // x22
  Il2CppObject *v79; // x26
  struct WarBoardSetupRequest___c_StaticFields *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x0
  System_String_array *v88; // x0
  Il2CppObject *v89; // x0
  System_String_o *v90; // x0
  int64_t data; // [xsp+8h] [xbp-58h]

  if ( (byte_4189299 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__string___, *(_QWORD *)&stageId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_long__string___, v17);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, v18);
    sub_B2C35C(&Method_System_Func_long__string___ctor__, v19);
    sub_B2C35C(&Method_System_Func_int__string___ctor__, v20);
    sub_B2C35C(&System_Func_int__string__TypeInfo, v21);
    sub_B2C35C(&System_Func_long__string__TypeInfo, v22);
    sub_B2C35C(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, v23);
    sub_B2C35C(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, v24);
    sub_B2C35C(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, v25);
    sub_B2C35C(&WarBoardSetupRequest___c_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_22263/*"stageId"*/, v27);
    sub_B2C35C(&StringLiteral_22243/*"squareIndexes"*/, v28);
    sub_B2C35C(&StringLiteral_23008/*"userEquipId"*/, v29);
    sub_B2C35C(&StringLiteral_23065/*"userSvtEquips"*/, v30);
    sub_B2C35C(&StringLiteral_21614/*"questPhase"*/, v31);
    sub_B2C35C(&StringLiteral_23067/*"userSvtIds"*/, v32);
    sub_B2C35C(&StringLiteral_21612/*"questId"*/, v33);
    sub_B2C35C(&StringLiteral_699/*","*/, v34);
    sub_B2C35C(&StringLiteral_15827/*"[{0}]"*/, v35);
    byte_4189299 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22263/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21612/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21614/*"questPhase"*/, questPhase, 0LL);
  v36 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v36 = WarBoardSetupRequest___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__1_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__1_0;
  v39 = (System_String_o *)StringLiteral_699/*","*/;
  v40 = (System_String_o *)StringLiteral_15827/*"[{0}]"*/;
  data = userEquipId;
  v41 = (System_String_o *)StringLiteral_22243/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v42 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__string__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__1_0,
      v42,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_0__,
      (const MethodInfo_270D828 *)Method_System_Func_int__string___ctor__);
    v43 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v43->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v43->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__string___);
  v51 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v50,
                                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
  v52 = (Il2CppObject *)System_String__Join(v39, v51, 0LL);
  v53 = System_String__Format(v40, v52, 0LL);
  if ( !this )
    sub_B2C434(v53, v54);
  RequestBase__addField_31051928((RequestBase_o *)this, v41, v53, 0LL);
  v55 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v55 = WarBoardSetupRequest___c_TypeInfo;
  }
  v56 = v55->static_fields;
  v57 = (System_String_o *)StringLiteral_15827/*"[{0}]"*/;
  _9__1_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v56->__9__1_1;
  v59 = (System_String_o *)StringLiteral_699/*","*/;
  v60 = (System_String_o *)StringLiteral_23067/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v56 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)v56->__9;
    _9__1_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B2C42C(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__1_1,
      v61,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_1__,
      (const MethodInfo_270FF70 *)Method_System_Func_long__string___ctor__);
    v62 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v62->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v62->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
  }
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_1A95FE4 *)Method_System_Linq_Enumerable_Select_long__string___);
  v70 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v69,
                                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
  v71 = (Il2CppObject *)System_String__Join(v59, v70, 0LL);
  v72 = System_String__Format(v57, v71, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, v60, v72, 0LL);
  v73 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v73 = WarBoardSetupRequest___c_TypeInfo;
  }
  v74 = v73->static_fields;
  v75 = (System_String_o *)StringLiteral_15827/*"[{0}]"*/;
  _9__1_2 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v74->__9__1_2;
  v77 = (System_String_o *)StringLiteral_699/*","*/;
  v78 = (System_String_o *)StringLiteral_23065/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v73);
      v74 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v79 = (Il2CppObject *)v74->__9;
    _9__1_2 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B2C42C(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__1_2,
      v79,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_2__,
      (const MethodInfo_270FF70 *)Method_System_Func_long__string___ctor__);
    v80 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v80->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v80->__9__1_2,
      (System_Int32_array **)_9__1_2,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_1A95FE4 *)Method_System_Linq_Enumerable_Select_long__string___);
  v88 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v87,
                                 (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
  v89 = (Il2CppObject *)System_String__Join(v77, v88, 0LL);
  v90 = System_String__Format(v75, v89, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, v78, v90, 0LL);
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_23008/*"userEquipId"*/, data, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4189298 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23209/*"warBoard/setup"*/, v2);
    byte_4189298 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_23209/*"warBoard/setup"*/, 0LL);
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
  ResponseData_o *v11; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x1

  if ( (byte_418929A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_B2C35C(&JsonManager_TypeInfo, v6);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    sub_B2C35C(&StringLiteral_23215/*"warBoardData"*/, v9);
    byte_418929A = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v10 = ResponseCommandKind__SearchData(90, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_31019724(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23215/*"warBoardData"*/,
                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23215/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v14,
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418671F & 1) == 0 )
  {
    sub_B2C35C(&WarBoardSetupRequest___c_TypeInfo, v1);
    byte_418671F = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardSetupRequest___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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