void __fastcall CombineInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct CombineInfoComponent_StaticFields *static_fields; // x0
  int32_t v7; // w1
  CombineInfoComponent_c *v8; // x8
  struct CombineInfoComponent_StaticFields *v9; // x9
  struct CombineInfoComponent_StaticFields *v10; // x9
  int32_t v11; // w1
  struct CombineInfoComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct CombineInfoComponent_StaticFields *v15; // x8

  if ( (byte_4B48794 & 1) == 0 )
  {
    sub_1BDB878(&CombineInfoComponent_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_20240/*"icon_reward_get"*/, v4);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B48794 = 1;
  }
  CombineInfoComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_BEB960;
  static_fields = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_NEW_SKILL_LABEL_WIDTH = 0x8C0000008CLL;
  static_fields->INFO_GET_ITEM_LABEL_2_WIDTH = 34;
  v7 = (int)StringLiteral_1/*""*/;
  static_fields->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->INIT_VAL_TXT, v7, v2, v3);
  v8 = CombineInfoComponent_TypeInfo;
  v9 = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&v9->LIMIT_UP_GET_SKILL_INFO_POS.fields.x = 3246391296LL;
  v9->LIMIT_UP_GET_SKILL_INFO_POS.fields.z = 0.0;
  v10 = v8->static_fields;
  *(_QWORD *)&v10->LIMIT_UP_REWARD_INFO_POS.fields.x = 1127546880LL;
  v10->LIMIT_UP_REWARD_INFO_POS.fields.z = 0.0;
  v11 = StringLiteral_20240/*"icon_reward_get"*/;
  v12 = v8->static_fields;
  v12->LIMIT_UP_REWARD_GET_ICON_NAME = (struct System_String_o *)StringLiteral_20240/*"icon_reward_get"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v12->LIMIT_UP_REWARD_GET_ICON_NAME, v11, v13, v14);
  v15 = CombineInfoComponent_TypeInfo->static_fields;
  v15->LIMIT_UP_REWARD_GET_ICON_ID = 9;
  v15->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = (struct UnityEngine_Color_o)xmmword_BEB1C0;
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
  char *getSkillRewardObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  CombineInfoComponent_c *v20; // x8
  UnityEngine_GameObject_o *v21; // x21
  UnityEngine_GameObject_o *v22; // x0
  UISprite_o *limitUpRewardGetIcon1; // x21
  System_String_o *LIMIT_UP_REWARD_GET_ICON_NAME; // x22
  UILabel_o *infoLb; // x21
  bool isLimitCountMax; // w22
  System_String_o *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x23
  Il2CppObject *v35; // x0
  CombineInfoComponent_o *v36; // x0
  const MethodInfo *v37; // x2
  char *v38; // x21
  System_Text_StringBuilder_o *v39; // x22
  System_Text_StringBuilder_o *appended; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x8
  unsigned __int64 v44; // x24
  int32_t v45; // w23
  UILabel_o *infoLb2; // x23
  System_String_o *v47; // x24
  Il2CppObject *v48; // x0
  UILabel_o *v49; // x22
  _BOOL8 v50; // x0
  const MethodInfo *v51; // x4
  UnityEngine_GameObject_o *v52; // x0
  CombineInfoComponent_c *v53; // x8
  UnityEngine_GameObject_o *v54; // x21
  int32_t size; // w21
  ItemIconComponent_o *infoIcon3; // x20
  _BOOL4 v57; // w23
  __int64 v58; // x9
  int32_t v59; // w28
  UILabel_o *infoLb3; // x20
  System_String_o *v61; // x21
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x22
  Il2CppObject *v66; // x0
  UILabel_o *v67; // x20
  System_String_o *v68; // x21
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  Il2CppObject *v72; // x0
  UILabel_o *v73; // x20
  ItemIconComponent_o *infoIcon4; // x20
  __int64 v75; // x9
  int32_t v76; // w22
  UILabel_o *infoLb4; // x20
  System_String_o *v78; // x21
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  Il2CppObject *v82; // x0
  UILabel_o *v83; // x20
  UILabel_o *infoLb5; // x20
  UILabel_o *v85; // x20
  bool v86; // w1
  int32_t combineResSvtMaxLv; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t LevelMax; // [xsp+8h] [xbp-68h] BYREF
  bool isAllAcquired; // [xsp+Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *getItemInfoList; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v97; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v98; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = resSvtData;
  if ( (byte_4B48791 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, resSvtData);
    sub_1BDB878(&CombineInfoComponent_TypeInfo, v5);
    sub_1BDB878(&int_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__, v8);
    sub_1BDB878(&LocalizationManager_TypeInfo, v9);
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_8606/*"MAX_LVUP_TXT"*/, v11);
    sub_1BDB878(&StringLiteral_8267/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, v12);
    sub_1BDB878(&StringLiteral_8265/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, v13);
    sub_1BDB878(&StringLiteral_8269/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, v14);
    sub_1BDB878(&StringLiteral_8266/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, v15);
    sub_1BDB878(&StringLiteral_8268/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, v16);
    sub_1BDB878(&StringLiteral_8259/*"LIMITUP_MAX_TXT"*/, v17);
    byte_4B48791 = 1;
  }
  getItemInfoList = 0LL;
  isAllAcquired = 0;
  getSkillRewardObj = (char *)this->fields.getSkillRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0LL);
  v20 = CombineInfoComponent_TypeInfo;
  v21 = gameObject;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v20 = CombineInfoComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v21, v20->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v22,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_INFO_POS,
    0LL);
  limitUpRewardGetIcon1 = this->fields.limitUpRewardGetIcon1;
  LIMIT_UP_REWARD_GET_ICON_NAME = CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_NAME;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
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
      getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8259/*"LIMITUP_MAX_TXT"*/, 0LL);
      goto LABEL_18;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLimitCountMax )
      goto LABEL_13;
  }
  getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8606/*"MAX_LVUP_TXT"*/, 0LL);
  if ( !this->fields.baseSvtData )
    goto LABEL_133;
  v27 = (System_String_o *)getSkillRewardObj;
  LevelMax = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0LL);
  getSkillRewardObj = (char *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax, v28, v29, v30);
  if ( !v3 )
    goto LABEL_133;
  v34 = (Il2CppObject *)getSkillRewardObj;
  combineResSvtMaxLv = v3->fields.combineResSvtMaxLv;
  v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv, v31, v32, v33);
  getSkillRewardObj = (char *)System_String__Format_62613552(v27, v34, v35, 0LL);
LABEL_18:
  resSvtData = (CombineSvtData_o *)getSkillRewardObj;
  if ( !infoLb )
    goto LABEL_133;
  UILabel__set_text(infoLb, (System_String_o *)getSkillRewardObj, 0LL);
  getSkillRewardObj = (char *)CombineInfoComponent__GetNewReleaseSkillNumList(v36, v3, v37);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v38 = getSkillRewardObj;
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
    v39 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v39, 0LL);
    v43 = *((_QWORD *)v38 + 3);
    if ( (int)v43 >= 1 )
    {
      v44 = 0LL;
      v45 = (_DWORD)v38 + 32;
      do
      {
        if ( v44 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8268/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, 0LL);
          if ( !v39 )
            goto LABEL_133;
          appended = System_Text_StringBuilder__Append_62657444(v39, (System_String_o *)getSkillRewardObj, 0LL);
          LODWORD(v43) = *((_DWORD *)v38 + 6);
        }
        if ( v44 >= (unsigned int)v43 )
          sub_1BDBADC(appended, v41, v42);
        getSkillRewardObj = (char *)System_Int32__ToString(v45, 0LL);
        if ( !v39 )
          goto LABEL_133;
        appended = System_Text_StringBuilder__Append_62657444(v39, (System_String_o *)getSkillRewardObj, 0LL);
        LODWORD(v43) = *((_DWORD *)v38 + 6);
        ++v44;
        v45 += 4;
      }
      while ( (__int64)v44 < (int)v43 );
    }
    infoLb2 = this->fields.infoLb2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8269/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, 0LL);
    if ( !v39 )
      goto LABEL_133;
    v47 = (System_String_o *)getSkillRewardObj;
    v48 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                            v39,
                            v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    getSkillRewardObj = (char *)System_String__Format(v47, v48, 0LL);
    if ( !infoLb2 )
      goto LABEL_133;
    UILabel__set_text(infoLb2, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v49 = this->fields.infoLb2;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v49 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v49, CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH, 0, 0LL);
  }
  getSkillRewardObj = (char *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v50 = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0LL);
  if ( v50 )
    return;
  if ( !*((_QWORD *)v38 + 3) )
  {
    getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v52 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0LL);
    v53 = CombineInfoComponent_TypeInfo;
    v54 = v52;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
      v53 = CombineInfoComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v54, v53->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  }
  CombineInfoComponent__GetLimitCountUpReward((CombineInfoComponent_o *)v50, v3, &getItemInfoList, &isAllAcquired, v51);
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
                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__)) == 0LL)
    || !infoIcon3
    || (ItemIconComponent__SetGift_39935088(infoIcon3, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0LL),
        (getSkillRewardObj = (char *)getItemInfoList) == 0LL)
    || (v57 = isAllAcquired,
        (getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)getItemInfoList,
                                       0,
                                       (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__)) == 0LL) )
  {
LABEL_133:
    sub_1BDBAD4(getSkillRewardObj, resSvtData);
  }
  v58 = 40LL;
  if ( !v57 )
    v58 = 36LL;
  v59 = *(_DWORD *)&getSkillRewardObj[v58];
  infoLb3 = this->fields.infoLb3;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( size == 1 )
  {
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8265/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, 0LL);
    if ( !getItemInfoList )
      goto LABEL_133;
    v61 = (System_String_o *)getSkillRewardObj;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  0,
                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v65 = (Il2CppObject *)*((_QWORD *)getSkillRewardObj + 3);
    LevelMax = v59;
    v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax, v62, v63, v64);
    getSkillRewardObj = (char *)System_String__Format_62613552(v61, v65, v66, 0LL);
    if ( !infoLb3 )
      goto LABEL_133;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v67 = this->fields.infoLb3;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v67 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v67, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH, 0, 0LL);
  }
  else
  {
    v68 = LocalizationManager__Get((System_String_o *)StringLiteral_8266/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v59;
    v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax, v69, v70, v71);
    getSkillRewardObj = (char *)System_String__Format(v68, v72, 0LL);
    if ( !infoLb3 )
      goto LABEL_133;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v73 = this->fields.infoLb3;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v73 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v73, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0, 0LL);
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
                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    if ( !infoIcon4 )
      goto LABEL_133;
    ItemIconComponent__SetGift_39935088(infoIcon4, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0LL);
    getSkillRewardObj = (char *)getItemInfoList;
    if ( !getItemInfoList )
      goto LABEL_133;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  1,
                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v75 = 40LL;
    if ( !v57 )
      v75 = 36LL;
    v76 = *(_DWORD *)&getSkillRewardObj[v75];
    infoLb4 = this->fields.infoLb4;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v78 = LocalizationManager__Get((System_String_o *)StringLiteral_8266/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v76;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax, v79, v80, v81);
    getSkillRewardObj = (char *)System_String__Format(v78, v82, 0LL);
    if ( !infoLb4 )
      goto LABEL_133;
    UILabel__set_text(infoLb4, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v83 = this->fields.infoLb4;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v83 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v83, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0, 0LL);
    getSkillRewardObj = (char *)this->fields.infoLb5;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0LL);
    infoLb5 = this->fields.infoLb5;
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8267/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, 0LL);
    if ( !infoLb5 )
      goto LABEL_133;
    UILabel__set_text(infoLb5, (System_String_o *)getSkillRewardObj, 0LL);
  }
  getSkillRewardObj = (char *)this->fields.infoIcon3;
  if ( !v57 )
  {
    if ( getSkillRewardObj )
    {
      v96.fields.r = 1.0;
      v96.fields.g = 1.0;
      v96.fields.b = 1.0;
      v96.fields.a = 1.0;
      ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v96, 0LL);
      getSkillRewardObj = (char *)this->fields.infoIcon4;
      if ( getSkillRewardObj )
      {
        v97.fields.r = 1.0;
        v97.fields.g = 1.0;
        v97.fields.b = 1.0;
        v97.fields.a = 1.0;
        ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v97, 0LL);
        getSkillRewardObj = (char *)this->fields.infoLb3;
        if ( getSkillRewardObj )
        {
          v98.fields.r = 1.0;
          v98.fields.g = 1.0;
          v98.fields.b = 1.0;
          v98.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v98, 0LL);
          getSkillRewardObj = (char *)this->fields.infoLb4;
          if ( getSkillRewardObj )
          {
            v99.fields.r = 1.0;
            v99.fields.g = 1.0;
            v99.fields.b = 1.0;
            v99.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v99, 0LL);
            getSkillRewardObj = (char *)this->fields.infoLb5;
            if ( getSkillRewardObj )
            {
              v100.fields.r = 1.0;
              v100.fields.g = 1.0;
              v100.fields.b = 1.0;
              v100.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v100, 0LL);
              getSkillRewardObj = (char *)this->fields.infoLb3;
              if ( getSkillRewardObj )
              {
                v101.fields.r = 0.0;
                v101.fields.g = 0.0;
                v101.fields.b = 0.0;
                v101.fields.a = 1.0;
                UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v101, 0LL);
                getSkillRewardObj = (char *)this->fields.infoLb4;
                if ( getSkillRewardObj )
                {
                  v102.fields.r = 0.0;
                  v102.fields.g = 0.0;
                  v102.fields.b = 0.0;
                  v102.fields.a = 1.0;
                  UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v102, 0LL);
                  getSkillRewardObj = (char *)this->fields.infoLb5;
                  if ( getSkillRewardObj )
                  {
                    v103.fields.r = 0.0;
                    v103.fields.g = 0.0;
                    v103.fields.b = 0.0;
                    v103.fields.a = 1.0;
                    UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v103, 0LL);
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
                              v86 = 0;
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
  v91.fields.r = 0.5;
  v91.fields.g = 0.5;
  v91.fields.b = 0.5;
  v91.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v91, 0LL);
  getSkillRewardObj = (char *)this->fields.infoIcon4;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v92.fields.r = 0.5;
  v92.fields.g = 0.5;
  v92.fields.b = 0.5;
  v92.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v92, 0LL);
  getSkillRewardObj = (char *)this->fields.infoLb3;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v93.fields.r = 0.5;
  v93.fields.g = 0.5;
  v93.fields.b = 0.5;
  v93.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v93, 0LL);
  getSkillRewardObj = (char *)this->fields.infoLb4;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v94.fields.r = 0.5;
  v94.fields.g = 0.5;
  v94.fields.b = 0.5;
  v94.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v94, 0LL);
  getSkillRewardObj = (char *)this->fields.infoLb5;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v95.fields.r = 0.5;
  v95.fields.g = 0.5;
  v95.fields.b = 0.5;
  v95.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v95, 0LL);
  getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  v85 = this->fields.infoLb3;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  }
  if ( !v85 )
    goto LABEL_133;
  UILabel__set_effectColor(v85, *(UnityEngine_Color_o *)(*((_QWORD *)getSkillRewardObj + 23) + 76LL), 0LL);
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
  v86 = 1;
LABEL_131:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, v86, 0LL);
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
  System_Collections_Generic_List_object__o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  Il2CppObject *Master_object; // x22
  void *CombineLimitGiftId; // x0
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **v30; // x20
  struct UserServantEntity_o *baseSvtData; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v32; // x29
  __int64 v33; // x24
  __int64 v34; // x25
  int64_t v35; // x23
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x24
  System_Collections_Generic_List_object__o *v38; // x0
  int v39; // w25
  __int64 v40; // x27
  struct UserServantEntity_o *v41; // x8
  __int64 v42; // x26
  __int64 v43; // x28
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v48; // x19
  System_Func_object__bool__o *v49; // x29
  int v50; // w20
  System_String_o *v51; // x28
  int32_t IconImageId; // w29
  __int64 v53; // x27
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  System_Collections_Generic_List_object__o *v62; // x19
  System_Predicate_object__o *v63; // x20
  Il2CppObject *v64; // x21
  struct CombineInfoComponent___c_StaticFields *static_fields; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+10h] [xbp-80h]
  System_String_o *countText; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_4B48793 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, resSvtData);
    sub_1BDB878(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___, v9);
    sub_1BDB878(&System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo, v10);
    sub_1BDB878(&CombineInfoComponent_GetItemInfo_TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__, v14);
    sub_1BDB878(&System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo, v15);
    sub_1BDB878(&NetworkManager_TypeInfo, v16);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1BDB878(&System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo, v18);
    sub_1BDB878(&Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, v19);
    sub_1BDB878(&Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__, v20);
    sub_1BDB878(&CombineInfoComponent___c__DisplayClass56_0_TypeInfo, v21);
    sub_1BDB878(&CombineInfoComponent___c_TypeInfo, v22);
    sub_1BDB878(&StringLiteral_1/*""*/, v23);
    byte_4B48793 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v24 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  *getItemInfoList = (System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *)v24;
  sub_1BDB81C((CGThumbnailListItem_o *)getItemInfoList, (int32_t)v24, v25, v26);
  *isAllAcquired = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v27);
    byte_4B3ED56 = 1;
  }
  CombineLimitGiftId = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    CombineLimitGiftId = NetworkManager_TypeInfo;
  }
  v30 = getItemInfoList;
  if ( !resSvtData )
    goto LABEL_57;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_57;
  v32 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v34 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  v35 = *(_QWORD *)(*((_QWORD *)CombineLimitGiftId + 23) + 64LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v73.fields.currentCryptoKey = v34;
  *(_QWORD *)&v73.fields.fakeValue = v33;
  CombineLimitGiftId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v73, 0LL);
  if ( !Master_object )
    goto LABEL_57;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       v35,
                       (int32_t)CombineLimitGiftId,
                       0LL);
  v36 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v37 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftMaster___);
  v38 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  CombineLimitGiftId = resSvtData->fields.baseSvtData;
  if ( !CombineLimitGiftId )
    goto LABEL_57;
  v39 = UserServantEntity__getLimitCount((UserServantEntity_o *)CombineLimitGiftId, 0LL) + 1;
  if ( v39 <= resSvtData->fields.combineResLimitCnt )
  {
    while ( 1 )
    {
      v40 = sub_1BDBAC4(CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v40, 0LL);
      v41 = resSvtData->fields.baseSvtData;
      if ( !v41 )
        break;
      v43 = *(_QWORD *)&v41->fields.svtId.fields.currentCryptoKey;
      v42 = *(_QWORD *)&v41->fields.svtId.fields.fakeValue;
      if ( !(*v32)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v32);
      *(_QWORD *)&v74.fields.currentCryptoKey = v43;
      *(_QWORD *)&v74.fields.fakeValue = v42;
      CombineLimitGiftId = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v74, 0LL);
      if ( !v36 )
        break;
      CombineLimitGiftId = (void *)CombineLimitGiftMaster__GetCombineLimitGiftId(
                                     (CombineLimitGiftMaster_o *)v36,
                                     (int32_t)CombineLimitGiftId,
                                     v39,
                                     0LL);
      if ( (_DWORD)CombineLimitGiftId )
      {
        if ( !v37 )
          break;
        CombineLimitGiftId = GiftMaster__getDataById((GiftMaster_o *)v37, (int32_t)CombineLimitGiftId, 0LL);
        if ( !v40 )
          break;
        *(_QWORD *)(v40 + 16) = CombineLimitGiftId;
        v46 = v40 + 16;
        sub_1BDB81C((CGThumbnailListItem_o *)(v40 + 16), (int32_t)CombineLimitGiftId, v44, v45);
        if ( *(_QWORD *)(v40 + 16) )
        {
          v47 = (System_Collections_Generic_IEnumerable_TSource__o *)*v30;
          v48 = v32;
          v49 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v49,
            (Il2CppObject *)v40,
            Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__,
            0LL);
          CombineLimitGiftId = System_Linq_Enumerable__FirstOrDefault_object__50698552(
                                 v47,
                                 (System_Func_TSource__bool__o *)v49,
                                 (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
          if ( CombineLimitGiftId )
          {
            if ( EntityDefinitely && v39 <= EntityDefinitely->fields.maxLimitCount )
            {
              if ( !*(_QWORD *)v46 )
                break;
              v32 = v48;
              *((_DWORD *)CombineLimitGiftId + 10) += *(_DWORD *)(*(_QWORD *)v46 + 28LL);
            }
            else
            {
              *isAllAcquired = 0;
              if ( !*(_QWORD *)v46 )
                break;
              v32 = v48;
              *((_DWORD *)CombineLimitGiftId + 9) += *(_DWORD *)(*(_QWORD *)v46 + 28LL);
            }
          }
          else
          {
            countText = (System_String_o *)StringLiteral_1/*""*/;
            nameText = (System_String_o *)StringLiteral_1/*""*/;
            CombineLimitGiftId = *(void **)v46;
            if ( !*(_QWORD *)v46 )
              break;
            GiftEntity__GetInfo((GiftEntity_o *)CombineLimitGiftId, &nameText, &countText, 0LL);
            CombineLimitGiftId = *(void **)v46;
            if ( !*(_QWORD *)v46 )
              break;
            v50 = *((_DWORD *)CombineLimitGiftId + 6);
            v51 = nameText;
            IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)CombineLimitGiftId, 0LL);
            v53 = sub_1BDBAC4(CombineInfoComponent_GetItemInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v53, 0LL);
            *(_DWORD *)(v53 + 16) = v50;
            *(_QWORD *)(v53 + 24) = v51;
            sub_1BDB81C((CGThumbnailListItem_o *)(v53 + 24), (int32_t)v51, v54, v55);
            *(_DWORD *)(v53 + 36) = 0;
            *(_DWORD *)(v53 + 40) = 0;
            *(_DWORD *)(v53 + 32) = IconImageId;
            if ( !EntityDefinitely )
              goto LABEL_35;
            if ( v39 <= EntityDefinitely->fields.maxLimitCount )
            {
              v30 = getItemInfoList;
              if ( !*(_QWORD *)v46 )
                break;
              v32 = v48;
              *(_DWORD *)(v53 + 40) = *(_DWORD *)(*(_QWORD *)v46 + 28LL);
            }
            else
            {
LABEL_35:
              v30 = getItemInfoList;
              *isAllAcquired = 0;
              if ( !*(_QWORD *)v46 )
                break;
              v32 = v48;
              *(_DWORD *)(v53 + 36) += *(_DWORD *)(*(_QWORD *)v46 + 28LL);
            }
            CombineLimitGiftId = *v30;
            if ( !*v30 )
              break;
            v58 = *((_QWORD *)CombineLimitGiftId + 2);
            v59 = Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__;
            ++*((_DWORD *)CombineLimitGiftId + 7);
            if ( !v58 )
              break;
            v60 = *((int *)CombineLimitGiftId + 6);
            if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)CombineLimitGiftId,
                (Il2CppObject *)v53,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
            }
            else
            {
              v61 = v58 + 8 * v60;
              *((_DWORD *)CombineLimitGiftId + 6) = v60 + 1;
              *(_QWORD *)(v61 + 32) = v53;
              sub_1BDB81C((CGThumbnailListItem_o *)(v61 + 32), v53, v56, v57);
            }
          }
        }
      }
      if ( ++v39 > resSvtData->fields.combineResLimitCnt )
        goto LABEL_47;
    }
LABEL_57:
    sub_1BDBAD4(CombineLimitGiftId, v27);
  }
LABEL_47:
  if ( !*isAllAcquired )
  {
    v62 = (System_Collections_Generic_List_object__o *)*v30;
    CombineLimitGiftId = CombineInfoComponent___c_TypeInfo;
    if ( !CombineInfoComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent___c_TypeInfo);
      CombineLimitGiftId = CombineInfoComponent___c_TypeInfo;
    }
    v63 = *(System_Predicate_object__o **)(*((_QWORD *)CombineLimitGiftId + 23) + 8LL);
    if ( !v63 )
    {
      if ( !*((_DWORD *)CombineLimitGiftId + 56) )
      {
        j_il2cpp_runtime_class_init_0(CombineLimitGiftId);
        CombineLimitGiftId = CombineInfoComponent___c_TypeInfo;
      }
      v64 = (Il2CppObject *)**((_QWORD **)CombineLimitGiftId + 23);
      v63 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
      System_Predicate_object____ctor(v63, v64, Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, 0LL);
      static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Predicate_CombineInfoComponent_GetItemInfo__o *)v63;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__56_0, (int32_t)v63, v66, v67);
    }
    if ( !v62 )
      goto LABEL_57;
    System_Collections_Generic_List_object___RemoveAll(
      v62,
      (System_Predicate_T__o *)v63,
      (const MethodInfo_36D7420 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
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
  __int64 v13; // x2
  System_Int32_array *v14; // x8
  __int64 v15; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v17; // x10
  struct System_Int32_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  System_String_array *v22; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *v23; // [xsp+10h] [xbp-40h] BYREF
  System_String_array *skillNameList; // [xsp+18h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4B48792 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, resSvtData);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_4B48792 = 1;
  }
  idList = 0LL;
  v23 = 0LL;
  skillNameList = 0LL;
  v22 = 0LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !resSvtData )
    goto LABEL_23;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_23;
  combineResSvtLv = resSvtData->fields.combineResSvtLv;
  LimitCount = UserServantEntity__getLimitCount(resSvtData->fields.baseSvtData, 0LL);
  UserServantEntity__getNextUseSkillInfo(baseSvtData, &idList, &skillNameList, combineResSvtLv, LimitCount, 1, 0LL);
  v8 = resSvtData->fields.baseSvtData;
  if ( !v8 )
    goto LABEL_23;
  UserServantEntity__getNextUseSkillInfo(
    v8,
    &v23,
    &v22,
    resSvtData->fields.combineResSvtLv,
    resSvtData->fields.combineResLimitCnt,
    0,
    0LL);
  v14 = v23;
  if ( !v23 )
    goto LABEL_23;
  v15 = 8LL;
  while ( 1 )
  {
    max_length = v14->max_length;
    v17 = v15 - 8;
    if ( v15 - 8 >= (int)max_length )
      break;
    if ( !idList )
      goto LABEL_23;
    if ( v17 >= idList->max_length )
LABEL_24:
      sub_1BDBADC(v8, v9, v13);
    if ( !*((_DWORD *)&idList->obj.klass + v15) )
    {
      if ( v17 >= max_length )
        goto LABEL_24;
      if ( *((_DWORD *)&v14->obj.klass + v15) )
      {
        if ( !v7 )
          goto LABEL_23;
        items = v7->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v15 - 7,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          v14 = v23;
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = v15 - 7;
        }
      }
    }
    ++v15;
    if ( !v14 )
      goto LABEL_23;
  }
  if ( !v7 )
LABEL_23:
    sub_1BDBAD4(v8, v9);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall CombineInfoComponent__HideResStatusInfo(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resStatusInfo; // x0

  resStatusInfo = this->fields.resStatusInfo;
  if ( !resStatusInfo )
    sub_1BDBAD4(0LL, method);
  UnityEngine_GameObject__SetActive(resStatusInfo, 0, 0LL);
}


void __fastcall CombineInfoComponent__initCurrentStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct SetLimitCntInfoComponent_array *currentLimitCntInfos; // x8
  int max_length; // w20
  CombineInfoComponent_o *v5; // x19
  il2cpp_array_size_t v6; // w21

  currentLimitCntInfos = this->fields.currentLimitCntInfos;
  if ( !currentLimitCntInfos )
    goto LABEL_9;
  max_length = currentLimitCntInfos->max_length;
  if ( max_length >= 1 )
  {
    v5 = this;
    v6 = 0;
    do
    {
      if ( v6 >= currentLimitCntInfos->max_length )
        sub_1BDBADC(this, method, v2);
      this = (CombineInfoComponent_o *)currentLimitCntInfos->m_Items[v6];
      if ( !this )
        break;
      this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( max_length == ++v6 )
        return;
      currentLimitCntInfos = v5->fields.currentLimitCntInfos;
    }
    while ( currentLimitCntInfos );
LABEL_9:
    sub_1BDBAD4(this, method);
  }
}


void __fastcall CombineInfoComponent__initResStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct SetLimitCntInfoComponent_array *resLimitCntInfos; // x8
  int max_length; // w20
  CombineInfoComponent_o *v5; // x19
  il2cpp_array_size_t v6; // w21

  resLimitCntInfos = this->fields.resLimitCntInfos;
  if ( !resLimitCntInfos )
    goto LABEL_9;
  max_length = resLimitCntInfos->max_length;
  if ( max_length >= 1 )
  {
    v5 = this;
    v6 = 0;
    do
    {
      if ( v6 >= resLimitCntInfos->max_length )
        sub_1BDBADC(this, method, v2);
      this = (CombineInfoComponent_o *)resLimitCntInfos->m_Items[v6];
      if ( !this )
        break;
      this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      if ( max_length == ++v6 )
        return;
      resLimitCntInfos = v5->fields.resLimitCntInfos;
    }
    while ( resLimitCntInfos );
LABEL_9:
    sub_1BDBAD4(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__initStatusInfo(
        CombineInfoComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UILabel_o *currentMaxLvLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x21
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x3
  BalanceConfig_c *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B4878D & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_1BDB878(&CombineInfoComponent_TypeInfo, v5);
    byte_4B4878D = 1;
  }
  currentMaxLvLb = (UILabel_o *)CombineInfoComponent_TypeInfo;
  currentLvLb = this->fields.currentLvLb;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
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
  CombineInfoComponent__initCurrentStatusGrid(this, v8);
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  CombineInfoComponent__setCurrentLimitCntInfo(this, v10->static_fields->ServantLimitMax, 0, v9);
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
    sub_1BDBAD4(currentMaxLvLb, *(_QWORD *)&type);
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
  struct UserServantEntity_o *baseSvtData; // x24
  int32_t lv; // w26
  UIWidget_o *v15; // x21
  UIWidget_o *v16; // x25
  UIWidget_o *v17; // x22
  UIWidget_o *v18; // x23
  int v19; // w26
  bool v20; // w1
  __int64 v21; // x26
  __int64 v22; // x27
  int32_t combineResLimitCnt; // w26
  bool v24; // w1
  float combineResExpBarVal; // s0
  CombineInfoComponent_c *v26; // x0
  UIExtrusionLabel_o *resLvLb; // x25
  UILabel_o *resMaxLvLb; // x25
  UIExtrusionLabel_o *v29; // x26
  UILabel_o *v30; // x26
  CombineInfoComponent_c *v31; // x0
  const MethodInfo *v32; // x2
  UILabel_o *resExpValLb; // x25
  UIExtrusionLabel_o *v34; // x26
  UILabel_o *v35; // x27
  __int64 v36; // x27
  __int64 v37; // x28
  bool isLevelMax; // w0
  System_String_o *INIT_VAL_TXT; // x1
  UIExtrusionLabel_o *v40; // x26
  UILabel_o *v41; // x26
  CombineInfoComponent_c *v42; // x0
  const MethodInfo *v43; // x2
  float v44; // s0
  float v45; // s1
  float v46; // s2
  float v47; // s3
  UIWidget_o *v48; // x0
  UILabel_o *infoLb; // x27
  System_String_o *v50; // x28
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x29
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  CombineInfoComponent_c *v59; // x0
  float *p_r; // x8
  int32_t LimitCntMax; // w0
  const MethodInfo *v62; // x3
  ServantOverwriteStatus_o *OverwriteStatus; // x24
  UILabel_o *resHpLb; // x25
  CombineInfoComponent_c *v65; // x0
  UILabel_o *resAtkLb; // x20
  CombineInfoComponent_c *v67; // x0
  int32_t combineResSvtMaxLv; // [xsp+8h] [xbp-88h] BYREF
  int32_t LevelMax; // [xsp+Ch] [xbp-84h] BYREF
  __int64 v70; // [xsp+10h] [xbp-80h] BYREF
  __int64 v71; // [xsp+18h] [xbp-78h] BYREF
  __int64 barExp; // [xsp+20h] [xbp-70h] BYREF
  int32_t exp; // [xsp+28h] [xbp-68h] BYREF
  int32_t combineResSvtLv; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4B48790 & 1) == 0 )
  {
    sub_1BDB878(&CombineInfoComponent_TypeInfo, resSvtData);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1BDB878(&int_TypeInfo, v6);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_8606/*"MAX_LVUP_TXT"*/, v9);
    sub_1BDB878(&StringLiteral_397/*"#,0"*/, v10);
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, v11);
    this = (CombineInfoComponent_o *)sub_1BDB878(&StringLiteral_12536/*"SVTEQ_LVMAX_INFO_TXT"*/, v12);
    byte_4B48790 = 1;
  }
  exp = 0;
  v71 = 0LL;
  barExp = 0LL;
  v70 = 0LL;
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
  UserServantEntity__getExpInfo((UserServantEntity_o *)this, &exp, (int32_t *)&barExp + 1, (float *)&barExp, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
  if ( !this )
    goto LABEL_118;
  UIProgressBar__set_value((UIProgressBar_o *)this, *(float *)&barExp, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resLvLb;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)this,
                                     (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resMaxLvLb )
    goto LABEL_118;
  v15 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resMaxLvLb,
                                     (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resHpLb )
    goto LABEL_118;
  v16 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resHpLb,
                                     (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resAtkLb )
    goto LABEL_118;
  v17 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resAtkLb,
                                     (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v15 )
    goto LABEL_118;
  v18 = (UIWidget_o *)this;
  v77.fields.r = 1.0;
  v77.fields.g = 1.0;
  v77.fields.b = 1.0;
  v77.fields.a = 1.0;
  UIWidget__set_color(v15, v77, 0LL);
  if ( !v16 )
    goto LABEL_118;
  v78.fields.r = 1.0;
  v78.fields.g = 1.0;
  v78.fields.b = 1.0;
  v78.fields.a = 1.0;
  UIWidget__set_color(v16, v78, 0LL);
  if ( !v17 )
    goto LABEL_118;
  v79.fields.r = 1.0;
  v79.fields.g = 1.0;
  v79.fields.b = 1.0;
  v79.fields.a = 1.0;
  UIWidget__set_color(v17, v79, 0LL);
  if ( !v18 )
    goto LABEL_118;
  v80.fields.r = 1.0;
  v80.fields.g = 1.0;
  v80.fields.b = 1.0;
  v80.fields.a = 1.0;
  UIWidget__set_color(v18, v80, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb;
  if ( !this )
    goto LABEL_118;
  UILabel__set_overflowMethod((UILabel_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb2;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb3;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoLb4;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon2;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon3;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.infoIcon4;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v19 = combineResSvtLv - lv;
  if ( v19 < 1 )
  {
    if ( v4->fields.dispType == 2 )
    {
      v22 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v21 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v75.fields.currentCryptoKey = v22;
      *(_QWORD *)&v75.fields.fakeValue = v21;
      HIDWORD(v70) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v75, 0LL);
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_118;
      combineResLimitCnt = resSvtData->fields.combineResLimitCnt;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
      if ( !System_Int32__Equals_64087084((int32_t)&v70 + 4, combineResLimitCnt, 0LL)
        && UserServantEntity__isLevelMax(baseSvtData, 0LL) )
      {
        this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
        if ( !this )
          goto LABEL_118;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_118;
        v24 = 0;
LABEL_51:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v24, 0LL);
        this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
        if ( !this )
          goto LABEL_118;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_118;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
        if ( !this )
          goto LABEL_118;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        goto LABEL_65;
      }
    }
    else
    {
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_118;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
    }
    this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
    if ( !this )
      goto LABEL_118;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_118;
    v24 = 1;
    goto LABEL_51;
  }
  this = (CombineInfoComponent_o *)v4->fields.resExpBar;
  if ( !this )
    goto LABEL_118;
  UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
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
  if ( v19 != 1 )
  {
    combineResExpBarVal = 1.0;
LABEL_56:
    UIProgressBar__set_value((UIProgressBar_o *)this, combineResExpBarVal, 0LL);
    this = (CombineInfoComponent_o *)v4->fields.resRemaingExpBar;
    if ( !this )
      goto LABEL_118;
    this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_118;
    v20 = 1;
    goto LABEL_59;
  }
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_118;
  v20 = 0;
LABEL_59:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v20, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
  if ( !this )
    goto LABEL_118;
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
  if ( !this )
    goto LABEL_118;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v26 = CombineInfoComponent_TypeInfo;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v26 = CombineInfoComponent_TypeInfo;
  }
  UIWidget__set_color(v15, v26->static_fields->COLOR_VAL, 0LL);
LABEL_65:
  switch ( v4->fields.dispType )
  {
    case 0:
      resLvLb = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0LL);
      if ( !resLvLb )
        goto LABEL_118;
      UIExtrusionLabel__set_text(resLvLb, (System_String_o *)this, 0LL);
      resMaxLvLb = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !resMaxLvLb )
        goto LABEL_118;
      UILabel__set_text(resMaxLvLb, (System_String_o *)this, 0LL);
      goto LABEL_80;
    case 1:
      v29 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !v29 )
        goto LABEL_118;
      UIExtrusionLabel__set_text(v29, (System_String_o *)this, 0LL);
      v30 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v30 )
        goto LABEL_118;
      UILabel__set_text(v30, (System_String_o *)this, 0LL);
      v31 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v31 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v16, v31->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v32);
      resExpValLb = v4->fields.resExpValLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_64087256(
                                         (int)resSvtData + 40,
                                         (System_String_o *)StringLiteral_397/*"#,0"*/,
                                         0LL);
      if ( !resExpValLb )
        goto LABEL_118;
      goto LABEL_84;
    case 2:
      v34 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0LL);
      if ( !v34 )
        goto LABEL_118;
      UIExtrusionLabel__set_text(v34, (System_String_o *)this, 0LL);
      v35 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v35 )
        goto LABEL_118;
      UILabel__set_text(v35, (System_String_o *)this, 0LL);
      v37 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v36 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v76.fields.currentCryptoKey = v37;
      *(_QWORD *)&v76.fields.fakeValue = v36;
      LODWORD(v70) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v76, 0LL);
      if ( System_Int32__Equals_64087084((int32_t)&v70, resSvtData->fields.combineResLimitCnt, 0LL) )
      {
LABEL_80:
        isLevelMax = UserServantEntity__isLevelMax(baseSvtData, 0LL);
        resExpValLb = v4->fields.infoLb;
        if ( isLevelMax )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (CombineInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12536/*"SVTEQ_LVMAX_INFO_TXT"*/, 0LL);
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
            j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          if ( resExpValLb )
          {
            INIT_VAL_TXT = CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT;
            goto LABEL_95;
          }
        }
LABEL_118:
        sub_1BDBAD4(this, resSvtData);
      }
      infoLb = v4->fields.infoLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8606/*"MAX_LVUP_TXT"*/, 0LL);
      LevelMax = UserServantEntity__getLevelMax(baseSvtData, 0LL);
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax, v51, v52, v53);
      combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
      v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv, v55, v56, v57);
      this = (CombineInfoComponent_o *)System_String__Format_62613552(v50, v54, v58, 0LL);
      if ( !infoLb )
        goto LABEL_118;
      UILabel__set_text(infoLb, (System_String_o *)this, 0LL);
      v59 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v59 = CombineInfoComponent_TypeInfo;
      }
      p_r = &v59->static_fields->COLOR_VAL.fields.r;
      v48 = v16;
      v44 = *p_r;
      v45 = p_r[1];
      v46 = p_r[2];
      v47 = p_r[3];
LABEL_102:
      UIWidget__set_color(v48, *(UnityEngine_Color_o *)&v44, 0LL);
LABEL_103:
      LimitCntMax = UserServantEntity__getLimitCntMax(baseSvtData, 0LL);
      CombineInfoComponent__setResLimitCntInfo(v4, LimitCntMax, resSvtData->fields.combineResLimitCnt, v62);
      OverwriteStatus = UserServantEntity__GetOverwriteStatus(baseSvtData, 0LL, 0LL);
      HIDWORD(v71) = resSvtData->fields.combineResHp;
      resHpLb = v4->fields.resHpLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_64087256(
                                         (int32_t)&v71 + 4,
                                         (System_String_o *)StringLiteral_9229/*"N0"*/,
                                         0LL);
      if ( !resHpLb )
        goto LABEL_118;
      UILabel__set_text(resHpLb, (System_String_o *)this, 0LL);
      if ( !OverwriteStatus )
        goto LABEL_118;
      if ( OverwriteStatus->fields._Hp_k__BackingField != HIDWORD(v71) )
      {
        v65 = CombineInfoComponent_TypeInfo;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v65 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v17, v65->static_fields->COLOR_VAL, 0LL);
      }
      LODWORD(v71) = resSvtData->fields.combineResAtk;
      resAtkLb = v4->fields.resAtkLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_64087256(
                                         (int32_t)&v71,
                                         (System_String_o *)StringLiteral_9229/*"N0"*/,
                                         0LL);
      if ( !resAtkLb )
        goto LABEL_118;
      UILabel__set_text(resAtkLb, (System_String_o *)this, 0LL);
      if ( OverwriteStatus->fields._Atk_k__BackingField != (_DWORD)v71 )
      {
        v67 = CombineInfoComponent_TypeInfo;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v67 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v18, v67->static_fields->COLOR_VAL, 0LL);
      }
      if ( v4->fields.dispType == 4 )
      {
        v83.fields.r = 1.0;
        v83.fields.g = 1.0;
        v83.fields.b = 1.0;
        v83.fields.a = 1.0;
        UIWidget__set_color(v15, v83, 0LL);
        v84.fields.r = 1.0;
        v84.fields.g = 1.0;
        v84.fields.b = 1.0;
        v84.fields.a = 1.0;
        UIWidget__set_color(v17, v84, 0LL);
        v85.fields.r = 1.0;
        v85.fields.g = 1.0;
        v85.fields.b = 1.0;
        v85.fields.a = 1.0;
        UIWidget__set_color(v18, v85, 0LL);
      }
      this = (CombineInfoComponent_o *)v4->fields.resStatusInfo;
      if ( !this )
        goto LABEL_118;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      return;
    case 4:
      v40 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0LL);
      if ( !v40 )
        goto LABEL_118;
      UIExtrusionLabel__set_text(v40, (System_String_o *)this, 0LL);
      v41 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v41 )
        goto LABEL_118;
      UILabel__set_text(v41, (System_String_o *)this, 0LL);
      v42 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v42 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v16, v42->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v43);
      this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
      if ( !this )
        goto LABEL_118;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v81.fields.r = 1.0;
      v81.fields.g = 1.0;
      v81.fields.b = 1.0;
      v81.fields.a = 1.0;
      UIWidget__set_color(v15, v81, 0LL);
      v82.fields.r = 1.0;
      v82.fields.g = 1.0;
      v82.fields.b = 1.0;
      v82.fields.a = 1.0;
      UIWidget__set_color(v17, v82, 0LL);
      v44 = 1.0;
      v45 = 1.0;
      v46 = 1.0;
      v47 = 1.0;
      v48 = v18;
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
        sub_1BDBADC(this, *(_QWORD *)&maxLimitCnt, *(_QWORD *)&svtLimitCnt);
      v9 = &currentLimitCntInfos->obj.klass + i;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_1BDBAD4(this, *(_QWORD *)&maxLimitCnt);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UserServantEntity_o **p_baseSvtData; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
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
  UILabel_o *currentHpLb; // x21
  System_String_o *v30; // x20
  UILabel_o *currentAtkLb; // x19
  float barExp[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B4878F & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, baseData);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_7432/*"IMPOSSIBLE_LIMITUP_COLOR"*/, v6);
    sub_1BDB878(&StringLiteral_397/*"#,0"*/, v7);
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, v8);
    byte_4B4878F = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  *(_QWORD *)barExp = 0LL;
  CombineInfoComponent__initCurrentStatusGrid(this, (const MethodInfo *)baseData);
  p_baseSvtData = &this->fields.baseSvtData;
  this->fields.baseSvtData = baseData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseSvtData, (int32_t)baseData, v10, v11);
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
      v13 = isLevelMax;
      goto LABEL_29;
    case 1:
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      v17 = this->fields.currentLvLb;
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7432/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_42;
        v18 = isLevelMax;
        v19 = (Il2CppObject *)System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
        isLevelMax = System_String__Format(v18, v19, 0LL);
      }
      v13 = isLevelMax;
      if ( !v17 )
        goto LABEL_42;
      UIExtrusionLabel__set_text(v17, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      currentMaxLvLb = this->fields.currentMaxLvLb;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)isLevelMax, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7432/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_42;
        v20 = isLevelMax;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax(*p_baseSvtData, 0LL);
        v21 = (Il2CppObject *)System_Int32__ToString((int32_t)barExp, 0LL);
        isLevelMax = System_String__Format(v20, v21, 0LL);
      }
      else
      {
        isLevelMax = (System_String_o *)*p_baseSvtData;
        if ( !*p_baseSvtData )
          goto LABEL_42;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0LL);
        isLevelMax = System_Int32__ToString((int32_t)barExp, 0LL);
      }
      v13 = isLevelMax;
      if ( !currentMaxLvLb )
        goto LABEL_42;
LABEL_29:
      UILabel__set_text(currentMaxLvLb, v13, 0LL);
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
      isLevelMax = System_Int32__ToString_64087256((int32_t)lateExp, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      if ( !currentExpValLb )
        goto LABEL_42;
      UILabel__set_text(currentExpValLb, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      isLevelMax = (System_String_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)isLevelMax, 0LL);
      v23 = *p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      v24 = (int)isLevelMax;
      v26 = *(_QWORD *)&v23->fields.limitCount.fields.currentCryptoKey;
      v25 = *(_QWORD *)&v23->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = v26;
      *(_QWORD *)&v34.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v34, 0LL);
      CombineInfoComponent__setCurrentLimitCntInfo(this, v24, v27, v28);
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      isLevelMax = (System_String_o *)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)isLevelMax, 0LL, 0LL);
      if ( !isLevelMax )
        goto LABEL_42;
      currentHpLb = this->fields.currentHpLb;
      v30 = isLevelMax;
      barExp[0] = *(float *)&isLevelMax->fields._stringLength;
      isLevelMax = System_Int32__ToString_64087256((int32_t)barExp, (System_String_o *)StringLiteral_9229/*"N0"*/, 0LL);
      if ( !currentHpLb
        || (UILabel__set_text(currentHpLb, isLevelMax, 0LL),
            currentAtkLb = this->fields.currentAtkLb,
            barExp[0] = *(float *)&v30->fields._firstChar,
            isLevelMax = System_Int32__ToString_64087256((int32_t)barExp, (System_String_o *)StringLiteral_9229/*"N0"*/, 0LL),
            !currentAtkLb) )
      {
LABEL_42:
        sub_1BDBAD4(isLevelMax, v13);
      }
      UILabel__set_text(currentAtkLb, isLevelMax, 0LL);
      return;
    default:
      goto LABEL_30;
  }
}


void __fastcall CombineInfoComponent__setInitInfoLb(CombineInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *infoLb; // x19
  UILabel_o *infoLb2; // x0

  if ( (byte_4B4878E & 1) == 0 )
  {
    sub_1BDB878(&CombineInfoComponent_TypeInfo, method);
    sub_1BDB878(&StringLiteral_25523/*"レベル上限："*/, v3);
    byte_4B4878E = 1;
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
      UILabel__set_text(infoLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
      break;
    case 1:
    case 4:
      infoLb2 = this->fields.infoLb;
      if ( !infoLb2 )
        goto LABEL_28;
      UILabel__set_text(infoLb2, (System_String_o *)StringLiteral_25523/*"レベル上限："*/, 0LL);
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
        sub_1BDBAD4(infoLb2, method);
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
        sub_1BDBADC(this, *(_QWORD *)&maxLimitCnt, *(_QWORD *)&svtLimitCnt);
      v9 = &resLimitCntInfos->obj.klass + i;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_1BDBAD4(this, *(_QWORD *)&maxLimitCnt);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.name = name;
  v12 = (CombineInfoComponent_GetItemInfo_o *)((char *)v12 + 24);
  v12[-1].fields.acquiredCount = itemId;
  sub_1BDB81C((CGThumbnailListItem_o *)v12, (int32_t)name, v13, v14);
  LODWORD(v12->monitor) = iconImageId;
  HIDWORD(v12->monitor) = count;
  v12->fields.itemId = acquiredCount;
}


void __fastcall CombineInfoComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B48795 & 1) == 0 )
  {
    sub_1BDB878(&CombineInfoComponent___c_TypeInfo, v1);
    byte_4B48795 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(CombineInfoComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CombineInfoComponent___c_TypeInfo->static_fields->__9 = (struct CombineInfoComponent___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)CombineInfoComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, data);
  return data->fields.itemId == giftEntity->fields.objectId;
}