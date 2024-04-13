void __fastcall WarBoardTacticalTrendEntity___ctor(WarBoardTacticalTrendEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAC09 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EAC09 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.value = 0LL;
  *(_QWORD *)&this->fields.lowestMagnification = 0LL;
}


void __fastcall WarBoardTacticalTrendEntity___ctor_29189272(
        WarBoardTacticalTrendEntity_o *this,
        WarBoardTacticalTrendEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42EAC0A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42EAC0A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
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