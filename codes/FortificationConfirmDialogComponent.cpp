void FortificationConfirmDialogComponent___ctor(FortificationConfirmDialogComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_59325AE & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59325AE = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.iconBetweenWidth = -16;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FortificationConfirmDialogComponent__CallOnDecide(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *onDecide; // x19

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    this->fields.onDecide = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onDecide, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))onDecide->fields.invoke_impl)(
      onDecide->fields.method_code,
      onDecide->fields.method);
  }
}


void FortificationConfirmDialogComponent__Close(FortificationConfirmDialogComponent_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_59325AC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FortificationConfirmDialogComponent__Close_b__41_0__);
    byte_59325AC = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FortificationConfirmDialogComponent__Close_b__41_0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void FortificationConfirmDialogComponent__Init(
        FortificationConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v6);
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
  int max_length; // w21
  int v6; // w22
  UserServantEntity_o *v7; // x9
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t eventId; // w20
  UISprite_o *guestIconBefore; // x19

  v4 = this;
  if ( (byte_59325A8 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    this = (FortificationConfirmDialogComponent_o *)sub_21FFC50(&StringLiteral_21141/*"icon_guest"*/);
    byte_59325A8 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_23;
  max_length = userServantEntity->max_length;
  if ( max_length < 1 )
  {
    v6 = 0;
    return v6 < max_length;
  }
  v6 = 0;
  while ( 1 )
  {
    if ( max_length == v6 )
      sub_21FFED4(this);
    v7 = userServantEntity->m_Items[v6];
    if ( !v7 )
      goto LABEL_23;
    if ( !v7->fields.createdAt )
      break;
    if ( (max_length & ~(max_length >> 31)) == ++v6 )
      return v6 < max_length;
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
        goto LABEL_19;
      }
    }
LABEL_23:
    sub_21FFECC(this, userServantEntity);
  }
  this = (FortificationConfirmDialogComponent_o *)v4->fields.guestIconAfter;
  if ( !this )
    goto LABEL_23;
  this = (FortificationConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  eventId = v4->fields.eventId;
  guestIconBefore = v4->fields.guestIconAfter;
LABEL_19:
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v9);
  AtlasManager__SetEventUI_47538316(eventId, guestIconBefore, (System_String_o *)StringLiteral_21141/*"icon_guest"*/, 0);
  return v6 < max_length;
}


void FortificationConfirmDialogComponent__OnClickCancel(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_59325AB & 1) == 0 )
  {
    sub_21FFC50(&Method_FortificationConfirmDialogComponent_OnClickCancel__);
    byte_59325AB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_FortificationConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  UnityEngine_Component_o *v16; // x1
  UnityEngine_Component_o *guestIconBefore; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *v20; // x24
  UILabel_o *v21; // x24
  System_String_o *v22; // x0
  UILabel_o *v23; // x24
  System_String_o *v24; // x1
  UILabel_o *v25; // x24
  struct UILabel_o *removeDescriptionLb; // x24
  System_String_o *v27; // x0
  const MethodInfo *v28; // x3
  UILabel_o *titleLb; // x24
  UILabel_o *descriptionLb; // x24
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  bool IsNpcServant; // w8
  int v35; // w9
  System_String_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  UILabel_o *warningDescriptionLb; // x24
  const MethodInfo *v40; // x3
  int32_t eventId; // w22
  UISprite_o *workTypeIcon; // x23
  Il2CppObject *v43; // x24
  Il2CppObject *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  System_String_o *v47; // x24
  __int64 v48; // x1
  __int64 v49; // x2
  UILabel_o *subTitleLb; // x22
  System_String_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v55; // x8
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v58; // x20
  int32_t v59; // [xsp+8h] [xbp-48h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-44h] BYREF

  v60 = workType;
  if ( (byte_59325A7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_FortificationConfirmDialogComponent__Open_b__32_0__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5129/*"D2"*/);
    sub_21FFC50(&StringLiteral_6760/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_6769/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_6772/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_6759/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_6758/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_6774/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/);
    sub_21FFC50(&StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_6775/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_6771/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_21128/*"icon_event_{0}{1}"*/);
    sub_21FFC50(&StringLiteral_6763/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/);
    sub_21FFC50(&StringLiteral_6773/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59325A7 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
      (int32_t)onDecide,
      (System_String_o *)userServantEntity,
      (System_String_o *)point,
      (int32_t)teamName,
      (int32_t)detailName,
      workType,
      (bool)onDecide);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.guestIconBefore;
    if ( !guestIconBefore )
      goto LABEL_54;
    guestIconBefore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(guestIconBefore, 0);
    if ( !guestIconBefore )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)guestIconBefore, 0, 0);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.guestIconAfter;
    if ( !guestIconBefore )
      goto LABEL_54;
    guestIconBefore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(guestIconBefore, 0);
    if ( !guestIconBefore )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)guestIconBefore, 0, 0);
    if ( dialogType == 2 )
    {
      titleLb = this->fields.titleLb;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
      guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6759/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, 0);
      if ( !titleLb )
        goto LABEL_54;
      UILabel__set_text(titleLb, (System_String_o *)guestIconBefore, 0);
      descriptionLb = this->fields.descriptionLb;
      IsNpcServant = FortificationConfirmDialogComponent__IsNpcServant(this, userServantEntity, v31);
      v35 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
      if ( IsNpcServant )
      {
        if ( !v35 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6769/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
      }
      else
      {
        if ( !v35 )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v32, v33);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_6758/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v36, (Il2CppObject *)detailName, 0);
      }
      v16 = guestIconBefore;
      if ( !descriptionLb )
        goto LABEL_54;
      UILabel__set_text(descriptionLb, (System_String_o *)guestIconBefore, 0);
      warningDescriptionLb = this->fields.warningDescriptionLb;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v38);
      guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6760/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, 0);
      if ( !warningDescriptionLb )
        goto LABEL_54;
      UILabel__set_text(warningDescriptionLb, (System_String_o *)guestIconBefore, 0);
      guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
      if ( !guestIconBefore )
        goto LABEL_54;
      UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0);
      FortificationConfirmDialogComponent__SetDoubleServantDisplay(this, userServantEntity, point, v40);
    }
    else
    {
      if ( dialogType == 1 )
      {
        v25 = this->fields.titleLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6772/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/, 0);
        if ( !v25 )
          goto LABEL_54;
        UILabel__set_text(v25, (System_String_o *)guestIconBefore, 0);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.descriptionLb;
        if ( !guestIconBefore )
          goto LABEL_54;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.warningDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_54;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0);
        removeDescriptionLb = this->fields.removeDescriptionLb;
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_6771/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v27, (Il2CppObject *)detailName, 0);
        if ( !removeDescriptionLb )
          goto LABEL_54;
        v24 = (System_String_o *)guestIconBefore;
        guestIconBefore = (UnityEngine_Component_o *)removeDescriptionLb;
      }
      else
      {
        if ( dialogType )
          goto LABEL_42;
        v20 = this->fields.titleLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6774/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/, 0);
        if ( !v20 )
          goto LABEL_54;
        UILabel__set_text(v20, (System_String_o *)guestIconBefore, 0);
        v21 = this->fields.descriptionLb;
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6773/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, 0);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v22, (Il2CppObject *)detailName, 0);
        if ( !v21 )
          goto LABEL_54;
        UILabel__set_text(v21, (System_String_o *)guestIconBefore, 0);
        v23 = this->fields.warningDescriptionLb;
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6775/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, 0);
        if ( !v23 )
          goto LABEL_54;
        UILabel__set_text(v23, (System_String_o *)guestIconBefore, 0);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_54;
        v24 = (System_String_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text((UILabel_o *)guestIconBefore, v24, 0);
      FortificationConfirmDialogComponent__SetSingleServantDisplay(this, userServantEntity, point, v28);
    }
LABEL_42:
    eventId = this->fields.eventId;
    workTypeIcon = this->fields.workTypeIcon;
    v59 = eventId;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v59);
    v44 = (Il2CppObject *)System_Int32__ToString_76925352((int32_t)&v60, (System_String_o *)StringLiteral_5129/*"D2"*/, 0);
    v47 = System_String__Format_75484576((System_String_o *)StringLiteral_21128/*"icon_event_{0}{1}"*/, v43, v44, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v45, v46);
    AtlasManager__SetEventUI_47538316(eventId, workTypeIcon, v47, 0);
    subTitleLb = this->fields.subTitleLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48, v49);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_6763/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, 0);
    guestIconBefore = (UnityEngine_Component_o *)System_String__Format_75484576(
                                                   v51,
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
          v52 = (UnityEngine_GameObject_o *)guestIconBefore;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.subTitleLb, 0);
          LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
          v55 = this->fields.subTitleLb;
          if ( v55 )
          {
            GameObjectExtensions__SetLocalPositionX(
              v52,
              (float)(LocalPositionX - (float)(v55->fields.mWidth / 2)) + (float)this->fields.iconBetweenWidth,
              0);
            decideButtonLb = this->fields.decideButtonLb;
            guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3824/*"COMMON_CONFIRM_DECIDE"*/,
                                                           0);
            if ( decideButtonLb )
            {
              UILabel__set_text(decideButtonLb, (System_String_o *)guestIconBefore, 0);
              cancelButtonLb = this->fields.cancelButtonLb;
              guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/,
                                                             0);
              if ( cancelButtonLb )
              {
                UILabel__set_text(cancelButtonLb, (System_String_o *)guestIconBefore, 0);
                this->fields.state = 1;
                v58 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(
                  v58,
                  (Il2CppObject *)this,
                  Method_FortificationConfirmDialogComponent__Open_b__32_0__,
                  0);
                BaseDialog__Open((BaseDialog_o *)this, v58, 0, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_54:
    sub_21FFECC(guestIconBefore, v16);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *beforeLb; // x22
  const MethodInfo *v11; // x6
  UILabel_o *afterLb; // x22
  const MethodInfo *v13; // x6

  if ( (byte_59325A9 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6756/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/);
    sub_21FFC50(&StringLiteral_6757/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/);
    byte_59325A9 = 1;
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
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6757/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/,
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
    v11);
  afterLb = this->fields.afterLb;
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6756/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/,
                                                             0);
  if ( !afterLb )
LABEL_16:
    sub_21FFECC(singleServantDisplayObject, userServantEntity);
  UILabel__set_text(afterLb, (System_String_o *)singleServantDisplayObject, 0);
  if ( (userServantEntity->max_length & 0xFFFFFFFE) == 0 || (point->max_length & 0xFFFFFFFE) == 0 )
LABEL_17:
    sub_21FFED4(singleServantDisplayObject);
  FortificationConfirmDialogComponent__SetServant(
    (FortificationConfirmDialogComponent_o *)singleServantDisplayObject,
    this->fields.pointDescriptionLbAfter,
    this->fields.pointLbAfter,
    this->fields.servantFaceIconAfter,
    userServantEntity->m_Items[1],
    point->m_Items[1],
    v13);
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
  IconLabelInfo_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *LevelMax; // x0
  __int64 v16; // x1
  System_String_o *v17; // x24
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x0
  int32_t lv; // w22
  int32_t v21; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_59325AA & 1) == 0 )
  {
    sub_21FFC50(&IconLabelInfo_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6761/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/);
    sub_21FFC50(&StringLiteral_6762/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    byte_59325AA = 1;
  }
  v12 = (IconLabelInfo_o *)sub_21FFEBC(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
  LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_6762/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, 0);
  if ( !label1 )
    goto LABEL_11;
  UILabel__set_text(label1, LevelMax, 0);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6761/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, 0);
  v21 = point;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v21);
  v19 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v18, 0);
  LevelMax = System_String__Format(v17, v19, 0);
  if ( !label2
    || (UILabel__set_text(label2, LevelMax, 0), !ent)
    || (lv = ent->fields.lv, LevelMax = (System_String_o *)UserServantEntity__getLevelMax(ent, 0), !v12)
    || (IconLabelInfo__Set_47932852(v12, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0, 0), !faceIcon) )
  {
LABEL_11:
    sub_21FFECC(LevelMax, v16);
  }
  ServantFaceIconComponent__Set_48018228(faceIcon, ent, v12, 0, 1, 0);
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
    sub_21FFECC(singleServantDisplayObject, userServantEntity);
  if ( !LODWORD(point->max_length) )
LABEL_9:
    sub_21FFED4(singleServantDisplayObject);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_59325AD & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59325AD = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}