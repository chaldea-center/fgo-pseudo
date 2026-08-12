void QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5971FAC & 1) == 0 )
  {
    sub_2213A60(&CommonEffectComponent_TypeInfo);
    byte_5971FAC = 1;
  }
  if ( !*(&CommonEffectComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectComponent_TypeInfo, method);
  CommonEffectComponent___ctor((CommonEffectComponent_o *)this, 0);
}


void QuestStartEffectComponent__RefreshPanel(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *basePanel; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *base2Panel; // x20

  if ( (byte_5971FAB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FAB = 1;
  }
  basePanel = (UnityEngine_Object_o *)this->fields.basePanel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
    sub_2213CDC(gameObject, v4);
  }
}


void QuestStartEffectComponent__SetParam(
        QuestStartEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppClass *v10; // x1
  __int64 naturalAligment; // x8
  struct CommonEffectParam_o **p_commonParam; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 questMessageLabelMaxLine; // x1
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  __int64 v17; // x22
  struct UISprite_array *titleLabelDecoration; // x21
  int v19; // w8
  __int64 v20; // x22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *v25; // x22
  System_String_o *v26; // x21
  struct UISprite_o *v27; // x8
  __int64 v28; // x1
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v30; // x21
  int v31; // w8
  __int64 v32; // x22
  UnityEngine_Object_o *v33; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v35; // x21
  System_String_o *mText; // x22
  System_String_o *v37; // x0
  struct UILabel_o *v38; // x8
  struct System_String_o *v39; // x8
  struct UISprite_array *v40; // x21
  int v41; // w8
  __int64 v42; // x22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v44; // x8
  UISprite_o *v45; // x21
  System_String_o *v46; // x0
  UnityEngine_Object_o *messageManager; // x21
  bool IsNullOrEmpty; // w8
  __int64 v49; // x1
  UnityEngine_Object_o *messageLabel; // x21
  struct CommonEffectParam_o *v51; // x8
  UnityEngine_Component_c *klass; // x9
  UnityEngine_Object_o *v53; // x21
  UnityEngine_Object_o *typeSprite; // x21
  __int64 v55; // x1
  int type; // w8
  __int64 *v57; // x8
  System_String_o *baseName; // x20
  QuestStartEffectComponent_o *v59; // x0
  const MethodInfo *v60; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5971FAA & 1) == 0 )
  {
    sub_2213A60(&CommonEffectParam_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestExtensionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_2213A60(&StringLiteral_24066/*"quest_free"*/);
    sub_2213A60(&StringLiteral_24065/*"quest_event"*/);
    sub_2213A60(&StringLiteral_24067/*"quest_heroic"*/);
    sub_2213A60(&StringLiteral_16590/*"[^0-9]"*/);
    sub_2213A60(&StringLiteral_24069/*"quest_main"*/);
    sub_2213A60(&StringLiteral_24060/*"quest_Interlude"*/);
    sub_2213A60(&StringLiteral_25073/*"sub_title_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_25398/*"title_"*/);
    byte_5971FAA = 1;
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
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)p_commonParam,
        (int32_t)param,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      titleSpriteDecoration = this->fields.titleSpriteDecoration;
      if ( !titleSpriteDecoration )
        goto LABEL_142;
      max_length = titleSpriteDecoration->max_length;
      if ( max_length >= 1 )
      {
        v17 = 0;
        while ( (unsigned int)v17 < max_length )
        {
          gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v17];
          if ( !gameObject )
            goto LABEL_142;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_142;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          max_length = titleSpriteDecoration->max_length;
          if ( (int)++v17 >= max_length )
            goto LABEL_17;
        }
LABEL_143:
        sub_2213CE4(gameObject);
      }
LABEL_17:
      titleLabelDecoration = this->fields.titleLabelDecoration;
      if ( !titleLabelDecoration )
        goto LABEL_142;
      v19 = titleLabelDecoration->max_length;
      if ( v19 >= 1 )
      {
        v20 = 0;
        while ( (unsigned int)v20 < v19 )
        {
          gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v20];
          if ( !gameObject )
            goto LABEL_142;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_142;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          v19 = titleLabelDecoration->max_length;
          if ( (int)++v20 >= v19 )
            goto LABEL_24;
        }
        goto LABEL_143;
      }
LABEL_24:
      titleSprite = (UnityEngine_Object_o *)this->fields.titleSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(titleSprite, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_142;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( !gameObject )
          goto LABEL_142;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      if ( !*p_commonParam )
        goto LABEL_142;
      v22 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0);
      v23 = System_String__Concat_75651716((System_String_o *)StringLiteral_25398/*"title_"*/, v22, 0);
      v25 = (UnityEngine_Object_o *)this->fields.titleSprite;
      v26 = v23;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v25, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_55;
      v27 = this->fields.titleSprite;
      if ( !v27 )
        goto LABEL_142;
      gameObject = (UnityEngine_Component_o *)v27->fields.mAtlas;
      if ( !gameObject )
        goto LABEL_142;
      if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v26, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_142;
        UISprite__set_spriteName((UISprite_o *)gameObject, v26, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_142;
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
          gameObject,
          gameObject->klass[2]._1.generic_class);
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_142;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( !gameObject )
          goto LABEL_142;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(titleLabel, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
          if ( !gameObject )
            goto LABEL_142;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
          if ( !gameObject )
            goto LABEL_142;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        }
        v30 = this->fields.titleSpriteDecoration;
        if ( !v30 )
          goto LABEL_142;
        v31 = v30->max_length;
        if ( v31 >= 1 )
        {
          v32 = 0;
          while ( (unsigned int)v32 < v31 )
          {
            gameObject = (UnityEngine_Component_o *)v30->m_Items[v32];
            if ( !gameObject )
              goto LABEL_142;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
            if ( !gameObject )
              goto LABEL_142;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
            v31 = v30->max_length;
            if ( (int)++v32 >= v31 )
              goto LABEL_75;
          }
          goto LABEL_143;
        }
      }
      else
      {
LABEL_55:
        v33 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v33, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          commonParam = this->fields.commonParam;
          if ( !commonParam )
            goto LABEL_142;
          gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
          if ( !gameObject )
            goto LABEL_142;
          UILabel__set_text((UILabel_o *)gameObject, commonParam->fields.title, 0);
          if ( this->fields.isTitleLabelNumberOnly )
          {
            v35 = this->fields.titleLabel;
            if ( !v35 )
              goto LABEL_142;
            mText = v35->fields.mText;
            if ( !*(&System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, questMessageLabelMaxLine);
            v37 = System_Text_RegularExpressions_Regex__Replace(
                    mText,
                    (System_String_o *)StringLiteral_16590/*"[^0-9]"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0);
            UILabel__set_text(v35, v37, 0);
          }
          v38 = this->fields.titleLabel;
          if ( !v38 || (v39 = v38->fields.mText) == 0 )
LABEL_142:
            sub_2213CDC(gameObject, questMessageLabelMaxLine);
          if ( v39->fields._stringLength )
          {
            v40 = this->fields.titleLabelDecoration;
            if ( !v40 )
              goto LABEL_142;
            v41 = v40->max_length;
            if ( v41 >= 1 )
            {
              v42 = 0;
              while ( (unsigned int)v42 < v41 )
              {
                gameObject = (UnityEngine_Component_o *)v40->m_Items[v42];
                if ( !gameObject )
                  goto LABEL_142;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
                if ( !gameObject )
                  goto LABEL_142;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
                v41 = v40->max_length;
                if ( (int)++v42 >= v41 )
                  goto LABEL_75;
              }
              goto LABEL_143;
            }
          }
        }
      }
LABEL_75:
      messageSprite = (UnityEngine_Object_o *)this->fields.messageSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageSprite, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v44 = this->fields.commonParam;
        if ( !v44 )
          goto LABEL_142;
        v45 = this->fields.messageSprite;
        v46 = System_Int32__ToString((int)v44 + 48, 0);
        gameObject = (UnityEngine_Component_o *)System_String__Concat_75651716(
                                                  (System_String_o *)StringLiteral_25073/*"sub_title_"*/,
                                                  v46,
                                                  0);
        if ( !v45 )
          goto LABEL_142;
        UISprite__set_spriteName(v45, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.messageSprite;
        if ( !gameObject )
          goto LABEL_142;
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
          gameObject,
          gameObject->klass[2]._1.generic_class);
      }
      messageManager = (UnityEngine_Object_o *)this->fields.messageManager;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageManager, 0, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageLabel, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v51 = this->fields.commonParam;
          if ( !v51 )
            goto LABEL_142;
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_142;
          UILabel__set_text((UILabel_o *)gameObject, v51->fields.message, 0);
          if ( !*p_commonParam )
            goto LABEL_142;
          questMessageLabelMaxLine = (unsigned int)(*p_commonParam)->fields.questMessageLabelMaxLine;
          if ( (int)questMessageLabelMaxLine >= 1 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
            if ( !gameObject )
              goto LABEL_142;
            UILabel__set_maxLineCount((UILabel_o *)gameObject, questMessageLabelMaxLine, 0);
          }
        }
LABEL_112:
        typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, questMessageLabelMaxLine);
        if ( !UnityEngine_Object__op_Inequality(typeSprite, 0, 0) )
        {
LABEL_138:
          baseName = this->fields.baseName;
          if ( !System_String__IsNullOrEmpty(this->fields.overwriteEffectNameForTapSkip, 0) )
            baseName = this->fields.overwriteEffectNameForTapSkip;
          gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
          if ( gameObject )
          {
            ScriptManager__InitQuestStartEffectSkip((ScriptManager_o *)gameObject, this->fields.baseName, baseName, 0);
            return;
          }
          goto LABEL_142;
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v55);
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
        if ( !*p_commonParam || !gameObject )
          goto LABEL_142;
        gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                  &entity,
                                                  (*p_commonParam)->fields.questId,
                                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_122;
        gameObject = (UnityEngine_Component_o *)entity;
        if ( !entity )
          goto LABEL_142;
        gameObject = (UnityEngine_Component_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                  (QuestExtensionEntity_o *)entity,
                                                  0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
LABEL_122:
          if ( !*p_commonParam )
            goto LABEL_142;
          type = (*p_commonParam)->fields.type;
          questMessageLabelMaxLine = 0;
          if ( type <= 2 )
          {
            if ( type == 1 )
            {
              v57 = &StringLiteral_24069/*"quest_main"*/;
            }
            else
            {
              if ( type != 2 )
                goto LABEL_135;
              v57 = &StringLiteral_24066/*"quest_free"*/;
            }
LABEL_134:
            questMessageLabelMaxLine = *v57;
LABEL_135:
            gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
            if ( !gameObject )
              goto LABEL_142;
            UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)questMessageLabelMaxLine, 0);
            gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
            if ( !gameObject )
              goto LABEL_142;
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
              gameObject,
              gameObject->klass[2]._1.generic_class);
            goto LABEL_138;
          }
          if ( type == 3 )
          {
            v57 = &StringLiteral_24060/*"quest_Interlude"*/;
            goto LABEL_134;
          }
          if ( type != 5 )
          {
            if ( type != 6 )
              goto LABEL_135;
            v57 = &StringLiteral_24067/*"quest_heroic"*/;
            goto LABEL_134;
          }
        }
        v57 = &StringLiteral_24065/*"quest_event"*/;
        goto LABEL_134;
      }
      if ( !*p_commonParam )
        goto LABEL_142;
      gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.messageRuby, 0);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( !*p_commonParam )
          goto LABEL_142;
        IsNullOrEmpty = System_String__IsNullOrEmpty((*p_commonParam)->fields.message, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
        if ( IsNullOrEmpty )
        {
          if ( !gameObject )
            goto LABEL_142;
          ScriptLineMessage__DeleteLabels((ScriptLineMessage_o *)gameObject, 0);
LABEL_107:
          v53 = (UnityEngine_Object_o *)this->fields.messageLabel;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
          if ( UnityEngine_Object__op_Inequality(v53, 0, 0) )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
            if ( !gameObject )
              goto LABEL_142;
            UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
          goto LABEL_112;
        }
        if ( !*p_commonParam || !gameObject )
          goto LABEL_142;
        klass = gameObject->klass;
      }
      else
      {
        if ( !this->fields.commonParam )
          goto LABEL_142;
        gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
        if ( !gameObject )
          goto LABEL_142;
        klass = gameObject->klass;
      }
      ((void (*)(void))klass[1]._1.this_arg.data)();
      goto LABEL_107;
    }
  }
  sub_221405C(param, v10, method);
  QuestStartEffectComponent__RefreshPanel(v59, v60);
}


void QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}