void SpotRoadEntity___ctor(SpotRoadEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D4AF & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2D4AF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


void SpotRoadEntity___ctor_43706788(SpotRoadEntity_o *this, SpotRoadEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D2D4B0 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2D4B0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C942F0(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  *(_OWORD *)&this->fields.type = *(_OWORD *)&cSrc->fields.type;
  this->fields.dispTargetValue = cSrc->fields.dispTargetValue;
  *(_QWORD *)&this->fields.activeCondType = *(_QWORD *)&cSrc->fields.activeCondType;
  this->fields.activeTargetValue = cSrc->fields.activeTargetValue;
}


int32_t SpotRoadEntity__CreatePrimaryKey(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t SpotRoadEntity__getActiveCondType(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeCondType;
}


int32_t SpotRoadEntity__getActiveTargetId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeTargetId;
}


int32_t SpotRoadEntity__getActiveTargetValue(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeTargetValue;
}


int32_t SpotRoadEntity__getDispCondType(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispCondType;
}


int32_t SpotRoadEntity__getDispCondType2(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispCondType2;
}


int32_t SpotRoadEntity__getDispTargetId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetId;
}


int32_t SpotRoadEntity__getDispTargetId2(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetId2;
}


int32_t SpotRoadEntity__getDispTargetValue(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetValue;
}


int32_t SpotRoadEntity__getDispTargetValue2(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetValue2;
}


int32_t SpotRoadEntity__getDstSpotId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.dstSpotId;
}


int32_t SpotRoadEntity__getImageId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.imageId;
}


int32_t SpotRoadEntity__getMapId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}


int32_t SpotRoadEntity__getSpotRoadId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t SpotRoadEntity__getSrcSpotId(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.srcSpotId;
}


int32_t SpotRoadEntity__getType(SpotRoadEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}