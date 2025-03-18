void __fastcall QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C23432 & 1) == 0 )
  {
    sub_1C3B764(&CommonEffectComponent_TypeInfo, method);
    byte_4C23432 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0LL);
}


void __fastcall QuestStartEffectComponent__RefreshPanel(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_4C23431 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C23431 = 1;
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
    sub_1C3B9C0(gameObject, v4);
  }
}


void __fastcall QuestStartEffectComponent__SetParam(
        QuestStartEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  Il2CppClass *v22; // x1
  __int64 methodPtr_low; // x8
  struct CommonEffectParam_o **p_commonParam; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 questMessageLabelMaxLine; // x1
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v29; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v31; // w8
  unsigned int v32; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v34; // x0
  System_String_o *v35; // x0
  UnityEngine_Object_o *v36; // x22
  System_String_o *v37; // x21
  struct UISprite_o *v38; // x8
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v40; // x21
  int v41; // w8
  unsigned int v42; // w22
  UnityEngine_Object_o *v43; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v45; // x21
  System_String_o *mText; // x22
  System_String_o *v47; // x0
  struct UILabel_o *v48; // x8
  struct System_String_o *v49; // x8
  struct UISprite_array *v50; // x21
  int v51; // w8
  unsigned int v52; // w22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v54; // x8
  UISprite_o *v55; // x21
  System_String_o *v56; // x0
  UnityEngine_Object_o *messageManager; // x21
  struct ScriptLineMessage_o *v58; // x8
  UnityEngine_Object_o *v59; // x21
  struct CommonEffectParam_o *v60; // x8
  struct CommonEffectParam_o *v61; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  __int64 *v64; // x8
  System_String_o *baseName; // x20
  QuestStartEffectComponent_o *v66; // x0
  const MethodInfo *v67; // x1

  if ( (byte_4C23430 & 1) == 0 )
  {
    sub_1C3B764(&CommonEffectParam_TypeInfo, param);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    sub_1C3B764(&System_Text_RegularExpressions_Regex_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v12);
    sub_1C3B764(&StringLiteral_23172/*"startIndex must be less than length of string."*/, v13);
    sub_1C3B764(&StringLiteral_23171/*"startIndex cannot be larger than length of string."*/, v14);
    sub_1C3B764(&StringLiteral_23173/*"startPos"*/, v15);
    sub_1C3B764(&StringLiteral_16284/*"aa"*/, v16);
    sub_1C3B764(&StringLiteral_23175/*"startTitleFade"*/, v17);
    sub_1C3B764(&StringLiteral_23167/*"startEnd"*/, v18);
    sub_1C3B764(&StringLiteral_24140/*"usm"*/, v19);
    sub_1C3B764(&StringLiteral_1/*""*/, v20);
    sub_1C3B764(&StringLiteral_24461/*"x-schema:#"*/, v21);
    byte_4C23430 = 1;
  }
  if ( !param )
  {
    p_commonParam = &this->fields.commonParam;
    this->fields.commonParam = 0LL;
    goto LABEL_10;
  }
  v22 = (Il2CppClass *)CommonEffectParam_TypeInfo;
  methodPtr_low = LOBYTE(CommonEffectParam_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
    && (CommonEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonEffectParam_TypeInfo )
  {
    this->fields.commonParam = (struct CommonEffectParam_o *)param;
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && param->klass->_2.typeHierarchy[methodPtr_low - 1] == v22 )
    {
      p_commonParam = &this->fields.commonParam;
LABEL_10:
      sub_1C3B708((PartyOrganizationUtility_o *)p_commonParam, (int64_t)param, (int64_t)method, v3, v4, v5, v6, v7);
      titleSpriteDecoration = this->fields.titleSpriteDecoration;
      if ( !titleSpriteDecoration )
        goto LABEL_129;
      max_length = titleSpriteDecoration->max_length;
      if ( max_length >= 1 )
      {
        v29 = 0;
        while ( v29 < max_length )
        {
          gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v29];
          if ( !gameObject )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_129;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          max_length = titleSpriteDecoration->max_length;
          if ( (int)++v29 >= max_length )
            goto LABEL_17;
        }
LABEL_130:
        sub_1C3B9C8(gameObject, questMessageLabelMaxLine);
      }
LABEL_17:
      titleLabelDecoration = this->fields.titleLabelDecoration;
      if ( !titleLabelDecoration )
        goto LABEL_129;
      v31 = titleLabelDecoration->max_length;
      if ( v31 >= 1 )
      {
        v32 = 0;
        while ( v32 < v31 )
        {
          gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v32];
          if ( !gameObject )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_129;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          v31 = titleLabelDecoration->max_length;
          if ( (int)++v32 >= v31 )
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
      v34 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0LL);
      v35 = System_String__Concat_63368612((System_String_o *)StringLiteral_24461/*"x-schema:#"*/, v34, 0LL);
      v36 = (UnityEngine_Object_o *)this->fields.titleSprite;
      v37 = v35;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_55;
      v38 = this->fields.titleSprite;
      if ( !v38 )
        goto LABEL_129;
      gameObject = (UnityEngine_Component_o *)v38->fields.mAtlas;
      if ( !gameObject )
        goto LABEL_129;
      if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v37, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_129;
        UISprite__set_spriteName((UISprite_o *)gameObject, v37, 0LL);
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
        v40 = this->fields.titleSpriteDecoration;
        if ( !v40 )
          goto LABEL_129;
        v41 = v40->max_length;
        if ( v41 >= 1 )
        {
          v42 = 0;
          while ( v42 < v41 )
          {
            gameObject = (UnityEngine_Component_o *)v40->m_Items[v42];
            if ( !gameObject )
              goto LABEL_129;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v41 = v40->max_length;
            if ( (int)++v42 >= v41 )
              goto LABEL_75;
          }
          goto LABEL_130;
        }
      }
      else
      {
LABEL_55:
        v43 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
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
            v45 = this->fields.titleLabel;
            if ( !v45 )
              goto LABEL_129;
            mText = v45->fields.mText;
            if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
            v47 = System_Text_RegularExpressions_Regex__Replace(
                    mText,
                    (System_String_o *)StringLiteral_16284/*"aa"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            UILabel__set_text(v45, v47, 0LL);
          }
          v48 = this->fields.titleLabel;
          if ( !v48 )
            goto LABEL_129;
          v49 = v48->fields.mText;
          if ( !v49 )
            goto LABEL_129;
          if ( v49->fields._stringLength )
          {
            v50 = this->fields.titleLabelDecoration;
            if ( !v50 )
              goto LABEL_129;
            v51 = v50->max_length;
            if ( v51 >= 1 )
            {
              v52 = 0;
              while ( v52 < v51 )
              {
                gameObject = (UnityEngine_Component_o *)v50->m_Items[v52];
                if ( !gameObject )
                  goto LABEL_129;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_129;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                v51 = v50->max_length;
                if ( (int)++v52 >= v51 )
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
        v54 = this->fields.commonParam;
        if ( !v54 )
          goto LABEL_129;
        v55 = this->fields.messageSprite;
        v56 = System_Int32__ToString((int)v54 + 48, 0LL);
        gameObject = (UnityEngine_Component_o *)System_String__Concat_63368612(
                                                  (System_String_o *)StringLiteral_24140/*"usm"*/,
                                                  v56,
                                                  0LL);
        if ( !v55 )
          goto LABEL_129;
        UISprite__set_spriteName(v55, (System_String_o *)gameObject, 0LL);
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
          v58 = this->fields.messageManager;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v58 )
              goto LABEL_129;
            ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
          }
          else
          {
            if ( !*p_commonParam || !v58 )
              goto LABEL_129;
            ((void (__fastcall *)(struct ScriptLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v58->klass->vtable._7_SetText.method)(
              this->fields.messageManager,
              (*p_commonParam)->fields.message,
              0LL,
              0LL,
              0LL,
              0LL,
              v58->klass[1]._1.image);
          }
        }
        else
        {
          v61 = this->fields.commonParam;
          if ( !v61 )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
          if ( !gameObject )
            goto LABEL_129;
          (*(void (__fastcall **)(UnityEngine_Component_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
            gameObject,
            v61->fields.messageRuby,
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
        v59 = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v60 = this->fields.commonParam;
          if ( !v60 )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_129;
          UILabel__set_text((UILabel_o *)gameObject, v60->fields.message, 0LL);
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
            v64 = &StringLiteral_23175/*"startTitleFade"*/;
            goto LABEL_121;
          case 2:
            v64 = &StringLiteral_23172/*"startIndex must be less than length of string."*/;
            goto LABEL_121;
          case 3:
            v64 = &StringLiteral_23167/*"startEnd"*/;
            goto LABEL_121;
          case 5:
            v64 = &StringLiteral_23171/*"startIndex cannot be larger than length of string."*/;
            goto LABEL_121;
          case 6:
            v64 = &StringLiteral_23173/*"startPos"*/;
LABEL_121:
            questMessageLabelMaxLine = *v64;
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
      gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( gameObject )
      {
        ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0LL);
        return;
      }
LABEL_129:
      sub_1C3B9C0(gameObject, questMessageLabelMaxLine);
    }
  }
  sub_1C3BC80(param);
  QuestStartEffectComponent__RefreshPanel(v66, v67);
}


void __fastcall QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}