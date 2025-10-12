void EventUiEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4C37BD9 & 1) == 0 )
  {
    sub_1C32C20(&EventUiEntity_TypeInfo);
    byte_4C37BD9 = 1;
  }
  LODWORD(EventUiEntity_TypeInfo->static_fields->EVNET_UI_POSITION_MAGNIFICATION) = (struct EventUiEntity_StaticFields)1008981770;
}


void EventUiEntity___ctor(EventUiEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array **p_spotIds; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C37BD6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C37BD6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
  this->fields.spotIds = 0;
  p_spotIds = &this->fields.spotIds;
  *(p_spotIds - 3) = 0;
  *(p_spotIds - 2) = 0;
  *((_DWORD *)p_spotIds - 2) = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)p_spotIds, 0, v4, v5);
  *(struct System_Int32_array **)((char *)p_spotIds + 20) = 0;
  *(struct System_Int32_array **)((char *)p_spotIds + 12) = 0;
  *((_DWORD *)p_spotIds + 2) = 1;
  *((_DWORD *)p_spotIds + 7) = 1;
}


System_String_o *EventUiEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4C37BD8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C37BD8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_30DB578 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventUiEntity__CreatePrimaryKey(EventUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t priority; // w19
  int32_t id; // w20

  if ( (byte_4C37BD7 & 1) == 0 )
  {
    sub_1C32C20(&EventUiEntity_TypeInfo);
    byte_4C37BD7 = 1;
  }
  id = this->fields.id;
  priority = this->fields.priority;
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  return EventUiEntity__CreatePK(id, priority, v2);
}


int32_t EventUiEntity__GetEventId(EventUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t EventUiEntity__GetMapId(EventUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}


int32_t EventUiEntity__GetObjectType(EventUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.objectType;
}


int32_t EventUiEntity__GetWarId(EventUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.warId;
}


bool EventUiEntity__IsDispArea(EventUiEntity_o *this, int32_t type, const MethodInfo *method)
{
  return (this->fields.dispAreaFlag & type) != 0;
}


bool EventUiEntity__IsDispEventUIForSpot(EventUiEntity_o *this, int32_t spotId, const MethodInfo *method)
{
  bool result; // w0
  struct System_Int32_array *spotIds; // x8
  il2cpp_array_size_t max_length; // x9
  bool v7; // vf
  int v8; // w9
  int v9; // w10
  int32_t v10; // w11

  if ( (this->fields.dispAreaFlag & 8) == 0 )
    return 0;
  result = 0;
  if ( spotId >= 1 && this->fields.objectType != 1 )
  {
    spotIds = this->fields.spotIds;
    if ( !spotIds )
      return 0;
    max_length = spotIds->max_length;
    if ( !max_length )
      return 1;
    v7 = __OFSUB__((_DWORD)max_length, 1);
    v8 = max_length - 1;
    if ( v8 < 0 != v7 )
      return 0;
    v9 = 0;
    do
    {
      v10 = spotIds->m_Items[v9];
      result = v10 == spotId;
      if ( v10 == spotId )
        break;
    }
    while ( v8 != v9++ );
  }
  return result;
}