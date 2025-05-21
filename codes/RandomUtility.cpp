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
  __int64 v12; // x2
  __int64 v13; // x8
  unsigned __int64 v14; // x21
  int32_t v16; // w1

  if ( (byte_4B43F48 & 1) == 0 )
  {
    sub_1BDB878(&Method_WeightRate_int___ctor__, *(_QWORD *)&defValue);
    sub_1BDB878(&Method_WeightRate_int__getData__, v5);
    sub_1BDB878(&Method_WeightRate_int__getTotalWeight__, v6);
    sub_1BDB878(&Method_WeightRate_int__setWeight__, v7);
    sub_1BDB878(&WeightRate_int__TypeInfo, v8);
    byte_4B43F48 = 1;
  }
  if ( !weightArray || !*(_QWORD *)&weightArray->max_length )
    return defValue;
  v9 = (WeightRate_int__o *)sub_1BDBAC4(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v9, (const MethodInfo_3AB9154 *)Method_WeightRate_int___ctor__);
  v13 = *(_QWORD *)&weightArray->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1BDBADC(v10, v11, v12);
      if ( !v9 )
        break;
      WeightRate_int___setWeight(
        v9,
        weightArray->m_Items[v14 + 1],
        v14,
        (const MethodInfo_3AB8670 *)Method_WeightRate_int__setWeight__);
      LODWORD(v13) = weightArray->max_length;
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1BDBAD4(v10, v11);
  }
  if ( !v9 )
    goto LABEL_15;
LABEL_13:
  v16 = UnityEngine_Random__Range_70244360(0, v9->fields.totalweight, 0LL);
  return WeightRate_int___getData(v9, v16, (const MethodInfo_3AB8AE4 *)Method_WeightRate_int__getData__);
}