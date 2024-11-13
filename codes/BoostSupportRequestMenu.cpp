void __fastcall BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B10D92 & 1) == 0 )
  {
    sub_1BCA7E0(&BoostSupportRequestMenu_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_11131/*"RECOMMENDED_ICON"*/, v3, v4);
    byte_4B10D92 = 1;
  }
  BoostSupportRequestMenu_TypeInfo->static_fields->RECOMMENDED_ICON = (struct System_String_o *)StringLiteral_11131/*"RECOMMENDED_ICON"*/;
  sub_1BCA784(BoostSupportRequestMenu_TypeInfo->static_fields, StringLiteral_11131/*"RECOMMENDED_ICON"*/);
}


void __fastcall BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B10D91 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B10D91 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__Callback(
        BoostSupportRequestMenu_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  _BOOL4 isBoostItemUseConfirm; // w19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x19

  if ( (byte_4B10D8A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&index);
    sub_1BCA7E0(&OptionManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__, v9, v10);
    sub_1BCA7E0(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo, v11, v12);
    byte_4B10D8A = 1;
  }
  v13 = sub_1BCAA2C(
          BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo,
          *(_QWORD *)&result,
          *(_QWORD *)&index,
          method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784(v13 + 16, this);
  *(_DWORD *)(v13 + 24) = result;
  *(_DWORD *)(v13 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v16);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v13,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0LL);
  OptionManager__SaveData(v21, 0LL);
}


void __fastcall BoostSupportRequestMenu__CheckSerializeFieldAssertion(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BoostSupportRequestMenu__Close(
        BoostSupportRequestMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_4B10D8B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_BoostSupportRequestMenu_EndClose__, v5, v6);
    byte_4B10D8B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, v11);
}


void __fastcall BoostSupportRequestMenu__EndClose(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  BoostSupportRequestMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall BoostSupportRequestMenu__EndOpen(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


// local variable allocation has failed, the output may be wrong!
BoostSupportRequsetItemListViewItem_o *__fastcall BoostSupportRequestMenu__GetItem(
        BoostSupportRequestMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v4; // x1

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1BCAA3C(0LL, method);
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void __fastcall BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4B10D8C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BoostSupportRequestMenu_OnClickCancel__, method, v2);
    byte_4B10D8C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_BoostSupportRequestMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8();
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 0, -1, v6);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickDecide(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4B10D8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BoostSupportRequestMenu_OnClickDecide__, method, v2);
    byte_4B10D8D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_BoostSupportRequestMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8();
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 1, -1, v6);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickSetupConfirm(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v13; // x8

  if ( (byte_4B10D8F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BoostSupportRequestMenu_OnClickSetupConfirm__, method, v2);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v6, v7);
    byte_4B10D8F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_BoostSupportRequestMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8();
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1BCAA3C(0LL, v10);
    if ( isBoostItemUseConfirm )
      v13 = &StringLiteral_17702/*"btn_off"*/;
    else
      v13 = &StringLiteral_17703/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v13, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__OnSelectItem(
        BoostSupportRequestMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0
  BoostSupportRequsetItemListViewItem_o *Item; // x20
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  BoostEntity_o *boostEntity; // x20
  CommonUI_o *v20; // x21
  BoostFunctionUtility_CallbackFunc_o *v21; // x22
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x3
  int32_t id; // w2
  BoostSupportRequestMenu_o *v28; // x0
  int32_t v29; // w1
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  struct BoostEntity_o *v32; // x8

  if ( (byte_4B10D8E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BoostSupportRequestMenu_Callback__, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&Method_BoostSupportRequestMenu_OnSelectItem__, v7, v8);
    sub_1BCA7E0(&BoostFunctionUtility_CallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    byte_4B10D8E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      itemListViewManager = this->fields.itemListViewManager;
      if ( !itemListViewManager )
        goto LABEL_33;
      Item = BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, n, *(const MethodInfo **)&n);
    }
    if ( kind == 3 )
    {
      v22 = Method_BoostSupportRequestMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
        v22 = (_QWORD *)sub_1BCA7F8();
      v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
      OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0LL);
    }
    else
    {
      if ( kind == 2 )
      {
        if ( this->fields.isBoostItemUseConfirm )
        {
          itemListViewManager = (BoostSupportRequestItemListViewManager_o *)this->fields.setupConfirmSprite;
          if ( !itemListViewManager )
            goto LABEL_33;
          if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)itemListViewManager, 0LL) )
          {
            v15 = Method_BoostSupportRequestMenu_OnSelectItem__;
            if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
              v15 = (_QWORD *)sub_1BCA7F8();
            v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
            OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
            itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( Item )
            {
              boostEntity = Item->fields.boostEntity;
              v20 = (CommonUI_o *)itemListViewManager;
              v21 = (BoostFunctionUtility_CallbackFunc_o *)sub_1BCAA2C(
                                                             BoostFunctionUtility_CallbackFunc_TypeInfo,
                                                             *(_QWORD *)&kind,
                                                             v17,
                                                             v18);
              BoostFunctionUtility_CallbackFunc___ctor(
                v21,
                (Il2CppObject *)this,
                Method_BoostSupportRequestMenu_Callback__,
                0LL);
              if ( v20 )
              {
                CommonUI__OpenBoostSupportRequestReconfirmationMenu(v20, boostEntity, v21, 0LL);
                return;
              }
            }
LABEL_33:
            sub_1BCAA3C(itemListViewManager, *(_QWORD *)&kind);
          }
        }
        v30 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v30 = (_QWORD *)sub_1BCA7F8();
        v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
        OverwriteAssetSoundName__PlaySystemSe(v31, 8, 0LL);
        if ( !Item )
          goto LABEL_33;
        v32 = Item->fields.boostEntity;
        if ( v32 )
          id = v32->fields.id;
        else
          id = 0;
        v29 = 2;
        v28 = this;
      }
      else
      {
        v24 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v24 = (_QWORD *)sub_1BCA7F8();
        v25 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v24, v24[4]);
        OverwriteAssetSoundName__PlaySystemSe(v25, 1, 0LL);
        id = -1;
        v28 = this;
        v29 = 0;
      }
      BoostSupportRequestMenu__Callback(v28, v29, id, v26);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoostSupportRequestMenu__Open(
        BoostSupportRequestMenu_o *this,
        int32_t questId,
        int32_t questPhase,
        BoostFunctionUtility_CallbackFunc_o *callback,
        bool isRetryBattle,
        const MethodInfo *method)
{
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
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x1
  void *Master_object; // x0
  __int64 v86; // x1
  __int64 v87; // x1
  UILabel_o *titleLabel; // x21
  int32_t ScriptIntParam; // w1
  struct System_Collections_Generic_List_T__o *list; // x8
  System_String_o *v91; // x0
  System_String_o *v92; // x0
  __int64 v93; // x1
  UILabel_o *titleDetailLabel; // x21
  System_String_o *v95; // x24
  __int64 v96; // x1
  bool v97; // w25
  System_String_o *v98; // x0
  __int64 v99; // x1
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  __int64 v103; // x1
  QuestPhaseEntity_o *ScriptIntArrayParam; // x21
  BoostSupportRequestMenu_c *v105; // x0
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v107; // x3
  BoostEntity_array *v108; // x22
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x3
  System_Collections_Generic_List_int__o *v112; // x23
  int max_length; // w8
  unsigned int v114; // w19
  BoostEntity_o *v115; // x24
  int v116; // w8
  void *v117; // x24
  unsigned int v118; // w26
  __int64 v119; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v121; // x9
  __int64 size; // x10
  struct UserItemEntity_array *v123; // x0
  struct UserItemEntity_array **p_mUsrItemEntityList; // x24
  int32_t v125; // w25
  __int64 v126; // x1
  struct UserItemEntity_array *v127; // x28
  __int64 v128; // x1
  Il2CppObject *v129; // x26
  int64_t UserId; // x27
  __int64 Item; // x0
  __int64 v132; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v134; // x1
  UserItemEntity_o *v135; // x26
  Il2CppClass **v136; // x0
  const MethodInfo *v137; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  EventItemComponent_o *v139; // x24
  struct EventItemComponent_array *v140; // x8
  EventItemComponent_o *v141; // x24
  struct EventItemComponent_array *v142; // x8
  EventItemComponent_o *v143; // x24
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x3
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v148; // x22
  const MethodInfo *v149; // x3
  const MethodInfo *v150; // x2
  __int64 *v151; // x8
  _QWORD *v152; // x0
  System_Reflection_MethodBase_o *v153; // x0
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x3
  System_Action_o *v157; // x20
  const MethodInfo *v158; // x3
  __int64 v159; // x0
  BoostSupportRequestMenu_o *v160; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_int__o v161; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v162; // [xsp+30h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_T__o *v163; // [xsp+50h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  System_Nullable_int__o v165; // 0:x0.8
  System_Nullable_int__o v166; // 0:x0.8

  if ( (byte_4B10D88 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&questId, *(_QWORD *)&questPhase);
    sub_1BCA7E0(&Method_BoostSupportRequestMenu_EndOpen__, v11, v12);
    sub_1BCA7E0(&Method_BoostSupportRequestMenu_OnSelectItem__, v13, v14);
    sub_1BCA7E0(&Method_BoostSupportRequestMenu_Open__, v15, v16);
    sub_1BCA7E0(&BoostSupportRequestMenu_TypeInfo, v17, v18);
    sub_1BCA7E0(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonConsumeMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, v25, v26);
    sub_1BCA7E0(&DataManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v41, v42);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v43, v44);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Item__, v45, v46);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v47, v48);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v49, v50);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v51, v52);
    sub_1BCA7E0(&Method_System_Nullable_int__ToString__, v53, v54);
    sub_1BCA7E0(&Method_System_Nullable_int___ctor__, v55, v56);
    sub_1BCA7E0(&OptionManager_TypeInfo, v57, v58);
    sub_1BCA7E0(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v59, v60);
    sub_1BCA7E0(&UserItemEntity___TypeInfo, v61, v62);
    sub_1BCA7E0(&StringLiteral_3098/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_3099/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_3105/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_17538/*"boostDialogSubtitleId"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_3097/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_17537/*"boostDialogOnOffButtonHide"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_3101/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v81, v82);
    byte_4B10D88 = 1;
  }
  v163 = 0LL;
  entity = 0LL;
  memset(&v162, 0, sizeof(v162));
  this->fields.callbackFunc = callback;
  sub_1BCA784(&this->fields.callbackFunc, callback);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v83);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v84);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_98;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, questPhase, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3105/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_98;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  if ( entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_17538/*"boostDialogSubtitleId"*/, 0, 0LL);
    v165 = (System_Nullable_int__o)&v161;
    v161.fields._list = 0LL;
    System_Nullable_int____ctor(v165, ScriptIntParam, (const MethodInfo_36BEAA0 *)Method_System_Nullable_int___ctor__);
    list = v161.fields._list;
  }
  else
  {
    list = 0LL;
  }
  v166 = (System_Nullable_int__o)&v163;
  v163 = list;
  v91 = System_Nullable_int___ToString(v166, (const MethodInfo_36BEBB0 *)Method_System_Nullable_int__ToString__);
  v92 = System_String__Concat_62401220((System_String_o *)StringLiteral_3099/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/, v91, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  v95 = v92;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v93);
  v97 = LocalizationManager__ContainsKey(v95, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v96);
  v98 = v97 ? v95 : (System_String_o *)StringLiteral_3098/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/;
  Master_object = LocalizationManager__Get(v98, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_98;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Master_object, 0LL);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v99);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3101/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0LL);
  if ( !useConfirmOptionLabel )
    goto LABEL_98;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Master_object, 0LL);
  decideLabel = this->fields.decideLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3097/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_98;
  UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_98;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0LL);
  ScriptIntArrayParam = entity;
  if ( entity )
  {
    v105 = BoostSupportRequestMenu_TypeInfo;
    if ( !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo, v103);
      v105 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = (QuestPhaseEntity_o *)QuestPhaseEntity__getScriptIntArrayParam(
                                                  ScriptIntArrayParam,
                                                  v105->static_fields->RECOMMENDED_ICON,
                                                  0LL,
                                                  0LL);
  }
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_98;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Master_object,
                                                         questId,
                                                         questPhase,
                                                         0LL);
  v108 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
           SupportRequestAllowed,
           (BoostEntity_array *)SupportRequestAllowed,
           (System_Int32_array *)ScriptIntArrayParam,
           v107);
  v112 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v109,
                                                     v110,
                                                     v111);
  System_Collections_Generic_List_int____ctor(
    v112,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v108 )
    goto LABEL_98;
  max_length = v108->max_length;
  if ( max_length >= 1 )
  {
    v114 = 0;
    while ( 1 )
    {
      if ( v114 >= max_length )
        goto LABEL_99;
      v115 = v108->m_Items[v114];
      if ( !v115 )
        goto LABEL_98;
      if ( v115->fields.commonConsumeId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v86);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_98;
        Master_object = CommonConsumeMaster__GetIdEntityList(
                          (CommonConsumeMaster_o *)Master_object,
                          v115->fields.commonConsumeId,
                          0LL);
        if ( !Master_object )
          goto LABEL_98;
        v116 = *((_DWORD *)Master_object + 6);
        v117 = Master_object;
        if ( v116 >= 1 )
          break;
      }
LABEL_54:
      max_length = v108->max_length;
      if ( (int)++v114 >= max_length )
        goto LABEL_55;
    }
    v118 = 0;
    while ( v118 < v116 )
    {
      v119 = *((_QWORD *)v117 + (int)v118 + 4);
      if ( !v119 )
        goto LABEL_98;
      if ( *(_DWORD *)(v119 + 24) == 1 )
      {
        if ( !v112 )
          goto LABEL_98;
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  v112,
                                  *(_DWORD *)(v119 + 28),
                                  (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v86 = *(unsigned int *)(v119 + 28);
          items = v112->fields._items;
          v121 = Method_System_Collections_Generic_List_int__Add__;
          ++v112->fields._version;
          if ( !items )
            goto LABEL_98;
          size = v112->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v112,
              v86,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
          }
          else
          {
            v112->fields._size = size + 1;
            items->m_Items[size + 1] = v86;
          }
        }
      }
      v116 = *((_DWORD *)v117 + 6);
      if ( (int)++v118 >= v116 )
        goto LABEL_54;
    }
LABEL_99:
    sub_1BCAA44(Master_object, v86);
  }
LABEL_55:
  if ( !v112 )
    goto LABEL_98;
  Master_object = this->fields.eventItemsInfoBase;
  if ( !Master_object )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v112->fields._size > 0, 0LL);
  v123 = (struct UserItemEntity_array *)sub_1BCA888(UserItemEntity___TypeInfo, (unsigned int)v112->fields._size);
  this->fields.mUsrItemEntityList = v123;
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  v160 = this;
  sub_1BCA784(&this->fields.mUsrItemEntityList, v123);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v161,
    v112,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v125 = 0;
  v162 = v161;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v162,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v127 = *p_mUsrItemEntityList;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v126);
    v129 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v128);
    UserId = NetworkManager__get_UserId(0LL);
    Item = System_Collections_Generic_List_int___get_Item(
             v112,
             v125,
             (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v129 )
      sub_1BCAA3C(Item, v132);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v129, UserId, Item, 0LL);
    if ( !v127 )
      sub_1BCAA3C(EntityDefinitely, v134);
    v135 = EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_1BCA91C(EntityDefinitely, v127->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v159 = sub_1BCAA60();
        sub_1BCA908(v159, 0LL);
      }
    }
    if ( v125 >= v127->max_length )
      sub_1BCAA44(EntityDefinitely, v134);
    v136 = &v127->obj.klass + v125;
    v136[4] = (Il2CppClass *)v135;
    sub_1BCA784(v136 + 4, v135);
    ++v125;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v162,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v112->fields._size >= 1 )
  {
    eventItemIconList = v160->fields.eventItemIconList;
    if ( !eventItemIconList )
      goto LABEL_98;
    if ( !eventItemIconList->max_length )
      goto LABEL_99;
    v139 = eventItemIconList->m_Items[0];
    Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                              v112,
                              0,
                              (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v139 )
      goto LABEL_98;
    EventItemComponent__Set(v139, (int32_t)Master_object, 0LL);
    if ( v112->fields._size >= 2 )
    {
      v140 = v160->fields.eventItemIconList;
      if ( !v140 )
        goto LABEL_98;
      if ( v140->max_length <= 1 )
        goto LABEL_99;
      v141 = v140->m_Items[1];
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                v112,
                                1,
                                (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v141 )
        goto LABEL_98;
      EventItemComponent__Set(v141, (int32_t)Master_object, 0LL);
      if ( v112->fields._size >= 3 )
      {
        v142 = v160->fields.eventItemIconList;
        if ( !v142 )
          goto LABEL_98;
        if ( v142->max_length <= 2 )
          goto LABEL_99;
        v143 = v142->m_Items[2];
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  v112,
                                  2,
                                  (const MethodInfo_3584948 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v143 )
          goto LABEL_98;
        EventItemComponent__Set(v143, (int32_t)Master_object, 0LL);
      }
    }
  }
  Master_object = v160->fields.itemListViewManager;
  if ( !Master_object )
    goto LABEL_98;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Master_object,
    v108,
    (System_Int32_array *)ScriptIntArrayParam,
    v160->fields.mUsrItemEntityList,
    v137);
  itemListViewManager = v160->fields.itemListViewManager;
  v148 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                    BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo,
                                                                    v145,
                                                                    v146,
                                                                    v147);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v148,
    (Il2CppObject *)v160,
    (intptr_t)Method_BoostSupportRequestMenu_OnSelectItem__,
    v149);
  if ( !itemListViewManager )
    goto LABEL_98;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v148, v150);
  Master_object = v160->fields.setupConfirmSprite;
  if ( !Master_object )
    goto LABEL_98;
  v151 = &StringLiteral_17702/*"btn_off"*/;
  if ( v160->fields.isBoostItemUseConfirm )
    v151 = &StringLiteral_17703/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v151, 0LL);
  if ( entity && QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_17537/*"boostDialogOnOffButtonHide"*/, -1, 0LL) == 1 )
  {
    Master_object = v160->fields.setupConfirmSprite;
    if ( !Master_object )
      goto LABEL_98;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  }
  if ( !isRetryBattle )
  {
    v152 = Method_BoostSupportRequestMenu_Open__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_Open__ + 83) & 2) != 0 )
      v152 = (_QWORD *)sub_1BCA7F8();
    v153 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v152, v152[4]);
    OverwriteAssetSoundName__PlaySystemSe(v153, 0, 0LL);
  }
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v160, 0LL);
  if ( !Master_object )
LABEL_98:
    sub_1BCAA3C(Master_object, v86);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v160->fields.state = 1;
  v157 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v154, v155, v156);
  System_Action___ctor(v157, (Il2CppObject *)v160, Method_BoostSupportRequestMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)v160, v157, 0, v158);
}


BoostEntity_array *__fastcall BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
        BoostSupportRequestMenu_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x24
  __int64 v26; // x25
  BoostEntity_o *v27; // x23
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x8
  System_Collections_Generic_List_object__o *v36; // x0
  System_Collections_Generic_List_object__o *v38; // x0

  if ( (byte_4B10D89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, boostEntityList, recommendedBoostIds);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BoostEntity__get_Count__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BoostEntity__TypeInfo, v16, v17);
    byte_4B10D89 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                       boostEntityList,
                                                       recommendedBoostIds,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BoostEntity__TypeInfo,
                                                       v19,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !boostEntityList )
    goto LABEL_32;
  if ( !recommendedBoostIds || !*(_QWORD *)&recommendedBoostIds->max_length )
    return boostEntityList;
  if ( (int)*(_QWORD *)&boostEntityList->max_length >= 1 )
  {
    v25 = 0LL;
    v26 = (unsigned int)*(_QWORD *)&boostEntityList->max_length - 1LL;
    while ( 1 )
    {
      v27 = boostEntityList->m_Items[v25];
      if ( !v27 )
        goto LABEL_22;
      v23 = System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
              v27->fields.id,
              (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (v23 & 1) != 0 )
      {
        if ( !v22 )
          goto LABEL_32;
        items = v22->fields._items;
        v29 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_32;
        size = v22->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v31 = &items->obj.klass + size;
          v22->fields._size = size + 1;
LABEL_18:
          v31[4] = (Il2CppClass *)v27;
          v23 = sub_1BCA784(v31 + 4, v27);
          goto LABEL_22;
        }
        v35 = v29[4];
        v36 = v22;
      }
      else
      {
        if ( !v18 )
          goto LABEL_32;
        v32 = v18->fields._items;
        v33 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v18->fields._version;
        if ( !v32 )
          goto LABEL_32;
        v34 = v18->fields._size;
        if ( (unsigned int)v34 < v32->max_length )
        {
          v31 = &v32->obj.klass + v34;
          v18->fields._size = v34 + 1;
          goto LABEL_18;
        }
        v35 = v33[4];
        v36 = v18;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        (Il2CppObject *)v27,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35 + 192) + 112LL));
LABEL_22:
      if ( v26 == v25 )
        break;
      if ( ++v25 >= (unsigned __int64)boostEntityList->max_length )
        sub_1BCAA44(v23, v24);
    }
  }
  if ( !v22 )
    goto LABEL_32;
  if ( v22->fields._size < 1 )
  {
    if ( v18 )
    {
      v38 = v18;
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v38,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    }
LABEL_32:
    sub_1BCAA3C(v23, v24);
  }
  System_Collections_Generic_List_object___AddRange(
    v22,
    (System_Collections_Generic_IEnumerable_T__o *)v18,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v38 = v22;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v38,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
}


void __fastcall BoostSupportRequestMenu__add_callbackFunc(
        BoostSupportRequestMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestMenu_o *v11; // x0
  BoostFunctionUtility_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B10D86 & 1) == 0 )
  {
    sub_1BCA7E0(&BoostFunctionUtility_CallbackFunc_TypeInfo, value, method);
    byte_4B10D86 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1BCACFC(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *closeButton; // x20
  bool v5; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4B10D90 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B10D90 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL);
  result = 0LL;
  if ( !v5 )
    return this->fields.closeButton;
  return result;
}


void __fastcall BoostSupportRequestMenu__remove_callbackFunc(
        BoostSupportRequestMenu_o *this,
        BoostFunctionUtility_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoostSupportRequestMenu_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4B10D87 & 1) == 0 )
  {
    sub_1BCA7E0(&BoostFunctionUtility_CallbackFunc_TypeInfo, value, method);
    byte_4B10D87 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoostFunctionUtility_CallbackFunc_c *)v8->klass != BoostFunctionUtility_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1BCACFC(v8);
  BoostSupportRequestMenu__GetItem(v11, v12, v13);
}


void __fastcall BoostSupportRequestMenu___c__DisplayClass26_0___ctor(
        BoostSupportRequestMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoostSupportRequestMenu___c__DisplayClass26_0___Callback_b__0(
        BoostSupportRequestMenu___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct BoostSupportRequestMenu_o *_4__this; // x0
  struct BoostFunctionUtility_CallbackFunc_o **p_callbackFunc; // x0
  struct BoostFunctionUtility_CallbackFunc_o *v5; // x20
  struct BoostFunctionUtility_CallbackFunc_o *callbackFunc; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_1BCA784(p_callbackFunc, 0LL);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      *(_QWORD *)&v5->fields.extra_arg);
}