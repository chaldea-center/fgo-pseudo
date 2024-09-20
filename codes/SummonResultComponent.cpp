void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v2; // x8

  if ( (byte_4A57A6B & 1) == 0 )
  {
    sub_1B885B0(&SummonResultComponent_TypeInfo);
    byte_4A57A6B = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_BB4280;
  v2 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v2->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_BB5270;
  *(_OWORD *)&v2->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL_ADJUST = xmmword_BB5280;
  *(_OWORD *)&v2->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX_ADJUST = xmmword_BB3E90;
  v2->SPRITE_SIZE_NORMAL_SPECIAL_BONUS = 26;
  *(_QWORD *)&v2->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX = 0x20000002F0LL;
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

  if ( (byte_4A57A6A & 1) == 0 )
  {
    sub_1B885B0(&Method_SummonResultComponent_CheckLimitOver__);
    sub_1B885B0(&StringLiteral_5493/*"END_SUMMON"*/);
    sub_1B885B0(&StringLiteral_8258/*"LIMIT_OVER"*/);
    byte_4A57A6A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8258/*"LIMIT_OVER"*/, 0LL);
    v4 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_SummonResultComponent_CheckLimitOver__);
    v5 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5493/*"END_SUMMON"*/, 0LL);
    v4 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B885C8(Method_SummonResultComponent_CheckLimitOver__);
    v5 = 0;
  }
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0LL);
}


void __fastcall SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  ServantStatusBattleListViewItem_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A57A62 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57A62 = 1;
  }
  blocker = (UnityEngine_Object_o *)this->fields.blocker;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blocker, 0LL, 0LL) )
  {
    p_blocker = (ServantStatusBattleListViewItem_o *)&this->fields.blocker;
    klass = (UnityEngine_Object_o *)p_blocker->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_1B88554(p_blocker, 0, v6, v7);
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

  if ( (byte_4A57A67 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SummonResultComponent__DialogCallBack_b__71_0__);
    byte_4A57A67 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__71_0__, 0LL);
  if ( !v6 )
    sub_1B8880C(v9, v10);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0LL);
}


void __fastcall SummonResultComponent__EndCloseDialogCallBack(SummonResultComponent_o *this, const MethodInfo *method)
{
  ;
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
  _QWORD *v74; // x22
  __int64 v75; // x8
  __int64 v76; // x0
  __int64 v77; // x0
  System_String_o *v78; // x0
  _QWORD *v79; // x22
  System_String_o *v80; // x21
  __int64 v81; // x8
  __int64 v82; // x0
  __int64 v83; // x0
  const MethodInfo *v84; // x1
  UnityEngine_GameObject_o *v85; // x0
  SummonResultComponent_c *v86; // x8
  UnityEngine_GameObject_o *v87; // x22
  struct SummonResultComponent_StaticFields *v88; // x8
  __int64 v89; // x9
  UILabel_o *v90; // x21
  System_String_o *v91; // x22
  _QWORD *v92; // x23
  __int64 v93; // x8
  __int64 v94; // x0
  __int64 v95; // x0
  Il2CppObject *v96; // x0
  int v97; // [xsp+Ch] [xbp-54h] BYREF
  int v98; // [xsp+18h] [xbp-48h] BYREF
  int v99; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4A57A5F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_object___);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&SummonResultComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_12331/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/);
    sub_1B885B0(&StringLiteral_12333/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/);
    sub_1B885B0(&StringLiteral_12335/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/);
    sub_1B885B0(&StringLiteral_12346/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/);
    sub_1B885B0(&StringLiteral_12347/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_1B885B0(&StringLiteral_12332/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/);
    sub_1B885B0(&StringLiteral_12345/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/);
    this = (SummonResultComponent_o *)sub_1B885B0(&StringLiteral_12334/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/);
    byte_4A57A5F = 1;
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
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
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
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
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
        v71 = 44LL;
        if ( size == 1 )
          v71 = 40LL;
        GameObjectExtensions__SetLocalPositionX(
          v69,
          (float)*(int *)((char *)&static_fields->TUTORIAL_BACK_ARROW_WAY + v71),
          0LL);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12346/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0LL);
        v74 = Method_System_Array_Empty_object___;
        v75 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v75 )
        {
          sub_1BDA4E8(Method_System_Array_Empty_object___);
          v75 = v74[7];
        }
        v76 = *(_QWORD *)(v75 + 16);
        if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
          v76 = sub_1BDA48C(v76);
        if ( !*(_DWORD *)(v76 + 224) )
          j_il2cpp_runtime_class_init_0(v76);
        v77 = *(_QWORD *)(v74[7] + 16LL);
        if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
          v77 = sub_1BDA48C(v77);
        this = (SummonResultComponent_o *)System_String__Format_61721540(
                                            v73,
                                            **(System_Object_array ***)(v77 + 184),
                                            0LL);
        if ( !extraGiftTitleLb )
          goto LABEL_156;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0LL);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12345/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0LL);
        v79 = Method_System_Array_Empty_object___;
        v80 = v78;
        v81 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v81 )
        {
          sub_1BDA4E8(Method_System_Array_Empty_object___);
          v81 = v79[7];
        }
        v82 = *(_QWORD *)(v81 + 16);
        if ( (*(_BYTE *)(v82 + 309) & 1) == 0 )
          v82 = sub_1BDA48C(v82);
        if ( !*(_DWORD *)(v82 + 224) )
          j_il2cpp_runtime_class_init_0(v82);
        v83 = *(_QWORD *)(v79[7] + 16LL);
        if ( (*(_BYTE *)(v83 + 309) & 1) == 0 )
          v83 = sub_1BDA48C(v83);
        this = (SummonResultComponent_o *)System_String__Format_61721540(
                                            v80,
                                            **(System_Object_array ***)(v83 + 184),
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
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12347/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
        if ( !extraGiftMsg2Lb )
          goto LABEL_156;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0LL);
      SummonResultComponent__SetSpecialGiftPosition(v10, v84);
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
      sub_1B88814(this, giftIds);
    if ( !v14 )
      goto LABEL_156;
    v24 = v23->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v14,
                                        0,
                                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
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
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12335/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
          if ( v32 )
          {
            UILabel__set_text(v32, (System_String_o *)this, 0LL);
            v33 = v10->fields.extraGiftMsg2Lb;
            v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12333/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v14,
                                                0,
                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v28;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v28 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v14,
                                                    0,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_156;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v99 = m_CancellationTokenSource_high;
              v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v35, v36, v37);
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
        sub_1B8880C(this, giftIds);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v86 = SummonResultComponent_TypeInfo;
      v87 = v85;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v86 = SummonResultComponent_TypeInfo;
      }
      v88 = v86->static_fields;
      v89 = 48LL;
      if ( adjustTitleLabel )
        v89 = 52LL;
      GameObjectExtensions__SetLocalPositionX(v87, (float)*(int *)((char *)&v88->TUTORIAL_BACK_ARROW_WAY + v89), 0LL);
      v90 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_12334/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v92 = Method_System_Array_Empty_object___;
      v93 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v93 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_object___);
        v93 = v92[7];
      }
      v94 = *(_QWORD *)(v93 + 16);
      if ( (*(_BYTE *)(v94 + 309) & 1) == 0 )
        v94 = sub_1BDA48C(v94);
      if ( !*(_DWORD *)(v94 + 224) )
        j_il2cpp_runtime_class_init_0(v94);
      v95 = *(_QWORD *)(v92[7] + 16LL);
      if ( (*(_BYTE *)(v95 + 309) & 1) == 0 )
        v95 = sub_1BDA48C(v95);
      this = (SummonResultComponent_o *)System_String__Format_61721540(v91, **(System_Object_array ***)(v95 + 184), 0LL);
      if ( !v90 )
        goto LABEL_156;
      UILabel__set_text(v90, (System_String_o *)this, 0LL);
      v60 = v10->fields.extraGiftMsg2Lb;
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12331/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v14,
                                          0,
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v65 = &v98;
      v98 = HIDWORD(this->fields.m_CancellationTokenSource);
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
      v58 = 32LL;
      if ( adjustTitleLabel )
        v58 = 36LL;
      GameObjectExtensions__SetLocalPositionX(v56, (float)*(int *)((char *)&v57->TUTORIAL_BACK_ARROW_WAY + v58), 0LL);
      v59 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12335/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      if ( !v59 )
        goto LABEL_156;
      UILabel__set_text(v59, (System_String_o *)this, 0LL);
      v60 = v10->fields.extraGiftMsg2Lb;
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12332/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v14,
                                          0,
                                          (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v65 = &v97;
      v97 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v65, v62, v63, v64);
    this = (SummonResultComponent_o *)System_String__Format(v61, v96, 0LL);
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

  if ( (byte_4A57A60 & 1) == 0 )
  {
    sub_1B885B0(&SummonResultComponent_TypeInfo);
    byte_4A57A60 = 1;
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
        sub_1B88814(extraGiftTitleLb, method);
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
    sub_1B8880C(extraGiftTitleLb, method);
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
  if ( v18 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 68LL) )
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

  if ( (byte_4A57A61 & 1) == 0 )
  {
    sub_1B885B0(&SummonResultComponent_TypeInfo);
    byte_4A57A61 = 1;
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
        sub_1B88814(extraGiftTitleLb, method);
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
    sub_1B8880C(extraGiftTitleLb, method);
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
  if ( v18 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 68LL) )
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


void __fastcall SummonResultComponent___DialogCallBack_b__71_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4A57A6C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SummonResultComponent_EndCloseDialogCallBack__);
    byte_4A57A6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v4, 0LL);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_8:
    sub_1B8880C(v5, v6);
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

  if ( (byte_4A57A63 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4A57A63 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1B8880C(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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
  int v5; // w22
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w0
  int v8; // w22
  UnityEngine_Object_o *v9; // x20

  if ( (byte_4A57A68 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57A68 = 1;
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
      UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_26:
    sub_1B8880C(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( v7 >= 1 )
  {
    v8 = v7 + 1;
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
                                             v8 - 2,
                                             0LL);
      if ( !fstGrid )
        goto LABEL_26;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v9, 0LL);
    }
    while ( --v8 > 1 );
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


void __fastcall SummonResultComponent__initGachaResultList(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        int32_t type,
        System_Int32_array *extraGiftIds,
        GachaExtraGifts_array *gachaExtraGiftList,
        const MethodInfo *method)
{
  GachaInfos_array *v9; // x26
  __int64 changeSceneBtnInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellWidth; // s10
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x20
  float v21; // s9
  int maxPerLine; // s11
  System_Collections_Generic_List_int__o *v23; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  int v26; // w8
  __int64 v27; // x22
  GachaInfos_o **m_Items; // x23
  struct UIGrid_o **p_fstGrid; // x8
  GachaInfos_array *v30; // x24
  GachaInfos_o *v31; // x25
  UnityEngine_GameObject_o *targetGo; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v34; // x26
  UnityEngine_Transform_o *v35; // x27
  const MethodInfo *v36; // x2
  int32_t objectId; // w28
  bool v38; // w27
  bool IsCommandCode; // w28
  SummonResultInfoComponent_ClickDelegate_o *v40; // x0
  const MethodInfo *v41; // x3
  _QWORD *v42; // x8
  bool v43; // zf
  SummonResultInfoComponent_ClickDelegate_o *v44; // x28
  const MethodInfo *v45; // x6
  int32_t sellQp; // w26
  int32_t summonBeforeQp; // w27
  int QpMax; // w8
  int32_t sellMana; // w26
  int32_t summonBeforeMana; // w27
  int UserItemMax; // w8
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  float v55; // s12
  float v56; // s11
  float v57; // s8
  float v58; // s3
  float v59; // s0
  struct UILabel_o *autoSaleMsgLb; // x23
  System_String_o *v61; // x1
  UILabel_o *extraGiftMsgLb; // x23
  SummonResultComponent___c_c *v63; // x0
  System_Collections_Generic_IEnumerable_T__o *extraGiftIconComponents; // x23
  System_Action_object__o *_9__61_0; // x24
  Il2CppObject *v66; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x5
  float v72; // s8
  struct UIGrid_o *v73; // x8
  GachaExtraGifts_o *v74; // x9
  int32_t gachaExtraGiftResultType; // w2
  int32_t gachaExtraGiftBonusType; // w3
  SummonResultComponent_o *v77; // x0
  System_Collections_Generic_IEnumerable_int__o *v78; // x1
  bool v79; // w4
  System_Collections_Generic_HashSet_int__o *v80; // x22
  __int64 v81; // x8
  __int64 v82; // x20
  int32_t v83; // w23
  int32_t v84; // w24
  GachaExtraGifts_o *v85; // x27
  System_Int32_array *v86; // [xsp+8h] [xbp-A8h]
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+10h] [xbp-A0h]
  char v88; // [xsp+1Ch] [xbp-94h]
  __int64 v89; // [xsp+28h] [xbp-88h] BYREF
  System_Nullable_int__o v90; // 0:x0.8
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4

  v9 = resultList;
  if ( (byte_4A57A5D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_ItemIconComponent__TypeInfo);
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1B885B0(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_int___ctor__);
    sub_1B885B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1B885B0(&Method_SummonResultComponent_showResCcDetail__);
    sub_1B885B0(&Method_SummonResultComponent_showResSvtDetail__);
    sub_1B885B0(&SummonResultComponent_TypeInfo);
    sub_1B885B0(&Method_SummonResultComponent___c__initGachaResultList_b__61_0__);
    sub_1B885B0(&SummonResultComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_12347/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_1B885B0(&StringLiteral_12369/*"SUMMON_RESULT_AUTOSALE_MSG"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57A5D = 1;
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
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                  (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v13, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v14, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v15, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_144;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    v86 = extraGiftIds;
    v21 = scdGrid->fields.cellWidth;
    maxPerLine = fstGrid->fields.maxPerLine;
    v23 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v23,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.befSvtList = v23;
    p_befSvtList = &this->fields.befSvtList;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.befSvtList, (int32_t)v23, v24, v25);
    v26 = v9->max_length;
    if ( v26 >= 1 )
    {
      v88 = 0;
      v27 = 0LL;
      m_Items = v9->m_Items;
      while ( (unsigned int)v27 < v26 )
      {
        if ( (unsigned int)v27 >= 6 )
          p_fstGrid = &this->fields.scdGrid;
        else
          p_fstGrid = &this->fields.fstGrid;
        changeSceneBtnInfo = (__int64)*p_fstGrid;
        if ( !*p_fstGrid )
          goto LABEL_144;
        v30 = v9;
        v31 = m_Items[v27];
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
        v34 = (UnityEngine_GameObject_o *)changeSceneBtnInfo;
        changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                        0LL);
        v35 = (UnityEngine_Transform_o *)changeSceneBtnInfo;
        if ( !byte_4A55CE6 )
        {
          changeSceneBtnInfo = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        if ( !v35 )
          goto LABEL_144;
        UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        if ( !v31 )
          goto LABEL_144;
        if ( v31->fields.isNew
          && (objectId = v31->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v36)) )
        {
          changeSceneBtnInfo = (__int64)*p_befSvtList;
          if ( !*p_befSvtList )
            goto LABEL_144;
          v52 = *(_QWORD *)(changeSceneBtnInfo + 16);
          v53 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(changeSceneBtnInfo + 28);
          if ( !v52 )
            goto LABEL_144;
          v54 = *(int *)(changeSceneBtnInfo + 24);
          if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)changeSceneBtnInfo,
              objectId,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            v38 = 0;
          }
          else
          {
            v38 = 0;
            *(_DWORD *)(changeSceneBtnInfo + 24) = v54 + 1;
            *(_DWORD *)(v52 + 4 * v54 + 32) = objectId;
          }
        }
        else
        {
          v38 = 1;
        }
        IsCommandCode = SvtType__IsCommandCode(v31->fields.type, 0LL);
        v40 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1B887FC(SummonResultInfoComponent_ClickDelegate_TypeInfo);
        v42 = &Method_SummonResultComponent_showResCcDetail__;
        v43 = !IsCommandCode;
        v44 = v40;
        if ( v43 )
          v42 = &Method_SummonResultComponent_showResSvtDetail__;
        SummonResultInfoComponent_ClickDelegate___ctor(v40, (Il2CppObject *)this, *v42, v41);
        if ( v31->fields.sellMana || v31->fields.sellQp )
        {
          v44 = 0LL;
          v88 = 1;
        }
        changeSceneBtnInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                        v34,
                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
        if ( !changeSceneBtnInfo )
          goto LABEL_144;
        SummonResultInfoComponent__setResultData(
          (SummonResultInfoComponent_o *)changeSceneBtnInfo,
          v31,
          v38,
          v44,
          this->fields.summonBeforeQp,
          this->fields.summonBeforeMana,
          v45);
        changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        sellQp = v31->fields.sellQp;
        summonBeforeQp = this->fields.summonBeforeQp;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        }
        QpMax = *(_DWORD *)(*(_QWORD *)(changeSceneBtnInfo + 184) + 4LL);
        if ( summonBeforeQp + sellQp >= QpMax )
        {
          if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
            QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
          }
        }
        else
        {
          QpMax = this->fields.summonBeforeQp + v31->fields.sellQp;
        }
        this->fields.summonBeforeQp = QpMax;
        sellMana = v31->fields.sellMana;
        summonBeforeMana = this->fields.summonBeforeMana;
        if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
        {
          j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
          changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        }
        UserItemMax = *(_DWORD *)(*(_QWORD *)(changeSceneBtnInfo + 184) + 68LL);
        if ( summonBeforeMana + sellMana >= UserItemMax )
        {
          v9 = v30;
          if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
          }
        }
        else
        {
          v9 = v30;
          UserItemMax = this->fields.summonBeforeMana + v31->fields.sellMana;
        }
        this->fields.summonBeforeMana = UserItemMax;
        v26 = v9->max_length;
        if ( (int)++v27 >= v26 )
          goto LABEL_64;
      }
LABEL_145:
      sub_1B88814(changeSceneBtnInfo, resultList);
    }
    v88 = 0;
LABEL_64:
    changeSceneBtnInfo = (__int64)this->fields.fstGrid;
    v55 = (float)max_length;
    v56 = (float)maxPerLine;
    v57 = (float)max_length <= v56 ? 22.0 : 106.0;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)changeSceneBtnInfo,
                                    0LL);
    extraGiftIds = v86;
    if ( !changeSceneBtnInfo )
      goto LABEL_144;
    v58 = v55 <= v56 ? v55 : v56;
    v91.fields.x = (float)(cellWidth * -0.5) * (float)(v58 + -1.0);
    v91.fields.y = v57;
    v91.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v91, 0LL);
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
    v59 = (float)(v55 - v56) + -1.0;
    if ( v55 <= v56 )
      v59 = -1.0;
    v92.fields.x = (float)(v21 * -0.5) * v59;
    v92.fields.y = -62.0;
    v92.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v92, 0LL);
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
    if ( (v88 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
      autoSaleMsgLb = this->fields.autoSaleMsgLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      changeSceneBtnInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12369/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0LL);
      if ( !autoSaleMsgLb )
        goto LABEL_144;
      v61 = (System_String_o *)changeSceneBtnInfo;
      changeSceneBtnInfo = (__int64)autoSaleMsgLb;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
      changeSceneBtnInfo = (__int64)this->fields.autoSaleMsgLb;
      if ( !changeSceneBtnInfo )
        goto LABEL_144;
      v61 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)changeSceneBtnInfo, v61, 0LL);
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
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
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
  v63 = SummonResultComponent___c_TypeInfo;
  extraGiftIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraGiftIconComponents;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    v63 = SummonResultComponent___c_TypeInfo;
  }
  _9__61_0 = (System_Action_object__o *)v63->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = SummonResultComponent___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v63->static_fields->__9;
    _9__61_0 = (System_Action_object__o *)sub_1B887FC(System_Action_ItemIconComponent__TypeInfo);
    System_Action_object____ctor(_9__61_0, v66, Method_SummonResultComponent___c__initGachaResultList_b__61_0__, 0LL);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Action_ItemIconComponent__o *)_9__61_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v68, v69);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__61_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_ItemIconComponent___);
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
      v72 = 0.0;
      if ( v9 )
      {
        v89 = 0LL;
        v90 = (System_Nullable_int__o)&v89;
        System_Nullable_int____ctor(
          v90,
          v9->max_length,
          (const MethodInfo_361A2C0 *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v89 )
          v72 = (float)SHIDWORD(v89);
      }
      v73 = this->fields.fstGrid;
      if ( v73 )
      {
        if ( !gachaExtraGiftList->max_length )
          goto LABEL_145;
        v74 = gachaExtraGiftList->m_Items[0];
        if ( v74 )
        {
          gachaExtraGiftBonusType = v74->fields.gachaExtraGiftBonusType;
          gachaExtraGiftResultType = v74->fields.gachaExtraGiftResultType;
          v77 = this;
          v78 = (System_Collections_Generic_IEnumerable_int__o *)extraGiftIds;
          v79 = v72 > (float)v73->fields.maxPerLine;
LABEL_142:
          SummonResultComponent__SetBonusGiftDisplay(
            v77,
            v78,
            gachaExtraGiftResultType,
            gachaExtraGiftBonusType,
            v79,
            v71);
          goto LABEL_143;
        }
      }
      goto LABEL_144;
    }
    v80 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v80,
      (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v81 = *(_QWORD *)&extraGiftIds->max_length;
    if ( (int)v81 >= 1 )
    {
      v82 = 0LL;
      v83 = 0;
      v84 = 0;
      while ( (unsigned int)v82 < (unsigned int)v81 && (unsigned int)v82 < gachaExtraGiftList->max_length )
      {
        v85 = gachaExtraGiftList->m_Items[v82];
        if ( !v85 )
          goto LABEL_144;
        if ( v85->fields.gachaExtraGiftBonusType == 2 )
        {
          if ( !v80 )
            goto LABEL_144;
          changeSceneBtnInfo = System_Collections_Generic_HashSet_int___Add(
                                 v80,
                                 extraGiftIds->m_Items[v82 + 1],
                                 (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v83 = v85->fields.gachaExtraGiftBonusType;
          v84 = v85->fields.gachaExtraGiftResultType;
          v81 = *(_QWORD *)&extraGiftIds->max_length;
        }
        if ( (int)++v82 >= (int)v81 )
          goto LABEL_136;
      }
      goto LABEL_145;
    }
    v84 = 0;
    v83 = 0;
LABEL_136:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)extraGiftIds, 0LL) )
    {
      v77 = this;
      v78 = (System_Collections_Generic_IEnumerable_int__o *)v80;
      gachaExtraGiftResultType = v84;
      gachaExtraGiftBonusType = v83;
      v79 = 0;
      goto LABEL_142;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12347/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
    if ( !this->fields.extraGiftMsgLb )
LABEL_144:
      sub_1B8880C(changeSceneBtnInfo, resultList);
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
  }
LABEL_143:
  SummonResultComponent__setListByType(this, this->fields.dispType, v70);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A57A69 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12137/*"SHOW_TALK"*/);
    byte_4A57A69 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1B8880C(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12137/*"SHOW_TALK"*/, 0LL);
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
    sub_1B8880C(mWidget, method);
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
    sub_1B88814(mWidget, method);
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
  int64_t closeInfo; // x0
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
  int32_t gachaId; // w22
  __int64 v22; // x0
  __int64 v23; // x0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Master_object; // x24
  System_String_o *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  UILabel_o *v30; // x23
  Il2CppObject *v31; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v34; // x8
  __int64 v35; // x0
  int v36; // w23
  SummonControl_c *v37; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w22
  bool v39; // w0
  Il2CppObject *v40; // x0
  Il2CppObject *v41; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  UILabel_o *v45; // x22
  Il2CppObject *v46; // x0
  Il2CppObject *v47; // x21
  UserItemEntity_o *v48; // x0
  UILabel_o *v49; // x21
  struct UILabel_o *v50; // x21
  System_String_o *v51; // x1
  int32_t monitor_high; // w9
  UILabel_o *v53; // x21
  UILabel_o *v54; // x21
  UILabel_o *v55; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  UILabel_o *v57; // x22
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x0
  struct SummonControl_o *v62; // x8
  struct SummonControl_o *v63; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v69; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int32_t v71; // w2
  int32_t v72; // w3
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_Component_o *Parent; // x0
  SummonResultComponent_c *v76; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v83; // s11
  float v84; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v86; // s14
  int32_t gachaTime; // [xsp+4h] [xbp-BCh] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-B8h] BYREF
  Il2CppObject *v89; // [xsp+10h] [xbp-B0h] BYREF
  UserGachaEntity_o *entity; // [xsp+18h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+28h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v92; // 0:s0.4,4:s1.4
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
  UnityEngine_Rect_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v105; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  v3 = type;
  if ( (byte_4A57A5E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1B885B0(&FSUtility_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SummonControl_TypeInfo);
    sub_1B885B0(&SummonResultComponent_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&UserGachaMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_12318/*"SUMMON_APPEND_END"*/);
    sub_1B885B0(&StringLiteral_12124/*"SHORT_SERVANT_FORMATION"*/);
    sub_1B885B0(&StringLiteral_12349/*"SUMMON_FREE_10_BTN"*/);
    sub_1B885B0(&StringLiteral_12129/*"SHORT_SERVANT_SELL"*/);
    sub_1B885B0(&StringLiteral_12353/*"SUMMON_LIMIT_OVER_BTN"*/);
    sub_1B885B0(&StringLiteral_12375/*"SUMMON_TICKET_END"*/);
    sub_1B885B0(&StringLiteral_12114/*"SHORT_SERVANT_COMBINE"*/);
    sub_1B885B0(&StringLiteral_3882/*"CONTINUE_SUMMON_BTN"*/);
    byte_4A57A5E = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  v89 = 0LL;
  entity = 0LL;
  appendEnt = 0LL;
  if ( v3 == 1 )
  {
    closeInfo = (int64_t)this->fields.closeInfo;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 0, 0LL);
    closeInfo = (int64_t)this->fields.changeSceneBtnInfo;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3882/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v8 = v6;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12124/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_175;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12114/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_175;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12129/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_175;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    closeInfo = (int64_t)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_175;
    v93.fields.r = 1.0;
    v93.fields.g = 1.0;
    v93.fields.b = 1.0;
    v93.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v93, 0LL);
    closeInfo = (int64_t)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v94.fields.r = 1.0;
    v94.fields.g = 1.0;
    v94.fields.b = 1.0;
    v94.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v94, 0LL);
    closeInfo = (int64_t)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v95.fields.r = 1.0;
    v95.fields.g = 1.0;
    v95.fields.b = 1.0;
    v95.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v95, 0LL);
    closeInfo = (int64_t)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v96.fields.r = 1.0;
    v96.fields.g = 1.0;
    v96.fields.b = 1.0;
    v96.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v96, 0LL);
    closeInfo = (int64_t)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v97.fields.r = 1.0;
    v97.fields.g = 1.0;
    v97.fields.b = 1.0;
    v97.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v97, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_175;
    closeInfo = (int64_t)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_175;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v15 = this->fields.summonCtrl;
    if ( !v15 )
      goto LABEL_175;
    gachaParamData = v15->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_175;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v12, v13, v14);
    closeInfo = (int64_t)System_String__Format(v8, v19, 0LL);
    if ( !summonBtnLabel )
      goto LABEL_175;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0LL);
    v20 = this->fields.summonBtnLabel;
    closeInfo = (int64_t)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !v20 )
      goto LABEL_175;
    UILabel__SetCondensedScale(v20, SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE, 0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v22 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
          v22 = sub_1BDA48C(v22);
        v23 = *(_QWORD *)(*(_QWORD *)(v22 + 192) + 16LL);
        if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
          v23 = sub_1BDA48C(v23);
        closeInfo = **(_QWORD **)(v23 + 184);
        if ( !closeInfo )
          goto LABEL_175;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !Master_object )
          goto LABEL_175;
        closeInfo = UserGachaMaster__TryGetEntity((UserGachaMaster_o *)Master_object, &entity, closeInfo, gachaId, 0LL);
        if ( !MasterData_object )
          goto LABEL_175;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v89,
          gachaId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12353/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !v89 )
          goto LABEL_175;
        v26 = (System_String_o *)closeInfo;
        if ( !LODWORD(v89[4].monitor) )
          goto LABEL_52;
        closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v89 || !closeInfo )
          goto LABEL_175;
        closeInfo = UserGachaExtraCountMaster__getExtraCount(
                      (UserGachaExtraCountMaster_o *)closeInfo,
                      (int32_t)v89[4].monitor,
                      0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_52;
        v30 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v27, v28, v29);
        closeInfo = (int64_t)System_String__Format(v8, v31, 0LL);
        if ( !v30 )
          goto LABEL_175;
        UILabel__set_text(v30, (System_String_o *)closeInfo, 0LL);
LABEL_52:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_175;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v89,
                                &appendEnt,
                                0LL);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v26 = LocalizationManager__Get((System_String_o *)StringLiteral_12318/*"SUMMON_APPEND_END"*/, 0LL);
            }
LABEL_114:
            closeInfo = (int64_t)this->fields.summonBtn;
            this->fields.isLimitOver = 1;
            if ( !closeInfo )
              goto LABEL_175;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
            closeInfo = (int64_t)this->fields.summonBtnSpr;
            if ( !closeInfo )
              goto LABEL_175;
            v102.fields.r = 0.35547;
            v102.fields.a = 1.0;
            v102.fields.g = 0.35547;
            v102.fields.b = 0.35547;
            UIWidget__set_color((UIWidget_o *)closeInfo, v102, 0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_175;
            v103.fields.r = 0.5;
            v103.fields.g = 0.5;
            v103.fields.b = 0.5;
            v103.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)closeInfo, v103, 0LL);
            closeInfo = (int64_t)SummonResultComponent_TypeInfo;
            v53 = this->fields.summonBtnLabel;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            if ( !v53 )
              goto LABEL_175;
            UILabel__SetCondensedScale(
              v53,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_175;
            v51 = v26;
LABEL_122:
            UILabel__set_text((UILabel_o *)closeInfo, v51, 0LL);
            goto LABEL_144;
          }
        }
        else if ( entity )
        {
          if ( !v89 )
            goto LABEL_175;
          monitor_high = HIDWORD(v89[5].monitor);
          if ( monitor_high >= 1 && entity->fields.num >= monitor_high )
            goto LABEL_114;
        }
LABEL_110:
        closeInfo = (int64_t)this->fields.summonBtn;
        if ( !closeInfo )
          goto LABEL_175;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_175;
        v100.fields.r = 1.0;
        v100.fields.g = 1.0;
        v100.fields.b = 1.0;
        v100.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v100, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_175;
        v101.fields.r = 1.0;
        v101.fields.g = 1.0;
        v101.fields.b = 1.0;
        v101.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v101, 0LL);
LABEL_144:
        v62 = this->fields.summonCtrl;
        if ( v62 )
        {
          closeInfo = (int64_t)v62->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
            v63 = this->fields.summonCtrl;
            if ( v63 )
            {
              v63->fields.isResult = 1;
              if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
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
                                           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                      closeInfo = (int64_t)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                        closeInfo = (int64_t)GameObjectExtensions__GetParent(v65, 0LL);
                        if ( closeInfo )
                        {
                          closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)closeInfo,
                                                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                            closeInfo = (int64_t)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                              closeInfo = (int64_t)GameObjectExtensions__GetParent(v66, 0LL);
                              if ( closeInfo )
                              {
                                closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)closeInfo,
                                                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                  closeInfo = (int64_t)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v67 = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)closeInfo,
                                            0LL);
                                    closeInfo = (int64_t)GameObjectExtensions__GetParent(v67, 0LL);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)closeInfo,
                                                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                v69 = UnityEngine_Object__Instantiate_object_(
                        touchBlocker,
                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = (struct UnityEngine_GameObject_o *)v69;
                sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.blocker, (int32_t)v69, v71, v72);
                blocker = this->fields.blocker;
                v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v74, 0LL);
                GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                v76 = SummonResultComponent_TypeInfo;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v76 = SummonResultComponent_TypeInfo;
                }
                static_fields = v76->static_fields;
                m_XMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
                m_YMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
                m_Width = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
                m_Height = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                OffsetX = FSUtility__GetOffsetX(68.0, 0, 0LL);
                closeInfo = (int64_t)*p_blocker;
                if ( *p_blocker )
                {
                  v83 = OffsetX;
                  closeInfo = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)closeInfo,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    v84 = m_XMin - v83;
                    v104.fields.m_XMin = v84;
                    v104.fields.m_YMin = m_YMin;
                    v104.fields.m_Width = m_Width;
                    v104.fields.m_Height = m_Height;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v104, 30, 0LL);
                    closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                      v86 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                      closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        v92.fields.x = TutorialBackArrowPos.fields.x - v86;
                        v92.fields.y = TutorialBackArrowPos.fields.y;
                        v105.fields.m_XMin = v84;
                        v105.fields.m_YMin = m_YMin;
                        v105.fields.m_Width = m_Width;
                        v105.fields.m_Height = m_Height;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v92,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v105,
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
        goto LABEL_175;
      case 3:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        v34 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
          v34 = sub_1BDA48C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
        v35 = *(_QWORD *)(*(_QWORD *)(v34 + 192) + 16LL);
        if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
          v35 = sub_1BDA48C(v35);
        closeInfo = **(_QWORD **)(v35 + 184);
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame )
          goto LABEL_175;
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !closeInfo )
          goto LABEL_175;
        v36 = *(_DWORD *)(closeInfo + 24);
        v37 = SummonControl_TypeInfo;
        if ( !SummonControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
          v37 = SummonControl_TypeInfo;
        }
        FRIEND_POINT_SUMMON_ID = v37->static_fields->FRIEND_POINT_SUMMON_ID;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v39 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                FRIEND_POINT_SUMMON_ID,
                &maxNum[1],
                maxNum,
                0LL);
        if ( maxNum[1] > 0 || v39 )
        {
          closeInfo = (int64_t)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_175;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v54 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12349/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v54 )
            goto LABEL_175;
          UILabel__set_text(v54, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v55 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v55 )
            goto LABEL_175;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
        }
        else
        {
          *(_QWORD *)&type = (unsigned int)gachaParamData->fields.gachaTime;
          if ( type == 1 )
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_175;
            type = 1;
          }
          else
          {
            closeInfo = (int64_t)this->fields.summonCtrl;
            if ( v36 <= 1999 )
            {
              if ( !closeInfo )
                goto LABEL_175;
              if ( v36 < 400 )
                type = 1;
              else
                type = v36 / 200;
            }
            else if ( !closeInfo )
            {
              goto LABEL_175;
            }
          }
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, type, 3, 0LL);
          v57 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v58, v59, v60);
          closeInfo = (int64_t)System_String__Format(v8, v61, 0LL);
          if ( !v57 )
            goto LABEL_175;
          UILabel__set_text(v57, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v55 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v55 )
LABEL_175:
            sub_1B8880C(closeInfo, *(_QWORD *)&type);
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
        }
        UILabel__SetCondensedScale(v55, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0LL);
        goto LABEL_144;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_175;
        v40 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_311D934 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v40 )
          goto LABEL_89;
        v41 = v40;
        if ( !LODWORD(v40[4].monitor) )
          goto LABEL_89;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_175;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v41[4].monitor,
               0LL) != 9 )
          goto LABEL_89;
        v45 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v42, v43, v44);
        closeInfo = (int64_t)System_String__Format(v8, v46, 0LL);
        if ( !v45 )
          goto LABEL_175;
        UILabel__set_text(v45, (System_String_o *)closeInfo, 0LL);
LABEL_89:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v47 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !v47 )
          goto LABEL_175;
        v48 = UserItemMaster__GetEntity((UserItemMaster_o *)v47, closeInfo, gachaParamData->fields.ticketItemId, 0LL);
        if ( v48 && v48->fields.num > 0 )
          goto LABEL_110;
        closeInfo = (int64_t)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_175;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_175;
        v98.fields.r = 0.35547;
        v98.fields.a = 1.0;
        v98.fields.g = 0.35547;
        v98.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v98, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_175;
        v99.fields.r = 0.5;
        v99.fields.g = 0.5;
        v99.fields.b = 0.5;
        v99.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v99, 0LL);
        closeInfo = (int64_t)SummonResultComponent_TypeInfo;
        v49 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v49 )
          goto LABEL_175;
        UILabel__SetCondensedScale(
          v49,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0LL);
        v50 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12375/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v50 )
          goto LABEL_175;
        v51 = (System_String_o *)closeInfo;
        closeInfo = (int64_t)v50;
        goto LABEL_122;
      default:
        goto LABEL_144;
    }
  }
  this->fields.dispType = v3;
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

  if ( (byte_4A57A64 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_7097/*"HAVE_SVT_NUM_TITLE"*/);
    sub_1B885B0(&StringLiteral_7096/*"HAVE_SVTEQ_NUM_TITLE"*/);
    byte_4A57A64 = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_23;
  klass = (int)SelfUserGame[1].klass;
  klass_high = HIDWORD(SelfUserGame[1].klass);
  v19 = klass;
  if ( !byte_4A567BB )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    byte_4A567BB = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v6->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7097/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
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
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7096/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
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
    sub_1B8880C(SelfUserGame, v4);
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
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4A57A66 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SummonResultComponent___c__DisplayClass70_0__showResCcDetail_b__0__);
    sub_1B885B0(&SummonResultComponent___c__DisplayClass70_0_TypeInfo);
    byte_4A57A66 = 1;
  }
  v5 = sub_1B887FC(SummonResultComponent___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass70_0__showResCcDetail_b__0__,
    0LL);
  if ( !v12 )
LABEL_8:
    sub_1B8880C(v6, v7);
  CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, v14, 0LL);
}


void __fastcall SummonResultComponent__showResSvtDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4A57A65 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SummonResultComponent___c__DisplayClass69_0__showResSvtDetail_b__0__);
    sub_1B885B0(&SummonResultComponent___c__DisplayClass69_0_TypeInfo);
    byte_4A57A65 = 1;
  }
  v5 = sub_1B887FC(SummonResultComponent___c__DisplayClass69_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass69_0__showResSvtDetail_b__0__,
    0LL);
  if ( !v12 )
LABEL_8:
    sub_1B8880C(v6, v7);
  CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, v14, 0LL);
}


void __fastcall SummonResultComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57A6D & 1) == 0 )
  {
    sub_1B885B0(&SummonResultComponent___c_TypeInfo);
    byte_4A57A6D = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SummonResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SummonResultComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, elm);
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
  Il2CppObject *Instance; // x0
  int64_t usrSvtId; // x20
  Il2CppObject *_4__this; // x22
  CommonUI_o *v6; // x19
  ServantStatusDialog_EndDelegate_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_4A57A6E & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SummonResultComponent_DialogCallBack__);
    byte_4A57A6E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (CommonUI_o *)Instance;
  v7 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v7, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v6 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_30503336(v6, 8, usrSvtId, v7, 0LL, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1B8880C(v8, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v6; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v8; // x19
  ServantStatusDialog_EndDelegate_o *v9; // x21
  CommonUI_o *v10; // x19

  if ( (byte_4A57A6F & 1) == 0 )
  {
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SummonResultComponent_DialogCallBack__);
    byte_4A57A6F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v8 = (CommonUI_o *)v6;
  v9 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v9, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v8 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_30506660(v8, 0, (UserCommandCodeEntity_o *)Entity, v9, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_10:
    sub_1B8880C(Instance, v4);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}