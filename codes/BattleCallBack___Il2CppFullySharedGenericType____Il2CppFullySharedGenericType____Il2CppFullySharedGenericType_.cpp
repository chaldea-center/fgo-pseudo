void BattleCallBack___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor(
        BattleCallBack_T1__T2__T3__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3,
        System_Action_T1__T2__T3__o *callBack,
        const MethodInfo_32FE8C8 *method)
{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v6; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x27
  _QWORD *v9; // x8
  size_t v10; // x28
  size_t v11; // x26
  size_t v12; // x23
  _QWORD **data; // x24
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // x1
  _QWORD *v15; // x19
  void **v16; // x1
  _QWORD *v17; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **v18; // x1
  void **monitor; // [xsp+0h] [xbp-40h] BYREF
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+8h] [xbp-38h]
  unsigned __int64 StatusReg; // [xsp+10h] [xbp-30h]
  void *v22; // [xsp+18h] [xbp-28h]
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v23; // [xsp+20h] [xbp-20h] BYREF
  void *v24; // [xsp+28h] [xbp-18h] BYREF
  _QWORD v25[2]; // [xsp+30h] [xbp-10h] BYREF

  monitor = (void **)arg1.monitor;
  klass = arg2.klass;
  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v22 = arg2.monitor;
  v6 = arg3.klass;
  v7 = arg1.klass;
  v25[1] = *(_QWORD *)(StatusReg + 40);
  v24 = arg1.monitor;
  v25[0] = arg1.klass;
  v23 = arg2.klass;
  v9 = (_QWORD *)*((_QWORD *)arg3.klass->_1.byval_arg.data + 24);
  v10 = *(unsigned int *)(*v9 + 252LL);
  v11 = *(unsigned int *)(v9[2] + 252LL);
  v12 = *(unsigned int *)(v9[3] + 252LL);
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  data = (_QWORD **)v6->_1.byval_arg.data;
  if ( *(int *)(*data[24] + 40LL) >= 0 )
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v25;
  else
    v14 = v7;
  memcpy((char *)&monitor - ((v10 + 15) & 0x1FFFFFFF0LL), v14, v10);
  sub_1C2D4B8(
    this,
    *(_QWORD *)(data[24][1] + 128LL),
    (char *)&monitor - ((v10 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v10);
  v15 = v6->_1.byval_arg.data;
  if ( *(int *)(*(_QWORD *)(v15[24] + 16LL) + 40LL) >= 0 )
    v16 = &v24;
  else
    v16 = monitor;
  memcpy((char *)&monitor - ((v11 + 15) & 0x1FFFFFFF0LL), v16, v11);
  sub_1C2D4B8(
    this,
    *(_QWORD *)(*(_QWORD *)(v15[24] + 8LL) + 128LL) + 32LL,
    (char *)&monitor - ((v11 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v11);
  v17 = v6->_1.byval_arg.data;
  if ( *(int *)(*(_QWORD *)(v17[24] + 24LL) + 40LL) >= 0 )
    v18 = &v23;
  else
    v18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)klass;
  memcpy((char *)&monitor - ((v12 + 15) & 0x1FFFFFFF0LL), v18, v12);
  sub_1C2D4B8(
    this,
    *(_QWORD *)(*(_QWORD *)(v17[24] + 8LL) + 128LL) + 64LL,
    (char *)&monitor - ((v12 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v12);
  sub_1A7C6D0(this, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6->_1.byval_arg.data + 24) + 8LL) + 128LL) + 96LL, v22);
}


void BattleCallBack___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___call(
        BattleCallBack_T1__T2__T3__o *this,
        const MethodInfo_32FEAA4 *method)
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
  void (*methodPointer)(); // x0
  _QWORD v19[5]; // [xsp+8h] [xbp-28h] BYREF

  v19[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_0_T1->_2.actualSize;
  v6 = rgctx_data->_2_T2->_2.actualSize;
  v7 = rgctx_data->_3_T3->_2.actualSize;
  v8 = (_QWORD *)((char *)&v19[-1] - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v9 = (_QWORD *)((char *)&v19[-1] - ((v6 + 15) & 0x1FFFFFFF0LL));
  v10 = (_QWORD *)((char *)&v19[-1] - ((v7 + 15) & 0x1FFFFFFF0LL));
  v11 = *(_QWORD *)sub_1C2D4B4(this, (char *)rgctx_data->_1_BattleCallBack_T1__T2__T3_->_1.fields + 96);
  v12 = (const void *)sub_1C2D4B4(this, method->klass->rgctx_data->_1_BattleCallBack_T1__T2__T3_->_1.fields);
  memcpy(v8, v12, actualSize);
  v13 = (const void *)sub_1C2D4B4(
                        this,
                        (char *)method->klass->rgctx_data->_1_BattleCallBack_T1__T2__T3_->_1.fields + 32);
  memcpy(v9, v13, v6);
  v14 = (const void *)sub_1C2D4B4(
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
  v19[0] = v11;
  v19[1] = v8;
  v19[2] = v9;
  v19[3] = v10;
  _5_ActionExtensions_Call_T1__T2__T3->invoker_method(
    methodPointer,
    _5_ActionExtensions_Call_T1__T2__T3,
    0,
    (void **)v19,
    v10);
}