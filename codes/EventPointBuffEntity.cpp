void EventPointBuffEntity___ctor(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppClass *v17; // x0
  struct System_Int32_array *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593880D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593880D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
  v3 = (struct System_String_o *)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.id = 0;
  *(_QWORD *)&this->fields.groupId = 0;
  this->fields.name = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.name, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.detail = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.detail, v10, v11, v12, v13, v14, v15, v16);
  v17 = int___TypeInfo;
  *(_QWORD *)&this->fields.imageId = 0;
  *(_QWORD *)&this->fields.skillIconId = 0;
  this->fields.value = 0;
  v18 = (struct System_Int32_array *)sub_21FFD10(v17, 0);
  this->fields.funcIds = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.funcIds, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


int32_t EventPointBuffEntity__CreatePrimaryKey(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool EventPointBuffEntity__IsEnable(EventPointBuffEntity_o *this, int64_t point, const MethodInfo *method)
{
  return this->fields.eventPoint <= point;
}