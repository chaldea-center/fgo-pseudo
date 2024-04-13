void __fastcall AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_42E65A6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E65A6 = 1;
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
    sub_B5D69C(gameObject, v6);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x23
  BalanceConfig_c *v23; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v26; // x0
  System_String_o *v27; // x1
  UILabel_o *v28; // x0
  struct UILabel_o *v29; // x24
  int v30; // w8
  Il2CppObject *v31; // x0
  __int64 *v32; // x8
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
  __int64 *v43; // x8
  int32_t v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E65A7 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, mana, qp, *(_QWORD *)&befMana);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23961/*"{0}{1:#,0}"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_15931/*"[FF0000]{0}{1:#,0}[-]"*/, v17, v18, v19);
    byte_42E65A7 = 1;
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
    v22 = (Il2CppObject *)gameObject;
    UnityEngine_GameObject__SetActive(this->fields.line, 1, 0LL);
    gameObject = this->fields.manaInfo;
    if ( !gameObject )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( befMana == -1 )
      goto LABEL_13;
    v23 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v23 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v23->static_fields->UserItemMax;
    if ( befMana + mana < UserItemMax )
    {
LABEL_13:
      manaLabel = this->fields.manaLabel;
      v44 = mana;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(
                                                 (System_String_o *)StringLiteral_23961/*"{0}{1:#,0}"*/,
                                                 v22,
                                                 v26,
                                                 0LL);
      if ( !manaLabel )
        goto LABEL_41;
      v27 = (System_String_o *)gameObject;
      v28 = manaLabel;
    }
    else
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      v29 = this->fields.manaLabel;
      v30 = UserItemMax - befMana;
      if ( v30 <= 0 )
      {
        v44 = 0;
        v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v32 = &StringLiteral_15931/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v44 = v30;
        v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v32 = &StringLiteral_23961/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324((System_String_o *)*v32, v22, v31, 0LL);
      if ( !v29 )
        goto LABEL_41;
      v27 = (System_String_o *)gameObject;
      v28 = v29;
    }
    UILabel__set_text(v28, v27, 0LL);
  }
  gameObject = this->fields.qpInfo;
  if ( !gameObject )
    goto LABEL_41;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  PlusOperatorString = (Il2CppObject *)ItemType__get_PlusOperatorString(0LL);
  if ( befQp != -1 )
  {
    v34 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    QpMax = v34->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v41 = QpMax - befQp;
      if ( v41 <= 0 )
      {
        v44 = 0;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v43 = &StringLiteral_15931/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v44 = v41;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v43 = &StringLiteral_23961/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(
                                                 (System_String_o *)*v43,
                                                 PlusOperatorString,
                                                 v42,
                                                 0LL);
      if ( qpLabel )
      {
        v38 = (System_String_o *)gameObject;
        v39 = qpLabel;
        goto LABEL_40;
      }
LABEL_41:
      sub_B5D69C(gameObject, v21);
    }
  }
  v36 = this->fields.qpLabel;
  v44 = qp;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_44573324(
                                             (System_String_o *)StringLiteral_23961/*"{0}{1:#,0}"*/,
                                             PlusOperatorString,
                                             v37,
                                             0LL);
  if ( !v36 )
    goto LABEL_41;
  v38 = (System_String_o *)gameObject;
  v39 = v36;
LABEL_40:
  UILabel__set_text(v39, v38, 0LL);
}