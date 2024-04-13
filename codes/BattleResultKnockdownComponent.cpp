// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultKnockdownComponent___ctor(BattleResultKnockdownComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int v8; // s0
  int v9; // s1
  int v10; // s2
  int v11; // s3
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // s0
  int v19; // s1
  int v20; // s2
  int v21; // s3
  __int64 v22; // x20
  int v23; // s0
  int v24; // s1
  int v25; // s2
  int v26; // s3
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int v33; // s0
  int v34; // s1
  int v35; // s2
  int v36; // s3
  __int64 v37; // x0

  if ( (byte_42E895D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Color___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E895D = 1;
  }
  v5 = sub_B5D5DC(UnityEngine_Color___TypeInfo, 2LL);
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
  if ( !v5 )
    goto LABEL_11;
  if ( !*(_DWORD *)(v5 + 24)
    || (*(_DWORD *)(v5 + 32) = v8,
        *(_DWORD *)(v5 + 36) = v9,
        *(_DWORD *)(v5 + 40) = v10,
        *(_DWORD *)(v5 + 44) = v11,
        *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL),
        *(_DWORD *)(v5 + 24) <= 1u) )
  {
LABEL_10:
    v37 = sub_B5D6C8(v6);
    sub_B5D668(v37, 0LL);
  }
  *(_DWORD *)(v5 + 48) = v18;
  *(_DWORD *)(v5 + 52) = v19;
  *(_DWORD *)(v5 + 56) = v20;
  *(_DWORD *)(v5 + 60) = v21;
  this->fields.battleColor = (struct UnityEngine_Color_array *)v5;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.battleColor,
    (System_Int32_array **)v5,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v22 = sub_B5D5DC(UnityEngine_Color___TypeInfo, 2LL);
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
  if ( !v22 )
LABEL_11:
    sub_B5D69C(v6, v7);
  if ( !*(_DWORD *)(v22 + 24) )
    goto LABEL_10;
  *(_DWORD *)(v22 + 32) = v23;
  *(_DWORD *)(v22 + 36) = v24;
  *(_DWORD *)(v22 + 40) = v25;
  *(_DWORD *)(v22 + 44) = v26;
  *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_yellow(0LL);
  if ( *(_DWORD *)(v22 + 24) <= 1u )
    goto LABEL_10;
  *(_DWORD *)(v22 + 48) = v33;
  *(_DWORD *)(v22 + 52) = v34;
  *(_DWORD *)(v22 + 56) = v35;
  *(_DWORD *)(v22 + 60) = v36;
  this->fields.recordColor = (struct UnityEngine_Color_array *)v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.recordColor,
    (System_Int32_array **)v22,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  BattleResultPopupWindowComponent___ctor((BattleResultPopupWindowComponent_o *)this, 0LL);
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
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
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
    sub_B5D69C(this, result);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  QuestKnockdownInfo_Fields *p_fields; // x0
  System_String_o *v18; // x0
  int max_length; // w8
  UILabel_o *v20; // x21
  int64_t *p_totalDamage; // x20
  int64_t totalDamage; // t1
  __int64 v23; // x20
  __int64 v24; // x0
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  v10 = labelArray;
  if ( (byte_42E895C & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)labelArray, (_DWORD)info, method);
    sub_B5D5C4(&StringLiteral_2503/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, v11, v12, v13);
    this = (BattleResultKnockdownComponent_o *)sub_B5D5C4(&StringLiteral_345/*"#,#"*/, v14, v15, v16);
    byte_42E895C = 1;
  }
  if ( !v10 )
    goto LABEL_29;
  if ( (int)v10->max_length < 1 )
    return;
  if ( !info )
    goto LABEL_29;
  p_fields = &info->fields;
  if ( info->fields.knockdownNum <= 0 )
    v18 = System_Int64__ToString((int64_t)p_fields, 0LL);
  else
    v18 = System_Int64__ToString_39744560((int64_t)p_fields, (System_String_o *)StringLiteral_345/*"#,#"*/, 0LL);
  labelArray = (UILabel_array *)v18;
  if ( !v10->max_length )
    goto LABEL_30;
  this = (BattleResultKnockdownComponent_o *)v10->m_Items[0];
  if ( !this )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)labelArray, 0LL);
  max_length = v10->max_length;
  if ( max_length <= 1 )
    goto LABEL_23;
  v20 = v10->m_Items[1];
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (BattleResultKnockdownComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2503/*"BATTLE_KNOCKDOWN_COUNT_NAME"*/, 0LL);
  if ( !v20 )
    goto LABEL_29;
  UILabel__set_text(v20, (System_String_o *)this, 0LL);
  max_length = v10->max_length;
  if ( max_length < 3 )
    goto LABEL_23;
  totalDamage = info->fields.totalDamage;
  p_totalDamage = &info->fields.totalDamage;
  if ( totalDamage <= 0 )
    v18 = System_Int64__ToString((int64_t)p_totalDamage, 0LL);
  else
    v18 = System_Int64__ToString_39744560((int64_t)p_totalDamage, (System_String_o *)StringLiteral_345/*"#,#"*/, 0LL);
  labelArray = (UILabel_array *)v18;
  if ( v10->max_length <= 2 )
    goto LABEL_30;
  this = (BattleResultKnockdownComponent_o *)v10->m_Items[2];
  if ( !this )
LABEL_29:
    sub_B5D69C(this, labelArray);
  UILabel__set_text((UILabel_o *)this, (System_String_o *)labelArray, 0LL);
  max_length = v10->max_length;
LABEL_23:
  if ( max_length >= 1 )
  {
    v23 = 0LL;
    while ( (unsigned int)v23 < max_length )
    {
      this = (BattleResultKnockdownComponent_o *)v10->m_Items[v23];
      if ( !this )
        goto LABEL_29;
      v25.fields.r = r;
      v25.fields.g = g;
      v25.fields.b = b;
      v25.fields.a = a;
      UIWidget__set_color((UIWidget_o *)this, v25, 0LL);
      max_length = v10->max_length;
      if ( (int)++v23 >= max_length )
        return;
    }
LABEL_30:
    v24 = sub_B5D6C8(v18);
    sub_B5D668(v24, 0LL);
  }
}