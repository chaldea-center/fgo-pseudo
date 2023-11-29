void __fastcall GeneratedFamilyLinkageIdCacher___ctor(GeneratedFamilyLinkageIdCacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FF55C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v8);
    byte_40FF55C = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v9,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.familyLinkageIdMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
  v20 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo,
                                                                                                   v16,
                                                                                                   v17,
                                                                                                   v18,
                                                                                                   v19);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v20,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__);
  this->fields.generatorMap = (struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *)v20;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.generatorMap,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GeneratedFamilyLinkageIdCacher__CreateKeyOfFamilyLinkageIdMap(
        GeneratedFamilyLinkageIdCacher_o *this,
        int32_t uniqueId,
        int32_t linkageIndividuality,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *v7; // x20
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+8h] [xbp-18h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FF55B & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B16FFC(&StringLiteral_23549, v6);
    byte_40FF55B = 1;
  }
  v11 = uniqueId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = linkageIndividuality;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format_43739268((System_String_o *)StringLiteral_23549, v7, v8, 0LL);
}


FamilyBuffLinkageIdGenerator_o *__fastcall GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
        GeneratedFamilyLinkageIdCacher_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *generatorMap; // x0
  int32_t uniqueId; // w21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *v14; // x22
  FamilyBuffLinkageIdGenerator_o *v15; // x23
  struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *v16; // x0

  if ( (byte_40FF55A & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__,
      targetSvtData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__, v6);
    sub_B16FFC(&FamilyBuffLinkageIdGenerator_TypeInfo, v7);
    byte_40FF55A = 1;
  }
  if ( !targetSvtData )
    goto LABEL_10;
  generatorMap = this->fields.generatorMap;
  if ( !generatorMap )
    goto LABEL_10;
  uniqueId = targetSvtData->fields.uniqueId;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)generatorMap,
          uniqueId,
          (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__) )
  {
    v14 = this->fields.generatorMap;
    v15 = (FamilyBuffLinkageIdGenerator_o *)sub_B170CC(FamilyBuffLinkageIdGenerator_TypeInfo, v10, v11, v12, v13);
    FamilyBuffLinkageIdGenerator___ctor(v15, targetSvtData, 0LL);
    if ( !v14 )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v14,
      uniqueId,
      (WarBoardAIRoute_RouteData_o *)v15,
      (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__);
  }
  v16 = this->fields.generatorMap;
  if ( !v16 )
LABEL_10:
    sub_B170D4();
  return (FamilyBuffLinkageIdGenerator_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v16,
                                             uniqueId,
                                             (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GeneratedFamilyLinkageIdCacher__GetOrGenerateFamilyLinkageId(
        GeneratedFamilyLinkageIdCacher_o *this,
        int32_t linkageIndividuality,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *KeyOfFamilyLinkageIdMap; // x0
  System_Xml_XmlQualifiedName_o *v10; // x20
  const MethodInfo *v11; // x2
  FamilyBuffLinkageIdGenerator_o *FamilyBuffLinkageIdGenerator; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *familyLinkageIdMap; // x21
  int32_t v14; // w0
  System_Collections_Generic_Dictionary_string__int__o *v15; // x0

  v6 = this;
  if ( (byte_40FF559 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__,
      *(_QWORD *)&linkageIndividuality);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_B16FFC(
                                                 &Method_System_Collections_Generic_Dictionary_string__int__set_Item__,
                                                 v8);
    byte_40FF559 = 1;
  }
  if ( !targetSvtData )
    goto LABEL_11;
  KeyOfFamilyLinkageIdMap = GeneratedFamilyLinkageIdCacher__CreateKeyOfFamilyLinkageIdMap(
                              this,
                              targetSvtData->fields.uniqueId,
                              linkageIndividuality,
                              method);
  if ( !v6->fields.familyLinkageIdMap )
    goto LABEL_11;
  v10 = (System_Xml_XmlQualifiedName_o *)KeyOfFamilyLinkageIdMap;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6->fields.familyLinkageIdMap,
         (System_Xml_XmlQualifiedName_o *)KeyOfFamilyLinkageIdMap,
         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    goto LABEL_9;
  }
  FamilyBuffLinkageIdGenerator = GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
                                   v6,
                                   targetSvtData,
                                   v11);
  if ( !FamilyBuffLinkageIdGenerator
    || (familyLinkageIdMap = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6->fields.familyLinkageIdMap,
        v14 = FamilyBuffLinkageIdGenerator__Next(FamilyBuffLinkageIdGenerator, 0LL),
        !familyLinkageIdMap) )
  {
LABEL_11:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    familyLinkageIdMap,
    v10,
    v14,
    (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
LABEL_9:
  v15 = v6->fields.familyLinkageIdMap;
  if ( !v15 )
    goto LABEL_11;
  return System_Collections_Generic_Dictionary_string__int___get_Item(
           v15,
           (System_String_o *)v10,
           (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}