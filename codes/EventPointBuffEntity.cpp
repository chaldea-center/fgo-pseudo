void __fastcall EventPointBuffEntity___ctor(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  int32_t v3; // w1
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5B1C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B1C6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.groupId = 0LL;
  v3 = (int)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.name, v3, v4, v5);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.detail = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.detail, v6, v7, v8);
  *(_QWORD *)&this->fields.imageId = 0LL;
  *(_QWORD *)&this->fields.skillIconId = 0LL;
  this->fields.value = 0;
  v9 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.funcIds = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcIds, (int32_t)v9, v10, v11);
}


void __fastcall EventPointBuffEntity___ctor_39203972(
        EventPointBuffEntity_o *this,
        EventPointBuffEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Int32_array *funcIds; // x1
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5B1C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B1C7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1B8880C(v5, v6);
  *(_OWORD *)&this->fields.id = *(_OWORD *)&cSrc->fields.id;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.name, (int32_t)name, v7, v8);
  detail = cSrc->fields.detail;
  this->fields.detail = detail;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.detail, (int32_t)detail, v11, v12);
  *(_OWORD *)&this->fields.imageId = *(_OWORD *)&cSrc->fields.imageId;
  this->fields.value = cSrc->fields.value;
  funcIds = cSrc->fields.funcIds;
  this->fields.funcIds = funcIds;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.funcIds, (int32_t)funcIds, v14, v15);
}


int32_t __fastcall EventPointBuffEntity__CreatePrimaryKey(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall EventPointBuffEntity__IsEnable(EventPointBuffEntity_o *this, int64_t point, const MethodInfo *method)
{
  return this->fields.eventPoint <= point;
}