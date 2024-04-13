void __fastcall QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6F46 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6F46 = 1;
  }
  if ( (BYTE3(CommonEffectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CommonEffectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  }
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall QuestStartEffectComponent__RefreshPanel(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *basePanel; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_42E6F45 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6F45 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_22;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  base2Panel = (UnityEngine_Object_o *)this->fields.base2Panel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(base2Panel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.base2Panel;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.base2Panel;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_22:
    sub_B5D69C(gameObject, v6);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  __int64 v46; // x9
  struct CommonEffectParam_o **p_commonParam; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 questMessageLabelMaxLine; // x1
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v52; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v54; // w8
  unsigned int v55; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  UnityEngine_Object_o *v59; // x22
  System_String_o *v60; // x21
  struct UISprite_o *v61; // x8
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v63; // x21
  int v64; // w8
  unsigned int v65; // w22
  UnityEngine_Object_o *v66; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v68; // x21
  System_String_o *mText; // x22
  System_String_o *v70; // x0
  struct UILabel_o *v71; // x8
  struct System_String_o *v72; // x8
  struct UISprite_array *v73; // x21
  int v74; // w8
  unsigned int v75; // w22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v77; // x8
  UISprite_o *v78; // x21
  System_String_o *v79; // x0
  UnityEngine_Object_o *messageManager; // x21
  struct ScriptLineMessage_o *v81; // x8
  UnityEngine_Object_o *v82; // x21
  struct CommonEffectParam_o *v83; // x8
  struct CommonEffectParam_o *v84; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  __int64 *v87; // x8
  System_String_o *baseName; // x20
  __int64 v89; // x0
  QuestStartEffectComponent_o *v90; // x0
  const MethodInfo *v91; // x1

  if ( (byte_42E6F44 & 1) == 0 )
  {
    sub_B5D5C4(&CommonEffectParam_TypeInfo, (_DWORD)param, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Text_RegularExpressions_Regex_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_21913/*"quest_free"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_21912/*"quest_event"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_21914/*"quest_heroic"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_15962/*"[^0-9]"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_21916/*"quest_main"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_21908/*"quest_Interlude"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_22715/*"sub_title_"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_1/*""*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_23011/*"title_"*/, v43, v44, v45);
    byte_42E6F44 = 1;
  }
  if ( !param
    || (v46 = *(&CommonEffectParam_TypeInfo->_2.bitflags2 + 1), *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v46)
    && (CommonEffectParam_c *)param->klass->_2.typeHierarchy[v46 - 1] == CommonEffectParam_TypeInfo )
  {
    p_commonParam = &this->fields.commonParam;
    this->fields.commonParam = (struct CommonEffectParam_o *)param;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.commonParam,
      (System_Int32_array **)param,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    titleSpriteDecoration = this->fields.titleSpriteDecoration;
    if ( !titleSpriteDecoration )
      goto LABEL_135;
    max_length = titleSpriteDecoration->max_length;
    if ( max_length >= 1 )
    {
      v52 = 0;
      while ( v52 < max_length )
      {
        gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v52];
        if ( !gameObject )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_135;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        max_length = titleSpriteDecoration->max_length;
        if ( (int)++v52 >= max_length )
          goto LABEL_13;
      }
LABEL_136:
      v89 = sub_B5D6C8(gameObject);
      sub_B5D668(v89, 0LL);
    }
LABEL_13:
    titleLabelDecoration = this->fields.titleLabelDecoration;
    if ( !titleLabelDecoration )
      goto LABEL_135;
    v54 = titleLabelDecoration->max_length;
    if ( v54 >= 1 )
    {
      v55 = 0;
      while ( v55 < v54 )
      {
        gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v55];
        if ( !gameObject )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_135;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v54 = titleLabelDecoration->max_length;
        if ( (int)++v55 >= v54 )
          goto LABEL_20;
      }
      goto LABEL_136;
    }
LABEL_20:
    titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(titleSprite, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_135;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_135;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    if ( !*p_commonParam )
      goto LABEL_135;
    v57 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0LL);
    v58 = System_String__Concat_44577788((System_String_o *)StringLiteral_23011/*"title_"*/, v57, 0LL);
    v59 = (UnityEngine_Object_o *)this->fields.titleSprite;
    v60 = v58;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      goto LABEL_54;
    v61 = this->fields.titleSprite;
    if ( !v61 )
      goto LABEL_135;
    gameObject = (UnityEngine_Component_o *)v61->fields.mAtlas;
    if ( !gameObject )
      goto LABEL_135;
    if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v60, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_135;
      UISprite__set_spriteName((UISprite_o *)gameObject, v60, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_135;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
        gameObject,
        gameObject->klass[2]._1.interopData);
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_135;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_135;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
        if ( !gameObject )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_135;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      v63 = this->fields.titleSpriteDecoration;
      if ( !v63 )
        goto LABEL_135;
      v64 = v63->max_length;
      if ( v64 >= 1 )
      {
        v65 = 0;
        while ( v65 < v64 )
        {
          gameObject = (UnityEngine_Component_o *)v63->m_Items[v65];
          if ( !gameObject )
            goto LABEL_135;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_135;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v64 = v63->max_length;
          if ( (int)++v65 >= v64 )
            goto LABEL_76;
        }
        goto LABEL_136;
      }
    }
    else
    {
LABEL_54:
      v66 = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v66, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        commonParam = this->fields.commonParam;
        if ( !commonParam )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
        if ( !gameObject )
          goto LABEL_135;
        UILabel__set_text((UILabel_o *)gameObject, commonParam->fields.title, 0LL);
        if ( this->fields.isTitleLabelNumberOnly )
        {
          v68 = this->fields.titleLabel;
          if ( !v68 )
            goto LABEL_135;
          mText = v68->fields.mText;
          if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
          }
          v70 = System_Text_RegularExpressions_Regex__Replace(
                  mText,
                  (System_String_o *)StringLiteral_15962/*"[^0-9]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          UILabel__set_text(v68, v70, 0LL);
        }
        v71 = this->fields.titleLabel;
        if ( !v71 )
          goto LABEL_135;
        v72 = v71->fields.mText;
        if ( !v72 )
          goto LABEL_135;
        if ( v72->fields.m_stringLength )
        {
          v73 = this->fields.titleLabelDecoration;
          if ( !v73 )
            goto LABEL_135;
          v74 = v73->max_length;
          if ( v74 >= 1 )
          {
            v75 = 0;
            while ( v75 < v74 )
            {
              gameObject = (UnityEngine_Component_o *)v73->m_Items[v75];
              if ( !gameObject )
                goto LABEL_135;
              gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_135;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              v74 = v73->max_length;
              if ( (int)++v75 >= v74 )
                goto LABEL_76;
            }
            goto LABEL_136;
          }
        }
      }
    }
LABEL_76:
    messageSprite = (UnityEngine_Object_o *)this->fields.messageSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageSprite, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v77 = this->fields.commonParam;
      if ( !v77 )
        goto LABEL_135;
      v78 = this->fields.messageSprite;
      v79 = System_Int32__ToString((int)v77 + 48, 0LL);
      gameObject = (UnityEngine_Component_o *)System_String__Concat_44577788(
                                                (System_String_o *)StringLiteral_22715/*"sub_title_"*/,
                                                v79,
                                                0LL);
      if ( !v78 )
        goto LABEL_135;
      UISprite__set_spriteName(v78, (System_String_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.messageSprite;
      if ( !gameObject )
        goto LABEL_135;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
        gameObject,
        gameObject->klass[2]._1.interopData);
    }
    messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageManager, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !*p_commonParam )
        goto LABEL_135;
      gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.messageRuby, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*p_commonParam )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.message, 0LL);
        v81 = this->fields.messageManager;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v81 )
            goto LABEL_135;
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
        }
        else
        {
          if ( !*p_commonParam || !v81 )
            goto LABEL_135;
          ((void (__fastcall *)(struct ScriptLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v81->klass->vtable._7_SetText.method)(
            this->fields.messageManager,
            (*p_commonParam)->fields.message,
            0LL,
            0LL,
            0LL,
            0LL,
            v81->klass[1]._1.image);
        }
      }
      else
      {
        v84 = this->fields.commonParam;
        if ( !v84 )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
        if ( !gameObject )
          goto LABEL_135;
        (*(void (__fastcall **)(UnityEngine_Component_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
          gameObject,
          v84->fields.messageRuby,
          0LL,
          0LL,
          0LL,
          0LL,
          gameObject->klass[1]._1.element_class);
      }
      messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_135;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
    }
    else
    {
      v82 = (UnityEngine_Object_o *)this->fields.messageLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v82, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v83 = this->fields.commonParam;
        if ( !v83 )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_135;
        UILabel__set_text((UILabel_o *)gameObject, v83->fields.message, 0LL);
        if ( !*p_commonParam )
          goto LABEL_135;
        questMessageLabelMaxLine = (unsigned int)(*p_commonParam)->fields.questMessageLabelMaxLine;
        if ( (int)questMessageLabelMaxLine >= 1 )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_135;
          UILabel__set_maxLineCount((UILabel_o *)gameObject, questMessageLabelMaxLine, 0LL);
        }
      }
    }
    typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !*p_commonParam )
        goto LABEL_135;
      questMessageLabelMaxLine = 0LL;
      switch ( (*p_commonParam)->fields.type )
      {
        case 1:
          v87 = &StringLiteral_21916/*"quest_main"*/;
          goto LABEL_127;
        case 2:
          v87 = &StringLiteral_21913/*"quest_free"*/;
          goto LABEL_127;
        case 3:
          v87 = &StringLiteral_21908/*"quest_Interlude"*/;
          goto LABEL_127;
        case 5:
          v87 = &StringLiteral_21912/*"quest_event"*/;
          goto LABEL_127;
        case 6:
          v87 = &StringLiteral_21914/*"quest_heroic"*/;
LABEL_127:
          questMessageLabelMaxLine = *v87;
          break;
        default:
          break;
      }
      gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
      if ( !gameObject )
        goto LABEL_135;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)questMessageLabelMaxLine, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
      if ( !gameObject )
        goto LABEL_135;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
        gameObject,
        gameObject->klass[2]._1.interopData);
    }
    baseName = this->fields.baseName;
    if ( !System_String__IsNullOrEmpty(this->fields.overwriteEffectNameForTapSkip, 0LL) )
      baseName = this->fields.overwriteEffectNameForTapSkip;
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( gameObject )
    {
      ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0LL);
      return;
    }
LABEL_135:
    sub_B5D69C(gameObject, questMessageLabelMaxLine);
  }
  v90 = (QuestStartEffectComponent_o *)sub_B5D990(param);
  QuestStartEffectComponent__RefreshPanel(v90, v91);
}


void __fastcall QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}