void __fastcall FortificationConfirmDialogComponent___ctor(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A827 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418A827 = 1;
  }
  this->fields.iconBetweenWidth = -16;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationConfirmDialogComponent__CallOnDecide(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *onDecide; // x19
  BattleServantConfConponent_o *p_onDecide; // x0

  onDecide = this->fields.onDecide;
  if ( onDecide )
  {
    p_onDecide = (BattleServantConfConponent_o *)&this->fields.onDecide;
    p_onDecide->klass = 0LL;
    sub_B2C2F8(p_onDecide, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onDecide, 0LL);
  }
}


void __fastcall FortificationConfirmDialogComponent__Close(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_418A825 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_FortificationConfirmDialogComponent__Close_b__41_0__, v3);
    byte_418A825 = 1;
  }
  this->fields.state = 4;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
    sub_B2C434(0LL, v6);
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
  unsigned int v7; // w9
  UserServantEntity_o *v8; // x10
  int32_t eventId; // w20
  UISprite_o *guestIconBefore; // x19
  __int64 v12; // x0

  v4 = this;
  if ( (byte_418A821 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, userServantEntity);
    this = (FortificationConfirmDialogComponent_o *)sub_B2C35C(&StringLiteral_19345/*"icon_guest"*/, v5);
    byte_418A821 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_22;
  max_length = userServantEntity->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
    {
      v12 = sub_B2C460(this);
      sub_B2C400(v12, 0LL);
    }
    v8 = userServantEntity->m_Items[v7];
    if ( !v8 )
      goto LABEL_22;
    if ( !v8->fields.createdAt )
      break;
    if ( (int)++v7 >= max_length )
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
LABEL_22:
    sub_B2C434(this, userServantEntity);
  }
  this = (FortificationConfirmDialogComponent_o *)v4->fields.guestIconAfter;
  if ( !this )
    goto LABEL_22;
  this = (FortificationConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  eventId = v4->fields.eventId;
  guestIconBefore = v4->fields.guestIconAfter;
LABEL_18:
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(eventId, guestIconBefore, (System_String_o *)StringLiteral_19345/*"icon_guest"*/, 0LL);
  return 1;
}


void __fastcall FortificationConfirmDialogComponent__OnClickCancel(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_418A824 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A824 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    FortificationConfirmDialogComponent__Close(this, v3);
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
  UILabel_o *v37; // x24
  UILabel_o *v38; // x24
  System_String_o *v39; // x0
  UILabel_o *v40; // x24
  System_String_o *v41; // x1
  UILabel_o *v42; // x24
  struct UILabel_o *removeDescriptionLb; // x24
  System_String_o *v44; // x0
  const MethodInfo *v45; // x3
  UILabel_o *titleLb; // x24
  UILabel_o *descriptionLb; // x24
  const MethodInfo *v48; // x2
  System_String_o *v49; // x0
  UILabel_o *warningDescriptionLb; // x24
  const MethodInfo *v51; // x3
  int eventId; // w22
  UISprite_o *workTypeIcon; // x23
  Il2CppObject *v54; // x24
  Il2CppObject *v55; // x0
  System_String_o *v56; // x24
  UILabel_o *subTitleLb; // x22
  System_String_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v62; // x8
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v65; // x20
  int v66; // [xsp+8h] [xbp-48h] BYREF
  int32_t v67; // [xsp+Ch] [xbp-44h] BYREF

  v67 = workType;
  if ( (byte_418A820 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&dialogType);
    sub_B2C35C(&AtlasManager_TypeInfo, v16);
    sub_B2C35C(&Method_FortificationConfirmDialogComponent__Open_b__32_0__, v17);
    sub_B2C35C(&int_TypeInfo, v18);
    sub_B2C35C(&LocalizationManager_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_4546/*"D2"*/, v20);
    sub_B2C35C(&StringLiteral_6422/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v21);
    sub_B2C35C(&StringLiteral_6431/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, v22);
    sub_B2C35C(&StringLiteral_6434/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/, v23);
    sub_B2C35C(&StringLiteral_6421/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, v24);
    sub_B2C35C(&StringLiteral_6420/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, v25);
    sub_B2C35C(&StringLiteral_6436/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/, v26);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v27);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v28);
    sub_B2C35C(&StringLiteral_6437/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v29);
    sub_B2C35C(&StringLiteral_6433/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, v30);
    sub_B2C35C(&StringLiteral_19339/*"icon_event_{0}{1}"*/, v31);
    sub_B2C35C(&StringLiteral_6425/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, v32);
    sub_B2C35C(&StringLiteral_6435/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, v33);
    sub_B2C35C(&StringLiteral_1/*""*/, v34);
    byte_418A820 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onDecide,
      (System_Int32_array **)onDecide,
      (System_String_array **)userServantEntity,
      (System_String_array **)point,
      (System_Boolean_array **)teamName,
      (System_Int32_array **)detailName,
      *(System_Int32_array **)&workType,
      (System_Int32_array *)onDecide);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.guestIconBefore;
    if ( !guestIconBefore )
      goto LABEL_62;
    guestIconBefore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(guestIconBefore, 0LL);
    if ( !guestIconBefore )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)guestIconBefore, 0, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)this->fields.guestIconAfter;
    if ( !guestIconBefore )
      goto LABEL_62;
    guestIconBefore = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(guestIconBefore, 0LL);
    if ( !guestIconBefore )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)guestIconBefore, 0, 0LL);
    switch ( dialogType )
    {
      case 2:
        titleLb = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6421/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !titleLb )
          goto LABEL_62;
        UILabel__set_text(titleLb, (System_String_o *)guestIconBefore, 0LL);
        descriptionLb = this->fields.descriptionLb;
        if ( FortificationConfirmDialogComponent__IsNpcServant(this, userServantEntity, v48) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6431/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/,
                                                         0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v49 = LocalizationManager__Get((System_String_o *)StringLiteral_6420/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
          guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v49, (Il2CppObject *)detailName, 0LL);
        }
        v35 = guestIconBefore;
        if ( !descriptionLb )
          goto LABEL_62;
        UILabel__set_text(descriptionLb, (System_String_o *)guestIconBefore, 0LL);
        warningDescriptionLb = this->fields.warningDescriptionLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6422/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !warningDescriptionLb )
          goto LABEL_62;
        UILabel__set_text(warningDescriptionLb, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        FortificationConfirmDialogComponent__SetDoubleServantDisplay(this, userServantEntity, point, v51);
        break;
      case 1:
        v42 = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6434/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v42 )
          goto LABEL_62;
        UILabel__set_text(v42, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.descriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.warningDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        removeDescriptionLb = this->fields.removeDescriptionLb;
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_6433/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v44, (Il2CppObject *)detailName, 0LL);
        if ( !removeDescriptionLb )
          goto LABEL_62;
        v41 = (System_String_o *)guestIconBefore;
        guestIconBefore = (UnityEngine_Component_o *)removeDescriptionLb;
        goto LABEL_27;
      case 0:
        v37 = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6436/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v37 )
          goto LABEL_62;
        UILabel__set_text(v37, (System_String_o *)guestIconBefore, 0LL);
        v38 = this->fields.descriptionLb;
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_6435/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v39, (Il2CppObject *)detailName, 0LL);
        if ( !v38 )
          goto LABEL_62;
        UILabel__set_text(v38, (System_String_o *)guestIconBefore, 0LL);
        v40 = this->fields.warningDescriptionLb;
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6437/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !v40 )
          goto LABEL_62;
        UILabel__set_text(v40, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        v41 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
        UILabel__set_text((UILabel_o *)guestIconBefore, v41, 0LL);
        FortificationConfirmDialogComponent__SetSingleServantDisplay(this, userServantEntity, point, v45);
        break;
    }
    eventId = this->fields.eventId;
    workTypeIcon = this->fields.workTypeIcon;
    v66 = eventId;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
    v55 = (Il2CppObject *)System_Int32__ToString_38381416((int32_t)&v67, (System_String_o *)StringLiteral_4546/*"D2"*/, 0LL);
    v56 = System_String__Format_44301068((System_String_o *)StringLiteral_19339/*"icon_event_{0}{1}"*/, v54, v55, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28451336(eventId, workTypeIcon, v56, 0LL);
    subTitleLb = this->fields.subTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v58 = LocalizationManager__Get((System_String_o *)StringLiteral_6425/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)System_String__Format_44301068(
                                                   v58,
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
          v59 = (UnityEngine_GameObject_o *)guestIconBefore;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.subTitleLb, 0LL);
          LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
          v62 = this->fields.subTitleLb;
          if ( v62 )
          {
            GameObjectExtensions__SetLocalPositionX(
              v59,
              (float)(LocalPositionX - (float)(v62->fields.mWidth / 2)) + (float)this->fields.iconBetweenWidth,
              0LL);
            decideButtonLb = this->fields.decideButtonLb;
            guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/,
                                                           0LL);
            if ( decideButtonLb )
            {
              UILabel__set_text(decideButtonLb, (System_String_o *)guestIconBefore, 0LL);
              cancelButtonLb = this->fields.cancelButtonLb;
              guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/,
                                                             0LL);
              if ( cancelButtonLb )
              {
                UILabel__set_text(cancelButtonLb, (System_String_o *)guestIconBefore, 0LL);
                this->fields.state = 1;
                v65 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(
                  v65,
                  (Il2CppObject *)this,
                  Method_FortificationConfirmDialogComponent__Open_b__32_0__,
                  0LL);
                BaseDialog__Open((BaseDialog_o *)this, v65, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_62:
    sub_B2C434(guestIconBefore, v35);
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
  __int64 v14; // x0

  if ( (byte_418A822 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, userServantEntity);
    sub_B2C35C(&StringLiteral_6418/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/, v7);
    sub_B2C35C(&StringLiteral_6419/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/, v8);
    byte_418A822 = 1;
  }
  singleServantDisplayObject = this->fields.singleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 0, 0LL);
  singleServantDisplayObject = this->fields.doubleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 1, 0LL);
  beforeLb = this->fields.beforeLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6419/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/,
                                                             0LL);
  if ( !beforeLb )
    goto LABEL_17;
  UILabel__set_text(beforeLb, (System_String_o *)singleServantDisplayObject, 0LL);
  if ( !userServantEntity )
    goto LABEL_17;
  if ( !userServantEntity->max_length )
    goto LABEL_18;
  if ( !point )
    goto LABEL_17;
  if ( !point->max_length )
    goto LABEL_18;
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
                                                             (System_String_o *)StringLiteral_6418/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/,
                                                             0LL);
  if ( !afterLb )
LABEL_17:
    sub_B2C434(singleServantDisplayObject, userServantEntity);
  UILabel__set_text(afterLb, (System_String_o *)singleServantDisplayObject, 0LL);
  if ( userServantEntity->max_length <= 1 || point->max_length <= 1 )
  {
LABEL_18:
    v14 = sub_B2C460(singleServantDisplayObject);
    sub_B2C400(v14, 0LL);
  }
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
  Il2CppObject *v21; // x0
  Il2CppObject *v22; // x0
  int32_t lv; // w21
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418A823 & 1) == 0 )
  {
    sub_B2C35C(&IconLabelInfo_TypeInfo, label1);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_6423/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, v14);
    sub_B2C35C(&StringLiteral_6424/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, v15);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v16);
    byte_418A823 = 1;
  }
  v17 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v17, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_6424/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, 0LL);
  if ( !label1 )
    goto LABEL_12;
  UILabel__set_text(label1, LevelMax, 0LL);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6423/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, 0LL);
  v24 = point;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v22 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v21, 0LL);
  LevelMax = System_String__Format(v20, v22, 0LL);
  if ( !label2
    || (UILabel__set_text(label2, LevelMax, 0LL), !ent)
    || (lv = ent->fields.lv, LevelMax = (System_String_o *)UserServantEntity__getLevelMax(ent, 0LL), !v17)
    || (IconLabelInfo__Set_27362128(v17, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL), !faceIcon) )
  {
LABEL_12:
    sub_B2C434(LevelMax, v19);
  }
  ServantFaceIconComponent__Set_30719352(faceIcon, ent, v17, 0LL, 0LL);
}


void __fastcall FortificationConfirmDialogComponent__SetSingleServantDisplay(
        FortificationConfirmDialogComponent_o *this,
        UserServantEntity_array *userServantEntity,
        System_Int32_array *point,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *singleServantDisplayObject; // x0
  const MethodInfo *v8; // x6
  __int64 v9; // x0

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
    sub_B2C434(singleServantDisplayObject, userServantEntity);
  if ( !point->max_length )
  {
LABEL_9:
    v9 = sub_B2C460(singleServantDisplayObject);
    sub_B2C400(v9, 0LL);
  }
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

  if ( (byte_418A826 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A826 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}