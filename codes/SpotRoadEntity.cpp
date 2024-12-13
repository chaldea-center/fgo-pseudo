void __fastcall SpotRoadEntity___ctor(SpotRoadEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B37C69 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_int___ctor__, method);
    byte_4B37C69 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31D1CF0 *)Method_DataEntityBase_int___ctor__);
}


void __fastcall SpotRoadEntity___ctor_40797772(
        SpotRoadEntity_o *this,
        SpotRoadEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B37C6A & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_4B37C6A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31D1CF0 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1BD36B4(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_OWORD *)&this->fields.type = *(_OWORD *)&cSrc->fields.type;
  this->fields.dispTargetValue = cSrc->fields.dispTargetValue;
  *(_QWORD *)&this->fields.activeCondType = *(_QWORD *)&cSrc->fields.activeCondType;
  this->fields.activeTargetValue = cSrc->fields.activeTargetValue;
}


int32_t __fastcall SpotRoadEntity__CreatePrimaryKey(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall SpotRoadEntity__getActiveCondType(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeCondType;
}


int32_t __fastcall SpotRoadEntity__getActiveTargetId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeTargetId;
}


int32_t __fastcall SpotRoadEntity__getActiveTargetValue(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeTargetValue;
}


int32_t __fastcall SpotRoadEntity__getDispCondType(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispCondType;
}


int32_t __fastcall SpotRoadEntity__getDispCondType2(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispCondType2;
}


int32_t __fastcall SpotRoadEntity__getDispTargetId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetId;
}


int32_t __fastcall SpotRoadEntity__getDispTargetId2(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetId2;
}


int32_t __fastcall SpotRoadEntity__getDispTargetValue(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetValue;
}


int32_t __fastcall SpotRoadEntity__getDispTargetValue2(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetValue2;
}


int32_t __fastcall SpotRoadEntity__getDstSpotId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dstSpotId;
}


int32_t __fastcall SpotRoadEntity__getImageId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.imageId;
}


int32_t __fastcall SpotRoadEntity__getMapId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}


int32_t __fastcall SpotRoadEntity__getSpotRoadId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall SpotRoadEntity__getSrcSpotId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.srcSpotId;
}


int32_t __fastcall SpotRoadEntity__getType(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}