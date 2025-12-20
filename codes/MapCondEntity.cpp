void MapCondEntity___ctor(MapCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CD1C & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CD1C = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MapCondEntity__CreatePK(int32_t id, int32_t mapId, const MethodInfo *method)
{
  if ( (byte_4D2CD1A & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2CD1A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           mapId,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *MapCondEntity__CreatePrimaryKey(MapCondEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapCondEntity__CreatePK(this->fields.id, this->fields.mapId, v2);
}


int32_t MapCondEntity__GetCondType(MapCondEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool MapCondEntity__IsCondAboutQuestClear(
        MapCondEntity_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t condType; // w8

  if ( !questId )
    return 0;
  condType = this->fields.condType;
  switch ( condType )
  {
    case 57:
      return this->fields.condTargetId == questId;
    case 46:
      return this->fields.condTargetId == questId && this->fields.condNum == phase;
    case 1:
      return this->fields.condTargetId == questId;
  }
  return 0;
}


bool MapCondEntity__IsOpen(MapCondEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4D2CD1B & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    byte_4D2CD1B = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}