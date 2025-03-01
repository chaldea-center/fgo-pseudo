void __fastcall BoostSupportRequestMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_4BF816E & 1) == 0 )
  {
    sub_1C2E12C(&BoostSupportRequestMenu_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_11202/*"RECOMMENDED_ICON"*/, v2);
    byte_4BF816E = 1;
  }
  BoostSupportRequestMenu_TypeInfo->static_fields->RECOMMENDED_ICON = (struct System_String_o *)StringLiteral_11202/*"RECOMMENDED_ICON"*/;
  sub_1C2E0D0(BoostSupportRequestMenu_TypeInfo->static_fields);
}


void __fastcall BoostSupportRequestMenu___ctor(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BF816D & 1) == 0 )
  {
    sub_1C2E12C(&BaseDialog_TypeInfo, method);
    byte_4BF816D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  _BOOL4 isBoostItemUseConfirm; // w19
  System_Action_o *v14; // x19

  if ( (byte_4BF8166 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&result);
    sub_1C2E12C(&OptionManager_TypeInfo, v7);
    sub_1C2E12C(&Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__, v8);
    sub_1C2E12C(&BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo, v9);
    byte_4BF8166 = 1;
  }
  v10 = sub_1C2E378(BoostSupportRequestMenu___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1C2E388(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1C2E0D0(v10 + 16);
  *(_DWORD *)(v10 + 24) = result;
  *(_DWORD *)(v10 + 28) = index;
  isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  OptionManager__SetBoostItemUseConfirm(isBoostItemUseConfirm, 0LL);
  v14 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v10,
    Method_BoostSupportRequestMenu___c__DisplayClass26_0__Callback_b__0__,
    0LL);
  OptionManager__SaveData(v14, 0LL);
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
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4BF8167 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&Method_BoostSupportRequestMenu_EndClose__, v5);
    byte_4BF8167 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2E0D0(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_BoostSupportRequestMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
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
    sub_1C2E0D0(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall BoostSupportRequestMenu__EndOpen(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


BoostSupportRequsetItemListViewItem_o *__fastcall BoostSupportRequestMenu__GetItem(
        BoostSupportRequestMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0

  itemListViewManager = this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C2E388(0LL, index);
  return BoostSupportRequestItemListViewManager__GetItem(itemListViewManager, index, method);
}


void __fastcall BoostSupportRequestMenu__Init(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *itemListViewManager; // x0
  const MethodInfo *v4; // x1

  itemListViewManager = (ListViewManager_o *)this->fields.itemListViewManager;
  if ( !itemListViewManager )
    sub_1C2E388(0LL, method);
  ListViewManager__DestroyList(itemListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, v4);
}


void __fastcall BoostSupportRequestMenu__OnClickCancel(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4BF8168 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BoostSupportRequestMenu_OnClickCancel__, method);
    byte_4BF8168 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144();
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 0, -1, v5);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickDecide(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4BF8169 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BoostSupportRequestMenu_OnClickDecide__, method);
    byte_4BF8169 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_BoostSupportRequestMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2E144();
    v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    this->fields.state = 3;
    BoostSupportRequestMenu__Callback(this, 1, -1, v5);
  }
}


void __fastcall BoostSupportRequestMenu__OnClickSetupConfirm(BoostSupportRequestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  _BOOL4 isBoostItemUseConfirm; // w8
  UISprite_o *setupConfirmSprite; // x0
  __int64 *v10; // x8

  if ( (byte_4BF816B & 1) == 0 )
  {
    sub_1C2E12C(&Method_BoostSupportRequestMenu_OnClickSetupConfirm__, method);
    sub_1C2E12C(&StringLiteral_17834/*"btn_on"*/, v3);
    sub_1C2E12C(&StringLiteral_17833/*"btn_off"*/, v4);
    byte_4BF816B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_BoostSupportRequestMenu_OnClickSetupConfirm__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnClickSetupConfirm__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2E144();
    v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    isBoostItemUseConfirm = this->fields.isBoostItemUseConfirm;
    setupConfirmSprite = this->fields.setupConfirmSprite;
    this->fields.isBoostItemUseConfirm = !isBoostItemUseConfirm;
    if ( !setupConfirmSprite )
      sub_1C2E388(0LL, v7);
    if ( isBoostItemUseConfirm )
      v10 = &StringLiteral_17833/*"btn_off"*/;
    else
      v10 = &StringLiteral_17834/*"btn_on"*/;
    UISprite__set_spriteName(setupConfirmSprite, (System_String_o *)*v10, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x0
  BoostSupportRequsetItemListViewItem_o *Item; // x20
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  BoostEntity_o *boostEntity; // x20
  CommonUI_o *v15; // x21
  BoostFunctionUtility_CallbackFunc_o *v16; // x22
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  const MethodInfo *v21; // x3
  int32_t id; // w2
  BoostSupportRequestMenu_o *v23; // x0
  int32_t v24; // w1
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  struct BoostEntity_o *v27; // x8

  if ( (byte_4BF816A & 1) == 0 )
  {
    sub_1C2E12C(&Method_BoostSupportRequestMenu_Callback__, *(_QWORD *)&kind);
    sub_1C2E12C(&Method_BoostSupportRequestMenu_OnSelectItem__, v7);
    sub_1C2E12C(&BoostFunctionUtility_CallbackFunc_TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    byte_4BF816A = 1;
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
      v17 = Method_BoostSupportRequestMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
        v17 = (_QWORD *)sub_1C2E144();
      v18 = (System_Reflection_MethodBase_o *)sub_1C2E110(v17, v17[4]);
      OverwriteAssetSoundName__PlaySystemSe(v18, 2, 0, 0LL);
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
            v12 = Method_BoostSupportRequestMenu_OnSelectItem__;
            if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
              v12 = (_QWORD *)sub_1C2E144();
            v13 = (System_Reflection_MethodBase_o *)sub_1C2E110(v12, v12[4]);
            OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
            itemListViewManager = (BoostSupportRequestItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( Item )
            {
              boostEntity = Item->fields.boostEntity;
              v15 = (CommonUI_o *)itemListViewManager;
              v16 = (BoostFunctionUtility_CallbackFunc_o *)sub_1C2E378(BoostFunctionUtility_CallbackFunc_TypeInfo);
              BoostFunctionUtility_CallbackFunc___ctor(
                v16,
                (Il2CppObject *)this,
                Method_BoostSupportRequestMenu_Callback__,
                0LL);
              if ( v15 )
              {
                CommonUI__OpenBoostSupportRequestReconfirmationMenu(v15, boostEntity, v16, 0LL);
                return;
              }
            }
LABEL_33:
            sub_1C2E388(itemListViewManager, *(_QWORD *)&kind);
          }
        }
        v25 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v25 = (_QWORD *)sub_1C2E144();
        v26 = (System_Reflection_MethodBase_o *)sub_1C2E110(v25, v25[4]);
        OverwriteAssetSoundName__PlaySystemSe(v26, 8, 0, 0LL);
        if ( !Item )
          goto LABEL_33;
        v27 = Item->fields.boostEntity;
        if ( v27 )
          id = v27->fields.id;
        else
          id = 0;
        v24 = 2;
        v23 = this;
      }
      else
      {
        v19 = Method_BoostSupportRequestMenu_OnSelectItem__;
        if ( (*((_BYTE *)Method_BoostSupportRequestMenu_OnSelectItem__ + 83) & 2) != 0 )
          v19 = (_QWORD *)sub_1C2E144();
        v20 = (System_Reflection_MethodBase_o *)sub_1C2E110(v19, v19[4]);
        OverwriteAssetSoundName__PlaySystemSe(v20, 1, 0, 0LL);
        id = -1;
        v23 = this;
        v24 = 0;
      }
      BoostSupportRequestMenu__Callback(v23, v24, id, v21);
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
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  void *Master_object; // x0
  __int64 v48; // x1
  UILabel_o *titleLabel; // x21
  int32_t ScriptIntParam; // w1
  struct System_Collections_Generic_List_T__o *list; // x8
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  UILabel_o *titleDetailLabel; // x21
  System_String_o *v55; // x24
  bool v56; // w25
  System_String_o *v57; // x0
  UILabel_o *useConfirmOptionLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  QuestPhaseEntity_o *ScriptIntArrayParam; // x21
  BoostSupportRequestMenu_c *v62; // x0
  BoostSupportRequestMenu_o *SupportRequestAllowed; // x0
  const MethodInfo *v64; // x3
  BoostEntity_array *v65; // x22
  System_Collections_Generic_List_int__o *v66; // x23
  __int64 v67; // x2
  __int64 v68; // x3
  int max_length; // w8
  unsigned int v70; // w19
  BoostEntity_o *v71; // x24
  int v72; // w8
  void *v73; // x24
  unsigned int v74; // w26
  __int64 v75; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  struct UserItemEntity_array **p_mUsrItemEntityList; // x25
  int32_t v80; // w26
  struct UserItemEntity_array *v81; // x20
  __int64 v82; // x1
  Il2CppObject *v83; // x27
  NetworkManager_c *v84; // x0
  int64_t userIdNumber; // x28
  __int64 Item; // x0
  __int64 v87; // x1
  UserItemEntity_o *EntityDefinitely; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  UserItemEntity_o *v92; // x27
  Il2CppClass **v93; // x0
  const MethodInfo *v94; // x4
  struct EventItemComponent_array *eventItemIconList; // x8
  EventItemComponent_o *v96; // x24
  struct EventItemComponent_array *v97; // x8
  EventItemComponent_o *v98; // x24
  struct EventItemComponent_array *v99; // x8
  EventItemComponent_o *v100; // x24
  BoostSupportRequestItemListViewManager_o *itemListViewManager; // x21
  BoostSupportRequestItemListViewManager_CallbackFunc_o *v102; // x22
  const MethodInfo *v103; // x3
  const MethodInfo *v104; // x2
  __int64 *v105; // x8
  _QWORD *v106; // x0
  System_Reflection_MethodBase_o *v107; // x0
  System_Action_o *v108; // x20
  const MethodInfo *v109; // x3
  __int64 v110; // x0
  BoostSupportRequestMenu_o *v111; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v112; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v113; // [xsp+30h] [xbp-90h] BYREF
  struct System_Collections_Generic_List_T__o *v114; // [xsp+50h] [xbp-70h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+58h] [xbp-68h] BYREF
  System_Nullable_int__o v116; // 0:x0.8
  System_Nullable_int__o v117; // 0:x0.8

  if ( (byte_4BF8164 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_1C2E12C(&Method_BoostSupportRequestMenu_EndOpen__, v11);
    sub_1C2E12C(&Method_BoostSupportRequestMenu_OnSelectItem__, v12);
    sub_1C2E12C(&Method_BoostSupportRequestMenu_Open__, v13);
    sub_1C2E12C(&BoostSupportRequestMenu_TypeInfo, v14);
    sub_1C2E12C(&BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo, v15);
    sub_1C2E12C(&Method_DataManager_GetMaster_CommonConsumeMaster___, v16);
    sub_1C2E12C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v17);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserItemMaster___, v18);
    sub_1C2E12C(&DataManager_TypeInfo, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v20);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v22);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__Contains__, v24);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v25);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int___ctor__, v26);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Count__, v27);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__get_Item__, v28);
    sub_1C2E12C(&System_Collections_Generic_List_int__TypeInfo, v29);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v30);
    sub_1C2E12C(&NetworkManager_TypeInfo, v31);
    sub_1C2E12C(&Method_System_Nullable_int__ToString__, v32);
    sub_1C2E12C(&Method_System_Nullable_int___ctor__, v33);
    sub_1C2E12C(&OptionManager_TypeInfo, v34);
    sub_1C2E12C(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v35);
    sub_1C2E12C(&UserItemEntity___TypeInfo, v36);
    sub_1C2E12C(&StringLiteral_3108/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/, v37);
    sub_1C2E12C(&StringLiteral_17834/*"btn_on"*/, v38);
    sub_1C2E12C(&StringLiteral_3109/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/, v39);
    sub_1C2E12C(&StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, v40);
    sub_1C2E12C(&StringLiteral_3115/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, v41);
    sub_1C2E12C(&StringLiteral_17668/*"boostDialogSubtitleId"*/, v42);
    sub_1C2E12C(&StringLiteral_3107/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, v43);
    sub_1C2E12C(&StringLiteral_17667/*"boostDialogOnOffButtonHide"*/, v44);
    sub_1C2E12C(&StringLiteral_3111/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, v45);
    sub_1C2E12C(&StringLiteral_17833/*"btn_off"*/, v46);
    byte_4BF8164 = 1;
  }
  v114 = 0LL;
  entity = 0LL;
  memset(&v113, 0, sizeof(v113));
  this->fields.callbackFunc = callback;
  sub_1C2E0D0(&this->fields.callbackFunc);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  this->fields.isBoostItemUseConfirm = OptionManager__GetBoostItemUseConfirm(0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_102;
  QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &entity, questId, questPhase, 0LL);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3115/*"BOOST_SUPPORT_REQUEST_USE_TITLE_SUPPORT_REQUEST"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_102;
  UILabel__set_text(titleLabel, (System_String_o *)Master_object, 0LL);
  if ( entity )
  {
    ScriptIntParam = QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_17668/*"boostDialogSubtitleId"*/, 0, 0LL);
    v116 = (System_Nullable_int__o)&v112;
    v112.fields._list = 0LL;
    System_Nullable_int____ctor(v116, ScriptIntParam, (const MethodInfo_3787F68 *)Method_System_Nullable_int___ctor__);
    list = v112.fields._list;
  }
  else
  {
    list = 0LL;
  }
  v117 = (System_Nullable_int__o)&v114;
  v114 = list;
  v52 = System_Nullable_int___ToString(v117, (const MethodInfo_3788078 *)Method_System_Nullable_int__ToString__);
  v53 = System_String__Concat_63235584((System_String_o *)StringLiteral_3109/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST_"*/, v52, 0LL);
  titleDetailLabel = this->fields.titleDetailLabel;
  v55 = v53;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v56 = LocalizationManager__ContainsKey(v55, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v57 = v56 ? v55 : (System_String_o *)StringLiteral_3108/*"BOOST_SUPPORT_REQUEST_USE_DETAIL_SUPPORT_REQUEST"*/;
  Master_object = LocalizationManager__Get(v57, 0LL);
  if ( !titleDetailLabel )
    goto LABEL_102;
  UILabel__set_text(titleDetailLabel, (System_String_o *)Master_object, 0LL);
  useConfirmOptionLabel = this->fields.useConfirmOptionLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3111/*"BOOST_SUPPORT_REQUEST_USE_OPTION_SUPPORT_REQUEST"*/, 0LL);
  if ( !useConfirmOptionLabel )
    goto LABEL_102;
  UILabel__set_text(useConfirmOptionLabel, (System_String_o *)Master_object, 0LL);
  decideLabel = this->fields.decideLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3107/*"BOOST_SUPPORT_REQUEST_USE_DECIDE"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_102;
  UILabel__set_text(decideLabel, (System_String_o *)Master_object, 0LL);
  cancelLabel = this->fields.cancelLabel;
  Master_object = LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_102;
  UILabel__set_text(cancelLabel, (System_String_o *)Master_object, 0LL);
  ScriptIntArrayParam = entity;
  if ( entity )
  {
    v62 = BoostSupportRequestMenu_TypeInfo;
    if ( !BoostSupportRequestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoostSupportRequestMenu_TypeInfo);
      v62 = BoostSupportRequestMenu_TypeInfo;
    }
    ScriptIntArrayParam = (QuestPhaseEntity_o *)QuestPhaseEntity__getScriptIntArrayParam(
                                                  ScriptIntArrayParam,
                                                  v62->static_fields->RECOMMENDED_ICON,
                                                  0LL,
                                                  0LL);
  }
  Master_object = SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
  if ( !Master_object )
    goto LABEL_102;
  SupportRequestAllowed = (BoostSupportRequestMenu_o *)BoostFunctionUtility__GetSupportRequestAllowed(
                                                         (BoostFunctionUtility_o *)Master_object,
                                                         questId,
                                                         questPhase,
                                                         0LL);
  v65 = BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
          SupportRequestAllowed,
          (BoostEntity_array *)SupportRequestAllowed,
          (System_Int32_array *)ScriptIntArrayParam,
          v64);
  v66 = (System_Collections_Generic_List_int__o *)sub_1C2E378(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v66,
    (const MethodInfo_364E034 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v65 )
    goto LABEL_102;
  max_length = v65->max_length;
  if ( max_length >= 1 )
  {
    v70 = 0;
    while ( 1 )
    {
      if ( v70 >= max_length )
        goto LABEL_103;
      v71 = v65->m_Items[v70];
      if ( !v71 )
        goto LABEL_102;
      if ( v71->fields.commonConsumeId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
        if ( !Master_object )
          goto LABEL_102;
        Master_object = CommonConsumeMaster__GetIdEntityList(
                          (CommonConsumeMaster_o *)Master_object,
                          v71->fields.commonConsumeId,
                          0LL);
        if ( !Master_object )
          goto LABEL_102;
        v72 = *((_DWORD *)Master_object + 6);
        v73 = Master_object;
        if ( v72 >= 1 )
          break;
      }
LABEL_54:
      max_length = v65->max_length;
      if ( (int)++v70 >= max_length )
        goto LABEL_55;
    }
    v74 = 0;
    while ( v74 < v72 )
    {
      v75 = *((_QWORD *)v73 + (int)v74 + 4);
      if ( !v75 )
        goto LABEL_102;
      if ( *(_DWORD *)(v75 + 24) == 1 )
      {
        if ( !v66 )
          goto LABEL_102;
        Master_object = (void *)System_Collections_Generic_List_int___Contains(
                                  v66,
                                  *(_DWORD *)(v75 + 28),
                                  (const MethodInfo_364EC00 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v48 = *(unsigned int *)(v75 + 28);
          items = v66->fields._items;
          v77 = Method_System_Collections_Generic_List_int__Add__;
          ++v66->fields._version;
          if ( !items )
            goto LABEL_102;
          size = v66->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v66,
              v48,
              *(const MethodInfo_364E888 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v66->fields._size = size + 1;
            items->m_Items[size + 1] = v48;
          }
        }
      }
      v72 = *((_DWORD *)v73 + 6);
      if ( (int)++v74 >= v72 )
        goto LABEL_54;
    }
LABEL_103:
    sub_1C2E390(Master_object, v48, v67, v68);
  }
LABEL_55:
  if ( !v66 )
    goto LABEL_102;
  Master_object = this->fields.eventItemsInfoBase;
  if ( !Master_object )
    goto LABEL_102;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v66->fields._size > 0, 0LL);
  this->fields.mUsrItemEntityList = (struct UserItemEntity_array *)sub_1C2E1D4(
                                                                     UserItemEntity___TypeInfo,
                                                                     (unsigned int)v66->fields._size);
  p_mUsrItemEntityList = &this->fields.mUsrItemEntityList;
  v111 = this;
  sub_1C2E0D0(&this->fields.mUsrItemEntityList);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v112,
    v66,
    (const MethodInfo_364F35C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v80 = 0;
  v113 = v112;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v113,
            (const MethodInfo_33FC0F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v81 = *p_mUsrItemEntityList;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v83 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserItemMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BF81D5 )
    {
      sub_1C2E12C(&NetworkManager_TypeInfo, v82);
      byte_4BF81D5 = 1;
    }
    v84 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v84 = NetworkManager_TypeInfo;
    }
    userIdNumber = v84->static_fields->userIdNumber;
    Item = System_Collections_Generic_List_int___get_Item(
             v66,
             v80,
             (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v83 )
      sub_1C2E388(Item, v87);
    EntityDefinitely = UserItemMaster__GetEntityDefinitely((UserItemMaster_o *)v83, userIdNumber, Item, 0LL);
    if ( !v81 )
      sub_1C2E388(EntityDefinitely, v89);
    v92 = EntityDefinitely;
    if ( EntityDefinitely )
    {
      EntityDefinitely = (UserItemEntity_o *)sub_1C2E268(EntityDefinitely, v81->obj.klass->_1.element_class);
      if ( !EntityDefinitely )
      {
        v110 = sub_1C2E3AC();
        sub_1C2E254(v110, 0LL);
      }
    }
    if ( v80 >= v81->max_length )
      sub_1C2E390(EntityDefinitely, v89, v90, v91);
    v93 = &v81->obj.klass + v80;
    v93[4] = (Il2CppClass *)v92;
    sub_1C2E0D0(v93 + 4);
    ++v80;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v113,
    (const MethodInfo_33FC0F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( v66->fields._size >= 1 )
  {
    eventItemIconList = v111->fields.eventItemIconList;
    if ( !eventItemIconList )
      goto LABEL_102;
    if ( !eventItemIconList->max_length )
      goto LABEL_103;
    v96 = eventItemIconList->m_Items[0];
    Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                              v66,
                              0,
                              (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v96 )
      goto LABEL_102;
    EventItemComponent__Set(v96, (int32_t)Master_object, 0LL);
    if ( v66->fields._size >= 2 )
    {
      v97 = v111->fields.eventItemIconList;
      if ( !v97 )
        goto LABEL_102;
      if ( v97->max_length <= 1 )
        goto LABEL_103;
      v98 = v97->m_Items[1];
      Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                v66,
                                1,
                                (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v98 )
        goto LABEL_102;
      EventItemComponent__Set(v98, (int32_t)Master_object, 0LL);
      if ( v66->fields._size >= 3 )
      {
        v99 = v111->fields.eventItemIconList;
        if ( !v99 )
          goto LABEL_102;
        if ( v99->max_length <= 2 )
          goto LABEL_103;
        v100 = v99->m_Items[2];
        Master_object = (void *)System_Collections_Generic_List_int___get_Item(
                                  v66,
                                  2,
                                  (const MethodInfo_364E598 *)Method_System_Collections_Generic_List_int__get_Item__);
        if ( !v100 )
          goto LABEL_102;
        EventItemComponent__Set(v100, (int32_t)Master_object, 0LL);
      }
    }
  }
  Master_object = v111->fields.itemListViewManager;
  if ( !Master_object )
    goto LABEL_102;
  BoostSupportRequestItemListViewManager__CreateList(
    (BoostSupportRequestItemListViewManager_o *)Master_object,
    v65,
    (System_Int32_array *)ScriptIntArrayParam,
    v111->fields.mUsrItemEntityList,
    v94);
  itemListViewManager = v111->fields.itemListViewManager;
  v102 = (BoostSupportRequestItemListViewManager_CallbackFunc_o *)sub_1C2E378(BoostSupportRequestItemListViewManager_CallbackFunc_TypeInfo);
  BoostSupportRequestItemListViewManager_CallbackFunc___ctor(
    v102,
    (Il2CppObject *)v111,
    (intptr_t)Method_BoostSupportRequestMenu_OnSelectItem__,
    v103);
  if ( !itemListViewManager )
    goto LABEL_102;
  BoostSupportRequestItemListViewManager__SetCallBack(itemListViewManager, v102, v104);
  Master_object = v111->fields.setupConfirmSprite;
  if ( !Master_object )
    goto LABEL_102;
  v105 = &StringLiteral_17833/*"btn_off"*/;
  if ( v111->fields.isBoostItemUseConfirm )
    v105 = &StringLiteral_17834/*"btn_on"*/;
  UISprite__set_spriteName((UISprite_o *)Master_object, (System_String_o *)*v105, 0LL);
  if ( entity && QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_17667/*"boostDialogOnOffButtonHide"*/, -1, 0LL) == 1 )
  {
    Master_object = v111->fields.setupConfirmSprite;
    if ( !Master_object )
      goto LABEL_102;
    Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    if ( !Master_object )
      goto LABEL_102;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  }
  if ( !isRetryBattle )
  {
    v106 = Method_BoostSupportRequestMenu_Open__;
    if ( (*((_BYTE *)Method_BoostSupportRequestMenu_Open__ + 83) & 2) != 0 )
      v106 = (_QWORD *)sub_1C2E144();
    v107 = (System_Reflection_MethodBase_o *)sub_1C2E110(v106, v106[4]);
    OverwriteAssetSoundName__PlaySystemSe(v107, 0, 0, 0LL);
  }
  Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v111, 0LL);
  if ( !Master_object )
LABEL_102:
    sub_1C2E388(Master_object, v48);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v111->fields.state = 1;
  v108 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v108, (Il2CppObject *)v111, Method_BoostSupportRequestMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)v111, v108, 0, v109);
}


BoostEntity_array *__fastcall BoostSupportRequestMenu__RearrangesRecommendedBoostFirst(
        BoostSupportRequestMenu_o *this,
        BoostEntity_array *boostEntityList,
        System_Int32_array *recommendedBoostIds,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  System_Collections_Generic_List_object__o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x24
  __int64 v19; // x25
  BoostEntity_o *v20; // x23
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x8
  System_Collections_Generic_List_object__o *v29; // x0
  System_Collections_Generic_List_object__o *v31; // x0

  if ( (byte_4BF8165 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Contains_int___, boostEntityList);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity__AddRange__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity__ToArray__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity___ctor__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BoostEntity__get_Count__, v10);
    sub_1C2E12C(&System_Collections_Generic_List_BoostEntity__TypeInfo, v11);
    byte_4BF8165 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BoostEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BoostEntity___ctor__);
  if ( !boostEntityList )
    goto LABEL_32;
  if ( !recommendedBoostIds || !*(_QWORD *)&recommendedBoostIds->max_length )
    return boostEntityList;
  if ( (int)*(_QWORD *)&boostEntityList->max_length >= 1 )
  {
    v18 = 0LL;
    v19 = (unsigned int)*(_QWORD *)&boostEntityList->max_length - 1LL;
    while ( 1 )
    {
      v20 = boostEntityList->m_Items[v18];
      if ( !v20 )
        goto LABEL_22;
      v14 = System_Linq_Enumerable__Contains_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)recommendedBoostIds,
              v20->fields.id,
              (const MethodInfo_2FE9D88 *)Method_System_Linq_Enumerable_Contains_int___);
      if ( (v14 & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_32;
        items = v13->fields._items;
        v22 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_32;
        size = v13->fields._size;
        if ( (unsigned int)size < items->max_length )
        {
          v24 = &items->obj.klass + size;
          v13->fields._size = size + 1;
LABEL_18:
          v24[4] = (Il2CppClass *)v20;
          v14 = sub_1C2E0D0(v24 + 4);
          goto LABEL_22;
        }
        v28 = v22[4];
        v29 = v13;
      }
      else
      {
        if ( !v12 )
          goto LABEL_32;
        v25 = v12->fields._items;
        v26 = Method_System_Collections_Generic_List_BoostEntity__Add__;
        ++v12->fields._version;
        if ( !v25 )
          goto LABEL_32;
        v27 = v12->fields._size;
        if ( (unsigned int)v27 < v25->max_length )
        {
          v24 = &v25->obj.klass + v27;
          v12->fields._size = v27 + 1;
          goto LABEL_18;
        }
        v28 = v26[4];
        v29 = v12;
      }
      System_Collections_Generic_List_object___AddWithResize(
        v29,
        (Il2CppObject *)v20,
        *(const MethodInfo_366B8AC **)(*(_QWORD *)(v28 + 192) + 112LL));
LABEL_22:
      if ( v19 == v18 )
        break;
      if ( ++v18 >= (unsigned __int64)boostEntityList->max_length )
        sub_1C2E390(v14, v15, v16, v17);
    }
  }
  if ( !v13 )
    goto LABEL_32;
  if ( v13->fields._size < 1 )
  {
    if ( v12 )
    {
      v31 = v12;
      return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                    v31,
                                    (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
    }
LABEL_32:
    sub_1C2E388(v14, v15);
  }
  System_Collections_Generic_List_object___AddRange(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)v12,
    (const MethodInfo_366BAB8 *)Method_System_Collections_Generic_List_BoostEntity__AddRange__);
  v31 = v13;
  return (BoostEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v31,
                                (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BoostEntity__ToArray__);
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

  if ( (byte_4BF8162 & 1) == 0 )
  {
    sub_1C2E12C(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_4BF8162 = 1;
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
    v9 = sub_1C6961C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1C2E648(v8);
  BoostSupportRequestMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall BoostSupportRequestMenu__get_closeBtnObject(
        BoostSupportRequestMenu_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4BF816C & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BF816C = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL);
  result = 0LL;
  if ( !v4 )
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

  if ( (byte_4BF8163 & 1) == 0 )
  {
    sub_1C2E12C(&BoostFunctionUtility_CallbackFunc_TypeInfo, value);
    byte_4BF8163 = 1;
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
    v9 = sub_1C6961C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoostSupportRequestMenu_o *)sub_1C2E648(v8);
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
    sub_1C2E388(0LL, method);
  callbackFunc = _4__this->fields.callbackFunc;
  p_callbackFunc = &_4__this->fields.callbackFunc;
  v5 = callbackFunc;
  *p_callbackFunc = 0LL;
  sub_1C2E0D0(p_callbackFunc);
  if ( callbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)this->fields.result,
      (unsigned int)this->fields.index,
      *(_QWORD *)&v5->fields.extra_arg);
}