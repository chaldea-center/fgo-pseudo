void BattleAttack___ctor(BattleAttack_o *this, BattleLogic_LOGICTYPE_array *logicArray, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  BattleAttack___c_c *v12; // x0
  int32_t AttackedInAction_k__BackingField; // w25
  struct BattleAttack___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__11_0; // x21
  Il2CppObject *v16; // x22
  struct BattleAttack___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x1
  bool v25; // w8
  BattleAttack___c_c *v26; // x0
  int v27; // w9
  int32_t v28; // w25
  struct BattleAttack___c_StaticFields *v29; // x8
  System_Func_T__TResult__o *_9__11_1; // x21
  Il2CppObject *v31; // x22
  struct BattleAttack___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int v39; // w8

  if ( (byte_5973115 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
    sub_2213A60(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    sub_2213A60(&Method_BattleAttack___c___ctor_b__11_0__);
    sub_2213A60(&Method_BattleAttack___c___ctor_b__11_1__);
    sub_2213A60(&BattleAttack___c_TypeInfo);
    byte_5973115 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._LogicArray_k__BackingField,
    (int32_t)logicArray,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v12 = BattleAttack___c_TypeInfo;
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  if ( !*(&BattleAttack___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo, v11);
    v12 = BattleAttack___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__11_0 = (System_Func_T__TResult__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v11);
      static_fields = BattleAttack___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(_9__11_0, v16, Method_BattleAttack___c___ctor_b__11_0__, 0);
    v17 = BattleAttack___c_TypeInfo->static_fields;
    v17->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__11_0, (int32_t)_9__11_0, v18, v19, v20, v21, v22, v23);
  }
  v25 = BasicHelper__Any_Int32Enum__58784936(
          (System_Int32Enum_array *)logicArray,
          (System_Func_T__bool__o *)_9__11_0,
          (const MethodInfo_380FCA8 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  v26 = BattleAttack___c_TypeInfo;
  v27 = *(&BattleAttack___c_TypeInfo->_2.cctor_finished + 1);
  v28 = AttackedInAction_k__BackingField | v25;
  this->fields._AttackedInAction_k__BackingField = v28;
  if ( !v27 )
  {
    j_il2cpp_runtime_class_init_0(v26, v24);
    v26 = BattleAttack___c_TypeInfo;
  }
  v29 = v26->static_fields;
  _9__11_1 = (System_Func_T__TResult__o *)v29->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v24);
      v29 = BattleAttack___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v29->__9;
    _9__11_1 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(_9__11_1, v31, Method_BattleAttack___c___ctor_b__11_1__, 0);
    v32 = BattleAttack___c_TypeInfo->static_fields;
    v32->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v32->__9__11_1, (int32_t)_9__11_1, v33, v34, v35, v36, v37, v38);
  }
  if ( BasicHelper__Any_Int32Enum__58784936(
         (System_Int32Enum_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_380FCA8 *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v39 = 2;
  }
  else
  {
    v39 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v39 | v28;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._LogicArray_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._LogicArray_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleAttack___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973116 & 1) == 0 )
  {
    sub_2213A60(&BattleAttack___c_TypeInfo);
    byte_5973116 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleAttack___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleAttack___c_TypeInfo->static_fields->__9 = (struct BattleAttack___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleAttack___c_TypeInfo->static_fields,
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