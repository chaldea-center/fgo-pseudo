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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  WarBoardSetupRequest___c_c *v51; // x0
  System_String_o *v52; // x26
  System_String_o *v53; // x25
  System_Func_T__TResult__o *_9__1_0; // x27
  System_String_o *v55; // x24
  Il2CppObject *v56; // x28
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_String_array *v65; // x0
  Il2CppObject *v66; // x0
  System_String_o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  WarBoardSetupRequest___c_c *v72; // x0
  System_String_o *v73; // x25
  System_String_o *v74; // x24
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v76; // x23
  Il2CppObject *v77; // x27
  struct WarBoardSetupRequest___c_StaticFields *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  System_String_array *v86; // x0
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  WarBoardSetupRequest___c_c *v92; // x0
  System_String_o *v93; // x23
  System_String_o *v94; // x24
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v96; // x22
  Il2CppObject *v97; // x26
  struct WarBoardSetupRequest___c_StaticFields *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x0
  System_String_array *v106; // x0
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_4B17C01 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__string___, *(_QWORD *)&stageId, *(_QWORD *)&questId);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_long__string___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, v16, v17);
    sub_1BCA7E0(&System_Func_long__string__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_int__string__TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, v22, v23);
    sub_1BCA7E0(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, v24, v25);
    sub_1BCA7E0(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, v26, v27);
    sub_1BCA7E0(&WarBoardSetupRequest___c_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_23725/*"stageId"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_23705/*"squareIndexes"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_24641/*"userEquipId"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_24706/*"userSvtEquips"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_22935/*"questPhase"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_24708/*"userSvtIds"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_22933/*"questId"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_16191/*"[{0}]"*/, v46, v47);
    byte_4B17C01 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23725/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22933/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22935/*"questPhase"*/, questPhase, 0LL);
  v51 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo, v48);
    v51 = WarBoardSetupRequest___c_TypeInfo;
  }
  v52 = (System_String_o *)StringLiteral_863/*","*/;
  v53 = (System_String_o *)StringLiteral_16191/*"[{0}]"*/;
  _9__1_0 = (System_Func_T__TResult__o *)v51->static_fields->__9__1_0;
  v55 = (System_String_o *)StringLiteral_23705/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51, v48);
      v51 = WarBoardSetupRequest___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v51->static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__string__TypeInfo, v48, v49, v50);
    System_Func_int__object____ctor(_9__1_0, v56, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v58, v59, v60, v61, v62, v63);
  }
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__string___);
  v65 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v64,
                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
  v66 = (Il2CppObject *)System_String__Join(v52, v65, 0LL);
  v67 = System_String__Format(v53, v66, 0LL);
  if ( !this )
    sub_1BCAA3C(v67, v68);
  RequestBase__addField_41862348((RequestBase_o *)this, v55, v67, 0LL);
  v72 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo, v69);
    v72 = WarBoardSetupRequest___c_TypeInfo;
  }
  v73 = (System_String_o *)StringLiteral_863/*","*/;
  v74 = (System_String_o *)StringLiteral_16191/*"[{0}]"*/;
  _9__1_1 = (System_Func_T__TResult__o *)v72->static_fields->__9__1_1;
  v76 = (System_String_o *)StringLiteral_24708/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72, v69);
      v72 = WarBoardSetupRequest___c_TypeInfo;
    }
    v77 = (Il2CppObject *)v72->static_fields->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_long__string__TypeInfo, v69, v70, v71);
    System_Func_long__object____ctor(_9__1_1, v77, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0LL);
    v78 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v78->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v78->__9__1_1, (int64_t)_9__1_1, v79, v80, v81, v82, v83, v84);
  }
  v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_2F42554 *)Method_System_Linq_Enumerable_Select_long__string___);
  v86 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v85,
                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
  v87 = (Il2CppObject *)System_String__Join(v73, v86, 0LL);
  v88 = System_String__Format(v74, v87, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, v76, v88, 0LL);
  v92 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo, v89);
    v92 = WarBoardSetupRequest___c_TypeInfo;
  }
  v93 = (System_String_o *)StringLiteral_16191/*"[{0}]"*/;
  v94 = (System_String_o *)StringLiteral_863/*","*/;
  _9__1_2 = (System_Func_T__TResult__o *)v92->static_fields->__9__1_2;
  v96 = (System_String_o *)StringLiteral_24706/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( !v92->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v92, v89);
      v92 = WarBoardSetupRequest___c_TypeInfo;
    }
    v97 = (Il2CppObject *)v92->static_fields->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_long__string__TypeInfo, v89, v90, v91);
    System_Func_long__object____ctor(_9__1_2, v97, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0LL);
    v98 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v98->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v98->__9__1_2, (int64_t)_9__1_2, v99, v100, v101, v102, v103, v104);
  }
  v105 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                                (System_Func_TSource__TResult__o *)_9__1_2,
                                                                (const MethodInfo_2F42554 *)Method_System_Linq_Enumerable_Select_long__string___);
  v106 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v105,
                                  (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
  v107 = (Il2CppObject *)System_String__Join(v94, v106, 0LL);
  v108 = System_String__Format(v93, v107, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, v96, v108, 0LL);
  RequestBase__addField_41868688((RequestBase_o *)this, (System_String_o *)StringLiteral_24641/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17C00 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24874/*"warBoard/setup"*/, v3, v4);
    byte_4B17C00 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_24874/*"warBoard/setup"*/, 0LL);
}


void __fastcall WarBoardSetupRequest__requestCompleted(
        WarBoardSetupRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ResponseData_o *v15; // x0
  const MethodInfo *v16; // x2
  ResponseData_o *v17; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x1

  if ( (byte_4B17C02 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5, v6);
    sub_1BCA7E0(&JsonManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_24880/*"warBoardData"*/, v13, v14);
    byte_4B17C02 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v15 = ResponseCommandKind__SearchData(91, responseList, 0LL);
  if ( v15
    && (v17 = v15, ResponseData__checkError(v15, v15->fields.resCode, v16))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v17->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24880/*"warBoardData"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v20 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24880/*"warBoardData"*/,
      v20,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v21);
    v22 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v22 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v22, 0LL);
}


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B17C03 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardSetupRequest___c_TypeInfo, v1, v2);
    byte_4B17C03 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardSetupRequest___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardSetupRequest___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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