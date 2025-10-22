void BattleCallBack___Il2CppFullySharedGenericType____ctor(
        BattleCallBack_T__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o argument,
        System_Action_T__o *callBack,
        const MethodInfo_33294EC *method)
{
  void *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  size_t v8; // x22
  Il2CppObject *m_target; // x26
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v10; // x1
  _QWORD v11[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = argument.monitor;
  klass = argument.klass;
  v11[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v11[0] = argument.klass;
  v8 = *((unsigned int *)callBack->fields.m_target[12].klass->_1.image + 63);
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  m_target = callBack->fields.m_target;
  if ( *((int *)m_target[12].klass->_1.image + 10) >= 0 )
    v10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v11;
  else
    v10 = klass;
  memcpy((char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL), v10, v8);
  sub_1C3E58C(
    this,
    *((_QWORD *)m_target[12].klass->_1.gc_desc + 16),
    (char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v8);
  sub_1A8D140(this, *((_QWORD *)callBack->fields.m_target[12].klass->_1.gc_desc + 16) + 32LL, monitor);
}


void BattleCallBack___Il2CppFullySharedGenericType___call(BattleCallBack_T__o *this, const MethodInfo_33295E8 *method)
{
  BattleCallBack_T__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x22
  _QWORD *v6; // x19
  void *v7; // x21
  const void *v8; // x0
  void *v9; // x0
  __int64 v10; // x1
  BattleCallBack_T__RGCTXs *v11; // x8
  MethodInfo *_3_System_Action_T__Invoke; // x1
  void (*methodPointer)(); // x0
  _QWORD v14[2]; // [xsp+0h] [xbp-10h] BYREF

  v14[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_0_T->_2.actualSize;
  v6 = (_QWORD *)((char *)v14 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v7 = *(void **)sub_1C3E588(this, (char *)rgctx_data->_1_BattleCallBack_T_->_1.fields + 32);
  v8 = (const void *)sub_1C3E588(this, method->klass->rgctx_data->_1_BattleCallBack_T_->_1.fields);
  v9 = memcpy(v6, v8, actualSize);
  if ( !v7 )
    sub_1C3E7C0(v9, v10);
  v11 = method->klass->rgctx_data;
  _3_System_Action_T__Invoke = v11->_3_System_Action_T__Invoke;
  methodPointer = _3_System_Action_T__Invoke->methodPointer;
  if ( (v11->_0_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v6 = (_QWORD *)*v6;
  v14[0] = v6;
  _3_System_Action_T__Invoke->invoker_method(methodPointer, _3_System_Action_T__Invoke, v7, (void **)v14, v6);
}