void __fastcall DataEntityBase___ctor(DataEntityBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        const MethodInfo_2E59518 *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  __int64 *v4; // x9
  __int64 v5; // x8
  __int16 v6; // w10
  __int64 v7; // x0
  char *v8; // x21
  int v9; // w0
  __int64 *v10; // x3
  __int64 v13[3]; // [xsp+8h] [xbp-18h] BYREF

  monitor = arg1.monitor;
  klass = arg1.klass;
  v13[2] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v13[0] = (__int64)arg1.klass;
  v4 = (__int64 *)*((_QWORD *)arg1.monitor + 7);
  if ( !v4 )
  {
    sub_1BC3504();
    v4 = (__int64 *)monitor[7];
  }
  v5 = *v4;
  v6 = *(_WORD *)(*v4 + 309);
  if ( (v6 & 1) != 0 )
  {
    v7 = *v4;
  }
  else
  {
    v7 = sub_1BC34A8(*v4);
    v4 = (__int64 *)monitor[7];
    v5 = *v4;
    v6 = *(_WORD *)(*v4 + 309);
  }
  v8 = (char *)&v13[-1] - (((unsigned int)(*(_DWORD *)(v7 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v6 & 1) == 0 )
  {
    v9 = sub_1BC34A8(v5);
    v4 = (__int64 *)monitor[7];
    LODWORD(v5) = v9;
  }
  if ( *(int *)(*v4 + 40) >= 0 )
    v10 = v13;
  else
    v10 = (__int64 *)klass;
  sub_1B72034(v5, v4[1], (int)v8, v10);
  return (System_String_o *)v13[1];
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        const MethodInfo_2E59924 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  void **monitor; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v5; // x23
  _QWORD *v6; // x26
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x24
  _QWORD *v10; // x20
  _QWORD *v11; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v12; // x1
  void **v13; // x1
  __int64 *v14; // x1
  __int64 v15; // x0
  __int64 v17; // [xsp+0h] [xbp-40h] BYREF
  void *v18; // [xsp+8h] [xbp-38h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v19; // [xsp+10h] [xbp-30h] BYREF
  __int64 v20[3]; // [xsp+18h] [xbp-28h] BYREF
  __int64 v21[2]; // [xsp+30h] [xbp-10h] BYREF

  klass = arg2.klass;
  monitor = (void **)arg1.monitor;
  v5 = arg1.klass;
  v21[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v18 = arg1.monitor;
  v19 = arg1.klass;
  v6 = *(_QWORD **)&arg2.klass->_1.this_arg.bits;
  if ( !v6 )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg1.monitor);
    sub_1B715CC(&StringLiteral_25017/*"{0}:{1}"*/, v7);
    v6 = *(_QWORD **)&klass->_1.this_arg.bits;
    if ( !v6 )
    {
      sub_1BC3504();
      v6 = *(_QWORD **)&klass->_1.this_arg.bits;
    }
  }
  v8 = *(unsigned int *)(*v6 + 252LL);
  v9 = *(unsigned int *)(v6[1] + 252LL);
  v10 = (__int64 *)((char *)&v17 - ((v8 + 15) & 0x1FFFFFFF0LL));
  v11 = (__int64 *)((char *)&v17 - ((v9 + 15) & 0x1FFFFFFF0LL));
  if ( *(int *)(*v6 + 40LL) >= 0 )
    v12 = &v19;
  else
    v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v5;
  memcpy(&v17, v12, v8);
  if ( *(int *)(v6[1] + 40LL) >= 0 )
    v13 = &v18;
  else
    v13 = monitor;
  memcpy((char *)&v17 - ((v9 + 15) & 0x1FFFFFFF0LL), v13, v9);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
    v6 = *(_QWORD **)&klass->_1.this_arg.bits;
  }
  v14 = (__int64 *)v6[2];
  v15 = *v14;
  if ( (*(_DWORD *)(*v6 + 40LL) & 0x80000000) == 0 )
    v10 = (_QWORD *)*v10;
  if ( (*(_DWORD *)(v6[1] + 40LL) & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v20[0] = StringLiteral_25017/*"{0}:{1}"*/;
  v20[1] = (__int64)v10;
  v20[2] = (__int64)v11;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, __int64 *))v14[2])(v15, v14, 0LL, v20, v21);
  return (System_String_o *)v21[0];
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        const MethodInfo_2E59D80 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  void **v6; // x24
  _QWORD *v7; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x25
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x26
  __int64 v12; // x27
  _QWORD *v13; // x20
  _QWORD *v14; // x21
  _QWORD *v15; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v16; // x1
  void **v17; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v18; // x1
  __int64 *v19; // x1
  __int64 v20; // x0
  unsigned __int64 StatusReg; // [xsp+0h] [xbp-50h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v23; // [xsp+8h] [xbp-48h] BYREF
  void *v24; // [xsp+10h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v25; // [xsp+18h] [xbp-38h] BYREF
  __int64 v26[4]; // [xsp+20h] [xbp-30h] BYREF
  __int64 v27[2]; // [xsp+40h] [xbp-10h] BYREF

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = arg2.monitor;
  klass = arg2.klass;
  v6 = (void **)arg1.monitor;
  v27[1] = *(_QWORD *)(StatusReg + 40);
  v24 = arg1.monitor;
  v25 = arg1.klass;
  v23 = arg2.klass;
  v7 = (_QWORD *)*((_QWORD *)arg2.monitor + 7);
  v8 = arg1.klass;
  if ( !v7 )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg1.monitor);
    sub_1B715CC(&StringLiteral_25022/*"{0}:{1}:{2}"*/, v9);
    v7 = (_QWORD *)monitor[7];
    if ( !v7 )
    {
      sub_1BC3504();
      v7 = (_QWORD *)monitor[7];
    }
  }
  v10 = *(unsigned int *)(*v7 + 252LL);
  v11 = *(unsigned int *)(v7[1] + 252LL);
  v12 = *(unsigned int *)(v7[2] + 252LL);
  v13 = (unsigned __int64 *)((char *)&StatusReg - ((v10 + 15) & 0x1FFFFFFF0LL));
  v14 = (unsigned __int64 *)((char *)&StatusReg - ((v11 + 15) & 0x1FFFFFFF0LL));
  v15 = (unsigned __int64 *)((char *)&StatusReg - ((v12 + 15) & 0x1FFFFFFF0LL));
  if ( *(int *)(*v7 + 40LL) >= 0 )
    v16 = &v25;
  else
    v16 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v8;
  memcpy((char *)&StatusReg - ((v10 + 15) & 0x1FFFFFFF0LL), v16, v10);
  if ( *(int *)(v7[1] + 40LL) >= 0 )
    v17 = &v24;
  else
    v17 = v6;
  memcpy((char *)&StatusReg - ((v11 + 15) & 0x1FFFFFFF0LL), v17, v11);
  if ( *(int *)(v7[2] + 40LL) >= 0 )
    v18 = &v23;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&StatusReg - ((v12 + 15) & 0x1FFFFFFF0LL), v18, v12);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
    v7 = (_QWORD *)monitor[7];
  }
  v19 = (__int64 *)v7[3];
  if ( (*(_DWORD *)(*v7 + 40LL) & 0x80000000) == 0 )
    v13 = (_QWORD *)*v13;
  v20 = *v19;
  if ( (*(_DWORD *)(v7[1] + 40LL) & 0x80000000) == 0 )
    v14 = (_QWORD *)*v14;
  if ( (*(_DWORD *)(v7[2] + 40LL) & 0x80000000) == 0 )
    v15 = (_QWORD *)*v15;
  v26[0] = StringLiteral_25022/*"{0}:{1}:{2}"*/;
  v26[1] = (__int64)v13;
  v26[2] = (__int64)v14;
  v26[3] = (__int64)v15;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, __int64 *))v19[2])(v20, v19, 0LL, v26, v27);
  return (System_String_o *)v27[0];
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        const MethodInfo_2E5A1CC *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  void **monitor; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x27
  _QWORD *v8; // x25
  __int64 v9; // x1
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x10
  __int64 v13; // x11
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x24
  __int64 v17; // x28
  _QWORD *v18; // x19
  _QWORD *v19; // x21
  _QWORD *v20; // x22
  _QWORD *v21; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v22; // x1
  void **v23; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v24; // x1
  void **v25; // x1
  __int64 *v26; // x1
  __int64 v27; // x0
  __int64 v29; // [xsp+0h] [xbp-80h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v30; // [xsp+8h] [xbp-78h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v31; // [xsp+10h] [xbp-70h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-60h]
  void *v33; // [xsp+28h] [xbp-58h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v34; // [xsp+30h] [xbp-50h] BYREF
  void *v35; // [xsp+38h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v36; // [xsp+40h] [xbp-40h] BYREF
  __int64 v37[5]; // [xsp+48h] [xbp-38h] BYREF
  __int64 v38[2]; // [xsp+70h] [xbp-10h] BYREF

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  klass = arg3.klass;
  monitor = (void **)arg1.monitor;
  v7 = arg1.klass;
  v38[1] = *(_QWORD *)(StatusReg + 40);
  v35 = arg1.monitor;
  v36 = arg1.klass;
  v33 = arg2.monitor;
  v34 = arg2.klass;
  v8 = *(_QWORD **)&arg3.klass->_1.this_arg.bits;
  v31 = arg2;
  if ( !v8 )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg1.monitor);
    sub_1B715CC(&StringLiteral_25024/*"{0}:{1}:{2}:{3}"*/, v9);
    v8 = *(_QWORD **)&klass->_1.this_arg.bits;
    if ( !v8 )
    {
      sub_1BC3504();
      v8 = *(_QWORD **)&klass->_1.this_arg.bits;
    }
  }
  v10 = *v8;
  v11 = v8[1];
  v12 = v8[2];
  v13 = v8[3];
  v30 = klass;
  v14 = *(unsigned int *)(v10 + 252);
  v15 = *(unsigned int *)(v11 + 252);
  v16 = *(unsigned int *)(v12 + 252);
  v17 = *(unsigned int *)(v13 + 252);
  v18 = (__int64 *)((char *)&v29 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v19 = (__int64 *)((char *)&v29 - ((v15 + 15) & 0x1FFFFFFF0LL));
  v20 = (__int64 *)((char *)&v29 - ((v16 + 15) & 0x1FFFFFFF0LL));
  v21 = (__int64 *)((char *)&v29 - ((v17 + 15) & 0x1FFFFFFF0LL));
  if ( *(int *)(v10 + 40) >= 0 )
    v22 = &v36;
  else
    v22 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v7;
  memcpy((char *)&v29 - ((v14 + 15) & 0x1FFFFFFF0LL), v22, v14);
  if ( *(int *)(v8[1] + 40LL) >= 0 )
    v23 = &v35;
  else
    v23 = monitor;
  memcpy((char *)&v29 - ((v15 + 15) & 0x1FFFFFFF0LL), v23, v15);
  if ( *(int *)(v8[2] + 40LL) >= 0 )
    v24 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v34;
  else
    v24 = v31.klass;
  memcpy((char *)&v29 - ((v16 + 15) & 0x1FFFFFFF0LL), v24, v16);
  if ( *(int *)(v8[3] + 40LL) >= 0 )
    v25 = &v33;
  else
    v25 = (void **)v31.monitor;
  memcpy((char *)&v29 - ((v17 + 15) & 0x1FFFFFFF0LL), v25, v17);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
    v8 = *(_QWORD **)&v30->_1.this_arg.bits;
  }
  if ( (*(_DWORD *)(*v8 + 40LL) & 0x80000000) == 0 )
    v18 = (_QWORD *)*v18;
  v26 = (__int64 *)v8[4];
  if ( (*(_DWORD *)(v8[1] + 40LL) & 0x80000000) == 0 )
    v19 = (_QWORD *)*v19;
  v27 = *v26;
  if ( (*(_DWORD *)(v8[2] + 40LL) & 0x80000000) == 0 )
    v20 = (_QWORD *)*v20;
  if ( (*(_DWORD *)(v8[3] + 40LL) & 0x80000000) == 0 )
    v21 = (_QWORD *)*v21;
  v37[0] = StringLiteral_25024/*"{0}:{1}:{2}:{3}"*/;
  v37[1] = (__int64)v18;
  v37[2] = (__int64)v19;
  v37[3] = (__int64)v20;
  v37[4] = (__int64)v21;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, __int64 *))v26[2])(v27, v26, 0LL, v37, v38);
  return (System_String_o *)v38[0];
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        const MethodInfo_2E5A608 *method)
{
  _QWORD *monitor; // x19
  _QWORD *v7; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x10
  __int64 v13; // x11
  __int64 v14; // x12
  __int64 v15; // x2
  __int64 v16; // x28
  __int64 v17; // x27
  __int64 v18; // x26
  __int64 v19; // x25
  _QWORD *v20; // x19
  _QWORD *v21; // x20
  _QWORD *v22; // x21
  _QWORD *v23; // x23
  _QWORD *v24; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *p_klass; // x1
  void **v26; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v27; // x1
  void **v28; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v29; // x1
  __int64 *v30; // x1
  __int64 v31; // x0
  __int64 v33; // [xsp+0h] [xbp-A0h] BYREF
  _QWORD *v34; // [xsp+8h] [xbp-98h]
  void **v35; // [xsp+10h] [xbp-90h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v36; // [xsp+18h] [xbp-88h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v37; // [xsp+28h] [xbp-78h]
  unsigned __int64 StatusReg; // [xsp+30h] [xbp-70h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v39; // [xsp+38h] [xbp-68h] BYREF
  void *v40; // [xsp+40h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v41; // [xsp+48h] [xbp-58h] BYREF
  void *v42; // [xsp+50h] [xbp-50h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+58h] [xbp-48h] BYREF
  __int64 v44[6]; // [xsp+60h] [xbp-40h] BYREF
  __int64 v45[2]; // [xsp+90h] [xbp-10h] BYREF

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = arg3.monitor;
  v45[1] = *(_QWORD *)(StatusReg + 40);
  v42 = arg1.monitor;
  klass = arg1.klass;
  v40 = arg2.monitor;
  v41 = arg2.klass;
  v39 = arg3.klass;
  v7 = (_QWORD *)*((_QWORD *)arg3.monitor + 7);
  v35 = (void **)arg1.monitor;
  v36 = arg2;
  v37 = arg3.klass;
  if ( !v7 )
  {
    v8 = arg1.klass;
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg1.monitor);
    sub_1B715CC(&StringLiteral_25025/*"{0}:{1}:{2}:{3}:{4}"*/, v9);
    v7 = (_QWORD *)monitor[7];
    arg1.klass = v8;
    if ( !v7 )
    {
      sub_1BC3504();
      v7 = (_QWORD *)monitor[7];
      arg1.klass = v8;
    }
  }
  v10 = *v7;
  v11 = v7[1];
  v12 = v7[2];
  v13 = v7[3];
  v14 = v7[4];
  v34 = monitor;
  v15 = *(unsigned int *)(v10 + 252);
  v16 = *(unsigned int *)(v11 + 252);
  v17 = *(unsigned int *)(v12 + 252);
  v18 = *(unsigned int *)(v13 + 252);
  v19 = *(unsigned int *)(v14 + 252);
  v20 = (__int64 *)((char *)&v33 - ((v15 + 15) & 0x1FFFFFFF0LL));
  v21 = (__int64 *)((char *)&v33 - ((v16 + 15) & 0x1FFFFFFF0LL));
  v22 = (__int64 *)((char *)&v33 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v23 = (__int64 *)((char *)&v33 - ((v18 + 15) & 0x1FFFFFFF0LL));
  v24 = (__int64 *)((char *)&v33 - ((v19 + 15) & 0x1FFFFFFF0LL));
  if ( *(int *)(v10 + 40) >= 0 )
    p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&klass;
  else
    p_klass = arg1.klass;
  memcpy((char *)&v33 - ((v15 + 15) & 0x1FFFFFFF0LL), p_klass, v15);
  if ( *(int *)(v7[1] + 40LL) >= 0 )
    v26 = &v42;
  else
    v26 = v35;
  memcpy((char *)&v33 - ((v16 + 15) & 0x1FFFFFFF0LL), v26, v16);
  if ( *(int *)(v7[2] + 40LL) >= 0 )
    v27 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v41;
  else
    v27 = v36.klass;
  memcpy((char *)&v33 - ((v17 + 15) & 0x1FFFFFFF0LL), v27, v17);
  if ( *(int *)(v7[3] + 40LL) >= 0 )
    v28 = &v40;
  else
    v28 = (void **)v36.monitor;
  memcpy((char *)&v33 - ((v18 + 15) & 0x1FFFFFFF0LL), v28, v18);
  if ( *(int *)(v7[4] + 40LL) >= 0 )
    v29 = &v39;
  else
    v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v37;
  memcpy((char *)&v33 - ((v19 + 15) & 0x1FFFFFFF0LL), v29, v19);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
    v7 = (_QWORD *)v34[7];
  }
  if ( (*(_DWORD *)(*v7 + 40LL) & 0x80000000) == 0 )
    v20 = (_QWORD *)*v20;
  if ( (*(_DWORD *)(v7[1] + 40LL) & 0x80000000) == 0 )
    v21 = (_QWORD *)*v21;
  v30 = (__int64 *)v7[5];
  if ( (*(_DWORD *)(v7[2] + 40LL) & 0x80000000) == 0 )
    v22 = (_QWORD *)*v22;
  v31 = *v30;
  if ( (*(_DWORD *)(v7[3] + 40LL) & 0x80000000) == 0 )
    v23 = (_QWORD *)*v23;
  if ( (*(_DWORD *)(v7[4] + 40LL) & 0x80000000) == 0 )
    v24 = (_QWORD *)*v24;
  v44[0] = StringLiteral_25025/*"{0}:{1}:{2}:{3}:{4}"*/;
  v44[1] = (__int64)v20;
  v44[2] = (__int64)v21;
  v44[3] = (__int64)v22;
  v44[4] = (__int64)v23;
  v44[5] = (__int64)v24;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, __int64 *))v30[2])(v31, v30, 0LL, v44, v45);
  return (System_String_o *)v45[0];
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg6,
        const MethodInfo_2E5A954 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x14
  _QWORD *v9; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x10
  __int64 v15; // x11
  __int64 v16; // x12
  __int64 v17; // x13
  __int64 v18; // x2
  __int64 v19; // x26
  __int64 v20; // x27
  __int64 v21; // x19
  __int64 v22; // x23
  _QWORD *v23; // x21
  _QWORD *v24; // x22
  _QWORD *v25; // x24
  _QWORD *v26; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v27; // x1
  void **v28; // x9
  int v29; // w8
  void **p_monitor; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v31; // x1
  void **v32; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v33; // x1
  void **v34; // x1
  _QWORD *v35; // x10
  _QWORD *v36; // x11
  __int64 *v37; // x1
  __int64 v38; // x0
  __int64 v40; // [xsp+0h] [xbp-D0h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v41; // [xsp+8h] [xbp-C8h]
  __int64 v42; // [xsp+10h] [xbp-C0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v43; // [xsp+18h] [xbp-B8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v44; // [xsp+28h] [xbp-A8h]
  void **v45; // [xsp+38h] [xbp-98h]
  _QWORD *v46; // [xsp+40h] [xbp-90h]
  unsigned __int64 StatusReg; // [xsp+48h] [xbp-88h]
  void *v48; // [xsp+50h] [xbp-80h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v49; // [xsp+58h] [xbp-78h] BYREF
  void *v50; // [xsp+60h] [xbp-70h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v51; // [xsp+68h] [xbp-68h] BYREF
  void *monitor; // [xsp+70h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v53; // [xsp+78h] [xbp-58h] BYREF
  __int64 v54[7]; // [xsp+80h] [xbp-50h] BYREF
  __int64 v55[3]; // [xsp+B8h] [xbp-18h] BYREF

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  klass = arg4.klass;
  v8 = arg1.klass;
  v55[1] = *(_QWORD *)(StatusReg + 40);
  monitor = arg1.monitor;
  v53 = arg1.klass;
  v50 = arg2.monitor;
  v51 = arg2.klass;
  v48 = arg3.monitor;
  v49 = arg3.klass;
  v9 = *(_QWORD **)&arg4.klass->_1.this_arg.bits;
  v44 = arg3;
  v45 = (void **)arg1.monitor;
  v43 = arg2;
  if ( !v9 )
  {
    v10 = arg1.klass;
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg1.monitor);
    sub_1B715CC(&StringLiteral_25026/*"{0}:{1}:{2}:{3}:{4}:{5}"*/, v11);
    v9 = *(_QWORD **)&klass->_1.this_arg.bits;
    v8 = v10;
    if ( !v9 )
    {
      sub_1BC3504();
      v9 = *(_QWORD **)&klass->_1.this_arg.bits;
      v8 = v10;
    }
  }
  v12 = *v9;
  v13 = v9[1];
  v14 = v9[2];
  v15 = v9[3];
  v16 = v9[4];
  v17 = v9[5];
  v41 = klass;
  v18 = *(unsigned int *)(v12 + 252);
  v19 = *(unsigned int *)(v15 + 252);
  v20 = *(unsigned int *)(v13 + 252);
  v21 = *(unsigned int *)(v14 + 252);
  v22 = *(unsigned int *)(v16 + 252);
  v42 = *(unsigned int *)(v17 + 252);
  v23 = (__int64 *)((char *)&v40 - ((v21 + 15) & 0x1FFFFFFF0LL));
  v24 = (__int64 *)((char *)&v40 - ((v19 + 15) & 0x1FFFFFFF0LL));
  v25 = (__int64 *)((char *)&v40 - ((v22 + 15) & 0x1FFFFFFF0LL));
  v26 = (__int64 *)((char *)&v40 - ((v42 + 15) & 0x1FFFFFFF0LL));
  LODWORD(v12) = *(_DWORD *)(v12 + 40);
  v46 = (__int64 *)((char *)&v40 - ((v18 + 15) & 0x1FFFFFFF0LL));
  if ( (int)v12 >= 0 )
    v27 = &v53;
  else
    v27 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v8;
  memcpy((char *)&v40 - ((v18 + 15) & 0x1FFFFFFF0LL), v27, v18);
  v28 = v45;
  v29 = *(_DWORD *)(v9[1] + 40LL);
  v45 = (void **)((char *)&v40 - ((v20 + 15) & 0x1FFFFFFF0LL));
  if ( v29 >= 0 )
    p_monitor = &monitor;
  else
    p_monitor = v28;
  memcpy((char *)&v40 - ((v20 + 15) & 0x1FFFFFFF0LL), p_monitor, v20);
  if ( *(int *)(v9[2] + 40LL) >= 0 )
    v31 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v51;
  else
    v31 = v43.klass;
  memcpy((char *)&v40 - ((v21 + 15) & 0x1FFFFFFF0LL), v31, v21);
  if ( *(int *)(v9[3] + 40LL) >= 0 )
    v32 = &v50;
  else
    v32 = (void **)v43.monitor;
  memcpy((char *)&v40 - ((v19 + 15) & 0x1FFFFFFF0LL), v32, v19);
  if ( *(int *)(v9[4] + 40LL) >= 0 )
    v33 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v49;
  else
    v33 = v44.klass;
  memcpy((char *)&v40 - ((v22 + 15) & 0x1FFFFFFF0LL), v33, v22);
  if ( *(int *)(v9[5] + 40LL) >= 0 )
    v34 = &v48;
  else
    v34 = (void **)v44.monitor;
  memcpy(v26, v34, v42);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
    v9 = *(_QWORD **)&v41->_1.this_arg.bits;
  }
  if ( (*(_DWORD *)(*v9 + 40LL) & 0x80000000) != 0 )
    v35 = v46;
  else
    v35 = (_QWORD *)*v46;
  v36 = v45;
  if ( (*(_DWORD *)(v9[1] + 40LL) & 0x80000000) == 0 )
    v36 = *v45;
  if ( (*(_DWORD *)(v9[2] + 40LL) & 0x80000000) == 0 )
    v23 = (_QWORD *)*v23;
  v37 = (__int64 *)v9[6];
  if ( (*(_DWORD *)(v9[3] + 40LL) & 0x80000000) == 0 )
    v24 = (_QWORD *)*v24;
  v38 = *v37;
  if ( (*(_DWORD *)(v9[4] + 40LL) & 0x80000000) == 0 )
    v25 = (_QWORD *)*v25;
  if ( (*(_DWORD *)(v9[5] + 40LL) & 0x80000000) == 0 )
    v26 = (_QWORD *)*v26;
  v54[0] = StringLiteral_25026/*"{0}:{1}:{2}:{3}:{4}:{5}"*/;
  v54[1] = (__int64)v35;
  v54[2] = (__int64)v36;
  v54[3] = (__int64)v23;
  v54[4] = (__int64)v24;
  v54[5] = (__int64)v25;
  v54[6] = (__int64)v26;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, __int64 *))v37[2])(v38, v37, 0LL, v54, v55);
  return (System_String_o *)v55[0];
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg6,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg7,
        const MethodInfo_2E5AC5C *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x15
  _QWORD *v10; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x8
  __int64 v14; // x2
  __int64 v15; // x28
  __int64 v16; // x16
  __int64 v17; // x12
  __int64 v18; // x11
  __int64 v19; // x27
  __int64 v20; // x26
  _QWORD *v21; // x21
  _QWORD *v22; // x20
  _QWORD *v23; // x22
  _QWORD *v24; // x19
  _QWORD *v25; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v26; // x1
  void **v27; // x9
  int v28; // w8
  void **v29; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v30; // x1
  void **v31; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v32; // x1
  void **v33; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v34; // x1
  long double inited; // q0
  _QWORD *v36; // x8
  _QWORD *v37; // x11
  _QWORD *v38; // x12
  __int64 *v39; // x1
  __int64 v40; // x0
  __int64 v42; // [xsp+0h] [xbp-F0h] BYREF
  __int64 v43; // [xsp+8h] [xbp-E8h]
  __int64 v44; // [xsp+10h] [xbp-E0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v45; // [xsp+18h] [xbp-D8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v46; // [xsp+28h] [xbp-C8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v47; // [xsp+38h] [xbp-B8h]
  _QWORD *v48; // [xsp+40h] [xbp-B0h]
  void **v49; // [xsp+48h] [xbp-A8h]
  _QWORD *v50; // [xsp+50h] [xbp-A0h]
  unsigned __int64 StatusReg; // [xsp+58h] [xbp-98h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v52; // [xsp+60h] [xbp-90h] BYREF
  void *v53; // [xsp+68h] [xbp-88h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v54; // [xsp+70h] [xbp-80h] BYREF
  void *v55; // [xsp+78h] [xbp-78h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v56; // [xsp+80h] [xbp-70h] BYREF
  void *v57; // [xsp+88h] [xbp-68h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v58; // [xsp+90h] [xbp-60h] BYREF
  __int64 v59[8]; // [xsp+98h] [xbp-58h] BYREF
  __int64 v60[3]; // [xsp+D8h] [xbp-18h] BYREF

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  monitor = arg4.monitor;
  klass = arg1.klass;
  v60[1] = *(_QWORD *)(StatusReg + 40);
  v57 = arg1.monitor;
  v58 = arg1.klass;
  v55 = arg2.monitor;
  v56 = arg2.klass;
  v53 = arg3.monitor;
  v54 = arg3.klass;
  v52 = arg4.klass;
  v10 = (_QWORD *)*((_QWORD *)arg4.monitor + 7);
  v49 = (void **)arg1.monitor;
  v45 = arg2;
  v46 = arg3;
  v47 = arg4.klass;
  if ( !v10 )
  {
    v11 = arg1.klass;
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg1.monitor);
    sub_1B715CC(&StringLiteral_25027/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/, v12);
    v10 = (_QWORD *)monitor[7];
    klass = v11;
    if ( !v10 )
    {
      sub_1BC3504();
      v10 = (_QWORD *)monitor[7];
      klass = v11;
    }
  }
  v13 = *v10;
  v14 = *(unsigned int *)(*v10 + 252LL);
  v15 = *(unsigned int *)(v10[3] + 252LL);
  v16 = *(unsigned int *)(v10[4] + 252LL);
  v17 = *(unsigned int *)(v10[5] + 252LL);
  v18 = *(unsigned int *)(v10[6] + 252LL);
  v19 = *(unsigned int *)(v10[1] + 252LL);
  v20 = *(unsigned int *)(v10[2] + 252LL);
  v48 = monitor;
  v42 = v16;
  v43 = v17;
  v44 = v18;
  v21 = (__int64 *)((char *)&v42 - ((v20 + 15) & 0x1FFFFFFF0LL));
  v22 = (__int64 *)((char *)&v42 - ((v15 + 15) & 0x1FFFFFFF0LL));
  v23 = (__int64 *)((char *)&v42 - ((v16 + 15) & 0x1FFFFFFF0LL));
  v24 = (__int64 *)((char *)&v42 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v25 = (__int64 *)((char *)&v42 - ((v18 + 15) & 0x1FFFFFFF0LL));
  LODWORD(v13) = *(_DWORD *)(v13 + 40);
  v50 = (__int64 *)((char *)&v42 - ((v14 + 15) & 0x1FFFFFFF0LL));
  if ( (int)v13 >= 0 )
    v26 = &v58;
  else
    v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v42 - ((v14 + 15) & 0x1FFFFFFF0LL), v26, v14);
  v27 = v49;
  v28 = *(_DWORD *)(v10[1] + 40LL);
  v49 = (void **)((char *)&v42 - ((v19 + 15) & 0x1FFFFFFF0LL));
  if ( v28 >= 0 )
    v29 = &v57;
  else
    v29 = v27;
  memcpy((char *)&v42 - ((v19 + 15) & 0x1FFFFFFF0LL), v29, v19);
  if ( *(int *)(v10[2] + 40LL) >= 0 )
    v30 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v56;
  else
    v30 = v45.klass;
  memcpy((char *)&v42 - ((v20 + 15) & 0x1FFFFFFF0LL), v30, v20);
  if ( *(int *)(v10[3] + 40LL) >= 0 )
    v31 = &v55;
  else
    v31 = (void **)v45.monitor;
  memcpy((char *)&v42 - ((v15 + 15) & 0x1FFFFFFF0LL), v31, v15);
  if ( *(int *)(v10[4] + 40LL) >= 0 )
    v32 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v54;
  else
    v32 = v46.klass;
  memcpy(v23, v32, v42);
  if ( *(int *)(v10[5] + 40LL) >= 0 )
    v33 = &v53;
  else
    v33 = (void **)v46.monitor;
  memcpy(v24, v33, v43);
  if ( *(int *)(v10[6] + 40LL) >= 0 )
    v34 = &v52;
  else
    v34 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v47;
  memcpy(v25, v34, v44);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  v36 = (_QWORD *)v48[7];
  if ( (*(_DWORD *)(*v36 + 40LL) & 0x80000000) != 0 )
    v37 = v50;
  else
    v37 = (_QWORD *)*v50;
  v38 = v49;
  if ( (*(_DWORD *)(v36[1] + 40LL) & 0x80000000) == 0 )
    v38 = *v49;
  if ( (*(_DWORD *)(v36[2] + 40LL) & 0x80000000) == 0 )
    v21 = (_QWORD *)*v21;
  if ( (*(_DWORD *)(v36[3] + 40LL) & 0x80000000) == 0 )
    v22 = (_QWORD *)*v22;
  v39 = (__int64 *)v36[7];
  if ( (*(_DWORD *)(v36[4] + 40LL) & 0x80000000) == 0 )
    v23 = (_QWORD *)*v23;
  v40 = *v39;
  if ( (*(_DWORD *)(v36[5] + 40LL) & 0x80000000) == 0 )
    v24 = (_QWORD *)*v24;
  if ( (*(_DWORD *)(v36[6] + 40LL) & 0x80000000) == 0 )
    v25 = (_QWORD *)*v25;
  v59[0] = StringLiteral_25027/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/;
  v59[1] = (__int64)v37;
  v59[2] = (__int64)v38;
  v59[3] = (__int64)v21;
  v59[4] = (__int64)v22;
  v59[5] = (__int64)v23;
  v59[6] = (__int64)v24;
  v59[7] = (__int64)v25;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, __int64 *, long double))v39[2])(
    v40,
    v39,
    0LL,
    v59,
    v60,
    inited);
  return (System_String_o *)v60[0];
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg6,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg7,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg8,
        const MethodInfo_2E5AFC0 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x16
  _QWORD *v10; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x10
  __int64 v14; // x8
  __int64 v15; // x14
  __int64 v16; // x15
  __int64 v17; // x2
  __int64 v18; // x17
  __int64 v19; // x13
  __int64 v20; // x27
  __int64 v21; // x12
  __int64 v22; // x11
  __int64 v23; // x25
  _QWORD *v24; // x26
  _QWORD *v25; // x22
  _QWORD *v26; // x21
  _QWORD *v27; // x20
  _QWORD *v28; // x24
  _QWORD *v29; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v30; // x1
  void **v31; // x9
  int v32; // w8
  void **p_monitor; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v34; // x1
  void **v35; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v36; // x1
  void **v37; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v38; // x1
  void **v39; // x1
  long double inited; // q0
  _QWORD *v41; // x8
  _QWORD *v42; // x11
  _QWORD *v43; // x12
  __int64 *v44; // x1
  __int64 v45; // x0
  __int64 v47; // [xsp+0h] [xbp-120h] BYREF
  __int64 v48; // [xsp+8h] [xbp-118h]
  __int64 v49; // [xsp+10h] [xbp-110h]
  __int64 v50; // [xsp+18h] [xbp-108h]
  __int64 v51; // [xsp+20h] [xbp-100h]
  __int64 v52; // [xsp+28h] [xbp-F8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v53; // [xsp+30h] [xbp-F0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v54; // [xsp+40h] [xbp-E0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v55; // [xsp+50h] [xbp-D0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v56; // [xsp+60h] [xbp-C0h]
  void **v57; // [xsp+68h] [xbp-B8h]
  _QWORD *v58; // [xsp+70h] [xbp-B0h]
  unsigned __int64 StatusReg; // [xsp+78h] [xbp-A8h]
  void *v60; // [xsp+80h] [xbp-A0h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v61; // [xsp+88h] [xbp-98h] BYREF
  void *v62; // [xsp+90h] [xbp-90h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v63; // [xsp+98h] [xbp-88h] BYREF
  void *v64; // [xsp+A0h] [xbp-80h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v65; // [xsp+A8h] [xbp-78h] BYREF
  void *monitor; // [xsp+B0h] [xbp-70h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v67; // [xsp+B8h] [xbp-68h] BYREF
  __int64 v68[9]; // [xsp+C0h] [xbp-60h] BYREF
  __int64 v69[2]; // [xsp+108h] [xbp-18h] BYREF

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  klass = arg1.klass;
  v69[1] = *(_QWORD *)(StatusReg + 40);
  monitor = arg1.monitor;
  v67 = arg1.klass;
  v64 = arg2.monitor;
  v65 = arg2.klass;
  v62 = arg3.monitor;
  v63 = arg3.klass;
  v60 = arg4.monitor;
  v61 = arg4.klass;
  v10 = *(_QWORD **)&arg5.klass->_1.this_arg.bits;
  v57 = (void **)arg1.monitor;
  v53 = arg2;
  v54 = arg3;
  v55 = arg4;
  if ( !v10 )
  {
    v11 = arg1.klass;
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg1.monitor);
    sub_1B715CC(&StringLiteral_25028/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/, v12);
    v10 = *(_QWORD **)&arg5.klass->_1.this_arg.bits;
    klass = v11;
    if ( !v10 )
    {
      sub_1BC3504();
      v10 = *(_QWORD **)&arg5.klass->_1.this_arg.bits;
      klass = v11;
    }
  }
  v13 = v10[2];
  v14 = *v10;
  v15 = v10[6];
  v16 = v10[7];
  v17 = *(unsigned int *)(*v10 + 252LL);
  v18 = *(unsigned int *)(v10[4] + 252LL);
  v19 = *(unsigned int *)(v10[5] + 252LL);
  v20 = *(unsigned int *)(v10[1] + 252LL);
  v48 = *(unsigned int *)(v10[3] + 252LL);
  v21 = *(unsigned int *)(v15 + 252);
  v22 = *(unsigned int *)(v16 + 252);
  v23 = *(unsigned int *)(v13 + 252);
  v49 = v18;
  v50 = v19;
  v56 = arg5.klass;
  v51 = v21;
  v52 = v22;
  v24 = (__int64 *)((char *)&v47 - ((v23 + 15) & 0x1FFFFFFF0LL));
  v25 = (__int64 *)((char *)&v47 - ((v48 + 15) & 0x1FFFFFFF0LL));
  v26 = (__int64 *)((char *)&v47 - ((v18 + 15) & 0x1FFFFFFF0LL));
  v27 = (__int64 *)((char *)&v47 - ((v19 + 15) & 0x1FFFFFFF0LL));
  v28 = (__int64 *)((char *)&v47 - ((v21 + 15) & 0x1FFFFFFF0LL));
  v29 = (__int64 *)((char *)&v47 - ((v22 + 15) & 0x1FFFFFFF0LL));
  LODWORD(v14) = *(_DWORD *)(v14 + 40);
  v58 = (__int64 *)((char *)&v47 - ((v17 + 15) & 0x1FFFFFFF0LL));
  if ( (int)v14 >= 0 )
    v30 = &v67;
  else
    v30 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v47 - ((v17 + 15) & 0x1FFFFFFF0LL), v30, v17);
  v31 = v57;
  v32 = *(_DWORD *)(v10[1] + 40LL);
  v57 = (void **)((char *)&v47 - ((v20 + 15) & 0x1FFFFFFF0LL));
  if ( v32 >= 0 )
    p_monitor = &monitor;
  else
    p_monitor = v31;
  memcpy((char *)&v47 - ((v20 + 15) & 0x1FFFFFFF0LL), p_monitor, v20);
  if ( *(int *)(v10[2] + 40LL) >= 0 )
    v34 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v65;
  else
    v34 = v53.klass;
  memcpy((char *)&v47 - ((v23 + 15) & 0x1FFFFFFF0LL), v34, v23);
  if ( *(int *)(v10[3] + 40LL) >= 0 )
    v35 = &v64;
  else
    v35 = (void **)v53.monitor;
  memcpy(v25, v35, v48);
  if ( *(int *)(v10[4] + 40LL) >= 0 )
    v36 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v63;
  else
    v36 = v54.klass;
  memcpy(v26, v36, v49);
  if ( *(int *)(v10[5] + 40LL) >= 0 )
    v37 = &v62;
  else
    v37 = (void **)v54.monitor;
  memcpy(v27, v37, v50);
  if ( *(int *)(v10[6] + 40LL) >= 0 )
    v38 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v61;
  else
    v38 = v55.klass;
  memcpy(v28, v38, v51);
  if ( *(int *)(v10[7] + 40LL) >= 0 )
    v39 = &v60;
  else
    v39 = (void **)v55.monitor;
  memcpy(v29, v39, v52);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  v41 = *(_QWORD **)&v56->_1.this_arg.bits;
  if ( (*(_DWORD *)(*v41 + 40LL) & 0x80000000) != 0 )
    v42 = v58;
  else
    v42 = (_QWORD *)*v58;
  v43 = v57;
  if ( (*(_DWORD *)(v41[1] + 40LL) & 0x80000000) == 0 )
    v43 = *v57;
  if ( (*(_DWORD *)(v41[2] + 40LL) & 0x80000000) == 0 )
    v24 = (_QWORD *)*v24;
  if ( (*(_DWORD *)(v41[3] + 40LL) & 0x80000000) == 0 )
    v25 = (_QWORD *)*v25;
  if ( (*(_DWORD *)(v41[4] + 40LL) & 0x80000000) == 0 )
    v26 = (_QWORD *)*v26;
  v44 = (__int64 *)v41[8];
  if ( (*(_DWORD *)(v41[5] + 40LL) & 0x80000000) == 0 )
    v27 = (_QWORD *)*v27;
  v45 = *v44;
  if ( (*(_DWORD *)(v41[6] + 40LL) & 0x80000000) == 0 )
    v28 = (_QWORD *)*v28;
  if ( (*(_DWORD *)(v41[7] + 40LL) & 0x80000000) == 0 )
    v29 = (_QWORD *)*v29;
  v68[0] = StringLiteral_25028/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/;
  v68[1] = (__int64)v42;
  v68[2] = (__int64)v43;
  v68[3] = (__int64)v24;
  v68[4] = (__int64)v25;
  v68[5] = (__int64)v26;
  v68[6] = (__int64)v27;
  v68[7] = (__int64)v28;
  v68[8] = (__int64)v29;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64 *, __int64 *, long double))v44[2])(
    v45,
    v44,
    0LL,
    v68,
    v69,
    inited);
  return (System_String_o *)v69[0];
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int_(int32_t arg1, const MethodInfo_2E594A0 *method)
{
  const MethodInfo_2E594A0_RGCTXs *rgctx_data; // x8
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = arg1;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BC3504();
    rgctx_data = method->rgctx_data;
  }
  return System_Int32__ToString((int32_t)&v5, (const MethodInfo *)rgctx_data[1]._0_T);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int_(
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_2E5960C *method)
{
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25017/*"{0}:{1}"*/, v4);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5EC04LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_2E59A9C *method)
{
  __int64 v5; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25022/*"{0}:{1}:{2}"*/, v5);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5F750LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_2E59F5C *method)
{
  __int64 v6; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25024/*"{0}:{1}:{2}:{3}"*/, v6);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5FE58LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int32_t arg5,
        const MethodInfo_2E5A404 *method)
{
  __int64 v7; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25025/*"{0}:{1}:{2}:{3}:{4}"*/, v7);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E60418LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int64_t arg5,
        const MethodInfo_2E5A4B0 *method)
{
  __int64 v7; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25025/*"{0}:{1}:{2}:{3}:{4}"*/, v7);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E60598LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int64_t arg4,
        const MethodInfo_2E59FF8 *method)
{
  __int64 v6; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25024/*"{0}:{1}:{2}:{3}"*/, v6);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5FFC8LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__int__object__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        Il2CppObject *arg4,
        int32_t arg5,
        const MethodInfo_2E5A55C *method)
{
  __int64 v7; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25025/*"{0}:{1}:{2}:{3}:{4}"*/, v7);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E60718LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int64_t arg3,
        const MethodInfo_2E59B30 *method)
{
  __int64 v5; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25022/*"{0}:{1}:{2}"*/, v5);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5F8B8LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__int__object_(
        int32_t arg1,
        int32_t arg2,
        Il2CppObject *arg3,
        const MethodInfo_2E59BC4 *method)
{
  __int64 v5; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25022/*"{0}:{1}:{2}"*/, v5);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5FA20LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_int__long_(
        int32_t arg1,
        int64_t arg2,
        const MethodInfo_2E59690 *method)
{
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_1B715CC(&StringLiteral_25017/*"{0}:{1}"*/, v4);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5F098LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long_(int64_t arg1, const MethodInfo_2E594DC *method)
{
  const MethodInfo_2E594DC_RGCTXs *rgctx_data; // x8
  int64_t v5; // [xsp+8h] [xbp-18h] BYREF

  v5 = arg1;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BC3504();
    rgctx_data = method->rgctx_data;
  }
  return System_Int64__ToString((int64_t)&v5, (const MethodInfo *)rgctx_data[1]._0_T);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int_(
        int64_t arg1,
        int32_t arg2,
        const MethodInfo_2E59714 *method)
{
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25017/*"{0}:{1}"*/, v4);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5F1F0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_2E59C58 *method)
{
  __int64 v5; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25022/*"{0}:{1}:{2}"*/, v5);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5FB88LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__int__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_2E5A094 *method)
{
  __int64 v6; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25024/*"{0}:{1}:{2}:{3}"*/, v6);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E60138LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long_(
        int64_t arg1,
        int64_t arg2,
        const MethodInfo_2E59798 *method)
{
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_1B715CC(&StringLiteral_25017/*"{0}:{1}"*/, v4);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5F348LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__object_(
        int64_t arg1,
        int64_t arg2,
        Il2CppObject *arg3,
        const MethodInfo_2E59CEC *method)
{
  __int64 v5; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_1B715CC(&StringLiteral_25022/*"{0}:{1}:{2}"*/, v5);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5FCF0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__object__long_(
        int64_t arg1,
        int64_t arg2,
        Il2CppObject *arg3,
        int64_t arg4,
        const MethodInfo_2E5A130 *method)
{
  __int64 v6; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_1B715CC(&StringLiteral_25024/*"{0}:{1}:{2}:{3}"*/, v6);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E602A8LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_long__long__object__long__long__long_(
        int64_t arg1,
        int64_t arg2,
        Il2CppObject *arg3,
        int64_t arg4,
        int64_t arg5,
        int64_t arg6,
        const MethodInfo_2E5A8A0 *method)
{
  __int64 v8; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_1B715CC(&StringLiteral_25026/*"{0}:{1}:{2}:{3}:{4}:{5}"*/, v8);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E60898LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__int_(
        Il2CppObject *arg1,
        int32_t arg2,
        const MethodInfo_2E5981C *method)
{
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, *(_QWORD *)&arg2);
    sub_1B715CC(&StringLiteral_25017/*"{0}:{1}"*/, v4);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5F4A0LL);
}


System_String_o *__fastcall DataEntityBase__CreateMultiplePK_object__long_(
        Il2CppObject *arg1,
        int64_t arg2,
        const MethodInfo_2E598A0 *method)
{
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Cysharp_Text_ZString_TypeInfo, arg2);
    sub_1B715CC(&StringLiteral_25017/*"{0}:{1}"*/, v4);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x2E5F5F8LL);
}