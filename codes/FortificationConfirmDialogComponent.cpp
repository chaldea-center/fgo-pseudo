void __fastcall FortificationConfirmDialogComponent___ctor(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5EF58 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EF58 = 1;
  }
  this->fields.iconBetweenWidth = -16;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationConfirmDialogComponent__CallOnDecide(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *onDecide; // x19
  ServantStatusBattleListViewItem_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (ServantStatusBattleListViewItem_o *)&this->fields.onDecide;
    p_onDecide->klass = 0LL;
    sub_1B88554(p_onDecide, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall FortificationConfirmDialogComponent__Close(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5EF56 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FortificationConfirmDialogComponent__Close_b__41_0__);
    byte_4A5EF56 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FortificationConfirmDialogComponent__Close_b__41_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall FortificationConfirmDialogComponent__Init(
        FortificationConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.eventId = eventId;
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall FortificationConfirmDialogComponent__IsNpcServant(
        FortificationConfirmDialogComponent_o *this,
        UserServantEntity_array *userServantEntity,
        const MethodInfo *method)
{
  FortificationConfirmDialogComponent_o *v4; // x19
  signed int max_length; // w8
  int v6; // w9
  UserServantEntity_o *v7; // x10
  int32_t eventId; // w20
  UISprite_o *guestIconBefore; // x19

  v4 = this;
  if ( (byte_4A5EF52 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    this = (FortificationConfirmDialogComponent_o *)sub_1B885B0(&StringLiteral_20155/*"icon_guest"*/);
    byte_4A5EF52 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_21;
  max_length = userServantEntity->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_1B88814(this, userServantEntity);
    v7 = userServantEntity->m_Items[v6];
    if ( !v7 )
      goto LABEL_21;
    if ( !v7->fields.createdAt )
      break;
    if ( max_length == ++v6 )
      return 0;
  }
  if ( !v6 )
  {
    this = (FortificationConfirmDialogComponent_o *)v4->fields.guestIconBefore;
    if ( this )
    {
      this = (FortificationConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        eventId = v4->fields.eventId;
        guestIconBefore = v4->fields.guestIconBefore;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1B8880C(this, userServantEntity);
  }
  this = (FortificationConfirmDialogComponent_o *)v4->fields.guestIconAfter;
  if ( !this )
    goto LABEL_21;
  this = (FortificationConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  if ( !this )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  eventId = v4->fields.eventId;
  guestIconBefore = v4->fields.guestIconAfter;
LABEL_18:
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37859364(eventId, guestIconBefore, (System_String_o *)StringLiteral_20155/*"icon_guest"*/, 0LL);
  return 1;
}


void __fastcall FortificationConfirmDialogComponent__OnClickCancel(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5EF55 & 1) == 0 )
  {
    sub_1B885B0(&Method_FortificationConfirmDialogComponent_OnClickCancel__);
    byte_4A5EF55 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FortificationConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    FortificationConfirmDialogComponent__Close(this, v5);
  }
}


void __fastcall FortificationConfirmDialogComponent__OnClickDecide(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    FortificationConfirmDialogComponent__CallOnDecide(this, method);
  }
}


void __fastcall FortificationConfirmDialogComponent__Open(
        FortificationConfirmDialogComponent_o *this,
        int32_t dialogType,
        UserServantEntity_array *userServantEntity,
        System_Int32_array *point,
        System_String_o *teamName,
        System_String_o *detailName,
        int32_t workType,
        System_Action_o *onDecide,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v16; // x1
  UnityEngine_Component_o *guestIconBefore; // x0
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UILabel_o *v21; // x24
  UILabel_o *descriptionLb; // x24
  System_String_o *v23; // x0
  UILabel_o *warningDescriptionLb; // x24
  System_String_o *v25; // x1
  UILabel_o *v26; // x24
  UILabel_o *v27; // x24
  const MethodInfo *v28; // x2
  bool IsNpcServant; // w25
  UILabel_o *titleLb; // x24
  struct UILabel_o *removeDescriptionLb; // x24
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  System_String_o *v34; // x0
  UILabel_o *v35; // x24
  const MethodInfo *v36; // x3
  int eventId; // w22
  UISprite_o *workTypeIcon; // x23
  Il2CppObject *v39; // x24
  Il2CppObject *v40; // x0
  System_String_o *v41; // x24
  UILabel_o *subTitleLb; // x22
  System_String_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v47; // x8
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v50; // x20
  int v51; // [xsp+8h] [xbp-48h] BYREF
  int32_t v52; // [xsp+Ch] [xbp-44h] BYREF

  v52 = workType;
  if ( (byte_4A5EF51 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_FortificationConfirmDialogComponent__Open_b__32_0__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_4987/*"D2"*/);
    sub_1B885B0(&StringLiteral_6455/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_6464/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_6467/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_6454/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_6453/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_6469/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_6470/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_6466/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_20149/*"icon_event_{0}{1}"*/);
    sub_1B885B0(&StringLiteral_6458/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/);
    sub_1B885B0(&StringLiteral_6468/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EF51 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      (int32_t)userServantEntity,
      (int32_t)point);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.guestIconBefore;
    if ( !guestIconBefore )
      goto LABEL_52;
    guestIconBefore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(guestIconBefore, 0LL);
    if ( !guestIconBefore )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)guestIconBefore, 0, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.guestIconAfter;
    if ( !guestIconBefore )
      goto LABEL_52;
    guestIconBefore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(guestIconBefore, 0LL);
    if ( !guestIconBefore )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)guestIconBefore, 0, 0LL);
    if ( dialogType != 2 )
    {
      if ( dialogType == 1 )
      {
        titleLb = this->fields.titleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6467/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !titleLb )
          goto LABEL_52;
        UILabel__set_text(titleLb, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.descriptionLb;
        if ( !guestIconBefore )
          goto LABEL_52;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.warningDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_52;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        removeDescriptionLb = this->fields.removeDescriptionLb;
        v32 = LocalizationManager__Get((System_String_o *)StringLiteral_6466/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v32, (Il2CppObject *)detailName, 0LL);
        if ( !removeDescriptionLb )
          goto LABEL_52;
        v25 = (System_String_o *)guestIconBefore;
        guestIconBefore = (UnityEngine_Component_o *)removeDescriptionLb;
      }
      else
      {
        if ( dialogType )
          goto LABEL_40;
        v21 = this->fields.titleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6469/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v21 )
          goto LABEL_52;
        UILabel__set_text(v21, (System_String_o *)guestIconBefore, 0LL);
        descriptionLb = this->fields.descriptionLb;
        v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6468/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v23, (Il2CppObject *)detailName, 0LL);
        if ( !descriptionLb )
          goto LABEL_52;
        UILabel__set_text(descriptionLb, (System_String_o *)guestIconBefore, 0LL);
        warningDescriptionLb = this->fields.warningDescriptionLb;
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6470/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !warningDescriptionLb )
          goto LABEL_52;
        UILabel__set_text(warningDescriptionLb, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_52;
        v25 = (System_String_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text((UILabel_o *)guestIconBefore, v25, 0LL);
      FortificationConfirmDialogComponent__SetSingleServantDisplay(this, userServantEntity, point, v33);
LABEL_40:
      eventId = this->fields.eventId;
      workTypeIcon = this->fields.workTypeIcon;
      v51 = eventId;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v18, v19, v20);
      v40 = (Il2CppObject *)System_Int32__ToString_62512312((int32_t)&v52, (System_String_o *)StringLiteral_4987/*"D2"*/, 0LL);
      v41 = System_String__Format_61721404((System_String_o *)StringLiteral_20149/*"icon_event_{0}{1}"*/, v39, v40, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI_37859364(eventId, workTypeIcon, v41, 0LL);
      subTitleLb = this->fields.subTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v43 = LocalizationManager__Get((System_String_o *)StringLiteral_6458/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
      guestIconBefore = (UnityEngine_Component_o *)System_String__Format_61721404(
                                                     v43,
                                                     (Il2CppObject *)teamName,
                                                     (Il2CppObject *)detailName,
                                                     0LL);
      if ( subTitleLb )
      {
        UILabel__set_text(subTitleLb, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.workTypeIcon;
        if ( guestIconBefore )
        {
          guestIconBefore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(guestIconBefore, 0LL);
          if ( this->fields.subTitleLb )
          {
            v44 = (UnityEngine_GameObject_o *)guestIconBefore;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.subTitleLb, 0LL);
            LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
            v47 = this->fields.subTitleLb;
            if ( v47 )
            {
              GameObjectExtensions__SetLocalPositionX(
                v44,
                (float)(LocalPositionX - (float)(v47->fields.mWidth / 2)) + (float)this->fields.iconBetweenWidth,
                0LL);
              decideButtonLb = this->fields.decideButtonLb;
              guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_DECIDE"*/,
                                                             0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)guestIconBefore, 0LL);
                cancelButtonLb = this->fields.cancelButtonLb;
                guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/,
                                                               0LL);
                if ( cancelButtonLb )
                {
                  UILabel__set_text(cancelButtonLb, (System_String_o *)guestIconBefore, 0LL);
                  this->fields.state = 1;
                  v50 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v50,
                    (Il2CppObject *)this,
                    Method_FortificationConfirmDialogComponent__Open_b__32_0__,
                    0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1B8880C(guestIconBefore, v16);
    }
    v26 = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6454/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !v26 )
      goto LABEL_52;
    UILabel__set_text(v26, (System_String_o *)guestIconBefore, 0LL);
    v27 = this->fields.descriptionLb;
    IsNpcServant = FortificationConfirmDialogComponent__IsNpcServant(this, userServantEntity, v28);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsNpcServant )
      {
LABEL_23:
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6464/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/,
                                                       0LL);
        goto LABEL_34;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsNpcServant )
        goto LABEL_23;
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6453/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v34, (Il2CppObject *)detailName, 0LL);
LABEL_34:
    v16 = guestIconBefore;
    if ( !v27 )
      goto LABEL_52;
    UILabel__set_text(v27, (System_String_o *)guestIconBefore, 0LL);
    v35 = this->fields.warningDescriptionLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6455/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, 0LL);
    if ( !v35 )
      goto LABEL_52;
    UILabel__set_text(v35, (System_String_o *)guestIconBefore, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
    if ( !guestIconBefore )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    FortificationConfirmDialogComponent__SetDoubleServantDisplay(this, userServantEntity, point, v36);
    goto LABEL_40;
  }
}


void __fastcall FortificationConfirmDialogComponent__SerializeFieldNotNullCheck(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortificationConfirmDialogComponent__SetDoubleServantDisplay(
        FortificationConfirmDialogComponent_o *this,
        UserServantEntity_array *userServantEntity,
        System_Int32_array *point,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *singleServantDisplayObject; // x0
  UILabel_o *beforeLb; // x22
  const MethodInfo *v9; // x6
  UILabel_o *afterLb; // x22
  const MethodInfo *v11; // x6

  if ( (byte_4A5EF53 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6451/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/);
    sub_1B885B0(&StringLiteral_6452/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/);
    byte_4A5EF53 = 1;
  }
  singleServantDisplayObject = this->fields.singleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 0, 0LL);
  singleServantDisplayObject = this->fields.doubleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 1, 0LL);
  beforeLb = this->fields.beforeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6452/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/,
                                                             0LL);
  if ( !beforeLb )
    goto LABEL_16;
  UILabel__set_text(beforeLb, (System_String_o *)singleServantDisplayObject, 0LL);
  if ( !userServantEntity )
    goto LABEL_16;
  if ( !userServantEntity->max_length )
    goto LABEL_17;
  if ( !point )
    goto LABEL_16;
  if ( !point->max_length )
    goto LABEL_17;
  FortificationConfirmDialogComponent__SetServant(
    (FortificationConfirmDialogComponent_o *)singleServantDisplayObject,
    this->fields.pointDescriptionLbBefore,
    this->fields.pointLbBefore,
    this->fields.servantFaceIconBefore,
    userServantEntity->m_Items[0],
    point->m_Items[1],
    v9);
  afterLb = this->fields.afterLb;
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6451/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/,
                                                             0LL);
  if ( !afterLb )
LABEL_16:
    sub_1B8880C(singleServantDisplayObject, userServantEntity);
  UILabel__set_text(afterLb, (System_String_o *)singleServantDisplayObject, 0LL);
  if ( userServantEntity->max_length <= 1 || point->max_length <= 1 )
LABEL_17:
    sub_1B88814(singleServantDisplayObject, userServantEntity);
  FortificationConfirmDialogComponent__SetServant(
    (FortificationConfirmDialogComponent_o *)singleServantDisplayObject,
    this->fields.pointDescriptionLbAfter,
    this->fields.pointLbAfter,
    this->fields.servantFaceIconAfter,
    userServantEntity->m_Items[1],
    point->m_Items[2],
    v11);
}


void __fastcall FortificationConfirmDialogComponent__SetServant(
        FortificationConfirmDialogComponent_o *this,
        UILabel_o *label1,
        UILabel_o *label2,
        ServantFaceIconComponent_o *faceIcon,
        UserServantEntity_o *ent,
        int32_t point,
        const MethodInfo *method)
{
  IconLabelInfo_o *v12; // x22
  System_String_o *LevelMax; // x0
  __int64 v14; // x1
  System_String_o *v15; // x24
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x0
  int32_t lv; // w21
  int32_t v22; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5EF54 & 1) == 0 )
  {
    sub_1B885B0(&IconLabelInfo_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6456/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/);
    sub_1B885B0(&StringLiteral_6457/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    byte_4A5EF54 = 1;
  }
  v12 = (IconLabelInfo_o *)sub_1B887FC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_6457/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, 0LL);
  if ( !label1 )
    goto LABEL_11;
  UILabel__set_text(label1, LevelMax, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6456/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, 0LL);
  v22 = point;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v16, v17, v18);
  v20 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v19, 0LL);
  LevelMax = System_String__Format(v15, v20, 0LL);
  if ( !label2
    || (UILabel__set_text(label2, LevelMax, 0LL), !ent)
    || (lv = ent->fields.lv, LevelMax = (System_String_o *)UserServantEntity__getLevelMax(ent, 0LL), !v12)
    || (IconLabelInfo__Set_38140136(v12, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL), !faceIcon) )
  {
LABEL_11:
    sub_1B8880C(LevelMax, v14);
  }
  ServantFaceIconComponent__Set_38220260(faceIcon, ent, v12, 0LL, 0LL);
}


void __fastcall FortificationConfirmDialogComponent__SetSingleServantDisplay(
        FortificationConfirmDialogComponent_o *this,
        UserServantEntity_array *userServantEntity,
        System_Int32_array *point,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *singleServantDisplayObject; // x0
  const MethodInfo *v8; // x6

  singleServantDisplayObject = this->fields.singleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 1, 0LL);
  singleServantDisplayObject = this->fields.doubleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 0, 0LL);
  if ( !userServantEntity )
    goto LABEL_8;
  if ( !userServantEntity->max_length )
    goto LABEL_9;
  if ( !point )
LABEL_8:
    sub_1B8880C(singleServantDisplayObject, userServantEntity);
  if ( !point->max_length )
LABEL_9:
    sub_1B88814(singleServantDisplayObject, userServantEntity);
  FortificationConfirmDialogComponent__SetServant(
    (FortificationConfirmDialogComponent_o *)singleServantDisplayObject,
    this->fields.pointDescriptionLb,
    this->fields.pointLb,
    this->fields.servantFaceIcon,
    userServantEntity->m_Items[0],
    point->m_Items[1],
    v8);
}


void __fastcall FortificationConfirmDialogComponent___Close_b__41_0(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FortificationConfirmDialogComponent__Init(this, this->fields.eventId, v2);
}


void __fastcall FortificationConfirmDialogComponent___Open_b__32_0(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall FortificationConfirmDialogComponent__get_closeBtnObject(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5EF57 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF57 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}