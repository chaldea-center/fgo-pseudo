void BattleCommandParamComponent___ctor(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleCommandParamComponent__resetComboGuid(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  BattleCommandParamComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *yakuobj; // x8
  unsigned __int64 i; // x22
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v6; // x20

  v2 = this;
  if ( (byte_593B673 & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B673 = 1;
  }
  yakuobj = v2->fields.yakuobj;
  if ( yakuobj )
  {
    for ( i = 0; ; ++i )
    {
      max_length_low = LODWORD(yakuobj->max_length);
      if ( (__int64)i >= (int)max_length_low )
        break;
      if ( i >= max_length_low )
        sub_21FFED4(this);
      v6 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__Destroy_83246496(v6, 0);
      yakuobj = v2->fields.yakuobj;
      if ( !yakuobj )
        sub_21FFECC(this, method);
    }
  }
}


void BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19

  if ( (byte_593B671 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B671 = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(numberobj, 0, 0) )
  {
    v5 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    UnityEngine_Object__Destroy_83246496(v5, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandParamComponent__setComboGuid(
        BattleCommandParamComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object_48121252; // x0
  __int64 v8; // x1
  struct System_Boolean_array *sameflg; // x8
  int32_t samecount; // w8
  __int64 *v11; // x8
  int32_t v12; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593B674 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19721/*"effect/ef_cardcombo_u2"*/);
    sub_21FFC50(&StringLiteral_19722/*"effect/ef_cardcombo_u3"*/);
    sub_21FFC50(&StringLiteral_19720/*"effect/ef_cardcombo_3a"*/);
    sub_21FFC50(&StringLiteral_19723/*"effect/ef_cardcombo_ua"*/);
    sub_21FFC50(&StringLiteral_19719/*"effect/ef_cardcombo_2a"*/);
    byte_593B674 = 1;
  }
  BattleCommandParamComponent__resetComboGuid(this, *(const MethodInfo **)&index);
  if ( !combo )
    goto LABEL_25;
  sameflg = combo->fields.sameflg;
  if ( combo->fields.flash )
  {
    if ( !sameflg )
      goto LABEL_25;
    if ( LODWORD(sameflg->max_length) <= 2 )
      goto LABEL_26;
    if ( sameflg->m_Items[2] )
    {
      samecount = combo->fields.samecount;
      if ( samecount == 2 )
      {
        v11 = &StringLiteral_19721/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v11 = &StringLiteral_19722/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v11 = &StringLiteral_19723/*"effect/ef_cardcombo_ua"*/;
    }
  }
  else
  {
    if ( !sameflg )
      goto LABEL_25;
    if ( LODWORD(sameflg->max_length) <= index )
      goto LABEL_26;
    if ( !sameflg->m_Items[index] )
      return;
    v12 = combo->fields.samecount;
    if ( v12 == 2 )
    {
      v11 = &StringLiteral_19719/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v12 != 3 )
        return;
      v11 = &StringLiteral_19720/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v11 )
  {
    yakuobj = this->fields.yakuobj;
    Object_48121252 = BaseMonoBehaviour__createObject_48121252(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v11,
                        this->fields.YakuTr,
                        0,
                        0);
    if ( yakuobj )
    {
      if ( LODWORD(yakuobj->max_length) )
      {
        yakuobj->m_Items[0] = Object_48121252;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)yakuobj->m_Items,
          (int32_t)Object_48121252,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19);
        return;
      }
LABEL_26:
      sub_21FFED4(Object_48121252);
    }
LABEL_25:
    sub_21FFECC(Object_48121252, v8);
  }
}


void BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  _QWORD *p_klass; // x8
  MissionNaviTransitionBoardItem_o *p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 v11; // x9
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593B670 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B670 = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(numberobj, 0, 0);
  if ( v4 )
  {
    v6 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_83246496(v6, 0);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = (MissionNaviTransitionBoardItem_o *)&this->fields.yakuobj;
  p_klass = &yakuobj->obj.klass;
  if ( yakuobj )
  {
    for ( i = 0; ; ++i )
    {
      v11 = *((unsigned int *)p_klass + 6);
      if ( (__int64)i >= (int)v11 )
        break;
      if ( i >= v11 )
        sub_21FFED4(v4);
      v12 = (UnityEngine_Object_o *)p_klass[i + 4];
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
      UnityEngine_Object__Destroy_83246496(v12, 0);
      p_klass = &p_yakuobj->klass->_1.image;
      if ( !p_yakuobj->klass )
        sub_21FFECC(v4, v5);
    }
  }
  v13 = sub_21FFD10(UnityEngine_GameObject___TypeInfo, 2);
  p_yakuobj->klass = (MissionNaviTransitionBoardItem_c *)v13;
  sub_21FFBF4(p_yakuobj, v13, v14, v15, v16, v17, v18, v19);
}


void BattleCommandParamComponent__setNo(BattleCommandParamComponent_o *this, int32_t count, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  struct UnityEngine_GameObject_o *Object_48121252; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593B672 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19725/*"effect/ef_command_{0:00}"*/);
    byte_593B672 = 1;
  }
  v14 = count;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v14);
  v6 = System_String__Format((System_String_o *)StringLiteral_19725/*"effect/ef_command_{0:00}"*/, v5, 0);
  Object_48121252 = BaseMonoBehaviour__createObject_48121252(
                      (BaseMonoBehaviour_o *)this,
                      v6,
                      this->fields.NumberTr,
                      0,
                      0);
  this->fields.numberobj = Object_48121252;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.numberobj,
    (int32_t)Object_48121252,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}