void __fastcall RandomUtility___ctor(RandomUtility_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall RandomUtility__GetRandomRangeIndex(
        System_Int32_array *weightArray,
        int32_t defValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WeightRate_int__o *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x8
  unsigned __int64 v22; // x21
  int32_t v24; // w1
  __int64 v25; // x0

  if ( (byte_42E6F76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_WeightRate_int___ctor__, defValue, (_DWORD)method, v3);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v6, v7, v8);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v9, v10, v11);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v12, v13, v14);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v15, v16, v17);
    byte_42E6F76 = 1;
  }
  if ( !weightArray || !*(_QWORD *)&weightArray->max_length )
    return defValue;
  v18 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v18, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  v21 = *(_QWORD *)&weightArray->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
      {
        v25 = sub_B5D6C8(v19);
        sub_B5D668(v25, 0LL);
      }
      if ( !v18 )
        break;
      WeightRate_int___setWeight(
        v18,
        weightArray->m_Items[v22 + 1],
        v22,
        (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
      LODWORD(v21) = weightArray->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_13;
    }
LABEL_15:
    sub_B5D69C(v19, v20);
  }
  if ( !v18 )
    goto LABEL_15;
LABEL_13:
  v24 = UnityEngine_Random__Range_35654020(0, v18->fields.totalweight, 0LL);
  return WeightRate_int___getData(v18, v24, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
}