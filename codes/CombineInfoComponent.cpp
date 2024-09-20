void __fastcall CombineInfoComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct CombineInfoComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  CombineInfoComponent_c *v5; // x8
  struct CombineInfoComponent_StaticFields *v6; // x9
  struct CombineInfoComponent_StaticFields *v7; // x9
  int32_t v8; // w1
  struct CombineInfoComponent_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct CombineInfoComponent_StaticFields *v12; // x8

  if ( (byte_4A5E943 & 1) == 0 )
  {
    sub_1B885B0(&CombineInfoComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_20171/*"icon_reward_get"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E943 = 1;
  }
  CombineInfoComponent_TypeInfo->static_fields->COLOR_VAL = (struct UnityEngine_Color_o)xmmword_BB53C0;
  static_fields = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->INFO_NEW_SKILL_LABEL_WIDTH = 0x8C0000008CLL;
  static_fields->INFO_GET_ITEM_LABEL_2_WIDTH = 34;
  v4 = (int)StringLiteral_1/*""*/;
  static_fields->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->INIT_VAL_TXT, v4, v1, v2);
  v5 = CombineInfoComponent_TypeInfo;
  v6 = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&v6->LIMIT_UP_GET_SKILL_INFO_POS.fields.x = 3246391296LL;
  v6->LIMIT_UP_GET_SKILL_INFO_POS.fields.z = 0.0;
  v7 = v5->static_fields;
  *(_QWORD *)&v7->LIMIT_UP_REWARD_INFO_POS.fields.x = 1127546880LL;
  v7->LIMIT_UP_REWARD_INFO_POS.fields.z = 0.0;
  v8 = StringLiteral_20171/*"icon_reward_get"*/;
  v9 = v5->static_fields;
  v9->LIMIT_UP_REWARD_GET_ICON_NAME = (struct System_String_o *)StringLiteral_20171/*"icon_reward_get"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->LIMIT_UP_REWARD_GET_ICON_NAME, v8, v10, v11);
  v12 = CombineInfoComponent_TypeInfo->static_fields;
  v12->LIMIT_UP_REWARD_GET_ICON_ID = 9;
  v12->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = (struct UnityEngine_Color_o)xmmword_BB4C30;
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
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x23
  Il2CppObject *v22; // x0
  CombineInfoComponent_o *v23; // x0
  const MethodInfo *v24; // x2
  char *v25; // x21
  System_Text_StringBuilder_o *v26; // x22
  System_Text_StringBuilder_o *appended; // x0
  __int64 v28; // x1
  __int64 v29; // x8
  unsigned __int64 v30; // x24
  int32_t v31; // w23
  UILabel_o *infoLb2; // x23
  System_String_o *v33; // x24
  Il2CppObject *v34; // x0
  UILabel_o *v35; // x22
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x4
  UnityEngine_GameObject_o *v38; // x0
  CombineInfoComponent_c *v39; // x8
  UnityEngine_GameObject_o *v40; // x21
  int32_t size; // w21
  ItemIconComponent_o *infoIcon3; // x20
  _BOOL4 v43; // w23
  __int64 v44; // x9
  int32_t v45; // w28
  UILabel_o *infoLb3; // x20
  System_String_o *v47; // x21
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x22
  Il2CppObject *v52; // x0
  UILabel_o *v53; // x20
  System_String_o *v54; // x21
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  UILabel_o *v59; // x20
  ItemIconComponent_o *infoIcon4; // x20
  __int64 v61; // x9
  int32_t v62; // w22
  UILabel_o *infoLb4; // x20
  System_String_o *v64; // x21
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
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

  v3 = resSvtData;
  if ( (byte_4A5E940 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&CombineInfoComponent_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&StringLiteral_8585/*"MAX_LVUP_TXT"*/);
    sub_1B885B0(&StringLiteral_8251/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/);
    sub_1B885B0(&StringLiteral_8249/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/);
    sub_1B885B0(&StringLiteral_8253/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/);
    sub_1B885B0(&StringLiteral_8250/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/);
    sub_1B885B0(&StringLiteral_8252/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/);
    sub_1B885B0(&StringLiteral_8243/*"LIMITUP_MAX_TXT"*/);
    byte_4A5E940 = 1;
  }
  getItemInfoList = 0LL;
  isAllAcquired = 0;
  getSkillRewardObj = (char *)this->fields.getSkillRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0LL);
  v7 = CombineInfoComponent_TypeInfo;
  v8 = gameObject;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v7 = CombineInfoComponent_TypeInfo;
  }
  GameObjectExtensions__SetLocalPosition(v8, v7->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v9 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v9,
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
      getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8243/*"LIMITUP_MAX_TXT"*/, 0LL);
      goto LABEL_18;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isLimitCountMax )
      goto LABEL_13;
  }
  getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8585/*"MAX_LVUP_TXT"*/, 0LL);
  if ( !this->fields.baseSvtData )
    goto LABEL_133;
  v14 = (System_String_o *)getSkillRewardObj;
  LevelMax = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0LL);
  getSkillRewardObj = (char *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax, v15, v16, v17);
  if ( !v3 )
    goto LABEL_133;
  v21 = (Il2CppObject *)getSkillRewardObj;
  combineResSvtMaxLv = v3->fields.combineResSvtMaxLv;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv, v18, v19, v20);
  getSkillRewardObj = (char *)System_String__Format_61721404(v14, v21, v22, 0LL);
LABEL_18:
  resSvtData = (CombineSvtData_o *)getSkillRewardObj;
  if ( !infoLb )
    goto LABEL_133;
  UILabel__set_text(infoLb, (System_String_o *)getSkillRewardObj, 0LL);
  getSkillRewardObj = (char *)CombineInfoComponent__GetNewReleaseSkillNumList(v23, v3, v24);
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v25 = getSkillRewardObj;
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
    v26 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v26, 0LL);
    v29 = *((_QWORD *)v25 + 3);
    if ( (int)v29 >= 1 )
    {
      v30 = 0LL;
      v31 = (_DWORD)v25 + 32;
      do
      {
        if ( v30 )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8252/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, 0LL);
          if ( !v26 )
            goto LABEL_133;
          appended = System_Text_StringBuilder__Append_60868928(v26, (System_String_o *)getSkillRewardObj, 0LL);
          LODWORD(v29) = *((_DWORD *)v25 + 6);
        }
        if ( v30 >= (unsigned int)v29 )
          sub_1B88814(appended, v28);
        getSkillRewardObj = (char *)System_Int32__ToString(v31, 0LL);
        if ( !v26 )
          goto LABEL_133;
        appended = System_Text_StringBuilder__Append_60868928(v26, (System_String_o *)getSkillRewardObj, 0LL);
        LODWORD(v29) = *((_DWORD *)v25 + 6);
        ++v30;
        v31 += 4;
      }
      while ( (__int64)v30 < (int)v29 );
    }
    infoLb2 = this->fields.infoLb2;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8253/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, 0LL);
    if ( !v26 )
      goto LABEL_133;
    v33 = (System_String_o *)getSkillRewardObj;
    v34 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v26->klass->vtable._3_ToString.method)(
                            v26,
                            v26->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    getSkillRewardObj = (char *)System_String__Format(v33, v34, 0LL);
    if ( !infoLb2 )
      goto LABEL_133;
    UILabel__set_text(infoLb2, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v35 = this->fields.infoLb2;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v35 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v35, CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH, 0LL);
  }
  getSkillRewardObj = (char *)this->fields.baseSvtData;
  if ( !getSkillRewardObj )
    goto LABEL_133;
  v36 = UserServantEntity__isLimitCountMax((UserServantEntity_o *)getSkillRewardObj, 0LL);
  if ( v36 )
    return;
  if ( !*((_QWORD *)v25 + 3) )
  {
    getSkillRewardObj = (char *)this->fields.limitUpRewardObj;
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v38 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)getSkillRewardObj, 0LL);
    v39 = CombineInfoComponent_TypeInfo;
    v40 = v38;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
      v39 = CombineInfoComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v40, v39->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  }
  CombineInfoComponent__GetLimitCountUpReward((CombineInfoComponent_o *)v36, v3, &getItemInfoList, &isAllAcquired, v37);
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
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__)) == 0LL)
    || !infoIcon3
    || (ItemIconComponent__SetGift_38144896(infoIcon3, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0LL),
        (getSkillRewardObj = (char *)getItemInfoList) == 0LL)
    || (v43 = isAllAcquired,
        (getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)getItemInfoList,
                                       0,
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__)) == 0LL) )
  {
LABEL_133:
    sub_1B8880C(getSkillRewardObj, resSvtData);
  }
  v44 = 40LL;
  if ( !v43 )
    v44 = 36LL;
  v45 = *(_DWORD *)&getSkillRewardObj[v44];
  infoLb3 = this->fields.infoLb3;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( size == 1 )
  {
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8249/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, 0LL);
    if ( !getItemInfoList )
      goto LABEL_133;
    v47 = (System_String_o *)getSkillRewardObj;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  0,
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v51 = (Il2CppObject *)*((_QWORD *)getSkillRewardObj + 3);
    LevelMax = v45;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax, v48, v49, v50);
    getSkillRewardObj = (char *)System_String__Format_61721404(v47, v51, v52, 0LL);
    if ( !infoLb3 )
      goto LABEL_133;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v53 = this->fields.infoLb3;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v53 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v53, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH, 0LL);
  }
  else
  {
    v54 = LocalizationManager__Get((System_String_o *)StringLiteral_8250/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v45;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax, v55, v56, v57);
    getSkillRewardObj = (char *)System_String__Format(v54, v58, 0LL);
    if ( !infoLb3 )
      goto LABEL_133;
    UILabel__set_text(infoLb3, (System_String_o *)getSkillRewardObj, 0LL);
    getSkillRewardObj = (char *)CombineInfoComponent_TypeInfo;
    v59 = this->fields.infoLb3;
    if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    if ( !v59 )
      goto LABEL_133;
    UILabel__SetCondensedScale(v59, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
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
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    if ( !infoIcon4 )
      goto LABEL_133;
    ItemIconComponent__SetGift_38144896(infoIcon4, 2, *((_DWORD *)getSkillRewardObj + 8), -1, 0, 0LL);
    getSkillRewardObj = (char *)getItemInfoList;
    if ( !getItemInfoList )
      goto LABEL_133;
    getSkillRewardObj = (char *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)getItemInfoList,
                                  1,
                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__);
    if ( !getSkillRewardObj )
      goto LABEL_133;
    v61 = 40LL;
    if ( !v43 )
      v61 = 36LL;
    v62 = *(_DWORD *)&getSkillRewardObj[v61];
    infoLb4 = this->fields.infoLb4;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v64 = LocalizationManager__Get((System_String_o *)StringLiteral_8250/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v62;
    v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax, v65, v66, v67);
    getSkillRewardObj = (char *)System_String__Format(v64, v68, 0LL);
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
    getSkillRewardObj = (char *)LocalizationManager__Get((System_String_o *)StringLiteral_8251/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, 0LL);
    if ( !infoLb5 )
      goto LABEL_133;
    UILabel__set_text(infoLb5, (System_String_o *)getSkillRewardObj, 0LL);
  }
  getSkillRewardObj = (char *)this->fields.infoIcon3;
  if ( !v43 )
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
  System_Collections_Generic_List_object__o *v6; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Master_object; // x22
  int64_t UserId; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o **v12; // x20
  struct UserServantEntity_o *baseSvtData; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v14; // x29
  int64_t v15; // x23
  __int64 v16; // x24
  __int64 v17; // x25
  Il2CppObject *v18; // x23
  Il2CppObject *v19; // x24
  System_Collections_Generic_List_object__o *v20; // x0
  int v21; // w25
  __int64 v22; // x27
  struct UserServantEntity_o *v23; // x8
  __int64 v24; // x26
  __int64 v25; // x28
  int32_t v26; // w2
  int32_t v27; // w3
  int64_t *v28; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x28
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v30; // x19
  System_Func_object__bool__o *v31; // x29
  int v32; // w20
  System_String_o *v33; // x28
  int32_t IconImageId; // w29
  __int64 v35; // x27
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  System_Collections_Generic_List_object__o *v44; // x19
  System_Predicate_object__o *v45; // x20
  Il2CppObject *v46; // x21
  struct CombineInfoComponent___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  UserServantCollectionEntity_o *EntityDefinitely; // [xsp+10h] [xbp-80h]
  System_String_o *countText; // [xsp+20h] [xbp-70h] BYREF
  System_String_o *nameText; // [xsp+28h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_4A5E942 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_CombineLimitGiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
    sub_1B885B0(&System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
    sub_1B885B0(&CombineInfoComponent_GetItemInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
    sub_1B885B0(&Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__);
    sub_1B885B0(&Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__);
    sub_1B885B0(&CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
    sub_1B885B0(&CombineInfoComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E942 = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  *getItemInfoList = (System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)getItemInfoList, (int32_t)v6, v7, v8);
  *isAllAcquired = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v12 = getItemInfoList;
  if ( !resSvtData )
    goto LABEL_53;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_53;
  v14 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
  v15 = UserId;
  v17 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v55.fields.currentCryptoKey = v17;
  *(_QWORD *)&v55.fields.fakeValue = v16;
  UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v55, 0LL);
  if ( !Master_object )
    goto LABEL_53;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       v15,
                       UserId,
                       0LL);
  v18 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v19 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  UserId = (int64_t)resSvtData->fields.baseSvtData;
  if ( !UserId )
    goto LABEL_53;
  v21 = UserServantEntity__getLimitCount((UserServantEntity_o *)UserId, 0LL) + 1;
  if ( v21 <= resSvtData->fields.combineResLimitCnt )
  {
    while ( 1 )
    {
      v22 = sub_1B887FC(CombineInfoComponent___c__DisplayClass56_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0LL);
      v23 = resSvtData->fields.baseSvtData;
      if ( !v23 )
        break;
      v25 = *(_QWORD *)&v23->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v23->fields.svtId.fields.fakeValue;
      if ( !(*v14)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v14);
      *(_QWORD *)&v56.fields.currentCryptoKey = v25;
      *(_QWORD *)&v56.fields.fakeValue = v24;
      UserId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v56, 0LL);
      if ( !v18 )
        break;
      UserId = CombineLimitGiftMaster__GetCombineLimitGiftId((CombineLimitGiftMaster_o *)v18, UserId, v21, 0LL);
      if ( (_DWORD)UserId )
      {
        if ( !v19 )
          break;
        UserId = (int64_t)GiftMaster__getDataById((GiftMaster_o *)v19, UserId, 0LL);
        if ( !v22 )
          break;
        *(_QWORD *)(v22 + 16) = UserId;
        v28 = (int64_t *)(v22 + 16);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 16), UserId, v26, v27);
        if ( *(_QWORD *)(v22 + 16) )
        {
          v29 = (System_Collections_Generic_IEnumerable_TSource__o *)*v12;
          v30 = v14;
          v31 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v31,
            (Il2CppObject *)v22,
            Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__,
            0LL);
          UserId = (int64_t)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                              v29,
                              (System_Func_TSource__bool__o *)v31,
                              (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
          if ( UserId )
          {
            if ( EntityDefinitely && v21 <= EntityDefinitely->fields.maxLimitCount )
            {
              if ( !*v28 )
                break;
              v14 = v30;
              *(_DWORD *)(UserId + 40) += *(_DWORD *)(*v28 + 28);
            }
            else
            {
              *isAllAcquired = 0;
              if ( !*v28 )
                break;
              v14 = v30;
              *(_DWORD *)(UserId + 36) += *(_DWORD *)(*v28 + 28);
            }
          }
          else
          {
            countText = (System_String_o *)StringLiteral_1/*""*/;
            nameText = (System_String_o *)StringLiteral_1/*""*/;
            UserId = *v28;
            if ( !*v28 )
              break;
            GiftEntity__GetInfo((GiftEntity_o *)UserId, &nameText, &countText, 0LL);
            UserId = *v28;
            if ( !*v28 )
              break;
            v32 = *(_DWORD *)(UserId + 24);
            v33 = nameText;
            IconImageId = GiftEntity__getIconImageId((GiftEntity_o *)UserId, 0LL);
            v35 = sub_1B887FC(CombineInfoComponent_GetItemInfo_TypeInfo);
            System_Object___ctor((Il2CppObject *)v35, 0LL);
            *(_DWORD *)(v35 + 16) = v32;
            *(_QWORD *)(v35 + 24) = v33;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 24), (int32_t)v33, v36, v37);
            *(_DWORD *)(v35 + 36) = 0;
            *(_DWORD *)(v35 + 40) = 0;
            *(_DWORD *)(v35 + 32) = IconImageId;
            if ( !EntityDefinitely )
              goto LABEL_31;
            if ( v21 <= EntityDefinitely->fields.maxLimitCount )
            {
              v12 = getItemInfoList;
              if ( !*v28 )
                break;
              v14 = v30;
              *(_DWORD *)(v35 + 40) = *(_DWORD *)(*v28 + 28);
            }
            else
            {
LABEL_31:
              v12 = getItemInfoList;
              *isAllAcquired = 0;
              if ( !*v28 )
                break;
              v14 = v30;
              *(_DWORD *)(v35 + 36) += *(_DWORD *)(*v28 + 28);
            }
            UserId = (int64_t)*v12;
            if ( !*v12 )
              break;
            v40 = *(_QWORD *)(UserId + 16);
            v41 = Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__;
            ++*(_DWORD *)(UserId + 28);
            if ( !v40 )
              break;
            v42 = *(int *)(UserId + 24);
            if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)UserId,
                (Il2CppObject *)v35,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = v40 + 8 * v42;
              *(_DWORD *)(UserId + 24) = v42 + 1;
              *(_QWORD *)(v43 + 32) = v35;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v43 + 32), v35, v38, v39);
            }
          }
        }
      }
      if ( ++v21 > resSvtData->fields.combineResLimitCnt )
        goto LABEL_43;
    }
LABEL_53:
    sub_1B8880C(UserId, v11);
  }
LABEL_43:
  if ( !*isAllAcquired )
  {
    v44 = (System_Collections_Generic_List_object__o *)*v12;
    UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
    if ( !CombineInfoComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent___c_TypeInfo);
      UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
    }
    v45 = *(System_Predicate_object__o **)(*(_QWORD *)(UserId + 184) + 8LL);
    if ( !v45 )
    {
      if ( !*(_DWORD *)(UserId + 224) )
      {
        j_il2cpp_runtime_class_init_0(UserId);
        UserId = (int64_t)CombineInfoComponent___c_TypeInfo;
      }
      v46 = **(Il2CppObject ***)(UserId + 184);
      v45 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo);
      System_Predicate_object____ctor(v45, v46, Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, 0LL);
      static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Predicate_CombineInfoComponent_GetItemInfo__o *)v45;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_0, (int32_t)v45, v48, v49);
    }
    if ( !v44 )
      goto LABEL_53;
    System_Collections_Generic_List_object___RemoveAll(
      v44,
      (System_Predicate_T__o *)v45,
      (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
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
  __int64 v11; // x22
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x10
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11
  System_String_array *v18; // [xsp+8h] [xbp-48h] BYREF
  System_Int32_array *v19; // [xsp+10h] [xbp-40h] BYREF
  System_String_array *skillNameList; // [xsp+18h] [xbp-38h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4A5E941 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5E941 = 1;
  }
  idList = 0LL;
  v19 = 0LL;
  skillNameList = 0LL;
  v18 = 0LL;
  v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !resSvtData )
    goto LABEL_23;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_23;
  combineResSvtLv = resSvtData->fields.combineResSvtLv;
  LimitCount = UserServantEntity__getLimitCount(resSvtData->fields.baseSvtData, 0LL);
  UserServantEntity__getNextUseSkillInfo(baseSvtData, &idList, &skillNameList, combineResSvtLv, LimitCount, 1, 0LL);
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
    0LL);
  v10 = v19;
  if ( !v19 )
    goto LABEL_23;
  v11 = 8LL;
  while ( 1 )
  {
    max_length = v10->max_length;
    v13 = v11 - 8;
    if ( v11 - 8 >= (int)max_length )
      break;
    if ( !idList )
      goto LABEL_23;
    if ( v13 >= idList->max_length )
LABEL_24:
      sub_1B88814(v5, v6);
    if ( !*((_DWORD *)&idList->obj.klass + v11) )
    {
      if ( v13 >= max_length )
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
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            v11 - 7,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          v10 = v19;
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size + 1] = v11 - 7;
        }
      }
    }
    ++v11;
    if ( !v10 )
      goto LABEL_23;
  }
  if ( !v4 )
LABEL_23:
    sub_1B8880C(v5, v6);
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall CombineInfoComponent__HideResStatusInfo(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resStatusInfo; // x0

  resStatusInfo = this->fields.resStatusInfo;
  if ( !resStatusInfo )
    sub_1B8880C(0LL, method);
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
        sub_1B88814(this, method);
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
    sub_1B8880C(this, method);
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
        sub_1B88814(this, method);
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
    sub_1B8880C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__initStatusInfo(
        CombineInfoComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  UILabel_o *currentMaxLvLb; // x0
  UIExtrusionLabel_o *currentLvLb; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x3
  BalanceConfig_c *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4A5E93C & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&CombineInfoComponent_TypeInfo);
    byte_4A5E93C = 1;
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
    sub_1B8880C(currentMaxLvLb, *(_QWORD *)&type);
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
  struct UserServantEntity_o *baseSvtData; // x21
  int32_t lv; // w26
  UIWidget_o *v7; // x22
  UIWidget_o *v8; // x25
  UIWidget_o *v9; // x23
  UIWidget_o *v10; // x24
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
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s3
  UIWidget_o *v40; // x0
  UILabel_o *infoLb; // x27
  System_String_o *v42; // x28
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x29
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  CombineInfoComponent_c *v51; // x0
  float *p_r; // x8
  int32_t LimitCntMax; // w0
  const MethodInfo *v54; // x3
  UILabel_o *resHpLb; // x25
  CombineInfoComponent_c *v56; // x0
  UILabel_o *resAtkLb; // x20
  CombineInfoComponent_c *v58; // x0
  int32_t combineResSvtMaxLv; // [xsp+8h] [xbp-88h] BYREF
  int32_t LevelMax; // [xsp+Ch] [xbp-84h] BYREF
  __int64 v61; // [xsp+10h] [xbp-80h] BYREF
  __int64 v62; // [xsp+18h] [xbp-78h] BYREF
  __int64 barExp; // [xsp+20h] [xbp-70h] BYREF
  int32_t exp; // [xsp+28h] [xbp-68h] BYREF
  int32_t combineResSvtLv; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v71; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4A5E93F & 1) == 0 )
  {
    sub_1B885B0(&CombineInfoComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_8585/*"MAX_LVUP_TXT"*/);
    sub_1B885B0(&StringLiteral_429/*"#,0"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    this = (CombineInfoComponent_o *)sub_1B885B0(&StringLiteral_12470/*"SVTEQ_LVMAX_INFO_TXT"*/);
    byte_4A5E93F = 1;
  }
  exp = 0;
  v62 = 0LL;
  barExp = 0LL;
  v61 = 0LL;
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
                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resMaxLvLb )
    goto LABEL_117;
  v7 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resMaxLvLb,
                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resHpLb )
    goto LABEL_117;
  v8 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resHpLb,
                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v4->fields.resAtkLb )
    goto LABEL_117;
  v9 = (UIWidget_o *)this;
  this = (CombineInfoComponent_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)v4->fields.resAtkLb,
                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !v7 )
    goto LABEL_117;
  v10 = (UIWidget_o *)this;
  v68.fields.r = 1.0;
  v68.fields.g = 1.0;
  v68.fields.b = 1.0;
  v68.fields.a = 1.0;
  UIWidget__set_color(v7, v68, 0LL);
  if ( !v8 )
    goto LABEL_117;
  v69.fields.r = 1.0;
  v69.fields.g = 1.0;
  v69.fields.b = 1.0;
  v69.fields.a = 1.0;
  UIWidget__set_color(v8, v69, 0LL);
  if ( !v9 )
    goto LABEL_117;
  v70.fields.r = 1.0;
  v70.fields.g = 1.0;
  v70.fields.b = 1.0;
  v70.fields.a = 1.0;
  UIWidget__set_color(v9, v70, 0LL);
  if ( !v10 )
    goto LABEL_117;
  v71.fields.r = 1.0;
  v71.fields.g = 1.0;
  v71.fields.b = 1.0;
  v71.fields.a = 1.0;
  UIWidget__set_color(v10, v71, 0LL);
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
  v11 = combineResSvtLv - lv;
  if ( v11 < 1 )
  {
    if ( v4->fields.dispType == 2 )
    {
      v14 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v13 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v66.fields.currentCryptoKey = v14;
      *(_QWORD *)&v66.fields.fakeValue = v13;
      HIDWORD(v61) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v66, 0LL);
      this = (CombineInfoComponent_o *)v4->fields.resExpBar;
      if ( !this )
        goto LABEL_117;
      combineResLimitCnt = resSvtData->fields.combineResLimitCnt;
      UIProgressBar__set_value((UIProgressBar_o *)this, resSvtData->fields.combineResExpBarVal, 0LL);
      if ( !System_Int32__Equals_62512140((int32_t)&v61 + 4, combineResLimitCnt, 0LL)
        && UserServantEntity__isLevelMax(baseSvtData, 0LL) )
      {
        this = (CombineInfoComponent_o *)v4->fields.resCrExpBar;
        if ( !this )
          goto LABEL_117;
        this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_117;
        v16 = 0;
LABEL_51:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v16, 0LL);
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
    v16 = 1;
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
  if ( v11 != 1 )
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
    v12 = 1;
    goto LABEL_59;
  }
  this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  v12 = 0;
LABEL_59:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12, 0LL);
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
  v18 = CombineInfoComponent_TypeInfo;
  if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v18 = CombineInfoComponent_TypeInfo;
  }
  UIWidget__set_color(v7, v18->static_fields->COLOR_VAL, 0LL);
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
      v21 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !v21 )
        goto LABEL_117;
      UIExtrusionLabel__set_text(v21, (System_String_o *)this, 0LL);
      v22 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v22 )
        goto LABEL_117;
      UILabel__set_text(v22, (System_String_o *)this, 0LL);
      v23 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v23 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v8, v23->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v24);
      resExpValLb = v4->fields.resExpValLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_62512312(
                                         (int)resSvtData + 40,
                                         (System_String_o *)StringLiteral_429/*"#,0"*/,
                                         0LL);
      if ( !resExpValLb )
        goto LABEL_117;
      goto LABEL_84;
    case 2:
      v26 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0LL);
      if ( !v26 )
        goto LABEL_117;
      UIExtrusionLabel__set_text(v26, (System_String_o *)this, 0LL);
      v27 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v27 )
        goto LABEL_117;
      UILabel__set_text(v27, (System_String_o *)this, 0LL);
      v29 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v28 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v67.fields.currentCryptoKey = v29;
      *(_QWORD *)&v67.fields.fakeValue = v28;
      LODWORD(v61) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v67, 0LL);
      if ( System_Int32__Equals_62512140((int32_t)&v61, resSvtData->fields.combineResLimitCnt, 0LL) )
      {
LABEL_80:
        isLevelMax = UserServantEntity__isLevelMax(baseSvtData, 0LL);
        resExpValLb = v4->fields.infoLb;
        if ( isLevelMax )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (CombineInfoComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12470/*"SVTEQ_LVMAX_INFO_TXT"*/, 0LL);
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
        sub_1B8880C(this, resSvtData);
      }
      infoLb = v4->fields.infoLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_8585/*"MAX_LVUP_TXT"*/, 0LL);
      LevelMax = UserServantEntity__getLevelMax(baseSvtData, 0LL);
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax, v43, v44, v45);
      combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
      v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv, v47, v48, v49);
      this = (CombineInfoComponent_o *)System_String__Format_61721404(v42, v46, v50, 0LL);
      if ( !infoLb )
        goto LABEL_117;
      UILabel__set_text(infoLb, (System_String_o *)this, 0LL);
      v51 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v51 = CombineInfoComponent_TypeInfo;
      }
      p_r = &v51->static_fields->COLOR_VAL.fields.r;
      v40 = v8;
      v36 = *p_r;
      v37 = p_r[1];
      v38 = p_r[2];
      v39 = p_r[3];
LABEL_102:
      UIWidget__set_color(v40, *(UnityEngine_Color_o *)&v36, 0LL);
LABEL_103:
      LimitCntMax = UserServantEntity__getLimitCntMax(baseSvtData, 0LL);
      CombineInfoComponent__setResLimitCntInfo(v4, LimitCntMax, resSvtData->fields.combineResLimitCnt, v54);
      HIDWORD(v62) = resSvtData->fields.combineResHp;
      resHpLb = v4->fields.resHpLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_62512312(
                                         (int32_t)&v62 + 4,
                                         (System_String_o *)StringLiteral_9206/*"N0"*/,
                                         0LL);
      if ( !resHpLb )
        goto LABEL_117;
      UILabel__set_text(resHpLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.hp != HIDWORD(v62) )
      {
        v56 = CombineInfoComponent_TypeInfo;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v56 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v9, v56->static_fields->COLOR_VAL, 0LL);
      }
      LODWORD(v62) = resSvtData->fields.combineResAtk;
      resAtkLb = v4->fields.resAtkLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString_62512312(
                                         (int32_t)&v62,
                                         (System_String_o *)StringLiteral_9206/*"N0"*/,
                                         0LL);
      if ( !resAtkLb )
        goto LABEL_117;
      UILabel__set_text(resAtkLb, (System_String_o *)this, 0LL);
      if ( baseSvtData->fields.atk != (_DWORD)v62 )
      {
        v58 = CombineInfoComponent_TypeInfo;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v58 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v10, v58->static_fields->COLOR_VAL, 0LL);
      }
      if ( v4->fields.dispType == 4 )
      {
        v74.fields.r = 1.0;
        v74.fields.g = 1.0;
        v74.fields.b = 1.0;
        v74.fields.a = 1.0;
        UIWidget__set_color(v7, v74, 0LL);
        v75.fields.r = 1.0;
        v75.fields.g = 1.0;
        v75.fields.b = 1.0;
        v75.fields.a = 1.0;
        UIWidget__set_color(v9, v75, 0LL);
        v76.fields.r = 1.0;
        v76.fields.g = 1.0;
        v76.fields.b = 1.0;
        v76.fields.a = 1.0;
        UIWidget__set_color(v10, v76, 0LL);
      }
      this = (CombineInfoComponent_o *)v4->fields.resStatusInfo;
      if ( !this )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      return;
    case 4:
      v32 = v4->fields.resLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int32_t)&combineResSvtLv, 0LL);
      if ( !v32 )
        goto LABEL_117;
      UIExtrusionLabel__set_text(v32, (System_String_o *)this, 0LL);
      v33 = v4->fields.resMaxLvLb;
      this = (CombineInfoComponent_o *)System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v33 )
        goto LABEL_117;
      UILabel__set_text(v33, (System_String_o *)this, 0LL);
      v34 = CombineInfoComponent_TypeInfo;
      if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v34 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v8, v34->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(v4, resSvtData, v35);
      this = (CombineInfoComponent_o *)v4->fields.levelUpInfo;
      if ( !this )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v72.fields.r = 1.0;
      v72.fields.g = 1.0;
      v72.fields.b = 1.0;
      v72.fields.a = 1.0;
      UIWidget__set_color(v7, v72, 0LL);
      v73.fields.r = 1.0;
      v73.fields.g = 1.0;
      v73.fields.b = 1.0;
      v73.fields.a = 1.0;
      UIWidget__set_color(v9, v73, 0LL);
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
        sub_1B88814(this, *(_QWORD *)&maxLimitCnt);
      v9 = &currentLimitCntInfos->obj.klass + i;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_1B8880C(this, *(_QWORD *)&maxLimitCnt);
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
  UserServantEntity_o **p_baseSvtData; // x20
  int32_t v6; // w2
  int32_t v7; // w3
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
  struct UserServantEntity_o *v25; // x8
  UILabel_o *currentHpLb; // x20
  struct UserServantEntity_o *v27; // x8
  UILabel_o *currentAtkLb; // x19
  float barExp[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t lateExp[2]; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_4A5E93E & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_7348/*"IMPOSSIBLE_LIMITUP_COLOR"*/);
    sub_1B885B0(&StringLiteral_429/*"#,0"*/);
    sub_1B885B0(&StringLiteral_9206/*"N0"*/);
    byte_4A5E93E = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  *(_QWORD *)barExp = 0LL;
  CombineInfoComponent__initCurrentStatusGrid(this, (const MethodInfo *)baseData);
  p_baseSvtData = &this->fields.baseSvtData;
  this->fields.baseSvtData = baseData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSvtData, (int32_t)baseData, v6, v7);
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
      v9 = isLevelMax;
      goto LABEL_29;
    case 1:
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      v13 = this->fields.currentLvLb;
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
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7348/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_42;
        v14 = isLevelMax;
        v15 = (Il2CppObject *)System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
        isLevelMax = System_String__Format(v14, v15, 0LL);
      }
      v9 = isLevelMax;
      if ( !v13 )
        goto LABEL_42;
      UIExtrusionLabel__set_text(v13, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)this->fields.baseSvtData;
      if ( !isLevelMax )
        goto LABEL_42;
      currentMaxLvLb = this->fields.currentMaxLvLb;
      if ( UserServantEntity__isLimitCountMax((UserServantEntity_o *)isLevelMax, 0LL) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        isLevelMax = LocalizationManager__Get((System_String_o *)StringLiteral_7348/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_42;
        v16 = isLevelMax;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax(*p_baseSvtData, 0LL);
        v17 = (Il2CppObject *)System_Int32__ToString((int32_t)barExp, 0LL);
        isLevelMax = System_String__Format(v16, v17, 0LL);
      }
      else
      {
        isLevelMax = (System_String_o *)*p_baseSvtData;
        if ( !*p_baseSvtData )
          goto LABEL_42;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax((UserServantEntity_o *)isLevelMax, 0LL);
        isLevelMax = System_Int32__ToString((int32_t)barExp, 0LL);
      }
      v9 = isLevelMax;
      if ( !currentMaxLvLb )
        goto LABEL_42;
LABEL_29:
      UILabel__set_text(currentMaxLvLb, v9, 0LL);
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
      isLevelMax = System_Int32__ToString_62512312((int32_t)lateExp, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
      if ( !currentExpValLb )
        goto LABEL_42;
      UILabel__set_text(currentExpValLb, isLevelMax, 0LL);
      isLevelMax = (System_String_o *)*p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      isLevelMax = (System_String_o *)UserServantEntity__getLimitCntMax((UserServantEntity_o *)isLevelMax, 0LL);
      v19 = *p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_42;
      v20 = (int)isLevelMax;
      v22 = *(_QWORD *)&v19->fields.limitCount.fields.currentCryptoKey;
      v21 = *(_QWORD *)&v19->fields.limitCount.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v31.fields.currentCryptoKey = v22;
      *(_QWORD *)&v31.fields.fakeValue = v21;
      v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v31, 0LL);
      CombineInfoComponent__setCurrentLimitCntInfo(this, v20, v23, v24);
      v25 = this->fields.baseSvtData;
      if ( !v25
        || (currentHpLb = this->fields.currentHpLb,
            isLevelMax = System_Int32__ToString_62512312((int)v25 + 268, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL),
            !currentHpLb)
        || (UILabel__set_text(currentHpLb, isLevelMax, 0LL), (v27 = this->fields.baseSvtData) == 0LL)
        || (currentAtkLb = this->fields.currentAtkLb,
            isLevelMax = System_Int32__ToString_62512312((int)v27 + 264, (System_String_o *)StringLiteral_9206/*"N0"*/, 0LL),
            !currentAtkLb) )
      {
LABEL_42:
        sub_1B8880C(isLevelMax, v9);
      }
      UILabel__set_text(currentAtkLb, isLevelMax, 0LL);
      return;
    default:
      goto LABEL_30;
  }
}


void __fastcall CombineInfoComponent__setInitInfoLb(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UILabel_o *infoLb; // x19
  UILabel_o *infoLb2; // x0

  if ( (byte_4A5E93D & 1) == 0 )
  {
    sub_1B885B0(&CombineInfoComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_25324/*"レベル上限："*/);
    byte_4A5E93D = 1;
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
      UILabel__set_text(infoLb2, (System_String_o *)StringLiteral_25324/*"レベル上限："*/, 0LL);
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
        sub_1B8880C(infoLb2, method);
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
        sub_1B88814(this, *(_QWORD *)&maxLimitCnt);
      v9 = &resLimitCntInfos->obj.klass + i;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10
        || (this = (CombineInfoComponent_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)v9[4],
                                               0LL)) == 0LL )
      {
LABEL_9:
        sub_1B8880C(this, *(_QWORD *)&maxLimitCnt);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)v12, (int32_t)name, v13, v14);
  LODWORD(v12->monitor) = iconImageId;
  HIDWORD(v12->monitor) = count;
  v12->fields.itemId = acquiredCount;
}


void __fastcall CombineInfoComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E944 & 1) == 0 )
  {
    sub_1B885B0(&CombineInfoComponent___c_TypeInfo);
    byte_4A5E944 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CombineInfoComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CombineInfoComponent___c_TypeInfo->static_fields->__9 = (struct CombineInfoComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CombineInfoComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, data);
  return data->fields.itemId == giftEntity->fields.objectId;
}