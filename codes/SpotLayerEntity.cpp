void __fastcall SpotLayerEntity___ctor(SpotLayerEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E925F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E925F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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
  SpotLayerEntity___c__DisplayClass1_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Int32_array *displayLayers; // x19
  System_Func_int__bool__o *v22; // x20

  if ( (byte_42E925E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, targetLayer, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__, v12, v13, v14);
    sub_B5D5C4(&SpotLayerEntity___c__DisplayClass1_0_TypeInfo, v15, v16, v17);
    byte_42E925E = 1;
  }
  v18 = (SpotLayerEntity___c__DisplayClass1_0_o *)sub_B5D694(SpotLayerEntity___c__DisplayClass1_0_TypeInfo);
  SpotLayerEntity___c__DisplayClass1_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.targetLayer = targetLayer;
  displayLayers = this->fields.displayLayers;
  v22 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_SpotLayerEntity___c__DisplayClass1_0__IsEnabledDispSpot_b__0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__28142236(
           displayLayers,
           (System_Func_T__bool__o *)v22,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
}


bool __fastcall SpotLayerEntity__IsEnabledSpot(SpotLayerEntity_o *this, int32_t targetLayer, const MethodInfo *method)
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
  SpotLayerEntity___c__DisplayClass0_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Int32_array *activeLayers; // x19
  System_Func_int__bool__o *v22; // x20

  if ( (byte_42E925D & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int____68810384, targetLayer, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__, v12, v13, v14);
    sub_B5D5C4(&SpotLayerEntity___c__DisplayClass0_0_TypeInfo, v15, v16, v17);
    byte_42E925D = 1;
  }
  v18 = (SpotLayerEntity___c__DisplayClass0_0_o *)sub_B5D694(SpotLayerEntity___c__DisplayClass0_0_TypeInfo);
  SpotLayerEntity___c__DisplayClass0_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.targetLayer = targetLayer;
  activeLayers = this->fields.activeLayers;
  v22 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_SpotLayerEntity___c__DisplayClass0_0__IsEnabledSpot_b__0__,
    (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
  return BasicHelper__Any_int__28142236(
           activeLayers,
           (System_Func_T__bool__o *)v22,
           (const MethodInfo_1AD6A9C *)Method_BasicHelper_Any_int____68810384);
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