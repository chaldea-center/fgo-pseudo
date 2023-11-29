void __fastcall FortificationConfirmDialogComponent___ctor(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA76C & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA76C = 1;
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
    sub_B16F98(p_onDecide, 0LL, v2, v3, v4, v5, v6, v7);
    System_Action__Invoke(onDecide, 0LL);
  }
}


void __fastcall FortificationConfirmDialogComponent__Close(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FA76A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_FortificationConfirmDialogComponent__Close_b__41_0__, v6);
    byte_40FA76A = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FortificationConfirmDialogComponent__Close_b__41_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall FortificationConfirmDialogComponent__Init(
        FortificationConfirmDialogComponent_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
  UnityEngine_Component_o *guestIconAfter; // x0
  UnityEngine_GameObject_o *v11; // x0
  int32_t eventId; // w20
  UISprite_o *v13; // x19
  UnityEngine_Component_o *guestIconBefore; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  v4 = this;
  if ( (byte_40FA766 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, userServantEntity);
    this = (FortificationConfirmDialogComponent_o *)sub_B16FFC(&StringLiteral_19271, v5);
    byte_40FA766 = 1;
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
      sub_B17100(this, userServantEntity, method);
      sub_B170A0();
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
    guestIconBefore = (UnityEngine_Component_o *)v4->fields.guestIconBefore;
    if ( guestIconBefore )
    {
      gameObject = UnityEngine_Component__get_gameObject(guestIconBefore, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        eventId = v4->fields.eventId;
        v13 = v4->fields.guestIconBefore;
        goto LABEL_18;
      }
    }
LABEL_22:
    sub_B170D4();
  }
  guestIconAfter = (UnityEngine_Component_o *)v4->fields.guestIconAfter;
  if ( !guestIconAfter )
    goto LABEL_22;
  v11 = UnityEngine_Component__get_gameObject(guestIconAfter, 0LL);
  if ( !v11 )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(v11, 1, 0LL);
  eventId = v4->fields.eventId;
  v13 = v4->fields.guestIconAfter;
LABEL_18:
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, v13, (System_String_o *)StringLiteral_19271, 0LL);
  return 1;
}


void __fastcall FortificationConfirmDialogComponent__OnClickCancel(
        FortificationConfirmDialogComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_40FA769 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA769 = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *guestIconAfter; // x0
  UnityEngine_GameObject_o *v38; // x0
  UILabel_o *v39; // x24
  System_String_o *v40; // x0
  UILabel_o *v41; // x24
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  UILabel_o *v44; // x24
  System_String_o *v45; // x0
  UILabel_o *v46; // x0
  System_String_o *v47; // x1
  UILabel_o *v48; // x24
  System_String_o *v49; // x0
  UILabel_o *v50; // x0
  UILabel_o *v51; // x0
  struct UILabel_o *v52; // x24
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  const MethodInfo *v55; // x3
  UILabel_o *titleLb; // x24
  System_String_o *v57; // x0
  UILabel_o *descriptionLb; // x24
  const MethodInfo *v59; // x2
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  UILabel_o *warningDescriptionLb; // x24
  System_String_o *v63; // x0
  UILabel_o *removeDescriptionLb; // x0
  const MethodInfo *v65; // x3
  int eventId; // w22
  UISprite_o *workTypeIcon; // x23
  Il2CppObject *v68; // x24
  Il2CppObject *v69; // x0
  System_String_o *v70; // x24
  UILabel_o *subTitleLb; // x22
  System_String_o *v72; // x0
  System_String_o *v73; // x0
  UnityEngine_Component_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x20
  UnityEngine_GameObject_o *v77; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v79; // x8
  UILabel_o *decideButtonLb; // x20
  System_String_o *v81; // x0
  UILabel_o *cancelButtonLb; // x20
  System_String_o *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_Action_o *v88; // x20
  int v89; // [xsp+8h] [xbp-48h] BYREF
  int32_t v90; // [xsp+Ch] [xbp-44h] BYREF

  v90 = workType;
  if ( (byte_40FA765 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&dialogType);
    sub_B16FFC(&AtlasManager_TypeInfo, v16);
    sub_B16FFC(&Method_FortificationConfirmDialogComponent__Open_b__32_0__, v17);
    sub_B16FFC(&int_TypeInfo, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_4532, v20);
    sub_B16FFC(&StringLiteral_6404, v21);
    sub_B16FFC(&StringLiteral_6413, v22);
    sub_B16FFC(&StringLiteral_6416, v23);
    sub_B16FFC(&StringLiteral_6403, v24);
    sub_B16FFC(&StringLiteral_6402, v25);
    sub_B16FFC(&StringLiteral_6418, v26);
    sub_B16FFC(&StringLiteral_3253, v27);
    sub_B16FFC(&StringLiteral_3252, v28);
    sub_B16FFC(&StringLiteral_6419, v29);
    sub_B16FFC(&StringLiteral_6415, v30);
    sub_B16FFC(&StringLiteral_19265, v31);
    sub_B16FFC(&StringLiteral_6407, v32);
    sub_B16FFC(&StringLiteral_6417, v33);
    sub_B16FFC(&StringLiteral_1, v34);
    byte_40FA765 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onDecide = onDecide;
    sub_B16F98(
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
    gameObject = UnityEngine_Component__get_gameObject(guestIconBefore, 0LL);
    if ( !gameObject )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    guestIconAfter = (UnityEngine_Component_o *)this->fields.guestIconAfter;
    if ( !guestIconAfter )
      goto LABEL_62;
    v38 = UnityEngine_Component__get_gameObject(guestIconAfter, 0LL);
    if ( !v38 )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive(v38, 0, 0LL);
    switch ( dialogType )
    {
      case 2:
        titleLb = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_6403, 0LL);
        if ( !titleLb )
          goto LABEL_62;
        UILabel__set_text(titleLb, v57, 0LL);
        descriptionLb = this->fields.descriptionLb;
        if ( FortificationConfirmDialogComponent__IsNpcServant(this, userServantEntity, v59) )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v60 = LocalizationManager__Get((System_String_o *)StringLiteral_6413, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v61 = LocalizationManager__Get((System_String_o *)StringLiteral_6402, 0LL);
          v60 = System_String__Format(v61, (Il2CppObject *)detailName, 0LL);
        }
        if ( !descriptionLb )
          goto LABEL_62;
        UILabel__set_text(descriptionLb, v60, 0LL);
        warningDescriptionLb = this->fields.warningDescriptionLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v63 = LocalizationManager__Get((System_String_o *)StringLiteral_6404, 0LL);
        if ( !warningDescriptionLb )
          goto LABEL_62;
        UILabel__set_text(warningDescriptionLb, v63, 0LL);
        removeDescriptionLb = this->fields.removeDescriptionLb;
        if ( !removeDescriptionLb )
          goto LABEL_62;
        UILabel__set_text(removeDescriptionLb, (System_String_o *)StringLiteral_1, 0LL);
        FortificationConfirmDialogComponent__SetDoubleServantDisplay(this, userServantEntity, point, v65);
        break;
      case 1:
        v48 = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_6416, 0LL);
        if ( !v48 )
          goto LABEL_62;
        UILabel__set_text(v48, v49, 0LL);
        v50 = this->fields.descriptionLb;
        if ( !v50 )
          goto LABEL_62;
        UILabel__set_text(v50, (System_String_o *)StringLiteral_1, 0LL);
        v51 = this->fields.warningDescriptionLb;
        if ( !v51 )
          goto LABEL_62;
        UILabel__set_text(v51, (System_String_o *)StringLiteral_1, 0LL);
        v52 = this->fields.removeDescriptionLb;
        v53 = LocalizationManager__Get((System_String_o *)StringLiteral_6415, 0LL);
        v54 = System_String__Format(v53, (Il2CppObject *)detailName, 0LL);
        if ( !v52 )
          goto LABEL_62;
        v47 = v54;
        v46 = v52;
        goto LABEL_27;
      case 0:
        v39 = this->fields.titleLb;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_6418, 0LL);
        if ( !v39 )
          goto LABEL_62;
        UILabel__set_text(v39, v40, 0LL);
        v41 = this->fields.descriptionLb;
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_6417, 0LL);
        v43 = System_String__Format(v42, (Il2CppObject *)detailName, 0LL);
        if ( !v41 )
          goto LABEL_62;
        UILabel__set_text(v41, v43, 0LL);
        v44 = this->fields.warningDescriptionLb;
        v45 = LocalizationManager__Get((System_String_o *)StringLiteral_6419, 0LL);
        if ( !v44 )
          goto LABEL_62;
        UILabel__set_text(v44, v45, 0LL);
        v46 = this->fields.removeDescriptionLb;
        if ( !v46 )
          goto LABEL_62;
        v47 = (System_String_o *)StringLiteral_1;
LABEL_27:
        UILabel__set_text(v46, v47, 0LL);
        FortificationConfirmDialogComponent__SetSingleServantDisplay(this, userServantEntity, point, v55);
        break;
    }
    eventId = this->fields.eventId;
    workTypeIcon = this->fields.workTypeIcon;
    v89 = eventId;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v89);
    v69 = (Il2CppObject *)System_Int32__ToString_38275808((int32_t)&v90, (System_String_o *)StringLiteral_4532, 0LL);
    v70 = System_String__Format_43739268((System_String_o *)StringLiteral_19265, v68, v69, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(eventId, workTypeIcon, v70, 0LL);
    subTitleLb = this->fields.subTitleLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v72 = LocalizationManager__Get((System_String_o *)StringLiteral_6407, 0LL);
    v73 = System_String__Format_43739268(v72, (Il2CppObject *)teamName, (Il2CppObject *)detailName, 0LL);
    if ( subTitleLb )
    {
      UILabel__set_text(subTitleLb, v73, 0LL);
      v74 = (UnityEngine_Component_o *)this->fields.workTypeIcon;
      if ( v74 )
      {
        v75 = UnityEngine_Component__get_gameObject(v74, 0LL);
        if ( this->fields.subTitleLb )
        {
          v76 = v75;
          v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.subTitleLb, 0LL);
          LocalPositionX = GameObjectExtensions__GetLocalPositionX(v77, 0LL);
          v79 = this->fields.subTitleLb;
          if ( v79 )
          {
            GameObjectExtensions__SetLocalPositionX(
              v76,
              (float)(LocalPositionX - (float)(v79->fields.mWidth / 2)) + (float)this->fields.iconBetweenWidth,
              0LL);
            decideButtonLb = this->fields.decideButtonLb;
            v81 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL);
            if ( decideButtonLb )
            {
              UILabel__set_text(decideButtonLb, v81, 0LL);
              cancelButtonLb = this->fields.cancelButtonLb;
              v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3252, 0LL);
              if ( cancelButtonLb )
              {
                UILabel__set_text(cancelButtonLb, v83, 0LL);
                this->fields.state = 1;
                v88 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v84, v85, v86, v87);
                System_Action___ctor(
                  v88,
                  (Il2CppObject *)this,
                  Method_FortificationConfirmDialogComponent__Open_b__32_0__,
                  0LL);
                BaseDialog__Open((BaseDialog_o *)this, v88, 0, 0LL);
                return;
              }
            }
          }
        }
      }
    }
LABEL_62:
    sub_B170D4();
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
  UnityEngine_GameObject_o *doubleServantDisplayObject; // x0
  UILabel_o *beforeLb; // x22
  System_String_o *v12; // x0
  FortificationConfirmDialogComponent_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x6
  UILabel_o *afterLb; // x22
  System_String_o *v18; // x0
  const MethodInfo *v19; // x6

  if ( (byte_40FA767 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, userServantEntity);
    sub_B16FFC(&StringLiteral_6400, v7);
    sub_B16FFC(&StringLiteral_6401, v8);
    byte_40FA767 = 1;
  }
  singleServantDisplayObject = this->fields.singleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 0, 0LL);
  doubleServantDisplayObject = this->fields.doubleServantDisplayObject;
  if ( !doubleServantDisplayObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(doubleServantDisplayObject, 1, 0LL);
  beforeLb = this->fields.beforeLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6401, 0LL);
  if ( !beforeLb )
    goto LABEL_17;
  UILabel__set_text(beforeLb, v12, 0LL);
  if ( !userServantEntity )
    goto LABEL_17;
  if ( !userServantEntity->max_length )
    goto LABEL_18;
  if ( !point )
    goto LABEL_17;
  if ( !point->max_length )
    goto LABEL_18;
  FortificationConfirmDialogComponent__SetServant(
    v13,
    this->fields.pointDescriptionLbBefore,
    this->fields.pointLbBefore,
    this->fields.servantFaceIconBefore,
    userServantEntity->m_Items[0],
    point->m_Items[1],
    v16);
  afterLb = this->fields.afterLb;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6400, 0LL);
  if ( !afterLb )
LABEL_17:
    sub_B170D4();
  UILabel__set_text(afterLb, v18, 0LL);
  if ( userServantEntity->max_length <= 1 || point->max_length <= 1 )
  {
LABEL_18:
    sub_B17100(v13, v14, v15);
    sub_B170A0();
  }
  FortificationConfirmDialogComponent__SetServant(
    v13,
    this->fields.pointDescriptionLbAfter,
    this->fields.pointLbAfter,
    this->fields.servantFaceIconAfter,
    userServantEntity->m_Items[1],
    point->m_Items[2],
    v19);
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
  System_String_o *v18; // x0
  System_String_o *v19; // x24
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  int32_t lv; // w21
  int32_t LevelMax; // w0
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FA768 & 1) == 0 )
  {
    sub_B16FFC(&IconLabelInfo_TypeInfo, label1);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&LocalizationManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_6405, v14);
    sub_B16FFC(&StringLiteral_6406, v15);
    sub_B16FFC(&StringLiteral_23395, v16);
    byte_40FA768 = 1;
  }
  v17 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, label1, label2, faceIcon, ent);
  IconLabelInfo___ctor(v17, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_6406, 0LL);
  if ( !label1 )
    goto LABEL_12;
  UILabel__set_text(label1, v18, 0LL);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6405, 0LL);
  v25 = point;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
  v21 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_23395, v20, 0LL);
  v22 = System_String__Format(v19, v21, 0LL);
  if ( !label2
    || (UILabel__set_text(label2, v22, 0LL), !ent)
    || (lv = ent->fields.lv, LevelMax = UserServantEntity__getLevelMax(ent, 0LL), !v17)
    || (IconLabelInfo__Set_28888132(v17, 2, lv, LevelMax, 0, 0, 0, 0, 0LL), !faceIcon) )
  {
LABEL_12:
    sub_B170D4();
  }
  ServantFaceIconComponent__Set_30631556(faceIcon, ent, v17, 0LL, 0LL);
}


void __fastcall FortificationConfirmDialogComponent__SetSingleServantDisplay(
        FortificationConfirmDialogComponent_o *this,
        UserServantEntity_array *userServantEntity,
        System_Int32_array *point,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *singleServantDisplayObject; // x0
  UnityEngine_GameObject_o *doubleServantDisplayObject; // x0
  FortificationConfirmDialogComponent_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x6

  singleServantDisplayObject = this->fields.singleServantDisplayObject;
  if ( !singleServantDisplayObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(singleServantDisplayObject, 1, 0LL);
  doubleServantDisplayObject = this->fields.doubleServantDisplayObject;
  if ( !doubleServantDisplayObject )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(doubleServantDisplayObject, 0, 0LL);
  if ( !userServantEntity )
    goto LABEL_8;
  if ( !userServantEntity->max_length )
    goto LABEL_9;
  if ( !point )
LABEL_8:
    sub_B170D4();
  if ( !point->max_length )
  {
LABEL_9:
    sub_B17100(v9, v10, v11);
    sub_B170A0();
  }
  FortificationConfirmDialogComponent__SetServant(
    v9,
    this->fields.pointDescriptionLb,
    this->fields.pointLb,
    this->fields.servantFaceIcon,
    userServantEntity->m_Items[0],
    point->m_Items[1],
    v12);
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

  if ( (byte_40FA76B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA76B = 1;
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
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
}