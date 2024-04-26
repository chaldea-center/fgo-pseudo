void __fastcall SpotLayerEntity___ctor(SpotLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4352796 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_int___ctor__);
    byte_4352796 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21C02EC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SpotLayerEntity__CreatePrimaryKey(SpotLayerEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


bool __fastcall SpotLayerEntity__IsEnabledDispSpot(
        SpotLayerEntity_o *this,
        int32_t targetLayer,
        const MethodInfo *method)
{
  SpotLayerEntity___c__DisplayClass1_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *displayLayers; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4352795 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__);
    sub_B70694(&SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
    byte_4352795 = 1;
  }
  v5 = (SpotLayerEntity___c__DisplayClass1_0_o *)sub_B70764(SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
  SpotLayerEntity___c__DisplayClass1_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.targetLayer = targetLayer;
  displayLayers = this->fields.displayLayers;
  v9 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__,
    (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__29214704(
           displayLayers,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616);
}


bool __fastcall SpotLayerEntity__IsEnabledSpot(SpotLayerEntity_o *this, int32_t targetLayer, const MethodInfo *method)
{
  SpotLayerEntity___c__DisplayClass0_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *activeLayers; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_4352794 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Any_int____69235616);
    sub_B70694(&Method_System_Func_int__bool___ctor__);
    sub_B70694(&System_Func_int__bool__TypeInfo);
    sub_B70694(&Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__);
    sub_B70694(&SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
    byte_4352794 = 1;
  }
  v5 = (SpotLayerEntity___c__DisplayClass0_0_o *)sub_B70764(SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
  SpotLayerEntity___c__DisplayClass0_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.targetLayer = targetLayer;
  activeLayers = this->fields.activeLayers;
  v9 = (System_Func_int__bool__o *)sub_B70764(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__,
    (const MethodInfo_29A62E8 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__29214704(
           activeLayers,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_1BDC7F0 *)Method_BasicHelper_Any_int____69235616);
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