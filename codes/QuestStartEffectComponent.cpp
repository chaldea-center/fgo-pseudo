void __fastcall QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4212EC4 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectComponent_TypeInfo, method);
    byte_4212EC4 = 1;
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
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_4212EC3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212EC3 = 1;
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
    sub_B0D97C(gameObject);
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
  struct CommonEffectParam_o **p_commonParam; // x20
  UnityEngine_Component_o *gameObject; // x0
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v27; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v29; // w8
  unsigned int v30; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  UnityEngine_Object_o *v34; // x22
  System_String_o *v35; // x21
  struct UISprite_o *v36; // x8
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v38; // x21
  int v39; // w8
  unsigned int v40; // w22
  UnityEngine_Object_o *v41; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v43; // x21
  System_String_o *mText; // x22
  System_String_o *v45; // x0
  struct UISprite_array *v46; // x21
  int v47; // w8
  unsigned int v48; // w22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v50; // x8
  UISprite_o *v51; // x21
  System_String_o *v52; // x0
  UnityEngine_Object_o *messageManager; // x21
  struct ScriptLineMessage_o *v54; // x8
  UnityEngine_Object_o *v55; // x21
  struct CommonEffectParam_o *v56; // x8
  int32_t questMessageLabelMaxLine; // w1
  struct CommonEffectParam_o *v58; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  System_String_o *v61; // x1
  __int64 *v62; // x8
  System_String_o *baseName; // x20
  __int64 v64; // x0
  QuestStartEffectComponent_o *v65; // x0
  const MethodInfo *v66; // x1

  if ( (byte_4212EC2 & 1) == 0 )
  {
    sub_B0D8A4(&CommonEffectParam_TypeInfo, param);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&System_Text_RegularExpressions_Regex_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v12);
    sub_B0D8A4(&StringLiteral_21692/*"quest_free"*/, v13);
    sub_B0D8A4(&StringLiteral_21691/*"quest_event"*/, v14);
    sub_B0D8A4(&StringLiteral_21693/*"quest_heroic"*/, v15);
    sub_B0D8A4(&StringLiteral_15818/*"[^0-9]"*/, v16);
    sub_B0D8A4(&StringLiteral_21695/*"quest_main"*/, v17);
    sub_B0D8A4(&StringLiteral_21687/*"quest_Interlude"*/, v18);
    sub_B0D8A4(&StringLiteral_22487/*"sub_title_"*/, v19);
    sub_B0D8A4(&StringLiteral_1/*""*/, v20);
    sub_B0D8A4(&StringLiteral_22782/*"title_"*/, v21);
    byte_4212EC2 = 1;
  }
  if ( !param
    || (v22 = *(&CommonEffectParam_TypeInfo->_2.bitflags2 + 1), *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v22)
    && (CommonEffectParam_c *)param->klass->_2.typeHierarchy[v22 - 1] == CommonEffectParam_TypeInfo )
  {
    p_commonParam = &this->fields.commonParam;
    this->fields.commonParam = (struct CommonEffectParam_o *)param;
    sub_B0D840(
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
      goto LABEL_132;
    max_length = titleSpriteDecoration->max_length;
    if ( max_length >= 1 )
    {
      v27 = 0;
      while ( v27 < max_length )
      {
        gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v27];
        if ( !gameObject )
          goto LABEL_132;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_132;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        max_length = titleSpriteDecoration->max_length;
        if ( (int)++v27 >= max_length )
          goto LABEL_13;
      }
LABEL_133:
      v64 = sub_B0D9A8(gameObject);
      sub_B0D948(v64, 0LL);
    }
LABEL_13:
    titleLabelDecoration = this->fields.titleLabelDecoration;
    if ( !titleLabelDecoration )
      goto LABEL_132;
    v29 = titleLabelDecoration->max_length;
    if ( v29 >= 1 )
    {
      v30 = 0;
      while ( v30 < v29 )
      {
        gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v30];
        if ( !gameObject )
          goto LABEL_132;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_132;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v29 = titleLabelDecoration->max_length;
        if ( (int)++v30 >= v29 )
          goto LABEL_20;
      }
      goto LABEL_133;
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
        goto LABEL_132;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_132;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    if ( !*p_commonParam )
      goto LABEL_132;
    v32 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0LL);
    v33 = System_String__Concat_43849904((System_String_o *)StringLiteral_22782/*"title_"*/, v32, 0LL);
    v34 = (UnityEngine_Object_o *)this->fields.titleSprite;
    v35 = v33;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      goto LABEL_54;
    v36 = this->fields.titleSprite;
    if ( !v36 )
      goto LABEL_132;
    gameObject = (UnityEngine_Component_o *)v36->fields.mAtlas;
    if ( !gameObject )
      goto LABEL_132;
    if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v35, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_132;
      UISprite__set_spriteName((UISprite_o *)gameObject, v35, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_132;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
        gameObject,
        gameObject->klass[2]._1.interopData);
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_132;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_132;
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
          goto LABEL_132;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_132;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      v38 = this->fields.titleSpriteDecoration;
      if ( !v38 )
        goto LABEL_132;
      v39 = v38->max_length;
      if ( v39 >= 1 )
      {
        v40 = 0;
        while ( v40 < v39 )
        {
          gameObject = (UnityEngine_Component_o *)v38->m_Items[v40];
          if ( !gameObject )
            goto LABEL_132;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_132;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v39 = v38->max_length;
          if ( (int)++v40 >= v39 )
            goto LABEL_73;
        }
        goto LABEL_133;
      }
    }
    else
    {
LABEL_54:
      v41 = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        commonParam = this->fields.commonParam;
        if ( !commonParam )
          goto LABEL_132;
        gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
        if ( !gameObject )
          goto LABEL_132;
        UILabel__set_text((UILabel_o *)gameObject, commonParam->fields.title, 0LL);
        if ( this->fields.isTitleLabelNumberOnly )
        {
          v43 = this->fields.titleLabel;
          if ( !v43 )
            goto LABEL_132;
          mText = v43->fields.mText;
          if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
          }
          v45 = System_Text_RegularExpressions_Regex__Replace(
                  mText,
                  (System_String_o *)StringLiteral_15818/*"[^0-9]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          UILabel__set_text(v43, v45, 0LL);
        }
        v46 = this->fields.titleLabelDecoration;
        if ( !v46 )
          goto LABEL_132;
        v47 = v46->max_length;
        if ( v47 >= 1 )
        {
          v48 = 0;
          while ( v48 < v47 )
          {
            gameObject = (UnityEngine_Component_o *)v46->m_Items[v48];
            if ( !gameObject )
              goto LABEL_132;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_132;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v47 = v46->max_length;
            if ( (int)++v48 >= v47 )
              goto LABEL_73;
          }
          goto LABEL_133;
        }
      }
    }
LABEL_73:
    messageSprite = (UnityEngine_Object_o *)this->fields.messageSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageSprite, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      v50 = this->fields.commonParam;
      if ( !v50 )
        goto LABEL_132;
      v51 = this->fields.messageSprite;
      v52 = System_Int32__ToString((int)v50 + 48, 0LL);
      gameObject = (UnityEngine_Component_o *)System_String__Concat_43849904(
                                                (System_String_o *)StringLiteral_22487/*"sub_title_"*/,
                                                v52,
                                                0LL);
      if ( !v51 )
        goto LABEL_132;
      UISprite__set_spriteName(v51, (System_String_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.messageSprite;
      if ( !gameObject )
        goto LABEL_132;
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
        goto LABEL_132;
      gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.messageRuby, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*p_commonParam )
          goto LABEL_132;
        gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.message, 0LL);
        v54 = this->fields.messageManager;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v54 )
            goto LABEL_132;
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
        }
        else
        {
          if ( !*p_commonParam || !v54 )
            goto LABEL_132;
          ((void (__fastcall *)(struct ScriptLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v54->klass->vtable._7_SetText.method)(
            this->fields.messageManager,
            (*p_commonParam)->fields.message,
            0LL,
            0LL,
            0LL,
            0LL,
            v54->klass[1]._1.image);
        }
      }
      else
      {
        v58 = this->fields.commonParam;
        if ( !v58 )
          goto LABEL_132;
        gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
        if ( !gameObject )
          goto LABEL_132;
        (*(void (__fastcall **)(UnityEngine_Component_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
          gameObject,
          v58->fields.messageRuby,
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
          goto LABEL_132;
        UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
    }
    else
    {
      v55 = (UnityEngine_Object_o *)this->fields.messageLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v56 = this->fields.commonParam;
        if ( !v56 )
          goto LABEL_132;
        gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_132;
        UILabel__set_text((UILabel_o *)gameObject, v56->fields.message, 0LL);
        if ( !*p_commonParam )
          goto LABEL_132;
        questMessageLabelMaxLine = (*p_commonParam)->fields.questMessageLabelMaxLine;
        if ( questMessageLabelMaxLine >= 1 )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_132;
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
        goto LABEL_132;
      v61 = 0LL;
      switch ( (*p_commonParam)->fields.type )
      {
        case 1:
          v62 = &StringLiteral_21695/*"quest_main"*/;
          goto LABEL_124;
        case 2:
          v62 = &StringLiteral_21692/*"quest_free"*/;
          goto LABEL_124;
        case 3:
          v62 = &StringLiteral_21687/*"quest_Interlude"*/;
          goto LABEL_124;
        case 5:
          v62 = &StringLiteral_21691/*"quest_event"*/;
          goto LABEL_124;
        case 6:
          v62 = &StringLiteral_21693/*"quest_heroic"*/;
LABEL_124:
          v61 = (System_String_o *)*v62;
          break;
        default:
          break;
      }
      gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
      if ( !gameObject )
        goto LABEL_132;
      UISprite__set_spriteName((UISprite_o *)gameObject, v61, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
      if ( !gameObject )
        goto LABEL_132;
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
        gameObject,
        gameObject->klass[2]._1.interopData);
    }
    baseName = this->fields.baseName;
    if ( !System_String__IsNullOrEmpty(this->fields.overwriteEffectNameForTapSkip, 0LL) )
      baseName = this->fields.overwriteEffectNameForTapSkip;
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( gameObject )
    {
      ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0LL);
      return;
    }
LABEL_132:
    sub_B0D97C(gameObject);
  }
  v65 = (QuestStartEffectComponent_o *)sub_B0DC70(param);
  QuestStartEffectComponent__RefreshPanel(v65, v66);
}


void __fastcall QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}