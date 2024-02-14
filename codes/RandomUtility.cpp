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
  __int64 v11; // x8
  unsigned __int64 v12; // x21
  int32_t v14; // w1
  __int64 v15; // x0

  if ( (byte_4212EF4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_WeightRate_int___ctor__, *(_QWORD *)&defValue);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v5);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v6);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v7);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v8);
    byte_4212EF4 = 1;
  }
  if ( !weightArray || !*(_QWORD *)&weightArray->max_length )
    return defValue;
  v9 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, *(_QWORD *)&defValue, method);
  WeightRate_int____ctor(v9, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  v11 = *(_QWORD *)&weightArray->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v11 )
      {
        v15 = sub_B0D9A8(v10);
        sub_B0D948(v15, 0LL);
      }
      if ( !v9 )
        break;
      WeightRate_int___setWeight(
        v9,
        weightArray->m_Items[v12 + 1],
        v12,
        (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
      LODWORD(v11) = weightArray->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B0D97C(v10);
  }
  if ( !v9 )
    goto LABEL_15;
LABEL_13:
  v14 = UnityEngine_Random__Range_34969060(0, v9->fields.totalweight, 0LL);
  return WeightRate_int___getData(v9, v14, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
}