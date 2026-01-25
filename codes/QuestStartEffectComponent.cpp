void QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CEFD16 & 1) == 0 )
  {
    sub_1C7BAE8(&CommonEffectComponent_TypeInfo);
    byte_4CEFD16 = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void QuestStartEffectComponent__RefreshPanel(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_4CEFD15 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEFD15 = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(basePanel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.basePanel;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
  base2Panel = (UnityEngine_Object_o *)this->fields.base2Panel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(base2Panel, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.base2Panel;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.base2Panel;
        if ( gameObject )
        {
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( gameObject )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_1C7BD40(gameObject, v4);
  }
}


void QuestStartEffectComponent__SetParam(
        QuestStartEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppClass *v10; // x1
  __int64 naturalAligment; // x8
  struct CommonEffectParam_o **p_commonParam; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 questMessageLabelMaxLine; // x1
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v17; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v19; // w8
  unsigned int v20; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  UnityEngine_Object_o *v24; // x22
  System_String_o *v25; // x21
  struct UISprite_o *v26; // x8
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v28; // x21
  int v29; // w8
  unsigned int v30; // w22
  UnityEngine_Object_o *v31; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v33; // x21
  System_String_o *mText; // x22
  System_String_o *v35; // x0
  struct UILabel_o *v36; // x8
  struct System_String_o *v37; // x8
  struct UISprite_array *v38; // x21
  int v39; // w8
  unsigned int v40; // w22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v42; // x8
  UISprite_o *v43; // x21
  System_String_o *v44; // x0
  UnityEngine_Object_o *messageManager; // x21
  struct ScriptLineMessage_o *v46; // x8
  UnityEngine_Object_o *v47; // x21
  struct CommonEffectParam_o *v48; // x8
  struct CommonEffectParam_o *v49; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  __int64 *v52; // x8
  System_String_o *baseName; // x20
  QuestStartEffectComponent_o *v54; // x0
  const MethodInfo *v55; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CEFD14 & 1) == 0 )
  {
    sub_1C7BAE8(&CommonEffectParam_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_23096/*"quest_free"*/);
    sub_1C7BAE8(&StringLiteral_23095/*"quest_event"*/);
    sub_1C7BAE8(&StringLiteral_23097/*"quest_heroic"*/);
    sub_1C7BAE8(&StringLiteral_16015/*"[^0-9]"*/);
    sub_1C7BAE8(&StringLiteral_23099/*"quest_main"*/);
    sub_1C7BAE8(&StringLiteral_23090/*"quest_Interlude"*/);
    sub_1C7BAE8(&StringLiteral_24038/*"sub_title_"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_24339/*"title_"*/);
    byte_4CEFD14 = 1;
  }
  entity = 0;
  if ( !param )
  {
    p_commonParam = &this->fields.commonParam;
    this->fields.commonParam = 0;
    goto LABEL_10;
  }
  v10 = (Il2CppClass *)CommonEffectParam_TypeInfo;
  naturalAligment = CommonEffectParam_TypeInfo->_2.naturalAligment;
  if ( param->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CommonEffectParam_c *)param->klass->_2.typeHierarchy[naturalAligment - 1] == CommonEffectParam_TypeInfo )
  {
    this->fields.commonParam = (struct CommonEffectParam_o *)param;
    if ( param->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && param->klass->_2.typeHierarchy[naturalAligment - 1] == v10 )
    {
      p_commonParam = &this->fields.commonParam;
LABEL_10:
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_commonParam, (int32_t)param, (int32_t)method, v3, v4, v5, v6, v7);
      titleSpriteDecoration = this->fields.titleSpriteDecoration;
      if ( !titleSpriteDecoration )
        goto LABEL_136;
      max_length = titleSpriteDecoration->max_length;
      if ( max_length >= 1 )
      {
        v17 = 0;
        while ( v17 < max_length )
        {
          gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v17];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          max_length = titleSpriteDecoration->max_length;
          if ( (int)++v17 >= max_length )
            goto LABEL_17;
        }
LABEL_137:
        sub_1C7BD48(gameObject);
      }
LABEL_17:
      titleLabelDecoration = this->fields.titleLabelDecoration;
      if ( !titleLabelDecoration )
        goto LABEL_136;
      v19 = titleLabelDecoration->max_length;
      if ( v19 >= 1 )
      {
        v20 = 0;
        while ( v20 < v19 )
        {
          gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v20];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          v19 = titleLabelDecoration->max_length;
          if ( (int)++v20 >= v19 )
            goto LABEL_24;
        }
        goto LABEL_137;
      }
LABEL_24:
      titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(titleSprite, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( !gameObject )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      if ( !*p_commonParam )
        goto LABEL_136;
      v22 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0);
      v23 = System_String__Concat_64176912((System_String_o *)StringLiteral_24339/*"title_"*/, v22, 0);
      v24 = (UnityEngine_Object_o *)this->fields.titleSprite;
      v25 = v23;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v24, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_55;
      v26 = this->fields.titleSprite;
      if ( !v26 )
        goto LABEL_136;
      gameObject = (UnityEngine_Component_o *)v26->fields.mAtlas;
      if ( !gameObject )
        goto LABEL_136;
      if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v25, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        UISprite__set_spriteName((UISprite_o *)gameObject, v25, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
          gameObject,
          gameObject->klass[2]._1.generic_class);
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( !gameObject )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(titleLabel, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        v28 = this->fields.titleSpriteDecoration;
        if ( !v28 )
          goto LABEL_136;
        v29 = v28->max_length;
        if ( v29 >= 1 )
        {
          v30 = 0;
          while ( v30 < v29 )
          {
            gameObject = (UnityEngine_Component_o *)v28->m_Items[v30];
            if ( !gameObject )
              goto LABEL_136;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( !gameObject )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v29 = v28->max_length;
            if ( (int)++v30 >= v29 )
              goto LABEL_75;
          }
          goto LABEL_137;
        }
      }
      else
      {
LABEL_55:
        v31 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v31, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          commonParam = this->fields.commonParam;
          if ( !commonParam )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
          if ( !gameObject )
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, commonParam->fields.title, 0);
          if ( this->fields.isTitleLabelNumberOnly )
          {
            v33 = this->fields.titleLabel;
            if ( !v33 )
              goto LABEL_136;
            mText = v33->fields.mText;
            if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
            v35 = System_Text_RegularExpressions_Regex__Replace(
                    mText,
                    (System_String_o *)StringLiteral_16015/*"[^0-9]"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0);
            UILabel__set_text(v33, v35, 0);
          }
          v36 = this->fields.titleLabel;
          if ( !v36 )
            goto LABEL_136;
          v37 = v36->fields.mText;
          if ( !v37 )
            goto LABEL_136;
          if ( v37->fields._stringLength )
          {
            v38 = this->fields.titleLabelDecoration;
            if ( !v38 )
              goto LABEL_136;
            v39 = v38->max_length;
            if ( v39 >= 1 )
            {
              v40 = 0;
              while ( v40 < v39 )
              {
                gameObject = (UnityEngine_Component_o *)v38->m_Items[v40];
                if ( !gameObject )
                  goto LABEL_136;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
                if ( !gameObject )
                  goto LABEL_136;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                v39 = v38->max_length;
                if ( (int)++v40 >= v39 )
                  goto LABEL_75;
              }
              goto LABEL_137;
            }
          }
        }
      }
LABEL_75:
      messageSprite = (UnityEngine_Object_o *)this->fields.messageSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageSprite, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v42 = this->fields.commonParam;
        if ( !v42 )
          goto LABEL_136;
        v43 = this->fields.messageSprite;
        v44 = System_Int32__ToString((int)v42 + 48, 0);
        gameObject = (UnityEngine_Component_o *)System_String__Concat_64176912(
                                                  (System_String_o *)StringLiteral_24038/*"sub_title_"*/,
                                                  v44,
                                                  0);
        if ( !v43 )
          goto LABEL_136;
        UISprite__set_spriteName(v43, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.messageSprite;
        if ( !gameObject )
          goto LABEL_136;
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
          gameObject,
          gameObject->klass[2]._1.generic_class);
      }
      messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageManager, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*p_commonParam )
          goto LABEL_136;
        gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.messageRuby, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !*p_commonParam )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.message, 0);
          v46 = this->fields.messageManager;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v46 )
              goto LABEL_136;
            ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0);
          }
          else
          {
            if ( !*p_commonParam || !v46 )
              goto LABEL_136;
            ((void (__fastcall *)(struct ScriptLineMessage_o *__return_ptr, struct ScriptLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, const MethodInfo *))v46->klass->vtable._7_SetText.methodPtr)(
              v46,
              this->fields.messageManager,
              (*p_commonParam)->fields.message,
              0,
              0,
              0,
              0,
              v46->klass->vtable._7_SetText.method);
          }
        }
        else
        {
          v49 = this->fields.commonParam;
          if ( !v49 )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
          if ( !gameObject )
            goto LABEL_136;
          ((void (__fastcall *)(UnityEngine_Component_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))gameObject->klass[1]._1.this_arg.data)(
            gameObject,
            v49->fields.messageRuby,
            0,
            0,
            0,
            0,
            *(_QWORD *)&gameObject->klass[1]._1.this_arg.bits);
        }
        messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
        }
      }
      else
      {
        v47 = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v47, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v48 = this->fields.commonParam;
          if ( !v48 )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, v48->fields.message, 0);
          if ( !*p_commonParam )
            goto LABEL_136;
          questMessageLabelMaxLine = (unsigned int)(*p_commonParam)->fields.questMessageLabelMaxLine;
          if ( (int)questMessageLabelMaxLine >= 1 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
            if ( !gameObject )
              goto LABEL_136;
            UILabel__set_maxLineCount((UILabel_o *)gameObject, questMessageLabelMaxLine, 0);
          }
        }
      }
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
        goto LABEL_132;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
      if ( *p_commonParam && gameObject )
      {
        gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                  &entity,
                                                  (*p_commonParam)->fields.questId,
                                                  (const MethodInfo_342E348 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_141;
        gameObject = (UnityEngine_Component_o *)entity;
        if ( !entity )
          goto LABEL_136;
        gameObject = (UnityEngine_Component_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                  (QuestExtensionEntity_o *)entity,
                                                  0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
LABEL_124:
          v52 = &StringLiteral_23095/*"quest_event"*/;
LABEL_128:
          questMessageLabelMaxLine = *v52;
        }
        else
        {
LABEL_141:
          if ( !*p_commonParam )
            goto LABEL_136;
          questMessageLabelMaxLine = 0;
          switch ( (*p_commonParam)->fields.type )
          {
            case 1:
              v52 = &StringLiteral_23099/*"quest_main"*/;
              goto LABEL_128;
            case 2:
              v52 = &StringLiteral_23096/*"quest_free"*/;
              goto LABEL_128;
            case 3:
              v52 = &StringLiteral_23090/*"quest_Interlude"*/;
              goto LABEL_128;
            case 5:
              goto LABEL_124;
            case 6:
              v52 = &StringLiteral_23097/*"quest_heroic"*/;
              goto LABEL_128;
            default:
              break;
          }
        }
        gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)questMessageLabelMaxLine, 0);
          gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
          if ( gameObject )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
              gameObject,
              gameObject->klass[2]._1.generic_class);
LABEL_132:
            baseName = this->fields.baseName;
            if ( !System_String__IsNullOrEmpty(this->fields.overwriteEffectNameForTapSkip, 0) )
              baseName = this->fields.overwriteEffectNameForTapSkip;
            gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( gameObject )
            {
              ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0);
              return;
            }
          }
        }
      }
LABEL_136:
      sub_1C7BD40(gameObject, questMessageLabelMaxLine);
    }
  }
  sub_1C7C0DC(param);
  QuestStartEffectComponent__RefreshPanel(v54, v55);
}


void QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}