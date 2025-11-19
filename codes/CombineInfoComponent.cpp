void CombineInfoComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct CombineInfoComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  CombineInfoComponent_c *v5; // x8
  struct CombineInfoComponent_StaticFields *v6; // x9
  struct CombineInfoComponent_StaticFields *v7; // x9
  int32_t v8; // w1
  struct CombineInfoComponent_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct CombineInfoComponent_StaticFields *v12; // x8

  if ( (byte_4CBA2B7 & 1) == 0 )
  {
    sub_1C6BA08(&CombineInfoComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_20286/*"icon_reward_get"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA2B7 = 1;
  }
  CombineInfoComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_CED0E0;
  static_fields = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_NEW_SKILL_LABEL_WIDTH = 0x8C0000008CLL;
  static_fields->INFO_GET_ITEM_LABEL_2_WIDTH = 34;
  v4 = StringLiteral_1/*""*/;
  static_fields->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->INIT_VAL_TXT, v4, v1, v2);
  v5 = CombineInfoComponent_TypeInfo;
  v6 = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&v6->LIMIT_UP_GET_SKILL_INFO_POS.fields.x = 3246391296LL;
  v6->LIMIT_UP_GET_SKILL_INFO_POS.fields.z = 0.0;
  v7 = v5->static_fields;
  *(_QWORD *)&v7->LIMIT_UP_REWARD_INFO_POS.fields.x = 1127546880;
  v7->LIMIT_UP_REWARD_INFO_POS.fields.z = 0.0;
  v8 = StringLiteral_20286/*"icon_reward_get"*/;
  v9 = v5->static_fields;
  v9->LIMIT_UP_REWARD_GET_ICON_NAME = (struct System_String_o *)StringLiteral_20286/*"icon_reward_get"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v9->LIMIT_UP_REWARD_GET_ICON_NAME, v8, v10, v11);
  v12 = CombineInfoComponent_TypeInfo->static_fields;
  v12->LIMIT_UP_REWARD_GET_ICON_ID = 9;
  v12->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = (struct UnityEngine_Color_o)xmmword_CEC950;
}


void CombineInfoComponent___ctor(CombineInfoComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void CombineInfoComponent__CheckAssertions(CombineInfoComponent_o *this, const MethodInfo *method)
{
  ;
}


void CombineInfoComponent__DispLimitUpReleaseSkillAndReward(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  CombineSvtData_o *v3; // x20
  char *getSkillRewardObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  CombineInfoComponent_c *v7; // x8
  UnityEngine_GameObject_o *v8; // x21
  UnityEngine_GameObject_o *v9; // x0
  UISprite_o *limitUpRewardGetIcon1; // x21
  System_String_o *LIMIT_UP_REWARD_GET_ICON_NAME; // x22
  UILabel_o *infoLb; // x21
  bool isLimitCountMax; // w22
  System_String_o *v14; // x22
  Il2CppObject *v15; // x23
  Il2CppObject *v16; // x0
  CombineInfoComponent_o *v17; // x0
  const MethodInfo *v18; // x2
  char *v19; // x21
  System_Text_StringBuilder_o *v20; // x22
  System_Text_StringBuilder_o *appended; // x0
  __int64 v22; // x8
  unsigned __int64 v23; // x24
  int32_t v24; // w23
  UILabel_o *infoLb2; // x23
  System_String_o *v26; // x24
  Il2CppObject *v27; // x0
  UILabel_o *v28; // x22
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x4
  UnityEngine_GameObject_o *v31; // x0
  CombineInfoComponent_c *v32; // x8
  UnityEngine_GameObject_o *v33; // x21
  int32_t size; // w21
  ItemIconComponent_o *infoIcon3; // x20
  _BOOL4 v36; // w23
  __int64 v37; // x9
  int32_t v38; // w28
  UILabel_o *infoLb3; // x20
  System_String_o *v40; // x21
  Il2CppObject *v41; // x22
  Il2CppObject *v42; // x0
  UILabel_o *v43; // x20
  System_String_o *v44; // x21
  Il2CppObject *v45; // x0
  UILabel_o *v46; // x20
  ItemIconComponent_o *infoIcon4; // x20
  __int64 v48; // x9
  int32_t v49; // w22
  UILabel_o *infoLb4; // x20
  System_String_o *v51; // x21
  Il2CppObject *v52; // x0
  UILabel_o *v53; // x20
  UILabel_o *infoLb5; // x20
  UILabel_o *v55; // x20
  bool v56; // w1
  int32_t combineResSvtMaxLv; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t LevelMax; // [xsp+8h] [xbp-68h] BYREF
  bool isAllAcquired; // [xsp+Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *getItemInfoList; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = resSvtData;
  if ( (byte_4CBA2B4 & 1) == 0 )
  {
    sub_1C6BA08(&AtlasManager_TypeInfo);
    sub_1C6BA08(&CombineInfoComponent_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&StringLiteral_8611/*"MAX_LVUP_TXT"*/);
    sub_1C6BA08(&StringLiteral_8275/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/);
    sub_1C6BA08(&StringLiteral_8273/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/);
    sub_1C6BA08(&StringLiteral_8277/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/);
    sub_1C6BA08(&StringLiteral_8274/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/);
    sub_1C6BA08(&StringLiteral_8276/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/);
    sub_1C6BA08(&StringLiteral_8267/*"LIMITUP_MAX_TXT"*/);
    byte_4CBA2B4 = 1;
  }
  getItemInfoList = 0;
  isAllAcquired = 0;
  getSkillRewardObj = (char *)this->fields.getSkillRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0);
  v7 = CombineInfoComponent_TypeInfo;
  v8 = gameObject;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v7 = CombineInfoComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v8, v7->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0);
  getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v9 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0);
  GameObjectExtensions__SetLocalPosition(v9, CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_INFO_POS, 0);
  limitUpRewardGetIcon1 = this->fields.limitUpRewardGetIcon1;
  LIMIT_UP_REWARD_GET_ICON_NAME = CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_NAME;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(limitUpRewardGetIcon1, LIMIT_UP_REWARD_GET_ICON_NAME, 0);
  AtlasManager__SetEventUI(
    this->fields.limitUpRewardGetIcon2,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_NAME,
    0);
  AtlasManager__SetItem(
    this->fields.infoIcon2,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_ID,
    0);
  getSkillRewardObj = (char *)this->fields.infoLb;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UILabel__set_overflowMethod((UILabel_o *)getSkillRewardObj, 2, 0);
  getSkillRewardObj = (char *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  infoLb = this->fields.infoLb;
  isLimitCountMax = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0);
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( isLimitCountMax )
    {
LABEL_13:
      getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8267/*"LIMITUP_MAX_TXT"*/, 0);
      goto LABEL_18;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLimitCountMax )
      goto LABEL_13;
  }
  getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8611/*"MAX_LVUP_TXT"*/, 0);
  if ( !this->fields.baseSvtData )
    goto LABEL_133;
  v14 = (System_String_o *)getSkillRewardObj;
  LevelMax = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0);
  getSkillRewardObj = (char *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
  if ( !v3 )
    goto LABEL_133;
  v15 = (Il2CppObject *)getSkillRewardObj;
  combineResSvtMaxLv = v3->fields.combineResSvtMaxLv;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
  getSkillRewardObj = (char *)System_String__Format_64008100(v14, v15, v16, 0);
LABEL_18:
  resSvtData = (CombineSvtData_o *)getSkillRewardObj;
  if ( !infoLb )
    goto LABEL_133;
  UILabel__set_text(infoLb, (System_String_o *)getSkillRewardObj, 0);
  getSkillRewardObj = (char *)CombineInfoComponent__GetNewReleaseSkillNumList(v17, v3, v18);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v19 = getSkillRewardObj;
  if ( *((_QWORD *)getSkillRewardObj + 3) )
  {
    getSkillRewardObj = (char *)this->fields.infoLb2;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
    getSkillRewardObj = (char *)this->fields.infoIcon2;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
    v20 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v20, 0);
    v22 = *((_QWORD *)v19 + 3);
    if ( (int)v22 >= 1 )
    {
      v23 = 0;
      v24 = (_DWORD)v19 + 32;
      do
      {
        if ( v23 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8276/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, 0);
          if ( !v20 )
            goto LABEL_133;
          appended = System_Text_StringBuilder__Append_64050752(v20, (System_String_o *)getSkillRewardObj, 0);
          LODWORD(v22) = *((_DWORD *)v19 + 6);
        }
        if ( v23 >= (unsigned int)v22 )
          sub_1C6BC68(appended);
        getSkillRewardObj = (char *)System_Int32__ToString(v24, 0);
        if ( !v20 )
          goto LABEL_133;
        appended = System_Text_StringBuilder__Append_64050752(v20, (System_String_o *)getSkillRewardObj, 0);
        LODWORD(v22) = *((_DWORD *)v19 + 6);
        ++v23;
        v24 += 4;
      }
      while ( (__int64)v23 < (int)v22 );
    }
    infoLb2 = this->fields.infoLb2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8277/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, 0);
    if ( !v20 )
      goto LABEL_133;
    v26 = (System_String_o *)getSkillRewardObj;
    v27 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v20->klass->vtable._3_ToString.methodPtr)(
                            v20,
                            v20->klass->vtable._3_ToString.method);
    getSkillRewardObj = (char *)System_String__Format(v26, v27, 0);
    if ( !infoLb2 )
      goto LABEL_133;
    UILabel__set_text(infoLb2, (System_String_o *)getSkillRewardObj, 0);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v28 = this->fields.infoLb2;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v28 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v28, CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH, 0, 0);
  }
  getSkillRewardObj = (char *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v29 = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0);
  if ( v29 )
    return;
  if ( !*((_QWORD *)v19 + 3) )
  {
    getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v31 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0);
    v32 = CombineInfoComponent_TypeInfo;
    v33 = v31;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
      v32 = CombineInfoComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v33, v32->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0);
  }
  CombineInfoComponent__GetLimitCountUpReward((CombineInfoComponent_o *)v29, v3, &getItemInfoList, &isAllAcquired, v30);
  if ( !getItemInfoList )
    goto LABEL_133;
  size = getItemInfoList->fields._size;
  if ( size < 1 )
    return;
  getSkillRewardObj = (char *)this->fields.infoLb3;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
  getSkillRewardObj = (char *)this->fields.infoIcon3;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
  getSkillRewardObj = (char *)getItemInfoList;
  if ( !getItemInfoList
    || (infoIcon3 = this->fields.infoIcon3,
        (getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)getItemInfoList,
                                       0,
                                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__)) == 0)
    || !infoIcon3
    || (ItemIconComponent__SetGift_41153640(infoIcon3, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0),
        (getSkillRewardObj = (char *)getItemInfoList) == 0)
    || (v36 = isAllAcquired,
        (getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)getItemInfoList,
                                       0,
                                       (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__)) == 0) )
  {
LABEL_133:
    sub_1C6BC60(getSkillRewardObj, resSvtData);
  }
  v37 = 40;
  if ( !v36 )
    v37 = 36;
  v38 = *(_DWORD *)&getSkillRewardObj[v37];
  infoLb3 = this->fields.infoLb3;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( size == 1 )
  {
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8273/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, 0);
    if ( !getItemInfoList )
      goto LABEL_133;
    v40 = (System_String_o *)getSkillRewardObj;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  0,
                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v41 = (Il2CppObject *)*((_QWORD *)getSkillRewardObj + 3);
    LevelMax = v38;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (char *)System_String__Format_64008100(v40, v41, v42, 0);
    if ( !infoLb3 )
      goto LABEL_133;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v43 = this->fields.infoLb3;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v43 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v43, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH, 0, 0);
  }
  else
  {
    v44 = LocalizationManager__Get((System_String_o *)StringLiteral_8274/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0);
    LevelMax = v38;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (char *)System_String__Format(v44, v45, 0);
    if ( !infoLb3 )
      goto LABEL_133;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v46 = this->fields.infoLb3;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v46 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v46, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0, 0);
    getSkillRewardObj = (char *)this->fields.infoLb4;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
    getSkillRewardObj = (char *)this->fields.infoIcon4;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
    getSkillRewardObj = (char *)getItemInfoList;
    if ( !getItemInfoList )
      goto LABEL_133;
    infoIcon4 = this->fields.infoIcon4;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  1,
                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    if ( !infoIcon4 )
      goto LABEL_133;
    ItemIconComponent__SetGift_41153640(infoIcon4, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0);
    getSkillRewardObj = (char *)getItemInfoList;
    if ( !getItemInfoList )
      goto LABEL_133;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  1,
                                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v48 = 40;
    if ( !v36 )
      v48 = 36;
    v49 = *(_DWORD *)&getSkillRewardObj[v48];
    infoLb4 = this->fields.infoLb4;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v51 = LocalizationManager__Get((System_String_o *)StringLiteral_8274/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0);
    LevelMax = v49;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (char *)System_String__Format(v51, v52, 0);
    if ( !infoLb4 )
      goto LABEL_133;
    UILabel__set_text(infoLb4, (System_String_o *)getSkillRewardObj, 0);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v53 = this->fields.infoLb4;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v53 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v53, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0, 0);
    getSkillRewardObj = (char *)this->fields.infoLb5;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
    infoLb5 = this->fields.infoLb5;
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8275/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, 0);
    if ( !infoLb5 )
      goto LABEL_133;
    UILabel__set_text(infoLb5, (System_String_o *)getSkillRewardObj, 0);
  }
  getSkillRewardObj = (char *)this->fields.infoIcon3;
  if ( !v36 )
  {
    if ( getSkillRewardObj )
    {
      v66.fields.r = 1.0;
      v66.fields.g = 1.0;
      v66.fields.b = 1.0;
      v66.fields.a = 1.0;
      ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v66, 0);
      getSkillRewardObj = (char *)this->fields.infoIcon4;
      if ( getSkillRewardObj )
      {
        v67.fields.r = 1.0;
        v67.fields.g = 1.0;
        v67.fields.b = 1.0;
        v67.fields.a = 1.0;
        ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v67, 0);
        getSkillRewardObj = (char *)this->fields.infoLb3;
        if ( getSkillRewardObj )
        {
          v68.fields.r = 1.0;
          v68.fields.g = 1.0;
          v68.fields.b = 1.0;
          v68.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v68, 0);
          getSkillRewardObj = (char *)this->fields.infoLb4;
          if ( getSkillRewardObj )
          {
            v69.fields.r = 1.0;
            v69.fields.g = 1.0;
            v69.fields.b = 1.0;
            v69.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v69, 0);
            getSkillRewardObj = (char *)this->fields.infoLb5;
            if ( getSkillRewardObj )
            {
              v70.fields.r = 1.0;
              v70.fields.g = 1.0;
              v70.fields.b = 1.0;
              v70.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v70, 0);
              getSkillRewardObj = (char *)this->fields.infoLb3;
              if ( getSkillRewardObj )
              {
                v71.fields.r = 0.0;
                v71.fields.g = 0.0;
                v71.fields.b = 0.0;
                v71.fields.a = 1.0;
                UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v71, 0);
                getSkillRewardObj = (char *)this->fields.infoLb4;
                if ( getSkillRewardObj )
                {
                  v72.fields.r = 0.0;
                  v72.fields.g = 0.0;
                  v72.fields.b = 0.0;
                  v72.fields.a = 1.0;
                  UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v72, 0);
                  getSkillRewardObj = (char *)this->fields.infoLb5;
                  if ( getSkillRewardObj )
                  {
                    v73.fields.r = 0.0;
                    v73.fields.g = 0.0;
                    v73.fields.b = 0.0;
                    v73.fields.a = 1.0;
                    UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v73, 0);
                    getSkillRewardObj = (char *)this->fields.limitUpRewardGetIcon1;
                    if ( getSkillRewardObj )
                    {
                      getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)getSkillRewardObj,
                                                    0);
                      if ( getSkillRewardObj )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 0, 0);
                        if ( getItemInfoList )
                        {
                          if ( getItemInfoList->fields._size < 2 )
                            return;
                          getSkillRewardObj = (char *)this->fields.limitUpRewardGetIcon2;
                          if ( getSkillRewardObj )
                          {
                            getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)getSkillRewardObj,
                                                          0);
                            if ( getSkillRewardObj )
                            {
                              v56 = 0;
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
  v61.fields.r = 0.5;
  v61.fields.g = 0.5;
  v61.fields.b = 0.5;
  v61.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v61, 0);
  getSkillRewardObj = (char *)this->fields.infoIcon4;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v62.fields.r = 0.5;
  v62.fields.g = 0.5;
  v62.fields.b = 0.5;
  v62.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v62, 0);
  getSkillRewardObj = (char *)this->fields.infoLb3;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v63.fields.r = 0.5;
  v63.fields.g = 0.5;
  v63.fields.b = 0.5;
  v63.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v63, 0);
  getSkillRewardObj = (char *)this->fields.infoLb4;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v64.fields.r = 0.5;
  v64.fields.g = 0.5;
  v64.fields.b = 0.5;
  v64.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v64, 0);
  getSkillRewardObj = (char *)this->fields.infoLb5;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v65.fields.r = 0.5;
  v65.fields.g = 0.5;
  v65.fields.b = 0.5;
  v65.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v65, 0);
  getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  v55 = this->fields.infoLb3;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  }
  if ( !v55 )
    goto LABEL_133;
  UILabel__set_effectColor(v55, *(UnityEngine_Color_o *)(*((_QWORD *)getSkillRewardObj + 23) + 76LL), 0);
  getSkillRewardObj = (char *)this->fields.infoLb4;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UILabel__set_effectColor(
    (UILabel_o *)getSkillRewardObj,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0);
  getSkillRewardObj = (char *)this->fields.infoLb5;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UILabel__set_effectColor(
    (UILabel_o *)getSkillRewardObj,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0);
  getSkillRewardObj = (char *)this->fields.limitUpRewardGetIcon1;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
  if ( !getItemInfoList )
    goto LABEL_133;
  if ( getItemInfoList->fields._size < 2 )
    return;
  getSkillRewardObj = (char *)this->fields.limitUpRewardGetIcon2;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v56 = 1;
LABEL_131:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, v56, 0);
}


void CombineInfoComponent__GetLimitCountUpReward(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **getItemInfoList,
        bool *isAllAcquired,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  Il2CppObject *Master_object; // x22
  void *CombineLimitGiftId; // x0
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **v12; // x20
  struct UserServantEntity_o *baseSvtData; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v14; // x29
  __int64 v15; // x24
  __int64 v16; // x25
  int64_t v17; // x23
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x24
  System_Collections_Generic_List_object__o *v20; // x0
  int v21; // w25
  __int64 v22; // x27
  struct UserServantEntity_o *v23; // x8
  __int64 v24; // x26
  __int64 v25; // x28
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v30; // x19
  System_Func_object__bool__o *v31; // x29
  int v32; // w20
  System_String_o *v33; // x28
  int32_t IconImageId; // w29
  __int64 v35; // x27
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  System_Collections_Generic_List_object__o *v44; // x19
  System_Predicate_object__o *v45; // x20
  Il2CppObject *v46; // x21
  struct CombineInfoComponent___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+10h] [xbp-80h]
  System_String_o *countText; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4CBA2B6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_CombineLimitGiftMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
    sub_1C6BA08(&System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
    sub_1C6BA08(&CombineInfoComponent_GetItemInfo_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
    sub_1C6BA08(&Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__);
    sub_1C6BA08(&Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__);
    sub_1C6BA08(&CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
    sub_1C6BA08(&CombineInfoComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBA2B6 = 1;
  }
  countText = 0;
  nameText = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  *getItemInfoList = (System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)getItemInfoList, (int32_t)v6, v7, v8);
  *isAllAcquired = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  CombineLimitGiftId = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    CombineLimitGiftId = NetworkManager_TypeInfo;
  }
  v12 = getItemInfoList;
  if ( !resSvtData )
    goto LABEL_57;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_57;
  v14 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v16 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  v17 = *(_QWORD *)(*((_QWORD *)CombineLimitGiftId + 23) + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v16;
  *(_QWORD *)&v55.fields.fakeValue = v15;
  CombineLimitGiftId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v55, 0);
  if ( !Master_object )
    goto LABEL_57;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       v17,
                       (int32_t)CombineLimitGiftId,
                       0);
  v18 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_GiftMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  CombineLimitGiftId = resSvtData->fields.baseSvtData;
  if ( !CombineLimitGiftId )
    goto LABEL_57;
  v21 = UserServantEntity__getLimitCount((UserServantEntity_o *)CombineLimitGiftId, 0) + 1;
  if ( v21 <= resSvtData->fields.combineResLimitCnt )
  {
    while ( 1 )
    {
      v22 = sub_1C6BC54(CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0);
      v23 = resSvtData->fields.baseSvtData;
      if ( !v23 )
        break;
      v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
      if ( !(*v14)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v14);
      *(_QWORD *)&v56.fields.currentCryptoKey = v25;
      *(_QWORD *)&v56.fields.fakeValue = v24;
      CombineLimitGiftId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v56, 0);
      if ( !v18 )
        break;
      CombineLimitGiftId = (void *)CombineLimitGiftMaster__GetCombineLimitGiftId(
                                     (CombineLimitGiftMaster_o *)v18,
                                     (int32_t)CombineLimitGiftId,
                                     v21,
                                     0);
      if ( (_DWORD)CombineLimitGiftId )
      {
        if ( !v19 )
          break;
        CombineLimitGiftId = GiftMaster__getDataById((GiftMaster_o *)v19, (int32_t)CombineLimitGiftId, 0);
        if ( !v22 )
          break;
        *(_QWORD *)(v22 + 16) = CombineLimitGiftId;
        v28 = v22 + 16;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 16), (int32_t)CombineLimitGiftId, v26, v27);
        if ( *(_QWORD *)(v22 + 16) )
        {
          v29 = (System_Collections_Generic_IEnumerable_TSource__o *)*v12;
          v30 = v14;
          v31 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v31,
            (Il2CppObject *)v22,
            Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__,
            0);
          CombineLimitGiftId = System_Linq_Enumerable__FirstOrDefault_object__51793644(
                                 v29,
                                 (System_Func_TSource__bool__o *)v31,
                                 (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
          if ( CombineLimitGiftId )
          {
            if ( EntityDefinitely && v21 <= EntityDefinitely->fields.maxLimitCount )
            {
              if ( !*(_QWORD *)v28 )
                break;
              v14 = v30;
              *((_DWORD *)CombineLimitGiftId + 10) += *(_DWORD *)(*(_QWORD *)v28 + 28LL);
            }
            else
            {
              *isAllAcquired = 0;
              if ( !*(_QWORD *)v28 )
                break;
              v14 = v30;
              *((_DWORD *)CombineLimitGiftId + 9) += *(_DWORD *)(*(_QWORD *)v28 + 28LL);
            }
          }
          else
          {
            countText = (System_String_o *)StringLiteral_1/*""*/;
            nameText = (System_String_o *)StringLiteral_1/*""*/;
            CombineLimitGiftId = *(void **)v28;
            if ( !*(_QWORD *)v28 )
              break;
            GiftEntity__GetInfo((GiftEntity_o *)CombineLimitGiftId, &nameText, &countText, 0);
            CombineLimitGiftId = *(void **)v28;
            if ( !*(_QWORD *)v28 )
              break;
            v32 = *((_DWORD *)CombineLimitGiftId + 6);
            v33 = nameText;
            IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)CombineLimitGiftId, 0);
            v35 = sub_1C6BC54(CombineInfoComponent_GetItemInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v35, 0);
            *(_DWORD *)(v35 + 16) = v32;
            *(_QWORD *)(v35 + 24) = v33;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v35 + 24), (int32_t)v33, v36, v37);
            *(_DWORD *)(v35 + 36) = 0;
            *(_DWORD *)(v35 + 40) = 0;
            *(_DWORD *)(v35 + 32) = IconImageId;
            if ( !EntityDefinitely )
              goto LABEL_35;
            if ( v21 <= EntityDefinitely->fields.maxLimitCount )
            {
              v12 = getItemInfoList;
              if ( !*(_QWORD *)v28 )
                break;
              v14 = v30;
              *(_DWORD *)(v35 + 40) = *(_DWORD *)(*(_QWORD *)v28 + 28LL);
            }
            else
            {
LABEL_35:
              v12 = getItemInfoList;
              *isAllAcquired = 0;
              if ( !*(_QWORD *)v28 )
                break;
              v14 = v30;
              *(_DWORD *)(v35 + 36) += *(_DWORD *)(*(_QWORD *)v28 + 28LL);
            }
            CombineLimitGiftId = *v12;
            if ( !*v12 )
              break;
            v40 = *((_QWORD *)CombineLimitGiftId + 2);
            v41 = Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__;
            ++*((_DWORD *)CombineLimitGiftId + 7);
            if ( !v40 )
              break;
            v42 = *((int *)CombineLimitGiftId + 6);
            if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)CombineLimitGiftId,
                (Il2CppObject *)v35,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = v40 + 8 * v42;
              *((_DWORD *)CombineLimitGiftId + 6) = v42 + 1;
              *(_QWORD *)(v43 + 32) = v35;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v43 + 32), v35, v38, v39);
            }
          }
        }
      }
      if ( ++v21 > resSvtData->fields.combineResLimitCnt )
        goto LABEL_47;
    }
LABEL_57:
    sub_1C6BC60(CombineLimitGiftId, v9);
  }
LABEL_47:
  if ( !*isAllAcquired )
  {
    v44 = (System_Collections_Generic_List_object__o *)*v12;
    CombineLimitGiftId = CombineInfoComponent___c_TypeInfo;
    if ( !CombineInfoComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent___c_TypeInfo);
      CombineLimitGiftId = CombineInfoComponent___c_TypeInfo;
    }
    v45 = *(System_Predicate_object__o **)(*((_QWORD *)CombineLimitGiftId + 23) + 8LL);
    if ( !v45 )
    {
      if ( !*((_DWORD *)CombineLimitGiftId + 56) )
      {
        j_il2cpp_runtime_class_init_0(CombineLimitGiftId);
        CombineLimitGiftId = CombineInfoComponent___c_TypeInfo;
      }
      v46 = (Il2CppObject *)**((_QWORD **)CombineLimitGiftId + 23);
      v45 = (System_Predicate_object__o *)sub_1C6BC54(System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
      System_Predicate_object____ctor(v45, v46, Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, 0);
      static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Predicate_CombineInfoComponent_GetItemInfo__o *)v45;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__56_0, (int32_t)v45, v48, v49);
    }
    if ( !v44 )
      goto LABEL_57;
    System_Collections_Generic_List_object___RemoveAll(
      v44,
      (System_Predicate_T__o *)v45,
      (const MethodInfo_3801FD0 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
  }
}


System_Int32_array *CombineInfoComponent__GetNewReleaseSkillNumList(
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
  __int64 v11; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v13; // x10
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11
  System_String_array *v18; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *v19; // [xsp+10h] [xbp-40h] BYREF
  System_String_array *skillNameList; // [xsp+18h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4CBA2B5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CBA2B5 = 1;
  }
  idList = 0;
  v19 = 0;
  skillNameList = 0;
  v18 = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !resSvtData )
    goto LABEL_23;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_23;
  combineResSvtLv = resSvtData->fields.combineResSvtLv;
  LimitCount = UserServantEntity__getLimitCount(resSvtData->fields.baseSvtData, 0);
  UserServantEntity__getNextUseSkillInfo(baseSvtData, &idList, &skillNameList, combineResSvtLv, LimitCount, 1, 0);
  v5 = resSvtData->fields.baseSvtData;
  if ( !v5 )
    goto LABEL_23;
  UserServantEntity__getNextUseSkillInfo(
    v5,
    &v19,
    &v18,
    resSvtData->fields.combineResSvtLv,
    resSvtData->fields.combineResLimitCnt,
    0,
    0);
  v10 = v19;
  if ( !v19 )
    goto LABEL_23;
  v11 = 8;
  while ( 1 )
  {
    max_length_low = LODWORD(v10->max_length);
    v13 = v11 - 8;
    if ( v11 - 8 >= (int)max_length_low )
      break;
    if ( !idList )
      goto LABEL_23;
    if ( v13 >= LODWORD(idList->max_length) )
LABEL_24:
      sub_1C6BC68(v5);
    if ( !*((_DWORD *)&idList->obj.klass + v11) )
    {
      if ( v13 >= max_length_low )
        goto LABEL_24;
      if ( *((_DWORD *)&v10->obj.klass + v11) )
      {
        if ( !v4 )
          goto LABEL_23;
        items = v4->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            v11 - 7,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          v10 = v19;
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size] = v11 - 7;
        }
      }
    }
    ++v11;
    if ( !v10 )
      goto LABEL_23;
  }
  if ( !v4 )
LABEL_23:
    sub_1C6BC60(v5, v6);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void CombineInfoComponent__HideResStatusInfo(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resStatusInfo; // x0

  resStatusInfo = this->fields.resStatusInfo;
  if ( !resStatusInfo )
    sub_1C6BC60(0, method);
  UnityEngine_GameObject__SetActive(resStatusInfo, 0, 0);
}


void CombineInfoComponent__initCurrentStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  struct SetLimitCntInfoComponent_array *currentLimitCntInfos; // x8
  int max_length; // w20
  CombineInfoComponent_o *v4; // x19
  unsigned int v5; // w21

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
      if ( v5 >= LODWORD(currentLimitCntInfos->max_length) )
        sub_1C6BC68(this);
      this = (CombineInfoComponent_o *)currentLimitCntInfos->m_Items[v5];
      if ( !this )
        break;
      this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( max_length == ++v5 )
        return;
      currentLimitCntInfos = v4->fields.currentLimitCntInfos;
    }
    while ( currentLimitCntInfos );
LABEL_9:
    sub_1C6BC60(this, method);
  }
}


void CombineInfoComponent__initResStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  struct SetLimitCntInfoComponent_array *resLimitCntInfos; // x8
  int max_length; // w20
  CombineInfoComponent_o *v4; // x19
  unsigned int v5; // w21

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
      if ( v5 >= LODWORD(resLimitCntInfos->max_length) )
        sub_1C6BC68(this);
      this = (CombineInfoComponent_o *)resLimitCntInfos->m_Items[v5];
      if ( !this )
        break;
      this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( max_length == ++v5 )
        return;
      resLimitCntInfos = v4->fields.resLimitCntInfos;
    }
    while ( resLimitCntInfos );
LABEL_9:
    sub_1C6BC60(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineInfoComponent__initStatusInfo(CombineInfoComponent_o *this, int32_t type, const MethodInfo *method)
{
  UILabel_o *currentMaxLvLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  BalanceConfig_c *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4CBA2B0 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    sub_1C6BA08(&CombineInfoComponent_TypeInfo);
    byte_4CBA2B0 = 1;
  }
  currentMaxLvLb = (UILabel_o *)CombineInfoComponent_TypeInfo;
  currentLvLb = this->fields.currentLvLb;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
  if ( !currentLvLb )
    goto LABEL_17;
  UIExtrusionLabel__set_text(currentLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = this->fields.currentMaxLvLb;
  if ( !currentMaxLvLb )
    goto LABEL_17;
  UILabel__set_text(currentMaxLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  currentMaxLvLb = (UILabel_o *)this->fields.currentExpBar;
  if ( !currentMaxLvLb )
    goto LABEL_17;
  UIProgressBar__set_value((UIProgressBar_o *)currentMaxLvLb, 0.0, 0);
  currentMaxLvLb = this->fields.currentExpValLb;
  if ( !currentMaxLvLb )
    goto LABEL_17;
  UILabel__set_text(currentMaxLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
  CombineInfoComponent__initCurrentStatusGrid(this, v7);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v9 = BalanceConfig_TypeInfo;
  }
  CombineInfoComponent__setCurrentLimitCntInfo(this, v9->static_fields->ServantLimitMax, 0, v8);
  currentMaxLvLb = (UILabel_o *)this->fields.levelUpInfo;
  if ( !currentMaxLvLb )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMaxLvLb, 0, 0);
  currentMaxLvLb = this->fields.currentHpLb;
  if ( !currentMaxLvLb
    || (UILabel__set_text(currentMaxLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0),
        (currentMaxLvLb = this->fields.currentAtkLb) == 0)
    || (UILabel__set_text(currentMaxLvLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0),
        (currentMaxLvLb = (UILabel_o *)this->fields.currentStatusInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMaxLvLb, 1, 0),
        (currentMaxLvLb = (UILabel_o *)this->fields.resStatusInfo) == 0) )
  {
LABEL_17:
    sub_1C6BC60(currentMaxLvLb, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMaxLvLb, 0, 0);
  this->fields.dispType = type;
  CombineInfoComponent__setInitInfoLb(this, v10);
}


// local variable allocation has failed, the output may be wrong!
void CombineInfoComponent__setCombineResStatusInfo(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  CombineInfoComponent_o *v4; // x19
  struct UserServantEntity_o *baseSvtData; // x24
  int32_t lv; // w26
  UIWidget_o *v7; // x21
  UIWidget_o *v8; // x25
  UIWidget_o *v9; // x22
  UIWidget_o *v10; // x23
  int v11; // w26
  bool v12; // w1
  __int64 v13; // x26
  __int64 v14; // x27
  int32_t combineResLimitCnt; // w26
  bool v16; // w1
  float combineResExpBarVal; // s0
  CombineInfoComponent_c *v18; // x0
  UIExtrusionLabel_o *resLvLb; // x25
  UILabel_o *resMaxLvLb; // x25
  UIExtrusionLabel_o *v21; // x26
  UILabel_o *v22; // x26
  CombineInfoComponent_c *v23; // x0
  const MethodInfo *v24; // x2
  UILabel_o *resExpValLb; // x25
  UIExtrusionLabel_o *v26; // x26
  UILabel_o *v27; // x27
  __int64 v28; // x27
  __int64 v29; // x28
  bool isLevelMax; // w0
  System_String_o *INIT_VAL_TXT; // x1
  UIExtrusionLabel_o *v32; // x26
  UILabel_o *v33; // x26
  CombineInfoComponent_c *v34; // x0
  const MethodInfo *v35; // x2
  float v36; // s0 OVERLAPPED
  float v37; // s1
  float v38; // s2
  float v39; // s3
  UIWidget_o *v40; // x0
  UILabel_o *infoLb; // x27
  System_String_o *v42; // x28
  Il2CppObject *v43; // x29
  Il2CppObject *v44; // x0
  CombineInfoComponent_c *v45; // x0
  float *p_r; // x8
  int32_t LimitCntMax; // w0
  const MethodInfo *v48; // x3
  ServantOverwriteStatus_o *OverwriteStatus; // x24
  UILabel_o *resHpLb; // x25
  CombineInfoComponent_c *v51; // x0
  UILabel_o *resAtkLb; // x20
  CombineInfoComponent_c *v53; // x0
  int32_t combineResSvtMaxLv; // [xsp+8h] [xbp-88h] BYREF
  int32_t LevelMax; // [xsp+Ch] [xbp-84h] BYREF
  __int64 v56; // [xsp+10h] [xbp-80h] BYREF
  __int64 v57; // [xsp+18h] [xbp-78h] BYREF
  __int64 barExp; // [xsp+20h] [xbp-70h] BYREF
  int32_t exp; // [xsp+28h] [xbp-68h] BYREF
  int32_t combineResSvtLv; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4CBA2B3 & 1) == 0 )
  {
    sub_1C6BA08(&CombineInfoComponent_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&StringLiteral_8611/*"MAX_LVUP_TXT"*/);
    sub_1C6BA08(&StringLiteral_396/*"#,0"*/);
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    this = (CombineInfoComponent_o *)sub_1C6BA08(&StringLiteral_12577/*"SVTEQ_LVMAX_INFO_TXT"*/);
    byte_4CBA2B3 = 1;
  }
  exp = 0;
  v57 = 0;
  barExp = 0;
  v56 = 0;
  if ( !resSvtData )
    goto LABEL_118;
  baseSvtData = resSvtData->fields.baseSvtData;
  CombineInfoComponent__initResStatusGrid(v4, (const MethodInfo *)resSvtData);
  if ( !baseSvtData )
    goto LABEL_118;
  lv = baseSvtData->fields.lv;
  combineResSvtLv = resSvtData->fields.combineResSvtLv;
  this = (CombineInfoComponent_o *)v4->fields.baseSvtData;
  if ( !this )
    goto LABEL_118;
  UserServantEntity__getExpInfo((UserServantEntity_o *)this, &exp, (int32_t *)&barExp + 1, (float *)&barExp, 0);
  this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
  if ( !this )
    goto LABEL_118;
  UIProgressBar__set_value((UIProgressBar_o *)this, *(float *)&barExp, 0);
  this = (CombineInfoComponent_o *)v4->fields.resLvLb;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resMaxLvLb )
    goto LABEL_118;
  v7 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resMaxLvLb,
                                     (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resHpLb )
    goto LABEL_118;
  v8 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resHpLb,
                                     (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resAtkLb )
    goto LABEL_118;
  v9 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resAtkLb,
                                     (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v7 )
    goto LABEL_118;
  v10 = (UIWidget_o *)this;
  v63.fields.r = 1.0;
  v63.fields.g = 1.0;
  v63.fields.b = 1.0;
  v63.fields.a = 1.0;
  UIWidget__set_color(v7, v63, 0);
  if ( !v8 )
    goto LABEL_118;
  v64.fields.r = 1.0;
  v64.fields.g = 1.0;
  v64.fields.b = 1.0;
  v64.fields.a = 1.0;
  UIWidget__set_color(v8, v64, 0);
  if ( !v9 )
    goto LABEL_118;
  v65.fields.r = 1.0;
  v65.fields.g = 1.0;
  v65.fields.b = 1.0;
  v65.fields.a = 1.0;
  UIWidget__set_color(v9, v65, 0);
  if ( !v10 )
    goto LABEL_118;
  v66.fields.r = 1.0;
  v66.fields.g = 1.0;
  v66.fields.b = 1.0;
  v66.fields.a = 1.0;
  UIWidget__set_color(v10, v66, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoLb;
  if ( !this )
    goto LABEL_118;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoLb2;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoLb3;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoLb4;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon2;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon3;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon4;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v11 = combineResSvtLv - lv;
  if ( v11 < 1 )
  {
    if ( v4->fields.dispType == 2 )
    {
      v14 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v61.fields.currentCryptoKey = v14;
      *(_QWORD *)&v61.fields.fakeValue = v13;
      HIDWORD(v56) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v61, 0);
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_118;
      combineResLimitCnt = resSvtData->fields.combineResLimitCnt;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0);
      if ( !System_Int32__Equals_65475116((int32_t)&v56 + 4, combineResLimitCnt, 0)
        && UserServantEntity__isLevelMax(baseSvtData, 0) )
      {
        this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
        if ( !this )
          goto LABEL_118;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_118;
        v16 = 0;
LABEL_51:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v16, 0);
        this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
        if ( !this )
          goto LABEL_118;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_118;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
        if ( !this )
          goto LABEL_118;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        goto LABEL_65;
      }
    }
    else
    {
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_118;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0);
    }
    this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
    if ( !this )
      goto LABEL_118;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_118;
    v16 = 1;
    goto LABEL_51;
  }
  this = (CombineInfoComponent_o *)v4->fields.resExpBar;
  if ( !this )
    goto LABEL_118;
  UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
  this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
  if ( combineResSvtLv != resSvtData->fields.combineResSvtMaxLv )
  {
    if ( !this )
      goto LABEL_118;
    combineResExpBarVal = resSvtData->fields.combineResExpBarVal;
    goto LABEL_56;
  }
  if ( !this )
    goto LABEL_118;
  if ( v11 != 1 )
  {
    combineResExpBarVal = 1.0;
LABEL_56:
    UIProgressBar__set_value((UIProgressBar_o *)this, combineResExpBarVal, 0);
    this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
    if ( !this )
      goto LABEL_118;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_118;
    v12 = 1;
    goto LABEL_59;
  }
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_118;
  v12 = 0;
LABEL_59:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0);
  this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v18 = CombineInfoComponent_TypeInfo;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v18 = CombineInfoComponent_TypeInfo;
  }
  UIWidget__set_color(v7, v18->static_fields->COLOR_VAL, 0);
LABEL_65:
  switch ( v4->fields.dispType )
  {
    case 0:
      resLvLb = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0);
      if ( !resLvLb )
        goto LABEL_118;
      UIExtrusionLabel__set_text(resLvLb, (System_String_o *)this, 0);
      resMaxLvLb = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0);
      if ( !resMaxLvLb )
        goto LABEL_118;
      UILabel__set_text(resMaxLvLb, (System_String_o *)this, 0);
      goto LABEL_80;
    case 1:
      v21 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)baseSvtData + 256, 0);
      if ( !v21 )
        goto LABEL_118;
      UIExtrusionLabel__set_text(v21, (System_String_o *)this, 0);
      v22 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0);
      if ( !v22 )
        goto LABEL_118;
      UILabel__set_text(v22, (System_String_o *)this, 0);
      v23 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v23 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v8, v23->static_fields->COLOR_VAL, 0);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v24);
      resExpValLb = v4->fields.resExpValLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_65475288(
                                         (int)resSvtData + 40,
                                         (System_String_o *)StringLiteral_396/*"#,0"*/,
                                         0);
      if ( !resExpValLb )
        goto LABEL_118;
      goto LABEL_84;
    case 2:
      v26 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0);
      if ( !v26 )
        goto LABEL_118;
      UIExtrusionLabel__set_text(v26, (System_String_o *)this, 0);
      v27 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0);
      if ( !v27 )
        goto LABEL_118;
      UILabel__set_text(v27, (System_String_o *)this, 0);
      v29 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v28 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v62.fields.currentCryptoKey = v29;
      *(_QWORD *)&v62.fields.fakeValue = v28;
      LODWORD(v56) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v62, 0);
      if ( System_Int32__Equals_65475116((int32_t)&v56, resSvtData->fields.combineResLimitCnt, 0) )
      {
LABEL_80:
        isLevelMax = UserServantEntity__isLevelMax(baseSvtData, 0);
        resExpValLb = v4->fields.infoLb;
        if ( isLevelMax )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (CombineInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12577/*"SVTEQ_LVMAX_INFO_TXT"*/, 0);
          if ( resExpValLb )
          {
LABEL_84:
            INIT_VAL_TXT = (System_String_o *)this;
LABEL_95:
            UILabel__set_text(resExpValLb, INIT_VAL_TXT, 0);
            goto LABEL_103;
          }
        }
        else
        {
          this = (CombineInfoComponent_o *)CombineInfoComponent_TypeInfo;
          if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          if ( resExpValLb )
          {
            INIT_VAL_TXT = CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT;
            goto LABEL_95;
          }
        }
LABEL_118:
        sub_1C6BC60(this, resSvtData);
      }
      infoLb = v4->fields.infoLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8611/*"MAX_LVUP_TXT"*/, 0);
      LevelMax = UserServantEntity__getLevelMax(baseSvtData, 0);
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
      combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
      this = (CombineInfoComponent_o *)System_String__Format_64008100(v42, v43, v44, 0);
      if ( !infoLb )
        goto LABEL_118;
      UILabel__set_text(infoLb, (System_String_o *)this, 0);
      v45 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v45 = CombineInfoComponent_TypeInfo;
      }
      p_r = &v45->static_fields->COLOR_VAL.fields.r;
      v40 = v8;
      v36 = *p_r;
      v37 = p_r[1];
      v38 = p_r[2];
      v39 = p_r[3];
LABEL_102:
      UIWidget__set_color(v40, *(UnityEngine_Color_o *)&v36, 0);
LABEL_103:
      LimitCntMax = UserServantEntity__getLimitCntMax(baseSvtData, 0);
      CombineInfoComponent__setResLimitCntInfo(v4, LimitCntMax, resSvtData->fields.combineResLimitCnt, v48);
      OverwriteStatus = UserServantEntity__GetOverwriteStatus(baseSvtData, 0, 0);
      HIDWORD(v57) = resSvtData->fields.combineResHp;
      resHpLb = v4->fields.resHpLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_65475288(
                                         (int32_t)&v57 + 4,
                                         (System_String_o *)StringLiteral_9229/*"N0"*/,
                                         0);
      if ( !resHpLb )
        goto LABEL_118;
      UILabel__set_text(resHpLb, (System_String_o *)this, 0);
      if ( !OverwriteStatus )
        goto LABEL_118;
      if ( OverwriteStatus->fields._Hp_k__BackingField != HIDWORD(v57) )
      {
        v51 = CombineInfoComponent_TypeInfo;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v51 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v9, v51->static_fields->COLOR_VAL, 0);
      }
      LODWORD(v57) = resSvtData->fields.combineResAtk;
      resAtkLb = v4->fields.resAtkLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_65475288(
                                         (int32_t)&v57,
                                         (System_String_o *)StringLiteral_9229/*"N0"*/,
                                         0);
      if ( !resAtkLb )
        goto LABEL_118;
      UILabel__set_text(resAtkLb, (System_String_o *)this, 0);
      if ( OverwriteStatus->fields._Atk_k__BackingField != (_DWORD)v57 )
      {
        v53 = CombineInfoComponent_TypeInfo;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v53 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v10, v53->static_fields->COLOR_VAL, 0);
      }
      if ( v4->fields.dispType == 4 )
      {
        v69.fields.r = 1.0;
        v69.fields.g = 1.0;
        v69.fields.b = 1.0;
        v69.fields.a = 1.0;
        UIWidget__set_color(v7, v69, 0);
        v70.fields.r = 1.0;
        v70.fields.g = 1.0;
        v70.fields.b = 1.0;
        v70.fields.a = 1.0;
        UIWidget__set_color(v9, v70, 0);
        v71.fields.r = 1.0;
        v71.fields.g = 1.0;
        v71.fields.b = 1.0;
        v71.fields.a = 1.0;
        UIWidget__set_color(v10, v71, 0);
      }
      this = (CombineInfoComponent_o *)v4->fields.resStatusInfo;
      if ( !this )
        goto LABEL_118;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      return;
    case 4:
      v32 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0);
      if ( !v32 )
        goto LABEL_118;
      UIExtrusionLabel__set_text(v32, (System_String_o *)this, 0);
      v33 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0);
      if ( !v33 )
        goto LABEL_118;
      UILabel__set_text(v33, (System_String_o *)this, 0);
      v34 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v34 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v8, v34->static_fields->COLOR_VAL, 0);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v35);
      this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
      if ( !this )
        goto LABEL_118;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v67.fields.r = 1.0;
      v67.fields.g = 1.0;
      v67.fields.b = 1.0;
      v67.fields.a = 1.0;
      UIWidget__set_color(v7, v67, 0);
      v68.fields.r = 1.0;
      v68.fields.g = 1.0;
      v68.fields.b = 1.0;
      v68.fields.a = 1.0;
      UIWidget__set_color(v9, v68, 0);
      v36 = 1.0;
      v37 = 1.0;
      v38 = 1.0;
      v39 = 1.0;
      v40 = v10;
      goto LABEL_102;
    default:
      goto LABEL_103;
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineInfoComponent__setCurrentLimitCntInfo(
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
      if ( (unsigned int)i >= LODWORD(currentLimitCntInfos->max_length) )
        sub_1C6BC68(this);
      v9 = &currentLimitCntInfos->obj.klass + i;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9[4], 0)) == 0 )
      {
LABEL_9:
        sub_1C6BC60(this, *(_QWORD *)&maxLimitCnt);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      SetLimitCntInfoComponent__setEnableOnImg(v10, i < svtLimitCnt, v11);
    }
  }
}


void CombineInfoComponent__setCurrentStatusInfo(
        CombineInfoComponent_o *this,
        UserServantEntity_o *baseData,
        const MethodInfo *method)
{
  UserServantEntity_o **p_baseSvtData; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *isLevelMax; // x0
  System_String_o *v9; // x1
  struct UserServantEntity_o *baseSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x21
  UILabel_o *currentMaxLvLb; // x21
  UIExtrusionLabel_o *v13; // x21
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x22
  Il2CppObject *v17; // x0
  UILabel_o *currentExpValLb; // x21
  UserServantEntity_o *v19; // x8
  int32_t v20; // w20
  __int64 v21; // x21
  __int64 v22; // x22
  int32_t v23; // w0
  const MethodInfo *v24; // x3
  UILabel_o *currentHpLb; // x21
  System_String_o *v26; // x20
  UILabel_o *currentAtkLb; // x19
  __int64 barExp; // [xsp+8h] [xbp-38h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4CBA2B2 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&StringLiteral_7430/*"IMPOSSIBLE_LIMITUP_COLOR"*/);
    sub_1C6BA08(&StringLiteral_396/*"#,0"*/);
    sub_1C6BA08(&StringLiteral_9229/*"N0"*/);
    byte_4CBA2B2 = 1;
  }
  *(_QWORD *)lateExp = 0;
  barExp = 0;
  CombineInfoComponent__initCurrentStatusGrid(this, (const MethodInfo *)baseData);
  p_baseSvtData = &this->fields.baseSvtData;
  this->fields.baseSvtData = baseData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseSvtData, (int32_t)baseData, v6, v7);
  switch ( this->fields.dispType )
  {
    case 0:
    case 2:
    case 4:
      baseSvtData = this->fields.baseSvtData;
      if ( !baseSvtData )
        goto LABEL_42;
      currentLvLb = this->fields.currentLvLb;
      isLevelMax = System_Int32__ToString((int)baseSvtData + 256, 0);
      if ( !currentLvLb )
        goto LABEL_42;
      UIExtrusionLabel__set_text(currentLvLb, isLevelMax, 0);
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      currentMaxLvLb = this->fields.currentMaxLvLb;
      LODWORD(barExp) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0);
      isLevelMax = System_Int32__ToString((int32_t)&barExp, 0);
      if ( !currentMaxLvLb )
        goto LABEL_42;
      v9 = isLevelMax;
      goto LABEL_29;
    case 1:
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      v13 = this->fields.currentLvLb;
      isLevelMax = (System_String_o *)UserServantEntity__isLevelMax((UserServantEntity_o *)isLevelMax, 0);
      if ( ((unsigned __int8)isLevelMax & 1) != 0 )
        goto LABEL_13;
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      isLevelMax = (System_String_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)isLevelMax, 0);
      if ( ((unsigned __int8)isLevelMax & 1) != 0 )
      {
LABEL_13:
        if ( !*p_baseSvtData )
          goto LABEL_42;
        isLevelMax = System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0);
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7430/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0);
        if ( !*p_baseSvtData )
          goto LABEL_42;
        v14 = isLevelMax;
        v15 = (Il2CppObject *)System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0);
        isLevelMax = System_String__Format(v14, v15, 0);
      }
      v9 = isLevelMax;
      if ( !v13 )
        goto LABEL_42;
      UIExtrusionLabel__set_text(v13, isLevelMax, 0);
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      currentMaxLvLb = this->fields.currentMaxLvLb;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)isLevelMax, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7430/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0);
        if ( !*p_baseSvtData )
          goto LABEL_42;
        v16 = isLevelMax;
        LODWORD(barExp) = UserServantEntity__getLevelMax(*p_baseSvtData, 0);
        v17 = (Il2CppObject *)System_Int32__ToString((int32_t)&barExp, 0);
        isLevelMax = System_String__Format(v16, v17, 0);
      }
      else
      {
        isLevelMax = (System_String_o *)*p_baseSvtData;
        if ( !*p_baseSvtData )
          goto LABEL_42;
        LODWORD(barExp) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0);
        isLevelMax = System_Int32__ToString((int32_t)&barExp, 0);
      }
      v9 = isLevelMax;
      if ( !currentMaxLvLb )
        goto LABEL_42;
LABEL_29:
      UILabel__set_text(currentMaxLvLb, v9, 0);
LABEL_30:
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      UserServantEntity__getExpInfo((UserServantEntity_o *)isLevelMax, &lateExp[1], lateExp, (float *)&barExp + 1, 0);
      isLevelMax = (System_String_o *)this->fields.currentExpBar;
      if ( !isLevelMax )
        goto LABEL_42;
      UIProgressBar__set_value((UIProgressBar_o *)isLevelMax, *((float *)&barExp + 1), 0);
      currentExpValLb = this->fields.currentExpValLb;
      isLevelMax = System_Int32__ToString_65475288((int32_t)lateExp, (System_String_o *)StringLiteral_396/*"#,0"*/, 0);
      if ( !currentExpValLb )
        goto LABEL_42;
      UILabel__set_text(currentExpValLb, isLevelMax, 0);
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      isLevelMax = (System_String_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)isLevelMax, 0);
      v19 = *p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      v20 = (int)isLevelMax;
      v22 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v30.fields.currentCryptoKey = v22;
      *(_QWORD *)&v30.fields.fakeValue = v21;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v30, 0);
      CombineInfoComponent__setCurrentLimitCntInfo(this, v20, v23, v24);
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      isLevelMax = (System_String_o *)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)isLevelMax, 0, 0);
      if ( !isLevelMax )
        goto LABEL_42;
      currentHpLb = this->fields.currentHpLb;
      v26 = isLevelMax;
      LODWORD(barExp) = isLevelMax->fields._stringLength;
      isLevelMax = System_Int32__ToString_65475288((int32_t)&barExp, (System_String_o *)StringLiteral_9229/*"N0"*/, 0);
      if ( !currentHpLb
        || (UILabel__set_text(currentHpLb, isLevelMax, 0),
            currentAtkLb = this->fields.currentAtkLb,
            LODWORD(barExp) = *(_DWORD *)&v26->fields._firstChar,
            isLevelMax = System_Int32__ToString_65475288((int32_t)&barExp, (System_String_o *)StringLiteral_9229/*"N0"*/, 0),
            !currentAtkLb) )
      {
LABEL_42:
        sub_1C6BC60(isLevelMax, v9);
      }
      UILabel__set_text(currentAtkLb, isLevelMax, 0);
      return;
    default:
      goto LABEL_30;
  }
}


void CombineInfoComponent__setInitInfoLb(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UILabel_o *infoLb; // x19
  UILabel_o *infoLb2; // x0

  if ( (byte_4CBA2B1 & 1) == 0 )
  {
    sub_1C6BA08(&CombineInfoComponent_TypeInfo);
    sub_1C6BA08(&StringLiteral_25549/*"レベル上限："*/);
    byte_4CBA2B1 = 1;
  }
  switch ( this->fields.dispType )
  {
    case 0:
    case 2:
      infoLb = this->fields.infoLb;
      infoLb2 = (UILabel_o *)CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
      if ( !infoLb )
        goto LABEL_28;
      UILabel__set_text(infoLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
      break;
    case 1:
    case 4:
      infoLb2 = this->fields.infoLb;
      if ( !infoLb2 )
        goto LABEL_28;
      UILabel__set_text(infoLb2, (System_String_o *)StringLiteral_25549/*"レベル上限："*/, 0);
      infoLb2 = this->fields.infoLb2;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0);
      infoLb2 = this->fields.infoLb3;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0);
      infoLb2 = this->fields.infoLb4;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0);
      infoLb2 = this->fields.infoLb5;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0);
      infoLb2 = (UILabel_o *)this->fields.infoIcon2;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0);
      infoLb2 = (UILabel_o *)this->fields.infoIcon3;
      if ( !infoLb2 )
        goto LABEL_28;
      infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0);
      if ( !infoLb2 )
        goto LABEL_28;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0);
      infoLb2 = (UILabel_o *)this->fields.infoIcon4;
      if ( !infoLb2
        || (infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0),
            (infoLb2 = (UILabel_o *)this->fields.limitUpRewardGetIcon1) == 0)
        || (infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0),
            (infoLb2 = (UILabel_o *)this->fields.limitUpRewardGetIcon2) == 0)
        || (infoLb2 = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb2, 0)) == 0 )
      {
LABEL_28:
        sub_1C6BC60(infoLb2, method);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb2, 0, 0);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineInfoComponent__setResLimitCntInfo(
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
      if ( (unsigned int)i >= LODWORD(resLimitCntInfos->max_length) )
        sub_1C6BC68(this);
      v9 = &resLimitCntInfos->obj.klass + i;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9[4], 0)) == 0 )
      {
LABEL_9:
        sub_1C6BC60(this, *(_QWORD *)&maxLimitCnt);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      SetLimitCntInfoComponent__setEnableOnImg(v10, i < svtLimitCnt, v11);
    }
  }
}


void CombineInfoComponent_GetItemInfo___ctor(
        CombineInfoComponent_GetItemInfo_o *this,
        int32_t itemId,
        System_String_o *name,
        int32_t iconImageId,
        int32_t count,
        int32_t acquiredCount,
        const MethodInfo *method)
{
  CombineInfoComponent_GetItemInfo_o *v12; // x24
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12->fields.name = name;
  v12 = (CombineInfoComponent_GetItemInfo_o *)((char *)v12 + 24);
  v12[-1].fields.acquiredCount = itemId;
  sub_1C6B9AC((CGThumbnailListItem_o *)v12, (int32_t)name, v13, v14);
  LODWORD(v12->monitor) = iconImageId;
  HIDWORD(v12->monitor) = count;
  v12->fields.itemId = acquiredCount;
}


void CombineInfoComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CBA2B8 & 1) == 0 )
  {
    sub_1C6BA08(&CombineInfoComponent___c_TypeInfo);
    byte_4CBA2B8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(CombineInfoComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineInfoComponent___c_TypeInfo->static_fields->__9 = (struct CombineInfoComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)CombineInfoComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CombineInfoComponent___c___ctor(CombineInfoComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineInfoComponent___c___GetLimitCountUpReward_b__56_0(
        CombineInfoComponent___c_o *this,
        CombineInfoComponent_GetItemInfo_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C6BC60(this, 0);
  return data->fields.count == 0;
}


void CombineInfoComponent___c__DisplayClass56_0___ctor(
        CombineInfoComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CombineInfoComponent___c__DisplayClass56_0___GetLimitCountUpReward_b__1(
        CombineInfoComponent___c__DisplayClass56_0_o *this,
        CombineInfoComponent_GetItemInfo_o *data,
        const MethodInfo *method)
{
  struct GiftEntity_o *giftEntity; // x8

  if ( !data || (giftEntity = this->fields.giftEntity) == 0 )
    sub_1C6BC60(this, data);
  return data->fields.itemId == giftEntity->fields.objectId;
}