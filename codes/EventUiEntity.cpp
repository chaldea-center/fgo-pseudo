void __fastcall EventUiEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4215111 & 1) == 0 )
  {
    sub_B0D8A4(&EventUiEntity_TypeInfo, v1);
    byte_4215111 = 1;
  }
  LODWORD(EventUiEntity_TypeInfo->static_fields->EVNET_UI_POSITION_MAGNIFICATION) = (struct EventUiEntity_StaticFields)1008981770;
}


void __fastcall EventUiEntity___ctor(EventUiEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array **p_spotIds; // x19
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_421510E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_421510E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
  this->fields.spotIds = 0LL;
  p_spotIds = &this->fields.spotIds;
  *(p_spotIds - 3) = 0LL;
  *(p_spotIds - 2) = 0LL;
  *((_DWORD *)p_spotIds - 2) = 0;
  sub_B0D840((BattleServantConfConponent_o *)p_spotIds, 0LL, v4, v5, v6, v7, v8, v9);
  *(struct System_Int32_array **)((char *)p_spotIds + 20) = 0LL;
  *(struct System_Int32_array **)((char *)p_spotIds + 12) = 0LL;
  *((_DWORD *)p_spotIds + 2) = 1;
  *((_DWORD *)p_spotIds + 7) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventUiEntity__CreatePK(int32_t id, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4215110 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4215110 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           priority,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventUiEntity__CreatePrimaryKey(EventUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t priority; // w19
  int32_t id; // w20

  if ( (byte_421510F & 1) == 0 )
  {
    sub_B0D8A4(&EventUiEntity_TypeInfo, method);
    byte_421510F = 1;
  }
  id = this->fields.id;
  priority = this->fields.priority;
  if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventUiEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
  }
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
  struct System_Int32_array *spotIds; // x10
  __int64 v6; // x8
  __int64 v7; // x9
  int32_t *v8; // x10

  if ( (this->fields.dispAreaFlag & 8) == 0 )
    return 0;
  result = 0;
  if ( spotId >= 1 && this->fields.objectType != 1 )
  {
    spotIds = this->fields.spotIds;
    if ( spotIds )
    {
      v6 = *(_QWORD *)&spotIds->max_length;
      if ( !v6 )
        return 1;
      if ( (int)v6 >= 1 )
      {
        v7 = 0LL;
        v8 = &spotIds->m_Items[1];
        while ( v8[v7] != spotId )
        {
          ++v7;
          result = 0;
          if ( (int)v7 >= (int)v6 )
            return result;
        }
        return 1;
      }
    }
    return 0;
  }
  return result;
}