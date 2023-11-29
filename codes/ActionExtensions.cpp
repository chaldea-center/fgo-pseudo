void __fastcall ActionExtensions__Call(System_Action_o *action, const MethodInfo *method)
{
  if ( action )
    System_Action__Invoke(action, 0LL);
}


void __fastcall ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
        System_Action_T__o *action,
        BlankEarth_QAARotateEarthResponse_o *arg,
        const MethodInfo_2D39F2C *method)
{
  if ( action )
    ((void (__fastcall *)(System_Action_T__o *, BlankEarth_QAARotateEarthResponse_o *))method->rgctx_data->_0_System_Action_T__Invoke->methodPointer)(
      action,
      arg);
}


void __fastcall ActionExtensions__Call_ShowAllEx_DamageFuncArgument_(
        System_Action_T__o *action,
        HutongGames_PlayMaker_Actions_ShowAllEx_DamageFuncArgument_o *arg,
        const MethodInfo_2D39F5C *method)
{
  __int128 v3; // q0
  const MethodInfo_2D39F5C_RGCTXs *rgctx_data; // x8
  void (__fastcall *methodPointer)(System_Action_T__o *, __int128 *, MethodInfo *); // x9
  __int128 v6; // [xsp+0h] [xbp-40h] BYREF
  __int64 v7; // [xsp+10h] [xbp-30h]
  __int128 v8; // [xsp+20h] [xbp-20h]
  __int64 v9; // [xsp+30h] [xbp-10h]

  if ( action )
  {
    v3 = *(_OWORD *)&arg->fields.perf;
    v9 = *(_QWORD *)&arg->fields.damageIndex;
    v8 = v3;
    rgctx_data = method->rgctx_data;
    methodPointer = (void (__fastcall *)(System_Action_T__o *, __int128 *, MethodInfo *))rgctx_data->_0_System_Action_T__Invoke->methodPointer;
    v7 = v9;
    v6 = v3;
    methodPointer(action, &v6, rgctx_data->_0_System_Action_T__Invoke);
  }
}


void __fastcall ActionExtensions__Call_bool_(System_Action_T__o *action, bool arg, const MethodInfo_2D39EF8 *method)
{
  if ( action )
    ((void (__fastcall *)(System_Action_T__o *, bool))method->rgctx_data->_0_System_Action_T__Invoke->methodPointer)(
      action,
      arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ActionExtensions__Call_float_(System_Action_T__o *action, float arg, const MethodInfo_2D39F44 *method)
{
  if ( action )
    ((void (__fastcall *)(long double))method->rgctx_data->_0_System_Action_T__Invoke->methodPointer)(*(long double *)&arg);
}


void __fastcall ActionExtensions__Call_int_(System_Action_T__o *action, int32_t arg, const MethodInfo_2D39F14 *method)
{
  if ( action )
    ((void (__fastcall *)(System_Action_T__o *, int32_t))method->rgctx_data->_0_System_Action_T__Invoke->methodPointer)(
      action,
      arg);
}


void __fastcall ActionExtensions__Call_int__bool_(
        System_Action_T1__T2__o *action,
        int32_t arg1,
        bool arg2,
        const MethodInfo_2D39FB0 *method)
{
  if ( action )
    ((void (__fastcall *)(System_Action_T1__T2__o *, int32_t, bool))method->rgctx_data->_0_System_Action_T1__T2__Invoke->methodPointer)(
      action,
      arg1,
      arg2);
}


void __fastcall ActionExtensions__Call_int__bool__bool_(
        System_Action_T1__T2__T3__o *action,
        int32_t arg1,
        bool arg2,
        bool arg3,
        const MethodInfo_2D3A014 *method)
{
  if ( action )
    ((void (__fastcall *)(System_Action_T1__T2__T3__o *, int32_t, bool, bool))method->rgctx_data->_0_System_Action_T1__T2__T3__Invoke->methodPointer)(
      action,
      arg1,
      arg2,
      arg3);
}


void __fastcall ActionExtensions__Call_int__int_(
        System_Action_T1__T2__o *action,
        int32_t arg1,
        int32_t arg2,
        const MethodInfo_2D39FCC *method)
{
  if ( action )
    ((void (__fastcall *)(System_Action_T1__T2__o *, int32_t, int32_t))method->rgctx_data->_0_System_Action_T1__T2__Invoke->methodPointer)(
      action,
      arg1,
      arg2);
}


void __fastcall ActionExtensions__Call_object__int_(
        System_Action_T1__T2__o *action,
        Il2CppObject *arg1,
        int32_t arg2,
        const MethodInfo_2D39FE4 *method)
{
  if ( action )
    ((void (__fastcall *)(System_Action_T1__T2__o *, Il2CppObject *, int32_t))method->rgctx_data->_0_System_Action_T1__T2__Invoke->methodPointer)(
      action,
      arg1,
      arg2);
}


void __fastcall ActionExtensions__Call_object__object_(
        System_Action_T1__T2__o *action,
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        const MethodInfo_2D39FFC *method)
{
  if ( action )
    ((void (__fastcall *)(System_Action_T1__T2__o *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_System_Action_T1__T2__Invoke->methodPointer)(
      action,
      arg1,
      arg2);
}


void __fastcall ActionExtensions__Call_object__object__object_(
        System_Action_T1__T2__T3__o *action,
        Il2CppObject *arg1,
        Il2CppObject *arg2,
        Il2CppObject *arg3,
        const MethodInfo_2D3A034 *method)
{
  if ( action )
    ((void (__fastcall *)(System_Action_T1__T2__T3__o *, Il2CppObject *, Il2CppObject *, Il2CppObject *))method->rgctx_data->_0_System_Action_T1__T2__T3__Invoke->methodPointer)(
      action,
      arg1,
      arg2,
      arg3);
}