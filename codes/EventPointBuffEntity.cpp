void __fastcall EventPointBuffEntity___ctor(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Int32_array *v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E90AB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E90AB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  *(_QWORD *)&this->fields.id = 0LL;
  *(_QWORD *)&this->fields.groupId = 0LL;
  v11 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.name = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.name, v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.detail = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.detail, v18, v19, v20, v21, v22, v23, v24);
  this->fields.value = 0;
  *(_QWORD *)&this->fields.imageId = 0LL;
  *(_QWORD *)&this->fields.skillIconId = 0LL;
  v25 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  this->fields.funcIds = v25;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.funcIds,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
}


void __fastcall EventPointBuffEntity___ctor_26024392(
        EventPointBuffEntity_o *this,
        EventPointBuffEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *name; // x1
  struct System_String_o *detail; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Int32_array *funcIds; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E90AC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42E90AC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
  this->fields.id = cSrc->fields.id;
  this->fields.eventId = cSrc->fields.eventId;
  this->fields.groupId = cSrc->fields.groupId;
  this->fields.eventPoint = cSrc->fields.eventPoint;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)name,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  detail = cSrc->fields.detail;
  this->fields.detail = detail;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.detail,
    (System_Int32_array **)detail,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.imageId = cSrc->fields.imageId;
  this->fields.bgImageId = cSrc->fields.bgImageId;
  this->fields.skillIconId = cSrc->fields.skillIconId;
  this->fields.lv = cSrc->fields.lv;
  this->fields.value = cSrc->fields.value;
  funcIds = cSrc->fields.funcIds;
  this->fields.funcIds = funcIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.funcIds,
    (System_Int32_array **)funcIds,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


int32_t __fastcall EventPointBuffEntity__CreatePrimaryKey(EventPointBuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


bool __fastcall EventPointBuffEntity__IsEnable(EventPointBuffEntity_o *this, int64_t point, const MethodInfo *method)
{
  return this->fields.eventPoint <= point;
}