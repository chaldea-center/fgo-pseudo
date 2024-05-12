void __fastcall GeneratedFamilyLinkageIdCacher___ctor(GeneratedFamilyLinkageIdCacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438F1BA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    byte_438F1BA = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B77694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v3,
    (const MethodInfo_2FDCA14 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.familyLinkageIdMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v10,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__);
  this->fields.generatorMap = (struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.generatorMap,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GeneratedFamilyLinkageIdCacher__CreateKeyOfFamilyLinkageIdMap(
        GeneratedFamilyLinkageIdCacher_o *this,
        int32_t uniqueId,
        int32_t linkageIndividuality,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x20
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+8h] [xbp-18h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438F1B9 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_24131/*"{0}_{1}"*/);
    byte_438F1B9 = 1;
  }
  v11 = uniqueId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, *(_QWORD *)&linkageIndividuality);
  v10 = linkageIndividuality;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v7);
  return System_String__Format_44897472((System_String_o *)StringLiteral_24131/*"{0}_{1}"*/, v6, v8, 0LL);
}


FamilyBuffLinkageIdGenerator_o *__fastcall GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
        GeneratedFamilyLinkageIdCacher_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *v4; // x19
  int32_t uniqueId; // w21
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *generatorMap; // x22
  FamilyBuffLinkageIdGenerator_o *v7; // x23

  v4 = this;
  if ( (byte_438F1B8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_B775C4(&FamilyBuffLinkageIdGenerator_TypeInfo);
    byte_438F1B8 = 1;
  }
  if ( !targetSvtData )
    goto LABEL_10;
  this = (GeneratedFamilyLinkageIdCacher_o *)v4->fields.generatorMap;
  if ( !this )
    goto LABEL_10;
  uniqueId = targetSvtData->fields.uniqueId;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
          uniqueId,
          (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__) )
  {
    generatorMap = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v4->fields.generatorMap;
    v7 = (FamilyBuffLinkageIdGenerator_o *)sub_B77694(FamilyBuffLinkageIdGenerator_TypeInfo);
    FamilyBuffLinkageIdGenerator___ctor(v7, targetSvtData, 0LL);
    if ( !generatorMap )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      generatorMap,
      uniqueId,
      (WarBoardAIRoute_RouteData_o *)v7,
      (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__);
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)v4->fields.generatorMap;
  if ( !this )
LABEL_10:
    sub_B7769C(this, targetSvtData);
  return (FamilyBuffLinkageIdGenerator_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                             uniqueId,
                                             (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GeneratedFamilyLinkageIdCacher__GetOrGenerateFamilyLinkageId(
        GeneratedFamilyLinkageIdCacher_o *this,
        int32_t linkageIndividuality,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *v6; // x19
  System_Xml_XmlQualifiedName_o *v7; // x20
  const MethodInfo *v8; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *familyLinkageIdMap; // x21

  v6 = this;
  if ( (byte_438F1B7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_438F1B7 = 1;
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
  v7 = (System_Xml_XmlQualifiedName_o *)this;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6->fields.familyLinkageIdMap,
         (System_Xml_XmlQualifiedName_o *)this,
         (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    goto LABEL_9;
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
                                               v6,
                                               targetSvtData,
                                               v8);
  if ( !this
    || (familyLinkageIdMap = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6->fields.familyLinkageIdMap,
        this = (GeneratedFamilyLinkageIdCacher_o *)FamilyBuffLinkageIdGenerator__Next(
                                                     (FamilyBuffLinkageIdGenerator_o *)this,
                                                     0LL),
        !familyLinkageIdMap) )
  {
LABEL_11:
    sub_B7769C(this, *(_QWORD *)&linkageIndividuality);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    familyLinkageIdMap,
    v7,
    (int32_t)this,
    (const MethodInfo_2FDD5A0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
LABEL_9:
  this = (GeneratedFamilyLinkageIdCacher_o *)v6->fields.familyLinkageIdMap;
  if ( !this )
    goto LABEL_11;
  return System_Collections_Generic_Dictionary_string__int___get_Item(
           (System_Collections_Generic_Dictionary_string__int__o *)this,
           (System_String_o *)v7,
           (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}