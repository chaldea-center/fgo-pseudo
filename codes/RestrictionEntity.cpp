void __fastcall RestrictionEntity___ctor(RestrictionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC833 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FC833 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall RestrictionEntity__CreatePrimaryKey(RestrictionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall RestrictionEntity__GetSpecifiedPosition(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t type; // w8
  struct System_Int32_array *targetVals2; // x8
  __int64 v5; // x9

  type = this->fields.type;
  if ( type != 16 && type != 12 )
    return 0;
  targetVals2 = this->fields.targetVals2;
  if ( !targetVals2 )
    return 0;
  v5 = *(_QWORD *)&targetVals2->max_length;
  if ( !v5 )
    return 0;
  if ( !(_DWORD)v5 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  return targetVals2->m_Items[1];
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionEntity__IsRestriction(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  bool v3; // w8
  struct System_Int32_array *targetVals; // x8
  __int64 v5; // x9
  struct System_Int32_array *v6; // x8
  __int64 v7; // x9

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
          sub_B17100(this, *(_QWORD *)&v, method);
          sub_B170A0();
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


bool __fastcall RestrictionEntity__IsRestriction_29671008(
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

  switch ( this->fields.rangeType )
  {
    case 1:
      return !RestrictionEntity__IsSearchVals_29670664(this, vList, method);
    case 2:
      return RestrictionEntity__IsSearchVals_29670664(this, vList, method);
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
          sub_B17100(this, vList, method);
          sub_B170A0();
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall RestrictionEntity__IsSearchVals(RestrictionEntity_o *this, int32_t v, const MethodInfo *method)
{
  struct System_Int32_array *targetVals; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t *v6; // x10

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
      sub_B17100(this, *(_QWORD *)&v, method);
      sub_B170A0();
    }
    if ( v6[v5] == v )
      break;
    if ( (int)++v5 >= max_length )
      return 0;
  }
  return 1;
}


bool __fastcall RestrictionEntity__IsSearchVals_29670664(
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
            sub_B17100(0LL, vList, method);
            sub_B170A0();
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
  __int64 v2; // x2
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  BalanceConfig_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *targetVals; // x8
  System_Boolean_array *v10; // x19
  int max_length; // w22
  unsigned __int64 v12; // x23
  int v13; // w26
  il2cpp_array_size_t v14; // w25
  unsigned __int64 v15; // x23
  unsigned __int64 v16; // x23
  struct System_Int32_array *v17; // x8
  int v18; // w25
  il2cpp_array_size_t v19; // w24
  signed __int64 v20; // x22
  signed __int64 v21; // x20
  signed __int64 v22; // x22
  signed __int64 v23; // x20

  if ( (byte_40FC832 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&bool___TypeInfo, v4);
    byte_40FC832 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  v6 = (BalanceConfig_c *)sub_B17014(bool___TypeInfo, (unsigned int)v5->static_fields->DeckMemberMax, v2);
  targetVals = this->fields.targetVals;
  v10 = (System_Boolean_array *)v6;
  if ( targetVals )
    max_length = targetVals->max_length;
  else
    max_length = 0;
  switch ( this->fields.rangeType )
  {
    case 1:
      if ( max_length < 1 )
        return v10;
      if ( !targetVals )
        goto LABEL_75;
      v12 = 0LL;
      while ( v12 < targetVals->max_length )
      {
        v13 = targetVals->m_Items[v12 + 1];
        v14 = v13 - 1;
        if ( v13 >= 1 )
        {
          v6 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v6 = BalanceConfig_TypeInfo;
          }
          if ( v13 <= v6->static_fields->DeckMemberMax )
          {
            if ( !v10 )
              goto LABEL_75;
            if ( v14 >= v10->max_length )
              goto LABEL_76;
            v10->m_Items[v14 + 4] = 1;
          }
        }
        if ( (__int64)++v12 >= max_length )
          return v10;
        targetVals = this->fields.targetVals;
        if ( !targetVals )
          goto LABEL_75;
      }
      goto LABEL_76;
    case 2:
      v15 = 0LL;
      while ( 2 )
      {
        v6 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v6 = BalanceConfig_TypeInfo;
        }
        if ( (__int64)v15 < v6->static_fields->DeckMemberMax )
        {
          if ( v10 )
          {
            if ( v15 < v10->max_length )
            {
              v10->m_Items[v15++ + 4] = 1;
              continue;
            }
LABEL_76:
            sub_B17100(v6, v7, v8);
            sub_B170A0();
          }
LABEL_75:
          sub_B170D4();
        }
        break;
      }
      if ( max_length >= 1 )
      {
        v16 = 0LL;
        while ( 1 )
        {
          v17 = this->fields.targetVals;
          if ( !v17 )
            goto LABEL_75;
          if ( v16 >= v17->max_length )
            goto LABEL_76;
          v18 = v17->m_Items[v16 + 1];
          v19 = v18 - 1;
          if ( v18 >= 1 )
          {
            v6 = BalanceConfig_TypeInfo;
            if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v6 = BalanceConfig_TypeInfo;
            }
            if ( v18 <= v6->static_fields->DeckMemberMax )
            {
              if ( !v10 )
                goto LABEL_75;
              if ( v19 >= v10->max_length )
                goto LABEL_76;
              v10->m_Items[v19 + 4] = 0;
            }
          }
          if ( (__int64)++v16 >= max_length )
            return v10;
        }
      }
      return v10;
    case 3:
      if ( max_length < 1 )
        return v10;
      if ( !targetVals )
        goto LABEL_75;
      if ( !targetVals->max_length )
        goto LABEL_76;
      v20 = targetVals->m_Items[1];
      v21 = 0LL;
      while ( 2 )
      {
        v6 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v6 = BalanceConfig_TypeInfo;
        }
        if ( v21 >= v6->static_fields->DeckMemberMax )
          return v10;
        if ( v21 < v20 )
          goto LABEL_55;
        if ( !v10 )
          goto LABEL_75;
        if ( v21 < (unsigned __int64)v10->max_length )
        {
          v10->m_Items[v21 + 4] = 1;
LABEL_55:
          ++v21;
          continue;
        }
        goto LABEL_76;
      }
    case 4:
      if ( max_length < 1 )
        return v10;
      if ( !targetVals )
        goto LABEL_75;
      if ( !targetVals->max_length )
        goto LABEL_76;
      v22 = targetVals->m_Items[1];
      v23 = 0LL;
      while ( 2 )
      {
        v6 = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v6 = BalanceConfig_TypeInfo;
        }
        if ( v23 >= v6->static_fields->DeckMemberMax )
          return v10;
        if ( v23 >= v22 )
          goto LABEL_69;
        if ( !v10 )
          goto LABEL_75;
        if ( v23 < (unsigned __int64)v10->max_length )
        {
          v10->m_Items[v23 + 4] = 1;
LABEL_69:
          ++v23;
          continue;
        }
        goto LABEL_76;
      }
    default:
      return v10;
  }
}


System_String_o *__fastcall RestrictionEntity__getTitle(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  RestrictionEntity_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 *v14; // x8
  struct System_Int32_array *targetVals; // x8
  __int64 v16; // x9
  int v17; // w21
  System_String_o *v18; // x0
  System_String_o *v20; // x0
  System_String_o *name; // x19
  System_String_o *v22; // x20
  Il2CppObject *v23; // x0
  Il2CppObject *v24; // x0
  int v25; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_40FC831 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_6368/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/, v5);
    sub_B16FFC(&StringLiteral_6369/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, v6);
    sub_B16FFC(&StringLiteral_6370/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/, v7);
    sub_B16FFC(&StringLiteral_6372/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/, v8);
    sub_B16FFC(&StringLiteral_6366/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/, v9);
    sub_B16FFC(&StringLiteral_6365/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/, v10);
    sub_B16FFC(&StringLiteral_6373/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/, v11);
    sub_B16FFC(&StringLiteral_6371/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/, v12);
    this = (RestrictionEntity_o *)sub_B16FFC(&StringLiteral_6367/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/, v13);
    byte_40FC831 = 1;
  }
  switch ( v3->fields.type )
  {
    case 5:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_6370/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SUPPORT_ONLY_TITLE"*/;
      goto LABEL_40;
    case 6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_6372/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIEQU_SERVANT_TITLE"*/;
      goto LABEL_40;
    case 7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_6367/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_SUPPORT_POSITION_TITLE"*/;
      goto LABEL_40;
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_6365/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_POSITION_MAIN_TITLE"*/;
      goto LABEL_40;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_6366/*"FOLLOWER_SELECT_QUEST_RESTRICTION_FIXED_MY_SERVANT_SINGLE_TITLE"*/;
      goto LABEL_40;
    case 0xA:
      targetVals = v3->fields.targetVals;
      if ( targetVals && (v16 = *(_QWORD *)&targetVals->max_length) != 0 )
      {
        if ( !(_DWORD)v16 )
        {
          sub_B17100(this, method, v2);
          sub_B170A0();
        }
        v17 = targetVals->m_Items[1];
      }
      else
      {
        v17 = 0;
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6369/*"FOLLOWER_SELECT_QUEST_RESTRICTION_SERVANT_NUM_MAIN_TITLE"*/, 0LL);
      name = v3->fields.name;
      v22 = v20;
      v25 = v17;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      v24 = (Il2CppObject *)System_String__Format(name, v23, 0LL);
      return System_String__Format(v22, v24, 0LL);
    case 0xB:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_6368/*"FOLLOWER_SELECT_QUEST_RESTRICTION_MY_SERVANT_NUM_MAIN_TITLE"*/;
      goto LABEL_40;
    case 0xF:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_6373/*"FOLLOWER_SELECT_QUEST_RESTRICTION_UNIQUE_INDIVIDUALITY_TITLE"*/;
      goto LABEL_40;
    default:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v14 = &StringLiteral_6371/*"FOLLOWER_SELECT_QUEST_RESTRICTION_TITLE"*/;
LABEL_40:
      v18 = LocalizationManager__Get((System_String_o *)*v14, 0LL);
      return System_String__Format(v18, (Il2CppObject *)v3->fields.name, 0LL);
  }
}


int32_t __fastcall RestrictionEntity__getTotalCost(RestrictionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *targetVals; // x8
  __int64 v4; // x9

  if ( this->fields.type != 3 )
    return 0;
  targetVals = this->fields.targetVals;
  if ( !targetVals )
    return 0;
  v4 = *(_QWORD *)&targetVals->max_length;
  if ( !v4 )
    return 0;
  if ( !(_DWORD)v4 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  return targetVals->m_Items[1];
}