void __fastcall UserExpEntity___ctor(UserExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBC1E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BBC1E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall UserExpEntity__CreatePrimaryKey(UserExpEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


bool __fastcall UserExpEntity__IsCondEntity(UserExpEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType != 0;
}