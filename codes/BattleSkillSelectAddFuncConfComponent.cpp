void __fastcall BattleSkillSelectAddFuncConfComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438E250 & 1) == 0 )
  {
    sub_B775C4(&BattleSkillSelectAddFuncConfComponent_TypeInfo);
    byte_438E250 = 1;
  }
  BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE = 20;
  BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT = 100;
  BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT = 500;
}


void __fastcall BattleSkillSelectAddFuncConfComponent___ctor(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__CheckSerializeField(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillSelectBtnBaseComponent_array *btnLayoutArray; // x8
  int max_length; // w8
  int v4; // w9

  btnLayoutArray = this->fields.btnLayoutArray;
  if ( !btnLayoutArray )
    sub_B7769C(this, method);
  max_length = btnLayoutArray->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void __fastcall BattleSkillSelectAddFuncConfComponent__ClickSelected(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_438E24B & 1) == 0 )
  {
    sub_B775C4(&Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
    byte_438E24B = 1;
  }
  if ( BattleSkillSelectAddFuncConfComponent__IsEnableBtn(this, index, method) )
  {
    if ( !this->fields.isPlayedSe )
    {
      v6 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
      if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 75) & 2) != 0 )
        v6 = (_QWORD *)sub_B775CC(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
      v7 = (System_Reflection_MethodBase_o *)sub_B775A8(v6, v6[3]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
      this->fields.isPlayedSe = 1;
    }
    BattleSkillSelectAddFuncConfComponent__OnSelected(this, index, v5);
  }
  else
  {
    v8 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
    if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B775CC(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
    v9 = (System_Reflection_MethodBase_o *)sub_B775A8(v8, v8[3]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0LL);
  }
}


void __fastcall BattleSkillSelectAddFuncConfComponent__CompClose(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  TweenAlpha__Begin(gameObject, 0.0, 1.0, 0LL);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__CompOpen(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *labelDescription; // x0

  if ( (byte_438E24E & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    byte_438E24E = 1;
  }
  labelDescription = (UnityEngine_Component_o *)this->fields.labelDescription;
  if ( !labelDescription
    || (labelDescription = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        labelDescription,
                                                        (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_B7769C(labelDescription, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)labelDescription, 1, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438E24D & 1) == 0 )
  {
    sub_B775C4(&BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_TypeInfo);
    byte_438E24D = 1;
  }
  v5 = sub_B77694(BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_TypeInfo);
  BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34___ctor(
    (BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 32) = index;
  return (System_Collections_IEnumerator_o *)v5;
}


System_String_o *__fastcall BattleSkillSelectAddFuncConfComponent__GetEmbedLvDescription(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *str,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  System_String_o *v8; // x22
  __int64 v9; // x2
  Il2CppObject *v10; // x0
  Il2CppObject *v11; // x22
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  int32_t v15; // [xsp+4h] [xbp-2Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E249 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8530/*"LEVEL_DETAIL_INFO"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E249 = 1;
  }
  entity = 0LL;
  if ( skillLv <= 0 )
  {
    v11 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8530/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v15 = skillLv;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v9);
    v11 = (Il2CppObject *)System_String__Format(v8, v10, 0LL);
  }
  if ( System_String__IsNullOrEmpty(str, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    if ( !SkillLvMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, skillId, skillLv, 0LL) )
      goto LABEL_17;
    Master_WarQuestSelectionMaster = (SkillLvMaster_o *)entity;
    if ( !entity )
LABEL_21:
      sub_B7769C(Master_WarQuestSelectionMaster, v13);
    str = SkillLvEntity__getDetail(entity, 1, 0LL);
  }
LABEL_17:
  if ( System_String__IsNullOrEmpty(str, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return System_String__Format(str, v11, 0LL);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__Init(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x0
  __int64 v10; // x1

  this->fields._Data_k__BackingField = data;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._Data_k__BackingField,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  if ( !this->fields.btnLayoutArray )
    sub_B7769C(v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillSelectAddFuncConfComponent__InitBtnInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        int32_t btnLayoutType,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleSkillSelectBtnBaseComponent_array *btnLayoutArray; // x22
  __int64 v9; // x8
  BattleSkillSelectAddFuncConfComponent_o *v11; // x20
  __int64 v13; // x23
  System_Int32_array **v14; // x1
  BattleSkillSelectAddFuncConfComponent_o **p_currentBtnLayout; // x21
  const MethodInfo *v16; // x3
  __int64 v17; // x0

  btnLayoutArray = this->fields.btnLayoutArray;
  if ( !btnLayoutArray )
    goto LABEL_16;
  v9 = *(_QWORD *)&btnLayoutArray->max_length;
  if ( v9 )
  {
    v11 = this;
    if ( (int)v9 < 1 )
      goto LABEL_20;
    v13 = 0LL;
    do
    {
      if ( (unsigned int)v13 >= (unsigned int)v9 )
        goto LABEL_17;
      this = (BattleSkillSelectAddFuncConfComponent_o *)btnLayoutArray->m_Items[v13];
      if ( !this )
        goto LABEL_16;
      this = (BattleSkillSelectAddFuncConfComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_16;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      LODWORD(v9) = btnLayoutArray->max_length;
      ++v13;
    }
    while ( (int)v13 < (int)v9 );
    btnLayoutArray = v11->fields.btnLayoutArray;
    if ( btnLayoutArray )
    {
LABEL_20:
      if ( btnLayoutArray->max_length <= btnLayoutType )
      {
LABEL_17:
        v17 = sub_B776C8(this);
        sub_B77668(v17, 0LL);
      }
      v14 = (System_Int32_array **)btnLayoutArray->m_Items[btnLayoutType];
      v11->fields.currentBtnLayout = (struct BattleSkillSelectBtnBaseComponent_o *)v14;
      p_currentBtnLayout = (BattleSkillSelectAddFuncConfComponent_o **)&v11->fields.currentBtnLayout;
      sub_B77560(
        (BattleServantConfConponent_o *)&v11->fields.currentBtnLayout,
        v14,
        *(System_String_array ***)&btnLayoutType,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      this = (BattleSkillSelectAddFuncConfComponent_o *)v11->fields.currentBtnLayout;
      if ( this )
      {
        this = (BattleSkillSelectAddFuncConfComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = *p_currentBtnLayout;
          if ( *p_currentBtnLayout )
          {
            BattleSkillSelectBtnBaseComponent__InitBtn(
              (BattleSkillSelectBtnBaseComponent_o *)this,
              btnList,
              v11->fields._Data_k__BackingField,
              v16);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_B7769C(this, btnList);
  }
}


void __fastcall BattleSkillSelectAddFuncConfComponent__InitDescription(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *description,
        const MethodInfo *method)
{
  UIWidget_o *labelDescription; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  bool activeSelf; // w20

  if ( (byte_438E248 & 1) == 0 )
  {
    sub_B775C4(&BattleSkillSelectAddFuncConfComponent_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    byte_438E248 = 1;
  }
  labelDescription = (UIWidget_o *)this->fields.labelDescription;
  gameObject = (UnityEngine_GameObject_o *)BattleSkillSelectAddFuncConfComponent_TypeInfo;
  if ( (BYTE3(BattleSkillSelectAddFuncConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo);
  }
  if ( !labelDescription )
    goto LABEL_15;
  UIWidget__set_height(
    labelDescription,
    BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
    0LL);
  WrapControlText__textBBCodeAdjust(
    this->fields.labelDescription,
    description,
    BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
  if ( !gameObject
    || (UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.labelDescription) == 0LL)
    || (UIWidget__ResizeCollider((UIWidget_o *)gameObject, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, activeSelf, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.labelDescription) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0LL )
  {
LABEL_15:
    sub_B7769C(gameObject, description);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


bool __fastcall BattleSkillSelectAddFuncConfComponent__IsEnableBtn(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentBtnLayout; // x21
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  BattleSkillSelectBtnBaseComponent_o *v9; // x0

  if ( (byte_438E24A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E24A = 1;
  }
  currentBtnLayout = (UnityEngine_Object_o *)this->fields.currentBtnLayout;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(currentBtnLayout, 0LL, 0LL) )
    return 0;
  v9 = this->fields.currentBtnLayout;
  if ( !v9 )
    sub_B7769C(0LL, v6);
  return BattleSkillSelectBtnBaseComponent__IsEnableBtn(v9, index, v7);
}


bool __fastcall BattleSkillSelectAddFuncConfComponent__IsIntHigher(
        System_String_o *condStr,
        int32_t compVal,
        const MethodInfo *method)
{
  bool v4; // w0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  v4 = System_Int32__TryParse(condStr, &result, 0LL);
  return v4 && result <= compVal;
}


void __fastcall BattleSkillSelectAddFuncConfComponent__OnSelected(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  if ( !this->fields.isSelected )
  {
    this->fields.isSelected = 1;
    v4 = BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected(this, index, method);
    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
  }
}


void __fastcall BattleSkillSelectAddFuncConfComponent__SetCallBack(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.selectCallBack = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.selectCallBack,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__SetIsPlayedSe(
        BattleSkillSelectAddFuncConfComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  this->fields.isPlayedSe = isActive;
}


bool __fastcall BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  SkillLvMaster_o *v7; // x21
  System_Collections_Generic_Dictionary_string__object__o *SelectAddFuncInfo; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Dictionary_string__object__o *v15; // x21
  UILabel_o *labelTitle; // x22
  const MethodInfo *v17; // x6
  System_String_o *Value_string; // x22
  BattleSkillSelectAddFuncConfComponent_o *v19; // x0
  const MethodInfo *v20; // x4
  System_String_o *EmbedLvDescription; // x0
  const MethodInfo *v22; // x2
  System_String_o *v23; // x20
  System_String_o *v24; // x0
  const MethodInfo *v25; // x3
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438E247 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_GetValue_List_object____);
    sub_B775C4(&Method_BasicHelper_GetValue_string___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Enum_TryParse_BattleSkillSelectAddFuncConfComponent_BtnLayoutType___);
    sub_B775C4(&System_Enum_TypeInfo);
    sub_B775C4(&StringLiteral_17286/*"btnLayoutType"*/);
    sub_B775C4(&StringLiteral_17285/*"btn"*/);
    sub_B775C4(&StringLiteral_18354/*"detail"*/);
    sub_B775C4(&StringLiteral_23180/*"title"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E247 = 1;
  }
  result = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_16;
  v7 = (SkillLvMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (System_String_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                        skillInfo,
                                                        skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v7 )
    goto LABEL_16;
  SelectAddFuncInfo = SkillLvMaster__GetSelectAddFuncInfo(
                        v7,
                        (int32_t)Master_WarQuestSelectionMaster,
                        skillInfo->fields.skilllv,
                        0LL);
  if ( !SelectAddFuncInfo )
    return (char)SelectAddFuncInfo;
  this->fields._SkillInfo_k__BackingField = skillInfo;
  v15 = SelectAddFuncInfo;
  *(_WORD *)&this->fields.isPlayedSe = 0;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._SkillInfo_k__BackingField,
    (System_Int32_array **)skillInfo,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  labelTitle = this->fields.labelTitle;
  Master_WarQuestSelectionMaster = BasicHelper__GetValue_string_(
                                     v15,
                                     (System_String_o *)StringLiteral_23180/*"title"*/,
                                     (System_String_o *)StringLiteral_1/*""*/,
                                     (const MethodInfo_1C67E80 *)Method_BasicHelper_GetValue_string___);
  if ( !labelTitle
    || (UILabel__set_text(labelTitle, Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)this->fields.skillIcon) == 0LL) )
  {
LABEL_16:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  }
  BattleServantSkillIConComponent__SetSkillInfo(
    (BattleServantSkillIConComponent_o *)Master_WarQuestSelectionMaster,
    skillInfo,
    1,
    0,
    0,
    0,
    v17);
  Value_string = BasicHelper__GetValue_string_(
                   v15,
                   (System_String_o *)StringLiteral_18354/*"detail"*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   (const MethodInfo_1C67E80 *)Method_BasicHelper_GetValue_string___);
  v19 = (BattleSkillSelectAddFuncConfComponent_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                     skillInfo,
                                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  EmbedLvDescription = BattleSkillSelectAddFuncConfComponent__GetEmbedLvDescription(
                         v19,
                         Value_string,
                         (int32_t)v19,
                         skillInfo->fields.skilllv,
                         v20);
  BattleSkillSelectAddFuncConfComponent__InitDescription(this, EmbedLvDescription, v22);
  v23 = BasicHelper__GetValue_string_(
          v15,
          (System_String_o *)StringLiteral_17286/*"btnLayoutType"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          (const MethodInfo_1C67E80 *)Method_BasicHelper_GetValue_string___);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  System_Enum__TryParse_DataVals_TYPE_(
    v23,
    &result,
    (const MethodInfo_1D1AB0C *)Method_System_Enum_TryParse_BattleSkillSelectAddFuncConfComponent_BtnLayoutType___);
  v24 = BasicHelper__GetValue_string_(
          v15,
          (System_String_o *)StringLiteral_17285/*"btn"*/,
          0LL,
          (const MethodInfo_1C67E80 *)Method_BasicHelper_GetValue_List_object____);
  BattleSkillSelectAddFuncConfComponent__InitBtnInfo(
    this,
    (System_Collections_Generic_List_object__o *)v24,
    result,
    v25);
  LOBYTE(SelectAddFuncInfo) = 1;
  return (char)SelectAddFuncInfo;
}


BattleData_o *__fastcall BattleSkillSelectAddFuncConfComponent__get_Data(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


BattleSkillInfoData_o *__fastcall BattleSkillSelectAddFuncConfComponent__get_SkillInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillInfo_k__BackingField;
}


System_String_o *__fastcall BattleSkillSelectAddFuncConfComponent__get_closeBtnPath(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E24F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17324/*"btn_close"*/);
    byte_438E24F = 1;
  }
  return (System_String_o *)StringLiteral_17324/*"btn_close"*/;
}


void __fastcall BattleSkillSelectAddFuncConfComponent__onClickCancel(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438E24C & 1) == 0 )
  {
    sub_B775C4(&SeManager_TypeInfo);
    byte_438E24C = 1;
  }
  if ( !this->fields.isPlayedSe )
  {
    if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__PlayCommonSe(10, 0LL);
    this->fields.isPlayedSe = 1;
  }
  BattleSkillSelectAddFuncConfComponent__OnSelected(this, -1, v2);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__set_Data(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Data_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._Data_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__set_SkillInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleSkillInfoData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SkillInfo_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._SkillInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BattleSkillSelectAddFuncConfComponent_SelectCallBack__BeginInvoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = index;
  if ( (byte_43884FD & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    byte_43884FD = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)skillInfo;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, *(_QWORD *)&index);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall BattleSkillSelectAddFuncConfComponent_SelectCallBack__EndInvoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall BattleSkillSelectAddFuncConfComponent_SelectCallBack__Invoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o **v9; // x26
  __int64 i; // x27
  unsigned int v11; // w23
  __int64 class_0; // x0
  BattleSkillInfoData_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w24
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(BattleSkillInfoData_o *, _QWORD, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, BattleSkillInfoData_o *, _QWORD, _QWORD); // x0
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v29; // x8
  __int64 v30; // x22
  __int64 *v31; // x23
  void (__fastcall *v32)(BattleSkillInfoData_o *, _QWORD, __int64); // x24
  char v33; // w0
  int v34; // w8
  char v35; // w24
  char v36; // w0
  __int64 v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  unsigned __int64 v40; // x10
  _DWORD *v41; // x11
  char v42; // w23
  char v43; // w0
  BattleSkillInfoData_c *klass; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v49; // [xsp+8h] [xbp-48h] BYREF

  v49 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v49;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (BattleSkillSelectAddFuncConfComponent_SelectCallBack_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v8; ++i )
    {
      v29 = v9[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(BattleSkillInfoData_o *, _QWORD, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v29->fields.extra_arg, skillInfo);
      v33 = sub_B775F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 2 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v42 = sub_B775EC(v30);
            v43 = sub_B779F0(v30);
            if ( (v42 & 1) != 0 )
            {
              if ( (v43 & 1) != 0 )
              {
                klass = skillInfo->klass;
                v45 = *(_QWORD *)(v30 + 24);
                v46 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&skillInfo->klass->_2.bitflags1 )
                {
                  v47 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v45 )
                  {
                    ++v47;
                    p_offset += 4;
                    if ( v47 >= *(unsigned __int16 *)&skillInfo->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v46);
                }
                else
                {
LABEL_57:
                  v25 = sub_B0F4C0(skillInfo, v45, v46);
                }
                v17 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&skillInfo->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(BattleSkillInfoData_o *, _QWORD, _QWORD))sub_B77674(v17, v30);
              (*v26)(skillInfo, (unsigned int)index, v26);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v30 + 72);
              if ( (v43 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v13 = skillInfo->klass;
                if ( *(_WORD *)&skillInfo->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&skillInfo->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v11));
                }
                else
                {
LABEL_11:
                  v16 = sub_B0F4C0(skillInfo, class_0, v11);
                }
                (*(void (__fastcall **)(BattleSkillInfoData_o *, _QWORD, _QWORD))v16)(
                  skillInfo,
                  (unsigned int)index,
                  *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(BattleSkillInfoData_o *, _QWORD, _QWORD))&skillInfo->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  skillInfo,
                  (unsigned int)index,
                  *((_QWORD *)&skillInfo->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(skillInfo, (unsigned int)index, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B775EC(v30);
          v36 = sub_B779F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v37 = *v31;
              v38 = *(_QWORD *)(v30 + 24);
              v39 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v40 = 0LL;
                v41 = (_DWORD *)(*(_QWORD *)(v37 + 176) + 8LL);
                while ( *((_QWORD *)v41 - 1) != v38 )
                {
                  ++v40;
                  v41 += 4;
                  if ( v40 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v37 + 16LL * (*v41 + (int)v39) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_B0F4C0(v31, v38, v39);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, BattleSkillInfoData_o *, _QWORD, _QWORD))sub_B77674(v24, v30);
            (*v28)(v31, skillInfo, (unsigned int)index, v28);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v19 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v18) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_B0F4C0(v31, v19, v18);
              }
              (*(void (__fastcall **)(__int64 *, BattleSkillInfoData_o *, _QWORD, _QWORD))v23)(
                v31,
                skillInfo,
                (unsigned int)index,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, BattleSkillInfoData_o *, _QWORD, _QWORD))(*v31
                                                                                         + 16LL
                                                                                         * *(unsigned __int16 *)(v30 + 72)
                                                                                         + 312))(
                v31,
                skillInfo,
                (unsigned int)index,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, BattleSkillInfoData_o *, _QWORD, __int64))v32)(
        v31,
        skillInfo,
        (unsigned int)index,
        v30);
    }
  }
}


void __fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34___ctor(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34__MoveNext(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *selectCallBack; // x0
  struct BattleSkillSelectAddFuncConfComponent_o *_4__this; // x20

  _1__state = this->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      this->fields.__1__state = -1;
      sub_B77560(&this->fields.__2__current);
      LOBYTE(selectCallBack) = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return (char)selectCallBack;
    }
LABEL_10:
    LOBYTE(selectCallBack) = 0;
    return (char)selectCallBack;
  }
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_B7769C(this, method);
  if ( (this->fields.index & 0x80000000) != 0 )
    ((void (__fastcall *)(struct BattleSkillSelectAddFuncConfComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._12_Close.method)(
      _4__this,
      0LL,
      _4__this->klass->vtable._13_CompClose.methodPtr);
  else
    _4__this->fields.isSelected = 0;
  selectCallBack = _4__this->fields.selectCallBack;
  if ( selectCallBack )
  {
    BattleSkillSelectAddFuncConfComponent_SelectCallBack__Invoke(
      selectCallBack,
      _4__this->fields._SkillInfo_k__BackingField,
      this->fields.index,
      v2);
    goto LABEL_10;
  }
  return (char)selectCallBack;
}


Il2CppObject *__fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34__System_Collections_IEnumerator_Reset(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34__System_Collections_IEnumerator_get_Current(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34__System_IDisposable_Dispose(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_o *this,
        const MethodInfo *method)
{
  ;
}