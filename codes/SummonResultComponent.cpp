void SummonResultComponent___cctor(const MethodInfo *method)
{
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v2; // x8

  if ( (byte_4C33FC7 & 1) == 0 )
  {
    sub_1C32C20(&SummonResultComponent_TypeInfo);
    byte_4C33FC7 = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_C0C640;
  v2 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v2->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_C0D050;
  *(_OWORD *)&v2->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = xmmword_C0C8D0;
  *(_OWORD *)&v2->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = xmmword_C0C200;
  *(_OWORD *)&v2->SMALL_FONT_SIZE = xmmword_C0D130;
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

  if ( (byte_4C33FC4 & 1) == 0 )
  {
    sub_1C32C20(&Method_SummonResultComponent_CheckLimitOver__);
    sub_1C32C20(&StringLiteral_5459/*"END_SUMMON"*/);
    sub_1C32C20(&StringLiteral_8284/*"LIMIT_OVER"*/);
    byte_4C33FC4 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(0);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8284/*"LIMIT_OVER"*/, 0);
    v4 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_SummonResultComponent_CheckLimitOver__);
    v5 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5459/*"END_SUMMON"*/, 0);
    v4 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C32C38(Method_SummonResultComponent_CheckLimitOver__);
    v5 = 0;
  }
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0, 0);
}


void SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  CGThumbnailListItem_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C33FBC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33FBC = 1;
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
    UnityEngine_Object__Destroy_71223640(klass, 0);
    p_blocker->klass = 0;
    sub_1C32BC4(p_blocker, 0, v6, v7);
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

  if ( (byte_4C33FC1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SummonResultComponent__DialogCallBack_b__80_0__);
    byte_4C33FC1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = AvalonSceneManager_TypeInfo;
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v5 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v5->static_fields->DEFAULT_FADE_TIME;
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__80_0__, 0);
  if ( !v6 )
    sub_1C32E7C(v9);
  CommonUI__maskFadeout(v6, 1, DEFAULT_FADE_TIME, v8, 0);
}


void SummonResultComponent__EndCloseDialogCallBack(SummonResultComponent_o *this, const MethodInfo *method)
{
  ;
}


void SummonResultComponent__SetActive(SummonResultComponent_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, active, 0),
        (gameObject = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(this->fields.scrollBar, 0)) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C32E7C(gameObject);
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
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  int m_CancellationTokenSource_high; // w8
  Il2CppObject *v42; // x0
  UILabel_o *v43; // x20
  const MethodInfo *v44; // x1
  struct ItemIconComponent_array *v45; // x8
  __int64 v46; // x24
  int max_length; // w9
  unsigned int v48; // w21
  UIWidget_o *backImg; // x22
  struct ItemIconComponent_array *v50; // x8
  __int64 v51; // x8
  struct ItemIconComponent_array *v52; // x8
  ItemIconComponent_o *v53; // x22
  struct ItemIconComponent_array *v54; // x8
  bool v55; // w1
  struct ItemIconComponent_array *v56; // x8
  __int64 *v57; // x8
  System_String_o *v58; // x22
  UnityEngine_GameObject_o *v59; // x0
  SummonResultComponent_c *v60; // x8
  UnityEngine_GameObject_o *v61; // x23
  struct SummonResultComponent_StaticFields *v62; // x8
  __int64 v63; // x9
  UILabel_o *v64; // x21
  UILabel_o *v65; // x21
  System_String_o *v66; // x22
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  int *v73; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SummonResultComponent_c *v75; // x8
  int32_t size; // w21
  UnityEngine_GameObject_o *v77; // x20
  struct SummonResultComponent_StaticFields *static_fields; // x8
  __int64 v79; // x9
  UILabel_o *extraGiftTitleLb; // x20
  System_String_o *v81; // x21
  long double inited; // q0
  _QWORD *v83; // x22
  __int64 v84; // x8
  __int64 v85; // x0
  __int64 v86; // x0
  System_String_o *v87; // x0
  long double v88; // q0
  _QWORD *v89; // x22
  System_String_o *v90; // x21
  __int64 v91; // x8
  __int64 v92; // x0
  __int64 v93; // x0
  const MethodInfo *v94; // x1
  UnityEngine_GameObject_o *v95; // x0
  SummonResultComponent_c *v96; // x8
  UnityEngine_GameObject_o *v97; // x22
  struct SummonResultComponent_StaticFields *v98; // x8
  __int64 v99; // x9
  UILabel_o *v100; // x21
  System_String_o *v101; // x22
  long double v102; // q0
  _QWORD *v103; // x23
  __int64 v104; // x8
  __int64 v105; // x0
  __int64 v106; // x0
  Il2CppObject *v107; // x0
  int v108; // [xsp+Ch] [xbp-54h] BYREF
  int v109; // [xsp+18h] [xbp-48h] BYREF
  int v110; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4C33FB9 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_object___);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&SummonResultComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_12426/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/);
    sub_1C32C20(&StringLiteral_12428/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/);
    sub_1C32C20(&StringLiteral_12419/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/);
    sub_1C32C20(&StringLiteral_12430/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/);
    sub_1C32C20(&StringLiteral_12442/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/);
    sub_1C32C20(&StringLiteral_12443/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_1C32C20(&StringLiteral_12427/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/);
    sub_1C32C20(&StringLiteral_12441/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/);
    this = (SummonResultComponent_o *)sub_1C32C20(&StringLiteral_12429/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/);
    byte_4C33FB9 = 1;
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
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GiftMaster___);
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
        v45 = v10->fields.extraGiftIconComponents;
        if ( !v45 )
          goto LABEL_159;
        v46 = 4;
        while ( 1 )
        {
          max_length = v45->max_length;
          v48 = v46 - 4;
          if ( (int)v46 - 4 >= max_length )
            break;
          if ( v48 >= max_length )
            goto LABEL_160;
          this = (SummonResultComponent_o *)*((_QWORD *)&v45->obj.klass + v46);
          if ( !this )
            goto LABEL_159;
          if ( (signed int)v48 >= v14->fields._size )
          {
            ItemIconComponent__Clear((ItemIconComponent_o *)this, 0);
            v56 = v10->fields.extraGiftIconComponents;
            if ( !v56 )
              goto LABEL_159;
            if ( v48 >= LODWORD(v56->max_length) )
              goto LABEL_160;
            this = (SummonResultComponent_o *)*((_QWORD *)&v56->obj.klass + v46);
            if ( !this )
              goto LABEL_159;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_159;
            v55 = 0;
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
            v50 = v10->fields.extraGiftIconComponents;
            if ( !v50 )
              goto LABEL_159;
            if ( v48 >= LODWORD(v50->max_length) )
              goto LABEL_160;
            v51 = *((_QWORD *)&v50->obj.klass + v46);
            if ( !v51 )
              goto LABEL_159;
            this = *(SummonResultComponent_o **)(v51 + 40);
            if ( !this )
              goto LABEL_159;
            UIWidget__set_height(
              (UIWidget_o *)this,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0);
            v52 = v10->fields.extraGiftIconComponents;
            if ( !v52 )
              goto LABEL_159;
            if ( v48 >= LODWORD(v52->max_length) )
              goto LABEL_160;
            v53 = (ItemIconComponent_o *)*((_QWORD *)&v52->obj.klass + v46);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v14,
                                                v48,
                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !v53 )
              goto LABEL_159;
            ItemIconComponent__SetGift(v53, (GiftEntity_o *)this, -1, 0, 0);
            v54 = v10->fields.extraGiftIconComponents;
            if ( !v54 )
              goto LABEL_159;
            if ( v48 >= LODWORD(v54->max_length) )
              goto LABEL_160;
            this = (SummonResultComponent_o *)*((_QWORD *)&v54->obj.klass + v46);
            if ( !this )
              goto LABEL_159;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_159;
            v55 = 1;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v55, 0);
          v45 = v10->fields.extraGiftIconComponents;
          ++v46;
          if ( !v45 )
            goto LABEL_159;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_159;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v75 = SummonResultComponent_TypeInfo;
        size = v14->fields._size;
        v77 = gameObject;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v75 = SummonResultComponent_TypeInfo;
        }
        static_fields = v75->static_fields;
        v79 = 48;
        if ( size == 1 )
          v79 = 44;
        GameObjectExtensions__SetLocalPositionX(
          v77,
          (float)*(int *)((char *)&static_fields->TUTORIAL_BACK_ARROW_WAY + v79),
          0);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v81 = LocalizationManager__Get((System_String_o *)StringLiteral_12442/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0);
        v83 = Method_System_Array_Empty_object___;
        v84 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v84 )
        {
          sub_1C83390(Method_System_Array_Empty_object___);
          v84 = v83[7];
        }
        v85 = *(_QWORD *)(v84 + 16);
        if ( (*(_BYTE *)(v85 + 309) & 1) == 0 )
          v85 = sub_1C83334(inited);
        if ( !*(_DWORD *)(v85 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v85);
        v86 = *(_QWORD *)(v83[7] + 16LL);
        if ( (*(_BYTE *)(v86 + 309) & 1) == 0 )
          v86 = sub_1C83334(inited);
        this = (SummonResultComponent_o *)System_String__Format_63559972(v81, **(System_Object_array ***)(v86 + 184), 0);
        if ( !extraGiftTitleLb )
          goto LABEL_159;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12441/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0);
        v89 = Method_System_Array_Empty_object___;
        v90 = v87;
        v91 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v91 )
        {
          sub_1C83390(Method_System_Array_Empty_object___);
          v91 = v89[7];
        }
        v92 = *(_QWORD *)(v91 + 16);
        if ( (*(_BYTE *)(v92 + 309) & 1) == 0 )
          v92 = sub_1C83334(v88);
        if ( !*(_DWORD *)(v92 + 224) )
          v88 = j_il2cpp_runtime_class_init_0(v92);
        v93 = *(_QWORD *)(v89[7] + 16LL);
        if ( (*(_BYTE *)(v93 + 309) & 1) == 0 )
          v93 = sub_1C83334(v88);
        this = (SummonResultComponent_o *)System_String__Format_63559972(v90, **(System_Object_array ***)(v93 + 184), 0);
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
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0);
        if ( !extraGiftMsg2Lb )
          goto LABEL_159;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0);
      SummonResultComponent__SetSpecialGiftPosition(v10, v94);
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
      sub_1C32E84(this);
    if ( !v14 )
      goto LABEL_159;
    v24 = v23->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v14,
                                        0,
                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
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
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12430/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0);
          if ( v32 )
          {
            UILabel__set_text(v32, (System_String_o *)this, 0);
            v33 = v10->fields.extraGiftMsg2Lb;
            v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12428/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v14,
                                                0,
                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v28;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v28 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v14,
                                                    0,
                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_159;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v110 = m_CancellationTokenSource_high;
              v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110, v35, v36, v37, v38, v39, v40);
              this = (SummonResultComponent_o *)System_String__Format(v34, v42, 0);
              if ( v33 )
              {
                UILabel__set_text(v33, (System_String_o *)this, 0);
                this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
                v43 = v10->fields.extraGiftTitleLb;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                if ( v43 )
                {
                  UILabel__set_fontSize(v43, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0);
                  this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
                  if ( this )
                  {
                    UILabel__set_fontSize(
                      (UILabel_o *)this,
                      SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE,
                      0);
LABEL_157:
                    SummonResultComponent__SetBonusGiftPosition(v10, v44);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_159:
        sub_1C32E7C(this);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_159;
      v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v96 = SummonResultComponent_TypeInfo;
      v97 = v95;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v96 = SummonResultComponent_TypeInfo;
      }
      v98 = v96->static_fields;
      v99 = 52;
      if ( adjustTitleLabel )
        v99 = 56;
      GameObjectExtensions__SetLocalPositionX(v97, (float)*(int *)((char *)&v98->TUTORIAL_BACK_ARROW_WAY + v99), 0);
      v100 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v101 = LocalizationManager__Get((System_String_o *)StringLiteral_12429/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0);
      v103 = Method_System_Array_Empty_object___;
      v104 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v104 )
      {
        sub_1C83390(Method_System_Array_Empty_object___);
        v104 = v103[7];
      }
      v105 = *(_QWORD *)(v104 + 16);
      if ( (*(_BYTE *)(v105 + 309) & 1) == 0 )
        v105 = sub_1C83334(v102);
      if ( !*(_DWORD *)(v105 + 224) )
        v102 = j_il2cpp_runtime_class_init_0(v105);
      v106 = *(_QWORD *)(v103[7] + 16LL);
      if ( (*(_BYTE *)(v106 + 309) & 1) == 0 )
        v106 = sub_1C83334(v102);
      this = (SummonResultComponent_o *)System_String__Format_63559972(v101, **(System_Object_array ***)(v106 + 184), 0);
      if ( !v100 )
        goto LABEL_159;
      UILabel__set_text(v100, (System_String_o *)this, 0);
      v65 = v10->fields.extraGiftMsg2Lb;
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12426/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v14,
                                          0,
                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_159;
      v73 = &v109;
      v109 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    else
    {
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( v10->fields.isOneTimeFreeSummon )
        v57 = &StringLiteral_12419/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/;
      else
        v57 = &StringLiteral_12430/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/;
      if ( !this )
        goto LABEL_159;
      v58 = (System_String_o *)*v57;
      v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v60 = SummonResultComponent_TypeInfo;
      v61 = v59;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v60 = SummonResultComponent_TypeInfo;
      }
      v62 = v60->static_fields;
      v63 = 36;
      if ( adjustTitleLabel )
        v63 = 40;
      GameObjectExtensions__SetLocalPositionX(v61, (float)*(int *)((char *)&v62->TUTORIAL_BACK_ARROW_WAY + v63), 0);
      v64 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SummonResultComponent_o *)LocalizationManager__Get(v58, 0);
      if ( !v64 )
        goto LABEL_159;
      UILabel__set_text(v64, (System_String_o *)this, 0);
      v65 = v10->fields.extraGiftMsg2Lb;
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_12427/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v14,
                                          0,
                                          (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_159;
      v73 = &v108;
      v108 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v73, v67, v68, v69, v70, v71, v72);
    this = (SummonResultComponent_o *)System_String__Format(v66, v107, 0);
    if ( v65 )
    {
      UILabel__set_text(v65, (System_String_o *)this, 0);
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

  if ( (byte_4C33FBA & 1) == 0 )
  {
    sub_1C32C20(&SummonResultComponent_TypeInfo);
    byte_4C33FBA = 1;
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
        sub_1C32E84(extraGiftTitleLb);
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
    sub_1C32E7C(extraGiftTitleLb);
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
  __int64 Object; // x0
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellWidth; // s10
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x28
  int maxPerLine; // s11
  float v13; // s9
  System_Collections_Generic_List_int__o *v14; // x23
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BalanceConfig_c *v17; // x0
  int v18; // w8
  __int64 v19; // x22
  __int64 *v20; // x8
  GachaInfos_o *v21; // x24
  UnityEngine_GameObject_o *targetGo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v24; // x25
  UnityEngine_Transform_o *v25; // x26
  const MethodInfo *v26; // x2
  int32_t objectId; // w27
  bool v28; // w26
  bool IsCommandCode; // w27
  SummonResultInfoComponent_ClickDelegate_o *v30; // x0
  intptr_t *v31; // x8
  SummonResultInfoComponent_ClickDelegate_o *v32; // x27
  __int64 sellQp; // x25
  int64_t summonBeforeQp; // x26
  int64_t QpMax; // x8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  __int64 v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  float v42; // s12
  float v43; // s11
  float v44; // s8
  float v45; // s3
  float v46; // s0
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+8h] [xbp-98h]
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C33FC6 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SummonResultComponent_showResCcDetail__);
    sub_1C32C20(&Method_SummonResultComponent_showResSvtDetail__);
    byte_4C33FC6 = 1;
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
  v13 = scdGrid->fields.cellWidth;
  *autoSale = 0;
  v14 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v14;
  p_befSvtList = &this->fields.befSvtList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v14, v15, v16);
  v18 = resultList->max_length;
  if ( v18 >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v19 >= v18 )
        sub_1C32E84(v17);
      v20 = (__int64 *)((unsigned int)v19 >= 6 ? &this->fields.scdGrid : &this->fields.fstGrid);
      Object = *v20;
      if ( !*v20 )
        break;
      v21 = resultList->m_Items[v19];
      targetGo = this->fields.targetGo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0);
      Object = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, targetGo, transform, 0, 0);
      if ( !Object )
        break;
      v24 = (UnityEngine_GameObject_o *)Object;
      Object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object, 0);
      v25 = (UnityEngine_Transform_o *)Object;
      if ( !byte_4C313D6 )
      {
        Object = sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D6 = 1;
      }
      if ( !v25 )
        break;
      UnityEngine_Transform__set_localScale(v25, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      if ( !v21 )
        break;
      if ( v21->fields.isNew
        && (objectId = v21->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v26)) )
      {
        Object = (__int64)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        v39 = *(_QWORD *)(Object + 16);
        v40 = Method_System_Collections_Generic_List_int__Add__;
        ++*(_DWORD *)(Object + 28);
        if ( !v39 )
          break;
        v41 = *(int *)(Object + 24);
        if ( (unsigned int)v41 >= *(_DWORD *)(v39 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Object,
            objectId,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          v28 = 0;
        }
        else
        {
          v28 = 0;
          *(_DWORD *)(Object + 24) = v41 + 1;
          *(_DWORD *)(v39 + 4 * v41 + 32) = objectId;
        }
      }
      else
      {
        v28 = 1;
      }
      IsCommandCode = SvtType__IsCommandCode(v21->fields.type, 0);
      v30 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C32E6C(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      v31 = &Method_SummonResultComponent_showResCcDetail__;
      if ( !IsCommandCode )
        v31 = &Method_SummonResultComponent_showResSvtDetail__;
      v32 = v30;
      SummonResultInfoComponent_ClickDelegate___ctor(v30, (Il2CppObject *)this, *v31, 0);
      if ( v21->fields.sellMana || v21->fields.sellQp )
      {
        v32 = 0;
        *autoSale = 1;
      }
      Object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v24,
                          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
      if ( !Object )
        break;
      SummonResultInfoComponent__setResultData(
        (SummonResultInfoComponent_o *)Object,
        v21,
        v28,
        v32,
        this->fields.summonBeforeQp,
        this->fields.summonBeforeMana,
        0);
      v17 = BalanceConfig_TypeInfo;
      sellQp = v21->fields.sellQp;
      summonBeforeQp = this->fields.summonBeforeQp;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v17 = BalanceConfig_TypeInfo;
      }
      QpMax = v17->static_fields->QpMax;
      if ( summonBeforeQp + sellQp >= QpMax )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = BalanceConfig_TypeInfo;
          QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
        }
      }
      else
      {
        QpMax = this->fields.summonBeforeQp + v21->fields.sellQp;
      }
      this->fields.summonBeforeQp = QpMax;
      sellMana = v21->fields.sellMana;
      summonBeforeMana = this->fields.summonBeforeMana;
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v17->static_fields->UserItemMax;
      if ( summonBeforeMana + sellMana >= UserItemMax )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
        }
      }
      else
      {
        UserItemMax = this->fields.summonBeforeMana + v21->fields.sellMana;
      }
      this->fields.summonBeforeMana = UserItemMax;
      v18 = resultList->max_length;
      if ( (int)++v19 >= v18 )
        goto LABEL_46;
    }
LABEL_62:
    sub_1C32E7C(Object);
  }
LABEL_46:
  Object = (__int64)this->fields.fstGrid;
  v42 = (float)max_length;
  v43 = (float)maxPerLine;
  if ( (float)max_length <= v43 )
    v44 = 22.0;
  else
    v44 = 106.0;
  if ( !Object )
    goto LABEL_62;
  Object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0);
  if ( !Object )
    goto LABEL_62;
  v45 = v42 <= v43 ? v42 : v43;
  v49.fields.x = (float)(cellWidth * -0.5) * (float)(v45 + -1.0);
  v49.fields.y = v44;
  v49.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v49, 0);
  Object = (__int64)this->fields.fstGrid;
  if ( !Object )
    goto LABEL_62;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Object + 440LL))(Object, *(_QWORD *)(*(_QWORD *)Object + 448LL));
  Object = (__int64)*p_scdGrid;
  if ( !*p_scdGrid )
    goto LABEL_62;
  Object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0);
  if ( !Object )
    goto LABEL_62;
  v46 = (float)(v42 - v43) + -1.0;
  if ( v42 <= v43 )
    v46 = -1.0;
  v50.fields.x = (float)(v13 * -0.5) * v46;
  v50.fields.y = -62.0;
  v50.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v50, 0);
  Object = (__int64)this->fields.scdGrid;
  if ( !Object )
    goto LABEL_62;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Object + 440LL))(Object, *(_QWORD *)(*(_QWORD *)Object + 448LL));
  Object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
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
  struct UIGrid_o *listRoot; // x8
  float cellWidth; // s0
  int maxPerLine; // w8
  float v13; // s8
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaId; // w25
  int64_t summonSceneInTime; // x26
  System_Collections_Generic_List_object__o *v18; // x24
  const MethodInfo *v19; // x2
  int max_length; // w8
  struct System_Collections_Generic_List_int__o **p_befSvtList; // x20
  int v22; // w21
  __int64 v23; // x22
  GachaInfos_o **m_Items; // x23
  GachaInfos_o *v25; // x27
  bool v26; // w29
  MultiExSummonListViewItem_o *v27; // x28
  ListViewSort_o *v28; // x27
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  int32_t objectId; // w1
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
  Il2CppObject *current; // x28
  GachaInfos_o *monitor; // x26
  Il2CppObject *rewardIconObj; // x25
  Il2CppObject *v50; // x0
  UnityEngine_GameObject_o *v51; // x25
  UnityEngine_Component_o *v52; // x0
  UnityEngine_Component_o *transform; // x0
  __int64 v54; // x0
  SummonResultInfoComponent_ClickDelegate_o *v55; // x27
  Il2CppObject *Component_object; // x0
  BalanceConfig_c *v57; // x0
  __int64 sellQp; // x28
  int64_t summonBeforeQp; // x20
  int64_t QpMax; // x27
  __int64 v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  GachaInfos_array *v64; // x8
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  struct UIGrid_o *v69; // x8
  System_Action_object__o *v70; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+30h] [xbp-90h] BYREF
  GachaInfos_array *v75; // [xsp+58h] [xbp-68h]

  v75 = resultList;
  if ( (byte_4C33FC5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_GameObject__TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_1C32C20(&System_Comparison_MultiExSummonListViewItem__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__get_Current__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_1C32C20(&ListViewSort_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&MultiExSummonListViewItem_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SummonResultComponent_showResCcDetail__);
    sub_1C32C20(&Method_SummonResultComponent_showResSvtDetail__);
    sub_1C32C20(&Method_SummonResultComponent___c__SetResultData_b__87_0__);
    sub_1C32C20(&Method_SummonResultComponent___c__DisplayClass87_0__SetResultData_b__1__);
    sub_1C32C20(&SummonResultComponent___c__DisplayClass87_0_TypeInfo);
    sub_1C32C20(&SummonResultComponent___c_TypeInfo);
    byte_4C33FC5 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  v5 = (SummonResultComponent___c__DisplayClass87_0_o *)sub_1C32E6C(SummonResultComponent___c__DisplayClass87_0_TypeInfo);
  SummonResultComponent___c__DisplayClass87_0___ctor(v5, 0);
  *autoSale = 0;
  v6 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v6, v7, v8);
  listRoot = this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_71;
  if ( !v75 )
    goto LABEL_71;
  if ( !v5 )
    goto LABEL_71;
  cellWidth = listRoot->fields.cellWidth;
  maxPerLine = listRoot->fields.maxPerLine;
  v13 = (float)(SLODWORD(v75->max_length) % maxPerLine);
  v5->fields.offset = (float)(cellWidth * 0.5) * (float)((float)maxPerLine - v13);
  summonCtrl = this->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_71;
  gachaParamData = summonCtrl->fields.gachaParamData;
  object = (Il2CppObject *)v5;
  if ( !gachaParamData )
    goto LABEL_71;
  gachaId = gachaParamData->fields.gachaId;
  summonSceneInTime = summonCtrl->fields.summonSceneInTime;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
  max_length = v75->max_length;
  if ( max_length >= 1 )
  {
    p_befSvtList = &this->fields.befSvtList;
    v22 = 0;
    v23 = 0;
    m_Items = v75->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v23 >= max_length )
        sub_1C32E84(scrollBar);
      v25 = m_Items[v23];
      if ( !v25 )
        break;
      if ( v25->fields.isNew && !SummonResultComponent__checkOverlapSvt(this, v25->fields.objectId, v19) )
      {
        scrollBar = (int *)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        objectId = v25->fields.objectId;
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
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          v26 = 0;
        }
        else
        {
          v26 = 0;
          scrollBar[6] = v38 + 1;
          *(_DWORD *)(v36 + 4 * v38 + 32) = objectId;
        }
      }
      else
      {
        v26 = 1;
      }
      v27 = (MultiExSummonListViewItem_o *)sub_1C32E6C(MultiExSummonListViewItem_TypeInfo);
      MultiExSummonListViewItem___ctor(v27, v25, v26, gachaId, summonSceneInTime, v22 + LODWORD(v75->max_length), 0);
      v28 = (ListViewSort_o *)sub_1C32E6C(ListViewSort_TypeInfo);
      ListViewSort___ctor(v28, 27, 1, 0);
      if ( !v27 )
        break;
      scrollBar = (int *)((__int64 (__fastcall *)(MultiExSummonListViewItem_o *, ListViewSort_o *, const MethodInfo *))v27->klass->vtable._4_SetSortValue.methodPtr)(
                           v27,
                           v28,
                           v27->klass->vtable._4_SetSortValue.method);
      if ( !v18 )
        break;
      items = v18->fields._items;
      v32 = Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__;
      ++v18->fields._version;
      if ( !items )
        break;
      size = v18->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v27,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v27;
        sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v27, v29, v30);
      }
      ++v23;
      --v22;
      max_length = v75->max_length;
      if ( (int)v23 >= max_length )
        goto LABEL_28;
    }
LABEL_71:
    sub_1C32E7C(scrollBar);
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
    v39 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_MultiExSummonListViewItem__TypeInfo);
    System_Comparison_object____ctor(v39, v40, Method_SummonResultComponent___c__SetResultData_b__87_0__, 0);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__87_0 = (struct System_Comparison_MultiExSummonListViewItem__o *)v39;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__87_0, (int32_t)v39, v42, v43);
  }
  if ( !v18 )
    goto LABEL_71;
  System_Collections_Generic_List_object___Sort_58303104(
    v18,
    v39,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
  v44 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v73,
    v18,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
  v74 = v73;
  for ( i = 1; ; ++i )
  {
    v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v74,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    if ( !v46 )
      break;
    current = v74.fields._current;
    if ( !v74.fields._current )
      sub_1C32E7C(v46);
    monitor = (GachaInfos_o *)v74.fields._current[7].monitor;
    rewardIconObj = (Il2CppObject *)this->fields.rewardIconObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v50 = UnityEngine_Object__Instantiate_object_(
            rewardIconObj,
            (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v51 = (UnityEngine_GameObject_o *)v50;
    if ( !v50 )
      sub_1C32E7C(0);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v50, 1, 0);
    v52 = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !v52 )
      sub_1C32E7C(0);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v52, 0);
    GameObjectExtensions__SetParent(v51, transform, 0);
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(v51, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( !byte_4C313D6 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v51, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    if ( !monitor )
      sub_1C32E7C(v54);
    if ( SvtType__IsCommandCode(monitor->fields.type, 0) )
    {
      v55 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C32E6C(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v55,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResCcDetail__,
        0);
    }
    else
    {
      v55 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1C32E6C(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v55,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResSvtDetail__,
        0);
    }
    if ( monitor->fields.sellMana || monitor->fields.sellQp )
    {
      v55 = 0;
      *autoSale = 1;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v51,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    if ( !Component_object )
      sub_1C32E7C(0);
    SummonResultInfoComponent__setResultData(
      (SummonResultInfoComponent_o *)Component_object,
      monitor,
      (bool)current[8].klass,
      v55,
      this->fields.summonBeforeQp,
      this->fields.summonBeforeMana,
      0);
    v57 = BalanceConfig_TypeInfo;
    sellQp = monitor->fields.sellQp;
    summonBeforeQp = this->fields.summonBeforeQp;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v57 = BalanceConfig_TypeInfo;
    }
    QpMax = v57->static_fields->QpMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.summonBeforeQp = System_Math__Min_65042316(summonBeforeQp + sellQp, QpMax, 0);
    v61 = System_Math__Min_65042304(
            this->fields.summonBeforeMana + monitor->fields.sellMana,
            BalanceConfig_TypeInfo->static_fields->UserItemMax,
            0);
    v64 = v75;
    this->fields.summonBeforeMana = v61;
    if ( (float)((float)SLODWORD(v64->max_length) - v13) < (float)i )
    {
      if ( !v44 )
        sub_1C32E7C(v61);
      v65 = v44->fields._items;
      v66 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v44->fields._version;
      if ( !v65 )
        sub_1C32E7C(v61);
      v67 = v44->fields._size;
      if ( (unsigned int)v67 >= LODWORD(v65->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)v51,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
      }
      else
      {
        v68 = &v65->obj.klass + v67;
        v44->fields._size = v67 + 1;
        v68[4] = (Il2CppClass *)v51;
        sub_1C32BC4((CGThumbnailListItem_o *)(v68 + 4), (int32_t)v51, v62, v63);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v74,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
  scrollBar = (int *)this->fields.listRoot;
  if ( !scrollBar )
    goto LABEL_71;
  scrollBar = (int *)(*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)scrollBar + 440LL))(
                       scrollBar,
                       *(_QWORD *)(*(_QWORD *)scrollBar + 448LL));
  v69 = this->fields.listRoot;
  if ( !v69 )
    goto LABEL_71;
  scrollBar = (int *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)scrollBar,
    SLODWORD(v75->max_length) > 2 * v69->fields.maxPerLine,
    0);
  scrollBar = (int *)this->fields.scrollView;
  if ( !scrollBar )
    goto LABEL_71;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0);
  v70 = (System_Action_object__o *)sub_1C32E6C(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v70, object, Method_SummonResultComponent___c__DisplayClass87_0__SetResultData_b__1__, 0);
  if ( !v44 )
    goto LABEL_71;
  System_Collections_Generic_List_object___ForEach(
    v44,
    (System_Action_T__o *)v70,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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

  if ( (byte_4C33FBB & 1) == 0 )
  {
    sub_1C32C20(&SummonResultComponent_TypeInfo);
    byte_4C33FBB = 1;
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
        sub_1C32E84(extraGiftTitleLb);
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
    sub_1C32E7C(extraGiftTitleLb);
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
  CommonUI_o *v6; // x19

  if ( (byte_4C33FC8 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SummonResultComponent_EndCloseDialogCallBack__);
    byte_4C33FC8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v4, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)v5;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
LABEL_8:
    sub_1C32E7C(v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


bool SummonResultComponent__checkOverlapSvt(SummonResultComponent_o *this, int32_t svtId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  if ( (byte_4C33FBD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C33FBD = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1C32E7C(befSvtList);
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
               (const MethodInfo_377B4A8 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_Component_o *v19; // x0
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x20
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( (byte_4C33FC2 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UnityEngine_Transform_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33FC2 = 1;
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
      UnityEngine_Object__Destroy_71223640(gameObject, 0);
      if ( --v5 <= 1 )
        goto LABEL_13;
    }
LABEL_56:
    sub_1C32E7C(fstGrid);
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
      UnityEngine_Object__Destroy_71223640(v9, 0);
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
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_30;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_30:
      v14 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(Enumerator, *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_37;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1];
    }
    else
    {
LABEL_37:
      v18 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v19 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                       Enumerator,
                                       *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_58;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v19->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v19->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C3313C(v19);
LABEL_58:
      sub_1C32E7C(v19);
    }
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v19, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v21, 0);
  }
  v22 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_50;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_50:
      v27 = sub_1C83438(v22, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
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
  System_String_o *Empty; // x1
  UILabel_o *extraGiftMsgLb; // x23
  SummonResultComponent___c_c *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *extraGiftIconComponents; // x23
  System_Action_object__o *_9__70_0; // x24
  Il2CppObject *v29; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
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

  if ( (byte_4C33FB7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_ItemIconComponent__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int___ctor__);
    sub_1C32C20(&Method_System_Nullable_int__get_HasValue__);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&SummonResultComponent_TypeInfo);
    sub_1C32C20(&Method_SummonResultComponent___c__initGachaResultList_b__70_0__);
    sub_1C32C20(&SummonResultComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_12443/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_1C32C20(&StringLiteral_12468/*"SUMMON_RESULT_AUTOSALE_MSG"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33FB7 = 1;
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
                                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
  if ( !resultList )
    goto LABEL_41;
  fstGrid = this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_97;
  scdGrid = this->fields.scdGrid;
  if ( !scdGrid )
    goto LABEL_97;
  if ( scdGrid->fields.maxPerLine + fstGrid->fields.maxPerLine >= SLODWORD(resultList->max_length) )
  {
    SummonResultComponent__SetOldResultData(this, resultList, autoSale, v17);
    v20 = 0.0;
  }
  else
  {
    SummonResultComponent__SetResultData(this, resultList, autoSale, v17);
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
    sub_1C32E7C(changeSceneBtnInfo);
  }
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  GameObjectExtensions__SetLocalPositionY(v22, v20, 0);
  autoSaleMsgLb = this->fields.autoSaleMsgLb;
  if ( v21 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12468/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0);
    Empty = (System_String_o *)changeSceneBtnInfo;
    if ( !autoSaleMsgLb )
      goto LABEL_97;
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !autoSaleMsgLb )
      goto LABEL_97;
  }
  UILabel__set_text(autoSaleMsgLb, Empty, 0);
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
  v26 = SummonResultComponent___c_TypeInfo;
  extraGiftIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraGiftIconComponents;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    v26 = SummonResultComponent___c_TypeInfo;
  }
  _9__70_0 = (System_Action_object__o *)v26->static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = SummonResultComponent___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__70_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_ItemIconComponent__TypeInfo);
    System_Action_object____ctor(_9__70_0, v29, Method_SummonResultComponent___c__initGachaResultList_b__70_0__, 0);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Action_ItemIconComponent__o *)_9__70_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__70_0, (int32_t)_9__70_0, v31, v32);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__70_0,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_ItemIconComponent___);
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
      if ( resultList )
      {
        v50 = 0;
        v36 = (System_Nullable_int__o)&v50;
        System_Nullable_int____ctor(
          v36,
          resultList->max_length,
          (const MethodInfo_38BDF3C *)Method_System_Nullable_int___ctor__);
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
      sub_1C32E84(changeSceneBtnInfo);
    }
    v44 = (System_Collections_Generic_HashSet_int__o *)sub_1C32E6C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v44,
      (const MethodInfo_3649220 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
                                                             (const MethodInfo_364A424 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0);
    if ( !this->fields.extraGiftMsgLb )
      goto LABEL_97;
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0);
  }
LABEL_96:
  SummonResultComponent__setListByType(this, this->fields.dispType, v33);
}


void SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C33FC3 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_12216/*"SHOW_TALK"*/);
    byte_4C33FC3 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1C32E7C(0);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12216/*"SHOW_TALK"*/, 0);
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
    sub_1C32E7C(mWidget);
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
    sub_1C32E84(mWidget);
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
  const MethodInfo *v11; // x1
  struct SummonControl_o *summonCtrl; // x8
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  struct SummonControl_o *v19; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *summonBtnLabel; // x22
  Il2CppObject *v23; // x0
  UILabel_o *v24; // x22
  long double v25; // q0
  int32_t gachaId; // w22
  __int64 v27; // x0
  __int64 v28; // x0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Master_object; // x24
  System_String_o *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  UILabel_o *v38; // x23
  Il2CppObject *v39; // x0
  int32_t AppendSummonState; // w0
  int v41; // w8
  UserGameEntity_o *SelfUserGame; // x22
  long double v43; // q0
  __int64 v44; // x8
  __int64 v45; // x0
  TblUserEntity_o *UserData; // x23
  GachaEntity_o *v47; // x22
  int friendPoint; // w24
  int32_t v49; // w23
  bool v50; // w0
  UILabel_o *v51; // x22
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x5
  __int64 v56; // x6
  __int64 v57; // x7
  Il2CppObject *v58; // x0
  UILabel_o *v59; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  Il2CppObject *v61; // x0
  Il2CppObject *v62; // x22
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x4
  __int64 v66; // x5
  __int64 v67; // x6
  __int64 v68; // x7
  UILabel_o *v69; // x22
  Il2CppObject *v70; // x0
  Il2CppObject *v71; // x21
  UserItemEntity_o *v72; // x0
  UILabel_o *v73; // x21
  struct UILabel_o *v74; // x21
  System_String_o *v75; // x1
  int32_t monitor_high; // w9
  UILabel_o *v77; // x21
  UILabel_o *v78; // x21
  int gachaResourceNum; // w23
  int32_t v80; // w1
  __int64 v81; // x2
  __int64 v82; // x3
  __int64 v83; // x4
  __int64 v84; // x5
  __int64 v85; // x6
  __int64 v86; // x7
  int v87; // w22
  __int64 v88; // x24
  UILabel_o *v89; // x23
  Il2CppObject *v90; // x0
  struct SummonControl_o *v91; // x8
  struct SummonControl_o *v92; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_GameObject_o *v95; // x0
  UnityEngine_GameObject_o *v96; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v98; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v103; // x0
  UnityEngine_Component_o *Parent; // x0
  SummonResultComponent_c *v105; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v112; // s11
  float v113; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v115; // s14
  int v116; // w22
  int32_t maxDrawNum; // w23
  struct SummonControl_o *v118; // x8
  int gachaTime; // [xsp+Ch] [xbp-C4h] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v121; // [xsp+18h] [xbp-B8h] BYREF
  UserGachaEntity_o *entity; // [xsp+20h] [xbp-B0h] BYREF
  GachaAppendEntity_o *v123; // [xsp+28h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+38h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v125; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v126; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v127; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v128; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v131; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v133; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v138; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4C33FB8 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C32C20(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_1C32C20(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&SummonResultComponent_TypeInfo);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    sub_1C32C20(&UserGachaMaster_TypeInfo);
    sub_1C32C20(&StringLiteral_12412/*"SUMMON_APPEND_END"*/);
    sub_1C32C20(&StringLiteral_12203/*"SHORT_SERVANT_FORMATION"*/);
    sub_1C32C20(&StringLiteral_12445/*"SUMMON_FREE_10_BTN"*/);
    sub_1C32C20(&StringLiteral_12208/*"SHORT_SERVANT_SELL"*/);
    sub_1C32C20(&StringLiteral_12449/*"SUMMON_LIMIT_OVER_BTN"*/);
    sub_1C32C20(&StringLiteral_12474/*"SUMMON_TICKET_END"*/);
    sub_1C32C20(&StringLiteral_12193/*"SHORT_SERVANT_COMBINE"*/);
    sub_1C32C20(&StringLiteral_3825/*"CONTINUE_SUMMON_BTN"*/);
    byte_4C33FB8 = 1;
  }
  *(_QWORD *)maxNum = 0;
  entity = 0;
  v123 = 0;
  appendEnt = 0;
  v121 = 0;
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
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3825/*"CONTINUE_SUMMON_BTN"*/, 0);
    formationBtnLabel = this->fields.formationBtnLabel;
    v8 = v6;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12203/*"SHORT_SERVANT_FORMATION"*/, 0);
    if ( !formationBtnLabel )
      goto LABEL_211;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12193/*"SHORT_SERVANT_COMBINE"*/, 0);
    if ( !combineBtnLabel )
      goto LABEL_211;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12208/*"SHORT_SERVANT_SELL"*/, 0);
    if ( !sellBtnLabel )
      goto LABEL_211;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_211;
    v126.fields.r = 1.0;
    v126.fields.g = 1.0;
    v126.fields.b = 1.0;
    v126.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v126, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v127.fields.r = 1.0;
    v127.fields.g = 1.0;
    v127.fields.b = 1.0;
    v127.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v127, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v128.fields.r = 1.0;
    v128.fields.g = 1.0;
    v128.fields.b = 1.0;
    v128.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v128, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v129.fields.r = 1.0;
    v129.fields.g = 1.0;
    v129.fields.b = 1.0;
    v129.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v129, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_211;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_211;
    v130.fields.r = 1.0;
    v130.fields.g = 1.0;
    v130.fields.b = 1.0;
    v130.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v130, 0);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_211;
    closeInfo = (UnityEngine_GameObject_o *)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_211;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, v11);
    v19 = this->fields.summonCtrl;
    if ( !v19 )
      goto LABEL_211;
    gachaParamData = v19->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_211;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v13, v14, v15, v16, v17, v18);
    closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v23, 0);
    if ( !summonBtnLabel )
      goto LABEL_211;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0);
    v24 = this->fields.summonBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !v24 )
      goto LABEL_211;
    UILabel__SetCondensedScale(
      v24,
      SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE,
      0,
      0);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v27 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
          v27 = sub_1C83334(v25);
        v28 = *(_QWORD *)(*(_QWORD *)(v27 + 192) + 16LL);
        if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
          v28 = sub_1C83334(v25);
        closeInfo = **(UnityEngine_GameObject_o ***)(v28 + 184);
        if ( !closeInfo )
          goto LABEL_211;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
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
          &v121,
          gachaId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"SUMMON_LIMIT_OVER_BTN"*/, 0);
        if ( !v121 )
          goto LABEL_211;
        v31 = (System_String_o *)closeInfo;
        if ( !LODWORD(v121[4].monitor) )
          goto LABEL_56;
        closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v121 || !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)UserGachaExtraCountMaster__getExtraCount(
                                                  (UserGachaExtraCountMaster_o *)closeInfo,
                                                  (int32_t)v121[4].monitor,
                                                  0);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_56;
        v38 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v32, v33, v34, v35, v36, v37);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v39, 0);
        if ( !v38 )
          goto LABEL_211;
        UILabel__set_text(v38, (System_String_o *)closeInfo, 0);
LABEL_56:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_211;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v121,
                                &appendEnt,
                                0);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12412/*"SUMMON_APPEND_END"*/, 0);
            }
            v41 = 1;
            goto LABEL_125;
          }
          goto LABEL_124;
        }
        v41 = (int)entity;
        if ( entity )
        {
          if ( !v121 )
            goto LABEL_211;
          monitor_high = HIDWORD(v121[5].monitor);
          if ( monitor_high < 1 )
          {
LABEL_124:
            v41 = 0;
            goto LABEL_125;
          }
          v41 = entity->fields.num >= monitor_high;
        }
LABEL_125:
        if ( this->fields.isOneTimeFreeSummon )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v31 = LocalizationManager__Get((System_String_o *)StringLiteral_12412/*"SUMMON_APPEND_END"*/, 0);
          goto LABEL_130;
        }
        if ( v41 )
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
          v133.fields.r = 0.35547;
          v133.fields.a = 1.0;
          v133.fields.g = 0.35547;
          v133.fields.b = 0.35547;
          UIWidget__set_color((UIWidget_o *)closeInfo, v133, 0);
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
          if ( !closeInfo )
            goto LABEL_211;
          v134.fields.r = 0.5;
          v134.fields.g = 0.5;
          v134.fields.b = 0.5;
          v134.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)closeInfo, v134, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v77 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v77 )
            goto LABEL_211;
          UILabel__SetCondensedScale(
            v77,
            SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
            0,
            0);
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
          if ( !closeInfo )
            goto LABEL_211;
          v75 = v31;
LABEL_138:
          UILabel__set_text((UILabel_o *)closeInfo, v75, 0);
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
        v135.fields.r = 1.0;
        v135.fields.g = 1.0;
        v135.fields.b = 1.0;
        v135.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v135, 0);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_211;
        v136.fields.r = 1.0;
        v136.fields.g = 1.0;
        v136.fields.b = 1.0;
        v136.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v136, 0);
LABEL_172:
        v91 = this->fields.summonCtrl;
        if ( v91 )
        {
          closeInfo = v91->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive(closeInfo, 1, 0);
            v92 = this->fields.summonCtrl;
            if ( v92 )
            {
              v92->fields.isResult = 1;
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
                                                              (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                      closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v94 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                        closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v94, 0);
                        if ( closeInfo )
                        {
                          closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                    (UnityEngine_Component_o *)closeInfo,
                                                                    (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v95 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                              closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v95, 0);
                              if ( closeInfo )
                              {
                                closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                          (UnityEngine_Component_o *)closeInfo,
                                                                          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                                  closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                                    closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v96, 0);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                                (UnityEngine_Component_o *)closeInfo,
                                                                                (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                v98 = UnityEngine_Object__Instantiate_object_(
                        touchBlocker,
                        (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = (struct UnityEngine_GameObject_o *)v98;
                sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.blocker, (int32_t)v98, v100, v101);
                blocker = this->fields.blocker;
                v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v103, 0);
                GameObjectExtensions__SetParent(blocker, Parent, 0);
                v105 = SummonResultComponent_TypeInfo;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v105 = SummonResultComponent_TypeInfo;
                }
                static_fields = v105->static_fields;
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
                  v112 = OffsetX;
                  closeInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            closeInfo,
                                                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    v113 = m_XMin - v112;
                    v137.fields.m_XMin = v113;
                    v137.fields.m_YMin = m_YMin;
                    v137.fields.m_Width = m_Width;
                    v137.fields.m_Height = m_Height;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v137, 30, 0);
                    closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0);
                      v115 = FSUtility__GetOffsetX(68.0, 0, 0);
                      closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        v125.fields.x = TutorialBackArrowPos.fields.x - v115;
                        v125.fields.y = TutorialBackArrowPos.fields.y;
                        v138.fields.m_XMin = v113;
                        v138.fields.m_YMin = m_YMin;
                        v138.fields.m_Width = m_Width;
                        v138.fields.m_Height = m_Height;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v125,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v138,
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
        sub_1C32E7C(closeInfo);
      case 3:
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        v44 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v44 + 309) & 1) == 0 )
          v44 = sub_1C83334(v43);
        v45 = *(_QWORD *)(*(_QWORD *)(v44 + 192) + 16LL);
        if ( (*(_BYTE *)(v45 + 309) & 1) == 0 )
          v45 = sub_1C83334(v43);
        closeInfo = **(UnityEngine_GameObject_o ***)(v45 + 184);
        if ( !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame || !closeInfo )
          goto LABEL_211;
        UserData = TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_211;
        closeInfo = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                                                  gachaParamData->fields.gachaId,
                                                  (const MethodInfo_3396838 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !UserData )
          goto LABEL_211;
        v47 = (GachaEntity_o *)closeInfo;
        friendPoint = UserData->fields.friendPoint;
        v49 = gachaParamData->fields.gachaId;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v50 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(v49, &maxNum[1], maxNum, 0);
        if ( maxNum[1] > 0 || v50 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_211;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0);
          v78 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12445/*"SUMMON_FREE_10_BTN"*/, 0);
          if ( !v78 )
            goto LABEL_211;
          UILabel__set_text(v78, (System_String_o *)closeInfo, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v59 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v59 )
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
          v51 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v52, v53, v54, v55, v56, v57);
          closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v58, 0);
          if ( !v51 )
            goto LABEL_211;
          UILabel__set_text(v51, (System_String_o *)closeInfo, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v59 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v59 )
            goto LABEL_211;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
LABEL_171:
          UILabel__SetCondensedScale(v59, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0, 0);
          goto LABEL_172;
        }
        if ( friendPoint <= 1999 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_211;
          if ( friendPoint < 400 )
            v80 = 1;
          else
            v80 = friendPoint / 200;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_211;
          closeInfo = (UnityEngine_GameObject_o *)GachaAppendMaster__TryGetHundredSummon(
                                                    (GachaAppendMaster_o *)closeInfo,
                                                    &v123,
                                                    gachaParamData->fields.gachaId,
                                                    0);
          if ( ((unsigned __int8)closeInfo & 1) == 0 )
            goto LABEL_159;
          if ( !v47 )
            goto LABEL_211;
          gachaResourceNum = gachaParamData->fields.gachaResourceNum;
          if ( gachaResourceNum > 10 * GachaEntity__getPrice(v47, 0) || !gachaParamData->fields.gachaResourceNum )
          {
            closeInfo = (UnityEngine_GameObject_o *)GachaEntity__getPrice(v47, 0);
            if ( !v123 )
              goto LABEL_211;
            v116 = (int)closeInfo;
            maxDrawNum = v123->fields.maxDrawNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            closeInfo = (UnityEngine_GameObject_o *)System_Math__Min_65042304(friendPoint / v116, maxDrawNum, 0);
            v118 = this->fields.summonCtrl;
            if ( (int)closeInfo >= 1 )
            {
              if ( !v118 )
                goto LABEL_211;
              v87 = (int)closeInfo;
              SummonControl__SetGachaTime(this->fields.summonCtrl, (int32_t)closeInfo, 3, 0);
              v88 = 24;
              goto LABEL_166;
            }
            if ( !v118 )
              goto LABEL_211;
            v80 = gachaParamData->fields.gachaTime;
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          }
          else
          {
LABEL_159:
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_211;
            v80 = gachaParamData->fields.gachaTime;
          }
        }
        SummonControl__SetGachaTime((SummonControl_o *)closeInfo, v80, 3, 0);
        v87 = gachaParamData->fields.gachaTime;
        v88 = 20;
LABEL_166:
        v89 = this->fields.summonBtnLabel;
        gachaTime = v87;
        v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v81, v82, v83, v84, v85, v86);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v90, 0);
        if ( !v89 )
          goto LABEL_211;
        UILabel__set_text(v89, (System_String_o *)closeInfo, 0);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v59 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v59 )
          goto LABEL_211;
        SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = *(_DWORD *)((char *)&SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY
                                                     + v88);
        goto LABEL_171;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_211;
        v61 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_3396838 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v61 )
          goto LABEL_99;
        v62 = v61;
        if ( !LODWORD(v61[4].monitor) )
          goto LABEL_99;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_211;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v62[4].monitor,
               0) != 9 )
          goto LABEL_99;
        v69 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v63, v64, v65, v66, v67, v68);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v70, 0);
        if ( !v69 )
          goto LABEL_211;
        UILabel__set_text(v69, (System_String_o *)closeInfo, 0);
LABEL_99:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v71 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
        }
        closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        }
        if ( !v71 )
          goto LABEL_211;
        v72 = UserItemMaster__GetEntity(
                (UserItemMaster_o *)v71,
                *(_QWORD *)(closeInfo[7].fields.m_CachedPtr + 64),
                gachaParamData->fields.ticketItemId,
                0);
        if ( v72 && v72->fields.num > 0 )
          goto LABEL_139;
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_211;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_211;
        v131.fields.r = 0.35547;
        v131.fields.a = 1.0;
        v131.fields.g = 0.35547;
        v131.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v131, 0);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_211;
        v132.fields.r = 0.5;
        v132.fields.g = 0.5;
        v132.fields.b = 0.5;
        v132.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v132, 0);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v73 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v73 )
          goto LABEL_211;
        UILabel__SetCondensedScale(
          v73,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0,
          0);
        v74 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12474/*"SUMMON_TICKET_END"*/, 0);
        if ( !v74 )
          goto LABEL_211;
        v75 = (System_String_o *)closeInfo;
        closeInfo = (UnityEngine_GameObject_o *)v74;
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
  int monitor; // w10
  BalanceConfig_c *v5; // x0
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
  int v18; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C33FBE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_7196/*"HAVE_SVT_NUM_TITLE"*/);
    sub_1C32C20(&StringLiteral_7195/*"HAVE_SVTEQ_NUM_TITLE"*/);
    byte_4C33FBE = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_23;
  monitor = (int)SelfUserGame[1].monitor;
  monitor_high = HIDWORD(SelfUserGame[1].monitor);
  v18 = monitor;
  if ( !byte_4C31CFA )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C31CFA = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v5->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0);
  svtTitleLb = this->fields.svtTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7196/*"HAVE_SVT_NUM_TITLE"*/, 0);
  if ( !svtTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtTitleLb, (System_String_o *)SelfUserGame, 0);
  svtNumLb = this->fields.svtNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantSum, 0);
  if ( !svtNumLb )
    goto LABEL_23;
  UILabel__set_text(svtNumLb, (System_String_o *)SelfUserGame, 0);
  svtMaxLb = this->fields.svtMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&v18, 0);
  if ( !svtMaxLb )
    goto LABEL_23;
  UILabel__set_text(svtMaxLb, (System_String_o *)SelfUserGame, 0);
  svtEqTitleLb = this->fields.svtEqTitleLb;
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7195/*"HAVE_SVTEQ_NUM_TITLE"*/, 0);
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
    sub_1C32E7C(SelfUserGame);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0);
}


void SummonResultComponent__showResCcDetail(SummonResultComponent_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4C33FC0 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SummonResultComponent___c__DisplayClass79_0__showResCcDetail_b__0__);
    sub_1C32C20(&SummonResultComponent___c__DisplayClass79_0_TypeInfo);
    byte_4C33FC0 = 1;
  }
  v5 = sub_1C32E6C(SummonResultComponent___c__DisplayClass79_0_TypeInfo);
  SummonResultComponent___c__DisplayClass79_0___ctor((SummonResultComponent___c__DisplayClass79_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass79_0__showResCcDetail_b__0__,
    0);
  if ( !v11 )
LABEL_8:
    sub_1C32E7C(v6);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0);
}


void SummonResultComponent__showResSvtDetail(SummonResultComponent_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4C33FBF & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SummonResultComponent___c__DisplayClass78_0__showResSvtDetail_b__0__);
    sub_1C32C20(&SummonResultComponent___c__DisplayClass78_0_TypeInfo);
    byte_4C33FBF = 1;
  }
  v5 = sub_1C32E6C(SummonResultComponent___c__DisplayClass78_0_TypeInfo);
  SummonResultComponent___c__DisplayClass78_0___ctor((SummonResultComponent___c__DisplayClass78_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass78_0__showResSvtDetail_b__0__,
    0);
  if ( !v11 )
LABEL_8:
    sub_1C32E7C(v6);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0);
}


void SummonResultComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C33FC9 & 1) == 0 )
  {
    sub_1C32C20(&SummonResultComponent___c_TypeInfo);
    byte_4C33FC9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(SummonResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)SummonResultComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
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
  CommonUI_o *v9; // x19

  if ( (byte_4C33FCA & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SummonResultComponent_DialogCallBack__);
    byte_4C33FCA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (CommonUI_o *)Instance;
  v7 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v7, _4__this, Method_SummonResultComponent_DialogCallBack__, 0);
  if ( !v6 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_31199988(v6, 8, usrSvtId, v7, 0, 0);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v9 )
LABEL_8:
    sub_1C32E7C(v8);
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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
  Il2CppObject *Entity; // x20
  Il2CppObject *v5; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v7; // x19
  ServantStatusDialog_EndDelegate_o *v8; // x21
  CommonUI_o *v9; // x19

  if ( (byte_4C33FCB & 1) == 0 )
  {
    sub_1C32C20(&AvalonSceneManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_1C32C20(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SummonResultComponent_DialogCallBack__);
    byte_4C33FCB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_3398D94 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v7 = (CommonUI_o *)v5;
  v8 = (ServantStatusDialog_EndDelegate_o *)sub_1C32E6C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v8, _4__this, Method_SummonResultComponent_DialogCallBack__, 0);
  if ( !v7 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_31203372(v7, 0, (UserCommandCodeEntity_o *)Entity, v8, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v9 )
LABEL_10:
    sub_1C32E7C(Instance);
  CommonUI__maskFadein(v9, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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