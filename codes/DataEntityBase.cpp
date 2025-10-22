void DataEntityBase___ctor(DataEntityBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        const MethodInfo_30F7B04 *method)
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
  v14[0] = arg1.klass;
  v5 = (__int64 *)*((_QWORD *)arg1.monitor + 7);
  if ( !v5 )
  {
    sub_1C8ECD4();
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
    v8 = sub_1C8EC78(v2);
    v5 = (__int64 *)monitor[7];
    v6 = *v5;
    v7 = *(_WORD *)(*v5 + 309);
  }
  v9 = (char *)&v14[-1] - (((unsigned int)(*(_DWORD *)(v8 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v7 & 1) == 0 )
  {
    v10 = sub_1C8EC78(v2);
    v5 = (__int64 *)monitor[7];
    LODWORD(v6) = v10;
  }
  if ( *(int *)(*v5 + 40) >= 0 )
    v11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v14;
  else
    v11 = klass;
  sub_1C3EFCC(v6, v5[1], (int)v9, v11);
  return (System_String_o *)v14[1];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        const MethodInfo_30F7F10 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  void **monitor; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v5; // x23
  _QWORD *v6; // x26
  size_t v7; // x2
  size_t v8; // x24
  _QWORD *v9; // x20
  _QWORD *v10; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v11; // x1
  void **v12; // x1
  __int64 *v13; // x1
  __int64 v14; // x0
  __int64 v16; // [xsp+0h] [xbp-40h] BYREF
  void *v17; // [xsp+8h] [xbp-38h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v18; // [xsp+10h] [xbp-30h] BYREF
  _QWORD v19[3]; // [xsp+18h] [xbp-28h] BYREF
  _QWORD v20[2]; // [xsp+30h] [xbp-10h] BYREF

  klass = arg2.klass;
  monitor = (void **)arg1.monitor;
  v5 = arg1.klass;
  v20[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v17 = arg1.monitor;
  v18 = arg1.klass;
  v6 = *(_QWORD **)&arg2.klass->_1.this_arg.bits;
  if ( !v6 )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25197/*"{0}:{1}"*/);
    v6 = *(_QWORD **)&klass->_1.this_arg.bits;
    if ( !v6 )
    {
      sub_1C8ECD4();
      v6 = *(_QWORD **)&klass->_1.this_arg.bits;
    }
  }
  v7 = *(unsigned int *)(*v6 + 252LL);
  v8 = *(unsigned int *)(v6[1] + 252LL);
  v9 = (__int64 *)((char *)&v16 - ((v7 + 15) & 0x1FFFFFFF0LL));
  v10 = (__int64 *)((char *)&v16 - ((v8 + 15) & 0x1FFFFFFF0LL));
  if ( *(int *)(*v6 + 40LL) >= 0 )
    v11 = &v18;
  else
    v11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v5;
  memcpy(&v16, v11, v7);
  if ( *(int *)(v6[1] + 40LL) >= 0 )
    v12 = &v17;
  else
    v12 = monitor;
  memcpy((char *)&v16 - ((v8 + 15) & 0x1FFFFFFF0LL), v12, v8);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
    v6 = *(_QWORD **)&klass->_1.this_arg.bits;
  }
  v13 = (__int64 *)v6[2];
  v14 = *v13;
  if ( (*(_DWORD *)(*v6 + 40LL) & 0x80000000) == 0 )
    v9 = (_QWORD *)*v9;
  if ( (*(_DWORD *)(v6[1] + 40LL) & 0x80000000) == 0 )
    v10 = (_QWORD *)*v10;
  v19[0] = StringLiteral_25197/*"{0}:{1}"*/;
  v19[1] = v9;
  v19[2] = v10;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v13[2])(v14, v13, 0, v19, v20);
  return (System_String_o *)v20[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        const MethodInfo_30F836C *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  void **v6; // x24
  _QWORD *v7; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x25
  size_t v9; // x2
  size_t v10; // x26
  size_t v11; // x27
  _QWORD *v12; // x20
  _QWORD *v13; // x21
  _QWORD *v14; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v15; // x1
  void **v16; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v17; // x1
  __int64 *v18; // x1
  __int64 v19; // x0
  unsigned __int64 StatusReg; // [xsp+0h] [xbp-50h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v22; // [xsp+8h] [xbp-48h] BYREF
  void *v23; // [xsp+10h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v24; // [xsp+18h] [xbp-38h] BYREF
  _QWORD v25[4]; // [xsp+20h] [xbp-30h] BYREF
  _QWORD v26[2]; // [xsp+40h] [xbp-10h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = arg2.monitor;
  klass = arg2.klass;
  v6 = (void **)arg1.monitor;
  v26[1] = *(_QWORD *)(StatusReg + 40);
  v23 = arg1.monitor;
  v24 = arg1.klass;
  v22 = arg2.klass;
  v7 = (_QWORD *)*((_QWORD *)arg2.monitor + 7);
  v8 = arg1.klass;
  if ( !v7 )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25201/*"{0}:{1}:{2}"*/);
    v7 = (_QWORD *)monitor[7];
    if ( !v7 )
    {
      sub_1C8ECD4();
      v7 = (_QWORD *)monitor[7];
    }
  }
  v9 = *(unsigned int *)(*v7 + 252LL);
  v10 = *(unsigned int *)(v7[1] + 252LL);
  v11 = *(unsigned int *)(v7[2] + 252LL);
  v12 = (unsigned __int64 *)((char *)&StatusReg - ((v9 + 15) & 0x1FFFFFFF0LL));
  v13 = (unsigned __int64 *)((char *)&StatusReg - ((v10 + 15) & 0x1FFFFFFF0LL));
  v14 = (unsigned __int64 *)((char *)&StatusReg - ((v11 + 15) & 0x1FFFFFFF0LL));
  if ( *(int *)(*v7 + 40LL) >= 0 )
    v15 = &v24;
  else
    v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v8;
  memcpy((char *)&StatusReg - ((v9 + 15) & 0x1FFFFFFF0LL), v15, v9);
  if ( *(int *)(v7[1] + 40LL) >= 0 )
    v16 = &v23;
  else
    v16 = v6;
  memcpy((char *)&StatusReg - ((v10 + 15) & 0x1FFFFFFF0LL), v16, v10);
  if ( *(int *)(v7[2] + 40LL) >= 0 )
    v17 = &v22;
  else
    v17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&StatusReg - ((v11 + 15) & 0x1FFFFFFF0LL), v17, v11);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
    v7 = (_QWORD *)monitor[7];
  }
  v18 = (__int64 *)v7[3];
  if ( (*(_DWORD *)(*v7 + 40LL) & 0x80000000) == 0 )
    v12 = (_QWORD *)*v12;
  v19 = *v18;
  if ( (*(_DWORD *)(v7[1] + 40LL) & 0x80000000) == 0 )
    v13 = (_QWORD *)*v13;
  if ( (*(_DWORD *)(v7[2] + 40LL) & 0x80000000) == 0 )
    v14 = (_QWORD *)*v14;
  v25[0] = StringLiteral_25201/*"{0}:{1}:{2}"*/;
  v25[1] = v12;
  v25[2] = v13;
  v25[3] = v14;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v18[2])(v19, v18, 0, v25, v26);
  return (System_String_o *)v26[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        const MethodInfo_30F8854 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  void **monitor; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x27
  _QWORD *v8; // x25
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x10
  __int64 v12; // x11
  size_t v13; // x2
  size_t v14; // x20
  size_t v15; // x24
  size_t v16; // x28
  _QWORD *v17; // x19
  _QWORD *v18; // x21
  _QWORD *v19; // x22
  _QWORD *v20; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v21; // x1
  void **v22; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v23; // x1
  void **v24; // x1
  __int64 *v25; // x1
  __int64 v26; // x0
  __int64 v28; // [xsp+0h] [xbp-80h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v29; // [xsp+8h] [xbp-78h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v30; // [xsp+10h] [xbp-70h]
  unsigned __int64 StatusReg; // [xsp+20h] [xbp-60h]
  void *v32; // [xsp+28h] [xbp-58h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v33; // [xsp+30h] [xbp-50h] BYREF
  void *v34; // [xsp+38h] [xbp-48h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v35; // [xsp+40h] [xbp-40h] BYREF
  _QWORD v36[5]; // [xsp+48h] [xbp-38h] BYREF
  _QWORD v37[2]; // [xsp+70h] [xbp-10h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  klass = arg3.klass;
  monitor = (void **)arg1.monitor;
  v7 = arg1.klass;
  v37[1] = *(_QWORD *)(StatusReg + 40);
  v34 = arg1.monitor;
  v35 = arg1.klass;
  v32 = arg2.monitor;
  v33 = arg2.klass;
  v8 = *(_QWORD **)&arg3.klass->_1.this_arg.bits;
  v30 = arg2;
  if ( !v8 )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25203/*"{0}:{1}:{2}:{3}"*/);
    v8 = *(_QWORD **)&klass->_1.this_arg.bits;
    if ( !v8 )
    {
      sub_1C8ECD4();
      v8 = *(_QWORD **)&klass->_1.this_arg.bits;
    }
  }
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v29 = klass;
  v13 = *(unsigned int *)(v9 + 252);
  v14 = *(unsigned int *)(v10 + 252);
  v15 = *(unsigned int *)(v11 + 252);
  v16 = *(unsigned int *)(v12 + 252);
  v17 = (__int64 *)((char *)&v28 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v18 = (__int64 *)((char *)&v28 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v19 = (__int64 *)((char *)&v28 - ((v15 + 15) & 0x1FFFFFFF0LL));
  v20 = (__int64 *)((char *)&v28 - ((v16 + 15) & 0x1FFFFFFF0LL));
  if ( *(int *)(v9 + 40) >= 0 )
    v21 = &v35;
  else
    v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v7;
  memcpy((char *)&v28 - ((v13 + 15) & 0x1FFFFFFF0LL), v21, v13);
  if ( *(int *)(v8[1] + 40LL) >= 0 )
    v22 = &v34;
  else
    v22 = monitor;
  memcpy((char *)&v28 - ((v14 + 15) & 0x1FFFFFFF0LL), v22, v14);
  if ( *(int *)(v8[2] + 40LL) >= 0 )
    v23 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v33;
  else
    v23 = v30.klass;
  memcpy((char *)&v28 - ((v15 + 15) & 0x1FFFFFFF0LL), v23, v15);
  if ( *(int *)(v8[3] + 40LL) >= 0 )
    v24 = &v32;
  else
    v24 = (void **)v30.monitor;
  memcpy((char *)&v28 - ((v16 + 15) & 0x1FFFFFFF0LL), v24, v16);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
    v8 = *(_QWORD **)&v29->_1.this_arg.bits;
  }
  if ( (*(_DWORD *)(*v8 + 40LL) & 0x80000000) == 0 )
    v17 = (_QWORD *)*v17;
  v25 = (__int64 *)v8[4];
  if ( (*(_DWORD *)(v8[1] + 40LL) & 0x80000000) == 0 )
    v18 = (_QWORD *)*v18;
  v26 = *v25;
  if ( (*(_DWORD *)(v8[2] + 40LL) & 0x80000000) == 0 )
    v19 = (_QWORD *)*v19;
  if ( (*(_DWORD *)(v8[3] + 40LL) & 0x80000000) == 0 )
    v20 = (_QWORD *)*v20;
  v36[0] = StringLiteral_25203/*"{0}:{1}:{2}:{3}"*/;
  v36[1] = v17;
  v36[2] = v18;
  v36[3] = v19;
  v36[4] = v20;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v25[2])(v26, v25, 0, v36, v37);
  return (System_String_o *)v37[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        const MethodInfo_30F8C90 *method)
{
  _QWORD *monitor; // x19
  _QWORD *v7; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x10
  __int64 v12; // x11
  __int64 v13; // x12
  size_t v14; // x2
  size_t v15; // x28
  size_t v16; // x27
  size_t v17; // x26
  size_t v18; // x25
  _QWORD *v19; // x19
  _QWORD *v20; // x20
  _QWORD *v21; // x21
  _QWORD *v22; // x23
  _QWORD *v23; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *p_klass; // x1
  void **v25; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v26; // x1
  void **v27; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v28; // x1
  __int64 *v29; // x1
  __int64 v30; // x0
  __int64 v32; // [xsp+0h] [xbp-A0h] BYREF
  _QWORD *v33; // [xsp+8h] [xbp-98h]
  void **v34; // [xsp+10h] [xbp-90h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v35; // [xsp+18h] [xbp-88h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v36; // [xsp+28h] [xbp-78h]
  unsigned __int64 StatusReg; // [xsp+30h] [xbp-70h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v38; // [xsp+38h] [xbp-68h] BYREF
  void *v39; // [xsp+40h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v40; // [xsp+48h] [xbp-58h] BYREF
  void *v41; // [xsp+50h] [xbp-50h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+58h] [xbp-48h] BYREF
  _QWORD v43[6]; // [xsp+60h] [xbp-40h] BYREF
  _QWORD v44[2]; // [xsp+90h] [xbp-10h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = arg3.monitor;
  v44[1] = *(_QWORD *)(StatusReg + 40);
  v41 = arg1.monitor;
  klass = arg1.klass;
  v39 = arg2.monitor;
  v40 = arg2.klass;
  v38 = arg3.klass;
  v7 = (_QWORD *)*((_QWORD *)arg3.monitor + 7);
  v34 = (void **)arg1.monitor;
  v35 = arg2;
  v36 = arg3.klass;
  if ( !v7 )
  {
    v8 = arg1.klass;
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25204/*"{0}:{1}:{2}:{3}:{4}"*/);
    v7 = (_QWORD *)monitor[7];
    arg1.klass = v8;
    if ( !v7 )
    {
      sub_1C8ECD4();
      v7 = (_QWORD *)monitor[7];
      arg1.klass = v8;
    }
  }
  v9 = *v7;
  v10 = v7[1];
  v11 = v7[2];
  v12 = v7[3];
  v13 = v7[4];
  v33 = monitor;
  v14 = *(unsigned int *)(v9 + 252);
  v15 = *(unsigned int *)(v10 + 252);
  v16 = *(unsigned int *)(v11 + 252);
  v17 = *(unsigned int *)(v12 + 252);
  v18 = *(unsigned int *)(v13 + 252);
  v19 = (__int64 *)((char *)&v32 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v20 = (__int64 *)((char *)&v32 - ((v15 + 15) & 0x1FFFFFFF0LL));
  v21 = (__int64 *)((char *)&v32 - ((v16 + 15) & 0x1FFFFFFF0LL));
  v22 = (__int64 *)((char *)&v32 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v23 = (__int64 *)((char *)&v32 - ((v18 + 15) & 0x1FFFFFFF0LL));
  if ( *(int *)(v9 + 40) >= 0 )
    p_klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&klass;
  else
    p_klass = arg1.klass;
  memcpy((char *)&v32 - ((v14 + 15) & 0x1FFFFFFF0LL), p_klass, v14);
  if ( *(int *)(v7[1] + 40LL) >= 0 )
    v25 = &v41;
  else
    v25 = v34;
  memcpy((char *)&v32 - ((v15 + 15) & 0x1FFFFFFF0LL), v25, v15);
  if ( *(int *)(v7[2] + 40LL) >= 0 )
    v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v40;
  else
    v26 = v35.klass;
  memcpy((char *)&v32 - ((v16 + 15) & 0x1FFFFFFF0LL), v26, v16);
  if ( *(int *)(v7[3] + 40LL) >= 0 )
    v27 = &v39;
  else
    v27 = (void **)v35.monitor;
  memcpy((char *)&v32 - ((v17 + 15) & 0x1FFFFFFF0LL), v27, v17);
  if ( *(int *)(v7[4] + 40LL) >= 0 )
    v28 = &v38;
  else
    v28 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v36;
  memcpy((char *)&v32 - ((v18 + 15) & 0x1FFFFFFF0LL), v28, v18);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
    v7 = (_QWORD *)v33[7];
  }
  if ( (*(_DWORD *)(*v7 + 40LL) & 0x80000000) == 0 )
    v19 = (_QWORD *)*v19;
  if ( (*(_DWORD *)(v7[1] + 40LL) & 0x80000000) == 0 )
    v20 = (_QWORD *)*v20;
  v29 = (__int64 *)v7[5];
  if ( (*(_DWORD *)(v7[2] + 40LL) & 0x80000000) == 0 )
    v21 = (_QWORD *)*v21;
  v30 = *v29;
  if ( (*(_DWORD *)(v7[3] + 40LL) & 0x80000000) == 0 )
    v22 = (_QWORD *)*v22;
  if ( (*(_DWORD *)(v7[4] + 40LL) & 0x80000000) == 0 )
    v23 = (_QWORD *)*v23;
  v43[0] = StringLiteral_25204/*"{0}:{1}:{2}:{3}:{4}"*/;
  v43[1] = v19;
  v43[2] = v20;
  v43[3] = v21;
  v43[4] = v22;
  v43[5] = v23;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v29[2])(v30, v29, 0, v43, v44);
  return (System_String_o *)v44[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg6,
        const MethodInfo_30F8FDC *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x14
  _QWORD *v9; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x10
  __int64 v14; // x11
  __int64 v15; // x12
  __int64 v16; // x13
  size_t v17; // x2
  size_t v18; // x26
  size_t v19; // x27
  size_t v20; // x19
  size_t v21; // x23
  _QWORD *v22; // x21
  _QWORD *v23; // x22
  _QWORD *v24; // x24
  _QWORD *v25; // x25
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v26; // x1
  void **v27; // x9
  int v28; // w8
  void **p_monitor; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v30; // x1
  void **v31; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v32; // x1
  void **v33; // x1
  _QWORD *v34; // x10
  _QWORD *v35; // x11
  __int64 *v36; // x1
  __int64 v37; // x0
  __int64 v39; // [xsp+0h] [xbp-D0h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v40; // [xsp+8h] [xbp-C8h]
  size_t v41; // [xsp+10h] [xbp-C0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v42; // [xsp+18h] [xbp-B8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v43; // [xsp+28h] [xbp-A8h]
  void **v44; // [xsp+38h] [xbp-98h]
  _QWORD *v45; // [xsp+40h] [xbp-90h]
  unsigned __int64 StatusReg; // [xsp+48h] [xbp-88h]
  void *v47; // [xsp+50h] [xbp-80h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v48; // [xsp+58h] [xbp-78h] BYREF
  void *v49; // [xsp+60h] [xbp-70h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v50; // [xsp+68h] [xbp-68h] BYREF
  void *monitor; // [xsp+70h] [xbp-60h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v52; // [xsp+78h] [xbp-58h] BYREF
  _QWORD v53[7]; // [xsp+80h] [xbp-50h] BYREF
  _QWORD v54[3]; // [xsp+B8h] [xbp-18h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  klass = arg4.klass;
  v8 = arg1.klass;
  v54[1] = *(_QWORD *)(StatusReg + 40);
  monitor = arg1.monitor;
  v52 = arg1.klass;
  v49 = arg2.monitor;
  v50 = arg2.klass;
  v47 = arg3.monitor;
  v48 = arg3.klass;
  v9 = *(_QWORD **)&arg4.klass->_1.this_arg.bits;
  v43 = arg3;
  v44 = (void **)arg1.monitor;
  v42 = arg2;
  if ( !v9 )
  {
    v10 = arg1.klass;
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25205/*"{0}:{1}:{2}:{3}:{4}:{5}"*/);
    v9 = *(_QWORD **)&klass->_1.this_arg.bits;
    v8 = v10;
    if ( !v9 )
    {
      sub_1C8ECD4();
      v9 = *(_QWORD **)&klass->_1.this_arg.bits;
      v8 = v10;
    }
  }
  v11 = *v9;
  v12 = v9[1];
  v13 = v9[2];
  v14 = v9[3];
  v15 = v9[4];
  v16 = v9[5];
  v40 = klass;
  v17 = *(unsigned int *)(v11 + 252);
  v18 = *(unsigned int *)(v14 + 252);
  v19 = *(unsigned int *)(v12 + 252);
  v20 = *(unsigned int *)(v13 + 252);
  v21 = *(unsigned int *)(v15 + 252);
  v41 = *(unsigned int *)(v16 + 252);
  v22 = (__int64 *)((char *)&v39 - ((v20 + 15) & 0x1FFFFFFF0LL));
  v23 = (__int64 *)((char *)&v39 - ((v18 + 15) & 0x1FFFFFFF0LL));
  v24 = (__int64 *)((char *)&v39 - ((v21 + 15) & 0x1FFFFFFF0LL));
  v25 = (__int64 *)((char *)&v39 - ((v41 + 15) & 0x1FFFFFFF0LL));
  LODWORD(v11) = *(_DWORD *)(v11 + 40);
  v45 = (__int64 *)((char *)&v39 - ((v17 + 15) & 0x1FFFFFFF0LL));
  if ( (int)v11 >= 0 )
    v26 = &v52;
  else
    v26 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v8;
  memcpy((char *)&v39 - ((v17 + 15) & 0x1FFFFFFF0LL), v26, v17);
  v27 = v44;
  v28 = *(_DWORD *)(v9[1] + 40LL);
  v44 = (void **)((char *)&v39 - ((v19 + 15) & 0x1FFFFFFF0LL));
  if ( v28 >= 0 )
    p_monitor = &monitor;
  else
    p_monitor = v27;
  memcpy((char *)&v39 - ((v19 + 15) & 0x1FFFFFFF0LL), p_monitor, v19);
  if ( *(int *)(v9[2] + 40LL) >= 0 )
    v30 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v50;
  else
    v30 = v42.klass;
  memcpy((char *)&v39 - ((v20 + 15) & 0x1FFFFFFF0LL), v30, v20);
  if ( *(int *)(v9[3] + 40LL) >= 0 )
    v31 = &v49;
  else
    v31 = (void **)v42.monitor;
  memcpy((char *)&v39 - ((v18 + 15) & 0x1FFFFFFF0LL), v31, v18);
  if ( *(int *)(v9[4] + 40LL) >= 0 )
    v32 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v48;
  else
    v32 = v43.klass;
  memcpy((char *)&v39 - ((v21 + 15) & 0x1FFFFFFF0LL), v32, v21);
  if ( *(int *)(v9[5] + 40LL) >= 0 )
    v33 = &v47;
  else
    v33 = (void **)v43.monitor;
  memcpy(v25, v33, v41);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
    v9 = *(_QWORD **)&v40->_1.this_arg.bits;
  }
  if ( (*(_DWORD *)(*v9 + 40LL) & 0x80000000) != 0 )
    v34 = v45;
  else
    v34 = (_QWORD *)*v45;
  v35 = v44;
  if ( (*(_DWORD *)(v9[1] + 40LL) & 0x80000000) == 0 )
    v35 = *v44;
  if ( (*(_DWORD *)(v9[2] + 40LL) & 0x80000000) == 0 )
    v22 = (_QWORD *)*v22;
  v36 = (__int64 *)v9[6];
  if ( (*(_DWORD *)(v9[3] + 40LL) & 0x80000000) == 0 )
    v23 = (_QWORD *)*v23;
  v37 = *v36;
  if ( (*(_DWORD *)(v9[4] + 40LL) & 0x80000000) == 0 )
    v24 = (_QWORD *)*v24;
  if ( (*(_DWORD *)(v9[5] + 40LL) & 0x80000000) == 0 )
    v25 = (_QWORD *)*v25;
  v53[0] = StringLiteral_25205/*"{0}:{1}:{2}:{3}:{4}:{5}"*/;
  v53[1] = v34;
  v53[2] = v35;
  v53[3] = v22;
  v53[4] = v23;
  v53[5] = v24;
  v53[6] = v25;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *))v36[2])(v37, v36, 0, v53, v54);
  return (System_String_o *)v54[0];
}


System_String_o *DataEntityBase__CreateMultiplePK___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg4,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg5,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg6,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg7,
        const MethodInfo_30F92E4 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x15
  _QWORD *v10; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v11; // x20
  __int64 v12; // x8
  size_t v13; // x2
  size_t v14; // x28
  size_t v15; // x16
  size_t v16; // x12
  size_t v17; // x11
  size_t v18; // x27
  size_t v19; // x26
  _QWORD *v20; // x21
  _QWORD *v21; // x20
  _QWORD *v22; // x22
  _QWORD *v23; // x19
  _QWORD *v24; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v25; // x1
  void **v26; // x9
  int v27; // w8
  void **v28; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v29; // x1
  void **v30; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v31; // x1
  void **v32; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v33; // x1
  long double inited; // q0
  _QWORD *v35; // x8
  _QWORD *v36; // x11
  _QWORD *v37; // x12
  __int64 *v38; // x1
  __int64 v39; // x0
  size_t v41; // [xsp+0h] [xbp-F0h] BYREF
  size_t v42; // [xsp+8h] [xbp-E8h]
  size_t v43; // [xsp+10h] [xbp-E0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v44; // [xsp+18h] [xbp-D8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v45; // [xsp+28h] [xbp-C8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v46; // [xsp+38h] [xbp-B8h]
  _QWORD *v47; // [xsp+40h] [xbp-B0h]
  void **v48; // [xsp+48h] [xbp-A8h]
  _QWORD *v49; // [xsp+50h] [xbp-A0h]
  unsigned __int64 StatusReg; // [xsp+58h] [xbp-98h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v51; // [xsp+60h] [xbp-90h] BYREF
  void *v52; // [xsp+68h] [xbp-88h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v53; // [xsp+70h] [xbp-80h] BYREF
  void *v54; // [xsp+78h] [xbp-78h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v55; // [xsp+80h] [xbp-70h] BYREF
  void *v56; // [xsp+88h] [xbp-68h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v57; // [xsp+90h] [xbp-60h] BYREF
  _QWORD v58[8]; // [xsp+98h] [xbp-58h] BYREF
  _QWORD v59[3]; // [xsp+D8h] [xbp-18h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  monitor = arg4.monitor;
  klass = arg1.klass;
  v59[1] = *(_QWORD *)(StatusReg + 40);
  v56 = arg1.monitor;
  v57 = arg1.klass;
  v54 = arg2.monitor;
  v55 = arg2.klass;
  v52 = arg3.monitor;
  v53 = arg3.klass;
  v51 = arg4.klass;
  v10 = (_QWORD *)*((_QWORD *)arg4.monitor + 7);
  v48 = (void **)arg1.monitor;
  v44 = arg2;
  v45 = arg3;
  v46 = arg4.klass;
  if ( !v10 )
  {
    v11 = arg1.klass;
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25206/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/);
    v10 = (_QWORD *)monitor[7];
    klass = v11;
    if ( !v10 )
    {
      sub_1C8ECD4();
      v10 = (_QWORD *)monitor[7];
      klass = v11;
    }
  }
  v12 = *v10;
  v13 = *(unsigned int *)(*v10 + 252LL);
  v14 = *(unsigned int *)(v10[3] + 252LL);
  v15 = *(unsigned int *)(v10[4] + 252LL);
  v16 = *(unsigned int *)(v10[5] + 252LL);
  v17 = *(unsigned int *)(v10[6] + 252LL);
  v18 = *(unsigned int *)(v10[1] + 252LL);
  v19 = *(unsigned int *)(v10[2] + 252LL);
  v47 = monitor;
  v41 = v15;
  v42 = v16;
  v43 = v17;
  v20 = (size_t *)((char *)&v41 - ((v19 + 15) & 0x1FFFFFFF0LL));
  v21 = (size_t *)((char *)&v41 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v22 = (size_t *)((char *)&v41 - ((v15 + 15) & 0x1FFFFFFF0LL));
  v23 = (size_t *)((char *)&v41 - ((v16 + 15) & 0x1FFFFFFF0LL));
  v24 = (size_t *)((char *)&v41 - ((v17 + 15) & 0x1FFFFFFF0LL));
  LODWORD(v12) = *(_DWORD *)(v12 + 40);
  v49 = (size_t *)((char *)&v41 - ((v13 + 15) & 0x1FFFFFFF0LL));
  if ( (int)v12 >= 0 )
    v25 = &v57;
  else
    v25 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v41 - ((v13 + 15) & 0x1FFFFFFF0LL), v25, v13);
  v26 = v48;
  v27 = *(_DWORD *)(v10[1] + 40LL);
  v48 = (void **)((char *)&v41 - ((v18 + 15) & 0x1FFFFFFF0LL));
  if ( v27 >= 0 )
    v28 = &v56;
  else
    v28 = v26;
  memcpy((char *)&v41 - ((v18 + 15) & 0x1FFFFFFF0LL), v28, v18);
  if ( *(int *)(v10[2] + 40LL) >= 0 )
    v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v55;
  else
    v29 = v44.klass;
  memcpy((char *)&v41 - ((v19 + 15) & 0x1FFFFFFF0LL), v29, v19);
  if ( *(int *)(v10[3] + 40LL) >= 0 )
    v30 = &v54;
  else
    v30 = (void **)v44.monitor;
  memcpy((char *)&v41 - ((v14 + 15) & 0x1FFFFFFF0LL), v30, v14);
  if ( *(int *)(v10[4] + 40LL) >= 0 )
    v31 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v53;
  else
    v31 = v45.klass;
  memcpy(v22, v31, v41);
  if ( *(int *)(v10[5] + 40LL) >= 0 )
    v32 = &v52;
  else
    v32 = (void **)v45.monitor;
  memcpy(v23, v32, v42);
  if ( *(int *)(v10[6] + 40LL) >= 0 )
    v33 = &v51;
  else
    v33 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v46;
  memcpy(v24, v33, v43);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  v35 = (_QWORD *)v47[7];
  if ( (*(_DWORD *)(*v35 + 40LL) & 0x80000000) != 0 )
    v36 = v49;
  else
    v36 = (_QWORD *)*v49;
  v37 = v48;
  if ( (*(_DWORD *)(v35[1] + 40LL) & 0x80000000) == 0 )
    v37 = *v48;
  if ( (*(_DWORD *)(v35[2] + 40LL) & 0x80000000) == 0 )
    v20 = (_QWORD *)*v20;
  if ( (*(_DWORD *)(v35[3] + 40LL) & 0x80000000) == 0 )
    v21 = (_QWORD *)*v21;
  v38 = (__int64 *)v35[7];
  if ( (*(_DWORD *)(v35[4] + 40LL) & 0x80000000) == 0 )
    v22 = (_QWORD *)*v22;
  v39 = *v38;
  if ( (*(_DWORD *)(v35[5] + 40LL) & 0x80000000) == 0 )
    v23 = (_QWORD *)*v23;
  if ( (*(_DWORD *)(v35[6] + 40LL) & 0x80000000) == 0 )
    v24 = (_QWORD *)*v24;
  v58[0] = StringLiteral_25206/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}"*/;
  v58[1] = v36;
  v58[2] = v37;
  v58[3] = v20;
  v58[4] = v21;
  v58[5] = v22;
  v58[6] = v23;
  v58[7] = v24;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *, long double))v38[2])(
    v39,
    v38,
    0,
    v58,
    v59,
    inited);
  return (System_String_o *)v59[0];
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
        const MethodInfo_30F9648 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x16
  _QWORD *v10; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v11; // x21
  __int64 v12; // x10
  __int64 v13; // x8
  __int64 v14; // x14
  __int64 v15; // x15
  size_t v16; // x2
  size_t v17; // x17
  size_t v18; // x13
  size_t v19; // x27
  size_t v20; // x12
  size_t v21; // x11
  size_t v22; // x25
  _QWORD *v23; // x26
  _QWORD *v24; // x22
  _QWORD *v25; // x21
  _QWORD *v26; // x20
  _QWORD *v27; // x24
  _QWORD *v28; // x28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v29; // x1
  void **v30; // x9
  int v31; // w8
  void **p_monitor; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v33; // x1
  void **v34; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v35; // x1
  void **v36; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v37; // x1
  void **v38; // x1
  long double inited; // q0
  _QWORD *v40; // x8
  _QWORD *v41; // x11
  _QWORD *v42; // x12
  __int64 *v43; // x1
  __int64 v44; // x0
  __int64 v46; // [xsp+0h] [xbp-120h] BYREF
  size_t v47; // [xsp+8h] [xbp-118h]
  size_t v48; // [xsp+10h] [xbp-110h]
  size_t v49; // [xsp+18h] [xbp-108h]
  size_t v50; // [xsp+20h] [xbp-100h]
  size_t v51; // [xsp+28h] [xbp-F8h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v52; // [xsp+30h] [xbp-F0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v53; // [xsp+40h] [xbp-E0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o v54; // [xsp+50h] [xbp-D0h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v55; // [xsp+60h] [xbp-C0h]
  void **v56; // [xsp+68h] [xbp-B8h]
  _QWORD *v57; // [xsp+70h] [xbp-B0h]
  unsigned __int64 StatusReg; // [xsp+78h] [xbp-A8h]
  void *v59; // [xsp+80h] [xbp-A0h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v60; // [xsp+88h] [xbp-98h] BYREF
  void *v61; // [xsp+90h] [xbp-90h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v62; // [xsp+98h] [xbp-88h] BYREF
  void *v63; // [xsp+A0h] [xbp-80h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v64; // [xsp+A8h] [xbp-78h] BYREF
  void *monitor; // [xsp+B0h] [xbp-70h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v66; // [xsp+B8h] [xbp-68h] BYREF
  _QWORD v67[9]; // [xsp+C0h] [xbp-60h] BYREF
  _QWORD v68[2]; // [xsp+108h] [xbp-18h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  klass = arg1.klass;
  v68[1] = *(_QWORD *)(StatusReg + 40);
  monitor = arg1.monitor;
  v66 = arg1.klass;
  v63 = arg2.monitor;
  v64 = arg2.klass;
  v61 = arg3.monitor;
  v62 = arg3.klass;
  v59 = arg4.monitor;
  v60 = arg4.klass;
  v10 = *(_QWORD **)&arg5.klass->_1.this_arg.bits;
  v56 = (void **)arg1.monitor;
  v52 = arg2;
  v53 = arg3;
  v54 = arg4;
  if ( !v10 )
  {
    v11 = arg1.klass;
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25207/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/);
    v10 = *(_QWORD **)&arg5.klass->_1.this_arg.bits;
    klass = v11;
    if ( !v10 )
    {
      sub_1C8ECD4();
      v10 = *(_QWORD **)&arg5.klass->_1.this_arg.bits;
      klass = v11;
    }
  }
  v12 = v10[2];
  v13 = *v10;
  v14 = v10[6];
  v15 = v10[7];
  v16 = *(unsigned int *)(*v10 + 252LL);
  v17 = *(unsigned int *)(v10[4] + 252LL);
  v18 = *(unsigned int *)(v10[5] + 252LL);
  v19 = *(unsigned int *)(v10[1] + 252LL);
  v47 = *(unsigned int *)(v10[3] + 252LL);
  v20 = *(unsigned int *)(v14 + 252);
  v21 = *(unsigned int *)(v15 + 252);
  v22 = *(unsigned int *)(v12 + 252);
  v48 = v17;
  v49 = v18;
  v55 = arg5.klass;
  v50 = v20;
  v51 = v21;
  v23 = (__int64 *)((char *)&v46 - ((v22 + 15) & 0x1FFFFFFF0LL));
  v24 = (__int64 *)((char *)&v46 - ((v47 + 15) & 0x1FFFFFFF0LL));
  v25 = (__int64 *)((char *)&v46 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v26 = (__int64 *)((char *)&v46 - ((v18 + 15) & 0x1FFFFFFF0LL));
  v27 = (__int64 *)((char *)&v46 - ((v20 + 15) & 0x1FFFFFFF0LL));
  v28 = (__int64 *)((char *)&v46 - ((v21 + 15) & 0x1FFFFFFF0LL));
  LODWORD(v13) = *(_DWORD *)(v13 + 40);
  v57 = (__int64 *)((char *)&v46 - ((v16 + 15) & 0x1FFFFFFF0LL));
  if ( (int)v13 >= 0 )
    v29 = &v66;
  else
    v29 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&v46 - ((v16 + 15) & 0x1FFFFFFF0LL), v29, v16);
  v30 = v56;
  v31 = *(_DWORD *)(v10[1] + 40LL);
  v56 = (void **)((char *)&v46 - ((v19 + 15) & 0x1FFFFFFF0LL));
  if ( v31 >= 0 )
    p_monitor = &monitor;
  else
    p_monitor = v30;
  memcpy((char *)&v46 - ((v19 + 15) & 0x1FFFFFFF0LL), p_monitor, v19);
  if ( *(int *)(v10[2] + 40LL) >= 0 )
    v33 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v64;
  else
    v33 = v52.klass;
  memcpy((char *)&v46 - ((v22 + 15) & 0x1FFFFFFF0LL), v33, v22);
  if ( *(int *)(v10[3] + 40LL) >= 0 )
    v34 = &v63;
  else
    v34 = (void **)v52.monitor;
  memcpy(v24, v34, v47);
  if ( *(int *)(v10[4] + 40LL) >= 0 )
    v35 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v62;
  else
    v35 = v53.klass;
  memcpy(v25, v35, v48);
  if ( *(int *)(v10[5] + 40LL) >= 0 )
    v36 = &v61;
  else
    v36 = (void **)v53.monitor;
  memcpy(v26, v36, v49);
  if ( *(int *)(v10[6] + 40LL) >= 0 )
    v37 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&v60;
  else
    v37 = v54.klass;
  memcpy(v27, v37, v50);
  if ( *(int *)(v10[7] + 40LL) >= 0 )
    v38 = &v59;
  else
    v38 = (void **)v54.monitor;
  memcpy(v28, v38, v51);
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  v40 = *(_QWORD **)&v55->_1.this_arg.bits;
  if ( (*(_DWORD *)(*v40 + 40LL) & 0x80000000) != 0 )
    v41 = v57;
  else
    v41 = (_QWORD *)*v57;
  v42 = v56;
  if ( (*(_DWORD *)(v40[1] + 40LL) & 0x80000000) == 0 )
    v42 = *v56;
  if ( (*(_DWORD *)(v40[2] + 40LL) & 0x80000000) == 0 )
    v23 = (_QWORD *)*v23;
  if ( (*(_DWORD *)(v40[3] + 40LL) & 0x80000000) == 0 )
    v24 = (_QWORD *)*v24;
  if ( (*(_DWORD *)(v40[4] + 40LL) & 0x80000000) == 0 )
    v25 = (_QWORD *)*v25;
  v43 = (__int64 *)v40[8];
  if ( (*(_DWORD *)(v40[5] + 40LL) & 0x80000000) == 0 )
    v26 = (_QWORD *)*v26;
  v44 = *v43;
  if ( (*(_DWORD *)(v40[6] + 40LL) & 0x80000000) == 0 )
    v27 = (_QWORD *)*v27;
  if ( (*(_DWORD *)(v40[7] + 40LL) & 0x80000000) == 0 )
    v28 = (_QWORD *)*v28;
  v67[0] = StringLiteral_25207/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/;
  v67[1] = v41;
  v67[2] = v42;
  v67[3] = v23;
  v67[4] = v24;
  v67[5] = v25;
  v67[6] = v26;
  v67[7] = v27;
  v67[8] = v28;
  ((void (__fastcall *)(__int64, __int64 *, _QWORD, _QWORD *, _QWORD *, long double))v43[2])(
    v44,
    v43,
    0,
    v67,
    v68,
    inited);
  return (System_String_o *)v68[0];
}


System_String_o *DataEntityBase__CreateMultiplePK_int_(int32_t arg1, const MethodInfo_30F7A8C *method)
{
  const MethodInfo_30F7A8C_RGCTXs *rgctx_data; // x8
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = arg1;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C8ECD4();
    rgctx_data = method->rgctx_data;
  }
  return System_Int32__ToString((int32_t)&v5, (const MethodInfo *)rgctx_data[1]._0_T);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__int_(
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_30F7BF8 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25197/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3113210);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_30F8088 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25201/*"{0}:{1}:{2}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3113D5C);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_30F8548 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25203/*"{0}:{1}:{2}:{3}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3114464);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__int__int__int__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int32_t arg5,
        const MethodInfo_30F8A8C *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25204/*"{0}:{1}:{2}:{3}:{4}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3114B94);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        int64_t arg5,
        const MethodInfo_30F8B38 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25204/*"{0}:{1}:{2}:{3}:{4}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3114D14);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        int64_t arg4,
        const MethodInfo_30F85E4 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25203/*"{0}:{1}:{2}:{3}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x31145D4);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__int__int__object__int_(
        int32_t arg1,
        int32_t arg2,
        int32_t arg3,
        Il2CppObject *arg4,
        int32_t arg5,
        const MethodInfo_30F8BE4 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25204/*"{0}:{1}:{2}:{3}:{4}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3114E94);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__int__long_(
        int32_t arg1,
        int32_t arg2,
        int64_t arg3,
        const MethodInfo_30F811C *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25201/*"{0}:{1}:{2}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3113EC4);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__int__object_(
        int32_t arg1,
        int32_t arg2,
        Il2CppObject *arg3,
        const MethodInfo_30F81B0 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25201/*"{0}:{1}:{2}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x311402C);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__int__object__object_(
        int32_t arg1,
        int32_t arg2,
        Il2CppObject *arg3,
        Il2CppObject *arg4,
        const MethodInfo_30F8680 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25203/*"{0}:{1}:{2}:{3}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3114744);
}


System_String_o *DataEntityBase__CreateMultiplePK_int__long_(
        int32_t arg1,
        int64_t arg2,
        const MethodInfo_30F7C7C *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25197/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x31136A4);
}


System_String_o *DataEntityBase__CreateMultiplePK_long_(int64_t arg1, const MethodInfo_30F7AC8 *method)
{
  const MethodInfo_30F7AC8_RGCTXs *rgctx_data; // x8
  int64_t v5; // [xsp+8h] [xbp-18h] BYREF

  v5 = arg1;
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C8ECD4();
    rgctx_data = method->rgctx_data;
  }
  return System_Int64__ToString((int64_t)&v5, (const MethodInfo *)rgctx_data[1]._0_T);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__int_(
        int64_t arg1,
        int32_t arg2,
        const MethodInfo_30F7D00 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25197/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x31137FC);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_30F8244 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25201/*"{0}:{1}:{2}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3114194);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__int__int__int_(
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        int32_t arg4,
        const MethodInfo_30F871C *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25203/*"{0}:{1}:{2}:{3}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x31148B4);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__long_(
        int64_t arg1,
        int64_t arg2,
        const MethodInfo_30F7D84 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25197/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3113954);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__long__object_(
        int64_t arg1,
        int64_t arg2,
        Il2CppObject *arg3,
        const MethodInfo_30F82D8 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25201/*"{0}:{1}:{2}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x31142FC);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__long__object__long_(
        int64_t arg1,
        int64_t arg2,
        Il2CppObject *arg3,
        int64_t arg4,
        const MethodInfo_30F87B8 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25203/*"{0}:{1}:{2}:{3}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3114A24);
}


System_String_o *DataEntityBase__CreateMultiplePK_long__long__object__long__long__long_(
        int64_t arg1,
        int64_t arg2,
        Il2CppObject *arg3,
        int64_t arg4,
        int64_t arg5,
        int64_t arg6,
        const MethodInfo_30F8F28 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25205/*"{0}:{1}:{2}:{3}:{4}:{5}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3115014);
}


System_String_o *DataEntityBase__CreateMultiplePK_object__int_(
        Il2CppObject *arg1,
        int32_t arg2,
        const MethodInfo_30F7E08 *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25197/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3113AAC);
}


System_String_o *DataEntityBase__CreateMultiplePK_object__long_(
        Il2CppObject *arg1,
        int64_t arg2,
        const MethodInfo_30F7E8C *method)
{
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Cysharp_Text_ZString_TypeInfo);
    sub_1C3E564(&StringLiteral_25197/*"{0}:{1}"*/);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
  }
  if ( !Cysharp_Text_ZString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Cysharp_Text_ZString_TypeInfo);
  JUMPOUT(0x3113C04);
}