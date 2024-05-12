void __fastcall SpotLayerEntity___ctor(SpotLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BF12 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438BF12 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_438BF11 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__);
    sub_B775C4(&SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
    byte_438BF11 = 1;
  }
  v5 = (SpotLayerEntity___c__DisplayClass1_0_o *)sub_B77694(SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
  SpotLayerEntity___c__DisplayClass1_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.targetLayer = targetLayer;
  displayLayers = this->fields.displayLayers;
  v9 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__,
    (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__29777580(
           displayLayers,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304);
}


bool __fastcall SpotLayerEntity__IsEnabledSpot(SpotLayerEntity_o *this, int32_t targetLayer, const MethodInfo *method)
{
  SpotLayerEntity___c__DisplayClass0_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Int32_array *activeLayers; // x19
  System_Func_int__bool__o *v9; // x20

  if ( (byte_438BF10 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_int____69468304);
    sub_B775C4(&Method_System_Func_int__bool___ctor__);
    sub_B775C4(&System_Func_int__bool__TypeInfo);
    sub_B775C4(&Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__);
    sub_B775C4(&SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
    byte_438BF10 = 1;
  }
  v5 = (SpotLayerEntity___c__DisplayClass0_0_o *)sub_B77694(SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
  SpotLayerEntity___c__DisplayClass0_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.targetLayer = targetLayer;
  activeLayers = this->fields.activeLayers;
  v9 = (System_Func_int__bool__o *)sub_B77694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__,
    (const MethodInfo_29E3034 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__29777580(
           activeLayers,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_1C65EAC *)Method_BasicHelper_Any_int____69468304);
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