void RecommendSupportQuestSelectDialogComponent___ctor(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596C4EB & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C4EB = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecommendSupportQuestSelectDialogComponent__CallOnDecide(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_onDecide; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide;
  v9 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0;
    sub_2213A04(p_onDecide, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void RecommendSupportQuestSelectDialogComponent__Close(
        RecommendSupportQuestSelectDialogComponent_o *this,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_c *v20; // x0
  System_Action_o *v21; // x20

  if ( (byte_596C4E8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass34_0__Close_b__0__);
    sub_2213A60(&RecommendSupportQuestSelectDialogComponent___c__DisplayClass34_0_TypeInfo);
    byte_596C4E8 = 1;
  }
  v5 = sub_2213CCC(RecommendSupportQuestSelectDialogComponent___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callAction;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callAction, v14, v15, v16, v17, v18, v19);
  v20 = System_Action_TypeInfo;
  this->fields.state = 4;
  v21 = (System_Action_o *)sub_2213CCC(v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass34_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0);
}


void RecommendSupportQuestSelectDialogComponent__Init(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RecommendSupportQuestSelectDialogComponent__OnClickCancel(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596C4E7 & 1) == 0 )
  {
    sub_2213A60(&Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    byte_596C4E7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    RecommendSupportQuestSelectDialogComponent__Close(this, 0, v5);
  }
}


void RecommendSupportQuestSelectDialogComponent__OnClickDecide(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *questInfo; // x0
  _BOOL8 IsExpired; // x0
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_596C4E6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__);
    sub_2213A60(&Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    byte_596C4E6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    questInfo = this->fields.questInfo;
    if ( !questInfo )
      sub_2213CDC(0, v5);
    IsExpired = RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_IsExpired(questInfo, v5);
    if ( IsExpired )
    {
      RecommendSupportQuestSelectDialogComponent__OpenExpiredDialog(
        (RecommendSupportQuestSelectDialogComponent_o *)IsExpired,
        v8);
    }
    else
    {
      this->fields.state = 3;
      v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v9,
        (Il2CppObject *)this,
        Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__,
        0);
      RecommendSupportQuestSelectDialogComponent__Close(this, v9, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportQuestSelectDialogComponent__Open(
        RecommendSupportQuestSelectDialogComponent_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        bool isRemove,
        System_Action_o *action,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  RecommendSupportQuestSelectDialogComponent_o *v11; // x19
  struct RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *QuestInfo_k__BackingField; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x2
  int32_t warningLb; // w22
  UILabel_o *titleLb; // x23
  System_String_o **v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o **v25; // x8
  UILabel_o *descriptionLb; // x23
  System_String_o *v27; // x24
  System_String_o *v28; // x24
  Il2CppObject *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *situationLb; // x23
  UnityEngine_GameObject_o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  UILabel_o *decideButtonLb; // x23
  System_String_o **v36; // x8
  __int64 v37; // x1
  __int64 v38; // x2
  UILabel_o *cancelButtonLb; // x23
  const MethodInfo *v40; // x3
  UnityEngine_GameObject_o *v41; // x0
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  UnityEngine_GameObject_o *v44; // x0
  int32_t SettingSelectIndex_k__BackingField; // w20
  UnityEngine_GameObject_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  UILabel_o *v49; // x21
  System_String_o *v50; // x22
  Il2CppObject *v51; // x0
  UILabel_o *v52; // x21
  System_String_o *v53; // x22
  Il2CppObject *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x2
  UnityEngine_GameObject_o *v59; // x0
  System_Action_o *v60; // x20
  int v61; // [xsp+Ch] [xbp-54h] BYREF
  int v62; // [xsp+18h] [xbp-48h] BYREF
  int v63; // [xsp+1Ch] [xbp-44h] BYREF

  v11 = this;
  if ( (byte_596C4E3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_RecommendSupportQuestSelectDialogComponent__Open_b__28_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_2213A60(&StringLiteral_11521/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/);
    sub_2213A60(&StringLiteral_11525/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/);
    sub_2213A60(&StringLiteral_11523/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/);
    sub_2213A60(&StringLiteral_11524/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION_WARNING"*/);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_11527/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/);
    sub_2213A60(&StringLiteral_3832/*"COMMON_CONFIRM_REMOVE"*/);
    sub_2213A60(&StringLiteral_11522/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/);
    this = (RecommendSupportQuestSelectDialogComponent_o *)sub_2213A60(&StringLiteral_11526/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/);
    byte_596C4E3 = 1;
  }
  if ( !v11->fields.state )
  {
    if ( item )
    {
      QuestInfo_k__BackingField = item->fields._QuestInfo_k__BackingField;
      v11->fields.questInfo = QuestInfo_k__BackingField;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v11->fields.questInfo,
        (int32_t)QuestInfo_k__BackingField,
        (System_String_o *)isRemove,
        (System_String_o *)action,
        (int32_t)method,
        v5,
        v6,
        v7);
      v11->fields.onDecide = action;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v11->fields.onDecide,
        (int32_t)action,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      this = (RecommendSupportQuestSelectDialogComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( this )
      {
        warningLb = (int32_t)this->fields.warningLb;
        titleLb = v11->fields.titleLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, item, v19);
        v22 = (System_String_o **)&StringLiteral_11526/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/;
        if ( !isRemove )
          v22 = (System_String_o **)&StringLiteral_11525/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/;
        this = (RecommendSupportQuestSelectDialogComponent_o *)LocalizationManager__Get(*v22, 0);
        if ( titleLb )
        {
          UILabel__set_text(titleLb, (System_String_o *)this, 0);
          v25 = (System_String_o **)&StringLiteral_11522/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/;
          descriptionLb = v11->fields.descriptionLb;
          if ( !isRemove )
            v25 = (System_String_o **)&StringLiteral_11521/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/;
          v27 = *v25;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
          v28 = LocalizationManager__Get(v27, 0);
          v63 = warningLb + 1;
          v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v63);
          this = (RecommendSupportQuestSelectDialogComponent_o *)System_String__Format(v28, v29, 0);
          if ( descriptionLb )
          {
            UILabel__set_text(descriptionLb, (System_String_o *)this, 0);
            this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.descriptionLb;
            if ( this )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              GameObjectExtensions__SetLocalPositionY(gameObject, 174.0, 0);
              this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.descriptionLb;
              if ( this )
              {
                UILabel__set_fontSize((UILabel_o *)this, 24, 0);
                situationLb = v11->fields.situationLb;
                this = (RecommendSupportQuestSelectDialogComponent_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11523/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/,
                                                                         0);
                if ( situationLb )
                {
                  UILabel__set_text(situationLb, (System_String_o *)this, 0);
                  this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.situationLb;
                  if ( this )
                  {
                    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                    GameObjectExtensions__SetLocalPositionY(v32, -3.0, 0);
                    decideButtonLb = v11->fields.decideButtonLb;
                    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33, v34);
                    v36 = (System_String_o **)&StringLiteral_3832/*"COMMON_CONFIRM_REMOVE"*/;
                    if ( !isRemove )
                      v36 = (System_String_o **)&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/;
                    this = (RecommendSupportQuestSelectDialogComponent_o *)LocalizationManager__Get(*v36, 0);
                    if ( decideButtonLb )
                    {
                      UILabel__set_text(decideButtonLb, (System_String_o *)this, 0);
                      cancelButtonLb = v11->fields.cancelButtonLb;
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
                      this = (RecommendSupportQuestSelectDialogComponent_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/,
                                                                               0);
                      if ( cancelButtonLb )
                      {
                        UILabel__set_text(cancelButtonLb, (System_String_o *)this, 0);
                        this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.warningLb;
                        if ( this )
                        {
                          this = (RecommendSupportQuestSelectDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0);
                          if ( this )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                            this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.questBoardDraw;
                            if ( this )
                            {
                              RecommendSupportQuestBoardListViewItemDraw__SetItemOfQuest(
                                (RecommendSupportQuestBoardListViewItemDraw_o *)this,
                                item,
                                0,
                                v40);
                              this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.questBoardDraw;
                              if ( this )
                              {
                                v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                                GameObjectExtensions__SetLocalPositionY(v41, 0.0, 0);
                                RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(v11, warningLb, v42);
                                RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(v11, warningLb, v43);
                                this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.servantFaceIcon;
                                if ( this )
                                {
                                  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                                  GameObjectExtensions__SetLocalPositionY(v44, -90.0, 0);
                                  if ( !item->fields._IsSetting_k__BackingField || isRemove )
                                    goto LABEL_47;
                                  this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.descriptionLb;
                                  if ( this )
                                  {
                                    SettingSelectIndex_k__BackingField = item->fields._SettingSelectIndex_k__BackingField;
                                    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                                    GameObjectExtensions__SetLocalPositionY(v46, 187.0, 0);
                                    this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.descriptionLb;
                                    if ( this )
                                    {
                                      UILabel__set_fontSize((UILabel_o *)this, 22, 0);
                                      v49 = v11->fields.situationLb;
                                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
                                      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_11524/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION_WARNING"*/, 0);
                                      v62 = SettingSelectIndex_k__BackingField + 1;
                                      v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v62);
                                      this = (RecommendSupportQuestSelectDialogComponent_o *)System_String__Format(
                                                                                               v50,
                                                                                               v51,
                                                                                               0);
                                      if ( v49 )
                                      {
                                        UILabel__set_text(v49, (System_String_o *)this, 0);
                                        v52 = v11->fields.warningLb;
                                        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11527/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/, 0);
                                        v61 = SettingSelectIndex_k__BackingField + 1;
                                        v54 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v61);
                                        this = (RecommendSupportQuestSelectDialogComponent_o *)System_String__Format(
                                                                                                 v53,
                                                                                                 v54,
                                                                                                 0);
                                        if ( v52 )
                                        {
                                          UILabel__set_text(v52, (System_String_o *)this, 0);
                                          this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.warningLb;
                                          if ( this )
                                          {
                                            this = (RecommendSupportQuestSelectDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                                                                     (UnityEngine_Component_o *)this,
                                                                                                     0);
                                            if ( this )
                                            {
                                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                                              this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.questBoardDraw;
                                              if ( this )
                                              {
                                                v55 = UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
                                                GameObjectExtensions__SetLocalPositionY(v55, -24.0, 0);
                                                this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.situationLb;
                                                if ( this )
                                                {
                                                  v56 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
                                                  GameObjectExtensions__SetLocalPositionY(v56, -18.0, 0);
                                                  RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
                                                    v11,
                                                    SettingSelectIndex_k__BackingField,
                                                    v57);
                                                  RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(
                                                    v11,
                                                    SettingSelectIndex_k__BackingField,
                                                    v58);
                                                  this = (RecommendSupportQuestSelectDialogComponent_o *)v11->fields.servantFaceIcon;
                                                  if ( this )
                                                  {
                                                    v59 = UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
                                                    GameObjectExtensions__SetLocalPositionY(v59, -98.0, 0);
LABEL_47:
                                                    v11->fields.state = 1;
                                                    v60 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                                    System_Action___ctor(
                                                      v60,
                                                      (Il2CppObject *)v11,
                                                      Method_RecommendSupportQuestSelectDialogComponent__Open_b__28_0__,
                                                      0);
                                                    BaseDialog__Open((BaseDialog_o *)v11, v60, 0, 0, 0);
                                                    return;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_2213CDC(this, item);
  }
}


void RecommendSupportQuestSelectDialogComponent__OpenExpiredDialog(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  Il2CppObject *Instance; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  RecommendSupportQuestSelectDialogComponent___c_c *v8; // x8
  System_String_o *v9; // x20
  struct RecommendSupportQuestSelectDialogComponent___c_StaticFields *static_fields; // x9
  System_String_o *v11; // x21
  System_Action_o *_9__37_0; // x22
  Il2CppObject *v13; // x23
  struct RecommendSupportQuestSelectDialogComponent___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_596C4EA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_RecommendSupportQuestSelectDialogComponent___c__OpenExpiredDialog_b__37_0__);
    sub_2213A60(&RecommendSupportQuestSelectDialogComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_11519/*"RECOMMEND_SUPPORT_QUEST_EXPIRED_DIALOG_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C4EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v2, v3);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11519/*"RECOMMEND_SUPPORT_QUEST_EXPIRED_DIALOG_EXPLANATION"*/, 0);
  v8 = RecommendSupportQuestSelectDialogComponent___c_TypeInfo;
  v9 = v5;
  if ( !*(&RecommendSupportQuestSelectDialogComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportQuestSelectDialogComponent___c_TypeInfo, v6, v7);
    v8 = RecommendSupportQuestSelectDialogComponent___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  _9__37_0 = static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = RecommendSupportQuestSelectDialogComponent___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__37_0,
      v13,
      Method_RecommendSupportQuestSelectDialogComponent___c__OpenExpiredDialog_b__37_0__,
      0);
    v14 = RecommendSupportQuestSelectDialogComponent___c_TypeInfo->static_fields;
    v14->__9__37_0 = _9__37_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__37_0, (int32_t)_9__37_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !Instance )
    sub_2213CDC(v5, v6);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v11, v9, _9__37_0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
}


void RecommendSupportQuestSelectDialogComponent__SerializeFieldNotNullCheck(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(
        RecommendSupportQuestSelectDialogComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x21
  int64_t Instance; // x0
  __int64 v8; // x1
  bool v9; // w8
  __int64 v10; // x2
  Il2CppClass *klass; // x21
  void *monitor; // x22
  UISprite_o *equipSprite; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t v16; // w21
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  __int64 v20; // x2
  int64_t v21; // x19
  Il2CppClass *v22; // x20
  void *v23; // x21
  bool v24; // cc
  bool v25; // w1
  UnityEngine_GameObject_o *gameObject; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *v29; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_596C4E5 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C4E5 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&index, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  Instance = *(_QWORD *)(Instance + 112);
  if ( !Instance )
    goto LABEL_43;
  Instance = RecommendSupportData__GetEquip((RecommendSupportData_o *)Instance, index, 0);
  if ( !Master_object )
    goto LABEL_43;
  v9 = DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         Instance,
         (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  Instance = (int64_t)this->fields.noneEquipSprite;
  if ( v9 )
  {
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = (int64_t)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    if ( !entity )
      goto LABEL_43;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v10);
    *(_QWORD *)&v31.fields.currentCryptoKey = klass;
    *(_QWORD *)&v31.fields.fakeValue = monitor;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v31, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v14, v15);
    AtlasManager__SetEquipFace(equipSprite, v16, 0, 0);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( entity )
        {
          v21 = Instance;
          v22 = entity[6].klass;
          v23 = entity[6].monitor;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v20);
          *(_QWORD *)&v32.fields.currentCryptoKey = v22;
          *(_QWORD *)&v32.fields.fakeValue = v23;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v32, 0);
          if ( v21 )
          {
            v24 = (int)Instance <= 0;
            Instance = v21;
            v25 = !v24;
            goto LABEL_41;
          }
        }
      }
      goto LABEL_43;
    }
  }
  else
  {
    if ( !Instance )
      goto LABEL_43;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_43;
    Instance = *(_QWORD *)(Instance + 112);
    if ( !Instance )
      goto LABEL_43;
    Instance = RecommendSupportData__GetServant((RecommendSupportData_o *)Instance, index, 0);
    if ( !gameObject )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive(gameObject, Instance > 0, 0);
    Instance = (int64_t)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_43;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    v29 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          v25 = 0;
LABEL_41:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v25, 0);
          return;
        }
      }
LABEL_43:
      sub_2213CDC(Instance, v8);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
        RecommendSupportQuestSelectDialogComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x21
  int64_t Instance; // x0
  __int64 v8; // x1
  IconLabelInfo_o *v9; // x20
  int32_t klass; // w21
  struct RecommendSupportQuestBoardListViewItemDraw_o *questBoardDraw; // x8
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596C4E4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_2213A60(&IconLabelInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_596C4E4 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&index, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = *(_QWORD *)(Instance + 112);
  if ( !Instance )
    goto LABEL_20;
  Instance = RecommendSupportData__GetServant((RecommendSupportData_o *)Instance, index, 0);
  if ( !Master_object )
    goto LABEL_20;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               &entity,
               Instance,
               (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    v9 = (IconLabelInfo_o *)sub_2213CCC(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v9, 0);
    Instance = (int64_t)entity;
    if ( entity )
    {
      klass = (int32_t)entity[25].klass;
      Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0);
      if ( v9 )
      {
        IconLabelInfo__Set_47880948(v9, 2, klass, Instance, 0, 0, 0, 0, 0, 0);
        Instance = (int64_t)this->fields.servantFaceIcon;
        if ( Instance )
        {
          ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)Instance, 1, 0);
          Instance = (int64_t)this->fields.servantFaceIcon;
          if ( Instance )
          {
            ServantFaceIconComponent__Set_48049524(
              (ServantFaceIconComponent_o *)Instance,
              (UserServantEntity_o *)entity,
              v9,
              0,
              0,
              0);
            return;
          }
        }
      }
    }
LABEL_20:
    sub_2213CDC(Instance, v8);
  }
  questBoardDraw = this->fields.questBoardDraw;
  if ( !questBoardDraw )
    goto LABEL_20;
  Instance = (int64_t)this->fields.servantFaceIcon;
  if ( questBoardDraw->fields._IsGrandEnable_k__BackingField )
  {
    if ( !Instance )
      goto LABEL_20;
    ServantFaceIconComponent__NoMountGrandSupport((ServantFaceIconComponent_o *)Instance, 0);
  }
  else
  {
    if ( !Instance )
      goto LABEL_20;
    ServantFaceIconComponent__NoMountSupport((ServantFaceIconComponent_o *)Instance, 0);
  }
}


void RecommendSupportQuestSelectDialogComponent__Update(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewItemDraw_o *questBoardDraw; // x0

  questBoardDraw = this->fields.questBoardDraw;
  if ( !questBoardDraw )
    sub_2213CDC(0, method);
  RecommendSupportQuestBoardListViewItemDraw__OnUpdate(questBoardDraw, method);
}


void RecommendSupportQuestSelectDialogComponent___Open_b__28_0(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *RecommendSupportQuestSelectDialogComponent__get_closeBtnObject(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596C4E9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596C4E9 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = this->fields.cancelButton;
  if ( !v7 )
    sub_2213CDC(0, v5);
  return UnityEngine_GameObject__get_gameObject(v7, 0);
}


void RecommendSupportQuestSelectDialogComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596C4EC & 1) == 0 )
  {
    sub_2213A60(&RecommendSupportQuestSelectDialogComponent___c_TypeInfo);
    byte_596C4EC = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(RecommendSupportQuestSelectDialogComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportQuestSelectDialogComponent___c_TypeInfo->static_fields->__9 = (struct RecommendSupportQuestSelectDialogComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportQuestSelectDialogComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportQuestSelectDialogComponent___c___ctor(
        RecommendSupportQuestSelectDialogComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestSelectDialogComponent___c___OpenExpiredDialog_b__37_0(
        RecommendSupportQuestSelectDialogComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_596C4ED & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C4ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void RecommendSupportQuestSelectDialogComponent___c__DisplayClass34_0___ctor(
        RecommendSupportQuestSelectDialogComponent___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestSelectDialogComponent___c__DisplayClass34_0___Close_b__0(
        RecommendSupportQuestSelectDialogComponent___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectDialogComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  RecommendSupportQuestSelectDialogComponent__Init(_4__this, method);
  ActionExtensions__Call(this->fields.callAction, 0);
}