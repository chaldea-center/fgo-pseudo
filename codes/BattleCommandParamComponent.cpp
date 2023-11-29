void __fastcall BattleCommandParamComponent___ctor(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCommandParamComponent__resetComboGuid(
        BattleCommandParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandParamComponent_o *v3; // x19
  struct UnityEngine_GameObject_array *yakuobj; // x8
  unsigned __int64 i; // x21
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v7; // x20

  v3 = this;
  if ( (byte_40F69E2 & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F69E2 = 1;
  }
  yakuobj = v3->fields.yakuobj;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      max_length = yakuobj->max_length;
      if ( (__int64)i >= (int)max_length )
        break;
      if ( i >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v7 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v7, 0LL);
      yakuobj = v3->fields.yakuobj;
      if ( !yakuobj )
        sub_B170D4();
    }
  }
}


void __fastcall BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_40F69E0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F69E0 = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v4, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandParamComponent__setComboGuid(
        BattleCommandParamComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *Object_19257936; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v17; // x8
  int32_t v18; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  UnityEngine_GameObject_o *v20; // x19

  if ( (byte_40F69E3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18173, *(_QWORD *)&index);
    sub_B16FFC(&StringLiteral_18174, v7);
    sub_B16FFC(&StringLiteral_18172, v8);
    sub_B16FFC(&StringLiteral_18175, v9);
    sub_B16FFC(&StringLiteral_18171, v10);
    byte_40F69E3 = 1;
  }
  BattleCommandParamComponent__resetComboGuid(this, *(const MethodInfo **)&index);
  if ( !combo )
    goto LABEL_26;
  sameflg = combo->fields.sameflg;
  if ( !sameflg )
    goto LABEL_26;
  max_length = sameflg->max_length;
  if ( combo->fields.flash )
  {
    if ( max_length <= 2 )
      goto LABEL_27;
    if ( sameflg->m_Items[6] )
    {
      samecount = combo->fields.samecount;
      if ( samecount == 2 )
      {
        v17 = &StringLiteral_18173;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v17 = &StringLiteral_18174;
      }
    }
    else
    {
      v17 = &StringLiteral_18175;
    }
  }
  else
  {
    if ( max_length <= index )
      goto LABEL_27;
    if ( !sameflg->m_Items[index + 4] )
      return;
    v18 = combo->fields.samecount;
    if ( v18 == 2 )
    {
      v17 = &StringLiteral_18171;
    }
    else
    {
      if ( v18 != 3 )
        return;
      v17 = &StringLiteral_18172;
    }
  }
  if ( *v17 )
  {
    yakuobj = this->fields.yakuobj;
    Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v17,
                        this->fields.YakuTr,
                        0LL,
                        0LL);
    if ( yakuobj )
    {
      v20 = Object_19257936;
      if ( Object_19257936 )
      {
        Object_19257936 = (UnityEngine_GameObject_o *)sub_B170BC(Object_19257936, yakuobj->obj.klass->_1.element_class);
        if ( !Object_19257936 )
        {
          sub_B170F4();
          sub_B170A0();
        }
      }
      if ( yakuobj->max_length )
      {
        yakuobj->m_Items[0] = v20;
        sub_B16F98(yakuobj->m_Items, v20);
        return;
      }
LABEL_27:
      sub_B17100(Object_19257936, v12, v13);
      sub_B170A0();
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *v8; // x20
  struct UnityEngine_GameObject_array *v9; // x8
  struct UnityEngine_GameObject_array **p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x0

  if ( (byte_40F69DF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F69DF = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL);
  if ( v5 )
  {
    v8 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v8, 0LL);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = &this->fields.yakuobj;
  v9 = yakuobj;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      max_length = v9->max_length;
      if ( (__int64)i >= (int)max_length )
        break;
      if ( i >= max_length )
      {
        sub_B17100(v5, v6, v7);
        sub_B170A0();
      }
      v14 = (UnityEngine_Object_o *)v9->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v14, 0LL);
      v9 = *p_yakuobj;
      if ( !*p_yakuobj )
        sub_B170D4();
    }
  }
  v15 = sub_B17014(UnityEngine_GameObject___TypeInfo, 2LL, v7);
  *p_yakuobj = (struct UnityEngine_GameObject_array *)v15;
  sub_B16F98(p_yakuobj, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandParamComponent__setNo(
        BattleCommandParamComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  struct UnityEngine_GameObject_o *Object_19257936; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F69E1 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&count);
    sub_B16FFC(&StringLiteral_18177, v5);
    byte_40F69E1 = 1;
  }
  v9 = count;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_18177, v6, 0LL);
  Object_19257936 = BaseMonoBehaviour__createObject_19257936(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.NumberTr,
                      0LL,
                      0LL);
  this->fields.numberobj = Object_19257936;
  sub_B16F98(&this->fields.numberobj, Object_19257936);
}