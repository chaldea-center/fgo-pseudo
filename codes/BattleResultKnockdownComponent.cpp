void __fastcall BattleResultKnockdownComponent___ctor(BattleResultKnockdownComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int v12; // w8
  int64_t v13; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int v25; // w8
  __int128 v26; // [xsp+0h] [xbp-30h]

  if ( (byte_4B19582 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, method, v2);
    byte_4B19582 = 1;
  }
  v4 = sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_11;
  v12 = *(_DWORD *)(v4 + 24);
  v13 = v4;
  if ( !v12 )
    goto LABEL_10;
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v4 + 32) = _Q0;
  if ( v12 == 1 )
LABEL_10:
    sub_1BCAA44(v4, v13);
  *(_OWORD *)(v4 + 48) = _Q0;
  this->fields.battleColor = (struct UnityEngine_Color_array *)v4;
  v26 = _Q0;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleColor, v4, v6, v7, v8, v9, v10, v11);
  v4 = sub_1BCA888(UnityEngine_Color___TypeInfo, 2LL);
  if ( !v4 )
LABEL_11:
    sub_1BCAA3C(v4, v5);
  v25 = *(_DWORD *)(v4 + 24);
  v13 = v4;
  if ( !v25 )
    goto LABEL_10;
  *(_OWORD *)(v4 + 32) = v26;
  if ( v25 == 1 )
    goto LABEL_10;
  *(_OWORD *)(v4 + 48) = xmmword_BD3330;
  this->fields.recordColor = (struct UnityEngine_Color_array *)v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.recordColor, v4, v19, v20, v21, v22, v23, v24);
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
    sub_1BCAA44(this, result);
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
    sub_1BCAA3C(this, result);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  QuestKnockdownInfo_Fields *p_fields; // x0
  System_String_o *v16; // x0
  int max_length; // w8
  UILabel_o *v18; // x21
  int64_t *p_totalDamage; // x20
  int64_t totalDamage; // t1
  __int64 v21; // x20
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v10 = labelArray;
  if ( (byte_4B19581 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, labelArray, info);
    sub_1BCA7E0(&StringLiteral_2936/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, v11, v12);
    this = (BattleResultKnockdownComponent_o *)sub_1BCA7E0(&StringLiteral_423/*"#,#"*/, v13, v14);
    byte_4B19581 = 1;
  }
  if ( !v10 )
    goto LABEL_28;
  if ( (int)v10->max_length < 1 )
    return;
  if ( !info )
    goto LABEL_28;
  p_fields = &info->fields;
  if ( info->fields.knockdownNum <= 0 )
    v16 = System_Int64__ToString((int64_t)p_fields, 0LL);
  else
    v16 = System_Int64__ToString_63212004((int64_t)p_fields, (System_String_o *)StringLiteral_423/*"#,#"*/, 0LL);
  labelArray = (UILabel_array *)v16;
  if ( !v10->max_length )
    goto LABEL_29;
  this = (BattleResultKnockdownComponent_o *)v10->m_Items[0];
  if ( !this )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)labelArray, 0LL);
  max_length = v10->max_length;
  if ( max_length <= 1 )
    goto LABEL_22;
  v18 = v10->m_Items[1];
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, labelArray);
  this = (BattleResultKnockdownComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2936/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, 0LL);
  if ( !v18 )
    goto LABEL_28;
  UILabel__set_text(v18, (System_String_o *)this, 0LL);
  max_length = v10->max_length;
  if ( max_length < 3 )
    goto LABEL_22;
  totalDamage = info->fields.totalDamage;
  p_totalDamage = &info->fields.totalDamage;
  if ( totalDamage <= 0 )
    v16 = System_Int64__ToString((int64_t)p_totalDamage, 0LL);
  else
    v16 = System_Int64__ToString_63212004((int64_t)p_totalDamage, (System_String_o *)StringLiteral_423/*"#,#"*/, 0LL);
  labelArray = (UILabel_array *)v16;
  if ( v10->max_length <= 2 )
    goto LABEL_29;
  this = (BattleResultKnockdownComponent_o *)v10->m_Items[2];
  if ( !this )
LABEL_28:
    sub_1BCAA3C(this, labelArray);
  UILabel__set_text((UILabel_o *)this, (System_String_o *)labelArray, 0LL);
  max_length = v10->max_length;
LABEL_22:
  if ( max_length >= 1 )
  {
    v21 = 0LL;
    while ( (unsigned int)v21 < max_length )
    {
      this = (BattleResultKnockdownComponent_o *)v10->m_Items[v21];
      if ( !this )
        goto LABEL_28;
      v22.fields.r = r;
      v22.fields.g = g;
      v22.fields.b = b;
      v22.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v22, 0LL);
      max_length = v10->max_length;
      if ( (int)++v21 >= max_length )
        return;
    }
LABEL_29:
    sub_1BCAA44(v16, labelArray);
  }
}