void NewsEntity___ctor(NewsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C572B4 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_int___ctor__);
    byte_4C572B4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33B0A74 *)Method_DataEntityBase_int___ctor__);
}


int32_t NewsEntity__CreatePrimaryKey(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *NewsEntity__getDetail(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.detail;
}


int64_t NewsEntity__getFinishedAt(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.finishedAt;
}


int32_t NewsEntity__getId(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int64_t NewsEntity__getNoticeAt(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.noticeAt;
}


int32_t NewsEntity__getPriority(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.priority;
}


System_String_o *NewsEntity__getTitle(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.title;
}


int32_t NewsEntity__getType(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}