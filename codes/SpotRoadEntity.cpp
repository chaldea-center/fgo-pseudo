void SpotRoadEntity___ctor(SpotRoadEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D315F5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D315F5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
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