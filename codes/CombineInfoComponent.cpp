// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent___cctor(const MethodInfo *method)
{
  int v1; // s3
  float v2; // s4
  float v3; // s5
  float v4; // s6
  int v5; // s0
  int v6; // s1
  int v7; // s2
  CombineInfoComponent_c *v8; // x8
  struct CombineInfoComponent_StaticFields *static_fields; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CombineInfoComponent_c *v17; // x8
  struct CombineInfoComponent_StaticFields *v18; // x9
  struct CombineInfoComponent_StaticFields *v19; // x9
  struct CombineInfoComponent_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UnityEngine_Color_o v28; // [xsp+0h] [xbp-20h] BYREF
  unsigned int v29; // [xsp+18h] [xbp-8h] BYREF
  UnityEngine_Color32_o v30; // 0:x0.8
  UnityEngine_Color32_o v31; // 0:x0.8

  if ( (byte_42B2C05 & 1) == 0 )
  {
    sub_B52984(&CombineInfoComponent_TypeInfo);
    sub_B52984(&StringLiteral_19504/*"icon_reward_get"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2C05 = 1;
  }
  v5 = 1065185444;
  v6 = 1064430469;
  v7 = 1050790593;
  v28 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41463668(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, (const MethodInfo *)&v28);
  CombineInfoComponent_TypeInfo->static_fields->COLOR_VAL = v28;
  v8 = CombineInfoComponent_TypeInfo;
  CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH = 140;
  v8->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH = 140;
  v8->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH = 34;
  static_fields = v8->static_fields;
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->INIT_VAL_TXT, v10, v11, v12, v13, v14, v15, v16);
  v17 = CombineInfoComponent_TypeInfo;
  v18 = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&v18->LIMIT_UP_GET_SKILL_INFO_POS.fields.x = 3246391296LL;
  v18->LIMIT_UP_GET_SKILL_INFO_POS.fields.z = 0.0;
  v19 = v17->static_fields;
  *(_QWORD *)&v19->LIMIT_UP_REWARD_INFO_POS.fields.x = 1127546880LL;
  v19->LIMIT_UP_REWARD_INFO_POS.fields.z = 0.0;
  v20 = v17->static_fields;
  v21 = (System_Int32_array **)StringLiteral_19504/*"icon_reward_get"*/;
  v20->LIMIT_UP_REWARD_GET_ICON_NAME = (struct System_String_o *)StringLiteral_19504/*"icon_reward_get"*/;
  sub_B52920((BattleServantConfConponent_o *)&v20->LIMIT_UP_REWARD_GET_ICON_NAME, v21, v22, v23, v24, v25, v26, v27);
  v30 = (UnityEngine_Color32_o)&v29;
  CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_ID = 9;
  v29 = 0;
  UnityEngine_Color32___ctor(v30, 0x36u, 0x3Au, 0x3Du, 0xFFu, 0LL);
  v31 = (UnityEngine_Color32_o)v29;
  CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = UnityEngine_Color32__op_Implicit_41466640(
                                                                                           v31,
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
  CombineSvtData_o *v3; // x20
  UnityEngine_GameObject_o *getSkillRewardObj; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  CombineInfoComponent_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x0
  UISprite_o *limitUpRewardGetIcon1; // x21
  System_String_o *LIMIT_UP_REWARD_GET_ICON_NAME; // x22
  UILabel_o *infoLb; // x21
  System_String_o *v12; // x22
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  CombineInfoComponent_o *v15; // x0
  const MethodInfo *v16; // x2
  UnityEngine_GameObject_o *v17; // x21
  System_Text_StringBuilder_o *v18; // x22
  System_Text_StringBuilder_o *appended; // x0
  UnityEngine_GameObject_c *klass; // x8
  unsigned __int64 v21; // x24
  int32_t v22; // w23
  UILabel_o *infoLb2; // x23
  System_String_o *v24; // x24
  Il2CppObject *v25; // x0
  UILabel_o *v26; // x22
  _BOOL8 isLimitCountMax; // x0
  const MethodInfo *v28; // x4
  UnityEngine_GameObject_o *v29; // x0
  CombineInfoComponent_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x21
  int32_t size; // w21
  CombineInfoComponent_GetItemInfo_o *v33; // x8
  _BOOL4 v34; // w23
  CombineInfoComponent_GetItemInfo_o *v35; // x8
  __int64 v36; // x9
  int32_t v37; // w27
  UILabel_o *infoLb3; // x20
  System_String_o *v39; // x21
  CombineInfoComponent_GetItemInfo_o *v40; // x8
  Il2CppObject *name; // x22
  Il2CppObject *v42; // x0
  UILabel_o *v43; // x20
  System_String_o *v44; // x21
  Il2CppObject *v45; // x0
  UILabel_o *v46; // x20
  CombineInfoComponent_GetItemInfo_o *v47; // x8
  CombineInfoComponent_GetItemInfo_o *v48; // x8
  __int64 v49; // x9
  int32_t v50; // w26
  UILabel_o *infoLb4; // x20
  System_String_o *v52; // x21
  Il2CppObject *v53; // x0
  UILabel_o *v54; // x20
  UILabel_o *infoLb5; // x20
  ItemIconComponent_o *infoIcon3; // x20
  int v57; // s0
  ItemIconComponent_o *v61; // x20
  int v62; // s0
  UIWidget_o *v66; // x20
  int v67; // s0
  UIWidget_o *v71; // x20
  int v72; // s0
  UIWidget_o *v76; // x20
  int v77; // s0
  UILabel_o *v81; // x20
  bool v82; // w1
  int v83; // s0
  ItemIconComponent_o *infoIcon4; // x20
  int v88; // s0
  UIWidget_o *v92; // x20
  int v93; // s0
  UIWidget_o *v97; // x20
  int v98; // s0
  UIWidget_o *v102; // x20
  int v103; // s0
  UILabel_o *v107; // x20
  int v108; // s0
  UILabel_o *v112; // x20
  int v113; // s0
  UILabel_o *v117; // x20
  int v118; // s0
  __int64 v122; // x0
  int32_t combineResSvtMaxLv; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t LevelMax; // [xsp+8h] [xbp-58h] BYREF
  bool isAllAcquired; // [xsp+Ch] [xbp-54h] BYREF
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *getItemInfoList; // [xsp+18h] [xbp-48h] BYREF

  v3 = resSvtData;
  if ( (byte_42B2C02 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&CombineInfoComponent_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&StringLiteral_8745/*"MAX_LVUP_TXT"*/);
    sub_B52984(&StringLiteral_8439/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/);
    sub_B52984(&StringLiteral_8437/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/);
    sub_B52984(&StringLiteral_8441/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/);
    sub_B52984(&StringLiteral_8438/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/);
    sub_B52984(&StringLiteral_8440/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/);
    sub_B52984(&StringLiteral_8431/*"LIMITUP_MAX_TXT"*/);
    byte_42B2C02 = 1;
  }
  getItemInfoList = 0LL;
  isAllAcquired = 0;
  getSkillRewardObj = this->fields.getSkillRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  gameObject = UnityEngine_GameObject__get_gameObject(getSkillRewardObj, 0LL);
  v7 = CombineInfoComponent_TypeInfo;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v7 = CombineInfoComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, v7->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  getSkillRewardObj = this->fields.limitUpRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  v8 = UnityEngine_GameObject__get_gameObject(getSkillRewardObj, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v8,
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
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8431/*"LIMITUP_MAX_TXT"*/, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8745/*"MAX_LVUP_TXT"*/, 0LL);
    if ( !this->fields.baseSvtData )
      goto LABEL_162;
    v12 = (System_String_o *)getSkillRewardObj;
    LevelMax = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    if ( !v3 )
      goto LABEL_162;
    v13 = (Il2CppObject *)getSkillRewardObj;
    combineResSvtMaxLv = v3->fields.combineResSvtMaxLv;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format_44563852(v12, v13, v14, 0LL);
  }
  resSvtData = (CombineSvtData_o *)getSkillRewardObj;
  if ( !infoLb )
    goto LABEL_162;
  UILabel__set_text(infoLb, (System_String_o *)getSkillRewardObj, 0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent__GetNewReleaseSkillNumList(v15, v3, v16);
  if ( !getSkillRewardObj )
    goto LABEL_162;
  v17 = getSkillRewardObj;
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
    v18 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v18, 0LL);
    klass = v17[1].klass;
    if ( (int)klass >= 1 )
    {
      v21 = 0LL;
      v22 = (_DWORD)v17 + 32;
      do
      {
        if ( v21 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_8440/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/,
                                                            0LL);
          if ( !v18 )
            goto LABEL_162;
          appended = System_Text_StringBuilder__Append_42994048(v18, (System_String_o *)getSkillRewardObj, 0LL);
          LODWORD(klass) = v17[1].klass;
        }
        if ( v21 >= (unsigned int)klass )
        {
          v122 = sub_B52A88(appended);
          sub_B52A28(v122, 0LL);
        }
        getSkillRewardObj = (UnityEngine_GameObject_o *)System_Int32__ToString(v22, 0LL);
        if ( !v18 )
          goto LABEL_162;
        appended = System_Text_StringBuilder__Append_42994048(v18, (System_String_o *)getSkillRewardObj, 0LL);
        LODWORD(klass) = v17[1].klass;
        ++v21;
        v22 += 4;
      }
      while ( (__int64)v21 < (int)klass );
    }
    infoLb2 = this->fields.infoLb2;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8441/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, 0LL);
    if ( !v18 )
      goto LABEL_162;
    v24 = (System_String_o *)getSkillRewardObj;
    v25 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v18->klass->vtable._3_ToString.method)(
                            v18,
                            v18->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format(v24, v25, 0LL);
    if ( !infoLb2 )
      goto LABEL_162;
    UILabel__set_text(infoLb2, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v26 = this->fields.infoLb2;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v26 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v26, CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH, 0LL);
  }
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  isLimitCountMax = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0LL);
  if ( isLimitCountMax )
    return;
  if ( !v17[1].klass )
  {
    getSkillRewardObj = this->fields.limitUpRewardObj;
    if ( !getSkillRewardObj )
      goto LABEL_162;
    v29 = UnityEngine_GameObject__get_gameObject(getSkillRewardObj, 0LL);
    v30 = CombineInfoComponent_TypeInfo;
    v31 = v29;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
      v30 = CombineInfoComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v31, v30->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  }
  CombineInfoComponent__GetLimitCountUpReward(
    (CombineInfoComponent_o *)isLimitCountMax,
    v3,
    &getItemInfoList,
    &isAllAcquired,
    v28);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v33 = getItemInfoList->fields._items->m_Items[0];
  if ( !v33 )
    goto LABEL_162;
  if ( !this->fields.infoIcon3 )
    goto LABEL_162;
  ItemIconComponent__SetGift(this->fields.infoIcon3, 2, v33->fields.iconImageId, -1, 0, 0LL);
  if ( !getItemInfoList )
    goto LABEL_162;
  v34 = isAllAcquired;
  if ( !getItemInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v35 = getItemInfoList->fields._items->m_Items[0];
  if ( !v35 )
LABEL_162:
    sub_B52A5C(getSkillRewardObj, resSvtData);
  v36 = 40LL;
  if ( !isAllAcquired )
    v36 = 36LL;
  v37 = *(_DWORD *)((char *)&v35->klass + v36);
  infoLb3 = this->fields.infoLb3;
  if ( size == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8437/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, 0LL);
    if ( !getItemInfoList )
      goto LABEL_162;
    v39 = (System_String_o *)getSkillRewardObj;
    if ( !getItemInfoList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v40 = getItemInfoList->fields._items->m_Items[0];
    if ( !v40 )
      goto LABEL_162;
    name = (Il2CppObject *)v40->fields.name;
    LevelMax = v37;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format_44563852(v39, name, v42, 0LL);
    if ( !infoLb3 )
      goto LABEL_162;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v43 = this->fields.infoLb3;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v43 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v43, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8438/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v37;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format(v44, v45, 0LL);
    if ( !infoLb3 )
      goto LABEL_162;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v46 = this->fields.infoLb3;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v46 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v46, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v47 = getItemInfoList->fields._items->m_Items[1];
    if ( !v47 )
      goto LABEL_162;
    if ( !this->fields.infoIcon4 )
      goto LABEL_162;
    ItemIconComponent__SetGift(this->fields.infoIcon4, 2, v47->fields.iconImageId, -1, 0, 0LL);
    if ( !getItemInfoList )
      goto LABEL_162;
    if ( getItemInfoList->fields._size <= 1u )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v48 = getItemInfoList->fields._items->m_Items[1];
    if ( !v48 )
      goto LABEL_162;
    v49 = 40LL;
    if ( !v34 )
      v49 = 36LL;
    v50 = *(_DWORD *)((char *)&v48->klass + v49);
    infoLb4 = this->fields.infoLb4;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v52 = LocalizationManager__Get((System_String_o *)StringLiteral_8438/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v50;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format(v52, v53, 0LL);
    if ( !infoLb4 )
      goto LABEL_162;
    UILabel__set_text(infoLb4, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v54 = this->fields.infoLb4;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v54 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v54, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoLb5;
    if ( !getSkillRewardObj )
      goto LABEL_162;
    getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(getSkillRewardObj, 1, 0LL);
    infoLb5 = this->fields.infoLb5;
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8439/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, 0LL);
    if ( !infoLb5 )
      goto LABEL_162;
    UILabel__set_text(infoLb5, (System_String_o *)getSkillRewardObj, 0LL);
  }
  infoIcon3 = this->fields.infoIcon3;
  if ( !v34 )
  {
    *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_white(0LL);
    if ( infoIcon3 )
    {
      ItemIconComponent__SetColor(infoIcon3, *(UnityEngine_Color_o *)&v83, 0LL);
      infoIcon4 = this->fields.infoIcon4;
      *(UnityEngine_Color_o *)&v88 = UnityEngine_Color__get_white(0LL);
      if ( infoIcon4 )
      {
        ItemIconComponent__SetColor(infoIcon4, *(UnityEngine_Color_o *)&v88, 0LL);
        v92 = (UIWidget_o *)this->fields.infoLb3;
        *(UnityEngine_Color_o *)&v93 = UnityEngine_Color__get_white(0LL);
        if ( v92 )
        {
          UIWidget__set_color(v92, *(UnityEngine_Color_o *)&v93, 0LL);
          v97 = (UIWidget_o *)this->fields.infoLb4;
          *(UnityEngine_Color_o *)&v98 = UnityEngine_Color__get_white(0LL);
          if ( v97 )
          {
            UIWidget__set_color(v97, *(UnityEngine_Color_o *)&v98, 0LL);
            v102 = (UIWidget_o *)this->fields.infoLb5;
            *(UnityEngine_Color_o *)&v103 = UnityEngine_Color__get_white(0LL);
            if ( v102 )
            {
              UIWidget__set_color(v102, *(UnityEngine_Color_o *)&v103, 0LL);
              v107 = this->fields.infoLb3;
              *(UnityEngine_Color_o *)&v108 = UnityEngine_Color__get_black(0LL);
              if ( v107 )
              {
                UILabel__set_effectColor(v107, *(UnityEngine_Color_o *)&v108, 0LL);
                v112 = this->fields.infoLb4;
                *(UnityEngine_Color_o *)&v113 = UnityEngine_Color__get_black(0LL);
                if ( v112 )
                {
                  UILabel__set_effectColor(v112, *(UnityEngine_Color_o *)&v113, 0LL);
                  v117 = this->fields.infoLb5;
                  *(UnityEngine_Color_o *)&v118 = UnityEngine_Color__get_black(0LL);
                  if ( v117 )
                  {
                    UILabel__set_effectColor(v117, *(UnityEngine_Color_o *)&v118, 0LL);
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
                              v82 = 0;
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
  *(UnityEngine_Color_o *)&v57 = UnityEngine_Color__get_gray(0LL);
  if ( !infoIcon3 )
    goto LABEL_162;
  ItemIconComponent__SetColor(infoIcon3, *(UnityEngine_Color_o *)&v57, 0LL);
  v61 = this->fields.infoIcon4;
  *(UnityEngine_Color_o *)&v62 = UnityEngine_Color__get_gray(0LL);
  if ( !v61 )
    goto LABEL_162;
  ItemIconComponent__SetColor(v61, *(UnityEngine_Color_o *)&v62, 0LL);
  v66 = (UIWidget_o *)this->fields.infoLb3;
  *(UnityEngine_Color_o *)&v67 = UnityEngine_Color__get_gray(0LL);
  if ( !v66 )
    goto LABEL_162;
  UIWidget__set_color(v66, *(UnityEngine_Color_o *)&v67, 0LL);
  v71 = (UIWidget_o *)this->fields.infoLb4;
  *(UnityEngine_Color_o *)&v72 = UnityEngine_Color__get_gray(0LL);
  if ( !v71 )
    goto LABEL_162;
  UIWidget__set_color(v71, *(UnityEngine_Color_o *)&v72, 0LL);
  v76 = (UIWidget_o *)this->fields.infoLb5;
  *(UnityEngine_Color_o *)&v77 = UnityEngine_Color__get_gray(0LL);
  if ( !v76 )
    goto LABEL_162;
  UIWidget__set_color(v76, *(UnityEngine_Color_o *)&v77, 0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
  v81 = this->fields.infoLb3;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
  }
  if ( !v81 )
    goto LABEL_162;
  UILabel__set_effectColor(
    v81,
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
  v82 = 1;
LABEL_160:
  UnityEngine_GameObject__SetActive(getSkillRewardObj, v82, 0LL);
}


void __fastcall CombineInfoComponent__GetLimitCountUpReward(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **getItemInfoList,
        bool *isAllAcquired,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x22
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v15; // x1
  struct UserServantEntity_o *baseSvtData; // x8
  int64_t v17; // x23
  __int64 v18; // x24
  __int64 v19; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CombineLimitGiftMaster_o *v21; // x23
  GiftMaster_o *v22; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x0
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **v24; // x19
  int v25; // w25
  __int64 v26; // x27
  struct UserServantEntity_o *v27; // x8
  __int64 v28; // x26
  __int64 v29; // x28
  const MethodInfo *v30; // x3
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int64_t *v37; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x20
  int32_t v40; // w20
  System_String_o *v41; // x28
  int32_t IconImageId; // w19
  CombineInfoComponent_GetItemInfo_o *v43; // x27
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *v44; // x19
  struct CombineInfoComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__56_0; // x20
  Il2CppObject *v47; // x21
  struct CombineInfoComponent___c_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_42B2C04 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_CombineLimitGiftMaster___);
    sub_B52984(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
    sub_B52984(&Method_System_Func_CombineInfoComponent_GetItemInfo__bool___ctor__);
    sub_B52984(&System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
    sub_B52984(&CombineInfoComponent_GetItemInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
    sub_B52984(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_System_Predicate_CombineInfoComponent_GetItemInfo___ctor__);
    sub_B52984(&System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
    sub_B52984(&Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__);
    sub_B52984(&Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__);
    sub_B52984(&CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
    sub_B52984(&CombineInfoComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B2C04 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  *getItemInfoList = (System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *)v6;
  sub_B52920((BattleServantConfConponent_o *)getItemInfoList, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  *isAllAcquired = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  v17 = UserId;
  v19 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v59.fields.currentCryptoKey = v19;
  *(_QWORD *)&v59.fields.fakeValue = v18;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v59, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(Master_WarQuestSelectionMaster, v17, UserId, 0LL);
  v21 = (CombineLimitGiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v22 = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftMaster___);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  UserId = (int64_t)resSvtData->fields.baseSvtData;
  if ( !UserId )
    goto LABEL_58;
  v24 = getItemInfoList;
  v25 = UserServantEntity__getLimitCount((UserServantEntity_o *)UserId, 0LL) + 1;
  if ( v25 <= resSvtData->fields.combineResLimitCnt )
  {
    while ( 1 )
    {
      v26 = sub_B52A54(CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
      CombineInfoComponent___c__DisplayClass56_0___ctor((CombineInfoComponent___c__DisplayClass56_0_o *)v26, 0LL);
      v27 = resSvtData->fields.baseSvtData;
      if ( !v27 )
        break;
      v29 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
      v28 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v60.fields.currentCryptoKey = v29;
      *(_QWORD *)&v60.fields.fakeValue = v28;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v60, 0LL);
      if ( !v21 )
        break;
      UserId = CombineLimitGiftMaster__GetCombineLimitGiftId(v21, UserId, v25, v30);
      if ( (_DWORD)UserId )
      {
        if ( !v22 )
          break;
        UserId = (int64_t)GiftMaster__getDataById(v22, UserId, 0LL);
        if ( !v26 )
          break;
        *(_QWORD *)(v26 + 16) = UserId;
        v37 = (int64_t *)(v26 + 16);
        sub_B52920(
          (BattleServantConfConponent_o *)(v26 + 16),
          (System_Int32_array **)UserId,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        if ( *(_QWORD *)(v26 + 16) )
        {
          v38 = (System_Collections_Generic_IEnumerable_TSource__o *)*v24;
          v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v39,
            (Il2CppObject *)v26,
            Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__,
            (const MethodInfo_2BC90BC *)Method_System_Func_CombineInfoComponent_GetItemInfo__bool___ctor__);
          UserId = (int64_t)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                              v38,
                              (System_Func_TSource__bool__o *)v39,
                              (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
          if ( UserId )
          {
            if ( EntityDefinitely && v25 <= EntityDefinitely->fields.maxLimitCount )
            {
              if ( !*v37 )
                break;
              *(_DWORD *)(UserId + 40) += *(_DWORD *)(*v37 + 28);
            }
            else
            {
              *isAllAcquired = 0;
              if ( !*v37 )
                break;
              *(_DWORD *)(UserId + 36) += *(_DWORD *)(*v37 + 28);
            }
          }
          else
          {
            countText = (System_String_o *)StringLiteral_1/*""*/;
            nameText = (System_String_o *)StringLiteral_1/*""*/;
            UserId = *v37;
            if ( !*v37 )
              break;
            GiftEntity__GetInfo((GiftEntity_o *)UserId, &nameText, &countText, 0LL);
            UserId = *v37;
            if ( !*v37 )
              break;
            v40 = *(_DWORD *)(UserId + 24);
            v41 = nameText;
            IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)UserId, 0LL);
            v43 = (CombineInfoComponent_GetItemInfo_o *)sub_B52A54(CombineInfoComponent_GetItemInfo_TypeInfo);
            CombineInfoComponent_GetItemInfo___ctor(v43, v40, v41, IconImageId, 0, 0, 0LL);
            if ( EntityDefinitely && v25 <= EntityDefinitely->fields.maxLimitCount )
            {
              v24 = getItemInfoList;
              if ( !v43 || !*v37 )
                break;
              v43->fields.acquiredCount += *(_DWORD *)(*v37 + 28);
            }
            else
            {
              v24 = getItemInfoList;
              *isAllAcquired = 0;
              if ( !v43 || !*v37 )
                break;
              v43->fields.count += *(_DWORD *)(*v37 + 28);
            }
            UserId = (int64_t)*v24;
            if ( !*v24 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__);
          }
        }
      }
      if ( ++v25 > resSvtData->fields.combineResLimitCnt )
        goto LABEL_46;
    }
LABEL_58:
    sub_B52A5C(UserId, v15);
  }
LABEL_46:
  if ( !*isAllAcquired )
  {
    v44 = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)*v24;
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
      v47 = (Il2CppObject *)static_fields->__9;
      _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__56_0,
        v47,
        Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__,
        (const MethodInfo_28D2DBC *)Method_System_Predicate_CombineInfoComponent_GetItemInfo___ctor__);
      v48 = CombineInfoComponent___c_TypeInfo->static_fields;
      v48->__9__56_0 = (struct System_Predicate_CombineInfoComponent_GetItemInfo__o *)_9__56_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v48->__9__56_0,
        (System_Int32_array **)_9__56_0,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
    }
    if ( !v44 )
      goto LABEL_58;
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      v44,
      (System_Predicate_T__o *)_9__56_0,
      (const MethodInfo_2FF3154 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
  }
}


System_Int32_array *__fastcall CombineInfoComponent__GetNewReleaseSkillNumList(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  UserServantEntity_o *v5; // x0
  __int64 v6; // x1
  UserServantEntity_o *baseSvtData; // x21
  int32_t combineResSvtLv; // w22
  int32_t LimitCount; // w0
  System_Int32_array *v10; // x8
  __int64 v11; // x20
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x10
  __int64 v15; // x0
  System_String_array *v16; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *v17; // [xsp+8h] [xbp-38h] BYREF
  System_String_array *skillNameList; // [xsp+10h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42B2C03 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B2C03 = 1;
  }
  idList = 0LL;
  v17 = 0LL;
  skillNameList = 0LL;
  v16 = 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !resSvtData )
    goto LABEL_17;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_17;
  combineResSvtLv = resSvtData->fields.combineResSvtLv;
  LimitCount = UserServantEntity__getLimitCount(resSvtData->fields.baseSvtData, 0LL);
  UserServantEntity__getNextUseSkillInfo(baseSvtData, &idList, &skillNameList, combineResSvtLv, LimitCount, 1, 0LL);
  v5 = resSvtData->fields.baseSvtData;
  if ( !v5 )
    goto LABEL_17;
  UserServantEntity__getNextUseSkillInfo(
    v5,
    &v17,
    &v16,
    resSvtData->fields.combineResSvtLv,
    resSvtData->fields.combineResLimitCnt,
    0,
    0LL);
  v10 = v17;
  if ( !v17 )
    goto LABEL_17;
  v11 = 8LL;
  while ( 1 )
  {
    max_length = v10->max_length;
    v13 = v11 - 8;
    if ( v11 - 8 >= (int)max_length )
      break;
    if ( !idList )
      goto LABEL_17;
    if ( v13 >= idList->max_length )
    {
LABEL_20:
      v15 = sub_B52A88(v5);
      sub_B52A28(v15, 0LL);
    }
    if ( !*((_DWORD *)&idList->obj.klass + v11) )
    {
      if ( v13 >= max_length )
        goto LABEL_20;
      if ( *((_DWORD *)&v10->obj.klass + v11) )
      {
        if ( !v4 )
          goto LABEL_17;
        System_Collections_Generic_List_int___Add(
          v4,
          v11 - 7,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        v10 = v17;
      }
    }
    ++v11;
    if ( !v10 )
      goto LABEL_17;
  }
  if ( !v4 )
LABEL_17:
    sub_B52A5C(v5, v6);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall CombineInfoComponent__HideResStatusInfo(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resStatusInfo; // x0

  resStatusInfo = this->fields.resStatusInfo;
  if ( !resStatusInfo )
    sub_B52A5C(0LL, method);
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
        v6 = sub_B52A88(this);
        sub_B52A28(v6, 0LL);
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
    sub_B52A5C(this, method);
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
        v6 = sub_B52A88(this);
        sub_B52A28(v6, 0LL);
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
    sub_B52A5C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__initStatusInfo(
        CombineInfoComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UIExtrusionLabel_o *currentLvLb; // x21
  UILabel_o *currentMaxLvLb; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  BalanceConfig_c *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42B2BFE & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&CombineInfoComponent_TypeInfo);
    byte_42B2BFE = 1;
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
  CombineInfoComponent__initCurrentStatusGrid(this, v7);
  v9 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  CombineInfoComponent__setCurrentLimitCntInfo(this, v9->static_fields->ServantLimitMax, 0, v8);
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
    sub_B52A5C(currentMaxLvLb, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMaxLvLb, 0, 0LL);
  this->fields.dispType = type;
  CombineInfoComponent__setInitInfoLb(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__setCombineResStatusInfo(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  CombineInfoComponent_o *v4; // x19
  struct UserServantEntity_o *baseSvtData; // x23
  int32_t lv; // w22
  UIWidget_o *v7; // x21
  UIWidget_o *v8; // x25
  UIWidget_o *v9; // x27
  WebViewObject_o *Component_WebViewObject; // x28
  int v11; // s0
  int v15; // s0
  int v19; // s0
  int v23; // s0
  int v27; // w22
  bool v28; // w1
  UIWidget_o *v29; // x22
  __int64 v30; // x26
  __int64 v31; // x27
  int32_t combineResLimitCnt; // w26
  bool v33; // w1
  float combineResExpBarVal; // s0
  int32_t *p_dispType; // x24
  CombineInfoComponent_c *v36; // x0
  UIExtrusionLabel_o *resLvLb; // x25
  UILabel_o *resMaxLvLb; // x25
  bool isLevelMax; // w0
  UILabel_o *infoLb; // x25
  UIExtrusionLabel_o *v41; // x26
  UILabel_o *v42; // x26
  CombineInfoComponent_c *v43; // x0
  const MethodInfo *v44; // x2
  UIExtrusionLabel_o *v45; // x26
  UILabel_o *v46; // x27
  __int64 v47; // x27
  __int64 v48; // x28
  bool v49; // w0
  System_String_o *INIT_VAL_TXT; // x1
  UIExtrusionLabel_o *v51; // x26
  UILabel_o *v52; // x26
  CombineInfoComponent_c *v53; // x0
  const MethodInfo *v54; // x2
  int v55; // s0
  int v56; // s1
  int v57; // s2
  int v58; // s3
  UIWidget_o *v59; // x0
  UILabel_o *v60; // x27
  System_String_o *v61; // x28
  Il2CppObject *v62; // x22
  Il2CppObject *v63; // x0
  CombineInfoComponent_c *v64; // x0
  int *static_fields; // x8
  int32_t LimitCntMax; // w0
  const MethodInfo *v67; // x3
  UILabel_o *resHpLb; // x25
  CombineInfoComponent_c *v69; // x0
  UILabel_o *resAtkLb; // x20
  CombineInfoComponent_c *v71; // x0
  UIWidget_o *v72; // [xsp+8h] [xbp-88h]
  WebViewObject_o *v73; // [xsp+10h] [xbp-80h]
  int32_t combineResSvtMaxLv; // [xsp+18h] [xbp-78h] BYREF
  int32_t LevelMax; // [xsp+1Ch] [xbp-74h] BYREF
  __int64 v76; // [xsp+20h] [xbp-70h] BYREF
  __int64 v77; // [xsp+28h] [xbp-68h] BYREF
  float barExp[2]; // [xsp+30h] [xbp-60h] BYREF
  __int64 exp; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_42B2C01 & 1) == 0 )
  {
    sub_B52984(&CombineInfoComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_8745/*"MAX_LVUP_TXT"*/);
    sub_B52984(&StringLiteral_347/*"#,0"*/);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    this = (CombineInfoComponent_o *)sub_B52984(&StringLiteral_12652/*"SVTEQ_LVMAX_INFO_TXT"*/);
    byte_42B2C01 = 1;
  }
  *(_QWORD *)barExp = 0LL;
  exp = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  if ( !resSvtData )
    goto LABEL_133;
  baseSvtData = resSvtData->fields.baseSvtData;
  CombineInfoComponent__initResStatusGrid(v4, (const MethodInfo *)resSvtData);
  if ( !baseSvtData )
    goto LABEL_133;
  lv = baseSvtData->fields.lv;
  HIDWORD(exp) = resSvtData->fields.combineResSvtLv;
  this = (CombineInfoComponent_o *)v4->fields.baseSvtData;
  if ( !this )
    goto LABEL_133;
  UserServantEntity__getExpInfo((UserServantEntity_o *)this, (int32_t *)&exp, (int32_t *)&barExp[1], barExp, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
  if ( !this )
    goto LABEL_133;
  UIProgressBar__set_value((UIProgressBar_o *)this, barExp[0], 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resLvLb;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resMaxLvLb )
    goto LABEL_133;
  v7 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)v4->fields.resMaxLvLb,
                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resHpLb )
    goto LABEL_133;
  v8 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)v4->fields.resHpLb,
                                     (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resAtkLb )
    goto LABEL_133;
  v9 = (UIWidget_o *)this;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v4->fields.resAtkLb,
                              (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
  if ( !v7 )
    goto LABEL_133;
  UIWidget__set_color(v7, *(UnityEngine_Color_o *)&v11, 0LL);
  *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
  if ( !v8 )
    goto LABEL_133;
  UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v15, 0LL);
  *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
  if ( !v9 )
    goto LABEL_133;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v19, 0LL);
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_133;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v23, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb;
  if ( !this )
    goto LABEL_133;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb2;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb3;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb4;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon2;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon3;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon4;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v27 = HIDWORD(exp) - lv;
  if ( v27 < 1 )
  {
    if ( v4->fields.dispType == 2 )
    {
      v29 = v9;
      v31 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v30 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v80.fields.currentCryptoKey = v31;
      *(_QWORD *)&v80.fields.fakeValue = v30;
      HIDWORD(v76) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v80, 0LL);
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_133;
      combineResLimitCnt = resSvtData->fields.combineResLimitCnt;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
      v9 = v29;
      if ( !System_Int32__Equals_39386936((int32_t)&v76 + 4, combineResLimitCnt, 0LL)
        && UserServantEntity__isLevelMax(baseSvtData, 0LL) )
      {
        this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
        if ( !this )
          goto LABEL_133;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_133;
        v33 = 0;
LABEL_52:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v33, 0LL);
        this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
        if ( !this )
          goto LABEL_133;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_133;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
        if ( !this )
          goto LABEL_133;
        p_dispType = &v4->fields.dispType;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        goto LABEL_67;
      }
    }
    else
    {
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_133;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
    }
    this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
    if ( !this )
      goto LABEL_133;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_133;
    v33 = 1;
    goto LABEL_52;
  }
  this = (CombineInfoComponent_o *)v4->fields.resExpBar;
  if ( !this )
    goto LABEL_133;
  UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
  if ( HIDWORD(exp) != resSvtData->fields.combineResSvtMaxLv )
  {
    if ( !this )
      goto LABEL_133;
    combineResExpBarVal = resSvtData->fields.combineResExpBarVal;
    goto LABEL_57;
  }
  if ( !this )
    goto LABEL_133;
  if ( v27 != 1 )
  {
    combineResExpBarVal = 1.0;
LABEL_57:
    UIProgressBar__set_value((UIProgressBar_o *)this, combineResExpBarVal, 0LL);
    this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
    if ( !this )
      goto LABEL_133;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_133;
    v28 = 1;
    goto LABEL_60;
  }
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  v28 = 0;
LABEL_60:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v28, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
  if ( !this )
    goto LABEL_133;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
  if ( !this )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v36 = CombineInfoComponent_TypeInfo;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v36 = CombineInfoComponent_TypeInfo;
  }
  UIWidget__set_color(v7, v36->static_fields->COLOR_VAL, 0LL);
  p_dispType = &v4->fields.dispType;
LABEL_67:
  switch ( *p_dispType )
  {
    case 0:
      resLvLb = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !resLvLb )
        goto LABEL_133;
      UIExtrusionLabel__set_text(resLvLb, (System_String_o *)this, 0LL);
      resMaxLvLb = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !resMaxLvLb )
        goto LABEL_133;
      UILabel__set_text(resMaxLvLb, (System_String_o *)this, 0LL);
      isLevelMax = UserServantEntity__isLevelMax(baseSvtData, 0LL);
      infoLb = v4->fields.infoLb;
      if ( isLevelMax )
        goto LABEL_87;
      goto LABEL_107;
    case 1:
      v41 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !v41 )
        goto LABEL_133;
      UIExtrusionLabel__set_text(v41, (System_String_o *)this, 0LL);
      v42 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v42 )
        goto LABEL_133;
      UILabel__set_text(v42, (System_String_o *)this, 0LL);
      v43 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v43 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v8, v43->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v44);
      infoLb = v4->fields.resExpValLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_39387012(
                                         (int)resSvtData + 40,
                                         (System_String_o *)StringLiteral_347/*"#,0"*/,
                                         0LL);
      if ( !infoLb )
        goto LABEL_133;
      goto LABEL_91;
    case 2:
      v45 = v4->fields.resLvLb;
      v72 = v9;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !v45 )
        goto LABEL_133;
      v73 = Component_WebViewObject;
      UIExtrusionLabel__set_text(v45, (System_String_o *)this, 0LL);
      v46 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v46 )
        goto LABEL_133;
      UILabel__set_text(v46, (System_String_o *)this, 0LL);
      v48 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v47 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v81.fields.currentCryptoKey = v48;
      *(_QWORD *)&v81.fields.fakeValue = v47;
      LODWORD(v76) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v81, 0LL);
      if ( System_Int32__Equals_39386936((int32_t)&v76, resSvtData->fields.combineResLimitCnt, 0LL) )
      {
        v49 = UserServantEntity__isLevelMax(baseSvtData, 0LL);
        infoLb = v4->fields.infoLb;
        if ( v49 )
        {
          v9 = v72;
          Component_WebViewObject = v73;
LABEL_87:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (CombineInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12652/*"SVTEQ_LVMAX_INFO_TXT"*/, 0LL);
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
          v9 = v72;
          Component_WebViewObject = v73;
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
        sub_B52A5C(this, resSvtData);
      }
      v60 = v4->fields.infoLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_8745/*"MAX_LVUP_TXT"*/, 0LL);
      LevelMax = UserServantEntity__getLevelMax(baseSvtData, 0LL);
      v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
      combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
      this = (CombineInfoComponent_o *)System_String__Format_44563852(v61, v62, v63, 0LL);
      if ( !v60 )
        goto LABEL_133;
      UILabel__set_text(v60, (System_String_o *)this, 0LL);
      Component_WebViewObject = v73;
      v64 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v9 = v72;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v64 = CombineInfoComponent_TypeInfo;
        }
      }
      else
      {
        v9 = v72;
      }
      static_fields = (int *)v64->static_fields;
      v59 = v8;
      v55 = *static_fields;
      v56 = static_fields[1];
      v57 = static_fields[2];
      v58 = static_fields[3];
LABEL_116:
      UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v55, 0LL);
LABEL_117:
      LimitCntMax = UserServantEntity__getLimitCntMax(baseSvtData, 0LL);
      CombineInfoComponent__setResLimitCntInfo(v4, LimitCntMax, resSvtData->fields.combineResLimitCnt, v67);
      HIDWORD(v77) = resSvtData->fields.combineResHp;
      resHpLb = v4->fields.resHpLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_39387012(
                                         (int32_t)&v77 + 4,
                                         (System_String_o *)StringLiteral_9323/*"N0"*/,
                                         0LL);
      if ( !resHpLb )
        goto LABEL_133;
      UILabel__set_text(resHpLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.hp != HIDWORD(v77) )
      {
        v69 = CombineInfoComponent_TypeInfo;
        if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v69 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v9, v69->static_fields->COLOR_VAL, 0LL);
      }
      LODWORD(v77) = resSvtData->fields.combineResAtk;
      resAtkLb = v4->fields.resAtkLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_39387012(
                                         (int32_t)&v77,
                                         (System_String_o *)StringLiteral_9323/*"N0"*/,
                                         0LL);
      if ( !resAtkLb )
        goto LABEL_133;
      UILabel__set_text(resAtkLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.atk != (_DWORD)v77 )
      {
        v71 = CombineInfoComponent_TypeInfo;
        if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v71 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color((UIWidget_o *)Component_WebViewObject, v71->static_fields->COLOR_VAL, 0LL);
      }
      if ( *p_dispType == 4 )
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v7, white, 0LL);
        v85 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v9, v85, 0LL);
        v86 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color((UIWidget_o *)Component_WebViewObject, v86, 0LL);
      }
      this = (CombineInfoComponent_o *)v4->fields.resStatusInfo;
      if ( !this )
        goto LABEL_133;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      return;
    case 4:
      v51 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !v51 )
        goto LABEL_133;
      UIExtrusionLabel__set_text(v51, (System_String_o *)this, 0LL);
      v52 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v52 )
        goto LABEL_133;
      UILabel__set_text(v52, (System_String_o *)this, 0LL);
      v53 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v53 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v8, v53->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v54);
      this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
      if ( !this )
        goto LABEL_133;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v82 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v7, v82, 0LL);
      v83 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v9, v83, 0LL);
      *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_white(0LL);
      v59 = (UIWidget_o *)Component_WebViewObject;
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
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      v9 = &currentLimitCntInfos->obj.klass + v7;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_B52A5C(this, *(_QWORD *)&maxLimitCnt);
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
  UserServantEntity_o **p_baseSvtData; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_o *isLevelMax; // x0
  System_String_o *v13; // x1
  struct UserServantEntity_o *baseSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x21
  UILabel_o *currentMaxLvLb; // x21
  UIExtrusionLabel_o *v17; // x21
  System_String_o *v18; // x22
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  UILabel_o *currentExpValLb; // x21
  UserServantEntity_o *v23; // x8
  int32_t v24; // w20
  __int64 v25; // x21
  __int64 v26; // x22
  int32_t v27; // w0
  const MethodInfo *v28; // x3
  struct UserServantEntity_o *v29; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v31; // x8
  UILabel_o *currentAtkLb; // x19
  float barExp[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 lateExp; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_42B2C00 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&StringLiteral_7315/*"IMPOSSIBLE_LIMITUP_COLOR"*/);
    sub_B52984(&StringLiteral_347/*"#,0"*/);
    sub_B52984(&StringLiteral_9323/*"N0"*/);
    byte_42B2C00 = 1;
  }
  *(_QWORD *)barExp = 0LL;
  lateExp = 0LL;
  CombineInfoComponent__initCurrentStatusGrid(this, (const MethodInfo *)baseData);
  p_baseSvtData = &this->fields.baseSvtData;
  this->fields.baseSvtData = baseData;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.baseSvtData,
    (System_Int32_array **)baseData,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
      v13 = isLevelMax;
      goto LABEL_31;
    case 1:
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_45;
      v17 = this->fields.currentLvLb;
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
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7315/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_45;
        v18 = isLevelMax;
        v19 = (Il2CppObject *)System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
        isLevelMax = System_String__Format(v18, v19, 0LL);
      }
      v13 = isLevelMax;
      if ( !v17 )
        goto LABEL_45;
      UIExtrusionLabel__set_text(v17, isLevelMax, 0LL);
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
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7315/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_45;
        v20 = isLevelMax;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax(*p_baseSvtData, 0LL);
        v21 = (Il2CppObject *)System_Int32__ToString((int32_t)barExp, 0LL);
        isLevelMax = System_String__Format(v20, v21, 0LL);
      }
      else
      {
        isLevelMax = (System_String_o *)*p_baseSvtData;
        if ( !*p_baseSvtData )
          goto LABEL_45;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0LL);
        isLevelMax = System_Int32__ToString((int32_t)barExp, 0LL);
      }
      v13 = isLevelMax;
      if ( !currentMaxLvLb )
        goto LABEL_45;
LABEL_31:
      UILabel__set_text(currentMaxLvLb, v13, 0LL);
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
      isLevelMax = System_Int32__ToString_39387012((int32_t)&lateExp, (System_String_o *)StringLiteral_347/*"#,0"*/, 0LL);
      if ( !currentExpValLb )
        goto LABEL_45;
      UILabel__set_text(currentExpValLb, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_45;
      isLevelMax = (System_String_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)isLevelMax, 0LL);
      v23 = *p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_45;
      v24 = (int)isLevelMax;
      v26 = *(_QWORD *)&v23->fields.limitCount.fields.currentCryptoKey;
      v25 = *(_QWORD *)&v23->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v35.fields.currentCryptoKey = v26;
      *(_QWORD *)&v35.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v35, 0LL);
      CombineInfoComponent__setCurrentLimitCntInfo(this, v24, v27, v28);
      v29 = this->fields.baseSvtData;
      if ( !v29
        || (currentHpLb = this->fields.currentHpLb,
            isLevelMax = System_Int32__ToString_39387012((int)v29 + 268, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL),
            !currentHpLb)
        || (UILabel__set_text(currentHpLb, isLevelMax, 0LL), (v31 = this->fields.baseSvtData) == 0LL)
        || (currentAtkLb = this->fields.currentAtkLb,
            isLevelMax = System_Int32__ToString_39387012((int)v31 + 264, (System_String_o *)StringLiteral_9323/*"N0"*/, 0LL),
            !currentAtkLb) )
      {
LABEL_45:
        sub_B52A5C(isLevelMax, v13);
      }
      UILabel__set_text(currentAtkLb, isLevelMax, 0LL);
      return;
    default:
      goto LABEL_32;
  }
}


void __fastcall CombineInfoComponent__setInitInfoLb(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UILabel_o *infoLb; // x19
  UILabel_o *infoLb2; // x0

  if ( (byte_42B2BFF & 1) == 0 )
  {
    sub_B52984(&CombineInfoComponent_TypeInfo);
    sub_B52984(&StringLiteral_24039/*"レベル上限："*/);
    byte_42B2BFF = 1;
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
      UILabel__set_text(infoLb2, (System_String_o *)StringLiteral_24039/*"レベル上限："*/, 0LL);
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
        sub_B52A5C(infoLb2, method);
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
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      v9 = &resLimitCntInfos->obj.klass + v7;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_B52A5C(this, *(_QWORD *)&maxLimitCnt);
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
  sub_B52920(v12);
  LODWORD(v12->monitor) = iconImageId;
  HIDWORD(v12->monitor) = count;
  v12->fields.itemId = acquiredCount;
}


void __fastcall CombineInfoComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct CombineInfoComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD6F8 & 1) == 0 )
  {
    sub_B52984(&CombineInfoComponent___c_TypeInfo);
    byte_42AD6F8 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(CombineInfoComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CombineInfoComponent___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, data);
  return data->fields.itemId == giftEntity->fields.objectId;
}