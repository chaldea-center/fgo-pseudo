void __fastcall SpotLayerEntity___ctor(SpotLayerEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16CA6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16CA6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SpotLayerEntity__CreatePrimaryKey(SpotLayerEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotLayerEntity__IsEnabledDispSpot(
        SpotLayerEntity_o *this,
        int32_t targetLayer,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Int32_array *displayLayers; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_4B16CA5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, *(_QWORD *)&targetLayer, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__, v8, v9);
    sub_1BCA7E0(&SpotLayerEntity___c__DisplayClass1_0_TypeInfo, v10, v11);
    byte_4B16CA5 = 1;
  }
  v12 = sub_1BCAA2C(SpotLayerEntity___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&targetLayer, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = targetLayer;
  displayLayers = this->fields.displayLayers;
  v18 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v14, v15, v16);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__,
    0LL);
  return BasicHelper__Any_int__49273364(
           displayLayers,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotLayerEntity__IsEnabledSpot(SpotLayerEntity_o *this, int32_t targetLayer, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Int32_array *activeLayers; // x19
  System_Func_int__bool__o *v18; // x20

  if ( (byte_4B16CA4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, *(_QWORD *)&targetLayer, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__, v8, v9);
    sub_1BCA7E0(&SpotLayerEntity___c__DisplayClass0_0_TypeInfo, v10, v11);
    byte_4B16CA4 = 1;
  }
  v12 = sub_1BCAA2C(SpotLayerEntity___c__DisplayClass0_0_TypeInfo, *(_QWORD *)&targetLayer, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = targetLayer;
  activeLayers = this->fields.activeLayers;
  v18 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v14, v15, v16);
  System_Func_int__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__,
    0LL);
  return BasicHelper__Any_int__49273364(
           activeLayers,
           (System_Func_T__bool__o *)v18,
           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
}


void __fastcall SpotLayerEntity___c__DisplayClass0_0___ctor(
        SpotLayerEntity___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SpotLayerEntity___c__DisplayClass0_0___IsEnabledSpot_b__0(
        SpotLayerEntity___c__DisplayClass0_0_o *this,
        int32_t n,
        const MethodInfo *method)
{
  return this->fields.targetLayer == n;
}


void __fastcall SpotLayerEntity___c__DisplayClass1_0___ctor(
        SpotLayerEntity___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SpotLayerEntity___c__DisplayClass1_0___IsEnabledDispSpot_b__0(
        SpotLayerEntity___c__DisplayClass1_0_o *this,
        int32_t n,
        const MethodInfo *method)
{
  return this->fields.targetLayer == n;
}