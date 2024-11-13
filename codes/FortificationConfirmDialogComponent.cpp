void __fastcall FortificationConfirmDialogComponent___ctor(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A147 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B1A147 = 1;
  }
  this->fields.iconBetweenWidth = -16;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_onDecide, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
      onDecide->fields.original_method_info,
      *(_QWORD *)&onDecide->fields.extra_arg);
  }
}


void __fastcall FortificationConfirmDialogComponent__Close(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1A145 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_FortificationConfirmDialogComponent__Close_b__41_0__, v5, v6);
    byte_4B1A145 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FortificationConfirmDialogComponent__Close_b__41_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
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
    sub_1BCAA3C(0LL, v6);
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
  __int64 v6; // x2
  signed int max_length; // w8
  int v8; // w9
  UserServantEntity_o *v9; // x10
  __int64 v11; // x1
  int32_t eventId; // w20
  UISprite_o *guestIconBefore; // x19

  v4 = this;
  if ( (byte_4B1A141 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, userServantEntity, method);
    this = (FortificationConfirmDialogComponent_o *)sub_1BCA7E0(&StringLiteral_20368/*"icon_guest"*/, v5, v6);
    byte_4B1A141 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_21;
  max_length = userServantEntity->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( max_length == v8 )
      sub_1BCAA44(this, userServantEntity);
    v9 = userServantEntity->m_Items[v8];
    if ( !v9 )
      goto LABEL_21;
    if ( !v9->fields.createdAt )
      break;
    if ( max_length == ++v8 )
      return 0;
  }
  if ( !v8 )
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
    sub_1BCAA3C(this, userServantEntity);
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
  AtlasManager__SetEventUI_38574572(eventId, guestIconBefore, (System_String_o *)StringLiteral_20368/*"icon_guest"*/, 0LL);
  return 1;
}


void __fastcall FortificationConfirmDialogComponent__OnClickCancel(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1A144 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_FortificationConfirmDialogComponent_OnClickCancel__, method, v2);
    byte_4B1A144 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_FortificationConfirmDialogComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationConfirmDialogComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_FortificationConfirmDialogComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    FortificationConfirmDialogComponent__Close(this, v6);
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
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  UnityEngine_Component_o *v54; // x1
  UnityEngine_Component_o *guestIconBefore; // x0
  __int64 v56; // x1
  UILabel_o *v57; // x24
  UILabel_o *descriptionLb; // x24
  System_String_o *v59; // x0
  UILabel_o *warningDescriptionLb; // x24
  System_String_o *v61; // x1
  UILabel_o *v62; // x24
  UILabel_o *v63; // x24
  const MethodInfo *v64; // x2
  __int64 v65; // x1
  bool IsNpcServant; // w25
  UILabel_o *titleLb; // x24
  struct UILabel_o *removeDescriptionLb; // x24
  System_String_o *v69; // x0
  const MethodInfo *v70; // x3
  System_String_o *v71; // x0
  __int64 v72; // x1
  UILabel_o *v73; // x24
  const MethodInfo *v74; // x3
  int eventId; // w22
  UISprite_o *workTypeIcon; // x23
  Il2CppObject *v77; // x24
  Il2CppObject *v78; // x0
  __int64 v79; // x1
  System_String_o *v80; // x24
  __int64 v81; // x1
  UILabel_o *subTitleLb; // x22
  System_String_o *v83; // x0
  UnityEngine_GameObject_o *v84; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v87; // x8
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  System_Action_o *v93; // x20
  int v94; // [xsp+8h] [xbp-48h] BYREF
  int32_t v95; // [xsp+Ch] [xbp-44h] BYREF

  v95 = workType;
  if ( (byte_4B1A140 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&dialogType, userServantEntity);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_FortificationConfirmDialogComponent__Open_b__32_0__, v18, v19);
    sub_1BCA7E0(&int_TypeInfo, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_5060/*"D2"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_6574/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_6583/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_6586/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_6573/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_6572/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_6588/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_6589/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_6585/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_20362/*"icon_event_{0}{1}"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_6577/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_6587/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v52, v53);
    byte_4B1A140 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_1BCA784(
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6586/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/,
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
        v69 = LocalizationManager__Get((System_String_o *)StringLiteral_6585/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v69, (Il2CppObject *)detailName, 0LL);
        if ( !removeDescriptionLb )
          goto LABEL_52;
        v61 = (System_String_o *)guestIconBefore;
        guestIconBefore = (UnityEngine_Component_o *)removeDescriptionLb;
      }
      else
      {
        if ( dialogType )
          goto LABEL_40;
        v57 = this->fields.titleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6588/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v57 )
          goto LABEL_52;
        UILabel__set_text(v57, (System_String_o *)guestIconBefore, 0LL);
        descriptionLb = this->fields.descriptionLb;
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_6587/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v59, (Il2CppObject *)detailName, 0LL);
        if ( !descriptionLb )
          goto LABEL_52;
        UILabel__set_text(descriptionLb, (System_String_o *)guestIconBefore, 0LL);
        warningDescriptionLb = this->fields.warningDescriptionLb;
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6589/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !warningDescriptionLb )
          goto LABEL_52;
        UILabel__set_text(warningDescriptionLb, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_52;
        v61 = (System_String_o *)StringLiteral_1/*""*/;
      }
      UILabel__set_text((UILabel_o *)guestIconBefore, v61, 0LL);
      FortificationConfirmDialogComponent__SetSingleServantDisplay(this, userServantEntity, point, v70);
LABEL_40:
      eventId = this->fields.eventId;
      workTypeIcon = this->fields.workTypeIcon;
      v94 = eventId;
      v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v94);
      v78 = (Il2CppObject *)System_Int32__ToString_63206828((int32_t)&v95, (System_String_o *)StringLiteral_5060/*"D2"*/, 0LL);
      v80 = System_String__Format_62415592((System_String_o *)StringLiteral_20362/*"icon_event_{0}{1}"*/, v77, v78, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v79);
      AtlasManager__SetEventUI_38574572(eventId, workTypeIcon, v80, 0LL);
      subTitleLb = this->fields.subTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v81);
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_6577/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
      guestIconBefore = (UnityEngine_Component_o *)System_String__Format_62415592(
                                                     v83,
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
            v84 = (UnityEngine_GameObject_o *)guestIconBefore;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.subTitleLb, 0LL);
            LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
            v87 = this->fields.subTitleLb;
            if ( v87 )
            {
              GameObjectExtensions__SetLocalPositionX(
                v84,
                (float)(LocalPositionX - (float)(v87->fields.mWidth / 2)) + (float)this->fields.iconBetweenWidth,
                0LL);
              decideButtonLb = this->fields.decideButtonLb;
              guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3788/*"COMMON_CONFIRM_DECIDE"*/,
                                                             0LL);
              if ( decideButtonLb )
              {
                UILabel__set_text(decideButtonLb, (System_String_o *)guestIconBefore, 0LL);
                cancelButtonLb = this->fields.cancelButtonLb;
                guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/,
                                                               0LL);
                if ( cancelButtonLb )
                {
                  UILabel__set_text(cancelButtonLb, (System_String_o *)guestIconBefore, 0LL);
                  this->fields.state = 1;
                  v93 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v90, v91, v92);
                  System_Action___ctor(
                    v93,
                    (Il2CppObject *)this,
                    Method_FortificationConfirmDialogComponent__Open_b__32_0__,
                    0LL);
                  BaseDialog__Open((BaseDialog_o *)this, v93, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1BCAA3C(guestIconBefore, v54);
    }
    v62 = this->fields.titleLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v56);
    guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6573/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, 0LL);
    if ( !v62 )
      goto LABEL_52;
    UILabel__set_text(v62, (System_String_o *)guestIconBefore, 0LL);
    v63 = this->fields.descriptionLb;
    IsNpcServant = FortificationConfirmDialogComponent__IsNpcServant(this, userServantEntity, v64);
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( IsNpcServant )
      {
LABEL_23:
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6583/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/,
                                                       0LL);
        goto LABEL_34;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
      if ( IsNpcServant )
        goto LABEL_23;
    }
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_6572/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v71, (Il2CppObject *)detailName, 0LL);
LABEL_34:
    v54 = guestIconBefore;
    if ( !v63 )
      goto LABEL_52;
    UILabel__set_text(v63, (System_String_o *)guestIconBefore, 0LL);
    v73 = this->fields.warningDescriptionLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
    guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6574/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, 0LL);
    if ( !v73 )
      goto LABEL_52;
    UILabel__set_text(v73, (System_String_o *)guestIconBefore, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
    if ( !guestIconBefore )
      goto LABEL_52;
    UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    FortificationConfirmDialogComponent__SetDoubleServantDisplay(this, userServantEntity, point, v74);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *singleServantDisplayObject; // x0
  __int64 v12; // x1
  UILabel_o *beforeLb; // x22
  const MethodInfo *v14; // x6
  UILabel_o *afterLb; // x22
  const MethodInfo *v16; // x6

  if ( (byte_4B1A142 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, userServantEntity, point);
    sub_1BCA7E0(&StringLiteral_6570/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_6571/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/, v9, v10);
    byte_4B1A142 = 1;
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6571/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/,
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
    v14);
  afterLb = this->fields.afterLb;
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6570/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/,
                                                             0LL);
  if ( !afterLb )
LABEL_16:
    sub_1BCAA3C(singleServantDisplayObject, userServantEntity);
  UILabel__set_text(afterLb, (System_String_o *)singleServantDisplayObject, 0LL);
  if ( userServantEntity->max_length <= 1 || point->max_length <= 1 )
LABEL_17:
    sub_1BCAA44(singleServantDisplayObject, userServantEntity);
  FortificationConfirmDialogComponent__SetServant(
    (FortificationConfirmDialogComponent_o *)singleServantDisplayObject,
    this->fields.pointDescriptionLbAfter,
    this->fields.pointLbAfter,
    this->fields.servantFaceIconAfter,
    userServantEntity->m_Items[1],
    point->m_Items[2],
    v16);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  IconLabelInfo_o *v22; // x22
  __int64 v23; // x1
  System_String_o *LevelMax; // x0
  __int64 v25; // x1
  System_String_o *v26; // x24
  Il2CppObject *v27; // x0
  Il2CppObject *v28; // x0
  int32_t lv; // w21
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B1A143 & 1) == 0 )
  {
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, label1, label2);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_6575/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_6576/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v20, v21);
    byte_4B1A143 = 1;
  }
  v22 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, label1, label2, faceIcon);
  IconLabelInfo___ctor(v22, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_6576/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, 0LL);
  if ( !label1 )
    goto LABEL_11;
  UILabel__set_text(label1, LevelMax, 0LL);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6575/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, 0LL);
  v30 = point;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
  v28 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v27, 0LL);
  LevelMax = System_String__Format(v26, v28, 0LL);
  if ( !label2
    || (UILabel__set_text(label2, LevelMax, 0LL), !ent)
    || (lv = ent->fields.lv, LevelMax = (System_String_o *)UserServantEntity__getLevelMax(ent, 0LL), !v22)
    || (IconLabelInfo__Set_38850420(v22, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL), !faceIcon) )
  {
LABEL_11:
    sub_1BCAA3C(LevelMax, v25);
  }
  ServantFaceIconComponent__Set_38931252(faceIcon, ent, v22, 0LL, 0LL);
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
    sub_1BCAA3C(singleServantDisplayObject, userServantEntity);
  if ( !point->max_length )
LABEL_9:
    sub_1BCAA44(singleServantDisplayObject, userServantEntity);
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
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_4B1A146 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A146 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_1BCAA3C(0LL, v5);
  return UnityEngine_Component__get_gameObject(v7, 0LL);
}