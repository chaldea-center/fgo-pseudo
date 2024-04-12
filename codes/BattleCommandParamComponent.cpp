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
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = this;
  if ( (byte_42ACC9D & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACC9D = 1;
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
        v8 = sub_B52A88(this);
        sub_B52A28(v8, 0LL);
      }
      v6 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v6, 0LL);
      yakuobj = v2->fields.yakuobj;
      if ( !yakuobj )
        sub_B52A5C(this, v7);
    }
  }
}


void __fastcall BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_42ACC9B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACC9B = 1;
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
    UnityEngine_Object__Destroy_35616956(v4, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandParamComponent__setComboGuid(
        BattleCommandParamComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object_19346208; // x0
  __int64 v8; // x1
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v12; // x8
  int32_t v13; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  UnityEngine_GameObject_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_42ACC9E & 1) == 0 )
  {
    sub_B52984(&StringLiteral_18376/*"effect/ef_cardcombo_u2"*/);
    sub_B52984(&StringLiteral_18377/*"effect/ef_cardcombo_u3"*/);
    sub_B52984(&StringLiteral_18375/*"effect/ef_cardcombo_3a"*/);
    sub_B52984(&StringLiteral_18378/*"effect/ef_cardcombo_ua"*/);
    sub_B52984(&StringLiteral_18374/*"effect/ef_cardcombo_2a"*/);
    byte_42ACC9E = 1;
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
        v12 = &StringLiteral_18376/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v12 = &StringLiteral_18377/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v12 = &StringLiteral_18378/*"effect/ef_cardcombo_ua"*/;
    }
  }
  else
  {
    if ( max_length <= index )
      goto LABEL_27;
    if ( !sameflg->m_Items[index + 4] )
      return;
    v13 = combo->fields.samecount;
    if ( v13 == 2 )
    {
      v12 = &StringLiteral_18374/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v13 != 3 )
        return;
      v12 = &StringLiteral_18375/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v12 )
  {
    yakuobj = this->fields.yakuobj;
    Object_19346208 = BaseMonoBehaviour__createObject_19346208(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v12,
                        this->fields.YakuTr,
                        0LL,
                        0LL);
    if ( yakuobj )
    {
      v15 = Object_19346208;
      if ( Object_19346208 )
      {
        Object_19346208 = (UnityEngine_GameObject_o *)sub_B52A44(Object_19346208, yakuobj->obj.klass->_1.element_class);
        if ( !Object_19346208 )
        {
          v17 = sub_B52A7C();
          sub_B52A28(v17, 0LL);
        }
      }
      if ( yakuobj->max_length )
      {
        yakuobj->m_Items[0] = v15;
        sub_B52920(yakuobj->m_Items);
        return;
      }
LABEL_27:
      v16 = sub_B52A88(Object_19346208);
      sub_B52A28(v16, 0LL);
    }
LABEL_26:
    sub_B52A5C(Object_19346208, v8);
  }
}


void __fastcall BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v4; // x0
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_array *v6; // x8
  struct UnityEngine_GameObject_array **p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x0

  if ( (byte_42ACC9A & 1) == 0 )
  {
    sub_B52984(&UnityEngine_GameObject___TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42ACC9A = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL);
  if ( v4 )
  {
    v5 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v5, 0LL);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = &this->fields.yakuobj;
  v6 = yakuobj;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      max_length = v6->max_length;
      if ( (__int64)i >= (int)max_length )
        break;
      if ( i >= max_length )
      {
        v13 = sub_B52A88(v4);
        sub_B52A28(v13, 0LL);
      }
      v11 = (UnityEngine_Object_o *)v6->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v11, 0LL);
      v6 = *p_yakuobj;
      if ( !*p_yakuobj )
        sub_B52A5C(v4, v12);
    }
  }
  *p_yakuobj = (struct UnityEngine_GameObject_array *)sub_B5299C(UnityEngine_GameObject___TypeInfo, 2LL);
  sub_B52920(p_yakuobj);
}


void __fastcall BattleCommandParamComponent__setNo(
        BattleCommandParamComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42ACC9C & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&StringLiteral_18380/*"effect/ef_command_{0:00}"*/);
    byte_42ACC9C = 1;
  }
  v7 = count;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  v6 = System_String__Format((System_String_o *)StringLiteral_18380/*"effect/ef_command_{0:00}"*/, v5, 0LL);
  this->fields.numberobj = BaseMonoBehaviour__createObject_19346208(
                             (BaseMonoBehaviour_o *)this,
                             v6,
                             this->fields.NumberTr,
                             0LL,
                             0LL);
  sub_B52920(&this->fields.numberobj);
}