void EventUiEntity___cctor(const MethodInfo *method)
{
  if ( (byte_59389D0 & 1) == 0 )
  {
    sub_21FFC50(&EventUiEntity_TypeInfo);
    byte_59389D0 = 1;
  }
  LODWORD(EventUiEntity_TypeInfo->static_fields->EVNET_UI_POSITION_MAGNIFICATION) = (struct EventUiEntity_StaticFields)1008981770;
}


void EventUiEntity___ctor(EventUiEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array **p_spotIds; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59389CD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59389CD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
  this->fields.spotIds = 0;
  p_spotIds = &this->fields.spotIds;
  *(p_spotIds - 3) = 0;
  *(p_spotIds - 2) = 0;
  *((_DWORD *)p_spotIds - 2) = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_spotIds, 0, v4, v5, v6, v7, v8, v9);
  *(struct System_Int32_array **)((char *)p_spotIds + 20) = 0;
  *((_DWORD *)p_spotIds + 2) = 1;
  *(struct System_Int32_array **)((char *)p_spotIds + 12) = 0;
  *((_DWORD *)p_spotIds + 7) = 1;
}


System_String_o *EventUiEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_59389CF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59389CF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventUiEntity__CreatePrimaryKey(EventUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t priority; // w19
  int32_t id; // w20

  if ( (byte_59389CE & 1) == 0 )
  {
    sub_21FFC50(&EventUiEntity_TypeInfo);
    byte_59389CE = 1;
  }
  id = this->fields.id;
  priority = this->fields.priority;
  if ( !*(&EventUiEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo, method);
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
  int32_t *m_Items; // x8
  int v10; // t1

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
    m_Items = spotIds->m_Items;
    do
    {
      v10 = *m_Items++;
      result = v10 == spotId;
      if ( v10 == spotId )
        break;
    }
    while ( v8-- );
  }
  return result;
}