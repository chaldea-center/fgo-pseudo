void __fastcall BattleCommandParamComponent___ctor(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCommandParamComponent__resetComboGuid(
        BattleCommandParamComponent_o *this,
        const MethodInfo *method)
{
  BattleCommandParamComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *yakuobj; // x8
  unsigned __int64 i; // x21
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x0

  v2 = this;
  if ( (byte_42114AF & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42114AF = 1;
  }
  yakuobj = v2->fields.yakuobj;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      max_length = yakuobj->max_length;
      if ( (__int64)i >= (int)max_length )
        break;
      if ( i >= max_length )
      {
        v7 = sub_B0D9A8(this);
        sub_B0D948(v7, 0LL);
      }
      v6 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v6, 0LL);
      yakuobj = v2->fields.yakuobj;
      if ( !yakuobj )
        sub_B0D97C(this);
    }
  }
}


void __fastcall BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_42114AD & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42114AD = 1;
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
    UnityEngine_Object__Destroy_34935276(v4, 0LL);
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
  UnityEngine_GameObject_o *Object_18711800; // x0
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v15; // x8
  int32_t v16; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  UnityEngine_GameObject_o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_42114B0 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18298/*"effect/ef_cardcombo_u2"*/, *(_QWORD *)&index);
    sub_B0D8A4(&StringLiteral_18299/*"effect/ef_cardcombo_u3"*/, v7);
    sub_B0D8A4(&StringLiteral_18297/*"effect/ef_cardcombo_3a"*/, v8);
    sub_B0D8A4(&StringLiteral_18300/*"effect/ef_cardcombo_ua"*/, v9);
    sub_B0D8A4(&StringLiteral_18296/*"effect/ef_cardcombo_2a"*/, v10);
    byte_42114B0 = 1;
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
        v15 = &StringLiteral_18298/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v15 = &StringLiteral_18299/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v15 = &StringLiteral_18300/*"effect/ef_cardcombo_ua"*/;
    }
  }
  else
  {
    if ( max_length <= index )
      goto LABEL_27;
    if ( !sameflg->m_Items[index + 4] )
      return;
    v16 = combo->fields.samecount;
    if ( v16 == 2 )
    {
      v15 = &StringLiteral_18296/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v16 != 3 )
        return;
      v15 = &StringLiteral_18297/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v15 )
  {
    yakuobj = this->fields.yakuobj;
    Object_18711800 = BaseMonoBehaviour__createObject_18711800(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v15,
                        this->fields.YakuTr,
                        0LL,
                        0LL);
    if ( yakuobj )
    {
      v18 = Object_18711800;
      if ( Object_18711800 )
      {
        Object_18711800 = (UnityEngine_GameObject_o *)sub_B0D964(Object_18711800, yakuobj->obj.klass->_1.element_class);
        if ( !Object_18711800 )
        {
          v20 = sub_B0D99C();
          sub_B0D948(v20, 0LL);
        }
      }
      if ( yakuobj->max_length )
      {
        yakuobj->m_Items[0] = v18;
        sub_B0D840(yakuobj->m_Items, v18);
        return;
      }
LABEL_27:
      v19 = sub_B0D9A8(Object_18711800);
      sub_B0D948(v19, 0LL);
    }
LABEL_26:
    sub_B0D97C(Object_18711800);
  }
}


void __fastcall BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v5; // x0
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_array *v7; // x8
  struct UnityEngine_GameObject_array **p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x0

  if ( (byte_42114AC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42114AC = 1;
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
    v6 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v6, 0LL);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = &this->fields.yakuobj;
  v7 = yakuobj;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      max_length = v7->max_length;
      if ( (__int64)i >= (int)max_length )
        break;
      if ( i >= max_length )
      {
        v14 = sub_B0D9A8(v5);
        sub_B0D948(v14, 0LL);
      }
      v12 = (UnityEngine_Object_o *)v7->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v12, 0LL);
      v7 = *p_yakuobj;
      if ( !*p_yakuobj )
        sub_B0D97C(v5);
    }
  }
  v13 = sub_B0D8BC(UnityEngine_GameObject___TypeInfo, 2LL);
  *p_yakuobj = (struct UnityEngine_GameObject_array *)v13;
  sub_B0D840(p_yakuobj, v13);
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
  struct UnityEngine_GameObject_o *Object_18711800; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42114AE & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&count);
    sub_B0D8A4(&StringLiteral_18302/*"effect/ef_command_{0:00}"*/, v5);
    byte_42114AE = 1;
  }
  v9 = count;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_18302/*"effect/ef_command_{0:00}"*/, v6, 0LL);
  Object_18711800 = BaseMonoBehaviour__createObject_18711800(
                      (BaseMonoBehaviour_o *)this,
                      v7,
                      this->fields.NumberTr,
                      0LL,
                      0LL);
  this->fields.numberobj = Object_18711800;
  sub_B0D840(&this->fields.numberobj, Object_18711800);
}