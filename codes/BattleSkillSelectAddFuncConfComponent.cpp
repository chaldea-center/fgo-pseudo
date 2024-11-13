void __fastcall BattleSkillSelectAddFuncConfComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct BattleSkillSelectAddFuncConfComponent_StaticFields *static_fields; // x8

  if ( (byte_4B19343 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillSelectAddFuncConfComponent_TypeInfo, v1, v2);
    byte_4B19343 = 1;
  }
  static_fields = BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DETAIL_FONT_SIZE = 0x6400000014LL;
  static_fields->DETAIL_LABEL_MAX_HEIGHT = 500;
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
    sub_1BCAA3C(this, method);
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

  if ( (byte_4B1933E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__, *(_QWORD *)&index, method);
    byte_4B1933E = 1;
  }
  if ( BattleSkillSelectAddFuncConfComponent__IsEnableBtn(this, index, method) )
  {
    if ( !this->fields.isPlayedSe )
    {
      v6 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
      if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1BCA7F8(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
      v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
      this->fields.isPlayedSe = 1;
    }
    BattleSkillSelectAddFuncConfComponent__OnSelected(this, index, v5);
  }
  else
  {
    v8 = Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__;
    if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_BattleSkillSelectAddFuncConfComponent_ClickSelected__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
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
  __int64 v2; // x2
  UnityEngine_Component_o *labelDescription; // x0

  if ( (byte_4B19341 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, method, v2);
    byte_4B19341 = 1;
  }
  labelDescription = (UnityEngine_Component_o *)this->fields.labelDescription;
  if ( !labelDescription
    || (labelDescription = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                        labelDescription,
                                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0LL )
  {
    sub_1BCAA3C(labelDescription, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)labelDescription, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected(
        BattleSkillSelectAddFuncConfComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B19340 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_TypeInfo, *(_QWORD *)&index, method);
    byte_4B19340 = 1;
  }
  v6 = sub_1BCAA2C(
         BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_TypeInfo,
         *(_QWORD *)&index,
         method,
         v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
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
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x22
  __int64 v21; // x1
  SkillLvMaster_o *Master_object; // x0
  __int64 v23; // x1
  int32_t v25; // [xsp+4h] [xbp-3Ch] BYREF
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  Detail = str;
  if ( (byte_4B1933C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, str, *(_QWORD *)&skillId);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&int_TypeInfo, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_8360/*"LEVEL_DETAIL_INFO"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B1933C = 1;
  }
  entity = 0LL;
  if ( skillLv <= 0 )
  {
    v20 = (Il2CppObject *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, str);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_8360/*"LEVEL_DETAIL_INFO"*/, 0LL);
    v25 = skillLv;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
    v20 = (Il2CppObject *)System_String__Format(v18, v19, 0LL);
  }
  if ( System_String__IsNullOrEmpty(Detail, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
    Master_object = (SkillLvMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
    if ( !Master_object )
      goto LABEL_19;
    if ( !SkillLvMaster__TryGetEntity(Master_object, &entity, skillId, skillLv, 0LL) )
      goto LABEL_15;
    Master_object = (SkillLvMaster_o *)entity;
    if ( !entity )
LABEL_19:
      sub_1BCAA3C(Master_object, v23);
    Detail = SkillLvEntity__getDetail(entity, 1, 0LL);
  }
LABEL_15:
  if ( System_String__IsNullOrEmpty(Detail, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  else
    return System_String__Format(Detail, v20, 0LL);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__Init(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x0
  __int64 v10; // x1

  this->fields._Data_k__BackingField = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Data_k__BackingField,
    (int64_t)data,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  if ( !this->fields.btnLayoutArray )
    sub_1BCAA3C(v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillSelectAddFuncConfComponent__InitBtnInfo(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        int32_t btnLayoutType,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleSkillSelectBtnBaseComponent_array *btnLayoutArray; // x22
  __int64 v9; // x8
  BattleSkillSelectAddFuncConfComponent_o *v11; // x20
  __int64 v13; // x23
  int64_t v14; // x1
  BattleSkillSelectAddFuncConfComponent_o **p_currentBtnLayout; // x21
  const MethodInfo *v16; // x3

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
LABEL_17:
        sub_1BCAA44(this, btnList);
      v14 = (int64_t)btnLayoutArray->m_Items[btnLayoutType];
      v11->fields.currentBtnLayout = (struct BattleSkillSelectBtnBaseComponent_o *)v14;
      p_currentBtnLayout = (BattleSkillSelectAddFuncConfComponent_o **)&v11->fields.currentBtnLayout;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v11->fields.currentBtnLayout,
        v14,
        *(int64_t *)&btnLayoutType,
        (int32_t)method,
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
    sub_1BCAA3C(this, btnList);
  }
}


void __fastcall BattleSkillSelectAddFuncConfComponent__InitDescription(
        BattleSkillSelectAddFuncConfComponent_o *this,
        System_String_o *description,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *labelDescription; // x21
  bool activeSelf; // w20

  if ( (byte_4B1933B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSkillSelectAddFuncConfComponent_TypeInfo, description, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v5, v6);
    byte_4B1933B = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)BattleSkillSelectAddFuncConfComponent_TypeInfo;
  labelDescription = (UIWidget_o *)this->fields.labelDescription;
  if ( !BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo, description);
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
    BattleSkillSelectAddFuncConfComponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
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
                                                   (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(gameObject, description);
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
  const MethodInfo *v7; // x2
  BattleSkillSelectBtnBaseComponent_o *v9; // x0

  if ( (byte_4B1933D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index, method);
    byte_4B1933D = 1;
  }
  currentBtnLayout = (UnityEngine_Object_o *)this->fields.currentBtnLayout;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
  if ( UnityEngine_Object__op_Equality(currentBtnLayout, 0LL, 0LL) )
    return 0;
  v9 = this->fields.currentBtnLayout;
  if ( !v9 )
    sub_1BCAA3C(0LL, v6);
  return BattleSkillSelectBtnBaseComponent__IsEnableBtn(v9, index, v7);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
  }
}


void __fastcall BattleSkillSelectAddFuncConfComponent__SetCallBack(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.selectCallBack = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.selectCallBack,
    (int64_t)callback,
    (int64_t)method,
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  System_String_o *Master_object; // x0
  __int64 v26; // x1
  SkillLvMaster_o *v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_Dictionary_string__object__o *SelectAddFuncInfo; // x21
  UILabel_o *labelTitle; // x22
  const MethodInfo *v36; // x6
  Il2CppObject *Value_object; // x22
  BattleSkillSelectAddFuncConfComponent_o *v38; // x0
  const MethodInfo *v39; // x4
  System_String_o *EmbedLvDescription; // x0
  const MethodInfo *v41; // x2
  __int64 v42; // x1
  Il2CppObject *v43; // x20
  Il2CppObject *v44; // x0
  const MethodInfo *v45; // x3
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4B1933A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_List_object____, skillInfo, method);
    sub_1BCA7E0(&Method_BasicHelper_GetValue_string___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Enum_TryParse_BattleSkillSelectAddFuncConfComponent_BtnLayoutType___, v11, v12);
    sub_1BCA7E0(&System_Enum_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_17634/*"btnLayoutType"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17633/*"btn"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_18786/*"detail"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_24207/*"title"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v23, v24);
    byte_4B1933A = 1;
  }
  result = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillInfo);
  Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
  if ( !skillInfo )
    goto LABEL_14;
  v27 = (SkillLvMaster_o *)Master_object;
  Master_object = (System_String_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                       skillInfo,
                                       skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  if ( !v27 )
    goto LABEL_14;
  SelectAddFuncInfo = SkillLvMaster__GetSelectAddFuncInfo(v27, (int32_t)Master_object, skillInfo->fields.skilllv, 0LL);
  if ( !SelectAddFuncInfo )
    return SelectAddFuncInfo != 0LL;
  this->fields._SkillInfo_k__BackingField = skillInfo;
  *(_WORD *)&this->fields.isPlayedSe = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SkillInfo_k__BackingField,
    (int64_t)skillInfo,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  labelTitle = this->fields.labelTitle;
  Master_object = (System_String_o *)BasicHelper__GetValue_object_(
                                       SelectAddFuncInfo,
                                       (System_String_o *)StringLiteral_24207/*"title"*/,
                                       (Il2CppObject *)StringLiteral_1/*""*/,
                                       (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_string___);
  if ( !labelTitle
    || (UILabel__set_text(labelTitle, Master_object, 0LL),
        (Master_object = (System_String_o *)this->fields.skillIcon) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(Master_object, v26);
  }
  BattleServantSkillIConComponent__SetSkillInfo(
    (BattleServantSkillIConComponent_o *)Master_object,
    skillInfo,
    1,
    0,
    0,
    0,
    v36);
  Value_object = BasicHelper__GetValue_object_(
                   SelectAddFuncInfo,
                   (System_String_o *)StringLiteral_18786/*"detail"*/,
                   (Il2CppObject *)StringLiteral_1/*""*/,
                   (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_string___);
  v38 = (BattleSkillSelectAddFuncConfComponent_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                                     skillInfo,
                                                     skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
  EmbedLvDescription = BattleSkillSelectAddFuncConfComponent__GetEmbedLvDescription(
                         v38,
                         (System_String_o *)Value_object,
                         (int32_t)v38,
                         skillInfo->fields.skilllv,
                         v39);
  BattleSkillSelectAddFuncConfComponent__InitDescription(this, EmbedLvDescription, v41);
  v43 = BasicHelper__GetValue_object_(
          SelectAddFuncInfo,
          (System_String_o *)StringLiteral_17634/*"btnLayoutType"*/,
          (Il2CppObject *)StringLiteral_1/*""*/,
          (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_string___);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v42);
  System_Enum__TryParse_Int32Enum_(
    (System_String_o *)v43,
    &result,
    (const MethodInfo_2F19EE8 *)Method_System_Enum_TryParse_BattleSkillSelectAddFuncConfComponent_BtnLayoutType___);
  v44 = BasicHelper__GetValue_object_(
          SelectAddFuncInfo,
          (System_String_o *)StringLiteral_17633/*"btn"*/,
          0LL,
          (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_List_object____);
  BattleSkillSelectAddFuncConfComponent__InitBtnInfo(
    this,
    (System_Collections_Generic_List_object__o *)v44,
    result,
    v45);
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
  __int64 v2; // x2

  if ( (byte_4B19342 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17676/*"btn_close"*/, method, v2);
    byte_4B19342 = 1;
  }
  return (System_String_o *)StringLiteral_17676/*"btn_close"*/;
}


void __fastcall BattleSkillSelectAddFuncConfComponent__onClickCancel(
        BattleSkillSelectAddFuncConfComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  if ( (byte_4B1933F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__, method, v2);
    byte_4B1933F = 1;
  }
  if ( !this->fields.isPlayedSe )
  {
    v4 = Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__;
    if ( (*((_BYTE *)Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_BattleSkillSelectAddFuncConfComponent_onClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlayCommonSe(v5, 10, 0LL);
    this->fields.isPlayedSe = 1;
  }
  BattleSkillSelectAddFuncConfComponent__OnSelected(this, -1, v2);
}


void __fastcall BattleSkillSelectAddFuncConfComponent__set_Data(
        BattleSkillSelectAddFuncConfComponent_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Data_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Data_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SkillInfo_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SkillInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  char v14; // w21
  char v15; // w0
  struct System_Reflection_MethodInfo_o *v16; // x9
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 2 )
    {
      v13 = (Il2CppObject *)sub_1A10758;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( v12 == 1 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v14 = sub_1BCA898(v10);
        v15 = sub_1BCAD54(v10);
        if ( (v14 & 1) != 0 )
        {
          if ( (v15 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A10874;
          else
            v13 = (Il2CppObject *)sub_1A10828;
        }
        else if ( (v15 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A1079C;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A1076C;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A10734;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v16 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v16;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A106DC;
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
  if ( (byte_4B19344 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, skillInfo, *(_QWORD *)&index);
    byte_4B19344 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)skillInfo;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall BattleSkillSelectAddFuncConfComponent_SelectCallBack__EndInvoke(
        BattleSkillSelectAddFuncConfComponent_SelectCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
      sub_1BCAA3C(this, method);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleSkillSelectAddFuncConfComponent__CoroutineOnSelected_d__34_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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