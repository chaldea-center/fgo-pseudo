void __fastcall FuncTypeDetailMaster___ctor(FuncTypeDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB0CE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__, method);
    byte_49BB0CE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    446,
    (const MethodInfo_319B678 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FuncTypeDetailMaster__GetIndividuality(
        FuncTypeDetailMaster_o *this,
        int32_t funcType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  long double inited; // q0
  System_Int32_array *result; // x0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BB0CD & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_int___, *(_QWORD *)&funcType);
    sub_1B4CF90(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__, v5);
    byte_49BB0CD = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         funcType,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( !v6 )
    goto LABEL_6;
  if ( !entity )
    sub_1B4D1EC(v6, v7);
  result = (System_Int32_array *)entity[1].monitor;
  if ( !result )
  {
LABEL_6:
    v10 = Method_System_Array_Empty_int___;
    v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v11 )
    {
      sub_1B9D67C(Method_System_Array_Empty_int___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v12 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1B9D620(inited);
    return **(System_Int32_array ***)(v13 + 184);
  }
  return result;
}