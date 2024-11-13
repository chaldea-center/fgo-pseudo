void __fastcall EventPanelSpotEntity___ctor(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1624B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B1624B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventPanelSpotEntity__CreatePrimaryKey(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


bool __fastcall EventPanelSpotEntity__HasEnemySize(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array_array *enemySizeIdxListJson; // x8

  enemySizeIdxListJson = this->fields.enemySizeIdxListJson;
  return enemySizeIdxListJson && enemySizeIdxListJson->max_length != 0;
}


bool __fastcall EventPanelSpotEntity__HasObject(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.objectId > 0;
}


bool __fastcall EventPanelSpotEntity__HasObjectQuestIds(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *objectQuestIds; // x8

  objectQuestIds = this->fields.objectQuestIds;
  return objectQuestIds && objectQuestIds->max_length != 0;
}


bool __fastcall EventPanelSpotEntity__IsCrossLineSpot(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


bool __fastcall EventPanelSpotEntity__IsNormalSpot(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 1;
}


bool __fastcall EventPanelSpotEntity__IsRandomSpot(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


int32_t __fastcall EventPanelSpotEntity__get_eventPanelSpotType(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}