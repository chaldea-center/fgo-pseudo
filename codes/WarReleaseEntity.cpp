void __fastcall WarReleaseEntity___ctor(WarReleaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A20B58 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_string___ctor__, method);
    byte_4A20B58 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30F85D8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarReleaseEntity__CreatePK(
        int32_t warId,
        int32_t condType,
        int32_t condId,
        int64_t condNum,
        const MethodInfo *method)
{
  if ( (byte_4A20B57 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataEntityBase_CreateMultiplePK_int__int__int__long___, *(_QWORD *)&condType);
    byte_4A20B57 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int__long_(
           warId,
           condType,
           condId,
           condNum,
           (const MethodInfo_2E59FF8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int__long___);
}


System_String_o *__fastcall WarReleaseEntity__CreatePrimaryKey(WarReleaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  return WarReleaseEntity__CreatePK(
           this->fields.warId,
           this->fields.condType,
           this->fields.condId,
           this->fields.condNum,
           v2);
}


bool __fastcall WarReleaseEntity__IsAnnouncement(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 3;
}


bool __fastcall WarReleaseEntity__IsClose(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 2;
}


bool __fastcall WarReleaseEntity__IsHide(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 0;
}


bool __fastcall WarReleaseEntity__IsMatch(WarReleaseEntity_o *this, int32_t inWarDisplayType, const MethodInfo *method)
{
  return this->fields.warDisplayType == inWarDisplayType;
}


bool __fastcall WarReleaseEntity__IsOpen(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.warDisplayType == 1;
}


bool __fastcall WarReleaseEntity__IsRelease(WarReleaseEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4A20B56 & 1) == 0 )
  {
    sub_1B715CC(&CondType_TypeInfo, method);
    byte_4A20B56 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
}


bool __fastcall WarReleaseEntity__IsShowBoard(WarReleaseEntity_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.warDisplayType - 1) < 3;
}