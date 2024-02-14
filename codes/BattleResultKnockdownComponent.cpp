// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultKnockdownComponent___ctor(BattleResultKnockdownComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int v5; // s0
  int v6; // s1
  int v7; // s2
  int v8; // s3
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int v15; // s0
  int v16; // s1
  int v17; // s2
  int v18; // s3
  __int64 v19; // x20
  int v20; // s0
  int v21; // s1
  int v22; // s2
  int v23; // s3
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  int v30; // s0
  int v31; // s1
  int v32; // s2
  int v33; // s3
  __int64 v34; // x0

  if ( (byte_4214939 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Color___TypeInfo, method);
    byte_4214939 = 1;
  }
  v3 = sub_B0D8BC(UnityEngine_Color___TypeInfo, 2LL);
  *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_white(0LL);
  if ( !v3 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v3 + 24)
    || (*(_DWORD *)(v3 + 32) = v5,
        *(_DWORD *)(v3 + 36) = v6,
        *(_DWORD *)(v3 + 40) = v7,
        *(_DWORD *)(v3 + 44) = v8,
        *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL),
        *(_DWORD *)(v3 + 24) <= 1u) )
  {
LABEL_10:
    v34 = sub_B0D9A8(v4);
    sub_B0D948(v34, 0LL);
  }
  *(_DWORD *)(v3 + 48) = v15;
  *(_DWORD *)(v3 + 52) = v16;
  *(_DWORD *)(v3 + 56) = v17;
  *(_DWORD *)(v3 + 60) = v18;
  this->fields.battleColor = (struct UnityEngine_Color_array *)v3;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.battleColor,
    (System_Int32_array **)v3,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v19 = sub_B0D8BC(UnityEngine_Color___TypeInfo, 2LL);
  *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_white(0LL);
  if ( !v19 )
LABEL_11:
    sub_B0D97C(v4);
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_10;
  *(_DWORD *)(v19 + 32) = v20;
  *(_DWORD *)(v19 + 36) = v21;
  *(_DWORD *)(v19 + 40) = v22;
  *(_DWORD *)(v19 + 44) = v23;
  *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_yellow(0LL);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_10;
  *(_DWORD *)(v19 + 48) = v30;
  *(_DWORD *)(v19 + 52) = v31;
  *(_DWORD *)(v19 + 56) = v32;
  *(_DWORD *)(v19 + 60) = v33;
  this->fields.recordColor = (struct UnityEngine_Color_array *)v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.recordColor,
    (System_Int32_array **)v19,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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
  __int64 v10; // x0

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
  {
LABEL_10:
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
  }
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
    sub_B0D97C(this);
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
  __int64 v11; // x1
  __int64 v12; // x1
  QuestKnockdownInfo_Fields *p_fields; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x1
  signed int max_length; // w8
  UILabel_o *v17; // x21
  int64_t *p_totalDamage; // x20
  int64_t totalDamage; // t1
  System_String_o *v20; // x1
  __int64 v21; // x20
  __int64 v22; // x0
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4214938 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, labelArray);
    sub_B0D8A4(&StringLiteral_2461/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, v11);
    this = (BattleResultKnockdownComponent_o *)sub_B0D8A4(&StringLiteral_344/*"#,#"*/, v12);
    byte_4214938 = 1;
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
    v14 = System_Int64__ToString_38475816((int64_t)p_fields, (System_String_o *)StringLiteral_344/*"#,#"*/, 0LL);
  v15 = v14;
  if ( !labelArray->max_length )
    goto LABEL_30;
  this = (BattleResultKnockdownComponent_o *)labelArray->m_Items[0];
  if ( !this )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)this, v15, 0LL);
  max_length = labelArray->max_length;
  if ( max_length <= 1 )
    goto LABEL_23;
  v17 = labelArray->m_Items[1];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleResultKnockdownComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2461/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, 0LL);
  if ( !v17 )
    goto LABEL_29;
  UILabel__set_text(v17, (System_String_o *)this, 0LL);
  max_length = labelArray->max_length;
  if ( max_length < 3 )
    goto LABEL_23;
  totalDamage = info->fields.totalDamage;
  p_totalDamage = &info->fields.totalDamage;
  if ( totalDamage <= 0 )
    v14 = System_Int64__ToString((int64_t)p_totalDamage, 0LL);
  else
    v14 = System_Int64__ToString_38475816((int64_t)p_totalDamage, (System_String_o *)StringLiteral_344/*"#,#"*/, 0LL);
  v20 = v14;
  if ( labelArray->max_length <= 2 )
    goto LABEL_30;
  this = (BattleResultKnockdownComponent_o *)labelArray->m_Items[2];
  if ( !this )
LABEL_29:
    sub_B0D97C(this);
  UILabel__set_text((UILabel_o *)this, v20, 0LL);
  max_length = labelArray->max_length;
LABEL_23:
  if ( max_length >= 1 )
  {
    v21 = 0LL;
    while ( (unsigned int)v21 < max_length )
    {
      this = (BattleResultKnockdownComponent_o *)labelArray->m_Items[v21];
      if ( !this )
        goto LABEL_29;
      v23.fields.r = r;
      v23.fields.g = g;
      v23.fields.b = b;
      v23.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v23, 0LL);
      max_length = labelArray->max_length;
      if ( (int)++v21 >= max_length )
        return;
    }
LABEL_30:
    v22 = sub_B0D9A8(v14);
    sub_B0D948(v22, 0LL);
  }
}