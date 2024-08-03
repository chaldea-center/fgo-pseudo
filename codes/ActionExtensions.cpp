void __fastcall ActionExtensions__Call(System_Action_o *action, const MethodInfo *method)
{
  if ( action )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall ActionExtensions__Call_Int32Enum_(
        System_Action_T__o *action,
        int32_t arg,
        const MethodInfo_2D90A28 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      (unsigned int)arg,
      *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall ActionExtensions__Call_ShowAllEx_DamageFuncArgument_(
        System_Action_T__o *action,
        HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o *arg,
        const MethodInfo_2D90BF0 *method)
{
  Il2CppObject *m_target; // x9
  struct System_Reflection_MethodInfo_o *original_method_info; // x0
  __int64 v7; // [xsp+10h] [xbp-50h]
  __int128 v8; // [xsp+20h] [xbp-40h] BYREF
  __int64 v9; // [xsp+30h] [xbp-30h]

  if ( method->rgctx_data )
  {
    if ( !action )
      return;
  }
  else
  {
    sub_1BB6000(method);
    if ( !action )
      return;
  }
  v7 = *(_QWORD *)&arg->fields.damageIndex;
  m_target = action->fields.m_target;
  original_method_info = action->fields.original_method_info;
  v8 = *(_OWORD *)&arg->fields.perf;
  v9 = v7;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int128 *, _QWORD))m_target)(
    original_method_info,
    &v8,
    *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall ActionExtensions__Call___Il2CppFullySharedGenericType_(
        System_Action_T__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg,
        const MethodInfo_2D90B18 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  __int64 v5; // x23
  _QWORD *monitor; // x20
  __int64 v7; // x8
  __int64 v8; // x2
  _QWORD *v9; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v10; // x1
  __int64 *v11; // x1
  __int64 v12; // x0
  __int64 v13; // [xsp+0h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // [xsp+8h] [xbp-18h] BYREF
  __int64 v15[2]; // [xsp+10h] [xbp-10h] BYREF

  klass = arg.klass;
  v15[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v14 = arg.klass;
  v5 = *((_QWORD *)arg.monitor + 7);
  if ( !v5 )
  {
    monitor = arg.monitor;
    sub_1BB6000(arg.monitor);
    v5 = monitor[7];
  }
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(unsigned int *)(v7 + 252);
  v9 = (__int64 *)((char *)&v13 - ((v8 + 15) & 0x1FFFFFFF0LL));
  if ( action )
  {
    if ( *(int *)(v7 + 40) >= 0 )
      v10 = &v14;
    else
      v10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy((char *)&v13 - ((v8 + 15) & 0x1FFFFFFF0LL), v10, v8);
    v11 = *(__int64 **)(v5 + 16);
    v12 = *v11;
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8) + 40LL) & 0x80000000) == 0 )
      v9 = (_QWORD *)*v9;
    v15[0] = (__int64)v9;
    ((void (__fastcall *)(__int64, __int64 *, System_Action_T__o *, __int64 *, _QWORD *))v11[2])(
      v12,
      v11,
      action,
      v15,
      v9);
  }
}


void __fastcall ActionExtensions__Call___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Action_T1__T2__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        const MethodInfo_2D90E14 *method)
{
  void **monitor; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  _QWORD *v7; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x2
  __int64 v11; // x24
  _QWORD *v12; // x21
  _QWORD *v13; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v14; // x1
  void **v15; // x1
  __int64 *v16; // x1
  __int64 v17; // x0
  __int64 v18; // [xsp+0h] [xbp-30h] BYREF
  void *v19; // [xsp+8h] [xbp-28h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v20; // [xsp+10h] [xbp-20h] BYREF
  __int64 v21[3]; // [xsp+18h] [xbp-18h] BYREF

  monitor = (void **)arg1.monitor;
  klass = arg1.klass;
  v21[2] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v19 = arg1.monitor;
  v20 = arg1.klass;
  v7 = *(_QWORD **)&arg2.klass->_1.this_arg.bits;
  if ( !v7 )
  {
    v8 = arg2.klass;
    sub_1BB6000(arg2.klass);
    v7 = *(_QWORD **)&v8->_1.this_arg.bits;
  }
  v9 = v7[1];
  v10 = *(unsigned int *)(v9 + 252);
  v11 = *(unsigned int *)(v7[2] + 252LL);
  v12 = (__int64 *)((char *)&v18 - ((v10 + 15) & 0x1FFFFFFF0LL));
  v13 = (__int64 *)((char *)&v18 - ((v11 + 15) & 0x1FFFFFFF0LL));
  if ( action )
  {
    if ( *(int *)(v9 + 40) >= 0 )
      v14 = &v20;
    else
      v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy((char *)&v18 - ((v10 + 15) & 0x1FFFFFFF0LL), v14, v10);
    if ( *(int *)(v7[2] + 40LL) >= 0 )
      v15 = &v19;
    else
      v15 = monitor;
    memcpy((char *)&v18 - ((v11 + 15) & 0x1FFFFFFF0LL), v15, v11);
    v16 = (__int64 *)v7[3];
    v17 = *v16;
    if ( (*(_DWORD *)(v7[1] + 40LL) & 0x80000000) == 0 )
      v12 = (_QWORD *)*v12;
    if ( (*(_DWORD *)(v7[2] + 40LL) & 0x80000000) == 0 )
      v13 = (_QWORD *)*v13;
    v21[0] = (__int64)v12;
    v21[1] = (__int64)v13;
    ((void (__fastcall *)(__int64, __int64 *, System_Action_T1__T2__o *, __int64 *, _QWORD *))v16[2])(
      v17,
      v16,
      action,
      v21,
      v13);
  }
}


void __fastcall ActionExtensions__Call___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Action_T1__T2__T3__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        const MethodInfo_2D90FB0 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  void **monitor; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x25
  _QWORD *v8; // x19
  System_Action_T1__T2__T3__o *v9; // x19
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x2
  __int64 v13; // x27
  __int64 v14; // x26
  _QWORD *v15; // x20
  _QWORD *v16; // x22
  _QWORD *v17; // x21
  int v18; // w8
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  void **v20; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v21; // x1
  __int64 *v22; // x1
  __int64 v23; // x0
  System_Action_T1__T2__T3__o *v24; // [xsp+0h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v25; // [xsp+8h] [xbp-38h] BYREF
  void *v26; // [xsp+10h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v27; // [xsp+18h] [xbp-28h] BYREF
  __int64 v28[4]; // [xsp+20h] [xbp-20h] BYREF

  klass = arg2.klass;
  monitor = (void **)arg1.monitor;
  v7 = arg1.klass;
  v28[3] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v26 = arg1.monitor;
  v27 = arg1.klass;
  v25 = arg2.klass;
  v8 = (_QWORD *)*((_QWORD *)arg2.monitor + 7);
  if ( !v8 )
  {
    v9 = action;
    v10 = arg2.monitor;
    sub_1BB6000(arg2.monitor);
    action = v9;
    v8 = (_QWORD *)v10[7];
  }
  v11 = v8[1];
  v12 = *(unsigned int *)(v11 + 252);
  v13 = *(unsigned int *)(v8[2] + 252LL);
  v14 = *(unsigned int *)(v8[3] + 252LL);
  v15 = (System_Action_T1__T2__T3__o **)((char *)&v24 - ((v12 + 15) & 0x1FFFFFFF0LL));
  v16 = (System_Action_T1__T2__T3__o **)((char *)&v24 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v17 = (System_Action_T1__T2__T3__o **)((char *)&v24 - ((v14 + 15) & 0x1FFFFFFF0LL));
  if ( action )
  {
    v18 = *(_DWORD *)(v11 + 40);
    v24 = action;
    if ( v18 >= 0 )
      v19 = &v27;
    else
      v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v7;
    memcpy((char *)&v24 - ((v12 + 15) & 0x1FFFFFFF0LL), v19, v12);
    if ( *(int *)(v8[2] + 40LL) >= 0 )
      v20 = &v26;
    else
      v20 = monitor;
    memcpy((char *)&v24 - ((v13 + 15) & 0x1FFFFFFF0LL), v20, v13);
    if ( *(int *)(v8[3] + 40LL) >= 0 )
      v21 = &v25;
    else
      v21 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy((char *)&v24 - ((v14 + 15) & 0x1FFFFFFF0LL), v21, v14);
    v22 = (__int64 *)v8[4];
    if ( (*(_DWORD *)(v8[1] + 40LL) & 0x80000000) == 0 )
      v15 = (_QWORD *)*v15;
    v23 = *v22;
    if ( (*(_DWORD *)(v8[2] + 40LL) & 0x80000000) == 0 )
      v16 = (_QWORD *)*v16;
    if ( (*(_DWORD *)(v8[3] + 40LL) & 0x80000000) == 0 )
      v17 = (_QWORD *)*v17;
    v28[0] = (__int64)v15;
    v28[1] = (__int64)v16;
    v28[2] = (__int64)v17;
    ((void (__fastcall *)(__int64, __int64 *, System_Action_T1__T2__T3__o *, __int64 *, _QWORD *))v22[2])(
      v23,
      v22,
      v24,
      v28,
      v17);
  }
}


void __fastcall ActionExtensions__Call_bool_(System_Action_T__o *action, bool arg, const MethodInfo_2D90988 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      arg,
      *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall ActionExtensions__Call_bool__bool_(
        System_Action_T1__T2__o *action,
        bool arg1,
        bool arg2,
        const MethodInfo_2D90C5C *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, bool, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      arg1,
      arg2,
      *(_QWORD *)&action->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ActionExtensions__Call_float_(System_Action_T__o *action, float arg, const MethodInfo_2D90AC8 *method)
{
  long double v3; // q8

  v3 = *(long double *)&arg;
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, long double))action->fields.m_target)(
      action->fields.original_method_info,
      *(_QWORD *)&action->fields.extra_arg,
      v3);
}


void __fastcall ActionExtensions__Call_int_(System_Action_T__o *action, int32_t arg, const MethodInfo_2D909D8 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      (unsigned int)arg,
      *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall ActionExtensions__Call_int__bool_(
        System_Action_T1__T2__o *action,
        int32_t arg1,
        bool arg2,
        const MethodInfo_2D90CB4 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, bool, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      (unsigned int)arg1,
      arg2,
      *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall ActionExtensions__Call_int__bool__bool_(
        System_Action_T1__T2__T3__o *action,
        int32_t arg1,
        bool arg2,
        bool arg3,
        const MethodInfo_2D90F44 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, bool, bool, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      (unsigned int)arg1,
      arg2,
      arg3,
      *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall ActionExtensions__Call_int__int_(
        System_Action_T1__T2__o *action,
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_2D90D0C *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      (unsigned int)arg1,
      (unsigned int)arg2,
      *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall ActionExtensions__Call_object_(
        System_Action_T__o *action,
        Il2CppObject *arg,
        const MethodInfo_2D90A78 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      arg,
      *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall ActionExtensions__Call_object__int_(
        System_Action_T1__T2__o *action,
        Il2CppObject *arg1,
        int32_t arg2,
        const MethodInfo_2D90D64 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      arg1,
      (unsigned int)arg2,
      *(_QWORD *)&action->fields.extra_arg);
}


void __fastcall ActionExtensions__Call_object__object_(
        System_Action_T1__T2__o *action,
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        const MethodInfo_2D90DBC *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_1BB6000(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, Il2CppObject *, _QWORD))action->fields.m_target)(
      action->fields.original_method_info,
      arg1,
      arg2,
      *(_QWORD *)&action->fields.extra_arg);
}