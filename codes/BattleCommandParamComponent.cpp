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

  v2 = this;
  if ( (byte_4A5DB07 & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DB07 = 1;
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
        sub_1B88814(this, method);
      v6 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v6, 0LL);
      yakuobj = v2->fields.yakuobj;
      if ( !yakuobj )
        sub_1B8880C(this, method);
    }
  }
}


void __fastcall BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4A5DB05 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DB05 = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v4, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandParamComponent__setComboGuid(
        BattleCommandParamComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object_38240928; // x0
  __int64 v8; // x1
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v12; // x8
  int32_t v13; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A5DB08 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18888/*"effect/ef_cardcombo_u2"*/);
    sub_1B885B0(&StringLiteral_18889/*"effect/ef_cardcombo_u3"*/);
    sub_1B885B0(&StringLiteral_18887/*"effect/ef_cardcombo_3a"*/);
    sub_1B885B0(&StringLiteral_18890/*"effect/ef_cardcombo_ua"*/);
    sub_1B885B0(&StringLiteral_18886/*"effect/ef_cardcombo_2a"*/);
    byte_4A5DB08 = 1;
  }
  BattleCommandParamComponent__resetComboGuid(this, *(const MethodInfo **)&index);
  if ( !combo )
    goto LABEL_24;
  sameflg = combo->fields.sameflg;
  if ( !sameflg )
    goto LABEL_24;
  max_length = sameflg->max_length;
  if ( combo->fields.flash )
  {
    if ( max_length <= 2 )
      goto LABEL_25;
    if ( sameflg->m_Items[6] )
    {
      samecount = combo->fields.samecount;
      if ( samecount == 2 )
      {
        v12 = &StringLiteral_18888/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v12 = &StringLiteral_18889/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v12 = &StringLiteral_18890/*"effect/ef_cardcombo_ua"*/;
    }
  }
  else
  {
    if ( max_length <= index )
      goto LABEL_25;
    if ( !sameflg->m_Items[index + 4] )
      return;
    v13 = combo->fields.samecount;
    if ( v13 == 2 )
    {
      v12 = &StringLiteral_18886/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v13 != 3 )
        return;
      v12 = &StringLiteral_18887/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v12 )
  {
    yakuobj = this->fields.yakuobj;
    Object_38240928 = BaseMonoBehaviour__createObject_38240928(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v12,
                        this->fields.YakuTr,
                        0LL,
                        0LL);
    if ( yakuobj )
    {
      if ( yakuobj->max_length )
      {
        yakuobj->m_Items[0] = Object_38240928;
        sub_1B88554((ServantStatusBattleListViewItem_o *)yakuobj->m_Items, (int32_t)Object_38240928, v15, v16);
        return;
      }
LABEL_25:
      sub_1B88814(Object_38240928, v8);
    }
LABEL_24:
    sub_1B8880C(Object_38240928, v8);
  }
}


void __fastcall BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  _QWORD *p_klass; // x8
  ServantStatusBattleListViewItem_o *p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 v11; // x9
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5DB04 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DB04 = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL);
  if ( v4 )
  {
    v6 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v6, 0LL);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = (ServantStatusBattleListViewItem_o *)&this->fields.yakuobj;
  p_klass = &yakuobj->obj.klass;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      v11 = *((unsigned int *)p_klass + 6);
      if ( (__int64)i >= (int)v11 )
        break;
      if ( i >= v11 )
        sub_1B88814(v4, v5);
      v12 = (UnityEngine_Object_o *)p_klass[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v12, 0LL);
      p_klass = &p_yakuobj->klass->_1.image;
      if ( !p_yakuobj->klass )
        sub_1B8880C(v4, v5);
    }
  }
  v13 = sub_1B88658(UnityEngine_GameObject___TypeInfo, 2LL);
  p_yakuobj->klass = (ServantStatusBattleListViewItem_c *)v13;
  sub_1B88554(p_yakuobj, v13, v14, v15);
}


void __fastcall BattleCommandParamComponent__setNo(
        BattleCommandParamComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  struct UnityEngine_GameObject_o *Object_38240928; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5DB06 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_18892/*"effect/ef_command_{0:00}"*/);
    byte_4A5DB06 = 1;
  }
  v12 = count;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4);
  v8 = System_String__Format((System_String_o *)StringLiteral_18892/*"effect/ef_command_{0:00}"*/, v7, 0LL);
  Object_38240928 = BaseMonoBehaviour__createObject_38240928(
                      (BaseMonoBehaviour_o *)this,
                      v8,
                      this->fields.NumberTr,
                      0LL,
                      0LL);
  this->fields.numberobj = Object_38240928;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.numberobj, (int32_t)Object_38240928, v10, v11);
}