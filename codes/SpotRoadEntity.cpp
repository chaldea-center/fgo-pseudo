void __fastcall SpotRoadEntity___ctor(SpotRoadEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FADD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FADD7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


void __fastcall SpotRoadEntity___ctor_26806884(
        SpotRoadEntity_o *this,
        SpotRoadEntity_o *cSrc,
        const MethodInfo *method)
{
  if ( (byte_40FADD8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_40FADD8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B170D4();
  this->fields.id = cSrc->fields.id;
  this->fields.mapId = cSrc->fields.mapId;
  this->fields.srcSpotId = cSrc->fields.srcSpotId;
  this->fields.dstSpotId = cSrc->fields.dstSpotId;
  this->fields.type = cSrc->fields.type;
  this->fields.imageId = cSrc->fields.imageId;
  this->fields.dispCondType = cSrc->fields.dispCondType;
  this->fields.dispTargetId = cSrc->fields.dispTargetId;
  this->fields.dispTargetValue = cSrc->fields.dispTargetValue;
  this->fields.activeCondType = cSrc->fields.activeCondType;
  this->fields.activeTargetId = cSrc->fields.activeTargetId;
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