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
  if ( (byte_4C00371 & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00371 = 1;
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
        sub_1C2E390(this, method);
      v6 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70989720(v6, 0LL);
      yakuobj = v2->fields.yakuobj;
      if ( !yakuobj )
        sub_1C2E388(this, method);
    }
  }
}


void __fastcall BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *numberobj; // x20
  UnityEngine_Object_o *v4; // x19

  if ( (byte_4C0036F & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C0036F = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v4, 0LL);
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
  UnityEngine_GameObject_o *Object_39556320; // x0
  __int64 v12; // x1
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v16; // x8
  int32_t v17; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4C00372 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_19222/*"effect/ef_cardcombo_u2"*/, *(_QWORD *)&index);
    sub_1C2E12C(&StringLiteral_19223/*"effect/ef_cardcombo_u3"*/, v7);
    sub_1C2E12C(&StringLiteral_19221/*"effect/ef_cardcombo_3a"*/, v8);
    sub_1C2E12C(&StringLiteral_19224/*"effect/ef_cardcombo_ua"*/, v9);
    sub_1C2E12C(&StringLiteral_19220/*"effect/ef_cardcombo_2a"*/, v10);
    byte_4C00372 = 1;
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
        v16 = &StringLiteral_19222/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v16 = &StringLiteral_19223/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v16 = &StringLiteral_19224/*"effect/ef_cardcombo_ua"*/;
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
      v16 = &StringLiteral_19220/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v17 != 3 )
        return;
      v16 = &StringLiteral_19221/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v16 )
  {
    yakuobj = this->fields.yakuobj;
    Object_39556320 = BaseMonoBehaviour__createObject_39556320(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v16,
                        this->fields.YakuTr,
                        0LL,
                        0LL);
    if ( yakuobj )
    {
      if ( yakuobj->max_length )
      {
        yakuobj->m_Items[0] = Object_39556320;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)yakuobj->m_Items,
          (int64_t)Object_39556320,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        return;
      }
LABEL_25:
      sub_1C2E390(Object_39556320, v12);
    }
LABEL_24:
    sub_1C2E388(Object_39556320, v12);
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
  PartyOrganizationUtility_o *p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 v12; // x9
  UnityEngine_Object_o *v13; // x20
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4C0036E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_GameObject___TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4C0036E = 1;
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
    UnityEngine_Object__Destroy_70989720(v7, 0LL);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = (PartyOrganizationUtility_o *)&this->fields.yakuobj;
  p_klass = &yakuobj->obj.klass;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      v12 = *((unsigned int *)p_klass + 6);
      if ( (__int64)i >= (int)v12 )
        break;
      if ( i >= v12 )
        sub_1C2E390(v5, v6);
      v13 = (UnityEngine_Object_o *)p_klass[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70989720(v13, 0LL);
      p_klass = &p_yakuobj->klass->_1.image;
      if ( !p_yakuobj->klass )
        sub_1C2E388(v5, v6);
    }
  }
  v14 = sub_1C2E1D4(UnityEngine_GameObject___TypeInfo, 2LL);
  p_yakuobj->klass = (PartyOrganizationUtility_c *)v14;
  sub_1C2E0D0(p_yakuobj, v14, v15, v16, v17, v18, v19, v20);
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
  struct UnityEngine_GameObject_o *Object_39556320; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C00370 & 1) == 0 )
  {
    sub_1C2E12C(&int_TypeInfo, *(_QWORD *)&count);
    sub_1C2E12C(&StringLiteral_19226/*"effect/ef_command_{0:00}"*/, v7);
    byte_4C00370 = 1;
  }
  v17 = count;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_19226/*"effect/ef_command_{0:00}"*/, v8, 0LL);
  Object_39556320 = BaseMonoBehaviour__createObject_39556320(
                      (BaseMonoBehaviour_o *)this,
                      v9,
                      this->fields.NumberTr,
                      0LL,
                      0LL);
  this->fields.numberobj = Object_39556320;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.numberobj,
    (int64_t)Object_39556320,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}