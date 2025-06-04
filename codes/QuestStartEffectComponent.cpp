void __fastcall QuestStartEffectComponent___ctor(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B03690 & 1) == 0 )
  {
    sub_1BC3008(&CommonEffectComponent_TypeInfo, method);
    byte_4B03690 = 1;
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

  if ( (byte_4B0368F & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B0368F = 1;
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
    sub_1BC3264(gameObject, v4);
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
  __int64 v26; // x2
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
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B0368E & 1) == 0 )
  {
    sub_1BC3008(&CommonEffectParam_TypeInfo, param);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestExtensionMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&System_Text_RegularExpressions_Regex_TypeInfo, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v11);
    sub_1BC3008(&StringLiteral_22650/*"quest_free"*/, v12);
    sub_1BC3008(&StringLiteral_22649/*"quest_event"*/, v13);
    sub_1BC3008(&StringLiteral_22651/*"quest_heroic"*/, v14);
    sub_1BC3008(&StringLiteral_15813/*"[^0-9]"*/, v15);
    sub_1BC3008(&StringLiteral_22653/*"quest_main"*/, v16);
    sub_1BC3008(&StringLiteral_22644/*"quest_Interlude"*/, v17);
    sub_1BC3008(&StringLiteral_23573/*"sub_title_"*/, v18);
    sub_1BC3008(&StringLiteral_1/*""*/, v19);
    sub_1BC3008(&StringLiteral_23864/*"title_"*/, v20);
    byte_4B0368E = 1;
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
      sub_1BC2FAC((CGThumbnailListItem_o *)p_commonParam, (int32_t)param, (int32_t)method, v3);
      titleSpriteDecoration = this->fields.titleSpriteDecoration;
      if ( !titleSpriteDecoration )
        goto LABEL_136;
      max_length = titleSpriteDecoration->max_length;
      if ( max_length >= 1 )
      {
        v29 = 0;
        while ( v29 < max_length )
        {
          gameObject = (UnityEngine_Component_o *)titleSpriteDecoration->m_Items[v29];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          max_length = titleSpriteDecoration->max_length;
          if ( (int)++v29 >= max_length )
            goto LABEL_17;
        }
LABEL_137:
        sub_1BC326C(gameObject, questMessageLabelMaxLine, v26);
      }
LABEL_17:
      titleLabelDecoration = this->fields.titleLabelDecoration;
      if ( !titleLabelDecoration )
        goto LABEL_136;
      v31 = titleLabelDecoration->max_length;
      if ( v31 >= 1 )
      {
        v32 = 0;
        while ( v32 < v31 )
        {
          gameObject = (UnityEngine_Component_o *)titleLabelDecoration->m_Items[v32];
          if ( !gameObject )
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_136;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          v31 = titleLabelDecoration->max_length;
          if ( (int)++v32 >= v31 )
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
      v34 = System_Int32__ToString((unsigned int)*p_commonParam + 48, 0LL);
      v35 = System_String__Concat_62348648((System_String_o *)StringLiteral_23864/*"title_"*/, v34, 0LL);
      v36 = (UnityEngine_Object_o *)this->fields.titleSprite;
      v37 = v35;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      gameObject = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
        goto LABEL_55;
      v38 = this->fields.titleSprite;
      if ( !v38 )
        goto LABEL_136;
      gameObject = (UnityEngine_Component_o *)v38->fields.mAtlas;
      if ( !gameObject )
        goto LABEL_136;
      if ( UIAtlas__GetSprite((UIAtlas_o *)gameObject, v37, 0LL) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.titleSprite;
        if ( !gameObject )
          goto LABEL_136;
        UISprite__set_spriteName((UISprite_o *)gameObject, v37, 0LL);
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
        v40 = this->fields.titleSpriteDecoration;
        if ( !v40 )
          goto LABEL_136;
        v41 = v40->max_length;
        if ( v41 >= 1 )
        {
          v42 = 0;
          while ( v42 < v41 )
          {
            gameObject = (UnityEngine_Component_o *)v40->m_Items[v42];
            if ( !gameObject )
              goto LABEL_136;
            gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
            if ( !gameObject )
              goto LABEL_136;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
            v41 = v40->max_length;
            if ( (int)++v42 >= v41 )
              goto LABEL_75;
          }
          goto LABEL_137;
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
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.titleLabel;
          if ( !gameObject )
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, commonParam->fields.title, 0LL);
          if ( this->fields.isTitleLabelNumberOnly )
          {
            v45 = this->fields.titleLabel;
            if ( !v45 )
              goto LABEL_136;
            mText = v45->fields.mText;
            if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
            v47 = System_Text_RegularExpressions_Regex__Replace(
                    mText,
                    (System_String_o *)StringLiteral_15813/*"[^0-9]"*/,
                    (System_String_o *)StringLiteral_1/*""*/,
                    0LL);
            UILabel__set_text(v45, v47, 0LL);
          }
          v48 = this->fields.titleLabel;
          if ( !v48 )
            goto LABEL_136;
          v49 = v48->fields.mText;
          if ( !v49 )
            goto LABEL_136;
          if ( v49->fields._stringLength )
          {
            v50 = this->fields.titleLabelDecoration;
            if ( !v50 )
              goto LABEL_136;
            v51 = v50->max_length;
            if ( v51 >= 1 )
            {
              v52 = 0;
              while ( v52 < v51 )
              {
                gameObject = (UnityEngine_Component_o *)v50->m_Items[v52];
                if ( !gameObject )
                  goto LABEL_136;
                gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
                if ( !gameObject )
                  goto LABEL_136;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
                v51 = v50->max_length;
                if ( (int)++v52 >= v51 )
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
        v54 = this->fields.commonParam;
        if ( !v54 )
          goto LABEL_136;
        v55 = this->fields.messageSprite;
        v56 = System_Int32__ToString((int)v54 + 48, 0LL);
        gameObject = (UnityEngine_Component_o *)System_String__Concat_62348648(
                                                  (System_String_o *)StringLiteral_23573/*"sub_title_"*/,
                                                  v56,
                                                  0LL);
        if ( !v55 )
          goto LABEL_136;
        UISprite__set_spriteName(v55, (System_String_o *)gameObject, 0LL);
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
          v58 = this->fields.messageManager;
          if ( ((unsigned __int8)gameObject & 1) != 0 )
          {
            if ( !v58 )
              goto LABEL_136;
            ScriptLineMessage__DeleteLabels(this->fields.messageManager, 0LL);
          }
          else
          {
            if ( !*p_commonParam || !v58 )
              goto LABEL_136;
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
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageManager;
          if ( !gameObject )
            goto LABEL_136;
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
            goto LABEL_136;
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
            goto LABEL_136;
          gameObject = (UnityEngine_Component_o *)this->fields.messageLabel;
          if ( !gameObject )
            goto LABEL_136;
          UILabel__set_text((UILabel_o *)gameObject, v60->fields.message, 0LL);
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
      gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestExtensionMaster___);
      if ( *p_commonParam && gameObject )
      {
        gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                  &entity,
                                                  (*p_commonParam)->fields.questId,
                                                  (const MethodInfo_32AF0BC *)Method_DataMasterBase_QuestExtensionMaster__QuestExtensionEntity__int__TryGetEntity__);
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
          v64 = &StringLiteral_22649/*"quest_event"*/;
LABEL_128:
          questMessageLabelMaxLine = *v64;
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
              v64 = &StringLiteral_22653/*"quest_main"*/;
              goto LABEL_128;
            case 2:
              v64 = &StringLiteral_22650/*"quest_free"*/;
              goto LABEL_128;
            case 3:
              v64 = &StringLiteral_22644/*"quest_Interlude"*/;
              goto LABEL_128;
            case 5:
              goto LABEL_124;
            case 6:
              v64 = &StringLiteral_22651/*"quest_heroic"*/;
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
            gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      sub_1BC3264(gameObject, questMessageLabelMaxLine);
    }
  }
  sub_1BC3524(param);
  QuestStartEffectComponent__RefreshPanel(v66, v67);
}


void __fastcall QuestStartEffectComponent__Update(QuestStartEffectComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  CommonEffectComponent__Update((CommonEffectComponent_o *)this, 0LL);
  QuestStartEffectComponent__RefreshPanel(this, v3);
}