void __fastcall BeforeBirthDayEntity___ctor(BeforeBirthDayEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC773C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_long___ctor__, method);
    byte_4BC773C = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32461DC *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall BeforeBirthDayEntity__CreatePrimaryKey(BeforeBirthDayEntity_o *this, const MethodInfo *method)
{
  return this->fields.oldBirthDay;
}