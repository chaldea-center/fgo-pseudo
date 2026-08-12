void DataEntityBase___ctor(DataEntityBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        const MethodInfo_3854338 *method)
{
  long double v2; // q0
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  __int64 *v5; // x9
  __int64 v6; // x8
  __int16 v7; // w10
  __int64 v8; // x0
  char *v9; // x21
  int v10; // w0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v11; // x3
  _QWORD v14[3]; // [xsp+8h] [xbp-18h] BYREF

  monitor = arg1.monitor;
  klass = arg1.klass;
  v14[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = (__int64 *)*((_QWORD *)arg1.monitor + 7);
  v14[0] = arg1.klass;
  if ( !v5 )
  {
    sub_224B964();
    v5 = (__int64 *)monitor[7];
  }
  v6 = *v5;
  v7 = *(_WORD *)(*v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = *v5;
  }
  else
  {
    v8 = sub_224B908(v2);
    v5 = (__int64 *)monitor[7];
    v6 = *v5;
    v7 = *(_WORD *)(*v5 + 309);
  }
  v9 = (char *)&v14[-1] - (((unsigned int)(*(_DWORD *)(v8 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v7 & 1) != 0 )
  {
    v10 = v6;
  }
  else
  {
    v10 = sub_224B908(v2);
    v5 = (__int64 *)monitor[7];
    v6 = *v5;
  }
  if ( *(int *)(v6 + 40) >= 0 )
    v11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v14;
  else
    v11 = klass;
  sub_22146B4(v10, v5[1], (int)v9, v11);
  return (System_String_o *)v14[1];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        const MethodInfo_3854748 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  void **monitor; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v5; // x23
  _QWORD *v6; // x26
  __int64 v7; // x28
  size_t v8; // x2
  size_t v9; // x24
  _QWORD *v10; // x20
  _QWORD *v11; // x21
  int v12; // w27
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v13; // x1
  void **v14; // x1
  __int64 v15; // x1
  __int64 *v16; // x1
  __int64 v17; // x0
  void (__fastcall *v18)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *); // x9
  __int64 v20; // [xsp+0h] [xbp-40h] BYREF
  void *v21; // [xsp+8h] [xbp-38h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v22; // [xsp+10h] [xbp-30h] BYREF
  _QWORD v23[3]; // [xsp+18h] [xbp-28h] BYREF
  _QWORD v24[2]; // [xsp+30h] [xbp-10h] BYREF

  klass = arg2.klass;
  monitor = (void **)arg1.monitor;
  v5 = arg1.klass;
  v24[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *(_QWORD **)&arg2.klass->_1.this_arg.bits;
  v21 = arg1.monitor;
  v22 = arg1.klass;
  if ( !v6 )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26573/*"{0}:{1}"*/);
    v6 = *(_QWORD **)&klass->_1.this_arg.bits;
    if ( !v6 )
    {
      sub_224B964();
      v6 = *(_QWORD **)&klass->_1.this_arg.bits;
    }
  }
  v7 = v6[1];
  v8 = *(unsigned int *)(*v6 + 252LL);
  v9 = *(unsigned int *)(v7 + 252);
  v10 = (__int64 *)((char *)&v20 - ((v8 + 15) & 0x1FFFFFFF0LL));
  v11 = (__int64 *)((char *)&v20 - ((v9 + 15) & 0x1FFFFFFF0LL));
  v12 = *(_DWORD *)(*v6 + 40LL);
  if ( v12 >= 0 )
    v13 = &v22;
  else
    v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v5;
  memcpy(&v20, v13, v8);
  if ( *(int *)(v7 + 40) >= 0 )
    v14 = &v21;
  else
    v14 = monitor;
  memcpy((char *)&v20 - ((v9 + 15) & 0x1FFFFFFF0LL), v14, v9);
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, v15);
    v6 = *(_QWORD **)&klass->_1.this_arg.bits;
    v12 = *(_DWORD *)(*v6 + 40LL);
  }
  v16 = (__int64 *)v6[2];
  v17 = *v16;
  if ( (v12 & 0x80000000) == 0 )
    v10 = (_QWORD *)*v10;
  if ( (*(_DWORD *)(v6[1] + 40LL) & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v23[1] = v10;
  v23[2] = v11;
  v18 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v16[2];
  v23[0] = StringLiteral_26573/*"{0}:{1}"*/;
  v18(v17, v16, 0, v23, v24);
  return (System_String_o *)v24[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        const MethodInfo_3854BA8 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x25
  _QWORD *v6; // x28
  __int64 v7; // x8
  __int64 v8; // x23
  __int64 v9; // x24
  size_t v10; // x2
  size_t v11; // x26
  size_t v12; // x27
  _QWORD *v13; // x19
  _QWORD *v14; // x21
  _QWORD *v15; // x22
  int v16; // w20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v17; // x1
  void **v18; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  __int64 v20; // x1
  __int64 *v21; // x1
  __int64 v22; // x0
  void (__fastcall *v23)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *); // x9
  __int64 v25; // [xsp+0h] [xbp-70h] BYREF
  _QWORD *v26; // [xsp+8h] [xbp-68h]
  void **v27; // [xsp+10h] [xbp-60h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v28; // [xsp+18h] [xbp-58h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-50h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v30; // [xsp+28h] [xbp-48h] BYREF
  void *v31; // [xsp+30h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v32; // [xsp+38h] [xbp-38h] BYREF
  _QWORD v33[4]; // [xsp+40h] [xbp-30h] BYREF
  _QWORD v34[2]; // [xsp+60h] [xbp-10h] BYREF

  monitor = arg2.monitor;
  klass = arg1.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v34[1] = *(_QWORD *)(StatusReg + 40);
  v6 = (_QWORD *)*((_QWORD *)arg2.monitor + 7);
  v31 = arg1.monitor;
  v32 = arg1.klass;
  v27 = (void **)arg1.monitor;
  v28 = arg2.klass;
  v30 = arg2.klass;
  if ( !v6 )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26578/*"{0}:{1}:{2}"*/);
    v6 = (_QWORD *)monitor[7];
    if ( !v6 )
    {
      sub_224B964();
      v6 = (_QWORD *)monitor[7];
    }
  }
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v26 = monitor;
  v10 = *(unsigned int *)(v7 + 252);
  v11 = *(unsigned int *)(v8 + 252);
  v12 = *(unsigned int *)(v9 + 252);
  v13 = (__int64 *)((char *)&v25 - ((v10 + 15) & 0x1FFFFFFF0LL));
  v14 = (__int64 *)((char *)&v25 - ((v11 + 15) & 0x1FFFFFFF0LL));
  v15 = (__int64 *)((char *)&v25 - ((v12 + 15) & 0x1FFFFFFF0LL));
  v16 = *(_DWORD *)(v7 + 40);
  if ( v16 >= 0 )
    v17 = &v32;
  else
    v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v25 - ((v10 + 15) & 0x1FFFFFFF0LL), v17, v10);
  if ( *(int *)(v8 + 40) >= 0 )
    v18 = &v31;
  else
    v18 = v27;
  memcpy((char *)&v25 - ((v11 + 15) & 0x1FFFFFFF0LL), v18, v11);
  if ( *(int *)(v9 + 40) >= 0 )
    v19 = &v30;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v28;
  memcpy((char *)&v25 - ((v12 + 15) & 0x1FFFFFFF0LL), v19, v12);
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, v20);
    v6 = (_QWORD *)v26[7];
    v16 = *(_DWORD *)(*v6 + 40LL);
  }
  v21 = (__int64 *)v6[3];
  if ( (v16 & 0x80000000) == 0 )
    v13 = (_QWORD *)*v13;
  v22 = *v21;
  if ( (*(_DWORD *)(v6[1] + 40LL) & 0x80000000) == 0 )
    v14 = (_QWORD *)*v14;
  if ( (*(_DWORD *)(v6[2] + 40LL) & 0x80000000) == 0 )
    v15 = (_QWORD *)*v15;
  v33[2] = v14;
  v33[3] = v15;
  v23 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v21[2];
  v33[0] = StringLiteral_26578/*"{0}:{1}:{2}"*/;
  v33[1] = v13;
  v23(v22, v21, 0, v33, v34);
  return (System_String_o *)v34[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        const MethodInfo_3855094 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v6; // x11
  _QWORD *v7; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x28
  __int64 v11; // x26
  __int64 v12; // x27
  size_t v13; // x2
  size_t v14; // x24
  size_t v15; // x12
  size_t v16; // x20
  _QWORD *v17; // x21
  _QWORD *v18; // x22
  _QWORD *v19; // x23
  int v20; // w19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v21; // x1
  void **p_monitor; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v23; // x1
  void **v24; // x1
  __int64 v25; // x1
  _QWORD *v26; // x10
  __int64 *v27; // x1
  __int64 v28; // x0
  void (__fastcall *v29)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *); // x9
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v31; // [xsp+0h] [xbp-90h] BYREF
  size_t v32; // [xsp+8h] [xbp-88h]
  void **v33; // [xsp+10h] [xbp-80h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v34; // [xsp+18h] [xbp-78h]
  _QWORD *v35; // [xsp+28h] [xbp-68h]
  unsigned __int64 StatusReg; // [xsp+30h] [xbp-60h]
  void *v37; // [xsp+38h] [xbp-58h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v38; // [xsp+40h] [xbp-50h] BYREF
  void *monitor; // [xsp+48h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v40; // [xsp+50h] [xbp-40h] BYREF
  _QWORD v41[5]; // [xsp+58h] [xbp-38h] BYREF
  _QWORD v42[2]; // [xsp+80h] [xbp-10h] BYREF

  klass = arg3.klass;
  v6 = arg1.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v42[1] = *(_QWORD *)(StatusReg + 40);
  v7 = *(_QWORD **)&arg3.klass->_1.this_arg.bits;
  monitor = arg1.monitor;
  v40 = arg1.klass;
  v33 = (void **)arg1.monitor;
  v34 = arg2;
  v37 = arg2.monitor;
  v38 = arg2.klass;
  if ( !v7 )
  {
    v8 = arg1.klass;
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26580/*"{0}:{1}:{2}:{3}"*/);
    v7 = *(_QWORD **)&klass->_1.this_arg.bits;
    v6 = v8;
    if ( !v7 )
    {
      sub_224B964();
      v7 = *(_QWORD **)&klass->_1.this_arg.bits;
      v6 = v8;
    }
  }
  v9 = *v7;
  v10 = v7[1];
  v12 = v7[2];
  v11 = v7[3];
  v13 = *(unsigned int *)(*v7 + 252LL);
  v14 = *(unsigned int *)(v10 + 252);
  v15 = *(unsigned int *)(v11 + 252);
  v16 = *(unsigned int *)(v12 + 252);
  v31 = klass;
  v32 = v15;
  v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v31 - ((v16 + 15) & 0x1FFFFFFF0LL));
  v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v31 - ((v15 + 15) & 0x1FFFFFFF0LL));
  v20 = *(_DWORD *)(v9 + 40);
  v35 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((char *)&v31 - ((v13 + 15) & 0x1FFFFFFF0LL));
  if ( v20 >= 0 )
    v21 = &v40;
  else
    v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v6;
  memcpy((char *)&v31 - ((v13 + 15) & 0x1FFFFFFF0LL), v21, v13);
  if ( *(int *)(v10 + 40) >= 0 )
    p_monitor = &monitor;
  else
    p_monitor = v33;
  memcpy((char *)&v31 - ((v14 + 15) & 0x1FFFFFFF0LL), p_monitor, v14);
  if ( *(int *)(v12 + 40) >= 0 )
    v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v38;
  else
    v23 = v34.klass;
  memcpy((char *)&v31 - ((v16 + 15) & 0x1FFFFFFF0LL), v23, v16);
  if ( *(int *)(v11 + 40) >= 0 )
    v24 = &v37;
  else
    v24 = (void **)v34.monitor;
  memcpy(v19, v24, v32);
  if ( *(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( (v20 & 0x80000000) == 0 )
    {
LABEL_18:
      v26 = (_QWORD *)*v35;
      goto LABEL_21;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, v25);
    v7 = *(_QWORD **)&v31->_1.this_arg.bits;
    if ( (*(_DWORD *)(*v7 + 40LL) & 0x80000000) == 0 )
      goto LABEL_18;
  }
  v26 = v35;
LABEL_21:
  v27 = (__int64 *)v7[4];
  if ( (*(_DWORD *)(v7[1] + 40LL) & 0x80000000) == 0 )
    v17 = (_QWORD *)*v17;
  v28 = *v27;
  if ( (*(_DWORD *)(v7[2] + 40LL) & 0x80000000) == 0 )
    v18 = (_QWORD *)*v18;
  if ( (*(_DWORD *)(v7[3] + 40LL) & 0x80000000) == 0 )
    v19 = (_QWORD *)*v19;
  v41[2] = v17;
  v41[3] = v18;
  v41[4] = v19;
  v29 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v27[2];
  v41[0] = StringLiteral_26580/*"{0}:{1}:{2}:{3}"*/;
  v41[1] = v26;
  v29(v28, v27, 0, v41, v42);
  return (System_String_o *)v42[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        const MethodInfo_38554E4 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x11
  _QWORD *v8; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x25
  __int64 v12; // x9
  __int64 v13; // x26
  size_t v14; // x12
  size_t v15; // x2
  size_t v16; // x28
  size_t v17; // x13
  size_t v18; // x27
  _QWORD *v19; // x19
  _QWORD *v20; // x20
  _QWORD *v21; // x23
  _QWORD *v22; // x24
  int v23; // w22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v24; // x1
  void **v25; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v26; // x1
  void **v27; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v28; // x1
  __int64 v29; // x1
  _QWORD *v30; // x10
  __int64 *v31; // x1
  __int64 v32; // x0
  void (__fastcall *v33)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *); // x9
  __int64 v35; // [xsp+0h] [xbp-D0h] BYREF
  _QWORD *v36; // [xsp+8h] [xbp-C8h]
  size_t v37; // [xsp+10h] [xbp-C0h]
  size_t v38; // [xsp+18h] [xbp-B8h]
  __int64 v39; // [xsp+20h] [xbp-B0h]
  __int64 v40; // [xsp+28h] [xbp-A8h]
  void **v41; // [xsp+30h] [xbp-A0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v42; // [xsp+38h] [xbp-98h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v43; // [xsp+48h] [xbp-88h]
  _QWORD *v44; // [xsp+50h] [xbp-80h]
  unsigned __int64 StatusReg; // [xsp+58h] [xbp-78h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v46; // [xsp+60h] [xbp-70h] BYREF
  void *v47; // [xsp+68h] [xbp-68h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v48; // [xsp+70h] [xbp-60h] BYREF
  void *v49; // [xsp+78h] [xbp-58h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v50; // [xsp+80h] [xbp-50h] BYREF
  _QWORD v51[6]; // [xsp+88h] [xbp-48h] BYREF
  _QWORD v52[3]; // [xsp+B8h] [xbp-18h] BYREF

  monitor = arg3.monitor;
  klass = arg1.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v52[1] = *(_QWORD *)(StatusReg + 40);
  v8 = (_QWORD *)*((_QWORD *)arg3.monitor + 7);
  v49 = arg1.monitor;
  v50 = arg1.klass;
  v41 = (void **)arg1.monitor;
  v42 = arg2;
  v47 = arg2.monitor;
  v48 = arg2.klass;
  v43 = arg3.klass;
  v46 = arg3.klass;
  if ( !v8 )
  {
    v9 = arg1.klass;
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26581/*"{0}:{1}:{2}:{3}:{4}"*/);
    v8 = (_QWORD *)monitor[7];
    klass = v9;
    if ( !v8 )
    {
      sub_224B964();
      v8 = (_QWORD *)monitor[7];
      klass = v9;
    }
  }
  v10 = *v8;
  v11 = v8[1];
  v12 = v8[4];
  v13 = v8[2];
  v14 = *(unsigned int *)(v12 + 252);
  v15 = *(unsigned int *)(*v8 + 252LL);
  v16 = *(unsigned int *)(v11 + 252);
  v39 = v8[3];
  v40 = v12;
  v17 = *(unsigned int *)(v39 + 252);
  v18 = *(unsigned int *)(v13 + 252);
  v38 = v14;
  v36 = monitor;
  v37 = v17;
  v19 = (__int64 *)((char *)&v35 - ((v16 + 15) & 0x1FFFFFFF0LL));
  v20 = (__int64 *)((char *)&v35 - ((v18 + 15) & 0x1FFFFFFF0LL));
  v21 = (__int64 *)((char *)&v35 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v22 = (__int64 *)((char *)&v35 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v23 = *(_DWORD *)(v10 + 40);
  v44 = (__int64 *)((char *)&v35 - ((v15 + 15) & 0x1FFFFFFF0LL));
  if ( v23 >= 0 )
    v24 = &v50;
  else
    v24 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v35 - ((v15 + 15) & 0x1FFFFFFF0LL), v24, v15);
  if ( *(int *)(v11 + 40) >= 0 )
    v25 = &v49;
  else
    v25 = v41;
  memcpy((char *)&v35 - ((v16 + 15) & 0x1FFFFFFF0LL), v25, v16);
  if ( *(int *)(v13 + 40) >= 0 )
    v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v48;
  else
    v26 = v42.klass;
  memcpy((char *)&v35 - ((v18 + 15) & 0x1FFFFFFF0LL), v26, v18);
  if ( *(int *)(v39 + 40) >= 0 )
    v27 = &v47;
  else
    v27 = (void **)v42.monitor;
  memcpy(v21, v27, v37);
  if ( *(int *)(v40 + 40) >= 0 )
    v28 = &v46;
  else
    v28 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v43;
  memcpy(v22, v28, v38);
  if ( *(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( (v23 & 0x80000000) == 0 )
    {
LABEL_21:
      v30 = (_QWORD *)*v44;
      goto LABEL_24;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, v29);
    v8 = (_QWORD *)v36[7];
    if ( (*(_DWORD *)(*v8 + 40LL) & 0x80000000) == 0 )
      goto LABEL_21;
  }
  v30 = v44;
LABEL_24:
  if ( (*(_DWORD *)(v8[1] + 40LL) & 0x80000000) == 0 )
    v19 = (_QWORD *)*v19;
  v31 = (__int64 *)v8[5];
  if ( (*(_DWORD *)(v8[2] + 40LL) & 0x80000000) == 0 )
    v20 = (_QWORD *)*v20;
  v32 = *v31;
  if ( (*(_DWORD *)(v8[3] + 40LL) & 0x80000000) == 0 )
    v21 = (_QWORD *)*v21;
  if ( (*(_DWORD *)(v8[4] + 40LL) & 0x80000000) == 0 )
    v22 = (_QWORD *)*v22;
  v51[2] = v19;
  v51[3] = v20;
  v51[4] = v21;
  v51[5] = v22;
  v33 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v31[2];
  v51[0] = StringLiteral_26581/*"{0}:{1}:{2}:{3}:{4}"*/;
  v51[1] = v30;
  v33(v32, v31, 0, v51, v52);
  return (System_String_o *)v52[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg6,
        const MethodInfo_3855844 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x11
  _QWORD *v9; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x25
  __int64 v13; // x12
  __int64 v14; // x9
  __int64 v15; // x10
  size_t v16; // x2
  size_t v17; // x26
  size_t v18; // x27
  size_t v19; // x14
  size_t v20; // x13
  size_t v21; // x12
  _QWORD *v22; // x23
  _QWORD *v23; // x19
  _QWORD *v24; // x20
  _QWORD *v25; // x21
  _QWORD *v26; // x24
  int v27; // w22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v28; // x1
  void **p_monitor; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v30; // x1
  void **v31; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v32; // x1
  void **v33; // x1
  __int64 v34; // x1
  _QWORD *v35; // x10
  __int64 *v36; // x1
  __int64 v37; // x0
  void (__fastcall *v38)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *); // x9
  __int64 v40; // [xsp+0h] [xbp-100h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v41; // [xsp+8h] [xbp-F8h]
  size_t v42; // [xsp+10h] [xbp-F0h]
  size_t v43; // [xsp+18h] [xbp-E8h]
  size_t v44; // [xsp+20h] [xbp-E0h]
  __int64 v45; // [xsp+28h] [xbp-D8h]
  __int64 v46; // [xsp+30h] [xbp-D0h]
  __int64 v47; // [xsp+38h] [xbp-C8h]
  __int64 v48; // [xsp+40h] [xbp-C0h]
  void **v49; // [xsp+48h] [xbp-B8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v50; // [xsp+50h] [xbp-B0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v51; // [xsp+60h] [xbp-A0h]
  _QWORD *v52; // [xsp+70h] [xbp-90h]
  unsigned __int64 StatusReg; // [xsp+78h] [xbp-88h]
  void *v54; // [xsp+80h] [xbp-80h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v55; // [xsp+88h] [xbp-78h] BYREF
  void *v56; // [xsp+90h] [xbp-70h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v57; // [xsp+98h] [xbp-68h] BYREF
  void *monitor; // [xsp+A0h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v59; // [xsp+A8h] [xbp-58h] BYREF
  _QWORD v60[7]; // [xsp+B0h] [xbp-50h] BYREF
  _QWORD v61[3]; // [xsp+E8h] [xbp-18h] BYREF

  klass = arg4.klass;
  v8 = arg1.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v61[1] = *(_QWORD *)(StatusReg + 40);
  v9 = *(_QWORD **)&arg4.klass->_1.this_arg.bits;
  monitor = arg1.monitor;
  v59 = arg1.klass;
  v49 = (void **)arg1.monitor;
  v50 = arg2;
  v56 = arg2.monitor;
  v57 = arg2.klass;
  v51 = arg3;
  v54 = arg3.monitor;
  v55 = arg3.klass;
  if ( !v9 )
  {
    v10 = arg1.klass;
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26582/*"{0}:{1}:{2}:{3}:{4}:{5}"*/);
    v9 = *(_QWORD **)&klass->_1.this_arg.bits;
    v8 = v10;
    if ( !v9 )
    {
      sub_224B964();
      v9 = *(_QWORD **)&klass->_1.this_arg.bits;
      v8 = v10;
    }
  }
  v11 = *v9;
  v12 = v9[1];
  v13 = v9[3];
  v15 = v9[4];
  v14 = v9[5];
  v16 = *(unsigned int *)(*v9 + 252LL);
  v17 = *(unsigned int *)(v12 + 252);
  v45 = v9[2];
  v46 = v13;
  v18 = *(unsigned int *)(v45 + 252);
  v19 = *(unsigned int *)(v13 + 252);
  v47 = v15;
  v48 = v14;
  v20 = *(unsigned int *)(v15 + 252);
  v21 = *(unsigned int *)(v14 + 252);
  v41 = klass;
  v42 = v19;
  v43 = v20;
  v44 = v21;
  v22 = (__int64 *)((char *)&v40 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v23 = (__int64 *)((char *)&v40 - ((v18 + 15) & 0x1FFFFFFF0LL));
  v24 = (__int64 *)((char *)&v40 - ((v19 + 15) & 0x1FFFFFFF0LL));
  v25 = (__int64 *)((char *)&v40 - ((v20 + 15) & 0x1FFFFFFF0LL));
  v26 = (__int64 *)((char *)&v40 - ((v21 + 15) & 0x1FFFFFFF0LL));
  v27 = *(_DWORD *)(v11 + 40);
  v52 = (__int64 *)((char *)&v40 - ((v16 + 15) & 0x1FFFFFFF0LL));
  if ( v27 >= 0 )
    v28 = &v59;
  else
    v28 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v8;
  memcpy((char *)&v40 - ((v16 + 15) & 0x1FFFFFFF0LL), v28, v16);
  if ( *(int *)(v12 + 40) >= 0 )
    p_monitor = &monitor;
  else
    p_monitor = v49;
  memcpy((char *)&v40 - ((v17 + 15) & 0x1FFFFFFF0LL), p_monitor, v17);
  if ( *(int *)(v45 + 40) >= 0 )
    v30 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v57;
  else
    v30 = v50.klass;
  memcpy((char *)&v40 - ((v18 + 15) & 0x1FFFFFFF0LL), v30, v18);
  if ( *(int *)(v46 + 40) >= 0 )
    v31 = &v56;
  else
    v31 = (void **)v50.monitor;
  memcpy(v24, v31, v42);
  if ( *(int *)(v47 + 40) >= 0 )
    v32 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v55;
  else
    v32 = v51.klass;
  memcpy(v25, v32, v43);
  if ( *(int *)(v48 + 40) >= 0 )
    v33 = &v54;
  else
    v33 = (void **)v51.monitor;
  memcpy(v26, v33, v44);
  if ( *(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( (v27 & 0x80000000) == 0 )
    {
LABEL_24:
      v35 = (_QWORD *)*v52;
      goto LABEL_27;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, v34);
    v9 = *(_QWORD **)&v41->_1.this_arg.bits;
    if ( (*(_DWORD *)(*v9 + 40LL) & 0x80000000) == 0 )
      goto LABEL_24;
  }
  v35 = v52;
LABEL_27:
  if ( (*(_DWORD *)(v9[1] + 40LL) & 0x80000000) == 0 )
    v22 = (_QWORD *)*v22;
  if ( (*(_DWORD *)(v9[2] + 40LL) & 0x80000000) == 0 )
    v23 = (_QWORD *)*v23;
  v36 = (__int64 *)v9[6];
  if ( (*(_DWORD *)(v9[3] + 40LL) & 0x80000000) == 0 )
    v24 = (_QWORD *)*v24;
  v37 = *v36;
  if ( (*(_DWORD *)(v9[4] + 40LL) & 0x80000000) == 0 )
    v25 = (_QWORD *)*v25;
  if ( (*(_DWORD *)(v9[5] + 40LL) & 0x80000000) == 0 )
    v26 = (_QWORD *)*v26;
  v60[2] = v22;
  v60[3] = v23;
  v60[4] = v24;
  v60[5] = v25;
  v60[6] = v26;
  v38 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v36[2];
  v60[0] = StringLiteral_26582/*"{0}:{1}:{2}:{3}:{4}:{5}"*/;
  v60[1] = v35;
  v38(v37, v36, 0, v60, v61);
  return (System_String_o *)v61[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg6,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg7,
        const MethodInfo_3855B4C *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x11
  _QWORD *v10; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v11; // x20
  __int64 v12; // x13
  __int64 v13; // x14
  __int64 v14; // x8
  __int64 v15; // x15
  __int64 v16; // x10
  __int64 v17; // x12
  size_t v18; // x28
  size_t v19; // x27
  size_t v20; // x15
  size_t v21; // x2
  __int64 v22; // x9
  size_t v23; // x14
  _QWORD *v24; // x22
  _QWORD *v25; // x19
  _QWORD *v26; // x20
  _QWORD *v27; // x23
  _QWORD *v28; // x24
  _QWORD *v29; // x26
  int v30; // w25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v31; // x1
  void **v32; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v33; // x1
  void **v34; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v35; // x1
  void **v36; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v37; // x1
  __int64 v38; // x1
  _QWORD *v39; // x10
  __int64 *v40; // x1
  __int64 v41; // x0
  void (__fastcall *v42)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *); // x9
  __int64 v44; // [xsp+0h] [xbp-130h] BYREF
  _QWORD *v45; // [xsp+8h] [xbp-128h]
  size_t v46; // [xsp+10h] [xbp-120h]
  size_t v47; // [xsp+18h] [xbp-118h]
  size_t v48; // [xsp+20h] [xbp-110h]
  __int64 v49; // [xsp+28h] [xbp-108h]
  size_t v50; // [xsp+30h] [xbp-100h]
  __int64 v51; // [xsp+38h] [xbp-F8h]
  __int64 v52; // [xsp+40h] [xbp-F0h]
  __int64 v53; // [xsp+48h] [xbp-E8h]
  __int64 v54; // [xsp+50h] [xbp-E0h]
  __int64 v55; // [xsp+58h] [xbp-D8h]
  void **v56; // [xsp+60h] [xbp-D0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v57; // [xsp+68h] [xbp-C8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v58; // [xsp+78h] [xbp-B8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v59; // [xsp+88h] [xbp-A8h]
  _QWORD *v60; // [xsp+90h] [xbp-A0h]
  unsigned __int64 StatusReg; // [xsp+98h] [xbp-98h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v62; // [xsp+A0h] [xbp-90h] BYREF
  void *v63; // [xsp+A8h] [xbp-88h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v64; // [xsp+B0h] [xbp-80h] BYREF
  void *v65; // [xsp+B8h] [xbp-78h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v66; // [xsp+C0h] [xbp-70h] BYREF
  void *v67; // [xsp+C8h] [xbp-68h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v68; // [xsp+D0h] [xbp-60h] BYREF
  _QWORD v69[8]; // [xsp+D8h] [xbp-58h] BYREF
  _QWORD v70[2]; // [xsp+118h] [xbp-18h] BYREF

  monitor = arg4.monitor;
  klass = arg1.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v70[1] = *(_QWORD *)(StatusReg + 40);
  v10 = (_QWORD *)*((_QWORD *)arg4.monitor + 7);
  v67 = arg1.monitor;
  v68 = arg1.klass;
  v56 = (void **)arg1.monitor;
  v57 = arg2;
  v65 = arg2.monitor;
  v66 = arg2.klass;
  v58 = arg3;
  v63 = arg3.monitor;
  v64 = arg3.klass;
  v59 = arg4.klass;
  v62 = arg4.klass;
  if ( !v10 )
  {
    v11 = arg1.klass;
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26583/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/);
    v10 = (_QWORD *)monitor[7];
    klass = v11;
    if ( !v10 )
    {
      sub_224B964();
      v10 = (_QWORD *)monitor[7];
      klass = v11;
    }
  }
  v13 = v10[2];
  v12 = v10[3];
  v45 = monitor;
  v14 = *v10;
  v15 = v10[1];
  v17 = v10[4];
  v16 = v10[5];
  v51 = v13;
  v52 = v12;
  v18 = *(unsigned int *)(v13 + 252);
  v49 = v15;
  v19 = *(unsigned int *)(v15 + 252);
  v20 = *(unsigned int *)(v12 + 252);
  v21 = *(unsigned int *)(v14 + 252);
  v53 = v17;
  v54 = v16;
  v46 = v20;
  v22 = v10[6];
  v23 = *(unsigned int *)(v17 + 252);
  v48 = *(unsigned int *)(v16 + 252);
  v55 = v22;
  v47 = v23;
  v50 = *(unsigned int *)(v22 + 252);
  v24 = (__int64 *)((char *)&v44 - ((v19 + 15) & 0x1FFFFFFF0LL));
  v25 = (__int64 *)((char *)&v44 - ((v18 + 15) & 0x1FFFFFFF0LL));
  v26 = (__int64 *)((char *)&v44 - ((v20 + 15) & 0x1FFFFFFF0LL));
  v27 = (__int64 *)((char *)&v44 - ((v23 + 15) & 0x1FFFFFFF0LL));
  v28 = (__int64 *)((char *)&v44 - ((v48 + 15) & 0x1FFFFFFF0LL));
  v29 = (__int64 *)((char *)&v44 - ((v50 + 15) & 0x1FFFFFFF0LL));
  v30 = *(_DWORD *)(v14 + 40);
  v60 = (__int64 *)((char *)&v44 - ((v21 + 15) & 0x1FFFFFFF0LL));
  if ( v30 >= 0 )
    v31 = &v68;
  else
    v31 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v44 - ((v21 + 15) & 0x1FFFFFFF0LL), v31, v21);
  if ( *(int *)(v49 + 40) >= 0 )
    v32 = &v67;
  else
    v32 = v56;
  memcpy((char *)&v44 - ((v19 + 15) & 0x1FFFFFFF0LL), v32, v19);
  if ( *(int *)(v51 + 40) >= 0 )
    v33 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v66;
  else
    v33 = v57.klass;
  memcpy((char *)&v44 - ((v18 + 15) & 0x1FFFFFFF0LL), v33, v18);
  if ( *(int *)(v52 + 40) >= 0 )
    v34 = &v65;
  else
    v34 = (void **)v57.monitor;
  memcpy(v26, v34, v46);
  if ( *(int *)(v53 + 40) >= 0 )
    v35 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v64;
  else
    v35 = v58.klass;
  memcpy(v27, v35, v47);
  if ( *(int *)(v54 + 40) >= 0 )
    v36 = &v63;
  else
    v36 = (void **)v58.monitor;
  memcpy(v28, v36, v48);
  if ( *(int *)(v55 + 40) >= 0 )
    v37 = &v62;
  else
    v37 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v59;
  memcpy(v29, v37, v50);
  if ( *(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( (v30 & 0x80000000) == 0 )
    {
LABEL_27:
      v39 = (_QWORD *)*v60;
      goto LABEL_30;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, v38);
    v10 = (_QWORD *)v45[7];
    if ( (*(_DWORD *)(*v10 + 40LL) & 0x80000000) == 0 )
      goto LABEL_27;
  }
  v39 = v60;
LABEL_30:
  if ( (*(_DWORD *)(v10[1] + 40LL) & 0x80000000) == 0 )
    v24 = (_QWORD *)*v24;
  if ( (*(_DWORD *)(v10[2] + 40LL) & 0x80000000) == 0 )
    v25 = (_QWORD *)*v25;
  if ( (*(_DWORD *)(v10[3] + 40LL) & 0x80000000) == 0 )
    v26 = (_QWORD *)*v26;
  v40 = (__int64 *)v10[7];
  if ( (*(_DWORD *)(v10[4] + 40LL) & 0x80000000) == 0 )
    v27 = (_QWORD *)*v27;
  v41 = *v40;
  if ( (*(_DWORD *)(v10[5] + 40LL) & 0x80000000) == 0 )
    v28 = (_QWORD *)*v28;
  if ( (*(_DWORD *)(v10[6] + 40LL) & 0x80000000) == 0 )
    v29 = (_QWORD *)*v29;
  v69[2] = v24;
  v69[3] = v25;
  v69[4] = v26;
  v69[5] = v27;
  v69[6] = v28;
  v69[7] = v29;
  v42 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v40[2];
  v69[0] = StringLiteral_26583/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/;
  v69[1] = v39;
  v42(v41, v40, 0, v69, v70);
  return (System_String_o *)v70[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg6,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg7,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg8,
        const MethodInfo_3855EE8 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x11
  _QWORD *v10; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v11; // x21
  __int64 v12; // x14
  __int64 v13; // x15
  __int64 v14; // x8
  __int64 v15; // x12
  __int64 v16; // x13
  size_t v17; // x16
  size_t v18; // x28
  size_t v19; // x17
  size_t v20; // x15
  size_t v21; // x2
  __int64 v22; // x9
  __int64 v23; // x10
  size_t v24; // x14
  size_t v25; // x13
  size_t v26; // x12
  _QWORD *v27; // x23
  _QWORD *v28; // x21
  _QWORD *v29; // x22
  _QWORD *v30; // x20
  _QWORD *v31; // x24
  _QWORD *v32; // x26
  _QWORD *v33; // x27
  int v34; // w25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v35; // x1
  void **p_monitor; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v37; // x1
  void **v38; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v39; // x1
  void **v40; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v41; // x1
  void **v42; // x1
  __int64 v43; // x1
  _QWORD *v44; // x10
  __int64 *v45; // x1
  __int64 v46; // x0
  void (__fastcall *v47)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *); // x9
  __int64 v49; // [xsp+0h] [xbp-160h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v50; // [xsp+8h] [xbp-158h]
  size_t v51; // [xsp+10h] [xbp-150h]
  size_t v52; // [xsp+18h] [xbp-148h]
  size_t v53; // [xsp+20h] [xbp-140h]
  size_t v54; // [xsp+28h] [xbp-138h]
  size_t v55; // [xsp+30h] [xbp-130h]
  size_t v56; // [xsp+38h] [xbp-128h]
  __int64 v57; // [xsp+40h] [xbp-120h]
  __int64 v58; // [xsp+48h] [xbp-118h]
  __int64 v59; // [xsp+50h] [xbp-110h]
  __int64 v60; // [xsp+58h] [xbp-108h]
  __int64 v61; // [xsp+60h] [xbp-100h]
  __int64 v62; // [xsp+68h] [xbp-F8h]
  __int64 v63; // [xsp+70h] [xbp-F0h]
  void **v64; // [xsp+78h] [xbp-E8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v65; // [xsp+80h] [xbp-E0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v66; // [xsp+90h] [xbp-D0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v67; // [xsp+A0h] [xbp-C0h]
  _QWORD *v68; // [xsp+B0h] [xbp-B0h]
  unsigned __int64 StatusReg; // [xsp+B8h] [xbp-A8h]
  void *v70; // [xsp+C0h] [xbp-A0h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v71; // [xsp+C8h] [xbp-98h] BYREF
  void *v72; // [xsp+D0h] [xbp-90h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v73; // [xsp+D8h] [xbp-88h] BYREF
  void *v74; // [xsp+E0h] [xbp-80h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v75; // [xsp+E8h] [xbp-78h] BYREF
  void *monitor; // [xsp+F0h] [xbp-70h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v77; // [xsp+F8h] [xbp-68h] BYREF
  _QWORD v78[9]; // [xsp+100h] [xbp-60h] BYREF
  _QWORD v79[2]; // [xsp+148h] [xbp-18h] BYREF

  klass = arg1.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v79[1] = *(_QWORD *)(StatusReg + 40);
  v10 = *(_QWORD **)&arg5.klass->_1.this_arg.bits;
  monitor = arg1.monitor;
  v77 = arg1.klass;
  v64 = (void **)arg1.monitor;
  v65 = arg2;
  v74 = arg2.monitor;
  v75 = arg2.klass;
  v66 = arg3;
  v72 = arg3.monitor;
  v73 = arg3.klass;
  v67 = arg4;
  v70 = arg4.monitor;
  v71 = arg4.klass;
  if ( !v10 )
  {
    v11 = arg1.klass;
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26584/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/);
    v10 = *(_QWORD **)&arg5.klass->_1.this_arg.bits;
    klass = v11;
    if ( !v10 )
    {
      sub_224B964();
      v10 = *(_QWORD **)&arg5.klass->_1.this_arg.bits;
      klass = v11;
    }
  }
  v13 = v10[2];
  v12 = v10[3];
  v50 = arg5.klass;
  v14 = *v10;
  v16 = v10[4];
  v15 = v10[5];
  v17 = *(unsigned int *)(v12 + 252);
  v18 = *(unsigned int *)(v13 + 252);
  v19 = *(unsigned int *)(v10[1] + 252LL);
  v58 = v10[1];
  v57 = v13;
  v51 = v19;
  v20 = *(unsigned int *)(v16 + 252);
  v59 = v12;
  v21 = *(unsigned int *)(v14 + 252);
  v60 = v16;
  v23 = v10[6];
  v22 = v10[7];
  v52 = v17;
  v24 = *(unsigned int *)(v15 + 252);
  v53 = v20;
  v61 = v15;
  v62 = v23;
  v25 = *(unsigned int *)(v23 + 252);
  v54 = v24;
  v26 = *(unsigned int *)(v22 + 252);
  v63 = v22;
  v55 = v25;
  v56 = v26;
  v27 = (__int64 *)((char *)&v49 - ((v19 + 15) & 0x1FFFFFFF0LL));
  v28 = (__int64 *)((char *)&v49 - ((v18 + 15) & 0x1FFFFFFF0LL));
  v29 = (__int64 *)((char *)&v49 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v30 = (__int64 *)((char *)&v49 - ((v20 + 15) & 0x1FFFFFFF0LL));
  v31 = (__int64 *)((char *)&v49 - ((v24 + 15) & 0x1FFFFFFF0LL));
  v32 = (__int64 *)((char *)&v49 - ((v25 + 15) & 0x1FFFFFFF0LL));
  v33 = (__int64 *)((char *)&v49 - ((v26 + 15) & 0x1FFFFFFF0LL));
  v34 = *(_DWORD *)(v14 + 40);
  v68 = (__int64 *)((char *)&v49 - ((v21 + 15) & 0x1FFFFFFF0LL));
  if ( v34 >= 0 )
    v35 = &v77;
  else
    v35 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v49 - ((v21 + 15) & 0x1FFFFFFF0LL), v35, v21);
  if ( *(int *)(v58 + 40) >= 0 )
    p_monitor = &monitor;
  else
    p_monitor = v64;
  memcpy(v27, p_monitor, v51);
  if ( *(int *)(v57 + 40) >= 0 )
    v37 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v75;
  else
    v37 = v65.klass;
  memcpy((char *)&v49 - ((v18 + 15) & 0x1FFFFFFF0LL), v37, v18);
  if ( *(int *)(v59 + 40) >= 0 )
    v38 = &v74;
  else
    v38 = (void **)v65.monitor;
  memcpy(v29, v38, v52);
  if ( *(int *)(v60 + 40) >= 0 )
    v39 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v73;
  else
    v39 = v66.klass;
  memcpy(v30, v39, v53);
  if ( *(int *)(v61 + 40) >= 0 )
    v40 = &v72;
  else
    v40 = (void **)v66.monitor;
  memcpy(v31, v40, v54);
  if ( *(int *)(v62 + 40) >= 0 )
    v41 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v71;
  else
    v41 = v67.klass;
  memcpy(v32, v41, v55);
  if ( *(int *)(v63 + 40) >= 0 )
    v42 = &v70;
  else
    v42 = (void **)v67.monitor;
  memcpy(v33, v42, v56);
  if ( *(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
  {
    if ( (v34 & 0x80000000) == 0 )
    {
LABEL_30:
      v44 = (_QWORD *)*v68;
      goto LABEL_33;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, v43);
    v10 = *(_QWORD **)&v50->_1.this_arg.bits;
    if ( (*(_DWORD *)(*v10 + 40LL) & 0x80000000) == 0 )
      goto LABEL_30;
  }
  v44 = v68;
LABEL_33:
  if ( (*(_DWORD *)(v10[1] + 40LL) & 0x80000000) == 0 )
    v27 = (_QWORD *)*v27;
  if ( (*(_DWORD *)(v10[2] + 40LL) & 0x80000000) == 0 )
    v28 = (_QWORD *)*v28;
  if ( (*(_DWORD *)(v10[3] + 40LL) & 0x80000000) == 0 )
    v29 = (_QWORD *)*v29;
  if ( (*(_DWORD *)(v10[4] + 40LL) & 0x80000000) == 0 )
    v30 = (_QWORD *)*v30;
  v45 = (__int64 *)v10[8];
  if ( (*(_DWORD *)(v10[5] + 40LL) & 0x80000000) == 0 )
    v31 = (_QWORD *)*v31;
  v46 = *v45;
  if ( (*(_DWORD *)(v10[6] + 40LL) & 0x80000000) == 0 )
    v32 = (_QWORD *)*v32;
  if ( (*(_DWORD *)(v10[7] + 40LL) & 0x80000000) == 0 )
    v33 = (_QWORD *)*v33;
  v78[2] = v27;
  v78[3] = v28;
  v78[4] = v29;
  v78[5] = v30;
  v78[6] = v31;
  v78[7] = v32;
  v78[8] = v33;
  v47 = (void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v45[2];
  v78[0] = StringLiteral_26584/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/;
  v78[1] = v44;
  v47(v46, v45, 0, v78, v79);
  return (System_String_o *)v79[0];
}


System_String_o *DataEntityBase__CreateMultiplePK_int_(int32_t arg1, const MethodInfo_38542C0 *method)
{
  const MethodInfo_38542C0_RGCTXs *rgctx_data; // x8
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  rgctx_data = method->rgctx_data;
  v5 = arg1;
  if ( !rgctx_data )
  {
    sub_224B964();
    rgctx_data = method->rgctx_data;
  }
  return System_Int32__ToString((int32_t)&v5, (const MethodInfo *)rgctx_data[1]._0_T);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_int__int_(
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_3854430 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26573/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x3859734);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_38548C4 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26578/*"{0}:{1}:{2}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385A228);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_3854D88 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26580/*"{0}:{1}:{2}:{3}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385A8A4);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_int__int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int32_t arg5,
        const MethodInfo_38552E0 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26581/*"{0}:{1}:{2}:{3}:{4}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385AF70);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_int__int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int64_t arg5,
        const MethodInfo_385538C *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26581/*"{0}:{1}:{2}:{3}:{4}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385B0D4);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int64_t arg4,
        const MethodInfo_3854E24 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26580/*"{0}:{1}:{2}:{3}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385AA00);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_int__int__int__object__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        Il2CppObject *arg4,
        int32_t arg5,
        const MethodInfo_3855438 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26581/*"{0}:{1}:{2}:{3}:{4}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385B238);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int64_t arg3,
        const MethodInfo_3854958 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26578/*"{0}:{1}:{2}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385A374);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_int__int__object_(
        int32_t arg1,
        int32_t arg2,
        Il2CppObject *arg3,
        const MethodInfo_38549EC *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26578/*"{0}:{1}:{2}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385A4C0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_int__int__object__object_(
        int32_t arg1,
        int32_t arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        const MethodInfo_3854EC0 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26580/*"{0}:{1}:{2}:{3}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385AB5C);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__long_(
        int32_t arg1,
        int64_t arg2,
        const MethodInfo_38544B4 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26573/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, arg2);
  JUMPOUT(0x3859BD4);
}


System_String_o *DataEntityBase__CreateMultiplePK_long_(int64_t arg1, const MethodInfo_38542FC *method)
{
  const MethodInfo_38542FC_RGCTXs *rgctx_data; // x8
  int64_t v5; // [xsp+8h] [xbp-18h] BYREF

  rgctx_data = method->rgctx_data;
  v5 = arg1;
  if ( !rgctx_data )
  {
    sub_224B964();
    rgctx_data = method->rgctx_data;
  }
  return System_Int64__ToString((int64_t)&v5, (const MethodInfo *)rgctx_data[1]._0_T);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_long__int_(
        int64_t arg1,
        int32_t arg2,
        const MethodInfo_3854538 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26573/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x3859D18);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_long__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_3854A80 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26578/*"{0}:{1}:{2}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385A60C);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_long__int__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_3854F5C *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26580/*"{0}:{1}:{2}:{3}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x385ACB8);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__long_(
        int64_t arg1,
        int64_t arg2,
        const MethodInfo_38545BC *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26573/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, arg2);
  JUMPOUT(0x3859E5C);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__long__object_(
        int64_t arg1,
        int64_t arg2,
        Il2CppObject *arg3,
        const MethodInfo_3854B14 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26578/*"{0}:{1}:{2}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, arg2);
  JUMPOUT(0x385A758);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__long__object__long_(
        int64_t arg1,
        int64_t arg2,
        Il2CppObject *arg3,
        int64_t arg4,
        const MethodInfo_3854FF8 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26580/*"{0}:{1}:{2}:{3}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, arg2);
  JUMPOUT(0x385AE14);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__long__object__long__long__long_(
        int64_t arg1,
        int64_t arg2,
        Il2CppObject *arg3,
        int64_t arg4,
        int64_t arg5,
        int64_t arg6,
        const MethodInfo_3855790 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26582/*"{0}:{1}:{2}:{3}:{4}:{5}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, arg2);
  JUMPOUT(0x385B39C);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *DataEntityBase__CreateMultiplePK_object__int_(
        Il2CppObject *arg1,
        int32_t arg2,
        const MethodInfo_3854640 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26573/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
  JUMPOUT(0x3859FA0);
}


System_String_o *DataEntityBase__CreateMultiplePK_object__long_(
        Il2CppObject *arg1,
        int64_t arg2,
        const MethodInfo_38546C4 *method)
{
  if ( !method->rgctx_data )
  {
    sub_2213A60(&Cysharp_Text_ZString_TypeInfo);
    sub_2213A60(&StringLiteral_26573/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_224B964();
  }
  if ( !*(&Cysharp_Text_ZString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo, arg2);
  JUMPOUT(0x385A0E4);
}