void __fastcall BattleCommandParamComponent___ctor(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleCommandParamComponent__resetComboGuid(
        BattleCommandParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleCommandParamComponent_o *v3; // x19
  struct UnityEngine_GameObject_array *yakuobj; // x8
  unsigned __int64 i; // x21
  unsigned __int64 max_length; // x9
  UnityEngine_Object_o *v7; // x20

  v3 = this;
  if ( (byte_4B18CDF & 1) == 0 )
  {
    this = (BattleCommandParamComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18CDF = 1;
  }
  yakuobj = v3->fields.yakuobj;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      max_length = yakuobj->max_length;
      if ( (__int64)i >= (int)max_length )
        break;
      if ( i >= max_length )
        sub_1BCAA44(this, method);
      v7 = (UnityEngine_Object_o *)yakuobj->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      UnityEngine_Object__Destroy_70154244(v7, 0LL);
      yakuobj = v3->fields.yakuobj;
      if ( !yakuobj )
        sub_1BCAA3C(this, method);
    }
  }
}


void __fastcall BattleCommandParamComponent__resetNo(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *numberobj; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4B18CDD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B18CDD = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_70154244(v6, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_GameObject_o *Object_38952608; // x0
  __int64 v16; // x1
  struct System_Boolean_array *sameflg; // x8
  unsigned int max_length; // w9
  int32_t samecount; // w8
  __int64 *v20; // x8
  int32_t v21; // w8
  struct UnityEngine_GameObject_array *yakuobj; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B18CE0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19082/*"effect/ef_cardcombo_u2"*/, *(_QWORD *)&index, combo);
    sub_1BCA7E0(&StringLiteral_19083/*"effect/ef_cardcombo_u3"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_19081/*"effect/ef_cardcombo_3a"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_19084/*"effect/ef_cardcombo_ua"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_19080/*"effect/ef_cardcombo_2a"*/, v13, v14);
    byte_4B18CE0 = 1;
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
        v20 = &StringLiteral_19082/*"effect/ef_cardcombo_u2"*/;
      }
      else
      {
        if ( samecount != 3 )
          return;
        v20 = &StringLiteral_19083/*"effect/ef_cardcombo_u3"*/;
      }
    }
    else
    {
      v20 = &StringLiteral_19084/*"effect/ef_cardcombo_ua"*/;
    }
  }
  else
  {
    if ( max_length <= index )
      goto LABEL_25;
    if ( !sameflg->m_Items[index + 4] )
      return;
    v21 = combo->fields.samecount;
    if ( v21 == 2 )
    {
      v20 = &StringLiteral_19080/*"effect/ef_cardcombo_2a"*/;
    }
    else
    {
      if ( v21 != 3 )
        return;
      v20 = &StringLiteral_19081/*"effect/ef_cardcombo_3a"*/;
    }
  }
  if ( *v20 )
  {
    yakuobj = this->fields.yakuobj;
    Object_38952608 = BaseMonoBehaviour__createObject_38952608(
                        (BaseMonoBehaviour_o *)this,
                        (System_String_o *)*v20,
                        this->fields.YakuTr,
                        0LL,
                        0LL);
    if ( yakuobj )
    {
      if ( yakuobj->max_length )
      {
        yakuobj->m_Items[0] = Object_38952608;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)yakuobj->m_Items,
          (int64_t)Object_38952608,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28);
        return;
      }
LABEL_25:
      sub_1BCAA44(Object_38952608, v16);
    }
LABEL_24:
    sub_1BCAA3C(Object_38952608, v16);
  }
}


void __fastcall BattleCommandParamComponent__setInit(BattleCommandParamComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *numberobj; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x20
  _QWORD *p_klass; // x8
  PartyOrganizationUtility_o *p_yakuobj; // x19
  struct UnityEngine_GameObject_array *yakuobj; // t1
  unsigned __int64 i; // x22
  unsigned __int64 v14; // x9
  UnityEngine_Object_o *v15; // x20
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B18CDC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B18CDC = 1;
  }
  numberobj = (UnityEngine_Object_o *)this->fields.numberobj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v7 = UnityEngine_Object__op_Inequality(numberobj, 0LL, 0LL);
  if ( v7 )
  {
    v9 = (UnityEngine_Object_o *)this->fields.numberobj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(v9, 0LL);
  }
  yakuobj = this->fields.yakuobj;
  p_yakuobj = (PartyOrganizationUtility_o *)&this->fields.yakuobj;
  p_klass = &yakuobj->obj.klass;
  if ( yakuobj )
  {
    for ( i = 0LL; ; ++i )
    {
      v14 = *((unsigned int *)p_klass + 6);
      if ( (__int64)i >= (int)v14 )
        break;
      if ( i >= v14 )
        sub_1BCAA44(v7, v8);
      v15 = (UnityEngine_Object_o *)p_klass[i + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      UnityEngine_Object__Destroy_70154244(v15, 0LL);
      p_klass = &p_yakuobj->klass->_1.image;
      if ( !p_yakuobj->klass )
        sub_1BCAA3C(v7, v8);
    }
  }
  v16 = sub_1BCA888(UnityEngine_GameObject___TypeInfo, 2LL);
  p_yakuobj->klass = (PartyOrganizationUtility_c *)v16;
  sub_1BCA784(p_yakuobj, v16, v17, v18, v19, v20, v21, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleCommandParamComponent__setNo(
        BattleCommandParamComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  struct UnityEngine_GameObject_o *Object_38952608; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18CDE & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&count, method);
    sub_1BCA7E0(&StringLiteral_19086/*"effect/ef_command_{0:00}"*/, v5, v6);
    byte_4B18CDE = 1;
  }
  v16 = count;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v8 = System_String__Format((System_String_o *)StringLiteral_19086/*"effect/ef_command_{0:00}"*/, v7, 0LL);
  Object_38952608 = BaseMonoBehaviour__createObject_38952608(
                      (BaseMonoBehaviour_o *)this,
                      v8,
                      this->fields.NumberTr,
                      0LL,
                      0LL);
  this->fields.numberobj = Object_38952608;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.numberobj,
    (int64_t)Object_38952608,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}