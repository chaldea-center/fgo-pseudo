void __fastcall FuncTypeDetailMaster___ctor(FuncTypeDetailMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D909 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__);
    byte_438D909 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    439,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int___ctor__);
}


System_Int32_array *__fastcall FuncTypeDetailMaster__GetIndividuality(
        FuncTypeDetailMaster_o *this,
        int32_t funcType,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Int32_array *result; // x0
  _QWORD **v8; // x20
  __int64 v9; // x19
  __int16 v10; // w8
  __int64 v11; // x19
  __int64 v12; // x19
  __int64 v13; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438D908 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
    byte_438D908 = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)this,
         &entity,
         funcType,
         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_FuncTypeDetailMaster__FuncTypeDetailEntity__int__TryGetEntity__);
  if ( !v5 )
    goto LABEL_6;
  if ( !entity )
    sub_B7769C(v5, v6);
  result = (System_Int32_array *)entity->fields.age;
  if ( !result )
  {
LABEL_6:
    v8 = (_QWORD **)Method_System_Array_Empty_int___;
    v9 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
    v10 = *(_WORD *)(v9 + 306);
    if ( (v10 & 1) == 0 )
    {
      sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
      v10 = *(_WORD *)(v9 + 306);
    }
    if ( (v10 & 0x400) != 0 )
    {
      v11 = *v8[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_B0F2C4(*v8[6]);
      if ( !*(_DWORD *)(v11 + 224) )
      {
        v12 = *v8[6];
        if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
          sub_B0F2C4(*v8[6]);
        j_il2cpp_runtime_class_init_0(v12);
      }
    }
    v13 = *v8[6];
    if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
      sub_B0F2C4(*v8[6]);
    return **(System_Int32_array ***)(v13 + 184);
  }
  return result;
}