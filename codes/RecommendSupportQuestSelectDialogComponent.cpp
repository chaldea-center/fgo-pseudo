void __fastcall RecommendSupportQuestSelectDialogComponent___ctor(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BD86A2 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BD86A2 = 1;
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
    sub_1C21DDC(p_onDecide, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *v20; // x20

  if ( (byte_4BD86A0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0__Close_b__0__);
    sub_1C21E38(&RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_TypeInfo);
    byte_4BD86A0 = 1;
  }
  v5 = sub_1C22084(RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callAction;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callAction, v14, v15, v16, v17, v18, v19);
  this->fields.state = 4;
  v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent__Init(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v4);
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

  if ( (byte_4BD869F & 1) == 0 )
  {
    sub_1C21E38(&Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    byte_4BD869F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    RecommendSupportQuestSelectDialogComponent__Close(this, 0LL, v5);
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__OnClickDecide(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4BD869E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__);
    sub_1C21E38(&Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    byte_4BD869E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__,
      0LL);
    RecommendSupportQuestSelectDialogComponent__Close(this, v5, v6);
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
  System_String_o *Instance; // x0
  __int64 v13; // x1
  int32_t klass; // w22
  UILabel_o *titleLb; // x23
  System_String_o **v16; // x8
  System_String_o **v17; // x8
  UILabel_o *descriptionLb; // x23
  System_String_o *v19; // x24
  System_String_o *v20; // x24
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *situationLb; // x23
  UnityEngine_GameObject_o *v27; // x0
  UILabel_o *decideButtonLb; // x23
  System_String_o **v29; // x8
  UILabel_o *cancelButtonLb; // x23
  UnityEngine_GameObject_o *v31; // x0
  const MethodInfo *v32; // x2
  const MethodInfo *v33; // x2
  UnityEngine_GameObject_o *v34; // x0
  int32_t SettingSelectIndex_k__BackingField; // w20
  UnityEngine_GameObject_o *v36; // x0
  UILabel_o *v37; // x21
  System_String_o *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  UILabel_o *warningLb; // x21
  System_String_o *v44; // x22
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  UnityEngine_GameObject_o *v53; // x0
  System_Action_o *v54; // x20
  int v55; // [xsp+Ch] [xbp-54h] BYREF
  int v56; // [xsp+18h] [xbp-48h] BYREF
  int v57; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4BD869B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_RecommendSupportQuestSelectDialogComponent__Open_b__27_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C21E38(&StringLiteral_11232/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/);
    sub_1C21E38(&StringLiteral_11236/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/);
    sub_1C21E38(&StringLiteral_11234/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/);
    sub_1C21E38(&StringLiteral_11235/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION_WARNING"*/);
    sub_1C21E38(&StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C21E38(&StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C21E38(&StringLiteral_11238/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/);
    sub_1C21E38(&StringLiteral_3815/*"COMMON_CONFIRM_REMOVE"*/);
    sub_1C21E38(&StringLiteral_11233/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/);
    sub_1C21E38(&StringLiteral_11237/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/);
    byte_4BD869B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = action;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.onDecide,
      (int64_t)action,
      isRemove,
      (int32_t)action,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      klass = (int32_t)Instance[5].klass;
      titleLb = this->fields.titleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = (System_String_o **)&StringLiteral_11237/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/;
      if ( !isRemove )
        v16 = (System_String_o **)&StringLiteral_11236/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/;
      Instance = LocalizationManager__Get(*v16, 0LL);
      if ( titleLb )
      {
        UILabel__set_text(titleLb, Instance, 0LL);
        v17 = (System_String_o **)&StringLiteral_11233/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/;
        descriptionLb = this->fields.descriptionLb;
        if ( !isRemove )
          v17 = (System_String_o **)&StringLiteral_11232/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/;
        v19 = *v17;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v20 = LocalizationManager__Get(v19, 0LL);
        v57 = klass + 1;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v21, v22, v23);
        Instance = System_String__Format(v20, v24, 0LL);
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
              Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11234/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, 0LL);
              if ( situationLb )
              {
                UILabel__set_text(situationLb, Instance, 0LL);
                Instance = (System_String_o *)this->fields.situationLb;
                if ( Instance )
                {
                  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v27, -3.0, 0LL);
                  decideButtonLb = this->fields.decideButtonLb;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v29 = (System_String_o **)&StringLiteral_3815/*"COMMON_CONFIRM_REMOVE"*/;
                  if ( !isRemove )
                    v29 = (System_String_o **)&StringLiteral_3812/*"COMMON_CONFIRM_DECIDE"*/;
                  Instance = LocalizationManager__Get(*v29, 0LL);
                  if ( decideButtonLb )
                  {
                    UILabel__set_text(decideButtonLb, Instance, 0LL);
                    cancelButtonLb = this->fields.cancelButtonLb;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
                              0LL);
                            Instance = (System_String_o *)this->fields.questBoardDraw;
                            if ( Instance )
                            {
                              v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                              GameObjectExtensions__SetLocalPositionY(v31, 0.0, 0LL);
                              RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(this, klass, v32);
                              RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(this, klass, v33);
                              Instance = (System_String_o *)this->fields.servantFaceIcon;
                              if ( Instance )
                              {
                                v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                                GameObjectExtensions__SetLocalPositionY(v34, -90.0, 0LL);
                                if ( item )
                                {
                                  if ( !item->fields._IsSetting_k__BackingField || isRemove )
                                    goto LABEL_47;
                                  Instance = (System_String_o *)this->fields.descriptionLb;
                                  if ( Instance )
                                  {
                                    SettingSelectIndex_k__BackingField = item->fields._SettingSelectIndex_k__BackingField;
                                    v36 = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
                                    GameObjectExtensions__SetLocalPositionY(v36, 187.0, 0LL);
                                    Instance = (System_String_o *)this->fields.descriptionLb;
                                    if ( Instance )
                                    {
                                      UILabel__set_fontSize((UILabel_o *)Instance, 22, 0LL);
                                      v37 = this->fields.situationLb;
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_11235/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION_WARNING"*/, 0LL);
                                      v56 = SettingSelectIndex_k__BackingField + 1;
                                      v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v39, v40, v41);
                                      Instance = System_String__Format(v38, v42, 0LL);
                                      if ( v37 )
                                      {
                                        UILabel__set_text(v37, Instance, 0LL);
                                        warningLb = this->fields.warningLb;
                                        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_11238/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/, 0LL);
                                        v55 = SettingSelectIndex_k__BackingField + 1;
                                        v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v45, v46, v47);
                                        Instance = System_String__Format(v44, v48, 0LL);
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
                                                v49 = UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                                                GameObjectExtensions__SetLocalPositionY(v49, -24.0, 0LL);
                                                Instance = (System_String_o *)this->fields.situationLb;
                                                if ( Instance )
                                                {
                                                  v50 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Instance,
                                                          0LL);
                                                  GameObjectExtensions__SetLocalPositionY(v50, -18.0, 0LL);
                                                  RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
                                                    this,
                                                    SettingSelectIndex_k__BackingField,
                                                    v51);
                                                  RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(
                                                    this,
                                                    SettingSelectIndex_k__BackingField,
                                                    v52);
                                                  Instance = (System_String_o *)this->fields.servantFaceIcon;
                                                  if ( Instance )
                                                  {
                                                    v53 = UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)Instance,
                                                            0LL);
                                                    GameObjectExtensions__SetLocalPositionY(v53, -98.0, 0LL);
LABEL_47:
                                                    this->fields.state = 1;
                                                    v54 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                                                    System_Action___ctor(
                                                      v54,
                                                      (Il2CppObject *)this,
                                                      Method_RecommendSupportQuestSelectDialogComponent__Open_b__27_0__,
                                                      0LL);
                                                    BaseDialog__Open((BaseDialog_o *)this, v54, 0, 0LL);
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
    sub_1C22094(Instance, v13);
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__SerializeFieldNotNullCheck(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(
        RecommendSupportQuestSelectDialogComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t Instance; // x0
  const MethodInfo *v7; // x1
  UISprite_o *equipSprite; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v11; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  int64_t v13; // x19
  void *v14; // x20
  Il2CppClass *v15; // x21
  bool v16; // w1
  UnityEngine_Object_o *v17; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4BD869D & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4BD869D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
          (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    goto LABEL_29;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  if ( RecommendSupportSelectControl__get_SelectEquipId((RecommendSupportSelectControl_o *)Instance, v7) > 0 )
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
    *(_QWORD *)&v19.fields.currentCryptoKey = klass;
    *(_QWORD *)&v19.fields.fakeValue = monitor;
    v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v19, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(equipSprite, v11, 0LL, 0LL);
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
          v13 = Instance;
          v15 = entity[6].klass;
          v14 = entity[6].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v20.fields.currentCryptoKey = v15;
          *(_QWORD *)&v20.fields.fakeValue = v14;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v20, 0LL);
          if ( v13 )
          {
            v16 = (int)Instance > 0;
            Instance = v13;
LABEL_39:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v16, 0LL);
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
    v17 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          v16 = 0;
          goto LABEL_39;
        }
      }
LABEL_41:
      sub_1C22094(Instance, v7);
    }
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
        RecommendSupportQuestSelectDialogComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t Instance; // x0
  __int64 v7; // x1
  IconLabelInfo_o *v8; // x20
  int32_t klass; // w21
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BD869C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4BD869C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
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
         (const MethodInfo_325E370 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v8 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v8, 0LL);
    Instance = (int64_t)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0LL);
      if ( v8 )
      {
        IconLabelInfo__Set_39381772(v8, 2, klass, Instance, 0, 0, 0, 0, 0LL);
        Instance = (int64_t)this->fields.servantFaceIcon;
        if ( Instance )
        {
          ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.servantFaceIcon;
          if ( Instance )
          {
            ServantFaceIconComponent__Set_39464008(
              (ServantFaceIconComponent_o *)Instance,
              (UserServantEntity_o *)entity,
              v8,
              0LL,
              0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1C22094(Instance, v7);
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

  if ( (byte_4BD86A1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD86A1 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.cancelButton;
  if ( !v6 )
    sub_1C22094(0LL, v4);
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
    sub_1C22094(0LL, method);
  RecommendSupportQuestSelectDialogComponent__Init(_4__this, method);
  ActionExtensions__Call(this->fields.callAction, 0LL);
}