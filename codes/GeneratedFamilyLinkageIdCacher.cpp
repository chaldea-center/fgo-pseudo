void __fastcall GeneratedFamilyLinkageIdCacher___ctor(GeneratedFamilyLinkageIdCacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Dictionary_object__int__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_Dictionary_int__object__o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B18CF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo, v9, v10);
    byte_4B18CF6 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v11,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.familyLinkageIdMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo,
                                                                  v18,
                                                                  v19,
                                                                  v20);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__);
  this->fields.generatorMap = (struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.generatorMap, (int64_t)v21, v22, v23, v24, v25, v26, v27);
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
  __int64 v7; // x2
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+8h] [xbp-38h] BYREF
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18CF5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&uniqueId, *(_QWORD *)&linkageIndividuality);
    sub_1BCA7E0(&StringLiteral_25353/*"{0}_{1}"*/, v6, v7);
    byte_4B18CF5 = 1;
  }
  v12 = uniqueId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v11 = linkageIndividuality;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return System_String__Format_62415592((System_String_o *)StringLiteral_25353/*"{0}_{1}"*/, v8, v9, 0LL);
}


FamilyBuffLinkageIdGenerator_o *__fastcall GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
        GeneratedFamilyLinkageIdCacher_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t uniqueId; // w21
  __int64 v12; // x2
  __int64 v13; // x3
  System_Collections_Generic_Dictionary_int__object__o *generatorMap; // x22
  FamilyBuffLinkageIdGenerator_o *v15; // x23
  const MethodInfo *v16; // x2

  v4 = this;
  if ( (byte_4B18CF4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__,
      targetSvtData,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__, v7, v8);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_1BCA7E0(&FamilyBuffLinkageIdGenerator_TypeInfo, v9, v10);
    byte_4B18CF4 = 1;
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
          (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__) )
  {
    generatorMap = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.generatorMap;
    v15 = (FamilyBuffLinkageIdGenerator_o *)sub_1BCAA2C(FamilyBuffLinkageIdGenerator_TypeInfo, targetSvtData, v12, v13);
    FamilyBuffLinkageIdGenerator___ctor(v15, targetSvtData, v16);
    if ( !generatorMap )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      generatorMap,
      uniqueId,
      (Il2CppObject *)v15,
      (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__);
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)v4->fields.generatorMap;
  if ( !this )
LABEL_10:
    sub_1BCAA3C(this, targetSvtData);
  return (FamilyBuffLinkageIdGenerator_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                             (System_Collections_Generic_Dictionary_int__object__o *)this,
                                             uniqueId,
                                             (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x21
  const MethodInfo *v12; // x2
  int familyLinkageIdMap; // w9
  GeneratedFamilyLinkageIdCacher_o *v14; // x8

  v6 = this;
  if ( (byte_4B18CF3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__,
      *(_QWORD *)&linkageIndividuality,
      targetSvtData);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7, v8);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_1BCA7E0(
                                                 &Method_System_Collections_Generic_Dictionary_string__int__set_Item__,
                                                 v9,
                                                 v10);
    byte_4B18CF3 = 1;
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
  v11 = (Il2CppObject *)this;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)v6->fields.familyLinkageIdMap,
         (Il2CppObject *)this,
         (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    goto LABEL_9;
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
                                               v6,
                                               targetSvtData,
                                               v12);
  if ( !this
    || (familyLinkageIdMap = (int)this->fields.familyLinkageIdMap,
        v14 = this,
        this = (GeneratedFamilyLinkageIdCacher_o *)v6->fields.familyLinkageIdMap,
        LODWORD(v14->fields.familyLinkageIdMap) = familyLinkageIdMap + 1,
        !this) )
  {
LABEL_11:
    sub_1BCAA3C(this, *(_QWORD *)&linkageIndividuality);
  }
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)this,
    v11,
    familyLinkageIdMap + 1,
    (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
LABEL_9:
  this = (GeneratedFamilyLinkageIdCacher_o *)v6->fields.familyLinkageIdMap;
  if ( !this )
    goto LABEL_11;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)this,
           v11,
           (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}