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
  __int64 v7; // x1

  v2 = this;
  if ( (byte_4D339A7 & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D339A7 = 1;
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
        sub_1C93D34(this);
      v6 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v6, 0);
      yakuobj = v2->fields.yakuobj;
      if ( !yakuobj )
        sub_1C93D2C(this, v7);
    }
  }
}


void BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4D339A5 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D339A5 = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numberobj, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v4, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleCommandParamComponent__setComboGuid(
        BattleCommandParamComponent_o *this,
        int32_t index,
        BattleComboData_o *combo,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object_41910396; // x0
  __int64 v8; // x1
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v12; // x8
  int32_t v13; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D339A8 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19071/*"effect/ef_cardcombo_u2"*/);
    sub_1C93AD4(&StringLiteral_19072/*"effect/ef_cardcombo_u3"*/);
    sub_1C93AD4(&StringLiteral_19070/*"effect/ef_cardcombo_3a"*/);
    sub_1C93AD4(&StringLiteral_19073/*"effect/ef_cardcombo_ua"*/);
    sub_1C93AD4(&StringLiteral_19069/*"effect/ef_cardcombo_2a"*/);
    byte_4D339A8 = 1;
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
        v12 = &StringLiteral_19071/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v12 = &StringLiteral_19072/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v12 = &StringLiteral_19073/*"effect/ef_cardcombo_ua"*/;
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
      v12 = &StringLiteral_19069/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v13 != 3 )
        return;
      v12 = &StringLiteral_19070/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v12 )
  {
    yakuobj = this->fields.yakuobj;
    Object_41910396 = BaseMonoBehaviour__createObject_41910396(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v12,
                        this->fields.YakuTr,
                        0,
                        0);
    if ( yakuobj )
    {
      if ( LODWORD(yakuobj->max_length) )
      {
        yakuobj->m_Items[0] = Object_41910396;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)yakuobj->m_Items,
          (int32_t)Object_41910396,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
        return;
      }
LABEL_25:
      sub_1C93D34(Object_41910396);
    }
LABEL_24:
    sub_1C93D2C(Object_41910396, v8);
  }
}


void BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v4; // x0
  UnityEngine_Object_o *v5; // x20
  _QWORD *p_klass; // x8
  GrandQuestFolderBoardItem_o *p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 v10; // x9
  UnityEngine_Object_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D339A4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_GameObject___TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D339A4 = 1;
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
    UnityEngine_Object__Destroy_72119908(v5, 0);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = (GrandQuestFolderBoardItem_o *)&this->fields.yakuobj;
  p_klass = &yakuobj->obj.klass;
  if ( yakuobj )
  {
    for ( i = 0; ; ++i )
    {
      v10 = *((unsigned int *)p_klass + 6);
      if ( (__int64)i >= (int)v10 )
        break;
      if ( i >= v10 )
        sub_1C93D34(v4);
      v11 = (UnityEngine_Object_o *)p_klass[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v11, 0);
      p_klass = &p_yakuobj->klass->_1.image;
      if ( !p_yakuobj->klass )
        sub_1C93D2C(v4, v12);
    }
  }
  v13 = sub_1C93B7C(UnityEngine_GameObject___TypeInfo, 2);
  p_yakuobj->klass = (GrandQuestFolderBoardItem_c *)v13;
  sub_1C93A78(p_yakuobj, v13, v14, v15, v16, v17, v18, v19);
}


void BattleCommandParamComponent__setNo(BattleCommandParamComponent_o *this, int32_t count, const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  System_String_o *v6; // x0
  struct UnityEngine_GameObject_o *Object_41910396; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D339A6 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_19075/*"effect/ef_command_{0:00}"*/);
    byte_4D339A6 = 1;
  }
  v14 = count;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v6 = System_String__Format((System_String_o *)StringLiteral_19075/*"effect/ef_command_{0:00}"*/, v5, 0);
  Object_41910396 = BaseMonoBehaviour__createObject_41910396(
                      (BaseMonoBehaviour_o *)this,
                      v6,
                      this->fields.NumberTr,
                      0,
                      0);
  this->fields.numberobj = Object_41910396;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.numberobj,
    (int32_t)Object_41910396,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}