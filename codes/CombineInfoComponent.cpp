// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  __int64 v6; // x1
  __int64 v7; // x1
  int v8; // s0
  int v9; // s1
  int v10; // s2
  CombineInfoComponent_c *v11; // x8
  struct CombineInfoComponent_StaticFields *static_fields; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  CombineInfoComponent_c *v20; // x8
  struct CombineInfoComponent_StaticFields *v21; // x9
  struct CombineInfoComponent_StaticFields *v22; // x9
  struct CombineInfoComponent_StaticFields *v23; // x0
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct UnityEngine_Color_o v31; // [xsp+0h] [xbp-20h] BYREF
  unsigned int v32; // [xsp+18h] [xbp-8h] BYREF
  UnityEngine_Color32_o v33; // 0:x0.8
  UnityEngine_Color32_o v34; // 0:x0.8

  if ( (byte_41861CF & 1) == 0 )
  {
    sub_B2C35C(&CombineInfoComponent_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_19358/*"icon_reward_get"*/, v6);
    sub_B2C35C(&StringLiteral_1/*""*/, v7);
    byte_41861CF = 1;
  }
  v8 = 1065185444;
  v9 = 1064430469;
  v10 = 1050790593;
  v31 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v31);
  CombineInfoComponent_TypeInfo->static_fields->COLOR_VAL = v31;
  v11 = CombineInfoComponent_TypeInfo;
  CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH = 140;
  v11->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH = 140;
  v11->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH = 34;
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->INIT_VAL_TXT, v13, v14, v15, v16, v17, v18, v19);
  v20 = CombineInfoComponent_TypeInfo;
  v21 = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&v21->LIMIT_UP_GET_SKILL_INFO_POS.fields.x = 3246391296LL;
  v21->LIMIT_UP_GET_SKILL_INFO_POS.fields.z = 0.0;
  v22 = v20->static_fields;
  *(_QWORD *)&v22->LIMIT_UP_REWARD_INFO_POS.fields.x = 1127546880LL;
  v22->LIMIT_UP_REWARD_INFO_POS.fields.z = 0.0;
  v23 = v20->static_fields;
  v24 = (System_Int32_array **)StringLiteral_19358/*"icon_reward_get"*/;
  v23->LIMIT_UP_REWARD_GET_ICON_NAME = (struct System_String_o *)StringLiteral_19358/*"icon_reward_get"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->LIMIT_UP_REWARD_GET_ICON_NAME, v24, v25, v26, v27, v28, v29, v30);
  v33 = (UnityEngine_Color32_o)&v32;
  CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_ID = 9;
  v32 = 0;
  UnityEngine_Color32___ctor(v33, 0x36u, 0x3Au, 0x3Du, 0xFFu, 0LL);
  v34 = (UnityEngine_Color32_o)v32;
  CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = UnityEngine_Color32__op_Implicit_40636156(
                                                                                           v34,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_GameObject_o *getSkillRewardObj; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  CombineInfoComponent_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x0
  UISprite_o *limitUpRewardGetIcon1; // x21
  System_String_o *LIMIT_UP_REWARD_GET_ICON_NAME; // x22
  UILabel_o *infoLb; // x21
  System_String_o *v25; // x22
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  CombineInfoComponent_o *v28; // x0
  const MethodInfo *v29; // x2
  UnityEngine_GameObject_o *v30; // x21
  System_Text_StringBuilder_o *v31; // x22
  System_Text_StringBuilder_o *appended; // x0
  UnityEngine_GameObject_c *klass; // x8
  unsigned __int64 v34; // x24
  int32_t v35; // w23
  UILabel_o *infoLb2; // x23
  System_String_o *v37; // x24
  Il2CppObject *v38; // x0
  UILabel_o *v39; // x22
  _BOOL8 isLimitCountMax; // x0
  const MethodInfo *v41; // x4
  UnityEngine_GameObject_o *v42; // x0
  CombineInfoComponent_c *v43; // x8
  UnityEngine_GameObject_o *v44; // x21
  int32_t size; // w21
  CombineInfoComponent_GetItemInfo_o *v46; // x8
  _BOOL4 v47; // w23
  CombineInfoComponent_GetItemInfo_o *v48; // x8
  __int64 v49; // x9
  int32_t v50; // w27
  UILabel_o *infoLb3; // x20
  System_String_o *v52; // x21
  CombineInfoComponent_GetItemInfo_o *v53; // x8
  Il2CppObject *name; // x22
  Il2CppObject *v55; // x0
  UILabel_o *v56; // x20
  System_String_o *v57; // x21
  Il2CppObject *v58; // x0
  UILabel_o *v59; // x20
  CombineInfoComponent_GetItemInfo_o *v60; // x8
  CombineInfoComponent_GetItemInfo_o *v61; // x8
  __int64 v62; // x9
  int32_t v63; // w26
  UILabel_o *infoLb4; // x20
  System_String_o *v65; // x21
  Il2CppObject *v66; // x0
  UILabel_o *v67; // x20
  UILabel_o *infoLb5; // x20
  ItemIconComponent_o *infoIcon3; // x20
  int v70; // s0
  ItemIconComponent_o *v74; // x20
  int v75; // s0
  UIWidget_o *v79; // x20
  int v80; // s0
  UIWidget_o *v84; // x20
  int v85; // s0
  UIWidget_o *v89; // x20
  int v90; // s0
  UILabel_o *v94; // x20
  bool v95; // w1
  int v96; // s0
  ItemIconComponent_o *infoIcon4; // x20
  int v101; // s0
  UIWidget_o *v105; // x20
  int v106; // s0
  UIWidget_o *v110; // x20
  int v111; // s0
  UIWidget_o *v115; // x20
  int v116; // s0
  UILabel_o *v120; // x20
  int v121; // s0
  UILabel_o *v125; // x20
  int v126; // s0
  UILabel_o *v130; // x20
  int v131; // s0
  __int64 v135; // x0
  int32_t combineResSvtMaxLv; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t LevelMax; // [xsp+8h] [xbp-58h] BYREF
  bool isAllAcquired; // [xsp+Ch] [xbp-54h] BYREF
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *getItemInfoList; // [xsp+18h] [xbp-48h] BYREF

  v3 = resSvtData;
  if ( (byte_41861CC & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, resSvtData);
    sub_B2C35C(&CombineInfoComponent_TypeInfo, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_8692/*"MAX_LVUP_TXT"*/, v11);
    sub_B2C35C(&StringLiteral_8392/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, v12);
    sub_B2C35C(&StringLiteral_8390/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, v13);
    sub_B2C35C(&StringLiteral_8394/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, v14);
    sub_B2C35C(&StringLiteral_8391/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, v15);
    sub_B2C35C(&StringLiteral_8393/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, v16);
    sub_B2C35C(&StringLiteral_8384/*"LIMITUP_MAX_TXT"*/, v17);
    byte_41861CC = 1;
  }
  getItemInfoList = 0LL;
  isAllAcquired = 0;
  getSkillRewardObj = this->fields.getSkillRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  gameObject = UnityEngine_GameObject__get_gameObject(getSkillRewardObj, 0LL);
  v20 = CombineInfoComponent_TypeInfo;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v20 = CombineInfoComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(gameObject, v20->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  getSkillRewardObj = this->fields.limitUpRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  v21 = UnityEngine_GameObject__get_gameObject(getSkillRewardObj, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v21,
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
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8384/*"LIMITUP_MAX_TXT"*/, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8692/*"MAX_LVUP_TXT"*/, 0LL);
    if ( !this->fields.baseSvtData )
      goto LABEL_162;
    v25 = (System_String_o *)getSkillRewardObj;
    LevelMax = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    if ( !v3 )
      goto LABEL_162;
    v26 = (Il2CppObject *)getSkillRewardObj;
    combineResSvtMaxLv = v3->fields.combineResSvtMaxLv;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format_44301068(v25, v26, v27, 0LL);
  }
  resSvtData = (CombineSvtData_o *)getSkillRewardObj;
  if ( !infoLb )
    goto LABEL_162;
  UILabel__set_text(infoLb, (System_String_o *)getSkillRewardObj, 0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent__GetNewReleaseSkillNumList(v28, v3, v29);
  if ( !getSkillRewardObj )
    goto LABEL_162;
  v30 = getSkillRewardObj;
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
    v31 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v31, 0LL);
    klass = v30[1].klass;
    if ( (int)klass >= 1 )
    {
      v34 = 0LL;
      v35 = (_DWORD)v30 + 32;
      do
      {
        if ( v34 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_8393/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/,
                                                            0LL);
          if ( !v31 )
            goto LABEL_162;
          appended = System_Text_StringBuilder__Append_42408700(v31, (System_String_o *)getSkillRewardObj, 0LL);
          LODWORD(klass) = v30[1].klass;
        }
        if ( v34 >= (unsigned int)klass )
        {
          v135 = sub_B2C460(appended);
          sub_B2C400(v135, 0LL);
        }
        getSkillRewardObj = (UnityEngine_GameObject_o *)System_Int32__ToString(v35, 0LL);
        if ( !v31 )
          goto LABEL_162;
        appended = System_Text_StringBuilder__Append_42408700(v31, (System_String_o *)getSkillRewardObj, 0LL);
        LODWORD(klass) = v30[1].klass;
        ++v34;
        v35 += 4;
      }
      while ( (__int64)v34 < (int)klass );
    }
    infoLb2 = this->fields.infoLb2;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8394/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, 0LL);
    if ( !v31 )
      goto LABEL_162;
    v37 = (System_String_o *)getSkillRewardObj;
    v38 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v31->klass->vtable._3_ToString.method)(
                            v31,
                            v31->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format(v37, v38, 0LL);
    if ( !infoLb2 )
      goto LABEL_162;
    UILabel__set_text(infoLb2, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v39 = this->fields.infoLb2;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v39 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v39, CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH, 0LL);
  }
  getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_162;
  isLimitCountMax = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0LL);
  if ( isLimitCountMax )
    return;
  if ( !v30[1].klass )
  {
    getSkillRewardObj = this->fields.limitUpRewardObj;
    if ( !getSkillRewardObj )
      goto LABEL_162;
    v42 = UnityEngine_GameObject__get_gameObject(getSkillRewardObj, 0LL);
    v43 = CombineInfoComponent_TypeInfo;
    v44 = v42;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
      v43 = CombineInfoComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v44, v43->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  }
  CombineInfoComponent__GetLimitCountUpReward(
    (CombineInfoComponent_o *)isLimitCountMax,
    v3,
    &getItemInfoList,
    &isAllAcquired,
    v41);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v46 = getItemInfoList->fields._items->m_Items[0];
  if ( !v46 )
    goto LABEL_162;
  if ( !this->fields.infoIcon3 )
    goto LABEL_162;
  ItemIconComponent__SetGift(this->fields.infoIcon3, 2, v46->fields.iconImageId, -1, 0, 0LL);
  if ( !getItemInfoList )
    goto LABEL_162;
  v47 = isAllAcquired;
  if ( !getItemInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v48 = getItemInfoList->fields._items->m_Items[0];
  if ( !v48 )
LABEL_162:
    sub_B2C434(getSkillRewardObj, resSvtData);
  v49 = 40LL;
  if ( !isAllAcquired )
    v49 = 36LL;
  v50 = *(_DWORD *)((char *)&v48->klass + v49);
  infoLb3 = this->fields.infoLb3;
  if ( size == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8390/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, 0LL);
    if ( !getItemInfoList )
      goto LABEL_162;
    v52 = (System_String_o *)getSkillRewardObj;
    if ( !getItemInfoList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v53 = getItemInfoList->fields._items->m_Items[0];
    if ( !v53 )
      goto LABEL_162;
    name = (Il2CppObject *)v53->fields.name;
    LevelMax = v50;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format_44301068(v52, name, v55, 0LL);
    if ( !infoLb3 )
      goto LABEL_162;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v56 = this->fields.infoLb3;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v56 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v56, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_8391/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v50;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format(v57, v58, 0LL);
    if ( !infoLb3 )
      goto LABEL_162;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v59 = this->fields.infoLb3;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v59 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v59, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v60 = getItemInfoList->fields._items->m_Items[1];
    if ( !v60 )
      goto LABEL_162;
    if ( !this->fields.infoIcon4 )
      goto LABEL_162;
    ItemIconComponent__SetGift(this->fields.infoIcon4, 2, v60->fields.iconImageId, -1, 0, 0LL);
    if ( !getItemInfoList )
      goto LABEL_162;
    if ( getItemInfoList->fields._size <= 1u )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v61 = getItemInfoList->fields._items->m_Items[1];
    if ( !v61 )
      goto LABEL_162;
    v62 = 40LL;
    if ( !v47 )
      v62 = 36LL;
    v63 = *(_DWORD *)((char *)&v61->klass + v62);
    infoLb4 = this->fields.infoLb4;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v65 = LocalizationManager__Get((System_String_o *)StringLiteral_8391/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v63;
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (UnityEngine_GameObject_o *)System_String__Format(v65, v66, 0LL);
    if ( !infoLb4 )
      goto LABEL_162;
    UILabel__set_text(infoLb4, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
    v67 = this->fields.infoLb4;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v67 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v67, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
    getSkillRewardObj = (UnityEngine_GameObject_o *)this->fields.infoLb5;
    if ( !getSkillRewardObj )
      goto LABEL_162;
    getSkillRewardObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(getSkillRewardObj, 1, 0LL);
    infoLb5 = this->fields.infoLb5;
    getSkillRewardObj = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8392/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, 0LL);
    if ( !infoLb5 )
      goto LABEL_162;
    UILabel__set_text(infoLb5, (System_String_o *)getSkillRewardObj, 0LL);
  }
  infoIcon3 = this->fields.infoIcon3;
  if ( !v47 )
  {
    *(UnityEngine_Color_o *)&v96 = UnityEngine_Color__get_white(0LL);
    if ( infoIcon3 )
    {
      ItemIconComponent__SetColor(infoIcon3, *(UnityEngine_Color_o *)&v96, 0LL);
      infoIcon4 = this->fields.infoIcon4;
      *(UnityEngine_Color_o *)&v101 = UnityEngine_Color__get_white(0LL);
      if ( infoIcon4 )
      {
        ItemIconComponent__SetColor(infoIcon4, *(UnityEngine_Color_o *)&v101, 0LL);
        v105 = (UIWidget_o *)this->fields.infoLb3;
        *(UnityEngine_Color_o *)&v106 = UnityEngine_Color__get_white(0LL);
        if ( v105 )
        {
          UIWidget__set_color(v105, *(UnityEngine_Color_o *)&v106, 0LL);
          v110 = (UIWidget_o *)this->fields.infoLb4;
          *(UnityEngine_Color_o *)&v111 = UnityEngine_Color__get_white(0LL);
          if ( v110 )
          {
            UIWidget__set_color(v110, *(UnityEngine_Color_o *)&v111, 0LL);
            v115 = (UIWidget_o *)this->fields.infoLb5;
            *(UnityEngine_Color_o *)&v116 = UnityEngine_Color__get_white(0LL);
            if ( v115 )
            {
              UIWidget__set_color(v115, *(UnityEngine_Color_o *)&v116, 0LL);
              v120 = this->fields.infoLb3;
              *(UnityEngine_Color_o *)&v121 = UnityEngine_Color__get_black(0LL);
              if ( v120 )
              {
                UILabel__set_effectColor(v120, *(UnityEngine_Color_o *)&v121, 0LL);
                v125 = this->fields.infoLb4;
                *(UnityEngine_Color_o *)&v126 = UnityEngine_Color__get_black(0LL);
                if ( v125 )
                {
                  UILabel__set_effectColor(v125, *(UnityEngine_Color_o *)&v126, 0LL);
                  v130 = this->fields.infoLb5;
                  *(UnityEngine_Color_o *)&v131 = UnityEngine_Color__get_black(0LL);
                  if ( v130 )
                  {
                    UILabel__set_effectColor(v130, *(UnityEngine_Color_o *)&v131, 0LL);
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
                              v95 = 0;
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
  *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_gray(0LL);
  if ( !infoIcon3 )
    goto LABEL_162;
  ItemIconComponent__SetColor(infoIcon3, *(UnityEngine_Color_o *)&v70, 0LL);
  v74 = this->fields.infoIcon4;
  *(UnityEngine_Color_o *)&v75 = UnityEngine_Color__get_gray(0LL);
  if ( !v74 )
    goto LABEL_162;
  ItemIconComponent__SetColor(v74, *(UnityEngine_Color_o *)&v75, 0LL);
  v79 = (UIWidget_o *)this->fields.infoLb3;
  *(UnityEngine_Color_o *)&v80 = UnityEngine_Color__get_gray(0LL);
  if ( !v79 )
    goto LABEL_162;
  UIWidget__set_color(v79, *(UnityEngine_Color_o *)&v80, 0LL);
  v84 = (UIWidget_o *)this->fields.infoLb4;
  *(UnityEngine_Color_o *)&v85 = UnityEngine_Color__get_gray(0LL);
  if ( !v84 )
    goto LABEL_162;
  UIWidget__set_color(v84, *(UnityEngine_Color_o *)&v85, 0LL);
  v89 = (UIWidget_o *)this->fields.infoLb5;
  *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_gray(0LL);
  if ( !v89 )
    goto LABEL_162;
  UIWidget__set_color(v89, *(UnityEngine_Color_o *)&v90, 0LL);
  getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
  v94 = this->fields.infoLb3;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    getSkillRewardObj = (UnityEngine_GameObject_o *)CombineInfoComponent_TypeInfo;
  }
  if ( !v94 )
    goto LABEL_162;
  UILabel__set_effectColor(
    v94,
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
  v95 = 1;
LABEL_160:
  UnityEngine_GameObject__SetActive(getSkillRewardObj, v95, 0LL);
}


void __fastcall CombineInfoComponent__GetLimitCountUpReward(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **getItemInfoList,
        bool *isAllAcquired,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x22
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v35; // x1
  struct UserServantEntity_o *baseSvtData; // x8
  int64_t v37; // x23
  __int64 v38; // x24
  __int64 v39; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CombineLimitGiftMaster_o *v41; // x23
  GiftMaster_o *v42; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x0
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **v44; // x19
  int v45; // w25
  __int64 v46; // x27
  struct UserServantEntity_o *v47; // x8
  __int64 v48; // x26
  __int64 v49; // x28
  const MethodInfo *v50; // x3
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  int64_t *v57; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v59; // x20
  int32_t v60; // w20
  System_String_o *v61; // x28
  int32_t IconImageId; // w19
  CombineInfoComponent_GetItemInfo_o *v63; // x27
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *v64; // x19
  struct CombineInfoComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__56_0; // x20
  Il2CppObject *v67; // x21
  struct CombineInfoComponent___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_41861CE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, resSvtData);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___, v9);
    sub_B2C35C(&Method_System_Func_CombineInfoComponent_GetItemInfo__bool___ctor__, v10);
    sub_B2C35C(&System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo, v11);
    sub_B2C35C(&CombineInfoComponent_GetItemInfo_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__, v15);
    sub_B2C35C(&System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo, v16);
    sub_B2C35C(&NetworkManager_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&Method_System_Predicate_CombineInfoComponent_GetItemInfo___ctor__, v19);
    sub_B2C35C(&System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo, v20);
    sub_B2C35C(&Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, v21);
    sub_B2C35C(&Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__, v22);
    sub_B2C35C(&CombineInfoComponent___c__DisplayClass56_0_TypeInfo, v23);
    sub_B2C35C(&CombineInfoComponent___c_TypeInfo, v24);
    sub_B2C35C(&StringLiteral_1/*""*/, v25);
    byte_41861CE = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  *getItemInfoList = (System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *)v26;
  sub_B2C2F8((BattleServantConfConponent_o *)getItemInfoList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
  *isAllAcquired = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  v37 = UserId;
  v39 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v79.fields.currentCryptoKey = v39;
  *(_QWORD *)&v79.fields.fakeValue = v38;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v79, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(Master_WarQuestSelectionMaster, v37, UserId, 0LL);
  v41 = (CombineLimitGiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v42 = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v43,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  UserId = (int64_t)resSvtData->fields.baseSvtData;
  if ( !UserId )
    goto LABEL_58;
  v44 = getItemInfoList;
  v45 = UserServantEntity__getLimitCount((UserServantEntity_o *)UserId, 0LL) + 1;
  if ( v45 <= resSvtData->fields.combineResLimitCnt )
  {
    while ( 1 )
    {
      v46 = sub_B2C42C(CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
      CombineInfoComponent___c__DisplayClass56_0___ctor((CombineInfoComponent___c__DisplayClass56_0_o *)v46, 0LL);
      v47 = resSvtData->fields.baseSvtData;
      if ( !v47 )
        break;
      v49 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
      v48 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v80.fields.currentCryptoKey = v49;
      *(_QWORD *)&v80.fields.fakeValue = v48;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v80, 0LL);
      if ( !v41 )
        break;
      UserId = CombineLimitGiftMaster__GetCombineLimitGiftId(v41, UserId, v45, v50);
      if ( (_DWORD)UserId )
      {
        if ( !v42 )
          break;
        UserId = (int64_t)GiftMaster__getDataById(v42, UserId, 0LL);
        if ( !v46 )
          break;
        *(_QWORD *)(v46 + 16) = UserId;
        v57 = (int64_t *)(v46 + 16);
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v46 + 16),
          (System_Int32_array **)UserId,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        if ( *(_QWORD *)(v46 + 16) )
        {
          v58 = (System_Collections_Generic_IEnumerable_TSource__o *)*v44;
          v59 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v59,
            (Il2CppObject *)v46,
            Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__,
            (const MethodInfo_2711C04 *)Method_System_Func_CombineInfoComponent_GetItemInfo__bool___ctor__);
          UserId = (int64_t)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                              v58,
                              (System_Func_TSource__bool__o *)v59,
                              (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
          if ( UserId )
          {
            if ( EntityDefinitely && v45 <= EntityDefinitely->fields.maxLimitCount )
            {
              if ( !*v57 )
                break;
              *(_DWORD *)(UserId + 40) += *(_DWORD *)(*v57 + 28);
            }
            else
            {
              *isAllAcquired = 0;
              if ( !*v57 )
                break;
              *(_DWORD *)(UserId + 36) += *(_DWORD *)(*v57 + 28);
            }
          }
          else
          {
            countText = (System_String_o *)StringLiteral_1/*""*/;
            nameText = (System_String_o *)StringLiteral_1/*""*/;
            UserId = *v57;
            if ( !*v57 )
              break;
            GiftEntity__GetInfo((GiftEntity_o *)UserId, &nameText, &countText, 0LL);
            UserId = *v57;
            if ( !*v57 )
              break;
            v60 = *(_DWORD *)(UserId + 24);
            v61 = nameText;
            IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)UserId, 0LL);
            v63 = (CombineInfoComponent_GetItemInfo_o *)sub_B2C42C(CombineInfoComponent_GetItemInfo_TypeInfo);
            CombineInfoComponent_GetItemInfo___ctor(v63, v60, v61, IconImageId, 0, 0, 0LL);
            if ( EntityDefinitely && v45 <= EntityDefinitely->fields.maxLimitCount )
            {
              v44 = getItemInfoList;
              if ( !v63 || !*v57 )
                break;
              v63->fields.acquiredCount += *(_DWORD *)(*v57 + 28);
            }
            else
            {
              v44 = getItemInfoList;
              *isAllAcquired = 0;
              if ( !v63 || !*v57 )
                break;
              v63->fields.count += *(_DWORD *)(*v57 + 28);
            }
            UserId = (int64_t)*v44;
            if ( !*v44 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UserId,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__);
          }
        }
      }
      if ( ++v45 > resSvtData->fields.combineResLimitCnt )
        goto LABEL_46;
    }
LABEL_58:
    sub_B2C434(UserId, v35);
  }
LABEL_46:
  if ( !*isAllAcquired )
  {
    v64 = (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)*v44;
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
      v67 = (Il2CppObject *)static_fields->__9;
      _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__56_0,
        v67,
        Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__,
        (const MethodInfo_2952BE4 *)Method_System_Predicate_CombineInfoComponent_GetItemInfo___ctor__);
      v68 = CombineInfoComponent___c_TypeInfo->static_fields;
      v68->__9__56_0 = (struct System_Predicate_CombineInfoComponent_GetItemInfo__o *)_9__56_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v68->__9__56_0,
        (System_Int32_array **)_9__56_0,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74);
    }
    if ( !v64 )
      goto LABEL_58;
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      v64,
      (System_Predicate_T__o *)_9__56_0,
      (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
  }
}


System_Int32_array *__fastcall CombineInfoComponent__GetNewReleaseSkillNumList(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  UserServantEntity_o *v8; // x0
  __int64 v9; // x1
  UserServantEntity_o *baseSvtData; // x21
  int32_t combineResSvtLv; // w22
  int32_t LimitCount; // w0
  System_Int32_array *v13; // x8
  __int64 v14; // x20
  unsigned __int64 max_length; // x9
  unsigned __int64 v16; // x10
  __int64 v18; // x0
  System_String_array *v19; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *v20; // [xsp+8h] [xbp-38h] BYREF
  System_String_array *skillNameList; // [xsp+10h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_41861CD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, resSvtData);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_41861CD = 1;
  }
  idList = 0LL;
  v20 = 0LL;
  skillNameList = 0LL;
  v19 = 0LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !resSvtData )
    goto LABEL_17;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_17;
  combineResSvtLv = resSvtData->fields.combineResSvtLv;
  LimitCount = UserServantEntity__getLimitCount(resSvtData->fields.baseSvtData, 0LL);
  UserServantEntity__getNextUseSkillInfo(baseSvtData, &idList, &skillNameList, combineResSvtLv, LimitCount, 1, 0LL);
  v8 = resSvtData->fields.baseSvtData;
  if ( !v8 )
    goto LABEL_17;
  UserServantEntity__getNextUseSkillInfo(
    v8,
    &v20,
    &v19,
    resSvtData->fields.combineResSvtLv,
    resSvtData->fields.combineResLimitCnt,
    0,
    0LL);
  v13 = v20;
  if ( !v20 )
    goto LABEL_17;
  v14 = 8LL;
  while ( 1 )
  {
    max_length = v13->max_length;
    v16 = v14 - 8;
    if ( v14 - 8 >= (int)max_length )
      break;
    if ( !idList )
      goto LABEL_17;
    if ( v16 >= idList->max_length )
    {
LABEL_20:
      v18 = sub_B2C460(v8);
      sub_B2C400(v18, 0LL);
    }
    if ( !*((_DWORD *)&idList->obj.klass + v14) )
    {
      if ( v16 >= max_length )
        goto LABEL_20;
      if ( *((_DWORD *)&v13->obj.klass + v14) )
      {
        if ( !v7 )
          goto LABEL_17;
        System_Collections_Generic_List_int___Add(
          v7,
          v14 - 7,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        v13 = v20;
      }
    }
    ++v14;
    if ( !v13 )
      goto LABEL_17;
  }
  if ( !v7 )
LABEL_17:
    sub_B2C434(v8, v9);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall CombineInfoComponent__HideResStatusInfo(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resStatusInfo; // x0

  resStatusInfo = this->fields.resStatusInfo;
  if ( !resStatusInfo )
    sub_B2C434(0LL, method);
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
        v6 = sub_B2C460(this);
        sub_B2C400(v6, 0LL);
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
    sub_B2C434(this, method);
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
        v6 = sub_B2C460(this);
        sub_B2C400(v6, 0LL);
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
    sub_B2C434(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__initStatusInfo(
        CombineInfoComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UIExtrusionLabel_o *currentLvLb; // x21
  UILabel_o *currentMaxLvLb; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x3
  BalanceConfig_c *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_41861C8 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&CombineInfoComponent_TypeInfo, v5);
    byte_41861C8 = 1;
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
  CombineInfoComponent__initCurrentStatusGrid(this, v8);
  v10 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  CombineInfoComponent__setCurrentLimitCntInfo(this, v10->static_fields->ServantLimitMax, 0, v9);
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
    sub_B2C434(currentMaxLvLb, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMaxLvLb, 0, 0LL);
  this->fields.dispType = type;
  CombineInfoComponent__setInitInfoLb(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__setCombineResStatusInfo(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  CombineInfoComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UserServantEntity_o *baseSvtData; // x23
  int32_t lv; // w22
  UIWidget_o *v15; // x21
  UIWidget_o *v16; // x25
  UIWidget_o *v17; // x27
  WebViewObject_o *Component_WebViewObject; // x28
  int v19; // s0
  int v23; // s0
  int v27; // s0
  int v31; // s0
  int v35; // w22
  bool v36; // w1
  UIWidget_o *v37; // x22
  __int64 v38; // x26
  __int64 v39; // x27
  int32_t combineResLimitCnt; // w26
  bool v41; // w1
  float combineResExpBarVal; // s0
  int32_t *p_dispType; // x24
  CombineInfoComponent_c *v44; // x0
  UIExtrusionLabel_o *resLvLb; // x25
  UILabel_o *resMaxLvLb; // x25
  bool isLevelMax; // w0
  UILabel_o *infoLb; // x25
  UIExtrusionLabel_o *v49; // x26
  UILabel_o *v50; // x26
  CombineInfoComponent_c *v51; // x0
  const MethodInfo *v52; // x2
  UIExtrusionLabel_o *v53; // x26
  UILabel_o *v54; // x27
  __int64 v55; // x27
  __int64 v56; // x28
  bool v57; // w0
  System_String_o *INIT_VAL_TXT; // x1
  UIExtrusionLabel_o *v59; // x26
  UILabel_o *v60; // x26
  CombineInfoComponent_c *v61; // x0
  const MethodInfo *v62; // x2
  int v63; // s0
  int v64; // s1
  int v65; // s2
  int v66; // s3
  UIWidget_o *v67; // x0
  UILabel_o *v68; // x27
  System_String_o *v69; // x28
  Il2CppObject *v70; // x22
  Il2CppObject *v71; // x0
  CombineInfoComponent_c *v72; // x0
  int *static_fields; // x8
  int32_t LimitCntMax; // w0
  const MethodInfo *v75; // x3
  UILabel_o *resHpLb; // x25
  CombineInfoComponent_c *v77; // x0
  UILabel_o *resAtkLb; // x20
  CombineInfoComponent_c *v79; // x0
  UIWidget_o *v80; // [xsp+8h] [xbp-88h]
  WebViewObject_o *v81; // [xsp+10h] [xbp-80h]
  int32_t combineResSvtMaxLv; // [xsp+18h] [xbp-78h] BYREF
  int32_t LevelMax; // [xsp+1Ch] [xbp-74h] BYREF
  __int64 v84; // [xsp+20h] [xbp-70h] BYREF
  __int64 v85; // [xsp+28h] [xbp-68h] BYREF
  float barExp[2]; // [xsp+30h] [xbp-60h] BYREF
  __int64 exp; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_41861CB & 1) == 0 )
  {
    sub_B2C35C(&CombineInfoComponent_TypeInfo, resSvtData);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_8692/*"MAX_LVUP_TXT"*/, v9);
    sub_B2C35C(&StringLiteral_340/*"#,0"*/, v10);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v11);
    this = (CombineInfoComponent_o *)sub_B2C35C(&StringLiteral_12563/*"SVTEQ_LVMAX_INFO_TXT"*/, v12);
    byte_41861CB = 1;
  }
  *(_QWORD *)barExp = 0LL;
  exp = 0LL;
  v84 = 0LL;
  v85 = 0LL;
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
                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resMaxLvLb )
    goto LABEL_133;
  v15 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)v4->fields.resMaxLvLb,
                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resHpLb )
    goto LABEL_133;
  v16 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                     (UnityEngine_Component_o *)v4->fields.resHpLb,
                                     (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resAtkLb )
    goto LABEL_133;
  v17 = (UIWidget_o *)this;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v4->fields.resAtkLb,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v19 = UnityEngine_Color__get_white(0LL);
  if ( !v15 )
    goto LABEL_133;
  UIWidget__set_color(v15, *(UnityEngine_Color_o *)&v19, 0LL);
  *(UnityEngine_Color_o *)&v23 = UnityEngine_Color__get_white(0LL);
  if ( !v16 )
    goto LABEL_133;
  UIWidget__set_color(v16, *(UnityEngine_Color_o *)&v23, 0LL);
  *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
  if ( !v17 )
    goto LABEL_133;
  UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v27, 0LL);
  *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_white(0LL);
  if ( !Component_WebViewObject )
    goto LABEL_133;
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v31, 0LL);
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
  v35 = HIDWORD(exp) - lv;
  if ( v35 < 1 )
  {
    if ( v4->fields.dispType == 2 )
    {
      v37 = v17;
      v39 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v38 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v88.fields.currentCryptoKey = v39;
      *(_QWORD *)&v88.fields.fakeValue = v38;
      HIDWORD(v84) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v88, 0LL);
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_133;
      combineResLimitCnt = resSvtData->fields.combineResLimitCnt;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
      v17 = v37;
      if ( !System_Int32__Equals_38381340((int32_t)&v84 + 4, combineResLimitCnt, 0LL)
        && UserServantEntity__isLevelMax(baseSvtData, 0LL) )
      {
        this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
        if ( !this )
          goto LABEL_133;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_133;
        v41 = 0;
LABEL_52:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v41, 0LL);
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
    v41 = 1;
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
  if ( v35 != 1 )
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
    v36 = 1;
    goto LABEL_60;
  }
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_133;
  v36 = 0;
LABEL_60:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v36, 0LL);
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
  v44 = CombineInfoComponent_TypeInfo;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v44 = CombineInfoComponent_TypeInfo;
  }
  UIWidget__set_color(v15, v44->static_fields->COLOR_VAL, 0LL);
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
      v49 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !v49 )
        goto LABEL_133;
      UIExtrusionLabel__set_text(v49, (System_String_o *)this, 0LL);
      v50 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v50 )
        goto LABEL_133;
      UILabel__set_text(v50, (System_String_o *)this, 0LL);
      v51 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v51 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v16, v51->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v52);
      infoLb = v4->fields.resExpValLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_38381416(
                                         (int)resSvtData + 40,
                                         (System_String_o *)StringLiteral_340/*"#,0"*/,
                                         0LL);
      if ( !infoLb )
        goto LABEL_133;
      goto LABEL_91;
    case 2:
      v53 = v4->fields.resLvLb;
      v80 = v17;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !v53 )
        goto LABEL_133;
      v81 = Component_WebViewObject;
      UIExtrusionLabel__set_text(v53, (System_String_o *)this, 0LL);
      v54 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v54 )
        goto LABEL_133;
      UILabel__set_text(v54, (System_String_o *)this, 0LL);
      v56 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v55 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v89.fields.currentCryptoKey = v56;
      *(_QWORD *)&v89.fields.fakeValue = v55;
      LODWORD(v84) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v89, 0LL);
      if ( System_Int32__Equals_38381340((int32_t)&v84, resSvtData->fields.combineResLimitCnt, 0LL) )
      {
        v57 = UserServantEntity__isLevelMax(baseSvtData, 0LL);
        infoLb = v4->fields.infoLb;
        if ( v57 )
        {
          v17 = v80;
          Component_WebViewObject = v81;
LABEL_87:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          this = (CombineInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12563/*"SVTEQ_LVMAX_INFO_TXT"*/, 0LL);
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
          v17 = v80;
          Component_WebViewObject = v81;
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
        sub_B2C434(this, resSvtData);
      }
      v68 = v4->fields.infoLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_8692/*"MAX_LVUP_TXT"*/, 0LL);
      LevelMax = UserServantEntity__getLevelMax(baseSvtData, 0LL);
      v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
      combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
      this = (CombineInfoComponent_o *)System_String__Format_44301068(v69, v70, v71, 0LL);
      if ( !v68 )
        goto LABEL_133;
      UILabel__set_text(v68, (System_String_o *)this, 0LL);
      Component_WebViewObject = v81;
      v72 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v17 = v80;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v72 = CombineInfoComponent_TypeInfo;
        }
      }
      else
      {
        v17 = v80;
      }
      static_fields = (int *)v72->static_fields;
      v67 = v16;
      v63 = *static_fields;
      v64 = static_fields[1];
      v65 = static_fields[2];
      v66 = static_fields[3];
LABEL_116:
      UIWidget__set_color(v67, *(UnityEngine_Color_o *)&v63, 0LL);
LABEL_117:
      LimitCntMax = UserServantEntity__getLimitCntMax(baseSvtData, 0LL);
      CombineInfoComponent__setResLimitCntInfo(v4, LimitCntMax, resSvtData->fields.combineResLimitCnt, v75);
      HIDWORD(v85) = resSvtData->fields.combineResHp;
      resHpLb = v4->fields.resHpLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_38381416(
                                         (int32_t)&v85 + 4,
                                         (System_String_o *)StringLiteral_9266/*"N0"*/,
                                         0LL);
      if ( !resHpLb )
        goto LABEL_133;
      UILabel__set_text(resHpLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.hp != HIDWORD(v85) )
      {
        v77 = CombineInfoComponent_TypeInfo;
        if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v77 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v17, v77->static_fields->COLOR_VAL, 0LL);
      }
      LODWORD(v85) = resSvtData->fields.combineResAtk;
      resAtkLb = v4->fields.resAtkLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_38381416(
                                         (int32_t)&v85,
                                         (System_String_o *)StringLiteral_9266/*"N0"*/,
                                         0LL);
      if ( !resAtkLb )
        goto LABEL_133;
      UILabel__set_text(resAtkLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.atk != (_DWORD)v85 )
      {
        v79 = CombineInfoComponent_TypeInfo;
        if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v79 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color((UIWidget_o *)Component_WebViewObject, v79->static_fields->COLOR_VAL, 0LL);
      }
      if ( *p_dispType == 4 )
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v15, white, 0LL);
        v93 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v17, v93, 0LL);
        v94 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color((UIWidget_o *)Component_WebViewObject, v94, 0LL);
      }
      this = (CombineInfoComponent_o *)v4->fields.resStatusInfo;
      if ( !this )
        goto LABEL_133;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      return;
    case 4:
      v59 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !v59 )
        goto LABEL_133;
      UIExtrusionLabel__set_text(v59, (System_String_o *)this, 0LL);
      v60 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v60 )
        goto LABEL_133;
      UILabel__set_text(v60, (System_String_o *)this, 0LL);
      v61 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v61 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v16, v61->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v62);
      this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
      if ( !this )
        goto LABEL_133;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v90 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v15, v90, 0LL);
      v91 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v17, v91, 0LL);
      *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_white(0LL);
      v67 = (UIWidget_o *)Component_WebViewObject;
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
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
      }
      v9 = &currentLimitCntInfos->obj.klass + v7;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_B2C434(this, *(_QWORD *)&maxLimitCnt);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserServantEntity_o **p_baseSvtData; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *isLevelMax; // x0
  System_String_o *v17; // x1
  struct UserServantEntity_o *baseSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x21
  UILabel_o *currentMaxLvLb; // x21
  UIExtrusionLabel_o *v21; // x21
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x22
  Il2CppObject *v25; // x0
  UILabel_o *currentExpValLb; // x21
  UserServantEntity_o *v27; // x8
  int32_t v28; // w20
  __int64 v29; // x21
  __int64 v30; // x22
  int32_t v31; // w0
  const MethodInfo *v32; // x3
  struct UserServantEntity_o *v33; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v35; // x8
  UILabel_o *currentAtkLb; // x19
  float barExp[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 lateExp; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_41861CA & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, baseData);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_7269/*"IMPOSSIBLE_LIMITUP_COLOR"*/, v6);
    sub_B2C35C(&StringLiteral_340/*"#,0"*/, v7);
    sub_B2C35C(&StringLiteral_9266/*"N0"*/, v8);
    byte_41861CA = 1;
  }
  *(_QWORD *)barExp = 0LL;
  lateExp = 0LL;
  CombineInfoComponent__initCurrentStatusGrid(this, (const MethodInfo *)baseData);
  p_baseSvtData = &this->fields.baseSvtData;
  this->fields.baseSvtData = baseData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.baseSvtData,
    (System_Int32_array **)baseData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
      v17 = isLevelMax;
      goto LABEL_31;
    case 1:
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_45;
      v21 = this->fields.currentLvLb;
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
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7269/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_45;
        v22 = isLevelMax;
        v23 = (Il2CppObject *)System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
        isLevelMax = System_String__Format(v22, v23, 0LL);
      }
      v17 = isLevelMax;
      if ( !v21 )
        goto LABEL_45;
      UIExtrusionLabel__set_text(v21, isLevelMax, 0LL);
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
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7269/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_45;
        v24 = isLevelMax;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax(*p_baseSvtData, 0LL);
        v25 = (Il2CppObject *)System_Int32__ToString((int32_t)barExp, 0LL);
        isLevelMax = System_String__Format(v24, v25, 0LL);
      }
      else
      {
        isLevelMax = (System_String_o *)*p_baseSvtData;
        if ( !*p_baseSvtData )
          goto LABEL_45;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0LL);
        isLevelMax = System_Int32__ToString((int32_t)barExp, 0LL);
      }
      v17 = isLevelMax;
      if ( !currentMaxLvLb )
        goto LABEL_45;
LABEL_31:
      UILabel__set_text(currentMaxLvLb, v17, 0LL);
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
      isLevelMax = System_Int32__ToString_38381416((int32_t)&lateExp, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      if ( !currentExpValLb )
        goto LABEL_45;
      UILabel__set_text(currentExpValLb, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_45;
      isLevelMax = (System_String_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)isLevelMax, 0LL);
      v27 = *p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_45;
      v28 = (int)isLevelMax;
      v30 = *(_QWORD *)&v27->fields.limitCount.fields.currentCryptoKey;
      v29 = *(_QWORD *)&v27->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v39.fields.currentCryptoKey = v30;
      *(_QWORD *)&v39.fields.fakeValue = v29;
      v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v39, 0LL);
      CombineInfoComponent__setCurrentLimitCntInfo(this, v28, v31, v32);
      v33 = this->fields.baseSvtData;
      if ( !v33
        || (currentHpLb = this->fields.currentHpLb,
            isLevelMax = System_Int32__ToString_38381416((int)v33 + 268, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL),
            !currentHpLb)
        || (UILabel__set_text(currentHpLb, isLevelMax, 0LL), (v35 = this->fields.baseSvtData) == 0LL)
        || (currentAtkLb = this->fields.currentAtkLb,
            isLevelMax = System_Int32__ToString_38381416((int)v35 + 264, (System_String_o *)StringLiteral_9266/*"N0"*/, 0LL),
            !currentAtkLb) )
      {
LABEL_45:
        sub_B2C434(isLevelMax, v17);
      }
      UILabel__set_text(currentAtkLb, isLevelMax, 0LL);
      return;
    default:
      goto LABEL_32;
  }
}


void __fastcall CombineInfoComponent__setInitInfoLb(CombineInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *infoLb; // x19
  UILabel_o *infoLb2; // x0

  if ( (byte_41861C9 & 1) == 0 )
  {
    sub_B2C35C(&CombineInfoComponent_TypeInfo, method);
    sub_B2C35C(&StringLiteral_23840/*"レベル上限："*/, v3);
    byte_41861C9 = 1;
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
      UILabel__set_text(infoLb2, (System_String_o *)StringLiteral_23840/*"レベル上限："*/, 0LL);
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
        sub_B2C434(infoLb2, method);
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
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
      }
      v9 = &resLimitCntInfos->obj.klass + v7;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_B2C434(this, *(_QWORD *)&maxLimitCnt);
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
  sub_B2C2F8(v12, name);
  LODWORD(v12->monitor) = iconImageId;
  HIDWORD(v12->monitor) = count;
  v12->fields.itemId = acquiredCount;
}


void __fastcall CombineInfoComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CombineInfoComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4184F19 & 1) == 0 )
  {
    sub_B2C35C(&CombineInfoComponent___c_TypeInfo, v1);
    byte_4184F19 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CombineInfoComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CombineInfoComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, data);
  return data->fields.itemId == giftEntity->fields.objectId;
}