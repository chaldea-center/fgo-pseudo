void __fastcall WeightRate_WeightSeed___Il2CppFullySharedGenericType____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o t,
        const MethodInfo_38DC520 *method)
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
  sub_19D8E98(this, *(_QWORD *)(**(_QWORD **)(monitor[4] + 192LL) + 128LL), (unsigned int)w);
  v9 = monitor[4];
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v9 + 192) + 8LL) + 40LL) >= 0 )
    v10 = v11;
  else
    v10 = (__int64 *)klass;
  memcpy((char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL), v10, v8);
  sub_1B885D8(
    this,
    *(_QWORD *)(**(_QWORD **)(v9 + 192) + 128LL) + 32LL,
    (char *)v11 - ((v8 + 15) & 0x1FFFFFFF0LL),
    (unsigned int)v8);
}


void __fastcall WeightRate_WeightSeed_int____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        int32_t t,
        const MethodInfo_38DC4F4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.weight = w;
  *(&this->fields.weight + 1) = t;
}


void __fastcall WeightRate___c__DisplayClass4_0___Il2CppFullySharedGenericType____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_304690C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0___Il2CppFullySharedGenericType____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_3046914 *method)
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
    v9 = *(_DWORD *)(sub_1BDA48C(rgctx_data->_1_T) + 252);
    rgctx_data = method->klass->rgctx_data;
  }
  v10 = (char *)v18 - (((unsigned int)(v9 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v11 = (_QWORD *)((char *)v18 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v12 = (const void *)sub_1B885D4(s, (char *)rgctx_data->_2_WeightRate_WeightSeed_T_->_1.fields + 32);
  memcpy(v11, v12, native_size);
  v13 = method->klass->rgctx_data;
  v14 = v13->_1_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
  {
    LODWORD(v14) = sub_1BDA48C(v13->_1_T);
    v13 = method->klass->rgctx_data;
  }
  _0_WeightRate___c__DisplayClass4_0_T = v13[1]._0_WeightRate___c__DisplayClass4_0_T_;
  v16 = (void *)sub_1B885D4(this, v13->_0_WeightRate___c__DisplayClass4_0_T_->_1.fields);
  if ( (method->klass->rgctx_data->_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v18[1] = v11;
  sub_1B89018((int)v14, (int)_0_WeightRate___c__DisplayClass4_0_T, (int)v10, v16);
  return v19 == 0;
}


void __fastcall WeightRate___c__DisplayClass4_0_int____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_3046868 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0_int____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_3046870 *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
  return System_Int32__CompareTo_62511992(
           (_DWORD)this + 16,
           *(&s->fields.weight + 1),
           (const MethodInfo *)method->klass->rgctx_data[1]._0_WeightRate___c__DisplayClass4_0_T_) == 0;
}


void __fastcall WeightRate___c__DisplayClass5_0___Il2CppFullySharedGenericType____ctor(
        WeightRate___c__DisplayClass5_0_T__o *this,
        const MethodInfo_304786C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass5_0___Il2CppFullySharedGenericType____HasWeight_b__0(
        WeightRate___c__DisplayClass5_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_3047874 *method)
{
  WeightRate___c__DisplayClass5_0_T__RGCTXs *rgctx_data; // x9
  Il2CppClass *_1_T; // x8
  __int64 native_size; // x24
  int32_t v9; // w8
  char *v10; // x21
  _QWORD *v11; // x22
  const void *v12; // x0
  WeightRate___c__DisplayClass5_0_T__RGCTXs *v13; // x8
  Il2CppClass *v14; // x23
  Il2CppClass *_0_WeightRate___c__DisplayClass5_0_T; // x24
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
    v9 = *(_DWORD *)(sub_1BDA48C(rgctx_data->_1_T) + 252);
    rgctx_data = method->klass->rgctx_data;
  }
  v10 = (char *)v18 - (((unsigned int)(v9 + 16) + 15LL) & 0x1FFFFFFF0LL);
  v11 = (_QWORD *)((char *)v18 - ((native_size + 15) & 0x1FFFFFFF0LL));
  v12 = (const void *)sub_1B885D4(s, (char *)rgctx_data->_2_WeightRate_WeightSeed_T_->_1.fields + 32);
  memcpy(v11, v12, native_size);
  v13 = method->klass->rgctx_data;
  v14 = v13->_1_T;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
  {
    LODWORD(v14) = sub_1BDA48C(v13->_1_T);
    v13 = method->klass->rgctx_data;
  }
  _0_WeightRate___c__DisplayClass5_0_T = v13[1]._0_WeightRate___c__DisplayClass5_0_T_;
  v16 = (void *)sub_1B885D4(this, v13->_0_WeightRate___c__DisplayClass5_0_T_->_1.fields);
  if ( (method->klass->rgctx_data->_1_T->_1.byval_arg.bits & 0x80000000) == 0 )
    v11 = (_QWORD *)*v11;
  v18[1] = v11;
  sub_1B89018((int)v14, (int)_0_WeightRate___c__DisplayClass5_0_T, (int)v10, v16);
  return v19 == 0;
}


void __fastcall WeightRate___c__DisplayClass5_0_int____ctor(
        WeightRate___c__DisplayClass5_0_T__o *this,
        const MethodInfo_30477C8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass5_0_int____HasWeight_b__0(
        WeightRate___c__DisplayClass5_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_30477D0 *method)
{
  if ( !s )
    sub_1B8880C(this, 0LL);
  return System_Int32__CompareTo_62511992(
           (_DWORD)this + 16,
           *(&s->fields.weight + 1),
           (const MethodInfo *)method->klass->rgctx_data[1]._0_WeightRate___c__DisplayClass5_0_T_) == 0;
}


void __fastcall WeightRate___c___Il2CppFullySharedGenericType____cctor(const MethodInfo_303CEFC *method)
{
  WeightRate___c_T__c *klass; // x0
  __int64 _0_WeightRate___c_T; // x0
  __int64 v4; // x0
  WeightRate___c_T__c *v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  WeightRate___c_T__c *v8; // x0
  void (__fastcall *methodPointer)(__int64, MethodInfo *); // x21
  int32_t v10; // w2
  int32_t v11; // w3
  WeightRate___c_T__c *v12; // x0
  __int64 _2_WeightRate___c_T; // x0
  WeightRate___c_T__c *v14; // x0
  __int64 v15; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (WeightRate___c_T__c *)sub_1BDA48C(klass);
  _0_WeightRate___c_T = (__int64)klass->rgctx_data->_0_WeightRate___c_T_;
  if ( (*(_BYTE *)(_0_WeightRate___c_T + 309) & 1) == 0 )
    _0_WeightRate___c_T = sub_1BDA48C(_0_WeightRate___c_T);
  v4 = sub_1B887FC(_0_WeightRate___c_T);
  v5 = method->klass;
  v6 = v4;
  v7 = *(_WORD *)((char *)&v5->vtable._0_Equals.methodPtr + 5);
  if ( (v7 & 1) != 0 )
  {
    v8 = method->klass;
  }
  else
  {
    v8 = (WeightRate___c_T__c *)sub_1BDA48C(method->klass);
    v5 = method->klass;
    v7 = *(_WORD *)((char *)&v5->vtable._0_Equals.methodPtr + 5);
  }
  methodPointer = (void (__fastcall *)(__int64, MethodInfo *))v8->rgctx_data->_1_WeightRate___c_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    v5 = (WeightRate___c_T__c *)sub_1BDA48C(v5);
  methodPointer(v6, v5->rgctx_data->_1_WeightRate___c_T___ctor);
  v12 = method->klass;
  if ( (BYTE5(v12->vtable._0_Equals.methodPtr) & 1) == 0 )
    v12 = (WeightRate___c_T__c *)sub_1BDA48C(v12);
  _2_WeightRate___c_T = (__int64)v12->rgctx_data->_2_WeightRate___c_T_;
  if ( (*(_BYTE *)(_2_WeightRate___c_T + 309) & 1) == 0 )
    _2_WeightRate___c_T = sub_1BDA48C(_2_WeightRate___c_T);
  **(_QWORD **)(_2_WeightRate___c_T + 184) = v6;
  v14 = method->klass;
  if ( (BYTE5(v14->vtable._0_Equals.methodPtr) & 1) == 0 )
    v14 = (WeightRate___c_T__c *)sub_1BDA48C(v14);
  v15 = (__int64)v14->rgctx_data->_2_WeightRate___c_T_;
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BDA48C(v15);
  sub_1B88554(*(ServantStatusBattleListViewItem_o **)(v15 + 184), v6, v10, v11);
}


void __fastcall WeightRate___c___Il2CppFullySharedGenericType____ctor(
        WeightRate___c_T__o *this,
        const MethodInfo_303CFF0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c___Il2CppFullySharedGenericType____ReverseWeight_b__12_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_303CFF8 *method)
{
  const MethodInfo_303CFF8 *v5; // x19
  _DWORD *v6; // x0
  WeightRate___c_T__c *klass; // x8

  v5 = method;
  v6 = (_DWORD *)sub_1B885D4(b, method->klass->rgctx_data->_3_WeightRate_WeightSeed_T_->_1.fields);
  klass = v5->klass;
  LODWORD(v5) = *v6;
  return (_DWORD)v5 - *(_DWORD *)sub_1B885D4(a, klass->rgctx_data->_3_WeightRate_WeightSeed_T_->_1.fields);
}


void __fastcall WeightRate___c_int____cctor(const MethodInfo_303949C *method)
{
  WeightRate___c_T__c *klass; // x0
  __int64 _0_WeightRate___c_T; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  WeightRate___c_T__c *v7; // x0
  __int64 _2_WeightRate___c_T; // x0
  WeightRate___c_T__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (WeightRate___c_T__c *)sub_1BDA48C(klass);
  _0_WeightRate___c_T = (__int64)klass->rgctx_data->_0_WeightRate___c_T_;
  if ( (*(_BYTE *)(_0_WeightRate___c_T + 309) & 1) == 0 )
    _0_WeightRate___c_T = sub_1BDA48C(_0_WeightRate___c_T);
  v4 = (Il2CppObject *)sub_1B887FC(_0_WeightRate___c_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BDA48C(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (WeightRate___c_T__c *)sub_1BDA48C(v7);
  _2_WeightRate___c_T = (__int64)v7->rgctx_data->_2_WeightRate___c_T_;
  if ( (*(_BYTE *)(_2_WeightRate___c_T + 309) & 1) == 0 )
    _2_WeightRate___c_T = sub_1BDA48C(_2_WeightRate___c_T);
  **(_QWORD **)(_2_WeightRate___c_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (WeightRate___c_T__c *)sub_1BDA48C(v9);
  v10 = (__int64)v9->rgctx_data->_2_WeightRate___c_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  sub_1B88554(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall WeightRate___c_int____ctor(WeightRate___c_T__o *this, const MethodInfo_3039558 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c_int____ReverseWeight_b__12_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_3039560 *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.weight - a->fields.weight;
}