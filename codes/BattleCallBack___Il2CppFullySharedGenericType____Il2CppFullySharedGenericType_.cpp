void BattleCallBack___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor(
        BattleCallBack_T1__T2__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
        System_Action_T1__T2__o *callBack,
        const MethodInfo_330D038 *method)
{
  _QWORD *monitor; // x20
  void **v6; // x23
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v7; // x24
  _QWORD *v9; // x8
  size_t v10; // x25
  size_t v11; // x22
  __int64 v12; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v13; // x1
  __int64 v14; // x19
  void **v15; // x1
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // [xsp+0h] [xbp-20h] BYREF
  void *v17; // [xsp+8h] [xbp-18h] BYREF
  _QWORD v18[2]; // [xsp+10h] [xbp-10h] BYREF

  klass = arg2.klass;
  monitor = arg2.monitor;
  v6 = (void **)arg1.monitor;
  v7 = arg1.klass;
  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v17 = arg1.monitor;
  v18[0] = arg1.klass;
  v9 = *(_QWORD **)(*((_QWORD *)arg2.monitor + 4) + 192LL);
  v10 = *(unsigned int *)(*v9 + 252LL);
  v11 = *(unsigned int *)(v9[2] + 252LL);
  BattleCallBackBase___ctor((BattleCallBackBase_o *)this, 0);
  v12 = monitor[4];
  if ( *(int *)(**(_QWORD **)(v12 + 192) + 40LL) >= 0 )
    v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v18;
  else
    v13 = v7;
  memcpy((char *)&klass - ((v10 + 15) & 0x1FFFFFFF0LL), v13, v10);
  sub_1C32C48(
    this,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 192) + 8LL) + 128LL),
    (char *)&klass - ((v10 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v10);
  v14 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL) + 40LL) >= 0 )
    v15 = &v17;
  else
    v15 = v6;
  memcpy((char *)&klass - ((v11 + 15) & 0x1FFFFFFF0LL), v15, v11);
  sub_1C32C48(
    this,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 192) + 8LL) + 128LL) + 32LL,
    (char *)&klass - ((v11 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v11);
  sub_1A81C90(this, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(monitor[4] + 192LL) + 8LL) + 128LL) + 64LL, klass);
}


void BattleCallBack___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___call(
        BattleCallBack_T1__T2__o *this,
        const MethodInfo_330D1A4 *method)
{
  BattleCallBack_T1__T2__RGCTXs *rgctx_data; // x8
  size_t actualSize; // x22
  size_t v6; // x23
  _QWORD *v7; // x20
  _QWORD *v8; // x19
  __int64 v9; // x26
  const void *v10; // x0
  const void *v11; // x0
  BattleCallBack_T1__T2__RGCTXs *v12; // x8
  MethodInfo *_4_ActionExtensions_Call_T1__T2; // x1
  void (*methodPointer)(); // x0
  _QWORD v15[4]; // [xsp+0h] [xbp-20h] BYREF

  v15[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  rgctx_data = method->klass->rgctx_data;
  actualSize = rgctx_data->_0_T1->_2.actualSize;
  v6 = rgctx_data->_2_T2->_2.actualSize;
  v7 = (_QWORD *)((char *)v15 - ((actualSize + 15) & 0x1FFFFFFF0LL));
  v8 = (_QWORD *)((char *)v15 - ((v6 + 15) & 0x1FFFFFFF0LL));
  v9 = *(_QWORD *)sub_1C32C44(this, (char *)rgctx_data->_1_BattleCallBack_T1__T2_->_1.fields + 64);
  v10 = (const void *)sub_1C32C44(this, method->klass->rgctx_data->_1_BattleCallBack_T1__T2_->_1.fields);
  memcpy(v7, v10, actualSize);
  v11 = (const void *)sub_1C32C44(this, (char *)method->klass->rgctx_data->_1_BattleCallBack_T1__T2_->_1.fields + 32);
  memcpy(v8, v11, v6);
  v12 = method->klass->rgctx_data;
  _4_ActionExtensions_Call_T1__T2 = v12->_4_ActionExtensions_Call_T1__T2_;
  methodPointer = _4_ActionExtensions_Call_T1__T2->methodPointer;
  if ( (v12->_0_T1->_1.byval_arg.bits & 0x80000000) == 0 )
    v7 = (_QWORD *)*v7;
  if ( (v12->_2_T2->_1.byval_arg.bits & 0x80000000) == 0 )
    v8 = (_QWORD *)*v8;
  v15[0] = v9;
  v15[1] = v7;
  v15[2] = v8;
  _4_ActionExtensions_Call_T1__T2->invoker_method(methodPointer, _4_ActionExtensions_Call_T1__T2, 0, (void **)v15, v8);
}