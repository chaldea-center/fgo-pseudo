void __fastcall CombineInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct CombineInfoComponent_StaticFields *static_fields; // x0
  void *v13; // x1
  CombineInfoComponent_c *v14; // x8
  struct CombineInfoComponent_StaticFields *v15; // x9
  struct CombineInfoComponent_StaticFields *v16; // x9
  int64_t v17; // x1
  struct CombineInfoComponent_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct CombineInfoComponent_StaticFields *v25; // x8

  if ( (byte_4B19A94 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineInfoComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_20384/*"icon_reward_get"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B19A94 = 1;
  }
  CombineInfoComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_BD3590;
  static_fields = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_NEW_SKILL_LABEL_WIDTH = 0x8C0000008CLL;
  static_fields->INFO_GET_ITEM_LABEL_2_WIDTH = 34;
  v13 = StringLiteral_1/*""*/;
  static_fields->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->INIT_VAL_TXT, (int64_t)v13, v2, v3, v4, v5, v6, v7);
  v14 = CombineInfoComponent_TypeInfo;
  v15 = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&v15->LIMIT_UP_GET_SKILL_INFO_POS.fields.x = 3246391296LL;
  v15->LIMIT_UP_GET_SKILL_INFO_POS.fields.z = 0.0;
  v16 = v14->static_fields;
  *(_QWORD *)&v16->LIMIT_UP_REWARD_INFO_POS.fields.x = 1127546880LL;
  v16->LIMIT_UP_REWARD_INFO_POS.fields.z = 0.0;
  v17 = StringLiteral_20384/*"icon_reward_get"*/;
  v18 = v14->static_fields;
  v18->LIMIT_UP_REWARD_GET_ICON_NAME = (struct System_String_o *)StringLiteral_20384/*"icon_reward_get"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v18->LIMIT_UP_REWARD_GET_ICON_NAME, v17, v19, v20, v21, v22, v23, v24);
  v25 = CombineInfoComponent_TypeInfo->static_fields;
  v25->LIMIT_UP_REWARD_GET_ICON_ID = 9;
  v25->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = (struct UnityEngine_Color_o)xmmword_BD2DF0;
}


void __fastcall CombineInfoComponent___ctor(CombineInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineInfoComponent__CheckAssertions(CombineInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall CombineInfoComponent__DispLimitUpReleaseSkillAndReward(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  CombineSvtData_o *v3; // x20
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  char *getSkillRewardObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v33; // x1
  CombineInfoComponent_c *v34; // x8
  UnityEngine_GameObject_o *v35; // x21
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x1
  UISprite_o *limitUpRewardGetIcon1; // x21
  System_String_o *LIMIT_UP_REWARD_GET_ICON_NAME; // x22
  UILabel_o *infoLb; // x21
  __int64 v41; // x1
  bool isLimitCountMax; // w22
  System_String_o *v43; // x22
  Il2CppObject *v44; // x23
  Il2CppObject *v45; // x0
  CombineInfoComponent_o *v46; // x0
  const MethodInfo *v47; // x2
  char *v48; // x21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  System_Text_StringBuilder_o *v52; // x22
  System_Text_StringBuilder_o *appended; // x0
  __int64 v54; // x1
  __int64 v55; // x8
  unsigned __int64 v56; // x24
  int32_t v57; // w23
  UILabel_o *infoLb2; // x23
  System_String_o *v59; // x24
  Il2CppObject *v60; // x0
  UILabel_o *v61; // x22
  _BOOL8 v62; // x0
  const MethodInfo *v63; // x4
  UnityEngine_GameObject_o *v64; // x0
  __int64 v65; // x1
  CombineInfoComponent_c *v66; // x8
  UnityEngine_GameObject_o *v67; // x21
  int32_t size; // w21
  ItemIconComponent_o *infoIcon3; // x20
  _BOOL4 v70; // w23
  __int64 v71; // x9
  int32_t v72; // w28
  UILabel_o *infoLb3; // x20
  System_String_o *v74; // x21
  Il2CppObject *v75; // x22
  Il2CppObject *v76; // x0
  UILabel_o *v77; // x20
  System_String_o *v78; // x21
  Il2CppObject *v79; // x0
  UILabel_o *v80; // x20
  ItemIconComponent_o *infoIcon4; // x20
  __int64 v82; // x9
  int32_t v83; // w22
  UILabel_o *infoLb4; // x20
  System_String_o *v85; // x21
  Il2CppObject *v86; // x0
  UILabel_o *v87; // x20
  UILabel_o *infoLb5; // x20
  UILabel_o *v89; // x20
  bool v90; // w1
  int32_t combineResSvtMaxLv; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t LevelMax; // [xsp+8h] [xbp-68h] BYREF
  bool isAllAcquired; // [xsp+Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *getItemInfoList; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = resSvtData;
  if ( (byte_4B19A91 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, resSvtData, method);
    sub_1BCA7E0(&CombineInfoComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Count__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_8711/*"MAX_LVUP_TXT"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_8377/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_8375/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_8379/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_8376/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_8378/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_8369/*"LIMITUP_MAX_TXT"*/, v29, v30);
    byte_4B19A91 = 1;
  }
  getItemInfoList = 0LL;
  isAllAcquired = 0;
  getSkillRewardObj = (char *)this->fields.getSkillRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0LL);
  v34 = CombineInfoComponent_TypeInfo;
  v35 = gameObject;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v33);
    v34 = CombineInfoComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v35, v34->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v36 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v36,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_INFO_POS,
    0LL);
  limitUpRewardGetIcon1 = this->fields.limitUpRewardGetIcon1;
  LIMIT_UP_REWARD_GET_ICON_NAME = CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_NAME;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v37);
  AtlasManager__SetEventUI(limitUpRewardGetIcon1, LIMIT_UP_REWARD_GET_ICON_NAME, 0LL);
  AtlasManager__SetEventUI(
    this->fields.limitUpRewardGetIcon2,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_NAME,
    0LL);
  AtlasManager__SetItem(
    this->fields.infoIcon2,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_ID,
    0LL);
  getSkillRewardObj = (char *)this->fields.infoLb;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UILabel__set_overflowMethod((UILabel_o *)getSkillRewardObj, 2, 0LL);
  getSkillRewardObj = (char *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  infoLb = this->fields.infoLb;
  isLimitCountMax = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0LL);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isLimitCountMax )
    {
LABEL_13:
      getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8369/*"LIMITUP_MAX_TXT"*/, 0LL);
      goto LABEL_18;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
    if ( isLimitCountMax )
      goto LABEL_13;
  }
  getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8711/*"MAX_LVUP_TXT"*/, 0LL);
  if ( !this->fields.baseSvtData )
    goto LABEL_133;
  v43 = (System_String_o *)getSkillRewardObj;
  LevelMax = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0LL);
  getSkillRewardObj = (char *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
  if ( !v3 )
    goto LABEL_133;
  v44 = (Il2CppObject *)getSkillRewardObj;
  combineResSvtMaxLv = v3->fields.combineResSvtMaxLv;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
  getSkillRewardObj = (char *)System_String__Format_62415592(v43, v44, v45, 0LL);
LABEL_18:
  resSvtData = (CombineSvtData_o *)getSkillRewardObj;
  if ( !infoLb )
    goto LABEL_133;
  UILabel__set_text(infoLb, (System_String_o *)getSkillRewardObj, 0LL);
  getSkillRewardObj = (char *)CombineInfoComponent__GetNewReleaseSkillNumList(v46, v3, v47);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v48 = getSkillRewardObj;
  if ( *((_QWORD *)getSkillRewardObj + 3) )
  {
    getSkillRewardObj = (char *)this->fields.infoLb2;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0LL);
    getSkillRewardObj = (char *)this->fields.infoIcon2;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0LL);
    v52 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v49, v50, v51);
    System_Text_StringBuilder___ctor(v52, 0LL);
    v55 = *((_QWORD *)v48 + 3);
    if ( (int)v55 >= 1 )
    {
      v56 = 0LL;
      v57 = (_DWORD)v48 + 32;
      do
      {
        if ( v56 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
          getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8378/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, 0LL);
          if ( !v52 )
            goto LABEL_133;
          appended = System_Text_StringBuilder__Append_61563116(v52, (System_String_o *)getSkillRewardObj, 0LL);
          LODWORD(v55) = *((_DWORD *)v48 + 6);
        }
        if ( v56 >= (unsigned int)v55 )
          sub_1BCAA44(appended, v54);
        getSkillRewardObj = (char *)System_Int32__ToString(v57, 0LL);
        if ( !v52 )
          goto LABEL_133;
        appended = System_Text_StringBuilder__Append_61563116(v52, (System_String_o *)getSkillRewardObj, 0LL);
        LODWORD(v55) = *((_DWORD *)v48 + 6);
        ++v56;
        v57 += 4;
      }
      while ( (__int64)v56 < (int)v55 );
    }
    infoLb2 = this->fields.infoLb2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8379/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, 0LL);
    if ( !v52 )
      goto LABEL_133;
    v59 = (System_String_o *)getSkillRewardObj;
    v60 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v52->klass->vtable._3_ToString.method)(
                            v52,
                            v52->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    getSkillRewardObj = (char *)System_String__Format(v59, v60, 0LL);
    if ( !infoLb2 )
      goto LABEL_133;
    UILabel__set_text(infoLb2, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v61 = this->fields.infoLb2;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
    if ( !v61 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v61, CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH, 0LL);
  }
  getSkillRewardObj = (char *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v62 = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0LL);
  if ( v62 )
    return;
  if ( !*((_QWORD *)v48 + 3) )
  {
    getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v64 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0LL);
    v66 = CombineInfoComponent_TypeInfo;
    v67 = v64;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v65);
      v66 = CombineInfoComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v67, v66->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  }
  CombineInfoComponent__GetLimitCountUpReward((CombineInfoComponent_o *)v62, v3, &getItemInfoList, &isAllAcquired, v63);
  if ( !getItemInfoList )
    goto LABEL_133;
  size = getItemInfoList->fields._size;
  if ( size < 1 )
    return;
  getSkillRewardObj = (char *)this->fields.infoLb3;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0LL);
  getSkillRewardObj = (char *)this->fields.infoIcon3;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0LL);
  getSkillRewardObj = (char *)getItemInfoList;
  if ( !getItemInfoList
    || (infoIcon3 = this->fields.infoIcon3,
        (getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)getItemInfoList,
                                       0,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__)) == 0LL)
    || !infoIcon3
    || (ItemIconComponent__SetGift_38855180(infoIcon3, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0LL),
        (getSkillRewardObj = (char *)getItemInfoList) == 0LL)
    || (v70 = isAllAcquired,
        (getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)getItemInfoList,
                                       0,
                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__)) == 0LL) )
  {
LABEL_133:
    sub_1BCAA3C(getSkillRewardObj, resSvtData);
  }
  v71 = 40LL;
  if ( !v70 )
    v71 = 36LL;
  v72 = *(_DWORD *)&getSkillRewardObj[v71];
  infoLb3 = this->fields.infoLb3;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, resSvtData);
  if ( size == 1 )
  {
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8375/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, 0LL);
    if ( !getItemInfoList )
      goto LABEL_133;
    v74 = (System_String_o *)getSkillRewardObj;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  0,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v75 = (Il2CppObject *)*((_QWORD *)getSkillRewardObj + 3);
    LevelMax = v72;
    v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (char *)System_String__Format_62415592(v74, v75, v76, 0LL);
    if ( !infoLb3 )
      goto LABEL_133;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v77 = this->fields.infoLb3;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
    if ( !v77 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v77, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH, 0LL);
  }
  else
  {
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8376/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v72;
    v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (char *)System_String__Format(v78, v79, 0LL);
    if ( !infoLb3 )
      goto LABEL_133;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v80 = this->fields.infoLb3;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
    if ( !v80 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v80, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
    getSkillRewardObj = (char *)this->fields.infoLb4;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0LL);
    getSkillRewardObj = (char *)this->fields.infoIcon4;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0LL);
    getSkillRewardObj = (char *)getItemInfoList;
    if ( !getItemInfoList )
      goto LABEL_133;
    infoIcon4 = this->fields.infoIcon4;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  1,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    if ( !infoIcon4 )
      goto LABEL_133;
    ItemIconComponent__SetGift_38855180(infoIcon4, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0LL);
    getSkillRewardObj = (char *)getItemInfoList;
    if ( !getItemInfoList )
      goto LABEL_133;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  1,
                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v82 = 40LL;
    if ( !v70 )
      v82 = 36LL;
    v83 = *(_DWORD *)&getSkillRewardObj[v82];
    infoLb4 = this->fields.infoLb4;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, resSvtData);
    v85 = LocalizationManager__Get((System_String_o *)StringLiteral_8376/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v83;
    v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (char *)System_String__Format(v85, v86, 0LL);
    if ( !infoLb4 )
      goto LABEL_133;
    UILabel__set_text(infoLb4, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v87 = this->fields.infoLb4;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
    if ( !v87 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v87, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
    getSkillRewardObj = (char *)this->fields.infoLb5;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0LL);
    infoLb5 = this->fields.infoLb5;
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8377/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, 0LL);
    if ( !infoLb5 )
      goto LABEL_133;
    UILabel__set_text(infoLb5, (System_String_o *)getSkillRewardObj, 0LL);
  }
  getSkillRewardObj = (char *)this->fields.infoIcon3;
  if ( !v70 )
  {
    if ( getSkillRewardObj )
    {
      v100.fields.r = 1.0;
      v100.fields.g = 1.0;
      v100.fields.b = 1.0;
      v100.fields.a = 1.0;
      ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v100, 0LL);
      getSkillRewardObj = (char *)this->fields.infoIcon4;
      if ( getSkillRewardObj )
      {
        v101.fields.r = 1.0;
        v101.fields.g = 1.0;
        v101.fields.b = 1.0;
        v101.fields.a = 1.0;
        ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v101, 0LL);
        getSkillRewardObj = (char *)this->fields.infoLb3;
        if ( getSkillRewardObj )
        {
          v102.fields.r = 1.0;
          v102.fields.g = 1.0;
          v102.fields.b = 1.0;
          v102.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v102, 0LL);
          getSkillRewardObj = (char *)this->fields.infoLb4;
          if ( getSkillRewardObj )
          {
            v103.fields.r = 1.0;
            v103.fields.g = 1.0;
            v103.fields.b = 1.0;
            v103.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v103, 0LL);
            getSkillRewardObj = (char *)this->fields.infoLb5;
            if ( getSkillRewardObj )
            {
              v104.fields.r = 1.0;
              v104.fields.g = 1.0;
              v104.fields.b = 1.0;
              v104.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v104, 0LL);
              getSkillRewardObj = (char *)this->fields.infoLb3;
              if ( getSkillRewardObj )
              {
                v105.fields.r = 0.0;
                v105.fields.g = 0.0;
                v105.fields.b = 0.0;
                v105.fields.a = 1.0;
                UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v105, 0LL);
                getSkillRewardObj = (char *)this->fields.infoLb4;
                if ( getSkillRewardObj )
                {
                  v106.fields.r = 0.0;
                  v106.fields.g = 0.0;
                  v106.fields.b = 0.0;
                  v106.fields.a = 1.0;
                  UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v106, 0LL);
                  getSkillRewardObj = (char *)this->fields.infoLb5;
                  if ( getSkillRewardObj )
                  {
                    v107.fields.r = 0.0;
                    v107.fields.g = 0.0;
                    v107.fields.b = 0.0;
                    v107.fields.a = 1.0;
                    UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v107, 0LL);
                    getSkillRewardObj = (char *)this->fields.limitUpRewardGetIcon1;
                    if ( getSkillRewardObj )
                    {
                      getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)getSkillRewardObj,
                                                    0LL);
                      if ( getSkillRewardObj )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 0, 0LL);
                        if ( getItemInfoList )
                        {
                          if ( getItemInfoList->fields._size < 2 )
                            return;
                          getSkillRewardObj = (char *)this->fields.limitUpRewardGetIcon2;
                          if ( getSkillRewardObj )
                          {
                            getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)getSkillRewardObj,
                                                          0LL);
                            if ( getSkillRewardObj )
                            {
                              v90 = 0;
                              goto LABEL_131;
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
    goto LABEL_133;
  }
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v95.fields.r = 0.5;
  v95.fields.g = 0.5;
  v95.fields.b = 0.5;
  v95.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v95, 0LL);
  getSkillRewardObj = (char *)this->fields.infoIcon4;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v96.fields.r = 0.5;
  v96.fields.g = 0.5;
  v96.fields.b = 0.5;
  v96.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v96, 0LL);
  getSkillRewardObj = (char *)this->fields.infoLb3;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v97.fields.r = 0.5;
  v97.fields.g = 0.5;
  v97.fields.b = 0.5;
  v97.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v97, 0LL);
  getSkillRewardObj = (char *)this->fields.infoLb4;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v98.fields.r = 0.5;
  v98.fields.g = 0.5;
  v98.fields.b = 0.5;
  v98.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v98, 0LL);
  getSkillRewardObj = (char *)this->fields.infoLb5;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v99.fields.r = 0.5;
  v99.fields.g = 0.5;
  v99.fields.b = 0.5;
  v99.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v99, 0LL);
  getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  v89 = this->fields.infoLb3;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  }
  if ( !v89 )
    goto LABEL_133;
  UILabel__set_effectColor(v89, *(UnityEngine_Color_o *)(*((_QWORD *)getSkillRewardObj + 23) + 76LL), 0LL);
  getSkillRewardObj = (char *)this->fields.infoLb4;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UILabel__set_effectColor(
    (UILabel_o *)getSkillRewardObj,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0LL);
  getSkillRewardObj = (char *)this->fields.infoLb5;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UILabel__set_effectColor(
    (UILabel_o *)getSkillRewardObj,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0LL);
  getSkillRewardObj = (char *)this->fields.limitUpRewardGetIcon1;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0LL);
  if ( !getItemInfoList )
    goto LABEL_133;
  if ( getItemInfoList->fields._size < 2 )
    return;
  getSkillRewardObj = (char *)this->fields.limitUpRewardGetIcon2;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v90 = 1;
LABEL_131:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, v90, 0LL);
}


void __fastcall CombineInfoComponent__GetLimitCountUpReward(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **getItemInfoList,
        bool *isAllAcquired,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_object__o *v42; // x22
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  __int64 v49; // x1
  __int64 v50; // x1
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  __int64 v53; // x1
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **v54; // x20
  struct UserServantEntity_o *baseSvtData; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v56; // x29
  int64_t v57; // x23
  __int64 v58; // x24
  __int64 v59; // x25
  Il2CppObject *v60; // x23
  Il2CppObject *v61; // x24
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  System_Collections_Generic_List_object__o *v65; // x0
  __int64 v66; // x2
  __int64 v67; // x3
  int v68; // w25
  __int64 v69; // x27
  struct UserServantEntity_o *v70; // x8
  __int64 v71; // x26
  __int64 v72; // x28
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t *v79; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v81; // x19
  System_Func_object__bool__o *v82; // x29
  int v83; // w20
  System_String_o *v84; // x28
  int32_t IconImageId; // w29
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  int64_t v89; // x27
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  __int64 v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  __int64 v105; // x8
  System_Collections_Generic_List_object__o *v106; // x19
  System_Predicate_object__o *v107; // x20
  Il2CppObject *v108; // x21
  struct CombineInfoComponent___c_StaticFields *static_fields; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+10h] [xbp-80h]
  System_String_o *countText; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v121; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16

  if ( (byte_4B19A93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, resSvtData, getItemInfoList);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v8, v9);
    sub_1BCA7E0(&DataManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___, v12, v13);
    sub_1BCA7E0(&System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo, v14, v15);
    sub_1BCA7E0(&CombineInfoComponent_GetItemInfo_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo, v24, v25);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, v32, v33);
    sub_1BCA7E0(&Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__, v34, v35);
    sub_1BCA7E0(&CombineInfoComponent___c__DisplayClass56_0_TypeInfo, v36, v37);
    sub_1BCA7E0(&CombineInfoComponent___c_TypeInfo, v38, v39);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v40, v41);
    byte_4B19A93 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v42 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo,
                                                       resSvtData,
                                                       getItemInfoList,
                                                       isAllAcquired);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  *getItemInfoList = (System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *)v42;
  sub_1BCA784((PartyOrganizationUtility_o *)getItemInfoList, (int64_t)v42, v43, v44, v45, v46, v47, v48);
  *isAllAcquired = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v49);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v50);
  UserId = NetworkManager__get_UserId(0LL);
  v54 = getItemInfoList;
  if ( !resSvtData )
    goto LABEL_53;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_53;
  v56 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v57 = UserId;
  v59 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v58 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v53);
  *(_QWORD *)&v121.fields.currentCryptoKey = v59;
  *(_QWORD *)&v121.fields.fakeValue = v58;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v121, 0LL);
  if ( !Master_object )
    goto LABEL_53;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       v57,
                       UserId,
                       0LL);
  v60 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v61 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
  v65 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo,
                                                       v62,
                                                       v63,
                                                       v64);
  System_Collections_Generic_List_object____ctor(
    v65,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  UserId = (int64_t)resSvtData->fields.baseSvtData;
  if ( !UserId )
    goto LABEL_53;
  v68 = UserServantEntity__getLimitCount((UserServantEntity_o *)UserId, 0LL) + 1;
  if ( v68 <= resSvtData->fields.combineResLimitCnt )
  {
    while ( 1 )
    {
      v69 = sub_1BCAA2C(CombineInfoComponent___c__DisplayClass56_0_TypeInfo, v53, v66, v67);
      System_Object___ctor((Il2CppObject *)v69, 0LL);
      v70 = resSvtData->fields.baseSvtData;
      if ( !v70 )
        break;
      v72 = *(_QWORD *)&v70->fields.svtId.fields.currentCryptoKey;
      v71 = *(_QWORD *)&v70->fields.svtId.fields.fakeValue;
      if ( !(*v56)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v56, v53);
      *(_QWORD *)&v122.fields.currentCryptoKey = v72;
      *(_QWORD *)&v122.fields.fakeValue = v71;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v122, 0LL);
      if ( !v60 )
        break;
      UserId = CombineLimitGiftMaster__GetCombineLimitGiftId((CombineLimitGiftMaster_o *)v60, UserId, v68, 0LL);
      if ( (_DWORD)UserId )
      {
        if ( !v61 )
          break;
        UserId = (int64_t)GiftMaster__getDataById((GiftMaster_o *)v61, UserId, 0LL);
        if ( !v69 )
          break;
        *(_QWORD *)(v69 + 16) = UserId;
        v79 = (int64_t *)(v69 + 16);
        sub_1BCA784((PartyOrganizationUtility_o *)(v69 + 16), UserId, v73, v74, v75, v76, v77, v78);
        if ( *(_QWORD *)(v69 + 16) )
        {
          v80 = (System_Collections_Generic_IEnumerable_TSource__o *)*v54;
          v81 = v56;
          v82 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                 System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo,
                                                 v53,
                                                 v66,
                                                 v67);
          System_Func_object__bool____ctor(
            v82,
            (Il2CppObject *)v69,
            Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__,
            0LL);
          UserId = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                              v80,
                              (System_Func_TSource__bool__o *)v82,
                              (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
          if ( UserId )
          {
            if ( EntityDefinitely && v68 <= EntityDefinitely->fields.maxLimitCount )
            {
              if ( !*v79 )
                break;
              v56 = v81;
              *(_DWORD *)(UserId + 40) += *(_DWORD *)(*v79 + 28);
            }
            else
            {
              *isAllAcquired = 0;
              if ( !*v79 )
                break;
              v56 = v81;
              *(_DWORD *)(UserId + 36) += *(_DWORD *)(*v79 + 28);
            }
          }
          else
          {
            countText = (System_String_o *)StringLiteral_1/*""*/;
            nameText = (System_String_o *)StringLiteral_1/*""*/;
            UserId = *v79;
            if ( !*v79 )
              break;
            GiftEntity__GetInfo((GiftEntity_o *)UserId, &nameText, &countText, 0LL);
            UserId = *v79;
            if ( !*v79 )
              break;
            v83 = *(_DWORD *)(UserId + 24);
            v84 = nameText;
            IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)UserId, 0LL);
            v89 = sub_1BCAA2C(CombineInfoComponent_GetItemInfo_TypeInfo, v86, v87, v88);
            System_Object___ctor((Il2CppObject *)v89, 0LL);
            *(_DWORD *)(v89 + 16) = v83;
            *(_QWORD *)(v89 + 24) = v84;
            sub_1BCA784((PartyOrganizationUtility_o *)(v89 + 24), (int64_t)v84, v90, v91, v92, v93, v94, v95);
            *(_DWORD *)(v89 + 36) = 0;
            *(_DWORD *)(v89 + 40) = 0;
            *(_DWORD *)(v89 + 32) = IconImageId;
            if ( !EntityDefinitely )
              goto LABEL_31;
            if ( v68 <= EntityDefinitely->fields.maxLimitCount )
            {
              v54 = getItemInfoList;
              if ( !*v79 )
                break;
              v56 = v81;
              *(_DWORD *)(v89 + 40) = *(_DWORD *)(*v79 + 28);
            }
            else
            {
LABEL_31:
              v54 = getItemInfoList;
              *isAllAcquired = 0;
              if ( !*v79 )
                break;
              v56 = v81;
              *(_DWORD *)(v89 + 36) += *(_DWORD *)(*v79 + 28);
            }
            UserId = (int64_t)*v54;
            if ( !*v54 )
              break;
            v102 = *(_QWORD *)(UserId + 16);
            v103 = Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__;
            ++*(_DWORD *)(UserId + 28);
            if ( !v102 )
              break;
            v104 = *(int *)(UserId + 24);
            if ( (unsigned int)v104 >= *(_DWORD *)(v102 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)UserId,
                (Il2CppObject *)v89,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
            }
            else
            {
              v105 = v102 + 8 * v104;
              *(_DWORD *)(UserId + 24) = v104 + 1;
              *(_QWORD *)(v105 + 32) = v89;
              sub_1BCA784((PartyOrganizationUtility_o *)(v105 + 32), v89, v96, v97, v98, v99, v100, v101);
            }
          }
        }
      }
      if ( ++v68 > resSvtData->fields.combineResLimitCnt )
        goto LABEL_43;
    }
LABEL_53:
    sub_1BCAA3C(UserId, v53);
  }
LABEL_43:
  if ( !*isAllAcquired )
  {
    v106 = (System_Collections_Generic_List_object__o *)*v54;
    UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
    if ( !CombineInfoComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent___c_TypeInfo, v53);
      UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
    }
    v107 = *(System_Predicate_object__o **)(*(_QWORD *)(UserId + 184) + 8LL);
    if ( !v107 )
    {
      if ( !*(_DWORD *)(UserId + 224) )
      {
        j_il2cpp_runtime_class_init_0(UserId, v53);
        UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
      }
      v108 = **(Il2CppObject ***)(UserId + 184);
      v107 = (System_Predicate_object__o *)sub_1BCAA2C(
                                             System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo,
                                             v53,
                                             v66,
                                             v67);
      System_Predicate_object____ctor(v107, v108, Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, 0LL);
      static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Predicate_CombineInfoComponent_GetItemInfo__o *)v107;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__56_0,
        (int64_t)v107,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115);
    }
    if ( !v106 )
      goto LABEL_53;
    System_Collections_Generic_List_object___RemoveAll(
      v106,
      (System_Predicate_T__o *)v107,
      (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
  }
}


System_Int32_array *__fastcall CombineInfoComponent__GetNewReleaseSkillNumList(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x19
  UserServantEntity_o *v12; // x0
  __int64 v13; // x1
  UserServantEntity_o *baseSvtData; // x21
  int32_t combineResSvtLv; // w22
  int32_t LimitCount; // w0
  System_Int32_array *v17; // x8
  __int64 v18; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v20; // x10
  struct System_Int32_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  System_String_array *v25; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *v26; // [xsp+10h] [xbp-40h] BYREF
  System_String_array *skillNameList; // [xsp+18h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4B19A92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, resSvtData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B19A92 = 1;
  }
  idList = 0LL;
  v26 = 0LL;
  skillNameList = 0LL;
  v25 = 0LL;
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    resSvtData,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !resSvtData )
    goto LABEL_23;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_23;
  combineResSvtLv = resSvtData->fields.combineResSvtLv;
  LimitCount = UserServantEntity__getLimitCount(resSvtData->fields.baseSvtData, 0LL);
  UserServantEntity__getNextUseSkillInfo(baseSvtData, &idList, &skillNameList, combineResSvtLv, LimitCount, 1, 0LL);
  v12 = resSvtData->fields.baseSvtData;
  if ( !v12 )
    goto LABEL_23;
  UserServantEntity__getNextUseSkillInfo(
    v12,
    &v26,
    &v25,
    resSvtData->fields.combineResSvtLv,
    resSvtData->fields.combineResLimitCnt,
    0,
    0LL);
  v17 = v26;
  if ( !v26 )
    goto LABEL_23;
  v18 = 8LL;
  while ( 1 )
  {
    max_length = v17->max_length;
    v20 = v18 - 8;
    if ( v18 - 8 >= (int)max_length )
      break;
    if ( !idList )
      goto LABEL_23;
    if ( v20 >= idList->max_length )
LABEL_24:
      sub_1BCAA44(v12, v13);
    if ( !*((_DWORD *)&idList->obj.klass + v18) )
    {
      if ( v20 >= max_length )
        goto LABEL_24;
      if ( *((_DWORD *)&v17->obj.klass + v18) )
      {
        if ( !v11 )
          goto LABEL_23;
        items = v11->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            v18 - 7,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          v17 = v26;
        }
        else
        {
          v11->fields._size = size + 1;
          items->m_Items[size + 1] = v18 - 7;
        }
      }
    }
    ++v18;
    if ( !v17 )
      goto LABEL_23;
  }
  if ( !v11 )
LABEL_23:
    sub_1BCAA3C(v12, v13);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall CombineInfoComponent__HideResStatusInfo(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resStatusInfo; // x0

  resStatusInfo = this->fields.resStatusInfo;
  if ( !resStatusInfo )
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(resStatusInfo, 0, 0LL);
}


void __fastcall CombineInfoComponent__initCurrentStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  struct SetLimitCntInfoComponent_array *currentLimitCntInfos; // x8
  int max_length; // w20
  CombineInfoComponent_o *v4; // x19
  il2cpp_array_size_t v5; // w21

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
        sub_1BCAA44(this, method);
      this = (CombineInfoComponent_o *)currentLimitCntInfos->m_Items[v5];
      if ( !this )
        break;
      this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( max_length == ++v5 )
        return;
      currentLimitCntInfos = v4->fields.currentLimitCntInfos;
    }
    while ( currentLimitCntInfos );
LABEL_9:
    sub_1BCAA3C(this, method);
  }
}


void __fastcall CombineInfoComponent__initResStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  struct SetLimitCntInfoComponent_array *resLimitCntInfos; // x8
  int max_length; // w20
  CombineInfoComponent_o *v4; // x19
  il2cpp_array_size_t v5; // w21

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
        sub_1BCAA44(this, method);
      this = (CombineInfoComponent_o *)resLimitCntInfos->m_Items[v5];
      if ( !this )
        break;
      this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( max_length == ++v5 )
        return;
      resLimitCntInfos = v4->fields.resLimitCntInfos;
    }
    while ( resLimitCntInfos );
LABEL_9:
    sub_1BCAA3C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__initStatusInfo(
        CombineInfoComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *currentMaxLvLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x21
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  BalanceConfig_c *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4B19A8D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&type, method);
    sub_1BCA7E0(&CombineInfoComponent_TypeInfo, v5, v6);
    byte_4B19A8D = 1;
  }
  currentMaxLvLb = (UILabel_o *)CombineInfoComponent_TypeInfo;
  currentLvLb = this->fields.currentLvLb;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, *(_QWORD *)&type);
  if ( !currentLvLb )
    goto LABEL_17;
  UIExtrusionLabel__set_text(currentLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_17;
  UILabel__set_text(currentMaxLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  currentMaxLvLb = (UILabel_o *)this->fields.currentExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_17;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0LL);
  currentMaxLvLb = this->fields.currentExpValLb;
  if ( !currentMaxLvLb )
    goto LABEL_17;
  UILabel__set_text(currentMaxLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  CombineInfoComponent__initCurrentStatusGrid(this, v9);
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
    v12 = BalanceConfig_TypeInfo;
  }
  CombineInfoComponent__setCurrentLimitCntInfo(this, v12->static_fields->ServantLimitMax, 0, v11);
  currentMaxLvLb = (UILabel_o *)this->fields.levelUpInfo;
  if ( !currentMaxLvLb )
    goto LABEL_17;
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
LABEL_17:
    sub_1BCAA3C(currentMaxLvLb, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMaxLvLb, 0, 0LL);
  this->fields.dispType = type;
  CombineInfoComponent__setInitInfoLb(this, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__setCombineResStatusInfo(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  CombineInfoComponent_o *v4; // x19
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
  struct UserServantEntity_o *baseSvtData; // x21
  int32_t lv; // w26
  UIWidget_o *v23; // x22
  UIWidget_o *v24; // x25
  UIWidget_o *v25; // x23
  UIWidget_o *v26; // x24
  int v27; // w26
  bool v28; // w1
  __int64 v29; // x26
  __int64 v30; // x27
  int32_t combineResLimitCnt; // w26
  bool v32; // w1
  float combineResExpBarVal; // s0
  __int64 v34; // x1
  CombineInfoComponent_c *v35; // x0
  UIExtrusionLabel_o *resLvLb; // x25
  UILabel_o *resMaxLvLb; // x25
  UIExtrusionLabel_o *v38; // x26
  UILabel_o *v39; // x26
  __int64 v40; // x1
  CombineInfoComponent_c *v41; // x0
  const MethodInfo *v42; // x2
  UILabel_o *resExpValLb; // x25
  UIExtrusionLabel_o *v44; // x26
  UILabel_o *v45; // x27
  __int64 v46; // x1
  __int64 v47; // x27
  __int64 v48; // x28
  __int64 v49; // x1
  bool isLevelMax; // w0
  System_String_o *INIT_VAL_TXT; // x1
  UIExtrusionLabel_o *v52; // x26
  UILabel_o *v53; // x26
  __int64 v54; // x1
  CombineInfoComponent_c *v55; // x0
  const MethodInfo *v56; // x2
  float v57; // s0
  float v58; // s1
  float v59; // s2
  float v60; // s3
  UIWidget_o *v61; // x0
  UILabel_o *infoLb; // x27
  System_String_o *v63; // x28
  Il2CppObject *v64; // x29
  Il2CppObject *v65; // x0
  __int64 v66; // x1
  CombineInfoComponent_c *v67; // x0
  float *p_r; // x8
  int32_t LimitCntMax; // w0
  const MethodInfo *v70; // x3
  UILabel_o *resHpLb; // x25
  __int64 v72; // x1
  CombineInfoComponent_c *v73; // x0
  UILabel_o *resAtkLb; // x20
  CombineInfoComponent_c *v75; // x0
  int32_t combineResSvtMaxLv; // [xsp+8h] [xbp-88h] BYREF
  int32_t LevelMax; // [xsp+Ch] [xbp-84h] BYREF
  __int64 v78; // [xsp+10h] [xbp-80h] BYREF
  __int64 v79; // [xsp+18h] [xbp-78h] BYREF
  __int64 barExp; // [xsp+20h] [xbp-70h] BYREF
  int32_t exp; // [xsp+28h] [xbp-68h] BYREF
  int32_t combineResSvtLv; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v83; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4B19A90 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineInfoComponent_TypeInfo, resSvtData, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_8711/*"MAX_LVUP_TXT"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v17, v18);
    this = (CombineInfoComponent_o *)sub_1BCA7E0(&StringLiteral_12626/*"SVTEQ_LVMAX_INFO_TXT"*/, v19, v20);
    byte_4B19A90 = 1;
  }
  exp = 0;
  v79 = 0LL;
  barExp = 0LL;
  v78 = 0LL;
  if ( !resSvtData )
    goto LABEL_117;
  baseSvtData = resSvtData->fields.baseSvtData;
  CombineInfoComponent__initResStatusGrid(v4, (const MethodInfo *)resSvtData);
  if ( !baseSvtData )
    goto LABEL_117;
  lv = baseSvtData->fields.lv;
  combineResSvtLv = resSvtData->fields.combineResSvtLv;
  this = (CombineInfoComponent_o *)v4->fields.baseSvtData;
  if ( !this )
    goto LABEL_117;
  UserServantEntity__getExpInfo((UserServantEntity_o *)this, &exp, (int32_t *)&barExp + 1, (float *)&barExp, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
  if ( !this )
    goto LABEL_117;
  UIProgressBar__set_value((UIProgressBar_o *)this, *(float *)&barExp, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resLvLb;
  if ( !this )
    goto LABEL_117;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resMaxLvLb )
    goto LABEL_117;
  v23 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resMaxLvLb,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resHpLb )
    goto LABEL_117;
  v24 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resHpLb,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resAtkLb )
    goto LABEL_117;
  v25 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resAtkLb,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v23 )
    goto LABEL_117;
  v26 = (UIWidget_o *)this;
  v85.fields.r = 1.0;
  v85.fields.g = 1.0;
  v85.fields.b = 1.0;
  v85.fields.a = 1.0;
  UIWidget__set_color(v23, v85, 0LL);
  if ( !v24 )
    goto LABEL_117;
  v86.fields.r = 1.0;
  v86.fields.g = 1.0;
  v86.fields.b = 1.0;
  v86.fields.a = 1.0;
  UIWidget__set_color(v24, v86, 0LL);
  if ( !v25 )
    goto LABEL_117;
  v87.fields.r = 1.0;
  v87.fields.g = 1.0;
  v87.fields.b = 1.0;
  v87.fields.a = 1.0;
  UIWidget__set_color(v25, v87, 0LL);
  if ( !v26 )
    goto LABEL_117;
  v88.fields.r = 1.0;
  v88.fields.g = 1.0;
  v88.fields.b = 1.0;
  v88.fields.a = 1.0;
  UIWidget__set_color(v26, v88, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb;
  if ( !this )
    goto LABEL_117;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb2;
  if ( !this )
    goto LABEL_117;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb3;
  if ( !this )
    goto LABEL_117;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb4;
  if ( !this )
    goto LABEL_117;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon2;
  if ( !this )
    goto LABEL_117;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon3;
  if ( !this )
    goto LABEL_117;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon4;
  if ( !this )
    goto LABEL_117;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v27 = combineResSvtLv - lv;
  if ( v27 < 1 )
  {
    if ( v4->fields.dispType == 2 )
    {
      v30 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v29 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, resSvtData);
      *(_QWORD *)&v83.fields.currentCryptoKey = v30;
      *(_QWORD *)&v83.fields.fakeValue = v29;
      HIDWORD(v78) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v83, 0LL);
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_117;
      combineResLimitCnt = resSvtData->fields.combineResLimitCnt;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
      if ( !System_Int32__Equals_63206656((int32_t)&v78 + 4, combineResLimitCnt, 0LL)
        && UserServantEntity__isLevelMax(baseSvtData, 0LL) )
      {
        this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
        if ( !this )
          goto LABEL_117;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_117;
        v32 = 0;
LABEL_51:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v32, 0LL);
        this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
        if ( !this )
          goto LABEL_117;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
        if ( !this )
          goto LABEL_117;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        goto LABEL_65;
      }
    }
    else
    {
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_117;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
    }
    this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
    if ( !this )
      goto LABEL_117;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_117;
    v32 = 1;
    goto LABEL_51;
  }
  this = (CombineInfoComponent_o *)v4->fields.resExpBar;
  if ( !this )
    goto LABEL_117;
  UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
  if ( combineResSvtLv != resSvtData->fields.combineResSvtMaxLv )
  {
    if ( !this )
      goto LABEL_117;
    combineResExpBarVal = resSvtData->fields.combineResExpBarVal;
    goto LABEL_56;
  }
  if ( !this )
    goto LABEL_117;
  if ( v27 != 1 )
  {
    combineResExpBarVal = 1.0;
LABEL_56:
    UIProgressBar__set_value((UIProgressBar_o *)this, combineResExpBarVal, 0LL);
    this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
    if ( !this )
      goto LABEL_117;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_117;
    v28 = 1;
    goto LABEL_59;
  }
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  v28 = 0;
LABEL_59:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v28, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
  if ( !this )
    goto LABEL_117;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v35 = CombineInfoComponent_TypeInfo;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v34);
    v35 = CombineInfoComponent_TypeInfo;
  }
  UIWidget__set_color(v23, v35->static_fields->COLOR_VAL, 0LL);
LABEL_65:
  switch ( v4->fields.dispType )
  {
    case 0:
      resLvLb = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0LL);
      if ( !resLvLb )
        goto LABEL_117;
      UIExtrusionLabel__set_text(resLvLb, (System_String_o *)this, 0LL);
      resMaxLvLb = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !resMaxLvLb )
        goto LABEL_117;
      UILabel__set_text(resMaxLvLb, (System_String_o *)this, 0LL);
      goto LABEL_80;
    case 1:
      v38 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !v38 )
        goto LABEL_117;
      UIExtrusionLabel__set_text(v38, (System_String_o *)this, 0LL);
      v39 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v39 )
        goto LABEL_117;
      UILabel__set_text(v39, (System_String_o *)this, 0LL);
      v41 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v40);
        v41 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v24, v41->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v42);
      resExpValLb = v4->fields.resExpValLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_63206828(
                                         (int)resSvtData + 40,
                                         (System_String_o *)StringLiteral_424/*"#,0"*/,
                                         0LL);
      if ( !resExpValLb )
        goto LABEL_117;
      goto LABEL_84;
    case 2:
      v44 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0LL);
      if ( !v44 )
        goto LABEL_117;
      UIExtrusionLabel__set_text(v44, (System_String_o *)this, 0LL);
      v45 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v45 )
        goto LABEL_117;
      UILabel__set_text(v45, (System_String_o *)this, 0LL);
      v48 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v47 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v46);
      *(_QWORD *)&v84.fields.currentCryptoKey = v48;
      *(_QWORD *)&v84.fields.fakeValue = v47;
      LODWORD(v78) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v84, 0LL);
      if ( System_Int32__Equals_63206656((int32_t)&v78, resSvtData->fields.combineResLimitCnt, 0LL) )
      {
LABEL_80:
        isLevelMax = UserServantEntity__isLevelMax(baseSvtData, 0LL);
        resExpValLb = v4->fields.infoLb;
        if ( isLevelMax )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, resSvtData);
          this = (CombineInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12626/*"SVTEQ_LVMAX_INFO_TXT"*/, 0LL);
          if ( resExpValLb )
          {
LABEL_84:
            INIT_VAL_TXT = (System_String_o *)this;
LABEL_95:
            UILabel__set_text(resExpValLb, INIT_VAL_TXT, 0LL);
            goto LABEL_103;
          }
        }
        else
        {
          this = (CombineInfoComponent_o *)CombineInfoComponent_TypeInfo;
          if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
          if ( resExpValLb )
          {
            INIT_VAL_TXT = CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT;
            goto LABEL_95;
          }
        }
LABEL_117:
        sub_1BCAA3C(this, resSvtData);
      }
      infoLb = v4->fields.infoLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v49);
      v63 = LocalizationManager__Get((System_String_o *)StringLiteral_8711/*"MAX_LVUP_TXT"*/, 0LL);
      LevelMax = UserServantEntity__getLevelMax(baseSvtData, 0LL);
      v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
      combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
      v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
      this = (CombineInfoComponent_o *)System_String__Format_62415592(v63, v64, v65, 0LL);
      if ( !infoLb )
        goto LABEL_117;
      UILabel__set_text(infoLb, (System_String_o *)this, 0LL);
      v67 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v66);
        v67 = CombineInfoComponent_TypeInfo;
      }
      p_r = &v67->static_fields->COLOR_VAL.fields.r;
      v61 = v24;
      v57 = *p_r;
      v58 = p_r[1];
      v59 = p_r[2];
      v60 = p_r[3];
LABEL_102:
      UIWidget__set_color(v61, *(UnityEngine_Color_o *)&v57, 0LL);
LABEL_103:
      LimitCntMax = UserServantEntity__getLimitCntMax(baseSvtData, 0LL);
      CombineInfoComponent__setResLimitCntInfo(v4, LimitCntMax, resSvtData->fields.combineResLimitCnt, v70);
      HIDWORD(v79) = resSvtData->fields.combineResHp;
      resHpLb = v4->fields.resHpLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_63206828(
                                         (int32_t)&v79 + 4,
                                         (System_String_o *)StringLiteral_9337/*"N0"*/,
                                         0LL);
      if ( !resHpLb )
        goto LABEL_117;
      UILabel__set_text(resHpLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.hp != HIDWORD(v79) )
      {
        v73 = CombineInfoComponent_TypeInfo;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v72);
          v73 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v25, v73->static_fields->COLOR_VAL, 0LL);
      }
      LODWORD(v79) = resSvtData->fields.combineResAtk;
      resAtkLb = v4->fields.resAtkLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_63206828(
                                         (int32_t)&v79,
                                         (System_String_o *)StringLiteral_9337/*"N0"*/,
                                         0LL);
      if ( !resAtkLb )
        goto LABEL_117;
      UILabel__set_text(resAtkLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.atk != (_DWORD)v79 )
      {
        v75 = CombineInfoComponent_TypeInfo;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
          v75 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v26, v75->static_fields->COLOR_VAL, 0LL);
      }
      if ( v4->fields.dispType == 4 )
      {
        v91.fields.r = 1.0;
        v91.fields.g = 1.0;
        v91.fields.b = 1.0;
        v91.fields.a = 1.0;
        UIWidget__set_color(v23, v91, 0LL);
        v92.fields.r = 1.0;
        v92.fields.g = 1.0;
        v92.fields.b = 1.0;
        v92.fields.a = 1.0;
        UIWidget__set_color(v25, v92, 0LL);
        v93.fields.r = 1.0;
        v93.fields.g = 1.0;
        v93.fields.b = 1.0;
        v93.fields.a = 1.0;
        UIWidget__set_color(v26, v93, 0LL);
      }
      this = (CombineInfoComponent_o *)v4->fields.resStatusInfo;
      if ( !this )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      return;
    case 4:
      v52 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0LL);
      if ( !v52 )
        goto LABEL_117;
      UIExtrusionLabel__set_text(v52, (System_String_o *)this, 0LL);
      v53 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v53 )
        goto LABEL_117;
      UILabel__set_text(v53, (System_String_o *)this, 0LL);
      v55 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v54);
        v55 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v24, v55->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v56);
      this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
      if ( !this )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v89.fields.r = 1.0;
      v89.fields.g = 1.0;
      v89.fields.b = 1.0;
      v89.fields.a = 1.0;
      UIWidget__set_color(v23, v89, 0LL);
      v90.fields.r = 1.0;
      v90.fields.g = 1.0;
      v90.fields.b = 1.0;
      v90.fields.a = 1.0;
      UIWidget__set_color(v25, v90, 0LL);
      v57 = 1.0;
      v58 = 1.0;
      v59 = 1.0;
      v60 = 1.0;
      v61 = v26;
      goto LABEL_102;
    default:
      goto LABEL_103;
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
  int32_t i; // w23
  struct SetLimitCntInfoComponent_array *currentLimitCntInfos; // x8
  Il2CppClass **v9; // x8
  SetLimitCntInfoComponent_o *v10; // x22
  const MethodInfo *v11; // x2

  if ( maxLimitCnt >= 1 )
  {
    v6 = this;
    for ( i = 0; i != maxLimitCnt; ++i )
    {
      currentLimitCntInfos = v6->fields.currentLimitCntInfos;
      if ( !currentLimitCntInfos )
        goto LABEL_9;
      if ( i >= currentLimitCntInfos->max_length )
        sub_1BCAA44(this, *(_QWORD *)&maxLimitCnt);
      v9 = &currentLimitCntInfos->obj.klass + i;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_1BCAA3C(this, *(_QWORD *)&maxLimitCnt);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      SetLimitCntInfoComponent__setEnableOnImg(v10, i < svtLimitCnt, v11);
    }
  }
}


void __fastcall CombineInfoComponent__setCurrentStatusInfo(
        CombineInfoComponent_o *this,
        UserServantEntity_o *baseData,
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
  UserServantEntity_o **p_baseSvtData; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_String_o *isLevelMax; // x0
  System_String_o *v21; // x1
  struct UserServantEntity_o *baseSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x21
  UILabel_o *currentMaxLvLb; // x21
  UIExtrusionLabel_o *v25; // x21
  System_String_o *v26; // x22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x22
  Il2CppObject *v29; // x0
  UILabel_o *currentExpValLb; // x21
  UserServantEntity_o *v31; // x8
  int32_t v32; // w20
  __int64 v33; // x21
  __int64 v34; // x22
  int32_t v35; // w0
  const MethodInfo *v36; // x3
  struct UserServantEntity_o *v37; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v39; // x8
  UILabel_o *currentAtkLb; // x19
  float barExp[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4B19A8F & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, baseData, method);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_7473/*"IMPOSSIBLE_LIMITUP_COLOR"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_424/*"#,0"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v11, v12);
    byte_4B19A8F = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  *(_QWORD *)barExp = 0LL;
  CombineInfoComponent__initCurrentStatusGrid(this, (const MethodInfo *)baseData);
  p_baseSvtData = &this->fields.baseSvtData;
  this->fields.baseSvtData = baseData;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseSvtData, (int64_t)baseData, v14, v15, v16, v17, v18, v19);
  switch ( this->fields.dispType )
  {
    case 0:
    case 2:
    case 4:
      baseSvtData = this->fields.baseSvtData;
      if ( !baseSvtData )
        goto LABEL_42;
      currentLvLb = this->fields.currentLvLb;
      isLevelMax = System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !currentLvLb )
        goto LABEL_42;
      UIExtrusionLabel__set_text(currentLvLb, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      currentMaxLvLb = this->fields.currentMaxLvLb;
      LODWORD(barExp[0]) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0LL);
      isLevelMax = System_Int32__ToString((int32_t)barExp, 0LL);
      if ( !currentMaxLvLb )
        goto LABEL_42;
      v21 = isLevelMax;
      goto LABEL_29;
    case 1:
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      v25 = this->fields.currentLvLb;
      isLevelMax = (System_String_o *)UserServantEntity__isLevelMax((UserServantEntity_o *)isLevelMax, 0LL);
      if ( ((unsigned __int8)isLevelMax & 1) != 0 )
        goto LABEL_13;
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      isLevelMax = (System_String_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)isLevelMax, 0LL);
      if ( ((unsigned __int8)isLevelMax & 1) != 0 )
      {
LABEL_13:
        if ( !*p_baseSvtData )
          goto LABEL_42;
        isLevelMax = System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7473/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_42;
        v26 = isLevelMax;
        v27 = (Il2CppObject *)System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
        isLevelMax = System_String__Format(v26, v27, 0LL);
      }
      v21 = isLevelMax;
      if ( !v25 )
        goto LABEL_42;
      UIExtrusionLabel__set_text(v25, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      currentMaxLvLb = this->fields.currentMaxLvLb;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)isLevelMax, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7473/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_42;
        v28 = isLevelMax;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax(*p_baseSvtData, 0LL);
        v29 = (Il2CppObject *)System_Int32__ToString((int32_t)barExp, 0LL);
        isLevelMax = System_String__Format(v28, v29, 0LL);
      }
      else
      {
        isLevelMax = (System_String_o *)*p_baseSvtData;
        if ( !*p_baseSvtData )
          goto LABEL_42;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0LL);
        isLevelMax = System_Int32__ToString((int32_t)barExp, 0LL);
      }
      v21 = isLevelMax;
      if ( !currentMaxLvLb )
        goto LABEL_42;
LABEL_29:
      UILabel__set_text(currentMaxLvLb, v21, 0LL);
LABEL_30:
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      UserServantEntity__getExpInfo((UserServantEntity_o *)isLevelMax, &lateExp[1], lateExp, &barExp[1], 0LL);
      isLevelMax = (System_String_o *)this->fields.currentExpBar;
      if ( !isLevelMax )
        goto LABEL_42;
      UIProgressBar__set_value((UIProgressBar_o *)isLevelMax, barExp[1], 0LL);
      currentExpValLb = this->fields.currentExpValLb;
      isLevelMax = System_Int32__ToString_63206828((int32_t)lateExp, (System_String_o *)StringLiteral_424/*"#,0"*/, 0LL);
      if ( !currentExpValLb )
        goto LABEL_42;
      UILabel__set_text(currentExpValLb, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      isLevelMax = (System_String_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)isLevelMax, 0LL);
      v31 = *p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      v32 = (int)isLevelMax;
      v34 = *(_QWORD *)&v31->fields.limitCount.fields.currentCryptoKey;
      v33 = *(_QWORD *)&v31->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
      *(_QWORD *)&v43.fields.currentCryptoKey = v34;
      *(_QWORD *)&v43.fields.fakeValue = v33;
      v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v43, 0LL);
      CombineInfoComponent__setCurrentLimitCntInfo(this, v32, v35, v36);
      v37 = this->fields.baseSvtData;
      if ( !v37
        || (currentHpLb = this->fields.currentHpLb,
            isLevelMax = System_Int32__ToString_63206828((int)v37 + 268, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
            !currentHpLb)
        || (UILabel__set_text(currentHpLb, isLevelMax, 0LL), (v39 = this->fields.baseSvtData) == 0LL)
        || (currentAtkLb = this->fields.currentAtkLb,
            isLevelMax = System_Int32__ToString_63206828((int)v39 + 264, (System_String_o *)StringLiteral_9337/*"N0"*/, 0LL),
            !currentAtkLb) )
      {
LABEL_42:
        sub_1BCAA3C(isLevelMax, v21);
      }
      UILabel__set_text(currentAtkLb, isLevelMax, 0LL);
      return;
    default:
      goto LABEL_30;
  }
}


void __fastcall CombineInfoComponent__setInitInfoLb(CombineInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *infoLb; // x19
  UILabel_o *infoLb2; // x0

  if ( (byte_4B19A8E & 1) == 0 )
  {
    sub_1BCA7E0(&CombineInfoComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_25579/*"レベル上限："*/, v4, v5);
    byte_4B19A8E = 1;
  }
  switch ( this->fields.dispType )
  {
    case 0:
    case 2:
      infoLb = this->fields.infoLb;
      infoLb2 = (UILabel_o *)CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, method);
      if ( !infoLb )
        goto LABEL_28;
      UILabel__set_text(infoLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
      break;
    case 1:
    case 4:
      infoLb2 = this->fields.infoLb;
      if ( !infoLb2 )
        goto LABEL_28;
      UILabel__set_text(infoLb2, (System_String_o *)StringLiteral_25579/*"レベル上限："*/, 0LL);
      infoLb2 = this->fields.infoLb2;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = this->fields.infoLb3;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = this->fields.infoLb4;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = this->fields.infoLb5;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = (UILabel_o *)this->fields.infoIcon2;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0LL);
      infoLb2 = (UILabel_o *)this->fields.infoIcon3;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0LL);
      if ( !infoLb2 )
        goto LABEL_28;
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
LABEL_28:
        sub_1BCAA3C(infoLb2, method);
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
  int32_t i; // w23
  struct SetLimitCntInfoComponent_array *resLimitCntInfos; // x8
  Il2CppClass **v9; // x8
  SetLimitCntInfoComponent_o *v10; // x22
  const MethodInfo *v11; // x2

  if ( maxLimitCnt >= 1 )
  {
    v6 = this;
    for ( i = 0; i != maxLimitCnt; ++i )
    {
      resLimitCntInfos = v6->fields.resLimitCntInfos;
      if ( !resLimitCntInfos )
        goto LABEL_9;
      if ( i >= resLimitCntInfos->max_length )
        sub_1BCAA44(this, *(_QWORD *)&maxLimitCnt);
      v9 = &resLimitCntInfos->obj.klass + i;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_1BCAA3C(this, *(_QWORD *)&maxLimitCnt);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      SetLimitCntInfoComponent__setEnableOnImg(v10, i < svtLimitCnt, v11);
    }
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.name = name;
  v12 = (CombineInfoComponent_GetItemInfo_o *)((char *)v12 + 24);
  v12[-1].fields.acquiredCount = itemId;
  sub_1BCA784((PartyOrganizationUtility_o *)v12, (int64_t)name, v13, v14, v15, v16, v17, v18);
  LODWORD(v12->monitor) = iconImageId;
  HIDWORD(v12->monitor) = count;
  v12->fields.itemId = acquiredCount;
}


void __fastcall CombineInfoComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B19A95 & 1) == 0 )
  {
    sub_1BCA7E0(&CombineInfoComponent___c_TypeInfo, v1, v2);
    byte_4B19A95 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CombineInfoComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CombineInfoComponent___c_TypeInfo->static_fields->__9 = (struct CombineInfoComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CombineInfoComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, data);
  return data->fields.itemId == giftEntity->fields.objectId;
}