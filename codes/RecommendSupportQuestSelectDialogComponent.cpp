void __fastcall RecommendSupportQuestSelectDialogComponent___ctor(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B62D4F & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B62D4F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
    sub_1BE4A70(p_onDecide, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Action_o *v22; // x20

  if ( (byte_4B62D4D & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, callAction);
    sub_1BE4ACC(&Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0__Close_b__0__, v5);
    sub_1BE4ACC(&RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_TypeInfo, v6);
    byte_4B62D4D = 1;
  }
  v7 = sub_1BE4D18(RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BE4D28(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callAction;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)callAction, v16, v17, v18, v19, v20, v21);
  this->fields.state = 4;
  v22 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v22, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent__Init(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent__OnClickCancel(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B62D4C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__, method);
    byte_4B62D4C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    RecommendSupportQuestSelectDialogComponent__Close(this, 0LL, v5);
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__OnClickDecide(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B62D4B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__, v3);
    sub_1BE4ACC(&Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__, v4);
    byte_4B62D4B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BE4AE4(Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    v7 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__,
      0LL);
    RecommendSupportQuestSelectDialogComponent__Close(this, v7, v8);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_String_o *Instance; // x0
  __int64 v27; // x1
  int32_t klass; // w22
  UILabel_o *titleLb; // x23
  System_String_o **v30; // x8
  System_String_o **v31; // x8
  UILabel_o *descriptionLb; // x23
  System_String_o *v33; // x24
  System_String_o *v34; // x24
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *situationLb; // x23
  UnityEngine_GameObject_o *v41; // x0
  UILabel_o *decideButtonLb; // x23
  System_String_o **v43; // x8
  UILabel_o *cancelButtonLb; // x23
  const MethodInfo *v45; // x3
  UnityEngine_GameObject_o *v46; // x0
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  UnityEngine_GameObject_o *v49; // x0
  int32_t SettingSelectIndex_k__BackingField; // w20
  UnityEngine_GameObject_o *v51; // x0
  UILabel_o *v52; // x21
  System_String_o *v53; // x22
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  UILabel_o *warningLb; // x21
  System_String_o *v59; // x22
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  Il2CppObject *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x2
  UnityEngine_GameObject_o *v68; // x0
  System_Action_o *v69; // x20
  int v70; // [xsp+Ch] [xbp-54h] BYREF
  int v71; // [xsp+18h] [xbp-48h] BYREF
  int v72; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4B62D48 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, item);
    sub_1BE4ACC(&int_TypeInfo, v12);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v13);
    sub_1BE4ACC(&Method_RecommendSupportQuestSelectDialogComponent__Open_b__27_0__, v14);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v15);
    sub_1BE4ACC(&StringLiteral_11185/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/, v16);
    sub_1BE4ACC(&StringLiteral_11189/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/, v17);
    sub_1BE4ACC(&StringLiteral_11187/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, v18);
    sub_1BE4ACC(&StringLiteral_11188/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION_WARNING"*/, v19);
    sub_1BE4ACC(&StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/, v20);
    sub_1BE4ACC(&StringLiteral_3795/*"COMMON_CONFIRM_CANCEL"*/, v21);
    sub_1BE4ACC(&StringLiteral_11191/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/, v22);
    sub_1BE4ACC(&StringLiteral_3800/*"COMMON_CONFIRM_REMOVE"*/, v23);
    sub_1BE4ACC(&StringLiteral_11186/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/, v24);
    sub_1BE4ACC(&StringLiteral_11190/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/, v25);
    byte_4B62D48 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = action;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.onDecide,
      (int64_t)action,
      isRemove,
      (int32_t)action,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      klass = (int32_t)Instance[5].klass;
      titleLb = this->fields.titleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v30 = (System_String_o **)&StringLiteral_11190/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/;
      if ( !isRemove )
        v30 = (System_String_o **)&StringLiteral_11189/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/;
      Instance = LocalizationManager__Get(*v30, 0LL);
      if ( titleLb )
      {
        UILabel__set_text(titleLb, Instance, 0LL);
        v31 = (System_String_o **)&StringLiteral_11186/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/;
        descriptionLb = this->fields.descriptionLb;
        if ( !isRemove )
          v31 = (System_String_o **)&StringLiteral_11185/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/;
        v33 = *v31;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v34 = LocalizationManager__Get(v33, 0LL);
        v72 = klass + 1;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72, v35, v36, v37);
        Instance = System_String__Format(v34, v38, 0LL);
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
              Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11187/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, 0LL);
              if ( situationLb )
              {
                UILabel__set_text(situationLb, Instance, 0LL);
                Instance = (System_String_o *)this->fields.situationLb;
                if ( Instance )
                {
                  v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v41, -3.0, 0LL);
                  decideButtonLb = this->fields.decideButtonLb;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v43 = (System_String_o **)&StringLiteral_3800/*"COMMON_CONFIRM_REMOVE"*/;
                  if ( !isRemove )
                    v43 = (System_String_o **)&StringLiteral_3797/*"COMMON_CONFIRM_DECIDE"*/;
                  Instance = LocalizationManager__Get(*v43, 0LL);
                  if ( decideButtonLb )
                  {
                    UILabel__set_text(decideButtonLb, Instance, 0LL);
                    cancelButtonLb = this->fields.cancelButtonLb;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3795/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
                              v45);
                            Instance = (System_String_o *)this->fields.questBoardDraw;
                            if ( Instance )
                            {
                              v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                              GameObjectExtensions__SetLocalPositionY(v46, 0.0, 0LL);
                              RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(this, klass, v47);
                              RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(this, klass, v48);
                              Instance = (System_String_o *)this->fields.servantFaceIcon;
                              if ( Instance )
                              {
                                v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                                GameObjectExtensions__SetLocalPositionY(v49, -90.0, 0LL);
                                if ( item )
                                {
                                  if ( !item->fields._IsSetting_k__BackingField || isRemove )
                                    goto LABEL_47;
                                  Instance = (System_String_o *)this->fields.descriptionLb;
                                  if ( Instance )
                                  {
                                    SettingSelectIndex_k__BackingField = item->fields._SettingSelectIndex_k__BackingField;
                                    v51 = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
                                    GameObjectExtensions__SetLocalPositionY(v51, 187.0, 0LL);
                                    Instance = (System_String_o *)this->fields.descriptionLb;
                                    if ( Instance )
                                    {
                                      UILabel__set_fontSize((UILabel_o *)Instance, 22, 0LL);
                                      v52 = this->fields.situationLb;
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_11188/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION_WARNING"*/, 0LL);
                                      v71 = SettingSelectIndex_k__BackingField + 1;
                                      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v71, v54, v55, v56);
                                      Instance = System_String__Format(v53, v57, 0LL);
                                      if ( v52 )
                                      {
                                        UILabel__set_text(v52, Instance, 0LL);
                                        warningLb = this->fields.warningLb;
                                        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11191/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/, 0LL);
                                        v70 = SettingSelectIndex_k__BackingField + 1;
                                        v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v60, v61, v62);
                                        Instance = System_String__Format(v59, v63, 0LL);
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
                                                v64 = UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                                                GameObjectExtensions__SetLocalPositionY(v64, -24.0, 0LL);
                                                Instance = (System_String_o *)this->fields.situationLb;
                                                if ( Instance )
                                                {
                                                  v65 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Instance,
                                                          0LL);
                                                  GameObjectExtensions__SetLocalPositionY(v65, -18.0, 0LL);
                                                  RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
                                                    this,
                                                    SettingSelectIndex_k__BackingField,
                                                    v66);
                                                  RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(
                                                    this,
                                                    SettingSelectIndex_k__BackingField,
                                                    v67);
                                                  Instance = (System_String_o *)this->fields.servantFaceIcon;
                                                  if ( Instance )
                                                  {
                                                    v68 = UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)Instance,
                                                            0LL);
                                                    GameObjectExtensions__SetLocalPositionY(v68, -98.0, 0LL);
LABEL_47:
                                                    this->fields.state = 1;
                                                    v69 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
                                                    System_Action___ctor(
                                                      v69,
                                                      (Il2CppObject *)this,
                                                      Method_RecommendSupportQuestSelectDialogComponent__Open_b__27_0__,
                                                      0LL);
                                                    BaseDialog__Open((BaseDialog_o *)this, v69, 0, 0LL);
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
    sub_1BE4D28(Instance, v27);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x21
  int64_t Instance; // x0
  const MethodInfo *v13; // x1
  UISprite_o *equipSprite; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v17; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  int64_t v19; // x19
  void *v20; // x20
  Il2CppClass *v21; // x21
  bool v22; // w1
  UnityEngine_Object_o *v23; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B62D4A & 1) == 0 )
  {
    sub_1BE4ACC(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v10);
    byte_4B62D4A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
          (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    goto LABEL_29;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  if ( RecommendSupportSelectControl__get_SelectEquipId((RecommendSupportSelectControl_o *)Instance, v13) > 0 )
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
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = klass;
    *(_QWORD *)&v25.fields.fakeValue = monitor;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v25, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(equipSprite, v17, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( entity )
        {
          v19 = Instance;
          v21 = entity[6].klass;
          v20 = entity[6].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v26.fields.currentCryptoKey = v21;
          *(_QWORD *)&v26.fields.fakeValue = v20;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v26, 0LL);
          if ( v19 )
          {
            v22 = (int)Instance > 0;
            Instance = v19;
LABEL_39:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v22, 0LL);
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
    v23 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          v22 = 0;
          goto LABEL_39;
        }
      }
LABEL_41:
      sub_1BE4D28(Instance, v13);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x21
  int64_t Instance; // x0
  __int64 v11; // x1
  IconLabelInfo_o *v12; // x20
  int32_t klass; // w21
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B62D49 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_UserServantMaster___, *(_QWORD *)&index);
    sub_1BE4ACC(&DataManager_TypeInfo, v5);
    sub_1BE4ACC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6);
    sub_1BE4ACC(&IconLabelInfo_TypeInfo, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v8);
    byte_4B62D49 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
         (const MethodInfo_31FD9C4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v12 = (IconLabelInfo_o *)sub_1BE4D18(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v12, 0LL);
    Instance = (int64_t)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0LL);
      if ( v12 )
      {
        IconLabelInfo__Set_39043324(v12, 2, klass, Instance, 0, 0, 0, 0, 0LL);
        Instance = (int64_t)this->fields.servantFaceIcon;
        if ( Instance )
        {
          ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.servantFaceIcon;
          if ( Instance )
          {
            ServantFaceIconComponent__Set_39125412(
              (ServantFaceIconComponent_o *)Instance,
              (UserServantEntity_o *)entity,
              v12,
              0LL,
              0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1BE4D28(Instance, v11);
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
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4B62D4E & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B62D4E = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.cancelButton;
  if ( !v6 )
    sub_1BE4D28(0LL, v4);
  return UnityEngine_GameObject__get_gameObject(v6, 0LL);
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
    sub_1BE4D28(0LL, method);
  RecommendSupportQuestSelectDialogComponent__Init(_4__this, method);
  ActionExtensions__Call(this->fields.callAction, 0LL);
}