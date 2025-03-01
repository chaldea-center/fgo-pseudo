void __fastcall FortificationConfirmDialogComponent___ctor(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C01837 & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4C01837 = 1;
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Action_o *onDecide; // x19
  PartyOrganizationUtility_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (PartyOrganizationUtility_o *)&this->fields.onDecide;
    p_onDecide->klass = 0LL;
    sub_1C2E0D0(p_onDecide, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall FortificationConfirmDialogComponent__Close(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4C01835 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_FortificationConfirmDialogComponent__Close_b__41_0__, v3);
    byte_4C01835 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_FortificationConfirmDialogComponent__Close_b__41_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
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
    sub_1C2E388(0LL, v6);
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
  __int64 v5; // x1
  signed int max_length; // w8
  int v7; // w9
  UserServantEntity_o *v8; // x10
  int32_t eventId; // w20
  UISprite_o *guestIconBefore; // x19

  v4 = this;
  if ( (byte_4C01831 & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, userServantEntity);
    this = (FortificationConfirmDialogComponent_o *)sub_1C2E12C(&StringLiteral_20520/*"icon_guest"*/, v5);
    byte_4C01831 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_21;
  max_length = userServantEntity->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( max_length == v7 )
      sub_1C2E390(this, userServantEntity);
    v8 = userServantEntity->m_Items[v7];
    if ( !v8 )
      goto LABEL_21;
    if ( !v8->fields.createdAt )
      break;
    if ( max_length == ++v7 )
      return 0;
  }
  if ( !v7 )
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
    sub_1C2E388(this, userServantEntity);
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
  AtlasManager__SetEventUI_39173640(eventId, guestIconBefore, (System_String_o *)StringLiteral_20520/*"icon_guest"*/, 0LL);
  return 1;
}


void __fastcall FortificationConfirmDialogComponent__OnClickCancel(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C01834 & 1) == 0 )
  {
    sub_1C2E12C(&Method_FortificationConfirmDialogComponent_OnClickCancel__, method);
    byte_4C01834 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144(Method_FortificationConfirmDialogComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  UnityEngine_Component_o *v35; // x1
  UnityEngine_Component_o *guestIconBefore; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  UILabel_o *v40; // x24
  UILabel_o *descriptionLb; // x24
  System_String_o *v42; // x0
  UILabel_o *warningDescriptionLb; // x24
  System_String_o *v44; // x1
  UILabel_o *v45; // x24
  UILabel_o *v46; // x24
  const MethodInfo *v47; // x2
  bool IsNpcServant; // w25
  UILabel_o *titleLb; // x24
  struct UILabel_o *removeDescriptionLb; // x24
  System_String_o *v51; // x0
  const MethodInfo *v52; // x3
  System_String_o *v53; // x0
  UILabel_o *v54; // x24
  const MethodInfo *v55; // x3
  int eventId; // w22
  UISprite_o *workTypeIcon; // x23
  Il2CppObject *v58; // x24
  Il2CppObject *v59; // x0
  System_String_o *v60; // x24
  UILabel_o *subTitleLb; // x22
  System_String_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v66; // x8
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v69; // x20
  int v70; // [xsp+8h] [xbp-48h] BYREF
  int32_t v71; // [xsp+Ch] [xbp-44h] BYREF

  v71 = workType;
  if ( (byte_4C01830 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&dialogType);
    sub_1C2E12C(&AtlasManager_TypeInfo, v16);
    sub_1C2E12C(&Method_FortificationConfirmDialogComponent__Open_b__32_0__, v17);
    sub_1C2E12C(&int_TypeInfo, v18);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v19);
    sub_1C2E12C(&StringLiteral_5081/*"D2"*/, v20);
    sub_1C2E12C(&StringLiteral_6613/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v21);
    sub_1C2E12C(&StringLiteral_6622/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, v22);
    sub_1C2E12C(&StringLiteral_6625/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/, v23);
    sub_1C2E12C(&StringLiteral_6612/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, v24);
    sub_1C2E12C(&StringLiteral_6611/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, v25);
    sub_1C2E12C(&StringLiteral_6627/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/, v26);
    sub_1C2E12C(&StringLiteral_3800/*"COMMON_CONFIRM_DECIDE"*/, v27);
    sub_1C2E12C(&StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, v28);
    sub_1C2E12C(&StringLiteral_6628/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v29);
    sub_1C2E12C(&StringLiteral_6624/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, v30);
    sub_1C2E12C(&StringLiteral_20514/*"icon_event_{0}{1}"*/, v31);
    sub_1C2E12C(&StringLiteral_6616/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, v32);
    sub_1C2E12C(&StringLiteral_6626/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, v33);
    sub_1C2E12C(&StringLiteral_1/*""*/, v34);
    byte_4C01830 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.onDecide,
      (int64_t)onDecide,
      (int64_t)userServantEntity,
      (int32_t)point,
      teamName,
      (BattleSetupInfo_o *)detailName,
      *(FollowerInfo_o **)&workType,
      (PartyListViewItem_o *)onDecide);
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
                                                       (System_String_o *)StringLiteral_6625/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/,
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
        v51 = LocalizationManager__Get((System_String_o *)StringLiteral_6624/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v51, (Il2CppObject *)detailName, 0LL);
        if ( !removeDescriptionLb )
          goto LABEL_52;
        v44 = (System_String_o *)guestIconBefore;
        guestIconBefore = (UnityEngine_Component_o *)removeDescriptionLb;
      }
      else
      {
        if ( dialogType )
          goto LABEL_40;
        v40 = this->fields.titleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6627/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v40 )
          goto LABEL_52;
        UILabel__set_text(v40, (System_String_o *)guestIconBefore, 0LL);
        descriptionLb = this->fields.descriptionLb;
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_6626/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v42, (Il2CppObject *)detailName, 0LL);
        if ( !descriptionLb )
          goto LABEL_52;
        UILabel__set_text(descriptionLb, (System_String_o *)guestIconBefore, 0LL);
        warningDescriptionLb = this->fields.warningDescriptionLb;
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6628/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !warningDescriptionLb )
          goto LABEL_52;
        UILabel__set_text(warningDescriptionLb, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_52;
        v44 = (System_String_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text((UILabel_o *)guestIconBefore, v44, 0LL);
      FortificationConfirmDialogComponent__SetSingleServantDisplay(this, userServantEntity, point, v52);
LABEL_40:
      eventId = this->fields.eventId;
      workTypeIcon = this->fields.workTypeIcon;
      v70 = eventId;
      v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v37, v38, v39);
      v59 = (Il2CppObject *)System_Int32__ToString_64041192((int32_t)&v71, (System_String_o *)StringLiteral_5081/*"D2"*/, 0LL);
      v60 = System_String__Format_63249956((System_String_o *)StringLiteral_20514/*"icon_event_{0}{1}"*/, v58, v59, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventUI_39173640(eventId, workTypeIcon, v60, 0LL);
      subTitleLb = this->fields.subTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v62 = LocalizationManager__Get((System_String_o *)StringLiteral_6616/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
      guestIconBefore = (UnityEngine_Component_o *)System_String__Format_63249956(
                                                     v62,
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
            v63 = (UnityEngine_GameObject_o *)guestIconBefore;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.subTitleLb, 0LL);
            LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
            v66 = this->fields.subTitleLb;
            if ( v66 )
            {
              GameObjectExtensions__SetLocalPositionX(
                v63,
                (float)(LocalPositionX - (float)(v66->fields.mWidth / 2)) + (float)this->fields.iconBetweenWidth,
                0LL);
              decideButtonLb = this->fields.decideButtonLb;
              guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3800/*"COMMON_CONFIRM_DECIDE"*/,
                                                             0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)guestIconBefore, 0LL);
                cancelButtonLb = this->fields.cancelButtonLb;
                guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/,
                                                               0LL);
                if ( cancelButtonLb )
                {
                  UILabel__set_text(cancelButtonLb, (System_String_o *)guestIconBefore, 0LL);
                  this->fields.state = 1;
                  v69 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
                  System_Action___ctor(
                    v69,
                    (Il2CppObject *)this,
                    Method_FortificationConfirmDialogComponent__Open_b__32_0__,
                    0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v69, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1C2E388(guestIconBefore, v35);
    }
    v45 = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6612/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !v45 )
      goto LABEL_52;
    UILabel__set_text(v45, (System_String_o *)guestIconBefore, 0LL);
    v46 = this->fields.descriptionLb;
    IsNpcServant = FortificationConfirmDialogComponent__IsNpcServant(this, userServantEntity, v47);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsNpcServant )
      {
LABEL_23:
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6622/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/,
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
    v53 = LocalizationManager__Get((System_String_o *)StringLiteral_6611/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v53, (Il2CppObject *)detailName, 0LL);
LABEL_34:
    v35 = guestIconBefore;
    if ( !v46 )
      goto LABEL_52;
    UILabel__set_text(v46, (System_String_o *)guestIconBefore, 0LL);
    v54 = this->fields.warningDescriptionLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6613/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, 0LL);
    if ( !v54 )
      goto LABEL_52;
    UILabel__set_text(v54, (System_String_o *)guestIconBefore, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
    if ( !guestIconBefore )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    FortificationConfirmDialogComponent__SetDoubleServantDisplay(this, userServantEntity, point, v55);
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
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *singleServantDisplayObject; // x0
  UILabel_o *beforeLb; // x22
  const MethodInfo *v11; // x6
  UILabel_o *afterLb; // x22
  const MethodInfo *v13; // x6

  if ( (byte_4C01832 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, userServantEntity);
    sub_1C2E12C(&StringLiteral_6609/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/, v7);
    sub_1C2E12C(&StringLiteral_6610/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/, v8);
    byte_4C01832 = 1;
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
                                                             (System_String_o *)StringLiteral_6610/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/,
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
    v11);
  afterLb = this->fields.afterLb;
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6609/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/,
                                                             0LL);
  if ( !afterLb )
LABEL_16:
    sub_1C2E388(singleServantDisplayObject, userServantEntity);
  UILabel__set_text(afterLb, (System_String_o *)singleServantDisplayObject, 0LL);
  if ( userServantEntity->max_length <= 1 || point->max_length <= 1 )
LABEL_17:
    sub_1C2E390(singleServantDisplayObject, userServantEntity);
  FortificationConfirmDialogComponent__SetServant(
    (FortificationConfirmDialogComponent_o *)singleServantDisplayObject,
    this->fields.pointDescriptionLbAfter,
    this->fields.pointLbAfter,
    this->fields.servantFaceIconAfter,
    userServantEntity->m_Items[1],
    point->m_Items[2],
    v13);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  IconLabelInfo_o *v17; // x22
  System_String_o *LevelMax; // x0
  __int64 v19; // x1
  System_String_o *v20; // x24
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x0
  int32_t lv; // w21
  int32_t v27; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C01833 & 1) == 0 )
  {
    sub_1C2E12C(&IconLabelInfo_TypeInfo, label1);
    sub_1C2E12C(&int_TypeInfo, v12);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v13);
    sub_1C2E12C(&StringLiteral_6614/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, v14);
    sub_1C2E12C(&StringLiteral_6615/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, v15);
    sub_1C2E12C(&StringLiteral_25402/*"{0:#,0}"*/, v16);
    byte_4C01833 = 1;
  }
  v17 = (IconLabelInfo_o *)sub_1C2E378(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_6615/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, 0LL);
  if ( !label1 )
    goto LABEL_11;
  UILabel__set_text(label1, LevelMax, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6614/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, 0LL);
  v27 = point;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v21, v22, v23);
  v25 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25402/*"{0:#,0}"*/, v24, 0LL);
  LevelMax = System_String__Format(v20, v25, 0LL);
  if ( !label2
    || (UILabel__set_text(label2, LevelMax, 0LL), !ent)
    || (lv = ent->fields.lv, LevelMax = (System_String_o *)UserServantEntity__getLevelMax(ent, 0LL), !v17)
    || (IconLabelInfo__Set_39452344(v17, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL), !faceIcon) )
  {
LABEL_11:
    sub_1C2E388(LevelMax, v19);
  }
  ServantFaceIconComponent__Set_39534600(faceIcon, ent, v17, 0LL, 0LL);
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
    sub_1C2E388(singleServantDisplayObject, userServantEntity);
  if ( !point->max_length )
LABEL_9:
    sub_1C2E390(singleServantDisplayObject, userServantEntity);
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

  if ( (byte_4C01836 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C01836 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C2E388(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}