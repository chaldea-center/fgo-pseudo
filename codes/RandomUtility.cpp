void RandomUtility___ctor(RandomUtility_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RandomUtility__GetRandomRangeIndex(System_Int32_array *weightArray, int32_t defValue, const MethodInfo *method)
{
  WeightRate_int__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x21
  int32_t v12; // w1

  if ( (byte_4C26772 & 1) == 0 )
  {
    sub_1C2D490(&Method_WeightRate_int___ctor__);
    sub_1C2D490(&Method_WeightRate_int__getData__);
    sub_1C2D490(&Method_WeightRate_int__getTotalWeight__);
    sub_1C2D490(&Method_WeightRate_int__setWeight__);
    sub_1C2D490(&WeightRate_int__TypeInfo);
    byte_4C26772 = 1;
  }
  if ( !weightArray || !weightArray->max_length )
    return defValue;
  v5 = (WeightRate_int__o *)sub_1C2D6DC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v5, (const MethodInfo_3B7B4CC *)Method_WeightRate_int___ctor__);
  max_length = weightArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C2D6F4(v6, v7, v8);
      if ( !v5 )
        break;
      WeightRate_int___setWeight(
        v5,
        weightArray->m_Items[v10],
        v10,
        (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = weightArray->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C2D6EC(v6, v7);
  }
  if ( !v5 )
    goto LABEL_15;
LABEL_13:
  v12 = UnityEngine_Random__Range_71123924(0, v5->fields.totalweight, 0);
  return WeightRate_int___getData(v5, v12, (const MethodInfo_3B7AE5C *)Method_WeightRate_int__getData__);
}