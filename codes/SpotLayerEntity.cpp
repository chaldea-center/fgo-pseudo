void __fastcall SpotLayerEntity___ctor(SpotLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC859F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC859F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array *displayLayers; // x19
  System_Func_int__bool__o *v12; // x20

  if ( (byte_4BC859E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_int____77547112, *(_QWORD *)&targetLayer);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__, v6);
    sub_1C1ABD4(&SpotLayerEntity___c__DisplayClass1_0_TypeInfo, v7);
    byte_4BC859E = 1;
  }
  v8 = sub_1C1AE20(SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C1AE30(v9, v10);
  *(_DWORD *)(v8 + 16) = targetLayer;
  displayLayers = this->fields.displayLayers;
  v12 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__,
    0LL);
  return BasicHelper__Any_int__49848700(
           displayLayers,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2F8A17C *)Method_BasicHelper_Any_int____77547112);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotLayerEntity__IsEnabledSpot(SpotLayerEntity_o *this, int32_t targetLayer, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  System_Int32_array *activeLayers; // x19
  System_Func_int__bool__o *v12; // x20

  if ( (byte_4BC859D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_Any_int____77547112, *(_QWORD *)&targetLayer);
    sub_1C1ABD4(&System_Func_int__bool__TypeInfo, v5);
    sub_1C1ABD4(&Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__, v6);
    sub_1C1ABD4(&SpotLayerEntity___c__DisplayClass0_0_TypeInfo, v7);
    byte_4BC859D = 1;
  }
  v8 = sub_1C1AE20(SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C1AE30(v9, v10);
  *(_DWORD *)(v8 + 16) = targetLayer;
  activeLayers = this->fields.activeLayers;
  v12 = (System_Func_int__bool__o *)sub_1C1AE20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__,
    0LL);
  return BasicHelper__Any_int__49848700(
           activeLayers,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2F8A17C *)Method_BasicHelper_Any_int____77547112);
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