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

  if ( (byte_4C38F7F & 1) == 0 )
  {
    sub_1C32C20(&bool___TypeInfo);
    sub_1C32C20(&DebugInputAttackCardExcuteComponent_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&BattleCommand_TYPE___TypeInfo);
    sub_1C32C20(&Field__PrivateImplementationDetails__45B8AAA32A382159A53DF88A29858D4A57855F2295AB57F8CF442BB9CB7CBD9D);
    byte_4C38F7F = 1;
  }
  v1 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 3);
  DebugInputAttackCardExcuteComponent_TypeInfo->static_fields->SelectedServantIdxList = v1;
  sub_1C32BC4((CGThumbnailListItem_o *)DebugInputAttackCardExcuteComponent_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  v4 = sub_1C32CC8(BattleCommand_TYPE___TypeInfo, 3);
  static_fields = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields;
  static_fields->CommandTypeList = (struct BattleCommand_TYPE_array *)v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->CommandTypeList, v4, v6, v7);
  v8 = sub_1C32CC8(bool___TypeInfo, 3);
  v9 = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields;
  v9->CommandTypeTreasure = (struct System_Boolean_array *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->CommandTypeTreasure, v8, v10, v11);
  v12 = (System_Array_o *)sub_1C32CC8(int___TypeInfo, 3);
  v13.fields.value = Field__PrivateImplementationDetails__45B8AAA32A382159A53DF88A29858D4A57855F2295AB57F8CF442BB9CB7CBD9D;
  v14 = v12;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64219320(v12, v13, 0);
  v15 = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields;
  v15->TreasureNpList = (struct System_Int32_array *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->TreasureNpList, (int32_t)v14, v16, v17);
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
    sub_1C32E7C(debugMenuTran);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 0, 0);
}


System_String_o *DebugInputAttackCardExcuteComponent__GetDefaultCardTypeText(
        DebugInputAttackCardExcuteComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C38F76 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_25398/*"カードタイプ指定なし"*/);
    byte_4C38F76 = 1;
  }
  return (System_String_o *)StringLiteral_25398/*"カードタイプ指定なし"*/;
}


System_String_o *DebugInputAttackCardExcuteComponent__GetDefaultServantText(
        DebugInputAttackCardExcuteComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C38F75 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_25409/*"サーヴァント指定なし"*/);
    byte_4C38F75 = 1;
  }
  return (System_String_o *)StringLiteral_25409/*"サーヴァント指定なし"*/;
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
  if ( (byte_4C38F7E & 1) == 0 )
  {
    sub_1C32C20(&DebugInputAttackCardExcuteComponent_TypeInfo);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C32C20(&System_Math_TypeInfo);
    byte_4C38F7E = 1;
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
      this = (DebugInputAttackCardExcuteComponent_o *)System_Math__Max_65041976(v11, 100, 0);
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
        sub_1C32E84(this);
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
    sub_1C32E7C(this);
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
  if ( (byte_4C38F7D & 1) == 0 )
  {
    sub_1C32C20(&DebugInputAttackCardExcuteComponent_TypeInfo);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C32C20(&System_Math_TypeInfo);
    byte_4C38F7D = 1;
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
      this = (DebugInputAttackCardExcuteComponent_o *)System_Math__Min_65042304(v11, 1000, 0);
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
        sub_1C32E84(this);
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
    sub_1C32E7C(this);
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
  System_String_o *v9; // x1
  struct UILabel_array *v10; // x8
  UILabel_o *v11; // x22
  struct UILabel_array *attackCardTypeNameList; // x8
  UILabel_o *v13; // x22
  __int64 v14; // x9
  __int64 v15; // x8
  __int64 v16; // x9
  int32_t v17; // w23
  __int64 *v18; // x8
  System_String_o *v19; // x24
  struct UILabel_array *treasureNpLabelList; // x8
  UILabel_o *v21; // x22
  __int64 v22; // x8

  if ( (byte_4C38F77 & 1) == 0 )
  {
    sub_1C32C20(&BattleCommand_TypeInfo);
    sub_1C32C20(&DebugInputAttackCardExcuteComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_25465/*"宝具"*/);
    sub_1C32C20(&StringLiteral_25495/*"番目"*/);
    byte_4C38F77 = 1;
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
      CommandTypeName = (__int64)System_String__Concat_63518544(v7, (System_String_o *)StringLiteral_25495/*"番目"*/, 0);
      servantIdxList = this->fields.servantIdxList;
      if ( !servantIdxList )
        goto LABEL_45;
      if ( (unsigned int)v3 >= LODWORD(servantIdxList->max_length) )
        goto LABEL_46;
      v9 = (System_String_o *)CommandTypeName;
      CommandTypeName = (__int64)servantIdxList->m_Items[v3];
      if ( !CommandTypeName )
        goto LABEL_45;
    }
    else
    {
      v10 = this->fields.servantIdxList;
      if ( !v10 )
        goto LABEL_45;
      if ( (unsigned int)v3 >= LODWORD(v10->max_length) )
        goto LABEL_46;
      v11 = v10->m_Items[v3];
      if ( (byte_4C38F75 & 1) == 0 )
      {
        CommandTypeName = sub_1C32C20(&StringLiteral_25409/*"サーヴァント指定なし"*/);
        byte_4C38F75 = 1;
      }
      if ( !v11 )
        goto LABEL_45;
      CommandTypeName = (__int64)v11;
      v9 = (System_String_o *)StringLiteral_25409/*"サーヴァント指定なし"*/;
    }
    UILabel__set_text((UILabel_o *)CommandTypeName, v9, 0);
    attackCardTypeNameList = this->fields.attackCardTypeNameList;
    if ( !attackCardTypeNameList )
      goto LABEL_45;
    if ( (unsigned int)v3 >= LODWORD(attackCardTypeNameList->max_length) )
LABEL_46:
      sub_1C32E84(CommandTypeName);
    CommandTypeName = (__int64)DebugInputAttackCardExcuteComponent_TypeInfo;
    v13 = attackCardTypeNameList->m_Items[v3];
    if ( !DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo);
      CommandTypeName = (__int64)DebugInputAttackCardExcuteComponent_TypeInfo;
    }
    v14 = *(_QWORD *)(CommandTypeName + 184);
    v15 = *(_QWORD *)(v14 + 8);
    if ( !v15 )
      goto LABEL_45;
    if ( (unsigned int)v3 >= *(_DWORD *)(v15 + 24) )
      goto LABEL_46;
    v16 = *(_QWORD *)(v14 + 16);
    if ( !v16 )
      goto LABEL_45;
    if ( (unsigned int)v3 >= *(_DWORD *)(v16 + 24) )
      goto LABEL_46;
    v17 = *(_DWORD *)(v15 + 4 * v3 + 32);
    v18 = &StringLiteral_25465/*"宝具"*/;
    if ( !*(_BYTE *)(v16 + v3 + 32) )
    {
      v18 = &StringLiteral_25398/*"カードタイプ指定なし"*/;
      if ( (byte_4C38F76 & 1) == 0 )
      {
        sub_1C32C20(&StringLiteral_25398/*"カードタイプ指定なし"*/);
        byte_4C38F76 = 1;
        v18 = &StringLiteral_25398/*"カードタイプ指定なし"*/;
      }
    }
    v19 = (System_String_o *)*v18;
    if ( !BattleCommand_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
    CommandTypeName = (__int64)BattleCommand__GetCommandTypeName(v17, v19, 0);
    if ( !v13 )
      goto LABEL_45;
    UILabel__set_text(v13, (System_String_o *)CommandTypeName, 0);
    treasureNpLabelList = this->fields.treasureNpLabelList;
    if ( !treasureNpLabelList )
      goto LABEL_45;
    if ( (unsigned int)v3 >= LODWORD(treasureNpLabelList->max_length) )
      goto LABEL_46;
    CommandTypeName = (__int64)DebugInputAttackCardExcuteComponent_TypeInfo;
    v21 = treasureNpLabelList->m_Items[v3];
    if ( !DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo);
      CommandTypeName = (__int64)DebugInputAttackCardExcuteComponent_TypeInfo;
    }
    v22 = *(_QWORD *)(*(_QWORD *)(CommandTypeName + 184) + 24LL);
    if ( !v22 )
      goto LABEL_45;
    if ( (unsigned int)v3 >= *(_DWORD *)(v22 + 24) )
      goto LABEL_46;
    CommandTypeName = (__int64)System_Int32__ToString((int)v22 + v4, 0);
    if ( !v21 )
LABEL_45:
      sub_1C32E7C(CommandTypeName);
    UILabel__set_text(v21, (System_String_o *)CommandTypeName, 0);
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

  if ( (byte_4C38F7C & 1) == 0 )
  {
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C32C20(&DebugInputAttackCardExcuteComponent_TypeInfo);
    byte_4C38F7C = 1;
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
    sub_1C32E7C(this);
  if ( (unsigned int)(v6 - 1) >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
    sub_1C32E84(this);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.data, (int32_t)inputData, (int32_t)inputDebugMenuTran, method);
  v7->fields.debugMenuTran = inputDebugMenuTran;
  p_debugMenuTran = (DebugInputAttackCardExcuteComponent_o **)&v7->fields.debugMenuTran;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->fields.debugMenuTran, (int32_t)inputDebugMenuTran, v10, v11);
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
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void DebugInputAttackCardExcuteComponent__OpenAttackCardType(
        DebugInputAttackCardExcuteComponent_o *this,
        UnityEngine_GameObject_o *parentGameObject,
        const MethodInfo *method)
{
  DebugInputAttackCardExcuteComponent_o *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  struct UIButton_array *attackCardTypeSelectButtonList; // x9
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  DebugInputAttackCardExcuteComponent_o *v21; // x1
  Il2CppClass **v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  DebugInputAttackCardExcuteComponent_o *v28; // x1
  Il2CppClass **v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  DebugInputAttackCardExcuteComponent_o *v35; // x1
  Il2CppClass **v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  _QWORD *v39; // x9
  Il2CppObject *v40; // x1
  struct System_Object_array *v41; // x8
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  DebugAttackCardSelectComponent_o *attackCardSelectWindow; // x21
  System_Action_T1__T2__o *v45; // x22

  v4 = this;
  if ( (byte_4C38F79 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__string__TypeInfo);
    sub_1C32C20(&BattleCommand_TypeInfo);
    sub_1C32C20(&Method_DebugInputAttackCardExcuteComponent_TapSelectAttackCardTypeCallback__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&StringLiteral_2365/*"Arts"*/);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C32C20(&StringLiteral_25465/*"宝具"*/);
    byte_4C38F79 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_37;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Object__get_name(
                                                    (UnityEngine_Object_o *)parentGameObject,
                                                    0);
  if ( !this || !name )
    goto LABEL_37;
  v6 = System_String__Substring_63564468(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)System_Int32__Parse(v6, 0);
  if ( (int)this < 1 )
    return;
  attackCardTypeSelectButtonList = v4->fields.attackCardTypeSelectButtonList;
  if ( !attackCardTypeSelectButtonList )
LABEL_37:
    sub_1C32E7C(this);
  if ( (int)this <= SLODWORD(attackCardTypeSelectButtonList->max_length) )
  {
    v4->fields.lastOpenAttackCardSelectButton = (_DWORD)this - 1;
    v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( (byte_4C38F76 & 1) == 0 )
    {
      this = (DebugInputAttackCardExcuteComponent_o *)sub_1C32C20(&StringLiteral_25398/*"カードタイプ指定なし"*/);
      byte_4C38F76 = 1;
    }
    if ( v8 )
    {
      v11 = (Il2CppObject *)StringLiteral_25398/*"カードタイプ指定なし"*/;
      items = v8->fields._items;
      v13 = Method_System_Collections_Generic_List_string__Add__;
      ++v8->fields._version;
      if ( items )
      {
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            v11,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v11;
          sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
        }
        if ( !BattleCommand_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
        this = (DebugInputAttackCardExcuteComponent_o *)BattleCommand__GetCommandTypeName(
                                                          1,
                                                          (System_String_o *)StringLiteral_2365/*"Arts"*/,
                                                          0);
        v18 = v8->fields._items;
        v19 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( v18 )
        {
          v20 = v8->fields._size;
          v21 = this;
          if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)this,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &v18->obj.klass + v20;
            v8->fields._size = v20 + 1;
            v22[4] = (Il2CppClass *)v21;
            sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
          }
          this = (DebugInputAttackCardExcuteComponent_o *)BattleCommand__GetCommandTypeName(
                                                            2,
                                                            (System_String_o *)StringLiteral_2365/*"Arts"*/,
                                                            0);
          v25 = v8->fields._items;
          v26 = Method_System_Collections_Generic_List_string__Add__;
          ++v8->fields._version;
          if ( v25 )
          {
            v27 = v8->fields._size;
            v28 = this;
            if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)this,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = &v25->obj.klass + v27;
              v8->fields._size = v27 + 1;
              v29[4] = (Il2CppClass *)v28;
              sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v28, v23, v24);
            }
            this = (DebugInputAttackCardExcuteComponent_o *)BattleCommand__GetCommandTypeName(
                                                              3,
                                                              (System_String_o *)StringLiteral_2365/*"Arts"*/,
                                                              0);
            v32 = v8->fields._items;
            v33 = Method_System_Collections_Generic_List_string__Add__;
            ++v8->fields._version;
            if ( v32 )
            {
              v34 = v8->fields._size;
              v35 = this;
              if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)this,
                  *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v36 = &v32->obj.klass + v34;
                v8->fields._size = v34 + 1;
                v36[4] = (Il2CppClass *)v35;
                sub_1C32BC4((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v35, v30, v31);
              }
              v39 = Method_System_Collections_Generic_List_string__Add__;
              v40 = (Il2CppObject *)StringLiteral_25465/*"宝具"*/;
              v41 = v8->fields._items;
              ++v8->fields._version;
              if ( v41 )
              {
                v42 = v8->fields._size;
                if ( (unsigned int)v42 >= LODWORD(v41->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    v40,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
                }
                else
                {
                  v43 = &v41->obj.klass + v42;
                  v8->fields._size = v42 + 1;
                  v43[4] = (Il2CppClass *)v40;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v43 + 4), (int32_t)v40, v37, v38);
                }
                attackCardSelectWindow = v4->fields.attackCardSelectWindow;
                v45 = (System_Action_T1__T2__o *)sub_1C32E6C(System_Action_int__string__TypeInfo);
                System_Action_int__object____ctor(
                  v45,
                  (Il2CppObject *)v4,
                  Method_DebugInputAttackCardExcuteComponent_TapSelectAttackCardTypeCallback__,
                  0);
                if ( attackCardSelectWindow )
                {
                  DebugAttackCardSelectComponent__Open(
                    attackCardSelectWindow,
                    (System_Action_int__string__o *)v45,
                    (System_Collections_Generic_List_string__o *)v8,
                    0);
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
  DebugInputAttackCardExcuteComponent_o *v4; // x19
  System_String_o *name; // x21
  System_String_o *v6; // x0
  struct UIButton_array *servantSelectButtonList; // x9
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_String_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  DebugInputAttackCardExcuteComponent_o *v22; // x1
  Il2CppClass **v23; // x0
  bool v24; // nf
  DebugAttackCardSelectComponent_o *attackCardSelectWindow; // x21
  System_Action_T1__T2__o *v26; // x22
  int v27; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_4C38F78 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__string__TypeInfo);
    sub_1C32C20(&Method_DebugInputAttackCardExcuteComponent_TapServantSelectCallback__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C32C20(&StringLiteral_25495/*"番目"*/);
    byte_4C38F78 = 1;
  }
  if ( !parentGameObject )
    goto LABEL_25;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)parentGameObject, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Object__get_name(
                                                    (UnityEngine_Object_o *)parentGameObject,
                                                    0);
  if ( !this || !name )
    goto LABEL_25;
  v6 = System_String__Substring_63564468(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)System_Int32__Parse(v6, 0);
  if ( (int)this < 1 )
    return;
  servantSelectButtonList = v4->fields.servantSelectButtonList;
  if ( !servantSelectButtonList )
    goto LABEL_25;
  if ( (int)this > SLODWORD(servantSelectButtonList->max_length) )
    return;
  v4->fields.lastOpenAttackCardSelectButton = (_DWORD)this - 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (byte_4C38F75 & 1) == 0 )
  {
    this = (DebugInputAttackCardExcuteComponent_o *)sub_1C32C20(&StringLiteral_25409/*"サーヴァント指定なし"*/);
    byte_4C38F75 = 1;
  }
  if ( !v8 )
    goto LABEL_25;
  v11 = (Il2CppObject *)StringLiteral_25409/*"サーヴァント指定なし"*/;
  items = v8->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      v11,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v11;
    sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v11, v9, v10);
  }
  v27 = 1;
  do
  {
    v16 = System_Int32__ToString((int32_t)&v27, 0);
    this = (DebugInputAttackCardExcuteComponent_o *)System_String__Concat_63518544(
                                                      v16,
                                                      (System_String_o *)StringLiteral_25495/*"番目"*/,
                                                      0);
    v19 = v8->fields._items;
    v20 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v19 )
      goto LABEL_25;
    v21 = v8->fields._size;
    v22 = this;
    if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)this,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &v19->obj.klass + v21;
      v8->fields._size = v21 + 1;
      v23[4] = (Il2CppClass *)v22;
      sub_1C32BC4((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
    }
    v24 = v27 - 3 < 0;
    ++v27;
  }
  while ( v24 != __OFSUB__(v27, 4) );
  attackCardSelectWindow = v4->fields.attackCardSelectWindow;
  v26 = (System_Action_T1__T2__o *)sub_1C32E6C(System_Action_int__string__TypeInfo);
  System_Action_int__object____ctor(
    v26,
    (Il2CppObject *)v4,
    Method_DebugInputAttackCardExcuteComponent_TapServantSelectCallback__,
    0);
  if ( !attackCardSelectWindow )
LABEL_25:
    sub_1C32E7C(this);
  DebugAttackCardSelectComponent__Open(
    attackCardSelectWindow,
    (System_Action_int__string__o *)v26,
    (System_Collections_Generic_List_string__o *)v8,
    0);
}


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

  if ( (byte_4C38F7B & 1) == 0 )
  {
    sub_1C32C20(&DebugInputAttackCardExcuteComponent_TypeInfo);
    byte_4C38F7B = 1;
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
    sub_1C32E84(v11);
  v11 = attackCardTypeNameList->m_Items[idx];
  if ( !v11 )
LABEL_13:
    sub_1C32E7C(v11);
  UILabel__set_text(v11, name, 0);
}


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

  if ( (byte_4C38F7A & 1) == 0 )
  {
    sub_1C32C20(&DebugInputAttackCardExcuteComponent_TypeInfo);
    byte_4C38F7A = 1;
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
    sub_1C32E84(v9);
  v9 = servantIdxList->m_Items[idx];
  if ( !v9 )
LABEL_11:
    sub_1C32E7C(v9);
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