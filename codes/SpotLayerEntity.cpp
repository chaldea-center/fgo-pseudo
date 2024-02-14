void __fastcall SpotLayerEntity___ctor(SpotLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_421530E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_int___ctor__, method);
    byte_421530E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_2669A80 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  SpotLayerEntity___c__DisplayClass1_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Int32_array *displayLayers; // x19
  System_Func_int__bool__o *v14; // x20

  if ( (byte_421530D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, *(_QWORD *)&targetLayer);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__, v7);
    sub_B0D8A4(&SpotLayerEntity___c__DisplayClass1_0_TypeInfo, v8);
    byte_421530D = 1;
  }
  v9 = (SpotLayerEntity___c__DisplayClass1_0_o *)sub_B0D974(
                                                   SpotLayerEntity___c__DisplayClass1_0_TypeInfo,
                                                   *(_QWORD *)&targetLayer,
                                                   method);
  SpotLayerEntity___c__DisplayClass1_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.targetLayer = targetLayer;
  displayLayers = this->fields.displayLayers;
  v14 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v11, v12);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__24145568(
           displayLayers,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotLayerEntity__IsEnabledSpot(SpotLayerEntity_o *this, int32_t targetLayer, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  SpotLayerEntity___c__DisplayClass0_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_Int32_array *activeLayers; // x19
  System_Func_int__bool__o *v14; // x20

  if ( (byte_421530C & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, *(_QWORD *)&targetLayer);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__, v7);
    sub_B0D8A4(&SpotLayerEntity___c__DisplayClass0_0_TypeInfo, v8);
    byte_421530C = 1;
  }
  v9 = (SpotLayerEntity___c__DisplayClass0_0_o *)sub_B0D974(
                                                   SpotLayerEntity___c__DisplayClass0_0_TypeInfo,
                                                   *(_QWORD *)&targetLayer,
                                                   method);
  SpotLayerEntity___c__DisplayClass0_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.targetLayer = targetLayer;
  activeLayers = this->fields.activeLayers;
  v14 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v11, v12);
  System_Func_int__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__24145568(
           activeLayers,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
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