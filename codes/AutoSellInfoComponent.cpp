void AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_5934833 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5934833 = 1;
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
    sub_21FFECC(gameObject, v4);
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
  Il2CppObject *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  BalanceConfig_c *v16; // x0
  int32_t UserItemMax; // w8
  UILabel_o *manaLabel; // x23
  __int64 v19; // x0
  int v20; // w8
  Il2CppObject *v21; // x0
  System_String_o *v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v26; // x0
  int64_t QpMax; // x8
  UILabel_o *qpLabel; // x19
  __int64 v29; // x0
  __int64 v30; // x8
  Il2CppObject *v31; // x0
  System_String_o *v32; // x8
  int64_t v33; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5934834 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&StringLiteral_26553/*"{0}{1:#,0}"*/);
    sub_21FFC50(&StringLiteral_16514/*"[FF0000]{0}{1:#,0}[-]"*/);
    byte_5934834 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( !mana || !qp )
    goto LABEL_20;
  gameObject = (UnityEngine_GameObject_o *)ItemType__get_CrossOperatorString(0);
  if ( !this->fields.line
    || (v13 = (Il2CppObject *)gameObject,
        UnityEngine_GameObject__SetActive(this->fields.line, 1, 0),
        (gameObject = this->fields.manaInfo) == 0) )
  {
LABEL_35:
    sub_21FFECC(gameObject, v12);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  if ( befMana == -1 )
    goto LABEL_12;
  v16 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14, v15);
    v16 = BalanceConfig_TypeInfo;
  }
  UserItemMax = v16->static_fields->UserItemMax;
  if ( befMana + mana < UserItemMax )
  {
LABEL_12:
    manaLabel = this->fields.manaLabel;
    LODWORD(v33) = mana;
    v19 = qword_594C070;
  }
  else
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v14, v15);
      UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
    }
    v20 = UserItemMax - befMana;
    manaLabel = this->fields.manaLabel;
    if ( v20 <= 0 )
    {
      LODWORD(v33) = 0;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v33);
      v22 = (System_String_o *)StringLiteral_16514/*"[FF0000]{0}{1:#,0}[-]"*/;
      goto LABEL_18;
    }
    LODWORD(v33) = v20;
    v19 = qword_594C070;
  }
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(v19, &v33);
  v22 = (System_String_o *)StringLiteral_26553/*"{0}{1:#,0}"*/;
LABEL_18:
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_75484576(v22, v13, v21, 0);
  if ( !manaLabel )
    goto LABEL_35;
  UILabel__set_text(manaLabel, (System_String_o *)gameObject, 0);
LABEL_20:
  gameObject = this->fields.qpInfo;
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0);
  if ( befQp == -1 )
    goto LABEL_25;
  v26 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v23, v24);
    v26 = BalanceConfig_TypeInfo;
  }
  QpMax = v26->static_fields->QpMax;
  if ( befQp + qp < QpMax )
  {
LABEL_25:
    qpLabel = this->fields.qpLabel;
    v33 = qp;
    v29 = qword_594C090;
LABEL_30:
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(v29, &v33);
    v32 = (System_String_o *)StringLiteral_26553/*"{0}{1:#,0}"*/;
    goto LABEL_31;
  }
  if ( !*(&v26->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v26, v23, v24);
    QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
  }
  v30 = QpMax - befQp;
  qpLabel = this->fields.qpLabel;
  if ( v30 > 0 )
  {
    v33 = v30;
    v29 = qword_594C090;
    goto LABEL_30;
  }
  v33 = 0;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v33);
  v32 = (System_String_o *)StringLiteral_16514/*"[FF0000]{0}{1:#,0}[-]"*/;
LABEL_31:
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_75484576(v32, PlusOperatorString, v31, 0);
  if ( !qpLabel )
    goto LABEL_35;
  UILabel__set_text(qpLabel, (System_String_o *)gameObject, 0);
}