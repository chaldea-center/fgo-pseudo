void __fastcall RestrictionEntity___ctor(RestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B28B0 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B28B0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RestrictionEntity__CreatePrimaryKey(RestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall RestrictionEntity__GetSpecifiedPosition(RestrictionEntity_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  __int64 v4; // x9
  __int64 v6; // x0

  type = this->fields.type;
  if ( type != 16 && type != 12 )
    return 0;
  targetVals2 = this->fields.targetVals2;
  if ( !targetVals2 )
    return 0;
  v4 = *(_QWORD *)&targetVals2->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    v6 = sub_B52A88(this);
    sub_B52A28(v6, 0LL);
  }
  return targetVals2->m_Items[1];
}


bool __fastcall RestrictionEntity__IsRestriction(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x8
  __int64 v5; // x9
  struct System_Int32_array *v6; // x8
  __int64 v7; // x9
  __int64 v9; // x0

  switch ( this->fields.rangeType )
  {
    case 1:
      return !RestrictionEntity__IsSearchVals(this, v, method);
    case 2:
      return RestrictionEntity__IsSearchVals(this, v, method);
    case 3:
      targetVals = this->fields.targetVals;
      if ( !targetVals )
        goto LABEL_11;
      v5 = *(_QWORD *)&targetVals->max_length;
      if ( !v5 )
        goto LABEL_11;
      if ( !(_DWORD)v5 )
        goto LABEL_15;
      v3 = targetVals->m_Items[1] > v;
      break;
    case 4:
      v6 = this->fields.targetVals;
      if ( v6 && (v7 = *(_QWORD *)&v6->max_length) != 0 )
      {
        if ( !(_DWORD)v7 )
        {
LABEL_15:
          v9 = sub_B52A88(this);
          sub_B52A28(v9, 0LL);
        }
        v3 = v6->m_Items[1] < v;
      }
      else
      {
LABEL_11:
        v3 = 1;
      }
      break;
    default:
      return 0;
  }
  return v3;
}


bool __fastcall RestrictionEntity__IsRestrictionTarget(
        RestrictionEntity_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *targetVals2; // x0

  if ( (byte_42B28AD & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Contains_int___);
    byte_42B28AD = 1;
  }
  targetVals2 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.targetVals2;
  return !targetVals2
      || !targetVals2[1].monitor
      || System_Linq_Enumerable__Contains_int_(
           targetVals2,
           targetType,
           (const MethodInfo_1B5BFB4 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool __fastcall RestrictionEntity__IsRestriction_29732520(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x9
  __int64 v5; // x10
  __int64 v6; // x8
  struct System_Int32_array *v7; // x9
  __int64 v8; // x10
  __int64 v9; // x8
  __int64 v11; // x0

  switch ( this->fields.rangeType )
  {
    case 1:
      return !RestrictionEntity__IsSearchVals_29732176(this, vList, method);
    case 2:
      return RestrictionEntity__IsSearchVals_29732176(this, vList, method);
    case 3:
      targetVals = this->fields.targetVals;
      if ( !targetVals )
        goto LABEL_19;
      v3 = 1;
      if ( !vList )
        return v3;
      v5 = *(_QWORD *)&targetVals->max_length;
      if ( !v5 )
        return v3;
      v6 = *(_QWORD *)&vList->max_length;
      if ( !v6 )
        goto LABEL_19;
      if ( !(_DWORD)v6 || !(_DWORD)v5 )
        goto LABEL_21;
      v3 = vList->m_Items[1] < targetVals->m_Items[1];
      break;
    case 4:
      v7 = this->fields.targetVals;
      if ( !v7 )
        goto LABEL_19;
      v3 = 1;
      if ( !vList )
        return v3;
      v8 = *(_QWORD *)&v7->max_length;
      if ( !v8 )
        return v3;
      v9 = *(_QWORD *)&vList->max_length;
      if ( v9 )
      {
        if ( !(_DWORD)v9 || !(_DWORD)v8 )
        {
LABEL_21:
          v11 = sub_B52A88(this);
          sub_B52A28(v11, 0LL);
        }
        v3 = vList->m_Items[1] > v7->m_Items[1];
      }
      else
      {
LABEL_19:
        v3 = 1;
      }
      break;
    default:
      return 0;
  }
  return v3;
}


bool __fastcall RestrictionEntity__IsSearchVals(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t *v6; // x10
  __int64 v8; // x0

  targetVals = this->fields.targetVals;
  if ( !targetVals )
    return 0;
  max_length = targetVals->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0LL;
  v6 = &targetVals->m_Items[1];
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
    {
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
    }
    if ( v6[v5] == v )
      break;
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return 1;
}


bool __fastcall RestrictionEntity__IsSearchVals_29732176(
        RestrictionEntity_o *this,
        System_Int32_array *vList,
        const MethodInfo *method)
{
  bool result; // w0
  struct System_Int32_array *targetVals; // x8
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x9
  signed int max_length; // w13
  __int64 v9; // x15
  __int64 v10; // x0

  result = 0;
  if ( vList )
  {
    targetVals = this->fields.targetVals;
    if ( targetVals )
    {
      if ( (int)*(_QWORD *)&targetVals->max_length < 1 )
      {
        return 0;
      }
      else
      {
        v6 = (unsigned int)*(_QWORD *)&targetVals->max_length;
        v7 = 0LL;
        while ( 1 )
        {
          if ( v7 >= v6 )
          {
LABEL_16:
            v10 = sub_B52A88(0LL);
            sub_B52A28(v10, 0LL);
          }
          max_length = vList->max_length;
          if ( max_length >= 1 )
            break;
LABEL_11:
          ++v7;
          result = 0;
          if ( (__int64)v7 >= (int)v6 )
            return result;
        }
        v9 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v9 >= max_length )
            goto LABEL_16;
          if ( targetVals->m_Items[v7 + 1] == vList->m_Items[v9 + 1] )
            return 1;
          if ( (int)++v9 >= max_length )
            goto LABEL_11;
        }
      }
    }
  }
  return result;
}


System_Boolean_array *__fastcall RestrictionEntity__getDeckPositionList(
        RestrictionEntity_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  BalanceConfig_c *v4; // x0
  __int64 v5; // x1
  struct System_Int32_array *targetVals; // x8
  System_Boolean_array *v7; // x19
  int max_length; // w22
  unsigned __int64 v9; // x23
  int v10; // w26
  il2cpp_array_size_t v11; // w25
  unsigned __int64 v12; // x23
  unsigned __int64 v13; // x23
  struct System_Int32_array *v14; // x8
  int v15; // w25
  il2cpp_array_size_t v16; // w24
  signed __int64 v17; // x22
  signed __int64 v18; // x20
  signed __int64 v19; // x22
  signed __int64 v20; // x20
  __int64 v22; // x0

  if ( (byte_42B28AF & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&bool___TypeInfo);
    byte_42B28AF = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (BalanceConfig_c *)sub_B5299C(bool___TypeInfo, (unsigned int)v3->static_fields->DeckMemberMax);
  targetVals = this->fields.targetVals;
  v7 = (System_Boolean_array *)v4;
  if ( targetVals )
    max_length = targetVals->max_length;
  else
    max_length = 0;
  switch ( this->fields.rangeType )
  {
    case 1:
      if ( max_length < 1 )
        return v7;
      if ( !targetVals )
        goto LABEL_75;
      v9 = 0LL;
      while ( v9 < targetVals->max_length )
      {
        v10 = targetVals->m_Items[v9 + 1];
        v11 = v10 - 1;
        if ( v10 >= 1 )
        {
          v4 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v4 = BalanceConfig_TypeInfo;
          }
          if ( v10 <= v4->static_fields->DeckMemberMax )
          {
            if ( !v7 )
              goto LABEL_75;
            if ( v11 >= v7->max_length )
              goto LABEL_76;
            v7->m_Items[v11 + 4] = 1;
          }
        }
        if ( (__int64)++v9 >= max_length )
          return v7;
        targetVals = this->fields.targetVals;
        if ( !targetVals )
          goto LABEL_75;
      }
      goto LABEL_76;
    case 2:
      v12 = 0LL;
      while ( 2 )
      {
        v4 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v12 < v4->static_fields->DeckMemberMax )
        {
          if ( v7 )
          {
            if ( v12 < v7->max_length )
            {
              v7->m_Items[v12++ + 4] = 1;
              continue;
            }
LABEL_76:
            v22 = sub_B52A88(v4);
            sub_B52A28(v22, 0LL);
          }
LABEL_75:
          sub_B52A5C(v4, v5);
        }
        break;
      }
      if ( max_length >= 1 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          v14 = this->fields.targetVals;
          if ( !v14 )
            goto LABEL_75;
          if ( v13 >= v14->max_length )
            goto LABEL_76;
          v15 = v14->m_Items[v13 + 1];
          v16 = v15 - 1;
          if ( v15 >= 1 )
          {
            v4 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v4 = BalanceConfig_TypeInfo;
            }
            if ( v15 <= v4->static_fields->DeckMemberMax )
            {
              if ( !v7 )
                goto LABEL_75;
              if ( v16 >= v7->max_length )
                goto LABEL_76;
              v7->m_Items[v16 + 4] = 0;
            }
          }
          if ( (__int64)++v13 >= max_length )
            return v7;
        }
      }
      return v7;
    case 3:
      if ( max_length < 1 )
        return v7;
      if ( !targetVals )
        goto LABEL_75;
      if ( !targetVals->max_length )
        goto LABEL_76;
      v17 = targetVals->m_Items[1];
      v18 = 0LL;
      while ( 2 )
      {
        v4 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( v18 >= v4->static_fields->DeckMemberMax )
          return v7;
        if ( v18 < v17 )
          goto LABEL_55;
        if ( !v7 )
          goto LABEL_75;
        if ( v18 < (unsigned __int64)v7->max_length )
        {
          v7->m_Items[v18 + 4] = 1;
LABEL_55:
          ++v18;
          continue;
        }
        goto LABEL_76;
      }
    case 4:
      if ( max_length < 1 )
        return v7;
      if ( !targetVals )
        goto LABEL_75;
      if ( !targetVals->max_length )
        goto LABEL_76;
      v19 = targetVals->m_Items[1];
      v20 = 0LL;
      while ( 2 )
      {
        v4 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v4 = BalanceConfig_TypeInfo;
        }
        if ( v20 >= v4->static_fields->DeckMemberMax )
          return v7;
        if ( v20 >= v19 )
          goto LABEL_69;
        if ( !v7 )
          goto LABEL_75;
        if ( v20 < (unsigned __int64)v7->max_length )
        {
          v7->m_Items[v20 + 4] = 1;
LABEL_69:
          ++v20;
          continue;
        }
        goto LABEL_76;
      }
    default:
      return v7;
  }
}


System_String_o *__fastcall RestrictionEntity__getTitle(RestrictionEntity_o *this, const MethodInfo *method)
{
  RestrictionEntity_o *v2; // x19
  __int64 *v3; // x8
  struct System_Int32_array *targetVals; // x8
  __int64 v5; // x9
  int v6; // w21
  System_String_o *v7; // x0
  System_String_o *v9; // x0
  System_String_o *name; // x19
  System_String_o *v11; // x20
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x0
  __int64 v14; // x0
  int v15; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_42B28AE & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_6429/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/);
    sub_B52984(&StringLiteral_6430/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/);
    sub_B52984(&StringLiteral_6431/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/);
    sub_B52984(&StringLiteral_6433/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/);
    sub_B52984(&StringLiteral_6427/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/);
    sub_B52984(&StringLiteral_6426/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/);
    sub_B52984(&StringLiteral_6434/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/);
    sub_B52984(&StringLiteral_6432/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/);
    this = (RestrictionEntity_o *)sub_B52984(&StringLiteral_6428/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/);
    byte_42B28AE = 1;
  }
  switch ( v2->fields.type )
  {
    case 5:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v3 = &StringLiteral_6431/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/;
      goto LABEL_40;
    case 6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v3 = &StringLiteral_6433/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/;
      goto LABEL_40;
    case 7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v3 = &StringLiteral_6428/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/;
      goto LABEL_40;
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v3 = &StringLiteral_6426/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/;
      goto LABEL_40;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v3 = &StringLiteral_6427/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/;
      goto LABEL_40;
    case 0xA:
      targetVals = v2->fields.targetVals;
      if ( targetVals && (v5 = *(_QWORD *)&targetVals->max_length) != 0 )
      {
        if ( !(_DWORD)v5 )
        {
          v14 = sub_B52A88(this);
          sub_B52A28(v14, 0LL);
        }
        v6 = targetVals->m_Items[1];
      }
      else
      {
        v6 = 0;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_6430/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, 0LL);
      name = v2->fields.name;
      v11 = v9;
      v15 = v6;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      v13 = (Il2CppObject *)System_String__Format(name, v12, 0LL);
      return System_String__Format(v11, v13, 0LL);
    case 0xB:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v3 = &StringLiteral_6429/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/;
      goto LABEL_40;
    case 0xF:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v3 = &StringLiteral_6434/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/;
      goto LABEL_40;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v3 = &StringLiteral_6432/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/;
LABEL_40:
      v7 = LocalizationManager__Get((System_String_o *)*v3, 0LL);
      return System_String__Format(v7, (Il2CppObject *)v2->fields.name, 0LL);
  }
}


int32_t __fastcall RestrictionEntity__getTotalCost(RestrictionEntity_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  if ( this->fields.type != 3 )
    return 0;
  targetVals = this->fields.targetVals;
  if ( !targetVals )
    return 0;
  v3 = *(_QWORD *)&targetVals->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B52A88(this);
    sub_B52A28(v5, 0LL);
  }
  return targetVals->m_Items[1];
}