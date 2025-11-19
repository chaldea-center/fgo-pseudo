void BattleAttack___ctor(BattleAttack_o *this, BattleLogic_LOGICTYPE_array *logicArray, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BattleAttack___c_c *v7; // x0
  int32_t AttackedInAction_k__BackingField; // w25
  System_Func_T__TResult__o *_9__11_0; // x21
  Il2CppObject *v10; // x22
  struct BattleAttack___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w25
  BattleAttack___c_c *v15; // x0
  System_Func_T__TResult__o *_9__11_1; // x21
  Il2CppObject *v17; // x22
  struct BattleAttack___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int v21; // w8

  if ( (byte_4CB89C3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
    sub_1C6BA08(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    sub_1C6BA08(&Method_BattleAttack___c___ctor_b__11_0__);
    sub_1C6BA08(&Method_BattleAttack___c___ctor_b__11_1__);
    sub_1C6BA08(&BattleAttack___c_TypeInfo);
    byte_4CB89C3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._LogicArray_k__BackingField, (int32_t)logicArray, v5, v6);
  v7 = BattleAttack___c_TypeInfo;
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v7 = BattleAttack___c_TypeInfo;
  }
  _9__11_0 = (System_Func_T__TResult__o *)v7->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleAttack___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__11_0 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(_9__11_0, v10, Method_BattleAttack___c___ctor_b__11_0__, 0);
    static_fields = BattleAttack___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v12, v13);
  }
  v14 = AttackedInAction_k__BackingField
      | BasicHelper__Any_Int32Enum__51528440(
          (System_Int32Enum_array *)logicArray,
          (System_Func_T__bool__o *)_9__11_0,
          (const MethodInfo_31242F8 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v14;
  v15 = BattleAttack___c_TypeInfo;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v15 = BattleAttack___c_TypeInfo;
  }
  _9__11_1 = (System_Func_T__TResult__o *)v15->static_fields->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleAttack___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__11_1 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(_9__11_1, v17, Method_BattleAttack___c___ctor_b__11_1__, 0);
    v18 = BattleAttack___c_TypeInfo->static_fields;
    v18->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v18->__9__11_1, (int32_t)_9__11_1, v19, v20);
  }
  if ( BasicHelper__Any_Int32Enum__51528440(
         (System_Int32Enum_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_31242F8 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v21 = 2;
  }
  else
  {
    v21 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v21 | v14;
}


bool BattleAttack__IsActionAttacked(BattleAttack_o *this, bool isEnemy, const MethodInfo *method)
{
  return ((unsigned int)this->fields._AttackedInAction_k__BackingField >> isEnemy) & 1;
}


int32_t BattleAttack__get_AttackedInAction(BattleAttack_o *this, const MethodInfo *method)
{
  return this->fields._AttackedInAction_k__BackingField;
}


BattleLogic_LOGICTYPE_array *BattleAttack__get_LogicArray(BattleAttack_o *this, const MethodInfo *method)
{
  return this->fields._LogicArray_k__BackingField;
}


void BattleAttack__set_AttackedInAction(BattleAttack_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._AttackedInAction_k__BackingField = value;
}


void BattleAttack__set_LogicArray(BattleAttack_o *this, BattleLogic_LOGICTYPE_array *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._LogicArray_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._LogicArray_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleAttack___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB89C4 & 1) == 0 )
  {
    sub_1C6BA08(&BattleAttack___c_TypeInfo);
    byte_4CB89C4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleAttack___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleAttack___c_TypeInfo->static_fields->__9 = (struct BattleAttack___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleAttack___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleAttack___c___ctor(BattleAttack___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleAttack___c____ctor_b__11_0(BattleAttack___c_o *this, int32_t x, const MethodInfo *method)
{
  return x == 58;
}


bool BattleAttack___c____ctor_b__11_1(BattleAttack___c_o *this, int32_t x, const MethodInfo *method)
{
  return x == 59;
}