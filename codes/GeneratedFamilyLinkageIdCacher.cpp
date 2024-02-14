void __fastcall GeneratedFamilyLinkageIdCacher___ctor(GeneratedFamilyLinkageIdCacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42180BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    byte_42180BD = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                           method,
                                                                           v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v7,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.familyLinkageIdMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v7;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo,
                                                                                                   v14,
                                                                                                   v15);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v16,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__);
  this->fields.generatorMap = (struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *)v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.generatorMap,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
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

  if ( (byte_42180BC & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&uniqueId);
    sub_B0D8A4(&StringLiteral_23721/*"{0}_{1}"*/, v6);
    byte_42180BC = 1;
  }
  v11 = uniqueId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = linkageIndividuality;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format_43845440((System_String_o *)StringLiteral_23721/*"{0}_{1}"*/, v7, v8, 0LL);
}


FamilyBuffLinkageIdGenerator_o *__fastcall GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
        GeneratedFamilyLinkageIdCacher_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t uniqueId; // w21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *generatorMap; // x22
  FamilyBuffLinkageIdGenerator_o *v12; // x23

  v4 = this;
  if ( (byte_42180BB & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__,
      targetSvtData);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__, v6);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_B0D8A4(&FamilyBuffLinkageIdGenerator_TypeInfo, v7);
    byte_42180BB = 1;
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
          (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__) )
  {
    generatorMap = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v4->fields.generatorMap;
    v12 = (FamilyBuffLinkageIdGenerator_o *)sub_B0D974(FamilyBuffLinkageIdGenerator_TypeInfo, v9, v10);
    FamilyBuffLinkageIdGenerator___ctor(v12, targetSvtData, 0LL);
    if ( !generatorMap )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
      generatorMap,
      uniqueId,
      (WarBoardAIRoute_RouteData_o *)v12,
      (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__);
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)v4->fields.generatorMap;
  if ( !this )
LABEL_10:
    sub_B0D97C(this);
  return (FamilyBuffLinkageIdGenerator_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                             uniqueId,
                                             (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__);
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
  System_Xml_XmlQualifiedName_o *v9; // x20
  const MethodInfo *v10; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *familyLinkageIdMap; // x21

  v6 = this;
  if ( (byte_42180BA & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__,
      *(_QWORD *)&linkageIndividuality);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_B0D8A4(
                                                 &Method_System_Collections_Generic_Dictionary_string__int__set_Item__,
                                                 v8);
    byte_42180BA = 1;
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
  v9 = (System_Xml_XmlQualifiedName_o *)this;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6->fields.familyLinkageIdMap,
         (System_Xml_XmlQualifiedName_o *)this,
         (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    goto LABEL_9;
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
                                               v6,
                                               targetSvtData,
                                               v10);
  if ( !this
    || (familyLinkageIdMap = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6->fields.familyLinkageIdMap,
        this = (GeneratedFamilyLinkageIdCacher_o *)FamilyBuffLinkageIdGenerator__Next(
                                                     (FamilyBuffLinkageIdGenerator_o *)this,
                                                     0LL),
        !familyLinkageIdMap) )
  {
LABEL_11:
    sub_B0D97C(this);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    familyLinkageIdMap,
    v9,
    (int32_t)this,
    (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
LABEL_9:
  this = (GeneratedFamilyLinkageIdCacher_o *)v6->fields.familyLinkageIdMap;
  if ( !this )
    goto LABEL_11;
  return System_Collections_Generic_Dictionary_string__int___get_Item(
           (System_Collections_Generic_Dictionary_string__int__o *)this,
           (System_String_o *)v9,
           (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}