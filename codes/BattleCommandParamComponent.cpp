void BattleCommandParamComponent___ctor(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleCommandParamComponent__resetComboGuid(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandParamComponent_o *v3; // x19
  struct UnityEngine_GameObject_array *yakuobj; // x8
  unsigned __int64 i; // x21
  unsigned __int64 max_length_low; // x9
  UnityEngine_Object_o *v7; // x20

  v3 = this;
  if ( (byte_4C2A1A1 & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A1A1 = 1;
  }
  yakuobj = v3->fields.yakuobj;
  if ( yakuobj )
  {
    for ( i = 0; ; ++i )
    {
      max_length_low = LODWORD(yakuobj->max_length);
      if ( (__int64)i >= (int)max_length_low )
        break;
      if ( i >= max_length_low )
        sub_1C2D6F4(this, method, v2);
      v7 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v7, 0);
      yakuobj = v3->fields.yakuobj;
      if ( !yakuobj )
        sub_1C2D6EC(this, method);
    }
  }
}


void BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C2A19F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A19F = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numberobj, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v4, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandParamComponent__setComboGuid(
        BattleCommandParamComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object_40963840; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v13; // x8
  int32_t v14; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  const MethodInfo *v16; // x3

  if ( (byte_4C2A1A2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18882/*"effect/ef_cardcombo_u2"*/);
    sub_1C2D490(&StringLiteral_18883/*"effect/ef_cardcombo_u3"*/);
    sub_1C2D490(&StringLiteral_18881/*"effect/ef_cardcombo_3a"*/);
    sub_1C2D490(&StringLiteral_18884/*"effect/ef_cardcombo_ua"*/);
    sub_1C2D490(&StringLiteral_18880/*"effect/ef_cardcombo_2a"*/);
    byte_4C2A1A2 = 1;
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
        v13 = &StringLiteral_18882/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v13 = &StringLiteral_18883/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v13 = &StringLiteral_18884/*"effect/ef_cardcombo_ua"*/;
    }
  }
  else
  {
    if ( max_length <= index )
      goto LABEL_25;
    if ( !sameflg->m_Items[index] )
      return;
    v14 = combo->fields.samecount;
    if ( v14 == 2 )
    {
      v13 = &StringLiteral_18880/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v14 != 3 )
        return;
      v13 = &StringLiteral_18881/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v13 )
  {
    yakuobj = this->fields.yakuobj;
    Object_40963840 = BaseMonoBehaviour__createObject_40963840(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v13,
                        this->fields.YakuTr,
                        0,
                        0);
    if ( yakuobj )
    {
      if ( LODWORD(yakuobj->max_length) )
      {
        yakuobj->m_Items[0] = Object_40963840;
        sub_1C2D434((CGThumbnailListItem_o *)yakuobj->m_Items, (int32_t)Object_40963840, v9, v16);
        return;
      }
LABEL_25:
      sub_1C2D6F4(Object_40963840, v8, v9);
    }
LABEL_24:
    sub_1C2D6EC(Object_40963840, v8);
  }
}


void BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x20
  _QWORD *p_klass; // x8
  CGThumbnailListItem_o *p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 v12; // x9
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C2A19E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_GameObject___TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A19E = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(numberobj, 0, 0);
  if ( v4 )
  {
    v7 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v7, 0);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = (CGThumbnailListItem_o *)&this->fields.yakuobj;
  p_klass = &yakuobj->obj.klass;
  if ( yakuobj )
  {
    for ( i = 0; ; ++i )
    {
      v12 = *((unsigned int *)p_klass + 6);
      if ( (__int64)i >= (int)v12 )
        break;
      if ( i >= v12 )
        sub_1C2D6F4(v4, v5, v6);
      v13 = (UnityEngine_Object_o *)p_klass[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v13, 0);
      p_klass = &p_yakuobj->klass->_1.image;
      if ( !p_yakuobj->klass )
        sub_1C2D6EC(v4, v5);
    }
  }
  v14 = sub_1C2D538(UnityEngine_GameObject___TypeInfo, 2);
  p_yakuobj->klass = (CGThumbnailListItem_c *)v14;
  sub_1C2D434(p_yakuobj, v14, v15, v16);
}


void BattleCommandParamComponent__setNo(BattleCommandParamComponent_o *this, int32_t count, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  struct UnityEngine_GameObject_o *Object_40963840; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2A1A0 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_18886/*"effect/ef_command_{0:00}"*/);
    byte_4C2A1A0 = 1;
  }
  v12 = count;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method, v3, v4);
  v8 = System_String__Format((System_String_o *)StringLiteral_18886/*"effect/ef_command_{0:00}"*/, v7, 0);
  Object_40963840 = BaseMonoBehaviour__createObject_40963840(
                      (BaseMonoBehaviour_o *)this,
                      v8,
                      this->fields.NumberTr,
                      0,
                      0);
  this->fields.numberobj = Object_40963840;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.numberobj, (int32_t)Object_40963840, v10, v11);
}