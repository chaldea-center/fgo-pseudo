void __fastcall BitValue___Il2CppFullySharedGenericType____ctor(
        BitValue_T__o *this,
        System_Func_T__int__o *func,
        const MethodInfo_307D8D4 *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.convertFunc = func;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.convertFunc, (int32_t)func, v5, v6);
}


bool __fastcall BitValue___Il2CppFullySharedGenericType___Check(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_307DAC4 *method)
{
  __int64 v3; // x23
  __int64 v4; // x8
  _QWORD *v5; // x20
  int32_t value; // w22
  struct System_Func_T__int__o *convertFunc; // x19
  void *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x8
  __int64 *v11; // x1
  __int64 v12; // x0
  char v13; // vf
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v16; // [xsp+8h] [xbp-18h] BYREF
  int v17; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v18; // [xsp+18h] [xbp-8h]

  v18 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  klass = val.klass;
  v3 = *((_QWORD *)val.monitor + 4);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  val.monitor = (void *)*(unsigned int *)(v4 + 252);
  v5 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&klass
                                                                 - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL));
  value = this->fields.value;
  convertFunc = this->fields.convertFunc;
  if ( *(int *)(v4 + 40) >= 0 )
    val.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&klass;
  v8 = memcpy((char *)&klass - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL), val.klass, (size_t)val.monitor);
  if ( !convertFunc )
    sub_1B71828(v8, v9);
  v10 = *(_QWORD *)(v3 + 192);
  v11 = *(__int64 **)(v10 + 24);
  v12 = *v11;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 40LL) & 0x80000000) == 0 )
    v5 = (_QWORD *)*v5;
  v16 = v5;
  ((void (__fastcall *)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *))v11[2])(
    v12,
    v11,
    convertFunc,
    &v16,
    &v17);
  return !(((v17 & value) < 0) ^ v13 | ((v17 & value) == 0));
}


bool __fastcall BitValue___Il2CppFullySharedGenericType___CheckAndOff(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_307DBA0 *method)
{
  _QWORD *monitor; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  __int64 v5; // x27
  __int64 v7; // x8
  __int64 v8; // x23
  _QWORD *v9; // x24
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 *v12; // x1
  __int64 v13; // x0
  __int64 v14; // x24
  int v15; // w22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v16; // x1
  __int64 v17; // x8
  __int64 *v18; // x1
  __int64 v19; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v21; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v22; // [xsp+8h] [xbp-18h] BYREF
  char v23[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v24; // [xsp+18h] [xbp-8h]

  monitor = val.monitor;
  klass = val.klass;
  v24 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v21 = val.klass;
  v5 = *((_QWORD *)val.monitor + 4);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  v8 = *(unsigned int *)(v7 + 252);
  v9 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v21 - ((v8 + 15) & 0x1FFFFFFF0LL));
  v10 = v9;
  if ( *(int *)(v7 + 40) >= 0 )
    val.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v21;
  memcpy(&v21, val.klass, *(_DWORD *)(v7 + 252));
  v11 = *(_QWORD *)(v5 + 192);
  v12 = *(__int64 **)(v11 + 32);
  v13 = *v12;
  if ( (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 40LL) & 0x80000000) == 0 )
    v9 = (_QWORD *)*v9;
  v22 = v9;
  ((void (__fastcall *)(__int64, __int64 *, BitValue_T__o *, _QWORD **, char *))v12[2])(v13, v12, this, &v22, v23);
  v14 = monitor[4];
  v15 = (unsigned __int8)v23[0];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL) + 40LL) >= 0 )
    v16 = &v21;
  else
    v16 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v21 - ((v8 + 15) & 0x1FFFFFFF0LL), v16, v8);
  v17 = *(_QWORD *)(v14 + 192);
  v18 = *(__int64 **)(v17 + 40);
  v19 = *v18;
  if ( (*(_DWORD *)(*(_QWORD *)(v17 + 16) + 40LL) & 0x80000000) == 0 )
    v10 = (_QWORD *)*v10;
  v22 = v10;
  ((void (__fastcall *)(__int64, __int64 *, BitValue_T__o *, _QWORD **, _QWORD *))v18[2])(v19, v18, this, &v22, v10);
  return v15 != 0;
}


void __fastcall BitValue___Il2CppFullySharedGenericType___Off(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_307D9E4 *method)
{
  __int64 v4; // x24
  __int64 v5; // x8
  _QWORD *v6; // x21
  int32_t value; // w23
  struct System_Func_T__int__o *convertFunc; // x20
  void *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  __int64 *v12; // x1
  __int64 v13; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v15; // [xsp+8h] [xbp-18h] BYREF
  int v16; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v17; // [xsp+18h] [xbp-8h]

  v17 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  klass = val.klass;
  v4 = *((_QWORD *)val.monitor + 4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  val.monitor = (void *)*(unsigned int *)(v5 + 252);
  v6 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&klass
                                                                 - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL));
  value = this->fields.value;
  convertFunc = this->fields.convertFunc;
  if ( *(int *)(v5 + 40) >= 0 )
    val.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&klass;
  v9 = memcpy((char *)&klass - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL), val.klass, (size_t)val.monitor);
  if ( !convertFunc )
    sub_1B71828(v9, v10);
  v11 = *(_QWORD *)(v4 + 192);
  v12 = *(__int64 **)(v11 + 24);
  v13 = *v12;
  if ( (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 40LL) & 0x80000000) == 0 )
    v6 = (_QWORD *)*v6;
  v15 = v6;
  ((void (__fastcall *)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *))v12[2])(
    v13,
    v12,
    convertFunc,
    &v15,
    &v16);
  this->fields.value = value & ~v16;
}


void __fastcall BitValue___Il2CppFullySharedGenericType___On(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_307D904 *method)
{
  __int64 v4; // x24
  __int64 v5; // x8
  _QWORD *v6; // x21
  int32_t value; // w23
  struct System_Func_T__int__o *convertFunc; // x20
  void *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  __int64 *v12; // x1
  __int64 v13; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v15; // [xsp+8h] [xbp-18h] BYREF
  int v16; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v17; // [xsp+18h] [xbp-8h]

  v17 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  klass = val.klass;
  v4 = *((_QWORD *)val.monitor + 4);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  val.monitor = (void *)*(unsigned int *)(v5 + 252);
  v6 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&klass
                                                                 - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL));
  value = this->fields.value;
  convertFunc = this->fields.convertFunc;
  if ( *(int *)(v5 + 40) >= 0 )
    val.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&klass;
  v9 = memcpy((char *)&klass - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL), val.klass, (size_t)val.monitor);
  if ( !convertFunc )
    sub_1B71828(v9, v10);
  v11 = *(_QWORD *)(v4 + 192);
  v12 = *(__int64 **)(v11 + 24);
  v13 = *v12;
  if ( (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 40LL) & 0x80000000) == 0 )
    v6 = (_QWORD *)*v6;
  v15 = v6;
  ((void (__fastcall *)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *))v12[2])(
    v13,
    v12,
    convertFunc,
    &v15,
    &v16);
  this->fields.value = v16 | value;
}


void __fastcall BitValue___Il2CppFullySharedGenericType___Reset(BitValue_T__o *this, const MethodInfo_307DCF8 *method)
{
  this->fields.value = 0;
}