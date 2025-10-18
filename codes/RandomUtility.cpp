void RandomUtility___ctor(RandomUtility_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RandomUtility__GetRandomRangeIndex(System_Int32_array *weightArray, int32_t defValue, const MethodInfo *method)
{
  WeightRate_int__o *v5; // x20
  __int64 v6; // x0
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x21
  int32_t v10; // w1

  if ( (byte_4C4243A & 1) == 0 )
  {
    sub_1C37058(&Method_WeightRate_int___ctor__);
    sub_1C37058(&Method_WeightRate_int__getData__);
    sub_1C37058(&Method_WeightRate_int__getTotalWeight__);
    sub_1C37058(&Method_WeightRate_int__setWeight__);
    sub_1C37058(&WeightRate_int__TypeInfo);
    byte_4C4243A = 1;
  }
  if ( !weightArray || !weightArray->max_length )
    return defValue;
  v5 = (WeightRate_int__o *)sub_1C372A4(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v5, (const MethodInfo_3B94A3C *)Method_WeightRate_int___ctor__);
  max_length = weightArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C372BC(v6);
      if ( !v5 )
        break;
      WeightRate_int___setWeight(
        v5,
        weightArray->m_Items[v8],
        v8,
        (const MethodInfo_3B93F58 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = weightArray->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C372B4(v6);
  }
  if ( !v5 )
    goto LABEL_15;
LABEL_13:
  v10 = UnityEngine_Random__Range_71226972(0, v5->fields.totalweight, 0);
  return WeightRate_int___getData(v5, v10, (const MethodInfo_3B943CC *)Method_WeightRate_int__getData__);
}