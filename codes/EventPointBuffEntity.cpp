void EventPointBuffEntity___ctor(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C27335 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27335 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0;
  *(_QWORD *)&this->fields.groupId = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.name, v3, v4, v5);
  v6 = StringLiteral_1/*""*/;
  this->fields.detail = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.detail, v6, v7, v8);
  *(_QWORD *)&this->fields.imageId = 0;
  *(_QWORD *)&this->fields.skillIconId = 0;
  this->fields.value = 0;
  v9 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  this->fields.funcIds = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.funcIds, (int32_t)v9, v10, v11);
}


void EventPointBuffEntity___ctor_41827632(
        EventPointBuffEntity_o *this,
        EventPointBuffEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Int32_array *funcIds; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C27336 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27336 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C2D6EC(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.name, (int32_t)name, v7, v8);
  detail = cSrc->fields.detail;
  this->fields.detail = detail;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.detail, (int32_t)detail, v11, v12);
  *(_OWORD *)&this->fields.imageId = *(_OWORD *)&cSrc->fields.imageId;
  this->fields.value = cSrc->fields.value;
  funcIds = cSrc->fields.funcIds;
  this->fields.funcIds = funcIds;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.funcIds, (int32_t)funcIds, v14, v15);
}


int32_t EventPointBuffEntity__CreatePrimaryKey(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool EventPointBuffEntity__IsEnable(EventPointBuffEntity_o *this, int64_t point, const MethodInfo *method)
{
  return this->fields.eventPoint <= point;
}