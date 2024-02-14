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
  __int64 v36; // x1
  __int64 v37; // x2
  WarBoardSetupRequest___c_c *v38; // x0
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__1_0; // x27
  System_String_o *v41; // x26
  System_String_o *v42; // x25
  System_String_o *v43; // x24
  Il2CppObject *v44; // x28
  struct WarBoardSetupRequest___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_String_array *v53; // x0
  Il2CppObject *v54; // x0
  System_String_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  WarBoardSetupRequest___c_c *v58; // x0
  struct WarBoardSetupRequest___c_StaticFields *v59; // x8
  System_String_o *v60; // x24
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__1_1; // x26
  System_String_o *v62; // x25
  System_String_o *v63; // x23
  Il2CppObject *v64; // x27
  struct WarBoardSetupRequest___c_StaticFields *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_String_array *v73; // x0
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  WarBoardSetupRequest___c_c *v78; // x0
  struct WarBoardSetupRequest___c_StaticFields *v79; // x8
  System_String_o *v80; // x23
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__1_2; // x25
  System_String_o *v82; // x24
  System_String_o *v83; // x22
  Il2CppObject *v84; // x26
  struct WarBoardSetupRequest___c_StaticFields *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x0
  System_String_array *v93; // x0
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  int64_t data; // [xsp+8h] [xbp-58h]

  if ( (byte_4216582 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__string___, *(_QWORD *)&stageId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_long__string___, v17);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_string___, v18);
    sub_B0D8A4(&Method_System_Func_long__string___ctor__, v19);
    sub_B0D8A4(&Method_System_Func_int__string___ctor__, v20);
    sub_B0D8A4(&System_Func_int__string__TypeInfo, v21);
    sub_B0D8A4(&System_Func_long__string__TypeInfo, v22);
    sub_B0D8A4(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, v23);
    sub_B0D8A4(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, v24);
    sub_B0D8A4(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, v25);
    sub_B0D8A4(&WarBoardSetupRequest___c_TypeInfo, v26);
    sub_B0D8A4(&StringLiteral_22338/*"stageId"*/, v27);
    sub_B0D8A4(&StringLiteral_22318/*"squareIndexes"*/, v28);
    sub_B0D8A4(&StringLiteral_23084/*"userEquipId"*/, v29);
    sub_B0D8A4(&StringLiteral_23142/*"userSvtEquips"*/, v30);
    sub_B0D8A4(&StringLiteral_21684/*"questPhase"*/, v31);
    sub_B0D8A4(&StringLiteral_23144/*"userSvtIds"*/, v32);
    sub_B0D8A4(&StringLiteral_21682/*"questId"*/, v33);
    sub_B0D8A4(&StringLiteral_705/*","*/, v34);
    sub_B0D8A4(&StringLiteral_15874/*"[{0}]"*/, v35);
    byte_4216582 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22338/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21682/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21684/*"questPhase"*/, questPhase, 0LL);
  v38 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v38 = WarBoardSetupRequest___c_TypeInfo;
  }
  static_fields = v38->static_fields;
  _9__1_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__1_0;
  v41 = (System_String_o *)StringLiteral_705/*","*/;
  v42 = (System_String_o *)StringLiteral_15874/*"[{0}]"*/;
  data = userEquipId;
  v43 = (System_String_o *)StringLiteral_22318/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                       System_Func_int__string__TypeInfo,
                                                                       v36,
                                                                       v37);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__1_0,
      v44,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_0__,
      (const MethodInfo_26145DC *)Method_System_Func_int__string___ctor__);
    v45 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v45->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v45->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__string___);
  v53 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v52,
                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
  v54 = (Il2CppObject *)System_String__Join(v41, v53, 0LL);
  v55 = System_String__Format(v42, v54, 0LL);
  if ( !this )
    sub_B0D97C(v55);
  RequestBase__addField_30435648((RequestBase_o *)this, v43, v55, 0LL);
  v58 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v58 = WarBoardSetupRequest___c_TypeInfo;
  }
  v59 = v58->static_fields;
  v60 = (System_String_o *)StringLiteral_15874/*"[{0}]"*/;
  _9__1_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v59->__9__1_1;
  v62 = (System_String_o *)StringLiteral_705/*","*/;
  v63 = (System_String_o *)StringLiteral_23144/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v58->vtable._0_Equals.methodPtr) & 4) != 0 && !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v59 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v64 = (Il2CppObject *)v59->__9;
    _9__1_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B0D974(
                                                                      System_Func_long__string__TypeInfo,
                                                                      v56,
                                                                      v57);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__1_1,
      v64,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_1__,
      (const MethodInfo_2616D24 *)Method_System_Func_long__string___ctor__);
    v65 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v65->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v65->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71);
  }
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_1B512B0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v73 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v72,
                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
  v74 = (Il2CppObject *)System_String__Join(v62, v73, 0LL);
  v75 = System_String__Format(v60, v74, 0LL);
  RequestBase__addField_30435648((RequestBase_o *)this, v63, v75, 0LL);
  v78 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v78 = WarBoardSetupRequest___c_TypeInfo;
  }
  v79 = v78->static_fields;
  v80 = (System_String_o *)StringLiteral_15874/*"[{0}]"*/;
  _9__1_2 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v79->__9__1_2;
  v82 = (System_String_o *)StringLiteral_705/*","*/;
  v83 = (System_String_o *)StringLiteral_23142/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v79 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v84 = (Il2CppObject *)v79->__9;
    _9__1_2 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B0D974(
                                                                      System_Func_long__string__TypeInfo,
                                                                      v76,
                                                                      v77);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__1_2,
      v84,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_2__,
      (const MethodInfo_2616D24 *)Method_System_Func_long__string___ctor__);
    v85 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v85->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v85->__9__1_2,
      (System_Int32_array **)_9__1_2,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  v92 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_1B512B0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v93 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v92,
                                 (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
  v94 = (Il2CppObject *)System_String__Join(v82, v93, 0LL);
  v95 = System_String__Format(v80, v94, 0LL);
  RequestBase__addField_30435648((RequestBase_o *)this, v83, v95, 0LL);
  RequestBase__addField_30435180((RequestBase_o *)this, (System_String_o *)StringLiteral_23084/*"userEquipId"*/, data, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4216581 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_23287/*"warBoard/setup"*/, v2);
    byte_4216581 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_23287/*"warBoard/setup"*/, 0LL);
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

  if ( (byte_4216583 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_B0D8A4(&JsonManager_TypeInfo, v6);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v8);
    sub_B0D8A4(&StringLiteral_23293/*"warBoardData"*/, v9);
    byte_4216583 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v10 = ResponseCommandKind__SearchData(90, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_30403444(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23293/*"warBoardData"*/,
                             (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23293/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v14,
      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_21137/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_421389A & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardSetupRequest___c_TypeInfo, v1);
    byte_421389A = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardSetupRequest___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardSetupRequest___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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