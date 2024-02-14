void __fastcall WeightRate_WeightSeed_int____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        int32_t t,
        const MethodInfo_2ADFE8C *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.weight = w;
  *(&this->fields.weight + 1) = t;
}


void __fastcall WeightRate_WeightSeed_object____ctor(
        WeightRate_WeightSeed_T__o *this,
        int32_t w,
        Il2CppObject *t,
        const MethodInfo_2ADFECC *method)
{
  BattleServantConfConponent_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( !this )
    sub_B0D97C(0LL);
  v6 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)t;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 24);
  *(_DWORD *)&v6[-1].fields.isOpenAfter = w;
  sub_B0D840(v6, (System_Int32_array **)t, v7, v8, v9, v10, v11, v12);
}


void __fastcall WeightRate___c__DisplayClass4_0_int____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_1F127A0 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0_int____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_1F127B8 *method)
{
  if ( !s )
    sub_B0D97C(this);
  return System_Int32__CompareTo_38472796((_DWORD)this + 16, *(&s->fields.weight + 1), 0LL) == 0;
}


void __fastcall WeightRate___c__DisplayClass4_0_object____ctor(
        WeightRate___c__DisplayClass4_0_T__o *this,
        const MethodInfo_1F1282C *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WeightRate___c__DisplayClass4_0_object____removeWeight_b__0(
        WeightRate___c__DisplayClass4_0_T__o *this,
        WeightRate_WeightSeed_T__o *s,
        const MethodInfo_1F12844 *method)
{
  Il2CppObject *t; // x19
  Il2CppObject *value; // x20
  Il2CppClass *_1_System_IComparable_T; // x21
  Il2CppClass *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( !s || (t = this->fields.t) == 0LL )
    sub_B0D97C(this);
  value = s->fields.value;
  _1_System_IComparable_T = method->klass->rgctx_data->_1_System_IComparable_T_;
  if ( (BYTE2(_1_System_IComparable_T->vtable[0].methodPtr) & 1) == 0 )
  {
    sub_AA65A4(method->klass->rgctx_data->_1_System_IComparable_T_);
    t = this->fields.t;
  }
  klass = t->klass;
  if ( *(_WORD *)&t->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _1_System_IComparable_T )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&t->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AA67A0(t, _1_System_IComparable_T, 0LL);
  }
  return (*(unsigned int (__fastcall **)(Il2CppObject *, Il2CppObject *, _QWORD))p_method)(
           t,
           value,
           *(_QWORD *)(p_method + 8)) == 0;
}


void __fastcall WeightRate___c_int____cctor(const MethodInfo_1F0B5F4 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WeightRate___c_T__c *klass; // x20
  Il2CppClass *_0_WeightRate___c_T; // x20
  __int64 v6; // x0
  WeightRate___c_T__c *v7; // x22
  System_Int32_array **v8; // x20
  __int16 v9; // w8
  WeightRate___c_T__c *v10; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  WeightRate___c_T__c *v18; // x19
  Il2CppClass *_2_WeightRate___c_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass);
  _0_WeightRate___c_T = klass->rgctx_data->_0_WeightRate___c_T_;
  if ( (BYTE2(_0_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_0_WeightRate___c_T);
  v6 = sub_B0D974(_0_WeightRate___c_T, v1, v2);
  v7 = method->klass;
  v8 = (System_Int32_array **)v6;
  v9 = WORD1(v7->vtable._0_Equals.methodPtr);
  v10 = v7;
  if ( (v9 & 1) == 0 )
  {
    sub_AA65A4(method->klass);
    v10 = method->klass;
    v9 = WORD1(v10->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v7->rgctx_data->_1_WeightRate___c_T___ctor->methodPointer;
  if ( (v9 & 1) == 0 )
    sub_AA65A4(v10);
  methodPointer(v8, v10->rgctx_data->_1_WeightRate___c_T___ctor);
  v18 = method->klass;
  if ( (BYTE2(v18->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AA65A4(v18);
  _2_WeightRate___c_T = v18->rgctx_data->_2_WeightRate___c_T_;
  if ( (BYTE2(_2_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_2_WeightRate___c_T);
  static_fields = (BattleServantConfConponent_o *)_2_WeightRate___c_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B0D840(static_fields, v8, v12, v13, v14, v15, v16, v17);
}


void __fastcall WeightRate___c_int____ctor(WeightRate___c_T__o *this, const MethodInfo_1F0B6D0 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c_int____ReverseWeight_b__11_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_1F0B6E8 *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.weight - a->fields.weight;
}


void __fastcall WeightRate___c_object____cctor(const MethodInfo_1F0C46C *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WeightRate___c_T__c *klass; // x20
  Il2CppClass *_0_WeightRate___c_T; // x20
  __int64 v6; // x0
  WeightRate___c_T__c *v7; // x22
  System_Int32_array **v8; // x20
  __int16 v9; // w8
  WeightRate___c_T__c *v10; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  WeightRate___c_T__c *v18; // x19
  Il2CppClass *_2_WeightRate___c_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AA65A4(method->klass);
  _0_WeightRate___c_T = klass->rgctx_data->_0_WeightRate___c_T_;
  if ( (BYTE2(_0_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_0_WeightRate___c_T);
  v6 = sub_B0D974(_0_WeightRate___c_T, v1, v2);
  v7 = method->klass;
  v8 = (System_Int32_array **)v6;
  v9 = WORD1(v7->vtable._0_Equals.methodPtr);
  v10 = v7;
  if ( (v9 & 1) == 0 )
  {
    sub_AA65A4(method->klass);
    v10 = method->klass;
    v9 = WORD1(v10->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v7->rgctx_data->_1_WeightRate___c_T___ctor->methodPointer;
  if ( (v9 & 1) == 0 )
    sub_AA65A4(v10);
  methodPointer(v8, v10->rgctx_data->_1_WeightRate___c_T___ctor);
  v18 = method->klass;
  if ( (BYTE2(v18->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AA65A4(v18);
  _2_WeightRate___c_T = v18->rgctx_data->_2_WeightRate___c_T_;
  if ( (BYTE2(_2_WeightRate___c_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_2_WeightRate___c_T);
  static_fields = (BattleServantConfConponent_o *)_2_WeightRate___c_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v8;
  sub_B0D840(static_fields, v8, v12, v13, v14, v15, v16, v17);
}


void __fastcall WeightRate___c_object____ctor(WeightRate___c_T__o *this, const MethodInfo_1F0C548 *method)
{
  if ( !this )
    sub_B0D97C(0LL);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WeightRate___c_object____ReverseWeight_b__11_0(
        WeightRate___c_T__o *this,
        WeightRate_WeightSeed_T__o *a,
        WeightRate_WeightSeed_T__o *b,
        const MethodInfo_1F0C560 *method)
{
  if ( !b || !a )
    sub_B0D97C(this);
  return b->fields.weight - a->fields.weight;
}