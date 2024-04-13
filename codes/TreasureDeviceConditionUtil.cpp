bool __fastcall TreasureDeviceConditionUtil__HasEnoughCriticalStar(
        BattleServantData_o *servantData,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantData_o *v5; // x20
  TreasureDvcLvEntity_o *TDvcLv; // x0
  const MethodInfo *v7; // x3

  v5 = servantData;
  if ( (byte_42EACAD & 1) == 0 )
  {
    servantData = (BattleServantData_o *)sub_B5D5C4(&StringLiteral_12511/*"STAR_HIGHER"*/, (_DWORD)data, (_DWORD)method, v3);
    byte_42EACAD = 1;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( v5->fields.isEnemy )
    return 1;
  if ( !data || (servantData = (BattleServantData_o *)data->fields.changePhaseNotify) == 0LL )
LABEL_11:
    sub_B5D69C(servantData, data);
  if ( ChangeBattlePhaseNotify__get_Phase((ChangeBattlePhaseNotify_o *)servantData, 0LL) != 3 )
  {
    TDvcLv = BattleServantData__get_TDvcLv(v5, 0LL);
    if ( TDvcLv )
      return TreasureDeviceConditionUtil__HigherCondition(
               TDvcLv->fields.script,
               (System_String_o *)StringLiteral_12511/*"STAR_HIGHER"*/,
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v11; // x1
  System_String_o *v12; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EACAC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)key, val, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    byte_42EACAC = 1;
  }
  result = 0LL;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 1;
  }
  result = 0LL;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
           (System_Type_o *)key,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_B5D69C(0LL, v11);
  v12 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  return !System_Int64__TryParse(v12, &result, 0LL) || (int)result <= val;
}


// attributes: thunk
bool __fastcall TreasureDeviceConditionUtil__IsSatisfyEachCondition(
        BattleServantData_o *servantData,
        BattleData_o *data,
        const MethodInfo *method)
{
  return TreasureDeviceConditionUtil__HasEnoughCriticalStar(servantData, data, method);
}