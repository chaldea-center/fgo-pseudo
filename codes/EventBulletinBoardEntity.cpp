void __fastcall EventBulletinBoardEntity___ctor(EventBulletinBoardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4216EB5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_4216EB5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventBulletinBoardEntity__CreatePrimaryKey(
        EventBulletinBoardEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


void __fastcall EventBulletinBoardEntity_BulletinBoardInfo___ctor(
        EventBulletinBoardEntity_BulletinBoardInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}