// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultKnockdownComponent___ctor(BattleResultKnockdownComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  int v8; // s0
  int v9; // s1
  int v10; // s2
  int v11; // s3
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int v17; // s0
  int v18; // s1
  int v19; // s2
  int v20; // s3
  __int64 v21; // x2
  __int64 v22; // x20
  int v23; // s0
  int v24; // s1
  int v25; // s2
  int v26; // s3
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int v32; // s0
  int v33; // s1
  int v34; // s2
  int v35; // s3

  if ( (byte_40FA3FA & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Color___TypeInfo, method);
    byte_40FA3FA = 1;
  }
  v4 = sub_B17014(UnityEngine_Color___TypeInfo, 2LL, v2);
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
  if ( !v4 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v4 + 24)
    || (*(_DWORD *)(v4 + 32) = v8,
        *(_DWORD *)(v4 + 36) = v9,
        *(_DWORD *)(v4 + 40) = v10,
        *(_DWORD *)(v4 + 44) = v11,
        *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_white(0LL),
        *(_DWORD *)(v4 + 24) <= 1u) )
  {
LABEL_10:
    sub_B17100(v5, v6, v7);
    sub_B170A0();
  }
  *(_DWORD *)(v4 + 48) = v17;
  *(_DWORD *)(v4 + 52) = v18;
  *(_DWORD *)(v4 + 56) = v19;
  *(_DWORD *)(v4 + 60) = v20;
  this->fields.battleColor = (struct UnityEngine_Color_array *)v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.battleColor,
    (System_Int32_array **)v4,
    v7,
    v12,
    v13,
    v14,
    v15,
    v16);
  v22 = sub_B17014(UnityEngine_Color___TypeInfo, 2LL, v21);
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
  if ( !v22 )
LABEL_11:
    sub_B170D4();
  if ( !*(_DWORD *)(v22 + 24) )
    goto LABEL_10;
  *(_DWORD *)(v22 + 32) = v23;
  *(_DWORD *)(v22 + 36) = v24;
  *(_DWORD *)(v22 + 40) = v25;
  *(_DWORD *)(v22 + 44) = v26;
  *(UnityEngine_Color_o *)&v32 = UnityEngine_Color__get_yellow(0LL);
  if ( *(_DWORD *)(v22 + 24) <= 1u )
    goto LABEL_10;
  *(_DWORD *)(v22 + 48) = v32;
  *(_DWORD *)(v22 + 52) = v33;
  *(_DWORD *)(v22 + 56) = v34;
  *(_DWORD *)(v22 + 60) = v35;
  this->fields.recordColor = (struct UnityEngine_Color_array *)v22;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.recordColor,
    (System_Int32_array **)v22,
    v7,
    v27,
    v28,
    v29,
    v30,
    v31);
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleResultKnockdownComponent__setData(
        BattleResultKnockdownComponent_o *this,
        QuestKnockdownResult_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UnityEngine_Color_array *battleColor; // x8
  _BOOL8 isNewRecord; // x21
  const MethodInfo *v8; // x3
  struct UnityEngine_Color_array *recordColor; // x8
  UnityEngine_Component_o *recordRenewalSp; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !result )
    goto LABEL_9;
  battleColor = this->fields.battleColor;
  if ( !battleColor )
    goto LABEL_9;
  isNewRecord = result->fields.isNewRecord;
  if ( (unsigned int)isNewRecord >= battleColor->max_length )
    goto LABEL_10;
  BattleResultKnockdownComponent__setKnockdownInfoLabel(
    this,
    this->fields.battleLabels,
    result->fields.current,
    *(UnityEngine_Color_o *)&battleColor->m_Items[isNewRecord].fields.g,
    v3);
  recordColor = this->fields.recordColor;
  if ( !recordColor )
    goto LABEL_9;
  if ( (unsigned int)isNewRecord >= recordColor->max_length )
  {
LABEL_10:
    sub_B17100(this, result, method);
    sub_B170A0();
  }
  BattleResultKnockdownComponent__setKnockdownInfoLabel(
    this,
    this->fields.recordLabels,
    result->fields.record,
    *(UnityEngine_Color_o *)&recordColor->m_Items[isNewRecord].fields.g,
    v8);
  recordRenewalSp = (UnityEngine_Component_o *)this->fields.recordRenewalSp;
  if ( !recordRenewalSp || (gameObject = UnityEngine_Component__get_gameObject(recordRenewalSp, 0LL)) == 0LL )
LABEL_9:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, result->fields.isNewRecord, 0LL);
  this->fields.isOpenPossible = result->fields.isTrialOpen;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultKnockdownComponent__setKnockdownInfoLabel(
        BattleResultKnockdownComponent_o *this,
        UILabel_array *labelArray,
        QuestKnockdownInfo_o *info,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v11; // x1
  __int64 v12; // x1
  QuestKnockdownInfo_Fields *p_fields; // x0
  System_String_o *v14; // x0
  __int64 v15; // x2
  System_String_o *v16; // x1
  UILabel_o *v17; // x0
  signed int max_length; // w8
  UILabel_o *v19; // x21
  System_String_o *v20; // x0
  int64_t *p_totalDamage; // x20
  int64_t totalDamage; // t1
  UILabel_o *v23; // x0
  __int64 v24; // x20
  UIWidget_o *v25; // x0
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_40FA3F9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, labelArray);
    sub_B16FFC(&StringLiteral_2441/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, v11);
    sub_B16FFC(&StringLiteral_339/*"#,#"*/, v12);
    byte_40FA3F9 = 1;
  }
  if ( !labelArray )
    goto LABEL_29;
  if ( (int)labelArray->max_length < 1 )
    return;
  if ( !info )
    goto LABEL_29;
  p_fields = &info->fields;
  if ( info->fields.knockdownNum <= 0 )
    v14 = System_Int64__ToString((int64_t)p_fields, 0LL);
  else
    v14 = System_Int64__ToString_38278592((int64_t)p_fields, (System_String_o *)StringLiteral_339/*"#,#"*/, 0LL);
  v16 = v14;
  if ( !labelArray->max_length )
    goto LABEL_30;
  v17 = labelArray->m_Items[0];
  if ( !v17 )
    goto LABEL_29;
  UILabel__set_text(v17, v16, 0LL);
  max_length = labelArray->max_length;
  if ( max_length <= 1 )
    goto LABEL_23;
  v19 = labelArray->m_Items[1];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2441/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, 0LL);
  if ( !v19 )
    goto LABEL_29;
  UILabel__set_text(v19, v20, 0LL);
  max_length = labelArray->max_length;
  if ( max_length < 3 )
    goto LABEL_23;
  totalDamage = info->fields.totalDamage;
  p_totalDamage = &info->fields.totalDamage;
  if ( totalDamage <= 0 )
    v14 = System_Int64__ToString((int64_t)p_totalDamage, 0LL);
  else
    v14 = System_Int64__ToString_38278592((int64_t)p_totalDamage, (System_String_o *)StringLiteral_339/*"#,#"*/, 0LL);
  v16 = v14;
  if ( labelArray->max_length <= 2 )
    goto LABEL_30;
  v23 = labelArray->m_Items[2];
  if ( !v23 )
LABEL_29:
    sub_B170D4();
  UILabel__set_text(v23, v16, 0LL);
  max_length = labelArray->max_length;
LABEL_23:
  if ( max_length >= 1 )
  {
    v24 = 0LL;
    while ( (unsigned int)v24 < max_length )
    {
      v25 = (UIWidget_o *)labelArray->m_Items[v24];
      if ( !v25 )
        goto LABEL_29;
      v26.fields.r = r;
      v26.fields.g = g;
      v26.fields.b = b;
      v26.fields.a = a;
      UIWidget__set_color(v25, v26, 0LL);
      max_length = labelArray->max_length;
      if ( (int)++v24 >= max_length )
        return;
    }
LABEL_30:
    sub_B17100(v14, v16, v15);
    sub_B170A0();
  }
}