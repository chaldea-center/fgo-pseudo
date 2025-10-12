void FortificationConfirmDialogComponent___ctor(FortificationConfirmDialogComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C31DA5 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C31DA5 = 1;
  }
  this->fields.iconBetweenWidth = -16;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FortificationConfirmDialogComponent__CallOnDecide(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *onDecide; // x19
  struct System_Action_o **p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = &this->fields.onDecide;
    *p_onDecide = 0;
    sub_1C32BC4(p_onDecide, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      onDecide->fields.method);
  }
}


void FortificationConfirmDialogComponent__Close(FortificationConfirmDialogComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C31DA3 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_FortificationConfirmDialogComponent__Close_b__41_0__);
    byte_4C31DA3 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_FortificationConfirmDialogComponent__Close_b__41_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void FortificationConfirmDialogComponent__Init(
        FortificationConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.eventId = eventId;
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool FortificationConfirmDialogComponent__IsNpcServant(
        FortificationConfirmDialogComponent_o *this,
        UserServantEntity_array *userServantEntity,
        const MethodInfo *method)
{
  FortificationConfirmDialogComponent_o *v4; // x19
  int max_length; // w8
  int v6; // w9
  UserServantEntity_o *v7; // x10
  int32_t eventId; // w20
  UISprite_o *guestIconBefore; // x19

  v4 = this;
  if ( (byte_4C31D9F & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    this = (FortificationConfirmDialogComponent_o *)sub_1C32C20(&StringLiteral_20203/*"icon_guest"*/);
    byte_4C31D9F = 1;
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
      sub_1C32E84(this);
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
                                                        0);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        eventId = v4->fields.eventId;
        guestIconBefore = v4->fields.guestIconBefore;
        goto LABEL_18;
      }
    }
LABEL_21:
    sub_1C32E7C(this);
  }
  this = (FortificationConfirmDialogComponent_o *)v4->fields.guestIconAfter;
  if ( !this )
    goto LABEL_21;
  this = (FortificationConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
  if ( !this )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  eventId = v4->fields.eventId;
  guestIconBefore = v4->fields.guestIconAfter;
LABEL_18:
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40507600(eventId, guestIconBefore, (System_String_o *)StringLiteral_20203/*"icon_guest"*/, 0);
  return 1;
}


void FortificationConfirmDialogComponent__OnClickCancel(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C31DA2 & 1) == 0 )
  {
    sub_1C32C20(&Method_FortificationConfirmDialogComponent_OnClickCancel__);
    byte_4C31DA2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_FortificationConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    FortificationConfirmDialogComponent__Close(this, v5);
  }
}


void FortificationConfirmDialogComponent__OnClickDecide(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    FortificationConfirmDialogComponent__CallOnDecide(this, method);
  }
}


void FortificationConfirmDialogComponent__Open(
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
  UnityEngine_Component_o *guestIconBefore; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  UILabel_o *v23; // x24
  UILabel_o *descriptionLb; // x24
  System_String_o *v25; // x0
  UILabel_o *warningDescriptionLb; // x24
  System_String_o *v27; // x1
  UILabel_o *v28; // x24
  UILabel_o *v29; // x24
  const MethodInfo *v30; // x2
  bool IsNpcServant; // w25
  UILabel_o *titleLb; // x24
  struct UILabel_o *removeDescriptionLb; // x24
  System_String_o *v34; // x0
  const MethodInfo *v35; // x3
  System_String_o *v36; // x0
  UILabel_o *v37; // x24
  const MethodInfo *v38; // x3
  int32_t eventId; // w22
  UISprite_o *workTypeIcon; // x23
  Il2CppObject *v41; // x24
  Il2CppObject *v42; // x0
  System_String_o *v43; // x24
  UILabel_o *subTitleLb; // x22
  System_String_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v49; // x8
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v52; // x20
  int32_t v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF

  v54 = workType;
  if ( (byte_4C31D9E & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_FortificationConfirmDialogComponent__Open_b__32_0__);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_4952/*"D2"*/);
    sub_1C32C20(&StringLiteral_6486/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_6495/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_6498/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_6485/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_6484/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_6500/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_6501/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_6497/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_20195/*"icon_event_{0}{1}"*/);
    sub_1C32C20(&StringLiteral_6489/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/);
    sub_1C32C20(&StringLiteral_6499/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C31D9E = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C32BC4(&this->fields.onDecide, onDecide);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.guestIconBefore;
    if ( !guestIconBefore )
      goto LABEL_52;
    guestIconBefore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(guestIconBefore, 0);
    if ( !guestIconBefore )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)guestIconBefore, 0, 0);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.guestIconAfter;
    if ( !guestIconBefore )
      goto LABEL_52;
    guestIconBefore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(guestIconBefore, 0);
    if ( !guestIconBefore )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)guestIconBefore, 0, 0);
    if ( dialogType != 2 )
    {
      if ( dialogType == 1 )
      {
        titleLb = this->fields.titleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6498/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/, 0);
        if ( !titleLb )
          goto LABEL_52;
        UILabel__set_text(titleLb, (System_String_o *)guestIconBefore, 0);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.descriptionLb;
        if ( !guestIconBefore )
          goto LABEL_52;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.warningDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_52;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0);
        removeDescriptionLb = this->fields.removeDescriptionLb;
        v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6497/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v34, (Il2CppObject *)detailName, 0);
        if ( !removeDescriptionLb )
          goto LABEL_52;
        v27 = (System_String_o *)guestIconBefore;
        guestIconBefore = (UnityEngine_Component_o *)removeDescriptionLb;
      }
      else
      {
        if ( dialogType )
          goto LABEL_40;
        v23 = this->fields.titleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6500/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/, 0);
        if ( !v23 )
          goto LABEL_52;
        UILabel__set_text(v23, (System_String_o *)guestIconBefore, 0);
        descriptionLb = this->fields.descriptionLb;
        v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6499/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v25, (Il2CppObject *)detailName, 0);
        if ( !descriptionLb )
          goto LABEL_52;
        UILabel__set_text(descriptionLb, (System_String_o *)guestIconBefore, 0);
        warningDescriptionLb = this->fields.warningDescriptionLb;
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6501/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, 0);
        if ( !warningDescriptionLb )
          goto LABEL_52;
        UILabel__set_text(warningDescriptionLb, (System_String_o *)guestIconBefore, 0);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_52;
        v27 = (System_String_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text((UILabel_o *)guestIconBefore, v27, 0);
      FortificationConfirmDialogComponent__SetSingleServantDisplay(this, userServantEntity, point, v35);
LABEL_40:
      eventId = this->fields.eventId;
      workTypeIcon = this->fields.workTypeIcon;
      v53 = eventId;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v17, v18, v19, v20, v21, v22);
      v42 = (Il2CppObject *)System_Int32__ToString_65028652((int32_t)&v54, (System_String_o *)StringLiteral_4952/*"D2"*/, 0);
      v43 = System_String__Format_63559836((System_String_o *)StringLiteral_20195/*"icon_event_{0}{1}"*/, v41, v42, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI_40507600(eventId, workTypeIcon, v43, 0);
      subTitleLb = this->fields.subTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = LocalizationManager__Get((System_String_o *)StringLiteral_6489/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, 0);
      guestIconBefore = (UnityEngine_Component_o *)System_String__Format_63559836(
                                                     v45,
                                                     (Il2CppObject *)teamName,
                                                     (Il2CppObject *)detailName,
                                                     0);
      if ( subTitleLb )
      {
        UILabel__set_text(subTitleLb, (System_String_o *)guestIconBefore, 0);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.workTypeIcon;
        if ( guestIconBefore )
        {
          guestIconBefore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(guestIconBefore, 0);
          if ( this->fields.subTitleLb )
          {
            v46 = (UnityEngine_GameObject_o *)guestIconBefore;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.subTitleLb, 0);
            LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
            v49 = this->fields.subTitleLb;
            if ( v49 )
            {
              GameObjectExtensions__SetLocalPositionX(
                v46,
                (float)(LocalPositionX - (float)(v49->fields.mWidth / 2)) + (float)this->fields.iconBetweenWidth,
                0);
              decideButtonLb = this->fields.decideButtonLb;
              guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3686/*"COMMON_CONFIRM_DECIDE"*/,
                                                             0);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)guestIconBefore, 0);
                cancelButtonLb = this->fields.cancelButtonLb;
                guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/,
                                                               0);
                if ( cancelButtonLb )
                {
                  UILabel__set_text(cancelButtonLb, (System_String_o *)guestIconBefore, 0);
                  this->fields.state = 1;
                  v52 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v52,
                    (Il2CppObject *)this,
                    Method_FortificationConfirmDialogComponent__Open_b__32_0__,
                    0);
                  BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1C32E7C(guestIconBefore);
    }
    v28 = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6485/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, 0);
    if ( !v28 )
      goto LABEL_52;
    UILabel__set_text(v28, (System_String_o *)guestIconBefore, 0);
    v29 = this->fields.descriptionLb;
    IsNpcServant = FortificationConfirmDialogComponent__IsNpcServant(this, userServantEntity, v30);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsNpcServant )
      {
LABEL_23:
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6495/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
        goto LABEL_34;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( IsNpcServant )
        goto LABEL_23;
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_6484/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
    guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v36, (Il2CppObject *)detailName, 0);
LABEL_34:
    if ( !v29 )
      goto LABEL_52;
    UILabel__set_text(v29, (System_String_o *)guestIconBefore, 0);
    v37 = this->fields.warningDescriptionLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6486/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, 0);
    if ( !v37 )
      goto LABEL_52;
    UILabel__set_text(v37, (System_String_o *)guestIconBefore, 0);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
    if ( !guestIconBefore )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0);
    FortificationConfirmDialogComponent__SetDoubleServantDisplay(this, userServantEntity, point, v38);
    goto LABEL_40;
  }
}


void FortificationConfirmDialogComponent__SerializeFieldNotNullCheck(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void FortificationConfirmDialogComponent__SetDoubleServantDisplay(
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

  if ( (byte_4C31DA0 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6482/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/);
    sub_1C32C20(&StringLiteral_6483/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/);
    byte_4C31DA0 = 1;
  }
  singleServantDisplayObject = this->fields.singleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 0, 0);
  singleServantDisplayObject = this->fields.doubleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 1, 0);
  beforeLb = this->fields.beforeLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6483/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/,
                                                             0);
  if ( !beforeLb )
    goto LABEL_16;
  UILabel__set_text(beforeLb, (System_String_o *)singleServantDisplayObject, 0);
  if ( !userServantEntity )
    goto LABEL_16;
  if ( !LODWORD(userServantEntity->max_length) )
    goto LABEL_17;
  if ( !point )
    goto LABEL_16;
  if ( !LODWORD(point->max_length) )
    goto LABEL_17;
  FortificationConfirmDialogComponent__SetServant(
    (FortificationConfirmDialogComponent_o *)singleServantDisplayObject,
    this->fields.pointDescriptionLbBefore,
    this->fields.pointLbBefore,
    this->fields.servantFaceIconBefore,
    userServantEntity->m_Items[0],
    point->m_Items[0],
    v9);
  afterLb = this->fields.afterLb;
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6482/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/,
                                                             0);
  if ( !afterLb )
LABEL_16:
    sub_1C32E7C(singleServantDisplayObject);
  UILabel__set_text(afterLb, (System_String_o *)singleServantDisplayObject, 0);
  if ( LODWORD(userServantEntity->max_length) <= 1 || LODWORD(point->max_length) <= 1 )
LABEL_17:
    sub_1C32E84(singleServantDisplayObject);
  FortificationConfirmDialogComponent__SetServant(
    (FortificationConfirmDialogComponent_o *)singleServantDisplayObject,
    this->fields.pointDescriptionLbAfter,
    this->fields.pointLbAfter,
    this->fields.servantFaceIconAfter,
    userServantEntity->m_Items[1],
    point->m_Items[1],
    v11);
}


void FortificationConfirmDialogComponent__SetServant(
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
  System_String_o *v14; // x24
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x0
  int32_t lv; // w21
  int32_t v24; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C31DA1 & 1) == 0 )
  {
    sub_1C32C20(&IconLabelInfo_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_6487/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/);
    sub_1C32C20(&StringLiteral_6488/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/);
    sub_1C32C20(&StringLiteral_25047/*"{0:#,0}"*/);
    byte_4C31DA1 = 1;
  }
  v12 = (IconLabelInfo_o *)sub_1C32E6C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_6488/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, 0);
  if ( !label1 )
    goto LABEL_11;
  UILabel__set_text(label1, LevelMax, 0);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_6487/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, 0);
  v24 = point;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v15, v16, v17, v18, v19, v20);
  v22 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25047/*"{0:#,0}"*/, v21, 0);
  LevelMax = System_String__Format(v14, v22, 0);
  if ( !label2
    || (UILabel__set_text(label2, LevelMax, 0), !ent)
    || (lv = ent->fields.lv, LevelMax = (System_String_o *)UserServantEntity__getLevelMax(ent, 0), !v12)
    || (IconLabelInfo__Set_40818388(v12, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0), !faceIcon) )
  {
LABEL_11:
    sub_1C32E7C(LevelMax);
  }
  ServantFaceIconComponent__Set_40905852(faceIcon, ent, v12, 0, 0);
}


void FortificationConfirmDialogComponent__SetSingleServantDisplay(
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
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 1, 0);
  singleServantDisplayObject = this->fields.doubleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 0, 0);
  if ( !userServantEntity )
    goto LABEL_8;
  if ( !LODWORD(userServantEntity->max_length) )
    goto LABEL_9;
  if ( !point )
LABEL_8:
    sub_1C32E7C(singleServantDisplayObject);
  if ( !LODWORD(point->max_length) )
LABEL_9:
    sub_1C32E84(singleServantDisplayObject);
  FortificationConfirmDialogComponent__SetServant(
    (FortificationConfirmDialogComponent_o *)singleServantDisplayObject,
    this->fields.pointDescriptionLb,
    this->fields.pointLb,
    this->fields.servantFaceIcon,
    userServantEntity->m_Items[0],
    point->m_Items[0],
    v8);
}


void FortificationConfirmDialogComponent___Close_b__41_0(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  FortificationConfirmDialogComponent__Init(this, this->fields.eventId, v2);
}


void FortificationConfirmDialogComponent___Open_b__32_0(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *FortificationConfirmDialogComponent__get_closeBtnObject(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_4C31DA4 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31DA4 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_1C32E7C(0);
  return UnityEngine_Component__get_gameObject(v5, 0);
}