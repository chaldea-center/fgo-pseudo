void __fastcall BoxGachaHistoryEntity___ctor(BoxGachaHistoryEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41896B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_41896B1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall BoxGachaHistoryEntity__CreatePrimaryKey(BoxGachaHistoryEntity_o *this, const MethodInfo *method)
{
  return this->fields.boxGachaId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BoxGachaHistoryEntity__getDrawNum(
        BoxGachaHistoryEntity_o *this,
        int32_t no,
        const MethodInfo *method)
{
  struct System_Int32_array *numbers; // x8
  __int64 v4; // x9
  int32_t v5; // w21
  BoxGachaHistoryEntity_o *v6; // x19
  unsigned __int64 v8; // x22
  int i; // w23
  __int64 v11; // x0

  numbers = this->fields.numbers;
  if ( !numbers )
    goto LABEL_9;
  v4 = *(_QWORD *)&numbers->max_length;
  v5 = 0;
  if ( v4 && (int)v4 >= 1 )
  {
    v6 = this;
    v5 = 0;
    v8 = 0LL;
    for ( i = 32; ; i += 4 )
    {
      if ( v8 >= (unsigned int)v4 )
      {
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
      }
      this = (BoxGachaHistoryEntity_o *)System_Int32__Equals_38381340((_DWORD)numbers + i, no, 0LL);
      numbers = v6->fields.numbers;
      if ( !numbers )
        break;
      LODWORD(v4) = numbers->max_length;
      ++v8;
      v5 += (unsigned __int8)this & 1;
      if ( (__int64)v8 >= (int)v4 )
        return v5;
    }
LABEL_9:
    sub_B2C434(this, *(_QWORD *)&no);
  }
  return v5;
}