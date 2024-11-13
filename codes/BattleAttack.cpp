void __fastcall BattleAttack___ctor(
        BattleAttack_o *this,
        BattleLogic_LOGICTYPE_array *logicArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  BattleAttack___c_c *v22; // x0
  int32_t AttackedInAction_k__BackingField; // w25
  System_Func_T__TResult__o *_9__11_0; // x21
  Il2CppObject *v25; // x22
  struct BattleAttack___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  int v36; // w25
  BattleAttack___c_c *v37; // x0
  System_Func_T__TResult__o *_9__11_1; // x21
  Il2CppObject *v39; // x22
  struct BattleAttack___c_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int v47; // w8

  if ( (byte_4B184C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___, logicArray, method);
    sub_1BCA7E0(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleAttack___c___ctor_b__11_0__, v7, v8);
    sub_1BCA7E0(&Method_BattleAttack___c___ctor_b__11_1__, v9, v10);
    sub_1BCA7E0(&BattleAttack___c_TypeInfo, v11, v12);
    byte_4B184C1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._LogicArray_k__BackingField,
    (int64_t)logicArray,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v22 = BattleAttack___c_TypeInfo;
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo, v19);
    v22 = BattleAttack___c_TypeInfo;
  }
  _9__11_0 = (System_Func_T__TResult__o *)v22->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22, v19);
      v22 = BattleAttack___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__11_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo,
                                              v19,
                                              v20,
                                              v21);
    System_Func_Int32Enum__bool____ctor(_9__11_0, v25, Method_BattleAttack___c___ctor_b__11_0__, 0LL);
    static_fields = BattleAttack___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
      (int64_t)_9__11_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v36 = AttackedInAction_k__BackingField | BasicHelper__Any_Int32Enum__49273692(
                                             (System_Int32Enum_array *)logicArray,
                                             (System_Func_T__bool__o *)_9__11_0,
                                             (const MethodInfo_2EFDB5C *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v36;
  v37 = BattleAttack___c_TypeInfo;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo, v33);
    v37 = BattleAttack___c_TypeInfo;
  }
  _9__11_1 = (System_Func_T__TResult__o *)v37->static_fields->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37, v33);
      v37 = BattleAttack___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__11_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo,
                                              v33,
                                              v34,
                                              v35);
    System_Func_Int32Enum__bool____ctor(_9__11_1, v39, Method_BattleAttack___c___ctor_b__11_1__, 0LL);
    v40 = BattleAttack___c_TypeInfo->static_fields;
    v40->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v40->__9__11_1, (int64_t)_9__11_1, v41, v42, v43, v44, v45, v46);
  }
  if ( BasicHelper__Any_Int32Enum__49273692(
         (System_Int32Enum_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_2EFDB5C *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v47 = 2;
  }
  else
  {
    v47 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v47 | v36;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._LogicArray_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._LogicArray_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleAttack___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B184C2 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleAttack___c_TypeInfo, v1, v2);
    byte_4B184C2 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleAttack___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleAttack___c_TypeInfo->static_fields->__9 = (struct BattleAttack___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleAttack___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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