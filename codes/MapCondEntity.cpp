void MapCondEntity___ctor(MapCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938B80 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938B80 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MapCondEntity__CreatePK(int32_t id, int32_t mapId, const MethodInfo *method)
{
  if ( (byte_5938B7E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938B7E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           mapId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *MapCondEntity__CreatePrimaryKey(MapCondEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapCondEntity__CreatePK(this->fields.id, this->fields.mapId, v2);
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
  if ( condType != 57 )
  {
    if ( condType == 46 )
      return this->fields.condTargetId == questId && this->fields.condNum == phase;
    if ( condType != 1 )
      return 0;
  }
  return this->fields.condTargetId == questId;
}


bool MapCondEntity__IsOpen(MapCondEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condTargetId; // w21
  int64_t condNum; // x19

  if ( (byte_5938B7F & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938B7F = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0, 0);
}