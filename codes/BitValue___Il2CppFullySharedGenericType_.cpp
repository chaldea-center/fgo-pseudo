void BitValue___Il2CppFullySharedGenericType____ctor(
        BitValue_T__o *this,
        System_Func_T__int__o *func,
        const MethodInfo_3E436C8 *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.convertFunc = func;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.convertFunc, (int32_t)func, v5, v6, v7, v8, v9, v10);
}


bool BitValue___Il2CppFullySharedGenericType___Check(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_3E438D8 *method)
{
  __int64 v3; // x8
  __int64 v4; // x23
  __int64 v5; // x8
  _QWORD *v6; // x20
  int v7; // w24
  int32_t value; // w22
  struct System_Func_T__int__o *convertFunc; // x19
  void *v10; // x0
  __int64 v11; // x1
  __int64 *v12; // x1
  __int64 v13; // x0
  void (__fastcall *v14)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *); // x8
  char v15; // vf
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v18; // [xsp+8h] [xbp-18h] BYREF
  int v19; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v20; // [xsp+18h] [xbp-8h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *((_QWORD *)val.monitor + 4);
  klass = val.klass;
  v4 = *(_QWORD *)(v3 + 192);
  v5 = *(_QWORD *)(v4 + 16);
  val.monitor = (void *)*(unsigned int *)(v5 + 252);
  v6 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&klass
                                                                 - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL));
  v7 = *(_DWORD *)(v5 + 40);
  value = this->fields.value;
  convertFunc = this->fields.convertFunc;
  if ( v7 >= 0 )
    val.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&klass;
  v10 = memcpy((char *)&klass - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL), val.klass, (size_t)val.monitor);
  if ( !convertFunc )
    sub_21FFECC(v10, v11);
  v12 = *(__int64 **)(v4 + 24);
  v13 = *v12;
  if ( (v7 & 0x80000000) == 0 )
    v6 = (_QWORD *)*v6;
  v14 = (void (__fastcall *)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *))v12[2];
  v18 = v6;
  v14(v13, v12, convertFunc, &v18, &v19);
  return !(((v19 & value) < 0) ^ v15 | ((v19 & value) == 0));
}


bool BitValue___Il2CppFullySharedGenericType___CheckAndOff(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_3E439BC *method)
{
  _QWORD *monitor; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  __int64 v6; // x8
  __int64 v7; // x27
  __int64 v8; // x8
  size_t v9; // x22
  _QWORD *v10; // x24
  _QWORD *v11; // x20
  int v12; // w28
  __int64 *v13; // x1
  __int64 v14; // x0
  void (__fastcall *v15)(__int64, __int64 *, BitValue_T__o *, _QWORD *, _BYTE *); // x8
  __int64 v16; // x8
  int v17; // w23
  __int64 v18; // x24
  int v19; // w27
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v20; // x1
  __int64 *v21; // x1
  __int64 v22; // x0
  void (__fastcall *v23)(__int64, __int64 *, BitValue_T__o *, _QWORD *, _QWORD *); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v25; // [xsp+0h] [xbp-20h] BYREF
  _BYTE v26[4]; // [xsp+Ch] [xbp-14h] BYREF
  _QWORD v27[2]; // [xsp+10h] [xbp-10h] BYREF

  monitor = val.monitor;
  klass = val.klass;
  v27[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *((_QWORD *)val.monitor + 4);
  v25 = val.klass;
  v7 = *(_QWORD *)(v6 + 192);
  v8 = *(_QWORD *)(v7 + 16);
  v9 = *(unsigned int *)(v8 + 252);
  v10 = &v26[-((v9 + 15) & 0x1FFFFFFF0LL) - 4];
  v11 = v10;
  v12 = *(_DWORD *)(v8 + 40);
  if ( v12 >= 0 )
    val.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v25;
  memcpy(&v25, val.klass, *(unsigned int *)(v8 + 252));
  v13 = *(__int64 **)(v7 + 32);
  v14 = *v13;
  if ( (v12 & 0x80000000) == 0 )
    v10 = (_QWORD *)*v10;
  v15 = (void (__fastcall *)(__int64, __int64 *, BitValue_T__o *, _QWORD *, _BYTE *))v13[2];
  v27[0] = v10;
  v15(v14, v13, this, v27, v26);
  v16 = monitor[4];
  v17 = v26[0];
  v18 = *(_QWORD *)(v16 + 192);
  v19 = *(_DWORD *)(*(_QWORD *)(v18 + 16) + 40LL);
  if ( v19 >= 0 )
    v20 = &v25;
  else
    v20 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy(&v26[-((v9 + 15) & 0x1FFFFFFF0LL) - 4], v20, v9);
  v21 = *(__int64 **)(v18 + 40);
  v22 = *v21;
  if ( (v19 & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v23 = (void (__fastcall *)(__int64, __int64 *, BitValue_T__o *, _QWORD *, _QWORD *))v21[2];
  v27[0] = v11;
  v23(v22, v21, this, v27, v11);
  return v17 != 0;
}


void BitValue___Il2CppFullySharedGenericType___Off(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_3E437E8 *method)
{
  __int64 v4; // x8
  __int64 v5; // x24
  __int64 v6; // x8
  _QWORD *v7; // x21
  int v8; // w25
  int32_t value; // w23
  struct System_Func_T__int__o *convertFunc; // x20
  void *v11; // x0
  __int64 v12; // x1
  __int64 *v13; // x1
  __int64 v14; // x0
  void (__fastcall *v15)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v17; // [xsp+8h] [xbp-18h] BYREF
  int v18; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v19; // [xsp+18h] [xbp-8h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_QWORD *)val.monitor + 4);
  klass = val.klass;
  v5 = *(_QWORD *)(v4 + 192);
  v6 = *(_QWORD *)(v5 + 16);
  val.monitor = (void *)*(unsigned int *)(v6 + 252);
  v7 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&klass
                                                                 - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL));
  v8 = *(_DWORD *)(v6 + 40);
  value = this->fields.value;
  convertFunc = this->fields.convertFunc;
  if ( v8 >= 0 )
    val.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&klass;
  v11 = memcpy((char *)&klass - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL), val.klass, (size_t)val.monitor);
  if ( !convertFunc )
    sub_21FFECC(v11, v12);
  v13 = *(__int64 **)(v5 + 24);
  v14 = *v13;
  if ( (v8 & 0x80000000) == 0 )
    v7 = (_QWORD *)*v7;
  v15 = (void (__fastcall *)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *))v13[2];
  v17 = v7;
  v15(v14, v13, convertFunc, &v17, &v18);
  this->fields.value = value & ~v18;
}


void BitValue___Il2CppFullySharedGenericType___On(
        BitValue_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o val,
        const MethodInfo_3E436F8 *method)
{
  __int64 v4; // x8
  __int64 v5; // x24
  __int64 v6; // x8
  _QWORD *v7; // x21
  int v8; // w25
  int32_t value; // w23
  struct System_Func_T__int__o *convertFunc; // x20
  void *v11; // x0
  __int64 v12; // x1
  __int64 *v13; // x1
  __int64 v14; // x0
  void (__fastcall *v15)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *); // x8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  _QWORD *v17; // [xsp+8h] [xbp-18h] BYREF
  int v18; // [xsp+14h] [xbp-Ch] BYREF
  __int64 v19; // [xsp+18h] [xbp-8h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *((_QWORD *)val.monitor + 4);
  klass = val.klass;
  v5 = *(_QWORD *)(v4 + 192);
  v6 = *(_QWORD *)(v5 + 16);
  val.monitor = (void *)*(unsigned int *)(v6 + 252);
  v7 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&klass
                                                                 - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL));
  v8 = *(_DWORD *)(v6 + 40);
  value = this->fields.value;
  convertFunc = this->fields.convertFunc;
  if ( v8 >= 0 )
    val.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&klass;
  v11 = memcpy((char *)&klass - (((__int64)val.monitor + 15) & 0x1FFFFFFF0LL), val.klass, (size_t)val.monitor);
  if ( !convertFunc )
    sub_21FFECC(v11, v12);
  v13 = *(__int64 **)(v5 + 24);
  v14 = *v13;
  if ( (v8 & 0x80000000) == 0 )
    v7 = (_QWORD *)*v7;
  v15 = (void (__fastcall *)(__int64, __int64 *, struct System_Func_T__int__o *, _QWORD **, int *))v13[2];
  v17 = v7;
  v15(v14, v13, convertFunc, &v17, &v18);
  this->fields.value = v18 | value;
}


void BitValue___Il2CppFullySharedGenericType___Reset(BitValue_T__o *this, const MethodInfo_3E43AFC *method)
{
  this->fields.value = 0;
}