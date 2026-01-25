void RecommendSupportQuestSelectDialogComponent___ctor(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEA440 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CEA440 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecommendSupportQuestSelectDialogComponent__CallOnDecide(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_onDecide; // x0
  struct System_Action_o *v9; // x19
  struct System_Action_o *onDecide; // t1

  onDecide = this->fields.onDecide;
  p_onDecide = (GrandQuestFolderBoardItem_o *)&this->fields.onDecide;
  v9 = onDecide;
  if ( onDecide )
  {
    p_onDecide->klass = 0;
    sub_1C7BA8C(p_onDecide, 0, v2, v3, v4, v5, v6, v7);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x20

  if ( (byte_4CEA43E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0__Close_b__0__);
    sub_1C7BAE8(&RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_TypeInfo);
    byte_4CEA43E = 1;
  }
  v5 = sub_1C7BD34(RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C7BD40(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callAction;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callAction, v14, v15, v16, v17, v18, v19);
  this->fields.state = 4;
  v20 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0__Close_b__0__,
    0);
  BaseDialog__Close((BaseDialog_o *)this, v20, 0);
}


void RecommendSupportQuestSelectDialogComponent__Init(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
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

  if ( (byte_4CEA43D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    byte_4CEA43D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
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
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4CEA43C & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__);
    sub_1C7BAE8(&Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    byte_4CEA43C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__, 0);
    RecommendSupportQuestSelectDialogComponent__Close(this, v5, v6);
  }
}


void RecommendSupportQuestSelectDialogComponent__Open(
        RecommendSupportQuestSelectDialogComponent_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        bool isRemove,
        System_Action_o *action,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_String_o *Instance; // x0
  __int64 v13; // x1
  int32_t klass; // w22
  UILabel_o *titleLb; // x23
  System_String_o **v16; // x8
  System_String_o **v17; // x8
  UILabel_o *descriptionLb; // x23
  System_String_o *v19; // x24
  System_String_o *v20; // x24
  Il2CppObject *v21; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *situationLb; // x23
  UnityEngine_GameObject_o *v24; // x0
  UILabel_o *decideButtonLb; // x23
  System_String_o **v26; // x8
  UILabel_o *cancelButtonLb; // x23
  const MethodInfo *v28; // x3
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  UnityEngine_GameObject_o *v32; // x0
  int32_t SettingSelectIndex_k__BackingField; // w20
  UnityEngine_GameObject_o *v34; // x0
  UILabel_o *v35; // x21
  System_String_o *v36; // x22
  Il2CppObject *v37; // x0
  UILabel_o *warningLb; // x21
  System_String_o *v39; // x22
  Il2CppObject *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  UnityEngine_GameObject_o *v45; // x0
  System_Action_o *v46; // x20
  int v47; // [xsp+Ch] [xbp-54h] BYREF
  int v48; // [xsp+18h] [xbp-48h] BYREF
  int v49; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4CEA439 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_RecommendSupportQuestSelectDialogComponent__Open_b__27_0__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C7BAE8(&StringLiteral_11085/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/);
    sub_1C7BAE8(&StringLiteral_11089/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_11087/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/);
    sub_1C7BAE8(&StringLiteral_11088/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION_WARNING"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_11091/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/);
    sub_1C7BAE8(&StringLiteral_3695/*"COMMON_CONFIRM_REMOVE"*/);
    sub_1C7BAE8(&StringLiteral_11086/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/);
    sub_1C7BAE8(&StringLiteral_11090/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/);
    byte_4CEA439 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = action;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.onDecide,
      (int32_t)action,
      isRemove,
      (int32_t)action,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( Instance )
    {
      klass = (int32_t)Instance[5].klass;
      titleLb = this->fields.titleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = (System_String_o **)&StringLiteral_11090/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/;
      if ( !isRemove )
        v16 = (System_String_o **)&StringLiteral_11089/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/;
      Instance = LocalizationManager__Get(*v16, 0);
      if ( titleLb )
      {
        UILabel__set_text(titleLb, Instance, 0);
        v17 = (System_String_o **)&StringLiteral_11086/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/;
        descriptionLb = this->fields.descriptionLb;
        if ( !isRemove )
          v17 = (System_String_o **)&StringLiteral_11085/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/;
        v19 = *v17;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v20 = LocalizationManager__Get(v19, 0);
        v49 = klass + 1;
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
        Instance = System_String__Format(v20, v21, 0);
        if ( descriptionLb )
        {
          UILabel__set_text(descriptionLb, Instance, 0);
          Instance = (System_String_o *)this->fields.descriptionLb;
          if ( Instance )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            GameObjectExtensions__SetLocalPositionY(gameObject, 174.0, 0);
            Instance = (System_String_o *)this->fields.descriptionLb;
            if ( Instance )
            {
              UILabel__set_fontSize((UILabel_o *)Instance, 24, 0);
              situationLb = this->fields.situationLb;
              Instance = LocalizationManager__Get((System_String_o *)StringLiteral_11087/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, 0);
              if ( situationLb )
              {
                UILabel__set_text(situationLb, Instance, 0);
                Instance = (System_String_o *)this->fields.situationLb;
                if ( Instance )
                {
                  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                  GameObjectExtensions__SetLocalPositionY(v24, -3.0, 0);
                  decideButtonLb = this->fields.decideButtonLb;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v26 = (System_String_o **)&StringLiteral_3695/*"COMMON_CONFIRM_REMOVE"*/;
                  if ( !isRemove )
                    v26 = (System_String_o **)&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/;
                  Instance = LocalizationManager__Get(*v26, 0);
                  if ( decideButtonLb )
                  {
                    UILabel__set_text(decideButtonLb, Instance, 0);
                    cancelButtonLb = this->fields.cancelButtonLb;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0);
                    if ( cancelButtonLb )
                    {
                      UILabel__set_text(cancelButtonLb, Instance, 0);
                      Instance = (System_String_o *)this->fields.warningLb;
                      if ( Instance )
                      {
                        Instance = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0);
                        if ( Instance )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
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
                              v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                              GameObjectExtensions__SetLocalPositionY(v29, 0.0, 0);
                              RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(this, klass, v30);
                              RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(this, klass, v31);
                              Instance = (System_String_o *)this->fields.servantFaceIcon;
                              if ( Instance )
                              {
                                v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                                GameObjectExtensions__SetLocalPositionY(v32, -90.0, 0);
                                if ( item )
                                {
                                  if ( !item->fields._IsSetting_k__BackingField || isRemove )
                                    goto LABEL_47;
                                  Instance = (System_String_o *)this->fields.descriptionLb;
                                  if ( Instance )
                                  {
                                    SettingSelectIndex_k__BackingField = item->fields._SettingSelectIndex_k__BackingField;
                                    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
                                    GameObjectExtensions__SetLocalPositionY(v34, 187.0, 0);
                                    Instance = (System_String_o *)this->fields.descriptionLb;
                                    if ( Instance )
                                    {
                                      UILabel__set_fontSize((UILabel_o *)Instance, 22, 0);
                                      v35 = this->fields.situationLb;
                                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11088/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION_WARNING"*/, 0);
                                      v48 = SettingSelectIndex_k__BackingField + 1;
                                      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
                                      Instance = System_String__Format(v36, v37, 0);
                                      if ( v35 )
                                      {
                                        UILabel__set_text(v35, Instance, 0);
                                        warningLb = this->fields.warningLb;
                                        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_11091/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_WARNING"*/, 0);
                                        v47 = SettingSelectIndex_k__BackingField + 1;
                                        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
                                        Instance = System_String__Format(v39, v40, 0);
                                        if ( warningLb )
                                        {
                                          UILabel__set_text(warningLb, Instance, 0);
                                          Instance = (System_String_o *)this->fields.warningLb;
                                          if ( Instance )
                                          {
                                            Instance = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)Instance,
                                                                            0);
                                            if ( Instance )
                                            {
                                              UnityEngine_GameObject__SetActive(
                                                (UnityEngine_GameObject_o *)Instance,
                                                1,
                                                0);
                                              Instance = (System_String_o *)this->fields.questBoardDraw;
                                              if ( Instance )
                                              {
                                                v41 = UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)Instance,
                                                        0);
                                                GameObjectExtensions__SetLocalPositionY(v41, -24.0, 0);
                                                Instance = (System_String_o *)this->fields.situationLb;
                                                if ( Instance )
                                                {
                                                  v42 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)Instance,
                                                          0);
                                                  GameObjectExtensions__SetLocalPositionY(v42, -18.0, 0);
                                                  RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
                                                    this,
                                                    SettingSelectIndex_k__BackingField,
                                                    v43);
                                                  RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(
                                                    this,
                                                    SettingSelectIndex_k__BackingField,
                                                    v44);
                                                  Instance = (System_String_o *)this->fields.servantFaceIcon;
                                                  if ( Instance )
                                                  {
                                                    v45 = UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)Instance,
                                                            0);
                                                    GameObjectExtensions__SetLocalPositionY(v45, -98.0, 0);
LABEL_47:
                                                    this->fields.state = 1;
                                                    v46 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
                                                    System_Action___ctor(
                                                      v46,
                                                      (Il2CppObject *)this,
                                                      Method_RecommendSupportQuestSelectDialogComponent__Open_b__27_0__,
                                                      0);
                                                    BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0, 0);
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
    sub_1C7BD40(Instance, v13);
  }
}


void RecommendSupportQuestSelectDialogComponent__SerializeFieldNotNullCheck(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(
        RecommendSupportQuestSelectDialogComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  int64_t Instance; // x0
  __int64 v7; // x1
  char v8; // w20
  UISprite_o *equipSprite; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v12; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  int64_t v14; // x19
  void *v15; // x20
  Il2CppClass *v16; // x21
  bool v17; // w1
  UnityEngine_Object_o *v18; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4CEA43B & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA43B = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = *(_QWORD *)(Instance + 112);
  if ( !Instance )
    goto LABEL_37;
  Instance = RecommendSupportData__GetEquip((RecommendSupportData_o *)Instance, index, 0);
  if ( !Master_object )
    goto LABEL_37;
  Instance = DataMasterBase_object__object__long___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               &entity,
               Instance,
               (const MethodInfo_34308A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( !this->fields.noneEquipSprite )
    goto LABEL_37;
  v8 = Instance;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.noneEquipSprite, 0);
  if ( !Instance )
    goto LABEL_37;
  if ( (v8 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = (int64_t)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_37;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    if ( !entity )
      goto LABEL_37;
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v20.fields.currentCryptoKey = klass;
    *(_QWORD *)&v20.fields.fakeValue = monitor;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v20, 0);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(equipSprite, v12, 0, 0);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( entity )
        {
          v14 = Instance;
          v16 = entity[6].klass;
          v15 = entity[6].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v21.fields.currentCryptoKey = v16;
          *(_QWORD *)&v21.fields.fakeValue = v15;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49449776(v21, 0);
          if ( v14 )
          {
            v17 = (int)Instance > 0;
            Instance = v14;
LABEL_35:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v17, 0);
            return;
          }
        }
      }
      goto LABEL_37;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (int64_t)this->fields.equipSprite;
    if ( !Instance )
      goto LABEL_37;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    v18 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v18, 0, 0) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( Instance )
        {
          v17 = 0;
          goto LABEL_35;
        }
      }
LABEL_37:
      sub_1C7BD40(Instance, v7);
    }
  }
}


void RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
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

  if ( (byte_4CEA43A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C7BAE8(&IconLabelInfo_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4CEA43A = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = *(_QWORD *)(Instance + 112);
  if ( !Instance )
    goto LABEL_16;
  Instance = RecommendSupportData__GetServant((RecommendSupportData_o *)Instance, index, 0);
  if ( !Master_object )
    goto LABEL_16;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         Instance,
         (const MethodInfo_34308A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v8 = (IconLabelInfo_o *)sub_1C7BD34(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v8, 0);
    Instance = (int64_t)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0);
      if ( v8 )
      {
        IconLabelInfo__Set_41483756(v8, 2, klass, Instance, 0, 0, 0, 0, 0, 0);
        Instance = (int64_t)this->fields.servantFaceIcon;
        if ( Instance )
        {
          ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)Instance, 1, 0);
          Instance = (int64_t)this->fields.servantFaceIcon;
          if ( Instance )
          {
            ServantFaceIconComponent__Set_41658632(
              (ServantFaceIconComponent_o *)Instance,
              (UserServantEntity_o *)entity,
              v8,
              0,
              0);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1C7BD40(Instance, v7);
  }
  Instance = (int64_t)this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_16;
  ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)Instance, 0);
}


void RecommendSupportQuestSelectDialogComponent___Open_b__27_0(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *RecommendSupportQuestSelectDialogComponent__get_closeBtnObject(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4CEA43F & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEA43F = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = this->fields.cancelButton;
  if ( !v6 )
    sub_1C7BD40(0, v4);
  return UnityEngine_GameObject__get_gameObject(v6, 0);
}


void RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0___ctor(
        RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0___Close_b__0(
        RecommendSupportQuestSelectDialogComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectDialogComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C7BD40(0, method);
  RecommendSupportQuestSelectDialogComponent__Init(_4__this, method);
  ActionExtensions__Call(this->fields.callAction, 0);
}