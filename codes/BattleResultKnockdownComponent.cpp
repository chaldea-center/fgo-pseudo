void __fastcall BattleResultKnockdownComponent___ctor(BattleResultKnockdownComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  int v7; // w8
  __int64 v8; // x1
  const MethodInfo *v14; // x3
  int v15; // w8
  __int128 v16; // [xsp+0h] [xbp-30h]

  if ( (byte_4B1FC65 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Color___TypeInfo, method);
    byte_4B1FC65 = 1;
  }
  v3 = sub_1BCB0A0(UnityEngine_Color___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_11;
  v7 = *(_DWORD *)(v3 + 24);
  v8 = v3;
  if ( !v7 )
    goto LABEL_10;
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v3 + 32) = _Q0;
  if ( v7 == 1 )
LABEL_10:
    sub_1BCB25C(v3, v8, v5);
  *(_OWORD *)(v3 + 48) = _Q0;
  this->fields.battleColor = (struct UnityEngine_Color_array *)v3;
  v16 = _Q0;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleColor, v3, v5, v6);
  v3 = sub_1BCB0A0(UnityEngine_Color___TypeInfo, 2LL);
  if ( !v3 )
LABEL_11:
    sub_1BCB254(v3, v4);
  v15 = *(_DWORD *)(v3 + 24);
  v8 = v3;
  if ( !v15 )
    goto LABEL_10;
  *(_OWORD *)(v3 + 32) = v16;
  if ( v15 == 1 )
    goto LABEL_10;
  *(_OWORD *)(v3 + 48) = xmmword_BE2B60;
  this->fields.recordColor = (struct UnityEngine_Color_array *)v3;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.recordColor, v3, v5, v14);
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleResultKnockdownComponent__setData(
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
  if ( (unsigned int)isNewRecord >= battleColor->max_length )
    goto LABEL_10;
  BattleResultKnockdownComponent__setKnockdownInfoLabel(
    this,
    this->fields.battleLabels,
    result->fields.current,
    *(UnityEngine_Color_o *)&battleColor->m_Items[isNewRecord].fields.g,
    v3);
  recordColor = v5->fields.recordColor;
  if ( !recordColor )
    goto LABEL_9;
  if ( (unsigned int)isNewRecord >= recordColor->max_length )
LABEL_10:
    sub_1BCB25C(this, result, method);
  BattleResultKnockdownComponent__setKnockdownInfoLabel(
    this,
    v5->fields.recordLabels,
    result->fields.record,
    *(UnityEngine_Color_o *)&recordColor->m_Items[isNewRecord].fields.g,
    v8);
  this = (BattleResultKnockdownComponent_o *)v5->fields.recordRenewalSp;
  if ( !this
    || (this = (BattleResultKnockdownComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL)) == 0LL )
  {
LABEL_9:
    sub_1BCB254(this, result);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, result->fields.isNewRecord, 0LL);
  v5->fields.isOpenPossible = result->fields.isTrialOpen;
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
  UILabel_array *v10; // x19
  __int64 v11; // x1
  __int64 v12; // x1
  QuestKnockdownInfo_Fields *p_fields; // x0
  System_String_o *v14; // x0
  __int64 v15; // x2
  int max_length; // w8
  UILabel_o *v17; // x21
  int64_t *p_totalDamage; // x20
  int64_t totalDamage; // t1
  __int64 v20; // x20
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v10 = labelArray;
  if ( (byte_4B1FC64 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, labelArray);
    sub_1BCAFF8(&StringLiteral_2782/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, v11);
    this = (BattleResultKnockdownComponent_o *)sub_1BCAFF8(&StringLiteral_394/*"#,#"*/, v12);
    byte_4B1FC64 = 1;
  }
  if ( !v10 )
    goto LABEL_28;
  if ( (int)v10->max_length < 1 )
    return;
  if ( !info )
    goto LABEL_28;
  p_fields = &info->fields;
  if ( info->fields.knockdownNum <= 0 )
    v14 = System_Int64__ToString((int64_t)p_fields, 0LL);
  else
    v14 = System_Int64__ToString_63964312((int64_t)p_fields, (System_String_o *)StringLiteral_394/*"#,#"*/, 0LL);
  labelArray = (UILabel_array *)v14;
  if ( !v10->max_length )
    goto LABEL_29;
  this = (BattleResultKnockdownComponent_o *)v10->m_Items[0];
  if ( !this )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)labelArray, 0LL);
  max_length = v10->max_length;
  if ( max_length <= 1 )
    goto LABEL_22;
  v17 = v10->m_Items[1];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleResultKnockdownComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2782/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, 0LL);
  if ( !v17 )
    goto LABEL_28;
  UILabel__set_text(v17, (System_String_o *)this, 0LL);
  max_length = v10->max_length;
  if ( max_length < 3 )
    goto LABEL_22;
  totalDamage = info->fields.totalDamage;
  p_totalDamage = &info->fields.totalDamage;
  if ( totalDamage <= 0 )
    v14 = System_Int64__ToString((int64_t)p_totalDamage, 0LL);
  else
    v14 = System_Int64__ToString_63964312((int64_t)p_totalDamage, (System_String_o *)StringLiteral_394/*"#,#"*/, 0LL);
  labelArray = (UILabel_array *)v14;
  if ( v10->max_length <= 2 )
    goto LABEL_29;
  this = (BattleResultKnockdownComponent_o *)v10->m_Items[2];
  if ( !this )
LABEL_28:
    sub_1BCB254(this, labelArray);
  UILabel__set_text((UILabel_o *)this, (System_String_o *)labelArray, 0LL);
  max_length = v10->max_length;
LABEL_22:
  if ( max_length >= 1 )
  {
    v20 = 0LL;
    while ( (unsigned int)v20 < max_length )
    {
      this = (BattleResultKnockdownComponent_o *)v10->m_Items[v20];
      if ( !this )
        goto LABEL_28;
      v21.fields.r = r;
      v21.fields.g = g;
      v21.fields.b = b;
      v21.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v21, 0LL);
      max_length = v10->max_length;
      if ( (int)++v20 >= max_length )
        return;
    }
LABEL_29:
    sub_1BCB25C(v14, labelArray, v15);
  }
}