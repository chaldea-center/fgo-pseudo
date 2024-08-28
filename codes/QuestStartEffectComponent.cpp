void __fastcall QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A20E88 & 1) == 0 )
  {
    sub_1B715CC(&CommonEffectComponent_TypeInfo, method);
    byte_4A20E88 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, method);
}


void __fastcall QuestStartEffectComponent__RefreshPanel(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_4A20E87 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A20E87 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(basePanel, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
  base2Panel = (UnityEngine_Object_o *)this->fields.base2Panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_20:
    sub_1B71828(gameObject, v4);
  }
}


void __fastcall QuestStartEffectComponent__SetParam(
        QuestStartEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  Il2CppClass *v18; // x1
  __int64 methodPtr_low; // x8
  struct CommonEffectParam_o **p_commonParam; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 questMessageLabelMaxLine; // x1
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v25; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v27; // w8
  unsigned int v28; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  UnityEngine_Object_o *v32; // x22
  System_String_o *v33; // x21
  struct UISprite_o *v34; // x8
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v36; // x21
  int v37; // w8
  unsigned int v38; // w22
  UnityEngine_Object_o *v39; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v41; // x21
  System_String_o *mText; // x22
  System_String_o *v43; // x0
  struct UILabel_o *v44; // x8
  struct System_String_o *v45; // x8
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
  struct CommonEffectParam_o *v57; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  __int64 *v60; // x8
  System_String_o *baseName; // x20
  QuestStartEffectComponent_o *v62; // x0
  const MethodInfo *v63; // x1

  if ( (byte_4A20E86 & 1) == 0 )
  {
    sub_1B715CC(&CommonEffectParam_TypeInfo, param);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B715CC(&System_Text_RegularExpressions_Regex_TypeInfo, v7);
    sub_1B715CC(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v8);
    sub_1B715CC(&StringLiteral_22644/*"quest_free"*/, v9);
    sub_1B715CC(&StringLiteral_22643/*"quest_event"*/, v10);
    sub_1B715CC(&StringLiteral_22645/*"quest_heroic"*/, v11);
    sub_1B715CC(&StringLiteral_15918/*"[^0-9]"*/, v12);
    sub_1B715CC(&StringLiteral_22647/*"quest_main"*/, v13);
    sub_1B715CC(&StringLiteral_22639/*"quest_Interlude"*/, v14);
    sub_1B715CC(&StringLiteral_23588/*"sub_title_"*/, v15);
    sub_1B715CC(&StringLiteral_1/*""*/, v16);
    sub_1B715CC(&StringLiteral_23902/*"title_"*/, v17);
    byte_4A20E86 = 1;
  }
  if ( !param )
  {
    p_commonParam = &this->fields.commonParam;
    this->fields.commonParam = 0LL;
    goto LABEL_10;
  }
  v18 = (Il2CppClass *)CommonEffectParam_TypeInfo;
  methodPtr_low = LOBYTE(CommonEffectParam_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
    && (CommonEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonEffectParam_TypeInfo )
  {
    this->fields.commonParam = (struct CommonEffectParam_o *)param;
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && param->klass->_2.typeHierarchy[methodPtr_low - 1] == v18 )
    {
      p_commonParam = &this->fields.commonParam;
LABEL_10:
      sub_1B71570((ServantStatusBattleListViewItem_o *)p_commonParam, (int32_t)param, (int32_t)method, v3);
      titleSpriteDecoration = this->fields.titleSpriteDecoration;
      if ( !titleSpriteDecoration )
        goto LABEL_129;
      max_length = titleSpriteDecoration->max_length;
      if ( max_length >= 1 )
      {
        v25 = 0;
        while ( v25 < max_length )
        {
          gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v25];
          if ( !gameObject )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_129;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          max_length = titleSpriteDecoration->max_length;
          if ( (int)++v25 >= max_length )
            goto LABEL_17;
        }
LABEL_130:
        sub_1B71830(gameObject, questMessageLabelMaxLine);
      }
LABEL_17:
      titleLabelDecoration = this->fields.titleLabelDecoration;
      if ( !titleLabelDecoration )
        goto LABEL_129;
      v27 = titleLabelDecoration->max_length;
      if ( v27 >= 1 )
      {
        v28 = 0;
        while ( v28 < v27 )
        {
          gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v28];
          if ( !gameObject )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_129;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          v27 = titleLabelDecoration->max_length;
          if ( (int)++v28 >= v27 )
            goto LABEL_24;
        }
        goto LABEL_130;
      }
LABEL_24:
      titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(titleSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_129;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_129;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      if ( !*p_commonParam )
        goto LABEL_129;
      v30 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0LL);
      v31 = System_String__Concat_61505504((System_String_o *)StringLiteral_23902/*"title_"*/, v30, 0LL);
      v32 = (UnityEngine_Object_o *)this->fields.titleSprite;
      v33 = v31;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_55;
      v34 = this->fields.titleSprite;
      if ( !v34 )
        goto LABEL_129;
      gameObject = (UnityEngine_Component_o *)v34->fields.mAtlas;
      if ( !gameObject )
        goto LABEL_129;
      if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v33, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_129;
        UISprite__set_spriteName((UISprite_o *)gameObject, v33, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_129;
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
          gameObject,
          gameObject->klass[2]._1.interopData);
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_129;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_129;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
          if ( !gameObject )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_129;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        v36 = this->fields.titleSpriteDecoration;
        if ( !v36 )
          goto LABEL_129;
        v37 = v36->max_length;
        if ( v37 >= 1 )
        {
          v38 = 0;
          while ( v38 < v37 )
          {
            gameObject = (UnityEngine_Component_o *)v36->m_Items[v38];
            if ( !gameObject )
              goto LABEL_129;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v37 = v36->max_length;
            if ( (int)++v38 >= v37 )
              goto LABEL_75;
          }
          goto LABEL_130;
        }
      }
      else
      {
LABEL_55:
        v39 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          commonParam = this->fields.commonParam;
          if ( !commonParam )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
          if ( !gameObject )
            goto LABEL_129;
          UILabel__set_text((UILabel_o *)gameObject, commonParam->fields.title, 0LL);
          if ( this->fields.isTitleLabelNumberOnly )
          {
            v41 = this->fields.titleLabel;
            if ( !v41 )
              goto LABEL_129;
            mText = v41->fields.mText;
            if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
            v43 = System_Text_RegularExpressions_Regex__Replace(
                    mText,
                    (System_String_o *)StringLiteral_15918/*"[^0-9]"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            UILabel__set_text(v41, v43, 0LL);
          }
          v44 = this->fields.titleLabel;
          if ( !v44 )
            goto LABEL_129;
          v45 = v44->fields.mText;
          if ( !v45 )
            goto LABEL_129;
          if ( v45->fields._stringLength )
          {
            v46 = this->fields.titleLabelDecoration;
            if ( !v46 )
              goto LABEL_129;
            v47 = v46->max_length;
            if ( v47 >= 1 )
            {
              v48 = 0;
              while ( v48 < v47 )
              {
                gameObject = (UnityEngine_Component_o *)v46->m_Items[v48];
                if ( !gameObject )
                  goto LABEL_129;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_129;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                v47 = v46->max_length;
                if ( (int)++v48 >= v47 )
                  goto LABEL_75;
              }
              goto LABEL_130;
            }
          }
        }
      }
LABEL_75:
      messageSprite = (UnityEngine_Object_o *)this->fields.messageSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v50 = this->fields.commonParam;
        if ( !v50 )
          goto LABEL_129;
        v51 = this->fields.messageSprite;
        v52 = System_Int32__ToString((int)v50 + 48, 0LL);
        gameObject = (UnityEngine_Component_o *)System_String__Concat_61505504(
                                                  (System_String_o *)StringLiteral_23588/*"sub_title_"*/,
                                                  v52,
                                                  0LL);
        if ( !v51 )
          goto LABEL_129;
        UISprite__set_spriteName(v51, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.messageSprite;
        if ( !gameObject )
          goto LABEL_129;
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
          gameObject,
          gameObject->klass[2]._1.interopData);
      }
      messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageManager, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*p_commonParam )
          goto LABEL_129;
        gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.messageRuby, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !*p_commonParam )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.message, 0LL);
          v54 = this->fields.messageManager;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v54 )
              goto LABEL_129;
            ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
          }
          else
          {
            if ( !*p_commonParam || !v54 )
              goto LABEL_129;
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
          v57 = this->fields.commonParam;
          if ( !v57 )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
          if ( !gameObject )
            goto LABEL_129;
          (*(void (__fastcall **)(UnityEngine_Component_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
            gameObject,
            v57->fields.messageRuby,
            0LL,
            0LL,
            0LL,
            0LL,
            gameObject->klass[1]._1.element_class);
        }
        messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_129;
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
      }
      else
      {
        v55 = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v56 = this->fields.commonParam;
          if ( !v56 )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_129;
          UILabel__set_text((UILabel_o *)gameObject, v56->fields.message, 0LL);
          if ( !*p_commonParam )
            goto LABEL_129;
          questMessageLabelMaxLine = (unsigned int)(*p_commonParam)->fields.questMessageLabelMaxLine;
          if ( (int)questMessageLabelMaxLine >= 1 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
            if ( !gameObject )
              goto LABEL_129;
            UILabel__set_maxLineCount((UILabel_o *)gameObject, questMessageLabelMaxLine, 0LL);
          }
        }
      }
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*p_commonParam )
          goto LABEL_129;
        questMessageLabelMaxLine = 0LL;
        switch ( (*p_commonParam)->fields.type )
        {
          case 1:
            v60 = &StringLiteral_22647/*"quest_main"*/;
            goto LABEL_121;
          case 2:
            v60 = &StringLiteral_22644/*"quest_free"*/;
            goto LABEL_121;
          case 3:
            v60 = &StringLiteral_22639/*"quest_Interlude"*/;
            goto LABEL_121;
          case 5:
            v60 = &StringLiteral_22643/*"quest_event"*/;
            goto LABEL_121;
          case 6:
            v60 = &StringLiteral_22645/*"quest_heroic"*/;
LABEL_121:
            questMessageLabelMaxLine = *v60;
            break;
          default:
            break;
        }
        gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( !gameObject )
          goto LABEL_129;
        UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)questMessageLabelMaxLine, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( !gameObject )
          goto LABEL_129;
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
          gameObject,
          gameObject->klass[2]._1.interopData);
      }
      baseName = this->fields.baseName;
      if ( !System_String__IsNullOrEmpty(this->fields.overwriteEffectNameForTapSkip, 0LL) )
        baseName = this->fields.overwriteEffectNameForTapSkip;
      gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( gameObject )
      {
        ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0LL);
        return;
      }
LABEL_129:
      sub_1B71828(gameObject, questMessageLabelMaxLine);
    }
  }
  sub_1B71AE8(param);
  QuestStartEffectComponent__RefreshPanel(v62, v63);
}


void __fastcall QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, method);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}