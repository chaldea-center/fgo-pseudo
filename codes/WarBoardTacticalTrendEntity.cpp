void __fastcall WarBoardTacticalTrendEntity___ctor(WarBoardTacticalTrendEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FBB3A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FBB3A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.value = 0LL;
  *(_QWORD *)&this->fields.lowestMagnification = 0LL;
}


void __fastcall WarBoardTacticalTrendEntity___ctor_28238188(
        WarBoardTacticalTrendEntity_o *this,
        WarBoardTacticalTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  if ( (byte_40FBB3B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_40FBB3B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B170D4();
  this->fields.id = cSrc->fields.id;
  this->fields.type = cSrc->fields.type;
  this->fields.value = cSrc->fields.value;
  this->fields.bestMagnification = cSrc->fields.bestMagnification;
  this->fields.lowestMagnification = cSrc->fields.lowestMagnification;
  this->fields.immobilityMagnification = cSrc->fields.immobilityMagnification;
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