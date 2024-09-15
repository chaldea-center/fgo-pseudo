void __fastcall BattleAttack___ctor(
        BattleAttack_o *this,
        BattleLogic_LOGICTYPE_array *logicArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  BattleAttack___c_c *v11; // x0
  int32_t AttackedInAction_k__BackingField; // w25
  System_Func_T__TResult__o *_9__11_0; // x21
  Il2CppObject *v14; // x22
  struct BattleAttack___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int v18; // w25
  BattleAttack___c_c *v19; // x0
  System_Func_T__TResult__o *_9__11_1; // x21
  Il2CppObject *v21; // x22
  struct BattleAttack___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int v25; // w8

  if ( (byte_4A301B3 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___, logicArray);
    sub_1B761C0(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo, v5);
    sub_1B761C0(&Method_BattleAttack___c___ctor_b__11_0__, v6);
    sub_1B761C0(&Method_BattleAttack___c___ctor_b__11_1__, v7);
    sub_1B761C0(&BattleAttack___c_TypeInfo, v8);
    byte_4A301B3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._LogicArray_k__BackingField,
    (int32_t)logicArray,
    v9,
    v10);
  v11 = BattleAttack___c_TypeInfo;
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v11 = BattleAttack___c_TypeInfo;
  }
  _9__11_0 = (System_Func_T__TResult__o *)v11->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleAttack___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__11_0 = (System_Func_T__TResult__o *)sub_1B7640C(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(_9__11_0, v14, Method_BattleAttack___c___ctor_b__11_0__, 0LL);
    static_fields = BattleAttack___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v16, v17);
  }
  v18 = AttackedInAction_k__BackingField | BasicHelper__Any_Int32Enum__48551576(
                                             (System_Int32Enum_array *)logicArray,
                                             (System_Func_T__bool__o *)_9__11_0,
                                             (const MethodInfo_2E4D698 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v18;
  v19 = BattleAttack___c_TypeInfo;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v19 = BattleAttack___c_TypeInfo;
  }
  _9__11_1 = (System_Func_T__TResult__o *)v19->static_fields->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BattleAttack___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__11_1 = (System_Func_T__TResult__o *)sub_1B7640C(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(_9__11_1, v21, Method_BattleAttack___c___ctor_b__11_1__, 0LL);
    v22 = BattleAttack___c_TypeInfo->static_fields;
    v22->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v22->__9__11_1, (int32_t)_9__11_1, v23, v24);
  }
  if ( BasicHelper__Any_Int32Enum__48551576(
         (System_Int32Enum_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_2E4D698 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v25 = 2;
  }
  else
  {
    v25 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v25 | v18;
}


bool __fastcall BattleAttack__IsActionAttacked(BattleAttack_o *this, bool isEnemy, const MethodInfo *method)
{
  return ((unsigned int)this->fields._AttackedInAction_k__BackingField >> isEnemy) & 1;
}


int32_t __fastcall BattleAttack__get_AttackedInAction(BattleAttack_o *this, const MethodInfo *method)
{
  return this->fields._AttackedInAction_k__BackingField;
}


BattleLogic_LOGICTYPE_array *__fastcall BattleAttack__get_LogicArray(BattleAttack_o *this, const MethodInfo *method)
{
  return this->fields._LogicArray_k__BackingField;
}


void __fastcall BattleAttack__set_AttackedInAction(BattleAttack_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AttackedInAction_k__BackingField = value;
}


void __fastcall BattleAttack__set_LogicArray(
        BattleAttack_o *this,
        BattleLogic_LOGICTYPE_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._LogicArray_k__BackingField = value;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields._LogicArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleAttack___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A301B4 & 1) == 0 )
  {
    sub_1B761C0(&BattleAttack___c_TypeInfo, v1);
    byte_4A301B4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(BattleAttack___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleAttack___c_TypeInfo->static_fields->__9 = (struct BattleAttack___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)BattleAttack___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleAttack___c___ctor(BattleAttack___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleAttack___c____ctor_b__11_0(BattleAttack___c_o *this, int32_t x, const MethodInfo *method)
{
  return x == 58;
}


bool __fastcall BattleAttack___c____ctor_b__11_1(BattleAttack___c_o *this, int32_t x, const MethodInfo *method)
{
  return x == 59;
}