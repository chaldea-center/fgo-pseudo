void __fastcall AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_418496F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418496F = 1;
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
    sub_B2C434(gameObject, v4);
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
  BalanceConfig_c *v17; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x1
  UILabel_o *v22; // x0
  struct UILabel_o *v23; // x24
  int v24; // w8
  Il2CppObject *v25; // x0
  __int64 *v26; // x8
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v28; // x0
  int32_t QpMax; // w8
  struct UILabel_o *v30; // x19
  Il2CppObject *v31; // x0
  System_String_o *v32; // x1
  UILabel_o *v33; // x0
  struct UILabel_o *qpLabel; // x20
  int v35; // w8
  Il2CppObject *v36; // x0
  __int64 *v37; // x8
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4184970 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&mana);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_23649/*"{0}{1:#,0}"*/, v12);
    sub_B2C35C(&StringLiteral_15741/*"[FF0000]{0}{1:#,0}[-]"*/, v13);
    byte_4184970 = 1;
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
    v16 = (Il2CppObject *)gameObject;
    UnityEngine_GameObject__SetActive(this->fields.line, 1, 0LL);
    gameObject = this->fields.manaInfo;
    if ( !gameObject )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( befMana == -1 )
      goto LABEL_13;
    v17 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v17->static_fields->UserItemMax;
    if ( befMana + mana < UserItemMax )
    {
LABEL_13:
      manaLabel = this->fields.manaLabel;
      v38 = mana;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(
                                                 (System_String_o *)StringLiteral_23649/*"{0}{1:#,0}"*/,
                                                 v16,
                                                 v20,
                                                 0LL);
      if ( !manaLabel )
        goto LABEL_41;
      v21 = (System_String_o *)gameObject;
      v22 = manaLabel;
    }
    else
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      v23 = this->fields.manaLabel;
      v24 = UserItemMax - befMana;
      if ( v24 <= 0 )
      {
        v38 = 0;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
        v26 = &StringLiteral_15741/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v38 = v24;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
        v26 = &StringLiteral_23649/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068((System_String_o *)*v26, v16, v25, 0LL);
      if ( !v23 )
        goto LABEL_41;
      v21 = (System_String_o *)gameObject;
      v22 = v23;
    }
    UILabel__set_text(v22, v21, 0LL);
  }
  gameObject = this->fields.qpInfo;
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0LL);
  if ( befQp != -1 )
  {
    v28 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v28 = BalanceConfig_TypeInfo;
    }
    QpMax = v28->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v35 = QpMax - befQp;
      if ( v35 <= 0 )
      {
        v38 = 0;
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
        v37 = &StringLiteral_15741/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v38 = v35;
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
        v37 = &StringLiteral_23649/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(
                                                 (System_String_o *)*v37,
                                                 PlusOperatorString,
                                                 v36,
                                                 0LL);
      if ( qpLabel )
      {
        v32 = (System_String_o *)gameObject;
        v33 = qpLabel;
        goto LABEL_40;
      }
LABEL_41:
      sub_B2C434(gameObject, v15);
    }
  }
  v30 = this->fields.qpLabel;
  v38 = qp;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_44301068(
                                             (System_String_o *)StringLiteral_23649/*"{0}{1:#,0}"*/,
                                             PlusOperatorString,
                                             v31,
                                             0LL);
  if ( !v30 )
    goto LABEL_41;
  v32 = (System_String_o *)gameObject;
  v33 = v30;
LABEL_40:
  UILabel__set_text(v33, v32, 0LL);
}