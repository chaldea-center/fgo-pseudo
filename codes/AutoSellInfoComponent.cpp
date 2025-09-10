void AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C23682 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23682 = 1;
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
    sub_1C2D6EC(gameObject, v4);
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
  __int64 v12; // x1
  Il2CppObject *v13; // x24
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  BalanceConfig_c *v17; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x1
  UILabel_o *v22; // x0
  struct UILabel_o *v23; // x23
  int v24; // w8
  Il2CppObject *v25; // x0
  System_String_o *v26; // x8
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v31; // x0
  int64_t QpMax; // x8
  struct UILabel_o *v33; // x19
  Il2CppObject *v34; // x0
  System_String_o *v35; // x1
  UILabel_o *v36; // x0
  struct UILabel_o *qpLabel; // x20
  __int64 v38; // x8
  Il2CppObject *v39; // x0
  System_String_o *v40; // x8
  int64_t v41; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C23683 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&StringLiteral_25182/*"{0}{1:#,0}"*/);
    sub_1C2D490(&StringLiteral_15921/*"[FF0000]{0}{1:#,0}[-]"*/);
    byte_4C23683 = 1;
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
    v13 = (Il2CppObject *)gameObject;
    UnityEngine_GameObject__SetActive(this->fields.line, 1, 0);
    gameObject = this->fields.manaInfo;
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( befMana == -1 )
      goto LABEL_12;
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v17->static_fields->UserItemMax;
    if ( befMana + mana < UserItemMax )
    {
LABEL_12:
      manaLabel = this->fields.manaLabel;
      LODWORD(v41) = mana;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v14, v15, v16);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(
                                                 (System_String_o *)StringLiteral_25182/*"{0}{1:#,0}"*/,
                                                 v13,
                                                 v20,
                                                 0);
      if ( !manaLabel )
        goto LABEL_37;
      v21 = (System_String_o *)gameObject;
      v22 = manaLabel;
    }
    else
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      v23 = this->fields.manaLabel;
      v24 = UserItemMax - befMana;
      if ( v24 <= 0 )
      {
        LODWORD(v41) = 0;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v14, v15, v16);
        v26 = (System_String_o *)StringLiteral_15921/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        LODWORD(v41) = v24;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v14, v15, v16);
        v26 = (System_String_o *)StringLiteral_25182/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(v26, v13, v25, 0);
      if ( !v23 )
        goto LABEL_37;
      v21 = (System_String_o *)gameObject;
      v22 = v23;
    }
    UILabel__set_text(v22, v21, 0);
  }
  gameObject = this->fields.qpInfo;
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0);
  if ( befQp != -1 )
  {
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    QpMax = v31->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v38 = QpMax - befQp;
      if ( v38 <= 0 )
      {
        v41 = 0;
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v41, v27, v28, v29);
        v40 = (System_String_o *)StringLiteral_15921/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v41 = v38;
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v41, v27, v28, v29);
        v40 = (System_String_o *)StringLiteral_25182/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(v40, PlusOperatorString, v39, 0);
      if ( qpLabel )
      {
        v35 = (System_String_o *)gameObject;
        v36 = qpLabel;
        goto LABEL_36;
      }
LABEL_37:
      sub_1C2D6EC(gameObject, v12);
    }
  }
  v33 = this->fields.qpLabel;
  v41 = qp;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v41, v27, v28, v29);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(
                                             (System_String_o *)StringLiteral_25182/*"{0}{1:#,0}"*/,
                                             PlusOperatorString,
                                             v34,
                                             0);
  if ( !v33 )
    goto LABEL_37;
  v35 = (System_String_o *)gameObject;
  v36 = v33;
LABEL_36:
  UILabel__set_text(v36, v35, 0);
}