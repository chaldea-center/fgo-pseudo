void BattleCallBack___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor(
        BattleCallBack_T1__T2__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        System_Action_T1__T2__o *callBack,
        const MethodInfo_3E6D2D8 *method)
{
  _QWORD *monitor; // x21
  void **v6; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x24
  __int64 v9; // x8
  _QWORD *v10; // x8
  size_t v11; // x25
  size_t v12; // x23
  _QWORD *v13; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // x1
  __int64 v15; // x19
  void **v16; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  void *v18; // [xsp+8h] [xbp-18h] BYREF
  _QWORD v19[2]; // [xsp+10h] [xbp-10h] BYREF

  klass = arg2.klass;
  monitor = arg2.monitor;
  v6 = (void **)arg1.monitor;
  v7 = arg1.klass;
  v19[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v9 = *((_QWORD *)arg2.monitor + 4);
  v18 = arg1.monitor;
  v19[0] = arg1.klass;
  v10 = *(_QWORD **)(v9 + 192);
  v11 = *(unsigned int *)(*v10 + 252LL);
  v12 = *(unsigned int *)(v10[2] + 252LL);
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  v13 = *(_QWORD **)(monitor[4] + 192LL);
  if ( *(int *)(*v13 + 40LL) >= 0 )
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v19;
  else
    v14 = v7;
  memcpy((char *)&klass - ((v11 + 15) & 0x1FFFFFFF0LL), v14, v11);
  sub_2213A8C(this, *(_QWORD *)(v13[1] + 128LL), (char *)&klass - ((v11 + 15) & 0x1FFFFFFF0LL), (unsigned int)v11);
  v15 = *(_QWORD *)(monitor[4] + 192LL);
  if ( *(int *)(*(_QWORD *)(v15 + 16) + 40LL) >= 0 )
    v16 = &v18;
  else
    v16 = v6;
  memcpy((char *)&klass - ((v12 + 15) & 0x1FFFFFFF0LL), v16, v12);
  sub_2213A8C(
    this,
    *(_QWORD *)(*(_QWORD *)(v15 + 8) + 128LL) + 32LL,
    (char *)&klass - ((v12 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v12);
  sub_201B1D4(this, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 8LL) + 128LL) + 64LL, klass);
}


void BattleCallBack___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___call(
        BattleCallBack_T1__T2__o *this,
        const MethodInfo_3E6D43C *method)
{
  BattleCallBack_T1__T2__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x23
  size_t v6; // x22
  _QWORD *v7; // x20
  _QWORD *v8; // x19
  __int64 v9; // x26
  const void *v10; // x0
  const void *v11; // x0
  BattleCallBack_T1__T2__RGCTXs *v12; // x8
  MethodInfo *_4_ActionExtensions_Call_T1__T2; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  _QWORD v16[4]; // [xsp+0h] [xbp-20h] BYREF

  v16[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_0_T1->_2.actualSize;
  v6 = rgctx_data->_2_T2->_2.actualSize;
  v7 = (_QWORD *)((char *)v16 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v8 = (_QWORD *)((char *)v16 - ((v6 + 15) & 0x1FFFFFFF0LL));
  v9 = *(_QWORD *)sub_2213A88(this, (char *)rgctx_data->_1_BattleCallBack_T1__T2_->_1.fields + 64);
  v10 = (const void *)sub_2213A88(this, method->klass->rgctx_data->_1_BattleCallBack_T1__T2_->_1.fields);
  memcpy(v7, v10, actualSize);
  v11 = (const void *)sub_2213A88(this, (char *)method->klass->rgctx_data->_1_BattleCallBack_T1__T2_->_1.fields + 32);
  memcpy(v8, v11, v6);
  v12 = method->klass->rgctx_data;
  _4_ActionExtensions_Call_T1__T2 = v12->_4_ActionExtensions_Call_T1__T2_;
  methodPointer = _4_ActionExtensions_Call_T1__T2->methodPointer;
  if ( (v12->_0_T1->_1.byval_arg.bits & 0x80000000) == 0 )
    v7 = (_QWORD *)*v7;
  if ( (v12->_2_T2->_1.byval_arg.bits & 0x80000000) == 0 )
    v8 = (_QWORD *)*v8;
  v16[1] = v7;
  v16[2] = v8;
  invoker_method = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_4_ActionExtensions_Call_T1__T2->invoker_method;
  v16[0] = v9;
  invoker_method(methodPointer, _4_ActionExtensions_Call_T1__T2, 0, v16, v8);
}