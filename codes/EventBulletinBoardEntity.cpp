void EventBulletinBoardEntity___ctor(EventBulletinBoardEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE566 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEE566 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventBulletinBoardEntity__CreatePrimaryKey(EventBulletinBoardEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


void EventBulletinBoardEntity_BulletinBoardInfo___ctor(
        EventBulletinBoardEntity_BulletinBoardInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}