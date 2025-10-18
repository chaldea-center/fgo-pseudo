void BattleSkillSelectAddFuncConfComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C466F2 & 1) == 0 )
  {
    sub_1C37058(&BattleSkillSelectAddFuncConfComponent_TypeInfo);
    byte_4C466F2 = 1;
  }
  *BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields = (struct BattleSkillSelectAddFuncConfComponent_StaticFields)0x6400000014LL;
}


void BattleSkillSelectAddFuncConfComponent___ctor(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleSkillSelectAddFuncConfComponent__CheckSerializeField(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  struct BattleSkillSelectBtnBaseComponent_array *btnLayoutArray; // x8
  int max_length; // w8
  int v4; // w9

  btnLayoutArray = this->fields.btnLayoutArray;
  if ( !btnLayoutArray )
    sub_1C372B4(this);
  max_length = btnLayoutArray->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


void BattleSkillSelectAddFuncConfComponent__ClickSelected(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0

  if ( (byte_4C466ED & 1) == 0 )
  {
    sub_1C37058(&Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
    byte_4C466ED = 1;
  }
  if ( BattleSkillSelectAddFuncConfComponent__IsEnableBtn(this, index, method) )
  {
    if ( !this->fields.isPlayedSe )
    {
      v6 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
      if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C37070(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
      this->fields.isPlayedSe = 1;
    }
    BattleSkillSelectAddFuncConfComponent__OnSelected(this, index, v5);
  }
  else
  {
    v8 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
    if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C37070(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0);
  }
}


void BattleSkillSelectAddFuncConfComponent__Close(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  this->fields.isSelected = 1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


void BattleSkillSelectAddFuncConfComponent__CompClose(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  BattleWindowComponent__CompClose((BattleWindowComponent_o *)this, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  TweenAlpha__Begin(gameObject, 0.0, 1.0, 0);
}


void BattleSkillSelectAddFuncConfComponent__CompOpen(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *labelDescription; // x0

  if ( (byte_4C466F0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    byte_4C466F0 = 1;
  }
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0);
  labelDescription = (UnityEngine_Component_o *)this->fields.labelDescription;
  if ( !labelDescription
    || (labelDescription = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                        labelDescription,
                                                        (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0 )
  {
    sub_1C372B4(labelDescription);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)labelDescription, 1, 0);
}


System_Collections_IEnumerator_o *BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C466EF & 1) == 0 )
  {
    sub_1C37058(&BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_TypeInfo);
    byte_4C466EF = 1;
  }
  v5 = sub_1C372A4(BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 32) = index;
  return (System_Collections_IEnumerator_o *)v5;
}


System_String_o *BattleSkillSelectAddFuncConfComponent__GetEmbedLvDescription(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *str,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  System_String_o *v8; // x22
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x22
  SkillLvMaster_o *Master_object; // x0
  int32_t v19; // [xsp+4h] [xbp-3Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C466EB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_8261/*"LEVEL_DETAIL_INFO"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C466EB = 1;
  }
  entity = 0;
  if ( skillLv <= 0 )
  {
    v16 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_8261/*"LEVEL_DETAIL_INFO"*/, 0);
    v19 = skillLv;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v9, v10, v11, v12, v13, v14);
    v16 = (Il2CppObject *)System_String__Format(v8, v15, 0);
  }
  if ( System_String__IsNullOrEmpty(str, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (SkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !Master_object )
      goto LABEL_19;
    if ( !SkillLvMaster__TryGetEntity(Master_object, &entity, skillId, skillLv, 0) )
      goto LABEL_15;
    Master_object = (SkillLvMaster_o *)entity;
    if ( !entity )
LABEL_19:
      sub_1C372B4(Master_object);
    str = SkillLvEntity__getDetail(entity, 1, 0, 0);
  }
LABEL_15:
  if ( System_String__IsNullOrEmpty(str, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return System_String__Format(str, v16, 0);
}


void BattleSkillSelectAddFuncConfComponent__Init(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v5; // x0

  this->fields._Data_k__BackingField = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Data_k__BackingField, (int32_t)data, (int32_t)method, v3);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0);
  if ( !this->fields.btnLayoutArray )
    sub_1C372B4(v5);
}


void BattleSkillSelectAddFuncConfComponent__InitBtnInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        int32_t btnLayoutType,
        const MethodInfo *method)
{
  struct BattleSkillSelectBtnBaseComponent_array *btnLayoutArray; // x22
  il2cpp_array_size_t max_length; // x8
  BattleSkillSelectAddFuncConfComponent_o *v7; // x20
  __int64 v9; // x23
  struct BattleSkillSelectBtnBaseComponent_o *v10; // x1
  BattleSkillSelectAddFuncConfComponent_o **p_currentBtnLayout; // x21
  const MethodInfo *v12; // x3

  btnLayoutArray = this->fields.btnLayoutArray;
  if ( !btnLayoutArray )
    goto LABEL_16;
  max_length = btnLayoutArray->max_length;
  if ( max_length )
  {
    v7 = this;
    if ( (int)max_length < 1 )
      goto LABEL_20;
    v9 = 0;
    do
    {
      if ( (unsigned int)v9 >= (unsigned int)max_length )
        goto LABEL_17;
      this = (BattleSkillSelectAddFuncConfComponent_o *)btnLayoutArray->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      this = (BattleSkillSelectAddFuncConfComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
      if ( !this )
        goto LABEL_16;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      LODWORD(max_length) = btnLayoutArray->max_length;
      ++v9;
    }
    while ( (int)v9 < (int)max_length );
    btnLayoutArray = v7->fields.btnLayoutArray;
    if ( btnLayoutArray )
    {
LABEL_20:
      if ( LODWORD(btnLayoutArray->max_length) <= btnLayoutType )
LABEL_17:
        sub_1C372BC(this);
      v10 = btnLayoutArray->m_Items[btnLayoutType];
      v7->fields.currentBtnLayout = v10;
      p_currentBtnLayout = (BattleSkillSelectAddFuncConfComponent_o **)&v7->fields.currentBtnLayout;
      sub_1C36FFC((CGThumbnailListItem_o *)&v7->fields.currentBtnLayout, (int32_t)v10, btnLayoutType, method);
      this = (BattleSkillSelectAddFuncConfComponent_o *)v7->fields.currentBtnLayout;
      if ( this )
      {
        this = (BattleSkillSelectAddFuncConfComponent_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = *p_currentBtnLayout;
          if ( *p_currentBtnLayout )
          {
            BattleSkillSelectBtnBaseComponent__InitBtn(
              (BattleSkillSelectBtnBaseComponent_o *)this,
              btnList,
              v7->fields._Data_k__BackingField,
              v12);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1C372B4(this);
  }
}


void BattleSkillSelectAddFuncConfComponent__InitDescription(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *description,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *labelDescription; // x21
  bool activeSelf; // w20

  if ( (byte_4C466EA & 1) == 0 )
  {
    sub_1C37058(&BattleSkillSelectAddFuncConfComponent_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    byte_4C466EA = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)BattleSkillSelectAddFuncConfComponent_TypeInfo;
  labelDescription = (UIWidget_o *)this->fields.labelDescription;
  if ( !BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo);
  if ( !labelDescription )
    goto LABEL_14;
  UIWidget__set_height(
    labelDescription,
    BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
    0);
  WrapControlText__textBBCodeAdjust(
    this->fields.labelDescription,
    description,
    BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
  if ( !gameObject
    || (UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.labelDescription) == 0)
    || (UIWidget__ResizeCollider((UIWidget_o *)gameObject, 0),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, activeSelf, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.labelDescription) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0 )
  {
LABEL_14:
    sub_1C372B4(gameObject);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
}


bool BattleSkillSelectAddFuncConfComponent__IsEnableBtn(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentBtnLayout; // x21
  const MethodInfo *v6; // x2
  BattleSkillSelectBtnBaseComponent_o *v8; // x0

  if ( (byte_4C466EC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C466EC = 1;
  }
  currentBtnLayout = (UnityEngine_Object_o *)this->fields.currentBtnLayout;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currentBtnLayout, 0, 0) )
    return 0;
  v8 = this->fields.currentBtnLayout;
  if ( !v8 )
    sub_1C372B4(0);
  return BattleSkillSelectBtnBaseComponent__IsEnableBtn(v8, index, v6);
}


bool BattleSkillSelectAddFuncConfComponent__IsIntHigher(
        System_String_o *condStr,
        int32_t compVal,
        const MethodInfo *method)
{
  bool v4; // w0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0;
  v4 = System_Int32__TryParse(condStr, &result, 0);
  return v4 && result <= compVal;
}


void BattleSkillSelectAddFuncConfComponent__OnClick(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0) )
    BattleSkillSelectAddFuncConfComponent__onClickCancel(this, v3);
}


void BattleSkillSelectAddFuncConfComponent__OnSelected(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  if ( !this->fields.isSelected )
  {
    this->fields.isSelected = 1;
    v4 = BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected(this, index, method);
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v4, 0);
  }
}


void BattleSkillSelectAddFuncConfComponent__SetCallBack(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.selectCallBack = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectCallBack, (int32_t)callback, (int32_t)method, v3);
}


void BattleSkillSelectAddFuncConfComponent__SetIsPlayedSe(
        BattleSkillSelectAddFuncConfComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  this->fields.isPlayedSe = isActive;
}


bool BattleSkillSelectAddFuncConfComponent__SetPreOpenInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleSkillInfoData_o *skillInfo,
        const MethodInfo *method)
{
  System_String_o *Master_object; // x0
  SkillLvMaster_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_string__object__o *SelectAddFuncInfo; // x21
  UILabel_o *labelTitle; // x22
  const MethodInfo *v11; // x6
  Il2CppObject *Value_object; // x22
  BattleSkillSelectAddFuncConfComponent_o *v13; // x0
  const MethodInfo *v14; // x4
  System_String_o *EmbedLvDescription; // x0
  const MethodInfo *v16; // x2
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  const MethodInfo *v19; // x3
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4C466E9 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_GetValue_List_object____);
    sub_1C37058(&Method_BasicHelper_GetValue_string___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Enum_TryParse_BattleSkillSelectAddFuncConfComponent_BtnLayoutType___);
    sub_1C37058(&System_Enum_TypeInfo);
    sub_1C37058(&StringLiteral_17429/*"btnLayoutType"*/);
    sub_1C37058(&StringLiteral_17428/*"btn"*/);
    sub_1C37058(&StringLiteral_18600/*"detail"*/);
    sub_1C37058(&StringLiteral_24098/*"title"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C466E9 = 1;
  }
  result = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_14;
  v6 = (SkillLvMaster_o *)Master_object;
  Master_object = (System_String_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                       skillInfo,
                                       skillInfo->klass->vtable._5_get_skillId.method);
  if ( !v6 )
    goto LABEL_14;
  SelectAddFuncInfo = SkillLvMaster__GetSelectAddFuncInfo(v6, (int32_t)Master_object, skillInfo->fields.skilllv, 0);
  if ( !SelectAddFuncInfo )
    return SelectAddFuncInfo != 0;
  this->fields._SkillInfo_k__BackingField = skillInfo;
  *(_WORD *)&this->fields.isPlayedSe = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._SkillInfo_k__BackingField, (int32_t)skillInfo, v7, v8);
  labelTitle = this->fields.labelTitle;
  Master_object = (System_String_o *)BasicHelper__GetValue_object_(
                                       SelectAddFuncInfo,
                                       (System_String_o *)StringLiteral_24098/*"title"*/,
                                       (Il2CppObject *)StringLiteral_1/*""*/,
                                       (const MethodInfo_30D55CC *)Method_BasicHelper_GetValue_string___);
  if ( !labelTitle
    || (UILabel__set_text(labelTitle, Master_object, 0), (Master_object = (System_String_o *)this->fields.skillIcon) == 0) )
  {
LABEL_14:
    sub_1C372B4(Master_object);
  }
  BattleServantSkillIConComponent__SetSkillInfo(
    (BattleServantSkillIConComponent_o *)Master_object,
    skillInfo,
    1,
    0,
    0,
    0,
    v11);
  Value_object = BasicHelper__GetValue_object_(
                   SelectAddFuncInfo,
                   (System_String_o *)StringLiteral_18600/*"detail"*/,
                   (Il2CppObject *)StringLiteral_1/*""*/,
                   (const MethodInfo_30D55CC *)Method_BasicHelper_GetValue_string___);
  v13 = (BattleSkillSelectAddFuncConfComponent_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))skillInfo->klass->vtable._5_get_skillId.methodPtr)(
                                                     skillInfo,
                                                     skillInfo->klass->vtable._5_get_skillId.method);
  EmbedLvDescription = BattleSkillSelectAddFuncConfComponent__GetEmbedLvDescription(
                         v13,
                         (System_String_o *)Value_object,
                         (int32_t)v13,
                         skillInfo->fields.skilllv,
                         v14);
  BattleSkillSelectAddFuncConfComponent__InitDescription(this, EmbedLvDescription, v16);
  v17 = BasicHelper__GetValue_object_(
          SelectAddFuncInfo,
          (System_String_o *)StringLiteral_17429/*"btnLayoutType"*/,
          (Il2CppObject *)StringLiteral_1/*""*/,
          (const MethodInfo_30D55CC *)Method_BasicHelper_GetValue_string___);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  System_Enum__TryParse_Int32Enum_(
    (System_String_o *)v17,
    &result,
    (const MethodInfo_30EE79C *)Method_System_Enum_TryParse_BattleSkillSelectAddFuncConfComponent_BtnLayoutType___);
  v18 = BasicHelper__GetValue_object_(
          SelectAddFuncInfo,
          (System_String_o *)StringLiteral_17428/*"btn"*/,
          0,
          (const MethodInfo_30D55CC *)Method_BasicHelper_GetValue_List_object____);
  BattleSkillSelectAddFuncConfComponent__InitBtnInfo(
    this,
    (System_Collections_Generic_List_object__o *)v18,
    result,
    v19);
  return SelectAddFuncInfo != 0;
}


BattleData_o *BattleSkillSelectAddFuncConfComponent__get_Data(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


BattleSkillInfoData_o *BattleSkillSelectAddFuncConfComponent__get_SkillInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillInfo_k__BackingField;
}


System_String_o *BattleSkillSelectAddFuncConfComponent__get_closeBtnPath(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C466F1 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17472/*"btn_close"*/);
    byte_4C466F1 = 1;
  }
  return (System_String_o *)StringLiteral_17472/*"btn_close"*/;
}


void BattleSkillSelectAddFuncConfComponent__onClickCancel(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4C466EE & 1) == 0 )
  {
    sub_1C37058(&Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__);
    byte_4C466EE = 1;
  }
  if ( !this->fields.isPlayedSe )
  {
    v4 = Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__;
    if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlayCommonSe(v5, 10, 0, 0);
    this->fields.isPlayedSe = 1;
  }
  BattleSkillSelectAddFuncConfComponent__OnSelected(this, -1, v2);
}


void BattleSkillSelectAddFuncConfComponent__set_Data(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Data_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._Data_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleSkillSelectAddFuncConfComponent__set_SkillInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleSkillInfoData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SkillInfo_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._SkillInfo_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  char v10; // w21
  char v11; // w0
  Il2CppObject *m_target; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) != 0 )
  {
    if ( v8 == 2 )
    {
      v9 = sub_1A7F3A0;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 1 )
    {
      if ( this->fields.method_is_virtual )
      {
        v10 = sub_1C37110(method);
        v11 = sub_1C375CC(method);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = sub_1A7F4BC;
          else
            v9 = sub_1A7F470;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = sub_1A7F3E4;
        }
        else
        {
          v9 = sub_1A7F3B4;
        }
      }
      else
      {
        v9 = sub_1A7F37C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A7F324;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *BattleSkillSelectAddFuncConfComponent_SelectCallBack__BeginInvoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = index;
  if ( (byte_4C466F3 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    byte_4C466F3 = 1;
  }
  v13[2] = 0;
  v13[0] = skillInfo;
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, *(_QWORD *)&index, callback, object, method, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v13, callback, object);
}


void BattleSkillSelectAddFuncConfComponent_SelectCallBack__EndInvoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void BattleSkillSelectAddFuncConfComponent_SelectCallBack__Invoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, BattleSkillInfoData_o *, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    skillInfo,
    index,
    this->fields.method);
}


void BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33___ctor(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33__MoveNext(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleSkillSelectAddFuncConfComponent_o *_4__this; // x20
  struct BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *selectCallBack; // x8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C372B4(this);
    if ( this->fields.index < 0 )
      ((void (__fastcall *)(struct BattleSkillSelectAddFuncConfComponent_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._12_Close.methodPtr)(
        _4__this,
        0,
        _4__this->klass->vtable._12_Close.method);
    else
      _4__this->fields.isSelected = 0;
    selectCallBack = _4__this->fields.selectCallBack;
    if ( selectCallBack )
      ((void (__fastcall *)(intptr_t, struct BattleSkillInfoData_o *, _QWORD, intptr_t))selectCallBack->fields.invoke_impl)(
        selectCallBack->fields.method_code,
        _4__this->fields._SkillInfo_k__BackingField,
        (unsigned int)this->fields.index,
        selectCallBack->fields.method);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33__System_Collections_IEnumerator_Reset(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33__System_Collections_IEnumerator_get_Current(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33__System_IDisposable_Dispose(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        const MethodInfo *method)
{
  ;
}