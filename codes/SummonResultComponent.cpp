void SummonResultComponent___cctor(const MethodInfo *method)
{
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v2; // x8

  if ( (byte_4D28CE7 & 1) == 0 )
  {
    sub_1C94098(&SummonResultComponent_TypeInfo);
    byte_4D28CE7 = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_CFE7A0;
  v2 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v2->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_CFF1B0;
  *(_OWORD *)&v2->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = xmmword_CFEA20;
  *(_OWORD *)&v2->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = xmmword_CFE360;
  *(_OWORD *)&v2->SMALL_FONT_SIZE = xmmword_CFF290;
}


void SummonResultComponent___ctor(SummonResultComponent_o *this, const MethodInfo *method)
{
  this->fields.dispType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SummonResultComponent__CheckLimitOver(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  _QWORD *v4; // x0
  int32_t v5; // w19
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_4D28CE4 & 1) == 0 )
  {
    sub_1C94098(&Method_SummonResultComponent_CheckLimitOver__);
    sub_1C94098(&StringLiteral_5464/*"END_SUMMON"*/);
    sub_1C94098(&StringLiteral_8304/*"LIMIT_OVER"*/);
    byte_4D28CE4 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C942F0(0, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8304/*"LIMIT_OVER"*/, 0);
    v4 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_SummonResultComponent_CheckLimitOver__);
    v5 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5464/*"END_SUMMON"*/, 0);
    v4 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C940B0(Method_SummonResultComponent_CheckLimitOver__);
    v5 = 0;
  }
  v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0, 0);
}


void SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  GrandQuestFolderBoardItem_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D28CDC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D28CDC = 1;
  }
  blocker = (UnityEngine_Object_o *)this->fields.blocker;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blocker, 0, 0) )
  {
    p_blocker = (GrandQuestFolderBoardItem_o *)&this->fields.blocker;
    klass = (UnityEngine_Object_o *)p_blocker->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(klass, 0);
    p_blocker->klass = 0;
    sub_1C9403C(p_blocker, 0, v6, v7, v8, v9, v10, v11);
  }
}


void SummonResultComponent__DialogCallBack(SummonResultComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v5; // x8
  CommonUI_o *v6; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4D28CE1 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SummonResultComponent__DialogCallBack_b__80_0__);
    byte_4D28CE1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__80_0__, 0);
  if ( !v6 )
    sub_1C942F0(v9, v10);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0);
}


void SummonResultComponent__EndCloseDialogCallBack(SummonResultComponent_o *this, const MethodInfo *method)
{
  ;
}


void SummonResultComponent__SetActive(SummonResultComponent_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, active, 0),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.scrollBar, 0)) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C942F0(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, active, 0);
}


void SummonResultComponent__SetBonusGiftDisplay(
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
  int m_CancellationTokenSource_high; // w8
  Il2CppObject *v36; // x0
  UILabel_o *v37; // x20
  const MethodInfo *v38; // x1
  struct ItemIconComponent_array *v39; // x8
  __int64 v40; // x24
  int max_length; // w9
  unsigned int v42; // w21
  UIWidget_o *backImg; // x22
  struct ItemIconComponent_array *v44; // x8
  __int64 v45; // x8
  struct ItemIconComponent_array *v46; // x8
  ItemIconComponent_o *v47; // x22
  struct ItemIconComponent_array *v48; // x8
  bool v49; // w1
  struct ItemIconComponent_array *v50; // x8
  __int64 *v51; // x8
  System_String_o *v52; // x22
  UnityEngine_GameObject_o *v53; // x0
  SummonResultComponent_c *v54; // x8
  UnityEngine_GameObject_o *v55; // x23
  struct SummonResultComponent_StaticFields *v56; // x8
  __int64 v57; // x9
  UILabel_o *v58; // x21
  UILabel_o *v59; // x21
  System_String_o *v60; // x22
  int *v61; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SummonResultComponent_c *v63; // x8
  int32_t size; // w21
  UnityEngine_GameObject_o *v65; // x20
  struct SummonResultComponent_StaticFields *static_fields; // x8
  __int64 v67; // x9
  UILabel_o *extraGiftTitleLb; // x20
  System_String_o *v69; // x21
  long double inited; // q0
  _QWORD *v71; // x22
  __int64 v72; // x8
  __int64 v73; // x0
  __int64 v74; // x0
  System_String_o *v75; // x0
  long double v76; // q0
  _QWORD *v77; // x22
  System_String_o *v78; // x21
  __int64 v79; // x8
  __int64 v80; // x0
  __int64 v81; // x0
  const MethodInfo *v82; // x1
  UnityEngine_GameObject_o *v83; // x0
  SummonResultComponent_c *v84; // x8
  UnityEngine_GameObject_o *v85; // x22
  struct SummonResultComponent_StaticFields *v86; // x8
  __int64 v87; // x9
  UILabel_o *v88; // x21
  System_String_o *v89; // x22
  long double v90; // q0
  _QWORD *v91; // x23
  __int64 v92; // x8
  __int64 v93; // x0
  __int64 v94; // x0
  Il2CppObject *v95; // x0
  int v96; // [xsp+Ch] [xbp-54h] BYREF
  int v97; // [xsp+18h] [xbp-48h] BYREF
  int v98; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4D28CD9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_object___);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&SummonResultComponent_TypeInfo);
    sub_1C94098(&StringLiteral_12482/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/);
    sub_1C94098(&StringLiteral_12484/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/);
    sub_1C94098(&StringLiteral_12475/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/);
    sub_1C94098(&StringLiteral_12486/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/);
    sub_1C94098(&StringLiteral_12498/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/);
    sub_1C94098(&StringLiteral_12499/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_1C94098(&StringLiteral_12483/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/);
    sub_1C94098(&StringLiteral_12497/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/);
    this = (SummonResultComponent_o *)sub_1C94098(&StringLiteral_12485/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/);
    byte_4D28CD9 = 1;
  }
  summonCtrl = v10->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_159;
  gachaParamData = summonCtrl->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_159;
  if ( giftIds && giftBonusType && gachaParamData->fields.gachaType != 5 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !this )
      goto LABEL_159;
    this = (SummonResultComponent_o *)GiftMaster__GetGiftListByIds((GiftMaster_o *)this, giftIds, 0);
    v13 = giftBonusType == 2;
    v14 = (System_Collections_Generic_List_object__o *)this;
    if ( v13 )
    {
      if ( !this )
        goto LABEL_159;
      extraGiftIconComponents = v10->fields.extraGiftIconComponents;
      if ( !extraGiftIconComponents )
        goto LABEL_159;
      if ( SLODWORD(this->fields.m_CancellationTokenSource) <= SLODWORD(extraGiftIconComponents->max_length) )
      {
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_159;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_159;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
        if ( !this )
          goto LABEL_159;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_159;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v39 = v10->fields.extraGiftIconComponents;
        if ( !v39 )
          goto LABEL_159;
        v40 = 4;
        while ( 1 )
        {
          max_length = v39->max_length;
          v42 = v40 - 4;
          if ( (int)v40 - 4 >= max_length )
            break;
          if ( v42 >= max_length )
            goto LABEL_160;
          this = (SummonResultComponent_o *)*((_QWORD *)&v39->obj.klass + v40);
          if ( !this )
            goto LABEL_159;
          if ( (signed int)v42 >= v14->fields._size )
          {
            ItemIconComponent__Clear((ItemIconComponent_o *)this, 0);
            v50 = v10->fields.extraGiftIconComponents;
            if ( !v50 )
              goto LABEL_159;
            if ( v42 >= LODWORD(v50->max_length) )
              goto LABEL_160;
            this = (SummonResultComponent_o *)*((_QWORD *)&v50->obj.klass + v40);
            if ( !this )
              goto LABEL_159;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_159;
            v49 = 0;
          }
          else
          {
            backImg = (UIWidget_o *)this->fields.backImg;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            if ( !backImg )
              goto LABEL_159;
            UIWidget__set_width(
              backImg,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0);
            v44 = v10->fields.extraGiftIconComponents;
            if ( !v44 )
              goto LABEL_159;
            if ( v42 >= LODWORD(v44->max_length) )
              goto LABEL_160;
            v45 = *((_QWORD *)&v44->obj.klass + v40);
            if ( !v45 )
              goto LABEL_159;
            this = *(SummonResultComponent_o **)(v45 + 40);
            if ( !this )
              goto LABEL_159;
            UIWidget__set_height(
              (UIWidget_o *)this,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0);
            v46 = v10->fields.extraGiftIconComponents;
            if ( !v46 )
              goto LABEL_159;
            if ( v42 >= LODWORD(v46->max_length) )
              goto LABEL_160;
            v47 = (ItemIconComponent_o *)*((_QWORD *)&v46->obj.klass + v40);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v14,
                                                v42,
                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !v47 )
              goto LABEL_159;
            ItemIconComponent__SetGift(v47, (GiftEntity_o *)this, -1, 0, 0);
            v48 = v10->fields.extraGiftIconComponents;
            if ( !v48 )
              goto LABEL_159;
            if ( v42 >= LODWORD(v48->max_length) )
              goto LABEL_160;
            this = (SummonResultComponent_o *)*((_QWORD *)&v48->obj.klass + v40);
            if ( !this )
              goto LABEL_159;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_159;
            v49 = 1;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v49, 0);
          v39 = v10->fields.extraGiftIconComponents;
          ++v40;
          if ( !v39 )
            goto LABEL_159;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_159;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v63 = SummonResultComponent_TypeInfo;
        size = v14->fields._size;
        v65 = gameObject;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v63 = SummonResultComponent_TypeInfo;
        }
        static_fields = v63->static_fields;
        v67 = 48;
        if ( size == 1 )
          v67 = 44;
        GameObjectExtensions__SetLocalPositionX(
          v65,
          (float)*(int *)((char *)&static_fields->TUTORIAL_BACK_ARROW_WAY + v67),
          0);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12498/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0);
        v71 = Method_System_Array_Empty_object___;
        v72 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v72 )
        {
          sub_1C6A188(Method_System_Array_Empty_object___);
          v72 = v71[7];
        }
        v73 = *(_QWORD *)(v72 + 16);
        if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
          v73 = sub_1C6A12C(inited);
        if ( !*(_DWORD *)(v73 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v73);
        v74 = *(_QWORD *)(v71[7] + 16LL);
        if ( (*(_BYTE *)(v74 + 309) & 1) == 0 )
          v74 = sub_1C6A12C(inited);
        this = (SummonResultComponent_o *)System_String__Format_64459188(v69, **(System_Object_array ***)(v74 + 184), 0);
        if ( !extraGiftTitleLb )
          goto LABEL_159;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v75 = LocalizationManager__Get((System_String_o *)StringLiteral_12497/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0);
        v77 = Method_System_Array_Empty_object___;
        v78 = v75;
        v79 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v79 )
        {
          sub_1C6A188(Method_System_Array_Empty_object___);
          v79 = v77[7];
        }
        v80 = *(_QWORD *)(v79 + 16);
        if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
          v80 = sub_1C6A12C(v76);
        if ( !*(_DWORD *)(v80 + 224) )
          v76 = j_il2cpp_runtime_class_init_0(v80);
        v81 = *(_QWORD *)(v77[7] + 16LL);
        if ( (*(_BYTE *)(v81 + 309) & 1) == 0 )
          v81 = sub_1C6A12C(v76);
        this = (SummonResultComponent_o *)System_String__Format_64459188(v78, **(System_Object_array ***)(v81 + 184), 0);
        if ( !extraGiftMsg2Lb )
          goto LABEL_159;
      }
      else
      {
        this = (SummonResultComponent_o *)v10->fields.extraGiftMsgLb;
        if ( !this )
          goto LABEL_159;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_159;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        extraGiftMsg2Lb = v10->fields.extraGiftMsgLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12499/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0);
        if ( !extraGiftMsg2Lb )
          goto LABEL_159;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0);
      SummonResultComponent__SetSpecialGiftPosition(v10, v82);
      return;
    }
    v17 = v10->fields.extraGiftIconComponents;
    if ( !v17 )
      goto LABEL_159;
    if ( !LODWORD(v17->max_length) )
      goto LABEL_160;
    v18 = v17->m_Items[0];
    if ( !v18 )
      goto LABEL_159;
    iconSprite = (UIWidget_o *)v18->fields.iconSprite;
    this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !iconSprite )
      goto LABEL_159;
    UIWidget__set_width(iconSprite, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0);
    v20 = v10->fields.extraGiftIconComponents;
    if ( !v20 )
      goto LABEL_159;
    if ( !LODWORD(v20->max_length) )
      goto LABEL_160;
    v21 = v20->m_Items[0];
    if ( !v21 )
      goto LABEL_159;
    this = (SummonResultComponent_o *)v21->fields.iconSprite;
    if ( !this )
      goto LABEL_159;
    UIWidget__set_height((UIWidget_o *)this, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0);
    v22 = v10->fields.extraGiftIconComponents;
    if ( !v22 )
      goto LABEL_159;
    if ( !LODWORD(v22->max_length) )
      goto LABEL_160;
    this = (SummonResultComponent_o *)v22->m_Items[0];
    if ( !this )
      goto LABEL_159;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
    if ( !this )
      goto LABEL_159;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
    if ( !this )
      goto LABEL_159;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_159;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v23 = v10->fields.extraGiftIconComponents;
    if ( !v23 )
      goto LABEL_159;
    if ( !LODWORD(v23->max_length) )
LABEL_160:
      sub_1C942F8(this);
    if ( !v14 )
      goto LABEL_159;
    v24 = v23->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v14,
                                        0,
                                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !v24 )
      goto LABEL_159;
    ItemIconComponent__SetGift(v24, (GiftEntity_o *)this, -1, 0, 0);
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
          v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
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
            0);
          v32 = v10->fields.extraGiftTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12486/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0);
          if ( v32 )
          {
            UILabel__set_text(v32, (System_String_o *)this, 0);
            v33 = v10->fields.extraGiftMsg2Lb;
            v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12484/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v14,
                                                0,
                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v28;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v28 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v14,
                                                    0,
                                                    (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_159;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v98 = m_CancellationTokenSource_high;
              v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
              this = (SummonResultComponent_o *)System_String__Format(v34, v36, 0);
              if ( v33 )
              {
                UILabel__set_text(v33, (System_String_o *)this, 0);
                this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
                v37 = v10->fields.extraGiftTitleLb;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                if ( v37 )
                {
                  UILabel__set_fontSize(v37, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0);
                  this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
                  if ( this )
                  {
                    UILabel__set_fontSize(
                      (UILabel_o *)this,
                      SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE,
                      0);
LABEL_157:
                    SummonResultComponent__SetBonusGiftPosition(v10, v38);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_159:
        sub_1C942F0(this, giftIds);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_159;
      v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v84 = SummonResultComponent_TypeInfo;
      v85 = v83;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v84 = SummonResultComponent_TypeInfo;
      }
      v86 = v84->static_fields;
      v87 = 52;
      if ( adjustTitleLabel )
        v87 = 56;
      GameObjectExtensions__SetLocalPositionX(v85, (float)*(int *)((char *)&v86->TUTORIAL_BACK_ARROW_WAY + v87), 0);
      v88 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v89 = LocalizationManager__Get((System_String_o *)StringLiteral_12485/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0);
      v91 = Method_System_Array_Empty_object___;
      v92 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v92 )
      {
        sub_1C6A188(Method_System_Array_Empty_object___);
        v92 = v91[7];
      }
      v93 = *(_QWORD *)(v92 + 16);
      if ( (*(_BYTE *)(v93 + 309) & 1) == 0 )
        v93 = sub_1C6A12C(v90);
      if ( !*(_DWORD *)(v93 + 224) )
        v90 = j_il2cpp_runtime_class_init_0(v93);
      v94 = *(_QWORD *)(v91[7] + 16LL);
      if ( (*(_BYTE *)(v94 + 309) & 1) == 0 )
        v94 = sub_1C6A12C(v90);
      this = (SummonResultComponent_o *)System_String__Format_64459188(v89, **(System_Object_array ***)(v94 + 184), 0);
      if ( !v88 )
        goto LABEL_159;
      UILabel__set_text(v88, (System_String_o *)this, 0);
      v59 = v10->fields.extraGiftMsg2Lb;
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12482/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v14,
                                          0,
                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_159;
      v61 = &v97;
      v97 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    else
    {
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( v10->fields.isOneTimeFreeSummon )
        v51 = &StringLiteral_12475/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/;
      else
        v51 = &StringLiteral_12486/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/;
      if ( !this )
        goto LABEL_159;
      v52 = (System_String_o *)*v51;
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v54 = SummonResultComponent_TypeInfo;
      v55 = v53;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v54 = SummonResultComponent_TypeInfo;
      }
      v56 = v54->static_fields;
      v57 = 36;
      if ( adjustTitleLabel )
        v57 = 40;
      GameObjectExtensions__SetLocalPositionX(v55, (float)*(int *)((char *)&v56->TUTORIAL_BACK_ARROW_WAY + v57), 0);
      v58 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SummonResultComponent_o *)LocalizationManager__Get(v52, 0);
      if ( !v58 )
        goto LABEL_159;
      UILabel__set_text(v58, (System_String_o *)this, 0);
      v59 = v10->fields.extraGiftMsg2Lb;
      v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v14,
                                          0,
                                          (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_159;
      v61 = &v96;
      v96 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v61);
    this = (SummonResultComponent_o *)System_String__Format(v60, v95, 0);
    if ( v59 )
    {
      UILabel__set_text(v59, (System_String_o *)this, 0);
      goto LABEL_157;
    }
    goto LABEL_159;
  }
}


void SummonResultComponent__SetBonusGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4D28CDA & 1) == 0 )
  {
    sub_1C94098(&SummonResultComponent_TypeInfo);
    byte_4D28CDA = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
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
        sub_1C942F8(extraGiftTitleLb);
      v12 = &extraGiftIconComponents->obj.klass + (int)v11;
      v13 = v12[4];
      if ( !v13 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v12[4],
                                                      0);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v14 = *(_QWORD *)&v13->_1.byval_arg.bits;
        if ( !v14 )
          break;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
        GameObjectExtensions__SetLocalPositionX(v15, v10 + (float)*(int *)(v14 + 168), 0);
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
        v10 = GameObjectExtensions__GetLocalPositionX(v16, 0);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1C942F0(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0);
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
  if ( v18 > *(_DWORD *)(extraGiftTitleLb[7].fields.m_CachedPtr + 72) )
  {
    v19 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
    if ( !v19 )
      goto LABEL_27;
    UIWidget__set_width(v19, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0);
  v20 = this->fields.extraGiftMsg2Lb;
  if ( !v20 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v10 + 1.0) + (float)((float)v20->fields.mWidth * 0.5),
    0);
}


void SummonResultComponent__SetOldResultData(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        bool *autoSale,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Object; // x0
  __int64 v7; // x1
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellWidth; // s10
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x28
  int maxPerLine; // s11
  float v14; // s9
  System_Collections_Generic_List_int__o *v15; // x23
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BalanceConfig_c *v22; // x0
  int v23; // w8
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
  intptr_t *v36; // x8
  SummonResultInfoComponent_ClickDelegate_o *v37; // x27
  __int64 sellQp; // x25
  int64_t summonBeforeQp; // x26
  int64_t QpMax; // x8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  intptr_t m_CachedPtr; // x8
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

  if ( (byte_4D28CE6 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&Method_SummonResultComponent_showResCcDetail__);
    sub_1C94098(&Method_SummonResultComponent_showResSvtDetail__);
    byte_4D28CE6 = 1;
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
  v15 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v15;
  p_befSvtList = &this->fields.befSvtList;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.befSvtList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v23 = resultList->max_length;
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v24 >= v23 )
        sub_1C942F8(v22);
      v25 = (void **)((unsigned int)v24 >= 6 ? &this->fields.scdGrid : &this->fields.fstGrid);
      Object = (UnityEngine_Component_o *)*v25;
      if ( !*v25 )
        break;
      v26 = resultList->m_Items[v24];
      targetGo = this->fields.targetGo;
      transform = UnityEngine_Component__get_transform(Object, 0);
      Object = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                            (BaseMonoBehaviour_o *)this,
                                            targetGo,
                                            transform,
                                            0,
                                            0);
      if ( !Object )
        break;
      v29 = (UnityEngine_GameObject_o *)Object;
      Object = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object, 0);
      v30 = (UnityEngine_Transform_o *)Object;
      if ( !byte_4D25F1E )
      {
        Object = (UnityEngine_Component_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
        byte_4D25F1E = 1;
      }
      if ( !v30 )
        break;
      UnityEngine_Transform__set_localScale(v30, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      if ( !v26 )
        break;
      if ( v26->fields.isNew
        && (objectId = v26->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v31)) )
      {
        Object = (UnityEngine_Component_o *)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        m_CachedPtr = Object->fields.m_CachedPtr;
        v45 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(Object[1].klass);
        if ( !m_CachedPtr )
          break;
        klass_low = SLODWORD(Object[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Object,
            objectId,
            *(const MethodInfo_384DE10 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          v33 = 0;
        }
        else
        {
          v33 = 0;
          LODWORD(Object[1].klass) = klass_low + 1;
          *(_DWORD *)(m_CachedPtr + 4 * klass_low + 32) = objectId;
        }
      }
      else
      {
        v33 = 1;
      }
      IsCommandCode = SvtType__IsCommandCode(v26->fields.type, 0);
      v35 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C942E4(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      v36 = &Method_SummonResultComponent_showResCcDetail__;
      if ( !IsCommandCode )
        v36 = &Method_SummonResultComponent_showResSvtDetail__;
      v37 = v35;
      SummonResultInfoComponent_ClickDelegate___ctor(v35, (Il2CppObject *)this, *v36, 0);
      if ( v26->fields.sellMana || v26->fields.sellQp )
      {
        v37 = 0;
        *autoSale = 1;
      }
      Object = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                            v29,
                                            (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
      if ( !Object )
        break;
      SummonResultInfoComponent__setResultData(
        (SummonResultInfoComponent_o *)Object,
        v26,
        v33,
        v37,
        this->fields.summonBeforeQp,
        this->fields.summonBeforeMana,
        0);
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
    sub_1C942F0(Object, v7);
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
  Object = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Object, 0);
  if ( !Object )
    goto LABEL_62;
  v50 = v47 <= v48 ? v47 : v48;
  v54.fields.x = (float)(cellWidth * -0.5) * (float)(v50 + -1.0);
  v54.fields.y = v49;
  v54.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v54, 0);
  Object = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !Object )
    goto LABEL_62;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))Object->klass[1]._1.element_class)(
    Object,
    Object->klass[1]._1.castClass);
  Object = (UnityEngine_Component_o *)*p_scdGrid;
  if ( !*p_scdGrid )
    goto LABEL_62;
  Object = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Object, 0);
  if ( !Object )
    goto LABEL_62;
  v51 = (float)(v47 - v48) + -1.0;
  if ( v47 <= v48 )
    v51 = -1.0;
  v55.fields.x = (float)(v14 * -0.5) * v51;
  v55.fields.y = -62.0;
  v55.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v55, 0);
  Object = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !Object )
    goto LABEL_62;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))Object->klass[1]._1.element_class)(
    Object,
    Object->klass[1]._1.castClass);
  Object = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Object )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0);
}


void SummonResultComponent__SetResultData(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        bool *autoSale,
        const MethodInfo *method)
{
  SummonResultComponent___c__DisplayClass87_0_o *v5; // x20
  System_Collections_Generic_List_int__o *v6; // x24
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
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
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
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
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Collections_Generic_List_object__o *v56; // x23
  int i; // w22
  _BOOL8 v58; // x0
  __int64 v59; // x1
  Il2CppObject *current; // x28
  GachaInfos_o *monitor; // x26
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
  __int64 sellQp; // x28
  int64_t summonBeforeQp; // x20
  int64_t QpMax; // x27
  __int64 v78; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  GachaInfos_array *v86; // x8
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
  if ( (byte_4D28CE5 & 1) == 0 )
  {
    sub_1C94098(&System_Action_GameObject__TypeInfo);
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_1C94098(&System_Comparison_MultiExSummonListViewItem__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_1C94098(&ListViewSort_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&MultiExSummonListViewItem_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SummonResultComponent_showResCcDetail__);
    sub_1C94098(&Method_SummonResultComponent_showResSvtDetail__);
    sub_1C94098(&Method_SummonResultComponent___c__SetResultData_b__87_0__);
    sub_1C94098(&Method_SummonResultComponent___c__DisplayClass87_0__SetResultData_b__1__);
    sub_1C94098(&SummonResultComponent___c__DisplayClass87_0_TypeInfo);
    sub_1C94098(&SummonResultComponent___c_TypeInfo);
    byte_4D28CE5 = 1;
  }
  memset(&v96, 0, sizeof(v96));
  v5 = (SummonResultComponent___c__DisplayClass87_0_o *)sub_1C942E4(SummonResultComponent___c__DisplayClass87_0_TypeInfo);
  SummonResultComponent___c__DisplayClass87_0___ctor(v5, 0);
  *autoSale = 0;
  v6 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.befSvtList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  listRoot = this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_71;
  if ( !v97 )
    goto LABEL_71;
  if ( !v5 )
    goto LABEL_71;
  cellWidth = listRoot->fields.cellWidth;
  maxPerLine = listRoot->fields.maxPerLine;
  v18 = (float)(SLODWORD(v97->max_length) % maxPerLine);
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
  v23 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
  max_length = v97->max_length;
  if ( max_length >= 1 )
  {
    p_befSvtList = &this->fields.befSvtList;
    v27 = 0;
    v28 = 0;
    m_Items = v97->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v28 >= max_length )
        sub_1C942F8(scrollBar);
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
            *(const MethodInfo_384DE10 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
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
      v32 = (MultiExSummonListViewItem_o *)sub_1C942E4(MultiExSummonListViewItem_TypeInfo);
      MultiExSummonListViewItem___ctor(v32, v30, v31, gachaId, summonSceneInTime, v27 + LODWORD(v97->max_length), 0);
      v33 = (ListViewSort_o *)sub_1C942E4(ListViewSort_TypeInfo);
      ListViewSort___ctor(v33, 27, 1, 0);
      if ( !v32 )
        break;
      scrollBar = (int *)((__int64 (__fastcall *)(MultiExSummonListViewItem_o *, ListViewSort_o *, const MethodInfo *))v32->klass->vtable._4_SetSortValue.methodPtr)(
                           v32,
                           v33,
                           v32->klass->vtable._4_SetSortValue.method);
      if ( !v23 )
        break;
      items = v23->fields._items;
      v41 = Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__;
      ++v23->fields._version;
      if ( !items )
        break;
      size = v23->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v32,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v43[4] = (Il2CppClass *)v32;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v43 + 4), (int32_t)v32, v34, v35, v36, v37, v38, v39);
      }
      ++v28;
      --v27;
      max_length = v97->max_length;
      if ( (int)v28 >= max_length )
        goto LABEL_28;
    }
LABEL_71:
    sub_1C942F0(scrollBar, objectId);
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
    v47 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_MultiExSummonListViewItem__TypeInfo);
    System_Comparison_object____ctor(v47, v48, Method_SummonResultComponent___c__SetResultData_b__87_0__, 0);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Comparison_MultiExSummonListViewItem__o *)v47;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__87_0, (int32_t)v47, v50, v51, v52, v53, v54, v55);
  }
  if ( !v23 )
    goto LABEL_71;
  System_Collections_Generic_List_object___Sort_59164920(
    v23,
    v47,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
  v56 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v95,
    v23,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
  v96 = v95;
  for ( i = 1; ; ++i )
  {
    v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v96,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    if ( !v58 )
      break;
    current = v96.fields._current;
    if ( !v96.fields._current )
      sub_1C942F0(v58, v59);
    monitor = (GachaInfos_o *)v96.fields._current[7].monitor;
    rewardIconObj = (Il2CppObject *)this->fields.rewardIconObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v63 = UnityEngine_Object__Instantiate_object_(
            rewardIconObj,
            (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v65 = (UnityEngine_GameObject_o *)v63;
    if ( !v63 )
      sub_1C942F0(0, v64);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v63, 1, 0);
    v67 = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !v67 )
      sub_1C942F0(0, v66);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v67, 0);
    GameObjectExtensions__SetParent(v65, transform, 0);
    if ( !byte_4D25F19 )
    {
      sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F19 = 1;
    }
    GameObjectExtensions__SetLocalPosition(v65, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( !byte_4D25F1E )
    {
      sub_1C94098(&UnityEngine_Vector3_TypeInfo);
      byte_4D25F1E = 1;
    }
    GameObjectExtensions__SetLocalScale(v65, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    if ( !monitor )
      sub_1C942F0(v69, v70);
    if ( SvtType__IsCommandCode(monitor->fields.type, 0) )
    {
      v71 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C942E4(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v71,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResCcDetail__,
        0);
    }
    else
    {
      v71 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C942E4(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v71,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResSvtDetail__,
        0);
    }
    if ( monitor->fields.sellMana || monitor->fields.sellQp )
    {
      v71 = 0;
      *autoSale = 1;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v65,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    if ( !Component_object )
      sub_1C942F0(0, v73);
    SummonResultInfoComponent__setResultData(
      (SummonResultInfoComponent_o *)Component_object,
      monitor,
      (bool)current[8].klass,
      v71,
      this->fields.summonBeforeQp,
      this->fields.summonBeforeMana,
      0);
    v74 = BalanceConfig_TypeInfo;
    sellQp = monitor->fields.sellQp;
    summonBeforeQp = this->fields.summonBeforeQp;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v74 = BalanceConfig_TypeInfo;
    }
    QpMax = v74->static_fields->QpMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.summonBeforeQp = System_Math__Min_65939904(summonBeforeQp + sellQp, QpMax, 0);
    v78 = System_Math__Min_65939892(
            this->fields.summonBeforeMana + monitor->fields.sellMana,
            BalanceConfig_TypeInfo->static_fields->UserItemMax,
            0);
    v86 = v97;
    this->fields.summonBeforeMana = v78;
    if ( (float)((float)SLODWORD(v86->max_length) - v18) < (float)i )
    {
      if ( !v56 )
        sub_1C942F0(v78, v79);
      v87 = v56->fields._items;
      v88 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v56->fields._version;
      if ( !v87 )
        sub_1C942F0(v78, v79);
      v89 = v56->fields._size;
      if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v56,
          (Il2CppObject *)v65,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = &v87->obj.klass + v89;
        v56->fields._size = v89 + 1;
        v90[4] = (Il2CppClass *)v65;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v90 + 4), (int32_t)v65, v80, v81, v82, v83, v84, v85);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v96,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
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
    SLODWORD(v97->max_length) > 2 * v91->fields.maxPerLine,
    0);
  scrollBar = (int *)this->fields.scrollView;
  if ( !scrollBar )
    goto LABEL_71;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0);
  v92 = (System_Action_object__o *)sub_1C942E4(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v92, object, Method_SummonResultComponent___c__DisplayClass87_0__SetResultData_b__1__, 0);
  if ( !v56 )
    goto LABEL_71;
  System_Collections_Generic_List_object___ForEach(
    v56,
    (System_Action_T__o *)v92,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void SummonResultComponent__SetSpecialGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4D28CDB & 1) == 0 )
  {
    sub_1C94098(&SummonResultComponent_TypeInfo);
    byte_4D28CDB = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
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
        sub_1C942F8(extraGiftTitleLb);
      v12 = &extraGiftIconComponents->obj.klass + (int)v11;
      v13 = v12[4];
      if ( !v13 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v12[4],
                                                      0);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v14 = *(_QWORD *)&v13->_1.byval_arg.bits;
        if ( !v14 )
          break;
        v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
        GameObjectExtensions__SetLocalPositionX(v15, (float)(v10 + (float)*(int *)(v14 + 168)) + 2.0, 0);
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
        v10 = GameObjectExtensions__GetLocalPositionX(v16, 0);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1C942F0(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0);
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
  if ( v18 > *(_DWORD *)(extraGiftTitleLb[7].fields.m_CachedPtr + 72) )
  {
    v19 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
    if ( !v19 )
      goto LABEL_27;
    UIWidget__set_width(v19, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0);
  v20 = this->fields.extraGiftMsg2Lb;
  if ( !v20 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v10 + (float)((float)v20->fields.mWidth * 0.5)) + 2.0,
    0);
}


void SummonResultComponent___DialogCallBack_b__80_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4D28CE8 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SummonResultComponent_EndCloseDialogCallBack__);
    byte_4D28CE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v4, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_8:
    sub_1C942F0(v5, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool SummonResultComponent__checkOverlapSvt(SummonResultComponent_o *this, int32_t svtId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  if ( (byte_4D28CDD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4D28CDD = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C942F0(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v7 == v8 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v8;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void SummonResultComponent__clearResultList(SummonResultComponent_o *this, const MethodInfo *method)
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
  __int64 v15; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x20
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0

  if ( (byte_4D28CE2 & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UnityEngine_Transform_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28CE2 = 1;
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0);
  if ( !fstGrid )
    goto LABEL_56;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0);
  if ( childCount >= 1 )
  {
    v5 = childCount + 1;
    while ( 1 )
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
      if ( !fstGrid )
        break;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0);
      if ( !fstGrid )
        break;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)fstGrid,
                                             v5 - 2,
                                             0);
      if ( !fstGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_56:
    sub_1C942F0(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0);
  if ( !fstGrid )
    goto LABEL_56;
  v7 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0);
  if ( v7 >= 1 )
  {
    v8 = v7 + 1;
    do
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
      if ( !fstGrid )
        goto LABEL_56;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0);
      if ( !fstGrid )
        goto LABEL_56;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)fstGrid,
                                             v8 - 2,
                                             0);
      if ( !fstGrid )
        goto LABEL_56;
      v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972(v9, 0);
    }
    while ( --v8 > 1 );
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0);
  if ( !fstGrid )
    goto LABEL_56;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)fstGrid, 0);
  if ( !Enumerator )
    sub_1C942F0(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_30;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_30:
      v15 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(Enumerator, *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_37;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1];
    }
    else
    {
LABEL_37:
      v19 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_58;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v20->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C9468C(v20);
LABEL_58:
      sub_1C942F0(v20, v21);
    }
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(v23, 0);
  }
  v24 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
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
      v29 = sub_1C6A420(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsg;
  if ( !fstGrid )
    goto LABEL_56;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fstGrid, 0, 0);
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsgLb;
  if ( !fstGrid )
    goto LABEL_56;
  UILabel__set_text((UILabel_o *)fstGrid, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void SummonResultComponent__initGachaResultList(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        int32_t type,
        System_Int32_array *extraGiftIds,
        GachaExtraGifts_array *gachaExtraGiftList,
        const MethodInfo *method)
{
  GachaInfos_array *v9; // x22
  UnityEngine_GameObject_o *changeSceneBtnInfo; // x0
  struct SummonControl_o *summonCtrl; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  const MethodInfo *v17; // x3
  struct UIGrid_o *fstGrid; // x8
  struct UIGrid_o *scdGrid; // x9
  float v20; // s8
  _BOOL4 v21; // w24
  UnityEngine_GameObject_o *v22; // x0
  UILabel_o *autoSaleMsgLb; // x23
  UILabel_o *extraGiftMsgLb; // x23
  SummonResultComponent___c_c *v25; // x0
  System_Collections_Generic_IEnumerable_T__o *extraGiftIconComponents; // x23
  System_Action_object__o *_9__70_0; // x24
  Il2CppObject *v28; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x5
  float v38; // s8
  System_Nullable_int__o v39; // x0
  struct UIGrid_o *v40; // x8
  GachaExtraGifts_o *v41; // x9
  int32_t gachaExtraGiftResultType; // w2
  int32_t gachaExtraGiftBonusType; // w3
  SummonResultComponent_o *v44; // x0
  System_Collections_Generic_IEnumerable_int__o *v45; // x1
  bool v46; // w4
  System_Collections_Generic_HashSet_int__o *v47; // x22
  il2cpp_array_size_t max_length; // x8
  __int64 v49; // x25
  int32_t v50; // w23
  int32_t v51; // w24
  GachaExtraGifts_o *v52; // x29
  __int64 v53; // [xsp+8h] [xbp-78h] BYREF
  bool autoSale[4]; // [xsp+1Ch] [xbp-64h] BYREF

  v9 = resultList;
  if ( (byte_4D28CD7 & 1) == 0 )
  {
    sub_1C94098(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C94098(&FSUtility_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_int___ctor__);
    sub_1C94098(&Method_System_Nullable_int__get_HasValue__);
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&SummonResultComponent_TypeInfo);
    sub_1C94098(&Method_SummonResultComponent___c__initGachaResultList_b__70_0__);
    sub_1C94098(&SummonResultComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_12499/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_1C94098(&StringLiteral_12524/*"SUMMON_RESULT_AUTOSALE_MSG"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D28CD7 = 1;
  }
  autoSale[0] = 0;
  changeSceneBtnInfo = this->fields.changeSceneBtnInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0);
  changeSceneBtnInfo = this->fields.closeInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0);
  changeSceneBtnInfo = this->fields.backImg;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     changeSceneBtnInfo,
                                                     (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0);
  summonCtrl = this->fields.summonCtrl;
  this->fields.dispType = type;
  if ( !summonCtrl )
    goto LABEL_97;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnLabel;
  this->fields.isOneTimeFreeSummon = summonCtrl->fields._IsOneTimeFreeSummonDialog_k__BackingField;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v14, 0);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v15, 0);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v16, 0);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0);
  changeSceneBtnInfo = this->fields.scrollBar;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0);
  if ( !v9 )
    goto LABEL_41;
  fstGrid = this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_97;
  scdGrid = this->fields.scdGrid;
  if ( !scdGrid )
    goto LABEL_97;
  if ( scdGrid->fields.maxPerLine + fstGrid->fields.maxPerLine >= SLODWORD(v9->max_length) )
  {
    SummonResultComponent__SetOldResultData(this, v9, autoSale, v17);
    v20 = 0.0;
  }
  else
  {
    SummonResultComponent__SetResultData(this, v9, autoSale, v17);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v20 = FSUtility__IsUnderVista(0) ? 19.0 : 7.0;
  }
  changeSceneBtnInfo = this->fields.autoSaleMsg;
  if ( !changeSceneBtnInfo
    || (v21 = autoSale[0],
        UnityEngine_GameObject__SetActive(changeSceneBtnInfo, autoSale[0], 0),
        (changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.autoSaleMsgLb) == 0) )
  {
LABEL_97:
    sub_1C942F0(changeSceneBtnInfo, resultList);
  }
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  GameObjectExtensions__SetLocalPositionY(v22, v20, 0);
  autoSaleMsgLb = this->fields.autoSaleMsgLb;
  if ( v21 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12524/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0);
    resultList = (GachaInfos_array *)changeSceneBtnInfo;
    if ( !autoSaleMsgLb )
      goto LABEL_97;
  }
  else
  {
    resultList = (GachaInfos_array *)string_TypeInfo->static_fields->Empty;
    if ( !autoSaleMsgLb )
      goto LABEL_97;
  }
  UILabel__set_text(autoSaleMsgLb, (System_String_o *)resultList, 0);
LABEL_41:
  changeSceneBtnInfo = this->fields.extraGiftComponent;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
  extraGiftMsgLb = this->fields.extraGiftMsgLb;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
  if ( !extraGiftMsgLb )
    goto LABEL_97;
  UILabel__set_fontSize(extraGiftMsgLb, SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0);
  changeSceneBtnInfo = this->fields.extraGiftComponent;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0);
  v25 = SummonResultComponent___c_TypeInfo;
  extraGiftIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraGiftIconComponents;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    v25 = SummonResultComponent___c_TypeInfo;
  }
  _9__70_0 = (System_Action_object__o *)v25->static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = SummonResultComponent___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__70_0 = (System_Action_object__o *)sub_1C942E4(System_Action_ItemIconComponent__TypeInfo);
    System_Action_object____ctor(_9__70_0, v28, Method_SummonResultComponent___c__initGachaResultList_b__70_0__, 0);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Action_ItemIconComponent__o *)_9__70_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__70_0,
      (int32_t)_9__70_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__70_0,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_ItemIconComponent___);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  changeSceneBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  if ( !changeSceneBtnInfo )
    goto LABEL_97;
  UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 0, 0);
  if ( extraGiftIds && gachaExtraGiftList && extraGiftIds->max_length )
  {
    changeSceneBtnInfo = this->fields.extraGiftComponent;
    if ( !changeSceneBtnInfo )
      goto LABEL_97;
    changeSceneBtnInfo = UnityEngine_GameObject__get_gameObject(changeSceneBtnInfo, 0);
    if ( !changeSceneBtnInfo )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(changeSceneBtnInfo, 1, 0);
    if ( LODWORD(extraGiftIds->max_length) == 1 )
    {
      v38 = 0.0;
      if ( v9 )
      {
        v53 = 0;
        v39 = (System_Nullable_int__o)&v53;
        System_Nullable_int____ctor(
          v39,
          v9->max_length,
          (const MethodInfo_39933EC *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v53 )
          v38 = (float)SHIDWORD(v53);
      }
      v40 = this->fields.fstGrid;
      if ( !v40 )
        goto LABEL_97;
      if ( LODWORD(gachaExtraGiftList->max_length) )
      {
        v41 = gachaExtraGiftList->m_Items[0];
        if ( !v41 )
          goto LABEL_97;
        gachaExtraGiftBonusType = v41->fields.gachaExtraGiftBonusType;
        gachaExtraGiftResultType = v41->fields.gachaExtraGiftResultType;
        v44 = this;
        v45 = (System_Collections_Generic_IEnumerable_int__o *)extraGiftIds;
        v46 = v38 > (float)v40->fields.maxPerLine;
        goto LABEL_95;
      }
LABEL_98:
      sub_1C942F8(changeSceneBtnInfo);
    }
    v47 = (System_Collections_Generic_HashSet_int__o *)sub_1C942E4(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v47,
      (const MethodInfo_3718384 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    max_length = extraGiftIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v49 = 0;
      v50 = 0;
      v51 = 0;
      while ( (unsigned int)v49 < (unsigned int)max_length
           && (unsigned int)v49 < LODWORD(gachaExtraGiftList->max_length) )
      {
        v52 = gachaExtraGiftList->m_Items[v49];
        if ( !v52 )
          goto LABEL_97;
        if ( v52->fields.gachaExtraGiftBonusType == 2 )
        {
          if ( !v47 )
            goto LABEL_97;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_HashSet_int___Add(
                                                             v47,
                                                             extraGiftIds->m_Items[v49],
                                                             (const MethodInfo_3719588 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v50 = v52->fields.gachaExtraGiftBonusType;
          v51 = v52->fields.gachaExtraGiftResultType;
          max_length = extraGiftIds->max_length;
        }
        if ( (int)++v49 >= (int)max_length )
          goto LABEL_89;
      }
      goto LABEL_98;
    }
    v51 = 0;
    v50 = 0;
LABEL_89:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)extraGiftIds, 0) )
    {
      v44 = this;
      v45 = (System_Collections_Generic_IEnumerable_int__o *)v47;
      gachaExtraGiftResultType = v51;
      gachaExtraGiftBonusType = v50;
      v46 = 0;
LABEL_95:
      SummonResultComponent__SetBonusGiftDisplay(v44, v45, gachaExtraGiftResultType, gachaExtraGiftBonusType, v46, v37);
      goto LABEL_96;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12499/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0);
    if ( !this->fields.extraGiftMsgLb )
      goto LABEL_97;
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0);
  }
LABEL_96:
  SummonResultComponent__setListByType(this, this->fields.dispType, v36);
}


void SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4D28CE3 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_12264/*"SHOW_TALK"*/);
    byte_4D28CE3 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1C942F0(0, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12264/*"SHOW_TALK"*/, 0);
  }
}


void SummonResultComponent__setBeforeQpMana(
        SummonResultComponent_o *this,
        int64_t qp,
        int32_t mana,
        const MethodInfo *method)
{
  this->fields.summonBeforeQp = qp;
  this->fields.summonBeforeMana = mana;
}


void SummonResultComponent__setCenter(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mWidget; // x0
  unsigned int klass; // w8
  float32x2_t *v5; // x20
  unsigned __int64 v6; // x21
  float *p_fields; // x22
  float v8; // s8
  float v9; // s9
  float v10; // s10
  float v11; // s1
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
  if ( !mWidget
    || (mWidget = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))mWidget->klass[1]._1.interopData)(
                                               mWidget,
                                               mWidget->klass[1]._1.klass)) == 0 )
  {
LABEL_11:
    sub_1C942F0(mWidget, method);
  }
  klass = (unsigned int)mWidget[1].klass;
  v5 = (float32x2_t *)mWidget;
  v6 = 0;
  p_fields = (float *)&mWidget[1].fields;
  do
  {
    if ( v6 >= klass )
      goto LABEL_12;
    mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
    if ( !mWidget )
      goto LABEL_11;
    v8 = *(p_fields - 2);
    v9 = *(p_fields - 1);
    v10 = *p_fields;
    mWidget = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mWidget, 0);
    if ( !mWidget )
      goto LABEL_11;
    v12.fields.x = v8;
    v12.fields.y = v9;
    v12.fields.z = v10;
    v13 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)mWidget, v12, 0);
    if ( v6 >= v5[3].n64_u32[0] )
      goto LABEL_12;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v13;
    p_fields += 3;
    klass = v5[3].n64_u32[0];
    ++v6;
  }
  while ( v6 != 4 );
  if ( klass <= 2 )
LABEL_12:
    sub_1C942F8(mWidget);
  v11 = v5[5].n64_f32[0] + (float)((float)(v5[8].n64_f32[0] - v5[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v5[4],
                                                    vmul_f32(vsub_f32(v5[7], v5[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v11;
}


// local variable allocation has failed, the output may be wrong!
void SummonResultComponent__setListByType(SummonResultComponent_o *this, int32_t type, const MethodInfo *method)
{
  UnityEngine_GameObject_o *closeInfo; // x0
  System_String_o *v6; // x0
  UILabel_o *formationBtnLabel; // x22
  System_String_o *v8; // x21
  UILabel_o *combineBtnLabel; // x22
  UILabel_o *sellBtnLabel; // x22
  struct SummonControl_o *summonCtrl; // x8
  struct SummonControl_o *v12; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *summonBtnLabel; // x22
  Il2CppObject *v16; // x0
  UILabel_o *v17; // x22
  long double v18; // q0
  int32_t gachaId; // w22
  __int64 v20; // x0
  __int64 v21; // x0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Master_object; // x24
  System_String_o *v24; // x22
  UILabel_o *v25; // x23
  Il2CppObject *v26; // x0
  int32_t AppendSummonState; // w0
  int v28; // w8
  UserGameEntity_o *SelfUserGame; // x22
  long double v30; // q0
  __int64 v31; // x8
  __int64 v32; // x0
  TblUserEntity_o *UserData; // x23
  GachaEntity_o *v34; // x22
  int friendPoint; // w24
  int32_t v36; // w23
  bool v37; // w0
  UILabel_o *v38; // x22
  Il2CppObject *v39; // x0
  UILabel_o *v40; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  Il2CppObject *v42; // x0
  Il2CppObject *v43; // x22
  UILabel_o *v44; // x22
  Il2CppObject *v45; // x0
  Il2CppObject *v46; // x21
  UserItemEntity_o *v47; // x0
  UILabel_o *v48; // x21
  struct UILabel_o *v49; // x21
  System_String_o *v50; // x1
  int32_t monitor_high; // w9
  UILabel_o *v52; // x21
  UILabel_o *v53; // x21
  int gachaResourceNum; // w23
  int32_t v55; // w1
  int v56; // w22
  __int64 v57; // x24
  UILabel_o *v58; // x23
  Il2CppObject *v59; // x0
  struct SummonControl_o *v60; // x8
  struct SummonControl_o *v61; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v67; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v76; // x0
  UnityEngine_Component_o *Parent; // x0
  SummonResultComponent_c *v78; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v85; // s11
  float v86; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v88; // s14
  int v89; // w22
  int32_t maxDrawNum; // w23
  struct SummonControl_o *v91; // x8
  int gachaTime; // [xsp+Ch] [xbp-C4h] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v94; // [xsp+18h] [xbp-B8h] BYREF
  UserGachaEntity_o *entity; // [xsp+20h] [xbp-B0h] BYREF
  GachaAppendEntity_o *v96; // [xsp+28h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+38h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v98; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v99; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v111; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4D28CD8 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C94098(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C94098(&FSUtility_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&SummonResultComponent_TypeInfo);
    sub_1C94098(&TutorialFlag_TypeInfo);
    sub_1C94098(&UserGachaMaster_TypeInfo);
    sub_1C94098(&StringLiteral_12468/*"SUMMON_APPEND_END"*/);
    sub_1C94098(&StringLiteral_12251/*"SHORT_SERVANT_FORMATION"*/);
    sub_1C94098(&StringLiteral_12501/*"SUMMON_FREE_10_BTN"*/);
    sub_1C94098(&StringLiteral_12256/*"SHORT_SERVANT_SELL"*/);
    sub_1C94098(&StringLiteral_12505/*"SUMMON_LIMIT_OVER_BTN"*/);
    sub_1C94098(&StringLiteral_12530/*"SUMMON_TICKET_END"*/);
    sub_1C94098(&StringLiteral_12241/*"SHORT_SERVANT_COMBINE"*/);
    sub_1C94098(&StringLiteral_3830/*"CONTINUE_SUMMON_BTN"*/);
    byte_4D28CD8 = 1;
  }
  *(_QWORD *)maxNum = 0;
  entity = 0;
  v96 = 0;
  appendEnt = 0;
  v94 = 0;
  if ( type == 1 )
  {
    closeInfo = this->fields.closeInfo;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_GameObject__SetActive(closeInfo, 0, 0);
    closeInfo = this->fields.changeSceneBtnInfo;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_GameObject__SetActive(closeInfo, 1, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3830/*"CONTINUE_SUMMON_BTN"*/, 0);
    formationBtnLabel = this->fields.formationBtnLabel;
    v8 = v6;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12251/*"SHORT_SERVANT_FORMATION"*/, 0);
    if ( !formationBtnLabel )
      goto LABEL_211;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12241/*"SHORT_SERVANT_COMBINE"*/, 0);
    if ( !combineBtnLabel )
      goto LABEL_211;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12256/*"SHORT_SERVANT_SELL"*/, 0);
    if ( !sellBtnLabel )
      goto LABEL_211;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_211;
    v99.fields.r = 1.0;
    v99.fields.g = 1.0;
    v99.fields.b = 1.0;
    v99.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v99, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v100.fields.r = 1.0;
    v100.fields.g = 1.0;
    v100.fields.b = 1.0;
    v100.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v100, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v101.fields.r = 1.0;
    v101.fields.g = 1.0;
    v101.fields.b = 1.0;
    v101.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v101, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v102.fields.r = 1.0;
    v102.fields.g = 1.0;
    v102.fields.b = 1.0;
    v102.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v102, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v103.fields.r = 1.0;
    v103.fields.g = 1.0;
    v103.fields.b = 1.0;
    v103.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v103, 0);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_211;
    closeInfo = (UnityEngine_GameObject_o *)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_211;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v12 = this->fields.summonCtrl;
    if ( !v12 )
      goto LABEL_211;
    gachaParamData = v12->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_211;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
    closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v16, 0);
    if ( !summonBtnLabel )
      goto LABEL_211;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0);
    v17 = this->fields.summonBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !v17 )
      goto LABEL_211;
    UILabel__SetCondensedScale(
      v17,
      SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE,
      0,
      0);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
          v20 = sub_1C6A12C(v18);
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
        if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
          v21 = sub_1C6A12C(v18);
        closeInfo = **(UnityEngine_GameObject_o ***)(v21 + 184);
        if ( !closeInfo )
          goto LABEL_211;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        }
        if ( !Master_object )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)UserGachaMaster__TryGetEntity(
                                                  (UserGachaMaster_o *)Master_object,
                                                  &entity,
                                                  *(_QWORD *)(closeInfo[7].fields.m_CachedPtr + 64),
                                                  gachaId,
                                                  0);
        if ( !MasterData_object )
          goto LABEL_211;
        DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
          &v94,
          gachaId,
          (const MethodInfo_345B50C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12505/*"SUMMON_LIMIT_OVER_BTN"*/, 0);
        if ( !v94 )
          goto LABEL_211;
        v24 = (System_String_o *)closeInfo;
        if ( !LODWORD(v94[4].monitor) )
          goto LABEL_56;
        closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v94 || !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)UserGachaExtraCountMaster__getExtraCount(
                                                  (UserGachaExtraCountMaster_o *)closeInfo,
                                                  (int32_t)v94[4].monitor,
                                                  0);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_56;
        v25 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v26, 0);
        if ( !v25 )
          goto LABEL_211;
        UILabel__set_text(v25, (System_String_o *)closeInfo, 0);
LABEL_56:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_211;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v94,
                                &appendEnt,
                                0);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12468/*"SUMMON_APPEND_END"*/, 0);
            }
            v28 = 1;
            goto LABEL_125;
          }
          goto LABEL_124;
        }
        v28 = (int)entity;
        if ( entity )
        {
          if ( !v94 )
            goto LABEL_211;
          monitor_high = HIDWORD(v94[5].monitor);
          if ( monitor_high < 1 )
          {
LABEL_124:
            v28 = 0;
            goto LABEL_125;
          }
          v28 = entity->fields.num >= monitor_high;
        }
LABEL_125:
        if ( this->fields.isOneTimeFreeSummon )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12468/*"SUMMON_APPEND_END"*/, 0);
          goto LABEL_130;
        }
        if ( v28 )
        {
LABEL_130:
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
          this->fields.isLimitOver = 1;
          if ( !closeInfo )
            goto LABEL_211;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0);
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
          if ( !closeInfo )
            goto LABEL_211;
          v106.fields.r = 0.35547;
          v106.fields.a = 1.0;
          v106.fields.g = 0.35547;
          v106.fields.b = 0.35547;
          UIWidget__set_color((UIWidget_o *)closeInfo, v106, 0);
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
          if ( !closeInfo )
            goto LABEL_211;
          v107.fields.r = 0.5;
          v107.fields.g = 0.5;
          v107.fields.b = 0.5;
          v107.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)closeInfo, v107, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v52 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v52 )
            goto LABEL_211;
          UILabel__SetCondensedScale(
            v52,
            SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
            0,
            0);
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
          if ( !closeInfo )
            goto LABEL_211;
          v50 = v24;
LABEL_138:
          UILabel__set_text((UILabel_o *)closeInfo, v50, 0);
          goto LABEL_172;
        }
LABEL_139:
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
        if ( !closeInfo )
          goto LABEL_211;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_211;
        v108.fields.r = 1.0;
        v108.fields.g = 1.0;
        v108.fields.b = 1.0;
        v108.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v108, 0);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_211;
        v109.fields.r = 1.0;
        v109.fields.g = 1.0;
        v109.fields.b = 1.0;
        v109.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v109, 0);
LABEL_172:
        v60 = this->fields.summonCtrl;
        if ( v60 )
        {
          closeInfo = v60->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive(closeInfo, 1, 0);
            v61 = this->fields.summonCtrl;
            if ( v61 )
            {
              v61->fields.isResult = 1;
              if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
              if ( TutorialFlag__IsProgressDone(2, 0) )
              {
                closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnLabel;
                if ( closeInfo )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                  closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0);
                  if ( closeInfo )
                  {
                    closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                              (UnityEngine_Component_o *)closeInfo,
                                                              (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                      closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                        closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v63, 0);
                        if ( closeInfo )
                        {
                          closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)closeInfo,
                                                                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                              closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v64, 0);
                              if ( closeInfo )
                              {
                                closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                          (UnityEngine_Component_o *)closeInfo,
                                                                          (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                                  closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                                    closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v65, 0);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                                (UnityEngine_Component_o *)closeInfo,
                                                                                (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                      if ( closeInfo )
                                      {
                                        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
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
                v67 = UnityEngine_Object__Instantiate_object_(
                        touchBlocker,
                        (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = (struct UnityEngine_GameObject_o *)v67;
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&this->fields.blocker,
                  (int32_t)v67,
                  v69,
                  v70,
                  v71,
                  v72,
                  v73,
                  v74);
                blocker = this->fields.blocker;
                v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v76, 0);
                GameObjectExtensions__SetParent(blocker, Parent, 0);
                v78 = SummonResultComponent_TypeInfo;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v78 = SummonResultComponent_TypeInfo;
                }
                static_fields = v78->static_fields;
                m_XMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
                m_YMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
                m_Width = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
                m_Height = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                OffsetX = FSUtility__GetOffsetX(68.0, 0, 0);
                closeInfo = *p_blocker;
                if ( *p_blocker )
                {
                  v85 = OffsetX;
                  closeInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            closeInfo,
                                                            (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    v86 = m_XMin - v85;
                    v110.fields.m_XMin = v86;
                    v110.fields.m_YMin = m_YMin;
                    v110.fields.m_Width = m_Width;
                    v110.fields.m_Height = m_Height;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v110, 30, 0);
                    closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0);
                      v88 = FSUtility__GetOffsetX(68.0, 0, 0);
                      closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        v98.fields.x = TutorialBackArrowPos.fields.x - v88;
                        v98.fields.y = TutorialBackArrowPos.fields.y;
                        v111.fields.m_XMin = v86;
                        v111.fields.m_YMin = m_YMin;
                        v111.fields.m_Width = m_Width;
                        v111.fields.m_Height = m_Height;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v98,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v111,
                          0,
                          0);
                        break;
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_211:
        sub_1C942F0(closeInfo, *(_QWORD *)&type);
      case 3:
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        v31 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
          v31 = sub_1C6A12C(v30);
        v32 = *(_QWORD *)(*(_QWORD *)(v31 + 192) + 16LL);
        if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
          v32 = sub_1C6A12C(v30);
        closeInfo = **(UnityEngine_GameObject_o ***)(v32 + 184);
        if ( !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame || !closeInfo )
          goto LABEL_211;
        UserData = TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                                                  gachaParamData->fields.gachaId,
                                                  (const MethodInfo_345B4C0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !UserData )
          goto LABEL_211;
        v34 = (GachaEntity_o *)closeInfo;
        friendPoint = UserData->fields.friendPoint;
        v36 = gachaParamData->fields.gachaId;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v37 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(v36, &maxNum[1], maxNum, 0);
        if ( maxNum[1] > 0 || v37 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_211;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0);
          v53 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12501/*"SUMMON_FREE_10_BTN"*/, 0);
          if ( !v53 )
            goto LABEL_211;
          UILabel__set_text(v53, (System_String_o *)closeInfo, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v40 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v40 )
            goto LABEL_211;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
          goto LABEL_171;
        }
        if ( gachaParamData->fields.gachaTime == 1 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_211;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, 1, 3, 0);
          v38 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
          closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v39, 0);
          if ( !v38 )
            goto LABEL_211;
          UILabel__set_text(v38, (System_String_o *)closeInfo, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v40 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v40 )
            goto LABEL_211;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
LABEL_171:
          UILabel__SetCondensedScale(v40, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0, 0);
          goto LABEL_172;
        }
        if ( friendPoint <= 1999 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_211;
          if ( friendPoint < 400 )
            v55 = 1;
          else
            v55 = friendPoint / 200;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_211;
          closeInfo = (UnityEngine_GameObject_o *)GachaAppendMaster__TryGetHundredSummon(
                                                    (GachaAppendMaster_o *)closeInfo,
                                                    &v96,
                                                    gachaParamData->fields.gachaId,
                                                    0);
          if ( ((unsigned __int8)closeInfo & 1) == 0 )
            goto LABEL_159;
          if ( !v34 )
            goto LABEL_211;
          gachaResourceNum = gachaParamData->fields.gachaResourceNum;
          if ( gachaResourceNum > 10 * GachaEntity__getPrice(v34, 0) || !gachaParamData->fields.gachaResourceNum )
          {
            closeInfo = (UnityEngine_GameObject_o *)GachaEntity__getPrice(v34, 0);
            if ( !v96 )
              goto LABEL_211;
            v89 = (int)closeInfo;
            maxDrawNum = v96->fields.maxDrawNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            closeInfo = (UnityEngine_GameObject_o *)System_Math__Min_65939892(friendPoint / v89, maxDrawNum, 0);
            v91 = this->fields.summonCtrl;
            if ( (int)closeInfo >= 1 )
            {
              if ( !v91 )
                goto LABEL_211;
              v56 = (int)closeInfo;
              SummonControl__SetGachaTime(this->fields.summonCtrl, (int32_t)closeInfo, 3, 0);
              v57 = 24;
              goto LABEL_166;
            }
            if ( !v91 )
              goto LABEL_211;
            v55 = gachaParamData->fields.gachaTime;
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          }
          else
          {
LABEL_159:
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_211;
            v55 = gachaParamData->fields.gachaTime;
          }
        }
        SummonControl__SetGachaTime((SummonControl_o *)closeInfo, v55, 3, 0);
        v56 = gachaParamData->fields.gachaTime;
        v57 = 20;
LABEL_166:
        v58 = this->fields.summonBtnLabel;
        gachaTime = v56;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v59, 0);
        if ( !v58 )
          goto LABEL_211;
        UILabel__set_text(v58, (System_String_o *)closeInfo, 0);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v40 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v40 )
          goto LABEL_211;
        SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = *(_DWORD *)((char *)&SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY
                                                     + v57);
        goto LABEL_171;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_211;
        v42 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_345B4C0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v42 )
          goto LABEL_99;
        v43 = v42;
        if ( !LODWORD(v42[4].monitor) )
          goto LABEL_99;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_211;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v43[4].monitor,
               0) != 9 )
          goto LABEL_99;
        v44 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v45, 0);
        if ( !v44 )
          goto LABEL_211;
        UILabel__set_text(v44, (System_String_o *)closeInfo, 0);
LABEL_99:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v46 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        }
        if ( !v46 )
          goto LABEL_211;
        v47 = UserItemMaster__GetEntity(
                (UserItemMaster_o *)v46,
                *(_QWORD *)(closeInfo[7].fields.m_CachedPtr + 64),
                gachaParamData->fields.ticketItemId,
                0);
        if ( v47 && v47->fields.num > 0 )
          goto LABEL_139;
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_211;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_211;
        v104.fields.r = 0.35547;
        v104.fields.a = 1.0;
        v104.fields.g = 0.35547;
        v104.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v104, 0);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_211;
        v105.fields.r = 0.5;
        v105.fields.g = 0.5;
        v105.fields.b = 0.5;
        v105.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v105, 0);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v48 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v48 )
          goto LABEL_211;
        UILabel__SetCondensedScale(
          v48,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0,
          0);
        v49 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12530/*"SUMMON_TICKET_END"*/, 0);
        if ( !v49 )
          goto LABEL_211;
        v50 = (System_String_o *)closeInfo;
        closeInfo = (UnityEngine_GameObject_o *)v49;
        goto LABEL_138;
      default:
        goto LABEL_172;
    }
  }
  this->fields.dispType = type;
  SummonResultComponent__setSvtNum(this, *(const MethodInfo **)&type);
}


void SummonResultComponent__setSvtNum(SummonResultComponent_o *this, const MethodInfo *method)
{
  DataManager_o *SelfUserGame; // x0
  __int64 v4; // x1
  int monitor; // w10
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
  int monitor_high; // [xsp+18h] [xbp-28h] BYREF
  int v19; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4D28CDE & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_7209/*"HAVE_SVT_NUM_TITLE"*/);
    sub_1C94098(&StringLiteral_7208/*"HAVE_SVTEQ_NUM_TITLE"*/);
    byte_4D28CDE = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_23;
  monitor = (int)SelfUserGame[1].monitor;
  monitor_high = HIDWORD(SelfUserGame[1].monitor);
  v19 = monitor;
  if ( !byte_4D269E5 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    byte_4D269E5 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v6->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0);
  svtTitleLb = this->fields.svtTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7209/*"HAVE_SVT_NUM_TITLE"*/, 0);
  if ( !svtTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtTitleLb, (System_String_o *)SelfUserGame, 0);
  svtNumLb = this->fields.svtNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantSum, 0);
  if ( !svtNumLb )
    goto LABEL_23;
  UILabel__set_text(svtNumLb, (System_String_o *)SelfUserGame, 0);
  svtMaxLb = this->fields.svtMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&v19, 0);
  if ( !svtMaxLb )
    goto LABEL_23;
  UILabel__set_text(svtMaxLb, (System_String_o *)SelfUserGame, 0);
  svtEqTitleLb = this->fields.svtEqTitleLb;
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7208/*"HAVE_SVTEQ_NUM_TITLE"*/, 0);
  if ( !svtEqTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtEqTitleLb, (System_String_o *)SelfUserGame, 0);
  svtEqNumLb = this->fields.svtEqNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantEquipSum[1], 0);
  if ( !svtEqNumLb )
    goto LABEL_23;
  UILabel__set_text(svtEqNumLb, (System_String_o *)SelfUserGame, 0);
  svtEqMaxLb = this->fields.svtEqMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&monitor_high, 0);
  if ( !svtEqMaxLb
    || (UILabel__set_text(svtEqMaxLb, (System_String_o *)SelfUserGame, 0),
        CcNumLb = this->fields.CcNumLb,
        SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)servantEquipSum, 0),
        !CcNumLb)
    || (UILabel__set_text(CcNumLb, (System_String_o *)SelfUserGame, 0),
        CcMaxLb = this->fields.CcMaxLb,
        SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&CommandCodeFrameMax, 0),
        !CcMaxLb) )
  {
LABEL_23:
    sub_1C942F0(SelfUserGame, v4);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0);
}


void SummonResultComponent__showResCcDetail(SummonResultComponent_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4D28CE0 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SummonResultComponent___c__DisplayClass79_0__showResCcDetail_b__0__);
    sub_1C94098(&SummonResultComponent___c__DisplayClass79_0_TypeInfo);
    byte_4D28CE0 = 1;
  }
  v5 = sub_1C942E4(SummonResultComponent___c__DisplayClass79_0_TypeInfo);
  SummonResultComponent___c__DisplayClass79_0___ctor((SummonResultComponent___c__DisplayClass79_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass79_0__showResCcDetail_b__0__,
    0);
  if ( !v16 )
LABEL_8:
    sub_1C942F0(v6, v7);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0);
}


void SummonResultComponent__showResSvtDetail(SummonResultComponent_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4D28CDF & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SummonResultComponent___c__DisplayClass78_0__showResSvtDetail_b__0__);
    sub_1C94098(&SummonResultComponent___c__DisplayClass78_0_TypeInfo);
    byte_4D28CDF = 1;
  }
  v5 = sub_1C942E4(SummonResultComponent___c__DisplayClass78_0_TypeInfo);
  SummonResultComponent___c__DisplayClass78_0___ctor((SummonResultComponent___c__DisplayClass78_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass78_0__showResSvtDetail_b__0__,
    0);
  if ( !v16 )
LABEL_8:
    sub_1C942F0(v6, v7);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0);
}


void SummonResultComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D28CE9 & 1) == 0 )
  {
    sub_1C94098(&SummonResultComponent___c_TypeInfo);
    byte_4D28CE9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(SummonResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)SummonResultComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SummonResultComponent___c___ctor(SummonResultComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SummonResultComponent___c___SetResultData_b__87_0(
        SummonResultComponent___c_o *this,
        MultiExSummonListViewItem_o *a,
        MultiExSummonListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C942F0(this, 0);
  return ListViewItem__SortCompDown((ListViewItem_o *)a, (ListViewItem_o *)b, 0);
}


void SummonResultComponent___c___initGachaResultList_b__70_0(
        SummonResultComponent___c_o *this,
        ItemIconComponent_o *elm,
        const MethodInfo *method)
{
  if ( !elm
    || (ItemIconComponent__Clear(elm, 0),
        (this = (SummonResultComponent___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)elm, 0)) == 0) )
  {
    sub_1C942F0(this, elm);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void SummonResultComponent___c__DisplayClass78_0___ctor(
        SummonResultComponent___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonResultComponent___c__DisplayClass78_0___showResSvtDetail_b__0(
        SummonResultComponent___c__DisplayClass78_0_o *this,
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

  if ( (byte_4D28CEA & 1) == 0 )
  {
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SummonResultComponent_DialogCallBack__);
    byte_4D28CEA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (CommonUI_o *)Instance;
  v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v7, _4__this, Method_SummonResultComponent_DialogCallBack__, 0);
  if ( !v6 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_31592660(v6, 8, usrSvtId, v7, 0, 0);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1C942F0(v8, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void SummonResultComponent___c__DisplayClass79_0___ctor(
        SummonResultComponent___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonResultComponent___c__DisplayClass79_0___showResCcDetail_b__0(
        SummonResultComponent___c__DisplayClass79_0_o *this,
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

  if ( (byte_4D28CEB & 1) == 0 )
  {
    sub_1C94098(&AvalonSceneManager_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C94098(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C94098(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SummonResultComponent_DialogCallBack__);
    byte_4D28CEB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_345DA1C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v8 = (CommonUI_o *)v6;
  v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v9, _4__this, Method_SummonResultComponent_DialogCallBack__, 0);
  if ( !v8 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_31596060(v8, 0, (UserCommandCodeEntity_o *)Entity, v9, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_10:
    sub_1C942F0(Instance, v4);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void SummonResultComponent___c__DisplayClass87_0___ctor(
        SummonResultComponent___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonResultComponent___c__DisplayClass87_0___SetResultData_b__1(
        SummonResultComponent___c__DisplayClass87_0_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  GameObjectExtensions__AddLocalPositionX(obj, this->fields.offset, 0);
}