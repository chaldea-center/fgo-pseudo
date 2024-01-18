// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultKnockdownComponent___ctor(BattleResultKnockdownComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int v6; // s0
  int v7; // s1
  int v8; // s2
  int v9; // s3
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int v16; // s0
  int v17; // s1
  int v18; // s2
  int v19; // s3
  __int64 v20; // x20
  int v21; // s0
  int v22; // s1
  int v23; // s2
  int v24; // s3
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int v31; // s0
  int v32; // s1
  int v33; // s2
  int v34; // s3
  __int64 v35; // x0

  if ( (byte_4187F19 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Color___TypeInfo, method);
    byte_4187F19 = 1;
  }
  v3 = sub_B2C374(UnityEngine_Color___TypeInfo, 2LL);
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
  if ( !v3 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v3 + 24)
    || (*(_DWORD *)(v3 + 32) = v6,
        *(_DWORD *)(v3 + 36) = v7,
        *(_DWORD *)(v3 + 40) = v8,
        *(_DWORD *)(v3 + 44) = v9,
        *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL),
        *(_DWORD *)(v3 + 24) <= 1u) )
  {
LABEL_10:
    v35 = sub_B2C460(v4);
    sub_B2C400(v35, 0LL);
  }
  *(_DWORD *)(v3 + 48) = v16;
  *(_DWORD *)(v3 + 52) = v17;
  *(_DWORD *)(v3 + 56) = v18;
  *(_DWORD *)(v3 + 60) = v19;
  this->fields.battleColor = (struct UnityEngine_Color_array *)v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.battleColor,
    (System_Int32_array **)v3,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = sub_B2C374(UnityEngine_Color___TypeInfo, 2LL);
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
  if ( !v20 )
LABEL_11:
    sub_B2C434(v4, v5);
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_10;
  *(_DWORD *)(v20 + 32) = v21;
  *(_DWORD *)(v20 + 36) = v22;
  *(_DWORD *)(v20 + 40) = v23;
  *(_DWORD *)(v20 + 44) = v24;
  *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_yellow(0LL);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_10;
  *(_DWORD *)(v20 + 48) = v31;
  *(_DWORD *)(v20 + 52) = v32;
  *(_DWORD *)(v20 + 56) = v33;
  *(_DWORD *)(v20 + 60) = v34;
  this->fields.recordColor = (struct UnityEngine_Color_array *)v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.recordColor,
    (System_Int32_array **)v20,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
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
    sub_B2C434(this, result);
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
  int max_length; // w8
  UILabel_o *v16; // x21
  int64_t *p_totalDamage; // x20
  int64_t totalDamage; // t1
  __int64 v19; // x20
  __int64 v20; // x0
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v10 = labelArray;
  if ( (byte_4187F18 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, labelArray);
    sub_B2C35C(&StringLiteral_2450/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, v11);
    this = (BattleResultKnockdownComponent_o *)sub_B2C35C(&StringLiteral_339/*"#,#"*/, v12);
    byte_4187F18 = 1;
  }
  if ( !v10 )
    goto LABEL_29;
  if ( (int)v10->max_length < 1 )
    return;
  if ( !info )
    goto LABEL_29;
  p_fields = &info->fields;
  if ( info->fields.knockdownNum <= 0 )
    v14 = System_Int64__ToString((int64_t)p_fields, 0LL);
  else
    v14 = System_Int64__ToString_38384200((int64_t)p_fields, (System_String_o *)StringLiteral_339/*"#,#"*/, 0LL);
  labelArray = (UILabel_array *)v14;
  if ( !v10->max_length )
    goto LABEL_30;
  this = (BattleResultKnockdownComponent_o *)v10->m_Items[0];
  if ( !this )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)labelArray, 0LL);
  max_length = v10->max_length;
  if ( max_length <= 1 )
    goto LABEL_23;
  v16 = v10->m_Items[1];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleResultKnockdownComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2450/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, 0LL);
  if ( !v16 )
    goto LABEL_29;
  UILabel__set_text(v16, (System_String_o *)this, 0LL);
  max_length = v10->max_length;
  if ( max_length < 3 )
    goto LABEL_23;
  totalDamage = info->fields.totalDamage;
  p_totalDamage = &info->fields.totalDamage;
  if ( totalDamage <= 0 )
    v14 = System_Int64__ToString((int64_t)p_totalDamage, 0LL);
  else
    v14 = System_Int64__ToString_38384200((int64_t)p_totalDamage, (System_String_o *)StringLiteral_339/*"#,#"*/, 0LL);
  labelArray = (UILabel_array *)v14;
  if ( v10->max_length <= 2 )
    goto LABEL_30;
  this = (BattleResultKnockdownComponent_o *)v10->m_Items[2];
  if ( !this )
LABEL_29:
    sub_B2C434(this, labelArray);
  UILabel__set_text((UILabel_o *)this, (System_String_o *)labelArray, 0LL);
  max_length = v10->max_length;
LABEL_23:
  if ( max_length >= 1 )
  {
    v19 = 0LL;
    while ( (unsigned int)v19 < max_length )
    {
      this = (BattleResultKnockdownComponent_o *)v10->m_Items[v19];
      if ( !this )
        goto LABEL_29;
      v21.fields.r = r;
      v21.fields.g = g;
      v21.fields.b = b;
      v21.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v21, 0LL);
      max_length = v10->max_length;
      if ( (int)++v19 >= max_length )
        return;
    }
LABEL_30:
    v20 = sub_B2C460(v14);
    sub_B2C400(v20, 0LL);
  }
}