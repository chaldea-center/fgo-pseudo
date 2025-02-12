void __fastcall EventUiEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB48D3 & 1) == 0 )
  {
    sub_1C13D24(&EventUiEntity_TypeInfo, v1);
    byte_4BB48D3 = 1;
  }
  LODWORD(EventUiEntity_TypeInfo->static_fields->EVNET_UI_POSITION_MAGNIFICATION) = (struct EventUiEntity_StaticFields)1008981770;
}


void __fastcall EventUiEntity___ctor(EventUiEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array **p_spotIds; // x19
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BB48D0 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB48D0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
  this->fields.spotIds = 0LL;
  p_spotIds = &this->fields.spotIds;
  *(p_spotIds - 3) = 0LL;
  *(p_spotIds - 2) = 0LL;
  *((_DWORD *)p_spotIds - 2) = 0;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_spotIds, 0LL, v4, v5, v6, v7, v8, v9);
  *(struct System_Int32_array **)((char *)p_spotIds + 20) = 0LL;
  *(struct System_Int32_array **)((char *)p_spotIds + 12) = 0LL;
  *((_DWORD *)p_spotIds + 2) = 1;
  *((_DWORD *)p_spotIds + 7) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventUiEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4BB48D2 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4BB48D2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_2F8D690 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventUiEntity__CreatePrimaryKey(EventUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t priority; // w19
  int32_t id; // w20

  if ( (byte_4BB48D1 & 1) == 0 )
  {
    sub_1C13D24(&EventUiEntity_TypeInfo, method);
    byte_4BB48D1 = 1;
  }
  id = this->fields.id;
  priority = this->fields.priority;
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  return EventUiEntity__CreatePK(id, priority, v2);
}


int32_t __fastcall EventUiEntity__GetEventId(EventUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventUiEntity__GetMapId(EventUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}


int32_t __fastcall EventUiEntity__GetObjectType(EventUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.objectType;
}


int32_t __fastcall EventUiEntity__GetWarId(EventUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.warId;
}


bool __fastcall EventUiEntity__IsDispArea(EventUiEntity_o *this, int32_t type, const MethodInfo *method)
{
  return (this->fields.dispAreaFlag & type) != 0;
}


bool __fastcall EventUiEntity__IsDispEventUIForSpot(EventUiEntity_o *this, int32_t spotId, const MethodInfo *method)
{
  bool result; // w0
  struct System_Int32_array *spotIds; // x8
  __int64 v6; // x9
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
    v6 = *(_QWORD *)&spotIds->max_length;
    if ( !v6 )
      return 1;
    v7 = __OFSUB__((_DWORD)v6, 1);
    v8 = v6 - 1;
    if ( v8 < 0 != v7 )
      return 0;
    v9 = 0;
    do
    {
      v10 = spotIds->m_Items[v9 + 1];
      result = v10 == spotId;
      if ( v10 == spotId )
        break;
    }
    while ( v8 != v9++ );
  }
  return result;
}