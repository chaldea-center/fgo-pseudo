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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WeightRate_int__o *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  unsigned __int64 v16; // x21
  int32_t v18; // w1

  if ( (byte_40F8292 & 1) == 0 )
  {
    sub_B16FFC(&Method_WeightRate_int___ctor__, *(_QWORD *)&defValue);
    sub_B16FFC(&Method_WeightRate_int__getData__, v7);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v8);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v9);
    sub_B16FFC(&WeightRate_int__TypeInfo, v10);
    byte_40F8292 = 1;
  }
  if ( !weightArray || !*(_QWORD *)&weightArray->max_length )
    return defValue;
  v11 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, *(_QWORD *)&defValue, method, v3, v4);
  WeightRate_int____ctor(v11, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  v15 = *(_QWORD *)&weightArray->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
      {
        sub_B17100(v12, v13, v14);
        sub_B170A0();
      }
      if ( !v11 )
        break;
      WeightRate_int___setWeight(
        v11,
        weightArray->m_Items[v16 + 1],
        v16,
        (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
      LODWORD(v15) = weightArray->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B170D4();
  }
  if ( !v11 )
    goto LABEL_15;
LABEL_13:
  v18 = UnityEngine_Random__Range_34843248(0, v11->fields.totalweight, 0LL);
  return WeightRate_int___getData(v11, v18, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
}