void __fastcall SummonResultComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonResultComponent_StaticFields *static_fields; // x8
  struct SummonResultComponent_StaticFields *v3; // x8

  if ( (byte_48DF259 & 1) == 0 )
  {
    sub_1B00CCC(&SummonResultComponent_TypeInfo, v1);
    byte_48DF259 = 1;
  }
  static_fields = SummonResultComponent_TypeInfo->static_fields;
  static_fields->TUTORIAL_BACK_ARROW_RECT.fields.m_Height = 60.0;
  *(_OWORD *)&static_fields->TUTORIAL_BACK_ARROW_WAY = xmmword_B70670;
  v3 = SummonResultComponent_TypeInfo->static_fields;
  *(_OWORD *)&v3->SUMMON_BTN_LABEL_WIDTH_CONDENSE = xmmword_B71660;
  *(_OWORD *)&v3->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = xmmword_B70FC0;
  *(_QWORD *)&v3->SMALL_FONT_SIZE = 0x2F000000017LL;
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

  if ( (byte_48DF258 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SummonResultComponent_CheckLimitOver__, method);
    sub_1B00CCC(&StringLiteral_5434/*"END_SUMMON"*/, v3);
    sub_1B00CCC(&StringLiteral_8167/*"LIMIT_OVER"*/, v4);
    byte_48DF258 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B00F28(0LL, method);
  if ( this->fields.isLimitOver )
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_8167/*"LIMIT_OVER"*/, 0LL);
    v6 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B00CE4(Method_SummonResultComponent_CheckLimitOver__);
    v7 = 2;
  }
  else
  {
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5434/*"END_SUMMON"*/, 0LL);
    v6 = Method_SummonResultComponent_CheckLimitOver__;
    if ( (*((_BYTE *)Method_SummonResultComponent_CheckLimitOver__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B00CE4(Method_SummonResultComponent_CheckLimitOver__);
    v7 = 0;
  }
  v8 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, v7, 0LL);
}


void __fastcall SummonResultComponent__ClearTouchBlocker(SummonResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *blocker; // x20
  ServantStatusBattleListViewItem_o *p_blocker; // x19
  UnityEngine_Object_o *klass; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DF250 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48DF250 = 1;
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
    UnityEngine_Object__Destroy_68077656(klass, 0LL);
    p_blocker->klass = 0LL;
    sub_1B00C70(p_blocker, 0, v6, v7);
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

  if ( (byte_48DF255 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, flg);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B00CCC(&Method_SummonResultComponent__DialogCallBack_b__65_0__, v6);
    byte_48DF255 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SummonResultComponent__DialogCallBack_b__65_0__, 0LL);
  if ( !v9 )
    sub_1B00F28(v12, v13);
  CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


void __fastcall SummonResultComponent__EndCloseDialogCallBack(SummonResultComponent_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall SummonResultComponent__GetIsBonusGift(
        SummonResultComponent_o *this,
        System_String_o **title,
        System_String_o **message,
        float *pos_x,
        GiftEntity_o *giftEntity,
        ItemEntity_o *itemEntity,
        int32_t giftResultType,
        int32_t giftBonusType,
        const MethodInfo *method)
{
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
  int32_t v29; // w2
  int32_t v30; // w3
  UILabel_o *extraGiftMsg2Lb; // x0
  __int64 v32; // x1
  struct SummonControl_o *summonCtrl; // x8
  struct GachaRqParamData_o *gachaParamData; // x8
  bool result; // w0
  System_String_o *v36; // x22
  _QWORD *v37; // x23
  __int64 v38; // x8
  __int64 v39; // x0
  __int64 v40; // x0
  System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x0
  System_String_o *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  SummonResultComponent_c *v48; // x0
  int32_t SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX; // s0
  int32_t summonBeforeMana; // w25
  BalanceConfig_c *v51; // x0
  int32_t ManaMax; // w8
  System_String_o *v53; // x23
  _QWORD *v54; // x24
  __int64 v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0
  System_String_o *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x21
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  SummonResultComponent_c *v69; // x0
  System_String_o *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x21
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x4
  Il2CppObject *v77; // x0
  System_String_o *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  SummonResultComponent_c *v81; // x0
  int32_t v82; // w25
  int32_t v83; // w24
  System_String_o *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x0
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  int32_t v91; // w8
  System_String_o *v92; // x21
  Il2CppObject *v93; // x0
  System_String_o *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  UILabel_o *extraGiftTitleLb; // x20
  int32_t num; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v99; // [xsp+18h] [xbp-58h] BYREF
  int32_t v100; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_48DF24F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Empty_object___, title);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v17);
    sub_1B00CCC(&int_TypeInfo, v18);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v19);
    sub_1B00CCC(&SummonResultComponent_TypeInfo, v20);
    sub_1B00CCC(&StringLiteral_12128/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, v21);
    sub_1B00CCC(&StringLiteral_12132/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_MSG"*/, v22);
    sub_1B00CCC(&StringLiteral_12130/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, v23);
    sub_1B00CCC(&StringLiteral_12134/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, v24);
    sub_1B00CCC(&StringLiteral_12133/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_TITLE"*/, v25);
    sub_1B00CCC(&StringLiteral_12129/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, v26);
    sub_1B00CCC(&StringLiteral_1/*""*/, v27);
    sub_1B00CCC(&StringLiteral_12131/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, v28);
    byte_48DF24F = 1;
  }
  *title = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)title, (int32_t)StringLiteral_1/*""*/, (int32_t)message, (int32_t)pos_x);
  *message = (System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)message, (int32_t)StringLiteral_1/*""*/, v29, v30);
  *pos_x = 0.0;
  summonCtrl = this->fields.summonCtrl;
  if ( !summonCtrl )
    goto LABEL_62;
  gachaParamData = summonCtrl->fields.gachaParamData;
  if ( !gachaParamData )
    goto LABEL_62;
  result = 0;
  if ( itemEntity && giftEntity && gachaParamData->fields.gachaType != 5 )
  {
    if ( giftBonusType != 1 )
    {
      if ( giftBonusType == 2 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_12133/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_TITLE"*/, 0LL);
        v37 = Method_System_Array_Empty_object___;
        v38 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
        if ( !v38 )
        {
          sub_1B52C04(Method_System_Array_Empty_object___);
          v38 = v37[7];
        }
        v39 = *(_QWORD *)(v38 + 16);
        if ( (*(_BYTE *)(v39 + 309) & 1) == 0 )
          v39 = sub_1B52BA8(v39);
        if ( !*(_DWORD *)(v39 + 224) )
          j_il2cpp_runtime_class_init_0(v39);
        v40 = *(_QWORD *)(v37[7] + 16LL);
        if ( (*(_BYTE *)(v40 + 309) & 1) == 0 )
          v40 = sub_1B52BA8(v40);
        v41 = System_String__Format_60340256(v36, **(System_Object_array ***)(v40 + 184), 0LL);
        *title = v41;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)title, (int32_t)v41, v42, v43);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_12132/*"SUMMON_BOUNS_ITEM_GIFTS_SEND_BOX_MSG"*/, 0LL);
        v45 = System_String__Format(v44, (Il2CppObject *)itemEntity->fields.name, 0LL);
        *message = v45;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)message, (int32_t)v45, v46, v47);
        v48 = SummonResultComponent_TypeInfo;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          v48 = SummonResultComponent_TypeInfo;
        }
        SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v48->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX;
        goto LABEL_45;
      }
      return 0;
    }
    if ( giftResultType != 3 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_12134/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
      *title = v70;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)title, (int32_t)v70, v71, v72);
      v73 = LocalizationManager__Get((System_String_o *)StringLiteral_12129/*"SUMMON_BOUNS_ITEMS_GIFTS_MSG"*/, 0LL);
      num = giftEntity->fields.num;
      v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &num, v74, v75, v76);
      v78 = System_String__Format(v73, v77, 0LL);
      *message = v78;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)message, (int32_t)v78, v79, v80);
      v81 = SummonResultComponent_TypeInfo;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v81 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v81->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
      goto LABEL_45;
    }
    summonBeforeMana = this->fields.summonBeforeMana;
    v51 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v51 = BalanceConfig_TypeInfo;
    }
    ManaMax = v51->static_fields->ManaMax;
    if ( summonBeforeMana == ManaMax )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12131/*"SUMMON_BOUNS_ITEM_GIFTS_MAX_TITLE"*/, 0LL);
      v54 = Method_System_Array_Empty_object___;
      v55 = *((_QWORD *)Method_System_Array_Empty_object___ + 7);
      if ( !v55 )
      {
        sub_1B52C04(Method_System_Array_Empty_object___);
        v55 = v54[7];
      }
      v56 = *(_QWORD *)(v55 + 16);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1B52BA8(v56);
      if ( !*(_DWORD *)(v56 + 224) )
        j_il2cpp_runtime_class_init_0(v56);
      v57 = *(_QWORD *)(v54[7] + 16LL);
      if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
        v57 = sub_1B52BA8(v57);
      v58 = System_String__Format_60340256(v53, **(System_Object_array ***)(v57 + 184), 0LL);
      *title = v58;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)title, (int32_t)v58, v59, v60);
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12128/*"SUMMON_BOUNS_ITEMS_GIFTS_MAX_MSG"*/, 0LL);
      v100 = giftEntity->fields.num;
      v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100, v62, v63, v64);
      v66 = System_String__Format(v61, v65, 0LL);
      *message = v66;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)message, (int32_t)v66, v67, v68);
      v69 = SummonResultComponent_TypeInfo;
      if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        v69 = SummonResultComponent_TypeInfo;
      }
      SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = v69->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
      goto LABEL_45;
    }
    v82 = this->fields.summonBeforeMana;
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = BalanceConfig_TypeInfo;
      ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
    }
    if ( v82 >= ManaMax )
      return 0;
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      ManaMax = BalanceConfig_TypeInfo->static_fields->ManaMax;
    }
    v83 = ManaMax - this->fields.summonBeforeMana;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v84 = LocalizationManager__Get((System_String_o *)StringLiteral_12134/*"SUMMON_BOUNS_ITEM_GIFTS_TITLE"*/, 0LL);
    *title = v84;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)title, (int32_t)v84, v85, v86);
    v87 = LocalizationManager__Get((System_String_o *)StringLiteral_12130/*"SUMMON_BOUNS_ITEMS_GIFTS_SOME_MSG"*/, 0LL);
    v91 = giftEntity->fields.num;
    v92 = v87;
    if ( v91 > v83 )
      v91 = v83;
    v99 = v91;
    v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v88, v89, v90);
    v94 = System_String__Format(v92, v93, 0LL);
    *message = v94;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)message, (int32_t)v94, v95, v96);
    extraGiftTitleLb = this->fields.extraGiftTitleLb;
    extraGiftMsg2Lb = (UILabel_o *)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( extraGiftTitleLb )
    {
      UILabel__set_fontSize(extraGiftTitleLb, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0LL);
      extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
      if ( extraGiftMsg2Lb )
      {
        UILabel__set_fontSize(extraGiftMsg2Lb, SummonResultComponent_TypeInfo->static_fields->SMALL_FONT_SIZE, 0LL);
        SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX = SummonResultComponent_TypeInfo->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_SOME;
LABEL_45:
        result = 1;
        *pos_x = (float)SUMMON_RESULT_TITLE_LABEL_POSITION_X_SEND_BOX;
        return result;
      }
    }
LABEL_62:
    sub_1B00F28(extraGiftMsg2Lb, v32);
  }
  return result;
}


void __fastcall SummonResultComponent__SetBonusGiftPos(
        SummonResultComponent_o *this,
        float titleX,
        float msgX,
        float posX,
        const MethodInfo *method)
{
  UnityEngine_Component_o *extraGiftTitleLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  float v13; // s9
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0

  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftTitleLb;
  if ( !extraGiftTitleLb )
    goto LABEL_7;
  gameObject = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, posX, 0LL);
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsgIconComp;
  if ( !extraGiftTitleLb )
    goto LABEL_7;
  v11 = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  GameObjectExtensions__SetLocalPositionX(v11, 0.0, 0LL);
  extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsgSpr;
  if ( !extraGiftTitleLb
    || (v12 = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL),
        GameObjectExtensions__SetLocalPositionX(v12, 0.0, 0LL),
        (extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsgSpr) == 0LL)
    || (v13 = (float)((float)SLODWORD(extraGiftTitleLb[7].klass) + titleX) + posX,
        v14 = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL),
        GameObjectExtensions__SetLocalPositionX(v14, v13 + -1.0, 0LL),
        (extraGiftTitleLb = (UnityEngine_Component_o *)this->fields.extraGiftMsg2Lb) == 0LL) )
  {
LABEL_7:
    sub_1B00F28(extraGiftTitleLb, method);
  }
  v15 = UnityEngine_Component__get_gameObject(extraGiftTitleLb, 0LL);
  GameObjectExtensions__SetLocalPositionX(v15, v13 + msgX, 0LL);
}


void __fastcall SummonResultComponent___DialogCallBack_b__65_0(SummonResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x19

  if ( (byte_48DF25A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonResultComponent_EndCloseDialogCallBack__, v5);
    byte_48DF25A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SummonResultComponent_EndCloseDialogCallBack__, 0LL);
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
  v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)v8;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v10 )
LABEL_8:
    sub_1B00F28(v8, v9);
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

  if ( (byte_48DF251 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, *(_QWORD *)&svtId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_48DF251 = 1;
  }
  befSvtList = this->fields.befSvtList;
  if ( !befSvtList )
LABEL_9:
    sub_1B00F28(befSvtList, *(_QWORD *)&svtId);
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
               (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__) == svtId;
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
  UnityEngine_Component_o *fstGrid; // x0
  int32_t childCount; // w0
  int v6; // w22
  UnityEngine_Object_o *gameObject; // x20
  int32_t v8; // w0
  int v9; // w22
  UnityEngine_Object_o *v10; // x20

  if ( (byte_48DF256 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_1/*""*/, v3);
    byte_48DF256 = 1;
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
    v6 = childCount + 1;
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
                                             v6 - 2,
                                             0LL);
      if ( !fstGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
      if ( --v6 <= 1 )
        goto LABEL_13;
    }
LABEL_26:
    sub_1B00F28(fstGrid, method);
  }
LABEL_13:
  fstGrid = (UnityEngine_Component_o *)this->fields.scdGrid;
  if ( !fstGrid )
    goto LABEL_26;
  fstGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(fstGrid, 0LL);
  if ( !fstGrid )
    goto LABEL_26;
  v8 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)fstGrid, 0LL);
  if ( v8 >= 1 )
  {
    v9 = v8 + 1;
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
                                             v9 - 2,
                                             0LL);
      if ( !fstGrid )
        goto LABEL_26;
      v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(fstGrid, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68077656(v10, 0LL);
    }
    while ( --v9 > 1 );
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
  GachaInfos_array *v9; // x28
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
  __int64 changeSceneBtnInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  int max_length; // s8
  struct UIGrid_o *fstGrid; // x8
  float cellWidth; // s10
  struct UIGrid_o *scdGrid; // x9
  struct UIGrid_o **p_scdGrid; // x22
  float v39; // s9
  int maxPerLine; // s11
  System_Collections_Generic_List_int__o *v41; // x24
  int32_t v42; // w2
  int32_t v43; // w3
  int v44; // w8
  __int64 v45; // x20
  GachaInfos_o **m_Items; // x23
  struct UIGrid_o **p_fstGrid; // x8
  GachaInfos_o *v48; // x25
  UnityEngine_GameObject_o *targetGo; // x26
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v51; // x26
  UnityEngine_Transform_o *v52; // x27
  const MethodInfo *v53; // x2
  GachaInfos_array *v54; // x24
  int32_t objectId; // w28
  bool v56; // w27
  bool IsCommandCode; // w28
  SummonResultInfoComponent_ClickDelegate_o *v58; // x0
  const MethodInfo *v59; // x3
  _QWORD *v60; // x8
  bool v61; // zf
  SummonResultInfoComponent_ClickDelegate_o *v62; // x28
  const MethodInfo *v63; // x6
  int32_t sellQp; // w26
  int32_t summonBeforeQp; // w27
  int QpMax; // w8
  int32_t sellMana; // w26
  int32_t summonBeforeMana; // w27
  int UserItemMax; // w8
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  float v73; // s12
  float v74; // s11
  float v75; // s8
  float v76; // s3
  float v77; // s0
  struct UILabel_o *autoSaleMsgLb; // x23
  System_String_o *v79; // x1
  UILabel_o *extraGiftMsgLb; // x23
  __int64 v81; // x8
  GiftEntity_o *DataById; // x22
  ItemEntity_o *v83; // x23
  struct UISprite_o *extraGiftMsgSpr; // x8
  GachaExtraGifts_o *v85; // x8
  struct UILabel_o *extraGiftMsg2Lb; // x8
  int32_t mWidth; // w20
  UIWidget_o *v88; // x21
  struct UIGrid_o *v89; // x8
  int v90; // s9
  int v91; // s10
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL; // s8
  float v93; // s9
  float v94; // s10
  bool v95; // w1
  char v96; // w9
  int32_t v97; // w24
  int32_t v98; // w20
  int32_t gachaExtraGiftResultType; // w23
  il2cpp_array_size_t v100; // w12
  il2cpp_array_size_t v101; // w11
  GachaExtraGifts_o *v102; // x14
  int32_t gachaExtraGiftBonusType; // w13
  GiftEntity_o *v104; // x21
  ItemEntity_o *v105; // x22
  struct UISprite_o *v106; // x8
  struct UILabel_o *v107; // x8
  struct UILabel_o *v108; // x9
  bool v109; // w21
  char v110; // w20
  UnityEngine_GameObject_o *v111; // x0
  char v112; // w1
  float SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX; // s0
  struct UILabel_o *extraGiftTitleLb; // x8
  struct UILabel_o *v115; // x9
  const MethodInfo *v116; // x2
  const MethodInfo *v117; // [xsp+0h] [xbp-C0h]
  GachaExtraGifts_array *v118; // [xsp+10h] [xbp-B0h]
  struct System_Collections_Generic_List_int__o **p_befSvtList; // [xsp+18h] [xbp-A8h]
  char v120; // [xsp+20h] [xbp-A0h]
  float pos_x; // [xsp+24h] [xbp-9Ch] BYREF
  System_String_o *message; // [xsp+28h] [xbp-98h] BYREF
  System_String_o *title; // [xsp+38h] [xbp-88h] BYREF
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4

  v9 = resultList;
  if ( (byte_48DF24D & 1) == 0 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, resultList);
    sub_1B00CCC(&SummonResultInfoComponent_ClickDelegate_TypeInfo, v11);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v12);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GiftMaster___, v13);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ItemMaster___, v14);
    sub_1B00CCC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v15);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_Collider___, v16);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v19);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v20);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v21);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B00CCC(&Method_SummonResultComponent_showResCcDetail__, v23);
    sub_1B00CCC(&Method_SummonResultComponent_showResSvtDetail__, v24);
    sub_1B00CCC(&SummonResultComponent_TypeInfo, v25);
    sub_1B00CCC(&StringLiteral_12143/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, v26);
    sub_1B00CCC(&StringLiteral_12165/*"SUMMON_RESULT_AUTOSALE_MSG"*/, v27);
    sub_1B00CCC(&StringLiteral_1/*""*/, v28);
    byte_48DF24D = 1;
  }
  title = 0LL;
  message = 0LL;
  pos_x = 0.0;
  changeSceneBtnInfo = (__int64)this->fields.changeSceneBtnInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.closeInfo;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.backImg;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  changeSceneBtnInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.formationBtnLabel;
  this->fields.dispType = type;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(gameObject, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.combineBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v31, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.summonBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v32, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.sellBtnLabel;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
  changeSceneBtnInfo = (__int64)GameObjectExtensions__GetParent(v33, 0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeSceneBtnInfo, 0, 0LL);
  if ( v9 )
  {
    SummonResultComponent__setCenter(this, (const MethodInfo *)resultList);
    max_length = v9->max_length;
    fstGrid = this->fields.fstGrid;
    if ( !fstGrid )
      goto LABEL_203;
    cellWidth = fstGrid->fields.cellWidth;
    p_scdGrid = &this->fields.scdGrid;
    scdGrid = this->fields.scdGrid;
    if ( !scdGrid )
      goto LABEL_203;
    v118 = gachaExtraGiftList;
    v39 = scdGrid->fields.cellWidth;
    maxPerLine = fstGrid->fields.maxPerLine;
    v41 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v41,
      (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
    this->fields.befSvtList = v41;
    p_befSvtList = &this->fields.befSvtList;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.befSvtList, (int32_t)v41, v42, v43);
    v44 = v9->max_length;
    if ( v44 >= 1 )
    {
      v120 = 0;
      v45 = 0LL;
      m_Items = v9->m_Items;
      while ( (unsigned int)v45 < v44 )
      {
        if ( (unsigned int)v45 >= 6 )
          p_fstGrid = &this->fields.scdGrid;
        else
          p_fstGrid = &this->fields.fstGrid;
        changeSceneBtnInfo = (__int64)*p_fstGrid;
        if ( !*p_fstGrid )
          goto LABEL_203;
        v48 = m_Items[v45];
        targetGo = this->fields.targetGo;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
        changeSceneBtnInfo = (__int64)BaseMonoBehaviour__createObject(
                                        (BaseMonoBehaviour_o *)this,
                                        targetGo,
                                        transform,
                                        0LL,
                                        0LL);
        if ( !changeSceneBtnInfo )
          goto LABEL_203;
        v51 = (UnityEngine_GameObject_o *)changeSceneBtnInfo;
        changeSceneBtnInfo = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)changeSceneBtnInfo,
                                        0LL);
        v52 = (UnityEngine_Transform_o *)changeSceneBtnInfo;
        if ( !byte_48DD9F6 )
        {
          changeSceneBtnInfo = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, resultList);
          byte_48DD9F6 = 1;
        }
        if ( !v52 )
          goto LABEL_203;
        UnityEngine_Transform__set_localScale(v52, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        if ( !v48 )
          goto LABEL_203;
        v54 = v9;
        if ( v48->fields.isNew
          && (objectId = v48->fields.objectId, !SummonResultComponent__checkOverlapSvt(this, objectId, v53)) )
        {
          changeSceneBtnInfo = (__int64)*p_befSvtList;
          if ( !*p_befSvtList )
            goto LABEL_203;
          v70 = *(_QWORD *)(changeSceneBtnInfo + 16);
          v71 = Method_System_Collections_Generic_List_int__Add__;
          ++*(_DWORD *)(changeSceneBtnInfo + 28);
          if ( !v70 )
            goto LABEL_203;
          v72 = *(int *)(changeSceneBtnInfo + 24);
          if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)changeSceneBtnInfo,
              objectId,
              *(const MethodInfo_33A49AC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
            v56 = 0;
          }
          else
          {
            v56 = 0;
            *(_DWORD *)(changeSceneBtnInfo + 24) = v72 + 1;
            *(_DWORD *)(v70 + 4 * v72 + 32) = objectId;
          }
        }
        else
        {
          v56 = 1;
        }
        IsCommandCode = SvtType__IsCommandCode(v48->fields.type, 0LL);
        v58 = (SummonResultInfoComponent_ClickDelegate_o *)sub_1B00F18(SummonResultInfoComponent_ClickDelegate_TypeInfo);
        v60 = &Method_SummonResultComponent_showResCcDetail__;
        v61 = !IsCommandCode;
        v62 = v58;
        if ( v61 )
          v60 = &Method_SummonResultComponent_showResSvtDetail__;
        SummonResultInfoComponent_ClickDelegate___ctor(v58, (Il2CppObject *)this, *v60, v59);
        if ( v48->fields.sellMana || v48->fields.sellQp )
        {
          v62 = 0LL;
          v120 = 1;
        }
        changeSceneBtnInfo = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                        v51,
                                        (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_SummonResultInfoComponent___);
        if ( !changeSceneBtnInfo )
          goto LABEL_203;
        SummonResultInfoComponent__setResultData(
          (SummonResultInfoComponent_o *)changeSceneBtnInfo,
          v48,
          v56,
          v62,
          this->fields.summonBeforeQp,
          this->fields.summonBeforeMana,
          v63);
        changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        sellQp = v48->fields.sellQp;
        summonBeforeQp = this->fields.summonBeforeQp;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        }
        v9 = v54;
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
          QpMax = this->fields.summonBeforeQp + v48->fields.sellQp;
        }
        this->fields.summonBeforeQp = QpMax;
        sellMana = v48->fields.sellMana;
        summonBeforeMana = this->fields.summonBeforeMana;
        if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
        {
          j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
          changeSceneBtnInfo = (__int64)BalanceConfig_TypeInfo;
        }
        UserItemMax = *(_DWORD *)(*(_QWORD *)(changeSceneBtnInfo + 184) + 68LL);
        if ( summonBeforeMana + sellMana >= UserItemMax )
        {
          if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
          }
        }
        else
        {
          UserItemMax = this->fields.summonBeforeMana + v48->fields.sellMana;
        }
        this->fields.summonBeforeMana = UserItemMax;
        v44 = v54->max_length;
        if ( (int)++v45 >= v44 )
          goto LABEL_64;
      }
LABEL_204:
      sub_1B00F30(changeSceneBtnInfo, resultList);
    }
    v120 = 0;
LABEL_64:
    changeSceneBtnInfo = (__int64)this->fields.fstGrid;
    v73 = (float)max_length;
    v74 = (float)maxPerLine;
    v75 = (float)max_length <= v74 ? 22.0 : 106.0;
    if ( !changeSceneBtnInfo )
      goto LABEL_203;
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)changeSceneBtnInfo,
                                    0LL);
    gachaExtraGiftList = v118;
    if ( !changeSceneBtnInfo )
      goto LABEL_203;
    v76 = v73 <= v74 ? v73 : v74;
    v124.fields.x = (float)(cellWidth * -0.5) * (float)(v76 + -1.0);
    v124.fields.y = v75;
    v124.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v124, 0LL);
    changeSceneBtnInfo = (__int64)this->fields.fstGrid;
    if ( !changeSceneBtnInfo )
      goto LABEL_203;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)changeSceneBtnInfo + 440LL))(
      changeSceneBtnInfo,
      *(_QWORD *)(*(_QWORD *)changeSceneBtnInfo + 448LL));
    changeSceneBtnInfo = (__int64)*p_scdGrid;
    if ( !*p_scdGrid )
      goto LABEL_203;
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_transform(
                                    (UnityEngine_Component_o *)changeSceneBtnInfo,
                                    0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_203;
    v77 = (float)(v73 - v74) + -1.0;
    if ( v73 <= v74 )
      v77 = -1.0;
    v125.fields.x = (float)(v39 * -0.5) * v77;
    v125.fields.y = -62.0;
    v125.fields.z = this->fields.center.fields.z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)changeSceneBtnInfo, v125, 0LL);
    changeSceneBtnInfo = (__int64)this->fields.scdGrid;
    if ( !changeSceneBtnInfo )
      goto LABEL_203;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)changeSceneBtnInfo + 440LL))(
      changeSceneBtnInfo,
      *(_QWORD *)(*(_QWORD *)changeSceneBtnInfo + 448LL));
    changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !changeSceneBtnInfo )
      goto LABEL_203;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
    changeSceneBtnInfo = (__int64)this->fields.autoSaleMsg;
    if ( !changeSceneBtnInfo )
      goto LABEL_203;
    if ( (v120 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
      autoSaleMsgLb = this->fields.autoSaleMsgLb;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      changeSceneBtnInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12165/*"SUMMON_RESULT_AUTOSALE_MSG"*/, 0LL);
      if ( !autoSaleMsgLb )
        goto LABEL_203;
      v79 = (System_String_o *)changeSceneBtnInfo;
      changeSceneBtnInfo = (__int64)autoSaleMsgLb;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
      changeSceneBtnInfo = (__int64)this->fields.autoSaleMsgLb;
      if ( !changeSceneBtnInfo )
        goto LABEL_203;
      v79 = (System_String_o *)StringLiteral_1/*""*/;
    }
    UILabel__set_text((UILabel_o *)changeSceneBtnInfo, v79, 0LL);
  }
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgIconComp;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 0, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UILabel__set_text((UILabel_o *)changeSceneBtnInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  changeSceneBtnInfo = (__int64)SummonResultComponent_TypeInfo;
  extraGiftMsgLb = this->fields.extraGiftMsgLb;
  if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
  if ( !extraGiftMsgLb )
    goto LABEL_203;
  UILabel__set_fontSize(extraGiftMsgLb, SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE, 0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  UILabel__set_fontSize(
    (UILabel_o *)changeSceneBtnInfo,
    SummonResultComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
    0LL);
  if ( extraGiftIds )
  {
    if ( gachaExtraGiftList )
    {
      v81 = *(_QWORD *)&extraGiftIds->max_length;
      if ( v81 )
      {
        pos_x = 0.0;
        title = (System_String_o *)StringLiteral_1/*""*/;
        message = (System_String_o *)StringLiteral_1/*""*/;
        if ( (_DWORD)v81 == 1 )
        {
          changeSceneBtnInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)changeSceneBtnInfo,
                                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !extraGiftIds->max_length )
            goto LABEL_204;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          DataById = GiftMaster__getDataById((GiftMaster_o *)changeSceneBtnInfo, extraGiftIds->m_Items[1], 0LL);
          changeSceneBtnInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)changeSceneBtnInfo,
                                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !DataById )
            goto LABEL_203;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)changeSceneBtnInfo,
                                          DataById->fields.objectId,
                                          (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          v83 = (ItemEntity_o *)changeSceneBtnInfo;
          changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          ItemIconComponent__SetItem((ItemIconComponent_o *)changeSceneBtnInfo, v83->fields.id, -1, 0LL);
          changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)changeSceneBtnInfo,
                                          0LL);
          extraGiftMsgSpr = this->fields.extraGiftMsgSpr;
          if ( !extraGiftMsgSpr )
            goto LABEL_203;
          GameObjectExtensions__SetLocalPositionX(
            (UnityEngine_GameObject_o *)changeSceneBtnInfo,
            (float)(extraGiftMsgSpr->fields.mWidth / 2),
            0LL);
          if ( !gachaExtraGiftList->max_length )
            goto LABEL_204;
          v85 = gachaExtraGiftList->m_Items[0];
          if ( !v85 )
            goto LABEL_203;
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  DataById,
                  v83,
                  v85->fields.gachaExtraGiftResultType,
                  v85->fields.gachaExtraGiftBonusType,
                  v117) )
          {
            v110 = 0;
LABEL_199:
            changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgIconComp;
            if ( changeSceneBtnInfo )
            {
              changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)changeSceneBtnInfo,
                                              0LL);
              if ( changeSceneBtnInfo )
              {
                v95 = v110;
                goto LABEL_202;
              }
            }
LABEL_203:
            sub_1B00F28(changeSceneBtnInfo, resultList);
          }
          changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          UILabel__set_text((UILabel_o *)changeSceneBtnInfo, title, 0LL);
          changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          UILabel__set_text((UILabel_o *)changeSceneBtnInfo, message, 0LL);
          changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          UILabel__UpdateCondensedScaleComponent((UILabel_o *)changeSceneBtnInfo, 0LL);
          extraGiftMsg2Lb = this->fields.extraGiftMsg2Lb;
          if ( !extraGiftMsg2Lb )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)SummonResultComponent_TypeInfo;
          mWidth = extraGiftMsg2Lb->fields.mWidth;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            changeSceneBtnInfo = (__int64)SummonResultComponent_TypeInfo;
          }
          if ( mWidth > *(_DWORD *)(*(_QWORD *)(changeSceneBtnInfo + 184) + 56LL) )
          {
            v88 = (UIWidget_o *)this->fields.extraGiftMsg2Lb;
            if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
              j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            if ( !v88 )
              goto LABEL_203;
            UIWidget__set_width(v88, SummonResultComponent_TypeInfo->static_fields->EXTRA_GIFT_MSG_2Lb_WIDTH_MAX, 0LL);
          }
          if ( !v9 )
            goto LABEL_203;
          v89 = this->fields.fstGrid;
          if ( !v89 )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)SummonResultComponent_TypeInfo;
          v90 = v9->max_length;
          v91 = v89->fields.maxPerLine;
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = pos_x;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            changeSceneBtnInfo = (__int64)SummonResultComponent_TypeInfo;
          }
          v93 = (float)v90;
          v94 = (float)v91;
          if ( SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL == (float)*(int *)(*(_QWORD *)(changeSceneBtnInfo + 184)
                                                                            + 32LL) )
          {
            if ( v93 <= v94 )
            {
              if ( *(_DWORD *)(changeSceneBtnInfo + 224) )
              {
                SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = (float)*(int *)(*(_QWORD *)(changeSceneBtnInfo + 184)
                                                                            + 32LL);
              }
              else
              {
                j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
                changeSceneBtnInfo = (__int64)SummonResultComponent_TypeInfo;
                SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = (float)SummonResultComponent_TypeInfo->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL;
              }
            }
            else
            {
              SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = -47.0;
            }
          }
          if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
          {
            j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
            changeSceneBtnInfo = (__int64)SummonResultComponent_TypeInfo;
          }
          SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = (float)*(int *)(*(_QWORD *)(changeSceneBtnInfo + 184) + 40LL);
          if ( SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL == SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX )
          {
            if ( v93 <= v94 )
            {
              if ( !*(_DWORD *)(changeSceneBtnInfo + 224) )
              {
                j_il2cpp_runtime_class_init_0(changeSceneBtnInfo);
                SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = (float)SummonResultComponent_TypeInfo->static_fields->SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
              }
            }
            else
            {
              SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX = -185.0;
            }
            SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
            pos_x = SUMMON_RESULT_TITLE_LABEL_POSITION_X_MAX;
          }
          extraGiftTitleLb = this->fields.extraGiftTitleLb;
          if ( !extraGiftTitleLb )
            goto LABEL_203;
          v115 = this->fields.extraGiftMsg2Lb;
          if ( !v115 )
            goto LABEL_203;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(extraGiftTitleLb->fields.mWidth / 2),
            (float)(v115->fields.mWidth / 2),
            SUMMON_RESULT_TITLE_LABEL_POSITION_X_NORMAL,
            (const MethodInfo *)resultList);
          changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgSpr;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)changeSceneBtnInfo,
                                          0LL);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
          changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)changeSceneBtnInfo,
                                          0LL);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
          changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)changeSceneBtnInfo,
                                          0LL);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          v112 = 1;
          v110 = 1;
LABEL_198:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, v112, 0LL);
          goto LABEL_199;
        }
        if ( (int)v81 < 1 )
          goto LABEL_207;
        v96 = 0;
        v97 = 0;
        v98 = 0;
        gachaExtraGiftResultType = 0;
        v100 = 0;
        do
        {
          if ( v100 >= gachaExtraGiftList->max_length )
            goto LABEL_204;
          v101 = v100;
          v102 = gachaExtraGiftList->m_Items[v100];
          if ( !v102 )
            goto LABEL_203;
          gachaExtraGiftBonusType = v102->fields.gachaExtraGiftBonusType;
          if ( !v97 && gachaExtraGiftBonusType == 2 )
          {
            v97 = extraGiftIds->m_Items[v100 + 1];
            gachaExtraGiftResultType = v102->fields.gachaExtraGiftResultType;
            v98 = 2;
          }
          ++v100;
          v96 |= gachaExtraGiftBonusType == 1;
        }
        while ( (_DWORD)v81 != v101 + 1 );
        if ( (v96 & 1) != 0 )
        {
          if ( !v97 )
            goto LABEL_171;
          changeSceneBtnInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)changeSceneBtnInfo,
                                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GiftMaster___);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          v104 = GiftMaster__getDataById((GiftMaster_o *)changeSceneBtnInfo, v97, 0LL);
          changeSceneBtnInfo = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)DataManager__GetMasterData_object_(
                                          (DataManager_o *)changeSceneBtnInfo,
                                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ItemMaster___);
          if ( !v104 )
            goto LABEL_203;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)changeSceneBtnInfo,
                                          v104->fields.objectId,
                                          (const MethodInfo_2FE6A4C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          v105 = (ItemEntity_o *)changeSceneBtnInfo;
          changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          ItemIconComponent__SetItem((ItemIconComponent_o *)changeSceneBtnInfo, v105->fields.id, -1, 0LL);
          changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgIconComp;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)changeSceneBtnInfo,
                                          0LL);
          v106 = this->fields.extraGiftMsgSpr;
          if ( !v106 )
            goto LABEL_203;
          GameObjectExtensions__SetLocalPositionX(
            (UnityEngine_GameObject_o *)changeSceneBtnInfo,
            (float)(v106->fields.mWidth / 2),
            0LL);
          if ( !SummonResultComponent__GetIsBonusGift(
                  this,
                  &title,
                  &message,
                  &pos_x,
                  v104,
                  v105,
                  gachaExtraGiftResultType,
                  v98,
                  v117) )
          {
LABEL_171:
            v109 = 0;
            v110 = 0;
LABEL_172:
            changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgIconComp;
            if ( !changeSceneBtnInfo )
              goto LABEL_203;
            v111 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)changeSceneBtnInfo, 0LL);
            GameObjectExtensions__SetLocalPositionX(v111, 0.0, 0LL);
            changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgSpr;
            if ( !changeSceneBtnInfo )
              goto LABEL_203;
            changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)changeSceneBtnInfo,
                                            0LL);
            if ( !changeSceneBtnInfo )
              goto LABEL_203;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, v109, 0LL);
            changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgLb;
            if ( !changeSceneBtnInfo )
              goto LABEL_203;
            changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)changeSceneBtnInfo,
                                            0LL);
            if ( !changeSceneBtnInfo )
              goto LABEL_203;
            v112 = !v109;
            goto LABEL_198;
          }
          changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          UILabel__set_text((UILabel_o *)changeSceneBtnInfo, title, 0LL);
          changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          UILabel__set_text((UILabel_o *)changeSceneBtnInfo, message, 0LL);
          v107 = this->fields.extraGiftTitleLb;
          if ( !v107 )
            goto LABEL_203;
          v108 = this->fields.extraGiftMsg2Lb;
          if ( !v108 )
            goto LABEL_203;
          SummonResultComponent__SetBonusGiftPos(
            this,
            (float)(v107->fields.mWidth / 2),
            (float)(v108->fields.mWidth / 2),
            pos_x,
            (const MethodInfo *)resultList);
          changeSceneBtnInfo = (__int64)this->fields.extraGiftTitleLb;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)changeSceneBtnInfo,
                                          0LL);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
          changeSceneBtnInfo = (__int64)this->fields.extraGiftMsg2Lb;
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)changeSceneBtnInfo,
                                          0LL);
          if ( !changeSceneBtnInfo )
            goto LABEL_203;
          v109 = 1;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, 1, 0LL);
        }
        else
        {
LABEL_207:
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          changeSceneBtnInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12143/*"SUMMON_EXTRA_ITEM_GIFTS_MSG"*/, 0LL);
          if ( !this->fields.extraGiftMsgLb )
            goto LABEL_203;
          UILabel__set_text(this->fields.extraGiftMsgLb, (System_String_o *)changeSceneBtnInfo, 0LL);
          v109 = 0;
        }
        v110 = 1;
        goto LABEL_172;
      }
    }
  }
  changeSceneBtnInfo = (__int64)this->fields.extraGiftMsgIconComp;
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  changeSceneBtnInfo = (__int64)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)changeSceneBtnInfo,
                                  0LL);
  if ( !changeSceneBtnInfo )
    goto LABEL_203;
  v95 = 0;
LABEL_202:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeSceneBtnInfo, v95, 0LL);
  SummonResultComponent__setListByType(this, this->fields.dispType, v116);
}


void __fastcall SummonResultComponent__onClickNext(SummonResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_48DF257 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_11946/*"SHOW_TALK"*/, method);
    byte_48DF257 = 1;
  }
  if ( this->fields.dispType != 1 )
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1B00F28(0LL, method);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_11946/*"SHOW_TALK"*/, 0LL);
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
    sub_1B00F28(mWidget, method);
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
    sub_1B00F30(mWidget, method);
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
  int64_t closeInfo; // x0
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
  int32_t gachaId; // w22
  __int64 v55; // x0
  __int64 v56; // x0
  Il2CppObject *MasterData_object; // x23
  Il2CppObject *Master_object; // x24
  System_String_o *v59; // x22
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  UILabel_o *v63; // x23
  Il2CppObject *v64; // x0
  int32_t AppendSummonState; // w0
  UserGameEntity_o *SelfUserGame; // x22
  __int64 v67; // x8
  __int64 v68; // x0
  int v69; // w23
  SummonControl_c *v70; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w22
  bool v72; // w0
  Il2CppObject *v73; // x0
  Il2CppObject *v74; // x22
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  UILabel_o *v78; // x22
  Il2CppObject *v79; // x0
  Il2CppObject *v80; // x21
  UserItemEntity_o *v81; // x0
  UILabel_o *v82; // x21
  struct UILabel_o *v83; // x21
  System_String_o *v84; // x1
  int32_t monitor_high; // w9
  UILabel_o *v86; // x21
  UILabel_o *v87; // x21
  UILabel_o *v88; // x21
  int32_t SUMMON_BTN_LABEL_WIDTH_CONDENSE2; // w1
  UILabel_o *v90; // x22
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x0
  struct SummonControl_o *v95; // x8
  struct SummonControl_o *v96; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v98; // x0
  UnityEngine_GameObject_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  Il2CppObject *touchBlocker; // x21
  Il2CppObject *v102; // x0
  struct UnityEngine_GameObject_o **p_blocker; // x21
  int32_t v104; // w2
  int32_t v105; // w3
  UnityEngine_GameObject_o *blocker; // x22
  UnityEngine_GameObject_o *v107; // x0
  UnityEngine_Component_o *Parent; // x0
  SummonResultComponent_c *v109; // x0
  struct SummonResultComponent_StaticFields *static_fields; // x8
  float m_YMin; // s10
  float m_XMin; // s12
  float m_Height; // s8
  float m_Width; // s9
  float OffsetX; // s0
  float v116; // s11
  float v117; // s11
  UnityEngine_Vector2_o TutorialBackArrowPos; // kr00_8
  float v119; // s14
  int32_t gachaTime; // [xsp+4h] [xbp-BCh] BYREF
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-B8h] BYREF
  Il2CppObject *v122; // [xsp+10h] [xbp-B0h] BYREF
  UserGachaEntity_o *entity; // [xsp+18h] [xbp-A8h] BYREF
  int32_t maxNum[2]; // [xsp+28h] [xbp-98h] BYREF
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

  v3 = type;
  if ( (byte_48DF24E & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, *(_QWORD *)&type);
    sub_1B00CCC(&Method_DataManager_GetMasterData_GachaMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TblUserMaster___, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMaster_GachaAppendMaster___, v8);
    sub_1B00CCC(&Method_DataManager_GetMaster_GachaMaster___, v9);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserGachaExtraCountMaster___, v10);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserGachaMaster___, v11);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserItemMaster___, v12);
    sub_1B00CCC(&DataManager_TypeInfo, v13);
    sub_1B00CCC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, v14);
    sub_1B00CCC(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v15);
    sub_1B00CCC(&FSUtility_TypeInfo, v16);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___, v17);
    sub_1B00CCC(&int_TypeInfo, v18);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v19);
    sub_1B00CCC(&NetworkManager_TypeInfo, v20);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject___, v21);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v22);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v23);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B00CCC(&SummonControl_TypeInfo, v26);
    sub_1B00CCC(&SummonResultComponent_TypeInfo, v27);
    sub_1B00CCC(&TutorialFlag_TypeInfo, v28);
    sub_1B00CCC(&UserGachaMaster_TypeInfo, v29);
    sub_1B00CCC(&StringLiteral_12114/*"SUMMON_APPEND_END"*/, v30);
    sub_1B00CCC(&StringLiteral_11933/*"SHORT_SERVANT_FORMATION"*/, v31);
    sub_1B00CCC(&StringLiteral_12145/*"SUMMON_FREE_10_BTN"*/, v32);
    sub_1B00CCC(&StringLiteral_11938/*"SHORT_SERVANT_SELL"*/, v33);
    sub_1B00CCC(&StringLiteral_12149/*"SUMMON_LIMIT_OVER_BTN"*/, v34);
    sub_1B00CCC(&StringLiteral_12171/*"SUMMON_TICKET_END"*/, v35);
    sub_1B00CCC(&StringLiteral_11923/*"SHORT_SERVANT_COMBINE"*/, v36);
    sub_1B00CCC(&StringLiteral_3839/*"CONTINUE_SUMMON_BTN"*/, v37);
    byte_48DF24E = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  v122 = 0LL;
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
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3839/*"CONTINUE_SUMMON_BTN"*/, 0LL);
    formationBtnLabel = this->fields.formationBtnLabel;
    v41 = v39;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11933/*"SHORT_SERVANT_FORMATION"*/, 0LL);
    if ( !formationBtnLabel )
      goto LABEL_175;
    UILabel__set_text(formationBtnLabel, (System_String_o *)closeInfo, 0LL);
    combineBtnLabel = this->fields.combineBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11923/*"SHORT_SERVANT_COMBINE"*/, 0LL);
    if ( !combineBtnLabel )
      goto LABEL_175;
    UILabel__set_text(combineBtnLabel, (System_String_o *)closeInfo, 0LL);
    sellBtnLabel = this->fields.sellBtnLabel;
    closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_11938/*"SHORT_SERVANT_SELL"*/, 0LL);
    if ( !sellBtnLabel )
      goto LABEL_175;
    UILabel__set_text(sellBtnLabel, (System_String_o *)closeInfo, 0LL);
    closeInfo = (int64_t)this->fields.summonBtnLabel;
    this->fields.isLimitOver = 0;
    if ( !closeInfo )
      goto LABEL_175;
    v126.fields.r = 1.0;
    v126.fields.g = 1.0;
    v126.fields.b = 1.0;
    v126.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v126, 0LL);
    closeInfo = (int64_t)this->fields.formationBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.formationBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v127.fields.r = 1.0;
    v127.fields.g = 1.0;
    v127.fields.b = 1.0;
    v127.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v127, 0LL);
    closeInfo = (int64_t)this->fields.combineBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.combineBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v128.fields.r = 1.0;
    v128.fields.g = 1.0;
    v128.fields.b = 1.0;
    v128.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v128, 0LL);
    closeInfo = (int64_t)this->fields.summonBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.summonBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v129.fields.r = 1.0;
    v129.fields.g = 1.0;
    v129.fields.b = 1.0;
    v129.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v129, 0LL);
    closeInfo = (int64_t)this->fields.sellBtn;
    if ( !closeInfo )
      goto LABEL_175;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 1, 0LL);
    closeInfo = (int64_t)this->fields.sellBtnSpr;
    if ( !closeInfo )
      goto LABEL_175;
    v130.fields.r = 1.0;
    v130.fields.g = 1.0;
    v130.fields.b = 1.0;
    v130.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)closeInfo, v130, 0LL);
    summonCtrl = this->fields.summonCtrl;
    if ( !summonCtrl )
      goto LABEL_175;
    closeInfo = (int64_t)summonCtrl->fields.summonInfoCtr;
    if ( !closeInfo )
      goto LABEL_175;
    SummonInfoControl__SetSummonDispInfo((SummonInfoControl_o *)closeInfo, *(const MethodInfo **)&type);
    v48 = this->fields.summonCtrl;
    if ( !v48 )
      goto LABEL_175;
    gachaParamData = v48->fields.gachaParamData;
    if ( !gachaParamData )
      goto LABEL_175;
    gachaType = gachaParamData->fields.gachaType;
    summonBtnLabel = this->fields.summonBtnLabel;
    gachaTime = gachaParamData->fields.gachaTime;
    v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v45, v46, v47);
    closeInfo = (int64_t)System_String__Format(v41, v52, 0LL);
    if ( !summonBtnLabel )
      goto LABEL_175;
    UILabel__set_text(summonBtnLabel, (System_String_o *)closeInfo, 0LL);
    v53 = this->fields.summonBtnLabel;
    closeInfo = (int64_t)SummonResultComponent_TypeInfo;
    if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
    if ( !v53 )
      goto LABEL_175;
    UILabel__SetCondensedScale(v53, SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE, 0LL);
    switch ( gachaType )
    {
      case 1:
      case 7:
        gachaId = gachaParamData->fields.gachaId;
        v55 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
          v55 = sub_1B52BA8(v55);
        v56 = *(_QWORD *)(*(_QWORD *)(v55 + 192) + 16LL);
        if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
          v56 = sub_1B52BA8(v56);
        closeInfo = **(_QWORD **)(v56 + 184);
        if ( !closeInfo )
          goto LABEL_175;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)closeInfo,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_GachaMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserGachaMaster___);
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
          &v122,
          gachaId,
          (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12149/*"SUMMON_LIMIT_OVER_BTN"*/, 0LL);
        if ( !v122 )
          goto LABEL_175;
        v59 = (System_String_o *)closeInfo;
        if ( !LODWORD(v122[4].monitor) )
          goto LABEL_52;
        closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
        if ( !v122 || !closeInfo )
          goto LABEL_175;
        closeInfo = UserGachaExtraCountMaster__getExtraCount(
                      (UserGachaExtraCountMaster_o *)closeInfo,
                      (int32_t)v122[4].monitor,
                      0LL);
        if ( (_DWORD)closeInfo != 9 || gachaParamData->fields.gachaTime != 1 || gachaParamData->fields.isAppendSummon )
          goto LABEL_52;
        v63 = this->fields.summonBtnLabel;
        gachaTime = 2;
        v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v60, v61, v62);
        closeInfo = (int64_t)System_String__Format(v41, v64, 0LL);
        if ( !v63 )
          goto LABEL_175;
        UILabel__set_text(v63, (System_String_o *)closeInfo, 0LL);
LABEL_52:
        if ( gachaParamData->fields.isAppendSummon )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GachaAppendMaster___);
          if ( !closeInfo )
            goto LABEL_175;
          AppendSummonState = GachaAppendMaster__GetAppendSummonState(
                                (GachaAppendMaster_o *)closeInfo,
                                (GachaEntity_o *)v122,
                                &appendEnt,
                                0LL);
          if ( AppendSummonState != 2 )
          {
            if ( AppendSummonState == 1 )
            {
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v59 = LocalizationManager__Get((System_String_o *)StringLiteral_12114/*"SUMMON_APPEND_END"*/, 0LL);
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
            v135.fields.r = 0.35547;
            v135.fields.a = 1.0;
            v135.fields.g = 0.35547;
            v135.fields.b = 0.35547;
            UIWidget__set_color((UIWidget_o *)closeInfo, v135, 0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_175;
            v136.fields.r = 0.5;
            v136.fields.g = 0.5;
            v136.fields.b = 0.5;
            v136.fields.a = 1.0;
            UIWidget__set_color((UIWidget_o *)closeInfo, v136, 0LL);
            closeInfo = (int64_t)SummonResultComponent_TypeInfo;
            v86 = this->fields.summonBtnLabel;
            if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
            if ( !v86 )
              goto LABEL_175;
            UILabel__SetCondensedScale(
              v86,
              SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
              0LL);
            closeInfo = (int64_t)this->fields.summonBtnLabel;
            if ( !closeInfo )
              goto LABEL_175;
            v84 = v59;
LABEL_122:
            UILabel__set_text((UILabel_o *)closeInfo, v84, 0LL);
            goto LABEL_144;
          }
        }
        else if ( entity )
        {
          if ( !v122 )
            goto LABEL_175;
          monitor_high = HIDWORD(v122[5].monitor);
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
        v133.fields.r = 1.0;
        v133.fields.g = 1.0;
        v133.fields.b = 1.0;
        v133.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v133, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_175;
        v134.fields.r = 1.0;
        v134.fields.g = 1.0;
        v134.fields.b = 1.0;
        v134.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v134, 0LL);
LABEL_144:
        v95 = this->fields.summonCtrl;
        if ( v95 )
        {
          closeInfo = (int64_t)v95->fields.currentResourceInfo;
          if ( closeInfo )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)closeInfo, 1, 0LL);
            v96 = this->fields.summonCtrl;
            if ( v96 )
            {
              v96->fields.isResult = 1;
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
                                           (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                    if ( closeInfo )
                    {
                      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                      closeInfo = (int64_t)this->fields.combineBtnLabel;
                      if ( closeInfo )
                      {
                        v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                        closeInfo = (int64_t)GameObjectExtensions__GetParent(v98, 0LL);
                        if ( closeInfo )
                        {
                          closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                 (UnityEngine_Component_o *)closeInfo,
                                                 (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                          if ( closeInfo )
                          {
                            UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                            closeInfo = (int64_t)this->fields.summonBtnLabel;
                            if ( closeInfo )
                            {
                              v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)closeInfo, 0LL);
                              closeInfo = (int64_t)GameObjectExtensions__GetParent(v99, 0LL);
                              if ( closeInfo )
                              {
                                closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)closeInfo,
                                                       (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                                if ( closeInfo )
                                {
                                  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)closeInfo, 1, 0LL);
                                  closeInfo = (int64_t)this->fields.sellBtnLabel;
                                  if ( closeInfo )
                                  {
                                    v100 = UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)closeInfo,
                                             0LL);
                                    closeInfo = (int64_t)GameObjectExtensions__GetParent(v100, 0LL);
                                    if ( closeInfo )
                                    {
                                      closeInfo = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)closeInfo,
                                                             (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
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
                v102 = UnityEngine_Object__Instantiate_object_(
                         touchBlocker,
                         (const MethodInfo_2DD5AE8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                p_blocker = &this->fields.blocker;
                this->fields.blocker = (struct UnityEngine_GameObject_o *)v102;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.blocker, (int32_t)v102, v104, v105);
                blocker = this->fields.blocker;
                v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(v107, 0LL);
                GameObjectExtensions__SetParent(blocker, Parent, 0LL);
                v109 = SummonResultComponent_TypeInfo;
                if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
                  v109 = SummonResultComponent_TypeInfo;
                }
                static_fields = v109->static_fields;
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
                  v116 = OffsetX;
                  closeInfo = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)closeInfo,
                                         (const MethodInfo_2DADE08 *)Method_UnityEngine_GameObject_GetComponent_MaskWithOpening___);
                  if ( closeInfo )
                  {
                    v117 = m_XMin - v116;
                    v137.fields.m_XMin = v117;
                    v137.fields.m_YMin = m_YMin;
                    v137.fields.m_Width = m_Width;
                    v137.fields.m_Height = m_Height;
                    MaskWithOpening__SetOpening((MaskWithOpening_o *)closeInfo, v137, 30, 0LL);
                    closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                    if ( closeInfo )
                    {
                      TutorialBackArrowPos = CommonUI__GetTutorialBackArrowPos((CommonUI_o *)closeInfo, 0LL);
                      v119 = FSUtility__GetOffsetX(68.0, 0, 0LL);
                      closeInfo = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                      if ( closeInfo )
                      {
                        v125.fields.x = TutorialBackArrowPos.fields.x - v119;
                        v125.fields.y = TutorialBackArrowPos.fields.y;
                        v138.fields.m_XMin = v117;
                        v138.fields.m_YMin = m_YMin;
                        v138.fields.m_Width = m_Width;
                        v138.fields.m_Height = m_Height;
                        CommonUI__OpenTutorialArrowMark(
                          (CommonUI_o *)closeInfo,
                          v125,
                          SummonResultComponent_TypeInfo->static_fields->TUTORIAL_BACK_ARROW_WAY,
                          v138,
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
        v67 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v67 + 309) & 1) == 0 )
          v67 = sub_1B52BA8(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
        v68 = *(_QWORD *)(*(_QWORD *)(v67 + 192) + 16LL);
        if ( (*(_BYTE *)(v68 + 309) & 1) == 0 )
          v68 = sub_1B52BA8(v68);
        closeInfo = **(_QWORD **)(v68 + 184);
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)closeInfo,
                               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TblUserMaster___);
        if ( !SelfUserGame )
          goto LABEL_175;
        if ( !closeInfo )
          goto LABEL_175;
        closeInfo = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)closeInfo, SelfUserGame->fields.userId, 0LL);
        if ( !closeInfo )
          goto LABEL_175;
        v69 = *(_DWORD *)(closeInfo + 24);
        v70 = SummonControl_TypeInfo;
        if ( !SummonControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
          v70 = SummonControl_TypeInfo;
        }
        FRIEND_POINT_SUMMON_ID = v70->static_fields->FRIEND_POINT_SUMMON_ID;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v72 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                FRIEND_POINT_SUMMON_ID,
                &maxNum[1],
                maxNum,
                0LL);
        if ( maxNum[1] > 0 || v72 )
        {
          closeInfo = (int64_t)this->fields.summonCtrl;
          if ( !closeInfo )
            goto LABEL_175;
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, gachaParamData->fields.gachaTime, 3, 0LL);
          v87 = this->fields.summonBtnLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12145/*"SUMMON_FREE_10_BTN"*/, 0LL);
          if ( !v87 )
            goto LABEL_175;
          UILabel__set_text(v87, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v88 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v88 )
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
            if ( v69 <= 1999 )
            {
              if ( !closeInfo )
                goto LABEL_175;
              if ( v69 < 400 )
                type = 1;
              else
                type = v69 / 200;
            }
            else if ( !closeInfo )
            {
              goto LABEL_175;
            }
          }
          SummonControl__SetGachaTime((SummonControl_o *)closeInfo, type, 3, 0LL);
          v90 = this->fields.summonBtnLabel;
          gachaTime = gachaParamData->fields.gachaTime;
          v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v91, v92, v93);
          closeInfo = (int64_t)System_String__Format(v41, v94, 0LL);
          if ( !v90 )
            goto LABEL_175;
          UILabel__set_text(v90, (System_String_o *)closeInfo, 0LL);
          closeInfo = (int64_t)SummonResultComponent_TypeInfo;
          v88 = this->fields.summonBtnLabel;
          if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
          if ( !v88 )
LABEL_175:
            sub_1B00F28(closeInfo, *(_QWORD *)&type);
          SUMMON_BTN_LABEL_WIDTH_CONDENSE2 = SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_CONDENSE;
        }
        UILabel__SetCondensedScale(v88, SUMMON_BTN_LABEL_WIDTH_CONDENSE2, 0LL);
        goto LABEL_144;
      case 5:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !closeInfo )
          goto LABEL_175;
        v73 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)closeInfo,
                gachaParamData->fields.gachaId,
                (const MethodInfo_2FE6A4C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
        if ( !v73 )
          goto LABEL_89;
        v74 = v73;
        if ( !LODWORD(v73[4].monitor) )
          goto LABEL_89;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        closeInfo = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserGachaExtraCountMaster___);
        if ( !closeInfo )
          goto LABEL_175;
        if ( UserGachaExtraCountMaster__getExtraCount(
               (UserGachaExtraCountMaster_o *)closeInfo,
               (int32_t)v74[4].monitor,
               0LL) != 9 )
          goto LABEL_89;
        v78 = this->fields.summonBtnLabel;
        gachaTime = gachaParamData->fields.gachaTime + 1;
        v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v75, v76, v77);
        closeInfo = (int64_t)System_String__Format(v41, v79, 0LL);
        if ( !v78 )
          goto LABEL_175;
        UILabel__set_text(v78, (System_String_o *)closeInfo, 0LL);
LABEL_89:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v80 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        closeInfo = NetworkManager__get_UserId(0LL);
        if ( !v80 )
          goto LABEL_175;
        v81 = UserItemMaster__GetEntity((UserItemMaster_o *)v80, closeInfo, gachaParamData->fields.ticketItemId, 0LL);
        if ( v81 && v81->fields.num > 0 )
          goto LABEL_110;
        closeInfo = (int64_t)this->fields.summonBtn;
        this->fields.isLimitOver = 1;
        if ( !closeInfo )
          goto LABEL_175;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)closeInfo, 0, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnSpr;
        if ( !closeInfo )
          goto LABEL_175;
        v131.fields.r = 0.35547;
        v131.fields.a = 1.0;
        v131.fields.g = 0.35547;
        v131.fields.b = 0.35547;
        UIWidget__set_color((UIWidget_o *)closeInfo, v131, 0LL);
        closeInfo = (int64_t)this->fields.summonBtnLabel;
        if ( !closeInfo )
          goto LABEL_175;
        v132.fields.r = 0.5;
        v132.fields.g = 0.5;
        v132.fields.b = 0.5;
        v132.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)closeInfo, v132, 0LL);
        closeInfo = (int64_t)SummonResultComponent_TypeInfo;
        v82 = this->fields.summonBtnLabel;
        if ( !SummonResultComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SummonResultComponent_TypeInfo);
        if ( !v82 )
          goto LABEL_175;
        UILabel__SetCondensedScale(
          v82,
          SummonResultComponent_TypeInfo->static_fields->SUMMON_BTN_LABEL_WIDTH_NORMAL,
          0LL);
        v83 = this->fields.summonBtnLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        closeInfo = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_12171/*"SUMMON_TICKET_END"*/, 0LL);
        if ( !v83 )
          goto LABEL_175;
        v84 = (System_String_o *)closeInfo;
        closeInfo = (int64_t)v83;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *SelfUserGame; // x0
  __int64 v9; // x1
  int writeMasterDataThreadException; // w10
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
  int writeMasterDataThreadException_high; // [xsp+18h] [xbp-28h] BYREF
  int v24; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_48DF252 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B00CCC(&StringLiteral_7022/*"HAVE_SVT_NUM_TITLE"*/, v6);
    sub_1B00CCC(&StringLiteral_7021/*"HAVE_SVTEQ_NUM_TITLE"*/, v7);
    byte_48DF252 = 1;
  }
  servantSum = 0;
  *(_QWORD *)servantEquipSum = 0LL;
  SelfUserGame = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_23;
  writeMasterDataThreadException = (int)SelfUserGame->fields.writeMasterDataThreadException;
  writeMasterDataThreadException_high = HIDWORD(SelfUserGame->fields.writeMasterDataThreadException);
  v24 = writeMasterDataThreadException;
  if ( !byte_48DE284 )
  {
    sub_1B00CCC(&BalanceConfig_TypeInfo, v9);
    byte_48DE284 = 1;
  }
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  CommandCodeFrameMax = v11->static_fields->CommandCodeFrameMax;
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  UserServantMaster__getCount((UserServantMaster_o *)SelfUserGame, &servantSum, &servantEquipSum[1], 1, 0LL);
  SelfUserGame = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_23;
  SelfUserGame = (DataManager_o *)DataManager__GetMasterData_object_(
                                    SelfUserGame,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !SelfUserGame )
    goto LABEL_23;
  servantEquipSum[0] = UserCommandCodeMaster__getCount((UserCommandCodeMaster_o *)SelfUserGame, 0LL);
  svtTitleLb = this->fields.svtTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7022/*"HAVE_SVT_NUM_TITLE"*/, 0LL);
  if ( !svtTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtNumLb = this->fields.svtNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantSum, 0LL);
  if ( !svtNumLb )
    goto LABEL_23;
  UILabel__set_text(svtNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtMaxLb = this->fields.svtMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&v24, 0LL);
  if ( !svtMaxLb )
    goto LABEL_23;
  UILabel__set_text(svtMaxLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqTitleLb = this->fields.svtEqTitleLb;
  SelfUserGame = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_7021/*"HAVE_SVTEQ_NUM_TITLE"*/, 0LL);
  if ( !svtEqTitleLb )
    goto LABEL_23;
  UILabel__set_text(svtEqTitleLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqNumLb = this->fields.svtEqNumLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&servantEquipSum[1], 0LL);
  if ( !svtEqNumLb )
    goto LABEL_23;
  UILabel__set_text(svtEqNumLb, (System_String_o *)SelfUserGame, 0LL);
  svtEqMaxLb = this->fields.svtEqMaxLb;
  SelfUserGame = (DataManager_o *)System_Int32__ToString((int32_t)&writeMasterDataThreadException_high, 0LL);
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
    sub_1B00F28(SelfUserGame, v9);
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
  int32_t v13; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_48DF254 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, usrSvtId);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_SummonResultComponent___c__DisplayClass64_0__showResCcDetail_b__0__, v7);
    sub_1B00CCC(&SummonResultComponent___c__DisplayClass64_0_TypeInfo, v8);
    byte_48DF254 = 1;
  }
  v9 = sub_1B00F18(SummonResultComponent___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass64_0__showResCcDetail_b__0__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1B00F28(v10, v11);
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
  int32_t v13; // w3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v15; // x8
  CommonUI_o *v16; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v18; // x21

  if ( (byte_48DF253 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, usrSvtId);
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_SummonResultComponent___c__DisplayClass63_0__showResSvtDetail_b__0__, v7);
    sub_1B00CCC(&SummonResultComponent___c__DisplayClass63_0_TypeInfo, v8);
    byte_48DF253 = 1;
  }
  v9 = sub_1B00F18(SummonResultComponent___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 16) = usrSvtId;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v18 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v9,
    Method_SummonResultComponent___c__DisplayClass63_0__showResSvtDetail_b__0__,
    0LL);
  if ( !v16 )
LABEL_8:
    sub_1B00F28(v10, v11);
  CommonUI__maskFadeout(v16, 1, DEFAULT_FADE_TIME, v18, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass63_0___ctor(
        SummonResultComponent___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass63_0___showResSvtDetail_b__0(
        SummonResultComponent___c__DisplayClass63_0_o *this,
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

  if ( (byte_48DF25B & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    sub_1B00CCC(&ServantStatusDialog_EndDelegate_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B00CCC(&Method_SummonResultComponent_DialogCallBack__, v5);
    byte_48DF25B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  usrSvtId = this->fields.usrSvtId;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v9 = (CommonUI_o *)Instance;
  v10 = (ServantStatusDialog_EndDelegate_o *)sub_1B00F18(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v10, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v9 )
    goto LABEL_8;
  CommonUI__OpenServantStatusDialog_29946108(v9, 8, usrSvtId, v10, 0LL, 0LL);
  v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (CommonUI_o *)v11;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v13 )
LABEL_8:
    sub_1B00F28(v11, v12);
  CommonUI__maskFadein(v13, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass64_0___ctor(
        SummonResultComponent___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonResultComponent___c__DisplayClass64_0___showResCcDetail_b__0(
        SummonResultComponent___c__DisplayClass64_0_o *this,
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

  if ( (byte_48DF25C & 1) == 0 )
  {
    sub_1B00CCC(&AvalonSceneManager_TypeInfo, method);
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserCommandCodeMaster___, v3);
    sub_1B00CCC(&Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__, v4);
    sub_1B00CCC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B00CCC(&Method_SummonResultComponent_DialogCallBack__, v8);
    byte_48DF25C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserCommandCodeMaster___);
  if ( !Instance )
    goto LABEL_10;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.usrSvtId,
             (const MethodInfo_2FE6BF8 *)Method_DataMasterBase_UserCommandCodeMaster__UserCommandCodeEntity__long__GetEntity__);
  v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  _4__this = (Il2CppObject *)this->fields.__4__this;
  v14 = (CommonUI_o *)v12;
  v15 = (ServantStatusDialog_EndDelegate_o *)sub_1B00F18(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(v15, _4__this, Method_SummonResultComponent_DialogCallBack__, 0LL);
  if ( !v14 )
    goto LABEL_10;
  CommonUI__OpenServantStatusDialog_29949432(v14, 0, (UserCommandCodeEntity_o *)Entity, v15, 0LL, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v16 )
LABEL_10:
    sub_1B00F28(Instance, v10);
  CommonUI__maskFadein(v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}