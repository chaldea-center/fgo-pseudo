void __fastcall QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall QuestStartEffectComponent__RefreshPanel(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *base2Panel; // x20
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  struct System_String_o *overwriteEffectNameForTapSkip; // x20
  struct System_String_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  struct System_String_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0

  if ( (byte_40F8264 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8264 = 1;
  }
  base2Panel = (UnityEngine_Object_o *)this->fields.base2Panel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(base2Panel, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Component_o *)this->fields.base2Panel;
    if ( !v4 )
      goto LABEL_22;
    gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    v6 = (UnityEngine_Component_o *)this->fields.base2Panel;
    if ( !v6 )
      goto LABEL_22;
    v7 = UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( !v7 )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(v7, 1, 0LL);
  }
  overwriteEffectNameForTapSkip = this->fields.overwriteEffectNameForTapSkip;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)overwriteEffectNameForTapSkip, 0LL, 0LL) )
  {
    v9 = this->fields.overwriteEffectNameForTapSkip;
    if ( v9 )
    {
      v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      if ( v10 )
      {
        UnityEngine_GameObject__SetActive(v10, 0, 0LL);
        v11 = this->fields.overwriteEffectNameForTapSkip;
        if ( v11 )
        {
          v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
          if ( v12 )
          {
            UnityEngine_GameObject__SetActive(v12, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
}


void __fastcall QuestStartEffectComponent__SetParam(
        QuestStartEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x9
  QuestStartEffectComponent_o *v23; // x20
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  struct UILabel_o *messageLabel; // x21
  int leftAnchor; // w8
  unsigned int v29; // w22
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v34; // w22
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Object_o *titleLabelDecoration; // x21
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x0
  UnityEngine_Object_o *v42; // x22
  System_String_o *v43; // x21
  struct UISprite_array *v44; // x8
  UIAtlas_o *v45; // x0
  UISprite_o *v46; // x0
  struct UISprite_array *v47; // x0
  UnityEngine_Component_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Object_o *v50; // x21
  UnityEngine_Component_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  struct UILabel_o *v53; // x21
  int v54; // w8
  unsigned int v55; // w22
  UnityEngine_Component_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_Object_o *v58; // x21
  QuestStartEffectComponent_c *klass; // x8
  UILabel_o *v60; // x0
  UILabel_o *v61; // x21
  System_String_o *mText; // x22
  System_String_o *v63; // x0
  struct UISprite_array *v64; // x21
  int v65; // w8
  unsigned int v66; // w22
  UnityEngine_Component_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  UnityEngine_Object_o *messageManager; // x21
  QuestStartEffectComponent_c *v70; // x8
  UISprite_o *v71; // x21
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  struct ScriptLineMessage_o *v74; // x0
  UnityEngine_Object_o *typeSprite; // x21
  bool IsNullOrEmpty; // w0
  struct UISprite_o *v77; // x8
  UnityEngine_Object_o *v78; // x21
  QuestStartEffectComponent_c *v79; // x8
  UILabel_o *v80; // x0
  int32_t v81; // w1
  UILabel_o *v82; // x0
  QuestStartEffectComponent_c *v83; // x8
  struct UISprite_o *v84; // x0
  UnityEngine_Object_o *messageSprite; // x21
  UILabel_o *v86; // x0
  UnityEngine_Object_o *basePanel; // x21
  System_String_o *v88; // x1
  __int64 *v89; // x8
  UISprite_o *v90; // x0
  struct UIPanel_o *v91; // x0
  System_String_o *asset; // x20
  WebViewManager_o *Instance; // x0
  QuestStartEffectComponent_o *v94; // x0
  const MethodInfo *v95; // x1

  if ( (byte_40F8263 & 1) == 0 )
  {
    sub_B16FFC(&CommonEffectParam_TypeInfo, param);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&System_Text_RegularExpressions_Regex_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_21530/*"quest_free"*/, v13);
    sub_B16FFC(&StringLiteral_21529/*"quest_event"*/, v14);
    sub_B16FFC(&StringLiteral_21531/*"quest_heroic"*/, v15);
    sub_B16FFC(&StringLiteral_15708/*"[^0-9]"*/, v16);
    sub_B16FFC(&StringLiteral_21533/*"quest_main"*/, v17);
    sub_B16FFC(&StringLiteral_21525/*"quest_Interlude"*/, v18);
    sub_B16FFC(&StringLiteral_22319/*"sub_title_"*/, v19);
    sub_B16FFC(&StringLiteral_1/*""*/, v20);
    sub_B16FFC(&StringLiteral_22613/*"title_"*/, v21);
    byte_40F8263 = 1;
  }
  if ( !param
    || (v22 = *(&CommonEffectParam_TypeInfo->_2.bitflags2 + 1), *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v22)
    && (CommonEffectParam_c *)param->klass->_2.typeHierarchy[v22 - 1] == CommonEffectParam_TypeInfo )
  {
    v23 = this + 1;
    this[1].klass = (QuestStartEffectComponent_c *)param;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this[1],
      (System_Int32_array **)param,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_132;
    leftAnchor = (int)messageLabel->fields.leftAnchor;
    if ( leftAnchor >= 1 )
    {
      v29 = 0;
      while ( v29 < leftAnchor )
      {
        v30 = (UnityEngine_Component_o *)*((_QWORD *)&messageLabel->fields.rightAnchor + (int)v29);
        if ( !v30 )
          goto LABEL_132;
        gameObject = UnityEngine_Component__get_gameObject(v30, 0LL);
        if ( !gameObject )
          goto LABEL_132;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        leftAnchor = (int)messageLabel->fields.leftAnchor;
        if ( (int)++v29 >= leftAnchor )
          goto LABEL_13;
      }
LABEL_133:
      sub_B17100(v24, v25, v26);
      sub_B170A0();
    }
LABEL_13:
    titleSpriteDecoration = this->fields.titleSpriteDecoration;
    if ( !titleSpriteDecoration )
      goto LABEL_132;
    max_length = titleSpriteDecoration->max_length;
    if ( max_length >= 1 )
    {
      v34 = 0;
      while ( v34 < max_length )
      {
        v35 = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v34];
        if ( !v35 )
          goto LABEL_132;
        v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
        if ( !v36 )
          goto LABEL_132;
        UnityEngine_GameObject__SetActive(v36, 0, 0LL);
        max_length = titleSpriteDecoration->max_length;
        if ( (int)++v34 >= max_length )
          goto LABEL_20;
      }
      goto LABEL_133;
    }
LABEL_20:
    titleLabelDecoration = (UnityEngine_Object_o *)this->fields.titleLabelDecoration;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(titleLabelDecoration, 0LL, 0LL) )
    {
      v38 = (UnityEngine_Component_o *)this->fields.titleLabelDecoration;
      if ( !v38 )
        goto LABEL_132;
      v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
      if ( !v39 )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(v39, 0, 0LL);
    }
    if ( !v23->klass )
      goto LABEL_132;
    v40 = System_Int32__ToString((unsigned int)v23->klass + 48, 0LL);
    v41 = System_String__Concat_43743732((System_String_o *)StringLiteral_22613/*"title_"*/, v40, 0LL);
    v42 = (UnityEngine_Object_o *)this->fields.titleLabelDecoration;
    v43 = v41;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
      goto LABEL_54;
    v44 = this->fields.titleLabelDecoration;
    if ( !v44 )
      goto LABEL_132;
    v45 = (UIAtlas_o *)v44->m_Items[53];
    if ( !v45 )
      goto LABEL_132;
    if ( UIAtlas__GetSprite(v45, v43, 0LL) )
    {
      v46 = (UISprite_o *)this->fields.titleLabelDecoration;
      if ( !v46 )
        goto LABEL_132;
      UISprite__set_spriteName(v46, v43, 0LL);
      v47 = this->fields.titleLabelDecoration;
      if ( !v47 )
        goto LABEL_132;
      ((void (__fastcall *)(struct UISprite_array *, Il2CppMethodPointer))v47->obj.klass->vtable[33].method)(
        v47,
        v47->obj.klass->vtable[34].methodPtr);
      v48 = (UnityEngine_Component_o *)this->fields.titleLabelDecoration;
      if ( !v48 )
        goto LABEL_132;
      v49 = UnityEngine_Component__get_gameObject(v48, 0LL);
      if ( !v49 )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive(v49, 1, 0LL);
      v50 = *(UnityEngine_Object_o **)&this->fields.isTitleLabelNumberOnly;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v24 = UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
      if ( v24 )
      {
        v51 = *(UnityEngine_Component_o **)&this->fields.isTitleLabelNumberOnly;
        if ( !v51 )
          goto LABEL_132;
        v52 = UnityEngine_Component__get_gameObject(v51, 0LL);
        if ( !v52 )
          goto LABEL_132;
        UnityEngine_GameObject__SetActive(v52, 0, 0LL);
      }
      v53 = this->fields.messageLabel;
      if ( !v53 )
        goto LABEL_132;
      v54 = (int)v53->fields.leftAnchor;
      if ( v54 >= 1 )
      {
        v55 = 0;
        while ( v55 < v54 )
        {
          v56 = (UnityEngine_Component_o *)*((_QWORD *)&v53->fields.rightAnchor + (int)v55);
          if ( !v56 )
            goto LABEL_132;
          v57 = UnityEngine_Component__get_gameObject(v56, 0LL);
          if ( !v57 )
            goto LABEL_132;
          UnityEngine_GameObject__SetActive(v57, 1, 0LL);
          v54 = (int)v53->fields.leftAnchor;
          if ( (int)++v55 >= v54 )
            goto LABEL_73;
        }
        goto LABEL_133;
      }
    }
    else
    {
LABEL_54:
      v58 = *(UnityEngine_Object_o **)&this->fields.isTitleLabelNumberOnly;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v58, 0LL, 0LL) )
      {
        klass = this[1].klass;
        if ( !klass )
          goto LABEL_132;
        v60 = *(UILabel_o **)&this->fields.isTitleLabelNumberOnly;
        if ( !v60 )
          goto LABEL_132;
        UILabel__set_text(v60, (System_String_o *)klass->_1.name, 0LL);
        if ( LOBYTE(this->fields.titleSprite) )
        {
          v61 = *(UILabel_o **)&this->fields.isTitleLabelNumberOnly;
          if ( !v61 )
            goto LABEL_132;
          mText = v61->fields.mText;
          if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
          }
          v63 = System_Text_RegularExpressions_Regex__Replace(
                  mText,
                  (System_String_o *)StringLiteral_15708/*"[^0-9]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          UILabel__set_text(v61, v63, 0LL);
        }
        v64 = this->fields.titleSpriteDecoration;
        if ( !v64 )
          goto LABEL_132;
        v65 = v64->max_length;
        if ( v65 >= 1 )
        {
          v66 = 0;
          while ( v66 < v65 )
          {
            v67 = (UnityEngine_Component_o *)v64->m_Items[v66];
            if ( !v67 )
              goto LABEL_132;
            v68 = UnityEngine_Component__get_gameObject(v67, 0LL);
            if ( !v68 )
              goto LABEL_132;
            UnityEngine_GameObject__SetActive(v68, 1, 0LL);
            v65 = v64->max_length;
            if ( (int)++v66 >= v65 )
              goto LABEL_73;
          }
          goto LABEL_133;
        }
      }
    }
LABEL_73:
    messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(messageManager, 0LL, 0LL) )
    {
      v70 = this[1].klass;
      if ( !v70 )
        goto LABEL_132;
      v71 = (UISprite_o *)this->fields.messageManager;
      v72 = System_Int32__ToString((int)v70 + 48, 0LL);
      v73 = System_String__Concat_43743732((System_String_o *)StringLiteral_22319/*"sub_title_"*/, v72, 0LL);
      if ( !v71 )
        goto LABEL_132;
      UISprite__set_spriteName(v71, v73, 0LL);
      v74 = this->fields.messageManager;
      if ( !v74 )
        goto LABEL_132;
      ((void (__fastcall *)(struct ScriptLineMessage_o *, Il2CppMethodPointer))v74->klass[1].vtable._6_PreProcSetRubyLabel.method)(
        v74,
        v74->klass[1].vtable._7_SetText.methodPtr);
    }
    typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
    {
      if ( !v23->klass )
        goto LABEL_132;
      if ( System_String__IsNullOrEmpty((System_String_o *)v23->klass->_1.byval_arg.data, 0LL) )
      {
        if ( !v23->klass )
          goto LABEL_132;
        IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v23->klass->_1.namespaze, 0LL);
        v77 = this->fields.typeSprite;
        if ( IsNullOrEmpty )
        {
          if ( !v77 )
            goto LABEL_132;
          ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)this->fields.typeSprite, 0LL);
        }
        else
        {
          if ( !v23->klass || !v77 )
            goto LABEL_132;
          ((void (__fastcall *)(struct UISprite_o *, const char *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))v77->klass->vtable._7_get_alpha.method)(
            this->fields.typeSprite,
            v23->klass->_1.namespaze,
            0LL,
            0LL,
            0LL,
            0LL,
            v77->klass->vtable._8_set_alpha.methodPtr);
        }
      }
      else
      {
        v83 = this[1].klass;
        if ( !v83 )
          goto LABEL_132;
        v84 = this->fields.typeSprite;
        if ( !v84 )
          goto LABEL_132;
        ((void (__fastcall *)(struct UISprite_o *, void *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))v84->klass->vtable._7_get_alpha.method)(
          v84,
          v83->_1.byval_arg.data,
          0LL,
          0LL,
          0LL,
          0LL,
          v84->klass->vtable._8_set_alpha.methodPtr);
      }
      messageSprite = (UnityEngine_Object_o *)this->fields.messageSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(messageSprite, 0LL, 0LL) )
      {
        v86 = (UILabel_o *)this->fields.messageSprite;
        if ( !v86 )
          goto LABEL_132;
        UILabel__set_text(v86, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
    }
    else
    {
      v78 = (UnityEngine_Object_o *)this->fields.messageSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
      {
        v79 = this[1].klass;
        if ( !v79 )
          goto LABEL_132;
        v80 = (UILabel_o *)this->fields.messageSprite;
        if ( !v80 )
          goto LABEL_132;
        UILabel__set_text(v80, (System_String_o *)v79->_1.namespaze, 0LL);
        if ( !v23->klass )
          goto LABEL_132;
        v81 = *(&v23->klass->_1.byval_arg.bits + 1);
        if ( v81 >= 1 )
        {
          v82 = (UILabel_o *)this->fields.messageSprite;
          if ( !v82 )
            goto LABEL_132;
          UILabel__set_maxLineCount(v82, v81, 0LL);
        }
      }
    }
    basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
    {
      if ( !v23->klass )
        goto LABEL_132;
      v88 = 0LL;
      switch ( v23->klass->_1.byval_arg.bits )
      {
        case 1u:
          v89 = &StringLiteral_21533/*"quest_main"*/;
          goto LABEL_124;
        case 2u:
          v89 = &StringLiteral_21530/*"quest_free"*/;
          goto LABEL_124;
        case 3u:
          v89 = &StringLiteral_21525/*"quest_Interlude"*/;
          goto LABEL_124;
        case 5u:
          v89 = &StringLiteral_21529/*"quest_event"*/;
          goto LABEL_124;
        case 6u:
          v89 = &StringLiteral_21531/*"quest_heroic"*/;
LABEL_124:
          v88 = (System_String_o *)*v89;
          break;
        default:
          break;
      }
      v90 = (UISprite_o *)this->fields.basePanel;
      if ( !v90 )
        goto LABEL_132;
      UISprite__set_spriteName(v90, v88, 0LL);
      v91 = this->fields.basePanel;
      if ( !v91 )
        goto LABEL_132;
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppRuntimeInterfaceOffsetPair *))v91->klass[1]._1.implementedInterfaces)(
        v91,
        v91->klass[1]._1.interfaceOffsets);
    }
    asset = (System_String_o *)this->fields.asset;
    if ( !System_String__IsNullOrEmpty((System_String_o *)this->fields.commonParam, 0LL) )
      asset = (System_String_o *)this->fields.commonParam;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( Instance )
    {
      ScriptManager__InitQuestStartEffectSkip(
        (ScriptManager_o *)Instance,
        (System_String_o *)this->fields.asset,
        asset,
        0LL);
      return;
    }
LABEL_132:
    sub_B170D4();
  }
  v94 = (QuestStartEffectComponent_o *)sub_B173C8(param);
  QuestStartEffectComponent__RefreshPanel(v94, v95);
}


void __fastcall QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}