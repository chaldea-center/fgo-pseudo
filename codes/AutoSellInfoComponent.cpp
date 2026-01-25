void AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4CEA960 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEA960 = 1;
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
    sub_1C7BD40(gameObject, v4);
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
  BalanceConfig_c *v14; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x1
  UILabel_o *v19; // x0
  struct UILabel_o *v20; // x23
  int v21; // w8
  Il2CppObject *v22; // x0
  System_String_o *v23; // x8
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v25; // x0
  int64_t QpMax; // x8
  struct UILabel_o *v27; // x19
  Il2CppObject *v28; // x0
  System_String_o *v29; // x1
  UILabel_o *v30; // x0
  struct UILabel_o *qpLabel; // x20
  __int64 v32; // x8
  Il2CppObject *v33; // x0
  System_String_o *v34; // x8
  int64_t v35; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEA961 & 1) == 0 )
  {
    sub_1C7BAE8(&BalanceConfig_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&StringLiteral_25461/*"{0}{1:#,0}"*/);
    sub_1C7BAE8(&StringLiteral_15980/*"[FF0000]{0}{1:#,0}[-]"*/);
    byte_4CEA961 = 1;
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
    v14 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v14 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v14->static_fields->UserItemMax;
    if ( befMana + mana < UserItemMax )
    {
LABEL_12:
      manaLabel = this->fields.manaLabel;
      LODWORD(v35) = mana;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_64218220(
                                                 (System_String_o *)StringLiteral_25461/*"{0}{1:#,0}"*/,
                                                 v13,
                                                 v17,
                                                 0);
      if ( !manaLabel )
        goto LABEL_37;
      v18 = (System_String_o *)gameObject;
      v19 = manaLabel;
    }
    else
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      v20 = this->fields.manaLabel;
      v21 = UserItemMax - befMana;
      if ( v21 <= 0 )
      {
        LODWORD(v35) = 0;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
        v23 = (System_String_o *)StringLiteral_15980/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        LODWORD(v35) = v21;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
        v23 = (System_String_o *)StringLiteral_25461/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_64218220(v23, v13, v22, 0);
      if ( !v20 )
        goto LABEL_37;
      v18 = (System_String_o *)gameObject;
      v19 = v20;
    }
    UILabel__set_text(v19, v18, 0);
  }
  gameObject = this->fields.qpInfo;
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0);
  if ( befQp != -1 )
  {
    v25 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v25 = BalanceConfig_TypeInfo;
    }
    QpMax = v25->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v32 = QpMax - befQp;
      if ( v32 <= 0 )
      {
        v35 = 0;
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35);
        v34 = (System_String_o *)StringLiteral_15980/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v35 = v32;
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35);
        v34 = (System_String_o *)StringLiteral_25461/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_64218220(v34, PlusOperatorString, v33, 0);
      if ( qpLabel )
      {
        v29 = (System_String_o *)gameObject;
        v30 = qpLabel;
        goto LABEL_36;
      }
LABEL_37:
      sub_1C7BD40(gameObject, v12);
    }
  }
  v27 = this->fields.qpLabel;
  v35 = qp;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v35);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_64218220(
                                             (System_String_o *)StringLiteral_25461/*"{0}{1:#,0}"*/,
                                             PlusOperatorString,
                                             v28,
                                             0);
  if ( !v27 )
    goto LABEL_37;
  v29 = (System_String_o *)gameObject;
  v30 = v27;
LABEL_36:
  UILabel__set_text(v30, v29, 0);
}