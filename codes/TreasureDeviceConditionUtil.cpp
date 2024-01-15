bool __fastcall TreasureDeviceConditionUtil__HasEnoughCriticalStar(
        BattleServantData_o *servantData,
        BattleData_o *data,
        const MethodInfo *method)
{
  ChangeBattlePhaseNotify_o *changePhaseNotify; // x0
  TreasureDvcLvEntity_o *TDvcLv; // x0
  const MethodInfo *v7; // x3

  if ( (byte_40FB876 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12308/*"STAR_HIGHER"*/, data);
    byte_40FB876 = 1;
  }
  if ( !servantData )
    goto LABEL_11;
  if ( servantData->fields.isEnemy )
    return 1;
  if ( !data || (changePhaseNotify = data->fields.changePhaseNotify) == 0LL )
LABEL_11:
    sub_B170D4();
  if ( ChangeBattlePhaseNotify__get_Phase(changePhaseNotify, 0LL) != 3 )
  {
    TDvcLv = BattleServantData__get_TDvcLv(servantData, 0LL);
    if ( TDvcLv )
      return TreasureDeviceConditionUtil__HigherCondition(
               TDvcLv->fields.script,
               (System_String_o *)StringLiteral_12308/*"STAR_HIGHER"*/,
               data->fields.totalCriticalStars,
               v7);
  }
  return 1;
}


bool __fastcall TreasureDeviceConditionUtil__HigherCondition(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FB875 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    byte_40FB875 = 1;
  }
  result = 0LL;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 1;
  }
  result = 0LL;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
           (System_Type_o *)key,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_B170D4();
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