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
  if ( (byte_4C59C9E & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59C9E = 1;
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
        sub_1C3E7C8(this, method);
      v6 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v6, 0);
      yakuobj = v2->fields.yakuobj;
      if ( !yakuobj )
        sub_1C3E7C0(this, method);
    }
  }
}


void BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C59C9C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59C9C = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numberobj, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v4, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandParamComponent__setComboGuid(
        BattleCommandParamComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object_41233740; // x0
  __int64 v8; // x1
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v12; // x8
  int32_t v13; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C59C9F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_18912/*"effect/ef_cardcombo_u2"*/);
    sub_1C3E564(&StringLiteral_18913/*"effect/ef_cardcombo_u3"*/);
    sub_1C3E564(&StringLiteral_18911/*"effect/ef_cardcombo_3a"*/);
    sub_1C3E564(&StringLiteral_18914/*"effect/ef_cardcombo_ua"*/);
    sub_1C3E564(&StringLiteral_18910/*"effect/ef_cardcombo_2a"*/);
    byte_4C59C9F = 1;
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
        v12 = &StringLiteral_18912/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v12 = &StringLiteral_18913/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v12 = &StringLiteral_18914/*"effect/ef_cardcombo_ua"*/;
    }
  }
  else
  {
    if ( max_length <= index )
      goto LABEL_25;
    if ( !sameflg->m_Items[index] )
      return;
    v13 = combo->fields.samecount;
    if ( v13 == 2 )
    {
      v12 = &StringLiteral_18910/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v13 != 3 )
        return;
      v12 = &StringLiteral_18911/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v12 )
  {
    yakuobj = this->fields.yakuobj;
    Object_41233740 = BaseMonoBehaviour__createObject_41233740(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v12,
                        this->fields.YakuTr,
                        0,
                        0);
    if ( yakuobj )
    {
      if ( LODWORD(yakuobj->max_length) )
      {
        yakuobj->m_Items[0] = Object_41233740;
        sub_1C3E508((CGThumbnailListItem_o *)yakuobj->m_Items, (int32_t)Object_41233740, v15, v16);
        return;
      }
LABEL_25:
      sub_1C3E7C8(Object_41233740, v8);
    }
LABEL_24:
    sub_1C3E7C0(Object_41233740, v8);
  }
}


void BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  _QWORD *p_klass; // x8
  CGThumbnailListItem_o *p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 v11; // x9
  UnityEngine_Object_o *v12; // x20
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C59C9B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_GameObject___TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59C9B = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(numberobj, 0, 0);
  if ( v4 )
  {
    v6 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v6, 0);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = (CGThumbnailListItem_o *)&this->fields.yakuobj;
  p_klass = &yakuobj->obj.klass;
  if ( yakuobj )
  {
    for ( i = 0; ; ++i )
    {
      v11 = *((unsigned int *)p_klass + 6);
      if ( (__int64)i >= (int)v11 )
        break;
      if ( i >= v11 )
        sub_1C3E7C8(v4, v5);
      v12 = (UnityEngine_Object_o *)p_klass[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v12, 0);
      p_klass = &p_yakuobj->klass->_1.image;
      if ( !p_yakuobj->klass )
        sub_1C3E7C0(v4, v5);
    }
  }
  v13 = sub_1C3E60C(UnityEngine_GameObject___TypeInfo, 2);
  p_yakuobj->klass = (CGThumbnailListItem_c *)v13;
  sub_1C3E508(p_yakuobj, v13, v14, v15);
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
  struct UnityEngine_GameObject_o *Object_41233740; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C59C9D & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_18916/*"effect/ef_command_{0:00}"*/);
    byte_4C59C9D = 1;
  }
  v15 = count;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, method, v3, v4, v5, v6, v7);
  v11 = System_String__Format((System_String_o *)StringLiteral_18916/*"effect/ef_command_{0:00}"*/, v10, 0);
  Object_41233740 = BaseMonoBehaviour__createObject_41233740(
                      (BaseMonoBehaviour_o *)this,
                      v11,
                      this->fields.NumberTr,
                      0,
                      0);
  this->fields.numberobj = Object_41233740;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.numberobj, (int32_t)Object_41233740, v13, v14);
}