void __fastcall RandomUtility___ctor(RandomUtility_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RandomUtility__GetRandomRangeIndex(
        System_Int32_array *weightArray,
        int32_t defValue,
        const MethodInfo *method)
{
  WeightRate_int__o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x21
  int32_t v11; // w1
  __int64 v12; // x0

  if ( (byte_42AE505 & 1) == 0 )
  {
    sub_B52984(&Method_WeightRate_int___ctor__);
    sub_B52984(&Method_WeightRate_int__getData__);
    sub_B52984(&Method_WeightRate_int__getTotalWeight__);
    sub_B52984(&Method_WeightRate_int__setWeight__);
    sub_B52984(&WeightRate_int__TypeInfo);
    byte_42AE505 = 1;
  }
  if ( !weightArray || !*(_QWORD *)&weightArray->max_length )
    return defValue;
  v5 = (WeightRate_int__o *)sub_B52A54(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v5, (const MethodInfo_2C1C5B0 *)Method_WeightRate_int___ctor__);
  v8 = *(_QWORD *)&weightArray->max_length;
  if ( (int)v8 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v8 )
      {
        v12 = sub_B52A88(v6);
        sub_B52A28(v12, 0LL);
      }
      if ( !v5 )
        break;
      WeightRate_int___setWeight(
        v5,
        weightArray->m_Items[v9 + 1],
        v9,
        (const MethodInfo_2C1B778 *)Method_WeightRate_int__setWeight__);
      LODWORD(v8) = weightArray->max_length;
      if ( (__int64)++v9 >= (int)v8 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B52A5C(v6, v7);
  }
  if ( !v5 )
    goto LABEL_15;
LABEL_13:
  v11 = UnityEngine_Random__Range_35650740(0, v5->fields.totalweight, 0LL);
  return WeightRate_int___getData(v5, v11, (const MethodInfo_2C1BBFC *)Method_WeightRate_int__getData__);
}