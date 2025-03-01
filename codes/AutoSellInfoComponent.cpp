void __fastcall AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4BF9CD5 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_1/*""*/, method);
    byte_4BF9CD5 = 1;
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
    sub_1C2E388(gameObject, v4);
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
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x23
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  BalanceConfig_c *v20; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x1
  UILabel_o *v25; // x0
  struct UILabel_o *v26; // x24
  int v27; // w8
  Il2CppObject *v28; // x0
  System_String_o *v29; // x8
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v34; // x0
  int32_t QpMax; // w8
  struct UILabel_o *v36; // x19
  Il2CppObject *v37; // x0
  System_String_o *v38; // x1
  UILabel_o *v39; // x0
  struct UILabel_o *qpLabel; // x20
  int v41; // w8
  Il2CppObject *v42; // x0
  System_String_o *v43; // x8
  int32_t v44; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BF9CD6 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, *(_QWORD *)&mana);
    sub_1C2E12C(&int_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_25576/*"{0}{1:#,0}"*/, v12);
    sub_1C2E12C(&StringLiteral_16221/*"[FF0000]{0}{1:#,0}[-]"*/, v13);
    byte_4BF9CD6 = 1;
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
    v16 = (Il2CppObject *)gameObject;
    UnityEngine_GameObject__SetActive(this->fields.line, 1, 0LL);
    gameObject = this->fields.manaInfo;
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
      v44 = mana;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v17, v18, v19);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63249956(
                                                 (System_String_o *)StringLiteral_25576/*"{0}{1:#,0}"*/,
                                                 v16,
                                                 v23,
                                                 0LL);
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
        v44 = 0;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v17, v18, v19);
        v29 = (System_String_o *)StringLiteral_16221/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v44 = v27;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v17, v18, v19);
        v29 = (System_String_o *)StringLiteral_25576/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63249956(v29, v16, v28, 0LL);
      if ( !v26 )
        goto LABEL_37;
      v24 = (System_String_o *)gameObject;
      v25 = v26;
    }
    UILabel__set_text(v25, v24, 0LL);
  }
  gameObject = this->fields.qpInfo;
  if ( !gameObject )
    goto LABEL_37;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0LL);
  if ( befQp != -1 )
  {
    v34 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    QpMax = v34->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v41 = QpMax - befQp;
      if ( v41 <= 0 )
      {
        v44 = 0;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v30, v31, v32);
        v43 = (System_String_o *)StringLiteral_16221/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v44 = v41;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v30, v31, v32);
        v43 = (System_String_o *)StringLiteral_25576/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_63249956(v43, PlusOperatorString, v42, 0LL);
      if ( qpLabel )
      {
        v38 = (System_String_o *)gameObject;
        v39 = qpLabel;
        goto LABEL_36;
      }
LABEL_37:
      sub_1C2E388(gameObject, v15);
    }
  }
  v36 = this->fields.qpLabel;
  v44 = qp;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v30, v31, v32);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_63249956(
                                             (System_String_o *)StringLiteral_25576/*"{0}{1:#,0}"*/,
                                             PlusOperatorString,
                                             v37,
                                             0LL);
  if ( !v36 )
    goto LABEL_37;
  v38 = (System_String_o *)gameObject;
  v39 = v36;
LABEL_36:
  UILabel__set_text(v39, v38, 0LL);
}