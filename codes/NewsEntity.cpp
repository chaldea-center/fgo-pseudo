void __fastcall NewsEntity___ctor(NewsEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B165B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B165B7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall NewsEntity__CreatePrimaryKey(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall NewsEntity__getDetail(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.detail;
}


int64_t __fastcall NewsEntity__getFinishedAt(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.finishedAt;
}


int32_t __fastcall NewsEntity__getId(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int64_t __fastcall NewsEntity__getNoticeAt(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.noticeAt;
}


int32_t __fastcall NewsEntity__getPriority(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.priority;
}


System_String_o *__fastcall NewsEntity__getTitle(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.title;
}


int32_t __fastcall NewsEntity__getType(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}