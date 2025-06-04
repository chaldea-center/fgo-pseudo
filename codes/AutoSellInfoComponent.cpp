void __fastcall AutoSellInfoComponent___ctor(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall AutoSellInfoComponent__Clear(AutoSellInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4AFE442 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4AFE442 = 1;
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
    sub_1BC3264(gameObject, v4);
  }
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AutoSellInfoComponent__SetData(
        AutoSellInfoComponent_o *this,
        int32_t mana,
        int64_t qp,
        int32_t befMana,
        int64_t befQp,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x24
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  BalanceConfig_c *v21; // x0
  int32_t UserItemMax; // w8
  struct UILabel_o *manaLabel; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x1
  UILabel_o *v26; // x0
  struct UILabel_o *v27; // x23
  int v28; // w8
  Il2CppObject *v29; // x0
  System_String_o *v30; // x8
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *PlusOperatorString; // x22
  BalanceConfig_c *v35; // x0
  int64_t QpMax; // x8
  struct UILabel_o *v37; // x19
  Il2CppObject *v38; // x0
  System_String_o *v39; // x1
  UILabel_o *v40; // x0
  struct UILabel_o *qpLabel; // x20
  __int64 v42; // x8
  Il2CppObject *v43; // x0
  System_String_o *v44; // x8
  int64_t v45; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4AFE443 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&mana);
    sub_1BC3008(&int_TypeInfo, v11);
    sub_1BC3008(&long_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_24964/*"{0}{1:#,0}"*/, v13);
    sub_1BC3008(&StringLiteral_15778/*"[FF0000]{0}{1:#,0}[-]"*/, v14);
    byte_4AFE443 = 1;
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
    v17 = (Il2CppObject *)gameObject;
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
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v21->static_fields->UserItemMax;
    if ( befMana + mana < UserItemMax )
    {
LABEL_12:
      manaLabel = this->fields.manaLabel;
      LODWORD(v45) = mana;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v18, v19, v20);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_62389940(
                                                 (System_String_o *)StringLiteral_24964/*"{0}{1:#,0}"*/,
                                                 v17,
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
        j_il2cpp_runtime_class_init_0(v21);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      v27 = this->fields.manaLabel;
      v28 = UserItemMax - befMana;
      if ( v28 <= 0 )
      {
        LODWORD(v45) = 0;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v18, v19, v20);
        v30 = (System_String_o *)StringLiteral_15778/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        LODWORD(v45) = v28;
        v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, v18, v19, v20);
        v30 = (System_String_o *)StringLiteral_24964/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_62389940(v30, v17, v29, 0LL);
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
    v35 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v35 = BalanceConfig_TypeInfo;
    }
    QpMax = v35->static_fields->QpMax;
    if ( befQp + qp >= QpMax )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
      }
      qpLabel = this->fields.qpLabel;
      v42 = QpMax - befQp;
      if ( v42 <= 0 )
      {
        v45 = 0LL;
        v43 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v45, v31, v32, v33);
        v44 = (System_String_o *)StringLiteral_15778/*"[FF0000]{0}{1:#,0}[-]"*/;
      }
      else
      {
        v45 = v42;
        v43 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v45, v31, v32, v33);
        v44 = (System_String_o *)StringLiteral_24964/*"{0}{1:#,0}"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)System_String__Format_62389940(v44, PlusOperatorString, v43, 0LL);
      if ( qpLabel )
      {
        v39 = (System_String_o *)gameObject;
        v40 = qpLabel;
        goto LABEL_36;
      }
LABEL_37:
      sub_1BC3264(gameObject, v16);
    }
  }
  v37 = this->fields.qpLabel;
  v45 = qp;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v45, v31, v32, v33);
  gameObject = (UnityEngine_GameObject_o *)System_String__Format_62389940(
                                             (System_String_o *)StringLiteral_24964/*"{0}{1:#,0}"*/,
                                             PlusOperatorString,
                                             v38,
                                             0LL);
  if ( !v37 )
    goto LABEL_37;
  v39 = (System_String_o *)gameObject;
  v40 = v37;
LABEL_36:
  UILabel__set_text(v40, v39, 0LL);
}