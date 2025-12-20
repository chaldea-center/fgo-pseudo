bool TreasureDeviceConditionUtil__HasEnoughCriticalStar(
        BattleServantData_o *servantData,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleServantData_o *v4; // x20
  TreasureDvcLvEntity_o *TDvcLv; // x0
  const MethodInfo *v6; // x3

  v4 = servantData;
  if ( (byte_4D2FD18 & 1) == 0 )
  {
    servantData = (BattleServantData_o *)sub_1C94098(&StringLiteral_12399/*"STAR_HIGHER"*/);
    byte_4D2FD18 = 1;
  }
  if ( !v4 )
    goto LABEL_11;
  if ( v4->fields.isEnemy )
    return 1;
  if ( !data || (servantData = (BattleServantData_o *)data->fields.changePhaseNotify) == 0 )
LABEL_11:
    sub_1C942F0(servantData, data);
  if ( ChangeBattlePhaseNotify__get_Phase((ChangeBattlePhaseNotify_o *)servantData, (const MethodInfo *)data) != 3 )
  {
    TDvcLv = BattleServantData__get_TDvcLv(v4, 0);
    if ( TDvcLv )
      return TreasureDeviceConditionUtil__HigherCondition(
               TDvcLv->fields.script,
               (System_String_o *)StringLiteral_12399/*"STAR_HIGHER"*/,
               data->fields.totalCriticalStars,
               v6);
  }
  return 1;
}


bool TreasureDeviceConditionUtil__HigherCondition(
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        int32_t val,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  System_String_o *v9; // x0
  int64_t result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2FD17 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4D2FD17 = 1;
  }
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 1;
  }
  result = 0;
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    sub_1C942F0(0, v8);
  v9 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                            Item,
                            Item->klass->vtable[3].method);
  return !System_Int64__TryParse(v9, &result, 0) || (int)result <= val;
}


// attributes: thunk
bool TreasureDeviceConditionUtil__IsSatisfyEachCondition(
        BattleServantData_o *servantData,
        BattleData_o *data,
        const MethodInfo *method)
{
  return TreasureDeviceConditionUtil__HasEnoughCriticalStar(servantData, data, method);
}