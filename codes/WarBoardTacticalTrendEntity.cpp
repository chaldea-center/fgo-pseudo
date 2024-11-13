void __fastcall WarBoardTacticalTrendEntity___ctor(WarBoardTacticalTrendEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B17272 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B17272 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.value = 0LL;
  *(_QWORD *)&this->fields.lowestMagnification = 0LL;
}


void __fastcall WarBoardTacticalTrendEntity___ctor_41096840(
        WarBoardTacticalTrendEntity_o *this,
        WarBoardTacticalTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B17273 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, cSrc, method);
    byte_4B17273 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1BCAA3C(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_QWORD *)&this->fields.lowestMagnification = *(_QWORD *)&cSrc->fields.lowestMagnification;
}


int32_t __fastcall WarBoardTacticalTrendEntity__CreatePrimaryKey(
        WarBoardTacticalTrendEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall WarBoardTacticalTrendEntity__GetBestMagnification(
        WarBoardTacticalTrendEntity_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.bestMagnification / 100.0;
}


float __fastcall WarBoardTacticalTrendEntity__GetImmobilityMagnification(
        WarBoardTacticalTrendEntity_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.immobilityMagnification / 100.0;
}


float __fastcall WarBoardTacticalTrendEntity__GetLowestMagnification(
        WarBoardTacticalTrendEntity_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.lowestMagnification / 100.0;
}


int32_t __fastcall WarBoardTacticalTrendEntity__GetTrendType(
        WarBoardTacticalTrendEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.type;
}