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
  if ( (byte_4A511BA & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A511BA = 1;
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
        sub_1B8661C(this, method);
      v6 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69356292(v6, 0LL);
      yakuobj = v2->fields.yakuobj;
      if ( !yakuobj )
        sub_1B86614(this, method);
    }
  }
}


void __fastcall BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4A511B8 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A511B8 = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v4, 0LL);
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
  UnityEngine_GameObject_o *Object_39198864; // x0
  __int64 v12; // x1
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v16; // x8
  int32_t v17; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4A511BB & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_18658/*"effect/ef_cardcombo_u2"*/, *(_QWORD *)&index);
    sub_1B863B8(&StringLiteral_18659/*"effect/ef_cardcombo_u3"*/, v7);
    sub_1B863B8(&StringLiteral_18657/*"effect/ef_cardcombo_3a"*/, v8);
    sub_1B863B8(&StringLiteral_18660/*"effect/ef_cardcombo_ua"*/, v9);
    sub_1B863B8(&StringLiteral_18656/*"effect/ef_cardcombo_2a"*/, v10);
    byte_4A511BB = 1;
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
        v16 = &StringLiteral_18658/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v16 = &StringLiteral_18659/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v16 = &StringLiteral_18660/*"effect/ef_cardcombo_ua"*/;
    }
  }
  else
  {
    if ( max_length <= index )
      goto LABEL_25;
    if ( !sameflg->m_Items[index + 4] )
      return;
    v17 = combo->fields.samecount;
    if ( v17 == 2 )
    {
      v16 = &StringLiteral_18656/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v17 != 3 )
        return;
      v16 = &StringLiteral_18657/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v16 )
  {
    yakuobj = this->fields.yakuobj;
    Object_39198864 = BaseMonoBehaviour__createObject_39198864(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v16,
                        this->fields.YakuTr,
                        0LL,
                        0LL);
    if ( yakuobj )
    {
      if ( yakuobj->max_length )
      {
        yakuobj->m_Items[0] = Object_39198864;
        sub_1B8635C((CGThumbnailListItem_o *)yakuobj->m_Items, (int32_t)Object_39198864, v19, v20);
        return;
      }
LABEL_25:
      sub_1B8661C(Object_39198864, v12);
    }
LABEL_24:
    sub_1B86614(Object_39198864, v12);
  }
}


void __fastcall BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
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

  if ( (byte_4A511B7 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_GameObject___TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A511B7 = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL);
  if ( v5 )
  {
    v7 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v7, 0LL);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = (CGThumbnailListItem_o *)&this->fields.yakuobj;
  p_klass = &yakuobj->obj.klass;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      v12 = *((unsigned int *)p_klass + 6);
      if ( (__int64)i >= (int)v12 )
        break;
      if ( i >= v12 )
        sub_1B8661C(v5, v6);
      v13 = (UnityEngine_Object_o *)p_klass[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69356292(v13, 0LL);
      p_klass = &p_yakuobj->klass->_1.image;
      if ( !p_yakuobj->klass )
        sub_1B86614(v5, v6);
    }
  }
  v14 = sub_1B86460(UnityEngine_GameObject___TypeInfo, 2LL);
  p_yakuobj->klass = (CGThumbnailListItem_c *)v14;
  sub_1B8635C(p_yakuobj, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandParamComponent__setNo(
        BattleCommandParamComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  struct UnityEngine_GameObject_o *Object_39198864; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A511B9 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&count);
    sub_1B863B8(&StringLiteral_18662/*"effect/ef_command_{0:00}"*/, v7);
    byte_4A511B9 = 1;
  }
  v13 = count;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_18662/*"effect/ef_command_{0:00}"*/, v8, 0LL);
  Object_39198864 = BaseMonoBehaviour__createObject_39198864(
                      (BaseMonoBehaviour_o *)this,
                      v9,
                      this->fields.NumberTr,
                      0LL,
                      0LL);
  this->fields.numberobj = Object_39198864;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.numberobj, (int32_t)Object_39198864, v11, v12);
}