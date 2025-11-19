void EventPanelSpotEntity___ctor(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6331 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB6331 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventPanelSpotEntity__CreatePrimaryKey(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


bool EventPanelSpotEntity__HasEnemySize(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array_array *enemySizeIdxListJson; // x8

  enemySizeIdxListJson = this->fields.enemySizeIdxListJson;
  return enemySizeIdxListJson && LODWORD(enemySizeIdxListJson->max_length) != 0;
}


bool EventPanelSpotEntity__HasObject(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.objectId > 0;
}


bool EventPanelSpotEntity__HasObjectQuestIds(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *objectQuestIds; // x8

  objectQuestIds = this->fields.objectQuestIds;
  return objectQuestIds && LODWORD(objectQuestIds->max_length) != 0;
}


bool EventPanelSpotEntity__IsCrossLineSpot(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 3;
}


bool EventPanelSpotEntity__IsNormalSpot(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 1;
}


bool EventPanelSpotEntity__IsRandomSpot(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 2;
}


int32_t EventPanelSpotEntity__get_eventPanelSpotType(EventPanelSpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}