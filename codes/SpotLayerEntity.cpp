void __fastcall SpotLayerEntity___ctor(SpotLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188BCD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4188BCD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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
  System_Int32_array *displayLayers; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_4188BCC & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, *(_QWORD *)&targetLayer);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__, v7);
    sub_B2C35C(&SpotLayerEntity___c__DisplayClass1_0_TypeInfo, v8);
    byte_4188BCC = 1;
  }
  v9 = (SpotLayerEntity___c__DisplayClass1_0_o *)sub_B2C42C(SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
  SpotLayerEntity___c__DisplayClass1_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.targetLayer = targetLayer;
  displayLayers = this->fields.displayLayers;
  v13 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__24273940(
           displayLayers,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
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
  System_Int32_array *activeLayers; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_4188BCB & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, *(_QWORD *)&targetLayer);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__, v7);
    sub_B2C35C(&SpotLayerEntity___c__DisplayClass0_0_TypeInfo, v8);
    byte_4188BCB = 1;
  }
  v9 = (SpotLayerEntity___c__DisplayClass0_0_o *)sub_B2C42C(SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
  SpotLayerEntity___c__DisplayClass0_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.targetLayer = targetLayer;
  activeLayers = this->fields.activeLayers;
  v13 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__24273940(
           activeLayers,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
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