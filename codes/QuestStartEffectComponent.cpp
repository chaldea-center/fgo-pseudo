void __fastcall QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42AE4D5 & 1) == 0 )
  {
    sub_B52984(&CommonEffectComponent_TypeInfo);
    byte_42AE4D5 = 1;
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
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_42AE4D4 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE4D4 = 1;
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
    sub_B52A5C(gameObject, v4);
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
  __int64 v10; // x9
  struct CommonEffectParam_o **p_commonParam; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 questMessageLabelMaxLine; // x1
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v16; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v18; // w8
  unsigned int v19; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UnityEngine_Object_o *v23; // x22
  System_String_o *v24; // x21
  struct UISprite_o *v25; // x8
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v27; // x21
  int v28; // w8
  unsigned int v29; // w22
  UnityEngine_Object_o *v30; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v32; // x21
  System_String_o *mText; // x22
  System_String_o *v34; // x0
  struct UILabel_o *v35; // x8
  struct System_String_o *v36; // x8
  struct UISprite_array *v37; // x21
  int v38; // w8
  unsigned int v39; // w22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v41; // x8
  UISprite_o *v42; // x21
  System_String_o *v43; // x0
  UnityEngine_Object_o *messageManager; // x21
  struct ScriptLineMessage_o *v45; // x8
  UnityEngine_Object_o *v46; // x21
  struct CommonEffectParam_o *v47; // x8
  struct CommonEffectParam_o *v48; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  __int64 *v51; // x8
  System_String_o *baseName; // x20
  __int64 v53; // x0
  QuestStartEffectComponent_o *v54; // x0
  const MethodInfo *v55; // x1

  if ( (byte_42AE4D3 & 1) == 0 )
  {
    sub_B52984(&CommonEffectParam_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_B52984(&StringLiteral_21800/*"quest_free"*/);
    sub_B52984(&StringLiteral_21799/*"quest_event"*/);
    sub_B52984(&StringLiteral_21801/*"quest_heroic"*/);
    sub_B52984(&StringLiteral_15877/*"[^0-9]"*/);
    sub_B52984(&StringLiteral_21803/*"quest_main"*/);
    sub_B52984(&StringLiteral_21795/*"quest_Interlude"*/);
    sub_B52984(&StringLiteral_22600/*"sub_title_"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_22896/*"title_"*/);
    byte_42AE4D3 = 1;
  }
  if ( !param
    || (v10 = *(&CommonEffectParam_TypeInfo->_2.bitflags2 + 1), *(&param->klass->_2.bitflags2 + 1) >= (unsigned int)v10)
    && (CommonEffectParam_c *)param->klass->_2.typeHierarchy[v10 - 1] == CommonEffectParam_TypeInfo )
  {
    p_commonParam = &this->fields.commonParam;
    this->fields.commonParam = (struct CommonEffectParam_o *)param;
    sub_B52920(
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
      v16 = 0;
      while ( v16 < max_length )
      {
        gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v16];
        if ( !gameObject )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_135;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        max_length = titleSpriteDecoration->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_13;
      }
LABEL_136:
      v53 = sub_B52A88(gameObject);
      sub_B52A28(v53, 0LL);
    }
LABEL_13:
    titleLabelDecoration = this->fields.titleLabelDecoration;
    if ( !titleLabelDecoration )
      goto LABEL_135;
    v18 = titleLabelDecoration->max_length;
    if ( v18 >= 1 )
    {
      v19 = 0;
      while ( v19 < v18 )
      {
        gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v19];
        if ( !gameObject )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_135;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        v18 = titleLabelDecoration->max_length;
        if ( (int)++v19 >= v18 )
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
    v21 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0LL);
    v22 = System_String__Concat_44568316((System_String_o *)StringLiteral_22896/*"title_"*/, v21, 0LL);
    v23 = (UnityEngine_Object_o *)this->fields.titleSprite;
    v24 = v22;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
      goto LABEL_54;
    v25 = this->fields.titleSprite;
    if ( !v25 )
      goto LABEL_135;
    gameObject = (UnityEngine_Component_o *)v25->fields.mAtlas;
    if ( !gameObject )
      goto LABEL_135;
    if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v24, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
      if ( !gameObject )
        goto LABEL_135;
      UISprite__set_spriteName((UISprite_o *)gameObject, v24, 0LL);
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
      v27 = this->fields.titleSpriteDecoration;
      if ( !v27 )
        goto LABEL_135;
      v28 = v27->max_length;
      if ( v28 >= 1 )
      {
        v29 = 0;
        while ( v29 < v28 )
        {
          gameObject = (UnityEngine_Component_o *)v27->m_Items[v29];
          if ( !gameObject )
            goto LABEL_135;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_135;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v28 = v27->max_length;
          if ( (int)++v29 >= v28 )
            goto LABEL_76;
        }
        goto LABEL_136;
      }
    }
    else
    {
LABEL_54:
      v30 = (UnityEngine_Object_o *)this->fields.titleLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
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
          v32 = this->fields.titleLabel;
          if ( !v32 )
            goto LABEL_135;
          mText = v32->fields.mText;
          if ( (BYTE3(System_Text_RegularExpressions_Regex_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
          }
          v34 = System_Text_RegularExpressions_Regex__Replace(
                  mText,
                  (System_String_o *)StringLiteral_15877/*"[^0-9]"*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
          UILabel__set_text(v32, v34, 0LL);
        }
        v35 = this->fields.titleLabel;
        if ( !v35 )
          goto LABEL_135;
        v36 = v35->fields.mText;
        if ( !v36 )
          goto LABEL_135;
        if ( v36->fields.m_stringLength )
        {
          v37 = this->fields.titleLabelDecoration;
          if ( !v37 )
            goto LABEL_135;
          v38 = v37->max_length;
          if ( v38 >= 1 )
          {
            v39 = 0;
            while ( v39 < v38 )
            {
              gameObject = (UnityEngine_Component_o *)v37->m_Items[v39];
              if ( !gameObject )
                goto LABEL_135;
              gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
              if ( !gameObject )
                goto LABEL_135;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              v38 = v37->max_length;
              if ( (int)++v39 >= v38 )
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
      v41 = this->fields.commonParam;
      if ( !v41 )
        goto LABEL_135;
      v42 = this->fields.messageSprite;
      v43 = System_Int32__ToString((int)v41 + 48, 0LL);
      gameObject = (UnityEngine_Component_o *)System_String__Concat_44568316(
                                                (System_String_o *)StringLiteral_22600/*"sub_title_"*/,
                                                v43,
                                                0LL);
      if ( !v42 )
        goto LABEL_135;
      UISprite__set_spriteName(v42, (System_String_o *)gameObject, 0LL);
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
        v45 = this->fields.messageManager;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v45 )
            goto LABEL_135;
          ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
        }
        else
        {
          if ( !*p_commonParam || !v45 )
            goto LABEL_135;
          ((void (__fastcall *)(struct ScriptLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v45->klass->vtable._7_SetText.method)(
            this->fields.messageManager,
            (*p_commonParam)->fields.message,
            0LL,
            0LL,
            0LL,
            0LL,
            v45->klass[1]._1.image);
        }
      }
      else
      {
        v48 = this->fields.commonParam;
        if ( !v48 )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
        if ( !gameObject )
          goto LABEL_135;
        (*(void (__fastcall **)(UnityEngine_Component_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
          gameObject,
          v48->fields.messageRuby,
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
      v46 = (UnityEngine_Object_o *)this->fields.messageLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v46, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v47 = this->fields.commonParam;
        if ( !v47 )
          goto LABEL_135;
        gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
        if ( !gameObject )
          goto LABEL_135;
        UILabel__set_text((UILabel_o *)gameObject, v47->fields.message, 0LL);
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
          v51 = &StringLiteral_21803/*"quest_main"*/;
          goto LABEL_127;
        case 2:
          v51 = &StringLiteral_21800/*"quest_free"*/;
          goto LABEL_127;
        case 3:
          v51 = &StringLiteral_21795/*"quest_Interlude"*/;
          goto LABEL_127;
        case 5:
          v51 = &StringLiteral_21799/*"quest_event"*/;
          goto LABEL_127;
        case 6:
          v51 = &StringLiteral_21801/*"quest_heroic"*/;
LABEL_127:
          questMessageLabelMaxLine = *v51;
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
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    if ( gameObject )
    {
      ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0LL);
      return;
    }
LABEL_135:
    sub_B52A5C(gameObject, questMessageLabelMaxLine);
  }
  v54 = (QuestStartEffectComponent_o *)sub_B52D50(param);
  QuestStartEffectComponent__RefreshPanel(v54, v55);
}


void __fastcall QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}