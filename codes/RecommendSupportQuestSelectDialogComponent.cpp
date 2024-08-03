void __fastcall RecommendSupportQuestSelectDialogComponent___ctor(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49F8741 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49F8741 = 1;
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
    sub_1B6406C(p_onDecide, 0, v2, v3);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20

  if ( (byte_49F873F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callAction);
    sub_1B640C8(&Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0__Close_b__0__, v5);
    sub_1B640C8(&RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0_TypeInfo, v6);
    byte_49F873F = 1;
  }
  v7 = sub_1B64314(RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0_TypeInfo, callAction, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callAction;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)callAction, v11, v12);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_RecommendSupportQuestSelectDialogComponent___c__DisplayClass22_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall RecommendSupportQuestSelectDialogComponent__Init(
        RecommendSupportQuestSelectDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
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

  if ( (byte_49F873E & 1) == 0 )
  {
    sub_1B640C8(&Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__, method);
    byte_49F873E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_RecommendSupportQuestSelectDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_49F873D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__, v3);
    sub_1B640C8(&Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__, v4);
    byte_49F873D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_RecommendSupportQuestSelectDialogComponent_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestSelectDialogComponent_CallOnDecide__,
      0LL);
    RecommendSupportQuestSelectDialogComponent__Close(this, v9, v10);
  }
}


void __fastcall RecommendSupportQuestSelectDialogComponent__Open(
        RecommendSupportQuestSelectDialogComponent_o *this,
        RecommendSupportQuestBoardListViewItem_o *item,
        RecommendSupportQuestBoardListViewObject_o *obj,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *Instance; // x0
  int klass; // w23
  UILabel_o *titleLb; // x21
  UILabel_o *descriptionLb; // x21
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  UILabel_o *situationLb; // x21
  UILabel_o *decideButtonLb; // x21
  UILabel_o *cancelButtonLb; // x21
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_o *v31; // x20
  int v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F873A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, item);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&Method_RecommendSupportQuestSelectDialogComponent__Open_b__16_0__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_10968/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/, v12);
    sub_1B640C8(&StringLiteral_10970/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/, v13);
    sub_1B640C8(&StringLiteral_10969/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, v14);
    sub_1B640C8(&StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, v15);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v16);
    byte_49F873A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = action;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.onDecide,
      (int32_t)action,
      (int32_t)obj,
      (int32_t)action);
    Instance = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    klass = (int)Instance[5].klass;
    titleLb = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_10970/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_TITLE"*/, 0LL);
    if ( !titleLb )
      goto LABEL_15;
    UILabel__set_text(titleLb, Instance, 0LL);
    descriptionLb = this->fields.descriptionLb;
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10968/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_DESCRIPTION"*/, 0LL);
    v32 = klass + 1;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    Instance = System_String__Format(v21, v22, 0LL);
    if ( !descriptionLb )
      goto LABEL_15;
    UILabel__set_text(descriptionLb, Instance, 0LL);
    situationLb = this->fields.situationLb;
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_10969/*"RECOMMEND_SUPPORT_QUEST_SELECT_DIALOG_SITUATION"*/, 0LL);
    if ( !situationLb )
      goto LABEL_15;
    UILabel__set_text(situationLb, Instance, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3735/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
    if ( !decideButtonLb
      || (UILabel__set_text(decideButtonLb, Instance, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
          !cancelButtonLb)
      || (UILabel__set_text(cancelButtonLb, Instance, 0LL),
          (Instance = (System_String_o *)this->fields.questBoardDraw) == 0LL) )
    {
LABEL_15:
      sub_1B64324(Instance);
    }
    RecommendSupportQuestBoardListViewItemDraw__SetItemOfQuest(
      (RecommendSupportQuestBoardListViewItemDraw_o *)Instance,
      item,
      0,
      v26);
    RecommendSupportQuestSelectDialogComponent__SetupFaceIcon(this, v27);
    RecommendSupportQuestSelectDialogComponent__SetupEquipIcon(this, v28);
    this->fields.state = 1;
    v31 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v29, v30);
    System_Action___ctor(
      v31,
      (Il2CppObject *)this,
      Method_RecommendSupportQuestSelectDialogComponent__Open_b__16_0__,
      0LL);
    BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
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
  const MethodInfo *v12; // x1
  UISprite_o *equipSprite; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  int32_t v16; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x20
  int64_t v18; // x19
  void *v19; // x20
  Il2CppClass *v20; // x21
  bool v21; // w1
  UnityEngine_Object_o *v22; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_49F873C & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v8);
    byte_49F873C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = RecommendSupportSelectControl__get_SelectEquipId((RecommendSupportSelectControl_o *)Instance, v11);
  if ( !Master_object )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          Instance,
          (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    goto LABEL_28;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  if ( RecommendSupportSelectControl__get_SelectEquipId((RecommendSupportSelectControl_o *)Instance, v12) > 0 )
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
    *(_QWORD *)&v24.fields.currentCryptoKey = klass;
    *(_QWORD *)&v24.fields.fakeValue = monitor;
    v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v24, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(equipSprite, v16, 0LL);
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
          v18 = Instance;
          v20 = entity[6].klass;
          v19 = entity[6].monitor;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v25.fields.currentCryptoKey = v20;
          *(_QWORD *)&v25.fields.fakeValue = v19;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v25, 0LL);
          if ( v18 )
          {
            v21 = (int)Instance > 0;
            Instance = v18;
LABEL_38:
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, v21, 0LL);
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
    v22 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.equipLimitCountSprite;
      if ( Instance )
      {
        Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( Instance )
        {
          v21 = 0;
          goto LABEL_38;
        }
      }
LABEL_40:
      sub_1B64324(Instance);
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
  __int64 v10; // x1
  __int64 v11; // x2
  IconLabelInfo_o *v12; // x20
  int32_t klass; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F873B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v6);
    byte_49F873B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = RecommendSupportSelectControl__get_SelectServantId((RecommendSupportSelectControl_o *)Instance, v9);
  if ( !Master_object )
    goto LABEL_16;
  if ( DataMasterBase_object__object__long___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
         &entity,
         Instance,
         (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    v12 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v10, v11);
    IconLabelInfo___ctor(v12, 0LL);
    Instance = (int64_t)entity;
    if ( entity )
    {
      klass = (int32_t)entity[16].klass;
      Instance = UserServantEntity__getLevelMax((UserServantEntity_o *)entity, 0LL);
      if ( v12 )
      {
        IconLabelInfo__Set_37825360(v12, 2, klass, Instance, 0, 0, 0, 0, 0LL);
        Instance = (int64_t)this->fields.servantFaceIcon;
        if ( Instance )
        {
          ServantFaceIconComponent__FaceSpriteDisp((ServantFaceIconComponent_o *)Instance, 1, 0LL);
          Instance = (int64_t)this->fields.servantFaceIcon;
          if ( Instance )
          {
            ServantFaceIconComponent__Set_37904900(
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
    sub_1B64324(Instance);
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
  UnityEngine_GameObject_o *v5; // x0

  if ( (byte_49F8740 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8740 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = this->fields.cancelButton;
  if ( !v5 )
    sub_1B64324(0LL);
  return UnityEngine_GameObject__get_gameObject(v5, 0LL);
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
    sub_1B64324(0LL);
  RecommendSupportQuestSelectDialogComponent__Init(_4__this, method);
  ActionExtensions__Call(this->fields.callAction, 0LL);
}