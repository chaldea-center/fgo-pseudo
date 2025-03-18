void __fastcall ServantCardAddEntity___ctor(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2262B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C2262B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantCardAddEntity__CreatePK(int32_t svtId, int32_t cardId, const MethodInfo *method)
{
  if ( (byte_4C22623 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&cardId);
    byte_4C22623 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           cardId,
           (const MethodInfo_2FEE38C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantCardAddEntity__CreatePrimaryKey(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantCardAddEntity__CreatePK(this->fields.svtId, this->fields.cardId, v2);
}


float __fastcall ServantCardAddEntity__GetAttackNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22625 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17281/*"btn_txt_up"*/, method);
    byte_4C22625 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_17281/*"btn_txt_up"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDamageRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22624 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18796/*"eventTowerId"*/, method);
    byte_4C22624 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18796/*"eventTowerId"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDefenseNpRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22626 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18903/*"event_rewardget_"*/, method);
    byte_4C22626 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_18903/*"event_rewardget_"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetDropStarRate(ServantCardAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22627 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19037/*"family"*/, method);
    byte_4C22627 = 1;
  }
  return EntityScriptUtil__GetMillesimal(this->fields.script, (System_String_o *)StringLiteral_19037/*"family"*/, 1.0, 0LL);
}


float __fastcall ServantCardAddEntity__GetMillesimal(
        ServantCardAddEntity_o *this,
        System_String_o *key,
        float defaultValue,
        const MethodInfo *method)
{
  return EntityScriptUtil__GetMillesimal(this->fields.script, key, defaultValue, 0LL);
}


int32_t __fastcall ServantCardAddEntity__GetPositionDamageRatesSlideType(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2262A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23040/*"sku_details_response_consolidator_error"*/, method);
    byte_4C2262A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23040/*"sku_details_response_consolidator_error"*/, 0, 0LL);
}


bool __fastcall ServantCardAddEntity__IsForceAttackFunctionTargetAll(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22628 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_6941/*"GetUVChannel called for bad uvIndex"*/, method);
    byte_4C22628 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_6941/*"GetUVChannel called for bad uvIndex"*/, 0LL);
}


bool __fastcall ServantCardAddEntity__IsSlidePositionDamageRates(
        ServantCardAddEntity_o *this,
        const MethodInfo *method)
{
  return ServantCardAddEntity__GetPositionDamageRatesSlideType(this, method) != 0;
}


bool __fastcall ServantCardAddEntity__TryGetPositionDamageRates(
        ServantCardAddEntity_o *this,
        System_Int32_array **positionDamageRates,
        const MethodInfo *method)
{
  if ( (byte_4C22629 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23039/*"skuDetails"*/, positionDamageRates);
    byte_4C22629 = 1;
  }
  return EntityScriptUtil__TryGetIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_23039/*"skuDetails"*/,
           positionDamageRates,
           0LL);
}