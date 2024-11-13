void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v4; // x8

  if ( (byte_4B129F8 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonResultComponent_TypeInfo, v1, v2);
    byte_4B129F8 = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_BD2450;
  v4 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v4->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_BD3440;
  *(_OWORD *)&v4->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL_ADJUST = xmmword_BD3450;
  *(_OWORD *)&v4->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX_ADJUST = xmmword_BD2070;
  v4->SPRITE_SIZE_NORMAL_SPECIAL_BONUS = 26;
  *(_QWORD *)&v4->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX = 0x20000002F0LL;
}


void __fastcall SummonResultComponent___ctor(SummonResultComponent_o *this, const MethodInfo *method)
{
  this->fields.dispType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultComponent__CheckLimitOver(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  PlayMakerFSM_o *fsm; // x0
  _QWORD *v9; // x0
  int32_t v10; // w19
  System_Reflection_MethodBase_o *v11; // x0

  if ( (byte_4B129F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonResultComponent_CheckLimitOver__, method, v2);
    sub_1BCA7E0(&StringLiteral_5569/*"END_SUMMON"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_8384/*"LIMIT_OVER"*/, v6, v7);
    byte_4B129F7 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8384/*"LIMIT_OVER"*/, 0LL);
    v9 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_SummonResultComponent_CheckLimitOver__);
    v10 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5569/*"END_SUMMON"*/, 0LL);
    v9 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_SummonResultComponent_CheckLimitOver__);
    v10 = 0;
  }
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, v10, 0LL);
}


void __fastcall SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *blocker; // x20
  __int64 v5; // x1
  PartyOrganizationUtility_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B129EF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B129EF = 1;
  }
  blocker = (UnityEngine_Object_o *)this->fields.blocker;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(blocker, 0LL, 0LL) )
  {
    p_blocker = (PartyOrganizationUtility_o *)&this->fields.blocker;
    klass = (UnityEngine_Object_o *)p_blocker->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_1BCA784(p_blocker, 0LL, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__DialogCallBack(
        SummonResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B129F4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, flg, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonResultComponent__DialogCallBack_b__71_0__, v8, v9);
    byte_4B129F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__71_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall SummonResultComponent__EndCloseDialogCallBack(SummonResultComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__SetBonusGiftDisplay(
        SummonResultComponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *giftIds,
        int32_t giftResultType,
        int32_t giftBonusType,
        bool adjustTitleLabel,
        const MethodInfo *method)
{
  SummonResultComponent_o *v10; // x19
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x8
  bool v45; // zf
  System_Collections_Generic_List_object__o *v46; // x20
  struct ItemIconComponent_array *extraGiftIconComponents; // x8
  __int64 v48; // x1
  UILabel_o *extraGiftMsg2Lb; // x20
  struct ItemIconComponent_array *v50; // x8
  ItemIconComponent_o *v51; // x8
  UIWidget_o *iconSprite; // x23
  struct ItemIconComponent_array *v53; // x8
  ItemIconComponent_o *v54; // x8
  struct ItemIconComponent_array *v55; // x8
  struct ItemIconComponent_array *v56; // x8
  ItemIconComponent_o *v57; // x23
  int32_t summonBeforeMana; // w26
  BalanceConfig_c *v59; // x0
  int32_t ManaMax; // w23
  int32_t v61; // w26
  UnityEngine_GameObject_o *v62; // x0
  __int64 v63; // x1
  SummonResultComponent_c *v64; // x8
  UnityEngine_GameObject_o *v65; // x21
  __int64 v66; // x1
  UILabel_o *v67; // x21
  UILabel_o *v68; // x21
  System_String_o *v69; // x22
  int m_CancellationTokenSource_high; // w8
  Il2CppObject *v71; // x0
  UILabel_o *v72; // x20
  const MethodInfo *v73; // x1
  struct ItemIconComponent_array *v74; // x8
  __int64 v75; // x24
  int max_length; // w9
  unsigned int v77; // w21
  UIWidget_o *backImg; // x22
  struct ItemIconComponent_array *v79; // x8
  __int64 v80; // x8
  struct ItemIconComponent_array *v81; // x8
  ItemIconComponent_o *v82; // x22
  struct ItemIconComponent_array *v83; // x8
  bool v84; // w1
  struct ItemIconComponent_array *v85; // x8
  UnityEngine_GameObject_o *v86; // x0
  __int64 v87; // x1
  SummonResultComponent_c *v88; // x8
  UnityEngine_GameObject_o *v89; // x22
  struct SummonResultComponent_StaticFields *v90; // x8
  __int64 v91; // x9
  __int64 v92; // x1
  UILabel_o *v93; // x21
  UILabel_o *v94; // x21
  System_String_o *v95; // x22
  int *v96; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v98; // x1
  SummonResultComponent_c *v99; // x8
  int32_t size; // w21
  UnityEngine_GameObject_o *v101; // x20
  struct SummonResultComponent_StaticFields *static_fields; // x8
  __int64 v103; // x9
  __int64 v104; // x1
  UILabel_o *extraGiftTitleLb; // x20
  __int64 v106; // x1
  System_String_o *v107; // x21
  long double inited; // q0
  _QWORD *v109; // x22
  __int64 v110; // x8
  __int64 v111; // x0
  __int64 v112; // x0
  System_String_o *v113; // x0
  __int64 v114; // x1
  long double v115; // q0
  _QWORD *v116; // x22
  System_String_o *v117; // x21
  __int64 v118; // x8
  __int64 v119; // x0
  __int64 v120; // x0
  const MethodInfo *v121; // x1
  UnityEngine_GameObject_o *v122; // x0
  __int64 v123; // x1
  SummonResultComponent_c *v124; // x8
  UnityEngine_GameObject_o *v125; // x22
  struct SummonResultComponent_StaticFields *v126; // x8
  __int64 v127; // x9
  __int64 v128; // x1
  UILabel_o *v129; // x21
  __int64 v130; // x1
  System_String_o *v131; // x22
  long double v132; // q0
  _QWORD *v133; // x23
  __int64 v134; // x8
  __int64 v135; // x0
  __int64 v136; // x0
  Il2CppObject *v137; // x0
  int v138; // [xsp+Ch] [xbp-54h] BYREF
  int v139; // [xsp+18h] [xbp-48h] BYREF
  int v140; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4B129EC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_object___, giftIds, *(_QWORD *)&giftResultType);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v13, v14);
    sub_1BCA7E0(&DataManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&SummonResultComponent_TypeInfo, v25, v26);
    sub_1BCA7E0(&StringLiteral_12487/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_12489/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_12491/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_12502/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_12503/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_12488/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_12501/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, v39, v40);
    this = (SummonResultComponent_o *)sub_1BCA7E0(&StringLiteral_12490/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, v41, v42);
    byte_4B129EC = 1;
  }
  summonCtrl = v10->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_156;
  gachaParamData = summonCtrl->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_156;
  if ( giftIds && giftBonusType && gachaParamData->fields.gachaType != 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftIds);
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)GiftMaster__GetGiftListByIds((GiftMaster_o *)this, giftIds, 0LL);
    v45 = giftBonusType == 2;
    v46 = (System_Collections_Generic_List_object__o *)this;
    if ( v45 )
    {
      if ( !this )
        goto LABEL_156;
      extraGiftIconComponents = v10->fields.extraGiftIconComponents;
      if ( !extraGiftIconComponents )
        goto LABEL_156;
      if ( SLODWORD(this->fields.m_CancellationTokenSource) <= (signed int)extraGiftIconComponents->max_length )
      {
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_156;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
        if ( !this )
          goto LABEL_156;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        v74 = v10->fields.extraGiftIconComponents;
        if ( !v74 )
          goto LABEL_156;
        v75 = 4LL;
        while ( 1 )
        {
          max_length = v74->max_length;
          v77 = v75 - 4;
          if ( (int)v75 - 4 >= max_length )
            break;
          if ( v77 >= max_length )
            goto LABEL_157;
          this = (SummonResultComponent_o *)*((_QWORD *)&v74->obj.klass + v75);
          if ( !this )
            goto LABEL_156;
          if ( (signed int)v77 >= v46->fields._size )
          {
            ItemIconComponent__Clear((ItemIconComponent_o *)this, 0LL);
            v85 = v10->fields.extraGiftIconComponents;
            if ( !v85 )
              goto LABEL_156;
            if ( v77 >= v85->max_length )
              goto LABEL_157;
            this = (SummonResultComponent_o *)*((_QWORD *)&v85->obj.klass + v75);
            if ( !this )
              goto LABEL_156;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              goto LABEL_156;
            v84 = 0;
          }
          else
          {
            backImg = (UIWidget_o *)this->fields.backImg;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, giftIds);
            if ( !backImg )
              goto LABEL_156;
            UIWidget__set_width(
              backImg,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0LL);
            v79 = v10->fields.extraGiftIconComponents;
            if ( !v79 )
              goto LABEL_156;
            if ( v77 >= v79->max_length )
              goto LABEL_157;
            v80 = *((_QWORD *)&v79->obj.klass + v75);
            if ( !v80 )
              goto LABEL_156;
            this = *(SummonResultComponent_o **)(v80 + 40);
            if ( !this )
              goto LABEL_156;
            UIWidget__set_height(
              (UIWidget_o *)this,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0LL);
            v81 = v10->fields.extraGiftIconComponents;
            if ( !v81 )
              goto LABEL_156;
            if ( v77 >= v81->max_length )
              goto LABEL_157;
            v82 = (ItemIconComponent_o *)*((_QWORD *)&v81->obj.klass + v75);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v46,
                                                v77,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !v82 )
              goto LABEL_156;
            ItemIconComponent__SetGift(v82, (GiftEntity_o *)this, -1, 0, 0LL);
            v83 = v10->fields.extraGiftIconComponents;
            if ( !v83 )
              goto LABEL_156;
            if ( v77 >= v83->max_length )
              goto LABEL_157;
            this = (SummonResultComponent_o *)*((_QWORD *)&v83->obj.klass + v75);
            if ( !this )
              goto LABEL_156;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              goto LABEL_156;
            v84 = 1;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v84, 0LL);
          v74 = v10->fields.extraGiftIconComponents;
          ++v75;
          if ( !v74 )
            goto LABEL_156;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_156;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v99 = SummonResultComponent_TypeInfo;
        size = v46->fields._size;
        v101 = gameObject;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v98);
          v99 = SummonResultComponent_TypeInfo;
        }
        static_fields = v99->static_fields;
        v103 = 44LL;
        if ( size == 1 )
          v103 = 40LL;
        GameObjectExtensions__SetLocalPositionX(
          v101,
          (float)*(int *)((char *)&static_fields->TUTORIAL_BACK_ARROW_WAY + v103),
          0LL);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v104);
        v107 = LocalizationManager__Get((System_String_o *)StringLiteral_12502/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0LL);
        v109 = Method_System_Array_Empty_object___;
        v110 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v110 )
        {
          sub_1C1C718(Method_System_Array_Empty_object___, v106);
          v110 = v109[7];
        }
        v111 = *(_QWORD *)(v110 + 16);
        if ( (*(_BYTE *)(v111 + 309) & 1) == 0 )
          v111 = sub_1C1C6BC(inited);
        if ( !*(_DWORD *)(v111 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v111, v106);
        v112 = *(_QWORD *)(v109[7] + 16LL);
        if ( (*(_BYTE *)(v112 + 309) & 1) == 0 )
          v112 = sub_1C1C6BC(inited);
        this = (SummonResultComponent_o *)System_String__Format_62415728(
                                            v107,
                                            **(System_Object_array ***)(v112 + 184),
                                            0LL);
        if ( !extraGiftTitleLb )
          goto LABEL_156;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0LL);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v113 = LocalizationManager__Get((System_String_o *)StringLiteral_12501/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0LL);
        v116 = Method_System_Array_Empty_object___;
        v117 = v113;
        v118 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v118 )
        {
          sub_1C1C718(Method_System_Array_Empty_object___, v114);
          v118 = v116[7];
        }
        v119 = *(_QWORD *)(v118 + 16);
        if ( (*(_BYTE *)(v119 + 309) & 1) == 0 )
          v119 = sub_1C1C6BC(v115);
        if ( !*(_DWORD *)(v119 + 224) )
          v115 = j_il2cpp_runtime_class_init_0(v119, v114);
        v120 = *(_QWORD *)(v116[7] + 16LL);
        if ( (*(_BYTE *)(v120 + 309) & 1) == 0 )
          v120 = sub_1C1C6BC(v115);
        this = (SummonResultComponent_o *)System_String__Format_62415728(
                                            v117,
                                            **(System_Object_array ***)(v120 + 184),
                                            0LL);
        if ( !extraGiftMsg2Lb )
          goto LABEL_156;
      }
      else
      {
        this = (SummonResultComponent_o *)v10->fields.extraGiftMsgLb;
        if ( !this )
          goto LABEL_156;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_156;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        extraGiftMsg2Lb = v10->fields.extraGiftMsgLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12503/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
        if ( !extraGiftMsg2Lb )
          goto LABEL_156;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0LL);
      SummonResultComponent__SetSpecialGiftPosition(v10, v121);
      return;
    }
    v50 = v10->fields.extraGiftIconComponents;
    if ( !v50 )
      goto LABEL_156;
    if ( !v50->max_length )
      goto LABEL_157;
    v51 = v50->m_Items[0];
    if ( !v51 )
      goto LABEL_156;
    iconSprite = (UIWidget_o *)v51->fields.iconSprite;
    this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, giftIds);
    if ( !iconSprite )
      goto LABEL_156;
    UIWidget__set_width(iconSprite, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0LL);
    v53 = v10->fields.extraGiftIconComponents;
    if ( !v53 )
      goto LABEL_156;
    if ( !v53->max_length )
      goto LABEL_157;
    v54 = v53->m_Items[0];
    if ( !v54 )
      goto LABEL_156;
    this = (SummonResultComponent_o *)v54->fields.iconSprite;
    if ( !this )
      goto LABEL_156;
    UIWidget__set_height((UIWidget_o *)this, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0LL);
    v55 = v10->fields.extraGiftIconComponents;
    if ( !v55 )
      goto LABEL_156;
    if ( !v55->max_length )
      goto LABEL_157;
    this = (SummonResultComponent_o *)v55->m_Items[0];
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_156;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_156;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_156;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v56 = v10->fields.extraGiftIconComponents;
    if ( !v56 )
      goto LABEL_156;
    if ( !v56->max_length )
LABEL_157:
      sub_1BCAA44(this, giftIds);
    if ( !v46 )
      goto LABEL_156;
    v57 = v56->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v46,
                                        0,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !v57 )
      goto LABEL_156;
    ItemIconComponent__SetGift(v57, (GiftEntity_o *)this, -1, 0, 0LL);
    if ( giftResultType == 3 )
    {
      summonBeforeMana = v10->fields.summonBeforeMana;
      v59 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, giftIds);
        v59 = BalanceConfig_TypeInfo;
      }
      ManaMax = v59->static_fields->ManaMax;
      if ( summonBeforeMana < ManaMax )
      {
        if ( !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59, giftIds);
          ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( this )
        {
          v61 = v10->fields.summonBeforeMana;
          v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v64 = SummonResultComponent_TypeInfo;
          v65 = v62;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v63);
            v64 = SummonResultComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(
            v65,
            (float)v64->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME,
            0LL);
          v67 = v10->fields.extraGiftTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66);
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12491/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
          if ( v67 )
          {
            UILabel__set_text(v67, (System_String_o *)this, 0LL);
            v68 = v10->fields.extraGiftMsg2Lb;
            v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12489/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v46,
                                                0,
                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v61;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v61 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v46,
                                                    0,
                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_156;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v140 = m_CancellationTokenSource_high;
              v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140);
              this = (SummonResultComponent_o *)System_String__Format(v69, v71, 0LL);
              if ( v68 )
              {
                UILabel__set_text(v68, (System_String_o *)this, 0LL);
                this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
                v72 = v10->fields.extraGiftTitleLb;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, giftIds);
                if ( v72 )
                {
                  UILabel__set_fontSize(v72, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0LL);
                  this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
                  if ( this )
                  {
                    UILabel__set_fontSize(
                      (UILabel_o *)this,
                      SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE,
                      0LL);
LABEL_154:
                    SummonResultComponent__SetBonusGiftPosition(v10, v73);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_156:
        sub_1BCAA3C(this, giftIds);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v122 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v124 = SummonResultComponent_TypeInfo;
      v125 = v122;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v123);
        v124 = SummonResultComponent_TypeInfo;
      }
      v126 = v124->static_fields;
      v127 = 48LL;
      if ( adjustTitleLabel )
        v127 = 52LL;
      GameObjectExtensions__SetLocalPositionX(v125, (float)*(int *)((char *)&v126->TUTORIAL_BACK_ARROW_WAY + v127), 0LL);
      v129 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v128);
      v131 = LocalizationManager__Get((System_String_o *)StringLiteral_12490/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v133 = Method_System_Array_Empty_object___;
      v134 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v134 )
      {
        sub_1C1C718(Method_System_Array_Empty_object___, v130);
        v134 = v133[7];
      }
      v135 = *(_QWORD *)(v134 + 16);
      if ( (*(_BYTE *)(v135 + 309) & 1) == 0 )
        v135 = sub_1C1C6BC(v132);
      if ( !*(_DWORD *)(v135 + 224) )
        v132 = j_il2cpp_runtime_class_init_0(v135, v130);
      v136 = *(_QWORD *)(v133[7] + 16LL);
      if ( (*(_BYTE *)(v136 + 309) & 1) == 0 )
        v136 = sub_1C1C6BC(v132);
      this = (SummonResultComponent_o *)System_String__Format_62415728(
                                          v131,
                                          **(System_Object_array ***)(v136 + 184),
                                          0LL);
      if ( !v129 )
        goto LABEL_156;
      UILabel__set_text(v129, (System_String_o *)this, 0LL);
      v94 = v10->fields.extraGiftMsg2Lb;
      v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12487/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v46,
                                          0,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v96 = &v139;
      v139 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    else
    {
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v88 = SummonResultComponent_TypeInfo;
      v89 = v86;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v87);
        v88 = SummonResultComponent_TypeInfo;
      }
      v90 = v88->static_fields;
      v91 = 32LL;
      if ( adjustTitleLabel )
        v91 = 36LL;
      GameObjectExtensions__SetLocalPositionX(v89, (float)*(int *)((char *)&v90->TUTORIAL_BACK_ARROW_WAY + v91), 0LL);
      v93 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92);
      this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12491/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      if ( !v93 )
        goto LABEL_156;
      UILabel__set_text(v93, (System_String_o *)this, 0LL);
      v94 = v10->fields.extraGiftMsg2Lb;
      v95 = LocalizationManager__Get((System_String_o *)StringLiteral_12488/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v46,
                                          0,
                                          (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v96 = &v138;
      v138 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v96);
    this = (SummonResultComponent_o *)System_String__Format(v95, v137, 0LL);
    if ( v94 )
    {
      UILabel__set_text(v94, (System_String_o *)this, 0LL);
      goto LABEL_154;
    }
    goto LABEL_156;
  }
}


void __fastcall SummonResultComponent__SetBonusGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v7; // x8
  struct ItemIconComponent_array *extraGiftIconComponents; // x21
  int mWidth; // s1
  int max_length; // w8
  float v11; // s8
  unsigned int v12; // w22
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x20
  __int64 v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t v19; // w20
  UIWidget_o *v20; // x20
  struct UILabel_o *v21; // x8

  if ( (byte_4B129ED & 1) == 0 )
  {
    sub_1BCA7E0(&SummonResultComponent_TypeInfo, method, v2);
    byte_4B129ED = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v7 = this->fields.extraGiftTitleLb;
  if ( !v7 )
    goto LABEL_27;
  extraGiftIconComponents = this->fields.extraGiftIconComponents;
  if ( !extraGiftIconComponents )
    goto LABEL_27;
  mWidth = v7->fields.mWidth;
  max_length = extraGiftIconComponents->max_length;
  v11 = (float)(LocalPositionX + (float)((float)mWidth * 0.5)) + -1.0;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BCAA44(extraGiftTitleLb, method);
      v13 = &extraGiftIconComponents->obj.klass + (int)v12;
      v14 = v13[4];
      if ( !v14 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v13[4],
                                                      0LL);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0LL);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v15 = *(_QWORD *)&v14->_1.byval_arg.bits;
        if ( !v15 )
          break;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
        GameObjectExtensions__SetLocalPositionX(v16, v11 + (float)*(int *)(v15 + 168), 0LL);
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
        v11 = GameObjectExtensions__GetLocalPositionX(v17, 0LL);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1BCAA3C(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0LL);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v19 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, method);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v19 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 68LL) )
  {
    v20 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb, method);
    if ( !v20 )
      goto LABEL_27;
    UIWidget__set_width(v20, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  v21 = this->fields.extraGiftMsg2Lb;
  if ( !v21 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v11 + 1.0) + (float)((float)v21->fields.mWidth * 0.5),
    0LL);
}


void __fastcall SummonResultComponent__SetSpecialGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v7; // x8
  struct ItemIconComponent_array *extraGiftIconComponents; // x21
  int mWidth; // s1
  int max_length; // w8
  float v11; // s8
  unsigned int v12; // w22
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x20
  __int64 v15; // x20
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t v19; // w20
  UIWidget_o *v20; // x20
  struct UILabel_o *v21; // x8

  if ( (byte_4B129EE & 1) == 0 )
  {
    sub_1BCA7E0(&SummonResultComponent_TypeInfo, method, v2);
    byte_4B129EE = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v7 = this->fields.extraGiftTitleLb;
  if ( !v7 )
    goto LABEL_27;
  extraGiftIconComponents = this->fields.extraGiftIconComponents;
  if ( !extraGiftIconComponents )
    goto LABEL_27;
  mWidth = v7->fields.mWidth;
  max_length = extraGiftIconComponents->max_length;
  v11 = LocalPositionX + (float)((float)mWidth * 0.5);
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BCAA44(extraGiftTitleLb, method);
      v13 = &extraGiftIconComponents->obj.klass + (int)v12;
      v14 = v13[4];
      if ( !v14 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v13[4],
                                                      0LL);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0LL);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v15 = *(_QWORD *)&v14->_1.byval_arg.bits;
        if ( !v15 )
          break;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
        GameObjectExtensions__SetLocalPositionX(v16, (float)(v11 + (float)*(int *)(v15 + 168)) + 2.0, 0LL);
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
        v11 = GameObjectExtensions__GetLocalPositionX(v17, 0LL);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1BCAA3C(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0LL);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v19 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, method);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v19 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 68LL) )
  {
    v20 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb, method);
    if ( !v20 )
      goto LABEL_27;
    UIWidget__set_width(v20, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  v21 = this->fields.extraGiftMsg2Lb;
  if ( !v21 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v11 + (float)((float)v21->fields.mWidth * 0.5)) + 2.0,
    0LL);
}


void __fastcall SummonResultComponent___DialogCallBack_b__71_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  CommonUI_o *v17; // x19

  if ( (byte_4B129F9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonResultComponent_EndCloseDialogCallBack__, v8, v9);
    byte_4B129F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v14, 0LL);
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (CommonUI_o *)v15;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v16);
  if ( !v17 )
LABEL_8:
    sub_1BCAA3C(v15, v16);
  CommonUI__maskFadein(v17, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonResultComponent__checkOverlapSvt(
        SummonResultComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v9; // w22
  int32_t v10; // w21
  bool result; // w0

  if ( (byte_4B129F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v5, v6);
    byte_4B129F0 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1BCAA3C(befSvtList, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  v9 = size - 1;
  if ( size < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    result = System_Collections_Generic_List_int___get_Item(
               befSvtList,
               v10,
               (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v9 == v10 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v10;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void __fastcall SummonResultComponent__clearResultList(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Component_o *fstGrid; // x0
  int32_t childCount; // w0
  int v8; // w22
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v11; // w0
  int v12; // w22
  __int64 v13; // x1
  UnityEngine_Object_o *v14; // x20

  if ( (byte_4B129F5 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B129F5 = 1;
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( childCount >= 1 )
  {
    v8 = childCount + 1;
    while ( 1 )
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
      if ( !fstGrid )
        break;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
      if ( !fstGrid )
        break;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)fstGrid,
                                             v8 - 2,
                                             0LL);
      if ( !fstGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
      UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      if ( --v8 <= 1 )
        goto LABEL_13;
    }
LABEL_26:
    sub_1BCAA3C(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  v11 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( v11 >= 1 )
  {
    v12 = v11 + 1;
    do
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
      if ( !fstGrid )
        goto LABEL_26;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
      if ( !fstGrid )
        goto LABEL_26;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)fstGrid,
                                             v12 - 2,
                                             0LL);
      if ( !fstGrid )
        goto LABEL_26;
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      UnityEngine_Object__Destroy_70154244(v14, 0LL);
    }
    while ( --v12 > 1 );
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsg;
  if ( !fstGrid )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fstGrid, 0, 0LL);
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsgLb;
  if ( !fstGrid )
    goto LABEL_26;
  UILabel__set_text((UILabel_o *)fstGrid, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__initGachaResultList(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        int32_t type,
        System_Int32_array *extraGiftIds,
        GachaExtraGifts_array *gachaExtraGiftList,
        const MethodInfo *method)
{
  GachaInfos_array *v9; // x26
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 changeSceneBtnInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  __int64 v64; // x2
  __int64 v65; // x3
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellWidth; // s10
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x20
  float v71; // s9
  int maxPerLine; // s11
  System_Collections_Generic_List_int__o *v73; // x24
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int v80; // w8
  __int64 v81; // x22
  GachaInfos_o **m_Items; // x23
  struct UIGrid_o **p_fstGrid; // x8
  GachaInfos_array *v84; // x24
  GachaInfos_o *v85; // x25
  UnityEngine_GameObject_o *targetGo; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v88; // x26
  __int64 v89; // x2
  UnityEngine_Transform_o *v90; // x27
  const MethodInfo *v91; // x2
  int32_t objectId; // w28
  bool v93; // w27
  bool IsCommandCode; // w28
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  SummonResultInfoComponent_ClickDelegate_o *v98; // x0
  const MethodInfo *v99; // x3
  _QWORD *v100; // x8
  bool v101; // zf
  SummonResultInfoComponent_ClickDelegate_o *v102; // x28
  const MethodInfo *v103; // x6
  int32_t sellQp; // w26
  int32_t summonBeforeQp; // w27
  int QpMax; // w8
  int32_t sellMana; // w26
  int32_t summonBeforeMana; // w27
  int UserItemMax; // w8
  __int64 v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  float v113; // s12
  float v114; // s11
  float v115; // s8
  float v116; // s3
  float v117; // s0
  __int64 v118; // x1
  struct UILabel_o *autoSaleMsgLb; // x23
  System_String_o *v120; // x1
  UILabel_o *extraGiftMsgLb; // x23
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  SummonResultComponent___c_c *v125; // x0
  System_Collections_Generic_IEnumerable_T__o *extraGiftIconComponents; // x23
  System_Action_object__o *_9__61_0; // x24
  Il2CppObject *v128; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  const MethodInfo *v136; // x2
  __int64 v137; // x2
  __int64 v138; // x3
  const MethodInfo *v139; // x5
  float v140; // s8
  struct UIGrid_o *v141; // x8
  GachaExtraGifts_o *v142; // x9
  int32_t gachaExtraGiftResultType; // w2
  int32_t gachaExtraGiftBonusType; // w3
  SummonResultComponent_o *v145; // x0
  System_Collections_Generic_IEnumerable_int__o *v146; // x1
  bool v147; // w4
  System_Collections_Generic_HashSet_int__o *v148; // x22
  __int64 v149; // x8
  __int64 v150; // x20
  int32_t v151; // w23
  int32_t v152; // w24
  GachaExtraGifts_o *v153; // x27
  __int64 v154; // x1
  System_Int32_array *v155; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+10h] [xbp-A0h]
  char v157; // [xsp+1Ch] [xbp-94h]
  __int64 v158; // [xsp+28h] [xbp-88h] BYREF
  System_Nullable_int__o v159; // 0:x0.8
  UnityEngine_Vector3_o v160; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4

  v9 = resultList;
  if ( (byte_4B129EA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_ItemIconComponent__TypeInfo, resultList, *(_QWORD *)&type);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_ItemIconComponent___, v13, v14);
    sub_1BCA7E0(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Collider___, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v33, v34);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v37, v38);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v39, v40);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v41, v42);
    sub_1BCA7E0(&Method_SummonResultComponent_showResCcDetail__, v43, v44);
    sub_1BCA7E0(&Method_SummonResultComponent_showResSvtDetail__, v45, v46);
    sub_1BCA7E0(&SummonResultComponent_TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_SummonResultComponent___c__initGachaResultList_b__61_0__, v49, v50);
    sub_1BCA7E0(&SummonResultComponent___c_TypeInfo, v51, v52);
    sub_1BCA7E0(&StringLiteral_12503/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_12525/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v57, v58);
    byte_4B129EA = 1;
  }
  changeSceneBtnInfo = (__int64)this->fields.changeSceneBtnInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.closeInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.backImg;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.formationBtnLabel;
  this->fields.dispType = type;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v61, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v62, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v63, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  if ( v9 )
  {
    SummonResultComponent__setCenter(this, (const MethodInfo *)resultList);
    max_length = v9->max_length;
    fstGrid = this->fields.fstGrid;
    if ( !fstGrid )
      goto LABEL_144;
    cellWidth = fstGrid->fields.cellWidth;
    p_scdGrid = &this->fields.scdGrid;
    scdGrid = this->fields.scdGrid;
    if ( !scdGrid )
      goto LABEL_144;
    v155 = extraGiftIds;
    v71 = scdGrid->fields.cellWidth;
    maxPerLine = fstGrid->fields.maxPerLine;
    v73 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      resultList,
                                                      v64,
                                                      v65);
    System_Collections_Generic_List_int____ctor(
      v73,
      (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.befSvtList = v73;
    p_befSvtList = &this->fields.befSvtList;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v73, v74, v75, v76, v77, v78, v79);
    v80 = v9->max_length;
    if ( v80 >= 1 )
    {
      v157 = 0;
      v81 = 0LL;
      m_Items = v9->m_Items;
      while ( (unsigned int)v81 < v80 )
      {
        if ( (unsigned int)v81 >= 6 )
          p_fstGrid = &this->fields.scdGrid;
        else
          p_fstGrid = &this->fields.fstGrid;
        changeSceneBtnInfo = (__int64)*p_fstGrid;
        if ( !*p_fstGrid )
          goto LABEL_144;
        v84 = v9;
        v85 = m_Items[v81];
        targetGo = this->fields.targetGo;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
        changeSceneBtnInfo = (__int64)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        targetGo,
                                        transform,
                                        0LL,
                                        0LL);
        if ( !changeSceneBtnInfo )
          goto LABEL_144;
        v88 = (UnityEngine_GameObject_o *)changeSceneBtnInfo;
        changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                        0LL);
        v90 = (UnityEngine_Transform_o *)changeSceneBtnInfo;
        if ( !byte_4B109C6 )
        {
          changeSceneBtnInfo = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, resultList, v89);
          byte_4B109C6 = 1;
        }
        if ( !v90 )
          goto LABEL_144;
        UnityEngine_Transform__set_localScale(v90, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        if ( !v85 )
          goto LABEL_144;
        if ( v85->fields.isNew
          && (objectId = v85->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v91)) )
        {
          changeSceneBtnInfo = (__int64)*p_befSvtList;
          if ( !*p_befSvtList )
            goto LABEL_144;
          v110 = *(_QWORD *)(changeSceneBtnInfo + 16);
          v111 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(changeSceneBtnInfo + 28);
          if ( !v110 )
            goto LABEL_144;
          v112 = *(int *)(changeSceneBtnInfo + 24);
          if ( (unsigned int)v112 >= *(_DWORD *)(v110 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)changeSceneBtnInfo,
              objectId,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
            v93 = 0;
          }
          else
          {
            v93 = 0;
            *(_DWORD *)(changeSceneBtnInfo + 24) = v112 + 1;
            *(_DWORD *)(v110 + 4 * v112 + 32) = objectId;
          }
        }
        else
        {
          v93 = 1;
        }
        IsCommandCode = SvtType__IsCommandCode(v85->fields.type, 0LL);
        v98 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1BCAA2C(
                                                             SummonResultInfoComponent_ClickDelegate_TypeInfo,
                                                             v95,
                                                             v96,
                                                             v97);
        v100 = &Method_SummonResultComponent_showResCcDetail__;
        v101 = !IsCommandCode;
        v102 = v98;
        if ( v101 )
          v100 = &Method_SummonResultComponent_showResSvtDetail__;
        SummonResultInfoComponent_ClickDelegate___ctor(v98, (Il2CppObject *)this, *v100, v99);
        if ( v85->fields.sellMana || v85->fields.sellQp )
        {
          v102 = 0LL;
          v157 = 1;
        }
        changeSceneBtnInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                        v88,
                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
        if ( !changeSceneBtnInfo )
          goto LABEL_144;
        SummonResultInfoComponent__setResultData(
          (SummonResultInfoComponent_o *)changeSceneBtnInfo,
          v85,
          v93,
          v102,
          this->fields.summonBeforeQp,
          this->fields.summonBeforeMana,
          v103);
        changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        sellQp = v85->fields.sellQp;
        summonBeforeQp = this->fields.summonBeforeQp;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, resultList);
          changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        }
        QpMax = *(_DWORD *)(*(_QWORD *)(changeSceneBtnInfo + 184) + 4LL);
        if ( summonBeforeQp + sellQp >= QpMax )
        {
          if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo, resultList);
            changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
            QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
          }
        }
        else
        {
          QpMax = this->fields.summonBeforeQp + v85->fields.sellQp;
        }
        this->fields.summonBeforeQp = QpMax;
        sellMana = v85->fields.sellMana;
        summonBeforeMana = this->fields.summonBeforeMana;
        if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
        {
          j_il2cpp_runtime_class_init_0(changeSceneBtnInfo, resultList);
          changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        }
        UserItemMax = *(_DWORD *)(*(_QWORD *)(changeSceneBtnInfo + 184) + 72LL);
        if ( summonBeforeMana + sellMana >= UserItemMax )
        {
          v9 = v84;
          if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo, resultList);
            UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
          }
        }
        else
        {
          v9 = v84;
          UserItemMax = this->fields.summonBeforeMana + v85->fields.sellMana;
        }
        this->fields.summonBeforeMana = UserItemMax;
        v80 = v9->max_length;
        if ( (int)++v81 >= v80 )
          goto LABEL_64;
      }
LABEL_145:
      sub_1BCAA44(changeSceneBtnInfo, resultList);
    }
    v157 = 0;
LABEL_64:
    changeSceneBtnInfo = (__int64)this->fields.fstGrid;
    v113 = (float)max_length;
    v114 = (float)maxPerLine;
    v115 = (float)max_length <= v114 ? 22.0 : 106.0;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)changeSceneBtnInfo,
                                    0LL);
    extraGiftIds = v155;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    v116 = v113 <= v114 ? v113 : v114;
    v160.fields.x = (float)(cellWidth * -0.5) * (float)(v116 + -1.0);
    v160.fields.y = v115;
    v160.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v160, 0LL);
    changeSceneBtnInfo = (__int64)this->fields.fstGrid;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)changeSceneBtnInfo + 440LL))(
      changeSceneBtnInfo,
      *(_QWORD *)(*(_QWORD *)changeSceneBtnInfo + 448LL));
    changeSceneBtnInfo = (__int64)*p_scdGrid;
    if ( !*p_scdGrid )
      goto LABEL_144;
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)changeSceneBtnInfo,
                                    0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    v117 = (float)(v113 - v114) + -1.0;
    if ( v113 <= v114 )
      v117 = -1.0;
    v161.fields.x = (float)(v71 * -0.5) * v117;
    v161.fields.y = -62.0;
    v161.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v161, 0LL);
    changeSceneBtnInfo = (__int64)this->fields.scdGrid;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)changeSceneBtnInfo + 440LL))(
      changeSceneBtnInfo,
      *(_QWORD *)(*(_QWORD *)changeSceneBtnInfo + 448LL));
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
    changeSceneBtnInfo = (__int64)this->fields.autoSaleMsg;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    if ( (v157 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
      autoSaleMsgLb = this->fields.autoSaleMsgLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v118);
      changeSceneBtnInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12525/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0LL);
      if ( !autoSaleMsgLb )
        goto LABEL_144;
      v120 = (System_String_o *)changeSceneBtnInfo;
      changeSceneBtnInfo = (__int64)autoSaleMsgLb;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
      changeSceneBtnInfo = (__int64)this->fields.autoSaleMsgLb;
      if ( !changeSceneBtnInfo )
        goto LABEL_144;
      v120 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)changeSceneBtnInfo, v120, 0LL);
  }
  changeSceneBtnInfo = (__int64)this->fields.extraGiftComponent;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_gameObject(
                                  (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (__int64)SummonResultComponent_TypeInfo;
  extraGiftMsgLb = this->fields.extraGiftMsgLb;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, resultList);
  if ( !extraGiftMsgLb )
    goto LABEL_144;
  UILabel__set_fontSize(extraGiftMsgLb, SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftComponent;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_gameObject(
                                  (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  v125 = SummonResultComponent___c_TypeInfo;
  extraGiftIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraGiftIconComponents;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo, v122);
    v125 = SummonResultComponent___c_TypeInfo;
  }
  _9__61_0 = (System_Action_object__o *)v125->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v125->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v125, v122);
      v125 = SummonResultComponent___c_TypeInfo;
    }
    v128 = (Il2CppObject *)v125->static_fields->__9;
    _9__61_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_ItemIconComponent__TypeInfo, v122, v123, v124);
    System_Action_object____ctor(_9__61_0, v128, Method_SummonResultComponent___c__initGachaResultList_b__61_0__, 0LL);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Action_ItemIconComponent__o *)_9__61_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__61_0,
      (int64_t)_9__61_0,
      v130,
      v131,
      v132,
      v133,
      v134,
      v135);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__61_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_ItemIconComponent___);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  if ( extraGiftIds && gachaExtraGiftList && *(_QWORD *)&extraGiftIds->max_length )
  {
    changeSceneBtnInfo = (__int64)this->fields.extraGiftComponent;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_gameObject(
                                    (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                    0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
    if ( extraGiftIds->max_length == 1 )
    {
      v140 = 0.0;
      if ( v9 )
      {
        v158 = 0LL;
        v159 = (System_Nullable_int__o)&v158;
        System_Nullable_int____ctor(
          v159,
          v9->max_length,
          (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v158 )
          v140 = (float)SHIDWORD(v158);
      }
      v141 = this->fields.fstGrid;
      if ( v141 )
      {
        if ( !gachaExtraGiftList->max_length )
          goto LABEL_145;
        v142 = gachaExtraGiftList->m_Items[0];
        if ( v142 )
        {
          gachaExtraGiftBonusType = v142->fields.gachaExtraGiftBonusType;
          gachaExtraGiftResultType = v142->fields.gachaExtraGiftResultType;
          v145 = this;
          v146 = (System_Collections_Generic_IEnumerable_int__o *)extraGiftIds;
          v147 = v140 > (float)v141->fields.maxPerLine;
LABEL_142:
          SummonResultComponent__SetBonusGiftDisplay(
            v145,
            v146,
            gachaExtraGiftResultType,
            gachaExtraGiftBonusType,
            v147,
            v139);
          goto LABEL_143;
        }
      }
      goto LABEL_144;
    }
    v148 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                          System_Collections_Generic_HashSet_int__TypeInfo,
                                                          resultList,
                                                          v137,
                                                          v138);
    System_Collections_Generic_HashSet_int____ctor(
      v148,
      (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v149 = *(_QWORD *)&extraGiftIds->max_length;
    if ( (int)v149 >= 1 )
    {
      v150 = 0LL;
      v151 = 0;
      v152 = 0;
      while ( (unsigned int)v150 < (unsigned int)v149 && (unsigned int)v150 < gachaExtraGiftList->max_length )
      {
        v153 = gachaExtraGiftList->m_Items[v150];
        if ( !v153 )
          goto LABEL_144;
        if ( v153->fields.gachaExtraGiftBonusType == 2 )
        {
          if ( !v148 )
            goto LABEL_144;
          changeSceneBtnInfo = System_Collections_Generic_HashSet_int___Add(
                                 v148,
                                 extraGiftIds->m_Items[v150 + 1],
                                 (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v151 = v153->fields.gachaExtraGiftBonusType;
          v152 = v153->fields.gachaExtraGiftResultType;
          v149 = *(_QWORD *)&extraGiftIds->max_length;
        }
        if ( (int)++v150 >= (int)v149 )
          goto LABEL_136;
      }
      goto LABEL_145;
    }
    v152 = 0;
    v151 = 0;
LABEL_136:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)extraGiftIds, 0LL) )
    {
      v145 = this;
      v146 = (System_Collections_Generic_IEnumerable_int__o *)v148;
      gachaExtraGiftResultType = v152;
      gachaExtraGiftBonusType = v151;
      v147 = 0;
      goto LABEL_142;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v154);
    changeSceneBtnInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12503/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
    if ( !this->fields.extraGiftMsgLb )
LABEL_144:
      sub_1BCAA3C(changeSceneBtnInfo, resultList);
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
  }
LABEL_143:
  SummonResultComponent__setListByType(this, this->fields.dispType, v136);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B129F6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12293/*"SHOW_TALK"*/, method, v2);
    byte_4B129F6 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1BCAA3C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12293/*"SHOW_TALK"*/, 0LL);
  }
}


void __fastcall SummonResultComponent__setBeforeQpMana(
        SummonResultComponent_o *this,
        int32_t qp,
        int32_t mana,
        const MethodInfo *method)
{
  this->fields.summonBeforeQp = qp;
  this->fields.summonBeforeMana = mana;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__setCenter(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mWidget; // x0
  unsigned int klass; // w8
  float32x2_t *v5; // x20
  unsigned __int64 v6; // x21
  float *p_m_CachedPtr; // x22
  float v8; // s8
  float v9; // s9
  float v10; // s10
  int v11; // s0
  int v12; // s1
  int v13; // s2
  float v14; // s1
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
  if ( !mWidget
    || (mWidget = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))mWidget->klass[1]._1.klass)(
                                               mWidget,
                                               mWidget->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(mWidget, method);
  }
  klass = (unsigned int)mWidget[1].klass;
  v5 = (float32x2_t *)mWidget;
  v6 = 0LL;
  p_m_CachedPtr = (float *)&mWidget[1].fields.m_CachedPtr;
  do
  {
    if ( v6 >= klass )
      goto LABEL_12;
    mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
    if ( !mWidget )
      goto LABEL_11;
    v8 = *(p_m_CachedPtr - 2);
    v9 = *(p_m_CachedPtr - 1);
    v10 = *p_m_CachedPtr;
    mWidget = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mWidget, 0LL);
    if ( !mWidget )
      goto LABEL_11;
    v15.fields.x = v8;
    v15.fields.y = v9;
    v15.fields.z = v10;
    *(UnityEngine_Vector3_o *)&v11 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)mWidget,
                                       v15,
                                       0LL);
    if ( v6 >= v5[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v11;
    *((_DWORD *)p_m_CachedPtr - 1) = v12;
    *(_DWORD *)p_m_CachedPtr = v13;
    p_m_CachedPtr += 3;
    klass = v5[3].n64_u32[0];
    ++v6;
  }
  while ( v6 != 4 );
  if ( klass < 3 )
LABEL_12:
    sub_1BCAA44(mWidget, method);
  v14 = v5[5].n64_f32[0] + (float)((float)(v5[8].n64_f32[0] - v5[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v5[4],
                                                    vmul_f32(vsub_f32(v5[7], v5[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v14;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__setListByType(
        SummonResultComponent_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int32_t v3; // w19
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
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  int64_t closeInfo; // x0
  __int64 v70; // x1
  System_String_o *v71; // x0
  UILabel_o *formationBtnLabel; // x22
  System_String_o *v73; // x21
  UILabel_o *combineBtnLabel; // x22
  UILabel_o *sellBtnLabel; // x22
  struct SummonControl_o *summonCtrl; // x8
  struct SummonControl_o *v77; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *summonBtnLabel; // x22
  Il2CppObject *v81; // x0
  UILabel_o *v82; // x22
  long double v83; // q0
  int32_t gachaId; // w22
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  Il2CppObject *MasterData_object; // x23
  __int64 v89; // x1
  Il2CppObject *Master_object; // x24
  __int64 v91; // x1
  System_String_o *v92; // x22
  UILabel_o *v93; // x23
  Il2CppObject *v94; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  long double v97; // q0
  __int64 v98; // x8
  __int64 v99; // x0
  int v100; // w23
  int32_t v101; // w22
  bool v102; // w0
  Il2CppObject *v103; // x0
  __int64 v104; // x1
  Il2CppObject *v105; // x22
  UILabel_o *v106; // x22
  Il2CppObject *v107; // x0
  __int64 v108; // x1
  Il2CppObject *v109; // x21
  UserItemEntity_o *v110; // x0
  UILabel_o *v111; // x21
  __int64 v112; // x1
  struct UILabel_o *v113; // x21
  System_String_o *v114; // x1
  int32_t monitor_high; // w9
  UILabel_o *v116; // x21
  __int64 v117; // x1
  UILabel_o *v118; // x21
  UILabel_o *v119; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  UILabel_o *v121; // x22
  Il2CppObject *v122; // x0
  struct SummonControl_o *v123; // x8
  struct SummonControl_o *v124; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v126; // x0
  UnityEngine_GameObject_o *v127; // x0
  UnityEngine_GameObject_o *v128; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v130; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v139; // x0
  UnityEngine_Component_o *Parent; // x0
  __int64 v141; // x1
  SummonResultComponent_c *v142; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v149; // s11
  float v150; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v152; // s14
  int32_t gachaTime; // [xsp+4h] [xbp-BCh] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-B8h] BYREF
  Il2CppObject *v155; // [xsp+10h] [xbp-B0h] BYREF
  UserGachaEntity_o *entity; // [xsp+18h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+28h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v158; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v159; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v160; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v161; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v162; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v163; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v164; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v165; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v166; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v167; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v168; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v169; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v170; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v171; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v3 = type;
  if ( (byte_4B129EB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&type, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblUserMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaAppendMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserGachaMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v19, v20);
    sub_1BCA7E0(&DataManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v23, v24);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v25, v26);
    sub_1BCA7E0(&FSUtility_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___, v29, v30);
    sub_1BCA7E0(&int_TypeInfo, v31, v32);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v37, v38);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v43, v44);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46);
    sub_1BCA7E0(&SummonResultComponent_TypeInfo, v47, v48);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v49, v50);
    sub_1BCA7E0(&UserGachaMaster_TypeInfo, v51, v52);
    sub_1BCA7E0(&StringLiteral_12474/*"SUMMON_APPEND_END"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_12280/*"SHORT_SERVANT_FORMATION"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_12505/*"SUMMON_FREE_10_BTN"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_12285/*"SHORT_SERVANT_SELL"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_12509/*"SUMMON_LIMIT_OVER_BTN"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_12531/*"SUMMON_TICKET_END"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_12270/*"SHORT_SERVANT_COMBINE"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_3915/*"CONTINUE_SUMMON_BTN"*/, v67, v68);
    byte_4B129EB = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  v155 = 0LL;
  entity = 0LL;
  appendEnt = 0LL;
  if ( v3 == 1 )
  {
    closeInfo = (int64_t)this->fields.closeInfo;
    if ( !closeInfo )
      goto LABEL_173;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 0, 0LL);
    closeInfo = (int64_t)this->fields.changeSceneBtnInfo;
    if ( !closeInfo )
      goto LABEL_173;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v70);
    v71 = LocalizationManager__Get((System_String_o *)StringLiteral_3915/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v73 = v71;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12280/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_173;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12270/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_173;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12285/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_173;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    closeInfo = (int64_t)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_173;
    v159.fields.r = 1.0;
    v159.fields.g = 1.0;
    v159.fields.b = 1.0;
    v159.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v159, 0LL);
    closeInfo = (int64_t)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_173;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_173;
    v160.fields.r = 1.0;
    v160.fields.g = 1.0;
    v160.fields.b = 1.0;
    v160.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v160, 0LL);
    closeInfo = (int64_t)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_173;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_173;
    v161.fields.r = 1.0;
    v161.fields.g = 1.0;
    v161.fields.b = 1.0;
    v161.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v161, 0LL);
    closeInfo = (int64_t)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_173;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_173;
    v162.fields.r = 1.0;
    v162.fields.g = 1.0;
    v162.fields.b = 1.0;
    v162.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v162, 0LL);
    closeInfo = (int64_t)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_173;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_173;
    v163.fields.r = 1.0;
    v163.fields.g = 1.0;
    v163.fields.b = 1.0;
    v163.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v163, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_173;
    closeInfo = (int64_t)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_173;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v77 = this->fields.summonCtrl;
    if ( !v77 )
      goto LABEL_173;
    gachaParamData = v77->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_173;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
    closeInfo = (int64_t)System_String__Format(v73, v81, 0LL);
    if ( !summonBtnLabel )
      goto LABEL_173;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0LL);
    v82 = this->fields.summonBtnLabel;
    closeInfo = (int64_t)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type);
    if ( !v82 )
      goto LABEL_173;
    UILabel__SetCondensedScale(v82, SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE, 0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v85 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v85 + 309) & 1) == 0 )
          v85 = sub_1C1C6BC(v83);
        v86 = *(_QWORD *)(*(_QWORD *)(v85 + 192) + 16LL);
        if ( (*(_BYTE *)(v86 + 309) & 1) == 0 )
          v86 = sub_1C1C6BC(v83);
        closeInfo = **(_QWORD **)(v86 + 184);
        if ( !closeInfo )
          goto LABEL_173;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v87);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v89);
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !Master_object )
          goto LABEL_173;
        closeInfo = UserGachaMaster__TryGetEntity((UserGachaMaster_o *)Master_object, &entity, closeInfo, gachaId, 0LL);
        if ( !MasterData_object )
          goto LABEL_173;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v155,
          gachaId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12509/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !v155 )
          goto LABEL_173;
        v92 = (System_String_o *)closeInfo;
        if ( !LODWORD(v155[4].monitor) )
          goto LABEL_52;
        closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_173;
        closeInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v155 || !closeInfo )
          goto LABEL_173;
        closeInfo = UserGachaExtraCountMaster__getExtraCount(
                      (UserGachaExtraCountMaster_o *)closeInfo,
                      (int32_t)v155[4].monitor,
                      0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_52;
        v93 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
        closeInfo = (int64_t)System_String__Format(v73, v94, 0LL);
        if ( !v93 )
          goto LABEL_173;
        UILabel__set_text(v93, (System_String_o *)closeInfo, 0LL);
LABEL_52:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&type);
          closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_173;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v155,
                                &appendEnt,
                                0LL);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
              v92 = LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUMMON_APPEND_END"*/, 0LL);
            }
LABEL_112:
            closeInfo = (int64_t)this->fields.summonBtn;
            this->fields.isLimitOver = 1;
            if ( !closeInfo )
              goto LABEL_173;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
            closeInfo = (int64_t)this->fields.summonBtnSpr;
            if ( !closeInfo )
              goto LABEL_173;
            v168.fields.r = 0.35547;
            v168.fields.a = 1.0;
            v168.fields.g = 0.35547;
            v168.fields.b = 0.35547;
            UIWidget__set_color((UIWidget_o *)closeInfo, v168, 0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_173;
            v169.fields.r = 0.5;
            v169.fields.g = 0.5;
            v169.fields.b = 0.5;
            v169.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)closeInfo, v169, 0LL);
            closeInfo = (int64_t)SummonResultComponent_TypeInfo;
            v116 = this->fields.summonBtnLabel;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type);
            if ( !v116 )
              goto LABEL_173;
            UILabel__SetCondensedScale(
              v116,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_173;
            v114 = v92;
LABEL_120:
            UILabel__set_text((UILabel_o *)closeInfo, v114, 0LL);
            goto LABEL_142;
          }
        }
        else if ( entity )
        {
          if ( !v155 )
            goto LABEL_173;
          monitor_high = HIDWORD(v155[5].monitor);
          if ( monitor_high >= 1 && entity->fields.num >= monitor_high )
            goto LABEL_112;
        }
LABEL_108:
        closeInfo = (int64_t)this->fields.summonBtn;
        if ( !closeInfo )
          goto LABEL_173;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_173;
        v166.fields.r = 1.0;
        v166.fields.g = 1.0;
        v166.fields.b = 1.0;
        v166.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v166, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_173;
        v167.fields.r = 1.0;
        v167.fields.g = 1.0;
        v167.fields.b = 1.0;
        v167.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v167, 0LL);
LABEL_142:
        v123 = this->fields.summonCtrl;
        if ( v123 )
        {
          closeInfo = (int64_t)v123->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
            v124 = this->fields.summonCtrl;
            if ( v124 )
            {
              v124->fields.isResult = 1;
              if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, *(_QWORD *)&type);
              if ( TutorialFlag__IsProgressDone(2, 0LL) )
              {
                closeInfo = (int64_t)this->fields.formationBtnLabel;
                if ( closeInfo )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                  closeInfo = (int64_t)GameObjectExtensions__GetParent(gameObject, 0LL);
                  if ( closeInfo )
                  {
                    closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                           (UnityEngine_Component_o *)closeInfo,
                                           (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                      closeInfo = (int64_t)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v126 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                        closeInfo = (int64_t)GameObjectExtensions__GetParent(v126, 0LL);
                        if ( closeInfo )
                        {
                          closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)closeInfo,
                                                 (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                            closeInfo = (int64_t)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                              closeInfo = (int64_t)GameObjectExtensions__GetParent(v127, 0LL);
                              if ( closeInfo )
                              {
                                closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)closeInfo,
                                                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                  closeInfo = (int64_t)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v128 = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)closeInfo,
                                             0LL);
                                    closeInfo = (int64_t)GameObjectExtensions__GetParent(v128, 0LL);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)closeInfo,
                                                             (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                      if ( closeInfo )
                                      {
                                        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                        break;
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
              else
              {
                touchBlocker = (Il2CppObject *)this->fields.touchBlocker;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
                v130 = UnityEngine_Object__Instantiate_object_(
                         touchBlocker,
                         (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = (struct UnityEngine_GameObject_o *)v130;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&this->fields.blocker,
                  (int64_t)v130,
                  v132,
                  v133,
                  v134,
                  v135,
                  v136,
                  v137);
                blocker = this->fields.blocker;
                v139 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v139, 0LL);
                GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                v142 = SummonResultComponent_TypeInfo;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v141);
                  v142 = SummonResultComponent_TypeInfo;
                }
                static_fields = v142->static_fields;
                m_XMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
                m_YMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
                m_Width = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
                m_Height = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v141);
                OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                closeInfo = (int64_t)*p_blocker;
                if ( *p_blocker )
                {
                  v149 = OffsetX;
                  closeInfo = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)closeInfo,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    v150 = m_XMin - v149;
                    v170.fields.m_XMin = v150;
                    v170.fields.m_YMin = m_YMin;
                    v170.fields.m_Width = m_Width;
                    v170.fields.m_Height = m_Height;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v170, 30, 0LL);
                    closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                      v152 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                      closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        v158.fields.x = TutorialBackArrowPos.fields.x - v152;
                        v158.fields.y = TutorialBackArrowPos.fields.y;
                        v171.fields.m_XMin = v150;
                        v171.fields.m_YMin = m_YMin;
                        v171.fields.m_Width = m_Width;
                        v171.fields.m_Height = m_Height;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v158,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v171,
                          0LL,
                          0LL);
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_173;
      case 3:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        v98 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v98 + 309) & 1) == 0 )
          v98 = sub_1C1C6BC(v97);
        v99 = *(_QWORD *)(*(_QWORD *)(v98 + 192) + 16LL);
        if ( (*(_BYTE *)(v99 + 309) & 1) == 0 )
          v99 = sub_1C1C6BC(v97);
        closeInfo = **(_QWORD **)(v99 + 184);
        if ( !closeInfo )
          goto LABEL_173;
        closeInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame )
          goto LABEL_173;
        if ( !closeInfo )
          goto LABEL_173;
        closeInfo = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !closeInfo )
          goto LABEL_173;
        v100 = *(_DWORD *)(closeInfo + 24);
        v101 = gachaParamData->fields.gachaId;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, *(_QWORD *)&type);
        v102 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(v101, &maxNum[1], maxNum, 0LL);
        if ( maxNum[1] > 0 || v102 )
        {
          closeInfo = (int64_t)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_173;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v118 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v117);
          closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12505/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v118 )
            goto LABEL_173;
          UILabel__set_text(v118, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v119 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type);
          if ( !v119 )
            goto LABEL_173;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
        }
        else
        {
          *(_QWORD *)&type = (unsigned int)gachaParamData->fields.gachaTime;
          if ( type == 1 )
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_173;
            type = 1;
          }
          else
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( v100 <= 1999 )
            {
              if ( !closeInfo )
                goto LABEL_173;
              if ( v100 < 400 )
                type = 1;
              else
                type = v100 / 200;
            }
            else if ( !closeInfo )
            {
              goto LABEL_173;
            }
          }
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, type, 3, 0LL);
          v121 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
          closeInfo = (int64_t)System_String__Format(v73, v122, 0LL);
          if ( !v121 )
            goto LABEL_173;
          UILabel__set_text(v121, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v119 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type);
          if ( !v119 )
LABEL_173:
            sub_1BCAA3C(closeInfo, *(_QWORD *)&type);
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
        }
        UILabel__SetCondensedScale(v119, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0LL);
        goto LABEL_142;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&type);
        closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_173;
        v103 = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                 gachaParamData->fields.gachaId,
                 (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v103 )
          goto LABEL_87;
        v105 = v103;
        if ( !LODWORD(v103[4].monitor) )
          goto LABEL_87;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v104);
        closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_173;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v105[4].monitor,
               0LL) != 9 )
          goto LABEL_87;
        v106 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
        closeInfo = (int64_t)System_String__Format(v73, v107, 0LL);
        if ( !v106 )
          goto LABEL_173;
        UILabel__set_text(v106, (System_String_o *)closeInfo, 0LL);
LABEL_87:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v104);
        v109 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v108);
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !v109 )
          goto LABEL_173;
        v110 = UserItemMaster__GetEntity((UserItemMaster_o *)v109, closeInfo, gachaParamData->fields.ticketItemId, 0LL);
        if ( v110 && v110->fields.num > 0 )
          goto LABEL_108;
        closeInfo = (int64_t)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_173;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_173;
        v164.fields.r = 0.35547;
        v164.fields.a = 1.0;
        v164.fields.g = 0.35547;
        v164.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v164, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_173;
        v165.fields.r = 0.5;
        v165.fields.g = 0.5;
        v165.fields.b = 0.5;
        v165.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v165, 0LL);
        closeInfo = (int64_t)SummonResultComponent_TypeInfo;
        v111 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type);
        if ( !v111 )
          goto LABEL_173;
        UILabel__SetCondensedScale(
          v111,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0LL);
        v113 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v112);
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12531/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v113 )
          goto LABEL_173;
        v114 = (System_String_o *)closeInfo;
        closeInfo = (int64_t)v113;
        goto LABEL_120;
      default:
        goto LABEL_142;
    }
  }
  this->fields.dispType = v3;
  SummonResultComponent__setSvtNum(this, *(const MethodInfo **)&type);
}


void __fastcall SummonResultComponent__setSvtNum(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  DataManager_o *SelfUserGame; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int klass; // w10
  BalanceConfig_c *v18; // x0
  __int64 v19; // x1
  UILabel_o *svtTitleLb; // x20
  UILabel_o *svtNumLb; // x20
  UILabel_o *svtMaxLb; // x20
  UILabel_o *svtEqTitleLb; // x20
  UILabel_o *svtEqNumLb; // x20
  UILabel_o *svtEqMaxLb; // x20
  UILabel_o *CcNumLb; // x20
  UILabel_o *CcMaxLb; // x19
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t servantSum; // [xsp+10h] [xbp-30h] BYREF
  int32_t CommandCodeFrameMax; // [xsp+14h] [xbp-2Ch] BYREF
  int klass_high; // [xsp+18h] [xbp-28h] BYREF
  int v32; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B129F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_7222/*"HAVE_SVT_NUM_TITLE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_7221/*"HAVE_SVTEQ_NUM_TITLE"*/, v12, v13);
    byte_4B129F1 = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_23;
  klass = (int)SelfUserGame[1].klass;
  klass_high = HIDWORD(SelfUserGame[1].klass);
  v32 = klass;
  if ( !byte_4B112D7 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v15, v16);
    byte_4B112D7 = 1;
  }
  v18 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v15);
    v18 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v18->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7222/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
  if ( !svtTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtNumLb = this->fields.svtNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantSum, 0LL);
  if ( !svtNumLb )
    goto LABEL_23;
  UILabel__set_text(svtNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtMaxLb = this->fields.svtMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&v32, 0LL);
  if ( !svtMaxLb )
    goto LABEL_23;
  UILabel__set_text(svtMaxLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqTitleLb = this->fields.svtEqTitleLb;
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7221/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
  if ( !svtEqTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtEqTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqNumLb = this->fields.svtEqNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantEquipSum[1], 0LL);
  if ( !svtEqNumLb )
    goto LABEL_23;
  UILabel__set_text(svtEqNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqMaxLb = this->fields.svtEqMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&klass_high, 0LL);
  if ( !svtEqMaxLb
    || (UILabel__set_text(svtEqMaxLb, (System_String_o *)SelfUserGame, 0LL),
        CcNumLb = this->fields.CcNumLb,
        SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)servantEquipSum, 0LL),
        !CcNumLb)
    || (UILabel__set_text(CcNumLb, (System_String_o *)SelfUserGame, 0LL),
        CcMaxLb = this->fields.CcMaxLb,
        SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&CommandCodeFrameMax, 0LL),
        !CcMaxLb) )
  {
LABEL_23:
    sub_1BCAA3C(SelfUserGame, v15);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall SummonResultComponent__showResCcDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  AvalonSceneManager_c *v27; // x8
  CommonUI_o *v28; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_4B129F3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, usrSvtId, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SummonResultComponent___c__DisplayClass70_0__showResCcDetail_b__0__, v10, v11);
    sub_1BCA7E0(&SummonResultComponent___c__DisplayClass70_0_TypeInfo, v12, v13);
    byte_4B129F3 = 1;
  }
  v14 = sub_1BCAA2C(SummonResultComponent___c__DisplayClass70_0_TypeInfo, usrSvtId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_QWORD *)(v14 + 24) = this;
  *(_QWORD *)(v14 + 16) = usrSvtId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  v28 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v24);
    v27 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v14,
    Method_SummonResultComponent___c__DisplayClass70_0__showResCcDetail_b__0__,
    0LL);
  if ( !v28 )
LABEL_8:
    sub_1BCAA3C(v15, v16);
  CommonUI__maskFadeout(v28, 1, DEFAULT_FADE_TIME, v30, 0LL);
}


void __fastcall SummonResultComponent__showResSvtDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  AvalonSceneManager_c *v27; // x8
  CommonUI_o *v28; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21

  if ( (byte_4B129F2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, usrSvtId, method);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SummonResultComponent___c__DisplayClass69_0__showResSvtDetail_b__0__, v10, v11);
    sub_1BCA7E0(&SummonResultComponent___c__DisplayClass69_0_TypeInfo, v12, v13);
    byte_4B129F2 = 1;
  }
  v14 = sub_1BCAA2C(SummonResultComponent___c__DisplayClass69_0_TypeInfo, usrSvtId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_8;
  *(_QWORD *)(v14 + 24) = this;
  *(_QWORD *)(v14 + 16) = usrSvtId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = AvalonSceneManager_TypeInfo;
  v28 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v24);
    v27 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v27->static_fields->DEFAULT_FADE_TIME;
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v14,
    Method_SummonResultComponent___c__DisplayClass69_0__showResSvtDetail_b__0__,
    0LL);
  if ( !v28 )
LABEL_8:
    sub_1BCAA3C(v15, v16);
  CommonUI__maskFadeout(v28, 1, DEFAULT_FADE_TIME, v30, 0LL);
}


void __fastcall SummonResultComponent___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B129FA & 1) == 0 )
  {
    sub_1BCA7E0(&SummonResultComponent___c_TypeInfo, v1, v2);
    byte_4B129FA = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SummonResultComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SummonResultComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SummonResultComponent___c___ctor(SummonResultComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c___initGachaResultList_b__61_0(
        SummonResultComponent___c_o *this,
        ItemIconComponent_o *elm,
        const MethodInfo *method)
{
  if ( !elm
    || (ItemIconComponent__Clear(elm, 0LL),
        (this = (SummonResultComponent___c_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)elm,
                                                 0LL)) == 0LL) )
  {
    sub_1BCAA3C(this, elm);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass69_0___ctor(
        SummonResultComponent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass69_0___showResSvtDetail_b__0(
        SummonResultComponent___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  int64_t usrSvtId; // x20
  Il2CppObject *_4__this; // x22
  CommonUI_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  ServantStatusDialog_EndDelegate_o *v17; // x21
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  CommonUI_o *v20; // x19

  if ( (byte_4B129FB & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SummonResultComponent_DialogCallBack__, v8, v9);
    byte_4B129FB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v13 = (CommonUI_o *)Instance;
  v17 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v14, v15, v16);
  ServantStatusDialog_EndDelegate___ctor(v17, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v13 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_30775636(v13, 8, usrSvtId, v17, 0LL, 0LL);
  v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (CommonUI_o *)v18;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v19);
  if ( !v20 )
LABEL_8:
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadein(v20, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass70_0___ctor(
        SummonResultComponent___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass70_0___showResCcDetail_b__0(
        SummonResultComponent___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
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
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v19; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  ServantStatusDialog_EndDelegate_o *v25; // x21
  CommonUI_o *v26; // x19

  if ( (byte_4B129FC & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v6, v7);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SummonResultComponent_DialogCallBack__, v14, v15);
    byte_4B129FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v21 = (CommonUI_o *)v19;
  v25 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v22, v23, v24);
  ServantStatusDialog_EndDelegate___ctor(v25, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v21 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_30778960(v21, 0, (UserCommandCodeEntity_o *)Entity, v25, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v17);
  if ( !v26 )
LABEL_10:
    sub_1BCAA3C(Instance, v17);
  CommonUI__maskFadein(v26, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}