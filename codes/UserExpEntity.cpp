void UserExpEntity___ctor(UserExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939589 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5939589 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t UserExpEntity__CreatePrimaryKey(UserExpEntity_o *this, const MethodInfo *method)
{
  return this->fields.lv;
}


bool UserExpEntity__IsCondEntity(UserExpEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType != 0;
}