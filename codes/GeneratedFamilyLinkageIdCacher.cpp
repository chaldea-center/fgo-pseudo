void __fastcall GeneratedFamilyLinkageIdCacher___ctor(GeneratedFamilyLinkageIdCacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__int__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_int__object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FED61 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo, v6);
    byte_49FED61 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v7,
    (const MethodInfo_316FCFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.familyLinkageIdMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__TypeInfo,
                                                                  v10,
                                                                  v11);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v12,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator___ctor__);
  this->fields.generatorMap = (struct System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.generatorMap, (int32_t)v12, v13, v14);
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
  int32_t v10; // [xsp+8h] [xbp-38h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FED60 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&uniqueId);
    sub_1B640C8(&StringLiteral_24997/*"{0}_{1}"*/, v6);
    byte_49FED60 = 1;
  }
  v11 = uniqueId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = linkageIndividuality;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format_61389768((System_String_o *)StringLiteral_24997/*"{0}_{1}"*/, v7, v8, 0LL);
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
  System_Collections_Generic_Dictionary_int__object__o *generatorMap; // x22
  FamilyBuffLinkageIdGenerator_o *v12; // x23
  const MethodInfo *v13; // x2

  v4 = this;
  if ( (byte_49FED5F & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__,
      targetSvtData);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__, v6);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_1B640C8(&FamilyBuffLinkageIdGenerator_TypeInfo, v7);
    byte_49FED5F = 1;
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
          (const MethodInfo_3123B78 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__ContainsKey__) )
  {
    generatorMap = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.generatorMap;
    v12 = (FamilyBuffLinkageIdGenerator_o *)sub_1B64314(FamilyBuffLinkageIdGenerator_TypeInfo, v9, v10);
    FamilyBuffLinkageIdGenerator___ctor(v12, targetSvtData, v13);
    if ( !generatorMap )
      goto LABEL_10;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      generatorMap,
      uniqueId,
      (Il2CppObject *)v12,
      (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__set_Item__);
  }
  this = (GeneratedFamilyLinkageIdCacher_o *)v4->fields.generatorMap;
  if ( !this )
LABEL_10:
    sub_1B64324(this);
  return (FamilyBuffLinkageIdGenerator_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                             (System_Collections_Generic_Dictionary_int__object__o *)this,
                                             uniqueId,
                                             (const MethodInfo_31238E4 *)Method_System_Collections_Generic_Dictionary_int__FamilyBuffLinkageIdGenerator__get_Item__);
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
  if ( (byte_49FED5E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__,
      *(_QWORD *)&linkageIndividuality);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v7);
    this = (GeneratedFamilyLinkageIdCacher_o *)sub_1B640C8(
                                                 &Method_System_Collections_Generic_Dictionary_string__int__set_Item__,
                                                 v8);
    byte_49FED5E = 1;
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
         (const MethodInfo_31708A4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
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
    sub_1B64324(this);
  }
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)this,
    v9,
    familyLinkageIdMap + 1,
    (const MethodInfo_317069C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
LABEL_9:
  this = (GeneratedFamilyLinkageIdCacher_o *)v6->fields.familyLinkageIdMap;
  if ( !this )
    goto LABEL_11;
  return System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)this,
           v9,
           (const MethodInfo_3170630 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
}