void __fastcall FortificationConfirmDialogComponent___ctor(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBDAA & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDAA = 1;
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
    sub_B5D560(p_onDecide, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onDecide, 0LL);
  }
}


void __fastcall FortificationConfirmDialogComponent__Close(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EBDA8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_FortificationConfirmDialogComponent__Close_b__41_0__, v5, v6, v7);
    byte_42EBDA8 = 1;
  }
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_FortificationConfirmDialogComponent__Close_b__41_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
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
    sub_B5D69C(0LL, v6);
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
  __int64 v3; // x3
  FortificationConfirmDialogComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  signed int max_length; // w8
  unsigned int v10; // w9
  UserServantEntity_o *v11; // x10
  int32_t eventId; // w20
  UISprite_o *guestIconBefore; // x19
  __int64 v15; // x0

  v5 = this;
  if ( (byte_42EBDA4 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)userServantEntity, (_DWORD)method, v3);
    this = (FortificationConfirmDialogComponent_o *)sub_B5D5C4(&StringLiteral_19589/*"icon_guest"*/, v6, v7, v8);
    byte_42EBDA4 = 1;
  }
  if ( !userServantEntity )
    goto LABEL_22;
  max_length = userServantEntity->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= max_length )
    {
      v15 = sub_B5D6C8(this);
      sub_B5D668(v15, 0LL);
    }
    v11 = userServantEntity->m_Items[v10];
    if ( !v11 )
      goto LABEL_22;
    if ( !v11->fields.createdAt )
      break;
    if ( (int)++v10 >= max_length )
      return 0;
  }
  if ( !v10 )
  {
    this = (FortificationConfirmDialogComponent_o *)v5->fields.guestIconBefore;
    if ( this )
    {
      this = (FortificationConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)this,
                                                        0LL);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        eventId = v5->fields.eventId;
        guestIconBefore = v5->fields.guestIconBefore;
        goto LABEL_18;
      }
    }
LABEL_22:
    sub_B5D69C(this, userServantEntity);
  }
  this = (FortificationConfirmDialogComponent_o *)v5->fields.guestIconAfter;
  if ( !this )
    goto LABEL_22;
  this = (FortificationConfirmDialogComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  if ( !this )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  eventId = v5->fields.eventId;
  guestIconBefore = v5->fields.guestIconAfter;
LABEL_18:
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, guestIconBefore, (System_String_o *)StringLiteral_19589/*"icon_guest"*/, 0LL);
  return 1;
}


void __fastcall FortificationConfirmDialogComponent__OnClickCancel(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EBDA7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDA7 = 1;
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  UnityEngine_Component_o *v73; // x1
  UnityEngine_Component_o *guestIconBefore; // x0
  UILabel_o *v75; // x24
  UILabel_o *v76; // x24
  System_String_o *v77; // x0
  UILabel_o *v78; // x24
  System_String_o *v79; // x1
  UILabel_o *v80; // x24
  struct UILabel_o *removeDescriptionLb; // x24
  System_String_o *v82; // x0
  const MethodInfo *v83; // x3
  UILabel_o *titleLb; // x24
  UILabel_o *descriptionLb; // x24
  const MethodInfo *v86; // x2
  System_String_o *v87; // x0
  UILabel_o *warningDescriptionLb; // x24
  const MethodInfo *v89; // x3
  int eventId; // w22
  UISprite_o *workTypeIcon; // x23
  Il2CppObject *v92; // x24
  Il2CppObject *v93; // x0
  System_String_o *v94; // x24
  UILabel_o *subTitleLb; // x22
  System_String_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v100; // x8
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v103; // x20
  int v104; // [xsp+8h] [xbp-48h] BYREF
  int32_t v105; // [xsp+Ch] [xbp-44h] BYREF

  v105 = workType;
  if ( (byte_42EBDA3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, dialogType, (_DWORD)userServantEntity, point);
    sub_B5D5C4(&AtlasManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_FortificationConfirmDialogComponent__Open_b__32_0__, v19, v20, v21);
    sub_B5D5C4(&int_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_4619/*"D2"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_6501/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_6510/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_6513/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_6500/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_6499/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_6515/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_6516/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_6512/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_19583/*"icon_event_{0}{1}"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_6504/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_6514/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_1/*""*/, v70, v71, v72);
    byte_42EBDA3 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B5D560(
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
                                                       (System_String_o *)StringLiteral_6500/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !titleLb )
          goto LABEL_62;
        UILabel__set_text(titleLb, (System_String_o *)guestIconBefore, 0LL);
        descriptionLb = this->fields.descriptionLb;
        if ( FortificationConfirmDialogComponent__IsNpcServant(this, userServantEntity, v86) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_6510/*"FORTIFICATION_NPC_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/,
                                                         0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v87 = LocalizationManager__Get((System_String_o *)StringLiteral_6499/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
          guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v87, (Il2CppObject *)detailName, 0LL);
        }
        v73 = guestIconBefore;
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
                                                       (System_String_o *)StringLiteral_6501/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !warningDescriptionLb )
          goto LABEL_62;
        UILabel__set_text(warningDescriptionLb, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        FortificationConfirmDialogComponent__SetDoubleServantDisplay(this, userServantEntity, point, v89);
        break;
      case 1:
        v80 = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6513/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v80 )
          goto LABEL_62;
        UILabel__set_text(v80, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.descriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.warningDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        UILabel__set_text((UILabel_o *)guestIconBefore, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        removeDescriptionLb = this->fields.removeDescriptionLb;
        v82 = LocalizationManager__Get((System_String_o *)StringLiteral_6512/*"FORTIFICATION_REMOVE_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v82, (Il2CppObject *)detailName, 0LL);
        if ( !removeDescriptionLb )
          goto LABEL_62;
        v79 = (System_String_o *)guestIconBefore;
        guestIconBefore = (UnityEngine_Component_o *)removeDescriptionLb;
        goto LABEL_27;
      case 0:
        v75 = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6515/*"FORTIFICATION_SET_CONFIRM_DIALOG_TITLE"*/,
                                                       0LL);
        if ( !v75 )
          goto LABEL_62;
        UILabel__set_text(v75, (System_String_o *)guestIconBefore, 0LL);
        v76 = this->fields.descriptionLb;
        v77 = LocalizationManager__Get((System_String_o *)StringLiteral_6514/*"FORTIFICATION_SET_CONFIRM_DIALOG_DESCRIPTION"*/, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)System_String__Format(v77, (Il2CppObject *)detailName, 0LL);
        if ( !v76 )
          goto LABEL_62;
        UILabel__set_text(v76, (System_String_o *)guestIconBefore, 0LL);
        v78 = this->fields.warningDescriptionLb;
        guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_6516/*"FORTIFICATION_SET_CONFIRM_DIALOG_WARNING_DESCRIPTION"*/,
                                                       0LL);
        if ( !v78 )
          goto LABEL_62;
        UILabel__set_text(v78, (System_String_o *)guestIconBefore, 0LL);
        guestIconBefore = (UnityEngine_Component_o *)this->fields.removeDescriptionLb;
        if ( !guestIconBefore )
          goto LABEL_62;
        v79 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_27:
        UILabel__set_text((UILabel_o *)guestIconBefore, v79, 0LL);
        FortificationConfirmDialogComponent__SetSingleServantDisplay(this, userServantEntity, point, v83);
        break;
    }
    eventId = this->fields.eventId;
    workTypeIcon = this->fields.workTypeIcon;
    v104 = eventId;
    v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
    v93 = (Il2CppObject *)System_Int32__ToString_39741776((int32_t)&v105, (System_String_o *)StringLiteral_4619/*"D2"*/, 0LL);
    v94 = System_String__Format_44573324((System_String_o *)StringLiteral_19583/*"icon_event_{0}{1}"*/, v92, v93, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31190412(eventId, workTypeIcon, v94, 0LL);
    subTitleLb = this->fields.subTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v96 = LocalizationManager__Get((System_String_o *)StringLiteral_6504/*"FORTIFICATION_CONFIRM_DIALOG_SUB_TITLE"*/, 0LL);
    guestIconBefore = (UnityEngine_Component_o *)System_String__Format_44573324(
                                                   v96,
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
          v97 = (UnityEngine_GameObject_o *)guestIconBefore;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.subTitleLb, 0LL);
          LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
          v100 = this->fields.subTitleLb;
          if ( v100 )
          {
            GameObjectExtensions__SetLocalPositionX(
              v97,
              (float)(LocalPositionX - (float)(v100->fields.mWidth / 2)) + (float)this->fields.iconBetweenWidth,
              0LL);
            decideButtonLb = this->fields.decideButtonLb;
            guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/,
                                                           0LL);
            if ( decideButtonLb )
            {
              UILabel__set_text(decideButtonLb, (System_String_o *)guestIconBefore, 0LL);
              cancelButtonLb = this->fields.cancelButtonLb;
              guestIconBefore = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/,
                                                             0LL);
              if ( cancelButtonLb )
              {
                UILabel__set_text(cancelButtonLb, (System_String_o *)guestIconBefore, 0LL);
                this->fields.state = 1;
                v103 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(
                  v103,
                  (Il2CppObject *)this,
                  Method_FortificationConfirmDialogComponent__Open_b__32_0__,
                  0LL);
                BaseDialog__Open((BaseDialog_o *)this, v103, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_62:
    sub_B5D69C(guestIconBefore, v73);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_GameObject_o *singleServantDisplayObject; // x0
  UILabel_o *beforeLb; // x22
  const MethodInfo *v15; // x6
  UILabel_o *afterLb; // x22
  const MethodInfo *v17; // x6
  __int64 v18; // x0

  if ( (byte_42EBDA5 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)userServantEntity, (_DWORD)point, method);
    sub_B5D5C4(&StringLiteral_6497/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_6498/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/, v10, v11, v12);
    byte_42EBDA5 = 1;
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
                                                             (System_String_o *)StringLiteral_6498/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_BEFOR"*/,
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
    v15);
  afterLb = this->fields.afterLb;
  singleServantDisplayObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_6497/*"FORTIFICATION_CHANGE_CONFIRM_DIALOG_AFTER"*/,
                                                             0LL);
  if ( !afterLb )
LABEL_17:
    sub_B5D69C(singleServantDisplayObject, userServantEntity);
  UILabel__set_text(afterLb, (System_String_o *)singleServantDisplayObject, 0LL);
  if ( userServantEntity->max_length <= 1 || point->max_length <= 1 )
  {
LABEL_18:
    v18 = sub_B5D6C8(singleServantDisplayObject);
    sub_B5D668(v18, 0LL);
  }
  FortificationConfirmDialogComponent__SetServant(
    (FortificationConfirmDialogComponent_o *)singleServantDisplayObject,
    this->fields.pointDescriptionLbAfter,
    this->fields.pointLbAfter,
    this->fields.servantFaceIconAfter,
    userServantEntity->m_Items[1],
    point->m_Items[2],
    v17);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  IconLabelInfo_o *v27; // x22
  System_String_o *LevelMax; // x0
  __int64 v29; // x1
  System_String_o *v30; // x24
  Il2CppObject *v31; // x0
  Il2CppObject *v32; // x0
  int32_t lv; // w21
  int32_t v34; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EBDA6 & 1) == 0 )
  {
    sub_B5D5C4(&IconLabelInfo_TypeInfo, (_DWORD)label1, (_DWORD)label2, faceIcon);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_6502/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_6503/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v24, v25, v26);
    byte_42EBDA6 = 1;
  }
  v27 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
  IconLabelInfo___ctor(v27, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  LevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_6503/*"FORTIFICATION_CONFIRM_DIALOG_POINT_DESCRIPTION"*/, 0LL);
  if ( !label1 )
    goto LABEL_12;
  UILabel__set_text(label1, LevelMax, 0LL);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_6502/*"FORTIFICATION_CONFIRM_DIALOG_POINT"*/, 0LL);
  v34 = point;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
  v32 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v31, 0LL);
  LevelMax = System_String__Format(v30, v32, 0LL);
  if ( !label2
    || (UILabel__set_text(label2, LevelMax, 0LL), !ent)
    || (lv = ent->fields.lv, LevelMax = (System_String_o *)UserServantEntity__getLevelMax(ent, 0LL), !v27)
    || (IconLabelInfo__Set_28463004(v27, 2, lv, (int32_t)LevelMax, 0, 0, 0, 0, 0LL), !faceIcon) )
  {
LABEL_12:
    sub_B5D69C(LevelMax, v29);
  }
  ServantFaceIconComponent__Set_30775392(faceIcon, ent, v27, 0LL, 0LL);
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
    sub_B5D69C(singleServantDisplayObject, userServantEntity);
  if ( !point->max_length )
  {
LABEL_9:
    v9 = sub_B5D6C8(singleServantDisplayObject);
    sub_B5D668(v9, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42EBDA9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDA9 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}