void SpotLayerEntity___ctor(SpotLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939312 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_5939312 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t SpotLayerEntity__CreatePrimaryKey(SpotLayerEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


bool SpotLayerEntity__IsEnabledDispSpot(SpotLayerEntity_o *this, int32_t targetLayer, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *displayLayers; // x20
  System_Func_int__bool__o *v9; // x19

  if ( (byte_5939311 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__);
    sub_21FFC50(&SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
    byte_5939311 = 1;
  }
  v5 = sub_21FFEBC(SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  displayLayers = this->fields.displayLayers;
  *(_DWORD *)(v5 + 16) = targetLayer;
  v9 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__,
    0);
  return BasicHelper__Any_int__58574768(
           displayLayers,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
}


bool SpotLayerEntity__IsEnabledSpot(SpotLayerEntity_o *this, int32_t targetLayer, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *activeLayers; // x20
  System_Func_int__bool__o *v9; // x19

  if ( (byte_5939310 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__);
    sub_21FFC50(&SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
    byte_5939310 = 1;
  }
  v5 = sub_21FFEBC(SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  activeLayers = this->fields.activeLayers;
  *(_DWORD *)(v5 + 16) = targetLayer;
  v9 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__,
    0);
  return BasicHelper__Any_int__58574768(
           activeLayers,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
}


void SpotLayerEntity___c__DisplayClass0_0___ctor(
        SpotLayerEntity___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SpotLayerEntity___c__DisplayClass0_0___IsEnabledSpot_b__0(
        SpotLayerEntity___c__DisplayClass0_0_o *this,
        int32_t n,
        const MethodInfo *method)
{
  return this->fields.targetLayer == n;
}


void SpotLayerEntity___c__DisplayClass1_0___ctor(
        SpotLayerEntity___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SpotLayerEntity___c__DisplayClass1_0___IsEnabledDispSpot_b__0(
        SpotLayerEntity___c__DisplayClass1_0_o *this,
        int32_t n,
        const MethodInfo *method)
{
  return this->fields.targetLayer == n;
}