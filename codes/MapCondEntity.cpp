void __fastcall MapCondEntity___ctor(MapCondEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB59F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FB59F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MapCondEntity__CreatePK(int32_t id, int32_t mapId, const MethodInfo *method)
{
  if ( (byte_40FB59D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&mapId);
    byte_40FB59D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           id,
           mapId,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_40FB59E & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    byte_40FB59E = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condNum = this->fields.condNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condNum, 0, 0LL);
}