void CombineInfoComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  MissionNaviTransitionBoardItem_o *static_fields; // x0
  CombineInfoComponent_c *v9; // x8
  __int64 v10; // x1
  struct CombineInfoComponent_StaticFields *v11; // x9
  struct CombineInfoComponent_StaticFields *v12; // x9
  struct CombineInfoComponent_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct CombineInfoComponent_StaticFields *v20; // x8

  if ( (byte_5974AD0 & 1) == 0 )
  {
    sub_2213A60(&CombineInfoComponent_TypeInfo);
    sub_2213A60(&StringLiteral_21198/*"icon_reward_get"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974AD0 = 1;
  }
  CombineInfoComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_E9D290;
  v7 = (int)StringLiteral_1/*""*/;
  static_fields = (MissionNaviTransitionBoardItem_o *)CombineInfoComponent_TypeInfo->static_fields;
  static_fields->fields.sortValue0 = (int64_t)StringLiteral_1/*""*/;
  static_fields = (MissionNaviTransitionBoardItem_o *)((char *)static_fields + 32);
  static_fields[-1].fields._NaviAction_k__BackingField = (struct System_Action_o *)0x8C0000008CLL;
  static_fields[-1].fields._BoardType_k__BackingField = 34;
  sub_2213A04(static_fields, v7, v1, v2, v3, v4, v5, v6);
  v9 = CombineInfoComponent_TypeInfo;
  v10 = StringLiteral_21198/*"icon_reward_get"*/;
  v11 = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&v11->LIMIT_UP_GET_SKILL_INFO_POS.fields.x = 3246391296LL;
  v11->LIMIT_UP_GET_SKILL_INFO_POS.fields.z = 0.0;
  v12 = v9->static_fields;
  *(_QWORD *)&v12->LIMIT_UP_REWARD_INFO_POS.fields.x = 1127546880;
  v12->LIMIT_UP_REWARD_INFO_POS.fields.z = 0.0;
  v13 = v9->static_fields;
  v13->LIMIT_UP_REWARD_GET_ICON_NAME = (struct System_String_o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v13->LIMIT_UP_REWARD_GET_ICON_NAME,
    v10,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = CombineInfoComponent_TypeInfo->static_fields;
  v20->LIMIT_UP_REWARD_GET_ICON_ID = 9;
  v20->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = (struct UnityEngine_Color_o)xmmword_E9BCE0;
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
  __int64 v7; // x1
  CombineInfoComponent_c *v8; // x8
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_GameObject_o *v10; // x0
  __int64 v11; // x1
  UISprite_o *limitUpRewardGetIcon1; // x21
  System_String_o *LIMIT_UP_REWARD_GET_ICON_NAME; // x22
  UILabel_o *infoLb; // x21
  __int64 v15; // x1
  bool isLimitCountMax; // w8
  int v17; // w9
  System_String_o *v18; // x22
  Il2CppObject *v19; // x23
  Il2CppObject *v20; // x0
  CombineInfoComponent_o *v21; // x0
  const MethodInfo *v22; // x2
  char *v23; // x21
  System_Text_StringBuilder_o *v24; // x22
  System_Text_StringBuilder_o *appended; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  unsigned __int64 v28; // x24
  int32_t v29; // w23
  UILabel_o *infoLb2; // x23
  System_String_o *v31; // x24
  Il2CppObject *v32; // x0
  UILabel_o *v33; // x22
  _BOOL8 v34; // x0
  const MethodInfo *v35; // x4
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x1
  CombineInfoComponent_c *v38; // x8
  UnityEngine_GameObject_o *v39; // x21
  int32_t size; // w8
  ItemIconComponent_o *infoIcon3; // x20
  _BOOL4 v42; // w23
  int32_t *v43; // x8
  ItemIconComponent_o *v44; // x20
  int32_t *v45; // x8
  int32_t v46; // w24
  UILabel_o *infoLb3; // x20
  System_String_o *v48; // x21
  Il2CppObject *v49; // x22
  Il2CppObject *v50; // x0
  UILabel_o *v51; // x20
  int32_t v52; // w28
  UILabel_o *v53; // x20
  System_String_o *v54; // x21
  Il2CppObject *v55; // x0
  UILabel_o *v56; // x20
  ItemIconComponent_o *infoIcon4; // x20
  int32_t *v58; // x8
  int32_t v59; // w22
  UILabel_o *infoLb4; // x20
  System_String_o *v61; // x21
  Il2CppObject *v62; // x0
  UILabel_o *v63; // x20
  UILabel_o *infoLb5; // x20
  UILabel_o *v65; // x20
  bool v66; // w1
  int32_t combineResSvtMaxLv; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t LevelMax; // [xsp+8h] [xbp-68h] BYREF
  bool isAllAcquired; // [xsp+Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *getItemInfoList; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = resSvtData;
  if ( (byte_5974ACD & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&CombineInfoComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&StringLiteral_8977/*"MAX_LVUP_TXT"*/);
    sub_2213A60(&StringLiteral_8626/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/);
    sub_2213A60(&StringLiteral_8624/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/);
    sub_2213A60(&StringLiteral_8628/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/);
    sub_2213A60(&StringLiteral_8625/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/);
    sub_2213A60(&StringLiteral_8627/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/);
    sub_2213A60(&StringLiteral_8618/*"LIMITUP_MAX_TXT"*/);
    byte_5974ACD = 1;
  }
  getSkillRewardObj = (char *)this->fields.getSkillRewardObj;
  getItemInfoList = 0;
  isAllAcquired = 0;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0);
  v8 = CombineInfoComponent_TypeInfo;
  v9 = gameObject;
  if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v7);
    v8 = CombineInfoComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v9, v8->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0);
  getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  v10 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0);
  GameObjectExtensions__SetLocalPosition(v10, CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_INFO_POS, 0);
  limitUpRewardGetIcon1 = this->fields.limitUpRewardGetIcon1;
  LIMIT_UP_REWARD_GET_ICON_NAME = CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_NAME;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
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
    goto LABEL_158;
  UILabel__set_overflowMethod((UILabel_o *)getSkillRewardObj, 2, 0);
  getSkillRewardObj = (char *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  infoLb = this->fields.infoLb;
  isLimitCountMax = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0);
  v17 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( isLimitCountMax )
  {
    if ( !v17 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8618/*"LIMITUP_MAX_TXT"*/, 0);
  }
  else
  {
    if ( !v17 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8977/*"MAX_LVUP_TXT"*/, 0);
    if ( !this->fields.baseSvtData )
      goto LABEL_158;
    v18 = (System_String_o *)getSkillRewardObj;
    LevelMax = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0);
    getSkillRewardObj = (char *)j_il2cpp_value_box_0(qword_5984348, &LevelMax);
    if ( !v3 )
      goto LABEL_158;
    v19 = (Il2CppObject *)getSkillRewardObj;
    combineResSvtMaxLv = v3->fields.combineResSvtMaxLv;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &combineResSvtMaxLv);
    getSkillRewardObj = (char *)System_String__Format_75697880(v18, v19, v20, 0);
  }
  resSvtData = (CombineSvtData_o *)getSkillRewardObj;
  if ( !infoLb )
    goto LABEL_158;
  UILabel__set_text(infoLb, (System_String_o *)getSkillRewardObj, 0);
  getSkillRewardObj = (char *)CombineInfoComponent__GetNewReleaseSkillNumList(v21, v3, v22);
  if ( !getSkillRewardObj )
    goto LABEL_158;
  v23 = getSkillRewardObj;
  if ( *((_QWORD *)getSkillRewardObj + 3) )
  {
    getSkillRewardObj = (char *)this->fields.infoLb2;
    if ( !getSkillRewardObj )
      goto LABEL_158;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
    if ( !getSkillRewardObj )
      goto LABEL_158;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
    getSkillRewardObj = (char *)this->fields.infoIcon2;
    if ( !getSkillRewardObj )
      goto LABEL_158;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
    if ( !getSkillRewardObj )
      goto LABEL_158;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
    v24 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v24, 0);
    v27 = *((_QWORD *)v23 + 3);
    if ( (int)v27 >= 1 )
    {
      v28 = 0;
      v29 = (_DWORD)v23 + 32;
      do
      {
        if ( v28 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
          getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8627/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, 0);
          if ( !v24 )
            goto LABEL_158;
          appended = System_Text_StringBuilder__Append_75735064(v24, (System_String_o *)getSkillRewardObj, 0);
          if ( v28 >= *((unsigned int *)v23 + 6) )
            goto LABEL_159;
          getSkillRewardObj = (char *)System_Int32__ToString(v29, 0);
        }
        else
        {
          if ( !(_DWORD)v27 )
LABEL_159:
            sub_2213CE4(appended);
          getSkillRewardObj = (char *)System_Int32__ToString(v29, 0);
          if ( !v24 )
            goto LABEL_158;
        }
        appended = System_Text_StringBuilder__Append_75735064(v24, (System_String_o *)getSkillRewardObj, 0);
        LODWORD(v27) = *((_DWORD *)v23 + 6);
        ++v28;
        v29 += 4;
      }
      while ( (__int64)v28 < (int)v27 );
    }
    infoLb2 = this->fields.infoLb2;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8628/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, 0);
    if ( !v24 )
      goto LABEL_158;
    v31 = (System_String_o *)getSkillRewardObj;
    v32 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v24->klass->vtable._3_ToString.methodPtr)(
                            v24,
                            v24->klass->vtable._3_ToString.method);
    getSkillRewardObj = (char *)System_String__Format(v31, v32, 0);
    if ( !infoLb2 )
      goto LABEL_158;
    UILabel__set_text(infoLb2, (System_String_o *)getSkillRewardObj, 0);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v33 = this->fields.infoLb2;
    if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
    if ( !v33 )
      goto LABEL_158;
    UILabel__SetCondensedScale(v33, CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH, 0, 0);
  }
  getSkillRewardObj = (char *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  v34 = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0);
  if ( v34 )
    return;
  if ( !*((_QWORD *)v23 + 3) )
  {
    getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
    if ( !getSkillRewardObj )
      goto LABEL_158;
    v36 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0);
    v38 = CombineInfoComponent_TypeInfo;
    v39 = v36;
    if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v37);
      v38 = CombineInfoComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v39, v38->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0);
  }
  CombineInfoComponent__GetLimitCountUpReward((CombineInfoComponent_o *)v34, v3, &getItemInfoList, &isAllAcquired, v35);
  if ( !getItemInfoList )
    goto LABEL_158;
  size = getItemInfoList->fields._size;
  if ( size < 1 )
    return;
  getSkillRewardObj = (char *)this->fields.infoLb3;
  if ( size == 1 )
  {
    if ( getSkillRewardObj )
    {
      getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
      if ( getSkillRewardObj )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
        getSkillRewardObj = (char *)this->fields.infoIcon3;
        if ( getSkillRewardObj )
        {
          getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)getSkillRewardObj,
                                        0);
          if ( getSkillRewardObj )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
            getSkillRewardObj = (char *)getItemInfoList;
            if ( getItemInfoList )
            {
              infoIcon3 = this->fields.infoIcon3;
              getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                            (System_Collections_Generic_List_object__o *)getItemInfoList,
                                            0,
                                            (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
              if ( getSkillRewardObj )
              {
                if ( infoIcon3 )
                {
                  ItemIconComponent__SetGift_47884936(infoIcon3, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0);
                  v42 = isAllAcquired;
                  getSkillRewardObj = (char *)getItemInfoList;
                  if ( isAllAcquired )
                  {
                    if ( !getItemInfoList )
                      goto LABEL_158;
                    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                                  0,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
                    if ( !getSkillRewardObj )
                      goto LABEL_158;
                    v43 = (int32_t *)(getSkillRewardObj + 40);
                  }
                  else
                  {
                    if ( !getItemInfoList )
                      goto LABEL_158;
                    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                                  0,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
                    if ( !getSkillRewardObj )
                      goto LABEL_158;
                    v43 = (int32_t *)(getSkillRewardObj + 36);
                  }
                  v46 = *v43;
                  infoLb3 = this->fields.infoLb3;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, resSvtData);
                  getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8624/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, 0);
                  if ( getItemInfoList )
                  {
                    v48 = (System_String_o *)getSkillRewardObj;
                    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                                  0,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
                    if ( getSkillRewardObj )
                    {
                      v49 = (Il2CppObject *)*((_QWORD *)getSkillRewardObj + 3);
                      LevelMax = v46;
                      v50 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &LevelMax);
                      getSkillRewardObj = (char *)System_String__Format_75697880(v48, v49, v50, 0);
                      if ( infoLb3 )
                      {
                        UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0);
                        getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
                        v51 = this->fields.infoLb3;
                        if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
                        if ( v51 )
                        {
                          UILabel__SetCondensedScale(
                            v51,
                            CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH,
                            0,
                            0);
                          goto LABEL_123;
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
LABEL_158:
    sub_2213CDC(getSkillRewardObj, resSvtData);
  }
  if ( !getSkillRewardObj )
    goto LABEL_158;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_158;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
  getSkillRewardObj = (char *)this->fields.infoIcon3;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_158;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
  getSkillRewardObj = (char *)getItemInfoList;
  if ( !getItemInfoList )
    goto LABEL_158;
  v44 = this->fields.infoIcon3;
  getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)getItemInfoList,
                                0,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
  if ( !getSkillRewardObj || !v44 )
    goto LABEL_158;
  ItemIconComponent__SetGift_47884936(v44, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0);
  v42 = isAllAcquired;
  getSkillRewardObj = (char *)getItemInfoList;
  if ( isAllAcquired )
  {
    if ( !getItemInfoList )
      goto LABEL_158;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  0,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_158;
    v45 = (int32_t *)(getSkillRewardObj + 40);
  }
  else
  {
    if ( !getItemInfoList )
      goto LABEL_158;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  0,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_158;
    v45 = (int32_t *)(getSkillRewardObj + 36);
  }
  v52 = *v45;
  v53 = this->fields.infoLb3;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, resSvtData);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_8625/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0);
  LevelMax = v52;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &LevelMax);
  getSkillRewardObj = (char *)System_String__Format(v54, v55, 0);
  if ( !v53 )
    goto LABEL_158;
  UILabel__set_text(v53, (System_String_o *)getSkillRewardObj, 0);
  getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  v56 = this->fields.infoLb3;
  if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
  if ( !v56 )
    goto LABEL_158;
  UILabel__SetCondensedScale(v56, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0, 0);
  getSkillRewardObj = (char *)this->fields.infoLb4;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_158;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
  getSkillRewardObj = (char *)this->fields.infoIcon4;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_158;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
  getSkillRewardObj = (char *)getItemInfoList;
  if ( !getItemInfoList )
    goto LABEL_158;
  infoIcon4 = this->fields.infoIcon4;
  getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)getItemInfoList,
                                1,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
  if ( !getSkillRewardObj || !infoIcon4 )
    goto LABEL_158;
  ItemIconComponent__SetGift_47884936(infoIcon4, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0);
  getSkillRewardObj = (char *)getItemInfoList;
  if ( v42 )
  {
    if ( !getItemInfoList )
      goto LABEL_158;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  1,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_158;
    v58 = (int32_t *)(getSkillRewardObj + 40);
  }
  else
  {
    if ( !getItemInfoList )
      goto LABEL_158;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  1,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_158;
    v58 = (int32_t *)(getSkillRewardObj + 36);
  }
  v59 = *v58;
  infoLb4 = this->fields.infoLb4;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, resSvtData);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_8625/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0);
  LevelMax = v59;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &LevelMax);
  getSkillRewardObj = (char *)System_String__Format(v61, v62, 0);
  if ( !infoLb4 )
    goto LABEL_158;
  UILabel__set_text(infoLb4, (System_String_o *)getSkillRewardObj, 0);
  getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  v63 = this->fields.infoLb4;
  if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
  if ( !v63 )
    goto LABEL_158;
  UILabel__SetCondensedScale(v63, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0, 0);
  getSkillRewardObj = (char *)this->fields.infoLb5;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_158;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
  infoLb5 = this->fields.infoLb5;
  getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8626/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, 0);
  if ( !infoLb5 )
    goto LABEL_158;
  UILabel__set_text(infoLb5, (System_String_o *)getSkillRewardObj, 0);
LABEL_123:
  getSkillRewardObj = (char *)this->fields.infoIcon3;
  if ( !v42 )
  {
    if ( getSkillRewardObj )
    {
      v76.fields.r = 1.0;
      v76.fields.g = 1.0;
      v76.fields.b = 1.0;
      v76.fields.a = 1.0;
      ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v76, 0);
      getSkillRewardObj = (char *)this->fields.infoIcon4;
      if ( getSkillRewardObj )
      {
        v77.fields.r = 1.0;
        v77.fields.g = 1.0;
        v77.fields.b = 1.0;
        v77.fields.a = 1.0;
        ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v77, 0);
        getSkillRewardObj = (char *)this->fields.infoLb3;
        if ( getSkillRewardObj )
        {
          v78.fields.r = 1.0;
          v78.fields.g = 1.0;
          v78.fields.b = 1.0;
          v78.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v78, 0);
          getSkillRewardObj = (char *)this->fields.infoLb4;
          if ( getSkillRewardObj )
          {
            v79.fields.r = 1.0;
            v79.fields.g = 1.0;
            v79.fields.b = 1.0;
            v79.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v79, 0);
            getSkillRewardObj = (char *)this->fields.infoLb5;
            if ( getSkillRewardObj )
            {
              v80.fields.r = 1.0;
              v80.fields.g = 1.0;
              v80.fields.b = 1.0;
              v80.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v80, 0);
              getSkillRewardObj = (char *)this->fields.infoLb3;
              if ( getSkillRewardObj )
              {
                v81.fields.r = 0.0;
                v81.fields.g = 0.0;
                v81.fields.b = 0.0;
                v81.fields.a = 1.0;
                UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v81, 0);
                getSkillRewardObj = (char *)this->fields.infoLb4;
                if ( getSkillRewardObj )
                {
                  v82.fields.r = 0.0;
                  v82.fields.g = 0.0;
                  v82.fields.b = 0.0;
                  v82.fields.a = 1.0;
                  UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v82, 0);
                  getSkillRewardObj = (char *)this->fields.infoLb5;
                  if ( getSkillRewardObj )
                  {
                    v83.fields.r = 0.0;
                    v83.fields.g = 0.0;
                    v83.fields.b = 0.0;
                    v83.fields.a = 1.0;
                    UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v83, 0);
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
                              v66 = 0;
                              goto LABEL_156;
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
    goto LABEL_158;
  }
  if ( !getSkillRewardObj )
    goto LABEL_158;
  v71.fields.r = 0.5;
  v71.fields.g = 0.5;
  v71.fields.b = 0.5;
  v71.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v71, 0);
  getSkillRewardObj = (char *)this->fields.infoIcon4;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  v72.fields.r = 0.5;
  v72.fields.g = 0.5;
  v72.fields.b = 0.5;
  v72.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v72, 0);
  getSkillRewardObj = (char *)this->fields.infoLb3;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  v73.fields.r = 0.5;
  v73.fields.g = 0.5;
  v73.fields.b = 0.5;
  v73.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v73, 0);
  getSkillRewardObj = (char *)this->fields.infoLb4;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  v74.fields.r = 0.5;
  v74.fields.g = 0.5;
  v74.fields.b = 0.5;
  v74.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v74, 0);
  getSkillRewardObj = (char *)this->fields.infoLb5;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  v75.fields.r = 0.5;
  v75.fields.g = 0.5;
  v75.fields.b = 0.5;
  v75.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v75, 0);
  getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  v65 = this->fields.infoLb3;
  if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
  if ( !v65 )
    goto LABEL_158;
  UILabel__set_effectColor(v65, CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR, 0);
  getSkillRewardObj = (char *)this->fields.infoLb4;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  UILabel__set_effectColor(
    (UILabel_o *)getSkillRewardObj,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0);
  getSkillRewardObj = (char *)this->fields.infoLb5;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  UILabel__set_effectColor(
    (UILabel_o *)getSkillRewardObj,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0);
  getSkillRewardObj = (char *)this->fields.limitUpRewardGetIcon1;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_158;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0);
  if ( !getItemInfoList )
    goto LABEL_158;
  if ( getItemInfoList->fields._size < 2 )
    return;
  getSkillRewardObj = (char *)this->fields.limitUpRewardGetIcon2;
  if ( !getSkillRewardObj )
    goto LABEL_158;
  getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0);
  if ( !getSkillRewardObj )
    goto LABEL_158;
  v66 = 1;
LABEL_156:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, v66, 0);
}


void CombineInfoComponent__GetLimitCountUpReward(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **getItemInfoList,
        bool *isAllAcquired,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x22
  void *CombineLimitGiftId; // x0
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **v17; // x20
  struct UserServantEntity_o *baseSvtData; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v19; // x29
  __int64 v20; // x24
  __int64 v21; // x25
  int64_t v22; // x23
  Il2CppObject *v23; // x23
  Il2CppObject *v24; // x24
  System_Collections_Generic_List_object__o *v25; // x0
  int v26; // w25
  __int64 v27; // x27
  struct UserServantEntity_o *v28; // x8
  __int64 v29; // x26
  __int64 v30; // x28
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v39; // x19
  System_Func_object__bool__o *v40; // x29
  int v41; // w20
  System_String_o *v42; // x28
  int32_t IconImageId; // w29
  __int64 v44; // x27
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x8
  System_Collections_Generic_List_object__o *v61; // x19
  struct CombineInfoComponent___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__56_0; // x20
  Il2CppObject *v64; // x21
  struct CombineInfoComponent___c_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+10h] [xbp-80h]
  System_String_o *countText; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  if ( (byte_5974ACF & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CombineLimitGiftMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
    sub_2213A60(&System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
    sub_2213A60(&CombineInfoComponent_GetItemInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
    sub_2213A60(&Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__);
    sub_2213A60(&Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__);
    sub_2213A60(&CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
    sub_2213A60(&CombineInfoComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974ACF = 1;
  }
  countText = 0;
  nameText = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  *getItemInfoList = (System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *)v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)getItemInfoList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  *isAllAcquired = 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  CombineLimitGiftId = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v14);
    CombineLimitGiftId = NetworkManager_TypeInfo;
  }
  v17 = getItemInfoList;
  if ( !resSvtData )
    goto LABEL_57;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_57;
  v19 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v20 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  v22 = *(_QWORD *)(*((_QWORD *)CombineLimitGiftId + 23) + 64LL);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v77.fields.currentCryptoKey = v20;
  *(_QWORD *)&v77.fields.fakeValue = v21;
  CombineLimitGiftId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v77, 0);
  if ( !Master_object )
    goto LABEL_57;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       v22,
                       (int32_t)CombineLimitGiftId,
                       0);
  v23 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v24 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  CombineLimitGiftId = resSvtData->fields.baseSvtData;
  if ( !CombineLimitGiftId )
    goto LABEL_57;
  v26 = UserServantEntity__getLimitCount((UserServantEntity_o *)CombineLimitGiftId, 0) + 1;
  if ( v26 <= resSvtData->fields.combineResLimitCnt )
  {
    while ( 1 )
    {
      v27 = sub_2213CCC(CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
      CombineInfoComponent___c__DisplayClass56_0___ctor((CombineInfoComponent___c__DisplayClass56_0_o *)v27, 0);
      v28 = resSvtData->fields.baseSvtData;
      if ( !v28 )
        break;
      v29 = *(_QWORD *)&v28->fields.svtId.fields.currentCryptoKey;
      v30 = *(_QWORD *)&v28->fields.svtId.fields.fakeValue;
      if ( !*(&(*v19)->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(*v19, v14);
      *(_QWORD *)&v78.fields.currentCryptoKey = v29;
      *(_QWORD *)&v78.fields.fakeValue = v30;
      CombineLimitGiftId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v78, 0);
      if ( !v23 )
        break;
      CombineLimitGiftId = (void *)CombineLimitGiftMaster__GetCombineLimitGiftId(
                                     (CombineLimitGiftMaster_o *)v23,
                                     (int32_t)CombineLimitGiftId,
                                     v26,
                                     0);
      if ( (_DWORD)CombineLimitGiftId )
      {
        if ( !v24 )
          break;
        CombineLimitGiftId = GiftMaster__getDataById((GiftMaster_o *)v24, (int32_t)CombineLimitGiftId, 0);
        if ( !v27 )
          break;
        *(_QWORD *)(v27 + 16) = CombineLimitGiftId;
        v37 = v27 + 16;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v27 + 16),
          (int32_t)CombineLimitGiftId,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        if ( *(_QWORD *)(v27 + 16) )
        {
          v38 = (System_Collections_Generic_IEnumerable_TSource__o *)*v17;
          v39 = v19;
          v40 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v40,
            (Il2CppObject *)v27,
            Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__,
            0);
          CombineLimitGiftId = System_Linq_Enumerable__FirstOrDefault_object__59254852(
                                 v38,
                                 (System_Func_TSource__bool__o *)v40,
                                 (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
          if ( CombineLimitGiftId )
          {
            if ( EntityDefinitely && v26 <= EntityDefinitely->fields.maxLimitCount )
            {
              if ( !*(_QWORD *)v37 )
                break;
              v19 = v39;
              *((_DWORD *)CombineLimitGiftId + 10) += *(_DWORD *)(*(_QWORD *)v37 + 28LL);
            }
            else
            {
              *isAllAcquired = 0;
              if ( !*(_QWORD *)v37 )
                break;
              v19 = v39;
              *((_DWORD *)CombineLimitGiftId + 9) += *(_DWORD *)(*(_QWORD *)v37 + 28LL);
            }
          }
          else
          {
            CombineLimitGiftId = *(void **)v37;
            countText = (System_String_o *)StringLiteral_1/*""*/;
            nameText = (System_String_o *)StringLiteral_1/*""*/;
            if ( !CombineLimitGiftId )
              break;
            GiftEntity__GetInfo((GiftEntity_o *)CombineLimitGiftId, &nameText, &countText, 0);
            CombineLimitGiftId = *(void **)v37;
            if ( !*(_QWORD *)v37 )
              break;
            v41 = *((_DWORD *)CombineLimitGiftId + 6);
            v42 = nameText;
            IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)CombineLimitGiftId, 0);
            v44 = sub_2213CCC(CombineInfoComponent_GetItemInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v44, 0);
            *(_DWORD *)(v44 + 16) = v41;
            *(_QWORD *)(v44 + 24) = v42;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 24), (int32_t)v42, v45, v46, v47, v48, v49, v50);
            *(_DWORD *)(v44 + 36) = 0;
            *(_DWORD *)(v44 + 40) = 0;
            *(_DWORD *)(v44 + 32) = IconImageId;
            if ( !EntityDefinitely )
              goto LABEL_35;
            if ( v26 <= EntityDefinitely->fields.maxLimitCount )
            {
              v17 = getItemInfoList;
              if ( !*(_QWORD *)v37 )
                break;
              v19 = v39;
              *(_DWORD *)(v44 + 40) = *(_DWORD *)(*(_QWORD *)v37 + 28LL);
            }
            else
            {
LABEL_35:
              v17 = getItemInfoList;
              *isAllAcquired = 0;
              if ( !*(_QWORD *)v37 )
                break;
              v19 = v39;
              *(_DWORD *)(v44 + 36) += *(_DWORD *)(*(_QWORD *)v37 + 28LL);
            }
            CombineLimitGiftId = *v17;
            if ( !*v17 )
              break;
            v57 = *((_QWORD *)CombineLimitGiftId + 2);
            v58 = Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__;
            ++*((_DWORD *)CombineLimitGiftId + 7);
            if ( !v57 )
              break;
            v59 = *((int *)CombineLimitGiftId + 6);
            if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)CombineLimitGiftId,
                (Il2CppObject *)v44,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
            }
            else
            {
              v60 = v57 + 8 * v59;
              *((_DWORD *)CombineLimitGiftId + 6) = v59 + 1;
              *(_QWORD *)(v60 + 32) = v44;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v60 + 32), v44, v51, v52, v53, v54, v55, v56);
            }
          }
        }
      }
      if ( ++v26 > resSvtData->fields.combineResLimitCnt )
        goto LABEL_47;
    }
LABEL_57:
    sub_2213CDC(CombineLimitGiftId, v14);
  }
LABEL_47:
  if ( !*isAllAcquired )
  {
    v61 = (System_Collections_Generic_List_object__o *)*v17;
    CombineLimitGiftId = CombineInfoComponent___c_TypeInfo;
    if ( !*(&CombineInfoComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent___c_TypeInfo, v14);
      CombineLimitGiftId = CombineInfoComponent___c_TypeInfo;
    }
    static_fields = (struct CombineInfoComponent___c_StaticFields *)*((_QWORD *)CombineLimitGiftId + 23);
    _9__56_0 = (System_Predicate_object__o *)static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( !*((_DWORD *)CombineLimitGiftId + 57) )
      {
        j_il2cpp_runtime_class_init_0(CombineLimitGiftId, v14);
        static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
      }
      v64 = (Il2CppObject *)static_fields->__9;
      _9__56_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
      System_Predicate_object____ctor(
        _9__56_0,
        v64,
        Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__,
        0);
      v65 = CombineInfoComponent___c_TypeInfo->static_fields;
      v65->__9__56_0 = (struct System_Predicate_CombineInfoComponent_GetItemInfo__o *)_9__56_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->__9__56_0, (int32_t)_9__56_0, v66, v67, v68, v69, v70, v71);
    }
    if ( !v61 )
      goto LABEL_57;
    System_Collections_Generic_List_object___RemoveAll(
      v61,
      (System_Predicate_T__o *)_9__56_0,
      (const MethodInfo_4485290 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
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

  if ( (byte_5974ACE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5974ACE = 1;
  }
  idList = 0;
  v19 = 0;
  skillNameList = 0;
  v18 = 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
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
      sub_2213CE4(v5);
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
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
    sub_2213CDC(v5, v6);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void CombineInfoComponent__HideResStatusInfo(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resStatusInfo; // x0

  resStatusInfo = this->fields.resStatusInfo;
  if ( !resStatusInfo )
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(resStatusInfo, 0, 0);
}


void CombineInfoComponent__initCurrentStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  struct SetLimitCntInfoComponent_array *currentLimitCntInfos; // x8
  il2cpp_array_size_t max_length; // x20
  CombineInfoComponent_o *v4; // x19
  __int64 v5; // x21
  struct SetLimitCntInfoComponent_array *v6; // x8

  currentLimitCntInfos = this->fields.currentLimitCntInfos;
  if ( !currentLimitCntInfos )
    goto LABEL_10;
  max_length = currentLimitCntInfos->max_length;
  if ( (int)max_length >= 1 )
  {
    v4 = this;
    v5 = 0;
    while ( 1 )
    {
      v6 = v4->fields.currentLimitCntInfos;
      if ( !v6 )
        break;
      if ( (unsigned int)v5 >= LODWORD(v6->max_length) )
        sub_2213CE4(this);
      this = (CombineInfoComponent_o *)v6->m_Items[v5];
      if ( !this )
        break;
      this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( (_DWORD)max_length == (_DWORD)++v5 )
        return;
    }
LABEL_10:
    sub_2213CDC(this, method);
  }
}


void CombineInfoComponent__initResStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  struct SetLimitCntInfoComponent_array *resLimitCntInfos; // x8
  il2cpp_array_size_t max_length; // x20
  CombineInfoComponent_o *v4; // x19
  __int64 v5; // x21
  struct SetLimitCntInfoComponent_array *v6; // x8

  resLimitCntInfos = this->fields.resLimitCntInfos;
  if ( !resLimitCntInfos )
    goto LABEL_10;
  max_length = resLimitCntInfos->max_length;
  if ( (int)max_length >= 1 )
  {
    v4 = this;
    v5 = 0;
    while ( 1 )
    {
      v6 = v4->fields.resLimitCntInfos;
      if ( !v6 )
        break;
      if ( (unsigned int)v5 >= LODWORD(v6->max_length) )
        sub_2213CE4(this);
      this = (CombineInfoComponent_o *)v6->m_Items[v5];
      if ( !this )
        break;
      this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      if ( (_DWORD)max_length == (_DWORD)++v5 )
        return;
    }
LABEL_10:
    sub_2213CDC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineInfoComponent__initStatusInfo(CombineInfoComponent_o *this, int32_t type, const MethodInfo *method)
{
  UILabel_o *currentMaxLvLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x21
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  BalanceConfig_c *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_5974AC9 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CombineInfoComponent_TypeInfo);
    byte_5974AC9 = 1;
  }
  currentMaxLvLb = (UILabel_o *)CombineInfoComponent_TypeInfo;
  currentLvLb = this->fields.currentLvLb;
  if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, *(_QWORD *)&type);
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
  v10 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
    v10 = BalanceConfig_TypeInfo;
  }
  CombineInfoComponent__setCurrentLimitCntInfo(this, v10->static_fields->ServantLimitMax, 0, v9);
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
    sub_2213CDC(currentMaxLvLb, *(_QWORD *)&type);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)currentMaxLvLb, 0, 0);
  this->fields.dispType = type;
  CombineInfoComponent__setInitInfoLb(this, v11);
}


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
  UIProgressBar_o *resExpBar; // x8
  int32_t combineResLimitCnt; // w26
  bool v17; // w1
  float combineResExpBarVal; // s0
  __int64 v19; // x1
  CombineInfoComponent_c *v20; // x0
  int dispType; // w8
  UIExtrusionLabel_o *resLvLb; // x26
  UILabel_o *resMaxLvLb; // x26
  __int64 v24; // x1
  CombineInfoComponent_c *v25; // x0
  const MethodInfo *v26; // x2
  UILabel_o *resExpValLb; // x25
  UIExtrusionLabel_o *v28; // x26
  UILabel_o *v29; // x26
  __int64 v30; // x1
  CombineInfoComponent_c *v31; // x0
  const MethodInfo *v32; // x2
  UIWidget_o *v34; // x0
  UIExtrusionLabel_o *v37; // x25
  UILabel_o *v38; // x25
  UIExtrusionLabel_o *v39; // x26
  UILabel_o *v40; // x26
  __int64 v41; // x1
  __int64 v42; // x26
  __int64 v43; // x27
  int32_t v44; // w0
  int32_t v45; // w1
  __int64 v46; // x1
  bool isLevelMax; // w0
  System_String_o *INIT_VAL_TXT; // x1
  UILabel_o *infoLb; // x26
  System_String_o *v50; // x27
  Il2CppObject *v51; // x28
  Il2CppObject *v52; // x0
  __int64 v53; // x1
  CombineInfoComponent_c *v54; // x0
  UnityEngine_Color_o *p_COLOR_VAL; // x8
  int32_t LimitCntMax; // w0
  const MethodInfo *v57; // x3
  ServantOverwriteStatus_o *OverwriteStatus; // x24
  UILabel_o *resHpLb; // x25
  CombineInfoComponent_c *v60; // x0
  int32_t combineResAtk; // w8
  UILabel_o *resAtkLb; // x20
  CombineInfoComponent_c *v63; // x0
  int32_t combineResSvtMaxLv; // [xsp+8h] [xbp-88h] BYREF
  int32_t LevelMax; // [xsp+Ch] [xbp-84h] BYREF
  __int64 v66; // [xsp+10h] [xbp-80h] BYREF
  __int64 v67; // [xsp+18h] [xbp-78h] BYREF
  __int64 barExp; // [xsp+20h] [xbp-70h] BYREF
  __int64 exp; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_5974ACC & 1) == 0 )
  {
    sub_2213A60(&CombineInfoComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_8977/*"MAX_LVUP_TXT"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    this = (CombineInfoComponent_o *)sub_2213A60(&StringLiteral_13099/*"SVTEQ_LVMAX_INFO_TXT"*/);
    byte_5974ACC = 1;
  }
  barExp = 0;
  exp = 0;
  v66 = 0;
  v67 = 0;
  if ( !resSvtData )
    goto LABEL_123;
  baseSvtData = resSvtData->fields.baseSvtData;
  CombineInfoComponent__initResStatusGrid(v4, (const MethodInfo *)resSvtData);
  if ( !baseSvtData )
    goto LABEL_123;
  this = (CombineInfoComponent_o *)v4->fields.baseSvtData;
  lv = baseSvtData->fields.lv;
  HIDWORD(exp) = resSvtData->fields.combineResSvtLv;
  if ( !this )
    goto LABEL_123;
  UserServantEntity__getExpInfo(
    (UserServantEntity_o *)this,
    (int32_t *)&exp,
    (int32_t *)&barExp + 1,
    (float *)&barExp,
    0);
  this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
  if ( !this )
    goto LABEL_123;
  UIProgressBar__set_value((UIProgressBar_o *)this, *(float *)&barExp, 0);
  this = (CombineInfoComponent_o *)v4->fields.resLvLb;
  if ( !this )
    goto LABEL_123;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resMaxLvLb )
    goto LABEL_123;
  v7 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resMaxLvLb,
                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resHpLb )
    goto LABEL_123;
  v8 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resHpLb,
                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resAtkLb )
    goto LABEL_123;
  v9 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resAtkLb,
                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v7 )
    goto LABEL_123;
  v72.fields.r = 1.0;
  v72.fields.g = 1.0;
  v10 = (UIWidget_o *)this;
  v72.fields.b = 1.0;
  v72.fields.a = 1.0;
  UIWidget__set_color(v7, v72, 0);
  if ( !v8 )
    goto LABEL_123;
  v73.fields.r = 1.0;
  v73.fields.g = 1.0;
  v73.fields.b = 1.0;
  v73.fields.a = 1.0;
  UIWidget__set_color(v8, v73, 0);
  if ( !v9 )
    goto LABEL_123;
  v74.fields.r = 1.0;
  v74.fields.g = 1.0;
  v74.fields.b = 1.0;
  v74.fields.a = 1.0;
  UIWidget__set_color(v9, v74, 0);
  if ( !v10 )
    goto LABEL_123;
  v75.fields.r = 1.0;
  v75.fields.g = 1.0;
  v75.fields.b = 1.0;
  v75.fields.a = 1.0;
  UIWidget__set_color(v10, v75, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoLb;
  if ( !this )
    goto LABEL_123;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoLb2;
  if ( !this )
    goto LABEL_123;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoLb3;
  if ( !this )
    goto LABEL_123;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoLb4;
  if ( !this )
    goto LABEL_123;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon2;
  if ( !this )
    goto LABEL_123;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon3;
  if ( !this )
    goto LABEL_123;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon4;
  if ( !this )
    goto LABEL_123;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v11 = HIDWORD(exp) - lv;
  if ( v11 >= 1 )
  {
    this = (CombineInfoComponent_o *)v4->fields.resExpBar;
    if ( !this )
      goto LABEL_123;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
    if ( HIDWORD(exp) == resSvtData->fields.combineResSvtMaxLv )
    {
      this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
      if ( v11 == 1 )
      {
        if ( !this )
          goto LABEL_123;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_123;
        v12 = 0;
LABEL_60:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0);
        this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
        if ( !this )
          goto LABEL_123;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_123;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
        if ( !this )
          goto LABEL_123;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v20 = CombineInfoComponent_TypeInfo;
        if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v19);
          v20 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v7, v20->static_fields->COLOR_VAL, 0);
        goto LABEL_66;
      }
      if ( !this )
        goto LABEL_123;
      combineResExpBarVal = 1.0;
    }
    else
    {
      this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
      if ( !this )
        goto LABEL_123;
      combineResExpBarVal = resSvtData->fields.combineResExpBarVal;
    }
    UIProgressBar__set_value((UIProgressBar_o *)this, combineResExpBarVal, 0);
    this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
    if ( !this )
      goto LABEL_123;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_123;
    v12 = 1;
    goto LABEL_60;
  }
  if ( v4->fields.dispType != 2 )
  {
    this = (CombineInfoComponent_o *)v4->fields.resExpBar;
    if ( !this )
      goto LABEL_123;
    UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0);
LABEL_48:
    this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
    if ( !this )
      goto LABEL_123;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_123;
    v17 = 1;
    goto LABEL_51;
  }
  v13 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
  v14 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, resSvtData);
  *(_QWORD *)&v70.fields.currentCryptoKey = v13;
  *(_QWORD *)&v70.fields.fakeValue = v14;
  this = (CombineInfoComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v70, 0);
  resExpBar = (UIProgressBar_o *)v4->fields.resExpBar;
  HIDWORD(v66) = (_DWORD)this;
  if ( !resExpBar )
    goto LABEL_123;
  combineResLimitCnt = resSvtData->fields.combineResLimitCnt;
  UIProgressBar__set_value(resExpBar, resSvtData->fields.combineResExpBarVal, 0);
  if ( System_Int32__Equals_77138484((int32_t)&v66 + 4, combineResLimitCnt, 0)
    || !UserServantEntity__isLevelMax(baseSvtData, 0) )
  {
    goto LABEL_48;
  }
  this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
  if ( !this )
    goto LABEL_123;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_123;
  v17 = 0;
LABEL_51:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v17, 0);
  this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
  if ( !this )
    goto LABEL_123;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_66:
  dispType = v4->fields.dispType;
  if ( dispType <= 1 )
  {
    if ( dispType )
    {
      if ( dispType != 1 )
        goto LABEL_108;
      resLvLb = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)baseSvtData + 400, 0);
      if ( !resLvLb )
        goto LABEL_123;
      UIExtrusionLabel__set_text(resLvLb, (System_String_o *)this, 0);
      resMaxLvLb = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0);
      if ( !resMaxLvLb )
        goto LABEL_123;
      UILabel__set_text(resMaxLvLb, (System_String_o *)this, 0);
      v25 = CombineInfoComponent_TypeInfo;
      if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v24);
        v25 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v8, v25->static_fields->COLOR_VAL, 0);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v26);
      resExpValLb = v4->fields.resExpValLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_77138656(
                                         (int)resSvtData + 40,
                                         (System_String_o *)StringLiteral_422/*"#,0"*/,
                                         0);
      if ( !resExpValLb )
        goto LABEL_123;
      goto LABEL_95;
    }
    v37 = v4->fields.resLvLb;
    this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0);
    if ( !v37 )
      goto LABEL_123;
    UIExtrusionLabel__set_text(v37, (System_String_o *)this, 0);
    v38 = v4->fields.resMaxLvLb;
    this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0);
    if ( !v38 )
      goto LABEL_123;
    UILabel__set_text(v38, (System_String_o *)this, 0);
    goto LABEL_91;
  }
  if ( dispType == 2 )
  {
    v39 = v4->fields.resLvLb;
    this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0);
    if ( !v39 )
      goto LABEL_123;
    UIExtrusionLabel__set_text(v39, (System_String_o *)this, 0);
    v40 = v4->fields.resMaxLvLb;
    this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0);
    if ( !v40 )
      goto LABEL_123;
    UILabel__set_text(v40, (System_String_o *)this, 0);
    v42 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
    v43 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v41);
    *(_QWORD *)&v71.fields.currentCryptoKey = v42;
    *(_QWORD *)&v71.fields.fakeValue = v43;
    v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v71, 0);
    v45 = resSvtData->fields.combineResLimitCnt;
    LODWORD(v66) = v44;
    if ( System_Int32__Equals_77138484((int32_t)&v66, v45, 0) )
    {
LABEL_91:
      isLevelMax = UserServantEntity__isLevelMax(baseSvtData, 0);
      resExpValLb = v4->fields.infoLb;
      if ( isLevelMax )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, resSvtData);
        this = (CombineInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13099/*"SVTEQ_LVMAX_INFO_TXT"*/, 0);
        if ( resExpValLb )
        {
LABEL_95:
          INIT_VAL_TXT = (System_String_o *)this;
LABEL_100:
          UILabel__set_text(resExpValLb, INIT_VAL_TXT, 0);
          goto LABEL_108;
        }
      }
      else
      {
        this = (CombineInfoComponent_o *)CombineInfoComponent_TypeInfo;
        if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
        if ( resExpValLb )
        {
          INIT_VAL_TXT = CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT;
          goto LABEL_100;
        }
      }
LABEL_123:
      sub_2213CDC(this, resSvtData);
    }
    infoLb = v4->fields.infoLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v46);
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8977/*"MAX_LVUP_TXT"*/, 0);
    LevelMax = UserServantEntity__getLevelMax(baseSvtData, 0);
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &LevelMax);
    combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &combineResSvtMaxLv);
    this = (CombineInfoComponent_o *)System_String__Format_75697880(v50, v51, v52, 0);
    if ( !infoLb )
      goto LABEL_123;
    UILabel__set_text(infoLb, (System_String_o *)this, 0);
    v54 = CombineInfoComponent_TypeInfo;
    if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v53);
      v54 = CombineInfoComponent_TypeInfo;
    }
    p_COLOR_VAL = &v54->static_fields->COLOR_VAL;
    v34 = v8;
    v78 = *p_COLOR_VAL;
  }
  else
  {
    if ( dispType != 4 )
      goto LABEL_108;
    v28 = v4->fields.resLvLb;
    this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&exp + 4, 0);
    if ( !v28 )
      goto LABEL_123;
    UIExtrusionLabel__set_text(v28, (System_String_o *)this, 0);
    v29 = v4->fields.resMaxLvLb;
    this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0);
    if ( !v29 )
      goto LABEL_123;
    UILabel__set_text(v29, (System_String_o *)this, 0);
    v31 = CombineInfoComponent_TypeInfo;
    if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, v30);
      v31 = CombineInfoComponent_TypeInfo;
    }
    UIWidget__set_color(v8, v31->static_fields->COLOR_VAL, 0);
    CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v32);
    this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
    if ( !this )
      goto LABEL_123;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    v76.fields.r = 1.0;
    v76.fields.g = 1.0;
    v76.fields.b = 1.0;
    v76.fields.a = 1.0;
    UIWidget__set_color(v7, v76, 0);
    v77.fields.r = 1.0;
    v77.fields.g = 1.0;
    v77.fields.b = 1.0;
    v77.fields.a = 1.0;
    UIWidget__set_color(v9, v77, 0);
    v78.fields.r = 1.0;
    v78.fields.g = 1.0;
    v34 = v10;
    v78.fields.b = 1.0;
    v78.fields.a = 1.0;
  }
  UIWidget__set_color(v34, v78, 0);
LABEL_108:
  LimitCntMax = UserServantEntity__getLimitCntMax(baseSvtData, 0);
  CombineInfoComponent__setResLimitCntInfo(v4, LimitCntMax, resSvtData->fields.combineResLimitCnt, v57);
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(baseSvtData, 0, 0);
  resHpLb = v4->fields.resHpLb;
  HIDWORD(v67) = resSvtData->fields.combineResHp;
  this = (CombineInfoComponent_o *)System_Int32__ToString_77138656(
                                     (int32_t)&v67 + 4,
                                     (System_String_o *)StringLiteral_9617/*"N0"*/,
                                     0);
  if ( !resHpLb )
    goto LABEL_123;
  UILabel__set_text(resHpLb, (System_String_o *)this, 0);
  if ( !OverwriteStatus )
    goto LABEL_123;
  if ( OverwriteStatus->fields._Hp_k__BackingField != HIDWORD(v67) )
  {
    v60 = CombineInfoComponent_TypeInfo;
    if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
      v60 = CombineInfoComponent_TypeInfo;
    }
    UIWidget__set_color(v9, v60->static_fields->COLOR_VAL, 0);
  }
  combineResAtk = resSvtData->fields.combineResAtk;
  resAtkLb = v4->fields.resAtkLb;
  LODWORD(v67) = combineResAtk;
  this = (CombineInfoComponent_o *)System_Int32__ToString_77138656(
                                     (int32_t)&v67,
                                     (System_String_o *)StringLiteral_9617/*"N0"*/,
                                     0);
  if ( !resAtkLb )
    goto LABEL_123;
  UILabel__set_text(resAtkLb, (System_String_o *)this, 0);
  if ( OverwriteStatus->fields._Atk_k__BackingField != (_DWORD)v67 )
  {
    v63 = CombineInfoComponent_TypeInfo;
    if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, resSvtData);
      v63 = CombineInfoComponent_TypeInfo;
    }
    UIWidget__set_color(v10, v63->static_fields->COLOR_VAL, 0);
  }
  if ( v4->fields.dispType == 4 )
  {
    v79.fields.r = 1.0;
    v79.fields.g = 1.0;
    v79.fields.b = 1.0;
    v79.fields.a = 1.0;
    UIWidget__set_color(v7, v79, 0);
    v80.fields.r = 1.0;
    v80.fields.g = 1.0;
    v80.fields.b = 1.0;
    v80.fields.a = 1.0;
    UIWidget__set_color(v9, v80, 0);
    v81.fields.r = 1.0;
    v81.fields.g = 1.0;
    v81.fields.b = 1.0;
    v81.fields.a = 1.0;
    UIWidget__set_color(v10, v81, 0);
  }
  this = (CombineInfoComponent_o *)v4->fields.resStatusInfo;
  if ( !this )
    goto LABEL_123;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineInfoComponent__setCurrentLimitCntInfo(
        CombineInfoComponent_o *this,
        int32_t maxLimitCnt,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  CombineInfoComponent_o *v5; // x20
  __int64 v6; // x22
  struct SetLimitCntInfoComponent_array *currentLimitCntInfos; // x8
  Il2CppClass **v9; // x8
  SetLimitCntInfoComponent_o *v10; // x21

  if ( maxLimitCnt >= 1 )
  {
    v5 = this;
    v6 = 0;
    do
    {
      currentLimitCntInfos = v5->fields.currentLimitCntInfos;
      if ( !currentLimitCntInfos )
        goto LABEL_9;
      if ( (unsigned int)v6 >= LODWORD(currentLimitCntInfos->max_length) )
        sub_2213CE4(this);
      v9 = &currentLimitCntInfos->obj.klass + v6;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9[4], 0)) == 0 )
      {
LABEL_9:
        sub_2213CDC(this, *(_QWORD *)&maxLimitCnt);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      SetLimitCntInfoComponent__setEnableOnImg(v10, (int)v6++ < svtLimitCnt, 0);
    }
    while ( maxLimitCnt != (_DWORD)v6 );
  }
}


void CombineInfoComponent__setCurrentStatusInfo(
        CombineInfoComponent_o *this,
        UserServantEntity_o *baseData,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *isLevelMax; // x0
  System_String_o *v12; // x1
  int32_t dispType; // w8
  UIExtrusionLabel_o *v14; // x20
  struct UserServantEntity_o *v15; // x8
  struct UserServantEntity_o *baseSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x20
  UILabel_o *currentMaxLvLb; // x20
  struct UserServantEntity_o *v19; // x8
  System_String_o *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  UILabel_o *currentExpValLb; // x20
  struct UserServantEntity_o *v25; // x8
  int32_t v26; // w20
  __int64 v27; // x21
  __int64 v28; // x22
  int32_t v29; // w0
  const MethodInfo *v30; // x3
  System_String_o *v31; // x20
  UILabel_o *currentHpLb; // x21
  UILabel_o *currentAtkLb; // x19
  __int64 barExp; // [xsp+8h] [xbp-38h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_5974ACB & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_7757/*"IMPOSSIBLE_LIMITUP_COLOR"*/);
    sub_2213A60(&StringLiteral_422/*"#,0"*/);
    sub_2213A60(&StringLiteral_9617/*"N0"*/);
    byte_5974ACB = 1;
  }
  *(_QWORD *)lateExp = 0;
  barExp = 0;
  CombineInfoComponent__initCurrentStatusGrid(this, (const MethodInfo *)baseData);
  this->fields.baseSvtData = baseData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.baseSvtData, (int32_t)baseData, v5, v6, v7, v8, v9, v10);
  dispType = this->fields.dispType;
  if ( dispType > 1 )
  {
    if ( dispType != 4 && dispType != 2 )
      goto LABEL_34;
    goto LABEL_14;
  }
  if ( !dispType )
  {
LABEL_14:
    baseSvtData = this->fields.baseSvtData;
    if ( !baseSvtData )
      goto LABEL_46;
    currentLvLb = this->fields.currentLvLb;
    isLevelMax = System_Int32__ToString((int)baseSvtData + 400, 0);
    if ( !currentLvLb )
      goto LABEL_46;
    UIExtrusionLabel__set_text(currentLvLb, isLevelMax, 0);
    isLevelMax = (System_String_o *)this->fields.baseSvtData;
    if ( !isLevelMax )
      goto LABEL_46;
    currentMaxLvLb = this->fields.currentMaxLvLb;
    LODWORD(barExp) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0);
    isLevelMax = System_Int32__ToString((int32_t)&barExp, 0);
    if ( !currentMaxLvLb )
      goto LABEL_46;
    v12 = isLevelMax;
    goto LABEL_33;
  }
  if ( dispType != 1 )
    goto LABEL_34;
  isLevelMax = (System_String_o *)this->fields.baseSvtData;
  if ( !isLevelMax )
    goto LABEL_46;
  v14 = this->fields.currentLvLb;
  isLevelMax = (System_String_o *)UserServantEntity__isLevelMax((UserServantEntity_o *)isLevelMax, 0);
  if ( ((unsigned __int8)isLevelMax & 1) != 0 )
    goto LABEL_10;
  isLevelMax = (System_String_o *)this->fields.baseSvtData;
  if ( !isLevelMax )
    goto LABEL_46;
  isLevelMax = (System_String_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)isLevelMax, 0);
  if ( ((unsigned __int8)isLevelMax & 1) != 0 )
  {
LABEL_10:
    v15 = this->fields.baseSvtData;
    if ( !v15 )
      goto LABEL_46;
    isLevelMax = System_Int32__ToString((int)v15 + 400, 0);
  }
  else
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7757/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0);
    v19 = this->fields.baseSvtData;
    if ( !v19 )
      goto LABEL_46;
    v20 = isLevelMax;
    v21 = (Il2CppObject *)System_Int32__ToString((int)v19 + 400, 0);
    isLevelMax = System_String__Format(v20, v21, 0);
  }
  v12 = isLevelMax;
  if ( !v14 )
    goto LABEL_46;
  UIExtrusionLabel__set_text(v14, isLevelMax, 0);
  isLevelMax = (System_String_o *)this->fields.baseSvtData;
  if ( !isLevelMax )
    goto LABEL_46;
  currentMaxLvLb = this->fields.currentMaxLvLb;
  if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)isLevelMax, 0) )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
    isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7757/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0);
    if ( this->fields.baseSvtData )
    {
      v22 = isLevelMax;
      LODWORD(barExp) = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0);
      v23 = (Il2CppObject *)System_Int32__ToString((int32_t)&barExp, 0);
      isLevelMax = System_String__Format(v22, v23, 0);
      goto LABEL_32;
    }
LABEL_46:
    sub_2213CDC(isLevelMax, v12);
  }
  isLevelMax = (System_String_o *)this->fields.baseSvtData;
  if ( !isLevelMax )
    goto LABEL_46;
  LODWORD(barExp) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0);
  isLevelMax = System_Int32__ToString((int32_t)&barExp, 0);
LABEL_32:
  v12 = isLevelMax;
  if ( !currentMaxLvLb )
    goto LABEL_46;
LABEL_33:
  UILabel__set_text(currentMaxLvLb, v12, 0);
LABEL_34:
  isLevelMax = (System_String_o *)this->fields.baseSvtData;
  if ( !isLevelMax )
    goto LABEL_46;
  UserServantEntity__getExpInfo((UserServantEntity_o *)isLevelMax, &lateExp[1], lateExp, (float *)&barExp + 1, 0);
  isLevelMax = (System_String_o *)this->fields.currentExpBar;
  if ( !isLevelMax )
    goto LABEL_46;
  UIProgressBar__set_value((UIProgressBar_o *)isLevelMax, *((float *)&barExp + 1), 0);
  currentExpValLb = this->fields.currentExpValLb;
  isLevelMax = System_Int32__ToString_77138656((int32_t)lateExp, (System_String_o *)StringLiteral_422/*"#,0"*/, 0);
  if ( !currentExpValLb )
    goto LABEL_46;
  UILabel__set_text(currentExpValLb, isLevelMax, 0);
  isLevelMax = (System_String_o *)this->fields.baseSvtData;
  if ( !isLevelMax )
    goto LABEL_46;
  isLevelMax = (System_String_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)isLevelMax, 0);
  v25 = this->fields.baseSvtData;
  if ( !v25 )
    goto LABEL_46;
  v26 = (int)isLevelMax;
  v27 = *(_QWORD *)&v25->fields.limitCount.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v25->fields.limitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v36.fields.currentCryptoKey = v27;
  *(_QWORD *)&v36.fields.fakeValue = v28;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
  CombineInfoComponent__setCurrentLimitCntInfo(this, v26, v29, v30);
  isLevelMax = (System_String_o *)this->fields.baseSvtData;
  if ( !isLevelMax )
    goto LABEL_46;
  isLevelMax = (System_String_o *)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)isLevelMax, 0, 0);
  if ( !isLevelMax )
    goto LABEL_46;
  v31 = isLevelMax;
  currentHpLb = this->fields.currentHpLb;
  LODWORD(barExp) = isLevelMax->fields._stringLength;
  isLevelMax = System_Int32__ToString_77138656((int32_t)&barExp, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
  if ( !currentHpLb )
    goto LABEL_46;
  UILabel__set_text(currentHpLb, isLevelMax, 0);
  currentAtkLb = this->fields.currentAtkLb;
  LODWORD(barExp) = *(_DWORD *)&v31->fields._firstChar;
  isLevelMax = System_Int32__ToString_77138656((int32_t)&barExp, (System_String_o *)StringLiteral_9617/*"N0"*/, 0);
  if ( !currentAtkLb )
    goto LABEL_46;
  UILabel__set_text(currentAtkLb, isLevelMax, 0);
}


void CombineInfoComponent__setInitInfoLb(CombineInfoComponent_o *this, const MethodInfo *method)
{
  int32_t dispType; // w8
  UILabel_o *v4; // x19
  UILabel_o *infoLb; // x0

  if ( (byte_5974ACA & 1) == 0 )
  {
    sub_2213A60(&CombineInfoComponent_TypeInfo);
    sub_2213A60(&StringLiteral_26839/*"レベル上限："*/);
    byte_5974ACA = 1;
  }
  dispType = this->fields.dispType;
  if ( dispType <= 1 )
  {
    if ( dispType )
    {
      if ( dispType != 1 )
        return;
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  if ( dispType == 4 )
  {
LABEL_13:
    infoLb = this->fields.infoLb;
    if ( infoLb )
    {
      UILabel__set_text(infoLb, (System_String_o *)StringLiteral_26839/*"レベル上限："*/, 0);
      infoLb = this->fields.infoLb2;
      if ( infoLb )
      {
        infoLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb, 0);
        if ( infoLb )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb, 0, 0);
          infoLb = this->fields.infoLb3;
          if ( infoLb )
          {
            infoLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb, 0);
            if ( infoLb )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb, 0, 0);
              infoLb = this->fields.infoLb4;
              if ( infoLb )
              {
                infoLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb, 0);
                if ( infoLb )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb, 0, 0);
                  infoLb = this->fields.infoLb5;
                  if ( infoLb )
                  {
                    infoLb = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)infoLb, 0);
                    if ( infoLb )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb, 0, 0);
                      infoLb = (UILabel_o *)this->fields.infoIcon2;
                      if ( infoLb )
                      {
                        infoLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)infoLb,
                                                0);
                        if ( infoLb )
                        {
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb, 0, 0);
                          infoLb = (UILabel_o *)this->fields.infoIcon3;
                          if ( infoLb )
                          {
                            infoLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)infoLb,
                                                    0);
                            if ( infoLb )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb, 0, 0);
                              infoLb = (UILabel_o *)this->fields.infoIcon4;
                              if ( infoLb )
                              {
                                infoLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)infoLb,
                                                        0);
                                if ( infoLb )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb, 0, 0);
                                  infoLb = (UILabel_o *)this->fields.limitUpRewardGetIcon1;
                                  if ( infoLb )
                                  {
                                    infoLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)infoLb,
                                                            0);
                                    if ( infoLb )
                                    {
                                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb, 0, 0);
                                      infoLb = (UILabel_o *)this->fields.limitUpRewardGetIcon2;
                                      if ( infoLb )
                                      {
                                        infoLb = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)infoLb,
                                                                0);
                                        if ( infoLb )
                                        {
                                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoLb, 0, 0);
                                          return;
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
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_2213CDC(infoLb, method);
  }
  if ( dispType == 2 )
  {
LABEL_9:
    v4 = this->fields.infoLb;
    infoLb = (UILabel_o *)CombineInfoComponent_TypeInfo;
    if ( !*(&CombineInfoComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo, method);
    if ( v4 )
    {
      UILabel__set_text(v4, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0);
      return;
    }
    goto LABEL_34;
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineInfoComponent__setResLimitCntInfo(
        CombineInfoComponent_o *this,
        int32_t maxLimitCnt,
        int32_t svtLimitCnt,
        const MethodInfo *method)
{
  CombineInfoComponent_o *v5; // x20
  __int64 v6; // x22
  struct SetLimitCntInfoComponent_array *resLimitCntInfos; // x8
  Il2CppClass **v9; // x8
  SetLimitCntInfoComponent_o *v10; // x21

  if ( maxLimitCnt >= 1 )
  {
    v5 = this;
    v6 = 0;
    do
    {
      resLimitCntInfos = v5->fields.resLimitCntInfos;
      if ( !resLimitCntInfos )
        goto LABEL_9;
      if ( (unsigned int)v6 >= LODWORD(resLimitCntInfos->max_length) )
        sub_2213CE4(this);
      v9 = &resLimitCntInfos->obj.klass + v6;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9[4], 0)) == 0 )
      {
LABEL_9:
        sub_2213CDC(this, *(_QWORD *)&maxLimitCnt);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      SetLimitCntInfoComponent__setEnableOnImg(v10, (int)v6++ < svtLimitCnt, 0);
    }
    while ( maxLimitCnt != (_DWORD)v6 );
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12->fields.name = name;
  v12 = (CombineInfoComponent_GetItemInfo_o *)((char *)v12 + 24);
  v12[-1].fields.acquiredCount = itemId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v12, (int32_t)name, v13, v14, v15, v16, v17, v18);
  LODWORD(v12->monitor) = iconImageId;
  HIDWORD(v12->monitor) = count;
  v12->fields.itemId = acquiredCount;
}


void CombineInfoComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974AD1 & 1) == 0 )
  {
    sub_2213A60(&CombineInfoComponent___c_TypeInfo);
    byte_5974AD1 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(CombineInfoComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CombineInfoComponent___c_TypeInfo->static_fields->__9 = (struct CombineInfoComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CombineInfoComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, data);
  return data->fields.itemId == giftEntity->fields.objectId;
}