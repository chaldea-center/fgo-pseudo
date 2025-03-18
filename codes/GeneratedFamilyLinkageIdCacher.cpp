void __fastcall GeneratedFamilyLinkageIdCacher___ctor(GeneratedFamilyLinkageIdCacher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__int__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_Dictionary_int__object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C24BB8 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo, v5);
    byte_4C24BB8 = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v6,
    (const MethodInfo_334BECC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.familyLinkageIdMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v6;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__);
  this->fields.generatorMap = (struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *)v13;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.generatorMap, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GeneratedFamilyLinkageIdCacher__CreateKeyOfFamilyLinkageIdMap(
        GeneratedFamilyLinkageIdCacher_o *this,
        int32_t uniqueId,
        int32_t linkageIndividuality,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+8h] [xbp-38h] BYREF
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C24BB7 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1C3B764(&StringLiteral_25613, v7);
    byte_4C24BB7 = 1;
  }
  v15 = uniqueId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, *(_QWORD *)&linkageIndividuality, method, v4);
  v14 = linkageIndividuality;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return System_String__Format_63382984((System_String_o *)StringLiteral_25613, v8, v12, 0LL);
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
  System_Collections_Generic_Dictionary_int__object__o *generatorMap; // x22
  FamilyBuffLinkageIdGenerator_o *v10; // x23
  const MethodInfo *v11; // x2

  v4 = this;
  if ( (byte_4C24BB6 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__,
      targetSvtData);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__, v6);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_1C3B764(&FamilyBuffLinkageIdGenerator_TypeInfo, v7);
    byte_4C24BB6 = 1;
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
          (const MethodInfo_32F4D90 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__) )
  {
    generatorMap = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.generatorMap;
    v10 = (FamilyBuffLinkageIdGenerator_o *)sub_1C3B9B0(FamilyBuffLinkageIdGenerator_TypeInfo);
    FamilyBuffLinkageIdGenerator___ctor(v10, targetSvtData, v11);
    if ( !generatorMap )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      generatorMap,
      uniqueId,
      (Il2CppObject *)v10,
      (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__);
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)v4->fields.generatorMap;
  if ( !this )
LABEL_10:
    sub_1C3B9C0(this, targetSvtData);
  return (FamilyBuffLinkageIdGenerator_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                             (System_Collections_Generic_Dictionary_int__object__o *)this,
                                             uniqueId,
                                             (const MethodInfo_32F4AFC *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__);
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
  Il2CppObject *v9; // x21
  const MethodInfo *v10; // x2
  int familyLinkageIdMap; // w9
  GeneratedFamilyLinkageIdCacher_o *v12; // x8

  v6 = this;
  if ( (byte_4C24BB5 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__,
      *(_QWORD *)&linkageIndividuality);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_1C3B764(
                                                 &Method_System_Collections_Generic_Dictionary_string__int__set_Item__,
                                                 v8);
    byte_4C24BB5 = 1;
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
  v9 = (Il2CppObject *)this;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)v6->fields.familyLinkageIdMap,
         (Il2CppObject *)this,
         (const MethodInfo_334CA74 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    goto LABEL_9;
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
                                               v6,
                                               targetSvtData,
                                               v10);
  if ( !this
    || (familyLinkageIdMap = (int)this->fields.familyLinkageIdMap,
        v12 = this,
        this = (GeneratedFamilyLinkageIdCacher_o *)v6->fields.familyLinkageIdMap,
        LODWORD(v12->fields.familyLinkageIdMap) = familyLinkageIdMap + 1,
        !this) )
  {
LABEL_11:
    sub_1C3B9C0(this, *(_QWORD *)&linkageIndividuality);
  }
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)this,
    v9,
    familyLinkageIdMap + 1,
    (const MethodInfo_334C86C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
LABEL_9:
  this = (GeneratedFamilyLinkageIdCacher_o *)v6->fields.familyLinkageIdMap;
  if ( !this )
    goto LABEL_11;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)this,
           v9,
           (const MethodInfo_334C800 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}