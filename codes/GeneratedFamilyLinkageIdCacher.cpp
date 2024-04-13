void __fastcall GeneratedFamilyLinkageIdCacher___ctor(GeneratedFamilyLinkageIdCacher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EC66A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v11, v12, v13);
    byte_42EC66A = 1;
  }
  v14 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v14,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.familyLinkageIdMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v14;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v21,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__);
  this->fields.generatorMap = (struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *)v21;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.generatorMap,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall GeneratedFamilyLinkageIdCacher__CreateKeyOfFamilyLinkageIdMap(
        GeneratedFamilyLinkageIdCacher_o *this,
        int32_t uniqueId,
        int32_t linkageIndividuality,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *v9; // x20
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+8h] [xbp-18h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EC669 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, uniqueId, linkageIndividuality, method);
    sub_B5D5C4(&StringLiteral_23955/*"{0}_{1}"*/, v6, v7, v8);
    byte_42EC669 = 1;
  }
  v13 = uniqueId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  v12 = linkageIndividuality;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format_44573324((System_String_o *)StringLiteral_23955/*"{0}_{1}"*/, v9, v10, 0LL);
}


FamilyBuffLinkageIdGenerator_o *__fastcall GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
        GeneratedFamilyLinkageIdCacher_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  GeneratedFamilyLinkageIdCacher_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t uniqueId; // w21
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *generatorMap; // x22
  FamilyBuffLinkageIdGenerator_o *v17; // x23

  v5 = this;
  if ( (byte_42EC668 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__,
      (_DWORD)targetSvtData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__,
      v9,
      v10,
      v11);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_B5D5C4(&FamilyBuffLinkageIdGenerator_TypeInfo, v12, v13, v14);
    byte_42EC668 = 1;
  }
  if ( !targetSvtData )
    goto LABEL_10;
  this = (GeneratedFamilyLinkageIdCacher_o *)v5->fields.generatorMap;
  if ( !this )
    goto LABEL_10;
  uniqueId = targetSvtData->fields.uniqueId;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
          uniqueId,
          (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__) )
  {
    generatorMap = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v5->fields.generatorMap;
    v17 = (FamilyBuffLinkageIdGenerator_o *)sub_B5D694(FamilyBuffLinkageIdGenerator_TypeInfo);
    FamilyBuffLinkageIdGenerator___ctor(v17, targetSvtData, 0LL);
    if ( !generatorMap )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      generatorMap,
      uniqueId,
      (WarBoardAIRoute_RouteData_o *)v17,
      (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__);
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)v5->fields.generatorMap;
  if ( !this )
LABEL_10:
    sub_B5D69C(this, targetSvtData);
  return (FamilyBuffLinkageIdGenerator_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                             uniqueId,
                                             (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GeneratedFamilyLinkageIdCacher__GetOrGenerateFamilyLinkageId(
        GeneratedFamilyLinkageIdCacher_o *this,
        int32_t linkageIndividuality,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Xml_XmlQualifiedName_o *v13; // x20
  const MethodInfo *v14; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *familyLinkageIdMap; // x21

  v6 = this;
  if ( (byte_42EC667 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__,
      linkageIndividuality,
      (_DWORD)targetSvtData,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7, v8, v9);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_Dictionary_string__int__set_Item__,
                                                 v10,
                                                 v11,
                                                 v12);
    byte_42EC667 = 1;
  }
  if ( !targetSvtData )
    goto LABEL_11;
  this = (GeneratedFamilyLinkageIdCacher_o *)GeneratedFamilyLinkageIdCacher__CreateKeyOfFamilyLinkageIdMap(
                                               this,
                                               targetSvtData->fields.uniqueId,
                                               linkageIndividuality,
                                               method);
  if ( !v6->fields.familyLinkageIdMap )
    goto LABEL_11;
  v13 = (System_Xml_XmlQualifiedName_o *)this;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6->fields.familyLinkageIdMap,
         (System_Xml_XmlQualifiedName_o *)this,
         (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    goto LABEL_9;
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
                                               v6,
                                               targetSvtData,
                                               v14);
  if ( !this
    || (familyLinkageIdMap = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6->fields.familyLinkageIdMap,
        this = (GeneratedFamilyLinkageIdCacher_o *)FamilyBuffLinkageIdGenerator__Next(
                                                     (FamilyBuffLinkageIdGenerator_o *)this,
                                                     0LL),
        !familyLinkageIdMap) )
  {
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&linkageIndividuality);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    familyLinkageIdMap,
    v13,
    (int32_t)this,
    (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
LABEL_9:
  this = (GeneratedFamilyLinkageIdCacher_o *)v6->fields.familyLinkageIdMap;
  if ( !this )
    goto LABEL_11;
  return System_Collections_Generic_Dictionary_string__int___get_Item(
           (System_Collections_Generic_Dictionary_string__int__o *)this,
           (System_String_o *)v13,
           (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}