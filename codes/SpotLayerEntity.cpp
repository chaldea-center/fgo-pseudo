void __fastcall SpotLayerEntity___ctor(SpotLayerEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FADCA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FADCA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  SpotLayerEntity___c__DisplayClass1_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Int32_array *displayLayers; // x19
  System_Func_int__bool__o *v17; // x20

  if ( (byte_40FADC9 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, *(_QWORD *)&targetLayer);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__, v9);
    sub_B16FFC(&SpotLayerEntity___c__DisplayClass1_0_TypeInfo, v10);
    byte_40FADC9 = 1;
  }
  v11 = (SpotLayerEntity___c__DisplayClass1_0_o *)sub_B170CC(
                                                    SpotLayerEntity___c__DisplayClass1_0_TypeInfo,
                                                    *(_QWORD *)&targetLayer,
                                                    method,
                                                    v3,
                                                    v4);
  SpotLayerEntity___c__DisplayClass1_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.targetLayer = targetLayer;
  displayLayers = this->fields.displayLayers;
  v17 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v12, v13, v14, v15);
  System_Func_int__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__25910576(
           displayLayers,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotLayerEntity__IsEnabledSpot(SpotLayerEntity_o *this, int32_t targetLayer, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  SpotLayerEntity___c__DisplayClass0_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Int32_array *activeLayers; // x19
  System_Func_int__bool__o *v17; // x20

  if ( (byte_40FADC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, *(_QWORD *)&targetLayer);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__, v9);
    sub_B16FFC(&SpotLayerEntity___c__DisplayClass0_0_TypeInfo, v10);
    byte_40FADC8 = 1;
  }
  v11 = (SpotLayerEntity___c__DisplayClass0_0_o *)sub_B170CC(
                                                    SpotLayerEntity___c__DisplayClass0_0_TypeInfo,
                                                    *(_QWORD *)&targetLayer,
                                                    method,
                                                    v3,
                                                    v4);
  SpotLayerEntity___c__DisplayClass0_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.targetLayer = targetLayer;
  activeLayers = this->fields.activeLayers;
  v17 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v12, v13, v14, v15);
  System_Func_int__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__25910576(
           activeLayers,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
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