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
  WarBoardSetupRequest___c_c *v31; // x0
  System_String_o *v32; // x26
  System_String_o *v33; // x25
  System_Func_T__TResult__o *_9__1_0; // x27
  System_String_o *v35; // x24
  Il2CppObject *v36; // x28
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_String_array *v45; // x0
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  __int64 v48; // x1
  WarBoardSetupRequest___c_c *v49; // x0
  System_String_o *v50; // x25
  System_String_o *v51; // x24
  System_Func_T__TResult__o *_9__1_1; // x26
  System_String_o *v53; // x23
  Il2CppObject *v54; // x27
  struct WarBoardSetupRequest___c_StaticFields *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_String_array *v63; // x0
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  WarBoardSetupRequest___c_c *v66; // x0
  System_String_o *v67; // x23
  System_String_o *v68; // x24
  System_Func_T__TResult__o *_9__1_2; // x25
  System_String_o *v70; // x22
  Il2CppObject *v71; // x26
  struct WarBoardSetupRequest___c_StaticFields *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  System_String_array *v80; // x0
  Il2CppObject *v81; // x0
  System_String_o *v82; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+8h] [xbp-78h]

  if ( (byte_4B38BD0 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_int__string___, *(_QWORD *)&stageId);
    sub_1BD3458(&Method_System_Linq_Enumerable_Select_long__string___, v14);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_string___, v15);
    sub_1BD3458(&System_Func_long__string__TypeInfo, v16);
    sub_1BD3458(&System_Func_int__string__TypeInfo, v17);
    sub_1BD3458(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, v18);
    sub_1BD3458(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, v19);
    sub_1BD3458(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, v20);
    sub_1BD3458(&WarBoardSetupRequest___c_TypeInfo, v21);
    sub_1BD3458(&StringLiteral_23760/*"stageId"*/, v22);
    sub_1BD3458(&StringLiteral_23740/*"squareIndexes"*/, v23);
    sub_1BD3458(&StringLiteral_24676/*"userEquipId"*/, v24);
    sub_1BD3458(&StringLiteral_24741/*"userSvtEquips"*/, v25);
    sub_1BD3458(&StringLiteral_22968/*"questPhase"*/, v26);
    sub_1BD3458(&StringLiteral_24743/*"userSvtIds"*/, v27);
    sub_1BD3458(&StringLiteral_22966/*"questId"*/, v28);
    sub_1BD3458(&StringLiteral_863/*","*/, v29);
    sub_1BD3458(&StringLiteral_16210/*"[{0}]"*/, v30);
    byte_4B38BD0 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23760/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22966/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22968/*"questPhase"*/, questPhase, 0LL);
  v31 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v31 = WarBoardSetupRequest___c_TypeInfo;
  }
  v32 = (System_String_o *)StringLiteral_863/*","*/;
  v33 = (System_String_o *)StringLiteral_16210/*"[{0}]"*/;
  _9__1_0 = (System_Func_T__TResult__o *)v31->static_fields->__9__1_0;
  v35 = (System_String_o *)StringLiteral_23740/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = WarBoardSetupRequest___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v31->static_fields->__9;
    _9__1_0 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_int__string__TypeInfo);
    System_Func_int__object____ctor(_9__1_0, v36, Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, 0LL);
    static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v38, v39, v40, v41, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_2F60748 *)Method_System_Linq_Enumerable_Select_int__string___);
  v45 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v44,
                                 (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v46 = (Il2CppObject *)System_String__Join(v32, v45, 0LL);
  v47 = System_String__Format(v33, v46, 0LL);
  if ( !this )
    sub_1BD36B4(v47, v48);
  RequestBase__addField_41965080((RequestBase_o *)this, v35, v47, 0LL);
  v49 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v49 = WarBoardSetupRequest___c_TypeInfo;
  }
  v50 = (System_String_o *)StringLiteral_863/*","*/;
  v51 = (System_String_o *)StringLiteral_16210/*"[{0}]"*/;
  _9__1_1 = (System_Func_T__TResult__o *)v49->static_fields->__9__1_1;
  v53 = (System_String_o *)StringLiteral_24743/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = WarBoardSetupRequest___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v49->static_fields->__9;
    _9__1_1 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_1, v54, Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, 0LL);
    v55 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v55->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v55->__9__1_1, (int64_t)_9__1_1, v56, v57, v58, v59, v60, v61);
  }
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               source,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_2F61900 *)Method_System_Linq_Enumerable_Select_long__string___);
  v63 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v62,
                                 (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v64 = (Il2CppObject *)System_String__Join(v50, v63, 0LL);
  v65 = System_String__Format(v51, v64, 0LL);
  RequestBase__addField_41965080((RequestBase_o *)this, v53, v65, 0LL);
  v66 = WarBoardSetupRequest___c_TypeInfo;
  if ( !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v66 = WarBoardSetupRequest___c_TypeInfo;
  }
  v67 = (System_String_o *)StringLiteral_16210/*"[{0}]"*/;
  v68 = (System_String_o *)StringLiteral_863/*","*/;
  _9__1_2 = (System_Func_T__TResult__o *)v66->static_fields->__9__1_2;
  v70 = (System_String_o *)StringLiteral_24741/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( !v66->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v66);
      v66 = WarBoardSetupRequest___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v66->static_fields->__9;
    _9__1_2 = (System_Func_T__TResult__o *)sub_1BD36A4(System_Func_long__string__TypeInfo);
    System_Func_long__object____ctor(_9__1_2, v71, Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, 0LL);
    v72 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v72->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v72->__9__1_2, (int64_t)_9__1_2, v73, v74, v75, v76, v77, v78);
  }
  v79 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_2F61900 *)Method_System_Linq_Enumerable_Select_long__string___);
  v80 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                 v79,
                                 (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_string___);
  v81 = (Il2CppObject *)System_String__Join(v68, v80, 0LL);
  v82 = System_String__Format(v67, v81, 0LL);
  RequestBase__addField_41965080((RequestBase_o *)this, v70, v82, 0LL);
  RequestBase__addField_41971420((RequestBase_o *)this, (System_String_o *)StringLiteral_24676/*"userEquipId"*/, userEquipId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B38BCF & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_24909/*"warBoard/setup"*/, v2);
    byte_4B38BCF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62525248(BaseUrl, (System_String_o *)StringLiteral_24909/*"warBoard/setup"*/, 0LL);
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
  Il2CppObject *v15; // x0
  System_String_o *v16; // x1

  if ( (byte_4B38BD1 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1BD3458(&JsonManager_TypeInfo, v6);
    sub_1BD3458(&ResponseCommandKind_TypeInfo, v7);
    sub_1BD3458(&StringLiteral_22325/*"ng"*/, v8);
    sub_1BD3458(&StringLiteral_24915/*"warBoardData"*/, v9);
    byte_4B38BD1 = 1;
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
             (Il2CppObject *)StringLiteral_24915/*"warBoardData"*/,
             (const MethodInfo_3284314 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24915/*"warBoardData"*/,
      v15,
      (const MethodInfo_3284380 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_22325/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B38BD2 & 1) == 0 )
  {
    sub_1BD3458(&WarBoardSetupRequest___c_TypeInfo, v1);
    byte_4B38BD2 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(WarBoardSetupRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardSetupRequest___c_TypeInfo->static_fields->__9 = (struct WarBoardSetupRequest___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)WarBoardSetupRequest___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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