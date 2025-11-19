void DebugInputAttackCardExcuteComponent___cctor(const MethodInfo *method)
{
  struct System_Int32_array *v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x0
  struct DebugInputAttackCardExcuteComponent_StaticFields *static_fields; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  struct DebugInputAttackCardExcuteComponent_StaticFields *v9; // x8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Array_o *v12; // x0
  System_RuntimeFieldHandle_o v13; // x1
  System_Array_o *v14; // x19
  struct DebugInputAttackCardExcuteComponent_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4CB78B1 & 1) == 0 )
  {
    sub_1C6BA08(&bool___TypeInfo);
    sub_1C6BA08(&DebugInputAttackCardExcuteComponent_TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&BattleCommand_TYPE___TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__45B8AAA32A382159A53DF88A29858D4A57855F2295AB57F8CF442BB9CB7CBD9D);
    byte_4CB78B1 = 1;
  }
  v1 = (struct System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 3);
  DebugInputAttackCardExcuteComponent_TypeInfo->static_fields->SelectedServantIdxList = v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)DebugInputAttackCardExcuteComponent_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = sub_1C6BAB0(BattleCommand_TYPE___TypeInfo, 3);
  static_fields = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields;
  static_fields->CommandTypeList = (struct BattleCommand_TYPE_array *)v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->CommandTypeList, v4, v6, v7);
  v8 = sub_1C6BAB0(bool___TypeInfo, 3);
  v9 = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields;
  v9->CommandTypeTreasure = (struct System_Boolean_array *)v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9->CommandTypeTreasure, v8, v10, v11);
  v12 = (System_Array_o *)sub_1C6BAB0(int___TypeInfo, 3);
  v13.fields.value = Field__PrivateImplementationDetails__45B8AAA32A382159A53DF88A29858D4A57855F2295AB57F8CF442BB9CB7CBD9D;
  v14 = v12;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v12, v13, 0);
  v15 = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields;
  v15->TreasureNpList = (struct System_Int32_array *)v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->TreasureNpList, (int32_t)v14, v16, v17);
}


void DebugInputAttackCardExcuteComponent___ctor(DebugInputAttackCardExcuteComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DebugInputAttackCardExcuteComponent__Cancel(DebugInputAttackCardExcuteComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *debugMenuTran; // x0

  debugMenuTran = (UnityEngine_Component_o *)this->fields.debugMenuTran;
  if ( !debugMenuTran
    || (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(debugMenuTran, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 1, 0),
        (debugMenuTran = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0)) == 0) )
  {
    sub_1C6BC60(debugMenuTran, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 0, 0);
}


System_String_o *DebugInputAttackCardExcuteComponent__GetDefaultCardTypeText(
        DebugInputAttackCardExcuteComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB78A8 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_25513/*"カードタイプ指定なし"*/);
    byte_4CB78A8 = 1;
  }
  return (System_String_o *)StringLiteral_25513/*"カードタイプ指定なし"*/;
}


System_String_o *DebugInputAttackCardExcuteComponent__GetDefaultServantText(
        DebugInputAttackCardExcuteComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB78A7 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_25524/*"サーヴァント指定なし"*/);
    byte_4CB78A7 = 1;
  }
  return (System_String_o *)StringLiteral_25524/*"サーヴァント指定なし"*/;
}


void DebugInputAttackCardExcuteComponent__NpLeft(
        DebugInputAttackCardExcuteComponent_o *this,
        System_String_o *cardLabelName,
        const MethodInfo *method)
{
  DebugInputAttackCardExcuteComponent_o *v4; // x19
  int32_t v5; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  unsigned int v7; // w23
  char *v8; // x25
  _DWORD *v9; // x25
  int v10; // t1
  int32_t v11; // w20
  struct UILabel_array *treasureNpLabelList; // x8
  struct System_Int32_array *TreasureNpList; // x9
  UILabel_o *v14; // x19
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4CB78B0 & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputAttackCardExcuteComponent_TypeInfo);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB78B0 = 1;
  }
  result = 0;
  if ( !cardLabelName )
    goto LABEL_21;
  this = (DebugInputAttackCardExcuteComponent_o *)System_String__Split(cardLabelName, 0x5Fu, 0, 0);
  if ( !this )
    goto LABEL_21;
  if ( LODWORD(this->fields.m_CancellationTokenSource) == 2
    && System_Int32__TryParse((System_String_o *)this->fields.servantIdxList, &result, 0) )
  {
    v5 = result;
    this = (DebugInputAttackCardExcuteComponent_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
    if ( !DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo);
      this = (DebugInputAttackCardExcuteComponent_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
    }
    m_CancellationTokenSource = this[1].fields.attackCardSelectWindow->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      v7 = v5 - 1;
      if ( (unsigned int)(v5 - 1) >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
        goto LABEL_22;
      v8 = (char *)m_CancellationTokenSource + 4 * (int)v7;
      v10 = *((_DWORD *)v8 + 8);
      v9 = v8 + 32;
      v11 = v10 - 100;
      *v9 = v10 - 100;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      this = (DebugInputAttackCardExcuteComponent_o *)System_Math__Max_65488612(v11, 100, 0);
      if ( v7 >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
        goto LABEL_22;
      *v9 = (_DWORD)this;
      treasureNpLabelList = v4->fields.treasureNpLabelList;
      if ( !treasureNpLabelList )
        goto LABEL_21;
      if ( v7 >= LODWORD(treasureNpLabelList->max_length) )
        goto LABEL_22;
      TreasureNpList = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields->TreasureNpList;
      if ( !TreasureNpList )
        goto LABEL_21;
      if ( v7 >= LODWORD(TreasureNpList->max_length) )
LABEL_22:
        sub_1C6BC68(this);
      v14 = treasureNpLabelList->m_Items[v7];
      this = (DebugInputAttackCardExcuteComponent_o *)System_Int32__ToString(
                                                        (unsigned int)TreasureNpList + 4 * v7 + 32,
                                                        0);
      if ( v14 )
      {
        UILabel__set_text(v14, (System_String_o *)this, 0);
        return;
      }
    }
LABEL_21:
    sub_1C6BC60(this, cardLabelName);
  }
}


void DebugInputAttackCardExcuteComponent__NpRight(
        DebugInputAttackCardExcuteComponent_o *this,
        System_String_o *cardLabelName,
        const MethodInfo *method)
{
  DebugInputAttackCardExcuteComponent_o *v4; // x19
  int32_t v5; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  unsigned int v7; // w23
  char *v8; // x25
  _DWORD *v9; // x25
  int v10; // t1
  int32_t v11; // w20
  struct UILabel_array *treasureNpLabelList; // x8
  struct System_Int32_array *TreasureNpList; // x9
  UILabel_o *v14; // x19
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4CB78AF & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputAttackCardExcuteComponent_TypeInfo);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB78AF = 1;
  }
  result = 0;
  if ( !cardLabelName )
    goto LABEL_21;
  this = (DebugInputAttackCardExcuteComponent_o *)System_String__Split(cardLabelName, 0x5Fu, 0, 0);
  if ( !this )
    goto LABEL_21;
  if ( LODWORD(this->fields.m_CancellationTokenSource) == 2
    && System_Int32__TryParse((System_String_o *)this->fields.servantIdxList, &result, 0) )
  {
    v5 = result;
    this = (DebugInputAttackCardExcuteComponent_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
    if ( !DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo);
      this = (DebugInputAttackCardExcuteComponent_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
    }
    m_CancellationTokenSource = this[1].fields.attackCardSelectWindow->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      v7 = v5 - 1;
      if ( (unsigned int)(v5 - 1) >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
        goto LABEL_22;
      v8 = (char *)m_CancellationTokenSource + 4 * (int)v7;
      v10 = *((_DWORD *)v8 + 8);
      v9 = v8 + 32;
      v11 = v10 + 100;
      *v9 = v10 + 100;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      this = (DebugInputAttackCardExcuteComponent_o *)System_Math__Min_65488940(v11, 1000, 0);
      if ( v7 >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
        goto LABEL_22;
      *v9 = (_DWORD)this;
      treasureNpLabelList = v4->fields.treasureNpLabelList;
      if ( !treasureNpLabelList )
        goto LABEL_21;
      if ( v7 >= LODWORD(treasureNpLabelList->max_length) )
        goto LABEL_22;
      TreasureNpList = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields->TreasureNpList;
      if ( !TreasureNpList )
        goto LABEL_21;
      if ( v7 >= LODWORD(TreasureNpList->max_length) )
LABEL_22:
        sub_1C6BC68(this);
      v14 = treasureNpLabelList->m_Items[v7];
      this = (DebugInputAttackCardExcuteComponent_o *)System_Int32__ToString(
                                                        (unsigned int)TreasureNpList + 4 * v7 + 32,
                                                        0);
      if ( v14 )
      {
        UILabel__set_text(v14, (System_String_o *)this, 0);
        return;
      }
    }
LABEL_21:
    sub_1C6BC60(this, cardLabelName);
  }
}


void DebugInputAttackCardExcuteComponent__OnEnable(
        DebugInputAttackCardExcuteComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x25
  int v4; // w29
  __int64 CommandTypeName; // x0
  struct System_Int32_array *SelectedServantIdxList; // x8
  System_String_o *v7; // x0
  struct UILabel_array *servantIdxList; // x8
  struct UILabel_array *v9; // x8
  UILabel_o *v10; // x22
  struct UILabel_array *attackCardTypeNameList; // x8
  UILabel_o *v12; // x22
  __int64 v13; // x9
  __int64 v14; // x8
  __int64 v15; // x9
  int32_t v16; // w23
  __int64 *v17; // x8
  System_String_o *v18; // x24
  struct UILabel_array *treasureNpLabelList; // x8
  UILabel_o *v20; // x22
  __int64 v21; // x8

  if ( (byte_4CB78A9 & 1) == 0 )
  {
    sub_1C6BA08(&BattleCommand_TypeInfo);
    sub_1C6BA08(&DebugInputAttackCardExcuteComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_25580/*"宝具"*/);
    sub_1C6BA08(&StringLiteral_25610/*"番目"*/);
    byte_4CB78A9 = 1;
  }
  v3 = 0;
  v4 = 32;
  do
  {
    CommandTypeName = (__int64)DebugInputAttackCardExcuteComponent_TypeInfo;
    if ( !DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo);
      CommandTypeName = (__int64)DebugInputAttackCardExcuteComponent_TypeInfo;
    }
    SelectedServantIdxList = **(struct System_Int32_array ***)(CommandTypeName + 184);
    if ( !SelectedServantIdxList )
      goto LABEL_45;
    if ( (unsigned int)v3 >= LODWORD(SelectedServantIdxList->max_length) )
      goto LABEL_46;
    if ( SelectedServantIdxList->m_Items[v3] )
    {
      if ( !*(_DWORD *)(CommandTypeName + 224) )
      {
        j_il2cpp_runtime_class_init_0(CommandTypeName);
        SelectedServantIdxList = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields->SelectedServantIdxList;
        if ( !SelectedServantIdxList )
          goto LABEL_45;
      }
      if ( (unsigned int)v3 >= LODWORD(SelectedServantIdxList->max_length) )
        goto LABEL_46;
      v7 = System_Int32__ToString((int)SelectedServantIdxList + v4, 0);
      CommandTypeName = (__int64)System_String__Concat_63966792(v7, (System_String_o *)StringLiteral_25610/*"番目"*/, 0);
      servantIdxList = this->fields.servantIdxList;
      if ( !servantIdxList )
        goto LABEL_45;
      if ( (unsigned int)v3 >= LODWORD(servantIdxList->max_length) )
        goto LABEL_46;
      method = (const MethodInfo *)CommandTypeName;
      CommandTypeName = (__int64)servantIdxList->m_Items[v3];
      if ( !CommandTypeName )
        goto LABEL_45;
    }
    else
    {
      v9 = this->fields.servantIdxList;
      if ( !v9 )
        goto LABEL_45;
      if ( (unsigned int)v3 >= LODWORD(v9->max_length) )
        goto LABEL_46;
      v10 = v9->m_Items[v3];
      if ( (byte_4CB78A7 & 1) == 0 )
      {
        CommandTypeName = sub_1C6BA08(&StringLiteral_25524/*"サーヴァント指定なし"*/);
        byte_4CB78A7 = 1;
      }
      if ( !v10 )
        goto LABEL_45;
      CommandTypeName = (__int64)v10;
      method = (const MethodInfo *)StringLiteral_25524/*"サーヴァント指定なし"*/;
    }
    UILabel__set_text((UILabel_o *)CommandTypeName, (System_String_o *)method, 0);
    attackCardTypeNameList = this->fields.attackCardTypeNameList;
    if ( !attackCardTypeNameList )
      goto LABEL_45;
    if ( (unsigned int)v3 >= LODWORD(attackCardTypeNameList->max_length) )
LABEL_46:
      sub_1C6BC68(CommandTypeName);
    CommandTypeName = (__int64)DebugInputAttackCardExcuteComponent_TypeInfo;
    v12 = attackCardTypeNameList->m_Items[v3];
    if ( !DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo);
      CommandTypeName = (__int64)DebugInputAttackCardExcuteComponent_TypeInfo;
    }
    v13 = *(_QWORD *)(CommandTypeName + 184);
    v14 = *(_QWORD *)(v13 + 8);
    if ( !v14 )
      goto LABEL_45;
    if ( (unsigned int)v3 >= *(_DWORD *)(v14 + 24) )
      goto LABEL_46;
    v15 = *(_QWORD *)(v13 + 16);
    if ( !v15 )
      goto LABEL_45;
    if ( (unsigned int)v3 >= *(_DWORD *)(v15 + 24) )
      goto LABEL_46;
    v16 = *(_DWORD *)(v14 + 4 * v3 + 32);
    v17 = &StringLiteral_25580/*"宝具"*/;
    if ( !*(_BYTE *)(v15 + v3 + 32) )
    {
      v17 = &StringLiteral_25513/*"カードタイプ指定なし"*/;
      if ( (byte_4CB78A8 & 1) == 0 )
      {
        sub_1C6BA08(&StringLiteral_25513/*"カードタイプ指定なし"*/);
        byte_4CB78A8 = 1;
        v17 = &StringLiteral_25513/*"カードタイプ指定なし"*/;
      }
    }
    v18 = (System_String_o *)*v17;
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    CommandTypeName = (__int64)BattleCommand__GetCommandTypeName(v16, v18, 0);
    if ( !v12 )
      goto LABEL_45;
    UILabel__set_text(v12, (System_String_o *)CommandTypeName, 0);
    treasureNpLabelList = this->fields.treasureNpLabelList;
    if ( !treasureNpLabelList )
      goto LABEL_45;
    if ( (unsigned int)v3 >= LODWORD(treasureNpLabelList->max_length) )
      goto LABEL_46;
    CommandTypeName = (__int64)DebugInputAttackCardExcuteComponent_TypeInfo;
    v20 = treasureNpLabelList->m_Items[v3];
    if ( !DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo);
      CommandTypeName = (__int64)DebugInputAttackCardExcuteComponent_TypeInfo;
    }
    v21 = *(_QWORD *)(*(_QWORD *)(CommandTypeName + 184) + 24LL);
    if ( !v21 )
      goto LABEL_45;
    if ( (unsigned int)v3 >= *(_DWORD *)(v21 + 24) )
      goto LABEL_46;
    CommandTypeName = (__int64)System_Int32__ToString((int)v21 + v4, 0);
    if ( !v20 )
LABEL_45:
      sub_1C6BC60(CommandTypeName, method);
    UILabel__set_text(v20, (System_String_o *)CommandTypeName, 0);
    ++v3;
    v4 += 4;
  }
  while ( (_DWORD)v3 != 3 );
}


void DebugInputAttackCardExcuteComponent__OnSubmitNP(
        DebugInputAttackCardExcuteComponent_o *this,
        System_String_o *inputValue,
        System_String_o *cardLabelName,
        const MethodInfo *method)
{
  int32_t v6; // w19
  int v7; // w9
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int32_t result[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB78AE & 1) == 0 )
  {
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C6BA08(&DebugInputAttackCardExcuteComponent_TypeInfo);
    byte_4CB78AE = 1;
  }
  *(_QWORD *)result = 0;
  if ( !cardLabelName )
    goto LABEL_18;
  this = (DebugInputAttackCardExcuteComponent_o *)System_String__Split(cardLabelName, 0x5Fu, 0, 0);
  if ( !this )
    goto LABEL_18;
  if ( LODWORD(this->fields.m_CancellationTokenSource) != 2
    || !System_Int32__TryParse((System_String_o *)this->fields.servantIdxList, &result[1], 0)
    || !System_Int32__TryParse(inputValue, result, 0) )
  {
    return;
  }
  v6 = result[1];
  this = (DebugInputAttackCardExcuteComponent_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
  if ( !DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo);
    this = (DebugInputAttackCardExcuteComponent_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
  }
  v7 = result[0];
  m_CancellationTokenSource = this[1].fields.attackCardSelectWindow->fields.m_CancellationTokenSource;
  if ( result[0] >= 1000 )
    v7 = 1000;
  if ( v7 <= 100 )
    v7 = 100;
  if ( !m_CancellationTokenSource )
LABEL_18:
    sub_1C6BC60(this, inputValue);
  if ( (unsigned int)(v6 - 1) >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
    sub_1C6BC68(this);
  *((_DWORD *)&m_CancellationTokenSource->fields._registeredCallbacksLists + v6 + 1) = v7;
}


void DebugInputAttackCardExcuteComponent__Open(
        DebugInputAttackCardExcuteComponent_o *this,
        BattleData_o *inputData,
        UnityEngine_Transform_o *inputDebugMenuTran,
        const MethodInfo *method)
{
  struct UILabel_array *treasureNpLabelList; // x8
  int max_length; // w8
  DebugInputAttackCardExcuteComponent_o *v7; // x19
  int v8; // w9
  DebugInputAttackCardExcuteComponent_o **p_debugMenuTran; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  treasureNpLabelList = this->fields.treasureNpLabelList;
  if ( !treasureNpLabelList )
    goto LABEL_10;
  max_length = treasureNpLabelList->max_length;
  v7 = this;
  v8 = -1;
  do
    ++v8;
  while ( v8 < max_length );
  this->fields.data = inputData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)inputData, (int32_t)inputDebugMenuTran, method);
  v7->fields.debugMenuTran = inputDebugMenuTran;
  p_debugMenuTran = (DebugInputAttackCardExcuteComponent_o **)&v7->fields.debugMenuTran;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.debugMenuTran, (int32_t)inputDebugMenuTran, v10, v11);
  this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)v7,
                                                    0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (this = *p_debugMenuTran) == 0)
    || (this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (DebugInputAttackCardExcuteComponent_o *)v7->fields.attackCardSelectWindow) == 0)
    || (this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0)) == 0 )
  {
LABEL_10:
    sub_1C6BC60(this, inputData);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void DebugInputAttackCardExcuteComponent__OpenAttackCardType(
        DebugInputAttackCardExcuteComponent_o *this,
        UnityEngine_GameObject_o *parentGameObject,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  DebugInputAttackCardExcuteComponent_o *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  struct UIButton_array *attackCardTypeSelectButtonList; // x9
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  DebugInputAttackCardExcuteComponent_o *v20; // x1
  Il2CppClass **v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  DebugInputAttackCardExcuteComponent_o *v27; // x1
  Il2CppClass **v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  DebugInputAttackCardExcuteComponent_o *v34; // x1
  Il2CppClass **v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  _QWORD *v38; // x9
  struct System_Object_array *v39; // x8
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  DebugAttackCardSelectComponent_o *attackCardSelectWindow; // x21
  System_Action_T1__T2__o *v43; // x22
  const MethodInfo *v44; // x3

  v3 = (UnityEngine_Object_o *)parentGameObject;
  v4 = this;
  if ( (byte_4CB78AB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__string__TypeInfo);
    sub_1C6BA08(&BattleCommand_TypeInfo);
    sub_1C6BA08(&Method_DebugInputAttackCardExcuteComponent_TapSelectAttackCardTypeCallback__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&StringLiteral_2357/*"Arts"*/);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C6BA08(&StringLiteral_25580/*"宝具"*/);
    byte_4CB78AB = 1;
  }
  if ( !v3 )
    goto LABEL_37;
  name = UnityEngine_Object__get_name(v3, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Object__get_name(v3, 0);
  if ( !this || !name )
    goto LABEL_37;
  v6 = System_String__Substring_64012732(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)System_Int32__Parse(v6, 0);
  if ( (int)this < 1 )
    return;
  attackCardTypeSelectButtonList = v4->fields.attackCardTypeSelectButtonList;
  if ( !attackCardTypeSelectButtonList )
LABEL_37:
    sub_1C6BC60(this, parentGameObject);
  if ( (int)this <= SLODWORD(attackCardTypeSelectButtonList->max_length) )
  {
    v4->fields.lastOpenAttackCardSelectButton = (_DWORD)this - 1;
    v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( (byte_4CB78A8 & 1) == 0 )
    {
      this = (DebugInputAttackCardExcuteComponent_o *)sub_1C6BA08(&StringLiteral_25513/*"カードタイプ指定なし"*/);
      byte_4CB78A8 = 1;
    }
    if ( v8 )
    {
      parentGameObject = (UnityEngine_GameObject_o *)StringLiteral_25513/*"カードタイプ指定なし"*/;
      items = v8->fields._items;
      v12 = Method_System_Collections_Generic_List_string__Add__;
      ++v8->fields._version;
      if ( items )
      {
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)parentGameObject,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v14[4] = (Il2CppClass *)parentGameObject;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)parentGameObject, v9, v10);
        }
        if ( !BattleCommand_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
        this = (DebugInputAttackCardExcuteComponent_o *)BattleCommand__GetCommandTypeName(
                                                          1,
                                                          (System_String_o *)StringLiteral_2357/*"Arts"*/,
                                                          0);
        v17 = v8->fields._items;
        v18 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( v17 )
        {
          v19 = v8->fields._size;
          v20 = this;
          if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)this,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &v17->obj.klass + v19;
            v8->fields._size = v19 + 1;
            v21[4] = (Il2CppClass *)v20;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
          }
          this = (DebugInputAttackCardExcuteComponent_o *)BattleCommand__GetCommandTypeName(
                                                            2,
                                                            (System_String_o *)StringLiteral_2357/*"Arts"*/,
                                                            0);
          v24 = v8->fields._items;
          v25 = Method_System_Collections_Generic_List_string__Add__;
          ++v8->fields._version;
          if ( v24 )
          {
            v26 = v8->fields._size;
            v27 = this;
            if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)this,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = &v24->obj.klass + v26;
              v8->fields._size = v26 + 1;
              v28[4] = (Il2CppClass *)v27;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
            }
            this = (DebugInputAttackCardExcuteComponent_o *)BattleCommand__GetCommandTypeName(
                                                              3,
                                                              (System_String_o *)StringLiteral_2357/*"Arts"*/,
                                                              0);
            v31 = v8->fields._items;
            v32 = Method_System_Collections_Generic_List_string__Add__;
            ++v8->fields._version;
            if ( v31 )
            {
              v33 = v8->fields._size;
              v34 = this;
              if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)this,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &v31->obj.klass + v33;
                v8->fields._size = v33 + 1;
                v35[4] = (Il2CppClass *)v34;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v34, v29, v30);
              }
              v38 = Method_System_Collections_Generic_List_string__Add__;
              parentGameObject = (UnityEngine_GameObject_o *)StringLiteral_25580/*"宝具"*/;
              v39 = v8->fields._items;
              ++v8->fields._version;
              if ( v39 )
              {
                v40 = v8->fields._size;
                if ( (unsigned int)v40 >= LODWORD(v39->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)parentGameObject,
                    *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                }
                else
                {
                  v41 = &v39->obj.klass + v40;
                  v8->fields._size = v40 + 1;
                  v41[4] = (Il2CppClass *)parentGameObject;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 4), (int32_t)parentGameObject, v36, v37);
                }
                attackCardSelectWindow = v4->fields.attackCardSelectWindow;
                v43 = (System_Action_T1__T2__o *)sub_1C6BC54(System_Action_int__string__TypeInfo);
                System_Action_int__object____ctor(
                  v43,
                  (Il2CppObject *)v4,
                  Method_DebugInputAttackCardExcuteComponent_TapSelectAttackCardTypeCallback__,
                  0);
                if ( attackCardSelectWindow )
                {
                  DebugAttackCardSelectComponent__Open(
                    attackCardSelectWindow,
                    (System_Action_int__string__o *)v43,
                    (System_Collections_Generic_List_string__o *)v8,
                    v44);
                  return;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
}


void DebugInputAttackCardExcuteComponent__OpenServantSelect(
        DebugInputAttackCardExcuteComponent_o *this,
        UnityEngine_GameObject_o *parentGameObject,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  DebugInputAttackCardExcuteComponent_o *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  struct UIButton_array *servantSelectButtonList; // x9
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_String_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  DebugInputAttackCardExcuteComponent_o *v21; // x1
  Il2CppClass **v22; // x0
  bool v23; // nf
  DebugAttackCardSelectComponent_o *attackCardSelectWindow; // x21
  System_Action_T1__T2__o *v25; // x22
  const MethodInfo *v26; // x3
  int v27; // [xsp+Ch] [xbp-24h] BYREF

  v3 = (UnityEngine_Object_o *)parentGameObject;
  v4 = this;
  if ( (byte_4CB78AA & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__string__TypeInfo);
    sub_1C6BA08(&Method_DebugInputAttackCardExcuteComponent_TapServantSelectCallback__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C6BA08(&StringLiteral_25610/*"番目"*/);
    byte_4CB78AA = 1;
  }
  if ( !v3 )
    goto LABEL_25;
  name = UnityEngine_Object__get_name(v3, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Object__get_name(v3, 0);
  if ( !this || !name )
    goto LABEL_25;
  v6 = System_String__Substring_64012732(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)System_Int32__Parse(v6, 0);
  if ( (int)this < 1 )
    return;
  servantSelectButtonList = v4->fields.servantSelectButtonList;
  if ( !servantSelectButtonList )
    goto LABEL_25;
  if ( (int)this > SLODWORD(servantSelectButtonList->max_length) )
    return;
  v4->fields.lastOpenAttackCardSelectButton = (_DWORD)this - 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (byte_4CB78A7 & 1) == 0 )
  {
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C6BA08(&StringLiteral_25524/*"サーヴァント指定なし"*/);
    byte_4CB78A7 = 1;
  }
  if ( !v8 )
    goto LABEL_25;
  parentGameObject = (UnityEngine_GameObject_o *)StringLiteral_25524/*"サーヴァント指定なし"*/;
  items = v8->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)parentGameObject,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v14[4] = (Il2CppClass *)parentGameObject;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)parentGameObject, v9, v10);
  }
  v27 = 1;
  do
  {
    v15 = System_Int32__ToString((int32_t)&v27, 0);
    this = (DebugInputAttackCardExcuteComponent_o *)System_String__Concat_63966792(
                                                      v15,
                                                      (System_String_o *)StringLiteral_25610/*"番目"*/,
                                                      0);
    v18 = v8->fields._items;
    v19 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v18 )
      goto LABEL_25;
    v20 = v8->fields._size;
    v21 = this;
    if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)this,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &v18->obj.klass + v20;
      v8->fields._size = v20 + 1;
      v22[4] = (Il2CppClass *)v21;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
    }
    v23 = v27 - 3 < 0;
    ++v27;
  }
  while ( v23 != __OFSUB__(v27, 4) );
  attackCardSelectWindow = v4->fields.attackCardSelectWindow;
  v25 = (System_Action_T1__T2__o *)sub_1C6BC54(System_Action_int__string__TypeInfo);
  System_Action_int__object____ctor(
    v25,
    (Il2CppObject *)v4,
    Method_DebugInputAttackCardExcuteComponent_TapServantSelectCallback__,
    0);
  if ( !attackCardSelectWindow )
LABEL_25:
    sub_1C6BC60(this, parentGameObject);
  DebugAttackCardSelectComponent__Open(
    attackCardSelectWindow,
    (System_Action_int__string__o *)v25,
    (System_Collections_Generic_List_string__o *)v8,
    v26);
}


// local variable allocation has failed, the output may be wrong!
void DebugInputAttackCardExcuteComponent__SetAttackCardTypeData(
        DebugInputAttackCardExcuteComponent_o *this,
        int32_t idx,
        bool treasure,
        int32_t commandType,
        System_String_o *name,
        const MethodInfo *method)
{
  UILabel_o *v11; // x0
  struct UIWidget_OnDimensionsChanged_o *onChange; // x9
  intptr_t method_ptr; // x10
  _DWORD *monitor; // x9
  struct UILabel_array *attackCardTypeNameList; // x9

  if ( (byte_4CB78AD & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputAttackCardExcuteComponent_TypeInfo);
    byte_4CB78AD = 1;
  }
  v11 = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
  if ( !DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo);
    v11 = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
  }
  onChange = v11->fields.onChange;
  method_ptr = onChange->fields.method_ptr;
  if ( !method_ptr )
    goto LABEL_13;
  if ( *(_DWORD *)(method_ptr + 24) <= (unsigned int)idx )
    goto LABEL_14;
  *(_BYTE *)(method_ptr + idx + 32) = treasure;
  monitor = onChange->monitor;
  if ( !monitor )
    goto LABEL_13;
  if ( monitor[6] <= (unsigned int)idx )
    goto LABEL_14;
  monitor[idx + 8] = commandType;
  attackCardTypeNameList = this->fields.attackCardTypeNameList;
  if ( !attackCardTypeNameList )
    goto LABEL_13;
  if ( LODWORD(attackCardTypeNameList->max_length) <= idx )
LABEL_14:
    sub_1C6BC68(v11);
  v11 = attackCardTypeNameList->m_Items[idx];
  if ( !v11 )
LABEL_13:
    sub_1C6BC60(v11, *(_QWORD *)&idx);
  UILabel__set_text(v11, name, 0);
}


// local variable allocation has failed, the output may be wrong!
void DebugInputAttackCardExcuteComponent__SetServantData(
        DebugInputAttackCardExcuteComponent_o *this,
        int32_t idx,
        int32_t servantIdx,
        System_String_o *name,
        const MethodInfo *method)
{
  UILabel_o *v9; // x0
  UIWidget_OnDimensionsChanged_c *klass; // x9
  struct UILabel_array *servantIdxList; // x9

  if ( (byte_4CB78AC & 1) == 0 )
  {
    sub_1C6BA08(&DebugInputAttackCardExcuteComponent_TypeInfo);
    byte_4CB78AC = 1;
  }
  v9 = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
  if ( !DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo);
    v9 = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
  }
  klass = v9->fields.onChange->klass;
  if ( !klass )
    goto LABEL_11;
  if ( LODWORD(klass->_1.namespaze) <= idx )
    goto LABEL_12;
  *((_DWORD *)&klass->_1.byval_arg.data + idx) = servantIdx;
  servantIdxList = this->fields.servantIdxList;
  if ( !servantIdxList )
    goto LABEL_11;
  if ( LODWORD(servantIdxList->max_length) <= idx )
LABEL_12:
    sub_1C6BC68(v9);
  v9 = servantIdxList->m_Items[idx];
  if ( !v9 )
LABEL_11:
    sub_1C6BC60(v9, *(_QWORD *)&idx);
  UILabel__set_text(v9, name, 0);
}


void DebugInputAttackCardExcuteComponent__Submit(DebugInputAttackCardExcuteComponent_o *this, const MethodInfo *method)
{
  ;
}


void DebugInputAttackCardExcuteComponent__TapSelectAttackCardTypeCallback(
        DebugInputAttackCardExcuteComponent_o *this,
        int32_t idx,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t lastOpenAttackCardSelectButton; // w1
  bool v7; // w2
  int32_t v8; // w3

  switch ( idx )
  {
    case 0:
      lastOpenAttackCardSelectButton = this->fields.lastOpenAttackCardSelectButton;
      v7 = 0;
      goto LABEL_9;
    case 1:
      lastOpenAttackCardSelectButton = this->fields.lastOpenAttackCardSelectButton;
      v8 = 1;
      goto LABEL_6;
    case 2:
      lastOpenAttackCardSelectButton = this->fields.lastOpenAttackCardSelectButton;
      v8 = 2;
      goto LABEL_6;
    case 3:
      lastOpenAttackCardSelectButton = this->fields.lastOpenAttackCardSelectButton;
      v8 = 3;
LABEL_6:
      v7 = 0;
      goto LABEL_7;
    case 4:
      lastOpenAttackCardSelectButton = this->fields.lastOpenAttackCardSelectButton;
      v7 = 1;
LABEL_9:
      v8 = 0;
LABEL_7:
      DebugInputAttackCardExcuteComponent__SetAttackCardTypeData(this, lastOpenAttackCardSelectButton, v7, v8, name, v4);
      break;
    default:
      return;
  }
}


void DebugInputAttackCardExcuteComponent__TapServantSelectCallback(
        DebugInputAttackCardExcuteComponent_o *this,
        int32_t idx,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  DebugInputAttackCardExcuteComponent__SetServantData(this, this->fields.lastOpenAttackCardSelectButton, idx, name, v4);
}