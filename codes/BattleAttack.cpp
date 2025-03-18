void __fastcall BattleAttack___ctor(
        BattleAttack_o *this,
        BattleLogic_LOGICTYPE_array *logicArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  BattleAttack___c_c *v15; // x0
  int32_t AttackedInAction_k__BackingField; // w25
  System_Func_T__TResult__o *_9__11_0; // x21
  Il2CppObject *v18; // x22
  struct BattleAttack___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int v26; // w25
  BattleAttack___c_c *v27; // x0
  System_Func_T__TResult__o *_9__11_1; // x21
  Il2CppObject *v29; // x22
  struct BattleAttack___c_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int v37; // w8

  if ( (byte_4C24351 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_BattleLogic_LOGICTYPE___, logicArray);
    sub_1C3B764(&System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo, v5);
    sub_1C3B764(&Method_BattleAttack___c___ctor_b__11_0__, v6);
    sub_1C3B764(&Method_BattleAttack___c___ctor_b__11_1__, v7);
    sub_1C3B764(&BattleAttack___c_TypeInfo, v8);
    byte_4C24351 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._LogicArray_k__BackingField = logicArray;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._LogicArray_k__BackingField,
    (int64_t)logicArray,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = BattleAttack___c_TypeInfo;
  AttackedInAction_k__BackingField = this->fields._AttackedInAction_k__BackingField;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v15 = BattleAttack___c_TypeInfo;
  }
  _9__11_0 = (System_Func_T__TResult__o *)v15->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleAttack___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__11_0 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(_9__11_0, v18, Method_BattleAttack___c___ctor_b__11_0__, 0LL);
    static_fields = BattleAttack___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
      (int64_t)_9__11_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = AttackedInAction_k__BackingField | BasicHelper__Any_Int32Enum__50178620(
                                             (System_Int32Enum_array *)logicArray,
                                             (System_Func_T__bool__o *)_9__11_0,
                                             (const MethodInfo_2FDAA3C *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___);
  this->fields._AttackedInAction_k__BackingField = v26;
  v27 = BattleAttack___c_TypeInfo;
  if ( !BattleAttack___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleAttack___c_TypeInfo);
    v27 = BattleAttack___c_TypeInfo;
  }
  _9__11_1 = (System_Func_T__TResult__o *)v27->static_fields->__9__11_1;
  if ( !_9__11_1 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = BattleAttack___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__11_1 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_BattleLogic_LOGICTYPE__bool__TypeInfo);
    System_Func_Int32Enum__bool____ctor(_9__11_1, v29, Method_BattleAttack___c___ctor_b__11_1__, 0LL);
    v30 = BattleAttack___c_TypeInfo->static_fields;
    v30->__9__11_1 = (struct System_Func_BattleLogic_LOGICTYPE__bool__o *)_9__11_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v30->__9__11_1, (int64_t)_9__11_1, v31, v32, v33, v34, v35, v36);
  }
  if ( BasicHelper__Any_Int32Enum__50178620(
         (System_Int32Enum_array *)logicArray,
         (System_Func_T__bool__o *)_9__11_1,
         (const MethodInfo_2FDAA3C *)Method_BasicHelper_Any_BattleLogic_LOGICTYPE___) )
  {
    v37 = 2;
  }
  else
  {
    v37 = 0;
  }
  this->fields._AttackedInAction_k__BackingField = v37 | v26;
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
  sub_1C3B708(
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C24352 & 1) == 0 )
  {
    sub_1C3B764(&BattleAttack___c_TypeInfo, v1);
    byte_4C24352 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(BattleAttack___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleAttack___c_TypeInfo->static_fields->__9 = (struct BattleAttack___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)BattleAttack___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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