void __fastcall WeightRate_WeightSeed_int____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        int32_t t,
        const MethodInfo_2BF0728 *method)
{
  if ( !this )
    sub_B2C434(0LL, w);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.weight = w;
  *(&this->fields.weight + 1) = t;
}


void __fastcall WeightRate_WeightSeed_object____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        Il2CppObject *t,
        const MethodInfo_2BF0768 *method)
{
  BattleServantConfConponent_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( !this )
    sub_B2C434(0LL, w);
  v6 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)t;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 24);
  *(_DWORD *)&v6[-1].fields.isOpenAfter = w;
  sub_B2C2F8(v6, (System_Int32_array **)t, v7, v8, v9, v10, v11, v12);
}


void __fastcall WeightRate___c__DisplayClass4_0_int____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_1F877FC *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0_int____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_1F87814 *method)
{
  if ( !s )
    sub_B2C434(this, 0LL);
  return System_Int32__CompareTo_38381180((_DWORD)this + 16, *(&s->fields.weight + 1), 0LL) == 0;
}


void __fastcall WeightRate___c__DisplayClass4_0_object____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_1F87888 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0_object____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_1F878A0 *method)
{
  __int64 v3; // x3
  Il2CppObject *t; // x19
  Il2CppObject *value; // x20
  Il2CppClass *_1_System_IComparable_T; // x21
  Il2CppClass *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( !s || (t = this->fields.t) == 0LL )
    sub_B2C434(this, s);
  value = s->fields.value;
  _1_System_IComparable_T = method->klass->rgctx_data->_1_System_IComparable_T_;
  if ( (BYTE2(_1_System_IComparable_T->vtable[0].methodPtr) & 1) == 0 )
  {
    sub_AC505C(method->klass->rgctx_data->_1_System_IComparable_T_);
    t = this->fields.t;
  }
  klass = t->klass;
  if ( *(_WORD *)&t->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _1_System_IComparable_T )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&t->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AC5258(t, _1_System_IComparable_T, 0LL, v3);
  }
  return (*(unsigned int (__fastcall **)(Il2CppObject *, Il2CppObject *, _QWORD))p_method)(
           t,
           value,
           *(_QWORD *)(p_method + 8)) == 0;
}


void __fastcall WeightRate___c_int____cctor(const MethodInfo_1F80650 *method)
{
  WeightRate___c_T__c *klass; // x20
  Il2CppClass *_0_WeightRate___c_T; // x20
  __int64 v4; // x0
  WeightRate___c_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  WeightRate___c_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  WeightRate___c_T__c *v16; // x19
  Il2CppClass *_2_WeightRate___c_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(method->klass);
  _0_WeightRate___c_T = klass->rgctx_data->_0_WeightRate___c_T_;
  if ( (BYTE2(_0_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_0_WeightRate___c_T);
  v4 = sub_B2C42C(_0_WeightRate___c_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AC505C(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_WeightRate___c_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AC505C(v8);
  methodPointer(v6, v8->rgctx_data->_1_WeightRate___c_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(v16);
  _2_WeightRate___c_T = v16->rgctx_data->_2_WeightRate___c_T_;
  if ( (BYTE2(_2_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_2_WeightRate___c_T);
  static_fields = (BattleServantConfConponent_o *)_2_WeightRate___c_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall WeightRate___c_int____ctor(WeightRate___c_T__o *this, const MethodInfo_1F8072C *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c_int____ReverseWeight_b__11_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_1F80744 *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.weight - a->fields.weight;
}


void __fastcall WeightRate___c_object____cctor(const MethodInfo_1F814C8 *method)
{
  WeightRate___c_T__c *klass; // x20
  Il2CppClass *_0_WeightRate___c_T; // x20
  __int64 v4; // x0
  WeightRate___c_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  WeightRate___c_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  WeightRate___c_T__c *v16; // x19
  Il2CppClass *_2_WeightRate___c_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(method->klass);
  _0_WeightRate___c_T = klass->rgctx_data->_0_WeightRate___c_T_;
  if ( (BYTE2(_0_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_0_WeightRate___c_T);
  v4 = sub_B2C42C(_0_WeightRate___c_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AC505C(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_WeightRate___c_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AC505C(v8);
  methodPointer(v6, v8->rgctx_data->_1_WeightRate___c_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(v16);
  _2_WeightRate___c_T = v16->rgctx_data->_2_WeightRate___c_T_;
  if ( (BYTE2(_2_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_2_WeightRate___c_T);
  static_fields = (BattleServantConfConponent_o *)_2_WeightRate___c_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall WeightRate___c_object____ctor(WeightRate___c_T__o *this, const MethodInfo_1F815A4 *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c_object____ReverseWeight_b__11_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_1F815BC *method)
{
  if ( !b || !a )
    sub_B2C434(this, a);
  return b->fields.weight - a->fields.weight;
}