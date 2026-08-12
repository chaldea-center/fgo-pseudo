void SummonResultComponent___cctor(const MethodInfo *method)
{
  struct SummonResultComponent_StaticFields *static_fields; // x8
  SummonResultComponent_c *v2; // x10
  struct SummonResultComponent_StaticFields *v3; // x8

  if ( (byte_596CB44 & 1) == 0 )
  {
    sub_2213A60(&SummonResultComponent_TypeInfo);
    byte_596CB44 = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_E9C880;
  v2 = SummonResultComponent_TypeInfo;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  v3 = v2->static_fields;
  *(_OWORD *)&v3->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_E9D5E0;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = xmmword_E9BF30;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = xmmword_E9D2D0;
  *(_OWORD *)&v3->SMALL_FONT_SIZE = xmmword_E9DB90;
}


void SummonResultComponent___ctor(SummonResultComponent_o *this, const MethodInfo *method)
{
  this->fields.dispType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SummonResultComponent__CheckLimitOver(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  _BYTE *v4; // x0
  int32_t v5; // w19
  System_Reflection_MethodBase_o *v6; // x0

  if ( (byte_596CB41 & 1) == 0 )
  {
    sub_2213A60(&Method_SummonResultComponent_CheckLimitOver__);
    sub_2213A60(&StringLiteral_5661/*"END_SUMMON"*/);
    sub_2213A60(&StringLiteral_8633/*"LIMIT_OVER"*/);
    byte_596CB41 = 1;
  }
  fsm = this->fields.fsm;
  if ( this->fields.isLimitOver )
  {
    if ( fsm )
    {
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8633/*"LIMIT_OVER"*/, 0);
      v4 = Method_SummonResultComponent_CheckLimitOver__;
      v5 = 2;
      goto LABEL_8;
    }
LABEL_11:
    sub_2213CDC(fsm, method);
  }
  if ( !fsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5661/*"END_SUMMON"*/, 0);
  v4 = Method_SummonResultComponent_CheckLimitOver__;
  v5 = 0;
LABEL_8:
  if ( (v4[83] & 2) != 0 )
    v4 = (_BYTE *)sub_2213A78(v4);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, *((_QWORD *)v4 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0, 0);
}


void SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *blocker; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596CB39 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CB39 = 1;
  }
  blocker = (UnityEngine_Object_o *)this->fields.blocker;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(blocker, 0, 0) )
  {
    v7 = (UnityEngine_Object_o *)this->fields.blocker;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    UnityEngine_Object__Destroy_83459800(v7, 0);
    this->fields.blocker = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.blocker, 0, v8, v9, v10, v11, v12, v13);
  }
}


void SummonResultComponent__DialogCallBack(SummonResultComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_596CB3E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonResultComponent__DialogCallBack_b__80_0__);
    byte_596CB3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5, v6);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__80_0__, 0);
  if ( !v8 )
    sub_2213CDC(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0);
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
    sub_2213CDC(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, active, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *extraGiftMsg2Lb; // x20
  struct ItemIconComponent_array *v20; // x8
  ItemIconComponent_o *v21; // x8
  UIWidget_o *iconSprite; // x23
  struct ItemIconComponent_array *v23; // x8
  ItemIconComponent_o *v24; // x8
  struct ItemIconComponent_array *v25; // x8
  struct ItemIconComponent_array *v26; // x8
  ItemIconComponent_o *v27; // x23
  __int64 v28; // x2
  int32_t summonBeforeMana; // w26
  BalanceConfig_c *v30; // x0
  int32_t ManaMax; // w23
  int32_t v32; // w26
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  SummonResultComponent_c *v36; // x8
  UnityEngine_GameObject_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  UILabel_o *v40; // x21
  UILabel_o *v41; // x21
  System_String_o *v42; // x22
  int m_CancellationTokenSource_high; // w8
  Il2CppObject *v44; // x0
  __int64 v45; // x2
  UILabel_o *v46; // x20
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  struct ItemIconComponent_array *v49; // x8
  __int64 v50; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v52; // x25
  __int64 v53; // x8
  UIWidget_o *v54; // x21
  struct ItemIconComponent_array *v55; // x8
  __int64 v56; // x8
  struct ItemIconComponent_array *v57; // x8
  ItemIconComponent_o *v58; // x21
  struct ItemIconComponent_array *v59; // x8
  bool v60; // w1
  struct ItemIconComponent_array *v61; // x8
  __int64 *v62; // x8
  System_String_o *v63; // x22
  UnityEngine_GameObject_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  SummonResultComponent_c *v67; // x8
  UnityEngine_GameObject_o *v68; // x23
  int v69; // w9
  int *p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL_ADJUST; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  SummonResultComponent_c *v74; // x8
  int32_t size; // w10
  UnityEngine_GameObject_o *v76; // x20
  int v77; // w9
  int *p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX; // x8
  UnityEngine_GameObject_o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  SummonResultComponent_c *v82; // x8
  UnityEngine_GameObject_o *v83; // x22
  int v84; // w9
  int *p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX_ADJUST; // x8
  __int64 v86; // x1
  __int64 v87; // x2
  UILabel_o *v88; // x21
  UILabel_o *v89; // x21
  System_String_o *v90; // x22
  int *v91; // x1
  int v92; // w9
  __int64 v93; // x0
  __int64 v94; // x1
  __int64 v95; // x2
  UILabel_o *extraGiftTitleLb; // x20
  System_String_o *v97; // x21
  System_Object_array *v98; // x0
  System_String_o *v99; // x21
  System_Object_array *v100; // x0
  const MethodInfo *v101; // x1
  __int64 v102; // x1
  __int64 v103; // x2
  UILabel_o *v104; // x21
  System_String_o *v105; // x22
  System_Object_array *v106; // x0
  int v107; // w9
  Il2CppObject *v108; // x0
  int v109; // [xsp+Ch] [xbp-54h] BYREF
  int v110; // [xsp+18h] [xbp-48h] BYREF
  int v111; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_596CB36 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_object___);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&SummonResultComponent_TypeInfo);
    sub_2213A60(&StringLiteral_12953/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/);
    sub_2213A60(&StringLiteral_12955/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/);
    sub_2213A60(&StringLiteral_12946/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/);
    sub_2213A60(&StringLiteral_12957/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/);
    sub_2213A60(&StringLiteral_12969/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/);
    sub_2213A60(&StringLiteral_12970/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_2213A60(&StringLiteral_12954/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/);
    sub_2213A60(&StringLiteral_12968/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/);
    this = (SummonResultComponent_o *)sub_2213A60(&StringLiteral_12956/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/);
    byte_596CB36 = 1;
  }
  summonCtrl = v10->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_99;
  gachaParamData = summonCtrl->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_99;
  if ( giftIds && giftBonusType && gachaParamData->fields.gachaType != 5 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, giftIds, *(_QWORD *)&giftResultType);
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !this )
      goto LABEL_99;
    this = (SummonResultComponent_o *)GiftMaster__GetGiftListByIds((GiftMaster_o *)this, giftIds, 0);
    v14 = giftBonusType == 2;
    v15 = (System_Collections_Generic_List_object__o *)this;
    if ( v14 )
    {
      if ( !this )
        goto LABEL_99;
      extraGiftIconComponents = v10->fields.extraGiftIconComponents;
      if ( !extraGiftIconComponents )
        goto LABEL_99;
      if ( SLODWORD(this->fields.m_CancellationTokenSource) <= SLODWORD(extraGiftIconComponents->max_length) )
      {
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_99;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
        if ( !this )
          goto LABEL_99;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v49 = v10->fields.extraGiftIconComponents;
        if ( !v49 )
          goto LABEL_99;
        v50 = 4;
        while ( 1 )
        {
          max_length_low = LODWORD(v49->max_length);
          v52 = v50 - 4;
          if ( v50 - 4 >= (int)max_length_low )
            break;
          if ( (__int64)v52 >= v15->fields._size )
          {
            if ( v52 >= max_length_low )
              goto LABEL_146;
            this = (SummonResultComponent_o *)*((_QWORD *)&v49->obj.klass + v50);
            if ( !this )
              goto LABEL_99;
            ItemIconComponent__Clear((ItemIconComponent_o *)this, 0);
            v61 = v10->fields.extraGiftIconComponents;
            if ( !v61 )
              goto LABEL_99;
            if ( v52 >= LODWORD(v61->max_length) )
              goto LABEL_146;
            this = (SummonResultComponent_o *)*((_QWORD *)&v61->obj.klass + v50);
            if ( !this )
              goto LABEL_99;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_99;
            v60 = 0;
          }
          else
          {
            if ( v52 >= max_length_low )
              goto LABEL_146;
            v53 = *((_QWORD *)&v49->obj.klass + v50);
            if ( !v53 )
              goto LABEL_99;
            this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
            v54 = *(UIWidget_o **)(v53 + 40);
            if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, giftIds, v48);
            if ( !v54 )
              goto LABEL_99;
            UIWidget__set_width(v54, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS, 0);
            v55 = v10->fields.extraGiftIconComponents;
            if ( !v55 )
              goto LABEL_99;
            if ( v52 >= LODWORD(v55->max_length) )
              goto LABEL_146;
            v56 = *((_QWORD *)&v55->obj.klass + v50);
            if ( !v56 )
              goto LABEL_99;
            this = *(SummonResultComponent_o **)(v56 + 40);
            if ( !this )
              goto LABEL_99;
            UIWidget__set_height(
              (UIWidget_o *)this,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0);
            v57 = v10->fields.extraGiftIconComponents;
            if ( !v57 )
              goto LABEL_99;
            if ( v52 >= LODWORD(v57->max_length) )
              goto LABEL_146;
            v58 = (ItemIconComponent_o *)*((_QWORD *)&v57->obj.klass + v50);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v15,
                                                (int)v50 - 4,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !v58 )
              goto LABEL_99;
            ItemIconComponent__SetGift(v58, (GiftEntity_o *)this, -1, 0, 0);
            v59 = v10->fields.extraGiftIconComponents;
            if ( !v59 )
              goto LABEL_99;
            if ( v52 >= LODWORD(v59->max_length) )
              goto LABEL_146;
            this = (SummonResultComponent_o *)*((_QWORD *)&v59->obj.klass + v50);
            if ( !this )
              goto LABEL_99;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( !this )
              goto LABEL_99;
            v60 = 1;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v60, 0);
          v49 = v10->fields.extraGiftIconComponents;
          ++v50;
          if ( !v49 )
            goto LABEL_99;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_99;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v74 = SummonResultComponent_TypeInfo;
        size = v15->fields._size;
        v76 = gameObject;
        v77 = *(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1);
        if ( size == 1 )
        {
          if ( !v77 )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v72, v73);
            v74 = SummonResultComponent_TypeInfo;
          }
          p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = &v74->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX;
        }
        else
        {
          if ( !v77 )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v72, v73);
            v74 = SummonResultComponent_TypeInfo;
          }
          p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = &v74->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX_ADJUST;
        }
        GameObjectExtensions__SetLocalPositionX(v76, (float)*p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX, 0);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v94, v95);
        v97 = LocalizationManager__Get((System_String_o *)StringLiteral_12969/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0);
        v98 = (System_Object_array *)sub_20005AC(Method_System_Array_Empty_object___);
        this = (SummonResultComponent_o *)System_String__Format_75698016(v97, v98, 0);
        if ( !extraGiftTitleLb )
          goto LABEL_99;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v99 = LocalizationManager__Get((System_String_o *)StringLiteral_12968/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0);
        v100 = (System_Object_array *)sub_20005AC(Method_System_Array_Empty_object___);
        this = (SummonResultComponent_o *)System_String__Format_75698016(v99, v100, 0);
        if ( !extraGiftMsg2Lb )
          goto LABEL_99;
      }
      else
      {
        this = (SummonResultComponent_o *)v10->fields.extraGiftMsgLb;
        if ( !this )
          goto LABEL_99;
        this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_99;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        extraGiftMsg2Lb = v10->fields.extraGiftMsgLb;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17, v18);
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12970/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0);
        if ( !extraGiftMsg2Lb )
          goto LABEL_99;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0);
      SummonResultComponent__SetSpecialGiftPosition(v10, v101);
      return;
    }
    v20 = v10->fields.extraGiftIconComponents;
    if ( !v20 )
      goto LABEL_99;
    if ( !LODWORD(v20->max_length) )
      goto LABEL_146;
    v21 = v20->m_Items[0];
    if ( !v21 )
      goto LABEL_99;
    iconSprite = (UIWidget_o *)v21->fields.iconSprite;
    this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
    if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, giftIds, v13);
    if ( !iconSprite )
      goto LABEL_99;
    UIWidget__set_width(iconSprite, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0);
    v23 = v10->fields.extraGiftIconComponents;
    if ( !v23 )
      goto LABEL_99;
    if ( !LODWORD(v23->max_length) )
      goto LABEL_146;
    v24 = v23->m_Items[0];
    if ( !v24 )
      goto LABEL_99;
    this = (SummonResultComponent_o *)v24->fields.iconSprite;
    if ( !this )
      goto LABEL_99;
    UIWidget__set_height((UIWidget_o *)this, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0);
    v25 = v10->fields.extraGiftIconComponents;
    if ( !v25 )
      goto LABEL_99;
    if ( !LODWORD(v25->max_length) )
      goto LABEL_146;
    this = (SummonResultComponent_o *)v25->m_Items[0];
    if ( !this )
      goto LABEL_99;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
    if ( !this )
      goto LABEL_99;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
    if ( !this )
      goto LABEL_99;
    this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v26 = v10->fields.extraGiftIconComponents;
    if ( !v26 )
      goto LABEL_99;
    if ( !LODWORD(v26->max_length) )
LABEL_146:
      sub_2213CE4(this);
    if ( !v15 )
      goto LABEL_99;
    v27 = v26->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v15,
                                        0,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !v27 )
      goto LABEL_99;
    ItemIconComponent__SetGift(v27, (GiftEntity_o *)this, -1, 0, 0);
    if ( giftResultType == 3 )
    {
      summonBeforeMana = v10->fields.summonBeforeMana;
      v30 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, giftIds, v28);
        v30 = BalanceConfig_TypeInfo;
      }
      ManaMax = v30->static_fields->ManaMax;
      if ( summonBeforeMana < ManaMax )
      {
        if ( !*(&v30->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v30, giftIds, v28);
          ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( this )
        {
          v32 = v10->fields.summonBeforeMana;
          v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          v36 = SummonResultComponent_TypeInfo;
          v37 = v33;
          if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v34, v35);
            v36 = SummonResultComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(
            v37,
            (float)v36->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME,
            0);
          v40 = v10->fields.extraGiftTitleLb;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38, v39);
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12957/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0);
          if ( v40 )
          {
            UILabel__set_text(v40, (System_String_o *)this, 0);
            v41 = v10->fields.extraGiftMsg2Lb;
            v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12955/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v15,
                                                0,
                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v32;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v32 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v15,
                                                    0,
                                                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_99;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v111 = m_CancellationTokenSource_high;
              v44 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v111);
              this = (SummonResultComponent_o *)System_String__Format(v42, v44, 0);
              if ( v41 )
              {
                UILabel__set_text(v41, (System_String_o *)this, 0);
                this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
                v46 = v10->fields.extraGiftTitleLb;
                if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, giftIds, v45);
                if ( v46 )
                {
                  UILabel__set_fontSize(v46, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0);
                  this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
                  if ( this )
                  {
                    UILabel__set_fontSize(
                      (UILabel_o *)this,
                      SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE,
                      0);
LABEL_144:
                    SummonResultComponent__SetBonusGiftPosition(v10, v47);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_99:
        sub_2213CDC(this, giftIds);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_99;
      v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v82 = SummonResultComponent_TypeInfo;
      v83 = v79;
      v84 = *(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1);
      if ( adjustTitleLabel )
      {
        if ( !v84 )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v80, v81);
          v82 = SummonResultComponent_TypeInfo;
        }
        p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX_ADJUST = &v82->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX_ADJUST;
      }
      else
      {
        if ( !v84 )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v80, v81);
          v82 = SummonResultComponent_TypeInfo;
        }
        p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX_ADJUST = &v82->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
      }
      GameObjectExtensions__SetLocalPositionX(v83, (float)*p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX_ADJUST, 0);
      v104 = v10->fields.extraGiftTitleLb;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v102, v103);
      v105 = LocalizationManager__Get((System_String_o *)StringLiteral_12956/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0);
      v106 = (System_Object_array *)sub_20005AC(Method_System_Array_Empty_object___);
      this = (SummonResultComponent_o *)System_String__Format_75698016(v105, v106, 0);
      if ( !v104 )
        goto LABEL_99;
      UILabel__set_text(v104, (System_String_o *)this, 0);
      v89 = v10->fields.extraGiftMsg2Lb;
      v90 = LocalizationManager__Get((System_String_o *)StringLiteral_12953/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v15,
                                          0,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_99;
      v91 = &v110;
      v107 = HIDWORD(this->fields.m_CancellationTokenSource);
      v93 = qword_5984348;
      v110 = v107;
    }
    else
    {
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( v10->fields.isOneTimeFreeSummon )
        v62 = &StringLiteral_12946/*"SUMMON_BONUS_ITEM_GIFTS_FREE"*/;
      else
        v62 = &StringLiteral_12957/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/;
      if ( !this )
        goto LABEL_99;
      v63 = (System_String_o *)*v62;
      v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v67 = SummonResultComponent_TypeInfo;
      v68 = v64;
      v69 = *(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1);
      if ( adjustTitleLabel )
      {
        if ( !v69 )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v65, v66);
          v67 = SummonResultComponent_TypeInfo;
        }
        p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL_ADJUST = &v67->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL_ADJUST;
      }
      else
      {
        if ( !v69 )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v65, v66);
          v67 = SummonResultComponent_TypeInfo;
        }
        p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL_ADJUST = &v67->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
      }
      GameObjectExtensions__SetLocalPositionX(v68, (float)*p_SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL_ADJUST, 0);
      v88 = v10->fields.extraGiftTitleLb;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v86, v87);
      this = (SummonResultComponent_o *)LocalizationManager__Get(v63, 0);
      if ( !v88 )
        goto LABEL_99;
      UILabel__set_text(v88, (System_String_o *)this, 0);
      v89 = v10->fields.extraGiftMsg2Lb;
      v90 = LocalizationManager__Get((System_String_o *)StringLiteral_12954/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v15,
                                          0,
                                          (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_99;
      v91 = &v109;
      v92 = HIDWORD(this->fields.m_CancellationTokenSource);
      v93 = qword_5984348;
      v109 = v92;
    }
    v108 = (Il2CppObject *)j_il2cpp_value_box_0(v93, v91);
    this = (SummonResultComponent_o *)System_String__Format(v90, v108, 0);
    if ( v89 )
    {
      UILabel__set_text(v89, (System_String_o *)this, 0);
      goto LABEL_144;
    }
    goto LABEL_99;
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
  __int64 v17; // x2
  UIWidget_o *extraGiftMsg2Lb; // x20
  int32_t v19; // w22
  struct UILabel_o *v20; // x8

  if ( (byte_596CB37 & 1) == 0 )
  {
    sub_2213A60(&SummonResultComponent_TypeInfo);
    byte_596CB37 = 1;
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
        sub_2213CE4(extraGiftTitleLb);
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
    sub_2213CDC(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0);
  extraGiftMsg2Lb = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v19 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, method, v17);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
    extraGiftMsg2Lb = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
  }
  if ( v19 > *(_DWORD *)(extraGiftTitleLb[7].fields.m_CachedPtr + 72) )
  {
    if ( !HIDWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb, method, v17);
    if ( !extraGiftMsg2Lb )
      goto LABEL_27;
    UIWidget__set_width(extraGiftMsg2Lb, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0);
    extraGiftMsg2Lb = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
  }
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)extraGiftMsg2Lb,
                                                  0);
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
  __int64 v7; // x1
  struct UIGrid_o *fstGrid; // x8
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x27
  float cellWidth; // s10
  int maxPerLine; // s11
  int max_length; // s8
  float v14; // s9
  System_Collections_Generic_List_int__o *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  BalanceConfig_c *v22; // x0
  int v23; // w8
  __int64 v24; // x29
  __int64 *v25; // x8
  GachaInfos_o *v26; // x23
  UnityEngine_GameObject_o *targetGo; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v29; // x24
  UnityEngine_Transform_o *v30; // x25
  const MethodInfo *v31; // x2
  int32_t objectId; // w26
  bool v33; // w25
  bool IsCommandCode; // w26
  SummonResultInfoComponent_ClickDelegate_o *v35; // x0
  bool v36; // zf
  intptr_t *v37; // x8
  SummonResultInfoComponent_ClickDelegate_o *v38; // x26
  __int64 v39; // x2
  __int64 sellQp; // x24
  int64_t summonBeforeQp; // x25
  int64_t QpMax; // x8
  int v43; // w9
  int32_t sellMana; // w24
  int32_t summonBeforeMana; // w25
  int UserItemMax; // w9
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  float v50; // s12
  float v51; // s11
  float v52; // s8
  float v53; // s0
  float v54; // s0
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CB43 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&Method_SummonResultComponent_showResCcDetail__);
    sub_2213A60(&Method_SummonResultComponent_showResSvtDetail__);
    byte_596CB43 = 1;
  }
  SummonResultComponent__setCenter(this, (const MethodInfo *)resultList);
  if ( !resultList )
    goto LABEL_63;
  fstGrid = this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_63;
  p_scdGrid = &this->fields.scdGrid;
  scdGrid = this->fields.scdGrid;
  if ( !scdGrid )
    goto LABEL_63;
  maxPerLine = fstGrid->fields.maxPerLine;
  cellWidth = fstGrid->fields.cellWidth;
  max_length = resultList->max_length;
  v14 = scdGrid->fields.cellWidth;
  *autoSale = 0;
  v15 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v15;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.befSvtList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  v23 = resultList->max_length;
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v24 >= v23 )
        sub_2213CE4(v22);
      v25 = (__int64 *)((unsigned int)v24 >= 6 ? &this->fields.scdGrid : &this->fields.fstGrid);
      Object = *v25;
      if ( !*v25 )
        break;
      v26 = resultList->m_Items[v24];
      targetGo = this->fields.targetGo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0);
      Object = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, targetGo, transform, 0, 0);
      if ( !Object )
        break;
      v29 = (UnityEngine_GameObject_o *)Object;
      Object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object, 0);
      v30 = (UnityEngine_Transform_o *)Object;
      if ( !byte_5969AE5 )
      {
        Object = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( !v30 )
        break;
      UnityEngine_Transform__set_localScale(v30, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      if ( !v26 )
        break;
      if ( v26->fields.isNew
        && (objectId = v26->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v31)) )
      {
        Object = (__int64)this->fields.befSvtList;
        if ( !Object )
          break;
        v47 = *(_QWORD *)(Object + 16);
        v48 = Method_System_Collections_Generic_List_int__Add__;
        ++*(_DWORD *)(Object + 28);
        if ( !v47 )
          break;
        v49 = *(int *)(Object + 24);
        if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Object,
            objectId,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          v33 = 0;
        }
        else
        {
          v33 = 0;
          *(_DWORD *)(Object + 24) = v49 + 1;
          *(_DWORD *)(v47 + 4 * v49 + 32) = objectId;
        }
      }
      else
      {
        v33 = 1;
      }
      IsCommandCode = SvtType__IsCommandCode(v26->fields.type, 0);
      v35 = (SummonResultInfoComponent_ClickDelegate_o *)sub_2213CCC(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      v36 = !IsCommandCode;
      v37 = &Method_SummonResultComponent_showResCcDetail__;
      v38 = v35;
      if ( v36 )
        v37 = &Method_SummonResultComponent_showResSvtDetail__;
      SummonResultInfoComponent_ClickDelegate___ctor(v35, (Il2CppObject *)this, *v37, 0);
      if ( v26->fields.sellMana || v26->fields.sellQp )
      {
        v38 = 0;
        *autoSale = 1;
      }
      Object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v29,
                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
      if ( !Object )
        break;
      SummonResultInfoComponent__setResultData(
        (SummonResultInfoComponent_o *)Object,
        v26,
        v33,
        v38,
        this->fields.summonBeforeQp,
        this->fields.summonBeforeMana,
        0);
      v22 = BalanceConfig_TypeInfo;
      sellQp = v26->fields.sellQp;
      summonBeforeQp = this->fields.summonBeforeQp;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7, v39);
        v22 = BalanceConfig_TypeInfo;
      }
      QpMax = v22->static_fields->QpMax;
      if ( summonBeforeQp + sellQp >= QpMax )
      {
        if ( !*(&v22->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v22, v7, v39);
          v22 = BalanceConfig_TypeInfo;
          QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
        }
      }
      else
      {
        QpMax = this->fields.summonBeforeQp + v26->fields.sellQp;
      }
      v43 = *(&v22->_2.cctor_finished + 1);
      sellMana = v26->fields.sellMana;
      summonBeforeMana = this->fields.summonBeforeMana;
      this->fields.summonBeforeQp = QpMax;
      if ( !v43 )
      {
        j_il2cpp_runtime_class_init_0(v22, v7, v39);
        v22 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v22->static_fields->UserItemMax;
      if ( summonBeforeMana + sellMana >= UserItemMax )
      {
        if ( !*(&v22->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v22, v7, v39);
          UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
        }
      }
      else
      {
        UserItemMax = this->fields.summonBeforeMana + v26->fields.sellMana;
      }
      v23 = resultList->max_length;
      ++v24;
      this->fields.summonBeforeMana = UserItemMax;
      if ( (int)v24 >= v23 )
        goto LABEL_47;
    }
LABEL_63:
    sub_2213CDC(Object, v7);
  }
LABEL_47:
  v50 = (float)max_length;
  v51 = (float)maxPerLine;
  Object = (__int64)this->fields.fstGrid;
  if ( (float)max_length <= v51 )
    v52 = 22.0;
  else
    v52 = 106.0;
  if ( !Object )
    goto LABEL_63;
  Object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0);
  if ( !Object )
    goto LABEL_63;
  v53 = v50 <= v51 ? v50 : v51;
  v56.fields.z = this->fields.center.fields.z;
  v56.fields.x = (float)(cellWidth * -0.5) * (float)(v53 + -1.0);
  v56.fields.y = v52;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v56, 0);
  Object = (__int64)this->fields.fstGrid;
  if ( !Object )
    goto LABEL_63;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Object + 440LL))(Object, *(_QWORD *)(*(_QWORD *)Object + 448LL));
  Object = (__int64)*p_scdGrid;
  if ( !*p_scdGrid )
    goto LABEL_63;
  Object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0);
  if ( !Object )
    goto LABEL_63;
  v54 = (float)(v50 - v51) + -1.0;
  if ( v50 <= v51 )
    v54 = -1.0;
  v57.fields.z = this->fields.center.fields.z;
  v57.fields.x = (float)(v14 * -0.5) * v54;
  v57.fields.y = -62.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v57, 0);
  Object = (__int64)this->fields.scdGrid;
  if ( !Object )
    goto LABEL_63;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Object + 440LL))(Object, *(_QWORD *)(*(_QWORD *)Object + 448LL));
  Object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Object )
    goto LABEL_63;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0);
}


void SummonResultComponent__SetResultData(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        bool *autoSale,
        const MethodInfo *method)
{
  SummonResultComponent___c__DisplayClass87_0_o *v5; // x20
  System_Collections_Generic_List_int__o *v6; // x23
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int *befSvtList; // x0
  __int64 objectId; // x1
  struct UIGrid_o *listRoot; // x8
  int maxPerLine; // w9
  float v17; // s8
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaId; // w23
  int64_t summonSceneInTime; // x25
  System_Collections_Generic_List_object__o *v22; // x24
  const MethodInfo *v23; // x2
  int max_length; // w8
  int v25; // w21
  __int64 v26; // x22
  GachaInfos_o **m_Items; // x29
  GachaInfos_o *v28; // x26
  bool v29; // w28
  MultiExSummonListViewItem_o *v30; // x27
  ListViewSort_o *v31; // x26
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  struct SummonResultComponent___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__87_0; // x23
  Il2CppObject *v47; // x25
  struct SummonResultComponent___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_List_object__o *v55; // x23
  int v56; // w22
  _BOOL8 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
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
  __int64 v74; // x1
  __int64 v75; // x2
  BalanceConfig_c *v76; // x0
  __int64 sellQp; // x28
  int64_t summonBeforeQp; // x20
  int64_t QpMax; // x27
  int64_t v80; // x0
  BalanceConfig_c *v81; // x8
  __int64 v82; // x0
  __int64 v83; // x1
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  GachaInfos_array *v90; // x8
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  struct System_Collections_Generic_List_T__o *list; // x22
  struct UIGrid_o *v96; // x8
  System_Action_object__o *v97; // x19
  Il2CppObject *v98; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v100; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v101; // [xsp+30h] [xbp-90h] BYREF
  GachaInfos_array *v102; // [xsp+58h] [xbp-68h]

  v102 = resultList;
  if ( (byte_596CB42 & 1) == 0 )
  {
    sub_2213A60(&System_Action_GameObject__TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&SummonResultInfoComponent_ClickDelegate_TypeInfo);
    sub_2213A60(&System_Comparison_MultiExSummonListViewItem__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    sub_2213A60(&ListViewSort_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_2213A60(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&MultiExSummonListViewItem_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SummonResultComponent_showResCcDetail__);
    sub_2213A60(&Method_SummonResultComponent_showResSvtDetail__);
    sub_2213A60(&Method_SummonResultComponent___c__SetResultData_b__87_0__);
    sub_2213A60(&Method_SummonResultComponent___c__DisplayClass87_0__SetResultData_b__1__);
    sub_2213A60(&SummonResultComponent___c__DisplayClass87_0_TypeInfo);
    sub_2213A60(&SummonResultComponent___c_TypeInfo);
    byte_596CB42 = 1;
  }
  memset(&v101, 0, sizeof(v101));
  v5 = (SummonResultComponent___c__DisplayClass87_0_o *)sub_2213CCC(SummonResultComponent___c__DisplayClass87_0_TypeInfo);
  SummonResultComponent___c__DisplayClass87_0___ctor(v5, 0);
  *autoSale = 0;
  v6 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.befSvtList, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  listRoot = this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_72;
  if ( !v102 )
    goto LABEL_72;
  if ( !v5 )
    goto LABEL_72;
  maxPerLine = listRoot->fields.maxPerLine;
  v17 = (float)(SLODWORD(v102->max_length) % maxPerLine);
  v5->fields.offset = (float)(listRoot->fields.cellWidth * 0.5) * (float)((float)maxPerLine - v17);
  summonCtrl = this->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_72;
  gachaParamData = summonCtrl->fields.gachaParamData;
  v98 = (Il2CppObject *)v5;
  if ( !gachaParamData )
    goto LABEL_72;
  gachaId = gachaParamData->fields.gachaId;
  summonSceneInTime = summonCtrl->fields.summonSceneInTime;
  v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
  max_length = v102->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    v26 = 0;
    m_Items = v102->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v26 >= max_length )
        sub_2213CE4(befSvtList);
      v28 = m_Items[v26];
      if ( !v28 )
        break;
      if ( v28->fields.isNew && !SummonResultComponent__checkOverlapSvt(this, v28->fields.objectId, v23) )
      {
        befSvtList = (int *)this->fields.befSvtList;
        if ( !befSvtList )
          break;
        v42 = *((_QWORD *)befSvtList + 2);
        objectId = (unsigned int)v28->fields.objectId;
        v43 = Method_System_Collections_Generic_List_int__Add__;
        ++befSvtList[7];
        if ( !v42 )
          break;
        v44 = befSvtList[6];
        if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)befSvtList,
            objectId,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          v29 = 0;
        }
        else
        {
          v29 = 0;
          befSvtList[6] = v44 + 1;
          *(_DWORD *)(v42 + 4 * v44 + 32) = objectId;
        }
      }
      else
      {
        v29 = 1;
      }
      v30 = (MultiExSummonListViewItem_o *)sub_2213CCC(MultiExSummonListViewItem_TypeInfo);
      MultiExSummonListViewItem___ctor(v30, v28, v29, gachaId, summonSceneInTime, v25 + LODWORD(v102->max_length), 0);
      v31 = (ListViewSort_o *)sub_2213CCC(ListViewSort_TypeInfo);
      ListViewSort___ctor(v31, 27, 1, 0);
      if ( !v30 )
        break;
      befSvtList = (int *)((__int64 (__fastcall *)(MultiExSummonListViewItem_o *, ListViewSort_o *, const MethodInfo *))v30->klass->vtable._4_SetSortValue.methodPtr)(
                            v30,
                            v31,
                            v30->klass->vtable._4_SetSortValue.method);
      if ( !v22 )
        break;
      items = v22->fields._items;
      v39 = Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__;
      ++v22->fields._version;
      if ( !items )
        break;
      size = v22->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v30,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v30;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v30, v32, v33, v34, v35, v36, v37);
      }
      ++v26;
      --v25;
      max_length = v102->max_length;
      if ( (int)v26 >= max_length )
        goto LABEL_28;
    }
LABEL_72:
    sub_2213CDC(befSvtList, objectId);
  }
LABEL_28:
  befSvtList = (int *)SummonResultComponent___c_TypeInfo;
  if ( !*(&SummonResultComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo, objectId, v23);
    befSvtList = (int *)SummonResultComponent___c_TypeInfo;
  }
  static_fields = (struct SummonResultComponent___c_StaticFields *)*((_QWORD *)befSvtList + 23);
  _9__87_0 = (System_Comparison_T__o *)static_fields->__9__87_0;
  if ( !_9__87_0 )
  {
    if ( !befSvtList[57] )
    {
      j_il2cpp_runtime_class_init_0(befSvtList, objectId, v23);
      static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)static_fields->__9;
    _9__87_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MultiExSummonListViewItem__TypeInfo);
    System_Comparison_object____ctor(_9__87_0, v47, Method_SummonResultComponent___c__SetResultData_b__87_0__, 0);
    v48 = SummonResultComponent___c_TypeInfo->static_fields;
    v48->__9__87_0 = (struct System_Comparison_MultiExSummonListViewItem__o *)_9__87_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->__9__87_0, (int32_t)_9__87_0, v49, v50, v51, v52, v53, v54);
  }
  if ( !v22 )
    goto LABEL_72;
  System_Collections_Generic_List_object___Sort_71849708(
    v22,
    _9__87_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
  v55 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v55,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v100,
    v22,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
  v56 = 1;
  v101 = v100;
  v100.fields._list = 0;
  *(_QWORD *)&v100.fields._index = &v101;
  while ( 1 )
  {
    v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v101,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    if ( !v57 )
      break;
    current = v101.fields._current;
    if ( !v101.fields._current )
      sub_2213CDC(v57, v58);
    monitor = (GachaInfos_o *)v101.fields._current[7].monitor;
    rewardIconObj = (Il2CppObject *)this->fields.rewardIconObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58, v59);
    v63 = UnityEngine_Object__Instantiate_object_(
            rewardIconObj,
            (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v65 = (UnityEngine_GameObject_o *)v63;
    if ( !v63 )
      sub_2213CDC(0, v64);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v63, 1, 0);
    v67 = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !v67 )
      sub_2213CDC(0, v66);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v67, 0);
    GameObjectExtensions__SetParent(v65, transform, 0);
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    GameObjectExtensions__SetLocalPosition(v65, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    if ( !byte_5969AE5 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE5 = 1;
    }
    GameObjectExtensions__SetLocalScale(v65, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    if ( !monitor )
      sub_2213CDC(v69, v70);
    if ( SvtType__IsCommandCode(monitor->fields.type, 0) )
    {
      v71 = (SummonResultInfoComponent_ClickDelegate_o *)sub_2213CCC(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v71,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResCcDetail__,
        0);
    }
    else
    {
      v71 = (SummonResultInfoComponent_ClickDelegate_o *)sub_2213CCC(SummonResultInfoComponent_ClickDelegate_TypeInfo);
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
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    if ( !Component_object )
      sub_2213CDC(0, v73);
    SummonResultInfoComponent__setResultData(
      (SummonResultInfoComponent_o *)Component_object,
      monitor,
      (bool)current[8].klass,
      v71,
      this->fields.summonBeforeQp,
      this->fields.summonBeforeMana,
      0);
    v76 = BalanceConfig_TypeInfo;
    sellQp = monitor->fields.sellQp;
    summonBeforeQp = this->fields.summonBeforeQp;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v74, v75);
      v76 = BalanceConfig_TypeInfo;
    }
    QpMax = v76->static_fields->QpMax;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v74, v75);
    v80 = System_Math__Min_77153608(summonBeforeQp + sellQp, QpMax, 0);
    v81 = BalanceConfig_TypeInfo;
    this->fields.summonBeforeQp = v80;
    v82 = System_Math__Min_77153596(
            this->fields.summonBeforeMana + monitor->fields.sellMana,
            v81->static_fields->UserItemMax,
            0);
    v90 = v102;
    this->fields.summonBeforeMana = v82;
    if ( (float)((float)SLODWORD(v90->max_length) - v17) < (float)v56 )
    {
      if ( !v55
        || (v91 = v55->fields._items,
            v92 = Method_System_Collections_Generic_List_GameObject__Add__,
            ++v55->fields._version,
            !v91) )
      {
        sub_2213CDC(v82, v83);
      }
      v93 = v55->fields._size;
      if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v55,
          (Il2CppObject *)v65,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
      }
      else
      {
        v94 = &v91->obj.klass + v93;
        v55->fields._size = v93 + 1;
        v94[4] = (Il2CppClass *)v65;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v94 + 4), (int32_t)v65, v84, v85, v86, v87, v88, v89);
      }
    }
    ++v56;
  }
  list = v100.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v100.fields._index,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
  if ( list )
    sub_2213CD4(list);
  befSvtList = (int *)this->fields.listRoot;
  if ( !befSvtList )
    goto LABEL_72;
  befSvtList = (int *)(*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)befSvtList + 440LL))(
                        befSvtList,
                        *(_QWORD *)(*(_QWORD *)befSvtList + 448LL));
  v96 = this->fields.listRoot;
  if ( !v96 )
    goto LABEL_72;
  befSvtList = (int *)this->fields.scrollBar;
  if ( !befSvtList )
    goto LABEL_72;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)befSvtList,
    SLODWORD(v102->max_length) > 2 * v96->fields.maxPerLine,
    0);
  befSvtList = (int *)this->fields.scrollView;
  if ( !befSvtList )
    goto LABEL_72;
  UIScrollView__ResetPosition((UIScrollView_o *)befSvtList, 0);
  v97 = (System_Action_object__o *)sub_2213CCC(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(v97, v98, Method_SummonResultComponent___c__DisplayClass87_0__SetResultData_b__1__, 0);
  if ( !v55 )
    goto LABEL_72;
  System_Collections_Generic_List_object___ForEach(
    v55,
    (System_Action_T__o *)v97,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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
  __int64 v17; // x2
  UIWidget_o *extraGiftMsg2Lb; // x20
  int32_t v19; // w22
  struct UILabel_o *v20; // x8

  if ( (byte_596CB38 & 1) == 0 )
  {
    sub_2213A60(&SummonResultComponent_TypeInfo);
    byte_596CB38 = 1;
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
        sub_2213CE4(extraGiftTitleLb);
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
    sub_2213CDC(extraGiftTitleLb, method);
  }
LABEL_15:
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftTitleLb )
    goto LABEL_27;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)extraGiftTitleLb, 0);
  extraGiftMsg2Lb = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  v19 = extraGiftMsg2Lb->fields.mWidth;
  extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, method, v17);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
    extraGiftMsg2Lb = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
  }
  if ( v19 > *(_DWORD *)(extraGiftTitleLb[7].fields.m_CachedPtr + 72) )
  {
    if ( !HIDWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb, method, v17);
    if ( !extraGiftMsg2Lb )
      goto LABEL_27;
    UIWidget__set_width(extraGiftMsg2Lb, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0);
    extraGiftMsg2Lb = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
  }
  if ( !extraGiftMsg2Lb )
    goto LABEL_27;
  extraGiftTitleLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)extraGiftMsg2Lb,
                                                  0);
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
  __int64 v7; // x2
  CommonUI_o *v8; // x19

  if ( (byte_596CB45 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonResultComponent_EndCloseDialogCallBack__);
    byte_596CB45 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v4, 0);
  v5 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonUI_o *)v5;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v7);
  if ( !v8 )
LABEL_8:
    sub_2213CDC(v5, v6);
  CommonUI__maskFadein(v8, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
bool SummonResultComponent__checkOverlapSvt(SummonResultComponent_o *this, int32_t svtId, const MethodInfo *method)
{
  SummonResultComponent_o *v4; // x20
  struct System_Collections_Generic_List_int__o *befSvtList; // x8
  int size; // w8
  int v7; // w22
  int32_t v8; // w21
  bool result; // w0

  v4 = this;
  if ( (byte_596CB3A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (SummonResultComponent_o *)sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_596CB3A = 1;
  }
  befSvtList = v4->fields.befSvtList;
  if ( !befSvtList )
    goto LABEL_13;
  size = befSvtList->fields._size;
  v7 = size - 1;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      this = (SummonResultComponent_o *)v4->fields.befSvtList;
      if ( !this )
        break;
      result = System_Collections_Generic_List_int___get_Item(
                 (System_Collections_Generic_List_int__o *)this,
                 v8,
                 (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
      if ( !result && v7 != v8++ )
        continue;
      return result;
    }
LABEL_13:
    sub_2213CDC(this, *(_QWORD *)&svtId);
  }
  return 0;
}


void SummonResultComponent__clearResultList(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *fstGrid; // x0
  int32_t childCount; // w0
  int v5; // w22
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *gameObject; // x20
  int32_t v9; // w0
  int v10; // w22
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *v13; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v15; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  System_Collections_IEnumerator_c *v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_Component_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 naturalAligment; // x9
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_Object_o *v31; // x20
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x21
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  System_Collections_IEnumerator_o *v38; // [xsp+28h] [xbp-48h]

  if ( (byte_596CB3F & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CB3F = 1;
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.fstGrid;
  if ( !fstGrid )
    goto LABEL_57;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0);
  if ( !fstGrid )
    goto LABEL_57;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
      if ( (unsigned int)--v5 <= 1 )
        goto LABEL_13;
    }
LABEL_57:
    sub_2213CDC(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_57;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0);
  if ( !fstGrid )
    goto LABEL_57;
  v9 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0);
  if ( v9 >= 1 )
  {
    v10 = v9 + 1;
    do
    {
      fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
      if ( !fstGrid )
        goto LABEL_57;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0);
      if ( !fstGrid )
        goto LABEL_57;
      fstGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                             (UnityEngine_Transform_o *)fstGrid,
                                             v10 - 2,
                                             0);
      if ( !fstGrid )
        goto LABEL_57;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
      UnityEngine_Object__Destroy_83459800(v13, 0);
    }
    while ( (unsigned int)--v10 > 1 );
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !fstGrid )
    goto LABEL_57;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0);
  if ( !fstGrid )
    goto LABEL_57;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)fstGrid, 0);
  v38 = Enumerator;
  while ( 1 )
  {
    if ( !v38 )
      goto LABEL_59;
    klass = v38->klass;
    v17 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_31;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_31:
      v19 = sub_224BC3C(v38, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(v38, *(_QWORD *)(v19 + 8)) & 1) == 0 )
      break;
    v20 = v38->klass;
    v21 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_38;
      }
      v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1];
    }
    else
    {
LABEL_38:
      v23 = sub_224BC3C(v38, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v24 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                       v38,
                                       *(_QWORD *)(v23 + 8));
    if ( !v24 )
      sub_2213CDC(0, v25);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v24->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v24->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_221405C(v24, UnityEngine_Transform_TypeInfo, v26, v27);
LABEL_59:
      sub_2213CDC(Enumerator, v15);
    }
    v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29, v30);
    UnityEngine_Object__Destroy_83459800(v31, 0);
  }
  v32 = sub_2213BB4(v38, System_IDisposable_TypeInfo);
  if ( v32 )
  {
    v33 = *(_QWORD *)v32;
    v34 = v32;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_51;
      }
      v37 = v33 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_51:
      v37 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsg;
  if ( !fstGrid )
    goto LABEL_57;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)fstGrid, 0, 0);
  fstGrid = (UnityEngine_Component_o *)this->fields.autoSaleMsgLb;
  if ( !fstGrid )
    goto LABEL_57;
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
  __int64 v20; // x1
  __int64 v21; // x2
  float v22; // s8
  _BOOL4 v23; // w24
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  UILabel_o *autoSaleMsgLb; // x23
  __int64 v28; // x2
  UILabel_o *extraGiftMsgLb; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  SummonResultComponent___c_c *v32; // x0
  System_Collections_Generic_IEnumerable_T__o *extraGiftIconComponents; // x23
  struct SummonResultComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__70_0; // x24
  Il2CppObject *v36; // x25
  struct SummonResultComponent___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x5
  float v46; // s8
  int32_t max_length; // w1
  struct UIGrid_o *v48; // x8
  GachaExtraGifts_o *v49; // x9
  SummonResultComponent_o *v50; // x0
  System_Collections_Generic_IEnumerable_int__o *v51; // x1
  int32_t gachaExtraGiftResultType; // w2
  int32_t gachaExtraGiftBonusType; // w3
  bool v54; // w4
  System_Collections_Generic_HashSet_int__o *v55; // x22
  il2cpp_array_size_t v56; // x8
  __int64 v57; // x25
  int32_t v58; // w23
  int32_t v59; // w24
  GachaExtraGifts_o *v60; // x29
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // [xsp+8h] [xbp-78h] BYREF
  bool autoSale[4]; // [xsp+1Ch] [xbp-64h] BYREF

  v9 = resultList;
  if ( (byte_596CB34 & 1) == 0 )
  {
    sub_2213A60(&System_Action_ItemIconComponent__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_ItemIconComponent___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&SummonResultComponent_TypeInfo);
    sub_2213A60(&Method_SummonResultComponent___c__initGachaResultList_b__70_0__);
    sub_2213A60(&SummonResultComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_12970/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/);
    sub_2213A60(&StringLiteral_12996/*"SUMMON_RESULT_AUTOSALE_MSG"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596CB34 = 1;
  }
  changeSceneBtnInfo = this->fields.changeSceneBtnInfo;
  autoSale[0] = 0;
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
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    v22 = 0.0;
  }
  else
  {
    SummonResultComponent__SetResultData(this, v9, autoSale, v17);
    if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v20, v21);
    v22 = FSUtility__IsUnderVista(0) ? 19.0 : 7.0;
  }
  changeSceneBtnInfo = this->fields.autoSaleMsg;
  if ( !changeSceneBtnInfo
    || (v23 = autoSale[0],
        UnityEngine_GameObject__SetActive(changeSceneBtnInfo, autoSale[0], 0),
        (changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.autoSaleMsgLb) == 0) )
  {
LABEL_97:
    sub_2213CDC(changeSceneBtnInfo, resultList);
  }
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0);
  GameObjectExtensions__SetLocalPositionY(v24, v22, 0);
  autoSaleMsgLb = this->fields.autoSaleMsgLb;
  if ( v23 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12996/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0);
    resultList = (GachaInfos_array *)changeSceneBtnInfo;
    if ( !autoSaleMsgLb )
      goto LABEL_97;
  }
  else
  {
    resultList = **(GachaInfos_array ***)(qword_5984390 + 184);
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
  if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, resultList, v28);
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
  v32 = SummonResultComponent___c_TypeInfo;
  extraGiftIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraGiftIconComponents;
  if ( !*(&SummonResultComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo, v30, v31);
    v32 = SummonResultComponent___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__70_0 = (System_Action_object__o *)static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !*(&v32->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v32, v30, v31);
      static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__70_0 = (System_Action_object__o *)sub_2213CCC(System_Action_ItemIconComponent__TypeInfo);
    System_Action_object____ctor(_9__70_0, v36, Method_SummonResultComponent___c__initGachaResultList_b__70_0__, 0);
    v37 = SummonResultComponent___c_TypeInfo->static_fields;
    v37->__9__70_0 = (struct System_Action_ItemIconComponent__o *)_9__70_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v37->__9__70_0, (int32_t)_9__70_0, v38, v39, v40, v41, v42, v43);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__70_0,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_ItemIconComponent___);
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
      v46 = 0.0;
      if ( v9 )
      {
        max_length = v9->max_length;
        v63 = 0;
        System_Nullable_int____ctor(
          (System_Nullable_int__o)&v63,
          max_length,
          (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v63 )
          v46 = (float)SHIDWORD(v63);
      }
      v48 = this->fields.fstGrid;
      if ( !v48 )
        goto LABEL_97;
      if ( LODWORD(gachaExtraGiftList->max_length) )
      {
        v49 = gachaExtraGiftList->m_Items[0];
        if ( !v49 )
          goto LABEL_97;
        v50 = this;
        v51 = (System_Collections_Generic_IEnumerable_int__o *)extraGiftIds;
        gachaExtraGiftBonusType = v49->fields.gachaExtraGiftBonusType;
        gachaExtraGiftResultType = v49->fields.gachaExtraGiftResultType;
        v54 = v46 > (float)v48->fields.maxPerLine;
        goto LABEL_95;
      }
LABEL_98:
      sub_2213CE4(changeSceneBtnInfo);
    }
    v55 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v55,
      (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v56 = extraGiftIds->max_length;
    if ( (int)v56 >= 1 )
    {
      v57 = 0;
      v58 = 0;
      v59 = 0;
      while ( (unsigned int)v57 < (unsigned int)v56 && (unsigned int)v57 < LODWORD(gachaExtraGiftList->max_length) )
      {
        v60 = gachaExtraGiftList->m_Items[v57];
        if ( !v60 )
          goto LABEL_97;
        if ( v60->fields.gachaExtraGiftBonusType == 2 )
        {
          if ( !v55 )
            goto LABEL_97;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_HashSet_int___Add(
                                                             v55,
                                                             extraGiftIds->m_Items[v57],
                                                             (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
          v58 = v60->fields.gachaExtraGiftBonusType;
          v59 = v60->fields.gachaExtraGiftResultType;
          v56 = extraGiftIds->max_length;
        }
        if ( (int)++v57 >= (int)v56 )
          goto LABEL_89;
      }
      goto LABEL_98;
    }
    v59 = 0;
    v58 = 0;
LABEL_89:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)extraGiftIds, 0) )
    {
      v50 = this;
      v51 = (System_Collections_Generic_IEnumerable_int__o *)v55;
      gachaExtraGiftResultType = v59;
      gachaExtraGiftBonusType = v58;
      v54 = 0;
LABEL_95:
      SummonResultComponent__SetBonusGiftDisplay(v50, v51, gachaExtraGiftResultType, gachaExtraGiftBonusType, v54, v45);
      goto LABEL_96;
    }
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v61, v62);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12970/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0);
    if ( !this->fields.extraGiftMsgLb )
      goto LABEL_97;
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0);
  }
LABEL_96:
  SummonResultComponent__setListByType(this, this->fields.dispType, v44);
}


void SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_596CB40 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12733/*"SHOW_TALK"*/);
    byte_596CB40 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_2213CDC(0, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12733/*"SHOW_TALK"*/, 0);
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
  float32x2_t *v4; // x20
  unsigned __int64 v5; // x21
  float *p_fields; // x22
  float v7; // s8
  float v8; // s9
  float v9; // s10
  float v10; // s1
  UnityEngine_Vector3_o v11; // 0:kr00_12.12
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
  if ( !mWidget
    || (mWidget = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *))mWidget->klass[1]._1.interopData)(
                                               mWidget,
                                               mWidget->klass[1]._1.klass)) == 0 )
  {
LABEL_11:
    sub_2213CDC(mWidget, method);
  }
  v4 = (float32x2_t *)mWidget;
  v5 = 0;
  p_fields = (float *)&mWidget[1].fields;
  do
  {
    if ( v5 >= v4[3].n64_u32[0] )
      goto LABEL_12;
    mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
    if ( !mWidget )
      goto LABEL_11;
    v7 = *(p_fields - 2);
    v8 = *(p_fields - 1);
    v9 = *p_fields;
    mWidget = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mWidget, 0);
    if ( !mWidget )
      goto LABEL_11;
    v12.fields.x = v7;
    v12.fields.y = v8;
    v12.fields.z = v9;
    v11 = UnityEngine_Transform__InverseTransformPoint((UnityEngine_Transform_o *)mWidget, v12, 0);
    if ( v5 >= v4[3].n64_u32[0] )
      goto LABEL_12;
    ++v5;
    *(UnityEngine_Vector3_o *)(p_fields - 2) = v11;
    p_fields += 3;
  }
  while ( v5 != 4 );
  if ( v4[3].n64_u32[0] <= 2 )
LABEL_12:
    sub_2213CE4(mWidget);
  v10 = v4[5].n64_f32[0] + (float)((float)(v4[8].n64_f32[0] - v4[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v4[4],
                                                    vmul_f32(vsub_f32(v4[7], v4[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v10;
}


// local variable allocation has failed, the output may be wrong!
void SummonResultComponent__setListByType(SummonResultComponent_o *this, int32_t type, const MethodInfo *method)
{
  UnityEngine_GameObject_o *closeInfo; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x21
  UILabel_o *formationBtnLabel; // x22
  UILabel_o *combineBtnLabel; // x22
  UILabel_o *sellBtnLabel; // x22
  struct SummonControl_o *summonCtrl; // x8
  struct SummonControl_o *v13; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int gachaType; // w23
  UILabel_o *summonBtnLabel; // x22
  Il2CppObject *v17; // x0
  __int64 v18; // x2
  UILabel_o *v19; // x22
  __int64 v20; // x2
  long double v21; // q0
  UserGameEntity_o *SelfUserGame; // x22
  long double v23; // q0
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  TblUserEntity_o *UserData; // x23
  __int64 v29; // x2
  GachaEntity_o *v30; // x22
  int friendPoint; // w24
  int32_t gachaId; // w23
  __int64 v33; // x2
  UILabel_o *v34; // x22
  Il2CppObject *v35; // x0
  __int64 v36; // x2
  UILabel_o *v37; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  int32_t v39; // w22
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  Il2CppObject *MasterData_object; // x23
  __int64 v45; // x2
  Il2CppObject *v46; // x24
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x2
  System_String_o *v50; // x22
  UILabel_o *v51; // x23
  Il2CppObject *v52; // x0
  int32_t AppendSummonState; // w0
  int v54; // w8
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  Il2CppObject *v58; // x22
  UILabel_o *v59; // x22
  Il2CppObject *v60; // x0
  __int64 v61; // x2
  Il2CppObject *Master_object; // x21
  UserItemEntity_o *v63; // x0
  __int64 v64; // x2
  UILabel_o *v65; // x21
  __int64 v66; // x1
  __int64 v67; // x2
  struct UILabel_o *v68; // x21
  System_String_o *v69; // x1
  int32_t monitor_high; // w9
  __int64 v71; // x2
  UILabel_o *v72; // x21
  __int64 v73; // x1
  __int64 v74; // x2
  UILabel_o *v75; // x21
  __int64 v76; // x2
  int gachaResourceNum; // w23
  int32_t v78; // w1
  int v79; // w22
  char v80; // w24
  UILabel_o *v81; // x23
  Il2CppObject *v82; // x0
  __int64 v83; // x2
  int v84; // w8
  int32_t *v85; // x8
  struct SummonControl_o *v86; // x8
  __int64 v87; // x2
  struct SummonControl_o *v88; // x8
  __int64 v89; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_GameObject_o *v93; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v95; // x0
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  UnityEngine_GameObject_o *blocker; // x21
  UnityEngine_GameObject_o *v103; // x0
  UnityEngine_Component_o *Parent; // x0
  __int64 v105; // x1
  __int64 v106; // x2
  SummonResultComponent_c *v107; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x9
  float m_YMin; // s8
  float m_XMin; // s12
  float m_Width; // s9
  float m_Height; // s10
  float OffsetX; // s0
  float v114; // s11
  float v115; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v117; // s14
  __int64 v118; // x2
  int v119; // w22
  int32_t maxDrawNum; // w23
  int gachaTime; // [xsp+Ch] [xbp-C4h] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v123; // [xsp+18h] [xbp-B8h] BYREF
  UserGachaEntity_o *entity; // [xsp+20h] [xbp-B0h] BYREF
  GachaAppendEntity_o *v125; // [xsp+28h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+38h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v127; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v128; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v131; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v133; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v137; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v138; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v139; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v140; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_596CB35 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GachaMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserGachaMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_2213A60(&FSUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SummonResultComponent_TypeInfo);
    sub_2213A60(&TutorialFlag_TypeInfo);
    sub_2213A60(&UserGachaMaster_TypeInfo);
    sub_2213A60(&StringLiteral_12939/*"SUMMON_APPEND_END"*/);
    sub_2213A60(&StringLiteral_12720/*"SHORT_SERVANT_FORMATION"*/);
    sub_2213A60(&StringLiteral_12972/*"SUMMON_FREE_10_BTN"*/);
    sub_2213A60(&StringLiteral_12725/*"SHORT_SERVANT_SELL"*/);
    sub_2213A60(&StringLiteral_12977/*"SUMMON_LIMIT_OVER_BTN"*/);
    sub_2213A60(&StringLiteral_13002/*"SUMMON_TICKET_END"*/);
    sub_2213A60(&StringLiteral_12710/*"SHORT_SERVANT_COMBINE"*/);
    sub_2213A60(&StringLiteral_3969/*"CONTINUE_SUMMON_BTN"*/);
    byte_596CB35 = 1;
  }
  *(_QWORD *)maxNum = 0;
  entity = 0;
  v125 = 0;
  appendEnt = 0;
  v123 = 0;
  if ( type == 1 )
  {
    closeInfo = this->fields.closeInfo;
    if ( !closeInfo )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive(closeInfo, 0, 0);
    closeInfo = this->fields.changeSceneBtnInfo;
    if ( !closeInfo )
      goto LABEL_219;
    UnityEngine_GameObject__SetActive(closeInfo, 1, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v7);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3969/*"CONTINUE_SUMMON_BTN"*/, 0);
    formationBtnLabel = this->fields.formationBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12720/*"SHORT_SERVANT_FORMATION"*/, 0);
    if ( !formationBtnLabel )
      goto LABEL_219;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12710/*"SHORT_SERVANT_COMBINE"*/, 0);
    if ( !combineBtnLabel )
      goto LABEL_219;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12725/*"SHORT_SERVANT_SELL"*/, 0);
    if ( !sellBtnLabel )
      goto LABEL_219;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_219;
    v128.fields.r = 1.0;
    v128.fields.g = 1.0;
    v128.fields.b = 1.0;
    v128.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v128, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_219;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_219;
    v129.fields.r = 1.0;
    v129.fields.g = 1.0;
    v129.fields.b = 1.0;
    v129.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v129, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_219;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_219;
    v130.fields.r = 1.0;
    v130.fields.g = 1.0;
    v130.fields.b = 1.0;
    v130.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v130, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_219;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_219;
    v131.fields.r = 1.0;
    v131.fields.g = 1.0;
    v131.fields.b = 1.0;
    v131.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v131, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_219;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_219;
    v132.fields.r = 1.0;
    v132.fields.g = 1.0;
    v132.fields.b = 1.0;
    v132.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v132, 0);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_219;
    closeInfo = (UnityEngine_GameObject_o *)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_219;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v13 = this->fields.summonCtrl;
    if ( !v13 )
      goto LABEL_219;
    gachaParamData = v13->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_219;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &gachaTime);
    closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v17, 0);
    if ( !summonBtnLabel )
      goto LABEL_219;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0);
    v19 = this->fields.summonBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
    if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type, v18);
    if ( !v19 )
      goto LABEL_219;
    UILabel__SetCondensedScale(
      v19,
      SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE,
      0,
      0);
    if ( gachaType > 4 )
    {
      if ( gachaType == 5 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&type, v20);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_219;
        v55 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( v55 )
        {
          v58 = v55;
          if ( LODWORD(v55[4].monitor) )
          {
            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v56, v57);
            closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
            if ( !closeInfo )
              goto LABEL_219;
            if ( UserGachaExtraCountMaster__getExtraCount(
                   (UserGachaExtraCountMaster_o *)closeInfo,
                   (int32_t)v58[4].monitor,
                   0) == 9 )
            {
              v59 = this->fields.summonBtnLabel;
              gachaTime = gachaParamData->fields.gachaTime + 1;
              v60 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &gachaTime);
              closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v60, 0);
              if ( !v59 )
                goto LABEL_219;
              UILabel__set_text(v59, (System_String_o *)closeInfo, 0);
            }
          }
        }
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v56, v57);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&type, v61);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&type, v61);
          closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        }
        if ( !Master_object )
          goto LABEL_219;
        v63 = UserItemMaster__GetEntity(
                (UserItemMaster_o *)Master_object,
                *(_QWORD *)(closeInfo[7].fields.m_CachedPtr + 64),
                gachaParamData->fields.ticketItemId,
                0);
        if ( !v63 || v63->fields.num <= 0 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
          this->fields.isLimitOver = 1;
          if ( !closeInfo )
            goto LABEL_219;
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0);
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
          if ( !closeInfo )
            goto LABEL_219;
          v133.fields.a = 1.0;
          v133.fields.r = 0.35547;
          v133.fields.g = 0.35547;
          v133.fields.b = 0.35547;
          UIWidget__set_color((UIWidget_o *)closeInfo, v133, 0);
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
          if ( !closeInfo )
            goto LABEL_219;
          v134.fields.r = 0.5;
          v134.fields.g = 0.5;
          v134.fields.b = 0.5;
          v134.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)closeInfo, v134, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v65 = this->fields.summonBtnLabel;
          if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type, v64);
          if ( !v65 )
            goto LABEL_219;
          UILabel__SetCondensedScale(
            v65,
            SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
            0,
            0);
          v68 = this->fields.summonBtnLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v66, v67);
          closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13002/*"SUMMON_TICKET_END"*/, 0);
          if ( !v68 )
            goto LABEL_219;
          v69 = (System_String_o *)closeInfo;
          closeInfo = (UnityEngine_GameObject_o *)v68;
          goto LABEL_142;
        }
        goto LABEL_143;
      }
      if ( gachaType != 7 )
        goto LABEL_181;
    }
    else if ( gachaType != 1 )
    {
      if ( gachaType == 3 )
      {
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        v24 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
          v24 = sub_224B908(v23);
        v25 = *(_QWORD *)(*(_QWORD *)(v24 + 192) + 16LL);
        if ( (*(_WORD *)(v25 + 309) & 1) == 0 )
          v25 = sub_224B908(v23);
        closeInfo = **(UnityEngine_GameObject_o ***)(v25 + 184);
        if ( !closeInfo )
          goto LABEL_219;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame || !closeInfo )
          goto LABEL_219;
        UserData = TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26, v27);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_219;
        closeInfo = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                                                  gachaParamData->fields.gachaId,
                                                  (const MethodInfo_3F10B30 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !UserData )
          goto LABEL_219;
        v30 = (GachaEntity_o *)closeInfo;
        friendPoint = UserData->fields.friendPoint;
        gachaId = gachaParamData->fields.gachaId;
        if ( !*(&UserGachaMaster_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, *(_QWORD *)&type, v29);
        if ( UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(gachaId, &maxNum[1], maxNum, 0)
          || maxNum[1] >= 1 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_219;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0);
          v75 = this->fields.summonBtnLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73, v74);
          closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12972/*"SUMMON_FREE_10_BTN"*/, 0);
          if ( !v75 )
            goto LABEL_219;
          UILabel__set_text(v75, (System_String_o *)closeInfo, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v37 = this->fields.summonBtnLabel;
          if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type, v76);
          if ( !v37 )
            goto LABEL_219;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE2;
          goto LABEL_180;
        }
        if ( gachaParamData->fields.gachaTime == 1 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_219;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, 1, 3, 0);
          v34 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &gachaTime);
          closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v35, 0);
          if ( !v34 )
            goto LABEL_219;
          UILabel__set_text(v34, (System_String_o *)closeInfo, 0);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v37 = this->fields.summonBtnLabel;
          if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type, v36);
          if ( !v37 )
            goto LABEL_219;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
LABEL_180:
          UILabel__SetCondensedScale(v37, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0, 0);
          goto LABEL_181;
        }
        if ( friendPoint <= 1999 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_219;
          if ( friendPoint < 400 )
            v78 = 1;
          else
            v78 = friendPoint / 200;
        }
        else
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&type, v33);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_219;
          closeInfo = (UnityEngine_GameObject_o *)GachaAppendMaster__TryGetHundredSummon(
                                                    (GachaAppendMaster_o *)closeInfo,
                                                    &v125,
                                                    gachaParamData->fields.gachaId,
                                                    0);
          if ( ((unsigned __int8)closeInfo & 1) == 0 )
            goto LABEL_163;
          if ( !v30 )
            goto LABEL_219;
          gachaResourceNum = gachaParamData->fields.gachaResourceNum;
          if ( gachaResourceNum > 10 * GachaEntity__getPrice(v30, 0) || !gachaParamData->fields.gachaResourceNum )
          {
            closeInfo = (UnityEngine_GameObject_o *)GachaEntity__getPrice(v30, 0);
            if ( !v125 )
              goto LABEL_219;
            v119 = (int)closeInfo;
            maxDrawNum = v125->fields.maxDrawNum;
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&type, v118);
            v79 = System_Math__Min_77153596(friendPoint / v119, maxDrawNum, 0);
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
            if ( v79 >= 1 )
            {
              if ( !closeInfo )
                goto LABEL_219;
              SummonControl__SetGachaTime((SummonControl_o *)closeInfo, v79, 3, 0);
              v80 = 1;
              goto LABEL_170;
            }
            if ( !closeInfo )
              goto LABEL_219;
          }
          else
          {
LABEL_163:
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_219;
          }
          v78 = gachaParamData->fields.gachaTime;
        }
        SummonControl__SetGachaTime((SummonControl_o *)closeInfo, v78, 3, 0);
        v79 = gachaParamData->fields.gachaTime;
        v80 = 0;
LABEL_170:
        v81 = this->fields.summonBtnLabel;
        gachaTime = v79;
        v82 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &gachaTime);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v82, 0);
        if ( !v81 )
          goto LABEL_219;
        UILabel__set_text(v81, (System_String_o *)closeInfo, 0);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v37 = this->fields.summonBtnLabel;
        v84 = *(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1);
        if ( (v80 & 1) != 0 )
        {
          if ( !v84 )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type, v83);
            closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          v85 = (int32_t *)(closeInfo[7].fields.m_CachedPtr + 24);
        }
        else
        {
          if ( !v84 )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type, v83);
            closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          }
          v85 = (int32_t *)(closeInfo[7].fields.m_CachedPtr + 20);
        }
        if ( !v37 )
          goto LABEL_219;
        SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = *v85;
        goto LABEL_180;
      }
LABEL_181:
      v86 = this->fields.summonCtrl;
      if ( v86 )
      {
        closeInfo = v86->fields.currentResourceInfo;
        if ( closeInfo )
        {
          UnityEngine_GameObject__SetActive(closeInfo, 1, 0);
          v88 = this->fields.summonCtrl;
          if ( v88 )
          {
            v88->fields.isResult = 1;
            if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, *(_QWORD *)&type, v87);
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
                                                            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                  if ( closeInfo )
                  {
                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
                    if ( closeInfo )
                    {
                      v91 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                      closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v91, 0);
                      if ( closeInfo )
                      {
                        closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)closeInfo,
                                                                  (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                        if ( closeInfo )
                        {
                          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
                          if ( closeInfo )
                          {
                            v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                            closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v92, 0);
                            if ( closeInfo )
                            {
                              closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                        (UnityEngine_Component_o *)closeInfo,
                                                                        (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                              if ( closeInfo )
                              {
                                UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                                closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
                                if ( closeInfo )
                                {
                                  v93 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0);
                                  closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v93, 0);
                                  if ( closeInfo )
                                  {
                                    closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                              (UnityEngine_Component_o *)closeInfo,
                                                                              (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                    if ( closeInfo )
                                    {
                                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0);
                                      goto LABEL_211;
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
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type, v89);
              v95 = UnityEngine_Object__Instantiate_object_(
                      touchBlocker,
                      (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
              this->fields.blocker = (struct UnityEngine_GameObject_o *)v95;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.blocker,
                (int32_t)v95,
                v96,
                v97,
                v98,
                v99,
                v100,
                v101);
              blocker = this->fields.blocker;
              v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v103, 0);
              GameObjectExtensions__SetParent(blocker, Parent, 0);
              v107 = SummonResultComponent_TypeInfo;
              if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, v105, v106);
                v107 = SummonResultComponent_TypeInfo;
              }
              static_fields = v107->static_fields;
              m_XMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_XMin;
              m_YMin = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_YMin;
              m_Width = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Width;
              m_Height = static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height;
              if ( !*(&FSUtility_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v105, v106);
              OffsetX = FSUtility__GetOffsetX(68.0, 2, 0);
              closeInfo = this->fields.blocker;
              if ( closeInfo )
              {
                v114 = OffsetX;
                closeInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          closeInfo,
                                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                if ( closeInfo )
                {
                  v115 = m_XMin - v114;
                  v139.fields.m_YMin = m_YMin;
                  v139.fields.m_Width = m_Width;
                  v139.fields.m_Height = m_Height;
                  v139.fields.m_XMin = v115;
                  MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v139, 30, 0);
                  closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                  if ( closeInfo )
                  {
                    TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0);
                    v117 = FSUtility__GetOffsetX(68.0, 2, 0);
                    closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      v127.fields.x = TutorialBackArrowPos.fields.x - v117;
                      v127.fields.y = TutorialBackArrowPos.fields.y;
                      v140.fields.m_XMin = v115;
                      v140.fields.m_YMin = m_YMin;
                      v140.fields.m_Width = m_Width;
                      v140.fields.m_Height = m_Height;
                      CommonUI__OpenTutorialArrowMark(
                        (CommonUI_o *)closeInfo,
                        v127,
                        SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                        v140,
                        0,
                        0);
                      goto LABEL_211;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_219:
      sub_2213CDC(closeInfo, *(_QWORD *)&type);
    }
    v39 = gachaParamData->fields.gachaId;
    v40 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v40 + 309) & 1) == 0 )
      v40 = sub_224B908(v21);
    v41 = *(_QWORD *)(*(_QWORD *)(v40 + 192) + 16LL);
    if ( (*(_WORD *)(v41 + 309) & 1) == 0 )
      v41 = sub_224B908(v21);
    closeInfo = **(UnityEngine_GameObject_o ***)(v41 + 184);
    if ( !closeInfo )
      goto LABEL_219;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)closeInfo,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42, v43);
    v46 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserGachaMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&type, v45);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&type, v45);
      closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
    }
    if ( !v46 )
      goto LABEL_219;
    closeInfo = (UnityEngine_GameObject_o *)UserGachaMaster__TryGetEntity(
                                              (UserGachaMaster_o *)v46,
                                              &entity,
                                              *(_QWORD *)(closeInfo[7].fields.m_CachedPtr + 64),
                                              v39,
                                              0);
    if ( !MasterData_object )
      goto LABEL_219;
    DataMasterBase_object__object__int___TryGetEntity(
      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
      &v123,
      v39,
      (const MethodInfo_3F10B80 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v47, v48);
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12977/*"SUMMON_LIMIT_OVER_BTN"*/, 0);
    if ( !v123 )
      goto LABEL_219;
    v50 = (System_String_o *)closeInfo;
    if ( LODWORD(v123[4].monitor) )
    {
      closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !closeInfo )
        goto LABEL_219;
      closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)closeInfo,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
      if ( !v123 || !closeInfo )
        goto LABEL_219;
      closeInfo = (UnityEngine_GameObject_o *)UserGachaExtraCountMaster__getExtraCount(
                                                (UserGachaExtraCountMaster_o *)closeInfo,
                                                (int32_t)v123[4].monitor,
                                                0);
      if ( gachaParamData->fields.gachaTime == 1 && (_DWORD)closeInfo == 9 && !gachaParamData->fields.isAppendSummon )
      {
        v51 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &gachaTime);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v8, v52, 0);
        if ( !v51 )
          goto LABEL_219;
        UILabel__set_text(v51, (System_String_o *)closeInfo, 0);
      }
    }
    if ( gachaParamData->fields.isAppendSummon )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&type, v49);
      closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GachaAppendMaster___);
      if ( !closeInfo )
        goto LABEL_219;
      AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                            (GachaAppendMaster_o *)closeInfo,
                            (GachaEntity_o *)v123,
                            &appendEnt,
                            0);
      if ( AppendSummonState != 2 )
      {
        if ( AppendSummonState == 1 )
        {
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type, v49);
          v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12939/*"SUMMON_APPEND_END"*/, 0);
        }
        v54 = 1;
        goto LABEL_129;
      }
      goto LABEL_128;
    }
    v54 = (int)entity;
    if ( entity )
    {
      if ( !v123 )
        goto LABEL_219;
      monitor_high = HIDWORD(v123[5].monitor);
      if ( monitor_high < 1 )
      {
LABEL_128:
        v54 = 0;
        goto LABEL_129;
      }
      v54 = entity->fields.num >= monitor_high;
    }
LABEL_129:
    if ( this->fields.isOneTimeFreeSummon )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type, v49);
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_12939/*"SUMMON_APPEND_END"*/, 0);
      goto LABEL_134;
    }
    if ( v54 )
    {
LABEL_134:
      closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
      this->fields.isLimitOver = 1;
      if ( !closeInfo )
        goto LABEL_219;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0);
      closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
      if ( !closeInfo )
        goto LABEL_219;
      v135.fields.a = 1.0;
      v135.fields.r = 0.35547;
      v135.fields.g = 0.35547;
      v135.fields.b = 0.35547;
      UIWidget__set_color((UIWidget_o *)closeInfo, v135, 0);
      closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
      if ( !closeInfo )
        goto LABEL_219;
      v136.fields.r = 0.5;
      v136.fields.g = 0.5;
      v136.fields.b = 0.5;
      v136.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)closeInfo, v136, 0);
      closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
      v72 = this->fields.summonBtnLabel;
      if ( !*(&SummonResultComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo, *(_QWORD *)&type, v71);
      if ( !v72 )
        goto LABEL_219;
      UILabel__SetCondensedScale(
        v72,
        SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
        0,
        0);
      closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
      if ( !closeInfo )
        goto LABEL_219;
      v69 = v50;
LABEL_142:
      UILabel__set_text((UILabel_o *)closeInfo, v69, 0);
      goto LABEL_181;
    }
LABEL_143:
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_219;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_219;
    v137.fields.r = 1.0;
    v137.fields.g = 1.0;
    v137.fields.b = 1.0;
    v137.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v137, 0);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
    if ( !closeInfo )
      goto LABEL_219;
    v138.fields.r = 1.0;
    v138.fields.g = 1.0;
    v138.fields.b = 1.0;
    v138.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v138, 0);
    goto LABEL_181;
  }
LABEL_211:
  this->fields.dispType = type;
  SummonResultComponent__setSvtNum(this, *(const MethodInfo **)&type);
}


void SummonResultComponent__setSvtNum(SummonResultComponent_o *this, const MethodInfo *method)
{
  DataManager_o *SelfUserGame; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int monitor; // w8
  BalanceConfig_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t Count; // w8
  UILabel_o *svtTitleLb; // x20
  UILabel_o *svtNumLb; // x20
  UILabel_o *svtMaxLb; // x20
  UILabel_o *svtEqTitleLb; // x20
  UILabel_o *svtEqNumLb; // x20
  UILabel_o *svtEqMaxLb; // x20
  UILabel_o *CcNumLb; // x20
  UILabel_o *CcMaxLb; // x19
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t servantSum[2]; // [xsp+10h] [xbp-30h] BYREF
  __int64 v21; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596CB3B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_7495/*"HAVE_SVT_NUM_TITLE"*/);
    sub_2213A60(&StringLiteral_7494/*"HAVE_SVTEQ_NUM_TITLE"*/);
    byte_596CB3B = 1;
  }
  *(_QWORD *)servantSum = 0;
  v21 = 0;
  *(_QWORD *)servantEquipSum = 0;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_23;
  monitor = (int)SelfUserGame[1].monitor;
  LODWORD(v21) = HIDWORD(SelfUserGame[1].monitor);
  HIDWORD(v21) = monitor;
  if ( !byte_596A5C7 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    byte_596A5C7 = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v5);
    v7 = BalanceConfig_TypeInfo;
  }
  servantSum[1] = v7->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, servantSum, &servantEquipSum[1], 1, 0);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  Count = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0);
  svtTitleLb = this->fields.svtTitleLb;
  servantEquipSum[0] = Count;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7495/*"HAVE_SVT_NUM_TITLE"*/, 0);
  if ( !svtTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtTitleLb, (System_String_o *)SelfUserGame, 0);
  svtNumLb = this->fields.svtNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)servantSum, 0);
  if ( !svtNumLb )
    goto LABEL_23;
  UILabel__set_text(svtNumLb, (System_String_o *)SelfUserGame, 0);
  svtMaxLb = this->fields.svtMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&v21 + 4, 0);
  if ( !svtMaxLb )
    goto LABEL_23;
  UILabel__set_text(svtMaxLb, (System_String_o *)SelfUserGame, 0);
  svtEqTitleLb = this->fields.svtEqTitleLb;
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7494/*"HAVE_SVTEQ_NUM_TITLE"*/, 0);
  if ( !svtEqTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtEqTitleLb, (System_String_o *)SelfUserGame, 0);
  svtEqNumLb = this->fields.svtEqNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantEquipSum[1], 0);
  if ( !svtEqNumLb )
    goto LABEL_23;
  UILabel__set_text(svtEqNumLb, (System_String_o *)SelfUserGame, 0);
  svtEqMaxLb = this->fields.svtEqMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&v21, 0);
  if ( !svtEqMaxLb
    || (UILabel__set_text(svtEqMaxLb, (System_String_o *)SelfUserGame, 0),
        CcNumLb = this->fields.CcNumLb,
        SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)servantEquipSum, 0),
        !CcNumLb)
    || (UILabel__set_text(CcNumLb, (System_String_o *)SelfUserGame, 0),
        CcMaxLb = this->fields.CcMaxLb,
        SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantSum[1], 0),
        !CcMaxLb) )
  {
LABEL_23:
    sub_2213CDC(SelfUserGame, v4);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0);
}


void SummonResultComponent__showResCcDetail(SummonResultComponent_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  AvalonSceneManager_c *v17; // x8
  CommonUI_o *v18; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_596CB3D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonResultComponent___c__DisplayClass79_0__showResCcDetail_b__0__);
    sub_2213A60(&SummonResultComponent___c__DisplayClass79_0_TypeInfo);
    byte_596CB3D = 1;
  }
  v5 = sub_2213CCC(SummonResultComponent___c__DisplayClass79_0_TypeInfo);
  SummonResultComponent___c__DisplayClass79_0___ctor((SummonResultComponent___c__DisplayClass79_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  v18 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15, v16);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass79_0__showResCcDetail_b__0__,
    0);
  if ( !v18 )
LABEL_8:
    sub_2213CDC(v6, v7);
  CommonUI__maskFadeout(v18, 1, DEFAULT_FADE_TIME, v20, 0);
}


void SummonResultComponent__showResSvtDetail(SummonResultComponent_o *this, int64_t usrSvtId, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  AvalonSceneManager_c *v17; // x8
  CommonUI_o *v18; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21

  if ( (byte_596CB3C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonResultComponent___c__DisplayClass78_0__showResSvtDetail_b__0__);
    sub_2213A60(&SummonResultComponent___c__DisplayClass78_0_TypeInfo);
    byte_596CB3C = 1;
  }
  v5 = sub_2213CCC(SummonResultComponent___c__DisplayClass78_0_TypeInfo);
  SummonResultComponent___c__DisplayClass78_0___ctor((SummonResultComponent___c__DisplayClass78_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 24) = this;
  *(_QWORD *)(v5 + 16) = usrSvtId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  v18 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v15, v16);
    v17 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_SummonResultComponent___c__DisplayClass78_0__showResSvtDetail_b__0__,
    0);
  if ( !v18 )
LABEL_8:
    sub_2213CDC(v6, v7);
  CommonUI__maskFadeout(v18, 1, DEFAULT_FADE_TIME, v20, 0);
}


void SummonResultComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CBC9 & 1) == 0 )
  {
    sub_2213A60(&SummonResultComponent___c_TypeInfo);
    byte_596CBC9 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SummonResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SummonResultComponent___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, elm);
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
  __int64 v10; // x2
  CommonUI_o *v11; // x19

  if ( (byte_596CBCA & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SummonResultComponent_DialogCallBack__);
    byte_596CBCA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v6 = (CommonUI_o *)Instance;
  v7 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v7, _4__this, Method_SummonResultComponent_DialogCallBack__, 0);
  if ( !v6 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_37382644(v6, 8, usrSvtId, v7, 0, 0);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)v8;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v9, v10);
  if ( !v11 )
LABEL_8:
    sub_2213CDC(v8, v9);
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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
  __int64 v10; // x2
  CommonUI_o *v11; // x19

  if ( (byte_596CBCB & 1) == 0 )
  {
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_UserCommandCodeMaster___);
    sub_2213A60(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SummonResultComponent_DialogCallBack__);
    byte_596CBCB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v8 = (CommonUI_o *)v6;
  v9 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v9, _4__this, Method_SummonResultComponent_DialogCallBack__, 0);
  if ( !v8 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_37385832(v8, 0, (UserCommandCodeEntity_o *)Entity, v9, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v10);
  if ( !v11 )
LABEL_10:
    sub_2213CDC(Instance, v4);
  CommonUI__maskFadein(v11, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
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