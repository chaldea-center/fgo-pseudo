void __fastcall BattleSkillSelectAddFuncConfComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B055AD & 1) == 0 )
  {
    sub_1BC3008(&BattleSkillSelectAddFuncConfComponent_TypeInfo, v1);
    byte_4B055AD = 1;
  }
  *BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields = (struct BattleSkillSelectAddFuncConfComponent_StaticFields)0x6400000014LL;
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
    sub_1BC3264(this, method);
  max_length = btnLayoutArray->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B055A8 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__, *(_QWORD *)&index);
    byte_4B055A8 = 1;
  }
  if ( BattleSkillSelectAddFuncConfComponent__IsEnableBtn(this, index, method) )
  {
    if ( !this->fields.isPlayedSe )
    {
      v6 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
      if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BC3020(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
      v7 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
      this->fields.isPlayedSe = 1;
    }
    BattleSkillSelectAddFuncConfComponent__OnSelected(this, index, v5);
  }
  else
  {
    v8 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
    if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BC3020(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 2, 0, 0LL);
  }
}


void __fastcall BattleSkillSelectAddFuncConfComponent__Close(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  this->fields.isSelected = 1;
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
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
  __int64 v3; // x1
  UnityEngine_Component_o *labelDescription; // x0

  if ( (byte_4B055AB & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    byte_4B055AB = 1;
  }
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
  labelDescription = (UnityEngine_Component_o *)this->fields.labelDescription;
  if ( !labelDescription
    || (labelDescription = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                        labelDescription,
                                                        (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_1BC3264(labelDescription, v3);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)labelDescription, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B055AA & 1) == 0 )
  {
    sub_1BC3008(&BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_TypeInfo, *(_QWORD *)&index);
    byte_4B055AA = 1;
  }
  v5 = sub_1BC3254(BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_TypeInfo);
  BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33___ctor(
    (BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BC3264(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v8, v9);
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
  System_String_o *Detail; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x22
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x22
  SkillLvMaster_o *Master_object; // x0
  __int64 v20; // x1
  int32_t v22; // [xsp+4h] [xbp-3Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  Detail = str;
  if ( (byte_4B055A6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, str);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_8181/*"LEVEL_DETAIL_INFO"*/, v11);
    sub_1BC3008(&StringLiteral_1/*""*/, v12);
    byte_4B055A6 = 1;
  }
  entity = 0LL;
  if ( skillLv <= 0 )
  {
    v18 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8181/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v22 = skillLv;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16);
    v18 = (Il2CppObject *)System_String__Format(v13, v17, 0LL);
  }
  if ( System_String__IsNullOrEmpty(Detail, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (SkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !Master_object )
      goto LABEL_19;
    if ( !SkillLvMaster__TryGetEntity(Master_object, &entity, skillId, skillLv, 0LL) )
      goto LABEL_15;
    Master_object = (SkillLvMaster_o *)entity;
    if ( !entity )
LABEL_19:
      sub_1BC3264(Master_object, v20);
    Detail = SkillLvEntity__getDetail(entity, 1, 0LL);
  }
LABEL_15:
  if ( System_String__IsNullOrEmpty(Detail, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return System_String__Format(Detail, v18, 0LL);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__Init(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1

  this->fields._Data_k__BackingField = data;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Data_k__BackingField, (int32_t)data, (int32_t)method, v3);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  if ( !this->fields.btnLayoutArray )
    sub_1BC3264(v5, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillSelectAddFuncConfComponent__InitBtnInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        int32_t btnLayoutType,
        const MethodInfo *method)
{
  struct BattleSkillSelectBtnBaseComponent_array *btnLayoutArray; // x22
  __int64 v5; // x8
  BattleSkillSelectAddFuncConfComponent_o *v7; // x20
  __int64 v9; // x23
  struct BattleSkillSelectBtnBaseComponent_o *v10; // x1
  BattleSkillSelectAddFuncConfComponent_o **p_currentBtnLayout; // x21

  btnLayoutArray = this->fields.btnLayoutArray;
  if ( !btnLayoutArray )
    goto LABEL_16;
  v5 = *(_QWORD *)&btnLayoutArray->max_length;
  if ( v5 )
  {
    v7 = this;
    if ( (int)v5 < 1 )
      goto LABEL_20;
    v9 = 0LL;
    do
    {
      if ( (unsigned int)v9 >= (unsigned int)v5 )
        goto LABEL_17;
      this = (BattleSkillSelectAddFuncConfComponent_o *)btnLayoutArray->m_Items[v9];
      if ( !this )
        goto LABEL_16;
      this = (BattleSkillSelectAddFuncConfComponent_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_16;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      LODWORD(v5) = btnLayoutArray->max_length;
      ++v9;
    }
    while ( (int)v9 < (int)v5 );
    btnLayoutArray = v7->fields.btnLayoutArray;
    if ( btnLayoutArray )
    {
LABEL_20:
      if ( btnLayoutArray->max_length <= btnLayoutType )
LABEL_17:
        sub_1BC326C(this, btnList, *(_QWORD *)&btnLayoutType);
      v10 = btnLayoutArray->m_Items[btnLayoutType];
      v7->fields.currentBtnLayout = v10;
      p_currentBtnLayout = (BattleSkillSelectAddFuncConfComponent_o **)&v7->fields.currentBtnLayout;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v7->fields.currentBtnLayout, (int32_t)v10, btnLayoutType, method);
      this = (BattleSkillSelectAddFuncConfComponent_o *)v7->fields.currentBtnLayout;
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
              v7->fields._Data_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
LABEL_16:
    sub_1BC3264(this, btnList);
  }
}


void __fastcall BattleSkillSelectAddFuncConfComponent__InitDescription(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *description,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *labelDescription; // x21
  bool activeSelf; // w20

  if ( (byte_4B055A5 & 1) == 0 )
  {
    sub_1BC3008(&BattleSkillSelectAddFuncConfComponent_TypeInfo, description);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v5);
    byte_4B055A5 = 1;
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
    0LL);
  WrapControlText__textBBCodeAdjust(
    this->fields.labelDescription,
    description,
    BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  activeSelf = UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
  if ( !gameObject
    || (UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.labelDescription) == 0LL)
    || (UIWidget__ResizeCollider((UIWidget_o *)gameObject, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, activeSelf, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.labelDescription) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0LL )
  {
LABEL_14:
    sub_1BC3264(gameObject, description);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSkillSelectAddFuncConfComponent__IsEnableBtn(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentBtnLayout; // x21
  __int64 v6; // x1
  BattleSkillSelectBtnBaseComponent_o *v8; // x0

  if ( (byte_4B055A7 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_4B055A7 = 1;
  }
  currentBtnLayout = (UnityEngine_Object_o *)this->fields.currentBtnLayout;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currentBtnLayout, 0LL, 0LL) )
    return 0;
  v8 = this->fields.currentBtnLayout;
  if ( !v8 )
    sub_1BC3264(0LL, v6);
  return BattleSkillSelectBtnBaseComponent__IsEnableBtn(v8, index, 0LL);
}


bool __fastcall BattleSkillSelectAddFuncConfComponent__IsIntHigher(
        System_String_o *condStr,
        int32_t compVal,
        const MethodInfo *method)
{
  bool v4; // w0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0;
  v4 = System_Int32__TryParse(condStr, &result, 0LL);
  return v4 && result <= compVal;
}


void __fastcall BattleSkillSelectAddFuncConfComponent__OnClick(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0LL) )
    BattleSkillSelectAddFuncConfComponent__onClickCancel(this, v3);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
  }
}


void __fastcall BattleSkillSelectAddFuncConfComponent__SetCallBack(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.selectCallBack = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.selectCallBack, (int32_t)callback, (int32_t)method, v3);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *Master_object; // x0
  __int64 v16; // x1
  SkillLvMaster_o *v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_Dictionary_string__object__o *SelectAddFuncInfo; // x21
  UILabel_o *labelTitle; // x22
  const MethodInfo *v22; // x6
  Il2CppObject *Value_object; // x22
  BattleSkillSelectAddFuncConfComponent_o *v24; // x0
  const MethodInfo *v25; // x4
  System_String_o *EmbedLvDescription; // x0
  const MethodInfo *v27; // x2
  Il2CppObject *v28; // x20
  Il2CppObject *v29; // x0
  const MethodInfo *v30; // x3
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B055A4 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_GetValue_List_object____, skillInfo);
    sub_1BC3008(&Method_BasicHelper_GetValue_string___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_System_Enum_TryParse_BattleSkillSelectAddFuncConfComponent_BtnLayoutType___, v8);
    sub_1BC3008(&System_Enum_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_17278/*"btnLayoutType"*/, v10);
    sub_1BC3008(&StringLiteral_17277/*"btn"*/, v11);
    sub_1BC3008(&StringLiteral_18428/*"detail"*/, v12);
    sub_1BC3008(&StringLiteral_23860/*"title"*/, v13);
    sub_1BC3008(&StringLiteral_1/*""*/, v14);
    byte_4B055A4 = 1;
  }
  result = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_14;
  v17 = (SkillLvMaster_o *)Master_object;
  Master_object = (System_String_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                       skillInfo,
                                       skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v17 )
    goto LABEL_14;
  SelectAddFuncInfo = SkillLvMaster__GetSelectAddFuncInfo(v17, (int32_t)Master_object, skillInfo->fields.skilllv, 0LL);
  if ( !SelectAddFuncInfo )
    return SelectAddFuncInfo != 0LL;
  this->fields._SkillInfo_k__BackingField = skillInfo;
  *(_WORD *)&this->fields.isPlayedSe = 0;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._SkillInfo_k__BackingField, (int32_t)skillInfo, v18, v19);
  labelTitle = this->fields.labelTitle;
  Master_object = (System_String_o *)BasicHelper__GetValue_object_(
                                       SelectAddFuncInfo,
                                       (System_String_o *)StringLiteral_23860/*"title"*/,
                                       (Il2CppObject *)StringLiteral_1/*""*/,
                                       (const MethodInfo_2FEF8B0 *)Method_BasicHelper_GetValue_string___);
  if ( !labelTitle
    || (UILabel__set_text(labelTitle, Master_object, 0LL),
        (Master_object = (System_String_o *)this->fields.skillIcon) == 0LL) )
  {
LABEL_14:
    sub_1BC3264(Master_object, v16);
  }
  BattleServantSkillIConComponent__SetSkillInfo(
    (BattleServantSkillIConComponent_o *)Master_object,
    skillInfo,
    1,
    0,
    0,
    0,
    v22);
  Value_object = BasicHelper__GetValue_object_(
                   SelectAddFuncInfo,
                   (System_String_o *)StringLiteral_18428/*"detail"*/,
                   (Il2CppObject *)StringLiteral_1/*""*/,
                   (const MethodInfo_2FEF8B0 *)Method_BasicHelper_GetValue_string___);
  v24 = (BattleSkillSelectAddFuncConfComponent_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                     skillInfo,
                                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  EmbedLvDescription = BattleSkillSelectAddFuncConfComponent__GetEmbedLvDescription(
                         v24,
                         (System_String_o *)Value_object,
                         (int32_t)v24,
                         skillInfo->fields.skilllv,
                         v25);
  BattleSkillSelectAddFuncConfComponent__InitDescription(this, EmbedLvDescription, v27);
  v28 = BasicHelper__GetValue_object_(
          SelectAddFuncInfo,
          (System_String_o *)StringLiteral_17278/*"btnLayoutType"*/,
          (Il2CppObject *)StringLiteral_1/*""*/,
          (const MethodInfo_2FEF8B0 *)Method_BasicHelper_GetValue_string___);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  System_Enum__TryParse_Int32Enum_(
    (System_String_o *)v28,
    &result,
    (const MethodInfo_30089A8 *)Method_System_Enum_TryParse_BattleSkillSelectAddFuncConfComponent_BtnLayoutType___);
  v29 = BasicHelper__GetValue_object_(
          SelectAddFuncInfo,
          (System_String_o *)StringLiteral_17277/*"btn"*/,
          0LL,
          (const MethodInfo_2FEF8B0 *)Method_BasicHelper_GetValue_List_object____);
  BattleSkillSelectAddFuncConfComponent__InitBtnInfo(
    this,
    (System_Collections_Generic_List_object__o *)v29,
    result,
    v30);
  return SelectAddFuncInfo != 0LL;
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
  if ( (byte_4B055AC & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17320/*"btn_close"*/, method);
    byte_4B055AC = 1;
  }
  return (System_String_o *)StringLiteral_17320/*"btn_close"*/;
}


void __fastcall BattleSkillSelectAddFuncConfComponent__onClickCancel(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B055A9 & 1) == 0 )
  {
    sub_1BC3008(&Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__, method);
    byte_4B055A9 = 1;
  }
  if ( !this->fields.isPlayedSe )
  {
    v4 = Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__;
    if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BC3020(Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
    OverwriteAssetSoundName__PlayCommonSe(v5, 10, 0, 0LL);
    this->fields.isPlayedSe = 1;
  }
  BattleSkillSelectAddFuncConfComponent__OnSelected(this, -1, v2);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__set_Data(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Data_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._Data_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__set_SkillInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleSkillInfoData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SkillInfo_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._SkillInfo_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillSelectAddFuncConfComponent_SelectCallBack___ctor(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  char v10; // w21
  char v11; // w0
  struct System_Reflection_MethodInfo_o *v12; // x9
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) != 0 )
  {
    if ( v8 == 2 )
    {
      v9 = (Il2CppObject *)sub_1A11134;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v8 == 1 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v10 = sub_1BC30C0(v6);
        v11 = sub_1BC357C(v6);
        if ( (v10 & 1) != 0 )
        {
          if ( (v11 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A11250;
          else
            v9 = (Il2CppObject *)sub_1A11204;
        }
        else if ( (v11 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A11178;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A11148;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A11110;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v13, 0LL);
    }
  }
  v12 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v12;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A110B8;
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
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = index;
  if ( (byte_4B055AE & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, skillInfo);
    byte_4B055AE = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)skillInfo;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, *(_QWORD *)&index, callback, object);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v11, callback, object);
}


void __fastcall BattleSkillSelectAddFuncConfComponent_SelectCallBack__EndInvoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall BattleSkillSelectAddFuncConfComponent_SelectCallBack__Invoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        BattleSkillInfoData_o *skillInfo,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleSkillInfoData_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    skillInfo,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33___ctor(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33__MoveNext(
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
      sub_1BC3264(this, method);
    if ( (this->fields.index & 0x80000000) != 0 )
      ((void (__fastcall *)(struct BattleSkillSelectAddFuncConfComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._12_Close.method)(
        _4__this,
        0LL,
        _4__this->klass->vtable._13_CompClose.methodPtr);
    else
      _4__this->fields.isSelected = 0;
    selectCallBack = _4__this->fields.selectCallBack;
    if ( selectCallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct BattleSkillInfoData_o *, _QWORD, _QWORD))selectCallBack->fields.m_target)(
        selectCallBack->fields.original_method_info,
        _4__this->fields._SkillInfo_k__BackingField,
        (unsigned int)this->fields.index,
        *(_QWORD *)&selectCallBack->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33__System_Collections_IEnumerator_Reset(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33__System_Collections_IEnumerator_get_Current(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33__System_IDisposable_Dispose(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__33_o *this,
        const MethodInfo *method)
{
  ;
}