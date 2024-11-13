void __fastcall MapCondEntity___ctor(MapCondEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16536 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16536 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapCondEntity__CreatePK(int32_t id, int32_t mapId, const MethodInfo *method)
{
  if ( (byte_4B16534 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&mapId, method);
    byte_4B16534 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           mapId,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall MapCondEntity__CreatePrimaryKey(MapCondEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return MapCondEntity__CreatePK(this->fields.id, this->fields.mapId, v2);
}


int32_t __fastcall MapCondEntity__GetCondType(MapCondEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool __fastcall MapCondEntity__IsCondAboutQuestClear(
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


bool __fastcall MapCondEntity__IsOpen(MapCondEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4B16535 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B16535 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL, 0LL);
}