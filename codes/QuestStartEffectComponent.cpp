void QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C390AF & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectComponent_TypeInfo);
    byte_4C390AF = 1;
  }
  if ( !CommonEffectComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void QuestStartEffectComponent__RefreshPanel(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_4C390AE & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C390AE = 1;
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
    sub_1C32E7C(gameObject);
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
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v12; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v14; // w8
  unsigned int v15; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  UnityEngine_Object_o *v19; // x22
  System_String_o *v20; // x21
  struct UISprite_o *v21; // x8
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v23; // x21
  int v24; // w8
  unsigned int v25; // w22
  UnityEngine_Object_o *v26; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v28; // x21
  System_String_o *mText; // x22
  System_String_o *v30; // x0
  struct UILabel_o *v31; // x8
  struct System_String_o *v32; // x8
  struct UISprite_array *v33; // x21
  int v34; // w8
  unsigned int v35; // w22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v37; // x8
  UISprite_o *v38; // x21
  System_String_o *v39; // x0
  UnityEngine_Object_o *messageManager; // x21
  struct ScriptLineMessage_o *v41; // x8
  UnityEngine_Object_o *v42; // x21
  struct CommonEffectParam_o *v43; // x8
  int32_t questMessageLabelMaxLine; // w1
  struct CommonEffectParam_o *v45; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  System_String_o *v48; // x1
  __int64 *v49; // x8
  System_String_o *baseName; // x20
  QuestStartEffectComponent_o *v51; // x0
  const MethodInfo *v52; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C390AD & 1) == 0 )
  {
    sub_1C32C20(&CommonEffectParam_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C32C20(&StringLiteral_22872/*"quest_free"*/);
    sub_1C32C20(&StringLiteral_22871/*"quest_event"*/);
    sub_1C32C20(&StringLiteral_22873/*"quest_heroic"*/);
    sub_1C32C20(&StringLiteral_15957/*"[^0-9]"*/);
    sub_1C32C20(&StringLiteral_22875/*"quest_main"*/);
    sub_1C32C20(&StringLiteral_22866/*"quest_Interlude"*/);
    sub_1C32C20(&StringLiteral_23803/*"sub_title_"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_24098/*"title_"*/);
    byte_4C390AD = 1;
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
      sub_1C32BC4((CGThumbnailListItem_o *)p_commonParam, (int32_t)param, (int32_t)method, v3);
      titleSpriteDecoration = this->fields.titleSpriteDecoration;
      if ( !titleSpriteDecoration )
        goto LABEL_136;
      max_length = titleSpriteDecoration->max_length;
      if ( max_length >= 1 )
      {
        v12 = 0;
        while ( v12 < max_length )
        {
          gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v12];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          max_length = titleSpriteDecoration->max_length;
          if ( (int)++v12 >= max_length )
            goto LABEL_17;
        }
LABEL_137:
        sub_1C32E84(gameObject);
      }
LABEL_17:
      titleLabelDecoration = this->fields.titleLabelDecoration;
      if ( !titleLabelDecoration )
        goto LABEL_136;
      v14 = titleLabelDecoration->max_length;
      if ( v14 >= 1 )
      {
        v15 = 0;
        while ( v15 < v14 )
        {
          gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v15];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          v14 = titleLabelDecoration->max_length;
          if ( (int)++v15 >= v14 )
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
      v17 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0);
      v18 = System_String__Concat_63518544((System_String_o *)StringLiteral_24098/*"title_"*/, v17, 0);
      v19 = (UnityEngine_Object_o *)this->fields.titleSprite;
      v20 = v18;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v19, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_55;
      v21 = this->fields.titleSprite;
      if ( !v21 )
        goto LABEL_136;
      gameObject = (UnityEngine_Component_o *)v21->fields.mAtlas;
      if ( !gameObject )
        goto LABEL_136;
      if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v20, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        UISprite__set_spriteName((UISprite_o *)gameObject, v20, 0);
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
        v23 = this->fields.titleSpriteDecoration;
        if ( !v23 )
          goto LABEL_136;
        v24 = v23->max_length;
        if ( v24 >= 1 )
        {
          v25 = 0;
          while ( v25 < v24 )
          {
            gameObject = (UnityEngine_Component_o *)v23->m_Items[v25];
            if ( !gameObject )
              goto LABEL_136;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( !gameObject )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v24 = v23->max_length;
            if ( (int)++v25 >= v24 )
              goto LABEL_75;
          }
          goto LABEL_137;
        }
      }
      else
      {
LABEL_55:
        v26 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v26, 0, 0);
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
            v28 = this->fields.titleLabel;
            if ( !v28 )
              goto LABEL_136;
            mText = v28->fields.mText;
            if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
            v30 = System_Text_RegularExpressions_Regex__Replace(
                    mText,
                    (System_String_o *)StringLiteral_15957/*"[^0-9]"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0);
            UILabel__set_text(v28, v30, 0);
          }
          v31 = this->fields.titleLabel;
          if ( !v31 )
            goto LABEL_136;
          v32 = v31->fields.mText;
          if ( !v32 )
            goto LABEL_136;
          if ( v32->fields._stringLength )
          {
            v33 = this->fields.titleLabelDecoration;
            if ( !v33 )
              goto LABEL_136;
            v34 = v33->max_length;
            if ( v34 >= 1 )
            {
              v35 = 0;
              while ( v35 < v34 )
              {
                gameObject = (UnityEngine_Component_o *)v33->m_Items[v35];
                if ( !gameObject )
                  goto LABEL_136;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
                if ( !gameObject )
                  goto LABEL_136;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                v34 = v33->max_length;
                if ( (int)++v35 >= v34 )
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
        v37 = this->fields.commonParam;
        if ( !v37 )
          goto LABEL_136;
        v38 = this->fields.messageSprite;
        v39 = System_Int32__ToString((int)v37 + 48, 0);
        gameObject = (UnityEngine_Component_o *)System_String__Concat_63518544(
                                                  (System_String_o *)StringLiteral_23803/*"sub_title_"*/,
                                                  v39,
                                                  0);
        if ( !v38 )
          goto LABEL_136;
        UISprite__set_spriteName(v38, (System_String_o *)gameObject, 0);
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
          v41 = this->fields.messageManager;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v41 )
              goto LABEL_136;
            ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0);
          }
          else
          {
            if ( !*p_commonParam || !v41 )
              goto LABEL_136;
            ((void (__fastcall *)(struct ScriptLineMessage_o *__return_ptr, struct ScriptLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, const MethodInfo *))v41->klass->vtable._7_SetText.methodPtr)(
              v41,
              this->fields.messageManager,
              (*p_commonParam)->fields.message,
              0,
              0,
              0,
              0,
              v41->klass->vtable._7_SetText.method);
          }
        }
        else
        {
          v45 = this->fields.commonParam;
          if ( !v45 )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
          if ( !gameObject )
            goto LABEL_136;
          ((void (__fastcall *)(UnityEngine_Component_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))gameObject->klass[1]._1.this_arg.data)(
            gameObject,
            v45->fields.messageRuby,
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
        v42 = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v42, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v43 = this->fields.commonParam;
          if ( !v43 )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, v43->fields.message, 0);
          if ( !*p_commonParam )
            goto LABEL_136;
          questMessageLabelMaxLine = (*p_commonParam)->fields.questMessageLabelMaxLine;
          if ( questMessageLabelMaxLine >= 1 )
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
      gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestExtensionMaster___);
      if ( *p_commonParam && gameObject )
      {
        gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                  &entity,
                                                  (*p_commonParam)->fields.questId,
                                                  (const MethodInfo_3396884 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
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
          v49 = &StringLiteral_22871/*"quest_event"*/;
LABEL_128:
          v48 = (System_String_o *)*v49;
        }
        else
        {
LABEL_141:
          if ( !*p_commonParam )
            goto LABEL_136;
          v48 = 0;
          switch ( (*p_commonParam)->fields.type )
          {
            case 1:
              v49 = &StringLiteral_22875/*"quest_main"*/;
              goto LABEL_128;
            case 2:
              v49 = &StringLiteral_22872/*"quest_free"*/;
              goto LABEL_128;
            case 3:
              v49 = &StringLiteral_22866/*"quest_Interlude"*/;
              goto LABEL_128;
            case 5:
              goto LABEL_124;
            case 6:
              v49 = &StringLiteral_22873/*"quest_heroic"*/;
              goto LABEL_128;
            default:
              break;
          }
        }
        gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName((UISprite_o *)gameObject, v48, 0);
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
            gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( gameObject )
            {
              ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0);
              return;
            }
          }
        }
      }
LABEL_136:
      sub_1C32E7C(gameObject);
    }
  }
  sub_1C3313C(param);
  QuestStartEffectComponent__RefreshPanel(v51, v52);
}


void QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}