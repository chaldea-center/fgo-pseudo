void WarReleaseEntity___ctor(WarReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D31C4D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D31C4D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarReleaseEntity__CreatePK(
        int32_t warId,
        int32_t condType,
        int32_t condId,
        int64_t condNum,
        const MethodInfo *method)
{
  if ( (byte_4D31C4C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
    byte_4D31C4C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           warId,
           condType,
           condId,
           condNum,
           (const MethodInfo_31A35B0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
}


System_String_o *WarReleaseEntity__CreatePrimaryKey(WarReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return WarReleaseEntity__CreatePK(
           this->fields.warId,
           this->fields.condType,
           this->fields.condId,
           this->fields.condNum,
           v2);
}


bool WarReleaseEntity__IsAnnouncement(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 3;
}


bool WarReleaseEntity__IsClose(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 2;
}


bool WarReleaseEntity__IsHide(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 0;
}


bool WarReleaseEntity__IsMatch(WarReleaseEntity_o *this, int32_t inWarDisplayType, const MethodInfo *method)
{
  return this->fields.warDisplayType == inWarDisplayType;
}


bool WarReleaseEntity__IsOpen(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 1;
}


bool WarReleaseEntity__IsRelease(WarReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4D31C4B & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    byte_4D31C4B = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


bool WarReleaseEntity__IsShowBoard(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.warDisplayType - 1) < 3;
}