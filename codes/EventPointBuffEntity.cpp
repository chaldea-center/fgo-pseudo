void EventPointBuffEntity___ctor(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Int32_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC7463 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7463 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0;
  *(_QWORD *)&this->fields.groupId = 0;
  v3 = StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.name, v3, v4, v5, v6, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.detail = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.detail, v10, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)&this->fields.imageId = 0;
  *(_QWORD *)&this->fields.skillIconId = 0;
  this->fields.value = 0;
  v17 = (struct System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  this->fields.funcIds = v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.funcIds, (int32_t)v17, v18, v19, v20, v21, v22, v23);
}


void EventPointBuffEntity___ctor_42341432(
        EventPointBuffEntity_o *this,
        EventPointBuffEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Int32_array *funcIds; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4CC7464 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC7464 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1C71608(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.name, (int32_t)name, v7, v8, v9, v10, v11, v12);
  detail = cSrc->fields.detail;
  this->fields.detail = detail;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.detail, (int32_t)detail, v15, v16, v17, v18, v19, v20);
  *(_OWORD *)&this->fields.imageId = *(_OWORD *)&cSrc->fields.imageId;
  this->fields.value = cSrc->fields.value;
  funcIds = cSrc->fields.funcIds;
  this->fields.funcIds = funcIds;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.funcIds, (int32_t)funcIds, v22, v23, v24, v25, v26, v27);
}


int32_t EventPointBuffEntity__CreatePrimaryKey(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool EventPointBuffEntity__IsEnable(EventPointBuffEntity_o *this, int64_t point, const MethodInfo *method)
{
  return this->fields.eventPoint <= point;
}