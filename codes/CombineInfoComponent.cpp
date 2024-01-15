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

  if ( (byte_40F990E & 1) == 0 )
  {
    sub_B16FFC(&CombineInfoComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_19284/*"icon_reward_get"*/, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F990E = 1;
  }
  v8 = 1065185444;
  v9 = 1064430469;
  v10 = 1050790593;
  v31 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v31);
  CombineInfoComponent_TypeInfo->static_fields->COLOR_VAL = v31;
  v11 = CombineInfoComponent_TypeInfo;
  CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH = 140;
  v11->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH = 140;
  v11->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH = 34;
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->INIT_VAL_TXT = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->INIT_VAL_TXT, v13, v14, v15, v16, v17, v18, v19);
  v20 = CombineInfoComponent_TypeInfo;
  v21 = CombineInfoComponent_TypeInfo->static_fields;
  *(_QWORD *)&v21->LIMIT_UP_GET_SKILL_INFO_POS.fields.x = 3246391296LL;
  v21->LIMIT_UP_GET_SKILL_INFO_POS.fields.z = 0.0;
  v22 = v20->static_fields;
  *(_QWORD *)&v22->LIMIT_UP_REWARD_INFO_POS.fields.x = 1127546880LL;
  v22->LIMIT_UP_REWARD_INFO_POS.fields.z = 0.0;
  v23 = v20->static_fields;
  v24 = (System_Int32_array **)StringLiteral_19284/*"icon_reward_get"*/;
  v23->LIMIT_UP_REWARD_GET_ICON_NAME = (struct System_String_o *)StringLiteral_19284/*"icon_reward_get"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v23->LIMIT_UP_REWARD_GET_ICON_NAME, v24, v25, v26, v27, v28, v29, v30);
  v33 = (UnityEngine_Color32_o)&v32;
  CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_ICON_ID = 9;
  v32 = 0;
  UnityEngine_Color32___ctor(v33, 0x36u, 0x3Au, 0x3Du, 0xFFu, 0LL);
  v34 = (UnityEngine_Color32_o)v32;
  CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR = UnityEngine_Color32__op_Implicit_40668984(
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
  UnityEngine_GameObject_o *limitUpRewardObj; // x0
  UnityEngine_GameObject_o *v22; // x0
  UISprite_o *limitUpRewardGetIcon1; // x21
  System_String_o *LIMIT_UP_REWARD_GET_ICON_NAME; // x22
  UILabel_o *infoLb; // x0
  UserServantEntity_o *baseSvtData; // x0
  UILabel_o *v27; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x22
  __int64 v31; // x0
  Il2CppObject *v32; // x23
  Il2CppObject *v33; // x0
  CombineInfoComponent_o *v34; // x0
  const MethodInfo *v35; // x2
  System_Int32_array *NewReleaseSkillNumList; // x0
  System_Int32_array *v37; // x21
  UnityEngine_Component_o *infoLb2; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Component_o *infoIcon2; // x0
  UnityEngine_GameObject_o *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  System_Text_StringBuilder_o *v46; // x22
  System_Text_StringBuilder_o *appended; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x8
  unsigned __int64 v51; // x24
  int32_t v52; // w23
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  UILabel_o *v55; // x23
  System_String_o *v56; // x0
  System_String_o *v57; // x24
  Il2CppObject *v58; // x0
  System_String_o *v59; // x0
  UILabel_o *v60; // x22
  UserServantEntity_o *v61; // x0
  _BOOL8 isLimitCountMax; // x0
  const MethodInfo *v63; // x4
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  CombineInfoComponent_c *v66; // x8
  UnityEngine_GameObject_o *v67; // x21
  int32_t size; // w21
  UnityEngine_Component_o *infoLb3; // x0
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_Component_o *infoIcon3; // x0
  UnityEngine_GameObject_o *v72; // x0
  CombineInfoComponent_GetItemInfo_o *v73; // x8
  _BOOL4 v74; // w23
  CombineInfoComponent_GetItemInfo_o *v75; // x8
  __int64 v76; // x9
  int32_t v77; // w27
  UILabel_o *v78; // x20
  System_String_o *v79; // x0
  System_String_o *v80; // x21
  CombineInfoComponent_GetItemInfo_o *v81; // x8
  Il2CppObject *name; // x22
  Il2CppObject *v83; // x0
  System_String_o *v84; // x0
  UILabel_o *v85; // x20
  System_String_o *v86; // x21
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  UILabel_o *v89; // x20
  UnityEngine_Component_o *infoLb4; // x0
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_Component_o *infoIcon4; // x0
  UnityEngine_GameObject_o *v93; // x0
  CombineInfoComponent_GetItemInfo_o *v94; // x8
  CombineInfoComponent_GetItemInfo_o *v95; // x8
  __int64 v96; // x9
  int32_t v97; // w26
  UILabel_o *v98; // x20
  System_String_o *v99; // x21
  Il2CppObject *v100; // x0
  System_String_o *v101; // x0
  UILabel_o *v102; // x20
  UnityEngine_Component_o *infoLb5; // x0
  UnityEngine_GameObject_o *v104; // x0
  UILabel_o *v105; // x20
  System_String_o *v106; // x0
  ItemIconComponent_o *v107; // x20
  int v108; // s0
  ItemIconComponent_o *v112; // x20
  int v113; // s0
  UIWidget_o *v117; // x20
  int v118; // s0
  UIWidget_o *v122; // x20
  int v123; // s0
  UIWidget_o *v127; // x20
  int v128; // s0
  CombineInfoComponent_c *v132; // x0
  UILabel_o *v133; // x20
  UILabel_o *v134; // x0
  UILabel_o *v135; // x0
  UnityEngine_Component_o *v136; // x0
  UnityEngine_GameObject_o *v137; // x0
  UnityEngine_Component_o *v138; // x0
  UnityEngine_GameObject_o *v139; // x0
  bool v140; // w1
  int v141; // s0
  ItemIconComponent_o *v145; // x20
  int v146; // s0
  UIWidget_o *v150; // x20
  int v151; // s0
  UIWidget_o *v155; // x20
  int v156; // s0
  UIWidget_o *v160; // x20
  int v161; // s0
  UILabel_o *v165; // x20
  int v166; // s0
  UILabel_o *v170; // x20
  int v171; // s0
  UILabel_o *v175; // x20
  int v176; // s0
  UnityEngine_Component_o *v180; // x0
  UnityEngine_GameObject_o *v181; // x0
  UnityEngine_Component_o *limitUpRewardGetIcon2; // x0
  int32_t combineResSvtMaxLv; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t LevelMax; // [xsp+8h] [xbp-58h] BYREF
  bool isAllAcquired; // [xsp+Ch] [xbp-54h] BYREF
  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *getItemInfoList; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40F990B & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, resSvtData);
    sub_B16FFC(&CombineInfoComponent_TypeInfo, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__get_Item__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_8663/*"MAX_LVUP_TXT"*/, v11);
    sub_B16FFC(&StringLiteral_8363/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, v12);
    sub_B16FFC(&StringLiteral_8361/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, v13);
    sub_B16FFC(&StringLiteral_8365/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, v14);
    sub_B16FFC(&StringLiteral_8362/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, v15);
    sub_B16FFC(&StringLiteral_8364/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, v16);
    sub_B16FFC(&StringLiteral_8355/*"LIMITUP_MAX_TXT"*/, v17);
    byte_40F990B = 1;
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
  limitUpRewardObj = this->fields.limitUpRewardObj;
  if ( !limitUpRewardObj )
    goto LABEL_162;
  v22 = UnityEngine_GameObject__get_gameObject(limitUpRewardObj, 0LL);
  GameObjectExtensions__SetLocalPosition(
    v22,
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
  infoLb = this->fields.infoLb;
  if ( !infoLb )
    goto LABEL_162;
  UILabel__set_overflowMethod(infoLb, 2, 0LL);
  baseSvtData = this->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_162;
  v27 = this->fields.infoLb;
  if ( UserServantEntity__isLimitCountMax(baseSvtData, 0LL) )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v28 = LocalizationManager__Get((System_String_o *)StringLiteral_8355/*"LIMITUP_MAX_TXT"*/, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_8663/*"MAX_LVUP_TXT"*/, 0LL);
    if ( !this->fields.baseSvtData )
      goto LABEL_162;
    v30 = v29;
    LevelMax = UserServantEntity__getLevelMax(this->fields.baseSvtData, 0LL);
    v31 = j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    if ( !resSvtData )
      goto LABEL_162;
    v32 = (Il2CppObject *)v31;
    combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
    v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
    v28 = System_String__Format_43739268(v30, v32, v33, 0LL);
  }
  if ( !v27 )
    goto LABEL_162;
  UILabel__set_text(v27, v28, 0LL);
  NewReleaseSkillNumList = CombineInfoComponent__GetNewReleaseSkillNumList(v34, resSvtData, v35);
  if ( !NewReleaseSkillNumList )
    goto LABEL_162;
  v37 = NewReleaseSkillNumList;
  if ( *(_QWORD *)&NewReleaseSkillNumList->max_length )
  {
    infoLb2 = (UnityEngine_Component_o *)this->fields.infoLb2;
    if ( !infoLb2 )
      goto LABEL_162;
    v39 = UnityEngine_Component__get_gameObject(infoLb2, 0LL);
    if ( !v39 )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(v39, 1, 0LL);
    infoIcon2 = (UnityEngine_Component_o *)this->fields.infoIcon2;
    if ( !infoIcon2 )
      goto LABEL_162;
    v41 = UnityEngine_Component__get_gameObject(infoIcon2, 0LL);
    if ( !v41 )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(v41, 1, 0LL);
    v46 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v42, v43, v44, v45);
    System_Text_StringBuilder___ctor(v46, 0LL);
    v50 = *(_QWORD *)&v37->max_length;
    if ( (int)v50 >= 1 )
    {
      v51 = 0LL;
      v52 = (_DWORD)v37 + 32;
      do
      {
        if ( v51 )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v53 = LocalizationManager__Get((System_String_o *)StringLiteral_8364/*"LIMIT_COUNT_UP_NEW_SKILL_COUNT_BETWEEN"*/, 0LL);
          if ( !v46 )
            goto LABEL_162;
          appended = System_Text_StringBuilder__Append_41914240(v46, v53, 0LL);
          LODWORD(v50) = v37->max_length;
        }
        if ( v51 >= (unsigned int)v50 )
        {
          sub_B17100(appended, v48, v49);
          sub_B170A0();
        }
        v54 = System_Int32__ToString(v52, 0LL);
        if ( !v46 )
          goto LABEL_162;
        appended = System_Text_StringBuilder__Append_41914240(v46, v54, 0LL);
        LODWORD(v50) = v37->max_length;
        ++v51;
        v52 += 4;
      }
      while ( (__int64)v51 < (int)v50 );
    }
    v55 = this->fields.infoLb2;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_8365/*"LIMIT_COUNT_UP_NEW_SKILL_TXT"*/, 0LL);
    if ( !v46 )
      goto LABEL_162;
    v57 = v56;
    v58 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v46->klass->vtable._3_ToString.method)(
                            v46,
                            v46->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    v59 = System_String__Format(v57, v58, 0LL);
    if ( !v55 )
      goto LABEL_162;
    UILabel__set_text(v55, v59, 0LL);
    v60 = this->fields.infoLb2;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v60 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v60, CombineInfoComponent_TypeInfo->static_fields->INFO_NEW_SKILL_LABEL_WIDTH, 0LL);
  }
  v61 = this->fields.baseSvtData;
  if ( !v61 )
    goto LABEL_162;
  isLimitCountMax = UserServantEntity__isLimitCountMax(v61, 0LL);
  if ( isLimitCountMax )
    return;
  if ( !*(_QWORD *)&v37->max_length )
  {
    v64 = this->fields.limitUpRewardObj;
    if ( !v64 )
      goto LABEL_162;
    v65 = UnityEngine_GameObject__get_gameObject(v64, 0LL);
    v66 = CombineInfoComponent_TypeInfo;
    v67 = v65;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
      v66 = CombineInfoComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v67, v66->static_fields->LIMIT_UP_GET_SKILL_INFO_POS, 0LL);
  }
  CombineInfoComponent__GetLimitCountUpReward(
    (CombineInfoComponent_o *)isLimitCountMax,
    resSvtData,
    &getItemInfoList,
    &isAllAcquired,
    v63);
  if ( !getItemInfoList )
    goto LABEL_162;
  size = getItemInfoList->fields._size;
  if ( size < 1 )
    return;
  infoLb3 = (UnityEngine_Component_o *)this->fields.infoLb3;
  if ( !infoLb3 )
    goto LABEL_162;
  v70 = UnityEngine_Component__get_gameObject(infoLb3, 0LL);
  if ( !v70 )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive(v70, 1, 0LL);
  infoIcon3 = (UnityEngine_Component_o *)this->fields.infoIcon3;
  if ( !infoIcon3 )
    goto LABEL_162;
  v72 = UnityEngine_Component__get_gameObject(infoIcon3, 0LL);
  if ( !v72 )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive(v72, 1, 0LL);
  if ( !getItemInfoList )
    goto LABEL_162;
  if ( !getItemInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v75 = getItemInfoList->fields._items->m_Items[0];
  if ( !v75 )
LABEL_162:
    sub_B170D4();
  v76 = 40LL;
  if ( !isAllAcquired )
    v76 = 36LL;
  v77 = *(_DWORD *)((char *)&v75->klass + v76);
  v78 = this->fields.infoLb3;
  if ( size == 1 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v79 = LocalizationManager__Get((System_String_o *)StringLiteral_8361/*"LIMIT_COUNT_UP_GET_REWARD_TXT"*/, 0LL);
    if ( !getItemInfoList )
      goto LABEL_162;
    v80 = v79;
    if ( !getItemInfoList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v81 = getItemInfoList->fields._items->m_Items[0];
    if ( !v81 )
      goto LABEL_162;
    name = (Il2CppObject *)v81->fields.name;
    LevelMax = v77;
    v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    v84 = System_String__Format_43739268(v80, name, v83, 0LL);
    if ( !v78 )
      goto LABEL_162;
    UILabel__set_text(v78, v84, 0LL);
    v85 = this->fields.infoLb3;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v85 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v85, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_1_WIDTH, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v86 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v77;
    v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    v88 = System_String__Format(v86, v87, 0LL);
    if ( !v78 )
      goto LABEL_162;
    UILabel__set_text(v78, v88, 0LL);
    v89 = this->fields.infoLb3;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v89 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v89, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
    infoLb4 = (UnityEngine_Component_o *)this->fields.infoLb4;
    if ( !infoLb4 )
      goto LABEL_162;
    v91 = UnityEngine_Component__get_gameObject(infoLb4, 0LL);
    if ( !v91 )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(v91, 1, 0LL);
    infoIcon4 = (UnityEngine_Component_o *)this->fields.infoIcon4;
    if ( !infoIcon4 )
      goto LABEL_162;
    v93 = UnityEngine_Component__get_gameObject(infoIcon4, 0LL);
    if ( !v93 )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(v93, 1, 0LL);
    if ( !getItemInfoList )
      goto LABEL_162;
    if ( getItemInfoList->fields._size <= 1u )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v94 = getItemInfoList->fields._items->m_Items[1];
    if ( !v94 )
      goto LABEL_162;
    if ( !this->fields.infoIcon4 )
      goto LABEL_162;
    ItemIconComponent__SetGift(this->fields.infoIcon4, 2, v94->fields.iconImageId, -1, 0, 0LL);
    if ( !getItemInfoList )
      goto LABEL_162;
    if ( getItemInfoList->fields._size <= 1u )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v95 = getItemInfoList->fields._items->m_Items[1];
    if ( !v95 )
      goto LABEL_162;
    v96 = 40LL;
    if ( !v74 )
      v96 = 36LL;
    v97 = *(_DWORD *)((char *)&v95->klass + v96);
    v98 = this->fields.infoLb4;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v99 = LocalizationManager__Get((System_String_o *)StringLiteral_8362/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE"*/, 0LL);
    LevelMax = v97;
    v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
    v101 = System_String__Format(v99, v100, 0LL);
    if ( !v98 )
      goto LABEL_162;
    UILabel__set_text(v98, v101, 0LL);
    v102 = this->fields.infoLb4;
    if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    }
    if ( !v102 )
      goto LABEL_162;
    UILabel__SetCondensedScale(v102, CombineInfoComponent_TypeInfo->static_fields->INFO_GET_ITEM_LABEL_2_WIDTH, 0LL);
    infoLb5 = (UnityEngine_Component_o *)this->fields.infoLb5;
    if ( !infoLb5 )
      goto LABEL_162;
    v104 = UnityEngine_Component__get_gameObject(infoLb5, 0LL);
    if ( !v104 )
      goto LABEL_162;
    UnityEngine_GameObject__SetActive(v104, 1, 0LL);
    v105 = this->fields.infoLb5;
    v106 = LocalizationManager__Get((System_String_o *)StringLiteral_8363/*"LIMIT_COUNT_UP_GET_REWARD_TXT_DOUBLE_END"*/, 0LL);
    if ( !v105 )
      goto LABEL_162;
    UILabel__set_text(v105, v106, 0LL);
  }
  v107 = this->fields.infoIcon3;
  if ( !v74 )
  {
    *(UnityEngine_Color_o *)&v141 = UnityEngine_Color__get_white(0LL);
    if ( v107 )
    {
      ItemIconComponent__SetColor(v107, *(UnityEngine_Color_o *)&v141, 0LL);
      v145 = this->fields.infoIcon4;
      *(UnityEngine_Color_o *)&v146 = UnityEngine_Color__get_white(0LL);
      if ( v145 )
      {
        ItemIconComponent__SetColor(v145, *(UnityEngine_Color_o *)&v146, 0LL);
        v150 = (UIWidget_o *)this->fields.infoLb3;
        *(UnityEngine_Color_o *)&v151 = UnityEngine_Color__get_white(0LL);
        if ( v150 )
        {
          UIWidget__set_color(v150, *(UnityEngine_Color_o *)&v151, 0LL);
          v155 = (UIWidget_o *)this->fields.infoLb4;
          *(UnityEngine_Color_o *)&v156 = UnityEngine_Color__get_white(0LL);
          if ( v155 )
          {
            UIWidget__set_color(v155, *(UnityEngine_Color_o *)&v156, 0LL);
            v160 = (UIWidget_o *)this->fields.infoLb5;
            *(UnityEngine_Color_o *)&v161 = UnityEngine_Color__get_white(0LL);
            if ( v160 )
            {
              UIWidget__set_color(v160, *(UnityEngine_Color_o *)&v161, 0LL);
              v165 = this->fields.infoLb3;
              *(UnityEngine_Color_o *)&v166 = UnityEngine_Color__get_black(0LL);
              if ( v165 )
              {
                UILabel__set_effectColor(v165, *(UnityEngine_Color_o *)&v166, 0LL);
                v170 = this->fields.infoLb4;
                *(UnityEngine_Color_o *)&v171 = UnityEngine_Color__get_black(0LL);
                if ( v170 )
                {
                  UILabel__set_effectColor(v170, *(UnityEngine_Color_o *)&v171, 0LL);
                  v175 = this->fields.infoLb5;
                  *(UnityEngine_Color_o *)&v176 = UnityEngine_Color__get_black(0LL);
                  if ( v175 )
                  {
                    UILabel__set_effectColor(v175, *(UnityEngine_Color_o *)&v176, 0LL);
                    v180 = (UnityEngine_Component_o *)this->fields.limitUpRewardGetIcon1;
                    if ( v180 )
                    {
                      v181 = UnityEngine_Component__get_gameObject(v180, 0LL);
                      if ( v181 )
                      {
                        UnityEngine_GameObject__SetActive(v181, 0, 0LL);
                        if ( getItemInfoList )
                        {
                          if ( getItemInfoList->fields._size < 2 )
                            return;
                          limitUpRewardGetIcon2 = (UnityEngine_Component_o *)this->fields.limitUpRewardGetIcon2;
                          if ( limitUpRewardGetIcon2 )
                          {
                            v139 = UnityEngine_Component__get_gameObject(limitUpRewardGetIcon2, 0LL);
                            if ( v139 )
                            {
                              v140 = 0;
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
  *(UnityEngine_Color_o *)&v108 = UnityEngine_Color__get_gray(0LL);
  if ( !v107 )
    goto LABEL_162;
  ItemIconComponent__SetColor(v107, *(UnityEngine_Color_o *)&v108, 0LL);
  v112 = this->fields.infoIcon4;
  *(UnityEngine_Color_o *)&v113 = UnityEngine_Color__get_gray(0LL);
  if ( !v112 )
    goto LABEL_162;
  ItemIconComponent__SetColor(v112, *(UnityEngine_Color_o *)&v113, 0LL);
  v117 = (UIWidget_o *)this->fields.infoLb3;
  *(UnityEngine_Color_o *)&v118 = UnityEngine_Color__get_gray(0LL);
  if ( !v117 )
    goto LABEL_162;
  UIWidget__set_color(v117, *(UnityEngine_Color_o *)&v118, 0LL);
  v122 = (UIWidget_o *)this->fields.infoLb4;
  *(UnityEngine_Color_o *)&v123 = UnityEngine_Color__get_gray(0LL);
  if ( !v122 )
    goto LABEL_162;
  UIWidget__set_color(v122, *(UnityEngine_Color_o *)&v123, 0LL);
  v127 = (UIWidget_o *)this->fields.infoLb5;
  *(UnityEngine_Color_o *)&v128 = UnityEngine_Color__get_gray(0LL);
  if ( !v127 )
    goto LABEL_162;
  UIWidget__set_color(v127, *(UnityEngine_Color_o *)&v128, 0LL);
  v132 = CombineInfoComponent_TypeInfo;
  v133 = this->fields.infoLb3;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v132 = CombineInfoComponent_TypeInfo;
  }
  if ( !v133 )
    goto LABEL_162;
  UILabel__set_effectColor(v133, v132->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR, 0LL);
  v134 = this->fields.infoLb4;
  if ( !v134 )
    goto LABEL_162;
  UILabel__set_effectColor(
    v134,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0LL);
  v135 = this->fields.infoLb5;
  if ( !v135 )
    goto LABEL_162;
  UILabel__set_effectColor(
    v135,
    CombineInfoComponent_TypeInfo->static_fields->LIMIT_UP_REWARD_GET_NAME_OUTLINE_COLOR,
    0LL);
  v136 = (UnityEngine_Component_o *)this->fields.limitUpRewardGetIcon1;
  if ( !v136 )
    goto LABEL_162;
  v137 = UnityEngine_Component__get_gameObject(v136, 0LL);
  if ( !v137 )
    goto LABEL_162;
  UnityEngine_GameObject__SetActive(v137, 1, 0LL);
  if ( !getItemInfoList )
    goto LABEL_162;
  if ( getItemInfoList->fields._size < 2 )
    return;
  v138 = (UnityEngine_Component_o *)this->fields.limitUpRewardGetIcon2;
  if ( !v138 )
    goto LABEL_162;
  v139 = UnityEngine_Component__get_gameObject(v138, 0LL);
  if ( !v139 )
    goto LABEL_162;
  v140 = 1;
LABEL_160:
  UnityEngine_GameObject__SetActive(v139, v140, 0LL);
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
  struct UserServantEntity_o *baseSvtData; // x8
  int64_t v36; // x23
  __int64 v37; // x24
  __int64 v38; // x25
  int32_t v39; // w0
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  CombineLimitGiftMaster_o *v41; // x23
  GiftMaster_o *v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x0
  UserServantEntity_o *v48; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v49; // x19
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int v54; // w25
  __int64 v55; // x27
  struct UserServantEntity_o *v56; // x8
  __int64 v57; // x26
  __int64 v58; // x28
  int32_t v59; // w0
  const MethodInfo *v60; // x3
  int32_t CombineLimitGiftId; // w0
  System_Int32_array **DataById; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  GiftEntity_o **v69; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v71; // x20
  WarBoardData_SquareRangeSearch_o *v72; // x0
  GiftEntity_o *v73; // x0
  int32_t objectId; // w20
  System_String_o *v75; // x28
  int32_t IconImageId; // w19
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  CombineInfoComponent_GetItemInfo_o *v81; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // x19
  CombineInfoComponent___c_c *v83; // x0
  struct CombineInfoComponent___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__56_0; // x20
  Il2CppObject *v86; // x21
  struct CombineInfoComponent___c_StaticFields *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_o *countText; // [xsp+10h] [xbp-60h] BYREF
  System_String_o *nameText; // [xsp+18h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v98; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v99; // 0:x0.16

  if ( (byte_40F990D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_CombineLimitGiftMaster___, resSvtData);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___, v9);
    sub_B16FFC(&Method_System_Func_CombineInfoComponent_GetItemInfo__bool___ctor__, v10);
    sub_B16FFC(&System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo, v11);
    sub_B16FFC(&CombineInfoComponent_GetItemInfo_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo, v16);
    sub_B16FFC(&NetworkManager_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&Method_System_Predicate_CombineInfoComponent_GetItemInfo___ctor__, v19);
    sub_B16FFC(&System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo, v20);
    sub_B16FFC(&Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__, v21);
    sub_B16FFC(&Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__, v22);
    sub_B16FFC(&CombineInfoComponent___c__DisplayClass56_0_TypeInfo, v23);
    sub_B16FFC(&CombineInfoComponent___c_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_1/*""*/, v25);
    byte_40F990D = 1;
  }
  countText = 0LL;
  nameText = 0LL;
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo,
                                                                                                  resSvtData,
                                                                                                  getItemInfoList,
                                                                                                  isAllAcquired,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  *getItemInfoList = (System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__o *)v26;
  sub_B16F98((BattleServantConfConponent_o *)getItemInfoList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
  *isAllAcquired = 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
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
  v36 = UserId;
  v38 = *(_QWORD *)&baseSvtData->fields.svtId.fields.currentCryptoKey;
  v37 = *(_QWORD *)&baseSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v98.fields.currentCryptoKey = v38;
  *(_QWORD *)&v98.fields.fakeValue = v37;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v98, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(Master_WarQuestSelectionMaster, v36, v39, 0LL);
  v41 = (CombineLimitGiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CombineLimitGiftMaster___);
  v42 = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__TypeInfo,
                                                                                                  v43,
                                                                                                  v44,
                                                                                                  v45,
                                                                                                  v46);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v47,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo___ctor__);
  v48 = resSvtData->fields.baseSvtData;
  if ( !v48 )
    goto LABEL_58;
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)getItemInfoList;
  v54 = UserServantEntity__getLimitCount(v48, 0LL) + 1;
  if ( v54 <= resSvtData->fields.combineResLimitCnt )
  {
    while ( 1 )
    {
      v55 = sub_B170CC(CombineInfoComponent___c__DisplayClass56_0_TypeInfo, v50, v51, v52, v53);
      CombineInfoComponent___c__DisplayClass56_0___ctor((CombineInfoComponent___c__DisplayClass56_0_o *)v55, 0LL);
      v56 = resSvtData->fields.baseSvtData;
      if ( !v56 )
        break;
      v58 = *(_QWORD *)&v56->fields.svtId.fields.currentCryptoKey;
      v57 = *(_QWORD *)&v56->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v99.fields.currentCryptoKey = v58;
      *(_QWORD *)&v99.fields.fakeValue = v57;
      v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v99, 0LL);
      if ( !v41 )
        break;
      CombineLimitGiftId = CombineLimitGiftMaster__GetCombineLimitGiftId(v41, v59, v54, v60);
      if ( CombineLimitGiftId )
      {
        if ( !v42 )
          break;
        DataById = (System_Int32_array **)GiftMaster__getDataById(v42, CombineLimitGiftId, 0LL);
        if ( !v55 )
          break;
        *(_QWORD *)(v55 + 16) = DataById;
        v69 = (GiftEntity_o **)(v55 + 16);
        sub_B16F98((BattleServantConfConponent_o *)(v55 + 16), DataById, v63, v64, v65, v66, v67, v68);
        if ( *(_QWORD *)(v55 + 16) )
        {
          v70 = *v49;
          v71 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_CombineInfoComponent_GetItemInfo__bool__TypeInfo,
                                                                                     v50,
                                                                                     v51,
                                                                                     v52,
                                                                                     v53);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v71,
            (Il2CppObject *)v55,
            Method_CombineInfoComponent___c__DisplayClass56_0__GetLimitCountUpReward_b__1__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_CombineInfoComponent_GetItemInfo__bool___ctor__);
          v72 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v70,
                  (System_Func_TSource__bool__o *)v71,
                  (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_CombineInfoComponent_GetItemInfo___);
          if ( v72 )
          {
            if ( EntityDefinitely && v54 <= EntityDefinitely->fields.maxLimitCount )
            {
              if ( !*v69 )
                break;
              v72[1].fields.squareIndex += (*v69)->fields.num;
            }
            else
            {
              *isAllAcquired = 0;
              if ( !*v69 )
                break;
              HIDWORD(v72[1].monitor) += (*v69)->fields.num;
            }
          }
          else
          {
            countText = (System_String_o *)StringLiteral_1/*""*/;
            nameText = (System_String_o *)StringLiteral_1/*""*/;
            if ( !*v69 )
              break;
            GiftEntity__GetInfo(*v69, &nameText, &countText, 0LL);
            v73 = *v69;
            if ( !*v69 )
              break;
            objectId = v73->fields.objectId;
            v75 = nameText;
            IconImageId = GiftEntity__getIconImageId(v73, 0LL);
            v81 = (CombineInfoComponent_GetItemInfo_o *)sub_B170CC(
                                                          CombineInfoComponent_GetItemInfo_TypeInfo,
                                                          v77,
                                                          v78,
                                                          v79,
                                                          v80);
            CombineInfoComponent_GetItemInfo___ctor(v81, objectId, v75, IconImageId, 0, 0, 0LL);
            if ( EntityDefinitely && v54 <= EntityDefinitely->fields.maxLimitCount )
            {
              v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)getItemInfoList;
              if ( !v81 || !*v69 )
                break;
              v81->fields.acquiredCount += (*v69)->fields.num;
            }
            else
            {
              v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)getItemInfoList;
              *isAllAcquired = 0;
              if ( !v81 || !*v69 )
                break;
              v81->fields.count += (*v69)->fields.num;
            }
            if ( !*v49 )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              *v49,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__Add__);
          }
        }
      }
      if ( ++v54 > resSvtData->fields.combineResLimitCnt )
        goto LABEL_46;
    }
LABEL_58:
    sub_B170D4();
  }
LABEL_46:
  if ( !*isAllAcquired )
  {
    v82 = *v49;
    v83 = CombineInfoComponent___c_TypeInfo;
    if ( (BYTE3(CombineInfoComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineInfoComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineInfoComponent___c_TypeInfo);
      v83 = CombineInfoComponent___c_TypeInfo;
    }
    static_fields = v83->static_fields;
    _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( (BYTE3(v83->vtable._0_Equals.methodPtr) & 4) != 0 && !v83->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v83);
        static_fields = CombineInfoComponent___c_TypeInfo->static_fields;
      }
      v86 = (Il2CppObject *)static_fields->__9;
      _9__56_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                            System_Predicate_CombineInfoComponent_GetItemInfo__TypeInfo,
                                                                            v50,
                                                                            v51,
                                                                            v52,
                                                                            v53);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        _9__56_0,
        v86,
        Method_CombineInfoComponent___c__GetLimitCountUpReward_b__56_0__,
        (const MethodInfo_2B0B204 *)Method_System_Predicate_CombineInfoComponent_GetItemInfo___ctor__);
      v87 = CombineInfoComponent___c_TypeInfo->static_fields;
      v87->__9__56_0 = (struct System_Predicate_CombineInfoComponent_GetItemInfo__o *)_9__56_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v87->__9__56_0,
        (System_Int32_array **)_9__56_0,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93);
    }
    if ( !v82 )
      goto LABEL_58;
    System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
      (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v82,
      (System_Predicate_T__o *)_9__56_0,
      (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_CombineInfoComponent_GetItemInfo__RemoveAll__);
  }
}


System_Int32_array *__fastcall CombineInfoComponent__GetNewReleaseSkillNumList(
        CombineInfoComponent_o *this,
        CombineSvtData_o *resSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  UserServantEntity_o *baseSvtData; // x21
  int32_t combineResSvtLv; // w22
  int32_t LimitCount; // w0
  UserServantEntity_o *v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Int32_array *v17; // x8
  __int64 v18; // x20
  unsigned __int64 max_length; // x9
  unsigned __int64 v20; // x10
  System_String_array *v22; // [xsp+0h] [xbp-40h] BYREF
  System_Int32_array *v23; // [xsp+8h] [xbp-38h] BYREF
  System_String_array *skillNameList; // [xsp+10h] [xbp-30h] BYREF
  System_Int32_array *idList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F990C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, resSvtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_40F990C = 1;
  }
  idList = 0LL;
  v23 = 0LL;
  skillNameList = 0LL;
  v22 = 0LL;
  v9 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   resSvtData,
                                                   method,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !resSvtData )
    goto LABEL_17;
  baseSvtData = resSvtData->fields.baseSvtData;
  if ( !baseSvtData )
    goto LABEL_17;
  combineResSvtLv = resSvtData->fields.combineResSvtLv;
  LimitCount = UserServantEntity__getLimitCount(resSvtData->fields.baseSvtData, 0LL);
  UserServantEntity__getNextUseSkillInfo(baseSvtData, &idList, &skillNameList, combineResSvtLv, LimitCount, 1, 0LL);
  v13 = resSvtData->fields.baseSvtData;
  if ( !v13 )
    goto LABEL_17;
  UserServantEntity__getNextUseSkillInfo(
    v13,
    &v23,
    &v22,
    resSvtData->fields.combineResSvtLv,
    resSvtData->fields.combineResLimitCnt,
    0,
    0LL);
  v17 = v23;
  if ( !v23 )
    goto LABEL_17;
  v18 = 8LL;
  while ( 1 )
  {
    max_length = v17->max_length;
    v20 = v18 - 8;
    if ( v18 - 8 >= (int)max_length )
      break;
    if ( !idList )
      goto LABEL_17;
    if ( v20 >= idList->max_length )
    {
LABEL_20:
      sub_B17100(v14, v15, v16);
      sub_B170A0();
    }
    if ( !*((_DWORD *)&idList->obj.klass + v18) )
    {
      if ( v20 >= max_length )
        goto LABEL_20;
      if ( *((_DWORD *)&v17->obj.klass + v18) )
      {
        if ( !v9 )
          goto LABEL_17;
        System_Collections_Generic_List_int___Add(
          v9,
          v18 - 7,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        v17 = v23;
      }
    }
    ++v18;
    if ( !v17 )
      goto LABEL_17;
  }
  if ( !v9 )
LABEL_17:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall CombineInfoComponent__HideResStatusInfo(CombineInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resStatusInfo; // x0

  resStatusInfo = this->fields.resStatusInfo;
  if ( !resStatusInfo )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(resStatusInfo, 0, 0LL);
}


void __fastcall CombineInfoComponent__initCurrentStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct SetLimitCntInfoComponent_array *currentLimitCntInfos; // x8
  int max_length; // w20
  il2cpp_array_size_t v6; // w21
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  currentLimitCntInfos = this->fields.currentLimitCntInfos;
  if ( !currentLimitCntInfos )
    goto LABEL_9;
  max_length = currentLimitCntInfos->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= currentLimitCntInfos->max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v7 = (UnityEngine_Component_o *)currentLimitCntInfos->m_Items[v6];
      if ( !v7 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      if ( (int)++v6 >= max_length )
        return;
      currentLimitCntInfos = this->fields.currentLimitCntInfos;
    }
    while ( currentLimitCntInfos );
LABEL_9:
    sub_B170D4();
  }
}


void __fastcall CombineInfoComponent__initResStatusGrid(CombineInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct SetLimitCntInfoComponent_array *resLimitCntInfos; // x8
  int max_length; // w20
  il2cpp_array_size_t v6; // w21
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  resLimitCntInfos = this->fields.resLimitCntInfos;
  if ( !resLimitCntInfos )
    goto LABEL_9;
  max_length = resLimitCntInfos->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= resLimitCntInfos->max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v7 = (UnityEngine_Component_o *)resLimitCntInfos->m_Items[v6];
      if ( !v7 )
        break;
      gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      if ( (int)++v6 >= max_length )
        return;
      resLimitCntInfos = this->fields.resLimitCntInfos;
    }
    while ( resLimitCntInfos );
LABEL_9:
    sub_B170D4();
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
  UIProgressBar_o *currentExpBar; // x0
  UILabel_o *currentExpValLb; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  BalanceConfig_c *v12; // x0
  UnityEngine_GameObject_o *levelUpInfo; // x0
  UILabel_o *currentHpLb; // x0
  UILabel_o *currentAtkLb; // x0
  UnityEngine_GameObject_o *currentStatusInfo; // x0
  UnityEngine_GameObject_o *resStatusInfo; // x0
  const MethodInfo *v18; // x1

  if ( (byte_40F9907 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&CombineInfoComponent_TypeInfo, v5);
    byte_40F9907 = 1;
  }
  currentLvLb = this->fields.currentLvLb;
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
  currentExpBar = (UIProgressBar_o *)this->fields.currentExpBar;
  if ( !currentExpBar )
    goto LABEL_19;
  UIProgressBar__set_value(currentExpBar, 0.0, 0LL);
  currentExpValLb = this->fields.currentExpValLb;
  if ( !currentExpValLb )
    goto LABEL_19;
  UILabel__set_text(currentExpValLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL);
  CombineInfoComponent__initCurrentStatusGrid(this, v10);
  v12 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v12 = BalanceConfig_TypeInfo;
  }
  CombineInfoComponent__setCurrentLimitCntInfo(this, v12->static_fields->ServantLimitMax, 0, v11);
  levelUpInfo = this->fields.levelUpInfo;
  if ( !levelUpInfo )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(levelUpInfo, 0, 0LL);
  currentHpLb = this->fields.currentHpLb;
  if ( !currentHpLb
    || (UILabel__set_text(currentHpLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL),
        (currentAtkLb = this->fields.currentAtkLb) == 0LL)
    || (UILabel__set_text(currentAtkLb, CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT, 0LL),
        (currentStatusInfo = this->fields.currentStatusInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive(currentStatusInfo, 1, 0LL), (resStatusInfo = this->fields.resStatusInfo) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(resStatusInfo, 0, 0LL);
  this->fields.dispType = type;
  CombineInfoComponent__setInitInfoLb(this, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineInfoComponent__setCombineResStatusInfo(
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
  struct UserServantEntity_o *baseSvtData; // x23
  int32_t lv; // w22
  UserServantEntity_o *v15; // x0
  UIProgressBar_o *resCrExpBar; // x0
  UnityEngine_Component_o *resLvLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v19; // x21
  WebViewObject_o *v20; // x0
  UIWidget_o *v21; // x25
  WebViewObject_o *v22; // x0
  UIWidget_o *v23; // x27
  WebViewObject_o *v24; // x28
  int v25; // s0
  int v29; // s0
  int v33; // s0
  int v37; // s0
  UILabel_o *infoLb; // x0
  UnityEngine_Component_o *infoLb2; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *infoLb3; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *infoLb4; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *infoIcon2; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Component_o *infoIcon3; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_Component_o *infoIcon4; // x0
  UnityEngine_GameObject_o *v53; // x0
  int v54; // w22
  UIProgressBar_o *v55; // x0
  UIProgressBar_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  bool v58; // w1
  UIWidget_o *v59; // x22
  __int64 v60; // x26
  __int64 v61; // x27
  UIProgressBar_o *resExpBar; // x0
  int32_t combineResLimitCnt; // w26
  UnityEngine_Component_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  bool v66; // w1
  float combineResExpBarVal; // s0
  UIProgressBar_o *v68; // x0
  UnityEngine_Component_o *v69; // x0
  UnityEngine_Component_o *resRemaingExpBar; // x0
  UnityEngine_GameObject_o *v71; // x0
  UnityEngine_GameObject_o *levelUpInfo; // x0
  int32_t *p_dispType; // x24
  UnityEngine_Component_o *v74; // x0
  UnityEngine_Component_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  CombineInfoComponent_c *v78; // x0
  UIExtrusionLabel_o *v79; // x25
  System_String_o *v80; // x0
  UILabel_o *resMaxLvLb; // x25
  System_String_o *v82; // x0
  bool isLevelMax; // w0
  UILabel_o *resExpValLb; // x25
  UIExtrusionLabel_o *v85; // x26
  System_String_o *v86; // x0
  UILabel_o *v87; // x26
  System_String_o *v88; // x0
  CombineInfoComponent_c *v89; // x0
  const MethodInfo *v90; // x2
  System_String_o *v91; // x0
  UIExtrusionLabel_o *v92; // x26
  System_String_o *v93; // x0
  UILabel_o *v94; // x27
  System_String_o *v95; // x0
  __int64 v96; // x27
  __int64 v97; // x28
  bool v98; // w0
  System_String_o *INIT_VAL_TXT; // x1
  UIExtrusionLabel_o *v100; // x26
  System_String_o *v101; // x0
  UILabel_o *v102; // x26
  System_String_o *v103; // x0
  CombineInfoComponent_c *v104; // x0
  const MethodInfo *v105; // x2
  UnityEngine_GameObject_o *v106; // x0
  int v107; // s0
  int v108; // s1
  int v109; // s2
  int v110; // s3
  UIWidget_o *v111; // x0
  UILabel_o *v112; // x27
  System_String_o *v113; // x28
  Il2CppObject *v114; // x22
  Il2CppObject *v115; // x0
  System_String_o *v116; // x0
  CombineInfoComponent_c *v117; // x0
  int *static_fields; // x8
  int32_t LimitCntMax; // w0
  const MethodInfo *v120; // x3
  UILabel_o *resHpLb; // x25
  System_String_o *v122; // x0
  CombineInfoComponent_c *v123; // x0
  UILabel_o *resAtkLb; // x20
  System_String_o *v125; // x0
  CombineInfoComponent_c *v126; // x0
  UnityEngine_GameObject_o *resStatusInfo; // x0
  UIWidget_o *v128; // [xsp+8h] [xbp-88h]
  WebViewObject_o *v129; // [xsp+10h] [xbp-80h]
  int32_t combineResSvtMaxLv; // [xsp+18h] [xbp-78h] BYREF
  int32_t LevelMax; // [xsp+1Ch] [xbp-74h] BYREF
  __int64 v132; // [xsp+20h] [xbp-70h] BYREF
  __int64 v133; // [xsp+28h] [xbp-68h] BYREF
  float barExp[2]; // [xsp+30h] [xbp-60h] BYREF
  __int64 exp; // [xsp+38h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v136; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v137; // 0:x0.16
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v142; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F990A & 1) == 0 )
  {
    sub_B16FFC(&CombineInfoComponent_TypeInfo, resSvtData);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_8663/*"MAX_LVUP_TXT"*/, v9);
    sub_B16FFC(&StringLiteral_340/*"#,0"*/, v10);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v11);
    sub_B16FFC(&StringLiteral_12507/*"SVTEQ_LVMAX_INFO_TXT"*/, v12);
    byte_40F990A = 1;
  }
  *(_QWORD *)barExp = 0LL;
  exp = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  if ( !resSvtData )
    goto LABEL_133;
  baseSvtData = resSvtData->fields.baseSvtData;
  CombineInfoComponent__initResStatusGrid(this, (const MethodInfo *)resSvtData);
  if ( !baseSvtData )
    goto LABEL_133;
  lv = baseSvtData->fields.lv;
  HIDWORD(exp) = resSvtData->fields.combineResSvtLv;
  v15 = this->fields.baseSvtData;
  if ( !v15 )
    goto LABEL_133;
  UserServantEntity__getExpInfo(v15, (int32_t *)&exp, (int32_t *)&barExp[1], barExp, 0LL);
  resCrExpBar = (UIProgressBar_o *)this->fields.resCrExpBar;
  if ( !resCrExpBar )
    goto LABEL_133;
  UIProgressBar__set_value(resCrExpBar, barExp[0], 0LL);
  resLvLb = (UnityEngine_Component_o *)this->fields.resLvLb;
  if ( !resLvLb )
    goto LABEL_133;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              resLvLb,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.resMaxLvLb )
    goto LABEL_133;
  v19 = (UIWidget_o *)Component_WebViewObject;
  v20 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this->fields.resMaxLvLb,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.resHpLb )
    goto LABEL_133;
  v21 = (UIWidget_o *)v20;
  v22 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this->fields.resHpLb,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.resAtkLb )
    goto LABEL_133;
  v23 = (UIWidget_o *)v22;
  v24 = UnityEngine_Component__GetComponent_WebViewObject_(
          (UnityEngine_Component_o *)this->fields.resAtkLb,
          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
  if ( !v19 )
    goto LABEL_133;
  UIWidget__set_color(v19, *(UnityEngine_Color_o *)&v25, 0LL);
  *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_white(0LL);
  if ( !v21 )
    goto LABEL_133;
  UIWidget__set_color(v21, *(UnityEngine_Color_o *)&v29, 0LL);
  *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
  if ( !v23 )
    goto LABEL_133;
  UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v33, 0LL);
  *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_white(0LL);
  if ( !v24 )
    goto LABEL_133;
  UIWidget__set_color((UIWidget_o *)v24, *(UnityEngine_Color_o *)&v37, 0LL);
  infoLb = this->fields.infoLb;
  if ( !infoLb )
    goto LABEL_133;
  UILabel__set_overflowMethod(infoLb, 0, 0LL);
  infoLb2 = (UnityEngine_Component_o *)this->fields.infoLb2;
  if ( !infoLb2 )
    goto LABEL_133;
  gameObject = UnityEngine_Component__get_gameObject(infoLb2, 0LL);
  if ( !gameObject )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  infoLb3 = (UnityEngine_Component_o *)this->fields.infoLb3;
  if ( !infoLb3 )
    goto LABEL_133;
  v45 = UnityEngine_Component__get_gameObject(infoLb3, 0LL);
  if ( !v45 )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive(v45, 0, 0LL);
  infoLb4 = (UnityEngine_Component_o *)this->fields.infoLb4;
  if ( !infoLb4 )
    goto LABEL_133;
  v47 = UnityEngine_Component__get_gameObject(infoLb4, 0LL);
  if ( !v47 )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive(v47, 0, 0LL);
  infoIcon2 = (UnityEngine_Component_o *)this->fields.infoIcon2;
  if ( !infoIcon2 )
    goto LABEL_133;
  v49 = UnityEngine_Component__get_gameObject(infoIcon2, 0LL);
  if ( !v49 )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive(v49, 0, 0LL);
  infoIcon3 = (UnityEngine_Component_o *)this->fields.infoIcon3;
  if ( !infoIcon3 )
    goto LABEL_133;
  v51 = UnityEngine_Component__get_gameObject(infoIcon3, 0LL);
  if ( !v51 )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive(v51, 0, 0LL);
  infoIcon4 = (UnityEngine_Component_o *)this->fields.infoIcon4;
  if ( !infoIcon4 )
    goto LABEL_133;
  v53 = UnityEngine_Component__get_gameObject(infoIcon4, 0LL);
  if ( !v53 )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive(v53, 0, 0LL);
  v54 = HIDWORD(exp) - lv;
  if ( v54 < 1 )
  {
    if ( this->fields.dispType == 2 )
    {
      v59 = v23;
      v61 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v60 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v136.fields.currentCryptoKey = v61;
      *(_QWORD *)&v136.fields.fakeValue = v60;
      HIDWORD(v132) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v136, 0LL);
      resExpBar = (UIProgressBar_o *)this->fields.resExpBar;
      if ( !resExpBar )
        goto LABEL_133;
      combineResLimitCnt = resSvtData->fields.combineResLimitCnt;
      UIProgressBar__set_value(resExpBar, resSvtData->fields.combineResExpBarVal, 0LL);
      v23 = v59;
      if ( !System_Int32__Equals_38275732((int32_t)&v132 + 4, combineResLimitCnt, 0LL)
        && UserServantEntity__isLevelMax(baseSvtData, 0LL) )
      {
        v64 = (UnityEngine_Component_o *)this->fields.resCrExpBar;
        if ( !v64 )
          goto LABEL_133;
        v65 = UnityEngine_Component__get_gameObject(v64, 0LL);
        if ( !v65 )
          goto LABEL_133;
        v66 = 0;
LABEL_52:
        UnityEngine_GameObject__SetActive(v65, v66, 0LL);
        resRemaingExpBar = (UnityEngine_Component_o *)this->fields.resRemaingExpBar;
        if ( !resRemaingExpBar )
          goto LABEL_133;
        v71 = UnityEngine_Component__get_gameObject(resRemaingExpBar, 0LL);
        if ( !v71 )
          goto LABEL_133;
        UnityEngine_GameObject__SetActive(v71, 0, 0LL);
        levelUpInfo = this->fields.levelUpInfo;
        if ( !levelUpInfo )
          goto LABEL_133;
        p_dispType = &this->fields.dispType;
        UnityEngine_GameObject__SetActive(levelUpInfo, 0, 0LL);
        goto LABEL_67;
      }
    }
    else
    {
      v68 = (UIProgressBar_o *)this->fields.resExpBar;
      if ( !v68 )
        goto LABEL_133;
      UIProgressBar__set_value(v68, resSvtData->fields.combineResExpBarVal, 0LL);
    }
    v69 = (UnityEngine_Component_o *)this->fields.resCrExpBar;
    if ( !v69 )
      goto LABEL_133;
    v65 = UnityEngine_Component__get_gameObject(v69, 0LL);
    if ( !v65 )
      goto LABEL_133;
    v66 = 1;
    goto LABEL_52;
  }
  v55 = (UIProgressBar_o *)this->fields.resExpBar;
  if ( !v55 )
    goto LABEL_133;
  UIProgressBar__set_value(v55, 1.0, 0LL);
  v56 = (UIProgressBar_o *)this->fields.resRemaingExpBar;
  if ( HIDWORD(exp) != resSvtData->fields.combineResSvtMaxLv )
  {
    if ( !v56 )
      goto LABEL_133;
    combineResExpBarVal = resSvtData->fields.combineResExpBarVal;
    goto LABEL_57;
  }
  if ( !v56 )
    goto LABEL_133;
  if ( v54 != 1 )
  {
    combineResExpBarVal = 1.0;
LABEL_57:
    UIProgressBar__set_value(v56, combineResExpBarVal, 0LL);
    v74 = (UnityEngine_Component_o *)this->fields.resRemaingExpBar;
    if ( !v74 )
      goto LABEL_133;
    v57 = UnityEngine_Component__get_gameObject(v74, 0LL);
    if ( !v57 )
      goto LABEL_133;
    v58 = 1;
    goto LABEL_60;
  }
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v56, 0LL);
  if ( !v57 )
    goto LABEL_133;
  v58 = 0;
LABEL_60:
  UnityEngine_GameObject__SetActive(v57, v58, 0LL);
  v75 = (UnityEngine_Component_o *)this->fields.resCrExpBar;
  if ( !v75 )
    goto LABEL_133;
  v76 = UnityEngine_Component__get_gameObject(v75, 0LL);
  if ( !v76 )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive(v76, 0, 0LL);
  v77 = this->fields.levelUpInfo;
  if ( !v77 )
    goto LABEL_133;
  UnityEngine_GameObject__SetActive(v77, 1, 0LL);
  v78 = CombineInfoComponent_TypeInfo;
  if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
    v78 = CombineInfoComponent_TypeInfo;
  }
  UIWidget__set_color(v19, v78->static_fields->COLOR_VAL, 0LL);
  p_dispType = &this->fields.dispType;
LABEL_67:
  switch ( *p_dispType )
  {
    case 0:
      v79 = this->fields.resLvLb;
      v80 = System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !v79 )
        goto LABEL_133;
      UIExtrusionLabel__set_text(v79, v80, 0LL);
      resMaxLvLb = this->fields.resMaxLvLb;
      v82 = System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !resMaxLvLb )
        goto LABEL_133;
      UILabel__set_text(resMaxLvLb, v82, 0LL);
      isLevelMax = UserServantEntity__isLevelMax(baseSvtData, 0LL);
      resExpValLb = this->fields.infoLb;
      if ( isLevelMax )
        goto LABEL_87;
      goto LABEL_107;
    case 1:
      v85 = this->fields.resLvLb;
      v86 = System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !v85 )
        goto LABEL_133;
      UIExtrusionLabel__set_text(v85, v86, 0LL);
      v87 = this->fields.resMaxLvLb;
      v88 = System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v87 )
        goto LABEL_133;
      UILabel__set_text(v87, v88, 0LL);
      v89 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v89 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v21, v89->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(this, resSvtData, v90);
      resExpValLb = this->fields.resExpValLb;
      v91 = System_Int32__ToString_38275808((int)resSvtData + 40, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      if ( !resExpValLb )
        goto LABEL_133;
      goto LABEL_91;
    case 2:
      v92 = this->fields.resLvLb;
      v128 = v23;
      v93 = System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !v92 )
        goto LABEL_133;
      v129 = v24;
      UIExtrusionLabel__set_text(v92, v93, 0LL);
      v94 = this->fields.resMaxLvLb;
      v95 = System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v94 )
        goto LABEL_133;
      UILabel__set_text(v94, v95, 0LL);
      v97 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.currentCryptoKey;
      v96 = *(_QWORD *)&baseSvtData->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v137.fields.currentCryptoKey = v97;
      *(_QWORD *)&v137.fields.fakeValue = v96;
      LODWORD(v132) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v137, 0LL);
      if ( System_Int32__Equals_38275732((int32_t)&v132, resSvtData->fields.combineResLimitCnt, 0LL) )
      {
        v98 = UserServantEntity__isLevelMax(baseSvtData, 0LL);
        resExpValLb = this->fields.infoLb;
        if ( v98 )
        {
          v23 = v128;
          v24 = v129;
LABEL_87:
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12507/*"SVTEQ_LVMAX_INFO_TXT"*/, 0LL);
          if ( resExpValLb )
          {
LABEL_91:
            INIT_VAL_TXT = v91;
LABEL_112:
            UILabel__set_text(resExpValLb, INIT_VAL_TXT, 0LL);
            goto LABEL_117;
          }
        }
        else
        {
          v23 = v128;
          v24 = v129;
LABEL_107:
          if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          }
          if ( resExpValLb )
          {
            INIT_VAL_TXT = CombineInfoComponent_TypeInfo->static_fields->INIT_VAL_TXT;
            goto LABEL_112;
          }
        }
LABEL_133:
        sub_B170D4();
      }
      v112 = this->fields.infoLb;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v113 = LocalizationManager__Get((System_String_o *)StringLiteral_8663/*"MAX_LVUP_TXT"*/, 0LL);
      LevelMax = UserServantEntity__getLevelMax(baseSvtData, 0LL);
      v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &LevelMax);
      combineResSvtMaxLv = resSvtData->fields.combineResSvtMaxLv;
      v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &combineResSvtMaxLv);
      v116 = System_String__Format_43739268(v113, v114, v115, 0LL);
      if ( !v112 )
        goto LABEL_133;
      UILabel__set_text(v112, v116, 0LL);
      v24 = v129;
      v117 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
      {
        v23 = v128;
        if ( !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v117 = CombineInfoComponent_TypeInfo;
        }
      }
      else
      {
        v23 = v128;
      }
      static_fields = (int *)v117->static_fields;
      v111 = v21;
      v107 = *static_fields;
      v108 = static_fields[1];
      v109 = static_fields[2];
      v110 = static_fields[3];
LABEL_116:
      UIWidget__set_color(v111, *(UnityEngine_Color_o *)&v107, 0LL);
LABEL_117:
      LimitCntMax = UserServantEntity__getLimitCntMax(baseSvtData, 0LL);
      CombineInfoComponent__setResLimitCntInfo(this, LimitCntMax, resSvtData->fields.combineResLimitCnt, v120);
      HIDWORD(v133) = resSvtData->fields.combineResHp;
      resHpLb = this->fields.resHpLb;
      v122 = System_Int32__ToString_38275808((int32_t)&v133 + 4, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
      if ( !resHpLb )
        goto LABEL_133;
      UILabel__set_text(resHpLb, v122, 0LL);
      if ( baseSvtData->fields.hp != HIDWORD(v133) )
      {
        v123 = CombineInfoComponent_TypeInfo;
        if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v123 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color(v23, v123->static_fields->COLOR_VAL, 0LL);
      }
      LODWORD(v133) = resSvtData->fields.combineResAtk;
      resAtkLb = this->fields.resAtkLb;
      v125 = System_Int32__ToString_38275808((int32_t)&v133, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
      if ( !resAtkLb )
        goto LABEL_133;
      UILabel__set_text(resAtkLb, v125, 0LL);
      if ( baseSvtData->fields.atk != (_DWORD)v133 )
      {
        v126 = CombineInfoComponent_TypeInfo;
        if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
          v126 = CombineInfoComponent_TypeInfo;
        }
        UIWidget__set_color((UIWidget_o *)v24, v126->static_fields->COLOR_VAL, 0LL);
      }
      if ( *p_dispType == 4 )
      {
        white = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v19, white, 0LL);
        v141 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color(v23, v141, 0LL);
        v142 = UnityEngine_Color__get_white(0LL);
        UIWidget__set_color((UIWidget_o *)v24, v142, 0LL);
      }
      resStatusInfo = this->fields.resStatusInfo;
      if ( !resStatusInfo )
        goto LABEL_133;
      UnityEngine_GameObject__SetActive(resStatusInfo, 1, 0LL);
      return;
    case 4:
      v100 = this->fields.resLvLb;
      v101 = System_Int32__ToString((int32_t)&exp + 4, 0LL);
      if ( !v100 )
        goto LABEL_133;
      UIExtrusionLabel__set_text(v100, v101, 0LL);
      v102 = this->fields.resMaxLvLb;
      v103 = System_Int32__ToString((int)resSvtData + 32, 0LL);
      if ( !v102 )
        goto LABEL_133;
      UILabel__set_text(v102, v103, 0LL);
      v104 = CombineInfoComponent_TypeInfo;
      if ( (BYTE3(CombineInfoComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineInfoComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineInfoComponent_TypeInfo);
        v104 = CombineInfoComponent_TypeInfo;
      }
      UIWidget__set_color(v21, v104->static_fields->COLOR_VAL, 0LL);
      CombineInfoComponent__DispLimitUpReleaseSkillAndReward(this, resSvtData, v105);
      v106 = this->fields.levelUpInfo;
      if ( !v106 )
        goto LABEL_133;
      UnityEngine_GameObject__SetActive(v106, 0, 0LL);
      v138 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v19, v138, 0LL);
      v139 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v23, v139, 0LL);
      *(UnityEngine_Color_o *)&v107 = UnityEngine_Color__get_white(0LL);
      v111 = (UIWidget_o *)v24;
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
  __int64 v7; // x23
  struct SetLimitCntInfoComponent_array *currentLimitCntInfos; // x8
  Il2CppClass **v9; // x8
  SetLimitCntInfoComponent_o *v10; // x22
  UnityEngine_GameObject_o *gameObject; // x0

  if ( maxLimitCnt >= 1 )
  {
    v7 = 0LL;
    do
    {
      currentLimitCntInfos = this->fields.currentLimitCntInfos;
      if ( !currentLimitCntInfos )
        goto LABEL_9;
      if ( (unsigned int)v7 >= currentLimitCntInfos->max_length )
      {
        sub_B17100(this, *(_QWORD *)&maxLimitCnt, *(_QWORD *)&svtLimitCnt);
        sub_B170A0();
      }
      v9 = &currentLimitCntInfos->obj.klass + v7;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10 || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9[4], 0LL)) == 0LL )
LABEL_9:
        sub_B170D4();
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  struct UserServantEntity_o *baseSvtData; // x8
  UIExtrusionLabel_o *currentLvLb; // x21
  System_String_o *v18; // x0
  UserServantEntity_o *v19; // x0
  UILabel_o *currentMaxLvLb; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x1
  UserServantEntity_o *v23; // x0
  UIExtrusionLabel_o *v24; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  System_String_o *v27; // x22
  Il2CppObject *v28; // x0
  UserServantEntity_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  UIProgressBar_o *currentExpBar; // x0
  UILabel_o *currentExpValLb; // x21
  System_String_o *v36; // x0
  int32_t LimitCntMax; // w0
  UserServantEntity_o *v38; // x8
  int32_t v39; // w20
  __int64 v40; // x21
  __int64 v41; // x22
  int32_t v42; // w0
  const MethodInfo *v43; // x3
  struct UserServantEntity_o *v44; // x8
  UILabel_o *currentHpLb; // x20
  System_String_o *v46; // x0
  struct UserServantEntity_o *v47; // x8
  UILabel_o *currentAtkLb; // x19
  System_String_o *v49; // x0
  float barExp[2]; // [xsp+0h] [xbp-30h] BYREF
  __int64 lateExp; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_40F9909 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, baseData);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_7241/*"IMPOSSIBLE_LIMITUP_COLOR"*/, v6);
    sub_B16FFC(&StringLiteral_340/*"#,0"*/, v7);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v8);
    byte_40F9909 = 1;
  }
  *(_QWORD *)barExp = 0LL;
  lateExp = 0LL;
  CombineInfoComponent__initCurrentStatusGrid(this, (const MethodInfo *)baseData);
  p_baseSvtData = &this->fields.baseSvtData;
  this->fields.baseSvtData = baseData;
  sub_B16F98(
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
      v18 = System_Int32__ToString((int)baseSvtData + 256, 0LL);
      if ( !currentLvLb )
        goto LABEL_45;
      UIExtrusionLabel__set_text(currentLvLb, v18, 0LL);
      v19 = this->fields.baseSvtData;
      if ( !v19 )
        goto LABEL_45;
      currentMaxLvLb = this->fields.currentMaxLvLb;
      LODWORD(barExp[0]) = UserServantEntity__getLevelMax(v19, 0LL);
      v21 = System_Int32__ToString((int32_t)barExp, 0LL);
      if ( !currentMaxLvLb )
        goto LABEL_45;
      v22 = v21;
      goto LABEL_31;
    case 1:
      v23 = this->fields.baseSvtData;
      if ( !v23 )
        goto LABEL_45;
      v24 = this->fields.currentLvLb;
      if ( UserServantEntity__isLevelMax(v23, 0LL) )
        goto LABEL_13;
      if ( !*p_baseSvtData )
        goto LABEL_45;
      if ( UserServantEntity__isLimitCountMax(*p_baseSvtData, 0LL) )
      {
LABEL_13:
        if ( !*p_baseSvtData )
          goto LABEL_45;
        v25 = System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_7241/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_45;
        v27 = v26;
        v28 = (Il2CppObject *)System_Int32__ToString((unsigned int)*p_baseSvtData + 256, 0LL);
        v25 = System_String__Format(v27, v28, 0LL);
      }
      if ( !v24 )
        goto LABEL_45;
      UIExtrusionLabel__set_text(v24, v25, 0LL);
      v29 = this->fields.baseSvtData;
      if ( !v29 )
        goto LABEL_45;
      currentMaxLvLb = this->fields.currentMaxLvLb;
      if ( UserServantEntity__isLimitCountMax(v29, 0LL) )
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_7241/*"IMPOSSIBLE_LIMITUP_COLOR"*/, 0LL);
        if ( !*p_baseSvtData )
          goto LABEL_45;
        v31 = v30;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax(*p_baseSvtData, 0LL);
        v32 = (Il2CppObject *)System_Int32__ToString((int32_t)barExp, 0LL);
        v33 = System_String__Format(v31, v32, 0LL);
      }
      else
      {
        if ( !*p_baseSvtData )
          goto LABEL_45;
        LODWORD(barExp[0]) = UserServantEntity__getLevelMax(*p_baseSvtData, 0LL);
        v33 = System_Int32__ToString((int32_t)barExp, 0LL);
      }
      v22 = v33;
      if ( !currentMaxLvLb )
        goto LABEL_45;
LABEL_31:
      UILabel__set_text(currentMaxLvLb, v22, 0LL);
LABEL_32:
      if ( !*p_baseSvtData )
        goto LABEL_45;
      UserServantEntity__getExpInfo(*p_baseSvtData, (int32_t *)&lateExp + 1, (int32_t *)&lateExp, &barExp[1], 0LL);
      currentExpBar = (UIProgressBar_o *)this->fields.currentExpBar;
      if ( !currentExpBar )
        goto LABEL_45;
      UIProgressBar__set_value(currentExpBar, barExp[1], 0LL);
      currentExpValLb = this->fields.currentExpValLb;
      v36 = System_Int32__ToString_38275808((int32_t)&lateExp, (System_String_o *)StringLiteral_340/*"#,0"*/, 0LL);
      if ( !currentExpValLb )
        goto LABEL_45;
      UILabel__set_text(currentExpValLb, v36, 0LL);
      if ( !*p_baseSvtData )
        goto LABEL_45;
      LimitCntMax = UserServantEntity__getLimitCntMax(*p_baseSvtData, 0LL);
      v38 = *p_baseSvtData;
      if ( !*p_baseSvtData )
        goto LABEL_45;
      v39 = LimitCntMax;
      v41 = *(_QWORD *)&v38->fields.limitCount.fields.currentCryptoKey;
      v40 = *(_QWORD *)&v38->fields.limitCount.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v52.fields.currentCryptoKey = v41;
      *(_QWORD *)&v52.fields.fakeValue = v40;
      v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v52, 0LL);
      CombineInfoComponent__setCurrentLimitCntInfo(this, v39, v42, v43);
      v44 = this->fields.baseSvtData;
      if ( !v44
        || (currentHpLb = this->fields.currentHpLb,
            v46 = System_Int32__ToString_38275808((int)v44 + 268, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL),
            !currentHpLb)
        || (UILabel__set_text(currentHpLb, v46, 0LL), (v47 = this->fields.baseSvtData) == 0LL)
        || (currentAtkLb = this->fields.currentAtkLb,
            v49 = System_Int32__ToString_38275808((int)v47 + 264, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL),
            !currentAtkLb) )
      {
LABEL_45:
        sub_B170D4();
      }
      UILabel__set_text(currentAtkLb, v49, 0LL);
      return;
    default:
      goto LABEL_32;
  }
}


void __fastcall CombineInfoComponent__setInitInfoLb(CombineInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *infoLb; // x19
  UILabel_o *v5; // x0
  UnityEngine_Component_o *infoLb2; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *infoLb3; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Component_o *infoLb4; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Component_o *infoLb5; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Component_o *infoIcon2; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_Component_o *infoIcon3; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Component_o *infoIcon4; // x0
  UnityEngine_GameObject_o *v19; // x0
  UnityEngine_Component_o *limitUpRewardGetIcon1; // x0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Component_o *limitUpRewardGetIcon2; // x0
  UnityEngine_GameObject_o *v23; // x0

  if ( (byte_40F9908 & 1) == 0 )
  {
    sub_B16FFC(&CombineInfoComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_23741/*"レベル上限："*/, v3);
    byte_40F9908 = 1;
  }
  switch ( this->fields.dispType )
  {
    case 0:
    case 2:
      infoLb = this->fields.infoLb;
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
      v5 = this->fields.infoLb;
      if ( !v5 )
        goto LABEL_29;
      UILabel__set_text(v5, (System_String_o *)StringLiteral_23741/*"レベル上限："*/, 0LL);
      infoLb2 = (UnityEngine_Component_o *)this->fields.infoLb2;
      if ( !infoLb2 )
        goto LABEL_29;
      gameObject = UnityEngine_Component__get_gameObject(infoLb2, 0LL);
      if ( !gameObject )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      infoLb3 = (UnityEngine_Component_o *)this->fields.infoLb3;
      if ( !infoLb3 )
        goto LABEL_29;
      v9 = UnityEngine_Component__get_gameObject(infoLb3, 0LL);
      if ( !v9 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive(v9, 0, 0LL);
      infoLb4 = (UnityEngine_Component_o *)this->fields.infoLb4;
      if ( !infoLb4 )
        goto LABEL_29;
      v11 = UnityEngine_Component__get_gameObject(infoLb4, 0LL);
      if ( !v11 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive(v11, 0, 0LL);
      infoLb5 = (UnityEngine_Component_o *)this->fields.infoLb5;
      if ( !infoLb5 )
        goto LABEL_29;
      v13 = UnityEngine_Component__get_gameObject(infoLb5, 0LL);
      if ( !v13 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive(v13, 0, 0LL);
      infoIcon2 = (UnityEngine_Component_o *)this->fields.infoIcon2;
      if ( !infoIcon2 )
        goto LABEL_29;
      v15 = UnityEngine_Component__get_gameObject(infoIcon2, 0LL);
      if ( !v15 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive(v15, 0, 0LL);
      infoIcon3 = (UnityEngine_Component_o *)this->fields.infoIcon3;
      if ( !infoIcon3 )
        goto LABEL_29;
      v17 = UnityEngine_Component__get_gameObject(infoIcon3, 0LL);
      if ( !v17 )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive(v17, 0, 0LL);
      infoIcon4 = (UnityEngine_Component_o *)this->fields.infoIcon4;
      if ( !infoIcon4
        || (v19 = UnityEngine_Component__get_gameObject(infoIcon4, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive(v19, 0, 0LL),
            (limitUpRewardGetIcon1 = (UnityEngine_Component_o *)this->fields.limitUpRewardGetIcon1) == 0LL)
        || (v21 = UnityEngine_Component__get_gameObject(limitUpRewardGetIcon1, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive(v21, 0, 0LL),
            (limitUpRewardGetIcon2 = (UnityEngine_Component_o *)this->fields.limitUpRewardGetIcon2) == 0LL)
        || (v23 = UnityEngine_Component__get_gameObject(limitUpRewardGetIcon2, 0LL)) == 0LL )
      {
LABEL_29:
        sub_B170D4();
      }
      UnityEngine_GameObject__SetActive(v23, 0, 0LL);
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
  __int64 v7; // x23
  struct SetLimitCntInfoComponent_array *resLimitCntInfos; // x8
  Il2CppClass **v9; // x8
  SetLimitCntInfoComponent_o *v10; // x22
  UnityEngine_GameObject_o *gameObject; // x0

  if ( maxLimitCnt >= 1 )
  {
    v7 = 0LL;
    do
    {
      resLimitCntInfos = this->fields.resLimitCntInfos;
      if ( !resLimitCntInfos )
        goto LABEL_9;
      if ( (unsigned int)v7 >= resLimitCntInfos->max_length )
      {
        sub_B17100(this, *(_QWORD *)&maxLimitCnt, *(_QWORD *)&svtLimitCnt);
        sub_B170A0();
      }
      v9 = &resLimitCntInfos->obj.klass + v7;
      v10 = (SetLimitCntInfoComponent_o *)v9[4];
      if ( !v10 || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9[4], 0LL)) == 0LL )
LABEL_9:
        sub_B170D4();
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.name = name;
  v12 = (CombineInfoComponent_GetItemInfo_o *)((char *)v12 + 24);
  v12[-1].fields.acquiredCount = itemId;
  sub_B16F98((BattleServantConfConponent_o *)v12, (System_Int32_array **)name, v13, v14, v15, v16, v17, v18);
  LODWORD(v12->monitor) = iconImageId;
  HIDWORD(v12->monitor) = count;
  v12->fields.itemId = acquiredCount;
}


void __fastcall CombineInfoComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7110 & 1) == 0 )
  {
    sub_B16FFC(&CombineInfoComponent___c_TypeInfo, v1);
    byte_40F7110 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CombineInfoComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CombineInfoComponent___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  return data->fields.itemId == giftEntity->fields.objectId;
}