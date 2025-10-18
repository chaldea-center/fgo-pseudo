void AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C3F3CB & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F3CB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.line;
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.manaInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0), (gameObject = this->fields.qpInfo) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.manaLabel) == 0)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel) == 0) )
  {
LABEL_10:
    sub_1C372B4(gameObject);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void AutoSellInfoComponent__SetData(
        AutoSellInfoComponent_o *this,
        int32_t mana,
        int64_t qp,
        int32_t befMana,
        int64_t befQp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v12; // x24
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  BalanceConfig_c *v19; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x1
  UILabel_o *v24; // x0
  struct UILabel_o *v25; // x23
  int v26; // w8
  Il2CppObject *v27; // x0
  System_String_o *v28; // x8
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v36; // x0
  int64_t QpMax; // x8
  struct UILabel_o *v38; // x19
  Il2CppObject *v39; // x0
  System_String_o *v40; // x1
  UILabel_o *v41; // x0
  struct UILabel_o *qpLabel; // x20
  __int64 v43; // x8
  Il2CppObject *v44; // x0
  System_String_o *v45; // x8
  int64_t v46; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C3F3CC & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&StringLiteral_25205/*"{0}{1:#,0}"*/);
    sub_1C37058(&StringLiteral_15924/*"[FF0000]{0}{1:#,0}[-]"*/);
    byte_4C3F3CC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( mana && qp )
  {
    gameObject = (UnityEngine_GameObject_o *)ItemType__get_CrossOperatorString(0);
    if ( !this->fields.line )
      goto LABEL_37;
    v12 = (Il2CppObject *)gameObject;
    UnityEngine_GameObject__SetActive(this->fields.line, 1, 0);
    gameObject = this->fields.manaInfo;
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( befMana == -1 )
      goto LABEL_12;
    v19 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v19 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v19->static_fields->UserItemMax;
    if ( befMana + mana < UserItemMax )
    {
LABEL_12:
      manaLabel = this->fields.manaLabel;
      LODWORD(v46) = mana;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v13, v14, v15, v16, v17, v18);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63602948(
                                                 (System_String_o *)StringLiteral_25205/*"{0}{1:#,0}"*/,
                                                 v12,
                                                 v22,
                                                 0);
      if ( !manaLabel )
        goto LABEL_37;
      v23 = (System_String_o *)gameObject;
      v24 = manaLabel;
    }
    else
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      v25 = this->fields.manaLabel;
      v26 = UserItemMax - befMana;
      if ( v26 <= 0 )
      {
        LODWORD(v46) = 0;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v13, v14, v15, v16, v17, v18);
        v28 = (System_String_o *)StringLiteral_15924/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        LODWORD(v46) = v26;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v13, v14, v15, v16, v17, v18);
        v28 = (System_String_o *)StringLiteral_25205/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63602948(v28, v12, v27, 0);
      if ( !v25 )
        goto LABEL_37;
      v23 = (System_String_o *)gameObject;
      v24 = v25;
    }
    UILabel__set_text(v24, v23, 0);
  }
  gameObject = this->fields.qpInfo;
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0);
  if ( befQp != -1 )
  {
    v36 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v36 = BalanceConfig_TypeInfo;
    }
    QpMax = v36->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v43 = QpMax - befQp;
      if ( v43 <= 0 )
      {
        v46 = 0;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46, v29, v30, v31, v32, v33, v34);
        v45 = (System_String_o *)StringLiteral_15924/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v46 = v43;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46, v29, v30, v31, v32, v33, v34);
        v45 = (System_String_o *)StringLiteral_25205/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63602948(v45, PlusOperatorString, v44, 0);
      if ( qpLabel )
      {
        v40 = (System_String_o *)gameObject;
        v41 = qpLabel;
        goto LABEL_36;
      }
LABEL_37:
      sub_1C372B4(gameObject);
    }
  }
  v38 = this->fields.qpLabel;
  v46 = qp;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v46, v29, v30, v31, v32, v33, v34);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63602948(
                                             (System_String_o *)StringLiteral_25205/*"{0}{1:#,0}"*/,
                                             PlusOperatorString,
                                             v39,
                                             0);
  if ( !v38 )
    goto LABEL_37;
  v40 = (System_String_o *)gameObject;
  v41 = v38;
LABEL_36:
  UILabel__set_text(v41, v40, 0);
}