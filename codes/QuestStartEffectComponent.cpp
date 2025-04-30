void __fastcall QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A4F9EC & 1) == 0 )
  {
    sub_1B863B8(&CommonEffectComponent_TypeInfo, method);
    byte_4A4F9EC = 1;
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

  if ( (byte_4A4F9EB & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4F9EB = 1;
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
    sub_1B86614(gameObject, v4);
  }
}


void __fastcall QuestStartEffectComponent__SetParam(
        QuestStartEffectComponent_o *this,
        Il2CppObject *param,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppClass *v21; // x1
  __int64 methodPtr_low; // x8
  struct CommonEffectParam_o **p_commonParam; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 questMessageLabelMaxLine; // x1
  struct UISprite_array *titleSpriteDecoration; // x21
  int max_length; // w8
  unsigned int v28; // w22
  struct UISprite_array *titleLabelDecoration; // x21
  int v30; // w8
  unsigned int v31; // w22
  UnityEngine_Object_o *titleSprite; // x21
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  UnityEngine_Object_o *v35; // x22
  System_String_o *v36; // x21
  struct UISprite_o *v37; // x8
  UnityEngine_Object_o *titleLabel; // x21
  struct UISprite_array *v39; // x21
  int v40; // w8
  unsigned int v41; // w22
  UnityEngine_Object_o *v42; // x21
  struct CommonEffectParam_o *commonParam; // x8
  struct UILabel_o *v44; // x21
  System_String_o *mText; // x22
  System_String_o *v46; // x0
  struct UILabel_o *v47; // x8
  struct System_String_o *v48; // x8
  struct UISprite_array *v49; // x21
  int v50; // w8
  unsigned int v51; // w22
  UnityEngine_Object_o *messageSprite; // x21
  struct CommonEffectParam_o *v53; // x8
  UISprite_o *v54; // x21
  System_String_o *v55; // x0
  UnityEngine_Object_o *messageManager; // x21
  struct ScriptLineMessage_o *v57; // x8
  UnityEngine_Object_o *v58; // x21
  struct CommonEffectParam_o *v59; // x8
  struct CommonEffectParam_o *v60; // x8
  UnityEngine_Object_o *messageLabel; // x21
  UnityEngine_Object_o *typeSprite; // x21
  __int64 *v63; // x8
  System_String_o *baseName; // x20
  QuestStartEffectComponent_o *v65; // x0
  const MethodInfo *v66; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A4F9EA & 1) == 0 )
  {
    sub_1B863B8(&CommonEffectParam_TypeInfo, param);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestExtensionMaster___, v6);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&System_Text_RegularExpressions_Regex_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v11);
    sub_1B863B8(&StringLiteral_22551/*"quest_free"*/, v12);
    sub_1B863B8(&StringLiteral_22550/*"quest_event"*/, v13);
    sub_1B863B8(&StringLiteral_22552/*"quest_heroic"*/, v14);
    sub_1B863B8(&StringLiteral_15736/*"[^0-9]"*/, v15);
    sub_1B863B8(&StringLiteral_22554/*"quest_main"*/, v16);
    sub_1B863B8(&StringLiteral_22546/*"quest_Interlude"*/, v17);
    sub_1B863B8(&StringLiteral_23487/*"sub_title_"*/, v18);
    sub_1B863B8(&StringLiteral_1/*""*/, v19);
    sub_1B863B8(&StringLiteral_23801/*"title_"*/, v20);
    byte_4A4F9EA = 1;
  }
  entity = 0LL;
  if ( !param )
  {
    p_commonParam = &this->fields.commonParam;
    this->fields.commonParam = 0LL;
    goto LABEL_10;
  }
  v21 = (Il2CppClass *)CommonEffectParam_TypeInfo;
  methodPtr_low = LOBYTE(CommonEffectParam_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
    && (CommonEffectParam_c *)param->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonEffectParam_TypeInfo )
  {
    this->fields.commonParam = (struct CommonEffectParam_o *)param;
    if ( LOBYTE(param->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && param->klass->_2.typeHierarchy[methodPtr_low - 1] == v21 )
    {
      p_commonParam = &this->fields.commonParam;
LABEL_10:
      sub_1B8635C((CGThumbnailListItem_o *)p_commonParam, (int32_t)param, (int32_t)method, v3);
      titleSpriteDecoration = this->fields.titleSpriteDecoration;
      if ( !titleSpriteDecoration )
        goto LABEL_136;
      max_length = titleSpriteDecoration->max_length;
      if ( max_length >= 1 )
      {
        v28 = 0;
        while ( v28 < max_length )
        {
          gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v28];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          max_length = titleSpriteDecoration->max_length;
          if ( (int)++v28 >= max_length )
            goto LABEL_17;
        }
LABEL_137:
        sub_1B8661C(gameObject, questMessageLabelMaxLine);
      }
LABEL_17:
      titleLabelDecoration = this->fields.titleLabelDecoration;
      if ( !titleLabelDecoration )
        goto LABEL_136;
      v30 = titleLabelDecoration->max_length;
      if ( v30 >= 1 )
      {
        v31 = 0;
        while ( v31 < v30 )
        {
          gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v31];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          v30 = titleLabelDecoration->max_length;
          if ( (int)++v31 >= v30 )
            goto LABEL_24;
        }
        goto LABEL_137;
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
          goto LABEL_136;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      if ( !*p_commonParam )
        goto LABEL_136;
      v33 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0LL);
      v34 = System_String__Concat_61645176((System_String_o *)StringLiteral_23801/*"title_"*/, v33, 0LL);
      v35 = (UnityEngine_Object_o *)this->fields.titleSprite;
      v36 = v34;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_55;
      v37 = this->fields.titleSprite;
      if ( !v37 )
        goto LABEL_136;
      gameObject = (UnityEngine_Component_o *)v37->fields.mAtlas;
      if ( !gameObject )
        goto LABEL_136;
      if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v36, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        UISprite__set_spriteName((UISprite_o *)gameObject, v36, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
          gameObject,
          gameObject->klass[2]._1.interopData);
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_136;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        v39 = this->fields.titleSpriteDecoration;
        if ( !v39 )
          goto LABEL_136;
        v40 = v39->max_length;
        if ( v40 >= 1 )
        {
          v41 = 0;
          while ( v41 < v40 )
          {
            gameObject = (UnityEngine_Component_o *)v39->m_Items[v41];
            if ( !gameObject )
              goto LABEL_136;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v40 = v39->max_length;
            if ( (int)++v41 >= v40 )
              goto LABEL_75;
          }
          goto LABEL_137;
        }
      }
      else
      {
LABEL_55:
        v42 = (UnityEngine_Object_o *)this->fields.titleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          commonParam = this->fields.commonParam;
          if ( !commonParam )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
          if ( !gameObject )
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, commonParam->fields.title, 0LL);
          if ( this->fields.isTitleLabelNumberOnly )
          {
            v44 = this->fields.titleLabel;
            if ( !v44 )
              goto LABEL_136;
            mText = v44->fields.mText;
            if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
            v46 = System_Text_RegularExpressions_Regex__Replace(
                    mText,
                    (System_String_o *)StringLiteral_15736/*"[^0-9]"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            UILabel__set_text(v44, v46, 0LL);
          }
          v47 = this->fields.titleLabel;
          if ( !v47 )
            goto LABEL_136;
          v48 = v47->fields.mText;
          if ( !v48 )
            goto LABEL_136;
          if ( v48->fields._stringLength )
          {
            v49 = this->fields.titleLabelDecoration;
            if ( !v49 )
              goto LABEL_136;
            v50 = v49->max_length;
            if ( v50 >= 1 )
            {
              v51 = 0;
              while ( v51 < v50 )
              {
                gameObject = (UnityEngine_Component_o *)v49->m_Items[v51];
                if ( !gameObject )
                  goto LABEL_136;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_136;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                v50 = v49->max_length;
                if ( (int)++v51 >= v50 )
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
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(messageSprite, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        v53 = this->fields.commonParam;
        if ( !v53 )
          goto LABEL_136;
        v54 = this->fields.messageSprite;
        v55 = System_Int32__ToString((int)v53 + 48, 0LL);
        gameObject = (UnityEngine_Component_o *)System_String__Concat_61645176(
                                                  (System_String_o *)StringLiteral_23487/*"sub_title_"*/,
                                                  v55,
                                                  0LL);
        if ( !v54 )
          goto LABEL_136;
        UISprite__set_spriteName(v54, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.messageSprite;
        if ( !gameObject )
          goto LABEL_136;
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
          goto LABEL_136;
        gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.messageRuby, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !*p_commonParam )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)System_String__IsNullOrEmpty((*p_commonParam)->fields.message, 0LL);
          v57 = this->fields.messageManager;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v57 )
              goto LABEL_136;
            ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
          }
          else
          {
            if ( !*p_commonParam || !v57 )
              goto LABEL_136;
            ((void (__fastcall *)(struct ScriptLineMessage_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v57->klass->vtable._7_SetText.method)(
              this->fields.messageManager,
              (*p_commonParam)->fields.message,
              0LL,
              0LL,
              0LL,
              0LL,
              v57->klass[1]._1.image);
          }
        }
        else
        {
          v60 = this->fields.commonParam;
          if ( !v60 )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
          if ( !gameObject )
            goto LABEL_136;
          (*(void (__fastcall **)(UnityEngine_Component_o *, struct System_String_o *, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))&gameObject->klass[1]._1.this_arg.bits)(
            gameObject,
            v60->fields.messageRuby,
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
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        }
      }
      else
      {
        v58 = (UnityEngine_Object_o *)this->fields.messageLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          v59 = this->fields.commonParam;
          if ( !v59 )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, v59->fields.message, 0LL);
          if ( !*p_commonParam )
            goto LABEL_136;
          questMessageLabelMaxLine = (unsigned int)(*p_commonParam)->fields.questMessageLabelMaxLine;
          if ( (int)questMessageLabelMaxLine >= 1 )
          {
            gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
            if ( !gameObject )
              goto LABEL_136;
            UILabel__set_maxLineCount((UILabel_o *)gameObject, questMessageLabelMaxLine, 0LL);
          }
        }
      }
      typeSprite = (UnityEngine_Object_o *)this->fields.typeSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(typeSprite, 0LL, 0LL) )
        goto LABEL_132;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
      if ( *p_commonParam && gameObject )
      {
        gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                  &entity,
                                                  (*p_commonParam)->fields.questId,
                                                  (const MethodInfo_32142CC *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
          goto LABEL_141;
        gameObject = (UnityEngine_Component_o *)entity;
        if ( !entity )
          goto LABEL_136;
        gameObject = (UnityEngine_Component_o *)QuestExtensionEntity__IsSvtCoinQuest(
                                                  (QuestExtensionEntity_o *)entity,
                                                  0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
LABEL_124:
          v63 = &StringLiteral_22550/*"quest_event"*/;
LABEL_128:
          questMessageLabelMaxLine = *v63;
        }
        else
        {
LABEL_141:
          if ( !*p_commonParam )
            goto LABEL_136;
          questMessageLabelMaxLine = 0LL;
          switch ( (*p_commonParam)->fields.type )
          {
            case 1:
              v63 = &StringLiteral_22554/*"quest_main"*/;
              goto LABEL_128;
            case 2:
              v63 = &StringLiteral_22551/*"quest_free"*/;
              goto LABEL_128;
            case 3:
              v63 = &StringLiteral_22546/*"quest_Interlude"*/;
              goto LABEL_128;
            case 5:
              goto LABEL_124;
            case 6:
              v63 = &StringLiteral_22552/*"quest_heroic"*/;
              goto LABEL_128;
            default:
              break;
          }
        }
        gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
        if ( gameObject )
        {
          UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)questMessageLabelMaxLine, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.typeSprite;
          if ( gameObject )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
              gameObject,
              gameObject->klass[2]._1.interopData);
LABEL_132:
            baseName = this->fields.baseName;
            if ( !System_String__IsNullOrEmpty(this->fields.overwriteEffectNameForTapSkip, 0LL) )
              baseName = this->fields.overwriteEffectNameForTapSkip;
            gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
            if ( gameObject )
            {
              ScriptManager__InitQuestStartEffectSkip(
                (ScriptManager_o *)gameObject,
                this->fields.baseName,
                baseName,
                0LL);
              return;
            }
          }
        }
      }
LABEL_136:
      sub_1B86614(gameObject, questMessageLabelMaxLine);
    }
  }
  sub_1B868D4(param);
  QuestStartEffectComponent__RefreshPanel(v65, v66);
}


void __fastcall QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}