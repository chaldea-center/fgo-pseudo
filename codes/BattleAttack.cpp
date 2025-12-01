void BattleAttack___ctor(BattleAttack_o *this, BattleLogic_LOGICTYPE_array *logicArray, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  BattleAttack___c_c *v11; // x0
  int32_t AttackedInAction_k__BackingField; // w25
  System_Func_T__TResult__o *_9__11_0; // x21
  Il2CppObject *v14; // x22
  struct BattleAttack___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w25
  BattleAttack___c_c *v23; // x0
  System_Func_T__TResult__o *_9__11_1; // x21
  Il2CppObject *v25; // x22
  struct BattleAttack___c_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int v33; // w8

  if ( (byte_4CC9AF7 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
    sub_1C713B0(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    sub_1C713B0(&Method_BattleAttack___c___ctor_b__11_0__);
    sub_1C713B0(&Method_BattleAttack___c___ctor_b__11_1__);
    sub_1C713B0(&BattleAttack___c_TypeInfo);
    byte_4CC9AF7 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._LogicArray_k__BackingField,
    (int32_t)logicArray,
    v5,
    v6,
    v7,
    v8,
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
    _9__11_0 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(_9__11_0, v14, Method_BattleAttack___c___ctor_b__11_0__, 0);
    static_fields = BattleAttack___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0,
      (int32_t)_9__11_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = AttackedInAction_k__BackingField
      | BasicHelper__Any_Int32Enum__51593372(
          (System_Int32Enum_array *)logicArray,
          (System_Func_T__bool__o *)_9__11_0,
          (const MethodInfo_313409C *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v22;
  v23 = BattleAttack___c_TypeInfo;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v23 = BattleAttack___c_TypeInfo;
  }
  _9__11_1 = (System_Func_T__TResult__o *)v23->static_fields->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = BattleAttack___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__11_1 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(_9__11_1, v25, Method_BattleAttack___c___ctor_b__11_1__, 0);
    v26 = BattleAttack___c_TypeInfo->static_fields;
    v26->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v26->__9__11_1, (int32_t)_9__11_1, v27, v28, v29, v30, v31, v32);
  }
  if ( BasicHelper__Any_Int32Enum__51593372(
         (System_Int32Enum_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_313409C *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v33 = 2;
  }
  else
  {
    v33 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v33 | v22;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._LogicArray_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._LogicArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleAttack___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC9AF8 & 1) == 0 )
  {
    sub_1C713B0(&BattleAttack___c_TypeInfo);
    byte_4CC9AF8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BattleAttack___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleAttack___c_TypeInfo->static_fields->__9 = (struct BattleAttack___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattleAttack___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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