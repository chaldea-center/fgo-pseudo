void BitValue___Il2CppFullySharedGenericType____ctor(
        BitValue_T__o *this,
        System_Func_T__int__o *func,
        const MethodInfo_33216D8 *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.convertFunc = func;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.convertFunc, (int32_t)func, v5, v6);
}


bool BitValue___Il2CppFullySharedGenericType___Check(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_33218C8 *method)
{
  __int64 v3; // x23
  __int64 v4; // x8
  _QWORD *v5; // x20
  int32_t value; // w22
  struct System_Func_T__int__o *convertFunc; // x19
  void *v8; // x0
  __int64 v9; // x8
  __int64 *v10; // x1
  __int64 v11; // x0
  char v12; // vf
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v15; // [xsp+8h] [xbp-18h] BYREF
  int v16; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v17; // [xsp+18h] [xbp-8h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
    sub_1C372B4(v8);
  v9 = *(_QWORD *)(v3 + 192);
  v10 = *(__int64 **)(v9 + 24);
  v11 = *v10;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 16) + 40LL) & 0x80000000) == 0 )
    v5 = (_QWORD *)*v5;
  v15 = v5;
  ((void (__fastcall *)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *))v10[2])(
    v11,
    v10,
    convertFunc,
    &v15,
    &v16);
  return !(((v16 & value) < 0) ^ v12 | ((v16 & value) == 0));
}


bool BitValue___Il2CppFullySharedGenericType___CheckAndOff(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_33219A4 *method)
{
  _QWORD *monitor; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  __int64 v5; // x27
  __int64 v7; // x8
  size_t v8; // x23
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
  _BYTE v23[4]; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v24; // [xsp+18h] [xbp-8h]

  monitor = val.monitor;
  klass = val.klass;
  v24 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v21 = val.klass;
  v5 = *((_QWORD *)val.monitor + 4);
  v7 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  v8 = *(unsigned int *)(v7 + 252);
  v9 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v21 - ((v8 + 15) & 0x1FFFFFFF0LL));
  v10 = v9;
  if ( *(int *)(v7 + 40) >= 0 )
    val.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v21;
  memcpy(&v21, val.klass, *(unsigned int *)(v7 + 252));
  v11 = *(_QWORD *)(v5 + 192);
  v12 = *(__int64 **)(v11 + 32);
  v13 = *v12;
  if ( (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 40LL) & 0x80000000) == 0 )
    v9 = (_QWORD *)*v9;
  v22 = v9;
  ((void (__fastcall *)(__int64, __int64 *, BitValue_T__o *, _QWORD **, _BYTE *))v12[2])(v13, v12, this, &v22, v23);
  v14 = monitor[4];
  v15 = v23[0];
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


void BitValue___Il2CppFullySharedGenericType___Off(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_33217E8 *method)
{
  __int64 v4; // x24
  __int64 v5; // x8
  _QWORD *v6; // x21
  int32_t value; // w23
  struct System_Func_T__int__o *convertFunc; // x20
  void *v9; // x0
  __int64 v10; // x8
  __int64 *v11; // x1
  __int64 v12; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v14; // [xsp+8h] [xbp-18h] BYREF
  int v15; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v16; // [xsp+18h] [xbp-8h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
    sub_1C372B4(v9);
  v10 = *(_QWORD *)(v4 + 192);
  v11 = *(__int64 **)(v10 + 24);
  v12 = *v11;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 40LL) & 0x80000000) == 0 )
    v6 = (_QWORD *)*v6;
  v14 = v6;
  ((void (__fastcall *)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *))v11[2])(
    v12,
    v11,
    convertFunc,
    &v14,
    &v15);
  this->fields.value = value & ~v15;
}


void BitValue___Il2CppFullySharedGenericType___On(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_3321708 *method)
{
  __int64 v4; // x24
  __int64 v5; // x8
  _QWORD *v6; // x21
  int32_t value; // w23
  struct System_Func_T__int__o *convertFunc; // x20
  void *v9; // x0
  __int64 v10; // x8
  __int64 *v11; // x1
  __int64 v12; // x0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v14; // [xsp+8h] [xbp-18h] BYREF
  int v15; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v16; // [xsp+18h] [xbp-8h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
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
    sub_1C372B4(v9);
  v10 = *(_QWORD *)(v4 + 192);
  v11 = *(__int64 **)(v10 + 24);
  v12 = *v11;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 40LL) & 0x80000000) == 0 )
    v6 = (_QWORD *)*v6;
  v14 = v6;
  ((void (__fastcall *)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *))v11[2])(
    v12,
    v11,
    convertFunc,
    &v14,
    &v15);
  this->fields.value = v15 | value;
}


void BitValue___Il2CppFullySharedGenericType___Reset(BitValue_T__o *this, const MethodInfo_3321AFC *method)
{
  this->fields.value = 0;
}