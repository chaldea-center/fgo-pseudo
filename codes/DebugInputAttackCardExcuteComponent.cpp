void DebugInputAttackCardExcuteComponent___cctor(const MethodInfo *method)
{
  struct System_Int32_array *v1; // x0
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v8; // x0
  struct DebugInputAttackCardExcuteComponent_StaticFields *static_fields; // x8
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  struct DebugInputAttackCardExcuteComponent_StaticFields *v17; // x8
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Array_o *v24; // x0
  System_RuntimeFieldHandle_o v25; // x1
  System_Array_o *v26; // x19
  struct DebugInputAttackCardExcuteComponent_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_5971E62 & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&DebugInputAttackCardExcuteComponent_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&BattleCommand_TYPE___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__45B8AAA32A382159A53DF88A29858D4A57855F2295AB57F8CF442BB9CB7CBD9D);
    byte_5971E62 = 1;
  }
  v1 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, 3);
  DebugInputAttackCardExcuteComponent_TypeInfo->static_fields->SelectedServantIdxList = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DebugInputAttackCardExcuteComponent_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v8 = sub_2213B20(BattleCommand_TYPE___TypeInfo, 3);
  static_fields = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields;
  static_fields->CommandTypeList = (struct BattleCommand_TYPE_array *)v8;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->CommandTypeList, v8, v10, v11, v12, v13, v14, v15);
  v16 = sub_2213B20(bool___TypeInfo, 3);
  v17 = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields;
  v17->CommandTypeTreasure = (struct System_Boolean_array *)v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->CommandTypeTreasure, v16, v18, v19, v20, v21, v22, v23);
  v24 = (System_Array_o *)sub_2213B20(int___TypeInfo, 3);
  v25.fields.value = Field__PrivateImplementationDetails__45B8AAA32A382159A53DF88A29858D4A57855F2295AB57F8CF442BB9CB7CBD9D;
  v26 = v24;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v24, v25, 0);
  v27 = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields;
  v27->TreasureNpList = (struct System_Int32_array *)v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->TreasureNpList, (int32_t)v26, v28, v29, v30, v31, v32, v33);
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
    sub_2213CDC(debugMenuTran, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)debugMenuTran, 0, 0);
}


System_String_o *DebugInputAttackCardExcuteComponent__GetDefaultCardTypeText(
        DebugInputAttackCardExcuteComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971E59 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26804/*"カードタイプ指定なし"*/);
    byte_5971E59 = 1;
  }
  return (System_String_o *)StringLiteral_26804/*"カードタイプ指定なし"*/;
}


System_String_o *DebugInputAttackCardExcuteComponent__GetDefaultServantText(
        DebugInputAttackCardExcuteComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_5971E58 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26815/*"サーヴァント指定なし"*/);
    byte_5971E58 = 1;
  }
  return (System_String_o *)StringLiteral_26815/*"サーヴァント指定なし"*/;
}


void DebugInputAttackCardExcuteComponent__NpLeft(
        DebugInputAttackCardExcuteComponent_o *this,
        System_String_o *cardLabelName,
        const MethodInfo *method)
{
  DebugInputAttackCardExcuteComponent_o *v4; // x19
  int32_t v5; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  unsigned int v7; // w22
  char *v8; // x25
  _DWORD *v9; // x25
  int v10; // t1
  int32_t v11; // w20
  System_Math_c *v12; // x0
  struct UILabel_array *treasureNpLabelList; // x8
  struct System_Int32_array *TreasureNpList; // x9
  UILabel_o *v15; // x19
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_5971E61 & 1) == 0 )
  {
    sub_2213A60(&DebugInputAttackCardExcuteComponent_TypeInfo);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_2213A60(&System_Math_TypeInfo);
    byte_5971E61 = 1;
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
    if ( !*(&DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo, cardLabelName);
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
      v12 = System_Math_TypeInfo;
      *v9 = v10 - 100;
      if ( !*(&v12->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v12, cardLabelName);
      this = (DebugInputAttackCardExcuteComponent_o *)System_Math__Max_77153260(v11, 100, 0);
      if ( v7 >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
        goto LABEL_22;
      treasureNpLabelList = v4->fields.treasureNpLabelList;
      *v9 = (_DWORD)this;
      if ( !treasureNpLabelList )
        goto LABEL_21;
      if ( v7 >= LODWORD(treasureNpLabelList->max_length) )
        goto LABEL_22;
      TreasureNpList = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields->TreasureNpList;
      if ( !TreasureNpList )
        goto LABEL_21;
      if ( v7 >= LODWORD(TreasureNpList->max_length) )
LABEL_22:
        sub_2213CE4(this);
      v15 = treasureNpLabelList->m_Items[v7];
      this = (DebugInputAttackCardExcuteComponent_o *)System_Int32__ToString(
                                                        (unsigned int)TreasureNpList + 4 * v7 + 32,
                                                        0);
      if ( v15 )
      {
        UILabel__set_text(v15, (System_String_o *)this, 0);
        return;
      }
    }
LABEL_21:
    sub_2213CDC(this, cardLabelName);
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
  unsigned int v7; // w22
  char *v8; // x25
  _DWORD *v9; // x25
  int v10; // t1
  int32_t v11; // w20
  System_Math_c *v12; // x0
  struct UILabel_array *treasureNpLabelList; // x8
  struct System_Int32_array *TreasureNpList; // x9
  UILabel_o *v15; // x19
  int32_t result; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_5971E60 & 1) == 0 )
  {
    sub_2213A60(&DebugInputAttackCardExcuteComponent_TypeInfo);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_2213A60(&System_Math_TypeInfo);
    byte_5971E60 = 1;
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
    if ( !*(&DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo, cardLabelName);
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
      v12 = System_Math_TypeInfo;
      *v9 = v10 + 100;
      if ( !*(&v12->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v12, cardLabelName);
      this = (DebugInputAttackCardExcuteComponent_o *)System_Math__Min_77153596(v11, 1000, 0);
      if ( v7 >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
        goto LABEL_22;
      treasureNpLabelList = v4->fields.treasureNpLabelList;
      *v9 = (_DWORD)this;
      if ( !treasureNpLabelList )
        goto LABEL_21;
      if ( v7 >= LODWORD(treasureNpLabelList->max_length) )
        goto LABEL_22;
      TreasureNpList = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields->TreasureNpList;
      if ( !TreasureNpList )
        goto LABEL_21;
      if ( v7 >= LODWORD(TreasureNpList->max_length) )
LABEL_22:
        sub_2213CE4(this);
      v15 = treasureNpLabelList->m_Items[v7];
      this = (DebugInputAttackCardExcuteComponent_o *)System_Int32__ToString(
                                                        (unsigned int)TreasureNpList + 4 * v7 + 32,
                                                        0);
      if ( v15 )
      {
        UILabel__set_text(v15, (System_String_o *)this, 0);
        return;
      }
    }
LABEL_21:
    sub_2213CDC(this, cardLabelName);
  }
}


void DebugInputAttackCardExcuteComponent__OnEnable(
        DebugInputAttackCardExcuteComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x25
  int v4; // w20
  UILabel_o *CommandTypeName; // x0
  struct System_Int32_array *klass; // x8
  System_String_o *v7; // x0
  struct UILabel_array *servantIdxList; // x8
  struct UILabel_array *v9; // x8
  UILabel_o *v10; // x22
  struct UILabel_array *attackCardTypeNameList; // x8
  UILabel_o *v12; // x22
  struct UIWidget_OnDimensionsChanged_o *onChange; // x9
  _DWORD *monitor; // x8
  intptr_t method_ptr; // x9
  int32_t v16; // w23
  __int64 *v17; // x8
  System_String_o *v18; // x24
  struct UILabel_array *treasureNpLabelList; // x8
  UILabel_o *v20; // x22
  intptr_t invoke_impl; // x8

  if ( (byte_5971E5A & 1) == 0 )
  {
    sub_2213A60(&BattleCommand_TypeInfo);
    sub_2213A60(&DebugInputAttackCardExcuteComponent_TypeInfo);
    sub_2213A60(&StringLiteral_26870/*"宝具"*/);
    sub_2213A60(&StringLiteral_26900/*"番目"*/);
    byte_5971E5A = 1;
  }
  v3 = 0;
  v4 = 32;
  do
  {
    CommandTypeName = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
    if ( !*(&DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo, method);
      CommandTypeName = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
    }
    klass = (struct System_Int32_array *)CommandTypeName->fields.onChange->klass;
    if ( !klass )
      goto LABEL_45;
    if ( (unsigned int)v3 >= LODWORD(klass->max_length) )
      goto LABEL_46;
    if ( klass->m_Items[v3] )
    {
      if ( !HIDWORD(CommandTypeName->fields.hitCheck) )
      {
        j_il2cpp_runtime_class_init_0(CommandTypeName, method);
        klass = DebugInputAttackCardExcuteComponent_TypeInfo->static_fields->SelectedServantIdxList;
        if ( !klass )
          goto LABEL_45;
      }
      if ( (unsigned int)v3 >= LODWORD(klass->max_length) )
        goto LABEL_46;
      v7 = System_Int32__ToString((int)klass + v4, 0);
      CommandTypeName = (UILabel_o *)System_String__Concat_75651716(v7, (System_String_o *)StringLiteral_26900/*"番目"*/, 0);
      servantIdxList = this->fields.servantIdxList;
      if ( !servantIdxList )
        goto LABEL_45;
      if ( (unsigned int)v3 >= LODWORD(servantIdxList->max_length) )
        goto LABEL_46;
      method = (const MethodInfo *)CommandTypeName;
      CommandTypeName = servantIdxList->m_Items[v3];
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
      if ( (byte_5971E58 & 1) == 0 )
      {
        CommandTypeName = (UILabel_o *)sub_2213A60(&StringLiteral_26815/*"サーヴァント指定なし"*/);
        byte_5971E58 = 1;
      }
      if ( !v10 )
        goto LABEL_45;
      CommandTypeName = v10;
      method = (const MethodInfo *)StringLiteral_26815/*"サーヴァント指定なし"*/;
    }
    UILabel__set_text(CommandTypeName, (System_String_o *)method, 0);
    attackCardTypeNameList = this->fields.attackCardTypeNameList;
    if ( !attackCardTypeNameList )
      goto LABEL_45;
    if ( (unsigned int)v3 >= LODWORD(attackCardTypeNameList->max_length) )
LABEL_46:
      sub_2213CE4(CommandTypeName);
    CommandTypeName = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
    v12 = attackCardTypeNameList->m_Items[v3];
    if ( !*(&DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo, method);
      CommandTypeName = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
    }
    onChange = CommandTypeName->fields.onChange;
    monitor = onChange->monitor;
    if ( !monitor )
      goto LABEL_45;
    if ( (unsigned int)v3 >= monitor[6] )
      goto LABEL_46;
    method_ptr = onChange->fields.method_ptr;
    if ( !method_ptr )
      goto LABEL_45;
    if ( (unsigned int)v3 >= *(_DWORD *)(method_ptr + 24) )
      goto LABEL_46;
    v16 = monitor[v3 + 8];
    v17 = &StringLiteral_26870/*"宝具"*/;
    if ( !*(_BYTE *)(method_ptr + v3 + 32) )
    {
      v17 = &StringLiteral_26804/*"カードタイプ指定なし"*/;
      if ( (byte_5971E59 & 1) == 0 )
      {
        sub_2213A60(&StringLiteral_26804/*"カードタイプ指定なし"*/);
        byte_5971E59 = 1;
        v17 = &StringLiteral_26804/*"カードタイプ指定なし"*/;
      }
    }
    v18 = (System_String_o *)*v17;
    if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, method);
    CommandTypeName = (UILabel_o *)BattleCommand__GetCommandTypeName(v16, v18, 0);
    if ( !v12 )
      goto LABEL_45;
    UILabel__set_text(v12, (System_String_o *)CommandTypeName, 0);
    treasureNpLabelList = this->fields.treasureNpLabelList;
    if ( !treasureNpLabelList )
      goto LABEL_45;
    if ( (unsigned int)v3 >= LODWORD(treasureNpLabelList->max_length) )
      goto LABEL_46;
    CommandTypeName = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
    v20 = treasureNpLabelList->m_Items[v3];
    if ( !*(&DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo, method);
      CommandTypeName = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
    }
    invoke_impl = CommandTypeName->fields.onChange->fields.invoke_impl;
    if ( !invoke_impl )
      goto LABEL_45;
    if ( (unsigned int)v3 >= *(_DWORD *)(invoke_impl + 24) )
      goto LABEL_46;
    CommandTypeName = (UILabel_o *)System_Int32__ToString((int)invoke_impl + v4, 0);
    if ( !v20 )
LABEL_45:
      sub_2213CDC(CommandTypeName, method);
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

  if ( (byte_5971E5F & 1) == 0 )
  {
    this = (DebugInputAttackCardExcuteComponent_o *)sub_2213A60(&DebugInputAttackCardExcuteComponent_TypeInfo);
    byte_5971E5F = 1;
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
  if ( !*(&DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo, inputValue);
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
    sub_2213CDC(this, inputValue);
  if ( (unsigned int)(v6 - 1) >= LODWORD(m_CancellationTokenSource->fields._registeredCallbacksLists) )
    sub_2213CE4(this);
  *((_DWORD *)&m_CancellationTokenSource->fields._registeredCallbacksLists + v6 + 1) = v7;
}


void DebugInputAttackCardExcuteComponent__Open(
        DebugInputAttackCardExcuteComponent_o *this,
        BattleData_o *inputData,
        UnityEngine_Transform_o *inputDebugMenuTran,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  DebugInputAttackCardExcuteComponent_o *v9; // x19
  DebugInputAttackCardExcuteComponent_o **p_debugMenuTran; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( !this->fields.treasureNpLabelList )
    goto LABEL_8;
  v9 = this;
  this->fields.data = inputData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.data,
    (int32_t)inputData,
    (System_String_o *)inputDebugMenuTran,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  v9->fields.debugMenuTran = inputDebugMenuTran;
  p_debugMenuTran = (DebugInputAttackCardExcuteComponent_o **)&v9->fields.debugMenuTran;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.debugMenuTran,
    (int32_t)inputDebugMenuTran,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)v9,
                                                    0);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0), (this = *p_debugMenuTran) == 0)
    || (this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (DebugInputAttackCardExcuteComponent_o *)v9->fields.attackCardSelectWindow) == 0)
    || (this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0)) == 0 )
  {
LABEL_8:
    sub_2213CDC(this, inputData);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  DebugInputAttackCardExcuteComponent_o *v29; // x1
  Il2CppClass **v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  DebugInputAttackCardExcuteComponent_o *v40; // x1
  Il2CppClass **v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  DebugInputAttackCardExcuteComponent_o *v51; // x1
  Il2CppClass **v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  DebugAttackCardSelectComponent_o *attackCardSelectWindow; // x21
  System_Action_T1__T2__o *v64; // x22
  const MethodInfo *v65; // x3

  v3 = (UnityEngine_Object_o *)parentGameObject;
  v4 = this;
  if ( (byte_5971E5C & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__string__TypeInfo);
    sub_2213A60(&BattleCommand_TypeInfo);
    sub_2213A60(&Method_DebugInputAttackCardExcuteComponent_TapSelectAttackCardTypeCallback__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&StringLiteral_2470/*"Arts"*/);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_2213A60(&StringLiteral_26870/*"宝具"*/);
    byte_5971E5C = 1;
  }
  if ( !v3 )
    goto LABEL_37;
  name = UnityEngine_Object__get_name(v3, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Object__get_name(v3, 0);
  if ( !this || !name )
    goto LABEL_37;
  v6 = System_String__Substring_75702848(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)System_Int32__Parse(v6, 0);
  if ( (int)this < 1 )
    return;
  attackCardTypeSelectButtonList = v4->fields.attackCardTypeSelectButtonList;
  if ( !attackCardTypeSelectButtonList )
LABEL_37:
    sub_2213CDC(this, parentGameObject);
  if ( (int)this <= SLODWORD(attackCardTypeSelectButtonList->max_length) )
  {
    v4->fields.lastOpenAttackCardSelectButton = (_DWORD)this - 1;
    v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
    if ( (byte_5971E59 & 1) == 0 )
    {
      this = (DebugInputAttackCardExcuteComponent_o *)sub_2213A60(&StringLiteral_26804/*"カードタイプ指定なし"*/);
      byte_5971E59 = 1;
    }
    if ( v8 )
    {
      items = v8->fields._items;
      parentGameObject = (UnityEngine_GameObject_o *)StringLiteral_26804/*"カードタイプ指定なし"*/;
      v16 = Method_System_Collections_Generic_List_string__Add__;
      ++v8->fields._version;
      if ( items )
      {
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)parentGameObject,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v18[4] = (Il2CppClass *)parentGameObject;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v18 + 4),
            (int32_t)parentGameObject,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14);
        }
        if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v19);
        this = (DebugInputAttackCardExcuteComponent_o *)BattleCommand__GetCommandTypeName(
                                                          1,
                                                          (System_String_o *)StringLiteral_2470/*"Arts"*/,
                                                          0);
        v26 = v8->fields._items;
        v27 = Method_System_Collections_Generic_List_string__Add__;
        ++v8->fields._version;
        if ( v26 )
        {
          v28 = v8->fields._size;
          v29 = this;
          if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)this,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &v26->obj.klass + v28;
            v8->fields._size = v28 + 1;
            v30[4] = (Il2CppClass *)v29;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v29, v20, v21, v22, v23, v24, v25);
          }
          this = (DebugInputAttackCardExcuteComponent_o *)BattleCommand__GetCommandTypeName(
                                                            2,
                                                            (System_String_o *)StringLiteral_2470/*"Arts"*/,
                                                            0);
          v37 = v8->fields._items;
          v38 = Method_System_Collections_Generic_List_string__Add__;
          ++v8->fields._version;
          if ( v37 )
          {
            v39 = v8->fields._size;
            v40 = this;
            if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)this,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &v37->obj.klass + v39;
              v8->fields._size = v39 + 1;
              v41[4] = (Il2CppClass *)v40;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v40, v31, v32, v33, v34, v35, v36);
            }
            this = (DebugInputAttackCardExcuteComponent_o *)BattleCommand__GetCommandTypeName(
                                                              3,
                                                              (System_String_o *)StringLiteral_2470/*"Arts"*/,
                                                              0);
            v48 = v8->fields._items;
            v49 = Method_System_Collections_Generic_List_string__Add__;
            ++v8->fields._version;
            if ( v48 )
            {
              v50 = v8->fields._size;
              v51 = this;
              if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)this,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
              }
              else
              {
                v52 = &v48->obj.klass + v50;
                v8->fields._size = v50 + 1;
                v52[4] = (Il2CppClass *)v51;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v51, v42, v43, v44, v45, v46, v47);
              }
              v59 = v8->fields._items;
              parentGameObject = (UnityEngine_GameObject_o *)StringLiteral_26870/*"宝具"*/;
              v60 = Method_System_Collections_Generic_List_string__Add__;
              ++v8->fields._version;
              if ( v59 )
              {
                v61 = v8->fields._size;
                if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v8,
                    (Il2CppObject *)parentGameObject,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
                }
                else
                {
                  v62 = &v59->obj.klass + v61;
                  v8->fields._size = v61 + 1;
                  v62[4] = (Il2CppClass *)parentGameObject;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)(v62 + 4),
                    (int32_t)parentGameObject,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57,
                    v58);
                }
                attackCardSelectWindow = v4->fields.attackCardSelectWindow;
                v64 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_int__string__TypeInfo);
                System_Action_int__object____ctor(
                  v64,
                  (Il2CppObject *)v4,
                  Method_DebugInputAttackCardExcuteComponent_TapSelectAttackCardTypeCallback__,
                  0);
                if ( attackCardSelectWindow )
                {
                  DebugAttackCardSelectComponent__Open(
                    attackCardSelectWindow,
                    (System_Action_int__string__o *)v64,
                    (System_Collections_Generic_List_string__o *)v8,
                    v65);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  DebugInputAttackCardExcuteComponent_o *v29; // x1
  Il2CppClass **v30; // x0
  bool v31; // nf
  DebugAttackCardSelectComponent_o *attackCardSelectWindow; // x21
  System_Action_T1__T2__o *v33; // x22
  const MethodInfo *v34; // x3
  int v35; // [xsp+Ch] [xbp-24h] BYREF

  v3 = (UnityEngine_Object_o *)parentGameObject;
  v4 = this;
  if ( (byte_5971E5B & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__string__TypeInfo);
    sub_2213A60(&Method_DebugInputAttackCardExcuteComponent_TapServantSelectCallback__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    this = (DebugInputAttackCardExcuteComponent_o *)sub_2213A60(&StringLiteral_26900/*"番目"*/);
    byte_5971E5B = 1;
  }
  v35 = 0;
  if ( !v3 )
    goto LABEL_25;
  name = UnityEngine_Object__get_name(v3, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)UnityEngine_Object__get_name(v3, 0);
  if ( !this || !name )
    goto LABEL_25;
  v6 = System_String__Substring_75702848(name, LODWORD(this->fields.m_CachedPtr) - 1, 1, 0);
  this = (DebugInputAttackCardExcuteComponent_o *)System_Int32__Parse(v6, 0);
  if ( (int)this < 1 )
    return;
  servantSelectButtonList = v4->fields.servantSelectButtonList;
  if ( !servantSelectButtonList )
    goto LABEL_25;
  if ( (int)this > SLODWORD(servantSelectButtonList->max_length) )
    return;
  v4->fields.lastOpenAttackCardSelectButton = (_DWORD)this - 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( (byte_5971E58 & 1) == 0 )
  {
    this = (DebugInputAttackCardExcuteComponent_o *)sub_2213A60(&StringLiteral_26815/*"サーヴァント指定なし"*/);
    byte_5971E58 = 1;
  }
  if ( !v8 )
    goto LABEL_25;
  items = v8->fields._items;
  parentGameObject = (UnityEngine_GameObject_o *)StringLiteral_26815/*"サーヴァント指定なし"*/;
  v16 = Method_System_Collections_Generic_List_string__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v8,
      (Il2CppObject *)parentGameObject,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v8->fields._size = size + 1;
    v18[4] = (Il2CppClass *)parentGameObject;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)parentGameObject, v9, v10, v11, v12, v13, v14);
  }
  v35 = 1;
  do
  {
    v19 = System_Int32__ToString((int32_t)&v35, 0);
    this = (DebugInputAttackCardExcuteComponent_o *)System_String__Concat_75651716(
                                                      v19,
                                                      (System_String_o *)StringLiteral_26900/*"番目"*/,
                                                      0);
    v26 = v8->fields._items;
    v27 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v26 )
      goto LABEL_25;
    v28 = v8->fields._size;
    v29 = this;
    if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        (Il2CppObject *)this,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &v26->obj.klass + v28;
      v8->fields._size = v28 + 1;
      v30[4] = (Il2CppClass *)v29;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v29, v20, v21, v22, v23, v24, v25);
    }
    v31 = v35 - 3 < 0;
    ++v35;
  }
  while ( v31 != __OFSUB__(v35, 4) );
  attackCardSelectWindow = v4->fields.attackCardSelectWindow;
  v33 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_int__string__TypeInfo);
  System_Action_int__object____ctor(
    v33,
    (Il2CppObject *)v4,
    Method_DebugInputAttackCardExcuteComponent_TapServantSelectCallback__,
    0);
  if ( !attackCardSelectWindow )
LABEL_25:
    sub_2213CDC(this, parentGameObject);
  DebugAttackCardSelectComponent__Open(
    attackCardSelectWindow,
    (System_Action_int__string__o *)v33,
    (System_Collections_Generic_List_string__o *)v8,
    v34);
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
  struct UIWidget_OnDimensionsChanged_o *onChange; // x10
  intptr_t method_ptr; // x9
  _DWORD *monitor; // x10
  struct UILabel_array *attackCardTypeNameList; // x9

  if ( (byte_5971E5E & 1) == 0 )
  {
    sub_2213A60(&DebugInputAttackCardExcuteComponent_TypeInfo);
    byte_5971E5E = 1;
  }
  v11 = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
  if ( !*(&DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo, *(_QWORD *)&idx);
    v11 = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
  }
  onChange = v11->fields.onChange;
  method_ptr = onChange->fields.method_ptr;
  if ( !method_ptr )
    goto LABEL_13;
  if ( *(_DWORD *)(method_ptr + 24) <= (unsigned int)idx )
    goto LABEL_14;
  monitor = onChange->monitor;
  *(_BYTE *)(method_ptr + idx + 32) = treasure;
  if ( !monitor )
    goto LABEL_13;
  if ( monitor[6] <= (unsigned int)idx )
    goto LABEL_14;
  attackCardTypeNameList = this->fields.attackCardTypeNameList;
  monitor[idx + 8] = commandType;
  if ( !attackCardTypeNameList )
    goto LABEL_13;
  if ( LODWORD(attackCardTypeNameList->max_length) <= idx )
LABEL_14:
    sub_2213CE4(v11);
  v11 = attackCardTypeNameList->m_Items[idx];
  if ( !v11 )
LABEL_13:
    sub_2213CDC(v11, *(_QWORD *)&idx);
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
  char *v11; // x10
  struct UILabel_array *servantIdxList; // x9

  if ( (byte_5971E5D & 1) == 0 )
  {
    sub_2213A60(&DebugInputAttackCardExcuteComponent_TypeInfo);
    byte_5971E5D = 1;
  }
  v9 = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
  if ( !*(&DebugInputAttackCardExcuteComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DebugInputAttackCardExcuteComponent_TypeInfo, *(_QWORD *)&idx);
    v9 = (UILabel_o *)DebugInputAttackCardExcuteComponent_TypeInfo;
  }
  klass = v9->fields.onChange->klass;
  if ( !klass )
    goto LABEL_11;
  if ( LODWORD(klass->_1.namespaze) <= idx )
    goto LABEL_12;
  v11 = (char *)klass + 4 * idx;
  servantIdxList = this->fields.servantIdxList;
  *((_DWORD *)v11 + 8) = servantIdx;
  if ( !servantIdxList )
    goto LABEL_11;
  if ( LODWORD(servantIdxList->max_length) <= idx )
LABEL_12:
    sub_2213CE4(v9);
  v9 = servantIdxList->m_Items[idx];
  if ( !v9 )
LABEL_11:
    sub_2213CDC(v9, *(_QWORD *)&idx);
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

  if ( idx <= 1 )
  {
    if ( !idx )
    {
      lastOpenAttackCardSelectButton = this->fields.lastOpenAttackCardSelectButton;
      v7 = 0;
LABEL_13:
      v8 = 0;
      goto LABEL_9;
    }
    if ( idx != 1 )
      return;
    lastOpenAttackCardSelectButton = this->fields.lastOpenAttackCardSelectButton;
    v7 = 0;
    v8 = 1;
  }
  else
  {
    switch ( idx )
    {
      case 2:
        lastOpenAttackCardSelectButton = this->fields.lastOpenAttackCardSelectButton;
        v7 = 0;
        v8 = 2;
        break;
      case 3:
        lastOpenAttackCardSelectButton = this->fields.lastOpenAttackCardSelectButton;
        v7 = 0;
        v8 = 3;
        break;
      case 4:
        lastOpenAttackCardSelectButton = this->fields.lastOpenAttackCardSelectButton;
        v7 = 1;
        goto LABEL_13;
      default:
        return;
    }
  }
LABEL_9:
  DebugInputAttackCardExcuteComponent__SetAttackCardTypeData(this, lastOpenAttackCardSelectButton, v7, v8, name, v4);
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