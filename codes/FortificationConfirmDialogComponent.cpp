void __fastcall FortificationConfirmDialogComponent___ctor(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_43554C6 & 1) == 0 )
  {
    sub_B70694(&BaseDialog_TypeInfo);
    byte_43554C6 = 1;
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
    sub_B70630(p_onDecide, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onDecide, 0LL);
  }
}


void __fastcall FortificationConfirmDialogComponent__Close(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_43554C4 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_FortificationConfirmDialogComponent__Close_b__41_0__);
    byte_43554C4 = 1;
  }
  this->fields.state = 4;
  v3 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
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
    sub_B7076C(0LL, v6);
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
  unsigned int v6; // w9
  UserServantEntity_o *v7; // x10
  int32_t eventId; // w20
  UISprite_o *guestIconBefore; // x19
  __int64 v11; // x0

  v4 = this;
  if ( (byte_43554C0 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    this = (FortificationConfirmDialogComponent_o *)sub_B70694(&StringLiteral_19647/*"icon_guest"*/);
    byte_43554C0 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_22;
  max_length = userServantEntity->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
    v7 = userServantEntity->m_Items[v6];
    if ( !v7 )
      goto LABEL_22;
    if ( !v7->fields.createdAt )
      break;
    if ( (int)++v6 >= max_length )
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
LABEL_22:
    sub_B7076C(this, userServantEntity);
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
  AtlasManager__SetEventUI_31552376(eventId, guestIconBefore, (System_String_o *)StringLiteral_19647/*"icon_guest"*/, 0LL);
  return 1;
}


void __fastcall FortificationConfirmDialogComponent__OnClickCancel(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_43554C3 & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    byte_43554C3 = 1;
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
  UnityEngine_Component_o *v16; // x1
  UnityEngine_Component_o *guestIconBefore; // x0
  __int64 v18; // x2
  UILabel_o *v19; // x24
  UILabel_o *v20; // x24
  System_String_o *v21; // x0
  UILabel_o *v22; // x24
  System_String_o *v23; // x1
  UILabel_o *v24; // x24
  struct UILabel_o *removeDescriptionLb; // x24
  System_String_o *v26; // x0
  const MethodInfo *v27; // x3
  UILabel_o *titleLb; // x24
  UILabel_o *descriptionLb; // x24
  const MethodInfo *v30; // x2
  System_String_o *v31; // x0
  UILabel_o *warningDescriptionLb; // x24
  const MethodInfo *v33; // x3
  int eventId; // w22
  UISprite_o *workTypeIcon; // x23
  Il2CppObject *v36; // x24
  Il2CppObject *v37; // x0
  System_String_o *v38; // x24
  UILabel_o *subTitleLb; // x22
  System_String_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v44; // x8
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v47; // x20
  int v48; // [xsp+8h] [xbp-48h] BYREF
  int32_t v49; // [xsp+Ch] [xbp-44h] BYREF

  v49 = workType;
  if ( (byte_43554BF & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_FortificationConfirmDialogComponent__Open_b__32_0__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_4629/*"D2"*/);
    sub_B70694(&StringLiteral_6514/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_6523/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_6526/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/);
    sub_B70694(&StringLiteral_6513/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/);
    sub_B70694(&StringLiteral_6512/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_6528/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/);
    sub_B70694(&StringLiteral_3337/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B70694(&StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/);
    sub_B70694(&StringLiteral_6529/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_6525/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_19641/*"icon_event_{0}{1}"*/);
    sub_B70694(&StringLiteral_6517/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/);
    sub_B70694(&StringLiteral_6527/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43554BF = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B70630(
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
                                                       (System_String_o *)StringLiteral_6513/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !titleLb )
          goto LABEL_62;
        UILabel__set_text(titleLb, (System_String_o *)guestIconBefore, 0LL);
        descriptionLb = this->fields.descriptionLb;
        if ( FortificationConfirmDialogComponent__IsNpcServant(this, userServantEntity, v30) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6523/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/,
                                                         0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_6512/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
          guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v31, (Il2CppObject *)detailName, 0LL);
        }
        v16 = guestIconBefore;
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
                                                       (System_String_o *)StringLiteral_6514/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !warningDescriptionLb )
          goto LABEL_62;
        UILabel__set_text(warningDescriptionLb, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        FortificationConfirmDialogComponent__SetDoubleServantDisplay(this, userServantEntity, point, v33);
        break;
      case 1:
        v24 = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6526/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v24 )
          goto LABEL_62;
        UILabel__set_text(v24, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.descriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.warningDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        removeDescriptionLb = this->fields.removeDescriptionLb;
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6525/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v26, (Il2CppObject *)detailName, 0LL);
        if ( !removeDescriptionLb )
          goto LABEL_62;
        v23 = (System_String_o *)guestIconBefore;
        guestIconBefore = (UnityEngine_Component_o *)removeDescriptionLb;
        goto LABEL_27;
      case 0:
        v19 = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6528/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v19 )
          goto LABEL_62;
        UILabel__set_text(v19, (System_String_o *)guestIconBefore, 0LL);
        v20 = this->fields.descriptionLb;
        v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6527/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v21, (Il2CppObject *)detailName, 0LL);
        if ( !v20 )
          goto LABEL_62;
        UILabel__set_text(v20, (System_String_o *)guestIconBefore, 0LL);
        v22 = this->fields.warningDescriptionLb;
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6529/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !v22 )
          goto LABEL_62;
        UILabel__set_text(v22, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        v23 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
        UILabel__set_text((UILabel_o *)guestIconBefore, v23, 0LL);
        FortificationConfirmDialogComponent__SetSingleServantDisplay(this, userServantEntity, point, v27);
        break;
    }
    eventId = this->fields.eventId;
    workTypeIcon = this->fields.workTypeIcon;
    v48 = eventId;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v18);
    v37 = (Il2CppObject *)System_Int32__ToString_39283984((int32_t)&v49, (System_String_o *)StringLiteral_4629/*"D2"*/, 0LL);
    v38 = System_String__Format_44753704((System_String_o *)StringLiteral_19641/*"icon_event_{0}{1}"*/, v36, v37, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31552376(eventId, workTypeIcon, v38, 0LL);
    subTitleLb = this->fields.subTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_6517/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)System_String__Format_44753704(
                                                   v40,
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
          v41 = (UnityEngine_GameObject_o *)guestIconBefore;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.subTitleLb, 0LL);
          LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
          v44 = this->fields.subTitleLb;
          if ( v44 )
          {
            GameObjectExtensions__SetLocalPositionX(
              v41,
              (float)(LocalPositionX - (float)(v44->fields.mWidth / 2)) + (float)this->fields.iconBetweenWidth,
              0LL);
            decideButtonLb = this->fields.decideButtonLb;
            guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3337/*"COMMON_CONFIRM_DECIDE"*/,
                                                           0LL);
            if ( decideButtonLb )
            {
              UILabel__set_text(decideButtonLb, (System_String_o *)guestIconBefore, 0LL);
              cancelButtonLb = this->fields.cancelButtonLb;
              guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3336/*"COMMON_CONFIRM_CLOSE"*/,
                                                             0LL);
              if ( cancelButtonLb )
              {
                UILabel__set_text(cancelButtonLb, (System_String_o *)guestIconBefore, 0LL);
                this->fields.state = 1;
                v47 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                System_Action___ctor(
                  v47,
                  (Il2CppObject *)this,
                  Method_FortificationConfirmDialogComponent__Open_b__32_0__,
                  0LL);
                BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_62:
    sub_B7076C(guestIconBefore, v16);
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
  __int64 v12; // x0

  if ( (byte_43554C1 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_6510/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/);
    sub_B70694(&StringLiteral_6511/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/);
    byte_43554C1 = 1;
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
                                                             (System_String_o *)StringLiteral_6511/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/,
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
    v9);
  afterLb = this->fields.afterLb;
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6510/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/,
                                                             0LL);
  if ( !afterLb )
LABEL_17:
    sub_B7076C(singleServantDisplayObject, userServantEntity);
  UILabel__set_text(afterLb, (System_String_o *)singleServantDisplayObject, 0LL);
  if ( userServantEntity->max_length <= 1 || point->max_length <= 1 )
  {
LABEL_18:
    v12 = sub_B70798(singleServantDisplayObject);
    sub_B70738(v12, 0LL);
  }
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
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x0
  int32_t lv; // w21
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_43554C2 & 1) == 0 )
  {
    sub_B70694(&IconLabelInfo_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_6515/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/);
    sub_B70694(&StringLiteral_6516/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/);
    sub_B70694(&StringLiteral_23872/*"{0:#,0}"*/);
    byte_43554C2 = 1;
  }
  v12 = (IconLabelInfo_o *)sub_B70764(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v12, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_6516/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, 0LL);
  if ( !label1 )
    goto LABEL_12;
  UILabel__set_text(label1, LevelMax, 0LL);
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_6515/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, 0LL);
  v20 = point;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v16);
  v18 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23872/*"{0:#,0}"*/, v17, 0LL);
  LevelMax = System_String__Format(v15, v18, 0LL);
  if ( !label2
    || (UILabel__set_text(label2, LevelMax, 0LL), !ent)
    || (lv = ent->fields.lv, LevelMax = (System_String_o *)UserServantEntity__getLevelMax(ent, 0LL), !v12)
    || (IconLabelInfo__Set_27789840(v12, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL), !faceIcon) )
  {
LABEL_12:
    sub_B7076C(LevelMax, v14);
  }
  ServantFaceIconComponent__Set_31406992(faceIcon, ent, v12, 0LL, 0LL);
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
    sub_B7076C(singleServantDisplayObject, userServantEntity);
  if ( !point->max_length )
  {
LABEL_9:
    v9 = sub_B70798(singleServantDisplayObject);
    sub_B70738(v9, 0LL);
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

  if ( (byte_43554C5 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43554C5 = 1;
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
    sub_B7076C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}