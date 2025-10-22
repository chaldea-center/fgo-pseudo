void QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C58474 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectComponent_TypeInfo);
    byte_4C58474 = 1;
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

  if ( (byte_4C58473 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58473 = 1;
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
    sub_1C3E7C0(gameObject, v4);
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
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v13; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v15; // w8
  unsigned int v16; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  UnityEngine_Object_o *v20; // x22
  System_String_o *v21; // x21
  struct UISprite_o *v22; // x8
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v24; // x21
  int v25; // w8
  unsigned int v26; // w22
  UnityEngine_Object_o *v27; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v29; // x21
  System_String_o *mText; // x22
  System_String_o *v31; // x0
  struct UILabel_o *v32; // x8
  struct System_String_o *v33; // x8
  struct UISprite_array *v34; // x21
  int v35; // w8
  unsigned int v36; // w22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v38; // x8
  UISprite_o *v39; // x21
  System_String_o *v40; // x0
  UnityEngine_Object_o *messageManager; // x21
  struct ScriptLineMessage_o *v42; // x8
  UnityEngine_Object_o *v43; // x21
  struct CommonEffectParam_o *v44; // x8
  struct CommonEffectParam_o *v45; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  __int64 *v48; // x8
  System_String_o *baseName; // x20
  QuestStartEffectComponent_o *v50; // x0
  const MethodInfo *v51; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C58472 & 1) == 0 )
  {
    sub_1C3E564(&CommonEffectParam_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C3E564(&StringLiteral_22895/*"quest_free"*/);
    sub_1C3E564(&StringLiteral_22894/*"quest_event"*/);
    sub_1C3E564(&StringLiteral_22896/*"quest_heroic"*/);
    sub_1C3E564(&StringLiteral_15969/*"[^0-9]"*/);
    sub_1C3E564(&StringLiteral_22898/*"quest_main"*/);
    sub_1C3E564(&StringLiteral_22889/*"quest_Interlude"*/);
    sub_1C3E564(&StringLiteral_23827/*"sub_title_"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    sub_1C3E564(&StringLiteral_24122/*"title_"*/);
    byte_4C58472 = 1;
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
      sub_1C3E508((CGThumbnailListItem_o *)p_commonParam, (int32_t)param, (int32_t)method, v3);
      titleSpriteDecoration = this->fields.titleSpriteDecoration;
      if ( !titleSpriteDecoration )
        goto LABEL_136;
      max_length = titleSpriteDecoration->max_length;
      if ( max_length >= 1 )
      {
        v13 = 0;
        while ( v13 < max_length )
        {
          gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v13];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          max_length = titleSpriteDecoration->max_length;
          if ( (int)++v13 >= max_length )
            goto LABEL_17;
        }
LABEL_137:
        sub_1C3E7C8(gameObject, questMessageLabelMaxLine);
      }
LABEL_17:
      titleLabelDecoration = this->fields.titleLabelDecoration;
      if ( !titleLabelDecoration )
        goto LABEL_136;
      v15 = titleLabelDecoration->max_length;
      if ( v15 >= 1 )
      {
        v16 = 0;
        while ( v16 < v15 )
        {
          gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v16];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          v15 = titleLabelDecoration->max_length;
          if ( (int)++v16 >= v15 )
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
      v18 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0);
      v19 = System_String__Concat_63636468((System_String_o *)StringLiteral_24122/*"title_"*/, v18, 0);
      v20 = (UnityEngine_Object_o *)this->fields.titleSprite;
      v21 = v19;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v20, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_55;
      v22 = this->fields.titleSprite;
      if ( !v22 )
        goto LABEL_136;
      gameObject = (UnityEngine_Component_o *)v22->fields.mAtlas;
      if ( !gameObject )
        goto LABEL_136;
      if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v21, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        UISprite__set_spriteName((UISprite_o *)gameObject, v21, 0);
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
        v24 = this->fields.titleSpriteDecoration;
        if ( !v24 )
          goto LABEL_136;
        v25 = v24->max_length;
        if ( v25 >= 1 )
        {
          v26 = 0;
          while ( v26 < v25 )
          {
            gameObject = (UnityEngine_Component_o *)v24->m_Items[v26];
            if ( !gameObject )
              goto LABEL_136;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( !gameObject )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v25 = v24->max_length;
            if ( (int)++v26 >= v25 )
              goto LABEL_75;
          }
          goto LABEL_137;
        }
      }
      else
      {
LABEL_55:
        v27 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v27, 0, 0);
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
            v29 = this->fields.titleLabel;
            if ( !v29 )
              goto LABEL_136;
            mText = v29->fields.mText;
            if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
            v31 = System_Text_RegularExpressions_Regex__Replace(
                    mText,
                    (System_String_o *)StringLiteral_15969/*"[^0-9]"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0);
            UILabel__set_text(v29, v31, 0);
          }
          v32 = this->fields.titleLabel;
          if ( !v32 )
            goto LABEL_136;
          v33 = v32->fields.mText;
          if ( !v33 )
            goto LABEL_136;
          if ( v33->fields._stringLength )
          {
            v34 = this->fields.titleLabelDecoration;
            if ( !v34 )
              goto LABEL_136;
            v35 = v34->max_length;
            if ( v35 >= 1 )
            {
              v36 = 0;
              while ( v36 < v35 )
              {
                gameObject = (UnityEngine_Component_o *)v34->m_Items[v36];
                if ( !gameObject )
                  goto LABEL_136;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
                if ( !gameObject )
                  goto LABEL_136;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                v35 = v34->max_length;
                if ( (int)++v36 >= v35 )
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
        v38 = this->fields.commonParam;
        if ( !v38 )
          goto LABEL_136;
        v39 = this->fields.messageSprite;
        v40 = System_Int32__ToString((int)v38 + 48, 0);
        gameObject = (UnityEngine_Component_o *)System_String__Concat_63636468(
                                                  (System_String_o *)StringLiteral_23827/*"sub_title_"*/,
                                                  v40,
                                                  0);
        if ( !v39 )
          goto LABEL_136;
        UISprite__set_spriteName(v39, (System_String_o *)gameObject, 0);
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
          v42 = this->fields.messageManager;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v42 )
              goto LABEL_136;
            ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0);
          }
          else
          {
            if ( !*p_commonParam || !v42 )
              goto LABEL_136;
            ((void (__fastcall *)(struct ScriptLineMessage_o *__return_ptr, struct ScriptLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, const MethodInfo *))v42->klass->vtable._7_SetText.methodPtr)(
              v42,
              this->fields.messageManager,
              (*p_commonParam)->fields.message,
              0,
              0,
              0,
              0,
              v42->klass->vtable._7_SetText.method);
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
        v43 = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v43, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v44 = this->fields.commonParam;
          if ( !v44 )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, v44->fields.message, 0);
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
      gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestExtensionMaster___);
      if ( *p_commonParam && gameObject )
      {
        gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                  &entity,
                                                  (*p_commonParam)->fields.questId,
                                                  (const MethodInfo_33B2FA4 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
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
          v48 = &StringLiteral_22894/*"quest_event"*/;
LABEL_128:
          questMessageLabelMaxLine = *v48;
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
              v48 = &StringLiteral_22898/*"quest_main"*/;
              goto LABEL_128;
            case 2:
              v48 = &StringLiteral_22895/*"quest_free"*/;
              goto LABEL_128;
            case 3:
              v48 = &StringLiteral_22889/*"quest_Interlude"*/;
              goto LABEL_128;
            case 5:
              goto LABEL_124;
            case 6:
              v48 = &StringLiteral_22896/*"quest_heroic"*/;
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
            gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( gameObject )
            {
              ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0);
              return;
            }
          }
        }
      }
LABEL_136:
      sub_1C3E7C0(gameObject, questMessageLabelMaxLine);
    }
  }
  sub_1C3EA80(param);
  QuestStartEffectComponent__RefreshPanel(v50, v51);
}


void QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}