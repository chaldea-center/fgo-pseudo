void BattleResultKnockdownComponent___ctor(BattleResultKnockdownComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int v6; // w8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int v14; // w8
  __int128 v15; // [xsp+0h] [xbp-30h]

  if ( (byte_4C4687F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Color___TypeInfo);
    byte_4C4687F = 1;
  }
  v3 = sub_1C37100(UnityEngine_Color___TypeInfo, 2);
  if ( !v3 )
    goto LABEL_11;
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v6 )
    goto LABEL_10;
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v3 + 32) = _Q0;
  if ( v6 == 1 )
LABEL_10:
    sub_1C372BC(v3);
  *(_OWORD *)(v3 + 48) = _Q0;
  this->fields.battleColor = (struct UnityEngine_Color_array *)v3;
  v15 = _Q0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.battleColor, v3, v4, v5);
  v3 = sub_1C37100(UnityEngine_Color___TypeInfo, 2);
  if ( !v3 )
LABEL_11:
    sub_1C372B4(v3);
  v14 = *(_DWORD *)(v3 + 24);
  if ( !v14 )
    goto LABEL_10;
  *(_OWORD *)(v3 + 32) = v15;
  if ( v14 == 1 )
    goto LABEL_10;
  *(_OWORD *)(v3 + 48) = xmmword_C0F570;
  this->fields.recordColor = (struct UnityEngine_Color_array *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.recordColor, v3, v12, v13);
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleResultKnockdownComponent__setData(
        BattleResultKnockdownComponent_o *this,
        QuestKnockdownResult_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UnityEngine_Color_array *battleColor; // x8
  BattleResultKnockdownComponent_o *v5; // x19
  _BOOL8 isNewRecord; // x21
  const MethodInfo *v8; // x3
  struct UnityEngine_Color_array *recordColor; // x8

  if ( !result )
    goto LABEL_9;
  battleColor = this->fields.battleColor;
  v5 = this;
  if ( !battleColor )
    goto LABEL_9;
  isNewRecord = result->fields.isNewRecord;
  if ( (unsigned int)isNewRecord >= LODWORD(battleColor->max_length) )
    goto LABEL_10;
  BattleResultKnockdownComponent__setKnockdownInfoLabel(
    this,
    this->fields.battleLabels,
    result->fields.current,
    battleColor->m_Items[isNewRecord],
    v3);
  recordColor = v5->fields.recordColor;
  if ( !recordColor )
    goto LABEL_9;
  if ( (unsigned int)isNewRecord >= LODWORD(recordColor->max_length) )
LABEL_10:
    sub_1C372BC(this);
  BattleResultKnockdownComponent__setKnockdownInfoLabel(
    this,
    v5->fields.recordLabels,
    result->fields.record,
    recordColor->m_Items[isNewRecord],
    v8);
  this = (BattleResultKnockdownComponent_o *)v5->fields.recordRenewalSp;
  if ( !this
    || (this = (BattleResultKnockdownComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0)) == 0 )
  {
LABEL_9:
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, result->fields.isNewRecord, 0);
  v5->fields.isOpenPossible = result->fields.isTrialOpen;
}


void BattleResultKnockdownComponent__setKnockdownInfoLabel(
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
  QuestKnockdownInfo_Fields *p_fields; // x0
  System_String_o *v12; // x0
  System_String_o *v13; // x1
  int max_length; // w8
  UILabel_o *v15; // x21
  int64_t *p_totalDamage; // x20
  int64_t totalDamage; // t1
  System_String_o *v18; // x1
  __int64 v19; // x20
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C4687E & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_2798/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/);
    this = (BattleResultKnockdownComponent_o *)sub_1C37058(&StringLiteral_396/*"#,#"*/);
    byte_4C4687E = 1;
  }
  if ( !labelArray )
    goto LABEL_28;
  if ( SLODWORD(labelArray->max_length) < 1 )
    return;
  if ( !info )
    goto LABEL_28;
  p_fields = &info->fields;
  if ( info->fields.knockdownNum <= 0 )
    v12 = System_Int64__ToString((int64_t)p_fields, 0);
  else
    v12 = System_Int64__ToString_65076940((int64_t)p_fields, (System_String_o *)StringLiteral_396/*"#,#"*/, 0);
  v13 = v12;
  if ( !LODWORD(labelArray->max_length) )
    goto LABEL_29;
  this = (BattleResultKnockdownComponent_o *)labelArray->m_Items[0];
  if ( !this )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)this, v13, 0);
  max_length = labelArray->max_length;
  if ( max_length <= 1 )
    goto LABEL_22;
  v15 = labelArray->m_Items[1];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleResultKnockdownComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2798/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, 0);
  if ( !v15 )
    goto LABEL_28;
  UILabel__set_text(v15, (System_String_o *)this, 0);
  max_length = labelArray->max_length;
  if ( max_length < 3 )
    goto LABEL_22;
  totalDamage = info->fields.totalDamage;
  p_totalDamage = &info->fields.totalDamage;
  if ( totalDamage <= 0 )
    v12 = System_Int64__ToString((int64_t)p_totalDamage, 0);
  else
    v12 = System_Int64__ToString_65076940((int64_t)p_totalDamage, (System_String_o *)StringLiteral_396/*"#,#"*/, 0);
  v18 = v12;
  if ( LODWORD(labelArray->max_length) <= 2 )
    goto LABEL_29;
  this = (BattleResultKnockdownComponent_o *)labelArray->m_Items[2];
  if ( !this )
LABEL_28:
    sub_1C372B4(this);
  UILabel__set_text((UILabel_o *)this, v18, 0);
  max_length = labelArray->max_length;
LABEL_22:
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( (unsigned int)v19 < max_length )
    {
      this = (BattleResultKnockdownComponent_o *)labelArray->m_Items[v19];
      if ( !this )
        goto LABEL_28;
      v20.fields.r = r;
      v20.fields.g = g;
      v20.fields.b = b;
      v20.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v20, 0);
      max_length = labelArray->max_length;
      if ( (int)++v19 >= max_length )
        return;
    }
LABEL_29:
    sub_1C372BC(v12);
  }
}