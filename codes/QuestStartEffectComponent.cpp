void __fastcall QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B175FB & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectComponent_TypeInfo, method, v2);
    byte_4B175FB = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, method);
}


void __fastcall QuestStartEffectComponent__RefreshPanel(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *basePanel; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_4B175FA & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B175FA = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    sub_1BCAA3C(gameObject, v5);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppClass *v34; // x1
  __int64 methodPtr_low; // x8
  struct CommonEffectParam_o **p_commonParam; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 questMessageLabelMaxLine; // x1
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v41; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v43; // w8
  unsigned int v44; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  __int64 v48; // x1
  UnityEngine_Object_o *v49; // x22
  System_String_o *v50; // x21
  struct UISprite_o *v51; // x8
  __int64 v52; // x1
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v54; // x21
  int v55; // w8
  unsigned int v56; // w22
  UnityEngine_Object_o *v57; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v59; // x21
  System_String_o *mText; // x22
  System_String_o *v61; // x0
  struct UILabel_o *v62; // x8
  struct System_String_o *v63; // x8
  struct UISprite_array *v64; // x21
  int v65; // w8
  unsigned int v66; // w22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v68; // x8
  UISprite_o *v69; // x21
  System_String_o *v70; // x0
  UnityEngine_Object_o *messageManager; // x21
  struct ScriptLineMessage_o *v72; // x8
  __int64 v73; // x1
  UnityEngine_Object_o *v74; // x21
  struct CommonEffectParam_o *v75; // x8
  struct CommonEffectParam_o *v76; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  __int64 *v79; // x8
  System_String_o *baseName; // x20
  QuestStartEffectComponent_o *v81; // x0
  const MethodInfo *v82; // x1

  if ( (byte_4B175F9 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonEffectParam_TypeInfo, param, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Text_RegularExpressions_Regex_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_22943/*"quest_free"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_22942/*"quest_event"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_22944/*"quest_heroic"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_16135/*"[^0-9]"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_22946/*"quest_main"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_22938/*"quest_Interlude"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_23894/*"sub_title_"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_24211/*"title_"*/, v32, v33);
    byte_4B175F9 = 1;
  }
  if ( !param )
  {
    p_commonParam = &this->fields.commonParam;
    this->fields.commonParam = 0LL;
    goto LABEL_10;
  }
  v34 = (Il2CppClass *)CommonEffectParam_TypeInfo;
  methodPtr_low = LOBYTE(CommonEffectParam_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
    && (CommonEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonEffectParam_TypeInfo )
  {
    this->fields.commonParam = (struct CommonEffectParam_o *)param;
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && param->klass->_2.typeHierarchy[methodPtr_low - 1] == v34 )
    {
      p_commonParam = &this->fields.commonParam;
LABEL_10:
      sub_1BCA784((PartyOrganizationUtility_o *)p_commonParam, (int64_t)param, (int64_t)method, v3, v4, v5, v6, v7);
      titleSpriteDecoration = this->fields.titleSpriteDecoration;
      if ( !titleSpriteDecoration )
        goto LABEL_129;
      max_length = titleSpriteDecoration->max_length;
      if ( max_length >= 1 )
      {
        v41 = 0;
        while ( v41 < max_length )
        {
          gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v41];
          if ( !gameObject )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_129;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          max_length = titleSpriteDecoration->max_length;
          if ( (int)++v41 >= max_length )
            goto LABEL_17;
        }
LABEL_130:
        sub_1BCAA44(gameObject, questMessageLabelMaxLine);
      }
LABEL_17:
      titleLabelDecoration = this->fields.titleLabelDecoration;
      if ( !titleLabelDecoration )
        goto LABEL_129;
      v43 = titleLabelDecoration->max_length;
      if ( v43 >= 1 )
      {
        v44 = 0;
        while ( v44 < v43 )
        {
          gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v44];
          if ( !gameObject )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_129;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          v43 = titleLabelDecoration->max_length;
          if ( (int)++v44 >= v43 )
            goto LABEL_24;
        }
        goto LABEL_130;
      }
LABEL_24:
      titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
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
      v46 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0LL);
      v47 = System_String__Concat_62401220((System_String_o *)StringLiteral_24211/*"title_"*/, v46, 0LL);
      v49 = (UnityEngine_Object_o *)this->fields.titleSprite;
      v50 = v47;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v49, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_55;
      v51 = this->fields.titleSprite;
      if ( !v51 )
        goto LABEL_129;
      gameObject = (UnityEngine_Component_o *)v51->fields.mAtlas;
      if ( !gameObject )
        goto LABEL_129;
      if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v50, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_129;
        UISprite__set_spriteName((UISprite_o *)gameObject, v50, 0LL);
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
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
        v54 = this->fields.titleSpriteDecoration;
        if ( !v54 )
          goto LABEL_129;
        v55 = v54->max_length;
        if ( v55 >= 1 )
        {
          v56 = 0;
          while ( v56 < v55 )
          {
            gameObject = (UnityEngine_Component_o *)v54->m_Items[v56];
            if ( !gameObject )
              goto LABEL_129;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_129;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v55 = v54->max_length;
            if ( (int)++v56 >= v55 )
              goto LABEL_75;
          }
          goto LABEL_130;
        }
      }
      else
      {
LABEL_55:
        v57 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v57, 0LL, 0LL);
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
            v59 = this->fields.titleLabel;
            if ( !v59 )
              goto LABEL_129;
            mText = v59->fields.mText;
            if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, questMessageLabelMaxLine);
            v61 = System_Text_RegularExpressions_Regex__Replace(
                    mText,
                    (System_String_o *)StringLiteral_16135/*"[^0-9]"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            UILabel__set_text(v59, v61, 0LL);
          }
          v62 = this->fields.titleLabel;
          if ( !v62 )
            goto LABEL_129;
          v63 = v62->fields.mText;
          if ( !v63 )
            goto LABEL_129;
          if ( v63->fields._stringLength )
          {
            v64 = this->fields.titleLabelDecoration;
            if ( !v64 )
              goto LABEL_129;
            v65 = v64->max_length;
            if ( v65 >= 1 )
            {
              v66 = 0;
              while ( v66 < v65 )
              {
                gameObject = (UnityEngine_Component_o *)v64->m_Items[v66];
                if ( !gameObject )
                  goto LABEL_129;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_129;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                v65 = v64->max_length;
                if ( (int)++v66 >= v65 )
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v68 = this->fields.commonParam;
        if ( !v68 )
          goto LABEL_129;
        v69 = this->fields.messageSprite;
        v70 = System_Int32__ToString((int)v68 + 48, 0LL);
        gameObject = (UnityEngine_Component_o *)System_String__Concat_62401220(
                                                  (System_String_o *)StringLiteral_23894/*"sub_title_"*/,
                                                  v70,
                                                  0LL);
        if ( !v69 )
          goto LABEL_129;
        UISprite__set_spriteName(v69, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.messageSprite;
        if ( !gameObject )
          goto LABEL_129;
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
          gameObject,
          gameObject->klass[2]._1.interopData);
      }
      messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
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
          v72 = this->fields.messageManager;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v72 )
              goto LABEL_129;
            ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
          }
          else
          {
            if ( !*p_commonParam || !v72 )
              goto LABEL_129;
            ((void (__fastcall *)(struct ScriptLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v72->klass->vtable._7_SetText.method)(
              this->fields.messageManager,
              (*p_commonParam)->fields.message,
              0LL,
              0LL,
              0LL,
              0LL,
              v72->klass[1]._1.image);
          }
        }
        else
        {
          v76 = this->fields.commonParam;
          if ( !v76 )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
          if ( !gameObject )
            goto LABEL_129;
          (*(void (__fastcall **)(UnityEngine_Component_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
            gameObject,
            v76->fields.messageRuby,
            0LL,
            0LL,
            0LL,
            0LL,
            gameObject->klass[1]._1.element_class);
        }
        messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73);
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
        v74 = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v75 = this->fields.commonParam;
          if ( !v75 )
            goto LABEL_129;
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_129;
          UILabel__set_text((UILabel_o *)gameObject, v75->fields.message, 0LL);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*p_commonParam )
          goto LABEL_129;
        questMessageLabelMaxLine = 0LL;
        switch ( (*p_commonParam)->fields.type )
        {
          case 1:
            v79 = &StringLiteral_22946/*"quest_main"*/;
            goto LABEL_121;
          case 2:
            v79 = &StringLiteral_22943/*"quest_free"*/;
            goto LABEL_121;
          case 3:
            v79 = &StringLiteral_22938/*"quest_Interlude"*/;
            goto LABEL_121;
          case 5:
            v79 = &StringLiteral_22942/*"quest_event"*/;
            goto LABEL_121;
          case 6:
            v79 = &StringLiteral_22944/*"quest_heroic"*/;
LABEL_121:
            questMessageLabelMaxLine = *v79;
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
      gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( gameObject )
      {
        ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0LL);
        return;
      }
LABEL_129:
      sub_1BCAA3C(gameObject, questMessageLabelMaxLine);
    }
  }
  sub_1BCACFC(param);
  QuestStartEffectComponent__RefreshPanel(v81, v82);
}


void __fastcall QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, method);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}