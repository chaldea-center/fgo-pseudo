void __fastcall FortificationConfirmDialogComponent___ctor(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42175EA & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_42175EA = 1;
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
    sub_B0D840(p_onDecide, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onDecide, 0LL);
  }
}


void __fastcall FortificationConfirmDialogComponent__Close(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_42175E8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_FortificationConfirmDialogComponent__Close_b__41_0__, v4);
    byte_42175E8 = 1;
  }
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_FortificationConfirmDialogComponent__Close_b__41_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall FortificationConfirmDialogComponent__Init(
        FortificationConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
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
  if ( (byte_42175E4 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, userServantEntity);
    this = (FortificationConfirmDialogComponent_o *)sub_B0D8A4(&StringLiteral_19406/*"icon_guest"*/, v5);
    byte_42175E4 = 1;
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
      v12 = sub_B0D9A8(this);
      sub_B0D948(v12, 0LL);
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
    sub_B0D97C(this);
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
  AtlasManager__SetEventUI_27921852(eventId, guestIconBefore, (System_String_o *)StringLiteral_19406/*"icon_guest"*/, 0LL);
  return 1;
}


void __fastcall FortificationConfirmDialogComponent__OnClickCancel(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_42175E7 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_42175E7 = 1;
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
  UnityEngine_Component_o *guestIconBefore; // x0
  UILabel_o *v36; // x24
  UILabel_o *v37; // x24
  System_String_o *v38; // x0
  UILabel_o *v39; // x24
  System_String_o *v40; // x1
  UILabel_o *v41; // x24
  struct UILabel_o *removeDescriptionLb; // x24
  System_String_o *v43; // x0
  const MethodInfo *v44; // x3
  UILabel_o *titleLb; // x24
  UILabel_o *descriptionLb; // x24
  const MethodInfo *v47; // x2
  System_String_o *v48; // x0
  UILabel_o *warningDescriptionLb; // x24
  const MethodInfo *v50; // x3
  int eventId; // w22
  UISprite_o *workTypeIcon; // x23
  Il2CppObject *v53; // x24
  Il2CppObject *v54; // x0
  System_String_o *v55; // x24
  UILabel_o *subTitleLb; // x22
  System_String_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v61; // x8
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  __int64 v64; // x1
  __int64 v65; // x2
  System_Action_o *v66; // x20
  int v67; // [xsp+8h] [xbp-48h] BYREF
  int32_t v68; // [xsp+Ch] [xbp-44h] BYREF

  v68 = workType;
  if ( (byte_42175E3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&dialogType);
    sub_B0D8A4(&AtlasManager_TypeInfo, v16);
    sub_B0D8A4(&Method_FortificationConfirmDialogComponent__Open_b__32_0__, v17);
    sub_B0D8A4(&int_TypeInfo, v18);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_4562/*"D2"*/, v20);
    sub_B0D8A4(&StringLiteral_6439/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v21);
    sub_B0D8A4(&StringLiteral_6448/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, v22);
    sub_B0D8A4(&StringLiteral_6451/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/, v23);
    sub_B0D8A4(&StringLiteral_6438/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, v24);
    sub_B0D8A4(&StringLiteral_6437/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, v25);
    sub_B0D8A4(&StringLiteral_6453/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/, v26);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v27);
    sub_B0D8A4(&StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/, v28);
    sub_B0D8A4(&StringLiteral_6454/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v29);
    sub_B0D8A4(&StringLiteral_6450/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, v30);
    sub_B0D8A4(&StringLiteral_19400/*"icon_event_{0}{1}"*/, v31);
    sub_B0D8A4(&StringLiteral_6442/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, v32);
    sub_B0D8A4(&StringLiteral_6452/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, v33);
    sub_B0D8A4(&StringLiteral_1/*""*/, v34);
    byte_42175E3 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B0D840(
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
                                                       (System_String_o *)StringLiteral_6438/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !titleLb )
          goto LABEL_62;
        UILabel__set_text(titleLb, (System_String_o *)guestIconBefore, 0LL);
        descriptionLb = this->fields.descriptionLb;
        if ( FortificationConfirmDialogComponent__IsNpcServant(this, userServantEntity, v47) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6448/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/,
                                                         0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v48 = LocalizationManager__Get((System_String_o *)StringLiteral_6437/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
          guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v48, (Il2CppObject *)detailName, 0LL);
        }
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
                                                       (System_String_o *)StringLiteral_6439/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !warningDescriptionLb )
          goto LABEL_62;
        UILabel__set_text(warningDescriptionLb, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        FortificationConfirmDialogComponent__SetDoubleServantDisplay(this, userServantEntity, point, v50);
        break;
      case 1:
        v41 = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6451/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v41 )
          goto LABEL_62;
        UILabel__set_text(v41, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.descriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.warningDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        removeDescriptionLb = this->fields.removeDescriptionLb;
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_6450/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v43, (Il2CppObject *)detailName, 0LL);
        if ( !removeDescriptionLb )
          goto LABEL_62;
        v40 = (System_String_o *)guestIconBefore;
        guestIconBefore = (UnityEngine_Component_o *)removeDescriptionLb;
        goto LABEL_27;
      case 0:
        v36 = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6453/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v36 )
          goto LABEL_62;
        UILabel__set_text(v36, (System_String_o *)guestIconBefore, 0LL);
        v37 = this->fields.descriptionLb;
        v38 = LocalizationManager__Get((System_String_o *)StringLiteral_6452/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v38, (Il2CppObject *)detailName, 0LL);
        if ( !v37 )
          goto LABEL_62;
        UILabel__set_text(v37, (System_String_o *)guestIconBefore, 0LL);
        v39 = this->fields.warningDescriptionLb;
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6454/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !v39 )
          goto LABEL_62;
        UILabel__set_text(v39, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        v40 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
        UILabel__set_text((UILabel_o *)guestIconBefore, v40, 0LL);
        FortificationConfirmDialogComponent__SetSingleServantDisplay(this, userServantEntity, point, v44);
        break;
    }
    eventId = this->fields.eventId;
    workTypeIcon = this->fields.workTypeIcon;
    v67 = eventId;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
    v54 = (Il2CppObject *)System_Int32__ToString_38473032((int32_t)&v68, (System_String_o *)StringLiteral_4562/*"D2"*/, 0LL);
    v55 = System_String__Format_43845440((System_String_o *)StringLiteral_19400/*"icon_event_{0}{1}"*/, v53, v54, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_27921852(eventId, workTypeIcon, v55, 0LL);
    subTitleLb = this->fields.subTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_6442/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)System_String__Format_43845440(
                                                   v57,
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
          v58 = (UnityEngine_GameObject_o *)guestIconBefore;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.subTitleLb, 0LL);
          LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
          v61 = this->fields.subTitleLb;
          if ( v61 )
          {
            GameObjectExtensions__SetLocalPositionX(
              v58,
              (float)(LocalPositionX - (float)(v61->fields.mWidth / 2)) + (float)this->fields.iconBetweenWidth,
              0LL);
            decideButtonLb = this->fields.decideButtonLb;
            guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/,
                                                           0LL);
            if ( decideButtonLb )
            {
              UILabel__set_text(decideButtonLb, (System_String_o *)guestIconBefore, 0LL);
              cancelButtonLb = this->fields.cancelButtonLb;
              guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3274/*"COMMON_CONFIRM_CLOSE"*/,
                                                             0LL);
              if ( cancelButtonLb )
              {
                UILabel__set_text(cancelButtonLb, (System_String_o *)guestIconBefore, 0LL);
                this->fields.state = 1;
                v66 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v64, v65);
                System_Action___ctor(
                  v66,
                  (Il2CppObject *)this,
                  Method_FortificationConfirmDialogComponent__Open_b__32_0__,
                  0LL);
                BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_62:
    sub_B0D97C(guestIconBefore);
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

  if ( (byte_42175E5 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, userServantEntity);
    sub_B0D8A4(&StringLiteral_6435/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/, v7);
    sub_B0D8A4(&StringLiteral_6436/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/, v8);
    byte_42175E5 = 1;
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
                                                             (System_String_o *)StringLiteral_6436/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/,
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
                                                             (System_String_o *)StringLiteral_6435/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/,
                                                             0LL);
  if ( !afterLb )
LABEL_17:
    sub_B0D97C(singleServantDisplayObject);
  UILabel__set_text(afterLb, (System_String_o *)singleServantDisplayObject, 0LL);
  if ( userServantEntity->max_length <= 1 || point->max_length <= 1 )
  {
LABEL_18:
    v14 = sub_B0D9A8(singleServantDisplayObject);
    sub_B0D948(v14, 0LL);
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
  System_String_o *v19; // x24
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x0
  int32_t lv; // w21
  int32_t v23; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42175E6 & 1) == 0 )
  {
    sub_B0D8A4(&IconLabelInfo_TypeInfo, label1);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_6440/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, v14);
    sub_B0D8A4(&StringLiteral_6441/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, v15);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v16);
    byte_42175E6 = 1;
  }
  v17 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, label1, label2);
  IconLabelInfo___ctor(v17, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_6441/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, 0LL);
  if ( !label1 )
    goto LABEL_12;
  UILabel__set_text(label1, LevelMax, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6440/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, 0LL);
  v23 = point;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v21 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v20, 0LL);
  LevelMax = System_String__Format(v19, v21, 0LL);
  if ( !label2
    || (UILabel__set_text(label2, LevelMax, 0LL), !ent)
    || (lv = ent->fields.lv, LevelMax = (System_String_o *)UserServantEntity__getLevelMax(ent, 0LL), !v17)
    || (IconLabelInfo__Set_26821248(v17, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL), !faceIcon) )
  {
LABEL_12:
    sub_B0D97C(LevelMax);
  }
  ServantFaceIconComponent__Set_29552540(faceIcon, ent, v17, 0LL, 0LL);
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
    sub_B0D97C(singleServantDisplayObject);
  if ( !point->max_length )
  {
LABEL_9:
    v9 = sub_B0D9A8(singleServantDisplayObject);
    sub_B0D948(v9, 0LL);
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
  UnityEngine_Component_o *v5; // x0

  if ( (byte_42175E9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42175E9 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B0D97C(0LL);
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}