void RandomUtility___ctor(RandomUtility_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t RandomUtility__GetRandomRangeIndex(System_Int32_array *weightArray, int32_t defValue, const MethodInfo *method)
{
  WeightRate_int__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x2
  signed __int64 v10; // x23
  int32_t v12; // w1

  if ( (byte_596FCCC & 1) == 0 )
  {
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    sub_2213A60(&WeightRate_int__TypeInfo);
    byte_596FCCC = 1;
  }
  if ( !weightArray || !weightArray->max_length )
    return defValue;
  v5 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v5, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
  max_length = weightArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_2213CE4(v6);
      if ( !v5 )
        break;
      v10 = v9 + 1;
      WeightRate_int___setWeight(
        v5,
        weightArray->m_Items[v9],
        v9,
        (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = weightArray->max_length;
      v9 = v10;
      if ( v10 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(v6, v7);
  }
  if ( !v5 )
    goto LABEL_14;
LABEL_13:
  v12 = UnityEngine_Random__Range_83400680(0, v5->fields.totalweight, 0);
  return WeightRate_int___getData(v5, v12, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
}