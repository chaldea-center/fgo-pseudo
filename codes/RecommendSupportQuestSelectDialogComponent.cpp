void __fastcall RecommendSupportQuestSelectDialogComponent___ctor(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A04F40 & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A04F40 = 1;
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
    sub_1B68678(p_onDecide, 0, v2, v3);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_o *v14; // x20

  if ( (byte_4A04F3E & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callAction);
    sub_1B686D4(&Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0__Close_b__0__, v5);
    sub_1B686D4(&RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0_TypeInfo, v6);
    byte_4A04F3E = 1;
  }
  v7 = sub_1B68920(RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B68930(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = callAction;
  sub_1B68678((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callAction, v12, v13);
  this->fields.state = 4;
  v14 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent__Init(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B68930(0LL, v4);
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

  if ( (byte_4A04F3D & 1) == 0 )
  {
    sub_1B686D4(&Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__, method);
    byte_4A04F3D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B686EC(Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
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

  if ( (byte_4A04F3C & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, method);
    sub_1B686D4(&Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__, v3);
    sub_1B686D4(&Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__, v4);
    byte_4A04F3C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B686EC(Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B686B8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    v7 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__,
      0LL);
    RecommendSupportQuestSelectDialogComponent__Close(this, v7, v8);
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__Open(
        RecommendSupportQuestSelectDialogComponent_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        bool isRemove,
        System_Action_o *action,
        const MethodInfo *method)
{
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
  System_String_o *Instance; // x0
  __int64 v22; // x1
  int klass; // w25
  UILabel_o *titleLb; // x22
  System_String_o **v25; // x8
  System_String_o **v26; // x8
  UILabel_o *descriptionLb; // x22
  System_String_o *v28; // x23
  System_String_o *v29; // x23
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  UILabel_o *situationLb; // x22
  UILabel_o *decideButtonLb; // x22
  System_String_o **v36; // x8
  UILabel_o *cancelButtonLb; // x21
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x1
  System_Action_o *v41; // x20
  int v42; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A04F39 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, item);
    sub_1B686D4(&int_TypeInfo, v9);
    sub_1B686D4(&LocalizationManager_TypeInfo, v10);
    sub_1B686D4(&Method_RecommendSupportQuestSelectDialogComponent__Open_b__16_0__, v11);
    sub_1B686D4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v12);
    sub_1B686D4(&StringLiteral_10972/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/, v13);
    sub_1B686D4(&StringLiteral_10975/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/, v14);
    sub_1B686D4(&StringLiteral_10974/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, v15);
    sub_1B686D4(&StringLiteral_3733/*"COMMON_CONFIRM_DECIDE"*/, v16);
    sub_1B686D4(&StringLiteral_3731/*"COMMON_CONFIRM_CANCEL"*/, v17);
    sub_1B686D4(&StringLiteral_3736/*"COMMON_CONFIRM_REMOVE"*/, v18);
    sub_1B686D4(&StringLiteral_10973/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/, v19);
    sub_1B686D4(&StringLiteral_10976/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/, v20);
    byte_4A04F39 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = action;
    sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)action, isRemove, (int32_t)action);
    Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    klass = (int)Instance[5].klass;
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = (System_String_o **)&StringLiteral_10976/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE_REMOVE"*/;
    if ( !isRemove )
      v25 = (System_String_o **)&StringLiteral_10975/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/;
    Instance = LocalizationManager__Get(*v25, 0LL);
    if ( !titleLb )
      goto LABEL_27;
    UILabel__set_text(titleLb, Instance, 0LL);
    v26 = (System_String_o **)&StringLiteral_10973/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION_REMOVE"*/;
    descriptionLb = this->fields.descriptionLb;
    if ( !isRemove )
      v26 = (System_String_o **)&StringLiteral_10972/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/;
    v28 = *v26;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get(v28, 0LL);
    v42 = klass + 1;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v30, v31, v32);
    Instance = System_String__Format(v29, v33, 0LL);
    if ( !descriptionLb )
      goto LABEL_27;
    UILabel__set_text(descriptionLb, Instance, 0LL);
    situationLb = this->fields.situationLb;
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_10974/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, 0LL);
    if ( !situationLb )
      goto LABEL_27;
    UILabel__set_text(situationLb, Instance, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v36 = (System_String_o **)&StringLiteral_3736/*"COMMON_CONFIRM_REMOVE"*/;
    if ( !isRemove )
      v36 = (System_String_o **)&StringLiteral_3733/*"COMMON_CONFIRM_DECIDE"*/;
    Instance = LocalizationManager__Get(*v36, 0LL);
    if ( !decideButtonLb )
      goto LABEL_27;
    UILabel__set_text(decideButtonLb, Instance, 0LL);
    cancelButtonLb = this->fields.cancelButtonLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3731/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !cancelButtonLb
      || (UILabel__set_text(cancelButtonLb, Instance, 0LL),
          (Instance = (System_String_o *)this->fields.questBoardDraw) == 0LL) )
    {
LABEL_27:
      sub_1B68930(Instance, v22);
    }
    RecommendSupportQuestBoardListViewItemDraw__SetItemOfQuest(
      (RecommendSupportQuestBoardListViewItemDraw_o *)Instance,
      item,
      0,
      v38);
    RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(this, v39);
    RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(this, v40);
    this->fields.state = 1;
    v41 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(
      v41,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestSelectDialogComponent__Open_b__16_0__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x20
  int64_t Instance; // x0
  const MethodInfo *v11; // x1
  UISprite_o *equipSprite; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v15; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  int64_t v17; // x19
  void *v18; // x20
  Il2CppClass *v19; // x21
  bool v20; // w1
  UnityEngine_Object_o *v21; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4A04F3B & 1) == 0 )
  {
    sub_1B686D4(&AtlasManager_TypeInfo, method);
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1B686D4(&DataManager_TypeInfo, v4);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v6);
    sub_1B686D4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B686D4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v8);
    byte_4A04F3B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = RecommendSupportSelectControl__get_SelectEquipId((RecommendSupportSelectControl_o *)Instance, v11);
  if ( !Master_object )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          Instance,
          (const MethodInfo_30E46C0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    goto LABEL_28;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  if ( RecommendSupportSelectControl__get_SelectEquipId((RecommendSupportSelectControl_o *)Instance, v11) > 0 )
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
    *(_QWORD *)&v23.fields.currentCryptoKey = klass;
    *(_QWORD *)&v23.fields.fakeValue = monitor;
    v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v23, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(equipSprite, v15, 0LL);
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
          v17 = Instance;
          v19 = entity[6].klass;
          v18 = entity[6].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v24.fields.currentCryptoKey = v19;
          *(_QWORD *)&v24.fields.fakeValue = v18;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46239416(v24, 0LL);
          if ( v17 )
          {
            v20 = (int)Instance > 0;
            Instance = v17;
LABEL_38:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v20, 0LL);
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
    v21 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          v20 = 0;
          goto LABEL_38;
        }
      }
LABEL_40:
      sub_1B68930(Instance, v11);
    }
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  int64_t Instance; // x0
  const MethodInfo *v9; // x1
  IconLabelInfo_o *v10; // x20
  int32_t klass; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A04F3A & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B686D4(&DataManager_TypeInfo, v3);
    sub_1B686D4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B686D4(&IconLabelInfo_TypeInfo, v5);
    sub_1B686D4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    byte_4A04F3A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36F769C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = RecommendSupportSelectControl__get_SelectServantId((RecommendSupportSelectControl_o *)Instance, v9);
  if ( !Master_object )
    goto LABEL_16;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         Instance,
         (const MethodInfo_30E46C0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v10 = (IconLabelInfo_o *)sub_1B68920(IconLabelInfo_TypeInfo);
    IconLabelInfo___ctor(v10, 0LL);
    Instance = (int64_t)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0LL);
      if ( v10 )
      {
        IconLabelInfo__Set_37887348(v10, 2, klass, Instance, 0, 0, 0, 0, 0LL);
        Instance = (int64_t)this->fields.servantFaceIcon;
        if ( Instance )
        {
          ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.servantFaceIcon;
          if ( Instance )
          {
            ServantFaceIconComponent__Set_37966888(
              (ServantFaceIconComponent_o *)Instance,
              (UserServantEntity_o *)entity,
              v10,
              0LL,
              0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1B68930(Instance, v9);
  }
  Instance = (int64_t)this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_16;
  ServantFaceIconComponent__NoMount_Support((ServantFaceIconComponent_o *)Instance, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent___Open_b__16_0(
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

  if ( (byte_4A04F3F & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    byte_4A04F3F = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = this->fields.cancelButton;
  if ( !v6 )
    sub_1B68930(0LL, v4);
  return UnityEngine_GameObject__get_gameObject(v6, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0___ctor(
        RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0___Close_b__0(
        RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectDialogComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B68930(0LL, method);
  RecommendSupportQuestSelectDialogComponent__Init(_4__this, method);
  ActionExtensions__Call(this->fields.callAction, 0LL);
}