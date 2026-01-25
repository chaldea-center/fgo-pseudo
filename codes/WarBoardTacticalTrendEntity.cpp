void WarBoardTacticalTrendEntity___ctor(WarBoardTacticalTrendEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF883 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEF883 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0;
  *(_QWORD *)&this->fields.value = 0;
  *(_QWORD *)&this->fields.lowestMagnification = 0;
}


int32_t WarBoardTacticalTrendEntity__CreatePrimaryKey(WarBoardTacticalTrendEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


float WarBoardTacticalTrendEntity__GetBestMagnification(WarBoardTacticalTrendEntity_o *this, const MethodInfo *method)
{
  return (float)this->fields.bestMagnification / 100.0;
}


float WarBoardTacticalTrendEntity__GetImmobilityMagnification(
        WarBoardTacticalTrendEntity_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.immobilityMagnification / 100.0;
}


float WarBoardTacticalTrendEntity__GetLowestMagnification(
        WarBoardTacticalTrendEntity_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.lowestMagnification / 100.0;
}


int32_t WarBoardTacticalTrendEntity__GetTrendType(WarBoardTacticalTrendEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}