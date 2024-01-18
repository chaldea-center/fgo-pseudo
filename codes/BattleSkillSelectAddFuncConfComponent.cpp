void __fastcall BattleSkillSelectAddFuncConfComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A5C6 & 1) == 0 )
  {
    sub_B2C35C(&BattleSkillSelectAddFuncConfComponent_TypeInfo, v1);
    byte_418A5C6 = 1;
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
  ;
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

  if ( (byte_418A5C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__, *(_QWORD *)&index);
    byte_418A5C0 = 1;
  }
  if ( BattleSkillSelectAddFuncConfComponent__IsEnableBtn(this, index, method) )
  {
    if ( !this->fields.isPlayedSe )
    {
      v6 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
      if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 75) & 2) != 0 )
        v6 = (_QWORD *)sub_B2C364(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
      v7 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
      this->fields.isPlayedSe = 1;
    }
    BattleSkillSelectAddFuncConfComponent__OnSelected(this, index, v5);
  }
  else
  {
    v8 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
    if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B2C364(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
    v9 = (System_Reflection_MethodBase_o *)sub_B2C340(v8, v8[3]);
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

  if ( (byte_418A5C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method);
    byte_418A5C3 = 1;
  }
  labelDescription = (UnityEngine_Component_o *)this->fields.labelDescription;
  if ( !labelDescription
    || (labelDescription = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        labelDescription,
                                                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_B2C434(labelDescription, method);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_418A5C2 & 1) == 0 )
  {
    sub_B2C35C(&BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_TypeInfo, *(_QWORD *)&index);
    byte_418A5C2 = 1;
  }
  v5 = sub_B2C42C(BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_TypeInfo);
  BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41___ctor(
    (BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
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
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x22
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  int32_t v19; // [xsp+4h] [xbp-2Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  Detail = str;
  if ( (byte_418A5BC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, str);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_8375/*"LEVEL_DETAIL_INFO"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_418A5BC = 1;
  }
  entity = 0LL;
  if ( skillLv <= 0 )
  {
    v15 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8375/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v19 = skillLv;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
    v15 = (Il2CppObject *)System_String__Format(v13, v14, 0LL);
  }
  if ( System_String__IsNullOrEmpty(Detail, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    if ( !SkillLvMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, skillId, skillLv, 0LL) )
      goto LABEL_17;
    Master_WarQuestSelectionMaster = (SkillLvMaster_o *)entity;
    if ( !entity )
LABEL_21:
      sub_B2C434(Master_WarQuestSelectionMaster, v17);
    Detail = SkillLvEntity__getDetail(entity, 1, 0LL);
  }
LABEL_17:
  if ( System_String__IsNullOrEmpty(Detail, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return System_String__Format(Detail, v15, 0LL);
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

  if ( (byte_418A5B9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_355/*"#808080"*/, data);
    byte_418A5B9 = 1;
  }
  this->fields._Data_k__BackingField = data;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._Data_k__BackingField,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  if ( !UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)StringLiteral_355/*"#808080"*/,
          &this->fields.disableColor,
          0LL) )
    this->fields.disableColor = UnityEngine_Color__get_gray(0LL);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__InitBtnInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  _QWORD **v16; // x22
  __int64 v17; // x21
  __int16 v18; // w8
  __int64 v19; // x21
  __int64 v20; // x21
  __int64 v21; // x21
  struct BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_array **v22; // x8
  struct BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_array *v23; // x1
  const MethodInfo *v24; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v26; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  struct BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x4

  if ( (byte_418A5BD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___, btnList);
    sub_B2C35C(&Method_BattleSkillSelectAddFuncConfComponent__InitBtnInfo_b__34_0__, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____, v11);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___,
      v12);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___, v13);
    sub_B2C35C(
      &Method_System_Func_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ctor__,
      v14);
    sub_B2C35C(
      &System_Func_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo__TypeInfo,
      v15);
    byte_418A5BD = 1;
  }
  v16 = (_QWORD **)Method_System_Array_Empty_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___;
  v17 = **((_QWORD **)Method_System_Array_Empty_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ + 6);
  v18 = *(_WORD *)(v17 + 306);
  if ( (v18 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ + 6));
    v18 = *(_WORD *)(v17 + 306);
  }
  if ( (v18 & 0x400) != 0 )
  {
    v19 = *v16[6];
    if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
      sub_AC505C(*v16[6]);
    if ( !*(_DWORD *)(v19 + 224) )
    {
      v20 = *v16[6];
      if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
        sub_AC505C(*v16[6]);
      j_il2cpp_runtime_class_init_0(v20);
    }
  }
  v21 = *v16[6];
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AC505C(*v16[6]);
  v22 = *(struct BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_array ***)(v21 + 184);
  v23 = *v22;
  this->fields.selBtnArray = *v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selBtnArray,
    (System_Int32_array **)v23,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)btnList, 0LL) )
  {
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                 (System_Collections_IEnumerable_o *)btnList,
                                                                 (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v26,
      (Il2CppObject *)this,
      Method_BattleSkillSelectAddFuncConfComponent__InitBtnInfo_b__34_0__,
      (const MethodInfo_2713350 *)Method_System_Func_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ctor__);
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v25,
                                                                 (System_Func_TSource__TResult__o *)v26,
                                                                 (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___);
    v28 = (struct BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                v27,
                                                                                (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___);
    this->fields.selBtnArray = v28;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.selBtnArray,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  BattleSkillSelectAddFuncConfComponent__UpdateButton(this, 0, this->fields.btnSelect1, this->fields.labelSelect1, v24);
  BattleSkillSelectAddFuncConfComponent__UpdateButton(this, 1, this->fields.btnSelect2, this->fields.labelSelect2, v35);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__InitDescription(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *description,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UIWidget_o *labelDescription; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  bool activeSelf; // w20

  if ( (byte_418A5BB & 1) == 0 )
  {
    sub_B2C35C(&BattleSkillSelectAddFuncConfComponent_TypeInfo, description);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v5);
    byte_418A5BB = 1;
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
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0LL )
  {
LABEL_15:
    sub_B2C434(gameObject, description);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


bool __fastcall BattleSkillSelectAddFuncConfComponent__IsCondCheck(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *condStr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *v10; // x0
  void *v11; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *v12; // x20
  System_String_o *v13; // x21
  struct BattleData_o *Data_k__BackingField; // x8
  System_String_o *v16; // x19
  int32_t totalCriticalStars; // w20
  bool v18; // w0
  __int64 v19; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418A5C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_string___, condStr);
    sub_B2C35C(&BattleSkillSelectAddFuncConfComponent_TypeInfo, v5);
    sub_B2C35C(&char___TypeInfo, v6);
    sub_B2C35C(&StringLiteral_12363/*"STAR_HIGHER"*/, v7);
    sub_B2C35C(&StringLiteral_9310/*"NONE"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_418A5C5 = 1;
  }
  if ( System_String__IsNullOrEmpty(condStr, 0LL) )
    return 0;
  v10 = (void *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v10 )
    goto LABEL_19;
  v11 = v10;
  if ( !*((_DWORD *)v10 + 6) )
    goto LABEL_20;
  *((_WORD *)v10 + 16) = 58;
  if ( !condStr || (v10 = System_String__Split(condStr, (System_Char_array *)v10, 0LL)) == 0LL )
LABEL_19:
    sub_B2C434(v10, v11);
  v12 = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v10;
  if ( !*((_DWORD *)v10 + 6) )
  {
LABEL_20:
    v19 = sub_B2C460(v10);
    sub_B2C400(v19, 0LL);
  }
  v13 = (System_String_o *)*((_QWORD *)v10 + 4);
  if ( !v13 )
    return 0;
  if ( System_String__op_Equality(*((System_String_o **)v10 + 4), (System_String_o *)StringLiteral_9310/*"NONE"*/, 0LL) )
    return 1;
  if ( !System_String__op_Equality(v13, (System_String_o *)StringLiteral_12363/*"STAR_HIGHER"*/, 0LL) )
    return 0;
  v10 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
          v12,
          1,
          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
          (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_string___);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  v16 = (System_String_o *)v10;
  totalCriticalStars = Data_k__BackingField->fields.totalCriticalStars;
  if ( (BYTE3(BattleSkillSelectAddFuncConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo);
  }
  result = 0;
  v18 = System_Int32__TryParse(v16, &result, 0LL);
  return v18 && result <= totalCriticalStars;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSkillSelectAddFuncConfComponent__IsEnableBtn(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v5; // x0

  if ( (byte_418A5BF & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___, *(_QWORD *)&index);
    byte_418A5BF = 1;
  }
  v5 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
         (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.selBtnArray,
         index,
         0LL,
         (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___);
  if ( v5 )
    LOBYTE(v5) = LOBYTE(v5->fields.imageLimitCount) != 0;
  return (char)v5;
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
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectCallBack,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  SkillLvMaster_o *v14; // x21
  System_Collections_Generic_Dictionary_string__object__o *SelectAddFuncInfo; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Dictionary_string__object__o *v22; // x21
  UILabel_o *labelTitle; // x22
  const MethodInfo *v24; // x6
  bool v25; // w22
  System_String_o *Value_string; // x23
  BattleSkillSelectAddFuncConfComponent_o *v27; // x0
  const MethodInfo *v28; // x4
  System_String_o *EmbedLvDescription; // x0
  const MethodInfo *v30; // x2
  System_String_o *v31; // x0
  const MethodInfo *v32; // x2

  if ( (byte_418A5BA & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_List_object____, skillInfo);
    sub_B2C35C(&Method_BasicHelper_GetValue_string___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_16948/*"btn"*/, v8);
    sub_B2C35C(&StringLiteral_17994/*"detail"*/, v9);
    sub_B2C35C(&StringLiteral_22703/*"title"*/, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_418A5BA = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_14;
  v14 = (SkillLvMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (System_String_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                        skillInfo,
                                                        skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v14 )
    goto LABEL_14;
  SelectAddFuncInfo = SkillLvMaster__GetSelectAddFuncInfo(
                        v14,
                        (int32_t)Master_WarQuestSelectionMaster,
                        skillInfo->fields.skilllv,
                        0LL);
  if ( !SelectAddFuncInfo )
    return 0;
  this->fields._SkillInfo_k__BackingField = skillInfo;
  v22 = SelectAddFuncInfo;
  *(_WORD *)&this->fields.isPlayedSe = 0;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._SkillInfo_k__BackingField,
    (System_Int32_array **)skillInfo,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  labelTitle = this->fields.labelTitle;
  Master_WarQuestSelectionMaster = BasicHelper__GetValue_string_(
                                     v22,
                                     (System_String_o *)StringLiteral_22703/*"title"*/,
                                     (System_String_o *)StringLiteral_1/*""*/,
                                     (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_string___);
  if ( !labelTitle
    || (UILabel__set_text(labelTitle, Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)this->fields.skillIcon) == 0LL) )
  {
LABEL_14:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  }
  v25 = 1;
  BattleServantSkillIConComponent__SetSkillInfo(
    (BattleServantSkillIConComponent_o *)Master_WarQuestSelectionMaster,
    skillInfo,
    1,
    0,
    0,
    0,
    v24);
  Value_string = BasicHelper__GetValue_string_(
                   v22,
                   (System_String_o *)StringLiteral_17994/*"detail"*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_string___);
  v27 = (BattleSkillSelectAddFuncConfComponent_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                     skillInfo,
                                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  EmbedLvDescription = BattleSkillSelectAddFuncConfComponent__GetEmbedLvDescription(
                         v27,
                         Value_string,
                         (int32_t)v27,
                         skillInfo->fields.skilllv,
                         v28);
  BattleSkillSelectAddFuncConfComponent__InitDescription(this, EmbedLvDescription, v30);
  v31 = BasicHelper__GetValue_string_(
          v22,
          (System_String_o *)StringLiteral_16948/*"btn"*/,
          0LL,
          (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_List_object____);
  BattleSkillSelectAddFuncConfComponent__InitBtnInfo(this, (System_Collections_Generic_List_object__o *)v31, v32);
  return v25;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillSelectAddFuncConfComponent__UpdateButton(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        UnityEngine_GameObject_o *obj,
        UILabel_o *label,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *Component_UISprite; // x0
  __int64 v12; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v13; // x21
  bool v14; // w23
  UISprite_o *v15; // x22
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  System_String_o *v20; // x8
  System_String_o *v21; // x1
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  UISprite_o *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A5BE & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_IndexValue_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___, *(_QWORD *)&index);
    sub_B2C35C(&Method_UnityEngine_GameObject_TryGetComponent_UIButton___, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418A5BE = 1;
  }
  component = 0LL;
  Component_UISprite = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                         (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.selBtnArray,
                         index,
                         0LL,
                         (const MethodInfo_1728A0C *)Method_BasicHelper_IndexValue_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___);
  v13 = Component_UISprite;
  if ( Component_UISprite )
  {
    v14 = LOBYTE(Component_UISprite->fields.imageLimitCount) != 0;
    if ( !obj )
      goto LABEL_23;
  }
  else
  {
    v14 = 0;
    if ( !obj )
      goto LABEL_23;
  }
  Component_UISprite = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)UnityEngine_GameObject__TryGetComponent_UISprite_(
                                                                                              obj,
                                                                                              &component,
                                                                                              (const MethodInfo_1AA807C *)Method_UnityEngine_GameObject_TryGetComponent_UIButton___);
  if ( ((unsigned __int8)Component_UISprite & 1) != 0 )
  {
    v15 = component;
    if ( v14 )
    {
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( !v15 )
LABEL_23:
        sub_B2C434(Component_UISprite, v12);
    }
    else
    {
      r = this->fields.disableColor.fields.r;
      g = this->fields.disableColor.fields.g;
      b = this->fields.disableColor.fields.b;
      a = this->fields.disableColor.fields.a;
      if ( !component )
        goto LABEL_23;
    }
    UIButtonColor__set_defaultColor((UIButtonColor_o *)v15, *(UnityEngine_Color_o *)&r, 0LL);
  }
  if ( v13 )
  {
    v20 = *(System_String_o **)&v13->fields.weight;
    if ( !label )
      goto LABEL_23;
  }
  else
  {
    v20 = 0LL;
    if ( !label )
      goto LABEL_23;
  }
  if ( v20 )
    v21 = v20;
  else
    v21 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(label, v21, 0LL);
  if ( v14 )
  {
    *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    v22 = this->fields.disableColor.fields.r;
    v23 = this->fields.disableColor.fields.g;
    v24 = this->fields.disableColor.fields.b;
    v25 = this->fields.disableColor.fields.a;
  }
  UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v22, 0LL);
}


BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *__fastcall BattleSkillSelectAddFuncConfComponent___InitBtnInfo_b__34_0(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dict,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v8; // x21
  BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *v9; // x20

  if ( (byte_418A5C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleSkillSelectAddFuncConfComponent_IsCondCheck__, dict);
    sub_B2C35C(&Method_System_Func_string__bool___ctor__, v5);
    sub_B2C35C(&System_Func_string__bool__TypeInfo, v6);
    sub_B2C35C(&BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_TypeInfo, v7);
    byte_418A5C7 = 1;
  }
  v8 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleSkillSelectAddFuncConfComponent_IsCondCheck__,
    (const MethodInfo_2711C04 *)Method_System_Func_string__bool___ctor__);
  v9 = (BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *)sub_B2C42C(BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_TypeInfo);
  BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ctor(v9, dict, (System_Func_string__bool__o *)v8, 0LL);
  return v9;
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
  if ( (byte_418A5C4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16985/*"btn_close"*/, method);
    byte_418A5C4 = 1;
  }
  return (System_String_o *)StringLiteral_16985/*"btn_close"*/;
}


void __fastcall BattleSkillSelectAddFuncConfComponent__onClickCancel(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A5C1 & 1) == 0 )
  {
    sub_B2C35C(&SeManager_TypeInfo, method);
    byte_418A5C1 = 1;
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._SkillInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ctor(
        BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *this,
        System_Collections_Generic_Dictionary_string__object__o *btnDict,
        System_Func_string__bool__o *funcCondCheck,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  void *v13; // x1
  struct System_String_o *Value_string; // x0
  System_String_o *v15; // x21
  char v16; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_41850DD & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_List_object____, btnDict);
    sub_B2C35C(&Method_BasicHelper_GetValue_string___, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_All_string___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_OfType_string___, v9);
    sub_B2C35C(&StringLiteral_17647/*"conds"*/, v10);
    sub_B2C35C(&StringLiteral_21002/*"name"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_41850DD = 1;
  }
  v13 = StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( btnDict )
  {
    Value_string = BasicHelper__GetValue_string_(
                     btnDict,
                     (System_String_o *)StringLiteral_21002/*"name"*/,
                     (System_String_o *)StringLiteral_1/*""*/,
                     (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_string___);
    this->fields._Name_k__BackingField = Value_string;
    sub_B2C2F8(&this->fields, Value_string);
    v15 = BasicHelper__GetValue_string_(
            btnDict,
            (System_String_o *)StringLiteral_17647/*"conds"*/,
            0LL,
            (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_List_object____);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v15, 0LL) )
    {
      v16 = 1;
    }
    else
    {
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                   (System_Collections_IEnumerable_o *)v15,
                                                                   (const MethodInfo_1A93430 *)Method_System_Linq_Enumerable_OfType_string___);
      v16 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
              v17,
              (System_Func_TSource__bool__o *)funcCondCheck,
              (const MethodInfo_173783C *)Method_System_Linq_Enumerable_All_string___);
    }
    this->fields._IsEnable_k__BackingField = v16;
  }
}


bool __fastcall BattleSkillSelectAddFuncConfComponent_SelectBtnInfo__get_IsEnable(
        BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnable_k__BackingField;
}


System_String_o *__fastcall BattleSkillSelectAddFuncConfComponent_SelectBtnInfo__get_Name(
        BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


void __fastcall BattleSkillSelectAddFuncConfComponent_SelectBtnInfo__set_IsEnable(
        BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnable_k__BackingField = value;
}


void __fastcall BattleSkillSelectAddFuncConfComponent_SelectBtnInfo__set_Name(
        BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._Name_k__BackingField = value;
  sub_B2C2F8(&this->fields, value);
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
  sub_B2C2F8(p_method, object);
}


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
  if ( (byte_41850DE & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, skillInfo);
    byte_41850DE = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)skillInfo;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall BattleSkillSelectAddFuncConfComponent_SelectCallBack__EndInvoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v13; // x3
  BattleSkillInfoData_c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  unsigned int v19; // w24
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  _DWORD *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  void (__fastcall **v28)(BattleSkillInfoData_o *, _QWORD, _QWORD); // x0
  __int64 v29; // x0
  void (__fastcall **v30)(__int64 *, BattleSkillInfoData_o *, _QWORD, _QWORD); // x0
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v31; // x8
  __int64 v32; // x22
  __int64 *v33; // x23
  void (__fastcall *v34)(BattleSkillInfoData_o *, _QWORD, __int64); // x24
  char v35; // w0
  int v36; // w8
  char v37; // w24
  char v38; // w0
  __int64 v39; // x3
  __int64 v40; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x10
  _DWORD *v44; // x11
  char v45; // w23
  char v46; // w0
  __int64 v47; // x3
  BattleSkillInfoData_c *klass; // x8
  __int64 v49; // x1
  __int64 v50; // x2
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *v53; // [xsp+8h] [xbp-48h] BYREF

  v53 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v53;
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
      v31 = v9[i];
      v33 = *(__int64 **)&v31->fields.method;
      v32 = *(_QWORD *)&v31->fields.extra_arg;
      v34 = *(void (__fastcall **)(BattleSkillInfoData_o *, _QWORD, __int64))&v31->fields.method_ptr;
      if ( *(__int16 *)(v32 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v31->fields.extra_arg, skillInfo, *(_QWORD *)&index, method);
      v35 = sub_B2C38C(v32);
      v36 = *(unsigned __int8 *)(v32 + 74);
      if ( (v35 & 1) != 0 )
      {
        if ( v36 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v36 != 2 )
        {
          if ( *(__int16 *)(v32 + 72) != -1 && this->fields.m_target )
          {
            v45 = sub_B2C384(v32);
            v46 = sub_B2C788(v32);
            if ( (v45 & 1) != 0 )
            {
              if ( (v46 & 1) != 0 )
              {
                klass = skillInfo->klass;
                v49 = *(_QWORD *)(v32 + 24);
                v50 = *(unsigned __int16 *)(v32 + 72);
                if ( *(_WORD *)&skillInfo->klass->_2.bitflags1 )
                {
                  v51 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v49 )
                  {
                    ++v51;
                    p_offset += 4;
                    if ( v51 >= *(unsigned __int16 *)&skillInfo->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v50);
                }
                else
                {
LABEL_57:
                  v27 = sub_AC5258(skillInfo, v49, v50, v47);
                }
                v18 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v18 = *((_QWORD *)&skillInfo->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(BattleSkillInfoData_o *, _QWORD, _QWORD))sub_B2C40C(v18, v32);
              (*v28)(skillInfo, (unsigned int)index, v28);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v32 + 72);
              if ( (v46 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v32);
                v14 = skillInfo->klass;
                if ( *(_WORD *)&skillInfo->klass->_2.bitflags1 )
                {
                  v15 = 0LL;
                  v16 = &v14->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v16 - 1) != class_0 )
                  {
                    ++v15;
                    v16 += 4;
                    if ( v15 >= *(unsigned __int16 *)&skillInfo->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v17 = (__int64)(&v14->vtable._0_Equals.method + 2 * (int)(*v16 + v11));
                }
                else
                {
LABEL_11:
                  v17 = sub_AC5258(skillInfo, class_0, v11, v13);
                }
                (*(void (__fastcall **)(BattleSkillInfoData_o *, _QWORD, _QWORD))v17)(
                  skillInfo,
                  (unsigned int)index,
                  *(_QWORD *)(v17 + 8));
              }
              else
              {
                (*((void (__fastcall **)(BattleSkillInfoData_o *, _QWORD, _QWORD))&skillInfo->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v32 + 72)))(
                  skillInfo,
                  (unsigned int)index,
                  *((_QWORD *)&skillInfo->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v34(skillInfo, (unsigned int)index, v32);
          continue;
        }
        if ( !v33 )
          goto LABEL_58;
        if ( *(__int16 *)(v32 + 72) != -1 && (*(_BYTE *)(*v33 + 277) & 1) == 0 && this->fields.m_target )
        {
          v37 = sub_B2C384(v32);
          v38 = sub_B2C788(v32);
          if ( (v37 & 1) != 0 )
          {
            if ( (v38 & 1) != 0 )
            {
              v40 = *v33;
              v41 = *(_QWORD *)(v32 + 24);
              v42 = *(unsigned __int16 *)(v32 + 72);
              if ( *(_WORD *)(*v33 + 298) )
              {
                v43 = 0LL;
                v44 = (_DWORD *)(*(_QWORD *)(v40 + 176) + 8LL);
                while ( *((_QWORD *)v44 - 1) != v41 )
                {
                  ++v43;
                  v44 += 4;
                  if ( v43 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_48;
                }
                v29 = v40 + 16LL * (*v44 + (int)v42) + 312;
              }
              else
              {
LABEL_48:
                v29 = sub_AC5258(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, BattleSkillInfoData_o *, _QWORD, _QWORD))sub_B2C40C(v26, v32);
            (*v30)(v33, skillInfo, (unsigned int)index, v30);
          }
          else
          {
            v19 = *(unsigned __int16 *)(v32 + 72);
            if ( (v38 & 1) != 0 )
            {
              v20 = j_il2cpp_method_get_class_0(v32);
              v22 = *v33;
              if ( *(_WORD *)(*v33 + 298) )
              {
                v23 = 0LL;
                v24 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
                while ( *((_QWORD *)v24 - 1) != v20 )
                {
                  ++v23;
                  v24 += 4;
                  if ( v23 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_19;
                }
                v25 = v22 + 16LL * (int)(*v24 + v19) + 312;
              }
              else
              {
LABEL_19:
                v25 = sub_AC5258(v33, v20, v19, v21);
              }
              (*(void (__fastcall **)(__int64 *, BattleSkillInfoData_o *, _QWORD, _QWORD))v25)(
                v33,
                skillInfo,
                (unsigned int)index,
                *(_QWORD *)(v25 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, BattleSkillInfoData_o *, _QWORD, _QWORD))(*v33
                                                                                         + 16LL
                                                                                         * *(unsigned __int16 *)(v32 + 72)
                                                                                         + 312))(
                v33,
                skillInfo,
                (unsigned int)index,
                *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, BattleSkillInfoData_o *, _QWORD, __int64))v34)(
        v33,
        skillInfo,
        (unsigned int)index,
        v32);
    }
  }
}


void __fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41___ctor(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41__MoveNext(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_o *this,
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
      sub_B2C2F8(&this->fields.__2__current, 0LL);
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
    sub_B2C434(this, method);
  if ( (this->fields.index & 0x80000000) != 0 )
    ((void (__fastcall *)(struct BattleSkillSelectAddFuncConfComponent_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._12_Close.method)(
      _4__this,
      0LL,
      _4__this->klass->vtable._13_CompClose.methodPtr);
  else
    *(_WORD *)&_4__this->fields.isPlayedSe = 0;
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


Il2CppObject *__fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41__System_Collections_IEnumerator_Reset(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41__System_Collections_IEnumerator_get_Current(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41__System_IDisposable_Dispose(
        BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_o *this,
        const MethodInfo *method)
{
  ;
}