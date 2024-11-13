void __fastcall RecommendSupportQuestSelectDialogComponent___ctor(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B123F2 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B123F2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent__CallOnDecide(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_onDecide; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = (PartyOrganizationUtility_o *)&this->fields.onDecide;
  v9 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0LL;
    sub_1BCA784(p_onDecide, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__Close(
        RecommendSupportQuestSelectDialogComponent_o *this,
        System_Action_o *callAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20

  if ( (byte_4B123F0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callAction, method);
    sub_1BCA7E0(&Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0__Close_b__0__, v6, v7);
    sub_1BCA7E0(&RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_TypeInfo, v8, v9);
    byte_4B123F0 = 1;
  }
  v10 = sub_1BCAA2C(RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_TypeInfo, callAction, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = callAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)callAction, v19, v20, v21, v22, v23, v24);
  this->fields.state = 4;
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v28, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent__Init(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent__OnClickCancel(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B123EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__, method, v2);
    byte_4B123EF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    RecommendSupportQuestSelectDialogComponent__Close(this, 0LL, v6);
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__OnClickDecide(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_4B123EE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__, v4, v5);
    sub_1BCA7E0(&Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__, v6, v7);
    byte_4B123EE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v8 = Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__,
      0LL);
    RecommendSupportQuestSelectDialogComponent__Close(this, v13, v14);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestSelectDialogComponent__Open(
        RecommendSupportQuestSelectDialogComponent_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        bool isRemove,
        System_Action_o *action,
        const MethodInfo *method)
{
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  System_String_o *Instance; // x0
  __int64 v41; // x1
  int32_t klass; // w22
  UILabel_o *titleLb; // x23
  System_String_o **v44; // x8
  __int64 v45; // x1
  System_String_o **v46; // x8
  UILabel_o *descriptionLb; // x23
  System_String_o *v48; // x24
  System_String_o *v49; // x24
  Il2CppObject *v50; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *situationLb; // x23
  UnityEngine_GameObject_o *v53; // x0
  __int64 v54; // x1
  UILabel_o *decideButtonLb; // x23
  System_String_o **v56; // x8
  __int64 v57; // x1
  UILabel_o *cancelButtonLb; // x23
  const MethodInfo *v59; // x3
  UnityEngine_GameObject_o *v60; // x0
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x2
  UnityEngine_GameObject_o *v63; // x0
  __int64 v64; // x2
  __int64 v65; // x3
  int32_t SettingSelectIndex_k__BackingField; // w20
  UnityEngine_GameObject_o *v67; // x0
  __int64 v68; // x1
  UILabel_o *v69; // x21
  System_String_o *v70; // x22
  Il2CppObject *v71; // x0
  UILabel_o *warningLb; // x21
  System_String_o *v73; // x22
  Il2CppObject *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  const MethodInfo *v77; // x2
  const MethodInfo *v78; // x2
  UnityEngine_GameObject_o *v79; // x0
  System_Action_o *v80; // x20
  int v81; // [xsp+Ch] [xbp-54h] BYREF
  int v82; // [xsp+18h] [xbp-48h] BYREF
  int v83; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B123EB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, item, isRemove);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_RecommendSupportQuestSelectDialogComponent__Open_b__27_0__, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v18, v19);
    sub_1BCA7E0(&StringLiteral_11155/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_11159/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_11157/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_11158/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION_WARNING"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_11161/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_3791/*"COMMON_CONFIRM_REMOVE"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_11156/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_11160/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/, v38, v39);
    byte_4B123EB = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = action;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onDecide,
      (int64_t)action,
      isRemove,
      (int32_t)action,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      klass = (int32_t)Instance[5].klass;
      titleLb = this->fields.titleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
      v44 = (System_String_o **)&StringLiteral_11160/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/;
      if ( !isRemove )
        v44 = (System_String_o **)&StringLiteral_11159/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/;
      Instance = LocalizationManager__Get(*v44, 0LL);
      if ( titleLb )
      {
        UILabel__set_text(titleLb, Instance, 0LL);
        v46 = (System_String_o **)&StringLiteral_11156/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/;
        descriptionLb = this->fields.descriptionLb;
        if ( !isRemove )
          v46 = (System_String_o **)&StringLiteral_11155/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/;
        v48 = *v46;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v45);
        v49 = LocalizationManager__Get(v48, 0LL);
        v83 = klass + 1;
        v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
        Instance = System_String__Format(v49, v50, 0LL);
        if ( descriptionLb )
        {
          UILabel__set_text(descriptionLb, Instance, 0LL);
          Instance = (System_String_o *)this->fields.descriptionLb;
          if ( Instance )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalPositionY(gameObject, 174.0, 0LL);
            Instance = (System_String_o *)this->fields.descriptionLb;
            if ( Instance )
            {
              UILabel__set_fontSize((UILabel_o *)Instance, 24, 0LL);
              situationLb = this->fields.situationLb;
              Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11157/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, 0LL);
              if ( situationLb )
              {
                UILabel__set_text(situationLb, Instance, 0LL);
                Instance = (System_String_o *)this->fields.situationLb;
                if ( Instance )
                {
                  v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v53, -3.0, 0LL);
                  decideButtonLb = this->fields.decideButtonLb;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
                  v56 = (System_String_o **)&StringLiteral_3791/*"COMMON_CONFIRM_REMOVE"*/;
                  if ( !isRemove )
                    v56 = (System_String_o **)&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/;
                  Instance = LocalizationManager__Get(*v56, 0LL);
                  if ( decideButtonLb )
                  {
                    UILabel__set_text(decideButtonLb, Instance, 0LL);
                    cancelButtonLb = this->fields.cancelButtonLb;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57);
                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
                    if ( cancelButtonLb )
                    {
                      UILabel__set_text(cancelButtonLb, Instance, 0LL);
                      Instance = (System_String_o *)this->fields.warningLb;
                      if ( Instance )
                      {
                        Instance = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                        if ( Instance )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                          Instance = (System_String_o *)this->fields.questBoardDraw;
                          if ( Instance )
                          {
                            RecommendSupportQuestBoardListViewItemDraw__SetItemOfQuest(
                              (RecommendSupportQuestBoardListViewItemDraw_o *)Instance,
                              item,
                              0,
                              v59);
                            Instance = (System_String_o *)this->fields.questBoardDraw;
                            if ( Instance )
                            {
                              v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                              GameObjectExtensions__SetLocalPositionY(v60, 0.0, 0LL);
                              RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(this, klass, v61);
                              RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(this, klass, v62);
                              Instance = (System_String_o *)this->fields.servantFaceIcon;
                              if ( Instance )
                              {
                                v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                                GameObjectExtensions__SetLocalPositionY(v63, -90.0, 0LL);
                                if ( item )
                                {
                                  if ( !item->fields._IsSetting_k__BackingField || isRemove )
                                    goto LABEL_47;
                                  Instance = (System_String_o *)this->fields.descriptionLb;
                                  if ( Instance )
                                  {
                                    SettingSelectIndex_k__BackingField = item->fields._SettingSelectIndex_k__BackingField;
                                    v67 = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
                                    GameObjectExtensions__SetLocalPositionY(v67, 187.0, 0LL);
                                    Instance = (System_String_o *)this->fields.descriptionLb;
                                    if ( Instance )
                                    {
                                      UILabel__set_fontSize((UILabel_o *)Instance, 22, 0LL);
                                      v69 = this->fields.situationLb;
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v68);
                                      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_11158/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION_WARNING"*/, 0LL);
                                      v82 = SettingSelectIndex_k__BackingField + 1;
                                      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
                                      Instance = System_String__Format(v70, v71, 0LL);
                                      if ( v69 )
                                      {
                                        UILabel__set_text(v69, Instance, 0LL);
                                        warningLb = this->fields.warningLb;
                                        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_11161/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/, 0LL);
                                        v81 = SettingSelectIndex_k__BackingField + 1;
                                        v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v81);
                                        Instance = System_String__Format(v73, v74, 0LL);
                                        if ( warningLb )
                                        {
                                          UILabel__set_text(warningLb, Instance, 0LL);
                                          Instance = (System_String_o *)this->fields.warningLb;
                                          if ( Instance )
                                          {
                                            Instance = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)Instance,
                                                                            0LL);
                                            if ( Instance )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)Instance,
                                                1,
                                                0LL);
                                              Instance = (System_String_o *)this->fields.questBoardDraw;
                                              if ( Instance )
                                              {
                                                v75 = UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                                                GameObjectExtensions__SetLocalPositionY(v75, -24.0, 0LL);
                                                Instance = (System_String_o *)this->fields.situationLb;
                                                if ( Instance )
                                                {
                                                  v76 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Instance,
                                                          0LL);
                                                  GameObjectExtensions__SetLocalPositionY(v76, -18.0, 0LL);
                                                  RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
                                                    this,
                                                    SettingSelectIndex_k__BackingField,
                                                    v77);
                                                  RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(
                                                    this,
                                                    SettingSelectIndex_k__BackingField,
                                                    v78);
                                                  Instance = (System_String_o *)this->fields.servantFaceIcon;
                                                  if ( Instance )
                                                  {
                                                    v79 = UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)Instance,
                                                            0LL);
                                                    GameObjectExtensions__SetLocalPositionY(v79, -98.0, 0LL);
LABEL_47:
                                                    this->fields.state = 1;
                                                    v80 = (System_Action_o *)sub_1BCAA2C(
                                                                               System_Action_TypeInfo,
                                                                               v41,
                                                                               v64,
                                                                               v65);
                                                    System_Action___ctor(
                                                      v80,
                                                      (Il2CppObject *)this,
                                                      Method_RecommendSupportQuestSelectDialogComponent__Open_b__27_0__,
                                                      0LL);
                                                    BaseDialog__Open((BaseDialog_o *)this, v80, 0, 0LL);
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
    sub_1BCAA3C(Instance, v41);
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__SerializeFieldNotNullCheck(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(
        RecommendSupportQuestSelectDialogComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x21
  int64_t Instance; // x0
  const MethodInfo *v19; // x1
  UISprite_o *equipSprite; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  __int64 v23; // x1
  int32_t v24; // w21
  __int64 v25; // x1
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  int64_t v27; // x19
  void *v28; // x20
  Il2CppClass *v29; // x21
  bool v30; // w1
  __int64 v31; // x1
  UnityEngine_Object_o *v32; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4B123ED & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v15, v16);
    byte_4B123ED = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&index);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  Instance = *(_QWORD *)(Instance + 112);
  if ( !Instance )
    goto LABEL_41;
  Instance = RecommendSupportData__GetEquip((RecommendSupportData_o *)Instance, index, 0LL);
  if ( !Master_object )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          Instance,
          (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    goto LABEL_29;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  if ( RecommendSupportSelectControl__get_SelectEquipId((RecommendSupportSelectControl_o *)Instance, v19) > 0 )
  {
    Instance = (int64_t)this->fields.noneEquipSprite;
    if ( !Instance )
      goto LABEL_41;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_41;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    if ( !entity )
      goto LABEL_41;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    *(_QWORD *)&v34.fields.currentCryptoKey = klass;
    *(_QWORD *)&v34.fields.fakeValue = monitor;
    v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v34, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23);
    AtlasManager__SetEquipFace(equipSprite, v24, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( entity )
        {
          v27 = Instance;
          v29 = entity[6].klass;
          v28 = entity[6].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
          *(_QWORD *)&v35.fields.currentCryptoKey = v29;
          *(_QWORD *)&v35.fields.fakeValue = v28;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35, 0LL);
          if ( v27 )
          {
            v30 = (int)Instance > 0;
            Instance = v27;
LABEL_39:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v30, 0LL);
            return;
          }
        }
      }
      goto LABEL_41;
    }
  }
  else
  {
LABEL_29:
    Instance = (int64_t)this->fields.noneEquipSprite;
    if ( !Instance )
      goto LABEL_41;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_41;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_41;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    v32 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31);
    if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          v30 = 0;
          goto LABEL_39;
        }
      }
LABEL_41:
      sub_1BCAA3C(Instance, v19);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
        RecommendSupportQuestSelectDialogComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Master_object; // x21
  int64_t Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  IconLabelInfo_o *v18; // x20
  int32_t klass; // w21
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B123EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v11, v12);
    byte_4B123EC = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&index);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = *(_QWORD *)(Instance + 112);
  if ( !Instance )
    goto LABEL_16;
  Instance = RecommendSupportData__GetServant((RecommendSupportData_o *)Instance, index, 0LL);
  if ( !Master_object )
    goto LABEL_16;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         Instance,
         (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v18 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v15, v16, v17);
    IconLabelInfo___ctor(v18, 0LL);
    Instance = (int64_t)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0LL);
      if ( v18 )
      {
        IconLabelInfo__Set_38850420(v18, 2, klass, Instance, 0, 0, 0, 0, 0LL);
        Instance = (int64_t)this->fields.servantFaceIcon;
        if ( Instance )
        {
          ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.servantFaceIcon;
          if ( Instance )
          {
            ServantFaceIconComponent__Set_38931252(
              (ServantFaceIconComponent_o *)Instance,
              (UserServantEntity_o *)entity,
              v18,
              0LL,
              0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1BCAA3C(Instance, v15);
  }
  Instance = (int64_t)this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_16;
  ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)Instance, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent___Open_b__27_0(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall RecommendSupportQuestSelectDialogComponent__get_closeBtnObject(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4B123F1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B123F1 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_GameObject__get_gameObject(v7, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0___ctor(
        RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0___Close_b__0(
        RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectDialogComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  RecommendSupportQuestSelectDialogComponent__Init(_4__this, method);
  ActionExtensions__Call(this->fields.callAction, 0LL);
}