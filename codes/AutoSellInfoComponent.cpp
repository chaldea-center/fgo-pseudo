void __fastcall AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4B12833 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B12833 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.line;
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.manaInfo;
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (gameObject = this->fields.qpInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.manaLabel) == 0LL)
    || (UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.qpLabel) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(gameObject, v5);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoSellInfoComponent__SetData(
        AutoSellInfoComponent_o *this,
        int32_t mana,
        int32_t qp,
        int32_t befMana,
        int32_t befQp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x23
  __int64 v20; // x1
  BalanceConfig_c *v21; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x1
  UILabel_o *v26; // x0
  struct UILabel_o *v27; // x24
  int v28; // w8
  Il2CppObject *v29; // x0
  System_String_o *v30; // x8
  __int64 v31; // x1
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v33; // x0
  int32_t QpMax; // w8
  struct UILabel_o *v35; // x19
  Il2CppObject *v36; // x0
  System_String_o *v37; // x1
  UILabel_o *v38; // x0
  struct UILabel_o *qpLabel; // x20
  int v40; // w8
  Il2CppObject *v41; // x0
  System_String_o *v42; // x8
  int32_t v43; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B12834 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&mana, *(_QWORD *)&qp);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_25359/*"{0}{1:#,0}"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_16100/*"[FF0000]{0}{1:#,0}[-]"*/, v15, v16);
    byte_4B12834 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( mana && qp )
  {
    gameObject = (UnityEngine_GameObject_o *)ItemType__get_CrossOperatorString(0LL);
    if ( !this->fields.line )
      goto LABEL_37;
    v19 = (Il2CppObject *)gameObject;
    UnityEngine_GameObject__SetActive(this->fields.line, 1, 0LL);
    gameObject = this->fields.manaInfo;
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( befMana == -1 )
      goto LABEL_12;
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v20);
      v21 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v21->static_fields->UserItemMax;
    if ( befMana + mana < UserItemMax )
    {
LABEL_12:
      manaLabel = this->fields.manaLabel;
      v43 = mana;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(
                                                 (System_String_o *)StringLiteral_25359/*"{0}{1:#,0}"*/,
                                                 v19,
                                                 v24,
                                                 0LL);
      if ( !manaLabel )
        goto LABEL_37;
      v25 = (System_String_o *)gameObject;
      v26 = manaLabel;
    }
    else
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21, v20);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      v27 = this->fields.manaLabel;
      v28 = UserItemMax - befMana;
      if ( v28 <= 0 )
      {
        v43 = 0;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
        v30 = (System_String_o *)StringLiteral_16100/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v43 = v28;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
        v30 = (System_String_o *)StringLiteral_25359/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v30, v19, v29, 0LL);
      if ( !v27 )
        goto LABEL_37;
      v25 = (System_String_o *)gameObject;
      v26 = v27;
    }
    UILabel__set_text(v26, v25, 0LL);
  }
  gameObject = this->fields.qpInfo;
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0LL);
  if ( befQp != -1 )
  {
    v33 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v31);
      v33 = BalanceConfig_TypeInfo;
    }
    QpMax = v33->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33, v31);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v40 = QpMax - befQp;
      if ( v40 <= 0 )
      {
        v43 = 0;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
        v42 = (System_String_o *)StringLiteral_16100/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v43 = v40;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
        v42 = (System_String_o *)StringLiteral_25359/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v42, PlusOperatorString, v41, 0LL);
      if ( qpLabel )
      {
        v37 = (System_String_o *)gameObject;
        v38 = qpLabel;
        goto LABEL_36;
      }
LABEL_37:
      sub_1BCAA3C(gameObject, v18);
    }
  }
  v35 = this->fields.qpLabel;
  v43 = qp;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(
                                             (System_String_o *)StringLiteral_25359/*"{0}{1:#,0}"*/,
                                             PlusOperatorString,
                                             v36,
                                             0LL);
  if ( !v35 )
    goto LABEL_37;
  v37 = (System_String_o *)gameObject;
  v38 = v35;
LABEL_36:
  UILabel__set_text(v38, v37, 0LL);
}