void __fastcall CombineInfoComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v14; // w3
  struct CombineInfoComponent_StaticFields *v15; // x8

  if ( (byte_49FFB5A & 1) == 0 )
  {
    sub_1B640C8(&CombineInfoComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_20091/*"icon_reward_get"*/, v4);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FFB5A = 1;
  }
  CombineInfoComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_BA3BD0;
  static_fields = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_NEW_SKILL_LABEL_WIDTH = 0x8C0000008CLL;
  static_fields->INFO_GET_ITEM_LABEL_2_WIDTH = 34;
  v7 = (int)StringLiteral_1/*""*/;
  static_fields->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->INIT_VAL_TXT, v7, v2, v3);
  v8 = CombineInfoComponent_TypeInfo;
  v9 = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&v9->LIMIT_UP_GET_SKILL_INFO_POS.fields.x = 3246391296LL;
  v9->LIMIT_UP_GET_SKILL_INFO_POS.fields.z = 0.0;
  v10 = v8->static_fields;
  *(_QWORD *)&v10->LIMIT_UP_REWARD_INFO_POS.fields.x = 1127546880LL;
  v10->LIMIT_UP_REWARD_INFO_POS.fields.z = 0.0;
  v11 = StringLiteral_20091/*"icon_reward_get"*/;
  v12 = v8->static_fields;
  v12->LIMIT_UP_REWARD_GET_ICON_NAME = (struct System_String_o *)StringLiteral_20091/*"icon_reward_get"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v12->LIMIT_UP_REWARD_GET_ICON_NAME, v11, v13, v14);
  v15 = CombineInfoComponent_TypeInfo->static_fields;
  v15->LIMIT_UP_REWARD_GET_ICON_ID = 9;
  v15->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = (struct UnityEngine_Color_o)xmmword_BA3440;
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
  Il2CppObject *v28; // x23
  Il2CppObject *v29; // x0
  CombineInfoComponent_o *v30; // x0
  const MethodInfo *v31; // x2
  char *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Text_StringBuilder_o *v35; // x22
  System_Text_StringBuilder_o *appended; // x0
  __int64 v37; // x1
  __int64 v38; // x8
  unsigned __int64 v39; // x24
  int32_t v40; // w23
  UILabel_o *infoLb2; // x23
  System_String_o *v42; // x24
  Il2CppObject *v43; // x0
  UILabel_o *v44; // x22
  _BOOL8 v45; // x0
  const MethodInfo *v46; // x4
  UnityEngine_GameObject_o *v47; // x0
  CombineInfoComponent_c *v48; // x8
  UnityEngine_GameObject_o *v49; // x21
  int32_t size; // w21
  ItemIconComponent_o *infoIcon3; // x20
  _BOOL4 v52; // w23
  __int64 v53; // x9
  int32_t v54; // w28
  UILabel_o *infoLb3; // x20
  System_String_o *v56; // x21
  Il2CppObject *v57; // x22
  Il2CppObject *v58; // x0
  UILabel_o *v59; // x20
  System_String_o *v60; // x21
  Il2CppObject *v61; // x0
  UILabel_o *v62; // x20
  ItemIconComponent_o *infoIcon4; // x20
  __int64 v64; // x9
  int32_t v65; // w22
  UILabel_o *infoLb4; // x20
  System_String_o *v67; // x21
  Il2CppObject *v68; // x0
  UILabel_o *v69; // x20
  UILabel_o *infoLb5; // x20
  UILabel_o *v71; // x20
  bool v72; // w1
  int32_t combineResSvtMaxLv; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t LevelMax; // [xsp+8h] [xbp-68h] BYREF
  bool isAllAcquired; // [xsp+Ch] [xbp-64h] BYREF
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *getItemInfoList; // [xsp+18h] [xbp-58h] BYREF
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v87; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v88; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FFB57 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, resSvtData);
    sub_1B640C8(&CombineInfoComponent_TypeInfo, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_8545/*"MAX_LVUP_TXT"*/, v11);
    sub_1B640C8(&StringLiteral_8213/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, v12);
    sub_1B640C8(&StringLiteral_8211/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, v13);
    sub_1B640C8(&StringLiteral_8215/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, v14);
    sub_1B640C8(&StringLiteral_8212/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, v15);
    sub_1B640C8(&StringLiteral_8214/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, v16);
    sub_1B640C8(&StringLiteral_8205/*"LIMITUP_MAX_TXT"*/, v17);
    byte_49FFB57 = 1;
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
      getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8205/*"LIMITUP_MAX_TXT"*/, 0LL);
      goto LABEL_18;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLimitCountMax )
      goto LABEL_13;
  }
  getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8545/*"MAX_LVUP_TXT"*/, 0LL);
  if ( !this->fields.baseSvtData )
    goto LABEL_133;
  v27 = (System_String_o *)getSkillRewardObj;
  LevelMax = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0LL);
  getSkillRewardObj = (char *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
  if ( !resSvtData )
    goto LABEL_133;
  v28 = (Il2CppObject *)getSkillRewardObj;
  combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
  getSkillRewardObj = (char *)System_String__Format_61389768(v27, v28, v29, 0LL);
LABEL_18:
  if ( !infoLb )
    goto LABEL_133;
  UILabel__set_text(infoLb, (System_String_o *)getSkillRewardObj, 0LL);
  getSkillRewardObj = (char *)CombineInfoComponent__GetNewReleaseSkillNumList(v30, resSvtData, v31);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v32 = getSkillRewardObj;
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
    v35 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v33, v34);
    System_Text_StringBuilder___ctor(v35, 0LL);
    v38 = *((_QWORD *)v32 + 3);
    if ( (int)v38 >= 1 )
    {
      v39 = 0LL;
      v40 = (_DWORD)v32 + 32;
      do
      {
        if ( v39 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8214/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, 0LL);
          if ( !v35 )
            goto LABEL_133;
          appended = System_Text_StringBuilder__Append_60536548(v35, (System_String_o *)getSkillRewardObj, 0LL);
          LODWORD(v38) = *((_DWORD *)v32 + 6);
        }
        if ( v39 >= (unsigned int)v38 )
          sub_1B6432C(appended, v37);
        getSkillRewardObj = (char *)System_Int32__ToString(v40, 0LL);
        if ( !v35 )
          goto LABEL_133;
        appended = System_Text_StringBuilder__Append_60536548(v35, (System_String_o *)getSkillRewardObj, 0LL);
        LODWORD(v38) = *((_DWORD *)v32 + 6);
        ++v39;
        v40 += 4;
      }
      while ( (__int64)v39 < (int)v38 );
    }
    infoLb2 = this->fields.infoLb2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8215/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, 0LL);
    if ( !v35 )
      goto LABEL_133;
    v42 = (System_String_o *)getSkillRewardObj;
    v43 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v35->klass->vtable._3_ToString.method)(
                            v35,
                            v35->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    getSkillRewardObj = (char *)System_String__Format(v42, v43, 0LL);
    if ( !infoLb2 )
      goto LABEL_133;
    UILabel__set_text(infoLb2, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v44 = this->fields.infoLb2;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v44 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v44, CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH, 0LL);
  }
  getSkillRewardObj = (char *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v45 = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0LL);
  if ( v45 )
    return;
  if ( !*((_QWORD *)v32 + 3) )
  {
    getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v47 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0LL);
    v48 = CombineInfoComponent_TypeInfo;
    v49 = v47;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
      v48 = CombineInfoComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v49, v48->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  }
  CombineInfoComponent__GetLimitCountUpReward(
    (CombineInfoComponent_o *)v45,
    resSvtData,
    &getItemInfoList,
    &isAllAcquired,
    v46);
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
                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__)) == 0LL)
    || !infoIcon3
    || (ItemIconComponent__SetGift_37829292(infoIcon3, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0LL),
        (getSkillRewardObj = (char *)getItemInfoList) == 0LL)
    || (v52 = isAllAcquired,
        (getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)getItemInfoList,
                                       0,
                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__)) == 0LL) )
  {
LABEL_133:
    sub_1B64324(getSkillRewardObj);
  }
  v53 = 40LL;
  if ( !v52 )
    v53 = 36LL;
  v54 = *(_DWORD *)&getSkillRewardObj[v53];
  infoLb3 = this->fields.infoLb3;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( size == 1 )
  {
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8211/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, 0LL);
    if ( !getItemInfoList )
      goto LABEL_133;
    v56 = (System_String_o *)getSkillRewardObj;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  0,
                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v57 = (Il2CppObject *)*((_QWORD *)getSkillRewardObj + 3);
    LevelMax = v54;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (char *)System_String__Format_61389768(v56, v57, v58, 0LL);
    if ( !infoLb3 )
      goto LABEL_133;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v59 = this->fields.infoLb3;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v59 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v59, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH, 0LL);
  }
  else
  {
    v60 = LocalizationManager__Get((System_String_o *)StringLiteral_8212/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v54;
    v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (char *)System_String__Format(v60, v61, 0LL);
    if ( !infoLb3 )
      goto LABEL_133;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v62 = this->fields.infoLb3;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v62 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v62, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
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
                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    if ( !infoIcon4 )
      goto LABEL_133;
    ItemIconComponent__SetGift_37829292(infoIcon4, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0LL);
    getSkillRewardObj = (char *)getItemInfoList;
    if ( !getItemInfoList )
      goto LABEL_133;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  1,
                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v64 = 40LL;
    if ( !v52 )
      v64 = 36LL;
    v65 = *(_DWORD *)&getSkillRewardObj[v64];
    infoLb4 = this->fields.infoLb4;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_8212/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v65;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    getSkillRewardObj = (char *)System_String__Format(v67, v68, 0LL);
    if ( !infoLb4 )
      goto LABEL_133;
    UILabel__set_text(infoLb4, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v69 = this->fields.infoLb4;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v69 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v69, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
    getSkillRewardObj = (char *)this->fields.infoLb5;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    getSkillRewardObj = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)getSkillRewardObj, 0LL);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, 1, 0LL);
    infoLb5 = this->fields.infoLb5;
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8213/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, 0LL);
    if ( !infoLb5 )
      goto LABEL_133;
    UILabel__set_text(infoLb5, (System_String_o *)getSkillRewardObj, 0LL);
  }
  getSkillRewardObj = (char *)this->fields.infoIcon3;
  if ( !v52 )
  {
    if ( getSkillRewardObj )
    {
      v82.fields.r = 1.0;
      v82.fields.g = 1.0;
      v82.fields.b = 1.0;
      v82.fields.a = 1.0;
      ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v82, 0LL);
      getSkillRewardObj = (char *)this->fields.infoIcon4;
      if ( getSkillRewardObj )
      {
        v83.fields.r = 1.0;
        v83.fields.g = 1.0;
        v83.fields.b = 1.0;
        v83.fields.a = 1.0;
        ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v83, 0LL);
        getSkillRewardObj = (char *)this->fields.infoLb3;
        if ( getSkillRewardObj )
        {
          v84.fields.r = 1.0;
          v84.fields.g = 1.0;
          v84.fields.b = 1.0;
          v84.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v84, 0LL);
          getSkillRewardObj = (char *)this->fields.infoLb4;
          if ( getSkillRewardObj )
          {
            v85.fields.r = 1.0;
            v85.fields.g = 1.0;
            v85.fields.b = 1.0;
            v85.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v85, 0LL);
            getSkillRewardObj = (char *)this->fields.infoLb5;
            if ( getSkillRewardObj )
            {
              v86.fields.r = 1.0;
              v86.fields.g = 1.0;
              v86.fields.b = 1.0;
              v86.fields.a = 1.0;
              UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v86, 0LL);
              getSkillRewardObj = (char *)this->fields.infoLb3;
              if ( getSkillRewardObj )
              {
                v87.fields.r = 0.0;
                v87.fields.g = 0.0;
                v87.fields.b = 0.0;
                v87.fields.a = 1.0;
                UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v87, 0LL);
                getSkillRewardObj = (char *)this->fields.infoLb4;
                if ( getSkillRewardObj )
                {
                  v88.fields.r = 0.0;
                  v88.fields.g = 0.0;
                  v88.fields.b = 0.0;
                  v88.fields.a = 1.0;
                  UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v88, 0LL);
                  getSkillRewardObj = (char *)this->fields.infoLb5;
                  if ( getSkillRewardObj )
                  {
                    v89.fields.r = 0.0;
                    v89.fields.g = 0.0;
                    v89.fields.b = 0.0;
                    v89.fields.a = 1.0;
                    UILabel__set_effectColor((UILabel_o *)getSkillRewardObj, v89, 0LL);
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
                              v72 = 0;
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
  v77.fields.r = 0.5;
  v77.fields.g = 0.5;
  v77.fields.b = 0.5;
  v77.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v77, 0LL);
  getSkillRewardObj = (char *)this->fields.infoIcon4;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v78.fields.r = 0.5;
  v78.fields.g = 0.5;
  v78.fields.b = 0.5;
  v78.fields.a = 1.0;
  ItemIconComponent__SetColor((ItemIconComponent_o *)getSkillRewardObj, v78, 0LL);
  getSkillRewardObj = (char *)this->fields.infoLb3;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v79.fields.r = 0.5;
  v79.fields.g = 0.5;
  v79.fields.b = 0.5;
  v79.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v79, 0LL);
  getSkillRewardObj = (char *)this->fields.infoLb4;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v80.fields.r = 0.5;
  v80.fields.g = 0.5;
  v80.fields.b = 0.5;
  v80.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v80, 0LL);
  getSkillRewardObj = (char *)this->fields.infoLb5;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v81.fields.r = 0.5;
  v81.fields.g = 0.5;
  v81.fields.b = 0.5;
  v81.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)getSkillRewardObj, v81, 0LL);
  getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  v71 = this->fields.infoLb3;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
  }
  if ( !v71 )
    goto LABEL_133;
  UILabel__set_effectColor(v71, *(UnityEngine_Color_o *)(*((_QWORD *)getSkillRewardObj + 23) + 76LL), 0LL);
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
  v72 = 1;
LABEL_131:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getSkillRewardObj, v72, 0LL);
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
  int32_t v26; // w3
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **v29; // x20
  struct UserServantEntity_o *baseSvtData; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v31; // x29
  int64_t v32; // x23
  __int64 v33; // x24
  __int64 v34; // x25
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  int v42; // w25
  __int64 v43; // x27
  struct UserServantEntity_o *v44; // x8
  __int64 v45; // x26
  __int64 v46; // x28
  int32_t v47; // w2
  int32_t v48; // w3
  int64_t *v49; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v51; // x19
  System_Func_object__bool__o *v52; // x29
  int v53; // w20
  System_String_o *v54; // x28
  int32_t IconImageId; // w29
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x27
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w2
  int32_t v62; // w3
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  System_Collections_Generic_List_object__o *v67; // x19
  System_Predicate_object__o *v68; // x20
  Il2CppObject *v69; // x21
  struct CombineInfoComponent___c_StaticFields *static_fields; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+10h] [xbp-80h]
  System_String_o *countText; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v79; // 0:x0.16

  if ( (byte_49FFB59 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, resSvtData);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___, v9);
    sub_1B640C8(&System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo, v10);
    sub_1B640C8(&CombineInfoComponent_GetItemInfo_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_1B640C8(&System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo, v18);
    sub_1B640C8(&Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, v19);
    sub_1B640C8(&Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__, v20);
    sub_1B640C8(&CombineInfoComponent___c__DisplayClass56_0_TypeInfo, v21);
    sub_1B640C8(&CombineInfoComponent___c_TypeInfo, v22);
    sub_1B640C8(&StringLiteral_1/*""*/, v23);
    byte_49FFB59 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo,
                                                       resSvtData,
                                                       getItemInfoList);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  *getItemInfoList = (System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *)v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)getItemInfoList, (int32_t)v24, v25, v26);
  *isAllAcquired = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v29 = getItemInfoList;
  if ( !resSvtData )
    goto LABEL_53;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_53;
  v31 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v32 = UserId;
  v34 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v78.fields.currentCryptoKey = v34;
  *(_QWORD *)&v78.fields.fakeValue = v33;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v78, 0LL);
  if ( !Master_object )
    goto LABEL_53;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       v32,
                       UserId,
                       0LL);
  v35 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
  v39 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  UserId = (int64_t)resSvtData->fields.baseSvtData;
  if ( !UserId )
    goto LABEL_53;
  v42 = UserServantEntity__getLimitCount((UserServantEntity_o *)UserId, 0LL) + 1;
  if ( v42 <= resSvtData->fields.combineResLimitCnt )
  {
    while ( 1 )
    {
      v43 = sub_1B64314(CombineInfoComponent___c__DisplayClass56_0_TypeInfo, v40, v41);
      System_Object___ctor((Il2CppObject *)v43, 0LL);
      v44 = resSvtData->fields.baseSvtData;
      if ( !v44 )
        break;
      v46 = *(_QWORD *)&v44->fields.svtId.fields.currentCryptoKey;
      v45 = *(_QWORD *)&v44->fields.svtId.fields.fakeValue;
      if ( !(*v31)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v31);
      *(_QWORD *)&v79.fields.currentCryptoKey = v46;
      *(_QWORD *)&v79.fields.fakeValue = v45;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v79, 0LL);
      if ( !v35 )
        break;
      UserId = CombineLimitGiftMaster__GetCombineLimitGiftId((CombineLimitGiftMaster_o *)v35, UserId, v42, 0LL);
      if ( (_DWORD)UserId )
      {
        if ( !v36 )
          break;
        UserId = (int64_t)GiftMaster__getDataById((GiftMaster_o *)v36, UserId, 0LL);
        if ( !v43 )
          break;
        *(_QWORD *)(v43 + 16) = UserId;
        v49 = (int64_t *)(v43 + 16);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 16), UserId, v47, v48);
        if ( *(_QWORD *)(v43 + 16) )
        {
          v50 = (System_Collections_Generic_IEnumerable_TSource__o *)*v29;
          v51 = v31;
          v52 = (System_Func_object__bool__o *)sub_1B64314(
                                                 System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo,
                                                 v40,
                                                 v41);
          System_Func_object__bool____ctor(
            v52,
            (Il2CppObject *)v43,
            Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__,
            0LL);
          UserId = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                              v50,
                              (System_Func_TSource__bool__o *)v52,
                              (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
          if ( UserId )
          {
            if ( EntityDefinitely && v42 <= EntityDefinitely->fields.maxLimitCount )
            {
              if ( !*v49 )
                break;
              v31 = v51;
              *(_DWORD *)(UserId + 40) += *(_DWORD *)(*v49 + 28);
            }
            else
            {
              *isAllAcquired = 0;
              if ( !*v49 )
                break;
              v31 = v51;
              *(_DWORD *)(UserId + 36) += *(_DWORD *)(*v49 + 28);
            }
          }
          else
          {
            countText = (System_String_o *)StringLiteral_1/*""*/;
            nameText = (System_String_o *)StringLiteral_1/*""*/;
            UserId = *v49;
            if ( !*v49 )
              break;
            GiftEntity__GetInfo((GiftEntity_o *)UserId, &nameText, &countText, 0LL);
            UserId = *v49;
            if ( !*v49 )
              break;
            v53 = *(_DWORD *)(UserId + 24);
            v54 = nameText;
            IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)UserId, 0LL);
            v58 = sub_1B64314(CombineInfoComponent_GetItemInfo_TypeInfo, v56, v57);
            System_Object___ctor((Il2CppObject *)v58, 0LL);
            *(_DWORD *)(v58 + 16) = v53;
            *(_QWORD *)(v58 + 24) = v54;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 24), (int32_t)v54, v59, v60);
            *(_DWORD *)(v58 + 36) = 0;
            *(_DWORD *)(v58 + 40) = 0;
            *(_DWORD *)(v58 + 32) = IconImageId;
            if ( !EntityDefinitely )
              goto LABEL_31;
            if ( v42 <= EntityDefinitely->fields.maxLimitCount )
            {
              v29 = getItemInfoList;
              if ( !*v49 )
                break;
              v31 = v51;
              *(_DWORD *)(v58 + 40) = *(_DWORD *)(*v49 + 28);
            }
            else
            {
LABEL_31:
              v29 = getItemInfoList;
              *isAllAcquired = 0;
              if ( !*v49 )
                break;
              v31 = v51;
              *(_DWORD *)(v58 + 36) += *(_DWORD *)(*v49 + 28);
            }
            UserId = (int64_t)*v29;
            if ( !*v29 )
              break;
            v63 = *(_QWORD *)(UserId + 16);
            v64 = Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__;
            ++*(_DWORD *)(UserId + 28);
            if ( !v63 )
              break;
            v65 = *(int *)(UserId + 24);
            if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)UserId,
                (Il2CppObject *)v58,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
            }
            else
            {
              v66 = v63 + 8 * v65;
              *(_DWORD *)(UserId + 24) = v65 + 1;
              *(_QWORD *)(v66 + 32) = v58;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v66 + 32), v58, v61, v62);
            }
          }
        }
      }
      if ( ++v42 > resSvtData->fields.combineResLimitCnt )
        goto LABEL_43;
    }
LABEL_53:
    sub_1B64324(UserId);
  }
LABEL_43:
  if ( !*isAllAcquired )
  {
    v67 = (System_Collections_Generic_List_object__o *)*v29;
    UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
    if ( !CombineInfoComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent___c_TypeInfo);
      UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
    }
    v68 = *(System_Predicate_object__o **)(*(_QWORD *)(UserId + 184) + 8LL);
    if ( !v68 )
    {
      if ( !*(_DWORD *)(UserId + 224) )
      {
        j_il2cpp_runtime_class_init_0(UserId);
        UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
      }
      v69 = **(Il2CppObject ***)(UserId + 184);
      v68 = (System_Predicate_object__o *)sub_1B64314(
                                            System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo,
                                            v40,
                                            v41);
      System_Predicate_object____ctor(v68, v69, Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, 0LL);
      static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Predicate_CombineInfoComponent_GetItemInfo__o *)v68;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_0, (int32_t)v68, v71, v72);
    }
    if ( !v67 )
      goto LABEL_53;
    System_Collections_Generic_List_object___RemoveAll(
      v67,
      (System_Predicate_T__o *)v68,
      (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
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
  UserServantEntity_o *baseSvtData; // x21
  int32_t combineResSvtLv; // w22
  int32_t LimitCount; // w0
  __int64 v12; // x1
  System_Int32_array *v13; // x8
  __int64 v14; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v16; // x10
  struct System_Int32_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  System_String_array *v21; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *v22; // [xsp+10h] [xbp-40h] BYREF
  System_String_array *skillNameList; // [xsp+18h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_49FFB58 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, resSvtData);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_49FFB58 = 1;
  }
  idList = 0LL;
  v22 = 0LL;
  skillNameList = 0LL;
  v21 = 0LL;
  v7 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   resSvtData,
                                                   method);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
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
    &v22,
    &v21,
    resSvtData->fields.combineResSvtLv,
    resSvtData->fields.combineResLimitCnt,
    0,
    0LL);
  v13 = v22;
  if ( !v22 )
    goto LABEL_23;
  v14 = 8LL;
  while ( 1 )
  {
    max_length = v13->max_length;
    v16 = v14 - 8;
    if ( v14 - 8 >= (int)max_length )
      break;
    if ( !idList )
      goto LABEL_23;
    if ( v16 >= idList->max_length )
LABEL_24:
      sub_1B6432C(v8, v12);
    if ( !*((_DWORD *)&idList->obj.klass + v14) )
    {
      if ( v16 >= max_length )
        goto LABEL_24;
      if ( *((_DWORD *)&v13->obj.klass + v14) )
      {
        if ( !v7 )
          goto LABEL_23;
        items = v7->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v14 - 7,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          v13 = v22;
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = v14 - 7;
        }
      }
    }
    ++v14;
    if ( !v13 )
      goto LABEL_23;
  }
  if ( !v7 )
LABEL_23:
    sub_1B64324(v8);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall CombineInfoComponent__HideResStatusInfo(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resStatusInfo; // x0

  resStatusInfo = this->fields.resStatusInfo;
  if ( !resStatusInfo )
    sub_1B64324(0LL);
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
        sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
        sub_1B6432C(this, method);
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
    sub_1B64324(this);
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

  if ( (byte_49FFB53 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_1B640C8(&CombineInfoComponent_TypeInfo, v5);
    byte_49FFB53 = 1;
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
    sub_1B64324(currentMaxLvLb);
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
  struct UserServantEntity_o *baseSvtData; // x21
  int32_t lv; // w26
  UIWidget_o *v15; // x22
  UIWidget_o *v16; // x25
  UIWidget_o *v17; // x23
  UIWidget_o *v18; // x24
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
  Il2CppObject *v51; // x29
  Il2CppObject *v52; // x0
  CombineInfoComponent_c *v53; // x0
  float *p_r; // x8
  int32_t LimitCntMax; // w0
  const MethodInfo *v56; // x3
  UILabel_o *resHpLb; // x25
  CombineInfoComponent_c *v58; // x0
  UILabel_o *resAtkLb; // x20
  CombineInfoComponent_c *v60; // x0
  int32_t combineResSvtMaxLv; // [xsp+8h] [xbp-88h] BYREF
  int32_t LevelMax; // [xsp+Ch] [xbp-84h] BYREF
  __int64 v63; // [xsp+10h] [xbp-80h] BYREF
  __int64 v64; // [xsp+18h] [xbp-78h] BYREF
  __int64 barExp; // [xsp+20h] [xbp-70h] BYREF
  int32_t exp; // [xsp+28h] [xbp-68h] BYREF
  int32_t combineResSvtLv; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_49FFB56 & 1) == 0 )
  {
    sub_1B640C8(&CombineInfoComponent_TypeInfo, resSvtData);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_8545/*"MAX_LVUP_TXT"*/, v9);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v10);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v11);
    this = (CombineInfoComponent_o *)sub_1B640C8(&StringLiteral_12415/*"SVTEQ_LVMAX_INFO_TXT"*/, v12);
    byte_49FFB56 = 1;
  }
  exp = 0;
  v64 = 0LL;
  barExp = 0LL;
  v63 = 0LL;
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
                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resMaxLvLb )
    goto LABEL_117;
  v15 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resMaxLvLb,
                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resHpLb )
    goto LABEL_117;
  v16 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resHpLb,
                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resAtkLb )
    goto LABEL_117;
  v17 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resAtkLb,
                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v15 )
    goto LABEL_117;
  v18 = (UIWidget_o *)this;
  v70.fields.r = 1.0;
  v70.fields.g = 1.0;
  v70.fields.b = 1.0;
  v70.fields.a = 1.0;
  UIWidget__set_color(v15, v70, 0LL);
  if ( !v16 )
    goto LABEL_117;
  v71.fields.r = 1.0;
  v71.fields.g = 1.0;
  v71.fields.b = 1.0;
  v71.fields.a = 1.0;
  UIWidget__set_color(v16, v71, 0LL);
  if ( !v17 )
    goto LABEL_117;
  v72.fields.r = 1.0;
  v72.fields.g = 1.0;
  v72.fields.b = 1.0;
  v72.fields.a = 1.0;
  UIWidget__set_color(v17, v72, 0LL);
  if ( !v18 )
    goto LABEL_117;
  v73.fields.r = 1.0;
  v73.fields.g = 1.0;
  v73.fields.b = 1.0;
  v73.fields.a = 1.0;
  UIWidget__set_color(v18, v73, 0LL);
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
  v19 = combineResSvtLv - lv;
  if ( v19 < 1 )
  {
    if ( v4->fields.dispType == 2 )
    {
      v22 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v21 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v68.fields.currentCryptoKey = v22;
      *(_QWORD *)&v68.fields.fakeValue = v21;
      HIDWORD(v63) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v68, 0LL);
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_117;
      combineResLimitCnt = resSvtData->fields.combineResLimitCnt;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
      if ( !System_Int32__Equals_62180496((int32_t)&v63 + 4, combineResLimitCnt, 0LL)
        && UserServantEntity__isLevelMax(baseSvtData, 0LL) )
      {
        this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
        if ( !this )
          goto LABEL_117;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_117;
        v24 = 0;
LABEL_51:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v24, 0LL);
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
    v24 = 1;
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
  if ( v19 != 1 )
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
    v20 = 1;
    goto LABEL_59;
  }
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  v20 = 0;
LABEL_59:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v20, 0LL);
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
        goto LABEL_117;
      UIExtrusionLabel__set_text(resLvLb, (System_String_o *)this, 0LL);
      resMaxLvLb = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !resMaxLvLb )
        goto LABEL_117;
      UILabel__set_text(resMaxLvLb, (System_String_o *)this, 0LL);
      goto LABEL_80;
    case 1:
      v29 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !v29 )
        goto LABEL_117;
      UIExtrusionLabel__set_text(v29, (System_String_o *)this, 0LL);
      v30 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v30 )
        goto LABEL_117;
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
      this = (CombineInfoComponent_o *)System_Int32__ToString_62180668(
                                         (int)resSvtData + 40,
                                         (System_String_o *)StringLiteral_430/*"#,0"*/,
                                         0LL);
      if ( !resExpValLb )
        goto LABEL_117;
      goto LABEL_84;
    case 2:
      v34 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0LL);
      if ( !v34 )
        goto LABEL_117;
      UIExtrusionLabel__set_text(v34, (System_String_o *)this, 0LL);
      v35 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v35 )
        goto LABEL_117;
      UILabel__set_text(v35, (System_String_o *)this, 0LL);
      v37 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v36 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v69.fields.currentCryptoKey = v37;
      *(_QWORD *)&v69.fields.fakeValue = v36;
      LODWORD(v63) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v69, 0LL);
      if ( System_Int32__Equals_62180496((int32_t)&v63, resSvtData->fields.combineResLimitCnt, 0LL) )
      {
LABEL_80:
        isLevelMax = UserServantEntity__isLevelMax(baseSvtData, 0LL);
        resExpValLb = v4->fields.infoLb;
        if ( isLevelMax )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (CombineInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12415/*"SVTEQ_LVMAX_INFO_TXT"*/, 0LL);
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
LABEL_117:
        sub_1B64324(this);
      }
      infoLb = v4->fields.infoLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_8545/*"MAX_LVUP_TXT"*/, 0LL);
      LevelMax = UserServantEntity__getLevelMax(baseSvtData, 0LL);
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
      combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
      this = (CombineInfoComponent_o *)System_String__Format_61389768(v50, v51, v52, 0LL);
      if ( !infoLb )
        goto LABEL_117;
      UILabel__set_text(infoLb, (System_String_o *)this, 0LL);
      v53 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v53 = CombineInfoComponent_TypeInfo;
      }
      p_r = &v53->static_fields->COLOR_VAL.fields.r;
      v48 = v16;
      v44 = *p_r;
      v45 = p_r[1];
      v46 = p_r[2];
      v47 = p_r[3];
LABEL_102:
      UIWidget__set_color(v48, *(UnityEngine_Color_o *)&v44, 0LL);
LABEL_103:
      LimitCntMax = UserServantEntity__getLimitCntMax(baseSvtData, 0LL);
      CombineInfoComponent__setResLimitCntInfo(v4, LimitCntMax, resSvtData->fields.combineResLimitCnt, v56);
      HIDWORD(v64) = resSvtData->fields.combineResHp;
      resHpLb = v4->fields.resHpLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_62180668(
                                         (int32_t)&v64 + 4,
                                         (System_String_o *)StringLiteral_9164/*"N0"*/,
                                         0LL);
      if ( !resHpLb )
        goto LABEL_117;
      UILabel__set_text(resHpLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.hp != HIDWORD(v64) )
      {
        v58 = CombineInfoComponent_TypeInfo;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v58 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v17, v58->static_fields->COLOR_VAL, 0LL);
      }
      LODWORD(v64) = resSvtData->fields.combineResAtk;
      resAtkLb = v4->fields.resAtkLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_62180668(
                                         (int32_t)&v64,
                                         (System_String_o *)StringLiteral_9164/*"N0"*/,
                                         0LL);
      if ( !resAtkLb )
        goto LABEL_117;
      UILabel__set_text(resAtkLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.atk != (_DWORD)v64 )
      {
        v60 = CombineInfoComponent_TypeInfo;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v60 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v18, v60->static_fields->COLOR_VAL, 0LL);
      }
      if ( v4->fields.dispType == 4 )
      {
        v76.fields.r = 1.0;
        v76.fields.g = 1.0;
        v76.fields.b = 1.0;
        v76.fields.a = 1.0;
        UIWidget__set_color(v15, v76, 0LL);
        v77.fields.r = 1.0;
        v77.fields.g = 1.0;
        v77.fields.b = 1.0;
        v77.fields.a = 1.0;
        UIWidget__set_color(v17, v77, 0LL);
        v78.fields.r = 1.0;
        v78.fields.g = 1.0;
        v78.fields.b = 1.0;
        v78.fields.a = 1.0;
        UIWidget__set_color(v18, v78, 0LL);
      }
      this = (CombineInfoComponent_o *)v4->fields.resStatusInfo;
      if ( !this )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      return;
    case 4:
      v40 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0LL);
      if ( !v40 )
        goto LABEL_117;
      UIExtrusionLabel__set_text(v40, (System_String_o *)this, 0LL);
      v41 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v41 )
        goto LABEL_117;
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
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v74.fields.r = 1.0;
      v74.fields.g = 1.0;
      v74.fields.b = 1.0;
      v74.fields.a = 1.0;
      UIWidget__set_color(v15, v74, 0LL);
      v75.fields.r = 1.0;
      v75.fields.g = 1.0;
      v75.fields.b = 1.0;
      v75.fields.a = 1.0;
      UIWidget__set_color(v17, v75, 0LL);
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
        sub_1B6432C(this, *(_QWORD *)&maxLimitCnt);
      v9 = &currentLimitCntInfos->obj.klass + i;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_1B64324(this);
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
  int32_t v11; // w3
  System_String_o *isLevelMax; // x0
  struct UserServantEntity_o *baseSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x21
  UILabel_o *currentMaxLvLb; // x21
  System_String_o *v16; // x1
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
  float barExp[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_49FFB55 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, baseData);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_7318/*"IMPOSSIBLE_LIMITUP_COLOR"*/, v6);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v7);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v8);
    byte_49FFB55 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  *(_QWORD *)barExp = 0LL;
  CombineInfoComponent__initCurrentStatusGrid(this, (const MethodInfo *)baseData);
  p_baseSvtData = &this->fields.baseSvtData;
  this->fields.baseSvtData = baseData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSvtData, (int32_t)baseData, v10, v11);
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
      v16 = isLevelMax;
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
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7318/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_42;
        v18 = isLevelMax;
        v19 = (Il2CppObject *)System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
        isLevelMax = System_String__Format(v18, v19, 0LL);
      }
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
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7318/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
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
      v16 = isLevelMax;
      if ( !currentMaxLvLb )
        goto LABEL_42;
LABEL_29:
      UILabel__set_text(currentMaxLvLb, v16, 0LL);
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
      isLevelMax = System_Int32__ToString_62180668((int32_t)lateExp, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
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
      *(_QWORD *)&v35.fields.currentCryptoKey = v26;
      *(_QWORD *)&v35.fields.fakeValue = v25;
      v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v35, 0LL);
      CombineInfoComponent__setCurrentLimitCntInfo(this, v24, v27, v28);
      v29 = this->fields.baseSvtData;
      if ( !v29
        || (currentHpLb = this->fields.currentHpLb,
            isLevelMax = System_Int32__ToString_62180668((int)v29 + 268, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL),
            !currentHpLb)
        || (UILabel__set_text(currentHpLb, isLevelMax, 0LL), (v31 = this->fields.baseSvtData) == 0LL)
        || (currentAtkLb = this->fields.currentAtkLb,
            isLevelMax = System_Int32__ToString_62180668((int)v31 + 264, (System_String_o *)StringLiteral_9164/*"N0"*/, 0LL),
            !currentAtkLb) )
      {
LABEL_42:
        sub_1B64324(isLevelMax);
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

  if ( (byte_49FFB54 & 1) == 0 )
  {
    sub_1B640C8(&CombineInfoComponent_TypeInfo, method);
    sub_1B640C8(&StringLiteral_25222/*"レベル上限："*/, v3);
    byte_49FFB54 = 1;
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
      UILabel__set_text(infoLb2, (System_String_o *)StringLiteral_25222/*"レベル上限："*/, 0LL);
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
        sub_1B64324(infoLb2);
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
        sub_1B6432C(this, *(_QWORD *)&maxLimitCnt);
      v9 = &resLimitCntInfos->obj.klass + i;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_1B64324(this);
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
  int32_t v14; // w3

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.name = name;
  v12 = (CombineInfoComponent_GetItemInfo_o *)((char *)v12 + 24);
  v12[-1].fields.acquiredCount = itemId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v12, (int32_t)name, v13, v14);
  LODWORD(v12->monitor) = iconImageId;
  HIDWORD(v12->monitor) = count;
  v12->fields.itemId = acquiredCount;
}


void __fastcall CombineInfoComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FFB5B & 1) == 0 )
  {
    sub_1B640C8(&CombineInfoComponent___c_TypeInfo, v1);
    byte_49FFB5B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(CombineInfoComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  CombineInfoComponent___c_TypeInfo->static_fields->__9 = (struct CombineInfoComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CombineInfoComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return data->fields.itemId == giftEntity->fields.objectId;
}