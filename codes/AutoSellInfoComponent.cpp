void __fastcall AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *line; // x0
  UnityEngine_GameObject_o *manaInfo; // x0
  UnityEngine_GameObject_o *qpInfo; // x0
  UILabel_o *manaLabel; // x0
  UILabel_o *qpLabel; // x0

  if ( (byte_40F6E6A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40F6E6A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  line = this->fields.line;
  if ( !line )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(line, 0, 0LL);
  manaInfo = this->fields.manaInfo;
  if ( !manaInfo
    || (UnityEngine_GameObject__SetActive(manaInfo, 0, 0LL), (qpInfo = this->fields.qpInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(qpInfo, 1, 0LL), (manaLabel = this->fields.manaLabel) == 0LL)
    || (UILabel__set_text(manaLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL), (qpLabel = this->fields.qpLabel) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  UILabel__set_text(qpLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  System_String_o *CrossOperatorString; // x0
  Il2CppObject *v16; // x23
  UnityEngine_GameObject_o *manaInfo; // x0
  BalanceConfig_c *v18; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x1
  UILabel_o *v24; // x0
  struct UILabel_o *v25; // x24
  int v26; // w8
  Il2CppObject *v27; // x0
  __int64 *v28; // x8
  System_String_o *v29; // x0
  UnityEngine_GameObject_o *qpInfo; // x0
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v32; // x0
  int32_t QpMax; // w8
  struct UILabel_o *v34; // x19
  Il2CppObject *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x1
  UILabel_o *v38; // x0
  struct UILabel_o *qpLabel; // x20
  int v40; // w8
  Il2CppObject *v41; // x0
  __int64 *v42; // x8
  System_String_o *v43; // x0
  int32_t v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F6E6B & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&mana);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_23555/*"{0}{1:#,0}"*/, v12);
    sub_B16FFC(&StringLiteral_15678/*"[FF0000]{0}{1:#,0}[-]"*/, v13);
    byte_40F6E6B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( mana && qp )
  {
    CrossOperatorString = ItemType__get_CrossOperatorString(0LL);
    if ( !this->fields.line )
      goto LABEL_41;
    v16 = (Il2CppObject *)CrossOperatorString;
    UnityEngine_GameObject__SetActive(this->fields.line, 1, 0LL);
    manaInfo = this->fields.manaInfo;
    if ( !manaInfo )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(manaInfo, 1, 0LL);
    if ( befMana == -1 )
      goto LABEL_13;
    v18 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v18 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v18->static_fields->UserItemMax;
    if ( befMana + mana < UserItemMax )
    {
LABEL_13:
      manaLabel = this->fields.manaLabel;
      v44 = mana;
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
      v22 = System_String__Format_43739268((System_String_o *)StringLiteral_23555/*"{0}{1:#,0}"*/, v16, v21, 0LL);
      if ( !manaLabel )
        goto LABEL_41;
      v23 = v22;
      v24 = manaLabel;
    }
    else
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      v25 = this->fields.manaLabel;
      v26 = UserItemMax - befMana;
      if ( v26 <= 0 )
      {
        v44 = 0;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v28 = &StringLiteral_15678/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v44 = v26;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v28 = &StringLiteral_23555/*"{0}{1:#,0}"*/;
      }
      v29 = System_String__Format_43739268((System_String_o *)*v28, v16, v27, 0LL);
      if ( !v25 )
        goto LABEL_41;
      v23 = v29;
      v24 = v25;
    }
    UILabel__set_text(v24, v23, 0LL);
  }
  qpInfo = this->fields.qpInfo;
  if ( !qpInfo )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(qpInfo, 1, 0LL);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0LL);
  if ( befQp != -1 )
  {
    v32 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    QpMax = v32->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v40 = QpMax - befQp;
      if ( v40 <= 0 )
      {
        v44 = 0;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v42 = &StringLiteral_15678/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v44 = v40;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v42 = &StringLiteral_23555/*"{0}{1:#,0}"*/;
      }
      v43 = System_String__Format_43739268((System_String_o *)*v42, PlusOperatorString, v41, 0LL);
      if ( qpLabel )
      {
        v37 = v43;
        v38 = qpLabel;
        goto LABEL_40;
      }
LABEL_41:
      sub_B170D4();
    }
  }
  v34 = this->fields.qpLabel;
  v44 = qp;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  v36 = System_String__Format_43739268((System_String_o *)StringLiteral_23555/*"{0}{1:#,0}"*/, PlusOperatorString, v35, 0LL);
  if ( !v34 )
    goto LABEL_41;
  v37 = v36;
  v38 = v34;
LABEL_40:
  UILabel__set_text(v38, v37, 0LL);
}