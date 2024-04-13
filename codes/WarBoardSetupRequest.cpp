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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  WarBoardSetupRequest___c_c *v74; // x0
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__1_0; // x27
  System_String_o *v77; // x26
  System_String_o *v78; // x25
  System_String_o *v79; // x24
  Il2CppObject *v80; // x28
  struct WarBoardSetupRequest___c_StaticFields *v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  System_String_array *v89; // x0
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  __int64 v92; // x1
  WarBoardSetupRequest___c_c *v93; // x0
  struct WarBoardSetupRequest___c_StaticFields *v94; // x8
  System_String_o *v95; // x24
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__1_1; // x26
  System_String_o *v97; // x25
  System_String_o *v98; // x23
  Il2CppObject *v99; // x27
  struct WarBoardSetupRequest___c_StaticFields *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  System_String_array *v108; // x0
  Il2CppObject *v109; // x0
  System_String_o *v110; // x0
  WarBoardSetupRequest___c_c *v111; // x0
  struct WarBoardSetupRequest___c_StaticFields *v112; // x8
  System_String_o *v113; // x23
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__1_2; // x25
  System_String_o *v115; // x24
  System_String_o *v116; // x22
  Il2CppObject *v117; // x26
  struct WarBoardSetupRequest___c_StaticFields *v118; // x0
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x0
  System_String_array *v126; // x0
  Il2CppObject *v127; // x0
  System_String_o *v128; // x0
  int64_t data; // [xsp+8h] [xbp-58h]

  if ( (byte_42EAB79 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__string___, stageId, questId, *(_QWORD *)&questPhase);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_long__string___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_long__string___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_int__string___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Func_int__string__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Func_long__string__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, v35, v36, v37);
    sub_B5D5C4(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, v38, v39, v40);
    sub_B5D5C4(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, v41, v42, v43);
    sub_B5D5C4(&WarBoardSetupRequest___c_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_22565/*"stageId"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_22545/*"squareIndexes"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_23313/*"userEquipId"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_23372/*"userSvtEquips"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_21905/*"questPhase"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_23374/*"userSvtIds"*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_21903/*"questId"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_707/*","*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_16018/*"[{0}]"*/, v71, v72, v73);
    byte_42EAB79 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22565/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21903/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21905/*"questPhase"*/, questPhase, 0LL);
  v74 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v74 = WarBoardSetupRequest___c_TypeInfo;
  }
  static_fields = v74->static_fields;
  _9__1_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__1_0;
  v77 = (System_String_o *)StringLiteral_707/*","*/;
  v78 = (System_String_o *)StringLiteral_16018/*"[{0}]"*/;
  data = userEquipId;
  v79 = (System_String_o *)StringLiteral_22545/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v74);
      static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v80 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__string__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__1_0,
      v80,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_0__,
      (const MethodInfo_2C29938 *)Method_System_Func_int__string___ctor__);
    v81 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v81->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v81->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
  }
  v88 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__string___);
  v89 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v88,
                                 (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
  v90 = (Il2CppObject *)System_String__Join(v77, v89, 0LL);
  v91 = System_String__Format(v78, v90, 0LL);
  if ( !this )
    sub_B5D69C(v91, v92);
  RequestBase__addField_32362260((RequestBase_o *)this, v79, v91, 0LL);
  v93 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v93 = WarBoardSetupRequest___c_TypeInfo;
  }
  v94 = v93->static_fields;
  v95 = (System_String_o *)StringLiteral_16018/*"[{0}]"*/;
  _9__1_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v94->__9__1_1;
  v97 = (System_String_o *)StringLiteral_707/*","*/;
  v98 = (System_String_o *)StringLiteral_23374/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v93);
      v94 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v99 = (Il2CppObject *)v94->__9;
    _9__1_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B5D694(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__1_1,
      v99,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_1__,
      (const MethodInfo_2C2D03C *)Method_System_Func_long__string___ctor__);
    v100 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v100->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v100->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
  }
  v107 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)userSvtIds,
                                                                (System_Func_TSource__TResult__o *)_9__1_1,
                                                                (const MethodInfo_1CB27F0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v108 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v107,
                                  (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
  v109 = (Il2CppObject *)System_String__Join(v97, v108, 0LL);
  v110 = System_String__Format(v95, v109, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, v98, v110, 0LL);
  v111 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v111 = WarBoardSetupRequest___c_TypeInfo;
  }
  v112 = v111->static_fields;
  v113 = (System_String_o *)StringLiteral_16018/*"[{0}]"*/;
  _9__1_2 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v112->__9__1_2;
  v115 = (System_String_o *)StringLiteral_707/*","*/;
  v116 = (System_String_o *)StringLiteral_23372/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( (BYTE3(v111->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v111);
      v112 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v117 = (Il2CppObject *)v112->__9;
    _9__1_2 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B5D694(System_Func_long__string__TypeInfo);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__1_2,
      v117,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_2__,
      (const MethodInfo_2C2D03C *)Method_System_Func_long__string___ctor__);
    v118 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v118->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v118->__9__1_2,
      (System_Int32_array **)_9__1_2,
      v119,
      v120,
      v121,
      v122,
      v123,
      v124);
  }
  v125 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                                (System_Func_TSource__TResult__o *)_9__1_2,
                                                                (const MethodInfo_1CB27F0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v126 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v125,
                                  (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
  v127 = (Il2CppObject *)System_String__Join(v115, v126, 0LL);
  v128 = System_String__Format(v113, v127, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, v116, v128, 0LL);
  RequestBase__addField_32361792((RequestBase_o *)this, (System_String_o *)StringLiteral_23313/*"userEquipId"*/, data, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EAB78 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_23518/*"warBoard/setup"*/, v4, v5, v6);
    byte_42EAB78 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_23518/*"warBoard/setup"*/, 0LL);
}


void __fastcall WarBoardSetupRequest__requestCompleted(
        WarBoardSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  ResponseData_o *v21; // x0
  ResponseData_o *v22; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v25; // x0
  System_String_o *v26; // x1

  if ( (byte_42EAB7A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      (_DWORD)responseList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v6, v7, v8);
    sub_B5D5C4(&JsonManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_23524/*"warBoardData"*/, v18, v19, v20);
    byte_42EAB7A = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v21 = ResponseCommandKind__SearchData(91, responseList, 0LL);
  if ( v21
    && (v22 = v21, ResponseData__checkError_29500464(v21, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v22->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23524/*"warBoardData"*/,
                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v25 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23524/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v25,
      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v26 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v26 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v26, 0LL);
}


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FCE & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardSetupRequest___c_TypeInfo, v1, v2, v3);
    byte_42E5FCE = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v4;
  sub_B5D560(static_fields);
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