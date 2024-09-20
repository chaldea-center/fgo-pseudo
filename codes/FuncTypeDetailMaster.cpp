void __fastcall FuncTypeDetailMaster___ctor(FuncTypeDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__);
    byte_4A5B3B7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    440,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__);
}


System_Int32_array *__fastcall FuncTypeDetailMaster__GetIndividuality(
        FuncTypeDetailMaster_o *this,
        int32_t funcType,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Int32_array *result; // x0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B3B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
    byte_4A5B3B6 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         funcType,
         (const MethodInfo_311D988 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( !v5 )
    goto LABEL_6;
  if ( !entity )
    sub_1B8880C(v5, v6);
  result = (System_Int32_array *)entity[1].monitor;
  if ( !result )
  {
LABEL_6:
    v8 = Method_System_Array_Empty_int___;
    v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v9 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BDA48C(v10);
    if ( !*(_DWORD *)(v10 + 224) )
      j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BDA48C(v11);
    return **(System_Int32_array ***)(v11 + 184);
  }
  return result;
}