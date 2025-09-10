void WarBoardTacticalTrendEntity___ctor(WarBoardTacticalTrendEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C284F7 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C284F7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0;
  *(_QWORD *)&this->fields.value = 0;
  *(_QWORD *)&this->fields.lowestMagnification = 0;
}


void WarBoardTacticalTrendEntity___ctor_43106072(
        WarBoardTacticalTrendEntity_o *this,
        WarBoardTacticalTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C284F8 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C284F8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C2D6EC(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_QWORD *)&this->fields.lowestMagnification = *(_QWORD *)&cSrc->fields.lowestMagnification;
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