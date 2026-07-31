void BoxGachaHistoryEntity___ctor(BoxGachaHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593834C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_593834C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t BoxGachaHistoryEntity__CreatePrimaryKey(BoxGachaHistoryEntity_o *this, const MethodInfo *method)
{
  return this->fields.boxGachaId;
}


// local variable allocation has failed, the output may be wrong!
int32_t BoxGachaHistoryEntity__getDrawNum(BoxGachaHistoryEntity_o *this, int32_t no, const MethodInfo *method)
{
  struct System_Int32_array *numbers; // x8
  BoxGachaHistoryEntity_o *v4; // x19
  unsigned __int64 v6; // x22
  int32_t v7; // w21
  __int64 v8; // x9
  unsigned __int64 max_length_low; // x10
  __int64 v10; // x23

  numbers = this->fields.numbers;
  if ( !numbers )
LABEL_7:
    sub_21FFECC(this, *(_QWORD *)&no);
  if ( !numbers->max_length )
    return 0;
  v4 = this;
  v6 = 0;
  v7 = 0;
  v8 = 32;
  while ( 1 )
  {
    max_length_low = LODWORD(numbers->max_length);
    if ( (__int64)v6 >= (int)max_length_low )
      return v7;
    if ( v6 >= max_length_low )
      sub_21FFED4(this);
    v10 = v8 + 4;
    ++v6;
    this = (BoxGachaHistoryEntity_o *)System_Int32__Equals_76925180((_DWORD)numbers + v8, no, 0);
    numbers = v4->fields.numbers;
    v7 += (unsigned __int8)this & 1;
    v8 = v10;
    if ( !numbers )
      goto LABEL_7;
  }
}