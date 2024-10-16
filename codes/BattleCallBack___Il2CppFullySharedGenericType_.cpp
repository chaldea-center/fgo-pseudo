void __fastcall BattleCallBack___Il2CppFullySharedGenericType____ctor(
        BattleCallBack_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o argument,
        System_Action_T__o *callBack,
        const MethodInfo_30DBD54 *method)
{
  void *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  __int64 v8; // x22
  __int64 v9; // x26
  __int64 *v10; // x1
  __int64 v11[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = argument.monitor;
  klass = argument.klass;
  v11[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v11[0] = (__int64)argument.klass;
  v8 = *(unsigned int *)(**(_QWORD **)(*(_QWORD *)&callBack->fields.method + 192LL) + 252LL);
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0LL);
  v9 = *(_QWORD *)&callBack->fields.method;
  if ( *(int *)(**(_QWORD **)(v9 + 192) + 40LL) >= 0 )
    v10 = v11;
  else
    v10 = (__int64 *)klass;
  memcpy((char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL), v10, v8);
  sub_1BAB444(
    this,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 192) + 8LL) + 128LL),
    (char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v8);
  sub_19F9AE8(
    this,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&callBack->fields.method + 192LL) + 8LL) + 128LL) + 32LL,
    monitor);
}


void __fastcall BattleCallBack___Il2CppFullySharedGenericType___call(
        BattleCallBack_T__o *this,
        const MethodInfo_30DBE50 *method)
{
  BattleCallBack_T__RGCTXs *rgctx_data; // x8
  __int64 native_size; // x22
  _QWORD *v6; // x19
  void *v7; // x21
  const void *v8; // x0
  void *v9; // x0
  __int64 v10; // x1
  BattleCallBack_T__RGCTXs *v11; // x8
  MethodInfo *_3_System_Action_T__Invoke; // x1
  void (__fastcall *methodPointer)(); // x0
  __int64 v14[2]; // [xsp+0h] [xbp-10h] BYREF

  v14[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->klass->rgctx_data;
  native_size = (unsigned int)rgctx_data->_0_T->_2.native_size;
  v6 = (__int64 *)((char *)v14 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v7 = *(void **)sub_1BAB440(this, (char *)rgctx_data->_1_BattleCallBack_T_->_1.fields + 32);
  v8 = (const void *)sub_1BAB440(this, method->klass->rgctx_data->_1_BattleCallBack_T_->_1.fields);
  v9 = memcpy(v6, v8, native_size);
  if ( !v7 )
    sub_1BAB678(v9, v10);
  v11 = method->klass->rgctx_data;
  _3_System_Action_T__Invoke = v11->_3_System_Action_T__Invoke;
  methodPointer = _3_System_Action_T__Invoke->methodPointer;
  if ( (v11->_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v6 = (_QWORD *)*v6;
  v14[0] = (__int64)v6;
  _3_System_Action_T__Invoke->invoker_method(methodPointer, _3_System_Action_T__Invoke, v7, (void **)v14, v6);
}