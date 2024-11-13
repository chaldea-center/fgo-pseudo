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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  WeightRate_int__o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  unsigned __int64 v18; // x21
  int32_t v20; // w1

  if ( (byte_4B1570A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_WeightRate_int___ctor__, *(_QWORD *)&defValue, method);
    sub_1BCA7E0(&Method_WeightRate_int__getData__, v6, v7);
    sub_1BCA7E0(&Method_WeightRate_int__getTotalWeight__, v8, v9);
    sub_1BCA7E0(&Method_WeightRate_int__setWeight__, v10, v11);
    sub_1BCA7E0(&WeightRate_int__TypeInfo, v12, v13);
    byte_4B1570A = 1;
  }
  if ( !weightArray || !*(_QWORD *)&weightArray->max_length )
    return defValue;
  v14 = (WeightRate_int__o *)sub_1BCAA2C(WeightRate_int__TypeInfo, *(_QWORD *)&defValue, method, v3);
  WeightRate_int____ctor(v14, (const MethodInfo_3984A0C *)Method_WeightRate_int___ctor__);
  v17 = *(_QWORD *)&weightArray->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1BCAA44(v15, v16);
      if ( !v14 )
        break;
      WeightRate_int___setWeight(
        v14,
        weightArray->m_Items[v18 + 1],
        v18,
        (const MethodInfo_3983F28 *)Method_WeightRate_int__setWeight__);
      LODWORD(v17) = weightArray->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1BCAA3C(v15, v16);
  }
  if ( !v14 )
    goto LABEL_15;
LABEL_13:
  v20 = UnityEngine_Random__Range_70113984(0, v14->fields.totalweight, 0LL);
  return WeightRate_int___getData(v14, v20, (const MethodInfo_398439C *)Method_WeightRate_int__getData__);
}