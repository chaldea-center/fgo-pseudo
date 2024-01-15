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
  __int64 v38; // x3
  __int64 v39; // x4
  WarBoardSetupRequest___c_c *v40; // x0
  struct WarBoardSetupRequest___c_StaticFields *static_fields; // x8
  System_Func_int__BattleActionData_SideEffectData__o *_9__1_0; // x27
  System_String_o *v43; // x26
  System_String_o *v44; // x25
  System_String_o *v45; // x24
  Il2CppObject *v46; // x28
  struct WarBoardSetupRequest___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_String_array *v55; // x0
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  WarBoardSetupRequest___c_c *v62; // x0
  struct WarBoardSetupRequest___c_StaticFields *v63; // x8
  System_String_o *v64; // x24
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__1_1; // x26
  System_String_o *v66; // x25
  System_String_o *v67; // x23
  Il2CppObject *v68; // x27
  struct WarBoardSetupRequest___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_String_array *v77; // x0
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  WarBoardSetupRequest___c_c *v84; // x0
  struct WarBoardSetupRequest___c_StaticFields *v85; // x8
  System_String_o *v86; // x23
  System_Func_long__SellServantRequest_UseSvtHash__o *_9__1_2; // x25
  System_String_o *v88; // x24
  System_String_o *v89; // x22
  Il2CppObject *v90; // x26
  struct WarBoardSetupRequest___c_StaticFields *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  System_String_array *v99; // x0
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  int64_t data; // [xsp+8h] [xbp-58h]

  if ( (byte_40FBAAC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__string___, *(_QWORD *)&stageId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_long__string___, v17);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_string___, v18);
    sub_B16FFC(&Method_System_Func_long__string___ctor__, v19);
    sub_B16FFC(&Method_System_Func_int__string___ctor__, v20);
    sub_B16FFC(&System_Func_int__string__TypeInfo, v21);
    sub_B16FFC(&System_Func_long__string__TypeInfo, v22);
    sub_B16FFC(&Method_WarBoardSetupRequest___c__beginRequest_b__1_0__, v23);
    sub_B16FFC(&Method_WarBoardSetupRequest___c__beginRequest_b__1_1__, v24);
    sub_B16FFC(&Method_WarBoardSetupRequest___c__beginRequest_b__1_2__, v25);
    sub_B16FFC(&WarBoardSetupRequest___c_TypeInfo, v26);
    sub_B16FFC(&StringLiteral_22171/*"stageId"*/, v27);
    sub_B16FFC(&StringLiteral_22151/*"squareIndexes"*/, v28);
    sub_B16FFC(&StringLiteral_22915/*"userEquipId"*/, v29);
    sub_B16FFC(&StringLiteral_22972/*"userSvtEquips"*/, v30);
    sub_B16FFC(&StringLiteral_21522/*"questPhase"*/, v31);
    sub_B16FFC(&StringLiteral_22974/*"userSvtIds"*/, v32);
    sub_B16FFC(&StringLiteral_21520/*"questId"*/, v33);
    sub_B16FFC(&StringLiteral_698/*","*/, v34);
    sub_B16FFC(&StringLiteral_15764/*"[{0}]"*/, v35);
    byte_40FBAAC = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22171/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21520/*"questId"*/, questId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21522/*"questPhase"*/, questPhase, 0LL);
  v40 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v40 = WarBoardSetupRequest___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__1_0 = (System_Func_int__BattleActionData_SideEffectData__o *)static_fields->__9__1_0;
  v43 = (System_String_o *)StringLiteral_698/*","*/;
  v44 = (System_String_o *)StringLiteral_15764/*"[{0}]"*/;
  data = userEquipId;
  v45 = (System_String_o *)StringLiteral_22151/*"squareIndexes"*/;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                       System_Func_int__string__TypeInfo,
                                                                       v36,
                                                                       v37,
                                                                       v38,
                                                                       v39);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      _9__1_0,
      v46,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_0__,
      (const MethodInfo_2B66764 *)Method_System_Func_int__string___ctor__);
    v47 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v47->__9__1_0 = (struct System_Func_int__string__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v47->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)squareIndexes,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__string___);
  v55 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v54,
                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
  v56 = (Il2CppObject *)System_String__Join(v43, v55, 0LL);
  v57 = System_String__Format(v44, v56, 0LL);
  if ( !this )
    sub_B170D4();
  RequestBase__addField_30957164((RequestBase_o *)this, v45, v57, 0LL);
  v62 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v62 = WarBoardSetupRequest___c_TypeInfo;
  }
  v63 = v62->static_fields;
  v64 = (System_String_o *)StringLiteral_15764/*"[{0}]"*/;
  _9__1_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v63->__9__1_1;
  v66 = (System_String_o *)StringLiteral_698/*","*/;
  v67 = (System_String_o *)StringLiteral_22974/*"userSvtIds"*/;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v63 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v68 = (Il2CppObject *)v63->__9;
    _9__1_1 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B170CC(
                                                                      System_Func_long__string__TypeInfo,
                                                                      v58,
                                                                      v59,
                                                                      v60,
                                                                      v61);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__1_1,
      v68,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_1__,
      (const MethodInfo_2B68EAC *)Method_System_Func_long__string___ctor__);
    v69 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v69->__9__1_1 = (struct System_Func_long__string__o *)_9__1_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v69->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtIds,
                                                               (System_Func_TSource__TResult__o *)_9__1_1,
                                                               (const MethodInfo_19BFDC0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v77 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v76,
                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
  v78 = (Il2CppObject *)System_String__Join(v66, v77, 0LL);
  v79 = System_String__Format(v64, v78, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, v67, v79, 0LL);
  v84 = WarBoardSetupRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardSetupRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardSetupRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardSetupRequest___c_TypeInfo);
    v84 = WarBoardSetupRequest___c_TypeInfo;
  }
  v85 = v84->static_fields;
  v86 = (System_String_o *)StringLiteral_15764/*"[{0}]"*/;
  _9__1_2 = (System_Func_long__SellServantRequest_UseSvtHash__o *)v85->__9__1_2;
  v88 = (System_String_o *)StringLiteral_698/*","*/;
  v89 = (System_String_o *)StringLiteral_22972/*"userSvtEquips"*/;
  if ( !_9__1_2 )
  {
    if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v84);
      v85 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    }
    v90 = (Il2CppObject *)v85->__9;
    _9__1_2 = (System_Func_long__SellServantRequest_UseSvtHash__o *)sub_B170CC(
                                                                      System_Func_long__string__TypeInfo,
                                                                      v80,
                                                                      v81,
                                                                      v82,
                                                                      v83);
    System_Func_long__SellServantRequest_UseSvtHash____ctor(
      _9__1_2,
      v90,
      Method_WarBoardSetupRequest___c__beginRequest_b__1_2__,
      (const MethodInfo_2B68EAC *)Method_System_Func_long__string___ctor__);
    v91 = WarBoardSetupRequest___c_TypeInfo->static_fields;
    v91->__9__1_2 = (struct System_Func_long__string__o *)_9__1_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v91->__9__1_2,
      (System_Int32_array **)_9__1_2,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
  }
  v98 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__SellServantRequest_UseSvtHash_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)userSvtEquips,
                                                               (System_Func_TSource__TResult__o *)_9__1_2,
                                                               (const MethodInfo_19BFDC0 *)Method_System_Linq_Enumerable_Select_long__string___);
  v99 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v98,
                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
  v100 = (Il2CppObject *)System_String__Join(v88, v99, 0LL);
  v101 = System_String__Format(v86, v100, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, v89, v101, 0LL);
  RequestBase__addField_30956696((RequestBase_o *)this, (System_String_o *)StringLiteral_22915/*"userEquipId"*/, data, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardSetupRequest__getURL(WarBoardSetupRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FBAAB & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23115/*"warBoard/setup"*/, v2);
    byte_40FBAAB = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_23115/*"warBoard/setup"*/, 0LL);
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

  if ( (byte_40FBAAD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_B16FFC(&JsonManager_TypeInfo, v6);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v8);
    sub_B16FFC(&StringLiteral_23121/*"warBoardData"*/, v9);
    byte_40FBAAD = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v10 = ResponseCommandKind__SearchData(90, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_30924960(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23121/*"warBoardData"*/,
                             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23121/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v14,
      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_20980/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}


void __fastcall WarBoardSetupRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7873 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardSetupRequest___c_TypeInfo, v1);
    byte_40F7873 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardSetupRequest___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardSetupRequest___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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