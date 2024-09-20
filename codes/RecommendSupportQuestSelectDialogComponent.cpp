void __fastcall RecommendSupportQuestSelectDialogComponent___ctor(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57414 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A57414 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent__CallOnDecide(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_onDecide; // x0
  struct System_Action_o *v5; // x19
  struct System_Action_o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = (ServantStatusBattleListViewItem_o *)&this->fields.onDecide;
  v5 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0LL;
    sub_1B88554(p_onDecide, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o *v12; // x20

  if ( (byte_4A57412 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0__Close_b__0__);
    sub_1B885B0(&RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_TypeInfo);
    byte_4A57412 = 1;
  }
  v5 = sub_1B887FC(RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callAction, v10, v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent__Init(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A57411 & 1) == 0 )
  {
    sub_1B885B0(&Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    byte_4A57411 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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

  if ( (byte_4A57410 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__);
    sub_1B885B0(&Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    byte_4A57410 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__,
      0LL);
    RecommendSupportQuestSelectDialogComponent__Close(this, v5, v6);
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__Open(
        RecommendSupportQuestSelectDialogComponent_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        bool isRemove,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *Instance; // x0
  __int64 v10; // x1
  int klass; // w26
  UILabel_o *titleLb; // x22
  System_String_o **v13; // x8
  System_String_o **v14; // x8
  UILabel_o *descriptionLb; // x22
  System_String_o *v16; // x23
  System_String_o *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *situationLb; // x22
  UnityEngine_GameObject_o *v24; // x0
  UILabel_o *decideButtonLb; // x22
  System_String_o **v26; // x8
  UILabel_o *cancelButtonLb; // x22
  const MethodInfo *v28; // x3
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  UnityEngine_GameObject_o *v32; // x0
  int32_t SettingSelectIndex_k__BackingField; // w20
  UnityEngine_GameObject_o *v34; // x0
  int v35; // w22
  UILabel_o *warningLb; // x20
  System_String_o *v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  System_Action_o *v45; // x20
  int v46; // [xsp+8h] [xbp-48h] BYREF
  int v47; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5740D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportQuestSelectDialogComponent__Open_b__27_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&StringLiteral_11019/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_11022/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_11021/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11024/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/);
    sub_1B885B0(&StringLiteral_3760/*"COMMON_CONFIRM_REMOVE"*/);
    sub_1B885B0(&StringLiteral_11020/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/);
    sub_1B885B0(&StringLiteral_11023/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/);
    byte_4A5740D = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = action;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)action, isRemove, (int32_t)action);
    Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      klass = (int)Instance[5].klass;
      titleLb = this->fields.titleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = (System_String_o **)&StringLiteral_11023/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/;
      if ( !isRemove )
        v13 = (System_String_o **)&StringLiteral_11022/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/;
      Instance = LocalizationManager__Get(*v13, 0LL);
      if ( titleLb )
      {
        UILabel__set_text(titleLb, Instance, 0LL);
        v14 = (System_String_o **)&StringLiteral_11020/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/;
        descriptionLb = this->fields.descriptionLb;
        if ( !isRemove )
          v14 = (System_String_o **)&StringLiteral_11019/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/;
        v16 = *v14;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v17 = LocalizationManager__Get(v16, 0LL);
        v47 = klass + 1;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v18, v19, v20);
        Instance = System_String__Format(v17, v21, 0LL);
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
              Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11021/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, 0LL);
              if ( situationLb )
              {
                UILabel__set_text(situationLb, Instance, 0LL);
                Instance = (System_String_o *)this->fields.situationLb;
                if ( Instance )
                {
                  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v24, -3.0, 0LL);
                  decideButtonLb = this->fields.decideButtonLb;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v26 = (System_String_o **)&StringLiteral_3760/*"COMMON_CONFIRM_REMOVE"*/;
                  if ( !isRemove )
                    v26 = (System_String_o **)&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/;
                  Instance = LocalizationManager__Get(*v26, 0LL);
                  if ( decideButtonLb )
                  {
                    UILabel__set_text(decideButtonLb, Instance, 0LL);
                    cancelButtonLb = this->fields.cancelButtonLb;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
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
                              v28);
                            Instance = (System_String_o *)this->fields.questBoardDraw;
                            if ( Instance )
                            {
                              v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                              GameObjectExtensions__SetLocalPositionY(v29, 0.0, 0LL);
                              RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(this, v30);
                              RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(this, v31);
                              Instance = (System_String_o *)this->fields.servantFaceIcon;
                              if ( Instance )
                              {
                                v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                                GameObjectExtensions__SetLocalPositionY(v32, -90.0, 0LL);
                                if ( item )
                                {
                                  if ( !item->fields._IsSetting_k__BackingField || isRemove )
                                    goto LABEL_46;
                                  Instance = (System_String_o *)this->fields.descriptionLb;
                                  if ( Instance )
                                  {
                                    SettingSelectIndex_k__BackingField = item->fields._SettingSelectIndex_k__BackingField;
                                    v34 = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)Instance,
                                            0LL);
                                    GameObjectExtensions__SetLocalPositionY(v34, 187.0, 0LL);
                                    Instance = (System_String_o *)this->fields.descriptionLb;
                                    if ( Instance )
                                    {
                                      v35 = SettingSelectIndex_k__BackingField + 1;
                                      UILabel__set_fontSize((UILabel_o *)Instance, 22, 0LL);
                                      warningLb = this->fields.warningLb;
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      v37 = LocalizationManager__Get((System_String_o *)StringLiteral_11024/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/, 0LL);
                                      v46 = v35;
                                      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v38, v39, v40);
                                      Instance = System_String__Format(v37, v41, 0LL);
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
                                              v42 = UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)Instance,
                                                      0LL);
                                              GameObjectExtensions__SetLocalPositionY(v42, -24.0, 0LL);
                                              Instance = (System_String_o *)this->fields.situationLb;
                                              if ( Instance )
                                              {
                                                v43 = UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0LL);
                                                GameObjectExtensions__SetLocalPositionY(v43, -18.0, 0LL);
                                                Instance = (System_String_o *)this->fields.servantFaceIcon;
                                                if ( Instance )
                                                {
                                                  v44 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Instance,
                                                          0LL);
                                                  GameObjectExtensions__SetLocalPositionY(v44, -98.0, 0LL);
LABEL_46:
                                                  this->fields.state = 1;
                                                  v45 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                                  System_Action___ctor(
                                                    v45,
                                                    (Il2CppObject *)this,
                                                    Method_RecommendSupportQuestSelectDialogComponent__Open_b__27_0__,
                                                    0LL);
                                                  BaseDialog__Open((BaseDialog_o *)this, v45, 0, 0LL);
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
    sub_1B8880C(Instance, v10);
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
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  UISprite_o *equipSprite; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v9; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  int64_t v11; // x19
  void *v12; // x20
  Il2CppClass *v13; // x21
  bool v14; // w1
  UnityEngine_Object_o *v15; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A5740F & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A5740F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = RecommendSupportSelectControl__get_SelectEquipId((RecommendSupportSelectControl_o *)Instance, v5);
  if ( !Master_object )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          Instance,
          (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    goto LABEL_28;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  if ( RecommendSupportSelectControl__get_SelectEquipId((RecommendSupportSelectControl_o *)Instance, v5) > 0 )
  {
    Instance = (int64_t)this->fields.noneEquipSprite;
    if ( !Instance )
      goto LABEL_40;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_40;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    if ( !entity )
      goto LABEL_40;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = klass;
    *(_QWORD *)&v17.fields.fakeValue = monitor;
    v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(equipSprite, v9, 0LL);
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
          v11 = Instance;
          v13 = entity[6].klass;
          v12 = entity[6].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v18.fields.currentCryptoKey = v13;
          *(_QWORD *)&v18.fields.fakeValue = v12;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
          if ( v11 )
          {
            v14 = (int)Instance > 0;
            Instance = v11;
LABEL_38:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v14, 0LL);
            return;
          }
        }
      }
      goto LABEL_40;
    }
  }
  else
  {
LABEL_28:
    Instance = (int64_t)this->fields.noneEquipSprite;
    if ( !Instance )
      goto LABEL_40;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (int64_t)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_40;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    v15 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          v14 = 0;
          goto LABEL_38;
        }
      }
LABEL_40:
      sub_1B8880C(Instance, v5);
    }
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  int64_t Instance; // x0
  const MethodInfo *v5; // x1
  IconLabelInfo_o *v6; // x20
  int32_t klass; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5740E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A5740E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = RecommendSupportSelectControl__get_SelectServantId((RecommendSupportSelectControl_o *)Instance, v5);
  if ( !Master_object )
    goto LABEL_16;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         Instance,
         (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v6 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v6, 0LL);
    Instance = (int64_t)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0LL);
      if ( v6 )
      {
        IconLabelInfo__Set_38140136(v6, 2, klass, Instance, 0, 0, 0, 0, 0LL);
        Instance = (int64_t)this->fields.servantFaceIcon;
        if ( Instance )
        {
          ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.servantFaceIcon;
          if ( Instance )
          {
            ServantFaceIconComponent__Set_38220260(
              (ServantFaceIconComponent_o *)Instance,
              (UserServantEntity_o *)entity,
              v6,
              0LL,
              0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1B8880C(Instance, v5);
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

  if ( (byte_4A57413 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57413 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
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
    sub_1B8880C(0LL, method);
  RecommendSupportQuestSelectDialogComponent__Init(_4__this, method);
  ActionExtensions__Call(this->fields.callAction, 0LL);
}