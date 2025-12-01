void BoxGachaHistoryEntity___ctor(BoxGachaHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC70B2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC70B2 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
}


int32_t BoxGachaHistoryEntity__CreatePrimaryKey(BoxGachaHistoryEntity_o *this, const MethodInfo *method)
{
  return this->fields.boxGachaId;
}


// local variable allocation has failed, the output may be wrong!
int32_t BoxGachaHistoryEntity__getDrawNum(BoxGachaHistoryEntity_o *this, int32_t no, const MethodInfo *method)
{
  struct System_Int32_array *numbers; // x8
  il2cpp_array_size_t max_length; // x9
  int32_t v5; // w21
  BoxGachaHistoryEntity_o *v6; // x19
  unsigned __int64 v8; // x22
  int i; // w23

  numbers = this->fields.numbers;
  if ( !numbers )
    goto LABEL_10;
  max_length = numbers->max_length;
  v5 = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v6 = this;
    v5 = 0;
    v8 = 0;
    for ( i = 32; ; i += 4 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C71610(this);
      this = (BoxGachaHistoryEntity_o *)System_Int32__Equals_65540048((_DWORD)numbers + i, no, 0);
      numbers = v6->fields.numbers;
      if ( !numbers )
        break;
      LODWORD(max_length) = numbers->max_length;
      ++v8;
      v5 += (unsigned __int8)this & 1;
      if ( (__int64)v8 >= (int)max_length )
        return v5;
    }
LABEL_10:
    sub_1C71608(this, *(_QWORD *)&no);
  }
  return v5;
}