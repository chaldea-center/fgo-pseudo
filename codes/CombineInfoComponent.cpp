// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // s0
  int v15; // s1
  int v16; // s2
  CombineInfoComponent_c *v17; // x8
  struct CombineInfoComponent_StaticFields *static_fields; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CombineInfoComponent_c *v26; // x8
  struct CombineInfoComponent_StaticFields *v27; // x9
  struct CombineInfoComponent_StaticFields *v28; // x9
  struct CombineInfoComponent_StaticFields *v29; // x0
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UnityEngine_Color_o v37; // [xsp+0h] [xbp-20h] BYREF
  unsigned int v38; // [xsp+18h] [xbp-8h] BYREF
  UnityEngine_Color32_o v39; // 0:x0.8
  UnityEngine_Color32_o v40; // 0:x0.8

  if ( (byte_42E99B0 & 1) == 0 )
  {
    sub_B5D5C4(&CombineInfoComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_19602/*"icon_reward_get"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42E99B0 = 1;
  }
  v14 = 1065185444;
  v15 = 1064430469;
  v16 = 1050790593;
  v37 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, (const MethodInfo *)&v37);
  CombineInfoComponent_TypeInfo->static_fields->COLOR_VAL = v37;
  v17 = CombineInfoComponent_TypeInfo;
  CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH = 140;
  v17->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH = 140;
  v17->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH = 34;
  static_fields = v17->static_fields;
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->INIT_VAL_TXT, v19, v20, v21, v22, v23, v24, v25);
  v26 = CombineInfoComponent_TypeInfo;
  v27 = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&v27->LIMIT_UP_GET_SKILL_INFO_POS.fields.x = 3246391296LL;
  v27->LIMIT_UP_GET_SKILL_INFO_POS.fields.z = 0.0;
  v28 = v26->static_fields;
  *(_QWORD *)&v28->LIMIT_UP_REWARD_INFO_POS.fields.x = 1127546880LL;
  v28->LIMIT_UP_REWARD_INFO_POS.fields.z = 0.0;
  v29 = v26->static_fields;
  v30 = (System_Int32_array **)StringLiteral_19602/*"icon_reward_get"*/;
  v29->LIMIT_UP_REWARD_GET_ICON_NAME = (struct System_String_o *)StringLiteral_19602/*"icon_reward_get"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v29->LIMIT_UP_REWARD_GET_ICON_NAME, v30, v31, v32, v33, v34, v35, v36);
  v39 = (UnityEngine_Color32_o)&v38;
  CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_ID = 9;
  v38 = 0;
  UnityEngine_Color32___ctor(v39, 0x36u, 0x3Au, 0x3Du, 0xFFu, 0LL);
  v40 = (UnityEngine_Color32_o)v38;
  CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = UnityEngine_Color32__op_Implicit_41570788(
                                                                                           v40,
                                                                                           0LL);
}


void __fastcall CombineInfoComponent___ctor(CombineInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineInfoComponent__CheckAssertions(CombineInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__DispLimitUpReleaseSkillAndReward(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineSvtData_o *v4; // x20
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  UnityEngine_GameObject_o *getSkillRewardObj; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  CombineInfoComponent_c *v47; // x8
  UnityEngine_GameObject_o *v48; // x0
  UISprite_o *limitUpRewardGetIcon1; // x21
  System_String_o *LIMIT_UP_REWARD_GET_ICON_NAME; // x22
  UILabel_o *infoLb; // x21
  System_String_o *v52; // x22
  Il2CppObject *v53; // x23
  Il2CppObject *v54; // x0
  CombineInfoComponent_o *v55; // x0
  const MethodInfo *v56; // x2
  UnityEngine_GameObject_o *v57; // x21
  System_Text_StringBuilder_o *v58; // x22
  System_Text_StringBuilder_o *appended; // x0
  UnityEngine_GameObject_c *klass; // x8
  unsigned __int64 v61; // x24
  int32_t v62; // w23
  UILabel_o *infoLb2; // x23
  System_String_o *v64; // x24
  Il2CppObject *v65; // x0
  UILabel_o *v66; // x22
  _BOOL8 isLimitCountMax; // x0
  const MethodInfo *v68; // x4
  UnityEngine_GameObject_o *v69; // x0
  CombineInfoComponent_c *v70; // x8
  UnityEngine_GameObject_o *v71; // x21
  int32_t size; // w21
  CombineInfoComponent_GetItemInfo_o *v73; // x8
  _BOOL4 v74; // w23
  CombineInfoComponent_GetItemInfo_o *v75; // x8
  __int64 v76; // x9
  int32_t v77; // w27
  UILabel_o *infoLb3; // x20
  System_String_o *v79; // x21
  CombineInfoComponent_GetItemInfo_o *v80; // x8
  Il2CppObject *name; // x22
  Il2CppObject *v82; // x0
  UILabel_o *v83; // x20
  System_String_o *v84; // x21
  Il2CppObject *v85; // x0
  UILabel_o *v86; // x20
  CombineInfoComponent_GetItemInfo_o *v87; // x8
  CombineInfoComponent_GetItemInfo_o *v88; // x8
  __int64 v89; // x9
  int32_t v90; // w26
  UILabel_o *infoLb4; // x20
  System_String_o *v92; // x21
  Il2CppObject *v93; // x0
  UILabel_o *v94; // x20
  UILabel_o *infoLb5; // x20
  ItemIconComponent_o *infoIcon3; // x20
  int v97; // s0
  ItemIconComponent_o *v101; // x20
  int v102; // s0
  UIWidget_o *v106; // x20
  int v107; // s0
  UIWidget_o *v111; // x20
  int v112; // s0
  UIWidget_o *v116; // x20
  int v117; // s0
  UILabel_o *v121; // x20
  bool v122; // w1
  int v123; // s0
  ItemIconComponent_o *infoIcon4; // x20
  int v128; // s0
  UIWidget_o *v132; // x20
  int v133; // s0
  UIWidget_o *v137; // x20
  int v138; // s0
  UIWidget_o *v142; // x20
  int v143; // s0
  UILabel_o *v147; // x20
  int v148; // s0
  UILabel_o *v152; // x20
  int v153; // s0
  UILabel_o *v157; // x20
  int v158; // s0
  __int64 v162; // x0
  int32_t combineResSvtMaxLv; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t LevelMax; // [xsp+8h] [xbp-58h] BYREF
  bool isAllAcquired; // [xsp+Ch] [xbp-54h] BYREF
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *getItemInfoList; // [xsp+18h] [xbp-48h] BYREF

  v4 = resSvtData;
  if ( (byte_42E99AD & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)resSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&CombineInfoComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_8782/*"MAX_LVUP_TXT"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_8476/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_8474/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_8478/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_8475/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_8477/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_8468/*"LIMITUP_MAX_TXT"*/, v42, v43, v44);
    byte_42E99AD = 1;
  }
  getItemInfoList = 0LL;
  isAllAcquired = 0;
  getSkillRewardObj = this->fields.getSkillRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  gameObject = UnityEngine_GameObject__get_gameObject(getSkillRewardObj, 0LL);
  v47 = CombineInfoComponent_TypeInfo;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v47 = CombineInfoComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, v47->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  getSkillRewardObj = this->fields.limitUpRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  v48 = UnityEngine_GameObject__get_gameObject(getSkillRewardObj, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v48,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_INFO_POS,
    0LL);
  limitUpRewardGetIcon1 = this->fields.limitUpRewardGetIcon1;
  LIMIT_UP_REWARD_GET_ICON_NAME = CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_NAME;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(limitUpRewardGetIcon1, LIMIT_UP_REWARD_GET_ICON_NAME, 0LL);
  AtlasManager__SetEventUI(
    this->fields.limitUpRewardGetIcon2,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_NAME,
    0LL);
  AtlasManager__SetItem(
    this->fields.infoIcon2,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_ID,
    0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoLb;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  UILabel__set_overflowMethod((UILabel_o *)getSkillRewardObj, 2, 0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  infoLb = this->fields.infoLb;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8468/*"LIMITUP_MAX_TXT"*/, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8782/*"MAX_LVUP_TXT"*/, 0LL);
    if ( !this->fields.baseSvtData )
      goto LABEL_162;
    v52 = (System_String_o *)getSkillRewardObj;
    LevelMax = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    if ( !v4 )
      goto LABEL_162;
    v53 = (Il2CppObject *)getSkillRewardObj;
    combineResSvtMaxLv = v4->fields.combineResSvtMaxLv;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format_44573324(v52, v53, v54, 0LL);
  }
  resSvtData = (CombineSvtData_o *)getSkillRewardObj;
  if ( !infoLb )
    goto LABEL_162;
  UILabel__set_text(infoLb, (System_String_o *)getSkillRewardObj, 0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent__GetNewReleaseSkillNumList(v55, v4, v56);
  if ( !getSkillRewardObj )
    goto LABEL_162;
  v57 = getSkillRewardObj;
  if ( getSkillRewardObj[1].klass )
  {
    getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoLb2;
    if ( !getSkillRewardObj )
      goto LABEL_162;
    getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(getSkillRewardObj, 1, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoIcon2;
    if ( !getSkillRewardObj )
      goto LABEL_162;
    getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(getSkillRewardObj, 1, 0LL);
    v58 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v58, 0LL);
    klass = v57[1].klass;
    if ( (int)klass >= 1 )
    {
      v61 = 0LL;
      v62 = (_DWORD)v57 + 32;
      do
      {
        if ( v61 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_8477/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/,
                                                            0LL);
          if ( !v58 )
            goto LABEL_162;
          appended = System_Text_StringBuilder__Append_42953744(v58, (System_String_o *)getSkillRewardObj, 0LL);
          LODWORD(klass) = v57[1].klass;
        }
        if ( v61 >= (unsigned int)klass )
        {
          v162 = sub_B5D6C8(appended);
          sub_B5D668(v162, 0LL);
        }
        getSkillRewardObj = (UnityEngine_GameObject_o *)System_Int32__ToString(v62, 0LL);
        if ( !v58 )
          goto LABEL_162;
        appended = System_Text_StringBuilder__Append_42953744(v58, (System_String_o *)getSkillRewardObj, 0LL);
        LODWORD(klass) = v57[1].klass;
        ++v61;
        v62 += 4;
      }
      while ( (__int64)v61 < (int)klass );
    }
    infoLb2 = this->fields.infoLb2;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8478/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, 0LL);
    if ( !v58 )
      goto LABEL_162;
    v64 = (System_String_o *)getSkillRewardObj;
    v65 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v58->klass->vtable._3_ToString.method)(
                            v58,
                            v58->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format(v64, v65, 0LL);
    if ( !infoLb2 )
      goto LABEL_162;
    UILabel__set_text(infoLb2, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v66 = this->fields.infoLb2;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v66 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v66, CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH, 0LL);
  }
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  isLimitCountMax = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0LL);
  if ( isLimitCountMax )
    return;
  if ( !v57[1].klass )
  {
    getSkillRewardObj = this->fields.limitUpRewardObj;
    if ( !getSkillRewardObj )
      goto LABEL_162;
    v69 = UnityEngine_GameObject__get_gameObject(getSkillRewardObj, 0LL);
    v70 = CombineInfoComponent_TypeInfo;
    v71 = v69;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
      v70 = CombineInfoComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v71, v70->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  }
  CombineInfoComponent__GetLimitCountUpReward(
    (CombineInfoComponent_o *)isLimitCountMax,
    v4,
    &getItemInfoList,
    &isAllAcquired,
    v68);
  if ( !getItemInfoList )
    goto LABEL_162;
  size = getItemInfoList->fields._size;
  if ( size < 1 )
    return;
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoLb3;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
  if ( !getSkillRewardObj )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive(getSkillRewardObj, 1, 0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoIcon3;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
  if ( !getSkillRewardObj )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive(getSkillRewardObj, 1, 0LL);
  if ( !getItemInfoList )
    goto LABEL_162;
  if ( !getItemInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v73 = getItemInfoList->fields._items->m_Items[0];
  if ( !v73 )
    goto LABEL_162;
  if ( !this->fields.infoIcon3 )
    goto LABEL_162;
  ItemIconComponent__SetGift(this->fields.infoIcon3, 2, v73->fields.iconImageId, -1, 0, 0LL);
  if ( !getItemInfoList )
    goto LABEL_162;
  v74 = isAllAcquired;
  if ( !getItemInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v75 = getItemInfoList->fields._items->m_Items[0];
  if ( !v75 )
LABEL_162:
    sub_B5D69C(getSkillRewardObj, resSvtData);
  v76 = 40LL;
  if ( !isAllAcquired )
    v76 = 36LL;
  v77 = *(_DWORD *)((char *)&v75->klass + v76);
  infoLb3 = this->fields.infoLb3;
  if ( size == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8474/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, 0LL);
    if ( !getItemInfoList )
      goto LABEL_162;
    v79 = (System_String_o *)getSkillRewardObj;
    if ( !getItemInfoList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v80 = getItemInfoList->fields._items->m_Items[0];
    if ( !v80 )
      goto LABEL_162;
    name = (Il2CppObject *)v80->fields.name;
    LevelMax = v77;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format_44573324(v79, name, v82, 0LL);
    if ( !infoLb3 )
      goto LABEL_162;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v83 = this->fields.infoLb3;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v83 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v83, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_8475/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v77;
    v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format(v84, v85, 0LL);
    if ( !infoLb3 )
      goto LABEL_162;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v86 = this->fields.infoLb3;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v86 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v86, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoLb4;
    if ( !getSkillRewardObj )
      goto LABEL_162;
    getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(getSkillRewardObj, 1, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoIcon4;
    if ( !getSkillRewardObj )
      goto LABEL_162;
    getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(getSkillRewardObj, 1, 0LL);
    if ( !getItemInfoList )
      goto LABEL_162;
    if ( getItemInfoList->fields._size <= 1u )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v87 = getItemInfoList->fields._items->m_Items[1];
    if ( !v87 )
      goto LABEL_162;
    if ( !this->fields.infoIcon4 )
      goto LABEL_162;
    ItemIconComponent__SetGift(this->fields.infoIcon4, 2, v87->fields.iconImageId, -1, 0, 0LL);
    if ( !getItemInfoList )
      goto LABEL_162;
    if ( getItemInfoList->fields._size <= 1u )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v88 = getItemInfoList->fields._items->m_Items[1];
    if ( !v88 )
      goto LABEL_162;
    v89 = 40LL;
    if ( !v74 )
      v89 = 36LL;
    v90 = *(_DWORD *)((char *)&v88->klass + v89);
    infoLb4 = this->fields.infoLb4;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v92 = LocalizationManager__Get((System_String_o *)StringLiteral_8475/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v90;
    v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format(v92, v93, 0LL);
    if ( !infoLb4 )
      goto LABEL_162;
    UILabel__set_text(infoLb4, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v94 = this->fields.infoLb4;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v94 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v94, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoLb5;
    if ( !getSkillRewardObj )
      goto LABEL_162;
    getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(getSkillRewardObj, 1, 0LL);
    infoLb5 = this->fields.infoLb5;
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8476/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, 0LL);
    if ( !infoLb5 )
      goto LABEL_162;
    UILabel__set_text(infoLb5, (System_String_o *)getSkillRewardObj, 0LL);
  }
  infoIcon3 = this->fields.infoIcon3;
  if ( !v74 )
  {
    *(UnityEngine_Color_o *)&v123 = UnityEngine_Color__get_white(0LL);
    if ( infoIcon3 )
    {
      ItemIconComponent__SetColor(infoIcon3, *(UnityEngine_Color_o *)&v123, 0LL);
      infoIcon4 = this->fields.infoIcon4;
      *(UnityEngine_Color_o *)&v128 = UnityEngine_Color__get_white(0LL);
      if ( infoIcon4 )
      {
        ItemIconComponent__SetColor(infoIcon4, *(UnityEngine_Color_o *)&v128, 0LL);
        v132 = (UIWidget_o *)this->fields.infoLb3;
        *(UnityEngine_Color_o *)&v133 = UnityEngine_Color__get_white(0LL);
        if ( v132 )
        {
          UIWidget__set_color(v132, *(UnityEngine_Color_o *)&v133, 0LL);
          v137 = (UIWidget_o *)this->fields.infoLb4;
          *(UnityEngine_Color_o *)&v138 = UnityEngine_Color__get_white(0LL);
          if ( v137 )
          {
            UIWidget__set_color(v137, *(UnityEngine_Color_o *)&v138, 0LL);
            v142 = (UIWidget_o *)this->fields.infoLb5;
            *(UnityEngine_Color_o *)&v143 = UnityEngine_Color__get_white(0LL);
            if ( v142 )
            {
              UIWidget__set_color(v142, *(UnityEngine_Color_o *)&v143, 0LL);
              v147 = this->fields.infoLb3;
              *(UnityEngine_Color_o *)&v148 = UnityEngine_Color__get_black(0LL);
              if ( v147 )
              {
                UILabel__set_effectColor(v147, *(UnityEngine_Color_o *)&v148, 0LL);
                v152 = this->fields.infoLb4;
                *(UnityEngine_Color_o *)&v153 = UnityEngine_Color__get_black(0LL);
                if ( v152 )
                {
                  UILabel__set_effectColor(v152, *(UnityEngine_Color_o *)&v153, 0LL);
                  v157 = this->fields.infoLb5;
                  *(UnityEngine_Color_o *)&v158 = UnityEngine_Color__get_black(0LL);
                  if ( v157 )
                  {
                    UILabel__set_effectColor(v157, *(UnityEngine_Color_o *)&v158, 0LL);
                    getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.limitUpRewardGetIcon1;
                    if ( getSkillRewardObj )
                    {
                      getSkillRewardObj = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)getSkillRewardObj,
                                            0LL);
                      if ( getSkillRewardObj )
                      {
                        UnityEngine_GameObject__SetActive(getSkillRewardObj, 0, 0LL);
                        if ( getItemInfoList )
                        {
                          if ( getItemInfoList->fields._size < 2 )
                            return;
                          getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.limitUpRewardGetIcon2;
                          if ( getSkillRewardObj )
                          {
                            getSkillRewardObj = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)getSkillRewardObj,
                                                  0LL);
                            if ( getSkillRewardObj )
                            {
                              v122 = 0;
                              goto LABEL_160;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_162;
  }
  *(UnityEngine_Color_o *)&v97 = UnityEngine_Color__get_gray(0LL);
  if ( !infoIcon3 )
    goto LABEL_162;
  ItemIconComponent__SetColor(infoIcon3, *(UnityEngine_Color_o *)&v97, 0LL);
  v101 = this->fields.infoIcon4;
  *(UnityEngine_Color_o *)&v102 = UnityEngine_Color__get_gray(0LL);
  if ( !v101 )
    goto LABEL_162;
  ItemIconComponent__SetColor(v101, *(UnityEngine_Color_o *)&v102, 0LL);
  v106 = (UIWidget_o *)this->fields.infoLb3;
  *(UnityEngine_Color_o *)&v107 = UnityEngine_Color__get_gray(0LL);
  if ( !v106 )
    goto LABEL_162;
  UIWidget__set_color(v106, *(UnityEngine_Color_o *)&v107, 0LL);
  v111 = (UIWidget_o *)this->fields.infoLb4;
  *(UnityEngine_Color_o *)&v112 = UnityEngine_Color__get_gray(0LL);
  if ( !v111 )
    goto LABEL_162;
  UIWidget__set_color(v111, *(UnityEngine_Color_o *)&v112, 0LL);
  v116 = (UIWidget_o *)this->fields.infoLb5;
  *(UnityEngine_Color_o *)&v117 = UnityEngine_Color__get_gray(0LL);
  if ( !v116 )
    goto LABEL_162;
  UIWidget__set_color(v116, *(UnityEngine_Color_o *)&v117, 0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
  v121 = this->fields.infoLb3;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
  }
  if ( !v121 )
    goto LABEL_162;
  UILabel__set_effectColor(
    v121,
    *(UnityEngine_Color_o *)(*(_QWORD *)&getSkillRewardObj[7].fields.m_CachedPtr + 76LL),
    0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoLb4;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  UILabel__set_effectColor(
    (UILabel_o *)getSkillRewardObj,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoLb5;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  UILabel__set_effectColor(
    (UILabel_o *)getSkillRewardObj,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.limitUpRewardGetIcon1;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
  if ( !getSkillRewardObj )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive(getSkillRewardObj, 1, 0LL);
  if ( !getItemInfoList )
    goto LABEL_162;
  if ( getItemInfoList->fields._size < 2 )
    return;
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.limitUpRewardGetIcon2;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
  if ( !getSkillRewardObj )
    goto LABEL_162;
  v122 = 1;
LABEL_160:
  UnityEngine_GameObject__SetActive(getSkillRewardObj, v122, 0LL);
}


void __fastcall CombineInfoComponent__GetLimitCountUpReward(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **getItemInfoList,
        bool *isAllAcquired,
        const MethodInfo *method)
{
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x22
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v75; // x1
  struct UserServantEntity_o *baseSvtData; // x8
  int64_t v77; // x23
  __int64 v78; // x24
  __int64 v79; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CombineLimitGiftMaster_o *v81; // x23
  GiftMaster_o *v82; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // x0
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **v84; // x19
  int v85; // w25
  __int64 v86; // x27
  struct UserServantEntity_o *v87; // x8
  __int64 v88; // x26
  __int64 v89; // x28
  const MethodInfo *v90; // x3
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  int64_t *v97; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v99; // x20
  int32_t v100; // w20
  System_String_o *v101; // x28
  int32_t IconImageId; // w19
  CombineInfoComponent_GetItemInfo_o *v103; // x27
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *v104; // x19
  struct CombineInfoComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__56_0; // x20
  Il2CppObject *v107; // x21
  struct CombineInfoComponent___c_StaticFields *v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16

  if ( (byte_42E99AF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_CombineLimitGiftMaster___,
      (_DWORD)resSvtData,
      (_DWORD)getItemInfoList,
      isAllAcquired);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_CombineInfoComponent_GetItemInfo__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&CombineInfoComponent_GetItemInfo_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&NetworkManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_System_Predicate_CombineInfoComponent_GetItemInfo___ctor__, v45, v46, v47);
    sub_B5D5C4(&System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, v51, v52, v53);
    sub_B5D5C4(&Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__, v54, v55, v56);
    sub_B5D5C4(&CombineInfoComponent___c__DisplayClass56_0_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&CombineInfoComponent___c_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_1/*""*/, v63, v64, v65);
    byte_42E99AF = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  *getItemInfoList = (System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *)v66;
  sub_B5D560((BattleServantConfConponent_o *)getItemInfoList, (System_Int32_array **)v66, v67, v68, v69, v70, v71, v72);
  *isAllAcquired = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !resSvtData )
    goto LABEL_58;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_58;
  v77 = UserId;
  v79 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v78 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v119.fields.currentCryptoKey = v79;
  *(_QWORD *)&v119.fields.fakeValue = v78;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v119, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(Master_WarQuestSelectionMaster, v77, UserId, 0LL);
  v81 = (CombineLimitGiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v82 = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v83,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  UserId = (int64_t)resSvtData->fields.baseSvtData;
  if ( !UserId )
    goto LABEL_58;
  v84 = getItemInfoList;
  v85 = UserServantEntity__getLimitCount((UserServantEntity_o *)UserId, 0LL) + 1;
  if ( v85 <= resSvtData->fields.combineResLimitCnt )
  {
    while ( 1 )
    {
      v86 = sub_B5D694(CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
      CombineInfoComponent___c__DisplayClass56_0___ctor((CombineInfoComponent___c__DisplayClass56_0_o *)v86, 0LL);
      v87 = resSvtData->fields.baseSvtData;
      if ( !v87 )
        break;
      v89 = *(_QWORD *)&v87->fields.svtId.fields.currentCryptoKey;
      v88 = *(_QWORD *)&v87->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v120.fields.currentCryptoKey = v89;
      *(_QWORD *)&v120.fields.fakeValue = v88;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v120, 0LL);
      if ( !v81 )
        break;
      UserId = CombineLimitGiftMaster__GetCombineLimitGiftId(v81, UserId, v85, v90);
      if ( (_DWORD)UserId )
      {
        if ( !v82 )
          break;
        UserId = (int64_t)GiftMaster__getDataById(v82, UserId, 0LL);
        if ( !v86 )
          break;
        *(_QWORD *)(v86 + 16) = UserId;
        v97 = (int64_t *)(v86 + 16);
        sub_B5D560(
          (BattleServantConfConponent_o *)(v86 + 16),
          (System_Int32_array **)UserId,
          v91,
          v92,
          v93,
          v94,
          v95,
          v96);
        if ( *(_QWORD *)(v86 + 16) )
        {
          v98 = (System_Collections_Generic_IEnumerable_TSource__o *)*v84;
          v99 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v99,
            (Il2CppObject *)v86,
            Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__,
            (const MethodInfo_2C2ECD0 *)Method_System_Func_CombineInfoComponent_GetItemInfo__bool___ctor__);
          UserId = (int64_t)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                              v98,
                              (System_Func_TSource__bool__o *)v99,
                              (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
          if ( UserId )
          {
            if ( EntityDefinitely && v85 <= EntityDefinitely->fields.maxLimitCount )
            {
              if ( !*v97 )
                break;
              *(_DWORD *)(UserId + 40) += *(_DWORD *)(*v97 + 28);
            }
            else
            {
              *isAllAcquired = 0;
              if ( !*v97 )
                break;
              *(_DWORD *)(UserId + 36) += *(_DWORD *)(*v97 + 28);
            }
          }
          else
          {
            countText = (System_String_o *)StringLiteral_1/*""*/;
            nameText = (System_String_o *)StringLiteral_1/*""*/;
            UserId = *v97;
            if ( !*v97 )
              break;
            GiftEntity__GetInfo((GiftEntity_o *)UserId, &nameText, &countText, 0LL);
            UserId = *v97;
            if ( !*v97 )
              break;
            v100 = *(_DWORD *)(UserId + 24);
            v101 = nameText;
            IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)UserId, 0LL);
            v103 = (CombineInfoComponent_GetItemInfo_o *)sub_B5D694(CombineInfoComponent_GetItemInfo_TypeInfo);
            CombineInfoComponent_GetItemInfo___ctor(v103, v100, v101, IconImageId, 0, 0, 0LL);
            if ( EntityDefinitely && v85 <= EntityDefinitely->fields.maxLimitCount )
            {
              v84 = getItemInfoList;
              if ( !v103 || !*v97 )
                break;
              v103->fields.acquiredCount += *(_DWORD *)(*v97 + 28);
            }
            else
            {
              v84 = getItemInfoList;
              *isAllAcquired = 0;
              if ( !v103 || !*v97 )
                break;
              v103->fields.count += *(_DWORD *)(*v97 + 28);
            }
            UserId = (int64_t)*v84;
            if ( !*v84 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v103,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__);
          }
        }
      }
      if ( ++v85 > resSvtData->fields.combineResLimitCnt )
        goto LABEL_46;
    }
LABEL_58:
    sub_B5D69C(UserId, v75);
  }
LABEL_46:
  if ( !*isAllAcquired )
  {
    v104 = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)*v84;
    UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
    if ( (BYTE3(CombineInfoComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent___c_TypeInfo);
      UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
    }
    static_fields = *(struct CombineInfoComponent___c_StaticFields **)(UserId + 184);
    _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( (*(_BYTE *)(UserId + 307) & 4) != 0 && !*(_DWORD *)(UserId + 224) )
      {
        j_il2cpp_runtime_class_init_0(UserId);
        static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
      }
      v107 = (Il2CppObject *)static_fields->__9;
      _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__56_0,
        v107,
        Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_CombineInfoComponent_GetItemInfo___ctor__);
      v108 = CombineInfoComponent___c_TypeInfo->static_fields;
      v108->__9__56_0 = (struct System_Predicate_CombineInfoComponent_GetItemInfo__o *)_9__56_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v108->__9__56_0,
        (System_Int32_array **)_9__56_0,
        v109,
        v110,
        v111,
        v112,
        v113,
        v114);
    }
    if ( !v104 )
      goto LABEL_58;
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      v104,
      (System_Predicate_T__o *)_9__56_0,
      (const MethodInfo_3058B10 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
  }
}


System_Int32_array *__fastcall CombineInfoComponent__GetNewReleaseSkillNumList(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_List_int__o *v14; // x19
  UserServantEntity_o *v15; // x0
  __int64 v16; // x1
  UserServantEntity_o *baseSvtData; // x21
  int32_t combineResSvtLv; // w22
  int32_t LimitCount; // w0
  System_Int32_array *v20; // x8
  __int64 v21; // x20
  unsigned __int64 max_length; // x9
  unsigned __int64 v23; // x10
  __int64 v25; // x0
  System_String_array *v26; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *v27; // [xsp+8h] [xbp-38h] BYREF
  System_String_array *skillNameList; // [xsp+10h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E99AE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)resSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    byte_42E99AE = 1;
  }
  idList = 0LL;
  v27 = 0LL;
  skillNameList = 0LL;
  v26 = 0LL;
  v14 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !resSvtData )
    goto LABEL_17;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_17;
  combineResSvtLv = resSvtData->fields.combineResSvtLv;
  LimitCount = UserServantEntity__getLimitCount(resSvtData->fields.baseSvtData, 0LL);
  UserServantEntity__getNextUseSkillInfo(baseSvtData, &idList, &skillNameList, combineResSvtLv, LimitCount, 1, 0LL);
  v15 = resSvtData->fields.baseSvtData;
  if ( !v15 )
    goto LABEL_17;
  UserServantEntity__getNextUseSkillInfo(
    v15,
    &v27,
    &v26,
    resSvtData->fields.combineResSvtLv,
    resSvtData->fields.combineResLimitCnt,
    0,
    0LL);
  v20 = v27;
  if ( !v27 )
    goto LABEL_17;
  v21 = 8LL;
  while ( 1 )
  {
    max_length = v20->max_length;
    v23 = v21 - 8;
    if ( v21 - 8 >= (int)max_length )
      break;
    if ( !idList )
      goto LABEL_17;
    if ( v23 >= idList->max_length )
    {
LABEL_20:
      v25 = sub_B5D6C8(v15);
      sub_B5D668(v25, 0LL);
    }
    if ( !*((_DWORD *)&idList->obj.klass + v21) )
    {
      if ( v23 >= max_length )
        goto LABEL_20;
      if ( *((_DWORD *)&v20->obj.klass + v21) )
      {
        if ( !v14 )
          goto LABEL_17;
        System_Collections_Generic_List_int___Add(
          v14,
          v21 - 7,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        v20 = v27;
      }
    }
    ++v21;
    if ( !v20 )
      goto LABEL_17;
  }
  if ( !v14 )
LABEL_17:
    sub_B5D69C(v15, v16);
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall CombineInfoComponent__HideResStatusInfo(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resStatusInfo; // x0

  resStatusInfo = this->fields.resStatusInfo;
  if ( !resStatusInfo )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(resStatusInfo, 0, 0LL);
}


void __fastcall CombineInfoComponent__initCurrentStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  struct SetLimitCntInfoComponent_array *currentLimitCntInfos; // x8
  int max_length; // w20
  CombineInfoComponent_o *v4; // x19
  il2cpp_array_size_t v5; // w21
  __int64 v6; // x0

  currentLimitCntInfos = this->fields.currentLimitCntInfos;
  if ( !currentLimitCntInfos )
    goto LABEL_9;
  max_length = currentLimitCntInfos->max_length;
  if ( max_length >= 1 )
  {
    v4 = this;
    v5 = 0;
    do
    {
      if ( v5 >= currentLimitCntInfos->max_length )
      {
        v6 = sub_B5D6C8(this);
        sub_B5D668(v6, 0LL);
      }
      this = (CombineInfoComponent_o *)currentLimitCntInfos->m_Items[v5];
      if ( !this )
        break;
      this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( (int)++v5 >= max_length )
        return;
      currentLimitCntInfos = v4->fields.currentLimitCntInfos;
    }
    while ( currentLimitCntInfos );
LABEL_9:
    sub_B5D69C(this, method);
  }
}


void __fastcall CombineInfoComponent__initResStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  struct SetLimitCntInfoComponent_array *resLimitCntInfos; // x8
  int max_length; // w20
  CombineInfoComponent_o *v4; // x19
  il2cpp_array_size_t v5; // w21
  __int64 v6; // x0

  resLimitCntInfos = this->fields.resLimitCntInfos;
  if ( !resLimitCntInfos )
    goto LABEL_9;
  max_length = resLimitCntInfos->max_length;
  if ( max_length >= 1 )
  {
    v4 = this;
    v5 = 0;
    do
    {
      if ( v5 >= resLimitCntInfos->max_length )
      {
        v6 = sub_B5D6C8(this);
        sub_B5D668(v6, 0LL);
      }
      this = (CombineInfoComponent_o *)resLimitCntInfos->m_Items[v5];
      if ( !this )
        break;
      this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( (int)++v5 >= max_length )
        return;
      resLimitCntInfos = v4->fields.resLimitCntInfos;
    }
    while ( resLimitCntInfos );
LABEL_9:
    sub_B5D69C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__initStatusInfo(
        CombineInfoComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UIExtrusionLabel_o *currentLvLb; // x21
  UILabel_o *currentMaxLvLb; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x3
  BalanceConfig_c *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_42E99A9 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, type, (_DWORD)method, v3);
    sub_B5D5C4(&CombineInfoComponent_TypeInfo, v6, v7, v8);
    byte_42E99A9 = 1;
  }
  currentLvLb = this->fields.currentLvLb;
  currentMaxLvLb = (UILabel_o *)CombineInfoComponent_TypeInfo;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
  }
  if ( !currentLvLb )
    goto LABEL_19;
  UIExtrusionLabel__set_text(currentLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_19;
  UILabel__set_text(currentMaxLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_19;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0LL);
  currentMaxLvLb = this->fields.currentExpValLb;
  if ( !currentMaxLvLb )
    goto LABEL_19;
  UILabel__set_text(currentMaxLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  CombineInfoComponent__initCurrentStatusGrid(this, v11);
  v13 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  CombineInfoComponent__setCurrentLimitCntInfo(this, v13->static_fields->ServantLimitMax, 0, v12);
  currentMaxLvLb = (UILabel_o *)this->fields.levelUpInfo;
  if ( !currentMaxLvLb )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMaxLvLb, 0, 0LL);
  currentMaxLvLb = this->fields.currentHpLb;
  if ( !currentMaxLvLb
    || (UILabel__set_text(currentMaxLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL),
        (currentMaxLvLb = this->fields.currentAtkLb) == 0LL)
    || (UILabel__set_text(currentMaxLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL),
        (currentMaxLvLb = (UILabel_o *)this->fields.currentStatusInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMaxLvLb, 1, 0LL),
        (currentMaxLvLb = (UILabel_o *)this->fields.resStatusInfo) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(currentMaxLvLb, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMaxLvLb, 0, 0LL);
  this->fields.dispType = type;
  CombineInfoComponent__setInitInfoLb(this, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__setCombineResStatusInfo(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CombineInfoComponent_o *v5; // x19
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  struct UserServantEntity_o *baseSvtData; // x23
  int32_t lv; // w22
  UIWidget_o *v32; // x21
  UIWidget_o *v33; // x25
  UIWidget_o *v34; // x27
  WebViewObject_o *Component_WebViewObject; // x28
  int v36; // s0
  int v40; // s0
  int v44; // s0
  int v48; // s0
  int v52; // w22
  bool v53; // w1
  UIWidget_o *v54; // x22
  __int64 v55; // x26
  __int64 v56; // x27
  int32_t combineResLimitCnt; // w26
  bool v58; // w1
  float combineResExpBarVal; // s0
  int32_t *p_dispType; // x24
  CombineInfoComponent_c *v61; // x0
  UIExtrusionLabel_o *resLvLb; // x25
  UILabel_o *resMaxLvLb; // x25
  bool isLevelMax; // w0
  UILabel_o *infoLb; // x25
  UIExtrusionLabel_o *v66; // x26
  UILabel_o *v67; // x26
  CombineInfoComponent_c *v68; // x0
  const MethodInfo *v69; // x2
  UIExtrusionLabel_o *v70; // x26
  UILabel_o *v71; // x27
  __int64 v72; // x27
  __int64 v73; // x28
  bool v74; // w0
  System_String_o *INIT_VAL_TXT; // x1
  UIExtrusionLabel_o *v76; // x26
  UILabel_o *v77; // x26
  CombineInfoComponent_c *v78; // x0
  const MethodInfo *v79; // x2
  int v80; // s0
  int v81; // s1
  int v82; // s2
  int v83; // s3
  UIWidget_o *v84; // x0
  UILabel_o *v85; // x27
  System_String_o *v86; // x28
  Il2CppObject *v87; // x22
  Il2CppObject *v88; // x0
  CombineInfoComponent_c *v89; // x0
  int *static_fields; // x8
  int32_t LimitCntMax; // w0
  const MethodInfo *v92; // x3
  UILabel_o *resHpLb; // x25
  CombineInfoComponent_c *v94; // x0
  UILabel_o *resAtkLb; // x20
  CombineInfoComponent_c *v96; // x0
  UIWidget_o *v97; // [xsp+8h] [xbp-88h]
  WebViewObject_o *v98; // [xsp+10h] [xbp-80h]
  int32_t combineResSvtMaxLv; // [xsp+18h] [xbp-78h] BYREF
  int32_t LevelMax; // [xsp+1Ch] [xbp-74h] BYREF
  __int64 v101; // [xsp+20h] [xbp-70h] BYREF
  __int64 v102; // [xsp+28h] [xbp-68h] BYREF
  float barExp[2]; // [xsp+30h] [xbp-60h] BYREF
  __int64 exp; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v5 = this;
  if ( (byte_42E99AC & 1) == 0 )
  {
    sub_B5D5C4(&CombineInfoComponent_TypeInfo, (_DWORD)resSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6, v7, v8);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_8782/*"MAX_LVUP_TXT"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v24, v25, v26);
    this = (CombineInfoComponent_o *)sub_B5D5C4(&StringLiteral_12711/*"SVTEQ_LVMAX_INFO_TXT"*/, v27, v28, v29);
    byte_42E99AC = 1;
  }
  *(_QWORD *)barExp = 0LL;
  exp = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  if ( !resSvtData )
    goto LABEL_133;
  baseSvtData = resSvtData->fields.baseSvtData;
  CombineInfoComponent__initResStatusGrid(v5, (const MethodInfo *)resSvtData);
  if ( !baseSvtData )
    goto LABEL_133;
  lv = baseSvtData->fields.lv;
  HIDWORD(exp) = resSvtData->fields.combineResSvtLv;
  this = (CombineInfoComponent_o *)v5->fields.baseSvtData;
  if ( !this )
    goto LABEL_133;
  UserServantEntity__getExpInfo((UserServantEntity_o *)this, (int32_t *)&exp, (int32_t *)&barExp[1], barExp, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.resCrExpBar;
  if ( !this )
    goto LABEL_133;
  UIProgressBar__set_value((UIProgressBar_o *)this, barExp[0], 0LL);
  this = (CombineInfoComponent_o *)v5->fields.resLvLb;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v5->fields.resMaxLvLb )
    goto LABEL_133;
  v32 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)v5->fields.resMaxLvLb,
                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v5->fields.resHpLb )
    goto LABEL_133;
  v33 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)v5->fields.resHpLb,
                                     (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v5->fields.resAtkLb )
    goto LABEL_133;
  v34 = (UIWidget_o *)this;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v5->fields.resAtkLb,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
  if ( !v32 )
    goto LABEL_133;
  UIWidget__set_color(v32, *(UnityEngine_Color_o *)&v36, 0LL);
  *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
  if ( !v33 )
    goto LABEL_133;
  UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v40, 0LL);
  *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_white(0LL);
  if ( !v34 )
    goto LABEL_133;
  UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v44, 0LL);
  *(UnityEngine_Color_o *)&v48 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_133;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v48, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.infoLb;
  if ( !this )
    goto LABEL_133;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.infoLb2;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.infoLb3;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.infoLb4;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.infoIcon2;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.infoIcon3;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.infoIcon4;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v52 = HIDWORD(exp) - lv;
  if ( v52 < 1 )
  {
    if ( v5->fields.dispType == 2 )
    {
      v54 = v34;
      v56 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v55 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v105.fields.currentCryptoKey = v56;
      *(_QWORD *)&v105.fields.fakeValue = v55;
      HIDWORD(v101) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v105, 0LL);
      this = (CombineInfoComponent_o *)v5->fields.resExpBar;
      if ( !this )
        goto LABEL_133;
      combineResLimitCnt = resSvtData->fields.combineResLimitCnt;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
      v34 = v54;
      if ( !System_Int32__Equals_39741700((int32_t)&v101 + 4, combineResLimitCnt, 0LL)
        && UserServantEntity__isLevelMax(baseSvtData, 0LL) )
      {
        this = (CombineInfoComponent_o *)v5->fields.resCrExpBar;
        if ( !this )
          goto LABEL_133;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_133;
        v58 = 0;
LABEL_52:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v58, 0LL);
        this = (CombineInfoComponent_o *)v5->fields.resRemaingExpBar;
        if ( !this )
          goto LABEL_133;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_133;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CombineInfoComponent_o *)v5->fields.levelUpInfo;
        if ( !this )
          goto LABEL_133;
        p_dispType = &v5->fields.dispType;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        goto LABEL_67;
      }
    }
    else
    {
      this = (CombineInfoComponent_o *)v5->fields.resExpBar;
      if ( !this )
        goto LABEL_133;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
    }
    this = (CombineInfoComponent_o *)v5->fields.resCrExpBar;
    if ( !this )
      goto LABEL_133;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_133;
    v58 = 1;
    goto LABEL_52;
  }
  this = (CombineInfoComponent_o *)v5->fields.resExpBar;
  if ( !this )
    goto LABEL_133;
  UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.resRemaingExpBar;
  if ( HIDWORD(exp) != resSvtData->fields.combineResSvtMaxLv )
  {
    if ( !this )
      goto LABEL_133;
    combineResExpBarVal = resSvtData->fields.combineResExpBarVal;
    goto LABEL_57;
  }
  if ( !this )
    goto LABEL_133;
  if ( v52 != 1 )
  {
    combineResExpBarVal = 1.0;
LABEL_57:
    UIProgressBar__set_value((UIProgressBar_o *)this, combineResExpBarVal, 0LL);
    this = (CombineInfoComponent_o *)v5->fields.resRemaingExpBar;
    if ( !this )
      goto LABEL_133;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_133;
    v53 = 1;
    goto LABEL_60;
  }
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  v53 = 0;
LABEL_60:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v53, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.resCrExpBar;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v5->fields.levelUpInfo;
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v61 = CombineInfoComponent_TypeInfo;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v61 = CombineInfoComponent_TypeInfo;
  }
  UIWidget__set_color(v32, v61->static_fields->COLOR_VAL, 0LL);
  p_dispType = &v5->fields.dispType;
LABEL_67:
  switch ( *p_dispType )
  {
    case 0:
      resLvLb = v5->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !resLvLb )
        goto LABEL_133;
      UIExtrusionLabel__set_text(resLvLb, (System_String_o *)this, 0LL);
      resMaxLvLb = v5->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !resMaxLvLb )
        goto LABEL_133;
      UILabel__set_text(resMaxLvLb, (System_String_o *)this, 0LL);
      isLevelMax = UserServantEntity__isLevelMax(baseSvtData, 0LL);
      infoLb = v5->fields.infoLb;
      if ( isLevelMax )
        goto LABEL_87;
      goto LABEL_107;
    case 1:
      v66 = v5->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !v66 )
        goto LABEL_133;
      UIExtrusionLabel__set_text(v66, (System_String_o *)this, 0LL);
      v67 = v5->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v67 )
        goto LABEL_133;
      UILabel__set_text(v67, (System_String_o *)this, 0LL);
      v68 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v68 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v33, v68->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v5, resSvtData, v69);
      infoLb = v5->fields.resExpValLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_39741776(
                                         (int)resSvtData + 40,
                                         (System_String_o *)StringLiteral_346/*"#,0"*/,
                                         0LL);
      if ( !infoLb )
        goto LABEL_133;
      goto LABEL_91;
    case 2:
      v70 = v5->fields.resLvLb;
      v97 = v34;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !v70 )
        goto LABEL_133;
      v98 = Component_WebViewObject;
      UIExtrusionLabel__set_text(v70, (System_String_o *)this, 0LL);
      v71 = v5->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v71 )
        goto LABEL_133;
      UILabel__set_text(v71, (System_String_o *)this, 0LL);
      v73 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v72 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v106.fields.currentCryptoKey = v73;
      *(_QWORD *)&v106.fields.fakeValue = v72;
      LODWORD(v101) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v106, 0LL);
      if ( System_Int32__Equals_39741700((int32_t)&v101, resSvtData->fields.combineResLimitCnt, 0LL) )
      {
        v74 = UserServantEntity__isLevelMax(baseSvtData, 0LL);
        infoLb = v5->fields.infoLb;
        if ( v74 )
        {
          v34 = v97;
          Component_WebViewObject = v98;
LABEL_87:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (CombineInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12711/*"SVTEQ_LVMAX_INFO_TXT"*/, 0LL);
          if ( infoLb )
          {
LABEL_91:
            INIT_VAL_TXT = (System_String_o *)this;
LABEL_112:
            UILabel__set_text(infoLb, INIT_VAL_TXT, 0LL);
            goto LABEL_117;
          }
        }
        else
        {
          v34 = v97;
          Component_WebViewObject = v98;
LABEL_107:
          this = (CombineInfoComponent_o *)CombineInfoComponent_TypeInfo;
          if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          }
          if ( infoLb )
          {
            INIT_VAL_TXT = CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT;
            goto LABEL_112;
          }
        }
LABEL_133:
        sub_B5D69C(this, resSvtData);
      }
      v85 = v5->fields.infoLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v86 = LocalizationManager__Get((System_String_o *)StringLiteral_8782/*"MAX_LVUP_TXT"*/, 0LL);
      LevelMax = UserServantEntity__getLevelMax(baseSvtData, 0LL);
      v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
      combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
      v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
      this = (CombineInfoComponent_o *)System_String__Format_44573324(v86, v87, v88, 0LL);
      if ( !v85 )
        goto LABEL_133;
      UILabel__set_text(v85, (System_String_o *)this, 0LL);
      Component_WebViewObject = v98;
      v89 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v34 = v97;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v89 = CombineInfoComponent_TypeInfo;
        }
      }
      else
      {
        v34 = v97;
      }
      static_fields = (int *)v89->static_fields;
      v84 = v33;
      v80 = *static_fields;
      v81 = static_fields[1];
      v82 = static_fields[2];
      v83 = static_fields[3];
LABEL_116:
      UIWidget__set_color(v84, *(UnityEngine_Color_o *)&v80, 0LL);
LABEL_117:
      LimitCntMax = UserServantEntity__getLimitCntMax(baseSvtData, 0LL);
      CombineInfoComponent__setResLimitCntInfo(v5, LimitCntMax, resSvtData->fields.combineResLimitCnt, v92);
      HIDWORD(v102) = resSvtData->fields.combineResHp;
      resHpLb = v5->fields.resHpLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_39741776(
                                         (int32_t)&v102 + 4,
                                         (System_String_o *)StringLiteral_9361/*"N0"*/,
                                         0LL);
      if ( !resHpLb )
        goto LABEL_133;
      UILabel__set_text(resHpLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.hp != HIDWORD(v102) )
      {
        v94 = CombineInfoComponent_TypeInfo;
        if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v94 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v34, v94->static_fields->COLOR_VAL, 0LL);
      }
      LODWORD(v102) = resSvtData->fields.combineResAtk;
      resAtkLb = v5->fields.resAtkLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_39741776(
                                         (int32_t)&v102,
                                         (System_String_o *)StringLiteral_9361/*"N0"*/,
                                         0LL);
      if ( !resAtkLb )
        goto LABEL_133;
      UILabel__set_text(resAtkLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.atk != (_DWORD)v102 )
      {
        v96 = CombineInfoComponent_TypeInfo;
        if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v96 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color((UIWidget_o *)Component_WebViewObject, v96->static_fields->COLOR_VAL, 0LL);
      }
      if ( *p_dispType == 4 )
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v32, white, 0LL);
        v110 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v34, v110, 0LL);
        v111 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color((UIWidget_o *)Component_WebViewObject, v111, 0LL);
      }
      this = (CombineInfoComponent_o *)v5->fields.resStatusInfo;
      if ( !this )
        goto LABEL_133;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      return;
    case 4:
      v76 = v5->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !v76 )
        goto LABEL_133;
      UIExtrusionLabel__set_text(v76, (System_String_o *)this, 0LL);
      v77 = v5->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v77 )
        goto LABEL_133;
      UILabel__set_text(v77, (System_String_o *)this, 0LL);
      v78 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v78 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v33, v78->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v5, resSvtData, v79);
      this = (CombineInfoComponent_o *)v5->fields.levelUpInfo;
      if ( !this )
        goto LABEL_133;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v107 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v32, v107, 0LL);
      v108 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v34, v108, 0LL);
      *(UnityEngine_Color_o *)&v80 = UnityEngine_Color__get_white(0LL);
      v84 = (UIWidget_o *)Component_WebViewObject;
      goto LABEL_116;
    default:
      goto LABEL_117;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__setCurrentLimitCntInfo(
        CombineInfoComponent_o *this,
        int32_t maxLimitCnt,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  CombineInfoComponent_o *v6; // x21
  __int64 v7; // x23
  struct SetLimitCntInfoComponent_array *currentLimitCntInfos; // x8
  Il2CppClass **v9; // x8
  SetLimitCntInfoComponent_o *v10; // x22
  __int64 v11; // x0

  if ( maxLimitCnt >= 1 )
  {
    v6 = this;
    v7 = 0LL;
    do
    {
      currentLimitCntInfos = v6->fields.currentLimitCntInfos;
      if ( !currentLimitCntInfos )
        goto LABEL_9;
      if ( (unsigned int)v7 >= currentLimitCntInfos->max_length )
      {
        v11 = sub_B5D6C8(this);
        sub_B5D668(v11, 0LL);
      }
      v9 = &currentLimitCntInfos->obj.klass + v7;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_B5D69C(this, *(_QWORD *)&maxLimitCnt);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      SetLimitCntInfoComponent__setEnableOnImg(v10, (int)v7++ < svtLimitCnt, 0LL);
    }
    while ( (int)v7 < maxLimitCnt );
  }
}


void __fastcall CombineInfoComponent__setCurrentStatusInfo(
        CombineInfoComponent_o *this,
        UserServantEntity_o *baseData,
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
  UserServantEntity_o **p_baseSvtData; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_o *isLevelMax; // x0
  System_String_o *v26; // x1
  struct UserServantEntity_o *baseSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x21
  UILabel_o *currentMaxLvLb; // x21
  UIExtrusionLabel_o *v30; // x21
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  System_String_o *v33; // x22
  Il2CppObject *v34; // x0
  UILabel_o *currentExpValLb; // x21
  UserServantEntity_o *v36; // x8
  int32_t v37; // w20
  __int64 v38; // x21
  __int64 v39; // x22
  int32_t v40; // w0
  const MethodInfo *v41; // x3
  struct UserServantEntity_o *v42; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v44; // x8
  UILabel_o *currentAtkLb; // x19
  float barExp[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 lateExp; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_42E99AB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)baseData, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_7351/*"IMPOSSIBLE_LIMITUP_COLOR"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_346/*"#,0"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v15, v16, v17);
    byte_42E99AB = 1;
  }
  *(_QWORD *)barExp = 0LL;
  lateExp = 0LL;
  CombineInfoComponent__initCurrentStatusGrid(this, (const MethodInfo *)baseData);
  p_baseSvtData = &this->fields.baseSvtData;
  this->fields.baseSvtData = baseData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.baseSvtData,
    (System_Int32_array **)baseData,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  switch ( this->fields.dispType )
  {
    case 0:
    case 2:
    case 4:
      baseSvtData = this->fields.baseSvtData;
      if ( !baseSvtData )
        goto LABEL_45;
      currentLvLb = this->fields.currentLvLb;
      isLevelMax = System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !currentLvLb )
        goto LABEL_45;
      UIExtrusionLabel__set_text(currentLvLb, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_45;
      currentMaxLvLb = this->fields.currentMaxLvLb;
      LODWORD(barExp[0]) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0LL);
      isLevelMax = System_Int32__ToString((int32_t)barExp, 0LL);
      if ( !currentMaxLvLb )
        goto LABEL_45;
      v26 = isLevelMax;
      goto LABEL_31;
    case 1:
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_45;
      v30 = this->fields.currentLvLb;
      isLevelMax = (System_String_o *)UserServantEntity__isLevelMax((UserServantEntity_o *)isLevelMax, 0LL);
      if ( ((unsigned __int8)isLevelMax & 1) != 0 )
        goto LABEL_13;
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_45;
      isLevelMax = (System_String_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)isLevelMax, 0LL);
      if ( ((unsigned __int8)isLevelMax & 1) != 0 )
      {
LABEL_13:
        if ( !*p_baseSvtData )
          goto LABEL_45;
        isLevelMax = System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7351/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_45;
        v31 = isLevelMax;
        v32 = (Il2CppObject *)System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
        isLevelMax = System_String__Format(v31, v32, 0LL);
      }
      v26 = isLevelMax;
      if ( !v30 )
        goto LABEL_45;
      UIExtrusionLabel__set_text(v30, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_45;
      currentMaxLvLb = this->fields.currentMaxLvLb;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)isLevelMax, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7351/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_45;
        v33 = isLevelMax;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax(*p_baseSvtData, 0LL);
        v34 = (Il2CppObject *)System_Int32__ToString((int32_t)barExp, 0LL);
        isLevelMax = System_String__Format(v33, v34, 0LL);
      }
      else
      {
        isLevelMax = (System_String_o *)*p_baseSvtData;
        if ( !*p_baseSvtData )
          goto LABEL_45;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0LL);
        isLevelMax = System_Int32__ToString((int32_t)barExp, 0LL);
      }
      v26 = isLevelMax;
      if ( !currentMaxLvLb )
        goto LABEL_45;
LABEL_31:
      UILabel__set_text(currentMaxLvLb, v26, 0LL);
LABEL_32:
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_45;
      UserServantEntity__getExpInfo(
        (UserServantEntity_o *)isLevelMax,
        (int32_t *)&lateExp + 1,
        (int32_t *)&lateExp,
        &barExp[1],
        0LL);
      isLevelMax = (System_String_o *)this->fields.currentExpBar;
      if ( !isLevelMax )
        goto LABEL_45;
      UIProgressBar__set_value((UIProgressBar_o *)isLevelMax, barExp[1], 0LL);
      currentExpValLb = this->fields.currentExpValLb;
      isLevelMax = System_Int32__ToString_39741776((int32_t)&lateExp, (System_String_o *)StringLiteral_346/*"#,0"*/, 0LL);
      if ( !currentExpValLb )
        goto LABEL_45;
      UILabel__set_text(currentExpValLb, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_45;
      isLevelMax = (System_String_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)isLevelMax, 0LL);
      v36 = *p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_45;
      v37 = (int)isLevelMax;
      v39 = *(_QWORD *)&v36->fields.limitCount.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v36->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v48.fields.currentCryptoKey = v39;
      *(_QWORD *)&v48.fields.fakeValue = v38;
      v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v48, 0LL);
      CombineInfoComponent__setCurrentLimitCntInfo(this, v37, v40, v41);
      v42 = this->fields.baseSvtData;
      if ( !v42
        || (currentHpLb = this->fields.currentHpLb,
            isLevelMax = System_Int32__ToString_39741776((int)v42 + 268, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL),
            !currentHpLb)
        || (UILabel__set_text(currentHpLb, isLevelMax, 0LL), (v44 = this->fields.baseSvtData) == 0LL)
        || (currentAtkLb = this->fields.currentAtkLb,
            isLevelMax = System_Int32__ToString_39741776((int)v44 + 264, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL),
            !currentAtkLb) )
      {
LABEL_45:
        sub_B5D69C(isLevelMax, v26);
      }
      UILabel__set_text(currentAtkLb, isLevelMax, 0LL);
      return;
    default:
      goto LABEL_32;
  }
}


void __fastcall CombineInfoComponent__setInitInfoLb(CombineInfoComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UILabel_o *infoLb; // x19
  UILabel_o *infoLb2; // x0

  if ( (byte_42E99AA & 1) == 0 )
  {
    sub_B5D5C4(&CombineInfoComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_24157/*"レベル上限："*/, v5, v6, v7);
    byte_42E99AA = 1;
  }
  switch ( this->fields.dispType )
  {
    case 0:
    case 2:
      infoLb = this->fields.infoLb;
      infoLb2 = (UILabel_o *)CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
      }
      if ( !infoLb )
        goto LABEL_29;
      UILabel__set_text(infoLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
      break;
    case 1:
    case 4:
      infoLb2 = this->fields.infoLb;
      if ( !infoLb2 )
        goto LABEL_29;
      UILabel__set_text(infoLb2, (System_String_o *)StringLiteral_24157/*"レベル上限："*/, 0LL);
      infoLb2 = this->fields.infoLb2;
      if ( !infoLb2 )
        goto LABEL_29;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = this->fields.infoLb3;
      if ( !infoLb2 )
        goto LABEL_29;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = this->fields.infoLb4;
      if ( !infoLb2 )
        goto LABEL_29;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = this->fields.infoLb5;
      if ( !infoLb2 )
        goto LABEL_29;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = (UILabel_o *)this->fields.infoIcon2;
      if ( !infoLb2 )
        goto LABEL_29;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = (UILabel_o *)this->fields.infoIcon3;
      if ( !infoLb2 )
        goto LABEL_29;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = (UILabel_o *)this->fields.infoIcon4;
      if ( !infoLb2
        || (infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL),
            (infoLb2 = (UILabel_o *)this->fields.limitUpRewardGetIcon1) == 0LL)
        || (infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL),
            (infoLb2 = (UILabel_o *)this->fields.limitUpRewardGetIcon2) == 0LL)
        || (infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL)) == 0LL )
      {
LABEL_29:
        sub_B5D69C(infoLb2, method);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__setResLimitCntInfo(
        CombineInfoComponent_o *this,
        int32_t maxLimitCnt,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  CombineInfoComponent_o *v6; // x21
  __int64 v7; // x23
  struct SetLimitCntInfoComponent_array *resLimitCntInfos; // x8
  Il2CppClass **v9; // x8
  SetLimitCntInfoComponent_o *v10; // x22
  __int64 v11; // x0

  if ( maxLimitCnt >= 1 )
  {
    v6 = this;
    v7 = 0LL;
    do
    {
      resLimitCntInfos = v6->fields.resLimitCntInfos;
      if ( !resLimitCntInfos )
        goto LABEL_9;
      if ( (unsigned int)v7 >= resLimitCntInfos->max_length )
      {
        v11 = sub_B5D6C8(this);
        sub_B5D668(v11, 0LL);
      }
      v9 = &resLimitCntInfos->obj.klass + v7;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_B5D69C(this, *(_QWORD *)&maxLimitCnt);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      SetLimitCntInfoComponent__setEnableOnImg(v10, (int)v7++ < svtLimitCnt, 0LL);
    }
    while ( (int)v7 < maxLimitCnt );
  }
}


void __fastcall CombineInfoComponent_GetItemInfo___ctor(
        CombineInfoComponent_GetItemInfo_o *this,
        int32_t itemId,
        System_String_o *name,
        int32_t iconImageId,
        int32_t count,
        int32_t acquiredCount,
        const MethodInfo *method)
{
  CombineInfoComponent_GetItemInfo_o *v12; // x24

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.name = name;
  v12 = (CombineInfoComponent_GetItemInfo_o *)((char *)v12 + 24);
  v12[-1].fields.acquiredCount = itemId;
  sub_B5D560(v12);
  LODWORD(v12->monitor) = iconImageId;
  HIDWORD(v12->monitor) = count;
  v12->fields.itemId = acquiredCount;
}


void __fastcall CombineInfoComponent___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CombineInfoComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E5EAF & 1) == 0 )
  {
    sub_B5D5C4(&CombineInfoComponent___c_TypeInfo, v1, v2, v3);
    byte_42E5EAF = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CombineInfoComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CombineInfoComponent___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall CombineInfoComponent___c___ctor(CombineInfoComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineInfoComponent___c___GetLimitCountUpReward_b__56_0(
        CombineInfoComponent___c_o *this,
        CombineInfoComponent_GetItemInfo_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B5D69C(this, 0LL);
  return data->fields.count == 0;
}


void __fastcall CombineInfoComponent___c__DisplayClass56_0___ctor(
        CombineInfoComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineInfoComponent___c__DisplayClass56_0___GetLimitCountUpReward_b__1(
        CombineInfoComponent___c__DisplayClass56_0_o *this,
        CombineInfoComponent_GetItemInfo_o *data,
        const MethodInfo *method)
{
  struct GiftEntity_o *giftEntity; // x8

  if ( !data || (giftEntity = this->fields.giftEntity) == 0LL )
    sub_B5D69C(this, data);
  return data->fields.itemId == giftEntity->fields.objectId;
}