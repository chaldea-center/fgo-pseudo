void __fastcall FuncTypeDetailMaster___ctor(FuncTypeDetailMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1644B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__, method, v2);
    byte_4B1644B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    440,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall FuncTypeDetailMaster__GetIndividuality(
        FuncTypeDetailMaster_o *this,
        int32_t funcType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  _BOOL8 v7; // x0
  __int64 v8; // x1
  long double inited; // q0
  System_Int32_array *result; // x0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1644A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, *(_QWORD *)&funcType, method);
    sub_1BCA7E0(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__, v5, v6);
    byte_4B1644A = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         funcType,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( !v7 )
    goto LABEL_6;
  if ( !entity )
    sub_1BCAA3C(v7, v8);
  result = (System_Int32_array *)entity[1].monitor;
  if ( !result )
  {
LABEL_6:
    v11 = Method_System_Array_Empty_int___;
    v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v12 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v8);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13, v8);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C1C6BC(inited);
    return **(System_Int32_array ***)(v14 + 184);
  }
  return result;
}