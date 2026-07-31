void ActionExtensions__Call(System_Action_o *action, const MethodInfo *method)
{
  if ( action )
    ((void (__fastcall *)(intptr_t, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      action->fields.method);
}


void ActionExtensions__Call_Int32Enum_(System_Action_T__o *action, int32_t arg, const MethodInfo_36CDEBC *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      (unsigned int)arg,
      action->fields.method);
}


void ActionExtensions__Call_Int32Enum__object_(
        System_Action_T1__T2__o *action,
        int32_t arg1,
        Il2CppObject *arg2,
        const MethodInfo_36CE28C *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, _QWORD, Il2CppObject *, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      (unsigned int)arg1,
      arg2,
      action->fields.method);
}


void ActionExtensions__Call_ShowAllEx_DamageFuncArgument_(
        System_Action_T__o *action,
        HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o *arg,
        const MethodInfo_36CE0D0 *method)
{
  __int64 v5; // x8
  void (__fastcall *invoke_impl)(intptr_t, __int128 *, intptr_t); // x9
  intptr_t method_code; // x0
  intptr_t v8; // x2
  __int128 v9; // [xsp+0h] [xbp-40h] BYREF
  __int64 v10; // [xsp+10h] [xbp-30h]

  if ( !method->rgctx_data )
    sub_2237B54(method);
  if ( action )
  {
    v5 = *(_QWORD *)&arg->fields.damageIndex;
    invoke_impl = (void (__fastcall *)(intptr_t, __int128 *, intptr_t))action->fields.invoke_impl;
    method_code = action->fields.method_code;
    v8 = action->fields.method;
    v9 = *(_OWORD *)&arg->fields.perf;
    v10 = v5;
    invoke_impl(method_code, &v9, v8);
  }
}


void ActionExtensions__Call___Il2CppFullySharedGenericType_(
        System_Action_T__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg,
        const MethodInfo_36CDFFC *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  __int64 v5; // x23
  _QWORD *monitor; // x20
  __int64 v7; // x8
  size_t v8; // x2
  _QWORD *v9; // x20
  int v10; // w24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v11; // x1
  __int64 *v12; // x1
  __int64 v13; // x0
  void (__fastcall *v14)(__int64, __int64 *, System_Action_T__o *, _QWORD *, _QWORD *); // x8
  __int64 v15; // [xsp+0h] [xbp-20h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v16; // [xsp+8h] [xbp-18h] BYREF
  _QWORD v17[2]; // [xsp+10h] [xbp-10h] BYREF

  klass = arg.klass;
  v17[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *((_QWORD *)arg.monitor + 7);
  v16 = arg.klass;
  if ( !v5 )
  {
    monitor = arg.monitor;
    sub_2237B54(arg.monitor);
    v5 = monitor[7];
  }
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(unsigned int *)(v7 + 252);
  v9 = (__int64 *)((char *)&v15 - ((v8 + 15) & 0x1FFFFFFF0LL));
  if ( action )
  {
    v10 = *(_DWORD *)(v7 + 40);
    if ( v10 >= 0 )
      v11 = &v16;
    else
      v11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy((char *)&v15 - ((v8 + 15) & 0x1FFFFFFF0LL), v11, v8);
    v12 = *(__int64 **)(v5 + 16);
    v13 = *v12;
    if ( (v10 & 0x80000000) == 0 )
      v9 = (_QWORD *)*v9;
    v14 = (void (__fastcall *)(__int64, __int64 *, System_Action_T__o *, _QWORD *, _QWORD *))v12[2];
    v17[0] = v9;
    v14(v13, v12, action, v17, v9);
  }
}


void ActionExtensions__Call___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Action_T1__T2__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        const MethodInfo_36CE394 *method)
{
  void **monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x23
  _QWORD *v7; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x27
  size_t v11; // x2
  size_t v12; // x24
  _QWORD *v13; // x22
  _QWORD *v14; // x21
  int v15; // w28
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v16; // x1
  int v17; // w23
  void **v18; // x1
  __int64 *v19; // x1
  __int64 v20; // x0
  void (__fastcall *v21)(__int64, __int64 *, System_Action_T1__T2__o *, _QWORD *, _QWORD *); // x8
  __int64 v22; // [xsp+0h] [xbp-30h] BYREF
  void *v23; // [xsp+8h] [xbp-28h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v24; // [xsp+10h] [xbp-20h] BYREF
  _QWORD v25[3]; // [xsp+18h] [xbp-18h] BYREF

  monitor = (void **)arg1.monitor;
  klass = arg1.klass;
  v25[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v7 = *(_QWORD **)&arg2.klass->_1.this_arg.bits;
  v23 = arg1.monitor;
  v24 = arg1.klass;
  if ( !v7 )
  {
    v8 = arg2.klass;
    sub_2237B54(arg2.klass);
    v7 = *(_QWORD **)&v8->_1.this_arg.bits;
  }
  v9 = v7[1];
  v10 = v7[2];
  v11 = *(unsigned int *)(v9 + 252);
  v12 = *(unsigned int *)(v10 + 252);
  v13 = (__int64 *)((char *)&v22 - ((v11 + 15) & 0x1FFFFFFF0LL));
  v14 = (__int64 *)((char *)&v22 - ((v12 + 15) & 0x1FFFFFFF0LL));
  if ( action )
  {
    v15 = *(_DWORD *)(v9 + 40);
    if ( v15 >= 0 )
      v16 = &v24;
    else
      v16 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy((char *)&v22 - ((v11 + 15) & 0x1FFFFFFF0LL), v16, v11);
    v17 = *(_DWORD *)(v10 + 40);
    if ( v17 >= 0 )
      v18 = &v23;
    else
      v18 = monitor;
    memcpy((char *)&v22 - ((v12 + 15) & 0x1FFFFFFF0LL), v18, v12);
    v19 = (__int64 *)v7[3];
    v20 = *v19;
    if ( (v15 & 0x80000000) == 0 )
      v13 = (_QWORD *)*v13;
    if ( (v17 & 0x80000000) == 0 )
      v14 = (_QWORD *)*v14;
    v21 = (void (__fastcall *)(__int64, __int64 *, System_Action_T1__T2__o *, _QWORD *, _QWORD *))v19[2];
    v25[0] = v13;
    v25[1] = v14;
    v21(v20, v19, action, v25, v14);
  }
}


void ActionExtensions__Call___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_(
        System_Action_T1__T2__T3__o *action,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        const MethodInfo_36CE668 *method)
{
  unsigned __int64 StatusReg; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x25
  _QWORD *v7; // x19
  System_Action_T1__T2__T3__o *v8; // x19
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x21
  __int64 v12; // x28
  size_t v13; // x2
  size_t v14; // x27
  size_t v15; // x26
  _QWORD *v16; // x20
  _QWORD *v17; // x23
  _QWORD *v18; // x22
  int v19; // w24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v20; // x1
  int v21; // w25
  void **p_monitor; // x1
  int v23; // w21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v24; // x1
  __int64 *v25; // x1
  __int64 v26; // x0
  void (__fastcall *v27)(__int64, __int64 *, System_Action_T1__T2__T3__o *, _QWORD *, _QWORD *); // x8
  __int64 v28; // [xsp+0h] [xbp-60h] BYREF
  System_Action_T1__T2__T3__o *v29; // [xsp+8h] [xbp-58h]
  unsigned __int64 v30; // [xsp+10h] [xbp-50h]
  void **v31; // [xsp+18h] [xbp-48h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v32; // [xsp+20h] [xbp-40h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v33; // [xsp+28h] [xbp-38h] BYREF
  void *monitor; // [xsp+30h] [xbp-30h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v35; // [xsp+38h] [xbp-28h] BYREF
  _QWORD v36[4]; // [xsp+40h] [xbp-20h] BYREF

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  klass = arg1.klass;
  v36[3] = *(_QWORD *)(StatusReg + 40);
  v7 = (_QWORD *)*((_QWORD *)arg2.monitor + 7);
  monitor = arg1.monitor;
  v35 = arg1.klass;
  v31 = (void **)arg1.monitor;
  v32 = arg2.klass;
  v33 = arg2.klass;
  if ( !v7 )
  {
    v8 = action;
    v9 = arg2.monitor;
    sub_2237B54(arg2.monitor);
    action = v8;
    v7 = (_QWORD *)v9[7];
  }
  v10 = v7[1];
  v11 = v7[2];
  v12 = v7[3];
  v13 = *(unsigned int *)(v10 + 252);
  v14 = *(unsigned int *)(v11 + 252);
  v15 = *(unsigned int *)(v12 + 252);
  v16 = (__int64 *)((char *)&v28 - ((v13 + 15) & 0x1FFFFFFF0LL));
  v17 = (__int64 *)((char *)&v28 - ((v14 + 15) & 0x1FFFFFFF0LL));
  v18 = (__int64 *)((char *)&v28 - ((v15 + 15) & 0x1FFFFFFF0LL));
  if ( action )
  {
    v29 = action;
    v30 = StatusReg;
    v19 = *(_DWORD *)(v10 + 40);
    if ( v19 >= 0 )
      v20 = &v35;
    else
      v20 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
    memcpy((char *)&v28 - ((v13 + 15) & 0x1FFFFFFF0LL), v20, v13);
    v21 = *(_DWORD *)(v11 + 40);
    if ( v21 >= 0 )
      p_monitor = &monitor;
    else
      p_monitor = v31;
    memcpy((char *)&v28 - ((v14 + 15) & 0x1FFFFFFF0LL), p_monitor, v14);
    v23 = *(_DWORD *)(v12 + 40);
    if ( v23 >= 0 )
      v24 = &v33;
    else
      v24 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)v32;
    memcpy((char *)&v28 - ((v15 + 15) & 0x1FFFFFFF0LL), v24, v15);
    v25 = (__int64 *)v7[4];
    if ( (v19 & 0x80000000) == 0 )
      v16 = (_QWORD *)*v16;
    v26 = *v25;
    if ( (v21 & 0x80000000) == 0 )
      v17 = (_QWORD *)*v17;
    if ( (v23 & 0x80000000) == 0 )
      v18 = (_QWORD *)*v18;
    v36[1] = v17;
    v36[2] = v18;
    v27 = (void (__fastcall *)(__int64, __int64 *, System_Action_T1__T2__T3__o *, _QWORD *, _QWORD *))v25[2];
    v36[0] = v16;
    v27(v26, v25, v29, v36, v18);
  }
}


void ActionExtensions__Call_bool_(System_Action_T__o *action, bool arg, const MethodInfo_36CDE1C *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, bool, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      arg,
      action->fields.method);
}


void ActionExtensions__Call_bool__bool_(
        System_Action_T1__T2__o *action,
        bool arg1,
        bool arg2,
        const MethodInfo_36CE12C *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, bool, bool, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      arg1,
      arg2,
      action->fields.method);
}


void ActionExtensions__Call_bool__int_(
        System_Action_T1__T2__o *action,
        bool arg1,
        int32_t arg2,
        const MethodInfo_36CE184 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, bool, _QWORD, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      arg1,
      (unsigned int)arg2,
      action->fields.method);
}


void ActionExtensions__Call_bool__int__object_(
        System_Action_T1__T2__T3__o *action,
        bool arg1,
        int32_t arg2,
        Il2CppObject *arg3,
        const MethodInfo_36CE4B8 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, bool, _QWORD, Il2CppObject *, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      arg1,
      (unsigned int)arg2,
      arg3,
      action->fields.method);
}


void ActionExtensions__Call_float_(System_Action_T__o *action, float arg, const MethodInfo_36CDFAC *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, intptr_t, float))action->fields.invoke_impl)(
      action->fields.method_code,
      action->fields.method,
      arg);
}


void ActionExtensions__Call_int_(System_Action_T__o *action, int32_t arg, const MethodInfo_36CDE6C *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      (unsigned int)arg,
      action->fields.method);
}


void ActionExtensions__Call_int__bool_(
        System_Action_T1__T2__o *action,
        int32_t arg1,
        bool arg2,
        const MethodInfo_36CE1DC *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, _QWORD, bool, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      (unsigned int)arg1,
      arg2,
      action->fields.method);
}


void ActionExtensions__Call_int__bool__bool_(
        System_Action_T1__T2__T3__o *action,
        int32_t arg1,
        bool arg2,
        bool arg3,
        const MethodInfo_36CE524 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, _QWORD, bool, bool, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      (unsigned int)arg1,
      arg2,
      arg3,
      action->fields.method);
}


void ActionExtensions__Call_int__int_(
        System_Action_T1__T2__o *action,
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_36CE234 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      (unsigned int)arg1,
      (unsigned int)arg2,
      action->fields.method);
}


void ActionExtensions__Call_long_(System_Action_T__o *action, int64_t arg, const MethodInfo_36CDF0C *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, int64_t, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      arg,
      action->fields.method);
}


void ActionExtensions__Call_long__int__int_(
        System_Action_T1__T2__T3__o *action,
        int64_t arg1,
        int32_t arg2,
        int32_t arg3,
        const MethodInfo_36CE590 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, int64_t, _QWORD, _QWORD, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      arg1,
      (unsigned int)arg2,
      (unsigned int)arg3,
      action->fields.method);
}


void ActionExtensions__Call_object_(System_Action_T__o *action, Il2CppObject *arg, const MethodInfo_36CDF5C *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, Il2CppObject *, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      arg,
      action->fields.method);
}


void ActionExtensions__Call_object__int_(
        System_Action_T1__T2__o *action,
        Il2CppObject *arg1,
        int32_t arg2,
        const MethodInfo_36CE2E4 *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, Il2CppObject *, _QWORD, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      arg1,
      (unsigned int)arg2,
      action->fields.method);
}


void ActionExtensions__Call_object__int__bool_(
        System_Action_T1__T2__T3__o *action,
        Il2CppObject *arg1,
        int32_t arg2,
        bool arg3,
        const MethodInfo_36CE5FC *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, Il2CppObject *, _QWORD, bool, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      arg1,
      (unsigned int)arg2,
      arg3,
      action->fields.method);
}


void ActionExtensions__Call_object__object_(
        System_Action_T1__T2__o *action,
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        const MethodInfo_36CE33C *method)
{
  if ( method->rgctx_data )
  {
    if ( !action )
      return;
    goto LABEL_3;
  }
  sub_2237B54(method);
  if ( action )
LABEL_3:
    ((void (__fastcall *)(intptr_t, Il2CppObject *, Il2CppObject *, intptr_t))action->fields.invoke_impl)(
      action->fields.method_code,
      arg1,
      arg2,
      action->fields.method);
}