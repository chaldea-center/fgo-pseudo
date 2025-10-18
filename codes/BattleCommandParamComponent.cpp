void BattleCommandParamComponent___ctor(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleCommandParamComponent__resetComboGuid(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  BattleCommandParamComponent_o *v2; // x19
  struct UnityEngine_GameObject_array *yakuobj; // x8
  unsigned __int64 i; // x21
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v6; // x20

  v2 = this;
  if ( (byte_4C45EC1 & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45EC1 = 1;
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
        sub_1C372BC(this);
      v6 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v6, 0);
      yakuobj = v2->fields.yakuobj;
      if ( !yakuobj )
        sub_1C372B4(this);
    }
  }
}


void BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C45EBF & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45EBF = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numberobj, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v4, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandParamComponent__setComboGuid(
        BattleCommandParamComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object_41185212; // x0
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v11; // x8
  int32_t v12; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C45EC2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18894/*"effect/ef_cardcombo_u2"*/);
    sub_1C37058(&StringLiteral_18895/*"effect/ef_cardcombo_u3"*/);
    sub_1C37058(&StringLiteral_18893/*"effect/ef_cardcombo_3a"*/);
    sub_1C37058(&StringLiteral_18896/*"effect/ef_cardcombo_ua"*/);
    sub_1C37058(&StringLiteral_18892/*"effect/ef_cardcombo_2a"*/);
    byte_4C45EC2 = 1;
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
    if ( sameflg->m_Items[2] )
    {
      samecount = combo->fields.samecount;
      if ( samecount == 2 )
      {
        v11 = &StringLiteral_18894/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v11 = &StringLiteral_18895/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v11 = &StringLiteral_18896/*"effect/ef_cardcombo_ua"*/;
    }
  }
  else
  {
    if ( max_length <= index )
      goto LABEL_25;
    if ( !sameflg->m_Items[index] )
      return;
    v12 = combo->fields.samecount;
    if ( v12 == 2 )
    {
      v11 = &StringLiteral_18892/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v12 != 3 )
        return;
      v11 = &StringLiteral_18893/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v11 )
  {
    yakuobj = this->fields.yakuobj;
    Object_41185212 = BaseMonoBehaviour__createObject_41185212(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v11,
                        this->fields.YakuTr,
                        0,
                        0);
    if ( yakuobj )
    {
      if ( LODWORD(yakuobj->max_length) )
      {
        yakuobj->m_Items[0] = Object_41185212;
        sub_1C36FFC((CGThumbnailListItem_o *)yakuobj->m_Items, (int32_t)Object_41185212, v14, v15);
        return;
      }
LABEL_25:
      sub_1C372BC(Object_41185212);
    }
LABEL_24:
    sub_1C372B4(Object_41185212);
  }
}


void BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v4; // x0
  UnityEngine_Object_o *v5; // x20
  _QWORD *p_klass; // x8
  CGThumbnailListItem_o *p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 v10; // x9
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C45EBE & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_GameObject___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45EBE = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(numberobj, 0, 0);
  if ( v4 )
  {
    v5 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v5, 0);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = (CGThumbnailListItem_o *)&this->fields.yakuobj;
  p_klass = &yakuobj->obj.klass;
  if ( yakuobj )
  {
    for ( i = 0; ; ++i )
    {
      v10 = *((unsigned int *)p_klass + 6);
      if ( (__int64)i >= (int)v10 )
        break;
      if ( i >= v10 )
        sub_1C372BC(v4);
      v11 = (UnityEngine_Object_o *)p_klass[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(v11, 0);
      p_klass = &p_yakuobj->klass->_1.image;
      if ( !p_yakuobj->klass )
        sub_1C372B4(v4);
    }
  }
  v12 = sub_1C37100(UnityEngine_GameObject___TypeInfo, 2);
  p_yakuobj->klass = (CGThumbnailListItem_c *)v12;
  sub_1C36FFC(p_yakuobj, v12, v13, v14);
}


void BattleCommandParamComponent__setNo(BattleCommandParamComponent_o *this, int32_t count, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  struct UnityEngine_GameObject_o *Object_41185212; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C45EC0 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_18898/*"effect/ef_command_{0:00}"*/);
    byte_4C45EC0 = 1;
  }
  v15 = count;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method, v3, v4, v5, v6, v7);
  v11 = System_String__Format((System_String_o *)StringLiteral_18898/*"effect/ef_command_{0:00}"*/, v10, 0);
  Object_41185212 = BaseMonoBehaviour__createObject_41185212(
                      (BaseMonoBehaviour_o *)this,
                      v11,
                      this->fields.NumberTr,
                      0,
                      0);
  this->fields.numberobj = Object_41185212;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.numberobj, (int32_t)Object_41185212, v13, v14);
}