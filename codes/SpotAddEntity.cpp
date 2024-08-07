void __fastcall SpotAddEntity___ctor(SpotAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FF4A5 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FF4A5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SpotAddEntity__CreatePK(
        int32_t spotId,
        int32_t priority,
        int32_t overrideType,
        const MethodInfo *method)
{
  if ( (byte_49FF4A4 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&priority);
    byte_49FF4A4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           spotId,
           priority,
           overrideType,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall SpotAddEntity__CreatePrimaryKey(SpotAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return SpotAddEntity__CreatePK(this->fields.spotId, this->fields.priority, this->fields.overrideType, v2);
}


int32_t __fastcall SpotAddEntity__GetCondType(SpotAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}