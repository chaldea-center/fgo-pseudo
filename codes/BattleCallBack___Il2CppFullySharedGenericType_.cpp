void BattleCallBack___Il2CppFullySharedGenericType____ctor(
        BattleCallBack_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o argument,
        System_Action_T__o *callBack,
        const MethodInfo_3E398B8 *method)
{
  void *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  Il2CppObject *m_target; // x8
  size_t v9; // x23
  Il2CppClass *v10; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v11; // x1
  _QWORD v12[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = argument.monitor;
  klass = argument.klass;
  v12[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  m_target = callBack->fields.m_target;
  v12[0] = argument.klass;
  v9 = *((unsigned int *)m_target[12].klass->_1.image + 63);
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  v10 = callBack->fields.m_target[12].klass;
  if ( *((int *)v10->_1.image + 10) >= 0 )
    v11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v12;
  else
    v11 = klass;
  memcpy((char *)v12 - ((v9 + 15) & 0x1FFFFFFF0LL), v11, v9);
  sub_21FFC7C(this, *((_QWORD *)v10->_1.gc_desc + 16), (char *)v12 - ((v9 + 15) & 0x1FFFFFFF0LL), (unsigned int)v9);
  sub_2007EEC(this, *((_QWORD *)callBack->fields.m_target[12].klass->_1.gc_desc + 16) + 32LL, monitor);
}


void BattleCallBack___Il2CppFullySharedGenericType___call(BattleCallBack_T__o *this, const MethodInfo_3E399B0 *method)
{
  BattleCallBack_T__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x22
  _QWORD *v6; // x19
  __int64 v7; // x20
  const void *v8; // x0
  void *v9; // x0
  __int64 v10; // x1
  BattleCallBack_T__RGCTXs *v11; // x8
  MethodInfo *_3_System_Action_T__Invoke; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  _QWORD v15[2]; // [xsp+0h] [xbp-10h] BYREF

  v15[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_0_T->_2.actualSize;
  v6 = (_QWORD *)((char *)v15 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v7 = *(_QWORD *)sub_21FFC78(this, (char *)rgctx_data->_1_BattleCallBack_T_->_1.fields + 32);
  v8 = (const void *)sub_21FFC78(this, method->klass->rgctx_data->_1_BattleCallBack_T_->_1.fields);
  v9 = memcpy(v6, v8, actualSize);
  if ( !v7 )
    sub_21FFECC(v9, v10);
  v11 = method->klass->rgctx_data;
  _3_System_Action_T__Invoke = v11->_3_System_Action_T__Invoke;
  methodPointer = _3_System_Action_T__Invoke->methodPointer;
  if ( (v11->_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v6 = (_QWORD *)*v6;
  invoker_method = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_3_System_Action_T__Invoke->invoker_method;
  v15[0] = v6;
  invoker_method(methodPointer, _3_System_Action_T__Invoke, v7, v15, v6);
}