void __fastcall EventPointBuffEntity___ctor(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t v5; // w1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Int32_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FC477 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    sub_1B640C8(&int___TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC477 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.groupId = 0LL;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.name, v5, v6, v7);
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.detail = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.detail, v8, v9, v10);
  *(_QWORD *)&this->fields.imageId = 0LL;
  *(_QWORD *)&this->fields.skillIconId = 0LL;
  this->fields.value = 0;
  v11 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.funcIds = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.funcIds, (int32_t)v11, v12, v13);
}


void __fastcall EventPointBuffEntity___ctor_38883196(
        EventPointBuffEntity_o *this,
        EventPointBuffEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Int32_array *funcIds; // x1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FC478 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_49FC478 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1B64324(v5);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.name, (int32_t)name, v6, v7);
  detail = cSrc->fields.detail;
  this->fields.detail = detail;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.detail, (int32_t)detail, v10, v11);
  *(_OWORD *)&this->fields.imageId = *(_OWORD *)&cSrc->fields.imageId;
  this->fields.value = cSrc->fields.value;
  funcIds = cSrc->fields.funcIds;
  this->fields.funcIds = funcIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.funcIds, (int32_t)funcIds, v13, v14);
}


int32_t __fastcall EventPointBuffEntity__CreatePrimaryKey(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall EventPointBuffEntity__IsEnable(EventPointBuffEntity_o *this, int64_t point, const MethodInfo *method)
{
  return this->fields.eventPoint <= point;
}