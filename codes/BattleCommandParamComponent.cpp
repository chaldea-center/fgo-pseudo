void __fastcall BattleCommandParamComponent___ctor(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCommandParamComponent__resetComboGuid(
        BattleCommandParamComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleCommandParamComponent_o *v4; // x19
  struct UnityEngine_GameObject_array *yakuobj; // x8
  unsigned __int64 i; // x21
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x0

  v4 = this;
  if ( (byte_42E53E2 & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E53E2 = 1;
  }
  yakuobj = v4->fields.yakuobj;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      max_length = yakuobj->max_length;
      if ( (__int64)i >= (int)max_length )
        break;
      if ( i >= max_length )
      {
        v10 = sub_B5D6C8(this);
        sub_B5D668(v10, 0LL);
      }
      v8 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v8, 0LL);
      yakuobj = v4->fields.yakuobj;
      if ( !yakuobj )
        sub_B5D69C(this, v9);
    }
  }
}


void __fastcall BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v6; // x19

  if ( (byte_42E53E0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E53E0 = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v6, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandParamComponent__setComboGuid(
        BattleCommandParamComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  UnityEngine_GameObject_o *Object_21082944; // x0
  __int64 v20; // x1
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v24; // x8
  int32_t v25; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  UnityEngine_GameObject_o *v27; // x19
  __int64 v28; // x0
  __int64 v29; // x0

  if ( (byte_42E53E3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18470/*"effect/ef_cardcombo_u2"*/, index, (_DWORD)combo, method);
    sub_B5D5C4(&StringLiteral_18471/*"effect/ef_cardcombo_u3"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_18469/*"effect/ef_cardcombo_3a"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_18472/*"effect/ef_cardcombo_ua"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_18468/*"effect/ef_cardcombo_2a"*/, v16, v17, v18);
    byte_42E53E3 = 1;
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
        v24 = &StringLiteral_18470/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v24 = &StringLiteral_18471/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v24 = &StringLiteral_18472/*"effect/ef_cardcombo_ua"*/;
    }
  }
  else
  {
    if ( max_length <= index )
      goto LABEL_27;
    if ( !sameflg->m_Items[index + 4] )
      return;
    v25 = combo->fields.samecount;
    if ( v25 == 2 )
    {
      v24 = &StringLiteral_18468/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v25 != 3 )
        return;
      v24 = &StringLiteral_18469/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v24 )
  {
    yakuobj = this->fields.yakuobj;
    Object_21082944 = BaseMonoBehaviour__createObject_21082944(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v24,
                        this->fields.YakuTr,
                        0LL,
                        0LL);
    if ( yakuobj )
    {
      v27 = Object_21082944;
      if ( Object_21082944 )
      {
        Object_21082944 = (UnityEngine_GameObject_o *)sub_B5D684(Object_21082944, yakuobj->obj.klass->_1.element_class);
        if ( !Object_21082944 )
        {
          v29 = sub_B5D6BC();
          sub_B5D668(v29, 0LL);
        }
      }
      if ( yakuobj->max_length )
      {
        yakuobj->m_Items[0] = v27;
        sub_B5D560(yakuobj->m_Items);
        return;
      }
LABEL_27:
      v28 = sub_B5D6C8(Object_21082944);
      sub_B5D668(v28, 0LL);
    }
LABEL_26:
    sub_B5D69C(Object_21082944, v20);
  }
}


void __fastcall BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v9; // x0
  UnityEngine_Object_o *v10; // x20
  struct UnityEngine_GameObject_array *v11; // x8
  struct UnityEngine_GameObject_array **p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x0

  if ( (byte_42E53DF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E53DF = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL);
  if ( v9 )
  {
    v10 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v10, 0LL);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = &this->fields.yakuobj;
  v11 = yakuobj;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      max_length = v11->max_length;
      if ( (__int64)i >= (int)max_length )
        break;
      if ( i >= max_length )
      {
        v18 = sub_B5D6C8(v9);
        sub_B5D668(v18, 0LL);
      }
      v16 = (UnityEngine_Object_o *)v11->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v16, 0LL);
      v11 = *p_yakuobj;
      if ( !*p_yakuobj )
        sub_B5D69C(v9, v17);
    }
  }
  *p_yakuobj = (struct UnityEngine_GameObject_array *)sub_B5D5DC(UnityEngine_GameObject___TypeInfo, 2LL);
  sub_B5D560(p_yakuobj);
}


void __fastcall BattleCommandParamComponent__setNo(
        BattleCommandParamComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E53E1 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, count, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_18474/*"effect/ef_command_{0:00}"*/, v6, v7, v8);
    byte_42E53E1 = 1;
  }
  v11 = count;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = System_String__Format((System_String_o *)StringLiteral_18474/*"effect/ef_command_{0:00}"*/, v9, 0LL);
  this->fields.numberobj = BaseMonoBehaviour__createObject_21082944(
                             (BaseMonoBehaviour_o *)this,
                             v10,
                             this->fields.NumberTr,
                             0LL,
                             0LL);
  sub_B5D560(&this->fields.numberobj);
}