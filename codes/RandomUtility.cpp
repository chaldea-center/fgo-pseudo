void __fastcall RandomUtility___ctor(RandomUtility_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall RandomUtility__GetRandomRangeIndex(
        System_Int32_array *weightArray,
        int32_t defValue,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WeightRate_int__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x21
  int32_t v15; // w1

  if ( (byte_49FB968 & 1) == 0 )
  {
    sub_1B640C8(&Method_WeightRate_int___ctor__, *(_QWORD *)&defValue);
    sub_1B640C8(&Method_WeightRate_int__getData__, v5);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v6);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v7);
    sub_1B640C8(&WeightRate_int__TypeInfo, v8);
    byte_49FB968 = 1;
  }
  if ( !weightArray || !*(_QWORD *)&weightArray->max_length )
    return defValue;
  v9 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, *(_QWORD *)&defValue, method);
  WeightRate_int____ctor(v9, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
  v12 = *(_QWORD *)&weightArray->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1B6432C(v10, v11);
      if ( !v9 )
        break;
      WeightRate_int___setWeight(
        v9,
        weightArray->m_Items[v13 + 1],
        v13,
        (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
      LODWORD(v12) = weightArray->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1B64324(v10);
  }
  if ( !v9 )
    goto LABEL_15;
LABEL_13:
  v15 = UnityEngine_Random__Range_69087476(0, v9->fields.totalweight, 0LL);
  return WeightRate_int___getData(v9, v15, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
}