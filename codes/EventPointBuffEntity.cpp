void __fastcall EventPointBuffEntity___ctor(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Int32_array **v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Int32_array *v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_41878A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_41878A0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.groupId = 0LL;
  v5 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.name, v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.detail = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.detail, v12, v13, v14, v15, v16, v17, v18);
  this->fields.value = 0;
  *(_QWORD *)&this->fields.imageId = 0LL;
  *(_QWORD *)&this->fields.skillIconId = 0LL;
  v19 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.funcIds = v19;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.funcIds,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
}


void __fastcall EventPointBuffEntity___ctor_25020628(
        EventPointBuffEntity_o *this,
        EventPointBuffEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Int32_array *funcIds; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_41878A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_41878A1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.id = cSrc->fields.id;
  this->fields.eventId = cSrc->fields.eventId;
  this->fields.groupId = cSrc->fields.groupId;
  this->fields.eventPoint = cSrc->fields.eventPoint;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  detail = cSrc->fields.detail;
  this->fields.detail = detail;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.detail,
    (System_Int32_array **)detail,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.imageId = cSrc->fields.imageId;
  this->fields.bgImageId = cSrc->fields.bgImageId;
  this->fields.skillIconId = cSrc->fields.skillIconId;
  this->fields.lv = cSrc->fields.lv;
  this->fields.value = cSrc->fields.value;
  funcIds = cSrc->fields.funcIds;
  this->fields.funcIds = funcIds;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.funcIds,
    (System_Int32_array **)funcIds,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


int32_t __fastcall EventPointBuffEntity__CreatePrimaryKey(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall EventPointBuffEntity__IsEnable(EventPointBuffEntity_o *this, int64_t point, const MethodInfo *method)
{
  return this->fields.eventPoint <= point;
}