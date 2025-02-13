void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v2; // x8

  if ( (byte_4BD8CCC & 1) == 0 )
  {
    sub_1C21E38(&SummonResultComponent_TypeInfo);
    byte_4BD8CCC = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_BFDDF0;
  v2 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v2->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_BFE700;
  *(_OWORD *)&v2->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = xmmword_BFE050;
  *(_OWORD *)&v2->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = xmmword_BFDA10;
  *(_OWORD *)&v2->SMALL_FONT_SIZE = xmmword_BFE7E0;
}


void __fastcall SummonResultComponent___ctor(SummonResultComponent_o *this, const MethodInfo *method)
{
  this->fields.dispType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultComponent__CheckLimitOver(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  _QWORD *v4; // x0
  int32_t v5; // w19
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4BD8CC9 & 1) == 0 )
  {
    sub_1C21E38(&Method_SummonResultComponent_CheckLimitOver__);
    sub_1C21E38(&StringLiteral_5608/*"END_SUMMON"*/);
    sub_1C21E38(&StringLiteral_8437/*"LIMIT_OVER"*/);
    byte_4BD8CC9 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8437/*"LIMIT_OVER"*/, 0LL);
    v4 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_SummonResultComponent_CheckLimitOver__);
    v5 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5608/*"END_SUMMON"*/, 0LL);
    v4 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C21E50(Method_SummonResultComponent_CheckLimitOver__);
    v5 = 0;
  }
  v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0, 0LL);
}


void __fastcall SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  PartyOrganizationUtility_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BD8CC1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8CC1 = 1;
  }
  blocker = (UnityEngine_Object_o *)this->fields.blocker;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blocker, 0LL, 0LL) )
  {
    p_blocker = (PartyOrganizationUtility_o *)&this->fields.blocker;
    klass = (UnityEngine_Object_o *)p_blocker->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_1C21DDC(p_blocker, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall SummonResultComponent__DialogCallBack(
        SummonResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BD8CC6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonResultComponent__DialogCallBack_b__79_0__);
    byte_4BD8CC6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__79_0__, 0LL);
  if ( !v6 )
    sub_1C22094(v9, v10);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0LL);
}


void __fastcall SummonResultComponent__EndCloseDialogCallBack(SummonResultComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonResultComponent__SetActive(SummonResultComponent_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, active, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.scrollBar, 0LL)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1C22094(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, active, 0LL);
}


void __fastcall SummonResultComponent__SetBonusGiftDisplay(
        SummonResultComponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *giftIds,
        int32_t giftResultType,
        int32_t giftBonusType,
        bool adjustTitleLabel,
        const MethodInfo *method)
{
  SummonResultComponent_o *v10; // x19
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x8
  bool v13; // zf
  System_Collections_Generic_List_object__o *v14; // x20
  struct ItemIconComponent_array *extraGiftIconComponents; // x8
  UILabel_o *extraGiftMsg2Lb; // x20
  struct ItemIconComponent_array *v17; // x8
  ItemIconComponent_o *v18; // x8
  UIWidget_o *iconSprite; // x23
  struct ItemIconComponent_array *v20; // x8
  ItemIconComponent_o *v21; // x8
  struct ItemIconComponent_array *v22; // x8
  struct ItemIconComponent_array *v23; // x8
  ItemIconComponent_o *v24; // x23
  int32_t summonBeforeMana; // w26
  BalanceConfig_c *v26; // x0
  int32_t ManaMax; // w23
  int32_t v28; // w26
  UnityEngine_GameObject_o *v29; // x0
  SummonResultComponent_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x21
  UILabel_o *v32; // x21
  UILabel_o *v33; // x21
  System_String_o *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int m_CancellationTokenSource_high; // w8
  Il2CppObject *v39; // x0
  UILabel_o *v40; // x20
  const MethodInfo *v41; // x1
  struct ItemIconComponent_array *v42; // x8
  __int64 v43; // x24
  int max_length; // w9
  unsigned int v45; // w21
  UIWidget_o *backImg; // x22
  struct ItemIconComponent_array *v47; // x8
  __int64 v48; // x8
  struct ItemIconComponent_array *v49; // x8
  ItemIconComponent_o *v50; // x22
  struct ItemIconComponent_array *v51; // x8
  bool v52; // w1
  struct ItemIconComponent_array *v53; // x8
  UnityEngine_GameObject_o *v54; // x0
  SummonResultComponent_c *v55; // x8
  UnityEngine_GameObject_o *v56; // x22
  struct SummonResultComponent_StaticFields *v57; // x8
  __int64 v58; // x9
  UILabel_o *v59; // x21
  UILabel_o *v60; // x21
  System_String_o *v61; // x22
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int *v65; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SummonResultComponent_c *v67; // x8
  int32_t size; // w21
  UnityEngine_GameObject_o *v69; // x20
  struct SummonResultComponent_StaticFields *static_fields; // x8
  __int64 v71; // x9
  UILabel_o *extraGiftTitleLb; // x20
  System_String_o *v73; // x21
  long double inited; // q0
  _QWORD *v75; // x22
  __int64 v76; // x8
  __int64 v77; // x0
  __int64 v78; // x0
  System_String_o *v79; // x0
  long double v80; // q0
  _QWORD *v81; // x22
  System_String_o *v82; // x21
  __int64 v83; // x8
  __int64 v84; // x0
  __int64 v85; // x0
  const MethodInfo *v86; // x1
  UnityEngine_GameObject_o *v87; // x0
  SummonResultComponent_c *v88; // x8
  UnityEngine_GameObject_o *v89; // x22
  struct SummonResultComponent_StaticFields *v90; // x8
  __int64 v91; // x9
  UILabel_o *v92; // x21
  System_String_o *v93; // x22
  long double v94; // q0
  _QWORD *v95; // x23
  __int64 v96; // x8
  __int64 v97; // x0
  __int64 v98; // x0
  Il2CppObject *v99; // x0
  int v100; // [xsp+Ch] [xbp-54h] BYREF
  int v101; // [xsp+18h] [xbp-48h] BYREF
  int v102; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4BD8CBE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_object___);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&SummonResultComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_12572/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/);
    sub_1C21E38(&StringLiteral_12574/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/);
    sub_1C21E38(&StringLiteral_12576/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/);
    sub_1C21E38(&StringLiteral_12587/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/);
    sub_1C21E38(&StringLiteral_12588/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_1C21E38(&StringLiteral_12573/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/);
    sub_1C21E38(&StringLiteral_12586/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/);
    this = (SummonResultComponent_o *)sub_1C21E38(&StringLiteral_12575/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/);
    byte_4BD8CBE = 1;
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)GiftMaster__GetGiftListByIds((GiftMaster_o *)this, giftIds, 0LL);
    v13 = giftBonusType == 2;
    v14 = (System_Collections_Generic_List_object__o *)this;
    if ( v13 )
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
        v42 = v10->fields.extraGiftIconComponents;
        if ( !v42 )
          goto LABEL_156;
        v43 = 4LL;
        while ( 1 )
        {
          max_length = v42->max_length;
          v45 = v43 - 4;
          if ( (int)v43 - 4 >= max_length )
            break;
          if ( v45 >= max_length )
            goto LABEL_157;
          this = (SummonResultComponent_o *)*((_QWORD *)&v42->obj.klass + v43);
          if ( !this )
            goto LABEL_156;
          if ( (signed int)v45 >= v14->fields._size )
          {
            ItemIconComponent__Clear((ItemIconComponent_o *)this, 0LL);
            v53 = v10->fields.extraGiftIconComponents;
            if ( !v53 )
              goto LABEL_156;
            if ( v45 >= v53->max_length )
              goto LABEL_157;
            this = (SummonResultComponent_o *)*((_QWORD *)&v53->obj.klass + v43);
            if ( !this )
              goto LABEL_156;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              goto LABEL_156;
            v52 = 0;
          }
          else
          {
            backImg = (UIWidget_o *)this->fields.backImg;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            if ( !backImg )
              goto LABEL_156;
            UIWidget__set_width(
              backImg,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0LL);
            v47 = v10->fields.extraGiftIconComponents;
            if ( !v47 )
              goto LABEL_156;
            if ( v45 >= v47->max_length )
              goto LABEL_157;
            v48 = *((_QWORD *)&v47->obj.klass + v43);
            if ( !v48 )
              goto LABEL_156;
            this = *(SummonResultComponent_o **)(v48 + 40);
            if ( !this )
              goto LABEL_156;
            UIWidget__set_height(
              (UIWidget_o *)this,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0LL);
            v49 = v10->fields.extraGiftIconComponents;
            if ( !v49 )
              goto LABEL_156;
            if ( v45 >= v49->max_length )
              goto LABEL_157;
            v50 = (ItemIconComponent_o *)*((_QWORD *)&v49->obj.klass + v43);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v14,
                                                v45,
                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !v50 )
              goto LABEL_156;
            ItemIconComponent__SetGift(v50, (GiftEntity_o *)this, -1, 0, 0LL);
            v51 = v10->fields.extraGiftIconComponents;
            if ( !v51 )
              goto LABEL_156;
            if ( v45 >= v51->max_length )
              goto LABEL_157;
            this = (SummonResultComponent_o *)*((_QWORD *)&v51->obj.klass + v43);
            if ( !this )
              goto LABEL_156;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              goto LABEL_156;
            v52 = 1;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v52, 0LL);
          v42 = v10->fields.extraGiftIconComponents;
          ++v43;
          if ( !v42 )
            goto LABEL_156;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_156;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v67 = SummonResultComponent_TypeInfo;
        size = v14->fields._size;
        v69 = gameObject;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v67 = SummonResultComponent_TypeInfo;
        }
        static_fields = v67->static_fields;
        v71 = 48LL;
        if ( size == 1 )
          v71 = 44LL;
        GameObjectExtensions__SetLocalPositionX(
          v69,
          (float)*(int *)((char *)&static_fields->TUTORIAL_BACK_ARROW_WAY + v71),
          0LL);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12587/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0LL);
        v75 = Method_System_Array_Empty_object___;
        v76 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v76 )
        {
          sub_1C73D70(Method_System_Array_Empty_object___);
          v76 = v75[7];
        }
        v77 = *(_QWORD *)(v76 + 16);
        if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
          v77 = sub_1C73D14(inited);
        if ( !*(_DWORD *)(v77 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v77);
        v78 = *(_QWORD *)(v75[7] + 16LL);
        if ( (*(_BYTE *)(v78 + 309) & 1) == 0 )
          v78 = sub_1C73D14(inited);
        this = (SummonResultComponent_o *)System_String__Format_63129984(
                                            v73,
                                            **(System_Object_array ***)(v78 + 184),
                                            0LL);
        if ( !extraGiftTitleLb )
          goto LABEL_156;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0LL);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_12586/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0LL);
        v81 = Method_System_Array_Empty_object___;
        v82 = v79;
        v83 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v83 )
        {
          sub_1C73D70(Method_System_Array_Empty_object___);
          v83 = v81[7];
        }
        v84 = *(_QWORD *)(v83 + 16);
        if ( (*(_BYTE *)(v84 + 309) & 1) == 0 )
          v84 = sub_1C73D14(v80);
        if ( !*(_DWORD *)(v84 + 224) )
          v80 = j_il2cpp_runtime_class_init_0(v84);
        v85 = *(_QWORD *)(v81[7] + 16LL);
        if ( (*(_BYTE *)(v85 + 309) & 1) == 0 )
          v85 = sub_1C73D14(v80);
        this = (SummonResultComponent_o *)System_String__Format_63129984(
                                            v82,
                                            **(System_Object_array ***)(v85 + 184),
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
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12588/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
        if ( !extraGiftMsg2Lb )
          goto LABEL_156;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0LL);
      SummonResultComponent__SetSpecialGiftPosition(v10, v86);
      return;
    }
    v17 = v10->fields.extraGiftIconComponents;
    if ( !v17 )
      goto LABEL_156;
    if ( !v17->max_length )
      goto LABEL_157;
    v18 = v17->m_Items[0];
    if ( !v18 )
      goto LABEL_156;
    iconSprite = (UIWidget_o *)v18->fields.iconSprite;
    this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !iconSprite )
      goto LABEL_156;
    UIWidget__set_width(iconSprite, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0LL);
    v20 = v10->fields.extraGiftIconComponents;
    if ( !v20 )
      goto LABEL_156;
    if ( !v20->max_length )
      goto LABEL_157;
    v21 = v20->m_Items[0];
    if ( !v21 )
      goto LABEL_156;
    this = (SummonResultComponent_o *)v21->fields.iconSprite;
    if ( !this )
      goto LABEL_156;
    UIWidget__set_height((UIWidget_o *)this, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0LL);
    v22 = v10->fields.extraGiftIconComponents;
    if ( !v22 )
      goto LABEL_156;
    if ( !v22->max_length )
      goto LABEL_157;
    this = (SummonResultComponent_o *)v22->m_Items[0];
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
    v23 = v10->fields.extraGiftIconComponents;
    if ( !v23 )
      goto LABEL_156;
    if ( !v23->max_length )
LABEL_157:
      sub_1C2209C(this, giftIds);
    if ( !v14 )
      goto LABEL_156;
    v24 = v23->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v14,
                                        0,
                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !v24 )
      goto LABEL_156;
    ItemIconComponent__SetGift(v24, (GiftEntity_o *)this, -1, 0, 0LL);
    if ( giftResultType == 3 )
    {
      summonBeforeMana = v10->fields.summonBeforeMana;
      v26 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      ManaMax = v26->static_fields->ManaMax;
      if ( summonBeforeMana < ManaMax )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( this )
        {
          v28 = v10->fields.summonBeforeMana;
          v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v30 = SummonResultComponent_TypeInfo;
          v31 = v29;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            v30 = SummonResultComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(
            v31,
            (float)v30->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME,
            0LL);
          v32 = v10->fields.extraGiftTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12576/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
          if ( v32 )
          {
            UILabel__set_text(v32, (System_String_o *)this, 0LL);
            v33 = v10->fields.extraGiftMsg2Lb;
            v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12574/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v14,
                                                0,
                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v28;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v28 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v14,
                                                    0,
                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_156;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v102 = m_CancellationTokenSource_high;
              v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v35, v36, v37);
              this = (SummonResultComponent_o *)System_String__Format(v34, v39, 0LL);
              if ( v33 )
              {
                UILabel__set_text(v33, (System_String_o *)this, 0LL);
                this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
                v40 = v10->fields.extraGiftTitleLb;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                if ( v40 )
                {
                  UILabel__set_fontSize(v40, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0LL);
                  this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
                  if ( this )
                  {
                    UILabel__set_fontSize(
                      (UILabel_o *)this,
                      SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE,
                      0LL);
LABEL_154:
                    SummonResultComponent__SetBonusGiftPosition(v10, v41);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_156:
        sub_1C22094(this, giftIds);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v88 = SummonResultComponent_TypeInfo;
      v89 = v87;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v88 = SummonResultComponent_TypeInfo;
      }
      v90 = v88->static_fields;
      v91 = 52LL;
      if ( adjustTitleLabel )
        v91 = 56LL;
      GameObjectExtensions__SetLocalPositionX(v89, (float)*(int *)((char *)&v90->TUTORIAL_BACK_ARROW_WAY + v91), 0LL);
      v92 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_12575/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v95 = Method_System_Array_Empty_object___;
      v96 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v96 )
      {
        sub_1C73D70(Method_System_Array_Empty_object___);
        v96 = v95[7];
      }
      v97 = *(_QWORD *)(v96 + 16);
      if ( (*(_BYTE *)(v97 + 309) & 1) == 0 )
        v97 = sub_1C73D14(v94);
      if ( !*(_DWORD *)(v97 + 224) )
        v94 = j_il2cpp_runtime_class_init_0(v97);
      v98 = *(_QWORD *)(v95[7] + 16LL);
      if ( (*(_BYTE *)(v98 + 309) & 1) == 0 )
        v98 = sub_1C73D14(v94);
      this = (SummonResultComponent_o *)System_String__Format_63129984(v93, **(System_Object_array ***)(v98 + 184), 0LL);
      if ( !v92 )
        goto LABEL_156;
      UILabel__set_text(v92, (System_String_o *)this, 0LL);
      v60 = v10->fields.extraGiftMsg2Lb;
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12572/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v14,
                                          0,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v65 = &v101;
      v101 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    else
    {
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v55 = SummonResultComponent_TypeInfo;
      v56 = v54;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v55 = SummonResultComponent_TypeInfo;
      }
      v57 = v55->static_fields;
      v58 = 36LL;
      if ( adjustTitleLabel )
        v58 = 40LL;
      GameObjectExtensions__SetLocalPositionX(v56, (float)*(int *)((char *)&v57->TUTORIAL_BACK_ARROW_WAY + v58), 0LL);
      v59 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12576/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      if ( !v59 )
        goto LABEL_156;
      UILabel__set_text(v59, (System_String_o *)this, 0LL);
      v60 = v10->fields.extraGiftMsg2Lb;
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12573/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v14,
                                          0,
                                          (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v65 = &v100;
      v100 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v65, v62, v63, v64);
    this = (SummonResultComponent_o *)System_String__Format(v61, v99, 0LL);
    if ( v60 )
    {
      UILabel__set_text(v60, (System_String_o *)this, 0LL);
      goto LABEL_154;
    }
    goto LABEL_156;
  }
}


void __fastcall SummonResultComponent__SetBonusGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v6; // x8
  struct ItemIconComponent_array *extraGiftIconComponents; // x21
  int mWidth; // s1
  int max_length; // w8
  float v10; // s8
  unsigned int v11; // w22
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x20
  __int64 v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t v18; // w20
  UIWidget_o *v19; // x20
  struct UILabel_o *v20; // x8

  if ( (byte_4BD8CBF & 1) == 0 )
  {
    sub_1C21E38(&SummonResultComponent_TypeInfo);
    byte_4BD8CBF = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v6 = this->fields.extraGiftTitleLb;
  if ( !v6 )
    goto LABEL_27;
  extraGiftIconComponents = this->fields.extraGiftIconComponents;
  if ( !extraGiftIconComponents )
    goto LABEL_27;
  mWidth = v6->fields.mWidth;
  max_length = extraGiftIconComponents->max_length;
  v10 = (float)(LocalPositionX + (float)((float)mWidth * 0.5)) + -1.0;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C2209C(extraGiftTitleLb, method);
      v12 = &extraGiftIconComponents->obj.klass + (int)v11;
      v13 = v12[4];
      if ( !v13 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v12[4],
                                                      0LL);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0LL);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v14 = *(_QWORD *)&v13->_1.byval_arg.bits;
        if ( !v14 )
          break;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
        GameObjectExtensions__SetLocalPositionX(v15, v10 + (float)*(int *)(v14 + 168), 0LL);
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
        v10 = GameObjectExtensions__GetLocalPositionX(v16, 0LL);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1C22094(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0LL);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v18 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v18 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 72LL) )
  {
    v19 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
    if ( !v19 )
      goto LABEL_27;
    UIWidget__set_width(v19, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  v20 = this->fields.extraGiftMsg2Lb;
  if ( !v20 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v10 + 1.0) + (float)((float)v20->fields.mWidth * 0.5),
    0LL);
}


void __fastcall SummonResultComponent__SetOldResultData(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        bool *autoSale,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Object; // x0
  __int64 v7; // x1
  signed int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellWidth; // s10
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x28
  int maxPerLine; // s11
  float v14; // s9
  System_Collections_Generic_List_int__o *v15; // x23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BalanceConfig_c *v22; // x0
  signed int v23; // w8
  __int64 v24; // x22
  void **v25; // x8
  GachaInfos_o *v26; // x24
  UnityEngine_GameObject_o *targetGo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v29; // x25
  UnityEngine_Transform_o *v30; // x26
  const MethodInfo *v31; // x2
  int32_t objectId; // w27
  bool v33; // w26
  bool IsCommandCode; // w27
  SummonResultInfoComponent_ClickDelegate_o *v35; // x0
  __int64 *v36; // x8
  SummonResultInfoComponent_ClickDelegate_o *v37; // x27
  int32_t sellQp; // w25
  int32_t summonBeforeQp; // w26
  int QpMax; // w8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 klass_low; // x10
  float v47; // s12
  float v48; // s11
  float v49; // s8
  float v50; // s3
  float v51; // s0
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+8h] [xbp-98h]
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8CCB & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&Method_SummonResultComponent_showResCcDetail__);
    sub_1C21E38(&Method_SummonResultComponent_showResSvtDetail__);
    byte_4BD8CCB = 1;
  }
  SummonResultComponent__setCenter(this, (const MethodInfo *)resultList);
  if ( !resultList )
    goto LABEL_62;
  max_length = resultList->max_length;
  fstGrid = this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_62;
  cellWidth = fstGrid->fields.cellWidth;
  p_scdGrid = &this->fields.scdGrid;
  scdGrid = this->fields.scdGrid;
  if ( !scdGrid )
    goto LABEL_62;
  maxPerLine = fstGrid->fields.maxPerLine;
  v14 = scdGrid->fields.cellWidth;
  *autoSale = 0;
  v15 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v15;
  p_befSvtList = &this->fields.befSvtList;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v23 = resultList->max_length;
  if ( v23 >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v24 >= v23 )
        sub_1C2209C(v22, v7);
      v25 = (void **)((unsigned int)v24 >= 6 ? &this->fields.scdGrid : &this->fields.fstGrid);
      Object = (UnityEngine_Component_o *)*v25;
      if ( !*v25 )
        break;
      v26 = resultList->m_Items[v24];
      targetGo = this->fields.targetGo;
      transform = UnityEngine_Component__get_transform(Object, 0LL);
      Object = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                            (BaseMonoBehaviour_o *)this,
                                            targetGo,
                                            transform,
                                            0LL,
                                            0LL);
      if ( !Object )
        break;
      v29 = (UnityEngine_GameObject_o *)Object;
      Object = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object, 0LL);
      v30 = (UnityEngine_Transform_o *)Object;
      if ( !byte_4BD6BB6 )
      {
        Object = (UnityEngine_Component_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB6 = 1;
      }
      if ( !v30 )
        break;
      UnityEngine_Transform__set_localScale(v30, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( !v26 )
        break;
      if ( v26->fields.isNew
        && (objectId = v26->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v31)) )
      {
        Object = (UnityEngine_Component_o *)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        v44 = *(_QWORD *)&Object->fields.m_CachedPtr;
        v45 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(Object[1].klass);
        if ( !v44 )
          break;
        klass_low = SLODWORD(Object[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v44 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Object,
            objectId,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          v33 = 0;
        }
        else
        {
          v33 = 0;
          LODWORD(Object[1].klass) = klass_low + 1;
          *(_DWORD *)(v44 + 4 * klass_low + 32) = objectId;
        }
      }
      else
      {
        v33 = 1;
      }
      IsCommandCode = SvtType__IsCommandCode(v26->fields.type, 0LL);
      v35 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C22084(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      v36 = &Method_SummonResultComponent_showResCcDetail__;
      if ( !IsCommandCode )
        v36 = &Method_SummonResultComponent_showResSvtDetail__;
      v37 = v35;
      SummonResultInfoComponent_ClickDelegate___ctor(v35, (Il2CppObject *)this, *v36, 0LL);
      if ( v26->fields.sellMana || v26->fields.sellQp )
      {
        v37 = 0LL;
        *autoSale = 1;
      }
      Object = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                            v29,
                                            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
      if ( !Object )
        break;
      SummonResultInfoComponent__setResultData(
        (SummonResultInfoComponent_o *)Object,
        v26,
        v33,
        v37,
        this->fields.summonBeforeQp,
        this->fields.summonBeforeMana,
        0LL);
      v22 = BalanceConfig_TypeInfo;
      sellQp = v26->fields.sellQp;
      summonBeforeQp = this->fields.summonBeforeQp;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = BalanceConfig_TypeInfo;
      }
      QpMax = v22->static_fields->QpMax;
      if ( summonBeforeQp + sellQp >= QpMax )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = BalanceConfig_TypeInfo;
          QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
        }
      }
      else
      {
        QpMax = this->fields.summonBeforeQp + v26->fields.sellQp;
      }
      this->fields.summonBeforeQp = QpMax;
      sellMana = v26->fields.sellMana;
      summonBeforeMana = this->fields.summonBeforeMana;
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        v22 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v22->static_fields->UserItemMax;
      if ( summonBeforeMana + sellMana >= UserItemMax )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
        }
      }
      else
      {
        UserItemMax = this->fields.summonBeforeMana + v26->fields.sellMana;
      }
      this->fields.summonBeforeMana = UserItemMax;
      v23 = resultList->max_length;
      if ( (int)++v24 >= v23 )
        goto LABEL_46;
    }
LABEL_62:
    sub_1C22094(Object, v7);
  }
LABEL_46:
  Object = (UnityEngine_Component_o *)this->fields.fstGrid;
  v47 = (float)max_length;
  v48 = (float)maxPerLine;
  if ( (float)max_length <= v48 )
    v49 = 22.0;
  else
    v49 = 106.0;
  if ( !Object )
    goto LABEL_62;
  Object = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_62;
  v50 = v47 <= v48 ? v47 : v48;
  v54.fields.x = (float)(cellWidth * -0.5) * (float)(v50 + -1.0);
  v54.fields.y = v49;
  v54.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v54, 0LL);
  Object = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !Object )
    goto LABEL_62;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))Object->klass[1]._1.castClass)(
    Object,
    Object->klass[1]._1.declaringType);
  Object = (UnityEngine_Component_o *)*p_scdGrid;
  if ( !*p_scdGrid )
    goto LABEL_62;
  Object = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Object, 0LL);
  if ( !Object )
    goto LABEL_62;
  v51 = (float)(v47 - v48) + -1.0;
  if ( v47 <= v48 )
    v51 = -1.0;
  v55.fields.x = (float)(v14 * -0.5) * v51;
  v55.fields.y = -62.0;
  v55.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v55, 0LL);
  Object = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !Object )
    goto LABEL_62;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))Object->klass[1]._1.castClass)(
    Object,
    Object->klass[1]._1.declaringType);
  Object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Object )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
}


void __fastcall SummonResultComponent__SetResultData(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        bool *autoSale,
        const MethodInfo *method)
{
  SummonResultComponent___c__DisplayClass86_0_o *v5; // x20
  System_Collections_Generic_List_int__o *v6; // x24
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int *scrollBar; // x0
  __int64 objectId; // x1
  struct UIGrid_o *listRoot; // x8
  float cellWidth; // s0
  int maxPerLine; // w8
  float v18; // s8
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaId; // w25
  int64_t summonSceneInTime; // x26
  System_Collections_Generic_List_object__o *v23; // x24
  const MethodInfo *v24; // x2
  int max_length; // w8
  struct System_Collections_Generic_List_int__o **p_befSvtList; // x20
  int v27; // w21
  __int64 v28; // x22
  GachaInfos_o **m_Items; // x23
  GachaInfos_o *v30; // x27
  bool v31; // w29
  MultiExSummonListViewItem_o *v32; // x28
  ListViewSort_o *v33; // x27
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  System_Comparison_T__o *v47; // x23
  Il2CppObject *v48; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_List_object__o *v56; // x23
  int i; // w22
  _BOOL8 v58; // x0
  __int64 v59; // x1
  Il2CppObject *current; // x28
  GachaInfos_o *klass; // x26
  Il2CppObject *rewardIconObj; // x25
  Il2CppObject *v63; // x0
  __int64 v64; // x1
  UnityEngine_GameObject_o *v65; // x25
  __int64 v66; // x1
  UnityEngine_Component_o *v67; // x0
  UnityEngine_Component_o *transform; // x0
  __int64 v69; // x0
  __int64 v70; // x1
  SummonResultInfoComponent_ClickDelegate_o *v71; // x27
  Il2CppObject *Component_object; // x0
  __int64 v73; // x1
  BalanceConfig_c *v74; // x0
  int32_t sellQp; // w28
  int32_t summonBeforeQp; // w20
  int32_t QpMax; // w27
  __int64 v78; // x0
  __int64 v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x8
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  struct UIGrid_o *v91; // x8
  System_Action_object__o *v92; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+30h] [xbp-90h] BYREF
  GachaInfos_array *v97; // [xsp+58h] [xbp-68h]

  v97 = resultList;
  if ( (byte_4BD8CCA & 1) == 0 )
  {
    sub_1C21E38(&System_Action_GameObject__TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_1C21E38(&System_Comparison_MultiExSummonListViewItem__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_1C21E38(&ListViewSort_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&MultiExSummonListViewItem_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SummonResultComponent_showResCcDetail__);
    sub_1C21E38(&Method_SummonResultComponent_showResSvtDetail__);
    sub_1C21E38(&Method_SummonResultComponent___c__SetResultData_b__86_0__);
    sub_1C21E38(&Method_SummonResultComponent___c__DisplayClass86_0__SetResultData_b__1__);
    sub_1C21E38(&SummonResultComponent___c__DisplayClass86_0_TypeInfo);
    sub_1C21E38(&SummonResultComponent___c_TypeInfo);
    byte_4BD8CCA = 1;
  }
  memset(&v96, 0, sizeof(v96));
  v5 = (SummonResultComponent___c__DisplayClass86_0_o *)sub_1C22084(SummonResultComponent___c__DisplayClass86_0_TypeInfo);
  SummonResultComponent___c__DisplayClass86_0___ctor(v5, 0LL);
  *autoSale = 0;
  v6 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v6;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.befSvtList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  listRoot = this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_71;
  if ( !v97 )
    goto LABEL_71;
  if ( !v5 )
    goto LABEL_71;
  cellWidth = listRoot->fields.cellWidth;
  maxPerLine = listRoot->fields.maxPerLine;
  v18 = (float)((signed int)v97->max_length % maxPerLine);
  v5->fields.offset = (float)(cellWidth * 0.5) * (float)((float)maxPerLine - v18);
  summonCtrl = this->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_71;
  gachaParamData = summonCtrl->fields.gachaParamData;
  object = (Il2CppObject *)v5;
  if ( !gachaParamData )
    goto LABEL_71;
  gachaId = gachaParamData->fields.gachaId;
  summonSceneInTime = summonCtrl->fields.summonSceneInTime;
  v23 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
  max_length = v97->max_length;
  if ( max_length >= 1 )
  {
    p_befSvtList = &this->fields.befSvtList;
    v27 = 0;
    v28 = 0LL;
    m_Items = v97->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v28 >= max_length )
        sub_1C2209C(scrollBar, objectId);
      v30 = m_Items[v28];
      if ( !v30 )
        break;
      if ( v30->fields.isNew && !SummonResultComponent__checkOverlapSvt(this, v30->fields.objectId, v24) )
      {
        scrollBar = (int *)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        objectId = (unsigned int)v30->fields.objectId;
        v44 = *((_QWORD *)scrollBar + 2);
        v45 = Method_System_Collections_Generic_List_int__Add__;
        ++scrollBar[7];
        if ( !v44 )
          break;
        v46 = scrollBar[6];
        if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)scrollBar,
            objectId,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          v31 = 0;
        }
        else
        {
          v31 = 0;
          scrollBar[6] = v46 + 1;
          *(_DWORD *)(v44 + 4 * v46 + 32) = objectId;
        }
      }
      else
      {
        v31 = 1;
      }
      v32 = (MultiExSummonListViewItem_o *)sub_1C22084(MultiExSummonListViewItem_TypeInfo);
      MultiExSummonListViewItem___ctor(v32, v30, v31, gachaId, summonSceneInTime, v27 + v97->max_length, 0LL);
      v33 = (ListViewSort_o *)sub_1C22084(ListViewSort_TypeInfo);
      ListViewSort___ctor(v33, 27, 1, 0LL);
      if ( !v32 )
        break;
      scrollBar = (int *)((__int64 (__fastcall *)(MultiExSummonListViewItem_o *, ListViewSort_o *, Il2CppMethodPointer))v32->klass->vtable._4_SetSortValue.method)(
                           v32,
                           v33,
                           v32->klass->vtable._5_IsMatchFilter.methodPtr);
      if ( !v23 )
        break;
      items = v23->fields._items;
      v41 = Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__;
      ++v23->fields._version;
      if ( !items )
        break;
      size = v23->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v32,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v32;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v43 + 4), (int64_t)v32, v34, v35, v36, v37, v38, v39);
      }
      ++v28;
      --v27;
      max_length = v97->max_length;
      if ( (int)v28 >= max_length )
        goto LABEL_28;
    }
LABEL_71:
    sub_1C22094(scrollBar, objectId);
  }
LABEL_28:
  scrollBar = (int *)SummonResultComponent___c_TypeInfo;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    scrollBar = (int *)SummonResultComponent___c_TypeInfo;
  }
  v47 = *(System_Comparison_T__o **)(*((_QWORD *)scrollBar + 23) + 16LL);
  if ( !v47 )
  {
    if ( !scrollBar[56] )
    {
      j_il2cpp_runtime_class_init_0(scrollBar);
      scrollBar = (int *)SummonResultComponent___c_TypeInfo;
    }
    v48 = (Il2CppObject *)**((_QWORD **)scrollBar + 23);
    v47 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_MultiExSummonListViewItem__TypeInfo);
    System_Comparison_object____ctor(v47, v48, Method_SummonResultComponent___c__SetResultData_b__86_0__, 0LL);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__86_0 = (struct System_Comparison_MultiExSummonListViewItem__o *)v47;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__86_0, (int64_t)v47, v50, v51, v52, v53, v54, v55);
  }
  if ( !v23 )
    goto LABEL_71;
  System_Collections_Generic_List_object___Sort_56953720(
    v23,
    v47,
    (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
  v56 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v95,
    v23,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
  v96 = v95;
  for ( i = 1; ; ++i )
  {
    v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v96,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    if ( !v58 )
      break;
    current = v96.fields._current;
    if ( !v96.fields._current )
      sub_1C22094(v58, v59);
    klass = (GachaInfos_o *)v96.fields._current[7].klass;
    rewardIconObj = (Il2CppObject *)this->fields.rewardIconObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v63 = UnityEngine_Object__Instantiate_object_(
            rewardIconObj,
            (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v65 = (UnityEngine_GameObject_o *)v63;
    if ( !v63 )
      sub_1C22094(0LL, v64);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v63, 1, 0LL);
    v67 = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !v67 )
      sub_1C22094(0LL, v66);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v67, 0LL);
    GameObjectExtensions__SetParent(v65, transform, 0LL);
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(v65, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    if ( !byte_4BD6BB6 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v65, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    if ( !klass )
      sub_1C22094(v69, v70);
    if ( SvtType__IsCommandCode(klass->fields.type, 0LL) )
    {
      v71 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C22084(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v71,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResCcDetail__,
        0LL);
    }
    else
    {
      v71 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C22084(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v71,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResSvtDetail__,
        0LL);
    }
    if ( klass->fields.sellMana || klass->fields.sellQp )
    {
      v71 = 0LL;
      *autoSale = 1;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v65,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    if ( !Component_object )
      sub_1C22094(0LL, v73);
    SummonResultInfoComponent__setResultData(
      (SummonResultInfoComponent_o *)Component_object,
      klass,
      (bool)current[7].monitor,
      v71,
      this->fields.summonBeforeQp,
      this->fields.summonBeforeMana,
      0LL);
    v74 = BalanceConfig_TypeInfo;
    sellQp = klass->fields.sellQp;
    summonBeforeQp = this->fields.summonBeforeQp;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v74 = BalanceConfig_TypeInfo;
    }
    QpMax = v74->static_fields->QpMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.summonBeforeQp = System_Math__Min_63934948(summonBeforeQp + sellQp, QpMax, 0LL);
    v78 = System_Math__Min_63934948(
            this->fields.summonBeforeMana + klass->fields.sellMana,
            BalanceConfig_TypeInfo->static_fields->UserItemMax,
            0LL);
    v86 = (__int64)v97;
    this->fields.summonBeforeMana = v78;
    if ( (float)((float)*(int *)(v86 + 24) - v18) < (float)i )
    {
      if ( !v56 )
        sub_1C22094(v78, v79);
      v87 = v56->fields._items;
      v88 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v56->fields._version;
      if ( !v87 )
        sub_1C22094(v78, v79);
      v89 = v56->fields._size;
      if ( (unsigned int)v89 >= v87->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v56,
          (Il2CppObject *)v65,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = &v87->obj.klass + v89;
        v56->fields._size = v89 + 1;
        v90[4] = (Il2CppClass *)v65;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v90 + 4), (int64_t)v65, v80, v81, v82, v83, v84, v85);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v96,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
  scrollBar = (int *)this->fields.listRoot;
  if ( !scrollBar )
    goto LABEL_71;
  scrollBar = (int *)(*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)scrollBar + 440LL))(
                       scrollBar,
                       *(_QWORD *)(*(_QWORD *)scrollBar + 448LL));
  v91 = this->fields.listRoot;
  if ( !v91 )
    goto LABEL_71;
  scrollBar = (int *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)scrollBar,
    (signed int)v97->max_length > 2 * v91->fields.maxPerLine,
    0LL);
  scrollBar = (int *)this->fields.scrollView;
  if ( !scrollBar )
    goto LABEL_71;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0LL);
  v92 = (System_Action_object__o *)sub_1C22084(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v92,
    object,
    Method_SummonResultComponent___c__DisplayClass86_0__SetResultData_b__1__,
    0LL);
  if ( !v56 )
    goto LABEL_71;
  System_Collections_Generic_List_object___ForEach(
    v56,
    (System_Action_T__o *)v92,
    (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void __fastcall SummonResultComponent__SetSpecialGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  struct UILabel_o *v6; // x8
  struct ItemIconComponent_array *extraGiftIconComponents; // x21
  int mWidth; // s1
  int max_length; // w8
  float v10; // s8
  unsigned int v11; // w22
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x20
  __int64 v14; // x20
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t v18; // w20
  UIWidget_o *v19; // x20
  struct UILabel_o *v20; // x8

  if ( (byte_4BD8CC0 & 1) == 0 )
  {
    sub_1C21E38(&SummonResultComponent_TypeInfo);
    byte_4BD8CC0 = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0LL);
  v6 = this->fields.extraGiftTitleLb;
  if ( !v6 )
    goto LABEL_27;
  extraGiftIconComponents = this->fields.extraGiftIconComponents;
  if ( !extraGiftIconComponents )
    goto LABEL_27;
  mWidth = v6->fields.mWidth;
  max_length = extraGiftIconComponents->max_length;
  v10 = LocalPositionX + (float)((float)mWidth * 0.5);
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C2209C(extraGiftTitleLb, method);
      v12 = &extraGiftIconComponents->obj.klass + (int)v11;
      v13 = v12[4];
      if ( !v13 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v12[4],
                                                      0LL);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0LL);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v14 = *(_QWORD *)&v13->_1.byval_arg.bits;
        if ( !v14 )
          break;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
        GameObjectExtensions__SetLocalPositionX(v15, (float)(v10 + (float)*(int *)(v14 + 168)) + 2.0, 0LL);
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
        v10 = GameObjectExtensions__GetLocalPositionX(v16, 0LL);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1C22094(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0LL);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v18 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v18 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 72LL) )
  {
    v19 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
    if ( !v19 )
      goto LABEL_27;
    UIWidget__set_width(v19, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  v20 = this->fields.extraGiftMsg2Lb;
  if ( !v20 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v10 + (float)((float)v20->fields.mWidth * 0.5)) + 2.0,
    0LL);
}


void __fastcall SummonResultComponent___DialogCallBack_b__79_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4BD8CCD & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonResultComponent_EndCloseDialogCallBack__);
    byte_4BD8CCD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v4, 0LL);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_8:
    sub_1C22094(v5, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonResultComponent__checkOverlapSvt(
        SummonResultComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  if ( (byte_4BD8CC2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4BD8CC2 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C22094(befSvtList, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  v7 = size - 1;
  if ( size < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    result = System_Collections_Generic_List_int___get_Item(
               befSvtList,
               v8,
               (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v7 == v8 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v8;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void __fastcall SummonResultComponent__clearResultList(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *fstGrid; // x0
  int32_t childCount; // w0
  int v5; // w21
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w0
  int v8; // w21
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x20
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  if ( (byte_4BD8CC7 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Transform_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8CC7 = 1;
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_56;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
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
                                             v5 - 2,
                                             0LL);
      if ( !fstGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_56:
    sub_1C22094(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_56;
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( v7 >= 1 )
  {
    v8 = v7 + 1;
    do
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
      if ( !fstGrid )
        goto LABEL_56;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
      if ( !fstGrid )
        goto LABEL_56;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)fstGrid,
                                             v8 - 2,
                                             0LL);
      if ( !fstGrid )
        goto LABEL_56;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v9, 0LL);
    }
    while ( --v8 > 1 );
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_56;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( !Enumerator )
    sub_1C22094(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_30;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_30:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_37;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_37:
      v19 = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_58;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C22354(v20);
LABEL_58:
      sub_1C22094(v20, v21);
    }
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v23, 0LL);
  }
  v24 = sub_1C21F74(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v25 = *(_QWORD *)v24;
    v26 = v24;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_50;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_50:
      v29 = sub_1C73E18(v24, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsg;
  if ( !fstGrid )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fstGrid, 0, 0LL);
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsgLb;
  if ( !fstGrid )
    goto LABEL_56;
  UILabel__set_text((UILabel_o *)fstGrid, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall SummonResultComponent__initGachaResultList(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        int32_t type,
        System_Int32_array *extraGiftIds,
        GachaExtraGifts_array *gachaExtraGiftList,
        const MethodInfo *method)
{
  GachaInfos_array *v9; // x22
  UnityEngine_GameObject_o *changeSceneBtnInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  const MethodInfo *v16; // x3
  struct UIGrid_o *fstGrid; // x8
  struct UIGrid_o *scdGrid; // x9
  float v19; // s8
  _BOOL4 v20; // w24
  UnityEngine_GameObject_o *v21; // x0
  UILabel_o *autoSaleMsgLb; // x23
  UILabel_o *extraGiftMsgLb; // x23
  SummonResultComponent___c_c *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *extraGiftIconComponents; // x23
  System_Action_object__o *_9__69_0; // x24
  Il2CppObject *v27; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x5
  float v37; // s8
  struct UIGrid_o *v38; // x8
  GachaExtraGifts_o *v39; // x9
  int32_t gachaExtraGiftResultType; // w2
  int32_t gachaExtraGiftBonusType; // w3
  SummonResultComponent_o *v42; // x0
  System_Collections_Generic_IEnumerable_int__o *v43; // x1
  bool v44; // w4
  System_Collections_Generic_HashSet_int__o *v45; // x22
  __int64 v46; // x8
  __int64 v47; // x25
  int32_t v48; // w23
  int32_t v49; // w24
  GachaExtraGifts_o *v50; // x29
  __int64 v51; // [xsp+8h] [xbp-78h] BYREF
  bool autoSale[4]; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_int__o v53; // 0:x0.8

  v9 = resultList;
  if ( (byte_4BD8CBC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_int___ctor__);
    sub_1C21E38(&Method_System_Nullable_int__get_HasValue__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&SummonResultComponent_TypeInfo);
    sub_1C21E38(&Method_SummonResultComponent___c__initGachaResultList_b__69_0__);
    sub_1C21E38(&SummonResultComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_12588/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_1C21E38(&StringLiteral_12613/*"SUMMON_RESULT_AUTOSALE_MSG"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8CBC = 1;
  }
  autoSale[0] = 0;
  changeSceneBtnInfo = this->fields.changeSceneBtnInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = this->fields.closeInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = this->fields.backImg;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     changeSceneBtnInfo,
                                                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnLabel;
  this->fields.dispType = type;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v13, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v14, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v15, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = this->fields.scrollBar;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  if ( !v9 )
    goto LABEL_40;
  fstGrid = this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_96;
  scdGrid = this->fields.scdGrid;
  if ( !scdGrid )
    goto LABEL_96;
  if ( scdGrid->fields.maxPerLine + fstGrid->fields.maxPerLine >= (signed int)v9->max_length )
  {
    SummonResultComponent__SetOldResultData(this, v9, autoSale, v16);
    v19 = 0.0;
  }
  else
  {
    SummonResultComponent__SetResultData(this, v9, autoSale, v16);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v19 = FSUtility__IsUnderVista(0LL) ? 19.0 : 7.0;
  }
  changeSceneBtnInfo = this->fields.autoSaleMsg;
  if ( !changeSceneBtnInfo
    || (v20 = autoSale[0],
        UnityEngine_GameObject__SetActive(changeSceneBtnInfo, autoSale[0], 0LL),
        (changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.autoSaleMsgLb) == 0LL) )
  {
LABEL_96:
    sub_1C22094(changeSceneBtnInfo, resultList);
  }
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  GameObjectExtensions__SetLocalPositionY(v21, v19, 0LL);
  autoSaleMsgLb = this->fields.autoSaleMsgLb;
  if ( v20 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12613/*"SUMMON_RESULT_AUTOSALE_MSG"*/,
                                                       0LL);
    resultList = (GachaInfos_array *)changeSceneBtnInfo;
    if ( !autoSaleMsgLb )
      goto LABEL_96;
  }
  else
  {
    resultList = (GachaInfos_array *)string_TypeInfo->static_fields->Empty;
    if ( !autoSaleMsgLb )
      goto LABEL_96;
  }
  UILabel__set_text(autoSaleMsgLb, (System_String_o *)resultList, 0LL);
LABEL_40:
  changeSceneBtnInfo = this->fields.extraGiftComponent;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
  extraGiftMsgLb = this->fields.extraGiftMsgLb;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
  if ( !extraGiftMsgLb )
    goto LABEL_96;
  UILabel__set_fontSize(extraGiftMsgLb, SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  changeSceneBtnInfo = this->fields.extraGiftComponent;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  v24 = SummonResultComponent___c_TypeInfo;
  extraGiftIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraGiftIconComponents;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    v24 = SummonResultComponent___c_TypeInfo;
  }
  _9__69_0 = (System_Action_object__o *)v24->static_fields->__9__69_0;
  if ( !_9__69_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = SummonResultComponent___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__69_0 = (System_Action_object__o *)sub_1C22084(System_Action_ItemIconComponent__TypeInfo);
    System_Action_object____ctor(_9__69_0, v27, Method_SummonResultComponent___c__initGachaResultList_b__69_0__, 0LL);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Action_ItemIconComponent__o *)_9__69_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__69_0,
      (int64_t)_9__69_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__69_0,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_ItemIconComponent___);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0LL);
  if ( extraGiftIds && gachaExtraGiftList && *(_QWORD *)&extraGiftIds->max_length )
  {
    changeSceneBtnInfo = this->fields.extraGiftComponent;
    if ( !changeSceneBtnInfo )
      goto LABEL_96;
    changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0LL);
    if ( extraGiftIds->max_length == 1 )
    {
      v37 = 0.0;
      if ( v9 )
      {
        v51 = 0LL;
        v53 = (System_Nullable_int__o)&v51;
        System_Nullable_int____ctor(
          v53,
          v9->max_length,
          (const MethodInfo_376B7A0 *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v51 )
          v37 = (float)SHIDWORD(v51);
      }
      v38 = this->fields.fstGrid;
      if ( !v38 )
        goto LABEL_96;
      if ( gachaExtraGiftList->max_length )
      {
        v39 = gachaExtraGiftList->m_Items[0];
        if ( !v39 )
          goto LABEL_96;
        gachaExtraGiftBonusType = v39->fields.gachaExtraGiftBonusType;
        gachaExtraGiftResultType = v39->fields.gachaExtraGiftResultType;
        v42 = this;
        v43 = (System_Collections_Generic_IEnumerable_int__o *)extraGiftIds;
        v44 = v37 > (float)v38->fields.maxPerLine;
        goto LABEL_94;
      }
LABEL_97:
      sub_1C2209C(changeSceneBtnInfo, resultList);
    }
    v45 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v45,
      (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v46 = *(_QWORD *)&extraGiftIds->max_length;
    if ( (int)v46 >= 1 )
    {
      v47 = 0LL;
      v48 = 0;
      v49 = 0;
      while ( (unsigned int)v47 < (unsigned int)v46 && (unsigned int)v47 < gachaExtraGiftList->max_length )
      {
        v50 = gachaExtraGiftList->m_Items[v47];
        if ( !v50 )
          goto LABEL_96;
        if ( v50->fields.gachaExtraGiftBonusType == 2 )
        {
          if ( !v45 )
            goto LABEL_96;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_HashSet_int___Add(
                                                             v45,
                                                             extraGiftIds->m_Items[v47 + 1],
                                                             (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v48 = v50->fields.gachaExtraGiftBonusType;
          v49 = v50->fields.gachaExtraGiftResultType;
          v46 = *(_QWORD *)&extraGiftIds->max_length;
        }
        if ( (int)++v47 >= (int)v46 )
          goto LABEL_88;
      }
      goto LABEL_97;
    }
    v49 = 0;
    v48 = 0;
LABEL_88:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)extraGiftIds, 0LL) )
    {
      v42 = this;
      v43 = (System_Collections_Generic_IEnumerable_int__o *)v45;
      gachaExtraGiftResultType = v49;
      gachaExtraGiftBonusType = v48;
      v44 = 0;
LABEL_94:
      SummonResultComponent__SetBonusGiftDisplay(v42, v43, gachaExtraGiftResultType, gachaExtraGiftBonusType, v44, v36);
      goto LABEL_95;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12588/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/,
                                                       0LL);
    if ( !this->fields.extraGiftMsgLb )
      goto LABEL_96;
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
  }
LABEL_95:
  SummonResultComponent__setListByType(this, this->fields.dispType, v35);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BD8CC8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12374/*"SHOW_TALK"*/);
    byte_4BD8CC8 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1C22094(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12374/*"SHOW_TALK"*/, 0LL);
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
    sub_1C22094(mWidget, method);
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
    sub_1C2209C(mWidget, method);
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
  UnityEngine_GameObject_o *closeInfo; // x0
  System_String_o *v6; // x0
  UILabel_o *formationBtnLabel; // x22
  System_String_o *v8; // x21
  UILabel_o *combineBtnLabel; // x22
  UILabel_o *sellBtnLabel; // x22
  struct SummonControl_o *summonCtrl; // x8
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct SummonControl_o *v15; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *summonBtnLabel; // x22
  Il2CppObject *v19; // x0
  UILabel_o *v20; // x22
  long double v21; // q0
  int32_t gachaId; // w22
  __int64 v23; // x0
  __int64 v24; // x0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Master_object; // x24
  System_String_o *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  UILabel_o *v31; // x23
  Il2CppObject *v32; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  long double v35; // q0
  __int64 v36; // x8
  __int64 v37; // x0
  TblUserEntity_o *UserData; // x23
  GachaEntity_o *v39; // x22
  int friendPoint; // w24
  int32_t v41; // w23
  bool v42; // w0
  UILabel_o *v43; // x22
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  UILabel_o *v48; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  Il2CppObject *v50; // x0
  Il2CppObject *v51; // x22
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  UILabel_o *v55; // x22
  Il2CppObject *v56; // x0
  Il2CppObject *v57; // x21
  UserItemEntity_o *v58; // x0
  UILabel_o *v59; // x21
  struct UILabel_o *v60; // x21
  System_String_o *v61; // x1
  int32_t monitor_high; // w9
  UILabel_o *v63; // x21
  UILabel_o *v64; // x21
  int gachaResourceNum; // w23
  int v66; // w1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  int v70; // w22
  __int64 v71; // x24
  UILabel_o *v72; // x23
  Il2CppObject *v73; // x0
  struct SummonControl_o *v74; // x8
  struct SummonControl_o *v75; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v81; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v90; // x0
  UnityEngine_Component_o *Parent; // x0
  SummonResultComponent_c *v92; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v99; // s11
  float v100; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v102; // s14
  int v103; // w22
  int32_t maxDrawNum; // w23
  struct SummonControl_o *v105; // x8
  int32_t gachaTime; // [xsp+Ch] [xbp-C4h] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v108; // [xsp+18h] [xbp-B8h] BYREF
  UserGachaEntity_o *entity; // [xsp+20h] [xbp-B0h] BYREF
  GachaAppendEntity_o *v110; // [xsp+28h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+38h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v112; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v122; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v123; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v124; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v125; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4BD8CBD & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SummonResultComponent_TypeInfo);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    sub_1C21E38(&UserGachaMaster_TypeInfo);
    sub_1C21E38(&StringLiteral_12559/*"SUMMON_APPEND_END"*/);
    sub_1C21E38(&StringLiteral_12361/*"SHORT_SERVANT_FORMATION"*/);
    sub_1C21E38(&StringLiteral_12590/*"SUMMON_FREE_10_BTN"*/);
    sub_1C21E38(&StringLiteral_12366/*"SHORT_SERVANT_SELL"*/);
    sub_1C21E38(&StringLiteral_12594/*"SUMMON_LIMIT_OVER_BTN"*/);
    sub_1C21E38(&StringLiteral_12619/*"SUMMON_TICKET_END"*/);
    sub_1C21E38(&StringLiteral_12351/*"SHORT_SERVANT_COMBINE"*/);
    sub_1C21E38(&StringLiteral_3940/*"CONTINUE_SUMMON_BTN"*/);
    byte_4BD8CBD = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  entity = 0LL;
  v110 = 0LL;
  appendEnt = 0LL;
  v108 = 0LL;
  if ( type == 1 )
  {
    closeInfo = this->fields.closeInfo;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_GameObject__SetActive(closeInfo, 0, 0LL);
    closeInfo = this->fields.changeSceneBtnInfo;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_GameObject__SetActive(closeInfo, 1, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3940/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v8 = v6;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12361/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_204;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12351/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_204;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12366/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_204;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_204;
    v113.fields.r = 1.0;
    v113.fields.g = 1.0;
    v113.fields.b = 1.0;
    v113.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v113, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v114.fields.r = 1.0;
    v114.fields.g = 1.0;
    v114.fields.b = 1.0;
    v114.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v114, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v115.fields.r = 1.0;
    v115.fields.g = 1.0;
    v115.fields.b = 1.0;
    v115.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v115, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v116.fields.r = 1.0;
    v116.fields.g = 1.0;
    v116.fields.b = 1.0;
    v116.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v116, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v117.fields.r = 1.0;
    v117.fields.g = 1.0;
    v117.fields.b = 1.0;
    v117.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v117, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_204;
    closeInfo = (UnityEngine_GameObject_o *)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_204;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v15 = this->fields.summonCtrl;
    if ( !v15 )
      goto LABEL_204;
    gachaParamData = v15->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_204;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v12, v13, v14);
    closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v19, 0LL);
    if ( !summonBtnLabel )
      goto LABEL_204;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0LL);
    v20 = this->fields.summonBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !v20 )
      goto LABEL_204;
    UILabel__SetCondensedScale(
      v20,
      SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE,
      0,
      0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
          v23 = sub_1C73D14(v21);
        v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
        if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
          v24 = sub_1C73D14(v21);
        closeInfo = **(UnityEngine_GameObject_o ***)(v24 + 184);
        if ( !closeInfo )
          goto LABEL_204;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        }
        if ( !Master_object )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)UserGachaMaster__TryGetEntity(
                                                  (UserGachaMaster_o *)Master_object,
                                                  &entity,
                                                  *(_QWORD *)(*(_QWORD *)&closeInfo[7].fields.m_CachedPtr + 64LL),
                                                  gachaId,
                                                  0LL);
        if ( !MasterData_object )
          goto LABEL_204;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v108,
          gachaId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12594/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !v108 )
          goto LABEL_204;
        v27 = (System_String_o *)closeInfo;
        if ( !LODWORD(v108[4].monitor) )
          goto LABEL_56;
        closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v108 || !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)UserGachaExtraCountMaster__getExtraCount(
                                                  (UserGachaExtraCountMaster_o *)closeInfo,
                                                  (int32_t)v108[4].monitor,
                                                  0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_56;
        v31 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v28, v29, v30);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v32, 0LL);
        if ( !v31 )
          goto LABEL_204;
        UILabel__set_text(v31, (System_String_o *)closeInfo, 0LL);
LABEL_56:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_204;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v108,
                                &appendEnt,
                                0LL);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12559/*"SUMMON_APPEND_END"*/, 0LL);
            }
LABEL_127:
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
            this->fields.isLimitOver = 1;
            if ( !closeInfo )
              goto LABEL_204;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
            if ( !closeInfo )
              goto LABEL_204;
            v122.fields.r = 0.35547;
            v122.fields.a = 1.0;
            v122.fields.g = 0.35547;
            v122.fields.b = 0.35547;
            UIWidget__set_color((UIWidget_o *)closeInfo, v122, 0LL);
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_204;
            v123.fields.r = 0.5;
            v123.fields.g = 0.5;
            v123.fields.b = 0.5;
            v123.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)closeInfo, v123, 0LL);
            closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
            v63 = this->fields.summonBtnLabel;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            if ( !v63 )
              goto LABEL_204;
            UILabel__SetCondensedScale(
              v63,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0,
              0LL);
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_204;
            v61 = v27;
LABEL_135:
            UILabel__set_text((UILabel_o *)closeInfo, v61, 0LL);
            goto LABEL_165;
          }
        }
        else if ( entity )
        {
          if ( !v108 )
            goto LABEL_204;
          monitor_high = HIDWORD(v108[5].monitor);
          if ( monitor_high >= 1 && entity->fields.num >= monitor_high )
            goto LABEL_127;
        }
LABEL_123:
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
        if ( !closeInfo )
          goto LABEL_204;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_204;
        v120.fields.r = 1.0;
        v120.fields.g = 1.0;
        v120.fields.b = 1.0;
        v120.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v120, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_204;
        v121.fields.r = 1.0;
        v121.fields.g = 1.0;
        v121.fields.b = 1.0;
        v121.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v121, 0LL);
        goto LABEL_165;
      case 3:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        v36 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
          v36 = sub_1C73D14(v35);
        v37 = *(_QWORD *)(*(_QWORD *)(v36 + 192) + 16LL);
        if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
          v37 = sub_1C73D14(v35);
        closeInfo = **(UnityEngine_GameObject_o ***)(v37 + 184);
        if ( !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame || !closeInfo )
          goto LABEL_204;
        UserData = TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                                                  gachaParamData->fields.gachaId,
                                                  (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !UserData )
          goto LABEL_204;
        v39 = (GachaEntity_o *)closeInfo;
        friendPoint = UserData->fields.friendPoint;
        v41 = gachaParamData->fields.gachaId;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v42 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(v41, &maxNum[1], maxNum, 0LL);
        if ( maxNum[1] > 0 || v42 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_204;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v64 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12590/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v64 )
            goto LABEL_204;
          UILabel__set_text(v64, (System_String_o *)closeInfo, 0LL);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v48 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v48 )
            goto LABEL_204;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
          goto LABEL_164;
        }
        if ( gachaParamData->fields.gachaTime == 1 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_204;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, 1, 3, 0LL);
          v43 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v44, v45, v46);
          closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v47, 0LL);
          if ( !v43 )
            goto LABEL_204;
          UILabel__set_text(v43, (System_String_o *)closeInfo, 0LL);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v48 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v48 )
            goto LABEL_204;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
LABEL_164:
          UILabel__SetCondensedScale(v48, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0, 0LL);
LABEL_165:
          v74 = this->fields.summonCtrl;
          if ( v74 )
          {
            closeInfo = v74->fields.currentResourceInfo;
            if ( closeInfo )
            {
              UnityEngine_GameObject__SetActive(closeInfo, 1, 0LL);
              v75 = this->fields.summonCtrl;
              if ( v75 )
              {
                v75->fields.isResult = 1;
                if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
                if ( TutorialFlag__IsProgressDone(2, 0LL) )
                {
                  closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnLabel;
                  if ( closeInfo )
                  {
                    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                    closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
                    if ( closeInfo )
                    {
                      closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)closeInfo,
                                                                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                      if ( closeInfo )
                      {
                        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                        closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
                        if ( closeInfo )
                        {
                          v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                          closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v77, 0LL);
                          if ( closeInfo )
                          {
                            closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)closeInfo,
                                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                            if ( closeInfo )
                            {
                              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                              closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
                              if ( closeInfo )
                              {
                                v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                                closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v78, 0LL);
                                if ( closeInfo )
                                {
                                  closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                            (UnityEngine_Component_o *)closeInfo,
                                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                  if ( closeInfo )
                                  {
                                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
                                    if ( closeInfo )
                                    {
                                      v79 = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)closeInfo,
                                              0LL);
                                      closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v79, 0LL);
                                      if ( closeInfo )
                                      {
                                        closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                                  (UnityEngine_Component_o *)closeInfo,
                                                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  v81 = UnityEngine_Object__Instantiate_object_(
                          touchBlocker,
                          (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
                  p_blocker = &this->fields.blocker;
                  this->fields.blocker = (struct UnityEngine_GameObject_o *)v81;
                  sub_1C21DDC(
                    (PartyOrganizationUtility_o *)&this->fields.blocker,
                    (int64_t)v81,
                    v83,
                    v84,
                    v85,
                    v86,
                    v87,
                    v88);
                  blocker = this->fields.blocker;
                  v90 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v90, 0LL);
                  GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                  v92 = SummonResultComponent_TypeInfo;
                  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                    v92 = SummonResultComponent_TypeInfo;
                  }
                  static_fields = v92->static_fields;
                  m_XMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
                  m_YMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
                  m_Width = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
                  m_Height = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
                  if ( !FSUtility_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                  OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                  closeInfo = *p_blocker;
                  if ( *p_blocker )
                  {
                    v99 = OffsetX;
                    closeInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              closeInfo,
                                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                    if ( closeInfo )
                    {
                      v100 = m_XMin - v99;
                      v124.fields.m_XMin = v100;
                      v124.fields.m_YMin = m_YMin;
                      v124.fields.m_Width = m_Width;
                      v124.fields.m_Height = m_Height;
                      MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v124, 30, 0LL);
                      closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                        v102 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                        closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( closeInfo )
                        {
                          v112.fields.x = TutorialBackArrowPos.fields.x - v102;
                          v112.fields.y = TutorialBackArrowPos.fields.y;
                          v125.fields.m_XMin = v100;
                          v125.fields.m_YMin = m_YMin;
                          v125.fields.m_Width = m_Width;
                          v125.fields.m_Height = m_Height;
                          CommonUI__OpenTutorialArrowMark(
                            (CommonUI_o *)closeInfo,
                            v112,
                            SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                            v125,
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
LABEL_204:
          sub_1C22094(closeInfo, *(_QWORD *)&type);
        }
        if ( friendPoint <= 1999 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_204;
          if ( friendPoint < 400 )
            v66 = 1;
          else
            v66 = friendPoint / 200;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_204;
          closeInfo = (UnityEngine_GameObject_o *)GachaAppendMaster__TryGetHundredSummon(
                                                    (GachaAppendMaster_o *)closeInfo,
                                                    &v110,
                                                    gachaParamData->fields.gachaId,
                                                    0LL);
          if ( ((unsigned __int8)closeInfo & 1) == 0 )
            goto LABEL_152;
          if ( !v39 )
            goto LABEL_204;
          gachaResourceNum = gachaParamData->fields.gachaResourceNum;
          if ( gachaResourceNum > 10 * GachaEntity__getPrice(v39, 0LL) || !gachaParamData->fields.gachaResourceNum )
          {
            closeInfo = (UnityEngine_GameObject_o *)GachaEntity__getPrice(v39, 0LL);
            if ( !v110 )
              goto LABEL_204;
            v103 = (int)closeInfo;
            maxDrawNum = v110->fields.maxDrawNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            closeInfo = (UnityEngine_GameObject_o *)System_Math__Min_63934948(friendPoint / v103, maxDrawNum, 0LL);
            v105 = this->fields.summonCtrl;
            if ( (int)closeInfo >= 1 )
            {
              if ( !v105 )
                goto LABEL_204;
              v70 = (int)closeInfo;
              SummonControl__SetGachaTime(this->fields.summonCtrl, (int32_t)closeInfo, 3, 0LL);
              v71 = 24LL;
              goto LABEL_159;
            }
            if ( !v105 )
              goto LABEL_204;
            v66 = gachaParamData->fields.gachaTime;
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          }
          else
          {
LABEL_152:
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_204;
            v66 = gachaParamData->fields.gachaTime;
          }
        }
        SummonControl__SetGachaTime((SummonControl_o *)closeInfo, v66, 3, 0LL);
        v70 = gachaParamData->fields.gachaTime;
        v71 = 20LL;
LABEL_159:
        v72 = this->fields.summonBtnLabel;
        gachaTime = v70;
        v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v67, v68, v69);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v73, 0LL);
        if ( !v72 )
          goto LABEL_204;
        UILabel__set_text(v72, (System_String_o *)closeInfo, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v48 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v48 )
          goto LABEL_204;
        SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = *(_DWORD *)((char *)&SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY
                                                     + v71);
        goto LABEL_164;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_204;
        v50 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v50 )
          goto LABEL_98;
        v51 = v50;
        if ( !LODWORD(v50[4].monitor) )
          goto LABEL_98;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_204;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v51[4].monitor,
               0LL) != 9 )
          goto LABEL_98;
        v55 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v52, v53, v54);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v56, 0LL);
        if ( !v55 )
          goto LABEL_204;
        UILabel__set_text(v55, (System_String_o *)closeInfo, 0LL);
LABEL_98:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v57 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        }
        if ( !v57 )
          goto LABEL_204;
        v58 = UserItemMaster__GetEntity(
                (UserItemMaster_o *)v57,
                *(_QWORD *)(*(_QWORD *)&closeInfo[7].fields.m_CachedPtr + 64LL),
                gachaParamData->fields.ticketItemId,
                0LL);
        if ( v58 && v58->fields.num > 0 )
          goto LABEL_123;
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_204;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_204;
        v118.fields.r = 0.35547;
        v118.fields.a = 1.0;
        v118.fields.g = 0.35547;
        v118.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v118, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_204;
        v119.fields.r = 0.5;
        v119.fields.g = 0.5;
        v119.fields.b = 0.5;
        v119.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v119, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v59 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v59 )
          goto LABEL_204;
        UILabel__SetCondensedScale(
          v59,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0,
          0LL);
        v60 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12619/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v60 )
          goto LABEL_204;
        v61 = (System_String_o *)closeInfo;
        closeInfo = (UnityEngine_GameObject_o *)v60;
        goto LABEL_135;
      default:
        goto LABEL_165;
    }
  }
  this->fields.dispType = type;
  SummonResultComponent__setSvtNum(this, *(const MethodInfo **)&type);
}


void __fastcall SummonResultComponent__setSvtNum(SummonResultComponent_o *this, const MethodInfo *method)
{
  DataManager_o *SelfUserGame; // x0
  __int64 v4; // x1
  int klass; // w10
  BalanceConfig_c *v6; // x0
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
  int v19; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4BD8CC3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_7274/*"HAVE_SVT_NUM_TITLE"*/);
    sub_1C21E38(&StringLiteral_7273/*"HAVE_SVTEQ_NUM_TITLE"*/);
    byte_4BD8CC3 = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_23;
  klass = (int)SelfUserGame[1].klass;
  klass_high = HIDWORD(SelfUserGame[1].klass);
  v19 = klass;
  if ( !byte_4BD7514 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD7514 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v6->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7274/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
  if ( !svtTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtNumLb = this->fields.svtNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantSum, 0LL);
  if ( !svtNumLb )
    goto LABEL_23;
  UILabel__set_text(svtNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtMaxLb = this->fields.svtMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&v19, 0LL);
  if ( !svtMaxLb )
    goto LABEL_23;
  UILabel__set_text(svtMaxLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqTitleLb = this->fields.svtEqTitleLb;
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7273/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
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
    sub_1C22094(SelfUserGame, v4);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall SummonResultComponent__showResCcDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4BD8CC5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonResultComponent___c__DisplayClass78_0__showResCcDetail_b__0__);
    sub_1C21E38(&SummonResultComponent___c__DisplayClass78_0_TypeInfo);
    byte_4BD8CC5 = 1;
  }
  v5 = sub_1C22084(SummonResultComponent___c__DisplayClass78_0_TypeInfo);
  SummonResultComponent___c__DisplayClass78_0___ctor((SummonResultComponent___c__DisplayClass78_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass78_0__showResCcDetail_b__0__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1C22094(v6, v7);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall SummonResultComponent__showResSvtDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4BD8CC4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonResultComponent___c__DisplayClass77_0__showResSvtDetail_b__0__);
    sub_1C21E38(&SummonResultComponent___c__DisplayClass77_0_TypeInfo);
    byte_4BD8CC4 = 1;
  }
  v5 = sub_1C22084(SummonResultComponent___c__DisplayClass77_0_TypeInfo);
  SummonResultComponent___c__DisplayClass77_0___ctor((SummonResultComponent___c__DisplayClass77_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass77_0__showResSvtDetail_b__0__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1C22094(v6, v7);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall SummonResultComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8D41 & 1) == 0 )
  {
    sub_1C21E38(&SummonResultComponent___c_TypeInfo);
    byte_4BD8D41 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SummonResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SummonResultComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SummonResultComponent___c___ctor(SummonResultComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall SummonResultComponent___c___SetResultData_b__86_0(
        SummonResultComponent___c_o *this,
        MultiExSummonListViewItem_o *a,
        MultiExSummonListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C22094(this, 0LL);
  return ListViewItem__SortCompDown((ListViewItem_o *)a, (ListViewItem_o *)b, 0LL);
}


void __fastcall SummonResultComponent___c___initGachaResultList_b__69_0(
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
    sub_1C22094(this, elm);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass77_0___ctor(
        SummonResultComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass77_0___showResSvtDetail_b__0(
        SummonResultComponent___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int64_t usrSvtId; // x20
  Il2CppObject *_4__this; // x22
  CommonUI_o *v6; // x19
  ServantStatusDialog_EndDelegate_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_4BD8D42 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SummonResultComponent_DialogCallBack__);
    byte_4BD8D42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (CommonUI_o *)Instance;
  v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v7, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v6 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_31137496(v6, 8, usrSvtId, v7, 0LL, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1C22094(v8, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass78_0___ctor(
        SummonResultComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass78_0___showResCcDetail_b__0(
        SummonResultComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v6; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v8; // x19
  ServantStatusDialog_EndDelegate_o *v9; // x21
  CommonUI_o *v10; // x19

  if ( (byte_4BD8D43 & 1) == 0 )
  {
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C21E38(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SummonResultComponent_DialogCallBack__);
    byte_4BD8D43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_325E324 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v8 = (CommonUI_o *)v6;
  v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C22084(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v9, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v8 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_31140820(v8, 0, (UserCommandCodeEntity_o *)Entity, v9, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_10:
    sub_1C22094(Instance, v4);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass86_0___ctor(
        SummonResultComponent___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass86_0___SetResultData_b__1(
        SummonResultComponent___c__DisplayClass86_0_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  GameObjectExtensions__AddLocalPositionX(obj, this->fields.offset, 0LL);
}