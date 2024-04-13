void __fastcall BattleSkillSelectAddFuncConfComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB2EC & 1) == 0 )
  {
    sub_B5D5C4(&BattleSkillSelectAddFuncConfComponent_TypeInfo, v1, v2, v3);
    byte_42EB2EC = 1;
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


void __fastcall BattleSkillSelectAddFuncConfComponent__ClickSelected(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x2
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_42EB2E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__, index, (_DWORD)method, v3);
    byte_42EB2E6 = 1;
  }
  if ( BattleSkillSelectAddFuncConfComponent__IsEnableBtn(this, index, method) )
  {
    if ( !this->fields.isPlayedSe )
    {
      v7 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
      if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 75) & 2) != 0 )
        v7 = (_QWORD *)sub_B5D5CC(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
      v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
      this->fields.isPlayedSe = 1;
    }
    BattleSkillSelectAddFuncConfComponent__OnSelected(this, index, v6);
  }
  else
  {
    v9 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
    if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 75) & 2) != 0 )
      v9 = (_QWORD *)sub_B5D5CC(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
    v10 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v9, v9[3]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *labelDescription; // x0

  if ( (byte_42EB2E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, (_DWORD)method, v2, v3);
    byte_42EB2E9 = 1;
  }
  labelDescription = (UnityEngine_Component_o *)this->fields.labelDescription;
  if ( !labelDescription
    || (labelDescription = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        labelDescription,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_B5D69C(labelDescription, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)labelDescription, 1, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB2E8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_TypeInfo, index, (_DWORD)method, v3);
    byte_42EB2E8 = 1;
  }
  v6 = sub_B5D694(BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_TypeInfo);
  BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41___ctor(
    (BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 32) = index;
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleSkillSelectAddFuncConfComponent__GetEmbedLvDescription(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *str,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  System_String_o *Detail; // x19
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_o *v23; // x22
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x22
  SkillLvMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v27; // x1
  int32_t v29; // [xsp+4h] [xbp-2Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  Detail = str;
  if ( (byte_42EB2E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, (_DWORD)str, skillId, *(_QWORD *)&skillLv);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_8459/*"LEVEL_DETAIL_INFO"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42EB2E2 = 1;
  }
  entity = 0LL;
  if ( skillLv <= 0 )
  {
    v25 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8459/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v29 = skillLv;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
    v25 = (Il2CppObject *)System_String__Format(v23, v24, 0LL);
  }
  if ( System_String__IsNullOrEmpty(Detail, 0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    if ( !SkillLvMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, skillId, skillLv, 0LL) )
      goto LABEL_17;
    Master_WarQuestSelectionMaster = (SkillLvMaster_o *)entity;
    if ( !entity )
LABEL_21:
      sub_B5D69C(Master_WarQuestSelectionMaster, v27);
    Detail = SkillLvEntity__getDetail(entity, 1, 0LL);
  }
LABEL_17:
  if ( System_String__IsNullOrEmpty(Detail, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return System_String__Format(Detail, v25, 0LL);
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

  if ( (byte_42EB2DF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_361/*"#808080"*/, (_DWORD)data, (_DWORD)method, v3);
    byte_42EB2DF = 1;
  }
  this->fields._Data_k__BackingField = data;
  sub_B5D560(
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
          (System_String_o *)StringLiteral_361/*"#808080"*/,
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
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
  _QWORD **v28; // x22
  __int64 v29; // x21
  __int16 v30; // w8
  __int64 v31; // x21
  __int64 v32; // x21
  __int64 v33; // x21
  struct BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_array **v34; // x8
  struct BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_array *v35; // x1
  const MethodInfo *v36; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v38; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  struct BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_array *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  const MethodInfo *v47; // x4

  if ( (byte_42EB2E3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Array_Empty_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___,
      (_DWORD)btnList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_BattleSkillSelectAddFuncConfComponent__InitBtnInfo_b__34_0__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____, v13, v14, v15);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___,
      v16,
      v17,
      v18);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ToArray_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_System_Func_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ctor__,
      v22,
      v23,
      v24);
    sub_B5D5C4(
      &System_Func_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo__TypeInfo,
      v25,
      v26,
      v27);
    byte_42EB2E3 = 1;
  }
  v28 = (_QWORD **)Method_System_Array_Empty_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___;
  v29 = **((_QWORD **)Method_System_Array_Empty_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ + 6);
  v30 = *(_WORD *)(v29 + 306);
  if ( (v30 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ + 6));
    v30 = *(_WORD *)(v29 + 306);
  }
  if ( (v30 & 0x400) != 0 )
  {
    v31 = *v28[6];
    if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
      sub_AF52C4(*v28[6]);
    if ( !*(_DWORD *)(v31 + 224) )
    {
      v32 = *v28[6];
      if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
        sub_AF52C4(*v28[6]);
      j_il2cpp_runtime_class_init_0(v32);
    }
  }
  v33 = *v28[6];
  if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
    sub_AF52C4(*v28[6]);
  v34 = *(struct BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_array ***)(v33 + 184);
  v35 = *v34;
  this->fields.selBtnArray = *v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.selBtnArray,
    (System_Int32_array **)v35,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)btnList, 0LL) )
  {
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                 (System_Collections_IEnumerable_o *)btnList,
                                                                 (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      v38,
      (Il2CppObject *)this,
      Method_BattleSkillSelectAddFuncConfComponent__InitBtnInfo_b__34_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ctor__);
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v37,
                                                                 (System_Func_TSource__TResult__o *)v38,
                                                                 (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___);
    v40 = (struct BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                                v39,
                                                                                (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___);
    this->fields.selBtnArray = v40;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.selBtnArray,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  BattleSkillSelectAddFuncConfComponent__UpdateButton(this, 0, this->fields.btnSelect1, this->fields.labelSelect1, v36);
  BattleSkillSelectAddFuncConfComponent__UpdateButton(this, 1, this->fields.btnSelect2, this->fields.labelSelect2, v47);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__InitDescription(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *description,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UIWidget_o *labelDescription; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  bool activeSelf; // w20

  if ( (byte_42EB2E1 & 1) == 0 )
  {
    sub_B5D5C4(&BattleSkillSelectAddFuncConfComponent_TypeInfo, (_DWORD)description, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v6, v7, v8);
    byte_42EB2E1 = 1;
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
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(gameObject, description);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


bool __fastcall BattleSkillSelectAddFuncConfComponent__IsCondCheck(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *condStr,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  void *v21; // x0
  void *v22; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *v23; // x20
  System_String_o *v24; // x21
  struct BattleData_o *Data_k__BackingField; // x8
  System_String_o *v27; // x19
  int32_t totalCriticalStars; // w20
  bool v29; // w0
  __int64 v30; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB2EB & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_string___, (_DWORD)condStr, (_DWORD)method, v3);
    sub_B5D5C4(&BattleSkillSelectAddFuncConfComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&char___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_12511/*"STAR_HIGHER"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_9405/*"NONE"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42EB2EB = 1;
  }
  if ( System_String__IsNullOrEmpty(condStr, 0LL) )
    return 0;
  v21 = (void *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v21 )
    goto LABEL_19;
  v22 = v21;
  if ( !*((_DWORD *)v21 + 6) )
    goto LABEL_20;
  *((_WORD *)v21 + 16) = 58;
  if ( !condStr || (v21 = System_String__Split(condStr, (System_Char_array *)v21, 0LL)) == 0LL )
LABEL_19:
    sub_B5D69C(v21, v22);
  v23 = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v21;
  if ( !*((_DWORD *)v21 + 6) )
  {
LABEL_20:
    v30 = sub_B5D6C8(v21);
    sub_B5D668(v30, 0LL);
  }
  v24 = (System_String_o *)*((_QWORD *)v21 + 4);
  if ( !v24 )
    return 0;
  if ( System_String__op_Equality(*((System_String_o **)v21 + 4), (System_String_o *)StringLiteral_9405/*"NONE"*/, 0LL) )
    return 1;
  if ( !System_String__op_Equality(v24, (System_String_o *)StringLiteral_12511/*"STAR_HIGHER"*/, 0LL) )
    return 0;
  v21 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
          v23,
          1,
          (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
          (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_string___);
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_19;
  v27 = (System_String_o *)v21;
  totalCriticalStars = Data_k__BackingField->fields.totalCriticalStars;
  if ( (BYTE3(BattleSkillSelectAddFuncConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo);
  }
  result = 0;
  v29 = System_Int32__TryParse(v27, &result, 0LL);
  return v29 && result <= totalCriticalStars;
}


bool __fastcall BattleSkillSelectAddFuncConfComponent__IsEnableBtn(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v6; // x0

  if ( (byte_42EB2E5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_IndexValue_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___,
      index,
      (_DWORD)method,
      v3);
    byte_42EB2E5 = 1;
  }
  v6 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
         (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.selBtnArray,
         index,
         0LL,
         (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___);
  if ( v6 )
    LOBYTE(v6) = LOBYTE(v6->fields.imageLimitCount) != 0;
  return (char)v6;
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
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
  System_String_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  SkillLvMaster_o *v29; // x21
  System_Collections_Generic_Dictionary_string__object__o *SelectAddFuncInfo; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_Dictionary_string__object__o *v37; // x21
  UILabel_o *labelTitle; // x22
  const MethodInfo *v39; // x6
  bool v40; // w22
  System_String_o *Value_string; // x23
  BattleSkillSelectAddFuncConfComponent_o *v42; // x0
  const MethodInfo *v43; // x4
  System_String_o *EmbedLvDescription; // x0
  const MethodInfo *v45; // x2
  System_String_o *v46; // x0
  const MethodInfo *v47; // x2

  if ( (byte_42EB2E0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_List_object____, (_DWORD)skillInfo, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_GetValue_string___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_17156/*"btn"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_18219/*"detail"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_23008/*"title"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    byte_42EB2E0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_String_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_14;
  v29 = (SkillLvMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (System_String_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                        skillInfo,
                                                        skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v29 )
    goto LABEL_14;
  SelectAddFuncInfo = SkillLvMaster__GetSelectAddFuncInfo(
                        v29,
                        (int32_t)Master_WarQuestSelectionMaster,
                        skillInfo->fields.skilllv,
                        0LL);
  if ( !SelectAddFuncInfo )
    return 0;
  this->fields._SkillInfo_k__BackingField = skillInfo;
  v37 = SelectAddFuncInfo;
  *(_WORD *)&this->fields.isPlayedSe = 0;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._SkillInfo_k__BackingField,
    (System_Int32_array **)skillInfo,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  labelTitle = this->fields.labelTitle;
  Master_WarQuestSelectionMaster = BasicHelper__GetValue_string_(
                                     v37,
                                     (System_String_o *)StringLiteral_23008/*"title"*/,
                                     (System_String_o *)StringLiteral_1/*""*/,
                                     (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_string___);
  if ( !labelTitle
    || (UILabel__set_text(labelTitle, Master_WarQuestSelectionMaster, 0LL),
        (Master_WarQuestSelectionMaster = (System_String_o *)this->fields.skillIcon) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(Master_WarQuestSelectionMaster, v28);
  }
  v40 = 1;
  BattleServantSkillIConComponent__SetSkillInfo(
    (BattleServantSkillIConComponent_o *)Master_WarQuestSelectionMaster,
    skillInfo,
    1,
    0,
    0,
    0,
    v39);
  Value_string = BasicHelper__GetValue_string_(
                   v37,
                   (System_String_o *)StringLiteral_18219/*"detail"*/,
                   (System_String_o *)StringLiteral_1/*""*/,
                   (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_string___);
  v42 = (BattleSkillSelectAddFuncConfComponent_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                     skillInfo,
                                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  EmbedLvDescription = BattleSkillSelectAddFuncConfComponent__GetEmbedLvDescription(
                         v42,
                         Value_string,
                         (int32_t)v42,
                         skillInfo->fields.skilllv,
                         v43);
  BattleSkillSelectAddFuncConfComponent__InitDescription(this, EmbedLvDescription, v45);
  v46 = BasicHelper__GetValue_string_(
          v37,
          (System_String_o *)StringLiteral_17156/*"btn"*/,
          0LL,
          (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_List_object____);
  BattleSkillSelectAddFuncConfComponent__InitBtnInfo(this, (System_Collections_Generic_List_object__o *)v46, v47);
  return v40;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillSelectAddFuncConfComponent__UpdateButton(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        UnityEngine_GameObject_o *obj,
        UILabel_o *label,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *Component_UISprite; // x0
  __int64 v16; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v17; // x21
  bool v18; // w23
  UISprite_o *v19; // x22
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  System_String_o *v24; // x8
  System_String_o *v25; // x1
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s3
  UISprite_o *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EB2E4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_BasicHelper_IndexValue_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___,
      index,
      (_DWORD)obj,
      label);
    sub_B5D5C4(&Method_UnityEngine_GameObject_TryGetComponent_UIButton___, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EB2E4 = 1;
  }
  component = 0LL;
  Component_UISprite = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                         (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.selBtnArray,
                         index,
                         0LL,
                         (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___);
  v17 = Component_UISprite;
  if ( Component_UISprite )
  {
    v18 = LOBYTE(Component_UISprite->fields.imageLimitCount) != 0;
    if ( !obj )
      goto LABEL_23;
  }
  else
  {
    v18 = 0;
    if ( !obj )
      goto LABEL_23;
  }
  Component_UISprite = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)UnityEngine_GameObject__TryGetComponent_UISprite_(
                                                                                              obj,
                                                                                              &component,
                                                                                              (const MethodInfo_1CC4B3C *)Method_UnityEngine_GameObject_TryGetComponent_UIButton___);
  if ( ((unsigned __int8)Component_UISprite & 1) != 0 )
  {
    v19 = component;
    if ( v18 )
    {
      *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
      if ( !v19 )
LABEL_23:
        sub_B5D69C(Component_UISprite, v16);
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
    UIButtonColor__set_defaultColor((UIButtonColor_o *)v19, *(UnityEngine_Color_o *)&r, 0LL);
  }
  if ( v17 )
  {
    v24 = *(System_String_o **)&v17->fields.weight;
    if ( !label )
      goto LABEL_23;
  }
  else
  {
    v24 = 0LL;
    if ( !label )
      goto LABEL_23;
  }
  if ( v24 )
    v25 = v24;
  else
    v25 = (System_String_o *)StringLiteral_1/*""*/;
  UILabel__set_text(label, v25, 0LL);
  if ( v18 )
  {
    *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
  }
  else
  {
    v26 = this->fields.disableColor.fields.r;
    v27 = this->fields.disableColor.fields.g;
    v28 = this->fields.disableColor.fields.b;
    v29 = this->fields.disableColor.fields.a;
  }
  UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v26, 0LL);
}


BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *__fastcall BattleSkillSelectAddFuncConfComponent___InitBtnInfo_b__34_0(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dict,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x21
  BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *v16; // x20

  if ( (byte_42EB2ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleSkillSelectAddFuncConfComponent_IsCondCheck__, (_DWORD)dict, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_string__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_string__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_TypeInfo, v12, v13, v14);
    byte_42EB2ED = 1;
  }
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleSkillSelectAddFuncConfComponent_IsCondCheck__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_string__bool___ctor__);
  v16 = (BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_o *)sub_B5D694(BattleSkillSelectAddFuncConfComponent_SelectBtnInfo_TypeInfo);
  BattleSkillSelectAddFuncConfComponent_SelectBtnInfo___ctor(v16, dict, (System_Func_string__bool__o *)v15, 0LL);
  return v16;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB2EA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17194/*"btn_close"*/, (_DWORD)method, v2, v3);
    byte_42EB2EA = 1;
  }
  return (System_String_o *)StringLiteral_17194/*"btn_close"*/;
}


void __fastcall BattleSkillSelectAddFuncConfComponent__onClickCancel(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB2E7 & 1) == 0 )
  {
    sub_B5D5C4(&SeManager_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB2E7 = 1;
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
  sub_B5D560(
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
  sub_B5D560(
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  System_String_o *Value_string; // x21
  char v26; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_42E60F8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_List_object____, (_DWORD)btnDict, (_DWORD)funcCondCheck, method);
    sub_B5D5C4(&Method_BasicHelper_GetValue_string___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_string___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_string___, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17866/*"conds"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_21277/*"name"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_1/*""*/, v22, v23, v24);
    byte_42E60F8 = 1;
  }
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( btnDict )
  {
    this->fields._Name_k__BackingField = BasicHelper__GetValue_string_(
                                           btnDict,
                                           (System_String_o *)StringLiteral_21277/*"name"*/,
                                           (System_String_o *)StringLiteral_1/*""*/,
                                           (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_string___);
    sub_B5D560(&this->fields);
    Value_string = BasicHelper__GetValue_string_(
                     btnDict,
                     (System_String_o *)StringLiteral_17866/*"conds"*/,
                     0LL,
                     (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_List_object____);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_string, 0LL) )
    {
      v26 = 1;
    }
    else
    {
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                   (System_Collections_IEnumerable_o *)Value_string,
                                                                   (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_string___);
      v26 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
              v27,
              (System_Func_TSource__bool__o *)funcCondCheck,
              (const MethodInfo_1C97E70 *)Method_System_Linq_Enumerable_All_string___);
    }
    this->fields._IsEnable_k__BackingField = v26;
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
  sub_B5D560(&this->fields);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E60F9 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)skillInfo, index, callback);
    byte_42E60F9 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)skillInfo;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall BattleSkillSelectAddFuncConfComponent_SelectCallBack__EndInvoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v31->fields.extra_arg, skillInfo, *(_QWORD *)&index);
      v35 = sub_B5D5F4(v32);
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
            v45 = sub_B5D5EC(v32);
            v46 = sub_B5D9F0(v32);
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
                  v27 = sub_AF54C0(skillInfo, v49, v50, v47);
                }
                v18 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v18 = *((_QWORD *)&skillInfo->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(BattleSkillInfoData_o *, _QWORD, _QWORD))sub_B5D674(v18, v32);
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
                  v17 = sub_AF54C0(skillInfo, class_0, v11, v13);
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
          v37 = sub_B5D5EC(v32);
          v38 = sub_B5D9F0(v32);
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
                v29 = sub_AF54C0(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, BattleSkillInfoData_o *, _QWORD, _QWORD))sub_B5D674(v26, v32);
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
                v25 = sub_AF54C0(v33, v20, v19, v21);
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
      sub_B5D560(&this->fields.__2__current);
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
    sub_B5D69C(this, method);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__41_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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