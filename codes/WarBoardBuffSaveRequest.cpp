void __fastcall WarBoardBuffSaveRequest___ctor(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBuffSaveRequest__beginRequest(
        WarBoardBuffSaveRequest_o *this,
        int32_t stageId,
        WarBoardPieceData_array *pieces,
        WarBoardSquareIndexData_array *squareIndexInfo,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  WarBoardBuffSaveRequest___c_c *v26; // x0
  struct WarBoardBuffSaveRequest___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x24
  System_String_o *v29; // x23
  System_String_o *v30; // x22
  Il2CppObject *v31; // x25
  struct WarBoardBuffSaveRequest___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_String_array *v40; // x0
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x0
  System_Byte_array *v43; // x21
  System_Byte_array *v44; // x21
  System_String_o *v45; // x0
  Il2CppObject *v46; // x0
  System_Byte_array *v47; // x0
  System_Byte_array *v48; // x0
  System_String_o *v49; // x0

  if ( (byte_40F8935 & 1) == 0 )
  {
    sub_B16FFC(&CatAndMouseGame_TypeInfo, *(_QWORD *)&stageId);
    sub_B16FFC(&System_Convert_TypeInfo, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_string___, v11);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__string___ctor__, v12);
    sub_B16FFC(&System_Func_WarBoardPieceData__string__TypeInfo, v13);
    sub_B16FFC(&JsonManager_TypeInfo, v14);
    sub_B16FFC(&Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__, v15);
    sub_B16FFC(&WarBoardBuffSaveRequest___c_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_22171/*"stageId"*/, v17);
    sub_B16FFC(&StringLiteral_22377/*"svtInfo"*/, v18);
    sub_B16FFC(&StringLiteral_22150/*"squareIndexInfo"*/, v19);
    sub_B16FFC(&StringLiteral_698/*","*/, v20);
    sub_B16FFC(&StringLiteral_15764/*"[{0}]"*/, v21);
    byte_40F8935 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22171/*"stageId"*/, stageId, 0LL);
  v26 = WarBoardBuffSaveRequest___c_TypeInfo;
  if ( (BYTE3(WarBoardBuffSaveRequest___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardBuffSaveRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardBuffSaveRequest___c_TypeInfo);
    v26 = WarBoardBuffSaveRequest___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  v29 = (System_String_o *)StringLiteral_698/*","*/;
  v30 = (System_String_o *)StringLiteral_15764/*"[{0}]"*/;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                System_Func_WarBoardPieceData__string__TypeInfo,
                                                                                                v22,
                                                                                                v23,
                                                                                                v24,
                                                                                                v25);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v31,
      Method_WarBoardBuffSaveRequest___c__beginRequest_b__1_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_WarBoardPieceData__string___ctor__);
    v32 = WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
    v32->__9__1_0 = (struct System_Func_WarBoardPieceData__string__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v32->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)pieces,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__string___);
  v40 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                 v39,
                                 (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
  v41 = (Il2CppObject *)System_String__Join(v29, v40, 0LL);
  v42 = (Il2CppObject *)System_String__Format(v30, v41, 0LL);
  v43 = RequestBase__PackToMessagePack((RequestBase_o *)this, v42, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v44 = CatAndMouseGame__CatGame5Bytes(v43, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v45 = System_Convert__ToBase64String(v44, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_22377/*"svtInfo"*/, v45, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v46 = (Il2CppObject *)JsonManager__toJson(&squareIndexInfo->obj, 0, 0, 0LL);
  v47 = RequestBase__PackToMessagePack((RequestBase_o *)this, v46, 0LL);
  v48 = CatAndMouseGame__CatGame5Bytes(v47, 0LL);
  v49 = System_Convert__ToBase64String(v48, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_22150/*"squareIndexInfo"*/, v49, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardBuffSaveRequest__getURL(WarBoardBuffSaveRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40F8934 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23108/*"warBoard/buffSave"*/, v2);
    byte_40F8934 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_23108/*"warBoard/buffSave"*/, 0LL);
}


void __fastcall WarBoardBuffSaveRequest__requestCompleted(
        WarBoardBuffSaveRequest_o *this,
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

  if ( (byte_40F8936 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_B16FFC(&JsonManager_TypeInfo, v6);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v8);
    sub_B16FFC(&StringLiteral_23121/*"warBoardData"*/, v9);
    byte_40F8936 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v10 = ResponseCommandKind__SearchData(91, responseList, 0LL);
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


void __fastcall WarBoardBuffSaveRequest___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7AC6 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardBuffSaveRequest___c_TypeInfo, v1);
    byte_40F7AC6 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardBuffSaveRequest___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardBuffSaveRequest___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall WarBoardBuffSaveRequest___c___ctor(WarBoardBuffSaveRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall WarBoardBuffSaveRequest___c___beginRequest_b__1_0(
        WarBoardBuffSaveRequest___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return WarBoardPieceData__ToJson(x, 0LL);
}