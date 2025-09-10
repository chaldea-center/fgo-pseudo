void QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C289A7 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectComponent_TypeInfo);
    byte_4C289A7 = 1;
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

  if ( (byte_4C289A6 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C289A6 = 1;
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
    sub_1C2D6EC(gameObject, v4);
  }
}


void QuestStartEffectComponent__SetParam(
        QuestStartEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppClass *v6; // x1
  __int64 naturalAligment; // x8
  struct CommonEffectParam_o **p_commonParam; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 questMessageLabelMaxLine; // x1
  __int64 v11; // x2
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v14; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v16; // w8
  unsigned int v17; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  UnityEngine_Object_o *v21; // x22
  System_String_o *v22; // x21
  struct UISprite_o *v23; // x8
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v25; // x21
  int v26; // w8
  unsigned int v27; // w22
  UnityEngine_Object_o *v28; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v30; // x21
  System_String_o *mText; // x22
  System_String_o *v32; // x0
  struct UILabel_o *v33; // x8
  struct System_String_o *v34; // x8
  struct UISprite_array *v35; // x21
  int v36; // w8
  unsigned int v37; // w22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v39; // x8
  UISprite_o *v40; // x21
  System_String_o *v41; // x0
  UnityEngine_Object_o *messageManager; // x21
  struct ScriptLineMessage_o *v43; // x8
  UnityEngine_Object_o *v44; // x21
  struct CommonEffectParam_o *v45; // x8
  struct CommonEffectParam_o *v46; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  __int64 *v49; // x8
  System_String_o *baseName; // x20
  QuestStartEffectComponent_o *v51; // x0
  const MethodInfo *v52; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C289A5 & 1) == 0 )
  {
    sub_1C2D490(&CommonEffectParam_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C2D490(&StringLiteral_22855/*"quest_free"*/);
    sub_1C2D490(&StringLiteral_22854/*"quest_event"*/);
    sub_1C2D490(&StringLiteral_22856/*"quest_heroic"*/);
    sub_1C2D490(&StringLiteral_15956/*"[^0-9]"*/);
    sub_1C2D490(&StringLiteral_22858/*"quest_main"*/);
    sub_1C2D490(&StringLiteral_22849/*"quest_Interlude"*/);
    sub_1C2D490(&StringLiteral_23785/*"sub_title_"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_24080/*"title_"*/);
    byte_4C289A5 = 1;
  }
  entity = 0;
  if ( !param )
  {
    p_commonParam = &this->fields.commonParam;
    this->fields.commonParam = 0;
    goto LABEL_10;
  }
  v6 = (Il2CppClass *)CommonEffectParam_TypeInfo;
  naturalAligment = CommonEffectParam_TypeInfo->_2.naturalAligment;
  if ( param->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (CommonEffectParam_c *)param->klass->_2.typeHierarchy[naturalAligment - 1] == CommonEffectParam_TypeInfo )
  {
    this->fields.commonParam = (struct CommonEffectParam_o *)param;
    if ( param->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && param->klass->_2.typeHierarchy[naturalAligment - 1] == v6 )
    {
      p_commonParam = &this->fields.commonParam;
LABEL_10:
      sub_1C2D434((CGThumbnailListItem_o *)p_commonParam, (int32_t)param, (int32_t)method, v3);
      titleSpriteDecoration = this->fields.titleSpriteDecoration;
      if ( !titleSpriteDecoration )
        goto LABEL_136;
      max_length = titleSpriteDecoration->max_length;
      if ( max_length >= 1 )
      {
        v14 = 0;
        while ( v14 < max_length )
        {
          gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v14];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          max_length = titleSpriteDecoration->max_length;
          if ( (int)++v14 >= max_length )
            goto LABEL_17;
        }
LABEL_137:
        sub_1C2D6F4(gameObject, questMessageLabelMaxLine, v11);
      }
LABEL_17:
      titleLabelDecoration = this->fields.titleLabelDecoration;
      if ( !titleLabelDecoration )
        goto LABEL_136;
      v16 = titleLabelDecoration->max_length;
      if ( v16 >= 1 )
      {
        v17 = 0;
        while ( v17 < v16 )
        {
          gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v17];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          v16 = titleLabelDecoration->max_length;
          if ( (int)++v17 >= v16 )
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
      v19 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0);
      v20 = System_String__Concat_63457864((System_String_o *)StringLiteral_24080/*"title_"*/, v19, 0);
      v21 = (UnityEngine_Object_o *)this->fields.titleSprite;
      v22 = v20;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v21, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_55;
      v23 = this->fields.titleSprite;
      if ( !v23 )
        goto LABEL_136;
      gameObject = (UnityEngine_Component_o *)v23->fields.mAtlas;
      if ( !gameObject )
        goto LABEL_136;
      if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v22, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        UISprite__set_spriteName((UISprite_o *)gameObject, v22, 0);
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
        v25 = this->fields.titleSpriteDecoration;
        if ( !v25 )
          goto LABEL_136;
        v26 = v25->max_length;
        if ( v26 >= 1 )
        {
          v27 = 0;
          while ( v27 < v26 )
          {
            gameObject = (UnityEngine_Component_o *)v25->m_Items[v27];
            if ( !gameObject )
              goto LABEL_136;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( !gameObject )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v26 = v25->max_length;
            if ( (int)++v27 >= v26 )
              goto LABEL_75;
          }
          goto LABEL_137;
        }
      }
      else
      {
LABEL_55:
        v28 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v28, 0, 0);
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
            v30 = this->fields.titleLabel;
            if ( !v30 )
              goto LABEL_136;
            mText = v30->fields.mText;
            if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
            v32 = System_Text_RegularExpressions_Regex__Replace(
                    mText,
                    (System_String_o *)StringLiteral_15956/*"[^0-9]"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0);
            UILabel__set_text(v30, v32, 0);
          }
          v33 = this->fields.titleLabel;
          if ( !v33 )
            goto LABEL_136;
          v34 = v33->fields.mText;
          if ( !v34 )
            goto LABEL_136;
          if ( v34->fields._stringLength )
          {
            v35 = this->fields.titleLabelDecoration;
            if ( !v35 )
              goto LABEL_136;
            v36 = v35->max_length;
            if ( v36 >= 1 )
            {
              v37 = 0;
              while ( v37 < v36 )
              {
                gameObject = (UnityEngine_Component_o *)v35->m_Items[v37];
                if ( !gameObject )
                  goto LABEL_136;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
                if ( !gameObject )
                  goto LABEL_136;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                v36 = v35->max_length;
                if ( (int)++v37 >= v36 )
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
        v39 = this->fields.commonParam;
        if ( !v39 )
          goto LABEL_136;
        v40 = this->fields.messageSprite;
        v41 = System_Int32__ToString((int)v39 + 48, 0);
        gameObject = (UnityEngine_Component_o *)System_String__Concat_63457864(
                                                  (System_String_o *)StringLiteral_23785/*"sub_title_"*/,
                                                  v41,
                                                  0);
        if ( !v40 )
          goto LABEL_136;
        UISprite__set_spriteName(v40, (System_String_o *)gameObject, 0);
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
          v43 = this->fields.messageManager;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v43 )
              goto LABEL_136;
            ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0);
          }
          else
          {
            if ( !*p_commonParam || !v43 )
              goto LABEL_136;
            ((void (__fastcall *)(struct ScriptLineMessage_o *__return_ptr, struct ScriptLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, const MethodInfo *))v43->klass->vtable._7_SetText.methodPtr)(
              v43,
              this->fields.messageManager,
              (*p_commonParam)->fields.message,
              0,
              0,
              0,
              0,
              v43->klass->vtable._7_SetText.method);
          }
        }
        else
        {
          v46 = this->fields.commonParam;
          if ( !v46 )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
          if ( !gameObject )
            goto LABEL_136;
          ((void (__fastcall *)(UnityEngine_Component_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))gameObject->klass[1]._1.this_arg.data)(
            gameObject,
            v46->fields.messageRuby,
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
        v44 = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v45 = this->fields.commonParam;
          if ( !v45 )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, v45->fields.message, 0);
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
      gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestExtensionMaster___);
      if ( *p_commonParam && gameObject )
      {
        gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                  &entity,
                                                  (*p_commonParam)->fields.questId,
                                                  (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
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
          v49 = &StringLiteral_22854/*"quest_event"*/;
LABEL_128:
          questMessageLabelMaxLine = *v49;
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
              v49 = &StringLiteral_22858/*"quest_main"*/;
              goto LABEL_128;
            case 2:
              v49 = &StringLiteral_22855/*"quest_free"*/;
              goto LABEL_128;
            case 3:
              v49 = &StringLiteral_22849/*"quest_Interlude"*/;
              goto LABEL_128;
            case 5:
              goto LABEL_124;
            case 6:
              v49 = &StringLiteral_22856/*"quest_heroic"*/;
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
            gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( gameObject )
            {
              ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0);
              return;
            }
          }
        }
      }
LABEL_136:
      sub_1C2D6EC(gameObject, questMessageLabelMaxLine);
    }
  }
  sub_1C2D9AC(param);
  QuestStartEffectComponent__RefreshPanel(v51, v52);
}


void QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}