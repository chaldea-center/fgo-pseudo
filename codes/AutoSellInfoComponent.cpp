void __fastcall AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42115B7 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42115B7 = 1;
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
    sub_B0D97C(gameObject);
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
  Il2CppObject *v15; // x23
  BalanceConfig_c *v16; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x1
  UILabel_o *v21; // x0
  struct UILabel_o *v22; // x24
  int v23; // w8
  Il2CppObject *v24; // x0
  __int64 *v25; // x8
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v27; // x0
  int32_t QpMax; // w8
  struct UILabel_o *v29; // x19
  Il2CppObject *v30; // x0
  System_String_o *v31; // x1
  UILabel_o *v32; // x0
  struct UILabel_o *qpLabel; // x20
  int v34; // w8
  Il2CppObject *v35; // x0
  __int64 *v36; // x8
  int32_t v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42115B8 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, *(_QWORD *)&mana);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_23727/*"{0}{1:#,0}"*/, v12);
    sub_B0D8A4(&StringLiteral_15788/*"[FF0000]{0}{1:#,0}[-]"*/, v13);
    byte_42115B8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( mana && qp )
  {
    gameObject = (UnityEngine_GameObject_o *)ItemType__get_CrossOperatorString(0LL);
    if ( !this->fields.line )
      goto LABEL_41;
    v15 = (Il2CppObject *)gameObject;
    UnityEngine_GameObject__SetActive(this->fields.line, 1, 0LL);
    gameObject = this->fields.manaInfo;
    if ( !gameObject )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( befMana == -1 )
      goto LABEL_13;
    v16 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v16 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v16->static_fields->UserItemMax;
    if ( befMana + mana < UserItemMax )
    {
LABEL_13:
      manaLabel = this->fields.manaLabel;
      v37 = mana;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_43845440(
                                                 (System_String_o *)StringLiteral_23727/*"{0}{1:#,0}"*/,
                                                 v15,
                                                 v19,
                                                 0LL);
      if ( !manaLabel )
        goto LABEL_41;
      v20 = (System_String_o *)gameObject;
      v21 = manaLabel;
    }
    else
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      v22 = this->fields.manaLabel;
      v23 = UserItemMax - befMana;
      if ( v23 <= 0 )
      {
        v37 = 0;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
        v25 = &StringLiteral_15788/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v37 = v23;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
        v25 = &StringLiteral_23727/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_43845440((System_String_o *)*v25, v15, v24, 0LL);
      if ( !v22 )
        goto LABEL_41;
      v20 = (System_String_o *)gameObject;
      v21 = v22;
    }
    UILabel__set_text(v21, v20, 0LL);
  }
  gameObject = this->fields.qpInfo;
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0LL);
  if ( befQp != -1 )
  {
    v27 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v27 = BalanceConfig_TypeInfo;
    }
    QpMax = v27->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v34 = QpMax - befQp;
      if ( v34 <= 0 )
      {
        v37 = 0;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
        v36 = &StringLiteral_15788/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v37 = v34;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
        v36 = &StringLiteral_23727/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_43845440(
                                                 (System_String_o *)*v36,
                                                 PlusOperatorString,
                                                 v35,
                                                 0LL);
      if ( qpLabel )
      {
        v31 = (System_String_o *)gameObject;
        v32 = qpLabel;
        goto LABEL_40;
      }
LABEL_41:
      sub_B0D97C(gameObject);
    }
  }
  v29 = this->fields.qpLabel;
  v37 = qp;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_43845440(
                                             (System_String_o *)StringLiteral_23727/*"{0}{1:#,0}"*/,
                                             PlusOperatorString,
                                             v30,
                                             0LL);
  if ( !v29 )
    goto LABEL_41;
  v31 = (System_String_o *)gameObject;
  v32 = v29;
LABEL_40:
  UILabel__set_text(v32, v31, 0LL);
}