void AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C53163 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C53163 = 1;
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
    sub_1C3E7C0(gameObject, v4);
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
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  BalanceConfig_c *v20; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x1
  UILabel_o *v25; // x0
  struct UILabel_o *v26; // x23
  int v27; // w8
  Il2CppObject *v28; // x0
  System_String_o *v29; // x8
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v37; // x0
  int64_t QpMax; // x8
  struct UILabel_o *v39; // x19
  Il2CppObject *v40; // x0
  System_String_o *v41; // x1
  UILabel_o *v42; // x0
  struct UILabel_o *qpLabel; // x20
  __int64 v44; // x8
  Il2CppObject *v45; // x0
  System_String_o *v46; // x8
  int64_t v47; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C53164 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&long_TypeInfo);
    sub_1C3E564(&StringLiteral_25225/*"{0}{1:#,0}"*/);
    sub_1C3E564(&StringLiteral_15934/*"[FF0000]{0}{1:#,0}[-]"*/);
    byte_4C53164 = 1;
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
    v20 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v20 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v20->static_fields->UserItemMax;
    if ( befMana + mana < UserItemMax )
    {
LABEL_12:
      manaLabel = this->fields.manaLabel;
      LODWORD(v47) = mana;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v14, v15, v16, v17, v18, v19);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63677760(
                                                 (System_String_o *)StringLiteral_25225/*"{0}{1:#,0}"*/,
                                                 v13,
                                                 v23,
                                                 0);
      if ( !manaLabel )
        goto LABEL_37;
      v24 = (System_String_o *)gameObject;
      v25 = manaLabel;
    }
    else
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      v26 = this->fields.manaLabel;
      v27 = UserItemMax - befMana;
      if ( v27 <= 0 )
      {
        LODWORD(v47) = 0;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v14, v15, v16, v17, v18, v19);
        v29 = (System_String_o *)StringLiteral_15934/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        LODWORD(v47) = v27;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v14, v15, v16, v17, v18, v19);
        v29 = (System_String_o *)StringLiteral_25225/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63677760(v29, v13, v28, 0);
      if ( !v26 )
        goto LABEL_37;
      v24 = (System_String_o *)gameObject;
      v25 = v26;
    }
    UILabel__set_text(v25, v24, 0);
  }
  gameObject = this->fields.qpInfo;
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0);
  if ( befQp != -1 )
  {
    v37 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v37 = BalanceConfig_TypeInfo;
    }
    QpMax = v37->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v44 = QpMax - befQp;
      if ( v44 <= 0 )
      {
        v47 = 0;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47, v30, v31, v32, v33, v34, v35);
        v46 = (System_String_o *)StringLiteral_15934/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v47 = v44;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47, v30, v31, v32, v33, v34, v35);
        v46 = (System_String_o *)StringLiteral_25225/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63677760(v46, PlusOperatorString, v45, 0);
      if ( qpLabel )
      {
        v41 = (System_String_o *)gameObject;
        v42 = qpLabel;
        goto LABEL_36;
      }
LABEL_37:
      sub_1C3E7C0(gameObject, v12);
    }
  }
  v39 = this->fields.qpLabel;
  v47 = qp;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v47, v30, v31, v32, v33, v34, v35);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63677760(
                                             (System_String_o *)StringLiteral_25225/*"{0}{1:#,0}"*/,
                                             PlusOperatorString,
                                             v40,
                                             0);
  if ( !v39 )
    goto LABEL_37;
  v41 = (System_String_o *)gameObject;
  v42 = v39;
LABEL_36:
  UILabel__set_text(v42, v41, 0);
}