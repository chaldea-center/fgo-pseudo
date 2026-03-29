void SpotLayerEntity___ctor(SpotLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D315E8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D315E8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
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
  System_Int32_array *displayLayers; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4D315E7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__);
    sub_1C93AD4(&SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
    byte_4D315E7 = 1;
  }
  v5 = sub_1C93D20(SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = targetLayer;
  displayLayers = this->fields.displayLayers;
  v9 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__,
    0);
  return BasicHelper__Any_int__51960056(
           displayLayers,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
}


bool SpotLayerEntity__IsEnabledSpot(SpotLayerEntity_o *this, int32_t targetLayer, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *activeLayers; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4D315E6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__);
    sub_1C93AD4(&SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
    byte_4D315E6 = 1;
  }
  v5 = sub_1C93D20(SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_DWORD *)(v5 + 16) = targetLayer;
  activeLayers = this->fields.activeLayers;
  v9 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__,
    0);
  return BasicHelper__Any_int__51960056(
           activeLayers,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
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