void __fastcall WeightRate_WeightSeed___Il2CppFullySharedGenericType____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_388D9F0 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x20
  __int64 v8; // x22
  __int64 v9; // x19
  __int64 *v10; // x1
  __int64 v11[2]; // [xsp+0h] [xbp-10h] BYREF

  monitor = t.monitor;
  klass = t.klass;
  v11[1] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v11[0] = (__int64)t.klass;
  v8 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)t.monitor + 4) + 192LL) + 8LL) + 252LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  sub_19B6620(this, *(_QWORD *)(**(_QWORD **)(monitor[4] + 192LL) + 128LL), (unsigned int)w);
  v9 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v9 + 192) + 8LL) + 40LL) >= 0 )
    v10 = v11;
  else
    v10 = (__int64 *)klass;
  memcpy((char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL), v10, v8);
  sub_1B640F0(
    this,
    *(_QWORD *)(**(_QWORD **)(v9 + 192) + 128LL) + 32LL,
    (char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v8);
}


void __fastcall WeightRate_WeightSeed_int____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        int32_t t,
        const MethodInfo_388D9C4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.weight = w;
  *(&this->fields.weight + 1) = t;
}


void __fastcall WeightRate___c__DisplayClass4_0___Il2CppFullySharedGenericType____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_2FFEF48 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0___Il2CppFullySharedGenericType____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_2FFEF50 *method)
{
  WeightRate___c__DisplayClass4_0_T__RGCTXs *rgctx_data; // x9
  Il2CppClass *_1_T; // x8
  __int64 native_size; // x24
  int32_t v9; // w8
  char *v10; // x21
  _QWORD *v11; // x22
  const void *v12; // x0
  WeightRate___c__DisplayClass4_0_T__RGCTXs *v13; // x8
  Il2CppClass *v14; // x23
  Il2CppClass *_0_WeightRate___c__DisplayClass4_0_T; // x24
  void *v16; // x3
  _QWORD v18[2]; // [xsp+0h] [xbp-20h] BYREF
  int v19; // [xsp+14h] [xbp-Ch]
  __int64 v20; // [xsp+18h] [xbp-8h]

  v20 = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  rgctx_data = method->klass->rgctx_data;
  _1_T = rgctx_data->_1_T;
  native_size = (unsigned int)_1_T->_2.native_size;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) != 0 )
  {
    v9 = _1_T->_2.native_size;
  }
  else
  {
    v9 = *(_DWORD *)(sub_1BB5FA4(rgctx_data->_1_T) + 252);
    rgctx_data = method->klass->rgctx_data;
  }
  v10 = (char *)v18 - (((unsigned int)(v9 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v11 = (_QWORD *)((char *)v18 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v12 = (const void *)sub_1B640EC(s, (char *)rgctx_data->_2_WeightRate_WeightSeed_T_->_1.fields + 32);
  memcpy(v11, v12, native_size);
  v13 = method->klass->rgctx_data;
  v14 = v13->_1_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
  {
    LODWORD(v14) = sub_1BB5FA4(v13->_1_T);
    v13 = method->klass->rgctx_data;
  }
  _0_WeightRate___c__DisplayClass4_0_T = v13[1]._0_WeightRate___c__DisplayClass4_0_T_;
  v16 = (void *)sub_1B640EC(this, v13->_0_WeightRate___c__DisplayClass4_0_T_->_1.fields);
  if ( (method->klass->rgctx_data->_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v18[1] = v11;
  sub_1B64B30((int)v14, (int)_0_WeightRate___c__DisplayClass4_0_T, (int)v10, v16);
  return v19 == 0;
}


void __fastcall WeightRate___c__DisplayClass4_0_int____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_2FFEEA4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0_int____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_2FFEEAC *method)
{
  if ( !s )
    sub_1B64324(this);
  return System_Int32__CompareTo_62180348(
           (_DWORD)this + 16,
           *(&s->fields.weight + 1),
           (const MethodInfo *)method->klass->rgctx_data[1]._0_WeightRate___c__DisplayClass4_0_T_) == 0;
}


void __fastcall WeightRate___c___Il2CppFullySharedGenericType____cctor(const MethodInfo_2FF5534 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WeightRate___c_T__c *klass; // x0
  __int64 _0_WeightRate___c_T; // x0
  __int64 v6; // x0
  WeightRate___c_T__c *v7; // x8
  __int64 v8; // x20
  __int16 v9; // w9
  WeightRate___c_T__c *v10; // x0
  void (__fastcall *methodPointer)(__int64, MethodInfo *); // x21
  int32_t v12; // w2
  int32_t v13; // w3
  WeightRate___c_T__c *v14; // x0
  __int64 _2_WeightRate___c_T; // x0
  WeightRate___c_T__c *v16; // x0
  __int64 v17; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (WeightRate___c_T__c *)sub_1BB5FA4(klass);
  _0_WeightRate___c_T = (__int64)klass->rgctx_data->_0_WeightRate___c_T_;
  if ( (*(_BYTE *)(_0_WeightRate___c_T + 309) & 1) == 0 )
    _0_WeightRate___c_T = sub_1BB5FA4(_0_WeightRate___c_T);
  v6 = sub_1B64314(_0_WeightRate___c_T, v1, v2);
  v7 = method->klass;
  v8 = v6;
  v9 = *(_WORD *)((char *)&v7->vtable._0_Equals.methodPtr + 5);
  if ( (v9 & 1) != 0 )
  {
    v10 = method->klass;
  }
  else
  {
    v10 = (WeightRate___c_T__c *)sub_1BB5FA4(method->klass);
    v7 = method->klass;
    v9 = *(_WORD *)((char *)&v7->vtable._0_Equals.methodPtr + 5);
  }
  methodPointer = (void (__fastcall *)(__int64, MethodInfo *))v10->rgctx_data->_1_WeightRate___c_T___ctor->methodPointer;
  if ( (v9 & 1) == 0 )
    v7 = (WeightRate___c_T__c *)sub_1BB5FA4(v7);
  methodPointer(v8, v7->rgctx_data->_1_WeightRate___c_T___ctor);
  v14 = method->klass;
  if ( (BYTE5(v14->vtable._0_Equals.methodPtr) & 1) == 0 )
    v14 = (WeightRate___c_T__c *)sub_1BB5FA4(v14);
  _2_WeightRate___c_T = (__int64)v14->rgctx_data->_2_WeightRate___c_T_;
  if ( (*(_BYTE *)(_2_WeightRate___c_T + 309) & 1) == 0 )
    _2_WeightRate___c_T = sub_1BB5FA4(_2_WeightRate___c_T);
  **(_QWORD **)(_2_WeightRate___c_T + 184) = v8;
  v16 = method->klass;
  if ( (BYTE5(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    v16 = (WeightRate___c_T__c *)sub_1BB5FA4(v16);
  v17 = (__int64)v16->rgctx_data->_2_WeightRate___c_T_;
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BB5FA4(v17);
  sub_1B6406C(*(ServantStatusBattleListViewItem_o **)(v17 + 184), v8, v12, v13);
}


void __fastcall WeightRate___c___Il2CppFullySharedGenericType____ctor(
        WeightRate___c_T__o *this,
        const MethodInfo_2FF5628 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c___Il2CppFullySharedGenericType____ReverseWeight_b__11_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_2FF5630 *method)
{
  const MethodInfo_2FF5630 *v5; // x19
  _DWORD *v6; // x0
  WeightRate___c_T__c *klass; // x8

  v5 = method;
  v6 = (_DWORD *)sub_1B640EC(b, method->klass->rgctx_data->_3_WeightRate_WeightSeed_T_->_1.fields);
  klass = v5->klass;
  LODWORD(v5) = *v6;
  return (_DWORD)v5 - *(_DWORD *)sub_1B640EC(a, klass->rgctx_data->_3_WeightRate_WeightSeed_T_->_1.fields);
}


void __fastcall WeightRate___c_int____cctor(const MethodInfo_2FF1AD4 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WeightRate___c_T__c *klass; // x0
  __int64 _0_WeightRate___c_T; // x0
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  WeightRate___c_T__c *v9; // x0
  __int64 _2_WeightRate___c_T; // x0
  WeightRate___c_T__c *v11; // x0
  __int64 v12; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (WeightRate___c_T__c *)sub_1BB5FA4(klass);
  _0_WeightRate___c_T = (__int64)klass->rgctx_data->_0_WeightRate___c_T_;
  if ( (*(_BYTE *)(_0_WeightRate___c_T + 309) & 1) == 0 )
    _0_WeightRate___c_T = sub_1BB5FA4(_0_WeightRate___c_T);
  v6 = (Il2CppObject *)sub_1B64314(_0_WeightRate___c_T, v1, v2);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BB5FA4(method->klass);
  System_Object___ctor(v6, 0LL);
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (WeightRate___c_T__c *)sub_1BB5FA4(v9);
  _2_WeightRate___c_T = (__int64)v9->rgctx_data->_2_WeightRate___c_T_;
  if ( (*(_BYTE *)(_2_WeightRate___c_T + 309) & 1) == 0 )
    _2_WeightRate___c_T = sub_1BB5FA4(_2_WeightRate___c_T);
  **(_QWORD **)(_2_WeightRate___c_T + 184) = v6;
  v11 = method->klass;
  if ( (BYTE5(v11->vtable._0_Equals.methodPtr) & 1) == 0 )
    v11 = (WeightRate___c_T__c *)sub_1BB5FA4(v11);
  v12 = (__int64)v11->rgctx_data->_2_WeightRate___c_T_;
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1BB5FA4(v12);
  sub_1B6406C(*(ServantStatusBattleListViewItem_o **)(v12 + 184), (int32_t)v6, v7, v8);
}


void __fastcall WeightRate___c_int____ctor(WeightRate___c_T__o *this, const MethodInfo_2FF1B90 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c_int____ReverseWeight_b__11_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_2FF1B98 *method)
{
  if ( !b || !a )
    sub_1B64324(this);
  return b->fields.weight - a->fields.weight;
}