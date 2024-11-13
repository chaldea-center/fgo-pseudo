bool __fastcall TreasureDeviceConditionUtil__HasEnoughCriticalStar(
        BattleServantData_o *servantData,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  TreasureDvcLvEntity_o *TDvcLv; // x0
  const MethodInfo *v6; // x3

  v4 = servantData;
  if ( (byte_4B18F54 & 1) == 0 )
  {
    servantData = (BattleServantData_o *)sub_1BCA7E0(&StringLiteral_12412/*"STAR_HIGHER"*/, data, method);
    byte_4B18F54 = 1;
  }
  if ( !v4 )
    goto LABEL_11;
  if ( v4->fields.isEnemy )
    return 1;
  if ( !data || (servantData = (BattleServantData_o *)data->fields.changePhaseNotify) == 0LL )
LABEL_11:
    sub_1BCAA3C(servantData, data);
  if ( ChangeBattlePhaseNotify__get_Phase((ChangeBattlePhaseNotify_o *)servantData, (const MethodInfo *)data) != 3 )
  {
    TDvcLv = BattleServantData__get_TDvcLv(v4, 0LL);
    if ( TDvcLv )
      return TreasureDeviceConditionUtil__HigherCondition(
               TDvcLv->fields.script,
               (System_String_o *)StringLiteral_12412/*"STAR_HIGHER"*/,
               data->fields.totalCriticalStars,
               v6);
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureDeviceConditionUtil__HigherCondition(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18F53 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, *(_QWORD *)&val);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    byte_4B18F53 = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 1;
  }
  result = 0LL;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1BCAA3C(0LL, v10);
  v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                             Item,
                             Item->klass->vtable[4].methodPtr);
  return !System_Int64__TryParse(v11, &result, 0LL) || (int)result <= val;
}


// attributes: thunk
bool __fastcall TreasureDeviceConditionUtil__IsSatisfyEachCondition(
        BattleServantData_o *servantData,
        BattleData_o *data,
        const MethodInfo *method)
{
  return TreasureDeviceConditionUtil__HasEnoughCriticalStar(servantData, data, method);
}