bool __fastcall TreasureDeviceConditionUtil__HasEnoughCriticalStar(
        BattleServantData_o *servantData,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  TreasureDvcLvEntity_o *TDvcLv; // x0
  const MethodInfo *v6; // x3

  v4 = servantData;
  if ( (byte_4353D90 & 1) == 0 )
  {
    servantData = (BattleServantData_o *)sub_B70694(&StringLiteral_12532/*"STAR_HIGHER"*/);
    byte_4353D90 = 1;
  }
  if ( !v4 )
    goto LABEL_11;
  if ( v4->fields.isEnemy )
    return 1;
  if ( !data || (servantData = (BattleServantData_o *)data->fields.changePhaseNotify) == 0LL )
LABEL_11:
    sub_B7076C(servantData, data);
  if ( ChangeBattlePhaseNotify__get_Phase((ChangeBattlePhaseNotify_o *)servantData, 0LL) != 3 )
  {
    TDvcLv = BattleServantData__get_TDvcLv(v4, 0LL);
    if ( TDvcLv )
      return TreasureDeviceConditionUtil__HigherCondition(
               TDvcLv->fields.script,
               (System_String_o *)StringLiteral_12532/*"STAR_HIGHER"*/,
               data->fields.totalCriticalStars,
               v6);
  }
  return 1;
}


bool __fastcall TreasureDeviceConditionUtil__HigherCondition(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v8; // x1
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4353D8F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4353D8F = 1;
  }
  result = 0LL;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 1;
  }
  result = 0LL;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
           (System_Type_o *)key,
           (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_B7076C(0LL, v8);
  v9 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                            Item,
                            Item->klass->vtable[4].methodPtr);
  return !System_Int64__TryParse(v9, &result, 0LL) || (int)result <= val;
}


// attributes: thunk
bool __fastcall TreasureDeviceConditionUtil__IsSatisfyEachCondition(
        BattleServantData_o *servantData,
        BattleData_o *data,
        const MethodInfo *method)
{
  return TreasureDeviceConditionUtil__HasEnoughCriticalStar(servantData, data, method);
}