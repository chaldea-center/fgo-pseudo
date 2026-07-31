void BattleCallBack___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor(
        BattleCallBack_T1__T2__T3__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        System_Action_T1__T2__T3__o *callBack,
        const MethodInfo_3E39E58 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v6; // x21
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x27
  _QWORD *data; // x8
  _QWORD *v10; // x8
  size_t v11; // x19
  size_t v12; // x23
  size_t v13; // x25
  _QWORD *v14; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v15; // x1
  __int64 v16; // x19
  void **v17; // x1
  __int64 v18; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v19; // x1
  void **monitor; // [xsp+0h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+8h] [xbp-38h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-30h]
  void *v23; // [xsp+18h] [xbp-28h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v24; // [xsp+20h] [xbp-20h] BYREF
  void *v25; // [xsp+28h] [xbp-18h] BYREF
  _QWORD v26[2]; // [xsp+30h] [xbp-10h] BYREF

  monitor = (void **)arg1.monitor;
  klass = arg2.klass;
  v6 = arg3.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v23 = arg2.monitor;
  v7 = arg1.klass;
  v26[1] = *(_QWORD *)(StatusReg + 40);
  data = arg3.klass->_1.byval_arg.data;
  v25 = arg1.monitor;
  v26[0] = arg1.klass;
  v24 = arg2.klass;
  v10 = (_QWORD *)data[24];
  v11 = *(unsigned int *)(*v10 + 252LL);
  v12 = *(unsigned int *)(v10[3] + 252LL);
  v13 = *(unsigned int *)(v10[2] + 252LL);
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  v14 = (_QWORD *)*((_QWORD *)v6->_1.byval_arg.data + 24);
  if ( *(int *)(*v14 + 40LL) >= 0 )
    v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v26;
  else
    v15 = v7;
  memcpy((char *)&monitor - ((v11 + 15) & 0x1FFFFFFF0LL), v15, v11);
  sub_21FFC7C(this, *(_QWORD *)(v14[1] + 128LL), (char *)&monitor - ((v11 + 15) & 0x1FFFFFFF0LL), (unsigned int)v11);
  v16 = *((_QWORD *)v6->_1.byval_arg.data + 24);
  if ( *(int *)(*(_QWORD *)(v16 + 16) + 40LL) >= 0 )
    v17 = &v25;
  else
    v17 = monitor;
  memcpy((char *)&monitor - ((v13 + 15) & 0x1FFFFFFF0LL), v17, v13);
  sub_21FFC7C(
    this,
    *(_QWORD *)(*(_QWORD *)(v16 + 8) + 128LL) + 32LL,
    (char *)&monitor - ((v13 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v13);
  v18 = *((_QWORD *)v6->_1.byval_arg.data + 24);
  if ( *(int *)(*(_QWORD *)(v18 + 24) + 40LL) >= 0 )
    v19 = &v24;
  else
    v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&monitor - ((v12 + 15) & 0x1FFFFFFF0LL), v19, v12);
  sub_21FFC7C(
    this,
    *(_QWORD *)(*(_QWORD *)(v18 + 8) + 128LL) + 64LL,
    (char *)&monitor - ((v12 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v12);
  sub_2007EEC(this, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6->_1.byval_arg.data + 24) + 8LL) + 128LL) + 96LL, v23);
}


void BattleCallBack___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___call(
        BattleCallBack_T1__T2__T3__o *this,
        const MethodInfo_3E3A028 *method)
{
  BattleCallBack_T1__T2__T3__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x26
  size_t v6; // x25
  size_t v7; // x23
  _QWORD *v8; // x19
  _QWORD *v9; // x21
  _QWORD *v10; // x20
  __int64 v11; // x28
  const void *v12; // x0
  const void *v13; // x0
  const void *v14; // x0
  BattleCallBack_T1__T2__T3__RGCTXs *v15; // x8
  MethodInfo *_5_ActionExtensions_Call_T1__T2__T3; // x1
  Il2CppMethodPointer methodPointer; // x0
  void (__fastcall *invoker_method)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // x8
  _QWORD v20[5]; // [xsp+8h] [xbp-28h] BYREF

  v20[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_0_T1->_2.actualSize;
  v6 = rgctx_data->_2_T2->_2.actualSize;
  v7 = rgctx_data->_3_T3->_2.actualSize;
  v8 = (_QWORD *)((char *)&v20[-1] - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v9 = (_QWORD *)((char *)&v20[-1] - ((v6 + 15) & 0x1FFFFFFF0LL));
  v10 = (_QWORD *)((char *)&v20[-1] - ((v7 + 15) & 0x1FFFFFFF0LL));
  v11 = *(_QWORD *)sub_21FFC78(this, (char *)rgctx_data->_1_BattleCallBack_T1__T2__T3_->_1.fields + 96);
  v12 = (const void *)sub_21FFC78(this, method->klass->rgctx_data->_1_BattleCallBack_T1__T2__T3_->_1.fields);
  memcpy(v8, v12, actualSize);
  v13 = (const void *)sub_21FFC78(
                        this,
                        (char *)method->klass->rgctx_data->_1_BattleCallBack_T1__T2__T3_->_1.fields + 32);
  memcpy(v9, v13, v6);
  v14 = (const void *)sub_21FFC78(
                        this,
                        (char *)method->klass->rgctx_data->_1_BattleCallBack_T1__T2__T3_->_1.fields + 64);
  memcpy(v10, v14, v7);
  v15 = method->klass->rgctx_data;
  _5_ActionExtensions_Call_T1__T2__T3 = v15->_5_ActionExtensions_Call_T1__T2__T3_;
  if ( (v15->_0_T1->_1.byval_arg.bits & 0x80000000) == 0 )
    v8 = (_QWORD *)*v8;
  methodPointer = _5_ActionExtensions_Call_T1__T2__T3->methodPointer;
  if ( (v15->_2_T2->_1.byval_arg.bits & 0x80000000) == 0 )
    v9 = (_QWORD *)*v9;
  if ( (v15->_3_T3->_1.byval_arg.bits & 0x80000000) == 0 )
    v10 = (_QWORD *)*v10;
  v20[2] = v9;
  v20[3] = v10;
  invoker_method = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_5_ActionExtensions_Call_T1__T2__T3->invoker_method;
  v20[0] = v11;
  v20[1] = v8;
  invoker_method(methodPointer, _5_ActionExtensions_Call_T1__T2__T3, 0, v20, v10);
}