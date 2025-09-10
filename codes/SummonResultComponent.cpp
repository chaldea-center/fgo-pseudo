void SummonResultComponent___cctor(const MethodInfo *method)
{
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v2; // x8

  if ( (byte_4C238F6 & 1) == 0 )
  {
    sub_1C2D490(&SummonResultComponent_TypeInfo);
    byte_4C238F6 = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_C09280;
  v2 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v2->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_C09C70;
  *(_OWORD *)&v2->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = xmmword_C09500;
  *(_OWORD *)&v2->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = xmmword_C08E40;
  *(_OWORD *)&v2->SMALL_FONT_SIZE = xmmword_C09D50;
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

  if ( (byte_4C238F3 & 1) == 0 )
  {
    sub_1C2D490(&Method_SummonResultComponent_CheckLimitOver__);
    sub_1C2D490(&StringLiteral_5451/*"END_SUMMON"*/);
    sub_1C2D490(&StringLiteral_8278/*"LIMIT_OVER"*/);
    byte_4C238F3 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C2D6EC(0, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8278/*"LIMIT_OVER"*/, 0);
    v4 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_SummonResultComponent_CheckLimitOver__);
    v5 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5451/*"END_SUMMON"*/, 0);
    v4 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_SummonResultComponent_CheckLimitOver__);
    v5 = 0;
  }
  v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0, 0);
}


void SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  CGThumbnailListItem_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C238EB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C238EB = 1;
  }
  blocker = (UnityEngine_Object_o *)this->fields.blocker;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blocker, 0, 0) )
  {
    p_blocker = (CGThumbnailListItem_o *)&this->fields.blocker;
    klass = (UnityEngine_Object_o *)p_blocker->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(klass, 0);
    p_blocker->klass = 0;
    sub_1C2D434(p_blocker, 0, v6, v7);
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

  if ( (byte_4C238F0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SummonResultComponent__DialogCallBack_b__80_0__);
    byte_4C238F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__80_0__, 0);
  if ( !v6 )
    sub_1C2D6EC(v9, v10);
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
    sub_1C2D6EC(gameObject, v6);
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
  __int64 v13; // x2
  bool v14; // zf
  System_Collections_Generic_List_object__o *v15; // x20
  struct ItemIconComponent_array *extraGiftIconComponents; // x8
  UILabel_o *extraGiftMsg2Lb; // x20
  struct ItemIconComponent_array *v18; // x8
  ItemIconComponent_o *v19; // x8
  UIWidget_o *iconSprite; // x23
  struct ItemIconComponent_array *v21; // x8
  ItemIconComponent_o *v22; // x8
  struct ItemIconComponent_array *v23; // x8
  struct ItemIconComponent_array *v24; // x8
  ItemIconComponent_o *v25; // x23
  int32_t summonBeforeMana; // w26
  BalanceConfig_c *v27; // x0
  int32_t ManaMax; // w23
  int32_t v29; // w26
  UnityEngine_GameObject_o *v30; // x0
  SummonResultComponent_c *v31; // x8
  UnityEngine_GameObject_o *v32; // x21
  UILabel_o *v33; // x21
  UILabel_o *v34; // x21
  System_String_o *v35; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int m_CancellationTokenSource_high; // w8
  Il2CppObject *v40; // x0
  UILabel_o *v41; // x20
  const MethodInfo *v42; // x1
  struct ItemIconComponent_array *v43; // x8
  __int64 v44; // x24
  int max_length; // w9
  unsigned int v46; // w21
  UIWidget_o *backImg; // x22
  struct ItemIconComponent_array *v48; // x8
  __int64 v49; // x8
  struct ItemIconComponent_array *v50; // x8
  ItemIconComponent_o *v51; // x22
  struct ItemIconComponent_array *v52; // x8
  bool v53; // w1
  struct ItemIconComponent_array *v54; // x8
  __int64 *v55; // x8
  System_String_o *v56; // x22
  UnityEngine_GameObject_o *v57; // x0
  SummonResultComponent_c *v58; // x8
  UnityEngine_GameObject_o *v59; // x23
  struct SummonResultComponent_StaticFields *v60; // x8
  __int64 v61; // x9
  UILabel_o *v62; // x21
  UILabel_o *v63; // x21
  System_String_o *v64; // x22
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  int *v68; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SummonResultComponent_c *v70; // x8
  int32_t size; // w21
  UnityEngine_GameObject_o *v72; // x20
  struct SummonResultComponent_StaticFields *static_fields; // x8
  __int64 v74; // x9
  UILabel_o *extraGiftTitleLb; // x20
  System_String_o *v76; // x21
  long double inited; // q0
  _QWORD *v78; // x22
  __int64 v79; // x8
  __int64 v80; // x0
  __int64 v81; // x0
  System_String_o *v82; // x0
  long double v83; // q0
  _QWORD *v84; // x22
  System_String_o *v85; // x21
  __int64 v86; // x8
  __int64 v87; // x0
  __int64 v88; // x0
  const MethodInfo *v89; // x1
  UnityEngine_GameObject_o *v90; // x0
  SummonResultComponent_c *v91; // x8
  UnityEngine_GameObject_o *v92; // x22
  struct SummonResultComponent_StaticFields *v93; // x8
  __int64 v94; // x9
  UILabel_o *v95; // x21
  System_String_o *v96; // x22
  long double v97; // q0
  _QWORD *v98; // x23
  __int64 v99; // x8
  __int64 v100; // x0
  __int64 v101; // x0
  Il2CppObject *v102; // x0
  int v103; // [xsp+Ch] [xbp-54h] BYREF
  int v104; // [xsp+18h] [xbp-48h] BYREF
  int v105; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4C238E8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_object___);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&SummonResultComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_12423/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/);
    sub_1C2D490(&StringLiteral_12425/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/);
    sub_1C2D490(&StringLiteral_12416/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/);
    sub_1C2D490(&StringLiteral_12427/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/);
    sub_1C2D490(&StringLiteral_12439/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/);
    sub_1C2D490(&StringLiteral_12440/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_1C2D490(&StringLiteral_12424/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/);
    sub_1C2D490(&StringLiteral_12438/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/);
    this = (SummonResultComponent_o *)sub_1C2D490(&StringLiteral_12426/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/);
    byte_4C238E8 = 1;
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
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !this )
      goto LABEL_159;
    this = (SummonResultComponent_o *)GiftMaster__GetGiftListByIds((GiftMaster_o *)this, giftIds, 0);
    v14 = giftBonusType == 2;
    v15 = (System_Collections_Generic_List_object__o *)this;
    if ( v14 )
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
        v43 = v10->fields.extraGiftIconComponents;
        if ( !v43 )
          goto LABEL_159;
        v44 = 4;
        while ( 1 )
        {
          max_length = v43->max_length;
          v46 = v44 - 4;
          if ( (int)v44 - 4 >= max_length )
            break;
          if ( v46 >= max_length )
            goto LABEL_160;
          this = (SummonResultComponent_o *)*((_QWORD *)&v43->obj.klass + v44);
          if ( !this )
            goto LABEL_159;
          if ( (signed int)v46 >= v15->fields._size )
          {
            ItemIconComponent__Clear((ItemIconComponent_o *)this, 0);
            v54 = v10->fields.extraGiftIconComponents;
            if ( !v54 )
              goto LABEL_159;
            if ( v46 >= LODWORD(v54->max_length) )
              goto LABEL_160;
            this = (SummonResultComponent_o *)*((_QWORD *)&v54->obj.klass + v44);
            if ( !this )
              goto LABEL_159;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_159;
            v53 = 0;
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
            v48 = v10->fields.extraGiftIconComponents;
            if ( !v48 )
              goto LABEL_159;
            if ( v46 >= LODWORD(v48->max_length) )
              goto LABEL_160;
            v49 = *((_QWORD *)&v48->obj.klass + v44);
            if ( !v49 )
              goto LABEL_159;
            this = *(SummonResultComponent_o **)(v49 + 40);
            if ( !this )
              goto LABEL_159;
            UIWidget__set_height(
              (UIWidget_o *)this,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0);
            v50 = v10->fields.extraGiftIconComponents;
            if ( !v50 )
              goto LABEL_159;
            if ( v46 >= LODWORD(v50->max_length) )
              goto LABEL_160;
            v51 = (ItemIconComponent_o *)*((_QWORD *)&v50->obj.klass + v44);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v15,
                                                v46,
                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !v51 )
              goto LABEL_159;
            ItemIconComponent__SetGift(v51, (GiftEntity_o *)this, -1, 0, 0);
            v52 = v10->fields.extraGiftIconComponents;
            if ( !v52 )
              goto LABEL_159;
            if ( v46 >= LODWORD(v52->max_length) )
              goto LABEL_160;
            this = (SummonResultComponent_o *)*((_QWORD *)&v52->obj.klass + v44);
            if ( !this )
              goto LABEL_159;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_159;
            v53 = 1;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v53, 0);
          v43 = v10->fields.extraGiftIconComponents;
          ++v44;
          if ( !v43 )
            goto LABEL_159;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_159;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v70 = SummonResultComponent_TypeInfo;
        size = v15->fields._size;
        v72 = gameObject;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v70 = SummonResultComponent_TypeInfo;
        }
        static_fields = v70->static_fields;
        v74 = 48;
        if ( size == 1 )
          v74 = 44;
        GameObjectExtensions__SetLocalPositionX(
          v72,
          (float)*(int *)((char *)&static_fields->TUTORIAL_BACK_ARROW_WAY + v74),
          0);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v76 = LocalizationManager__Get((System_String_o *)StringLiteral_12439/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0);
        v78 = Method_System_Array_Empty_object___;
        v79 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v79 )
        {
          sub_1C7DC00(Method_System_Array_Empty_object___);
          v79 = v78[7];
        }
        v80 = *(_QWORD *)(v79 + 16);
        if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
          v80 = sub_1C7DBA4(inited);
        if ( !*(_DWORD *)(v80 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v80);
        v81 = *(_QWORD *)(v78[7] + 16LL);
        if ( (*(_BYTE *)(v81 + 309) & 1) == 0 )
          v81 = sub_1C7DBA4(inited);
        this = (SummonResultComponent_o *)System_String__Format_63499292(v76, **(System_Object_array ***)(v81 + 184), 0);
        if ( !extraGiftTitleLb )
          goto LABEL_159;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v82 = LocalizationManager__Get((System_String_o *)StringLiteral_12438/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0);
        v84 = Method_System_Array_Empty_object___;
        v85 = v82;
        v86 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v86 )
        {
          sub_1C7DC00(Method_System_Array_Empty_object___);
          v86 = v84[7];
        }
        v87 = *(_QWORD *)(v86 + 16);
        if ( (*(_BYTE *)(v87 + 309) & 1) == 0 )
          v87 = sub_1C7DBA4(v83);
        if ( !*(_DWORD *)(v87 + 224) )
          v83 = j_il2cpp_runtime_class_init_0(v87);
        v88 = *(_QWORD *)(v84[7] + 16LL);
        if ( (*(_BYTE *)(v88 + 309) & 1) == 0 )
          v88 = sub_1C7DBA4(v83);
        this = (SummonResultComponent_o *)System_String__Format_63499292(v85, **(System_Object_array ***)(v88 + 184), 0);
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
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0);
        if ( !extraGiftMsg2Lb )
          goto LABEL_159;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0);
      SummonResultComponent__SetSpecialGiftPosition(v10, v89);
      return;
    }
    v18 = v10->fields.extraGiftIconComponents;
    if ( !v18 )
      goto LABEL_159;
    if ( !LODWORD(v18->max_length) )
      goto LABEL_160;
    v19 = v18->m_Items[0];
    if ( !v19 )
      goto LABEL_159;
    iconSprite = (UIWidget_o *)v19->fields.iconSprite;
    this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !iconSprite )
      goto LABEL_159;
    UIWidget__set_width(iconSprite, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0);
    v21 = v10->fields.extraGiftIconComponents;
    if ( !v21 )
      goto LABEL_159;
    if ( !LODWORD(v21->max_length) )
      goto LABEL_160;
    v22 = v21->m_Items[0];
    if ( !v22 )
      goto LABEL_159;
    this = (SummonResultComponent_o *)v22->fields.iconSprite;
    if ( !this )
      goto LABEL_159;
    UIWidget__set_height((UIWidget_o *)this, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0);
    v23 = v10->fields.extraGiftIconComponents;
    if ( !v23 )
      goto LABEL_159;
    if ( !LODWORD(v23->max_length) )
      goto LABEL_160;
    this = (SummonResultComponent_o *)v23->m_Items[0];
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
    v24 = v10->fields.extraGiftIconComponents;
    if ( !v24 )
      goto LABEL_159;
    if ( !LODWORD(v24->max_length) )
LABEL_160:
      sub_1C2D6F4(this, giftIds, v13);
    if ( !v15 )
      goto LABEL_159;
    v25 = v24->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v15,
                                        0,
                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !v25 )
      goto LABEL_159;
    ItemIconComponent__SetGift(v25, (GiftEntity_o *)this, -1, 0, 0);
    if ( giftResultType == 3 )
    {
      summonBeforeMana = v10->fields.summonBeforeMana;
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      ManaMax = v27->static_fields->ManaMax;
      if ( summonBeforeMana < ManaMax )
      {
        if ( !v27->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v27);
          ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( this )
        {
          v29 = v10->fields.summonBeforeMana;
          v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v31 = SummonResultComponent_TypeInfo;
          v32 = v30;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            v31 = SummonResultComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(
            v32,
            (float)v31->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME,
            0);
          v33 = v10->fields.extraGiftTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12427/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0);
          if ( v33 )
          {
            UILabel__set_text(v33, (System_String_o *)this, 0);
            v34 = v10->fields.extraGiftMsg2Lb;
            v35 = LocalizationManager__Get((System_String_o *)StringLiteral_12425/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v15,
                                                0,
                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v29;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v29 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v15,
                                                    0,
                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_159;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v105 = m_CancellationTokenSource_high;
              v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105, v36, v37, v38);
              this = (SummonResultComponent_o *)System_String__Format(v35, v40, 0);
              if ( v34 )
              {
                UILabel__set_text(v34, (System_String_o *)this, 0);
                this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
                v41 = v10->fields.extraGiftTitleLb;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                if ( v41 )
                {
                  UILabel__set_fontSize(v41, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0);
                  this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
                  if ( this )
                  {
                    UILabel__set_fontSize(
                      (UILabel_o *)this,
                      SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE,
                      0);
LABEL_157:
                    SummonResultComponent__SetBonusGiftPosition(v10, v42);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_159:
        sub_1C2D6EC(this, giftIds);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_159;
      v90 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v91 = SummonResultComponent_TypeInfo;
      v92 = v90;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v91 = SummonResultComponent_TypeInfo;
      }
      v93 = v91->static_fields;
      v94 = 52;
      if ( adjustTitleLabel )
        v94 = 56;
      GameObjectExtensions__SetLocalPositionX(v92, (float)*(int *)((char *)&v93->TUTORIAL_BACK_ARROW_WAY + v94), 0);
      v95 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12426/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0);
      v98 = Method_System_Array_Empty_object___;
      v99 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v99 )
      {
        sub_1C7DC00(Method_System_Array_Empty_object___);
        v99 = v98[7];
      }
      v100 = *(_QWORD *)(v99 + 16);
      if ( (*(_BYTE *)(v100 + 309) & 1) == 0 )
        v100 = sub_1C7DBA4(v97);
      if ( !*(_DWORD *)(v100 + 224) )
        v97 = j_il2cpp_runtime_class_init_0(v100);
      v101 = *(_QWORD *)(v98[7] + 16LL);
      if ( (*(_BYTE *)(v101 + 309) & 1) == 0 )
        v101 = sub_1C7DBA4(v97);
      this = (SummonResultComponent_o *)System_String__Format_63499292(v96, **(System_Object_array ***)(v101 + 184), 0);
      if ( !v95 )
        goto LABEL_159;
      UILabel__set_text(v95, (System_String_o *)this, 0);
      v63 = v10->fields.extraGiftMsg2Lb;
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12423/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v15,
                                          0,
                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_159;
      v68 = &v104;
      v104 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    else
    {
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( v10->fields.isOneTimeFreeSummon )
        v55 = &StringLiteral_12416/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/;
      else
        v55 = &StringLiteral_12427/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/;
      if ( !this )
        goto LABEL_159;
      v56 = (System_String_o *)*v55;
      v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v58 = SummonResultComponent_TypeInfo;
      v59 = v57;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v58 = SummonResultComponent_TypeInfo;
      }
      v60 = v58->static_fields;
      v61 = 36;
      if ( adjustTitleLabel )
        v61 = 40;
      GameObjectExtensions__SetLocalPositionX(v59, (float)*(int *)((char *)&v60->TUTORIAL_BACK_ARROW_WAY + v61), 0);
      v62 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SummonResultComponent_o *)LocalizationManager__Get(v56, 0);
      if ( !v62 )
        goto LABEL_159;
      UILabel__set_text(v62, (System_String_o *)this, 0);
      v63 = v10->fields.extraGiftMsg2Lb;
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_12424/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v15,
                                          0,
                                          (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_159;
      v68 = &v103;
      v103 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v68, v65, v66, v67);
    this = (SummonResultComponent_o *)System_String__Format(v64, v102, 0);
    if ( v63 )
    {
      UILabel__set_text(v63, (System_String_o *)this, 0);
      goto LABEL_157;
    }
    goto LABEL_159;
  }
}


void SummonResultComponent__SetBonusGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x2
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

  if ( (byte_4C238E9 & 1) == 0 )
  {
    sub_1C2D490(&SummonResultComponent_TypeInfo);
    byte_4C238E9 = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
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
        sub_1C2D6F4(extraGiftTitleLb, method, v5);
      v13 = &extraGiftIconComponents->obj.klass + (int)v12;
      v14 = v13[4];
      if ( !v14 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v13[4],
                                                      0);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v15 = *(_QWORD *)&v14->_1.byval_arg.bits;
        if ( !v15 )
          break;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
        GameObjectExtensions__SetLocalPositionX(v16, v11 + (float)*(int *)(v15 + 168), 0);
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
        v11 = GameObjectExtensions__GetLocalPositionX(v17, 0);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1C2D6EC(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v19 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v19 > *(_DWORD *)(extraGiftTitleLb[7].fields.m_CachedPtr + 72) )
  {
    v20 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
    if ( !v20 )
      goto LABEL_27;
    UIWidget__set_width(v20, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0);
  v21 = this->fields.extraGiftMsg2Lb;
  if ( !v21 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v11 + 1.0) + (float)((float)v21->fields.mWidth * 0.5),
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
  const MethodInfo *v17; // x3
  BalanceConfig_c *v18; // x0
  __int64 v19; // x2
  int v20; // w8
  __int64 v21; // x22
  void **v22; // x8
  GachaInfos_o *v23; // x24
  UnityEngine_GameObject_o *targetGo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v26; // x25
  UnityEngine_Transform_o *v27; // x26
  const MethodInfo *v28; // x2
  int32_t objectId; // w27
  bool v30; // w26
  bool IsCommandCode; // w27
  SummonResultInfoComponent_ClickDelegate_o *v32; // x0
  intptr_t *v33; // x8
  SummonResultInfoComponent_ClickDelegate_o *v34; // x27
  __int64 sellQp; // x25
  int64_t summonBeforeQp; // x26
  int64_t QpMax; // x8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  intptr_t m_CachedPtr; // x8
  _QWORD *v42; // x9
  __int64 klass_low; // x10
  float v44; // s12
  float v45; // s11
  float v46; // s8
  float v47; // s3
  float v48; // s0
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+8h] [xbp-98h]
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C238F5 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_SummonResultComponent_showResCcDetail__);
    sub_1C2D490(&Method_SummonResultComponent_showResSvtDetail__);
    byte_4C238F5 = 1;
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
  v15 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v15;
  p_befSvtList = &this->fields.befSvtList;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v15, v16, v17);
  v20 = resultList->max_length;
  if ( v20 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v21 >= v20 )
        sub_1C2D6F4(v18, v7, v19);
      v22 = (void **)((unsigned int)v21 >= 6 ? &this->fields.scdGrid : &this->fields.fstGrid);
      Object = (UnityEngine_Component_o *)*v22;
      if ( !*v22 )
        break;
      v23 = resultList->m_Items[v21];
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
      v26 = (UnityEngine_GameObject_o *)Object;
      Object = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object, 0);
      v27 = (UnityEngine_Transform_o *)Object;
      if ( !byte_4C20DA6 )
      {
        Object = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v27 )
        break;
      UnityEngine_Transform__set_localScale(v27, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      if ( !v23 )
        break;
      if ( v23->fields.isNew
        && (objectId = v23->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v28)) )
      {
        Object = (UnityEngine_Component_o *)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        m_CachedPtr = Object->fields.m_CachedPtr;
        v42 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(Object[1].klass);
        if ( !m_CachedPtr )
          break;
        klass_low = SLODWORD(Object[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Object,
            objectId,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          v30 = 0;
        }
        else
        {
          v30 = 0;
          LODWORD(Object[1].klass) = klass_low + 1;
          *(_DWORD *)(m_CachedPtr + 4 * klass_low + 32) = objectId;
        }
      }
      else
      {
        v30 = 1;
      }
      IsCommandCode = SvtType__IsCommandCode(v23->fields.type, 0);
      v32 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C2D6DC(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      v33 = &Method_SummonResultComponent_showResCcDetail__;
      if ( !IsCommandCode )
        v33 = &Method_SummonResultComponent_showResSvtDetail__;
      v34 = v32;
      SummonResultInfoComponent_ClickDelegate___ctor(v32, (Il2CppObject *)this, *v33, 0);
      if ( v23->fields.sellMana || v23->fields.sellQp )
      {
        v34 = 0;
        *autoSale = 1;
      }
      Object = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                            v26,
                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
      if ( !Object )
        break;
      SummonResultInfoComponent__setResultData(
        (SummonResultInfoComponent_o *)Object,
        v23,
        v30,
        v34,
        this->fields.summonBeforeQp,
        this->fields.summonBeforeMana,
        0);
      v18 = BalanceConfig_TypeInfo;
      sellQp = v23->fields.sellQp;
      summonBeforeQp = this->fields.summonBeforeQp;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      QpMax = v18->static_fields->QpMax;
      if ( summonBeforeQp + sellQp >= QpMax )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          v18 = BalanceConfig_TypeInfo;
          QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
        }
      }
      else
      {
        QpMax = this->fields.summonBeforeQp + v23->fields.sellQp;
      }
      this->fields.summonBeforeQp = QpMax;
      sellMana = v23->fields.sellMana;
      summonBeforeMana = this->fields.summonBeforeMana;
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v18->static_fields->UserItemMax;
      if ( summonBeforeMana + sellMana >= UserItemMax )
      {
        if ( !v18->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v18);
          UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
        }
      }
      else
      {
        UserItemMax = this->fields.summonBeforeMana + v23->fields.sellMana;
      }
      this->fields.summonBeforeMana = UserItemMax;
      v20 = resultList->max_length;
      if ( (int)++v21 >= v20 )
        goto LABEL_46;
    }
LABEL_62:
    sub_1C2D6EC(Object, v7);
  }
LABEL_46:
  Object = (UnityEngine_Component_o *)this->fields.fstGrid;
  v44 = (float)max_length;
  v45 = (float)maxPerLine;
  if ( (float)max_length <= v45 )
    v46 = 22.0;
  else
    v46 = 106.0;
  if ( !Object )
    goto LABEL_62;
  Object = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(Object, 0);
  if ( !Object )
    goto LABEL_62;
  v47 = v44 <= v45 ? v44 : v45;
  v51.fields.x = (float)(cellWidth * -0.5) * (float)(v47 + -1.0);
  v51.fields.y = v46;
  v51.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v51, 0);
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
  v48 = (float)(v44 - v45) + -1.0;
  if ( v44 <= v45 )
    v48 = -1.0;
  v52.fields.x = (float)(v14 * -0.5) * v48;
  v52.fields.y = -62.0;
  v52.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v52, 0);
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
  const MethodInfo *v8; // x3
  int *scrollBar; // x0
  __int64 objectId; // x1
  struct UIGrid_o *listRoot; // x8
  float cellWidth; // s0
  int maxPerLine; // w8
  float v14; // s8
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaId; // w25
  int64_t summonSceneInTime; // x26
  System_Collections_Generic_List_object__o *v19; // x24
  const MethodInfo *v20; // x2
  int max_length; // w8
  struct System_Collections_Generic_List_int__o **p_befSvtList; // x20
  int v23; // w21
  __int64 v24; // x22
  GachaInfos_o **m_Items; // x23
  GachaInfos_o *v26; // x27
  bool v27; // w29
  MultiExSummonListViewItem_o *v28; // x28
  ListViewSort_o *v29; // x27
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  System_Comparison_T__o *v39; // x23
  Il2CppObject *v40; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_List_object__o *v44; // x23
  int i; // w22
  _BOOL8 v46; // x0
  __int64 v47; // x1
  Il2CppObject *current; // x28
  GachaInfos_o *monitor; // x26
  Il2CppObject *rewardIconObj; // x25
  Il2CppObject *v51; // x0
  __int64 v52; // x1
  UnityEngine_GameObject_o *v53; // x25
  __int64 v54; // x1
  UnityEngine_Component_o *v55; // x0
  UnityEngine_Component_o *transform; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  SummonResultInfoComponent_ClickDelegate_o *v59; // x27
  Il2CppObject *Component_object; // x0
  __int64 v61; // x1
  BalanceConfig_c *v62; // x0
  __int64 sellQp; // x28
  int64_t summonBeforeQp; // x20
  int64_t QpMax; // x27
  __int64 v66; // x0
  __int64 v67; // x1
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  GachaInfos_array *v70; // x8
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  struct UIGrid_o *v75; // x8
  System_Action_object__o *v76; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+30h] [xbp-90h] BYREF
  GachaInfos_array *v81; // [xsp+58h] [xbp-68h]

  v81 = resultList;
  if ( (byte_4C238F4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_GameObject__TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_1C2D490(&System_Comparison_MultiExSummonListViewItem__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_1C2D490(&ListViewSort_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&MultiExSummonListViewItem_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SummonResultComponent_showResCcDetail__);
    sub_1C2D490(&Method_SummonResultComponent_showResSvtDetail__);
    sub_1C2D490(&Method_SummonResultComponent___c__SetResultData_b__87_0__);
    sub_1C2D490(&Method_SummonResultComponent___c__DisplayClass87_0__SetResultData_b__1__);
    sub_1C2D490(&SummonResultComponent___c__DisplayClass87_0_TypeInfo);
    sub_1C2D490(&SummonResultComponent___c_TypeInfo);
    byte_4C238F4 = 1;
  }
  memset(&v80, 0, sizeof(v80));
  v5 = (SummonResultComponent___c__DisplayClass87_0_o *)sub_1C2D6DC(SummonResultComponent___c__DisplayClass87_0_TypeInfo);
  SummonResultComponent___c__DisplayClass87_0___ctor(v5, 0);
  *autoSale = 0;
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v6, v7, v8);
  listRoot = this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_71;
  if ( !v81 )
    goto LABEL_71;
  if ( !v5 )
    goto LABEL_71;
  cellWidth = listRoot->fields.cellWidth;
  maxPerLine = listRoot->fields.maxPerLine;
  v14 = (float)(SLODWORD(v81->max_length) % maxPerLine);
  v5->fields.offset = (float)(cellWidth * 0.5) * (float)((float)maxPerLine - v14);
  summonCtrl = this->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_71;
  gachaParamData = summonCtrl->fields.gachaParamData;
  object = (Il2CppObject *)v5;
  if ( !gachaParamData )
    goto LABEL_71;
  gachaId = gachaParamData->fields.gachaId;
  summonSceneInTime = summonCtrl->fields.summonSceneInTime;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
  max_length = v81->max_length;
  if ( max_length >= 1 )
  {
    p_befSvtList = &this->fields.befSvtList;
    v23 = 0;
    v24 = 0;
    m_Items = v81->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v24 >= max_length )
        sub_1C2D6F4(scrollBar, objectId, v20);
      v26 = m_Items[v24];
      if ( !v26 )
        break;
      if ( v26->fields.isNew && !SummonResultComponent__checkOverlapSvt(this, v26->fields.objectId, v20) )
      {
        scrollBar = (int *)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        objectId = (unsigned int)v26->fields.objectId;
        v36 = *((_QWORD *)scrollBar + 2);
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++scrollBar[7];
        if ( !v36 )
          break;
        v38 = scrollBar[6];
        if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)scrollBar,
            objectId,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          v27 = 0;
        }
        else
        {
          v27 = 0;
          scrollBar[6] = v38 + 1;
          *(_DWORD *)(v36 + 4 * v38 + 32) = objectId;
        }
      }
      else
      {
        v27 = 1;
      }
      v28 = (MultiExSummonListViewItem_o *)sub_1C2D6DC(MultiExSummonListViewItem_TypeInfo);
      MultiExSummonListViewItem___ctor(v28, v26, v27, gachaId, summonSceneInTime, v23 + LODWORD(v81->max_length), 0);
      v29 = (ListViewSort_o *)sub_1C2D6DC(ListViewSort_TypeInfo);
      ListViewSort___ctor(v29, 27, 1, 0);
      if ( !v28 )
        break;
      scrollBar = (int *)((__int64 (__fastcall *)(MultiExSummonListViewItem_o *, ListViewSort_o *, const MethodInfo *))v28->klass->vtable._4_SetSortValue.methodPtr)(
                           v28,
                           v29,
                           v28->klass->vtable._4_SetSortValue.method);
      if ( !v19 )
        break;
      items = v19->fields._items;
      v33 = Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__;
      ++v19->fields._version;
      if ( !items )
        break;
      size = v19->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)v28,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v28;
        sub_1C2D434((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v28, v30, v31);
      }
      ++v24;
      --v23;
      max_length = v81->max_length;
      if ( (int)v24 >= max_length )
        goto LABEL_28;
    }
LABEL_71:
    sub_1C2D6EC(scrollBar, objectId);
  }
LABEL_28:
  scrollBar = (int *)SummonResultComponent___c_TypeInfo;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    scrollBar = (int *)SummonResultComponent___c_TypeInfo;
  }
  v39 = *(System_Comparison_T__o **)(*((_QWORD *)scrollBar + 23) + 16LL);
  if ( !v39 )
  {
    if ( !scrollBar[56] )
    {
      j_il2cpp_runtime_class_init_0(scrollBar);
      scrollBar = (int *)SummonResultComponent___c_TypeInfo;
    }
    v40 = (Il2CppObject *)**((_QWORD **)scrollBar + 23);
    v39 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_MultiExSummonListViewItem__TypeInfo);
    System_Comparison_object____ctor(v39, v40, Method_SummonResultComponent___c__SetResultData_b__87_0__, 0);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Comparison_MultiExSummonListViewItem__o *)v39;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__87_0, (int32_t)v39, v42, v43);
  }
  if ( !v19 )
    goto LABEL_71;
  System_Collections_Generic_List_object___Sort_58242632(
    v19,
    v39,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
  v44 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v79,
    v19,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
  v80 = v79;
  for ( i = 1; ; ++i )
  {
    v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v80,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    if ( !v46 )
      break;
    current = v80.fields._current;
    if ( !v80.fields._current )
      sub_1C2D6EC(v46, v47);
    monitor = (GachaInfos_o *)v80.fields._current[7].monitor;
    rewardIconObj = (Il2CppObject *)this->fields.rewardIconObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v51 = UnityEngine_Object__Instantiate_object_(
            rewardIconObj,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v53 = (UnityEngine_GameObject_o *)v51;
    if ( !v51 )
      sub_1C2D6EC(0, v52);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v51, 1, 0);
    v55 = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !v55 )
      sub_1C2D6EC(0, v54);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v55, 0);
    GameObjectExtensions__SetParent(v53, transform, 0);
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(v53, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( !byte_4C20DA6 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v53, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    if ( !monitor )
      sub_1C2D6EC(v57, v58);
    if ( SvtType__IsCommandCode(monitor->fields.type, 0) )
    {
      v59 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C2D6DC(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v59,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResCcDetail__,
        0);
    }
    else
    {
      v59 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C2D6DC(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v59,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResSvtDetail__,
        0);
    }
    if ( monitor->fields.sellMana || monitor->fields.sellQp )
    {
      v59 = 0;
      *autoSale = 1;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v53,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    if ( !Component_object )
      sub_1C2D6EC(0, v61);
    SummonResultInfoComponent__setResultData(
      (SummonResultInfoComponent_o *)Component_object,
      monitor,
      (bool)current[8].klass,
      v59,
      this->fields.summonBeforeQp,
      this->fields.summonBeforeMana,
      0);
    v62 = BalanceConfig_TypeInfo;
    sellQp = monitor->fields.sellQp;
    summonBeforeQp = this->fields.summonBeforeQp;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v62 = BalanceConfig_TypeInfo;
    }
    QpMax = v62->static_fields->QpMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.summonBeforeQp = System_Math__Min_64982380(summonBeforeQp + sellQp, QpMax, 0);
    v66 = System_Math__Min_64982368(
            this->fields.summonBeforeMana + monitor->fields.sellMana,
            BalanceConfig_TypeInfo->static_fields->UserItemMax,
            0);
    v70 = v81;
    this->fields.summonBeforeMana = v66;
    if ( (float)((float)SLODWORD(v70->max_length) - v14) < (float)i )
    {
      if ( !v44 )
        sub_1C2D6EC(v66, v67);
      v71 = v44->fields._items;
      v72 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v44->fields._version;
      if ( !v71 )
        sub_1C2D6EC(v66, v67);
      v73 = v44->fields._size;
      if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)v53,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
      }
      else
      {
        v74 = &v71->obj.klass + v73;
        v44->fields._size = v73 + 1;
        v74[4] = (Il2CppClass *)v53;
        sub_1C2D434((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v53, v68, v69);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v80,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
  scrollBar = (int *)this->fields.listRoot;
  if ( !scrollBar )
    goto LABEL_71;
  scrollBar = (int *)(*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)scrollBar + 440LL))(
                       scrollBar,
                       *(_QWORD *)(*(_QWORD *)scrollBar + 448LL));
  v75 = this->fields.listRoot;
  if ( !v75 )
    goto LABEL_71;
  scrollBar = (int *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)scrollBar,
    SLODWORD(v81->max_length) > 2 * v75->fields.maxPerLine,
    0);
  scrollBar = (int *)this->fields.scrollView;
  if ( !scrollBar )
    goto LABEL_71;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0);
  v76 = (System_Action_object__o *)sub_1C2D6DC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v76, object, Method_SummonResultComponent___c__DisplayClass87_0__SetResultData_b__1__, 0);
  if ( !v44 )
    goto LABEL_71;
  System_Collections_Generic_List_object___ForEach(
    v44,
    (System_Action_T__o *)v76,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void SummonResultComponent__SetSpecialGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x2
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

  if ( (byte_4C238EA & 1) == 0 )
  {
    sub_1C2D490(&SummonResultComponent_TypeInfo);
    byte_4C238EA = 1;
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
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
        sub_1C2D6F4(extraGiftTitleLb, method, v5);
      v13 = &extraGiftIconComponents->obj.klass + (int)v12;
      v14 = v13[4];
      if ( !v14 )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)v13[4],
                                                      0);
      if ( !extraGiftTitleLb )
        break;
      extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                      (UnityEngine_GameObject_o *)extraGiftTitleLb,
                                                      0);
      if ( ((unsigned __int8)extraGiftTitleLb & 1) != 0 )
      {
        v15 = *(_QWORD *)&v14->_1.byval_arg.bits;
        if ( !v15 )
          break;
        v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
        GameObjectExtensions__SetLocalPositionX(v16, (float)(v11 + (float)*(int *)(v15 + 168)) + 2.0, 0);
        v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0);
        v11 = GameObjectExtensions__GetLocalPositionX(v17, 0);
      }
      max_length = extraGiftIconComponents->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_15;
    }
LABEL_27:
    sub_1C2D6EC(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0);
  extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v19 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v19 > *(_DWORD *)(extraGiftTitleLb[7].fields.m_CachedPtr + 72) )
  {
    v20 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
    if ( !v20 )
      goto LABEL_27;
    UIWidget__set_width(v20, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0);
  }
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0);
  v21 = this->fields.extraGiftMsg2Lb;
  if ( !v21 )
    goto LABEL_27;
  GameObjectExtensions__SetLocalPositionX(
    (UnityEngine_GameObject_o *)extraGiftTitleLb,
    (float)(v11 + (float)((float)v21->fields.mWidth * 0.5)) + 2.0,
    0);
}


void SummonResultComponent___DialogCallBack_b__80_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x19

  if ( (byte_4C238F7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SummonResultComponent_EndCloseDialogCallBack__);
    byte_4C238F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v4, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
LABEL_8:
    sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C238EC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C238EC = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C2D6EC(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_376C870 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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

  if ( (byte_4C238F1 & 1) == 0 )
  {
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Transform_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C238F1 = 1;
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
      UnityEngine_Object__Destroy_71163704(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_56:
    sub_1C2D6EC(fstGrid, method);
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
      UnityEngine_Object__Destroy_71163704(v9, 0);
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
    sub_1C2D6EC(0, v10);
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
      v15 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v19 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
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
      sub_1C2D9AC(v20);
LABEL_58:
      sub_1C2D6EC(v20, v21);
    }
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v23, 0);
  }
  v24 = sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
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
      v29 = sub_1C7DCA8(v24, System_IDisposable_TypeInfo, 0);
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
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  __int64 v33; // x2
  const MethodInfo *v34; // x5
  float v35; // s8
  System_Nullable_int__o v36; // x0
  struct UIGrid_o *v37; // x8
  GachaExtraGifts_o *v38; // x9
  int32_t gachaExtraGiftResultType; // w2
  int32_t gachaExtraGiftBonusType; // w3
  SummonResultComponent_o *v41; // x0
  System_Collections_Generic_IEnumerable_int__o *v42; // x1
  bool v43; // w4
  System_Collections_Generic_HashSet_int__o *v44; // x22
  il2cpp_array_size_t max_length; // x8
  __int64 v46; // x25
  int32_t v47; // w23
  int32_t v48; // w24
  GachaExtraGifts_o *v49; // x29
  __int64 v50; // [xsp+8h] [xbp-78h] BYREF
  bool autoSale[4]; // [xsp+1Ch] [xbp-64h] BYREF

  v9 = resultList;
  if ( (byte_4C238E6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&SummonResultComponent_TypeInfo);
    sub_1C2D490(&Method_SummonResultComponent___c__initGachaResultList_b__70_0__);
    sub_1C2D490(&SummonResultComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_12440/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_1C2D490(&StringLiteral_12465/*"SUMMON_RESULT_AUTOSALE_MSG"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C238E6 = 1;
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
                                                     (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    sub_1C2D6EC(changeSceneBtnInfo, resultList);
  }
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  GameObjectExtensions__SetLocalPositionY(v22, v20, 0);
  autoSaleMsgLb = this->fields.autoSaleMsgLb;
  if ( v21 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12465/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0);
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
    _9__70_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_ItemIconComponent__TypeInfo);
    System_Action_object____ctor(_9__70_0, v28, Method_SummonResultComponent___c__initGachaResultList_b__70_0__, 0);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Action_ItemIconComponent__o *)_9__70_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__70_0, (int32_t)_9__70_0, v30, v31);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__70_0,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_ItemIconComponent___);
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
      v35 = 0.0;
      if ( v9 )
      {
        v50 = 0;
        v36 = (System_Nullable_int__o)&v50;
        System_Nullable_int____ctor(
          v36,
          v9->max_length,
          (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v50 )
          v35 = (float)SHIDWORD(v50);
      }
      v37 = this->fields.fstGrid;
      if ( !v37 )
        goto LABEL_97;
      if ( LODWORD(gachaExtraGiftList->max_length) )
      {
        v38 = gachaExtraGiftList->m_Items[0];
        if ( !v38 )
          goto LABEL_97;
        gachaExtraGiftBonusType = v38->fields.gachaExtraGiftBonusType;
        gachaExtraGiftResultType = v38->fields.gachaExtraGiftResultType;
        v41 = this;
        v42 = (System_Collections_Generic_IEnumerable_int__o *)extraGiftIds;
        v43 = v35 > (float)v37->fields.maxPerLine;
        goto LABEL_95;
      }
LABEL_98:
      sub_1C2D6F4(changeSceneBtnInfo, resultList, v33);
    }
    v44 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v44,
      (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    max_length = extraGiftIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v46 = 0;
      v47 = 0;
      v48 = 0;
      while ( (unsigned int)v46 < (unsigned int)max_length
           && (unsigned int)v46 < LODWORD(gachaExtraGiftList->max_length) )
      {
        v49 = gachaExtraGiftList->m_Items[v46];
        if ( !v49 )
          goto LABEL_97;
        if ( v49->fields.gachaExtraGiftBonusType == 2 )
        {
          if ( !v44 )
            goto LABEL_97;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_HashSet_int___Add(
                                                             v44,
                                                             extraGiftIds->m_Items[v46],
                                                             (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v47 = v49->fields.gachaExtraGiftBonusType;
          v48 = v49->fields.gachaExtraGiftResultType;
          max_length = extraGiftIds->max_length;
        }
        if ( (int)++v46 >= (int)max_length )
          goto LABEL_89;
      }
      goto LABEL_98;
    }
    v48 = 0;
    v47 = 0;
LABEL_89:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)extraGiftIds, 0) )
    {
      v41 = this;
      v42 = (System_Collections_Generic_IEnumerable_int__o *)v44;
      gachaExtraGiftResultType = v48;
      gachaExtraGiftBonusType = v47;
      v43 = 0;
LABEL_95:
      SummonResultComponent__SetBonusGiftDisplay(v41, v42, gachaExtraGiftResultType, gachaExtraGiftBonusType, v43, v34);
      goto LABEL_96;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0);
    if ( !this->fields.extraGiftMsgLb )
      goto LABEL_97;
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0);
  }
LABEL_96:
  SummonResultComponent__setListByType(this, this->fields.dispType, v32);
}


void SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C238F2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12213/*"SHOW_TALK"*/);
    byte_4C238F2 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1C2D6EC(0, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12213/*"SHOW_TALK"*/, 0);
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
  __int64 v4; // x2
  unsigned int klass; // w8
  float32x2_t *v6; // x20
  unsigned __int64 v7; // x21
  float *p_fields; // x22
  float v9; // s8
  float v10; // s9
  float v11; // s10
  float v12; // s1
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
  if ( !mWidget
    || (mWidget = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))mWidget->klass[1]._1.interopData)(
                                               mWidget,
                                               mWidget->klass[1]._1.klass)) == 0 )
  {
LABEL_11:
    sub_1C2D6EC(mWidget, method);
  }
  klass = (unsigned int)mWidget[1].klass;
  v6 = (float32x2_t *)mWidget;
  v7 = 0;
  p_fields = (float *)&mWidget[1].fields;
  do
  {
    if ( v7 >= klass )
      goto LABEL_12;
    mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
    if ( !mWidget )
      goto LABEL_11;
    v9 = *(p_fields - 2);
    v10 = *(p_fields - 1);
    v11 = *p_fields;
    mWidget = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mWidget, 0);
    if ( !mWidget )
      goto LABEL_11;
    v13.fields.x = v9;
    v13.fields.y = v10;
    v13.fields.z = v11;
    v14 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)mWidget, v13, 0);
    if ( v7 >= v6[3].n64_u32[0] )
      goto LABEL_12;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v14;
    p_fields += 3;
    klass = v6[3].n64_u32[0];
    ++v7;
  }
  while ( v7 != 4 );
  if ( klass <= 2 )
LABEL_12:
    sub_1C2D6F4(mWidget, method, v4);
  v12 = v6[5].n64_f32[0] + (float)((float)(v6[8].n64_f32[0] - v6[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v6[4],
                                                    vmul_f32(vsub_f32(v6[7], v6[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v12;
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
  int v34; // w8
  UserGameEntity_o *SelfUserGame; // x22
  long double v36; // q0
  __int64 v37; // x8
  __int64 v38; // x0
  TblUserEntity_o *UserData; // x23
  GachaEntity_o *v40; // x22
  int friendPoint; // w24
  int32_t v42; // w23
  bool v43; // w0
  UILabel_o *v44; // x22
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  UILabel_o *v49; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  Il2CppObject *v51; // x0
  Il2CppObject *v52; // x22
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  UILabel_o *v56; // x22
  Il2CppObject *v57; // x0
  Il2CppObject *v58; // x21
  UserItemEntity_o *v59; // x0
  UILabel_o *v60; // x21
  struct UILabel_o *v61; // x21
  System_String_o *v62; // x1
  int32_t monitor_high; // w9
  UILabel_o *v64; // x21
  UILabel_o *v65; // x21
  int gachaResourceNum; // w23
  int32_t v67; // w1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  int v71; // w22
  __int64 v72; // x24
  UILabel_o *v73; // x23
  Il2CppObject *v74; // x0
  struct SummonControl_o *v75; // x8
  struct SummonControl_o *v76; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v82; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_Component_o *Parent; // x0
  SummonResultComponent_c *v89; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v96; // s11
  float v97; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v99; // s14
  int v100; // w22
  int32_t maxDrawNum; // w23
  struct SummonControl_o *v102; // x8
  int gachaTime; // [xsp+Ch] [xbp-C4h] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v105; // [xsp+18h] [xbp-B8h] BYREF
  UserGachaEntity_o *entity; // [xsp+20h] [xbp-B0h] BYREF
  GachaAppendEntity_o *v107; // [xsp+28h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+38h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v109; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v114; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v115; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v116; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v117; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v118; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v120; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v121; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v122; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C238E7 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C2D490(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SummonResultComponent_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&UserGachaMaster_TypeInfo);
    sub_1C2D490(&StringLiteral_12409/*"SUMMON_APPEND_END"*/);
    sub_1C2D490(&StringLiteral_12200/*"SHORT_SERVANT_FORMATION"*/);
    sub_1C2D490(&StringLiteral_12442/*"SUMMON_FREE_10_BTN"*/);
    sub_1C2D490(&StringLiteral_12205/*"SHORT_SERVANT_SELL"*/);
    sub_1C2D490(&StringLiteral_12446/*"SUMMON_LIMIT_OVER_BTN"*/);
    sub_1C2D490(&StringLiteral_12471/*"SUMMON_TICKET_END"*/);
    sub_1C2D490(&StringLiteral_12190/*"SHORT_SERVANT_COMBINE"*/);
    sub_1C2D490(&StringLiteral_3818/*"CONTINUE_SUMMON_BTN"*/);
    byte_4C238E7 = 1;
  }
  *(_QWORD *)maxNum = 0;
  entity = 0;
  v107 = 0;
  appendEnt = 0;
  v105 = 0;
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
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3818/*"CONTINUE_SUMMON_BTN"*/, 0);
    formationBtnLabel = this->fields.formationBtnLabel;
    v8 = v6;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12200/*"SHORT_SERVANT_FORMATION"*/, 0);
    if ( !formationBtnLabel )
      goto LABEL_211;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12190/*"SHORT_SERVANT_COMBINE"*/, 0);
    if ( !combineBtnLabel )
      goto LABEL_211;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12205/*"SHORT_SERVANT_SELL"*/, 0);
    if ( !sellBtnLabel )
      goto LABEL_211;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_211;
    v110.fields.r = 1.0;
    v110.fields.g = 1.0;
    v110.fields.b = 1.0;
    v110.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v110, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v111.fields.r = 1.0;
    v111.fields.g = 1.0;
    v111.fields.b = 1.0;
    v111.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v111, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v112.fields.r = 1.0;
    v112.fields.g = 1.0;
    v112.fields.b = 1.0;
    v112.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v112, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v113.fields.r = 1.0;
    v113.fields.g = 1.0;
    v113.fields.b = 1.0;
    v113.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v113, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v114.fields.r = 1.0;
    v114.fields.g = 1.0;
    v114.fields.b = 1.0;
    v114.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v114, 0);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_211;
    closeInfo = (UnityEngine_GameObject_o *)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_211;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v15 = this->fields.summonCtrl;
    if ( !v15 )
      goto LABEL_211;
    gachaParamData = v15->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_211;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v12, v13, v14);
    closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v19, 0);
    if ( !summonBtnLabel )
      goto LABEL_211;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0);
    v20 = this->fields.summonBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !v20 )
      goto LABEL_211;
    UILabel__SetCondensedScale(
      v20,
      SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE,
      0,
      0);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v23 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
          v23 = sub_1C7DBA4(v21);
        v24 = *(_QWORD *)(*(_QWORD *)(v23 + 192) + 16LL);
        if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
          v24 = sub_1C7DBA4(v21);
        closeInfo = **(UnityEngine_GameObject_o ***)(v24 + 184);
        if ( !closeInfo )
          goto LABEL_211;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
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
          &v105,
          gachaId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12446/*"SUMMON_LIMIT_OVER_BTN"*/, 0);
        if ( !v105 )
          goto LABEL_211;
        v27 = (System_String_o *)closeInfo;
        if ( !LODWORD(v105[4].monitor) )
          goto LABEL_56;
        closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v105 || !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)UserGachaExtraCountMaster__getExtraCount(
                                                  (UserGachaExtraCountMaster_o *)closeInfo,
                                                  (int32_t)v105[4].monitor,
                                                  0);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_56;
        v31 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v28, v29, v30);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v32, 0);
        if ( !v31 )
          goto LABEL_211;
        UILabel__set_text(v31, (System_String_o *)closeInfo, 0);
LABEL_56:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_211;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v105,
                                &appendEnt,
                                0);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12409/*"SUMMON_APPEND_END"*/, 0);
            }
            v34 = 1;
            goto LABEL_125;
          }
          goto LABEL_124;
        }
        v34 = (int)entity;
        if ( entity )
        {
          if ( !v105 )
            goto LABEL_211;
          monitor_high = HIDWORD(v105[5].monitor);
          if ( monitor_high < 1 )
          {
LABEL_124:
            v34 = 0;
            goto LABEL_125;
          }
          v34 = entity->fields.num >= monitor_high;
        }
LABEL_125:
        if ( this->fields.isOneTimeFreeSummon )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12409/*"SUMMON_APPEND_END"*/, 0);
          goto LABEL_130;
        }
        if ( v34 )
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
          v117.fields.r = 0.35547;
          v117.fields.a = 1.0;
          v117.fields.g = 0.35547;
          v117.fields.b = 0.35547;
          UIWidget__set_color((UIWidget_o *)closeInfo, v117, 0);
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
          if ( !closeInfo )
            goto LABEL_211;
          v118.fields.r = 0.5;
          v118.fields.g = 0.5;
          v118.fields.b = 0.5;
          v118.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)closeInfo, v118, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v64 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v64 )
            goto LABEL_211;
          UILabel__SetCondensedScale(
            v64,
            SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
            0,
            0);
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
          if ( !closeInfo )
            goto LABEL_211;
          v62 = v27;
LABEL_138:
          UILabel__set_text((UILabel_o *)closeInfo, v62, 0);
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
        v119.fields.r = 1.0;
        v119.fields.g = 1.0;
        v119.fields.b = 1.0;
        v119.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v119, 0);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_211;
        v120.fields.r = 1.0;
        v120.fields.g = 1.0;
        v120.fields.b = 1.0;
        v120.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v120, 0);
LABEL_172:
        v75 = this->fields.summonCtrl;
        if ( v75 )
        {
          closeInfo = v75->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive(closeInfo, 1, 0);
            v76 = this->fields.summonCtrl;
            if ( v76 )
            {
              v76->fields.isResult = 1;
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
                                                              (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                      closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                        closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v78, 0);
                        if ( closeInfo )
                        {
                          closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)closeInfo,
                                                                    (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                              closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v79, 0);
                              if ( closeInfo )
                              {
                                closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                          (UnityEngine_Component_o *)closeInfo,
                                                                          (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                                  closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                                    closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v80, 0);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                                (UnityEngine_Component_o *)closeInfo,
                                                                                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                v82 = UnityEngine_Object__Instantiate_object_(
                        touchBlocker,
                        (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = (struct UnityEngine_GameObject_o *)v82;
                sub_1C2D434((CGThumbnailListItem_o *)&this->fields.blocker, (int32_t)v82, v84, v85);
                blocker = this->fields.blocker;
                v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v87, 0);
                GameObjectExtensions__SetParent(blocker, Parent, 0);
                v89 = SummonResultComponent_TypeInfo;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v89 = SummonResultComponent_TypeInfo;
                }
                static_fields = v89->static_fields;
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
                  v96 = OffsetX;
                  closeInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            closeInfo,
                                                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    v97 = m_XMin - v96;
                    v121.fields.m_XMin = v97;
                    v121.fields.m_YMin = m_YMin;
                    v121.fields.m_Width = m_Width;
                    v121.fields.m_Height = m_Height;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v121, 30, 0);
                    closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0);
                      v99 = FSUtility__GetOffsetX(68.0, 0, 0);
                      closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        v109.fields.x = TutorialBackArrowPos.fields.x - v99;
                        v109.fields.y = TutorialBackArrowPos.fields.y;
                        v122.fields.m_XMin = v97;
                        v122.fields.m_YMin = m_YMin;
                        v122.fields.m_Width = m_Width;
                        v122.fields.m_Height = m_Height;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v109,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v122,
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
        sub_1C2D6EC(closeInfo, *(_QWORD *)&type);
      case 3:
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        v37 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
          v37 = sub_1C7DBA4(v36);
        v38 = *(_QWORD *)(*(_QWORD *)(v37 + 192) + 16LL);
        if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
          v38 = sub_1C7DBA4(v36);
        closeInfo = **(UnityEngine_GameObject_o ***)(v38 + 184);
        if ( !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame || !closeInfo )
          goto LABEL_211;
        UserData = TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                                                  gachaParamData->fields.gachaId,
                                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !UserData )
          goto LABEL_211;
        v40 = (GachaEntity_o *)closeInfo;
        friendPoint = UserData->fields.friendPoint;
        v42 = gachaParamData->fields.gachaId;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v43 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(v42, &maxNum[1], maxNum, 0);
        if ( maxNum[1] > 0 || v43 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_211;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0);
          v65 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SUMMON_FREE_10_BTN"*/, 0);
          if ( !v65 )
            goto LABEL_211;
          UILabel__set_text(v65, (System_String_o *)closeInfo, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v49 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v49 )
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
          v44 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v45, v46, v47);
          closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v48, 0);
          if ( !v44 )
            goto LABEL_211;
          UILabel__set_text(v44, (System_String_o *)closeInfo, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v49 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v49 )
            goto LABEL_211;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
LABEL_171:
          UILabel__SetCondensedScale(v49, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0, 0);
          goto LABEL_172;
        }
        if ( friendPoint <= 1999 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_211;
          if ( friendPoint < 400 )
            v67 = 1;
          else
            v67 = friendPoint / 200;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_211;
          closeInfo = (UnityEngine_GameObject_o *)GachaAppendMaster__TryGetHundredSummon(
                                                    (GachaAppendMaster_o *)closeInfo,
                                                    &v107,
                                                    gachaParamData->fields.gachaId,
                                                    0);
          if ( ((unsigned __int8)closeInfo & 1) == 0 )
            goto LABEL_159;
          if ( !v40 )
            goto LABEL_211;
          gachaResourceNum = gachaParamData->fields.gachaResourceNum;
          if ( gachaResourceNum > 10 * GachaEntity__getPrice(v40, 0) || !gachaParamData->fields.gachaResourceNum )
          {
            closeInfo = (UnityEngine_GameObject_o *)GachaEntity__getPrice(v40, 0);
            if ( !v107 )
              goto LABEL_211;
            v100 = (int)closeInfo;
            maxDrawNum = v107->fields.maxDrawNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            closeInfo = (UnityEngine_GameObject_o *)System_Math__Min_64982368(friendPoint / v100, maxDrawNum, 0);
            v102 = this->fields.summonCtrl;
            if ( (int)closeInfo >= 1 )
            {
              if ( !v102 )
                goto LABEL_211;
              v71 = (int)closeInfo;
              SummonControl__SetGachaTime(this->fields.summonCtrl, (int32_t)closeInfo, 3, 0);
              v72 = 24;
              goto LABEL_166;
            }
            if ( !v102 )
              goto LABEL_211;
            v67 = gachaParamData->fields.gachaTime;
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          }
          else
          {
LABEL_159:
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_211;
            v67 = gachaParamData->fields.gachaTime;
          }
        }
        SummonControl__SetGachaTime((SummonControl_o *)closeInfo, v67, 3, 0);
        v71 = gachaParamData->fields.gachaTime;
        v72 = 20;
LABEL_166:
        v73 = this->fields.summonBtnLabel;
        gachaTime = v71;
        v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v68, v69, v70);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v74, 0);
        if ( !v73 )
          goto LABEL_211;
        UILabel__set_text(v73, (System_String_o *)closeInfo, 0);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v49 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v49 )
          goto LABEL_211;
        SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = *(_DWORD *)((char *)&SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY
                                                     + v72);
        goto LABEL_171;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_211;
        v51 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v51 )
          goto LABEL_99;
        v52 = v51;
        if ( !LODWORD(v51[4].monitor) )
          goto LABEL_99;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_211;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v52[4].monitor,
               0) != 9 )
          goto LABEL_99;
        v56 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v53, v54, v55);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v57, 0);
        if ( !v56 )
          goto LABEL_211;
        UILabel__set_text(v56, (System_String_o *)closeInfo, 0);
LABEL_99:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v58 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        }
        if ( !v58 )
          goto LABEL_211;
        v59 = UserItemMaster__GetEntity(
                (UserItemMaster_o *)v58,
                *(_QWORD *)(closeInfo[7].fields.m_CachedPtr + 64),
                gachaParamData->fields.ticketItemId,
                0);
        if ( v59 && v59->fields.num > 0 )
          goto LABEL_139;
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_211;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_211;
        v115.fields.r = 0.35547;
        v115.fields.a = 1.0;
        v115.fields.g = 0.35547;
        v115.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v115, 0);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_211;
        v116.fields.r = 0.5;
        v116.fields.g = 0.5;
        v116.fields.b = 0.5;
        v116.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v116, 0);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v60 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v60 )
          goto LABEL_211;
        UILabel__SetCondensedScale(
          v60,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0,
          0);
        v61 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12471/*"SUMMON_TICKET_END"*/, 0);
        if ( !v61 )
          goto LABEL_211;
        v62 = (System_String_o *)closeInfo;
        closeInfo = (UnityEngine_GameObject_o *)v61;
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

  if ( (byte_4C238ED & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_7191/*"HAVE_SVT_NUM_TITLE"*/);
    sub_1C2D490(&StringLiteral_7190/*"HAVE_SVTEQ_NUM_TITLE"*/);
    byte_4C238ED = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_23;
  monitor = (int)SelfUserGame[1].monitor;
  monitor_high = HIDWORD(SelfUserGame[1].monitor);
  v19 = monitor;
  if ( !byte_4C2162B )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C2162B = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v6->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0);
  svtTitleLb = this->fields.svtTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7191/*"HAVE_SVT_NUM_TITLE"*/, 0);
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
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7190/*"HAVE_SVTEQ_NUM_TITLE"*/, 0);
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
    sub_1C2D6EC(SelfUserGame, v4);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0);
}


void SummonResultComponent__showResCcDetail(SummonResultComponent_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4C238EF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SummonResultComponent___c__DisplayClass79_0__showResCcDetail_b__0__);
    sub_1C2D490(&SummonResultComponent___c__DisplayClass79_0_TypeInfo);
    byte_4C238EF = 1;
  }
  v5 = sub_1C2D6DC(SummonResultComponent___c__DisplayClass79_0_TypeInfo);
  SummonResultComponent___c__DisplayClass79_0___ctor((SummonResultComponent___c__DisplayClass79_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass79_0__showResCcDetail_b__0__,
    0);
  if ( !v12 )
LABEL_8:
    sub_1C2D6EC(v6, v7);
  CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, v14, 0);
}


void SummonResultComponent__showResSvtDetail(SummonResultComponent_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21

  if ( (byte_4C238EE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SummonResultComponent___c__DisplayClass78_0__showResSvtDetail_b__0__);
    sub_1C2D490(&SummonResultComponent___c__DisplayClass78_0_TypeInfo);
    byte_4C238EE = 1;
  }
  v5 = sub_1C2D6DC(SummonResultComponent___c__DisplayClass78_0_TypeInfo);
  SummonResultComponent___c__DisplayClass78_0___ctor((SummonResultComponent___c__DisplayClass78_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass78_0__showResSvtDetail_b__0__,
    0);
  if ( !v12 )
LABEL_8:
    sub_1C2D6EC(v6, v7);
  CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, v14, 0);
}


void SummonResultComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C238F8 & 1) == 0 )
  {
    sub_1C2D490(&SummonResultComponent___c_TypeInfo);
    byte_4C238F8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(SummonResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)SummonResultComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, elm);
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

  if ( (byte_4C238F9 & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SummonResultComponent_DialogCallBack__);
    byte_4C238F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (CommonUI_o *)Instance;
  v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v7, _4__this, Method_SummonResultComponent_DialogCallBack__, 0);
  if ( !v6 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_31176880(v6, 8, usrSvtId, v7, 0, 0);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1C2D6EC(v8, v9);
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

  if ( (byte_4C238FA & 1) == 0 )
  {
    sub_1C2D490(&AvalonSceneManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SummonResultComponent_DialogCallBack__);
    byte_4C238FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v8 = (CommonUI_o *)v6;
  v9 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v9, _4__this, Method_SummonResultComponent_DialogCallBack__, 0);
  if ( !v8 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_31180264(v8, 0, (UserCommandCodeEntity_o *)Entity, v9, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_10:
    sub_1C2D6EC(Instance, v4);
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