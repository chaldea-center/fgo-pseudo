void GeneratedFamilyLinkageIdCacher___ctor(GeneratedFamilyLinkageIdCacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CCA3C6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo);
    byte_4CCA3C6 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_34C1FFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.familyLinkageIdMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v10,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__);
  this->fields.generatorMap = (struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.generatorMap, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *GeneratedFamilyLinkageIdCacher__CreateKeyOfFamilyLinkageIdMap(
        GeneratedFamilyLinkageIdCacher_o *this,
        int32_t uniqueId,
        int32_t linkageIndividuality,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCA3C5 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25327/*"{0}_{1}"*/);
    byte_4CCA3C5 = 1;
  }
  v10 = uniqueId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  v9 = linkageIndividuality;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  return System_String__Format_64073032((System_String_o *)StringLiteral_25327/*"{0}_{1}"*/, v6, v7, 0);
}


FamilyBuffLinkageIdGenerator_o *GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
        GeneratedFamilyLinkageIdCacher_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *v4; // x19
  int32_t uniqueId; // w21
  System_Collections_Generic_Dictionary_int__object__o *generatorMap; // x22
  FamilyBuffLinkageIdGenerator_o *v7; // x23
  const MethodInfo *v8; // x2

  v4 = this;
  if ( (byte_4CCA3C4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_1C713B0(&FamilyBuffLinkageIdGenerator_TypeInfo);
    byte_4CCA3C4 = 1;
  }
  if ( !targetSvtData )
    goto LABEL_10;
  this = (GeneratedFamilyLinkageIdCacher_o *)v4->fields.generatorMap;
  if ( !this )
    goto LABEL_10;
  uniqueId = targetSvtData->fields.uniqueId;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          uniqueId,
          (const MethodInfo_3462488 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__) )
  {
    generatorMap = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.generatorMap;
    v7 = (FamilyBuffLinkageIdGenerator_o *)sub_1C715FC(FamilyBuffLinkageIdGenerator_TypeInfo);
    FamilyBuffLinkageIdGenerator___ctor(v7, targetSvtData, v8);
    if ( !generatorMap )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      generatorMap,
      uniqueId,
      (Il2CppObject *)v7,
      (const MethodInfo_3462280 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__);
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)v4->fields.generatorMap;
  if ( !this )
LABEL_10:
    sub_1C71608(this, targetSvtData);
  return (FamilyBuffLinkageIdGenerator_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                             (System_Collections_Generic_Dictionary_int__object__o *)this,
                                             uniqueId,
                                             (const MethodInfo_34621F4 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__);
}


// local variable allocation has failed, the output may be wrong!
int32_t GeneratedFamilyLinkageIdCacher__GetOrGenerateFamilyLinkageId(
        GeneratedFamilyLinkageIdCacher_o *this,
        int32_t linkageIndividuality,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *v6; // x19
  Il2CppObject *v7; // x21
  const MethodInfo *v8; // x2
  int familyLinkageIdMap; // w9
  GeneratedFamilyLinkageIdCacher_o *v10; // x8

  v6 = this;
  if ( (byte_4CCA3C3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_4CCA3C3 = 1;
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
  v7 = (Il2CppObject *)this;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)v6->fields.familyLinkageIdMap,
         (Il2CppObject *)this,
         (const MethodInfo_34C2BA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    goto LABEL_9;
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
                                               v6,
                                               targetSvtData,
                                               v8);
  if ( !this
    || (familyLinkageIdMap = (int)this->fields.familyLinkageIdMap,
        v10 = this,
        this = (GeneratedFamilyLinkageIdCacher_o *)v6->fields.familyLinkageIdMap,
        LODWORD(v10->fields.familyLinkageIdMap) = familyLinkageIdMap + 1,
        !this) )
  {
LABEL_11:
    sub_1C71608(this, *(_QWORD *)&linkageIndividuality);
  }
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)this,
    v7,
    familyLinkageIdMap + 1,
    (const MethodInfo_34C299C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
LABEL_9:
  this = (GeneratedFamilyLinkageIdCacher_o *)v6->fields.familyLinkageIdMap;
  if ( !this )
    goto LABEL_11;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)this,
           v7,
           (const MethodInfo_34C2930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}