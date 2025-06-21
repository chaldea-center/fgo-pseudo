void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v3; // x8

  if ( (byte_4B18B0B & 1) == 0 )
  {
    sub_1BCAFF8(&SummonResultComponent_TypeInfo, v1);
    byte_4B18B0B = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_BE1C50;
  v3 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v3->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_BE25C0;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = xmmword_BE1EB0;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = xmmword_BE1840;
  *(_OWORD *)&v3->SMALL_FONT_SIZE = xmmword_BE26A0;
}


void __fastcall SummonResultComponent___ctor(SummonResultComponent_o *this, const MethodInfo *method)
{
  this->fields.dispType = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonResultComponent__CheckLimitOver(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PlayMakerFSM_o *fsm; // x0
  _QWORD *v6; // x0
  int32_t v7; // w19
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4B18B08 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SummonResultComponent_CheckLimitOver__, method);
    sub_1BCAFF8(&StringLiteral_5415/*"END_SUMMON"*/, v3);
    sub_1BCAFF8(&StringLiteral_8215/*"LIMIT_OVER"*/, v4);
    byte_4B18B08 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCB254(0LL, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8215/*"LIMIT_OVER"*/, 0LL);
    v6 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCB010(Method_SummonResultComponent_CheckLimitOver__);
    v7 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5415/*"END_SUMMON"*/, 0LL);
    v6 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCB010(Method_SummonResultComponent_CheckLimitOver__);
    v7 = 0;
  }
  v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, v7, 0, 0LL);
}


void __fastcall SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  CGThumbnailListItem_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B18B00 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18B00 = 1;
  }
  blocker = (UnityEngine_Object_o *)this->fields.blocker;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(blocker, 0LL, 0LL) )
  {
    p_blocker = (CGThumbnailListItem_o *)&this->fields.blocker;
    klass = (UnityEngine_Object_o *)p_blocker->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_1BCAF9C(p_blocker, 0, v6, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__DialogCallBack(
        SummonResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4B18B05 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, flg);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1BCAFF8(&Method_SummonResultComponent__DialogCallBack_b__79_0__, v6);
    byte_4B18B05 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__79_0__, 0LL);
  if ( !v9 )
    sub_1BCB254(v12, v13);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0LL);
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
    sub_1BCB254(gameObject, v6);
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
  __int64 v26; // x1
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x8
  __int64 v29; // x2
  bool v30; // zf
  System_Collections_Generic_List_object__o *v31; // x20
  struct ItemIconComponent_array *extraGiftIconComponents; // x8
  UILabel_o *extraGiftMsg2Lb; // x20
  struct ItemIconComponent_array *v34; // x8
  ItemIconComponent_o *v35; // x8
  UIWidget_o *iconSprite; // x23
  struct ItemIconComponent_array *v37; // x8
  ItemIconComponent_o *v38; // x8
  struct ItemIconComponent_array *v39; // x8
  struct ItemIconComponent_array *v40; // x8
  ItemIconComponent_o *v41; // x23
  int32_t summonBeforeMana; // w26
  BalanceConfig_c *v43; // x0
  int32_t ManaMax; // w23
  int32_t v45; // w26
  UnityEngine_GameObject_o *v46; // x0
  SummonResultComponent_c *v47; // x8
  UnityEngine_GameObject_o *v48; // x21
  UILabel_o *v49; // x21
  UILabel_o *v50; // x21
  System_String_o *v51; // x22
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int m_CancellationTokenSource_high; // w8
  Il2CppObject *v56; // x0
  UILabel_o *v57; // x20
  const MethodInfo *v58; // x1
  struct ItemIconComponent_array *v59; // x8
  __int64 v60; // x24
  int max_length; // w9
  unsigned int v62; // w21
  UIWidget_o *backImg; // x22
  struct ItemIconComponent_array *v64; // x8
  __int64 v65; // x8
  struct ItemIconComponent_array *v66; // x8
  ItemIconComponent_o *v67; // x22
  struct ItemIconComponent_array *v68; // x8
  bool v69; // w1
  struct ItemIconComponent_array *v70; // x8
  UnityEngine_GameObject_o *v71; // x0
  SummonResultComponent_c *v72; // x8
  UnityEngine_GameObject_o *v73; // x22
  struct SummonResultComponent_StaticFields *v74; // x8
  __int64 v75; // x9
  UILabel_o *v76; // x21
  UILabel_o *v77; // x21
  System_String_o *v78; // x22
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  int *v82; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  SummonResultComponent_c *v84; // x8
  int32_t size; // w21
  UnityEngine_GameObject_o *v86; // x20
  struct SummonResultComponent_StaticFields *static_fields; // x8
  __int64 v88; // x9
  UILabel_o *extraGiftTitleLb; // x20
  System_String_o *v90; // x21
  long double inited; // q0
  _QWORD *v92; // x22
  __int64 v93; // x8
  __int64 v94; // x0
  __int64 v95; // x0
  System_String_o *v96; // x0
  long double v97; // q0
  _QWORD *v98; // x22
  System_String_o *v99; // x21
  __int64 v100; // x8
  __int64 v101; // x0
  __int64 v102; // x0
  const MethodInfo *v103; // x1
  UnityEngine_GameObject_o *v104; // x0
  SummonResultComponent_c *v105; // x8
  UnityEngine_GameObject_o *v106; // x22
  struct SummonResultComponent_StaticFields *v107; // x8
  __int64 v108; // x9
  UILabel_o *v109; // x21
  System_String_o *v110; // x22
  long double v111; // q0
  _QWORD *v112; // x23
  __int64 v113; // x8
  __int64 v114; // x0
  __int64 v115; // x0
  Il2CppObject *v116; // x0
  int v117; // [xsp+Ch] [xbp-54h] BYREF
  int v118; // [xsp+18h] [xbp-48h] BYREF
  int v119; // [xsp+1Ch] [xbp-44h] BYREF

  v10 = this;
  if ( (byte_4B18AFD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_object___, giftIds);
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GiftMaster___, v12);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&int_TypeInfo, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v16);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v17);
    sub_1BCAFF8(&SummonResultComponent_TypeInfo, v18);
    sub_1BCAFF8(&StringLiteral_12322/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v19);
    sub_1BCAFF8(&StringLiteral_12324/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, v20);
    sub_1BCAFF8(&StringLiteral_12326/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v21);
    sub_1BCAFF8(&StringLiteral_12338/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, v22);
    sub_1BCAFF8(&StringLiteral_12339/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v23);
    sub_1BCAFF8(&StringLiteral_12323/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, v24);
    sub_1BCAFF8(&StringLiteral_12337/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, v25);
    this = (SummonResultComponent_o *)sub_1BCAFF8(&StringLiteral_12325/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, v26);
    byte_4B18AFD = 1;
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
    this = (SummonResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !this )
      goto LABEL_156;
    this = (SummonResultComponent_o *)GiftMaster__GetGiftListByIds((GiftMaster_o *)this, giftIds, 0LL);
    v30 = giftBonusType == 2;
    v31 = (System_Collections_Generic_List_object__o *)this;
    if ( v30 )
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
        v59 = v10->fields.extraGiftIconComponents;
        if ( !v59 )
          goto LABEL_156;
        v60 = 4LL;
        while ( 1 )
        {
          max_length = v59->max_length;
          v62 = v60 - 4;
          if ( (int)v60 - 4 >= max_length )
            break;
          if ( v62 >= max_length )
            goto LABEL_157;
          this = (SummonResultComponent_o *)*((_QWORD *)&v59->obj.klass + v60);
          if ( !this )
            goto LABEL_156;
          if ( (signed int)v62 >= v31->fields._size )
          {
            ItemIconComponent__Clear((ItemIconComponent_o *)this, 0LL);
            v70 = v10->fields.extraGiftIconComponents;
            if ( !v70 )
              goto LABEL_156;
            if ( v62 >= v70->max_length )
              goto LABEL_157;
            this = (SummonResultComponent_o *)*((_QWORD *)&v70->obj.klass + v60);
            if ( !this )
              goto LABEL_156;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              goto LABEL_156;
            v69 = 0;
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
            v64 = v10->fields.extraGiftIconComponents;
            if ( !v64 )
              goto LABEL_156;
            if ( v62 >= v64->max_length )
              goto LABEL_157;
            v65 = *((_QWORD *)&v64->obj.klass + v60);
            if ( !v65 )
              goto LABEL_156;
            this = *(SummonResultComponent_o **)(v65 + 40);
            if ( !this )
              goto LABEL_156;
            UIWidget__set_height(
              (UIWidget_o *)this,
              SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL_SPECIAL_BONUS,
              0LL);
            v66 = v10->fields.extraGiftIconComponents;
            if ( !v66 )
              goto LABEL_156;
            if ( v62 >= v66->max_length )
              goto LABEL_157;
            v67 = (ItemIconComponent_o *)*((_QWORD *)&v66->obj.klass + v60);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v31,
                                                v62,
                                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( !v67 )
              goto LABEL_156;
            ItemIconComponent__SetGift(v67, (GiftEntity_o *)this, -1, 0, 0LL);
            v68 = v10->fields.extraGiftIconComponents;
            if ( !v68 )
              goto LABEL_156;
            if ( v62 >= v68->max_length )
              goto LABEL_157;
            this = (SummonResultComponent_o *)*((_QWORD *)&v68->obj.klass + v60);
            if ( !this )
              goto LABEL_156;
            this = (SummonResultComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( !this )
              goto LABEL_156;
            v69 = 1;
          }
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v69, 0LL);
          v59 = v10->fields.extraGiftIconComponents;
          ++v60;
          if ( !v59 )
            goto LABEL_156;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( !this )
          goto LABEL_156;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        v84 = SummonResultComponent_TypeInfo;
        size = v31->fields._size;
        v86 = gameObject;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v84 = SummonResultComponent_TypeInfo;
        }
        static_fields = v84->static_fields;
        v88 = 48LL;
        if ( size == 1 )
          v88 = 44LL;
        GameObjectExtensions__SetLocalPositionX(
          v86,
          (float)*(int *)((char *)&static_fields->TUTORIAL_BACK_ARROW_WAY + v88),
          0LL);
        extraGiftTitleLb = v10->fields.extraGiftTitleLb;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v90 = LocalizationManager__Get((System_String_o *)StringLiteral_12338/*"SUMMON_EXTRA_ITEMS_MULTIPLE_TITLE"*/, 0LL);
        v92 = Method_System_Array_Empty_object___;
        v93 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v93 )
        {
          sub_1C1B4B8(Method_System_Array_Empty_object___);
          v93 = v92[7];
        }
        v94 = *(_QWORD *)(v93 + 16);
        if ( (*(_BYTE *)(v94 + 309) & 1) == 0 )
          v94 = sub_1C1B45C(inited);
        if ( !*(_DWORD *)(v94 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v94);
        v95 = *(_QWORD *)(v92[7] + 16LL);
        if ( (*(_BYTE *)(v95 + 309) & 1) == 0 )
          v95 = sub_1C1B45C(inited);
        this = (SummonResultComponent_o *)System_String__Format_62491852(
                                            v90,
                                            **(System_Object_array ***)(v95 + 184),
                                            0LL);
        if ( !extraGiftTitleLb )
          goto LABEL_156;
        UILabel__set_text(extraGiftTitleLb, (System_String_o *)this, 0LL);
        extraGiftMsg2Lb = v10->fields.extraGiftMsg2Lb;
        v96 = LocalizationManager__Get((System_String_o *)StringLiteral_12337/*"SUMMON_EXTRA_ITEMS_MULTIPLE_MESSAGE_1"*/, 0LL);
        v98 = Method_System_Array_Empty_object___;
        v99 = v96;
        v100 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v100 )
        {
          sub_1C1B4B8(Method_System_Array_Empty_object___);
          v100 = v98[7];
        }
        v101 = *(_QWORD *)(v100 + 16);
        if ( (*(_BYTE *)(v101 + 309) & 1) == 0 )
          v101 = sub_1C1B45C(v97);
        if ( !*(_DWORD *)(v101 + 224) )
          v97 = j_il2cpp_runtime_class_init_0(v101);
        v102 = *(_QWORD *)(v98[7] + 16LL);
        if ( (*(_BYTE *)(v102 + 309) & 1) == 0 )
          v102 = sub_1C1B45C(v97);
        this = (SummonResultComponent_o *)System_String__Format_62491852(
                                            v99,
                                            **(System_Object_array ***)(v102 + 184),
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
        this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12339/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
        if ( !extraGiftMsg2Lb )
          goto LABEL_156;
      }
      UILabel__set_text(extraGiftMsg2Lb, (System_String_o *)this, 0LL);
      SummonResultComponent__SetSpecialGiftPosition(v10, v103);
      return;
    }
    v34 = v10->fields.extraGiftIconComponents;
    if ( !v34 )
      goto LABEL_156;
    if ( !v34->max_length )
      goto LABEL_157;
    v35 = v34->m_Items[0];
    if ( !v35 )
      goto LABEL_156;
    iconSprite = (UIWidget_o *)v35->fields.iconSprite;
    this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !iconSprite )
      goto LABEL_156;
    UIWidget__set_width(iconSprite, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0LL);
    v37 = v10->fields.extraGiftIconComponents;
    if ( !v37 )
      goto LABEL_156;
    if ( !v37->max_length )
      goto LABEL_157;
    v38 = v37->m_Items[0];
    if ( !v38 )
      goto LABEL_156;
    this = (SummonResultComponent_o *)v38->fields.iconSprite;
    if ( !this )
      goto LABEL_156;
    UIWidget__set_height((UIWidget_o *)this, SummonResultComponent_TypeInfo->static_fields->SPRITE_SIZE_NORMAL, 0LL);
    v39 = v10->fields.extraGiftIconComponents;
    if ( !v39 )
      goto LABEL_156;
    if ( !v39->max_length )
      goto LABEL_157;
    this = (SummonResultComponent_o *)v39->m_Items[0];
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
    v40 = v10->fields.extraGiftIconComponents;
    if ( !v40 )
      goto LABEL_156;
    if ( !v40->max_length )
LABEL_157:
      sub_1BCB25C(this, giftIds, v29);
    if ( !v31 )
      goto LABEL_156;
    v41 = v40->m_Items[0];
    this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        v31,
                                        0,
                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    if ( !v41 )
      goto LABEL_156;
    ItemIconComponent__SetGift(v41, (GiftEntity_o *)this, -1, 0, 0LL);
    if ( giftResultType == 3 )
    {
      summonBeforeMana = v10->fields.summonBeforeMana;
      v43 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v43 = BalanceConfig_TypeInfo;
      }
      ManaMax = v43->static_fields->ManaMax;
      if ( summonBeforeMana < ManaMax )
      {
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
        }
        this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
        if ( this )
        {
          v45 = v10->fields.summonBeforeMana;
          v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          v47 = SummonResultComponent_TypeInfo;
          v48 = v46;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            v47 = SummonResultComponent_TypeInfo;
          }
          GameObjectExtensions__SetLocalPositionX(
            v48,
            (float)v47->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME,
            0LL);
          v49 = v10->fields.extraGiftTitleLb;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12326/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
          if ( v49 )
          {
            UILabel__set_text(v49, (System_String_o *)this, 0LL);
            v50 = v10->fields.extraGiftMsg2Lb;
            v51 = LocalizationManager__Get((System_String_o *)StringLiteral_12324/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
            this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                v31,
                                                0,
                                                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
            if ( this )
            {
              m_CancellationTokenSource_high = ManaMax - v45;
              if ( SHIDWORD(this->fields.m_CancellationTokenSource) <= ManaMax - v45 )
              {
                this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                    v31,
                                                    0,
                                                    (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
                if ( !this )
                  goto LABEL_156;
                m_CancellationTokenSource_high = HIDWORD(this->fields.m_CancellationTokenSource);
              }
              v119 = m_CancellationTokenSource_high;
              v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119, v52, v53, v54);
              this = (SummonResultComponent_o *)System_String__Format(v51, v56, 0LL);
              if ( v50 )
              {
                UILabel__set_text(v50, (System_String_o *)this, 0LL);
                this = (SummonResultComponent_o *)SummonResultComponent_TypeInfo;
                v57 = v10->fields.extraGiftTitleLb;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                if ( v57 )
                {
                  UILabel__set_fontSize(v57, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0LL);
                  this = (SummonResultComponent_o *)v10->fields.extraGiftMsg2Lb;
                  if ( this )
                  {
                    UILabel__set_fontSize(
                      (UILabel_o *)this,
                      SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE,
                      0LL);
LABEL_154:
                    SummonResultComponent__SetBonusGiftPosition(v10, v58);
                    return;
                  }
                }
              }
            }
          }
        }
LABEL_156:
        sub_1BCB254(this, giftIds);
      }
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v105 = SummonResultComponent_TypeInfo;
      v106 = v104;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v105 = SummonResultComponent_TypeInfo;
      }
      v107 = v105->static_fields;
      v108 = 52LL;
      if ( adjustTitleLabel )
        v108 = 56LL;
      GameObjectExtensions__SetLocalPositionX(v106, (float)*(int *)((char *)&v107->TUTORIAL_BACK_ARROW_WAY + v108), 0LL);
      v109 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v110 = LocalizationManager__Get((System_String_o *)StringLiteral_12325/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v112 = Method_System_Array_Empty_object___;
      v113 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v113 )
      {
        sub_1C1B4B8(Method_System_Array_Empty_object___);
        v113 = v112[7];
      }
      v114 = *(_QWORD *)(v113 + 16);
      if ( (*(_BYTE *)(v114 + 309) & 1) == 0 )
        v114 = sub_1C1B45C(v111);
      if ( !*(_DWORD *)(v114 + 224) )
        v111 = j_il2cpp_runtime_class_init_0(v114);
      v115 = *(_QWORD *)(v112[7] + 16LL);
      if ( (*(_BYTE *)(v115 + 309) & 1) == 0 )
        v115 = sub_1C1B45C(v111);
      this = (SummonResultComponent_o *)System_String__Format_62491852(
                                          v110,
                                          **(System_Object_array ***)(v115 + 184),
                                          0LL);
      if ( !v109 )
        goto LABEL_156;
      UILabel__set_text(v109, (System_String_o *)this, 0LL);
      v77 = v10->fields.extraGiftMsg2Lb;
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12322/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v31,
                                          0,
                                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v82 = &v118;
      v118 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    else
    {
      this = (SummonResultComponent_o *)v10->fields.extraGiftTitleLb;
      if ( !this )
        goto LABEL_156;
      v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      v72 = SummonResultComponent_TypeInfo;
      v73 = v71;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v72 = SummonResultComponent_TypeInfo;
      }
      v74 = v72->static_fields;
      v75 = 36LL;
      if ( adjustTitleLabel )
        v75 = 40LL;
      GameObjectExtensions__SetLocalPositionX(v73, (float)*(int *)((char *)&v74->TUTORIAL_BACK_ARROW_WAY + v75), 0LL);
      v76 = v10->fields.extraGiftTitleLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      this = (SummonResultComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12326/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      if ( !v76 )
        goto LABEL_156;
      UILabel__set_text(v76, (System_String_o *)this, 0LL);
      v77 = v10->fields.extraGiftMsg2Lb;
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_12323/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      this = (SummonResultComponent_o *)System_Collections_Generic_List_object___get_Item(
                                          v31,
                                          0,
                                          (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
      if ( !this )
        goto LABEL_156;
      v82 = &v117;
      v117 = HIDWORD(this->fields.m_CancellationTokenSource);
    }
    v116 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v82, v79, v80, v81);
    this = (SummonResultComponent_o *)System_String__Format(v78, v116, 0LL);
    if ( v77 )
    {
      UILabel__set_text(v77, (System_String_o *)this, 0LL);
      goto LABEL_154;
    }
    goto LABEL_156;
  }
}


void __fastcall SummonResultComponent__SetBonusGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4B18AFE & 1) == 0 )
  {
    sub_1BCAFF8(&SummonResultComponent_TypeInfo, method);
    byte_4B18AFE = 1;
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
        sub_1BCB25C(extraGiftTitleLb, method, v5);
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
    sub_1BCB254(extraGiftTitleLb, method);
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
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v19 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 72LL) )
  {
    v20 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
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


void __fastcall SummonResultComponent__SetOldResultData(
        SummonResultComponent_o *this,
        GachaInfos_array *resultList,
        bool *autoSale,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 Object; // x0
  __int64 v14; // x1
  signed int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellWidth; // s10
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x28
  int maxPerLine; // s11
  float v21; // s9
  System_Collections_Generic_List_int__o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BalanceConfig_c *v25; // x0
  __int64 v26; // x2
  signed int v27; // w8
  __int64 v28; // x22
  __int64 *v29; // x8
  GachaInfos_o *v30; // x24
  UnityEngine_GameObject_o *targetGo; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v33; // x25
  UnityEngine_Transform_o *v34; // x26
  const MethodInfo *v35; // x2
  int32_t objectId; // w27
  bool v37; // w26
  bool IsCommandCode; // w27
  SummonResultInfoComponent_ClickDelegate_o *v39; // x0
  __int64 *v40; // x8
  SummonResultInfoComponent_ClickDelegate_o *v41; // x27
  __int64 sellQp; // x25
  int64_t summonBeforeQp; // x26
  int64_t QpMax; // x8
  int32_t sellMana; // w25
  int32_t summonBeforeMana; // w26
  int UserItemMax; // w8
  __int64 v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  float v51; // s12
  float v52; // s11
  float v53; // s8
  float v54; // s3
  float v55; // s0
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+8h] [xbp-98h]
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B18B0A & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, resultList);
    sub_1BCAFF8(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BCAFF8(&Method_SummonResultComponent_showResCcDetail__, v11);
    sub_1BCAFF8(&Method_SummonResultComponent_showResSvtDetail__, v12);
    byte_4B18B0A = 1;
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
  v21 = scdGrid->fields.cellWidth;
  *autoSale = 0;
  v22 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v22;
  p_befSvtList = &this->fields.befSvtList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v22, v23, v24);
  v27 = resultList->max_length;
  if ( v27 >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v28 >= v27 )
        sub_1BCB25C(v25, v14, v26);
      v29 = (__int64 *)((unsigned int)v28 >= 6 ? &this->fields.scdGrid : &this->fields.fstGrid);
      Object = *v29;
      if ( !*v29 )
        break;
      v30 = resultList->m_Items[v28];
      targetGo = this->fields.targetGo;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
      Object = (__int64)BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, targetGo, transform, 0LL, 0LL);
      if ( !Object )
        break;
      v33 = (UnityEngine_GameObject_o *)Object;
      Object = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Object, 0LL);
      v34 = (UnityEngine_Transform_o *)Object;
      if ( !byte_4B16196 )
      {
        Object = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v14);
        byte_4B16196 = 1;
      }
      if ( !v34 )
        break;
      UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      if ( !v30 )
        break;
      if ( v30->fields.isNew
        && (objectId = v30->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v35)) )
      {
        Object = (__int64)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        v48 = *(_QWORD *)(Object + 16);
        v49 = Method_System_Collections_Generic_List_int__Add__;
        ++*(_DWORD *)(Object + 28);
        if ( !v48 )
          break;
        v50 = *(int *)(Object + 24);
        if ( (unsigned int)v50 >= *(_DWORD *)(v48 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)Object,
            objectId,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          v37 = 0;
        }
        else
        {
          v37 = 0;
          *(_DWORD *)(Object + 24) = v50 + 1;
          *(_DWORD *)(v48 + 4 * v50 + 32) = objectId;
        }
      }
      else
      {
        v37 = 1;
      }
      IsCommandCode = SvtType__IsCommandCode(v30->fields.type, 0LL);
      v39 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1BCB244(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      v40 = &Method_SummonResultComponent_showResCcDetail__;
      if ( !IsCommandCode )
        v40 = &Method_SummonResultComponent_showResSvtDetail__;
      v41 = v39;
      SummonResultInfoComponent_ClickDelegate___ctor(v39, (Il2CppObject *)this, *v40, 0LL);
      if ( v30->fields.sellMana || v30->fields.sellQp )
      {
        v41 = 0LL;
        *autoSale = 1;
      }
      Object = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v33,
                          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
      if ( !Object )
        break;
      SummonResultInfoComponent__setResultData(
        (SummonResultInfoComponent_o *)Object,
        v30,
        v37,
        v41,
        this->fields.summonBeforeQp,
        this->fields.summonBeforeMana,
        0LL);
      v25 = BalanceConfig_TypeInfo;
      sellQp = v30->fields.sellQp;
      summonBeforeQp = this->fields.summonBeforeQp;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v25 = BalanceConfig_TypeInfo;
      }
      QpMax = v25->static_fields->QpMax;
      if ( summonBeforeQp + sellQp >= QpMax )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          v25 = BalanceConfig_TypeInfo;
          QpMax = BalanceConfig_TypeInfo->static_fields->QpMax;
        }
      }
      else
      {
        QpMax = this->fields.summonBeforeQp + v30->fields.sellQp;
      }
      this->fields.summonBeforeQp = QpMax;
      sellMana = v30->fields.sellMana;
      summonBeforeMana = this->fields.summonBeforeMana;
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = BalanceConfig_TypeInfo;
      }
      UserItemMax = v25->static_fields->UserItemMax;
      if ( summonBeforeMana + sellMana >= UserItemMax )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25);
          UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
        }
      }
      else
      {
        UserItemMax = this->fields.summonBeforeMana + v30->fields.sellMana;
      }
      this->fields.summonBeforeMana = UserItemMax;
      v27 = resultList->max_length;
      if ( (int)++v28 >= v27 )
        goto LABEL_46;
    }
LABEL_62:
    sub_1BCB254(Object, v14);
  }
LABEL_46:
  Object = (__int64)this->fields.fstGrid;
  v51 = (float)max_length;
  v52 = (float)maxPerLine;
  if ( (float)max_length <= v52 )
    v53 = 22.0;
  else
    v53 = 106.0;
  if ( !Object )
    goto LABEL_62;
  Object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
  if ( !Object )
    goto LABEL_62;
  v54 = v51 <= v52 ? v51 : v52;
  v58.fields.x = (float)(cellWidth * -0.5) * (float)(v54 + -1.0);
  v58.fields.y = v53;
  v58.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v58, 0LL);
  Object = (__int64)this->fields.fstGrid;
  if ( !Object )
    goto LABEL_62;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Object + 440LL))(Object, *(_QWORD *)(*(_QWORD *)Object + 448LL));
  Object = (__int64)*p_scdGrid;
  if ( !*p_scdGrid )
    goto LABEL_62;
  Object = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)Object, 0LL);
  if ( !Object )
    goto LABEL_62;
  v55 = (float)(v51 - v52) + -1.0;
  if ( v51 <= v52 )
    v55 = -1.0;
  v59.fields.x = (float)(v21 * -0.5) * v55;
  v59.fields.y = -62.0;
  v59.fields.z = this->fields.center.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Object, v59, 0LL);
  Object = (__int64)this->fields.scdGrid;
  if ( !Object )
    goto LABEL_62;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)Object + 440LL))(Object, *(_QWORD *)(*(_QWORD *)Object + 448LL));
  Object = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  SummonResultComponent___c__DisplayClass86_0_o *v35; // x20
  System_Collections_Generic_List_int__o *v36; // x24
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int *scrollBar; // x0
  __int64 objectId; // x1
  struct UIGrid_o *listRoot; // x8
  float cellWidth; // s0
  int maxPerLine; // w8
  float v44; // s8
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x9
  int32_t gachaId; // w25
  int64_t summonSceneInTime; // x26
  System_Collections_Generic_List_object__o *v49; // x24
  const MethodInfo *v50; // x2
  int max_length; // w8
  struct System_Collections_Generic_List_int__o **p_befSvtList; // x20
  int v53; // w21
  __int64 v54; // x22
  GachaInfos_o **m_Items; // x23
  GachaInfos_o *v56; // x27
  bool v57; // w29
  MultiExSummonListViewItem_o *v58; // x28
  ListViewSort_o *v59; // x27
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  System_Comparison_T__o *v69; // x23
  Il2CppObject *v70; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  System_Collections_Generic_List_object__o *v74; // x23
  int i; // w22
  _BOOL8 v76; // x0
  __int64 v77; // x1
  Il2CppObject *current; // x28
  GachaInfos_o *klass; // x26
  Il2CppObject *rewardIconObj; // x25
  Il2CppObject *v81; // x0
  __int64 v82; // x1
  UnityEngine_GameObject_o *v83; // x25
  __int64 v84; // x1
  UnityEngine_Component_o *v85; // x0
  UnityEngine_Component_o *transform; // x0
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x0
  __int64 v90; // x1
  SummonResultInfoComponent_ClickDelegate_o *v91; // x27
  Il2CppObject *Component_object; // x0
  __int64 v93; // x1
  BalanceConfig_c *v94; // x0
  __int64 sellQp; // x28
  int64_t summonBeforeQp; // x20
  int64_t QpMax; // x27
  __int64 v98; // x0
  __int64 v99; // x1
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  __int64 v102; // x8
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  struct UIGrid_o *v107; // x8
  System_Action_object__o *v108; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_object__o v111; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+30h] [xbp-90h] BYREF
  GachaInfos_array *v113; // [xsp+58h] [xbp-68h]

  v113 = resultList;
  if ( (byte_4B18B09 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_GameObject__TypeInfo, resultList);
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v5);
    sub_1BCAFF8(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v6);
    sub_1BCAFF8(&System_Comparison_MultiExSummonListViewItem__TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__get_Current__, v10);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v11);
    sub_1BCAFF8(&ListViewSort_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__ForEach__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__, v21);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_1BCAFF8(&System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo, v23);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v24);
    sub_1BCAFF8(&System_Math_TypeInfo, v25);
    sub_1BCAFF8(&MultiExSummonListViewItem_TypeInfo, v26);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v27);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v28);
    sub_1BCAFF8(&Method_SummonResultComponent_showResCcDetail__, v29);
    sub_1BCAFF8(&Method_SummonResultComponent_showResSvtDetail__, v30);
    sub_1BCAFF8(&Method_SummonResultComponent___c__SetResultData_b__86_0__, v31);
    sub_1BCAFF8(&Method_SummonResultComponent___c__DisplayClass86_0__SetResultData_b__1__, v32);
    sub_1BCAFF8(&SummonResultComponent___c__DisplayClass86_0_TypeInfo, v33);
    sub_1BCAFF8(&SummonResultComponent___c_TypeInfo, v34);
    byte_4B18B09 = 1;
  }
  memset(&v112, 0, sizeof(v112));
  v35 = (SummonResultComponent___c__DisplayClass86_0_o *)sub_1BCB244(SummonResultComponent___c__DisplayClass86_0_TypeInfo);
  SummonResultComponent___c__DisplayClass86_0___ctor(v35, 0LL);
  *autoSale = 0;
  v36 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.befSvtList = v36;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.befSvtList, (int32_t)v36, v37, v38);
  listRoot = this->fields.listRoot;
  if ( !listRoot )
    goto LABEL_71;
  if ( !v113 )
    goto LABEL_71;
  if ( !v35 )
    goto LABEL_71;
  cellWidth = listRoot->fields.cellWidth;
  maxPerLine = listRoot->fields.maxPerLine;
  v44 = (float)((signed int)v113->max_length % maxPerLine);
  v35->fields.offset = (float)(cellWidth * 0.5) * (float)((float)maxPerLine - v44);
  summonCtrl = this->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_71;
  gachaParamData = summonCtrl->fields.gachaParamData;
  object = (Il2CppObject *)v35;
  if ( !gachaParamData )
    goto LABEL_71;
  gachaId = gachaParamData->fields.gachaId;
  summonSceneInTime = summonCtrl->fields.summonSceneInTime;
  v49 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MultiExSummonListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v49,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MultiExSummonListViewItem___ctor__);
  max_length = v113->max_length;
  if ( max_length >= 1 )
  {
    p_befSvtList = &this->fields.befSvtList;
    v53 = 0;
    v54 = 0LL;
    m_Items = v113->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v54 >= max_length )
        sub_1BCB25C(scrollBar, objectId, v50);
      v56 = m_Items[v54];
      if ( !v56 )
        break;
      if ( v56->fields.isNew && !SummonResultComponent__checkOverlapSvt(this, v56->fields.objectId, v50) )
      {
        scrollBar = (int *)*p_befSvtList;
        if ( !*p_befSvtList )
          break;
        objectId = (unsigned int)v56->fields.objectId;
        v66 = *((_QWORD *)scrollBar + 2);
        v67 = Method_System_Collections_Generic_List_int__Add__;
        ++scrollBar[7];
        if ( !v66 )
          break;
        v68 = scrollBar[6];
        if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)scrollBar,
            objectId,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          v57 = 0;
        }
        else
        {
          v57 = 0;
          scrollBar[6] = v68 + 1;
          *(_DWORD *)(v66 + 4 * v68 + 32) = objectId;
        }
      }
      else
      {
        v57 = 1;
      }
      v58 = (MultiExSummonListViewItem_o *)sub_1BCB244(MultiExSummonListViewItem_TypeInfo);
      MultiExSummonListViewItem___ctor(v58, v56, v57, gachaId, summonSceneInTime, v53 + v113->max_length, 0LL);
      v59 = (ListViewSort_o *)sub_1BCB244(ListViewSort_TypeInfo);
      ListViewSort___ctor(v59, 27, 1, 0LL);
      if ( !v58 )
        break;
      scrollBar = (int *)((__int64 (__fastcall *)(MultiExSummonListViewItem_o *, ListViewSort_o *, Il2CppMethodPointer))v58->klass->vtable._4_SetSortValue.method)(
                           v58,
                           v59,
                           v58->klass->vtable._5_IsMatchFilter.methodPtr);
      if ( !v49 )
        break;
      items = v49->fields._items;
      v63 = Method_System_Collections_Generic_List_MultiExSummonListViewItem__Add__;
      ++v49->fields._version;
      if ( !items )
        break;
      size = v49->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v49,
          (Il2CppObject *)v58,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &items->obj.klass + size;
        v49->fields._size = size + 1;
        v65[4] = (Il2CppClass *)v58;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v58, v60, v61);
      }
      ++v54;
      --v53;
      max_length = v113->max_length;
      if ( (int)v54 >= max_length )
        goto LABEL_28;
    }
LABEL_71:
    sub_1BCB254(scrollBar, objectId);
  }
LABEL_28:
  scrollBar = (int *)SummonResultComponent___c_TypeInfo;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    scrollBar = (int *)SummonResultComponent___c_TypeInfo;
  }
  v69 = *(System_Comparison_T__o **)(*((_QWORD *)scrollBar + 23) + 16LL);
  if ( !v69 )
  {
    if ( !scrollBar[56] )
    {
      j_il2cpp_runtime_class_init_0(scrollBar);
      scrollBar = (int *)SummonResultComponent___c_TypeInfo;
    }
    v70 = (Il2CppObject *)**((_QWORD **)scrollBar + 23);
    v69 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_MultiExSummonListViewItem__TypeInfo);
    System_Comparison_object____ctor(v69, v70, Method_SummonResultComponent___c__SetResultData_b__86_0__, 0LL);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__86_0 = (struct System_Comparison_MultiExSummonListViewItem__o *)v69;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__86_0, (int32_t)v69, v72, v73);
  }
  if ( !v49 )
    goto LABEL_71;
  System_Collections_Generic_List_object___Sort_57390740(
    v49,
    v69,
    (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__Sort__);
  v74 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v111,
    v49,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MultiExSummonListViewItem__GetEnumerator__);
  v112 = v111;
  for ( i = 1; ; ++i )
  {
    v76 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v112,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__MoveNext__);
    if ( !v76 )
      break;
    current = v112.fields._current;
    if ( !v112.fields._current )
      sub_1BCB254(v76, v77);
    klass = (GachaInfos_o *)v112.fields._current[7].klass;
    rewardIconObj = (Il2CppObject *)this->fields.rewardIconObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v81 = UnityEngine_Object__Instantiate_object_(
            rewardIconObj,
            (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v83 = (UnityEngine_GameObject_o *)v81;
    if ( !v81 )
      sub_1BCB254(0LL, v82);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v81, 1, 0LL);
    v85 = (UnityEngine_Component_o *)this->fields.listRoot;
    if ( !v85 )
      sub_1BCB254(0LL, v84);
    transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(v85, 0LL);
    GameObjectExtensions__SetParent(v83, transform, 0LL);
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v87);
      byte_4B16191 = 1;
    }
    GameObjectExtensions__SetLocalPosition(v83, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    if ( !byte_4B16196 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v88);
      byte_4B16196 = 1;
    }
    GameObjectExtensions__SetLocalScale(v83, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    if ( !klass )
      sub_1BCB254(v89, v90);
    if ( SvtType__IsCommandCode(klass->fields.type, 0LL) )
    {
      v91 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1BCB244(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v91,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResCcDetail__,
        0LL);
    }
    else
    {
      v91 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1BCB244(SummonResultInfoComponent_ClickDelegate_TypeInfo);
      SummonResultInfoComponent_ClickDelegate___ctor(
        v91,
        (Il2CppObject *)this,
        Method_SummonResultComponent_showResSvtDetail__,
        0LL);
    }
    if ( klass->fields.sellMana || klass->fields.sellQp )
    {
      v91 = 0LL;
      *autoSale = 1;
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v83,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
    if ( !Component_object )
      sub_1BCB254(0LL, v93);
    SummonResultInfoComponent__setResultData(
      (SummonResultInfoComponent_o *)Component_object,
      klass,
      (bool)current[7].monitor,
      v91,
      this->fields.summonBeforeQp,
      this->fields.summonBeforeMana,
      0LL);
    v94 = BalanceConfig_TypeInfo;
    sellQp = klass->fields.sellQp;
    summonBeforeQp = this->fields.summonBeforeQp;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v94 = BalanceConfig_TypeInfo;
    }
    QpMax = v94->static_fields->QpMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.summonBeforeQp = System_Math__Min_63972800(summonBeforeQp + sellQp, QpMax, 0LL);
    v98 = System_Math__Min_63972788(
            this->fields.summonBeforeMana + klass->fields.sellMana,
            BalanceConfig_TypeInfo->static_fields->UserItemMax,
            0LL);
    v102 = (__int64)v113;
    this->fields.summonBeforeMana = v98;
    if ( (float)((float)*(int *)(v102 + 24) - v44) < (float)i )
    {
      if ( !v74 )
        sub_1BCB254(v98, v99);
      v103 = v74->fields._items;
      v104 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v74->fields._version;
      if ( !v103 )
        sub_1BCB254(v98, v99);
      v105 = v74->fields._size;
      if ( (unsigned int)v105 >= v103->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v74,
          (Il2CppObject *)v83,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
      }
      else
      {
        v106 = &v103->obj.klass + v105;
        v74->fields._size = v105 + 1;
        v106[4] = (Il2CppClass *)v83;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v106 + 4), (int32_t)v83, v100, v101);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v112,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MultiExSummonListViewItem__Dispose__);
  scrollBar = (int *)this->fields.listRoot;
  if ( !scrollBar )
    goto LABEL_71;
  scrollBar = (int *)(*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)scrollBar + 440LL))(
                       scrollBar,
                       *(_QWORD *)(*(_QWORD *)scrollBar + 448LL));
  v107 = this->fields.listRoot;
  if ( !v107 )
    goto LABEL_71;
  scrollBar = (int *)this->fields.scrollBar;
  if ( !scrollBar )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)scrollBar,
    (signed int)v113->max_length > 2 * v107->fields.maxPerLine,
    0LL);
  scrollBar = (int *)this->fields.scrollView;
  if ( !scrollBar )
    goto LABEL_71;
  UIScrollView__ResetPosition((UIScrollView_o *)scrollBar, 0LL);
  v108 = (System_Action_object__o *)sub_1BCB244(System_Action_GameObject__TypeInfo);
  System_Action_object____ctor(
    v108,
    object,
    Method_SummonResultComponent___c__DisplayClass86_0__SetResultData_b__1__,
    0LL);
  if ( !v74 )
    goto LABEL_71;
  System_Collections_Generic_List_object___ForEach(
    v74,
    (System_Action_T__o *)v108,
    (const MethodInfo_36BA610 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
}


void __fastcall SummonResultComponent__SetSpecialGiftPosition(SummonResultComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4B18AFF & 1) == 0 )
  {
    sub_1BCAFF8(&SummonResultComponent_TypeInfo, method);
    byte_4B18AFF = 1;
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
        sub_1BCB25C(extraGiftTitleLb, method, v5);
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
    sub_1BCB254(extraGiftTitleLb, method);
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
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    extraGiftTitleLb = (UnityEngine_Component_o *)SummonResultComponent_TypeInfo;
  }
  if ( v19 > *(_DWORD *)(*(_QWORD *)&extraGiftTitleLb[7].fields.m_CachedPtr + 72LL) )
  {
    v20 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
    if ( !LODWORD(extraGiftTitleLb[9].monitor) )
      j_il2cpp_runtime_class_init_0(extraGiftTitleLb);
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


void __fastcall SummonResultComponent___DialogCallBack_b__79_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_4B18B0C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_SummonResultComponent_EndCloseDialogCallBack__, v5);
    byte_4B18B0C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1BCB254(v8, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SummonResultComponent__checkOverlapSvt(
        SummonResultComponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *befSvtList; // x0
  int size; // w8
  int v8; // w22
  int32_t v9; // w21
  bool result; // w0

  if ( (byte_4B18B01 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_4B18B01 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1BCB254(befSvtList, *(_QWORD *)&svtId);
  size = befSvtList->fields._size;
  v8 = size - 1;
  if ( size < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    result = System_Collections_Generic_List_int___get_Item(
               befSvtList,
               v9,
               (const MethodInfo_369C8BC *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
    if ( result || v8 == v9 )
      return result;
    befSvtList = this->fields.befSvtList;
    ++v9;
    if ( !befSvtList )
      goto LABEL_9;
  }
}


void __fastcall SummonResultComponent__clearResultList(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Component_o *fstGrid; // x0
  int32_t childCount; // w0
  int v9; // w21
  UnityEngine_Object_o *gameObject; // x20
  int32_t v11; // w0
  int v12; // w21
  UnityEngine_Object_o *v13; // x20
  __int64 v14; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  UnityEngine_Component_o *v24; // x0
  __int64 v25; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *v27; // x21
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x20
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B18B06 & 1) == 0 )
  {
    sub_1BCAFF8(&System_IDisposable_TypeInfo, method);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_Transform_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v6);
    byte_4B18B06 = 1;
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
    v9 = childCount + 1;
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
                                             v9 - 2,
                                             0LL);
      if ( !fstGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
      if ( --v9 <= 1 )
        goto LABEL_13;
    }
LABEL_56:
    sub_1BCB254(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_56;
  v11 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( v11 >= 1 )
  {
    v12 = v11 + 1;
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
                                             v12 - 2,
                                             0LL);
      if ( !fstGrid )
        goto LABEL_56;
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(v13, 0LL);
    }
    while ( --v12 > 1 );
  }
  fstGrid = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !fstGrid )
    goto LABEL_56;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_56;
  Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( !Enumerator )
    sub_1BCB254(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_30;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_30:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = (System_Collections_IEnumerator_c **)&v20->_1.interfaceOffsets->offset;
      while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_37;
      }
      v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1].method;
    }
    else
    {
LABEL_37:
      v23 = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v24 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v23)(
                                       Enumerator,
                                       *(_QWORD *)(v23 + 8));
    if ( !v24 )
      goto LABEL_58;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCB514(v24);
LABEL_58:
      sub_1BCB254(v24, v25);
    }
    v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v27, 0LL);
  }
  v28 = sub_1BCB134(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_50;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_50:
      v33 = sub_1C1B560(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  UnityEngine_GameObject_o *changeSceneBtnInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x3
  struct UIGrid_o *fstGrid; // x8
  struct UIGrid_o *scdGrid; // x9
  float v37; // s8
  _BOOL4 v38; // w24
  UnityEngine_GameObject_o *v39; // x0
  UILabel_o *autoSaleMsgLb; // x23
  UILabel_o *extraGiftMsgLb; // x23
  SummonResultComponent___c_c *v42; // x0
  System_Collections_Generic_IEnumerable_T__o *extraGiftIconComponents; // x23
  System_Action_object__o *_9__69_0; // x24
  Il2CppObject *v45; // x25
  struct SummonResultComponent___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x2
  __int64 v50; // x2
  const MethodInfo *v51; // x5
  float v52; // s8
  struct UIGrid_o *v53; // x8
  GachaExtraGifts_o *v54; // x9
  int32_t gachaExtraGiftResultType; // w2
  int32_t gachaExtraGiftBonusType; // w3
  SummonResultComponent_o *v57; // x0
  System_Collections_Generic_IEnumerable_int__o *v58; // x1
  bool v59; // w4
  System_Collections_Generic_HashSet_int__o *v60; // x22
  __int64 v61; // x8
  __int64 v62; // x25
  int32_t v63; // w23
  int32_t v64; // w24
  GachaExtraGifts_o *v65; // x29
  __int64 v66; // [xsp+8h] [xbp-78h] BYREF
  bool autoSale[4]; // [xsp+1Ch] [xbp-64h] BYREF
  System_Nullable_int__o v68; // 0:x0.8

  v9 = resultList;
  if ( (byte_4B18AFB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_ItemIconComponent__TypeInfo, resultList);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_ItemIconComponent___, v11);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v12);
    sub_1BCAFF8(&FSUtility_TypeInfo, v13);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_Collider___, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v16);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v17);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Nullable_int__GetValueOrDefault__, v19);
    sub_1BCAFF8(&Method_System_Nullable_int___ctor__, v20);
    sub_1BCAFF8(&Method_System_Nullable_int__get_HasValue__, v21);
    sub_1BCAFF8(&string_TypeInfo, v22);
    sub_1BCAFF8(&SummonResultComponent_TypeInfo, v23);
    sub_1BCAFF8(&Method_SummonResultComponent___c__initGachaResultList_b__69_0__, v24);
    sub_1BCAFF8(&SummonResultComponent___c_TypeInfo, v25);
    sub_1BCAFF8(&StringLiteral_12339/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v26);
    sub_1BCAFF8(&StringLiteral_12364/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v27);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v28);
    byte_4B18AFB = 1;
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
                                                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
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
                                                     (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v31, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v32, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v33, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_96;
  changeSceneBtnInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)changeSceneBtnInfo,
                                                     (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
    SummonResultComponent__SetOldResultData(this, v9, autoSale, v34);
    v37 = 0.0;
  }
  else
  {
    SummonResultComponent__SetResultData(this, v9, autoSale, v34);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v37 = FSUtility__IsUnderVista(0LL) ? 19.0 : 7.0;
  }
  changeSceneBtnInfo = this->fields.autoSaleMsg;
  if ( !changeSceneBtnInfo
    || (v38 = autoSale[0],
        UnityEngine_GameObject__SetActive(changeSceneBtnInfo, autoSale[0], 0LL),
        (changeSceneBtnInfo = (UnityEngine_GameObject_o *)this->fields.autoSaleMsgLb) == 0LL) )
  {
LABEL_96:
    sub_1BCB254(changeSceneBtnInfo, resultList);
  }
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  GameObjectExtensions__SetLocalPositionY(v39, v37, 0LL);
  autoSaleMsgLb = this->fields.autoSaleMsgLb;
  if ( v38 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12364/*"SUMMON_RESULT_AUTOSALE_MSG"*/,
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
  v42 = SummonResultComponent___c_TypeInfo;
  extraGiftIconComponents = (System_Collections_Generic_IEnumerable_T__o *)this->fields.extraGiftIconComponents;
  if ( !SummonResultComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonResultComponent___c_TypeInfo);
    v42 = SummonResultComponent___c_TypeInfo;
  }
  _9__69_0 = (System_Action_object__o *)v42->static_fields->__9__69_0;
  if ( !_9__69_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = SummonResultComponent___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__69_0 = (System_Action_object__o *)sub_1BCB244(System_Action_ItemIconComponent__TypeInfo);
    System_Action_object____ctor(_9__69_0, v45, Method_SummonResultComponent___c__initGachaResultList_b__69_0__, 0LL);
    static_fields = SummonResultComponent___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Action_ItemIconComponent__o *)_9__69_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__69_0, (int32_t)_9__69_0, v47, v48);
  }
  BasicHelper__ForEach_object_(
    extraGiftIconComponents,
    (System_Action_T__o *)_9__69_0,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_ItemIconComponent___);
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
      v52 = 0.0;
      if ( v9 )
      {
        v66 = 0LL;
        v68 = (System_Nullable_int__o)&v66;
        System_Nullable_int____ctor(
          v68,
          v9->max_length,
          (const MethodInfo_37D8E28 *)Method_System_Nullable_int___ctor__);
        if ( (_BYTE)v66 )
          v52 = (float)SHIDWORD(v66);
      }
      v53 = this->fields.fstGrid;
      if ( !v53 )
        goto LABEL_96;
      if ( gachaExtraGiftList->max_length )
      {
        v54 = gachaExtraGiftList->m_Items[0];
        if ( !v54 )
          goto LABEL_96;
        gachaExtraGiftBonusType = v54->fields.gachaExtraGiftBonusType;
        gachaExtraGiftResultType = v54->fields.gachaExtraGiftResultType;
        v57 = this;
        v58 = (System_Collections_Generic_IEnumerable_int__o *)extraGiftIds;
        v59 = v52 > (float)v53->fields.maxPerLine;
        goto LABEL_94;
      }
LABEL_97:
      sub_1BCB25C(changeSceneBtnInfo, resultList, v50);
    }
    v60 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v60,
      (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v61 = *(_QWORD *)&extraGiftIds->max_length;
    if ( (int)v61 >= 1 )
    {
      v62 = 0LL;
      v63 = 0;
      v64 = 0;
      while ( (unsigned int)v62 < (unsigned int)v61 && (unsigned int)v62 < gachaExtraGiftList->max_length )
      {
        v65 = gachaExtraGiftList->m_Items[v62];
        if ( !v65 )
          goto LABEL_96;
        if ( v65->fields.gachaExtraGiftBonusType == 2 )
        {
          if ( !v60 )
            goto LABEL_96;
          changeSceneBtnInfo = (UnityEngine_GameObject_o *)System_Collections_Generic_HashSet_int___Add(
                                                             v60,
                                                             extraGiftIds->m_Items[v62 + 1],
                                                             (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
          v63 = v65->fields.gachaExtraGiftBonusType;
          v64 = v65->fields.gachaExtraGiftResultType;
          v61 = *(_QWORD *)&extraGiftIds->max_length;
        }
        if ( (int)++v62 >= (int)v61 )
          goto LABEL_88;
      }
      goto LABEL_97;
    }
    v64 = 0;
    v63 = 0;
LABEL_88:
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)extraGiftIds, 0LL) )
    {
      v57 = this;
      v58 = (System_Collections_Generic_IEnumerable_int__o *)v60;
      gachaExtraGiftResultType = v64;
      gachaExtraGiftBonusType = v63;
      v59 = 0;
LABEL_94:
      SummonResultComponent__SetBonusGiftDisplay(v57, v58, gachaExtraGiftResultType, gachaExtraGiftBonusType, v59, v51);
      goto LABEL_95;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeSceneBtnInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_12339/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/,
                                                       0LL);
    if ( !this->fields.extraGiftMsgLb )
      goto LABEL_96;
    UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
  }
LABEL_95:
  SummonResultComponent__setListByType(this, this->fields.dispType, v49);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B18B07 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_12115/*"SHOW_TALK"*/, method);
    byte_4B18B07 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1BCB254(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12115/*"SHOW_TALK"*/, 0LL);
  }
}


void __fastcall SummonResultComponent__setBeforeQpMana(
        SummonResultComponent_o *this,
        int64_t qp,
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
  __int64 v4; // x2
  unsigned int klass; // w8
  float32x2_t *v6; // x20
  unsigned __int64 v7; // x21
  float *p_m_CachedPtr; // x22
  float v9; // s8
  float v10; // s9
  float v11; // s10
  int v12; // s0
  int v13; // s1
  int v14; // s2
  float v15; // s1
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
  if ( !mWidget
    || (mWidget = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Component_o *, void *))mWidget->klass[1]._1.klass)(
                                               mWidget,
                                               mWidget->klass[1]._1.fields)) == 0LL )
  {
LABEL_11:
    sub_1BCB254(mWidget, method);
  }
  klass = (unsigned int)mWidget[1].klass;
  v6 = (float32x2_t *)mWidget;
  v7 = 0LL;
  p_m_CachedPtr = (float *)&mWidget[1].fields.m_CachedPtr;
  do
  {
    if ( v7 >= klass )
      goto LABEL_12;
    mWidget = (UnityEngine_Component_o *)this->fields.mWidget;
    if ( !mWidget )
      goto LABEL_11;
    v9 = *(p_m_CachedPtr - 2);
    v10 = *(p_m_CachedPtr - 1);
    v11 = *p_m_CachedPtr;
    mWidget = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(mWidget, 0LL);
    if ( !mWidget )
      goto LABEL_11;
    v16.fields.x = v9;
    v16.fields.y = v10;
    v16.fields.z = v11;
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Transform__InverseTransformPoint(
                                       (UnityEngine_Transform_o *)mWidget,
                                       v16,
                                       0LL);
    if ( v7 >= v6[3].n64_u32[0] )
      goto LABEL_12;
    *((_DWORD *)p_m_CachedPtr - 2) = v12;
    *((_DWORD *)p_m_CachedPtr - 1) = v13;
    *(_DWORD *)p_m_CachedPtr = v14;
    p_m_CachedPtr += 3;
    klass = v6[3].n64_u32[0];
    ++v7;
  }
  while ( v7 != 4 );
  if ( klass < 3 )
LABEL_12:
    sub_1BCB25C(mWidget, method, v4);
  v15 = v6[5].n64_f32[0] + (float)((float)(v6[8].n64_f32[0] - v6[5].n64_f32[0]) * 0.5);
  *(float32x2_t *)&this->fields.center.fields.x = vadd_f32(
                                                    v6[4],
                                                    vmul_f32(vsub_f32(v6[7], v6[4]), (float32x2_t)0x3F0000003F000000LL));
  this->fields.center.fields.z = v15;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonResultComponent__setListByType(
        SummonResultComponent_o *this,
        int32_t type,
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  UnityEngine_GameObject_o *closeInfo; // x0
  System_String_o *v39; // x0
  UILabel_o *formationBtnLabel; // x22
  System_String_o *v41; // x21
  UILabel_o *combineBtnLabel; // x22
  UILabel_o *sellBtnLabel; // x22
  struct SummonControl_o *summonCtrl; // x8
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  struct SummonControl_o *v48; // x8
  struct GachaRqParamData_o *gachaParamData; // x27
  int32_t gachaType; // w23
  UILabel_o *summonBtnLabel; // x22
  Il2CppObject *v52; // x0
  UILabel_o *v53; // x22
  long double v54; // q0
  int32_t gachaId; // w22
  __int64 v56; // x0
  __int64 v57; // x0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Master_object; // x24
  System_String_o *v60; // x22
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  UILabel_o *v64; // x23
  Il2CppObject *v65; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  long double v68; // q0
  __int64 v69; // x8
  __int64 v70; // x0
  TblUserEntity_o *UserData; // x23
  GachaEntity_o *v72; // x22
  int friendPoint; // w24
  int32_t v74; // w23
  bool v75; // w0
  UILabel_o *v76; // x22
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  Il2CppObject *v80; // x0
  UILabel_o *v81; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  Il2CppObject *v83; // x0
  Il2CppObject *v84; // x22
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  UILabel_o *v88; // x22
  Il2CppObject *v89; // x0
  Il2CppObject *v90; // x21
  UserItemEntity_o *v91; // x0
  UILabel_o *v92; // x21
  struct UILabel_o *v93; // x21
  System_String_o *v94; // x1
  int32_t monitor_high; // w9
  UILabel_o *v96; // x21
  UILabel_o *v97; // x21
  int gachaResourceNum; // w23
  int v99; // w1
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  int v103; // w22
  __int64 v104; // x24
  UILabel_o *v105; // x23
  Il2CppObject *v106; // x0
  struct SummonControl_o *v107; // x8
  struct SummonControl_o *v108; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v110; // x0
  UnityEngine_GameObject_o *v111; // x0
  UnityEngine_GameObject_o *v112; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v114; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v119; // x0
  UnityEngine_Component_o *Parent; // x0
  SummonResultComponent_c *v121; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v128; // s11
  float v129; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v131; // s14
  int v132; // w22
  int32_t maxDrawNum; // w23
  struct SummonControl_o *v134; // x8
  int32_t gachaTime; // [xsp+Ch] [xbp-C4h] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+10h] [xbp-C0h] BYREF
  Il2CppObject *v137; // [xsp+18h] [xbp-B8h] BYREF
  UserGachaEntity_o *entity; // [xsp+20h] [xbp-B0h] BYREF
  GachaAppendEntity_o *v139; // [xsp+28h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+38h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v141; // 0:s0.4,4:s1.4
  UnityEngine_Color_o v142; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v143; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v144; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v145; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v146; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v147; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v148; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v149; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v150; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v151; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v153; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v154; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4B18AFC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&type);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_GachaMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TblUserMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GachaAppendMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserGachaMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserItemMaster___, v12);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v14);
    sub_1BCAFF8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v15);
    sub_1BCAFF8(&FSUtility_TypeInfo, v16);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___, v17);
    sub_1BCAFF8(&int_TypeInfo, v18);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v19);
    sub_1BCAFF8(&System_Math_TypeInfo, v20);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v21);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v22);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v24);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v25);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1BCAFF8(&SummonResultComponent_TypeInfo, v27);
    sub_1BCAFF8(&TutorialFlag_TypeInfo, v28);
    sub_1BCAFF8(&UserGachaMaster_TypeInfo, v29);
    sub_1BCAFF8(&StringLiteral_12309/*"SUMMON_APPEND_END"*/, v30);
    sub_1BCAFF8(&StringLiteral_12102/*"SHORT_SERVANT_FORMATION"*/, v31);
    sub_1BCAFF8(&StringLiteral_12341/*"SUMMON_FREE_10_BTN"*/, v32);
    sub_1BCAFF8(&StringLiteral_12107/*"SHORT_SERVANT_SELL"*/, v33);
    sub_1BCAFF8(&StringLiteral_12345/*"SUMMON_LIMIT_OVER_BTN"*/, v34);
    sub_1BCAFF8(&StringLiteral_12370/*"SUMMON_TICKET_END"*/, v35);
    sub_1BCAFF8(&StringLiteral_12092/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_1BCAFF8(&StringLiteral_3788/*"CONTINUE_SUMMON_BTN"*/, v37);
    byte_4B18AFC = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  entity = 0LL;
  v139 = 0LL;
  appendEnt = 0LL;
  v137 = 0LL;
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
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3788/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v41 = v39;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12102/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_204;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12092/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_204;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12107/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_204;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_204;
    v142.fields.r = 1.0;
    v142.fields.g = 1.0;
    v142.fields.b = 1.0;
    v142.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v142, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v143.fields.r = 1.0;
    v143.fields.g = 1.0;
    v143.fields.b = 1.0;
    v143.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v143, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v144.fields.r = 1.0;
    v144.fields.g = 1.0;
    v144.fields.b = 1.0;
    v144.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v144, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v145.fields.r = 1.0;
    v145.fields.g = 1.0;
    v145.fields.b = 1.0;
    v145.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v145, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_204;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_204;
    v146.fields.r = 1.0;
    v146.fields.g = 1.0;
    v146.fields.b = 1.0;
    v146.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v146, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_204;
    closeInfo = (UnityEngine_GameObject_o *)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_204;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v48 = this->fields.summonCtrl;
    if ( !v48 )
      goto LABEL_204;
    gachaParamData = v48->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_204;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v45, v46, v47);
    closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v52, 0LL);
    if ( !summonBtnLabel )
      goto LABEL_204;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0LL);
    v53 = this->fields.summonBtnLabel;
    closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !v53 )
      goto LABEL_204;
    UILabel__SetCondensedScale(
      v53,
      SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE,
      0,
      0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v56 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
          v56 = sub_1C1B45C(v54);
        v57 = *(_QWORD *)(*(_QWORD *)(v56 + 192) + 16LL);
        if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
          v57 = sub_1C1B45C(v54);
        closeInfo = **(UnityEngine_GameObject_o ***)(v57 + 184);
        if ( !closeInfo )
          goto LABEL_204;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserGachaMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&type);
          byte_4B165D1 = 1;
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
          &v137,
          gachaId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12345/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !v137 )
          goto LABEL_204;
        v60 = (System_String_o *)closeInfo;
        if ( !LODWORD(v137[4].monitor) )
          goto LABEL_56;
        closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v137 || !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)UserGachaExtraCountMaster__getExtraCount(
                                                  (UserGachaExtraCountMaster_o *)closeInfo,
                                                  (int32_t)v137[4].monitor,
                                                  0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_56;
        v64 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v61, v62, v63);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v65, 0LL);
        if ( !v64 )
          goto LABEL_204;
        UILabel__set_text(v64, (System_String_o *)closeInfo, 0LL);
LABEL_56:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_204;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v137,
                                &appendEnt,
                                0LL);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v60 = LocalizationManager__Get((System_String_o *)StringLiteral_12309/*"SUMMON_APPEND_END"*/, 0LL);
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
            v151.fields.r = 0.35547;
            v151.fields.a = 1.0;
            v151.fields.g = 0.35547;
            v151.fields.b = 0.35547;
            UIWidget__set_color((UIWidget_o *)closeInfo, v151, 0LL);
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_204;
            v152.fields.r = 0.5;
            v152.fields.g = 0.5;
            v152.fields.b = 0.5;
            v152.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)closeInfo, v152, 0LL);
            closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
            v96 = this->fields.summonBtnLabel;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            if ( !v96 )
              goto LABEL_204;
            UILabel__SetCondensedScale(
              v96,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0,
              0LL);
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_204;
            v94 = v60;
LABEL_135:
            UILabel__set_text((UILabel_o *)closeInfo, v94, 0LL);
            goto LABEL_165;
          }
        }
        else if ( entity )
        {
          if ( !v137 )
            goto LABEL_204;
          monitor_high = HIDWORD(v137[5].monitor);
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
        v149.fields.r = 1.0;
        v149.fields.g = 1.0;
        v149.fields.b = 1.0;
        v149.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v149, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_204;
        v150.fields.r = 1.0;
        v150.fields.g = 1.0;
        v150.fields.b = 1.0;
        v150.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v150, 0LL);
        goto LABEL_165;
      case 3:
        SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
        v69 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
          v69 = sub_1C1B45C(v68);
        v70 = *(_QWORD *)(*(_QWORD *)(v69 + 192) + 16LL);
        if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
          v70 = sub_1C1B45C(v68);
        closeInfo = **(UnityEngine_GameObject_o ***)(v70 + 184);
        if ( !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)closeInfo,
                                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame || !closeInfo )
          goto LABEL_204;
        UserData = TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_204;
        closeInfo = (UnityEngine_GameObject_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                                                  gachaParamData->fields.gachaId,
                                                  (const MethodInfo_32C7E00 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !UserData )
          goto LABEL_204;
        v72 = (GachaEntity_o *)closeInfo;
        friendPoint = UserData->fields.friendPoint;
        v74 = gachaParamData->fields.gachaId;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v75 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(v74, &maxNum[1], maxNum, 0LL);
        if ( maxNum[1] > 0 || v75 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_204;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v97 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12341/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v97 )
            goto LABEL_204;
          UILabel__set_text(v97, (System_String_o *)closeInfo, 0LL);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v81 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v81 )
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
          v76 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v80 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v77, v78, v79);
          closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v80, 0LL);
          if ( !v76 )
            goto LABEL_204;
          UILabel__set_text(v76, (System_String_o *)closeInfo, 0LL);
          closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
          v81 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v81 )
            goto LABEL_204;
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
LABEL_164:
          UILabel__SetCondensedScale(v81, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0, 0LL);
LABEL_165:
          v107 = this->fields.summonCtrl;
          if ( v107 )
          {
            closeInfo = v107->fields.currentResourceInfo;
            if ( closeInfo )
            {
              UnityEngine_GameObject__SetActive(closeInfo, 1, 0LL);
              v108 = this->fields.summonCtrl;
              if ( v108 )
              {
                v108->fields.isResult = 1;
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
                                                                (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                      if ( closeInfo )
                      {
                        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                        closeInfo = (UnityEngine_GameObject_o *)this->fields.combineBtnLabel;
                        if ( closeInfo )
                        {
                          v110 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                          closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v110, 0LL);
                          if ( closeInfo )
                          {
                            closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                      (UnityEngine_Component_o *)closeInfo,
                                                                      (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                            if ( closeInfo )
                            {
                              UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                              closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
                              if ( closeInfo )
                              {
                                v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                                closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v111, 0LL);
                                if ( closeInfo )
                                {
                                  closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                            (UnityEngine_Component_o *)closeInfo,
                                                                            (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                  if ( closeInfo )
                                  {
                                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                    closeInfo = (UnityEngine_GameObject_o *)this->fields.sellBtnLabel;
                                    if ( closeInfo )
                                    {
                                      v112 = UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)closeInfo,
                                               0LL);
                                      closeInfo = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(v112, 0LL);
                                      if ( closeInfo )
                                      {
                                        closeInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                                                  (UnityEngine_Component_o *)closeInfo,
                                                                                  (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                  v114 = UnityEngine_Object__Instantiate_object_(
                           touchBlocker,
                           (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                  p_blocker = &this->fields.blocker;
                  this->fields.blocker = (struct UnityEngine_GameObject_o *)v114;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.blocker, (int32_t)v114, v116, v117);
                  blocker = this->fields.blocker;
                  v119 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v119, 0LL);
                  GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                  v121 = SummonResultComponent_TypeInfo;
                  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                    v121 = SummonResultComponent_TypeInfo;
                  }
                  static_fields = v121->static_fields;
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
                    v128 = OffsetX;
                    closeInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              closeInfo,
                                                              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                    if ( closeInfo )
                    {
                      v129 = m_XMin - v128;
                      v153.fields.m_XMin = v129;
                      v153.fields.m_YMin = m_YMin;
                      v153.fields.m_Width = m_Width;
                      v153.fields.m_Height = m_Height;
                      MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v153, 30, 0LL);
                      closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                        v131 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                        closeInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                        if ( closeInfo )
                        {
                          v141.fields.x = TutorialBackArrowPos.fields.x - v131;
                          v141.fields.y = TutorialBackArrowPos.fields.y;
                          v154.fields.m_XMin = v129;
                          v154.fields.m_YMin = m_YMin;
                          v154.fields.m_Width = m_Width;
                          v154.fields.m_Height = m_Height;
                          CommonUI__OpenTutorialArrowMark(
                            (CommonUI_o *)closeInfo,
                            v141,
                            SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                            v154,
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
          sub_1BCB254(closeInfo, *(_QWORD *)&type);
        }
        if ( friendPoint <= 1999 )
        {
          closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_204;
          if ( friendPoint < 400 )
            v99 = 1;
          else
            v99 = friendPoint / 200;
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_204;
          closeInfo = (UnityEngine_GameObject_o *)GachaAppendMaster__TryGetHundredSummon(
                                                    (GachaAppendMaster_o *)closeInfo,
                                                    &v139,
                                                    gachaParamData->fields.gachaId,
                                                    0LL);
          if ( ((unsigned __int8)closeInfo & 1) == 0 )
            goto LABEL_152;
          if ( !v72 )
            goto LABEL_204;
          gachaResourceNum = gachaParamData->fields.gachaResourceNum;
          if ( gachaResourceNum > 10 * GachaEntity__getPrice(v72, 0LL) || !gachaParamData->fields.gachaResourceNum )
          {
            closeInfo = (UnityEngine_GameObject_o *)GachaEntity__getPrice(v72, 0LL);
            if ( !v139 )
              goto LABEL_204;
            v132 = (int)closeInfo;
            maxDrawNum = v139->fields.maxDrawNum;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            closeInfo = (UnityEngine_GameObject_o *)System_Math__Min_63972788(friendPoint / v132, maxDrawNum, 0LL);
            v134 = this->fields.summonCtrl;
            if ( (int)closeInfo >= 1 )
            {
              if ( !v134 )
                goto LABEL_204;
              v103 = (int)closeInfo;
              SummonControl__SetGachaTime(this->fields.summonCtrl, (int32_t)closeInfo, 3, 0LL);
              v104 = 24LL;
              goto LABEL_159;
            }
            if ( !v134 )
              goto LABEL_204;
            v99 = gachaParamData->fields.gachaTime;
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
          }
          else
          {
LABEL_152:
            closeInfo = (UnityEngine_GameObject_o *)this->fields.summonCtrl;
            if ( !closeInfo )
              goto LABEL_204;
            v99 = gachaParamData->fields.gachaTime;
          }
        }
        SummonControl__SetGachaTime((SummonControl_o *)closeInfo, v99, 3, 0LL);
        v103 = gachaParamData->fields.gachaTime;
        v104 = 20LL;
LABEL_159:
        v105 = this->fields.summonBtnLabel;
        gachaTime = v103;
        v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v100, v101, v102);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v106, 0LL);
        if ( !v105 )
          goto LABEL_204;
        UILabel__set_text(v105, (System_String_o *)closeInfo, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v81 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v81 )
          goto LABEL_204;
        SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = *(_DWORD *)((char *)&SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY
                                                     + v104);
        goto LABEL_164;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_204;
        v83 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_32C7E00 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v83 )
          goto LABEL_98;
        v84 = v83;
        if ( !LODWORD(v83[4].monitor) )
          goto LABEL_98;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_204;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v84[4].monitor,
               0LL) != 9 )
          goto LABEL_98;
        v88 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v85, v86, v87);
        closeInfo = (UnityEngine_GameObject_o *)System_String__Format(v41, v89, 0LL);
        if ( !v88 )
          goto LABEL_204;
        UILabel__set_text(v88, (System_String_o *)closeInfo, 0LL);
LABEL_98:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v90 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&type);
          byte_4B165D1 = 1;
        }
        closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          closeInfo = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
        }
        if ( !v90 )
          goto LABEL_204;
        v91 = UserItemMaster__GetEntity(
                (UserItemMaster_o *)v90,
                *(_QWORD *)(*(_QWORD *)&closeInfo[7].fields.m_CachedPtr + 64LL),
                gachaParamData->fields.ticketItemId,
                0LL);
        if ( v91 && v91->fields.num > 0 )
          goto LABEL_123;
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_204;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_204;
        v147.fields.r = 0.35547;
        v147.fields.a = 1.0;
        v147.fields.g = 0.35547;
        v147.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v147, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_204;
        v148.fields.r = 0.5;
        v148.fields.g = 0.5;
        v148.fields.b = 0.5;
        v148.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v148, 0LL);
        closeInfo = (UnityEngine_GameObject_o *)SummonResultComponent_TypeInfo;
        v92 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v92 )
          goto LABEL_204;
        UILabel__SetCondensedScale(
          v92,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0,
          0LL);
        v93 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12370/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v93 )
          goto LABEL_204;
        v94 = (System_String_o *)closeInfo;
        closeInfo = (UnityEngine_GameObject_o *)v93;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserServantMaster_o *SelfUserGame; // x0
  __int64 v9; // x1
  int MasterKind_k__BackingField; // w10
  BalanceConfig_c *v11; // x0
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
  int v23; // [xsp+18h] [xbp-28h] BYREF
  int v24; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4B18B02 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BCAFF8(&StringLiteral_7130/*"HAVE_SVT_NUM_TITLE"*/, v6);
    sub_1BCAFF8(&StringLiteral_7129/*"HAVE_SVTEQ_NUM_TITLE"*/, v7);
    byte_4B18B02 = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = (UserServantMaster_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_23;
  MasterKind_k__BackingField = SelfUserGame[2].fields._MasterKind_k__BackingField;
  v23 = *(&SelfUserGame[2].fields._MasterKind_k__BackingField + 1);
  v24 = MasterKind_k__BackingField;
  if ( !byte_4B1692D )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, v9);
    byte_4B1692D = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v11->static_fields->CommandCodeFrameMax;
  SelfUserGame = (UserServantMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (UserServantMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount(SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (UserServantMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (UserServantMaster_o *)DataManager__GetMasterData_object_(
                                          (DataManager_o *)SelfUserGame,
                                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (UserServantMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7130/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
  if ( !svtTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtNumLb = this->fields.svtNumLb;
  SelfUserGame = (UserServantMaster_o *)System_Int32__ToString((int32_t)&servantSum, 0LL);
  if ( !svtNumLb )
    goto LABEL_23;
  UILabel__set_text(svtNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtMaxLb = this->fields.svtMaxLb;
  SelfUserGame = (UserServantMaster_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !svtMaxLb )
    goto LABEL_23;
  UILabel__set_text(svtMaxLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqTitleLb = this->fields.svtEqTitleLb;
  SelfUserGame = (UserServantMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7129/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
  if ( !svtEqTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtEqTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqNumLb = this->fields.svtEqNumLb;
  SelfUserGame = (UserServantMaster_o *)System_Int32__ToString((int32_t)&servantEquipSum[1], 0LL);
  if ( !svtEqNumLb )
    goto LABEL_23;
  UILabel__set_text(svtEqNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqMaxLb = this->fields.svtEqMaxLb;
  SelfUserGame = (UserServantMaster_o *)System_Int32__ToString((int32_t)&v23, 0LL);
  if ( !svtEqMaxLb
    || (UILabel__set_text(svtEqMaxLb, (System_String_o *)SelfUserGame, 0LL),
        CcNumLb = this->fields.CcNumLb,
        SelfUserGame = (UserServantMaster_o *)System_Int32__ToString((int32_t)servantEquipSum, 0LL),
        !CcNumLb)
    || (UILabel__set_text(CcNumLb, (System_String_o *)SelfUserGame, 0LL),
        CcMaxLb = this->fields.CcMaxLb,
        SelfUserGame = (UserServantMaster_o *)System_Int32__ToString((int32_t)&CommandCodeFrameMax, 0LL),
        !CcMaxLb) )
  {
LABEL_23:
    sub_1BCB254(SelfUserGame, v9);
  }
  UILabel__set_text(CcMaxLb, (System_String_o *)SelfUserGame, 0LL);
}


void __fastcall SummonResultComponent__showResCcDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4B18B04 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, usrSvtId);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_SummonResultComponent___c__DisplayClass78_0__showResCcDetail_b__0__, v7);
    sub_1BCAFF8(&SummonResultComponent___c__DisplayClass78_0_TypeInfo, v8);
    byte_4B18B04 = 1;
  }
  v9 = sub_1BCB244(SummonResultComponent___c__DisplayClass78_0_TypeInfo);
  SummonResultComponent___c__DisplayClass78_0___ctor((SummonResultComponent___c__DisplayClass78_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass78_0__showResCcDetail_b__0__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1BCB254(v10, v11);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall SummonResultComponent__showResSvtDetail(
        SummonResultComponent_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_4B18B03 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, usrSvtId);
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_SummonResultComponent___c__DisplayClass77_0__showResSvtDetail_b__0__, v7);
    sub_1BCAFF8(&SummonResultComponent___c__DisplayClass77_0_TypeInfo, v8);
    byte_4B18B03 = 1;
  }
  v9 = sub_1BCB244(SummonResultComponent___c__DisplayClass77_0_TypeInfo);
  SummonResultComponent___c__DisplayClass77_0___ctor((SummonResultComponent___c__DisplayClass77_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass77_0__showResSvtDetail_b__0__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1BCB254(v10, v11);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall SummonResultComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B18B0D & 1) == 0 )
  {
    sub_1BCAFF8(&SummonResultComponent___c_TypeInfo, v1);
    byte_4B18B0D = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(SummonResultComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonResultComponent___c_TypeInfo->static_fields->__9 = (struct SummonResultComponent___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)SummonResultComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, elm);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  int64_t usrSvtId; // x20
  Il2CppObject *_4__this; // x22
  CommonUI_o *v9; // x19
  ServantStatusDialog_EndDelegate_o *v10; // x21
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  CommonUI_o *v13; // x19

  if ( (byte_4B18B0E & 1) == 0 )
  {
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, method);
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BCAFF8(&Method_SummonResultComponent_DialogCallBack__, v5);
    byte_4B18B0E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v9 = (CommonUI_o *)Instance;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v10, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v9 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_30772988(v9, 8, usrSvtId, v10, 0LL, 0LL);
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)v11;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v13 )
LABEL_8:
    sub_1BCB254(v11, v12);
  CommonUI__maskFadein(v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x20
  Il2CppObject *v12; // x0
  Il2CppObject *_4__this; // x22
  CommonUI_o *v14; // x19
  ServantStatusDialog_EndDelegate_o *v15; // x21
  CommonUI_o *v16; // x19

  if ( (byte_4B18B0F & 1) == 0 )
  {
    sub_1BCAFF8(&AvalonSceneManager_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&Method_SummonResultComponent_DialogCallBack__, v8);
    byte_4B18B0F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_32CA35C *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v14 = (CommonUI_o *)v12;
  v15 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v15, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v14 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_30776372(v14, 0, (UserCommandCodeEntity_o *)Entity, v15, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v16 )
LABEL_10:
    sub_1BCB254(Instance, v10);
  CommonUI__maskFadein(v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
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