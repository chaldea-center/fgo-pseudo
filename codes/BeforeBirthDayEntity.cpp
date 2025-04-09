void __fastcall BeforeBirthDayEntity___ctor(BeforeBirthDayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BAAFD & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_long___ctor__, method);
    byte_49BAAFD = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_319B500 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall BeforeBirthDayEntity__CreatePrimaryKey(BeforeBirthDayEntity_o *this, const MethodInfo *method)
{
  return this->fields.oldBirthDay;
}